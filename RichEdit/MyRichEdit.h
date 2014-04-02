#pragma once

#include "ImageDataObject.h"

namespace MyRichEdit
{
	class RichEdit
	{
		HWND			hRichEdit;
		bool			scrolledDown;
		CHARFORMAT		defaultCf;
#ifndef MY_RICHEDIT_NO_OLE
		// for images in RichEdit
		LPRICHEDITOLE	pRichEditOle;
		CImageDataObject imgDataObj;
#endif
		// static's for external lib loading
		static HMODULE	hRichEditLib;
		static ULONG_PTR gdiplusToken;

		// handles the html img tag
		void handleImg(std::wstring tag);

		// wnd procs
		static LRESULT CALLBACK ParentWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, 
			UINT_PTR uIdSubclass, DWORD_PTR dwRefData);
		static LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, 
			UINT_PTR uIdSubclass, DWORD_PTR dwRefData);

		inline static COLORREF rgb2bgr(COLORREF color)
		{
			return (((color & 0x000000FF) << 16) | (color & 0x0000FF00) | ((color & 0x00FF00FF) >> 16));
		}
	public:
		RichEdit();

		/// Must be called before using RichEdit
		static void libInit();
		static void libDeinit();

		void create(HWND hParent, int x, int y, int cx, int cy);
		void destroy();

		HWND getHwnd()
		{
			return hRichEdit;
		}

		bool scrollDown();
		bool scrollTop();
		bool isScrolledDown()
		{
			return scrolledDown;
		}

		void setFont(const wchar_t* fontName);
		void setBold(bool set);
		void setItalic(bool set);
		void setUnderline(bool set);
		void setFontColor(COLORREF color);
		void setBackgroundColor(COLORREF color);

		void RichEdit::setSpecial(COLORREF color, DWORD effects, float size);
		void setNormal();

		void addText(const wchar_t* text)
		{
			SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
			SendMessage(hRichEdit, EM_REPLACESEL, FALSE, reinterpret_cast<LPARAM>(text));
			scrolledDown = false;
		}
		void addHtml(const wchar_t* html);

		void clear()
		{
			SetWindowTextW(hRichEdit, L"");
			scrolledDown = true;
		}
	};
}; // namespace wndSimple
