#include "stdinc.h"
#include "RSSUpdater.h"
#include "PluginController.h"
#include "SoundsController.h"
#include "ThreadManager.h"
#include "RSS_Html.h"
#include "Ping.h"

#include "../common/stringUtils.h"
using namespace strUtils;


extern "C" RSS_char* RSS_html_strip_tags(const RSS_char* str); // this is not visible in headers

namespace wtwRSS
{
	// czas wyswietlania powiadomienia pobierany jst tylko 1 raz z konfiguracji, przy update,
	// tutaj jest przechowywany dla watku
	int RSSUpdater::lastShowTimeVal = 5;

	void RSSUpdater::update(int showTime, int delayTime)
	{
		PluginController &plug = PluginController::getInstance();
		lastShowTimeVal = showTime;
		if(plug.getThreadManager()->getActiveCount() == 0)
			plug.getThreadManager()->start(new RSSUpdaterThread(plug.getWTWFUNCTIONS(), showTime, delayTime, this));
	}

	DWORD RSSUpdaterThread::updateThread(LPVOID arg)
	{
		RSSUpdaterThread *updater = reinterpret_cast<RSSUpdaterThread*>(arg); // TODO:  we cannot start another thread before previous finished

		/*if(updater->delayTime > 0) {
			int left = updater->delayTime;
			while(left > 0) {
				if(updater->shouldAbort)
					return 0;
				Sleep(100);
				left -= 100;
			}
		}*/

		if(!ping("www.google.pl")) // google.pl
			return -1;

		if(updater->wtw->fnExists(UTL_NEWS_ADD_ENTRY))
			updater->utlNewsAvailable = true;

		PluginController& plug = PluginController::getInstance();
		vector<wstring> list = split(plug.getSettings()->getWStr(config::FEEDS));
		for(unsigned int i=0;i<list.size();i+=2)
		{
			if(updater->shouldAbort)
				break;
			if(i+1 < list.size())
				getFeed(updater, list[i].c_str(), list[i+1] == L"1");
		}

		PluginController::getInstance().rssPanel.update(updater->rssUpdater->feeds);

		// clean, release feeds
		vector<RSS_Feed*>& feeds = updater->rssUpdater->feeds;
		for(unsigned int i=0;i<feeds.size();i++)
			RSS_free_feed(feeds[i]);
		feeds.clear();

		return 0;
	}

	void RSSUpdaterThread::error_handler(RSS_u32 error_level, const RSS_char* error, size_t pos)
	{
		if(error_level == RSS_EL_ERROR)
		{
			wtwTrayNotifyDef tray;
			tray.textMain = L"RSS error";
			tray.textLower = error;
			tray.iconId = WTW_GRAPH_ID_WARNING32;
			tray.flags = WTW_TN_FLAG_OVERRIDE_TIME;
			tray.showTime = RSSUpdater::lastShowTimeVal * 1000;
			tray.graphType = WTW_TN_GRAPH_TYPE_SKINID;
			PluginController::getInstance().getWTWFUNCTIONS()->fnCall(WTW_SHOW_STANDARD_NOTIFY, 
				reinterpret_cast<WTW_PARAM>(&tray), NULL);
			SoundsController::getInstance().playErrorSoundIfPossible();
		}
	}

