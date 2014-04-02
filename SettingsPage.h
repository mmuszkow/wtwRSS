#pragma once

#include "stdinc.h"
#include "PluginController.h"

namespace wtwRSS
{
	class SettingsPage
	{
		HWND		hPanel;

		struct addNewRet
		{
			wchar_t	url[1024];
			int		notify; // TRUE or FALSE
		};

		static INT_PTR CALLBACK AddNewProc(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam);
		static void add(HWND hDlg);
		static void remove(HWND hDlg);
		static INT_PTR CALLBACK DlgProc(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam);
		
	public:
		SettingsPage(HWND hParent, HINSTANCE hInst);

		~SettingsPage()
		{
			DestroyWindow(hPanel);
		}

		inline void show() 
		{
			ShowWindow(hPanel,SW_SHOW);
		}

		inline void hide() 
		{
			ShowWindow(hPanel,SW_HIDE);
		}

		inline void move(int x, int y, int cx, int cy) 
		{
			MoveWindow(hPanel, x, y, cx, cy, TRUE);
		}

		void apply() ;
		void cancel() {}
	};
};