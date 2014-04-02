#include "stdinc.h"
#include "PluginController.h"
#include "ThreadManager.h"
#include "wtwInputWindows.h"
#include "SettingsPage.h"

namespace wtwRSS
{
	int PluginController::onLoad(WTWFUNCTIONS *fn)
	{
#ifdef _DEBUG
		_CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
#endif

		wtw = fn;

		MyRichEdit::RichEdit::libInit();
		sett = new wtwUtils::Settings(wtw, hInst);
		sett->read();
		
		threadManager = new ThreadManager(wtw);

		wtwGraphics wg;
		wg.graphId = L"Image/wtwRSS";
		wg.resourceId = MAKEINTRESOURCE(IDB_RSS16);
		wg.hInst = hInst;     
		wtw->fnCall(WTW_GRAPH_LOAD, wg, 0);

		wtwOptionPageDef pg;
		pg.id = L"wtwRSS";
		pg.parentId = WTW_OPTIONS_GROUP_PLUGINS;
		pg.caption = L"RSS";
		pg.iconId = L"Image/wtwRSS";
		pg.callback = onSettingsShow; 
		pg.cbData = this;
		if(wtw->fnCall(WTW_OPTION_PAGE_ADD, reinterpret_cast<WTW_PARAM>(hInst), pg) != TRUE) {
			//__LOG_F(wtw, WTW_LOG_LEVEL_ERROR, L"RSS ", L"Cannot add settings page, plugin won't start");
			//return -1;
		}

		if(sett->getInt(config::SHOW_PANEL, 1) == 1) createPanel();

		wtwTimerDef timerDef;
		timerDef.id = L"wtwRSS/feedRefreshTimer";
		timerDef.sleepTime = 300000; // 5 min
		timerDef.callback = onTimer;

		if(wtw->fnCall(WTW_TIMER_CREATE, timerDef, NULL) != S_OK) {
			__LOG_F(wtw, WTW_LOG_LEVEL_ERROR, L"RSS ", L"Cannot create feed refresh timer, plugin won't start");
			return -1;
		}

		wtwSchemeBinding scheme;
		scheme.uriScheme = L"feed";
		scheme.callback = onUriCall;
		wtw->fnCall(WTW_SCHEME_REGISTER, scheme, 0); // zwraca S_OK

		hSession = wtw->evHook(WTW_EVENT_SESSION_PARAMS_CHANGE, onSessionStateChanged, NULL);

		SoundsController::getInstance().init(wtw);

		return 0;
	}

	int PluginController::onUnload()
	{
		if(hSession)
			wtw->evUnhook(hSession);

		wtw->fnCall(WTW_SCHEME_UNREGISTER, reinterpret_cast<WTW_PARAM>(L"feed"), 0);

		wtw->fnCall(WTW_OPTION_PAGE_REMOVE, reinterpret_cast<WTW_PARAM>(hInst), reinterpret_cast<WTW_PARAM>(L"wtwRSS"));
		destroyPanel();		
		
		wtw->fnCall(WTW_TIMER_DESTROY, reinterpret_cast<WTW_PARAM>(L"wtwRSS/feedRefreshTimer"), 0);

		if(settPage) delete settPage;
		if(threadManager) delete threadManager;
		MyRichEdit::RichEdit::libDeinit();
		if(sett) delete sett;

		return 0;
	}