	void RSSUpdaterThread::getFeed(RSSUpdaterThread* updater, const wchar_t* feedurl, bool notify)
	{
		if(!feedurl) return;

		HINTERNET hInternet = InternetOpenW(L"wtwRSS", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
		if(!hInternet) {
			error_handler(RSS_EL_ERROR, L"Could not get Internet handle", -1);
			return;
		}

		hostPortHttp hp = extractHostPortFromUrl(feedurl);
		HINTERNET hConn = InternetConnectW(hInternet, hp.host.c_str(), hp.port, 
			0, 0, INTERNET_SERVICE_HTTP, 0, 0);
		if(!hConn) {
			error_handler(RSS_EL_ERROR, FString<wchar_t>(L"Connection error %d", GetLastError()).c_str(), -1);
			InternetCloseHandle(hInternet);
			return;
		}

		HINTERNET hReq = HttpOpenRequestW(hConn, L"GET", hp.object.c_str() , HTTP_VERSION, 0, NULL, 
			hp.ssl ? INTERNET_FLAG_SECURE : 0, 0);
		if(!hReq) {			
			error_handler(RSS_EL_ERROR, FString<wchar_t>(L"Creating HTTP request error %d", GetLastError()).c_str(), -1);
			InternetCloseHandle(hConn);
			InternetCloseHandle(hInternet);
			return;
		}

		if(HttpSendRequest(hReq, NULL, 0, NULL, 0) != TRUE) {
			error_handler(RSS_EL_ERROR, FString<wchar_t>(L"Sending HTTP request error %d", GetLastError()).c_str(), -1);
			InternetCloseHandle(hReq);
			InternetCloseHandle(hConn);
			InternetCloseHandle(hInternet);
			return;
		}

		std::stringstream ss;
		DWORD bytesRead;
		char buff[4096];
		while(1) {
			if(InternetReadFile(hReq, buff, 4095, &bytesRead) == FALSE) {
				error_handler(RSS_EL_ERROR, FString<wchar_t>(L"Reading HTTP data error %d", GetLastError()).c_str(), -1);
				InternetCloseHandle(hReq);
				InternetCloseHandle(hConn);
				InternetCloseHandle(hInternet);
				return;
			}

			if(bytesRead > 0) {
				buff[bytesRead] = 0;
				ss << buff;
			} else
				break;
		}

		InternetCloseHandle(hReq);
		InternetCloseHandle(hConn);
		InternetCloseHandle(hInternet);

		RSS_Feed* feed = RSS_create_feed_from_str(convertEnc(ss.str()).c_str(), error_handler); // download page
		if(!feed) {
			updater->rssUpdater->feeds.push_back(NULL);
			return;
		}

		time_t lastTimeChecked = updater->rssUpdater->newestNews[feedurl];
		time_t newNewest = 0;
		updater->rssUpdater->feeds.push_back(feed);

		RSS_Item* item = feed->items;
		
		while(item)
		{
			if(item->pubDate <= lastTimeChecked) // show only news
			{
				item = item->next;
				continue;
			}

			newNewest = max(newNewest, item->pubDate);

			if(notify && (updater->showTime > 0))
			{
				wchar_t*	descPlain;
				wtwTrayNotifyDef tray;
				if(item->title)
					tray.textMain = item->title;
				else
					tray.textMain = NO_TITLE;
				if(item->description)
				{
					descPlain = RSS_html_strip_tags(item->description);
					tray.textLower = descPlain;
				}
				else
					descPlain = NULL;
				tray.flags = WTW_TN_FLAG_OVERRIDE_TIME;
				tray.showTime = updater->showTime * 1000;
				tray.iconId = L"Image/wtwRSS";
				tray.graphType = WTW_TN_GRAPH_TYPE_SKINID;

				if(item->link)
				{
					size_t linkSize = wcslen(item->link);
					if(linkSize > 0)
					{
						tray.callback = RSSUpdater::notifyCallback;
						tray.cbData = new wchar_t[linkSize+1];
						wcscpy_s(reinterpret_cast<wchar_t*>(tray.cbData), linkSize+1, item->link);
					}
				}
				
				updater->wtw->fnCall(WTW_SHOW_STANDARD_NOTIFY, reinterpret_cast<WTW_PARAM>(&tray), NULL);
				if(descPlain) // after RSS_html_decode
					free(descPlain);

				SoundsController::getInstance().playNotifySoundIfPossible();

				if(updater->utlNewsAvailable)
				{
					utlNewsEntry entry;
					if(item->guid)
						entry.itemId = item->guid;
					else
						entry.itemId = item->link;

					entry.title = item->title;
					entry.uri = item->link;
					entry.sourceName = feed->title;
					entry.newsTime = item->pubDate;
					entry.iconId = WTW_GRAPH_ID_NEWS;
					updater->wtw->fnCall(UTL_NEWS_ADD_ENTRY, reinterpret_cast<WTW_PARAM>(&entry), NULL);
				}
			}

			item = item->next;
		} // while(item)
		updater->rssUpdater->newestNews[feedurl] = max(newNewest, lastTimeChecked);
	}

	WTW_PTR RSSUpdater::notifyCallback(WTW_PARAM wP, WTW_PARAM lP, void* cbData)
	{
		wtwTrayNotifyEvent* pEvent = reinterpret_cast<wtwTrayNotifyEvent*>(wP);
		if(!cbData)
			return S_OK;

		switch(pEvent->event)
		{
		case WTW_TN_EVENT_LCLICKED:
			ShellExecuteW(0, L"open", reinterpret_cast<wchar_t*>(cbData), 0, 0, SW_SHOWNORMAL);
			return S_OK;
		case WTW_TN_EVENT_DESTROYED:
			delete [] reinterpret_cast<wchar_t*>(cbData);
			return S_OK;
		}

		return S_OK;
	}
}
