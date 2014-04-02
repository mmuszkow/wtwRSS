#pragma once

#include "stdinc.h"
#include "RichEdit\MyRichEdit.h"

namespace wtwRSS 
{
	class RSSPanel
	{
		HWND			hPanel;
		HWND			hTree;
		HIMAGELIST		hImageList;
		WTWFUNCTIONS*	wtw;

		COLORREF		fontColor;
		COLORREF		bkColor;

		MyRichEdit::RichEdit	richEdit;
		static const int PREVIEW_H = 150;
		
		static const int NORMNODE = 0; // this is not enum to avoid casting
		static const int LINKNODE = 1;
		static const int FEEDNODE = 2;

		static LRESULT CALLBACK treeParentProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData);
		static LRESULT CALLBACK treeProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData);

		static COLORREF ARGB2BGR(COLORREF color);
	public:
		RSSPanel() : wtw(NULL) {}
		RSSPanel(WTWFUNCTIONS* fn) : wtw(fn) {}

		void create(WTWFUNCTIONS* fn, HWND hParent, RECT r);

		inline void destroy()
		{
			DestroyWindow(hPanel);
			ImageList_Destroy(hImageList);
		}

		inline void show()
		{
			ShowWindow(hPanel, SW_SHOW);
		}

		inline void hide()
		{
			ShowWindow(hPanel, SW_HIDE);
		}

		inline void setHtml(const wchar_t* html)
		{
			richEdit.clear(); // clears formatting
			richEdit.setFontColor(fontColor);
			richEdit.addHtml(html);
		}

		inline void move(RECT r)
		{
			MoveWindow(hTree, 0, 0, r.right-r.left, r.bottom-r.top-PREVIEW_H, true);
			MoveWindow(richEdit.getHwnd(), 0, r.bottom-r.top-PREVIEW_H, r.right-r.left, PREVIEW_H, true);
			MoveWindow(hPanel, r.left, r.top, r.right-r.left, r.bottom-r.top, false);
		}

		void update(vector<RSS_Feed*>& feeds);
	};
};