	WTW_PTR PluginController::onSettingsShow(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr)
	{
		PluginController* plugInst = static_cast<PluginController*>(ptr);
		wtwOptionPageShowInfo* info = reinterpret_cast<wtwOptionPageShowInfo*>(wParam);

		wcscpy(info->windowCaption, L"RSS");
		wcscpy(info->windowDescrip, L"Czytnik kanałów RSS");

		if (!plugInst->settPage)
			plugInst->settPage = new SettingsPage(info->handle,plugInst->hInst);

		switch (info->action)
		{
		case WTW_OPTIONS_PAGE_ACTION_SHOW:
			plugInst->settPage->show();
			plugInst->settPage->move(info->x, info->y, info->cx, info->cy);
			return 0;
		case WTW_OPTIONS_PAGE_ACTION_MOVE:
			plugInst->settPage->move(info->x, info->y, info->cx, info->cy);
			return 0;
		case WTW_OPTIONS_PAGE_ACTION_HIDE:
			plugInst->settPage->hide();
			return 0;
		case WTW_OPTIONS_PAGE_ACTION_CANCEL:
			plugInst->settPage->cancel();
			delete plugInst->settPage;
			plugInst->settPage = NULL;
			return 0;
		case WTW_OPTIONS_PAGE_ACTION_APPLY:
			plugInst->settPage->apply();
			return 0;
		case WTW_OPTIONS_PAGE_ACTION_OK:
			plugInst->settPage->apply();
			delete plugInst->settPage;
			plugInst->settPage = NULL;
			PluginController::getInstance().rssUpdater.update(0, 100);
			return 0;
		}

		return 0;
	}

	WTW_PTR PluginController::onTimer(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr)
	{
		wtwTimerEvent* ev = reinterpret_cast<wtwTimerEvent*>(wParam);
		PluginController& plug = PluginController::getInstance();
		switch(ev->event)
		{
		case WTW_TIMER_EVENT_CREATED:
			{
				plug.rssUpdater.update(0, DEFAULT_DELAY_TIME); // 5 sek zeby nie opozniac startu
				return 0;
			}
		case WTW_TIMER_EVENT_TICK:
			{
				if(!dontCheck)
					plug.rssUpdater.update(plug.sett->getInt(
					config::NOTIFY_TIME, config::DEFAULT_NOTIFY_TIME), 0);
				return 0;
			}
		default: return 0;
		}
	}

	WTW_PTR PluginController::onPanelShow(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr)
	{
		wtwPanelEvent* ev = reinterpret_cast<wtwPanelEvent*>(wParam);
		PluginController& plug = PluginController::getInstance();
		switch(ev->event)
		{
		case WTW_PANEL_EVENT_SHOW:
			plug.rssPanel.show();
			return 0;
		case WTW_PANEL_EVENT_HIDE:
			plug.rssPanel.hide();
			return 0;
		case WTW_PANEL_EVENT_MOVE:
			plug.rssPanel.move(ev->rc);
			return 0;
		case WTW_PANEL_EVENT_ADDED:
			plug.rssPanel.create(PluginController::getInstance().wtw, ev->hParent, ev->rc);
			return 0;
		case WTW_PANEL_EVENT_DELETED:
			plug.rssPanel.destroy();
			return 0;
		}
		return 0;
	}

	void PluginController::createPanel()
	{
		if(!panelVisible)
		{
			wtwPanelDef panel;
			panel.panelId = L"wtwRSS";
			panel.panelHint = L"RSS";
			panel.panelIcon = L"Image/wtwRSS";
			panel.callback = onPanelShow;
			panel.cbData = this;
			wtw->fnCall(WTW_PANEL_ADD, panel, 0);
			panelVisible = true;
		}
	}

	void PluginController::destroyPanel()
	{
		if(panelVisible)
		{
			wtwPanelDef panel;
			panel.panelId = L"wtwRSS";
			wtw->fnCall(WTW_PANEL_DEL, panel, 0);
			panelVisible = false;
		}
	}

	bool PluginController::dontCheck = false;
	
	WTW_PTR PluginController::onSessionStateChanged(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr)
	{
		switch(wParam)
		{
		case SPC_SESSION_END: // nie sprawdzamy jak zamykamy system
		case SPC_LID_CLOSED: // jak pokrywa zamknieta
		case SPC_SESSION_SUSPEND: // lub jak zahibernowany
			dontCheck = true;
			break;
		case SPC_SESSION_RESUME_INTERACTIVE: // przywracamy sprawdzanie jak powrot z hibernacji
		case SPC_LID_OPENED: // lub otworzenie pokrywy
			dontCheck = false;
			PluginController::getInstance().rssUpdater.update(0, DEFAULT_DELAY_TIME); // 30 sek na przywrocenie polaczenia itp
		}
		return 0;
	}
};
