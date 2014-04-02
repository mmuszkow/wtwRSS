#pragma once

#include "stdinc.h"

namespace wtwRSS
{
	class RSSUpdater;

	static const wchar_t NO_TITLE[] = L"Brak tytułu";

	class RSSUpdaterThread
	{
		WTWFUNCTIONS*						wtw;
		RSSUpdater*							rssUpdater;

		static void getFeed(RSSUpdaterThread* updater, const RSS_char* feedurl, bool notify);
		static DWORD WINAPI updateThread(LPVOID arg);
		static void RSSCDECL error_handler(RSS_u32 error_level, const RSS_char* error, size_t pos);

		HANDLE	hThread;
		bool	shouldAbort;
		int		showTime;
		int		delayTime;
		bool	utlNewsAvailable;
	public:

		RSSUpdaterThread(WTWFUNCTIONS* fn, int _showTime, int _delayTime, RSSUpdater* rss) : 
		  wtw(fn), rssUpdater(rss), showTime(_showTime), hThread(NULL), 
			  shouldAbort(false), utlNewsAvailable(false), delayTime(_delayTime)
		{
			DWORD id;
			hThread = CreateThread(NULL, 0, updateThread, this, 0, &id);
		}

		inline void abort()
		{
			shouldAbort = true;
		}

		inline HANDLE getThreadHandle()
		{
			return hThread;
		}
	};

	class RSSUpdater
	{
	public:
		vector<RSS_Feed*>		feeds;
		hash_map<wstring, time_t>	newestNews;
		static int				lastShowTimeVal;

		void update(int showTime, int delayTime);
		static WTW_PTR notifyCallback(WTW_PARAM,WTW_PARAM,void*);
	};
};