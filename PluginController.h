#pragma once

#include "stdinc.h"
#include "RSSUpdater.h"
#include "RSSPanel.h"
#include "SoundsController.h"
#include "../common/Settings.h"
#include "SettingsConst.h"

namespace wtwRSS {

class SettingsPage; // forward
class ThreadManager; // forward

/** Singleton */
class PluginController
{
	// basic
	WTWFUNCTIONS*	wtw;
	HINSTANCE		hInst;
	HMODULE			hDll;

	SettingsPage*	settPage;
	wtwUtils::Settings*	sett;
	ThreadManager*	threadManager;
	RSSUpdater		rssUpdater;
	bool			panelVisible;
	static bool		dontCheck;

	HANDLE			hSession;

	// domyslny czas opoznienia pobrania kanalow po starcie/wznowieniu wtw
	static const int DEFAULT_DELAY_TIME = 30000;
	
	PluginController() : wtw(NULL), hInst(NULL), settPage(NULL), 
		threadManager(NULL), hDll(NULL), panelVisible(false), hSession(NULL),
		sett(NULL) {}
	PluginController(const PluginController&);
	static WTW_PTR onSettingsShow(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr);
	static WTW_PTR onTimer(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr);
	static WTW_PTR onPanelShow(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr);
	static WTW_PTR onUriCall(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr)
	{
		__LOG_F(PluginController::getInstance().getWTWFUNCTIONS(), WTW_LOG_LEVEL_ERROR, L"RSS ", L"TODO: implement uri call");
		return 0;
	}

	static WTW_PTR onSessionStateChanged(WTW_PARAM wParam, WTW_PARAM lParam, void *ptr);
public:
	RSSPanel		rssPanel;

	static PluginController& getInstance()
	{
		static PluginController instance;
		return instance;
	}

	int onLoad(WTWFUNCTIONS *fn);
	int onUnload();
	inline const WTWPLUGINFO* getPlugInfo()
	{
		static WTWPLUGINFO _plugInfo = {
			sizeof(WTWPLUGINFO),						// struct size
			L"RSS/Atom",								// plugin name
			L"RSS/Atom feed reader",					// plugin description
			L"© 2010-2014 Maciej Muszkowski",			// copyright
			L"Maciej Muszkowski",						// author
			L"maciek.muszkowski@gmail.com",				// authors contact
			L"http://www.alset.pl/Maciek",				// authors webpage
			L"",										// url to xml with autoupdate data
			PLUGIN_API_VERSION,							// api version
			MAKE_QWORD(0, 2, 0, 0),						// plugin version
			WTW_CLASS_FEED,								// plugin class
			NULL,										// function called after "O wtyczce..." pressed
			L"{e4ac22f9-8759-45a2-95b2-b90e4375fb91}",	// guid
			NULL,										// dependencies (list of guids)
			0, 0, 0, 0									// reserved
		};
		return &_plugInfo;
	}
	inline void setDllHINSTANCE(const HINSTANCE h)
	{
		hInst = h;
	}

	inline HINSTANCE getDllHINSTANCE() const
	{
		return hInst;
	}

	inline WTWFUNCTIONS* getWTWFUNCTIONS() const
	{
		return wtw;
	}

	inline ThreadManager* getThreadManager() const
	{
		return threadManager;
	}

	inline wtwUtils::Settings* getSettings() const {
		return sett;
	}

	void createPanel();
	void destroyPanel();
};

}; // namespace wtwRSS
