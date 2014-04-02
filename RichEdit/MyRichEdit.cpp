#include "stdinc.h"

#include "MyRichEdit.h"
#include "FastStrBuff.h"

namespace MyRichEdit
{
	HMODULE		RichEdit::hRichEditLib = NULL;
#ifndef MY_RICHEDIT_NO_OLE
	ULONG_PTR	RichEdit::gdiplusToken = 0L;
#endif

	RichEdit::RichEdit() : hRichEdit(NULL)
	{
		memset(&defaultCf, 0, sizeof(CHARFORMAT));
#ifndef MY_RICHEDIT_NO_OLE
		pRichEditOle = NULL; 
#endif

	}

	void RichEdit::handleImg(std::wstring tag)
	{
#ifndef MY_RICHEDIT_NO_OLE
		if(!pRichEditOle)
			return addText(L" [Obrazek] ");
		
		size_t srcStart = tag.find(L"src=\"");
		if(srcStart == std::wstring::npos)
			return addText(L" [Obrazek] ");
		
		size_t srcEnd = tag.find(L'\"', srcStart+5);
		if(srcEnd == std::wstring::npos)
			return addText(L" [Obrazek] ");

		std::wstring imgPath = tag.substr(srcStart+5, srcEnd-srcStart-5);
		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);

		Gdiplus::GpBitmap* image;
		Gdiplus::DllExports::GdipCreateBitmapFromFile(imgPath.c_str(), &image);
		if(!image)
			return addText(L" [Obrazek] ");
		HBITMAP hImg;
		Gdiplus::DllExports::GdipCreateHBITMAPFromBitmap(image, &hImg, 0xFFFFFFFF);
		if(hImg)
		{
			imgDataObj.InsertBitmap(pRichEditOle, hImg);
			DeleteObject(hImg);
		}
		Gdiplus::DllExports::GdipDisposeImage(image);
#else
		return addText(L" [Obrazek] ");
#endif
	}

	void RichEdit::libInit()
	{
		hRichEditLib = LoadLibraryW(L"Msftedit.dll");
#ifndef MY_RICHEDIT_NO_OLE
		Gdiplus::GdiplusStartupInput gdiplusStartupInput;
		Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, 0);
#endif
	}

	void RichEdit::libDeinit()
	{
		if(hRichEditLib)
			FreeLibrary(hRichEditLib);
#ifndef MY_RICHEDIT_NO_OLE
		Gdiplus::GdiplusShutdown(gdiplusToken);
#endif
	}

	void RichEdit::create(HWND hParent, int x, int y, int cx, int cy)
	{
		if(hRichEdit)
			return;
		hRichEdit = CreateWindowW(
			MSFTEDIT_CLASS, 0, WS_CHILD|WS_VISIBLE|WS_VSCROLL|ES_MULTILINE|ES_READONLY, 
			x, y, cx, cy, hParent, 0,
			GetModuleHandle(NULL), 0);

		SendMessage(hRichEdit, EM_AUTOURLDETECT, TRUE, 0);
#ifndef MY_RICHEDIT_NO_OLE
		SendMessage(hRichEdit, EM_GETOLEINTERFACE, 0, reinterpret_cast<LPARAM>(&pRichEditOle));
#endif
		LRESULT mask = SendMessage(hRichEdit, EM_GETEVENTMASK, 0, 0);
		SendMessage(hRichEdit, EM_SETEVENTMASK, 0, mask|ENM_LINK);

		defaultCf.cbSize = sizeof(CHARFORMAT);
		defaultCf.dwMask = CFM_ALL;

		SendMessage(hRichEdit, EM_GETCHARFORMAT, SCF_DEFAULT, reinterpret_cast<LPARAM>(&defaultCf));
		defaultCf.dwEffects = CFE_AUTOCOLOR;
		wcscpy_s(defaultCf.szFaceName, 32, L"Tahoma");
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_DEFAULT, reinterpret_cast<LPARAM>(&defaultCf));

		SetWindowSubclass(hRichEdit, RichEdit::WndProc, 
			0, reinterpret_cast<DWORD_PTR>(this));
		SetWindowSubclass(GetParent(hRichEdit), RichEdit::ParentWndProc, 
			0, reinterpret_cast<DWORD_PTR>(this));
		HideCaret(hRichEdit);
		scrolledDown = true;
	}

	void RichEdit::destroy()
	{
#ifndef MY_RICHEDIT_NO_OLE
		if(pRichEditOle)
			pRichEditOle->Release();
#endif
		RemoveWindowSubclass(GetParent(hRichEdit), RichEdit::ParentWndProc, 0);
		RemoveWindowSubclass(hRichEdit, RichEdit::WndProc, 0);
		if(hRichEdit)
			DestroyWindow(hRichEdit);
	}

	bool RichEdit::scrollDown()
	{
		if(SendMessage(hRichEdit, WM_VSCROLL, SB_BOTTOM, NULL) == 0)
		{
			scrolledDown = true;
			return true;
		}
		else
			return false;
	}

	bool RichEdit::scrollTop()
	{
		if(SendMessage(hRichEdit, WM_VSCROLL, SB_TOP, NULL) == 0)
		{
			scrolledDown = false;
			return true;
		}
		else
			return false;
	}

	void RichEdit::setBold(bool set)
	{
		CHARFORMAT cf;
		memset(&cf, 0, sizeof(CHARFORMAT));
		cf.cbSize = sizeof(CHARFORMAT);
		cf.dwMask = CFM_BOLD;
		if(set)
			cf.dwEffects |= CFE_BOLD;
		else
			cf.dwEffects &= ~CFE_BOLD;
		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
	}

	void RichEdit::setFont(const wchar_t* fontName)
	{
		CHARFORMAT cf;
		memset(&cf, 0, sizeof(CHARFORMAT));
		cf.cbSize = sizeof(CHARFORMAT);
		cf.dwMask = CFM_FACE;
		wcscpy_s(cf.szFaceName, LF_FACESIZE, fontName);
		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_DEFAULT, reinterpret_cast<LPARAM>(&cf));
	}

	void RichEdit::setItalic(bool set)
	{
		CHARFORMAT cf;
		memset(&cf, 0, sizeof(CHARFORMAT));
		cf.cbSize = sizeof(CHARFORMAT);
		cf.dwMask = CFM_ITALIC;
		if(set)
			cf.dwEffects |= CFE_ITALIC;
		else
			cf.dwEffects &= ~CFE_ITALIC;
		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
	}

	void RichEdit::setUnderline(bool set)
	{
		CHARFORMAT cf;
		memset(&cf, 0, sizeof(CHARFORMAT));
		cf.cbSize = sizeof(CHARFORMAT);
		cf.dwMask = CFM_UNDERLINE;
		if(set)
			cf.dwEffects |= CFE_UNDERLINE;
		else
			cf.dwEffects &= ~CFE_UNDERLINE;
		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
	}

	void RichEdit::setFontColor(COLORREF color)
	{
		CHARFORMAT cf;
		memset(&cf, 0, sizeof(CHARFORMAT));
		cf.cbSize = sizeof(CHARFORMAT);
		cf.dwMask = CFM_COLOR;
		cf.crTextColor = rgb2bgr(color);
		defaultCf.crTextColor = cf.crTextColor;
		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
	}

	void RichEdit::setBackgroundColor(COLORREF color)
	{
		SendMessage(hRichEdit, EM_SETBKGNDCOLOR, 0, static_cast<LPARAM>(rgb2bgr(color)));
	}

	void RichEdit::setSpecial(COLORREF color, DWORD effects, float size)
	{
		CHARFORMAT cf;
		memset(&cf, 0, sizeof(CHARFORMAT));
		cf.cbSize = sizeof(CHARFORMAT);
		cf.dwMask = CFM_BOLD|CFM_ITALIC|CFM_UNDERLINE|CFM_SIZE|CFM_COLOR;
		cf.crTextColor = color;
		cf.dwEffects = effects;
		cf.yHeight = static_cast<int>(size * defaultCf.yHeight);

		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
	}

	void RichEdit::setNormal()
	{
		CHARFORMAT cf;
		memset(&cf, 0, sizeof(CHARFORMAT));
		cf.cbSize = sizeof(CHARFORMAT);
		cf.dwMask = CFM_BOLD|CFM_ITALIC|CFM_UNDERLINE|CFM_SIZE|CFM_COLOR;
		cf.dwEffects = CFE_AUTOCOLOR;
		cf.yHeight = defaultCf.yHeight;

		SendMessage(hRichEdit, EM_SETSEL, 0xFFFFFFF, 0xFFFFFFF);
		SendMessage(hRichEdit, EM_SETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
	}

	void RichEdit::addHtml(const wchar_t* html)
	{
		size_t i = 0, j, len = wcslen(html);
		FastStrBuff tmp;
		bool insideTag = false;

		while(i < len)
		{
			switch(html[i])
			{
			case L'\r':
			case L'\n':
				break;
			case L'<':
				if(tmp.size() > 0)
				{
					addText(tmp.c_str());
					tmp.clear();
				}
				insideTag = true;
				break;
			case L'>':
				insideTag = false;
				if(tmp.equalIC(L"b"))
					setBold(true);
				else if(tmp.equalIC(L"/b"))
					setBold(false);
				else if(tmp.equalIC(L"i"))
					setItalic(true);
				else if(tmp.equalIC(L"/i"))
					setItalic(false);
				else if(tmp.equalIC(L"u"))
					setUnderline(true);
				else if(tmp.equalIC(L"/u"))
					setUnderline(false);
				else if(tmp.equalIC(L"br") || tmp.equalIC(L"br/") || tmp.equalIC(L"br /"))
				{
					addText(L"\r\n");
					setFontColor(defaultCf.crTextColor);
				}
				else if(tmp.size() > 4)
				{
					std::wstring tag = tmp.firstChars(3);
					if(tag == L"img" || tag == L"IMG")
						handleImg(tmp.c_str());
				}
				tmp.clear();
				break;
			case L'&':
				if(insideTag)
				{
					tmp.push_back(html[i]); // it's tag, don't care
					break;
				}
				if(len > i + 3)
				{
					// &lt;
					if(html[i+1] == L'l' && html[i+2] == L't' && html[i+3] == L';')
					{
						addText(tmp.c_str());
						tmp.clear();
						addText(L"<");
						i += 3;
						break;
					}
					// &gt;
					else if(html[i+1] == L'g' && html[i+2] == L't' && html[i+3] == L';')
					{
						addText(tmp.c_str());
						tmp.clear();
						addText(L">");
						i += 3;
						break;
					}
				}
				if(len > i + 4)
				{
					// &amp;
					if(html[i+1] == L'a' && html[i+2] == L'm' && html[i+3] == L'p' && html[i+4] == L';')
					{
						addText(tmp.c_str());
						tmp.clear();
						addText(L"&");
						i += 4;
						break;
					}
				}
				if(len > i + 5)
				{
					// &quot;
					if(html[i+1] == L'q' && html[i+2] == L'u' && html[i+3] == L'o' && html[i+4] == L't' && html[i+5] == L';')
					{
						addText(tmp.c_str());
						tmp.clear();
						addText(L"\"");
						i += 5;
						break;
					} 
					// &nbsp;
					else if(html[i+1] == L'n' && html[i+2] == L'b' && html[i+3] == L's' && html[i+4] == L'p' && html[i+5] == L';')
					{
						addText(tmp.c_str());
						tmp.clear();
						addText(L" ");
						i += 5;
						break;
					}
					// &apos;
					else if(html[i+1] == L'a' && html[i+2] == L'p' && html[i+3] == L'o' && html[i+4] == L's' && html[i+5] == L';')
					{
						addText(tmp.c_str());
						tmp.clear();
						addText(L"'");
						i += 5;
						break;
					}
				}
				// &#xxxx;
				if(len > i + 6 && html[i+1] == L'#' && html[i+6] == L';')
				{
					wchar_t hex[4];
					bool valid = true;
					for(j=0; j<4; j++)
					{
						hex[j] = html[i+j+2];
						if(hex[j] < L'0' || hex[j] > L'9')
						{
							valid = false;
							break;
						}
						hex[j] -= 0x30;
					}
					addText(tmp.c_str());
					tmp.clear();
					if(valid)
					{
						wchar_t letter[2] = {0,0};
						letter[0] = hex[0]*1000 + hex[1]*100 + hex[2]*10 + hex[3];
						addText(letter);
					}
					i += 6;
					break;
				}
				tmp.push_back(html[i]); // if & not for special char
				break;
			default:
				tmp.push_back(html[i]);
			}
			i++;
		}
		if(tmp.size() > 0)
			addText(tmp.c_str());
	}

	LRESULT RichEdit::ParentWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, 
		UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
	{
		if(msg==WM_NOTIFY && (((LPNMHDR)lParam)->code)== EN_LINK)
		{
			ENLINK* enLinkInfo = (ENLINK *)lParam;
			if(enLinkInfo->msg == WM_LBUTTONUP || enLinkInfo->msg == WM_RBUTTONUP)
			{
				LONG utlBeg = enLinkInfo->chrg.cpMin;
				LONG utlEnd = enLinkInfo->chrg.cpMax;
				if(utlEnd - utlBeg > 0)
				{
					HWND hRichEdit = enLinkInfo->nmhdr.hwndFrom;
					wchar_t* urlString = new wchar_t[utlEnd-utlBeg+1];
					SendMessageW(hRichEdit, EM_EXSETSEL, 0, reinterpret_cast<LPARAM>(&enLinkInfo->chrg));
					SendMessageW(hRichEdit, EM_GETSELTEXT, 0, reinterpret_cast<LPARAM>(urlString));
					switch(enLinkInfo->msg)
					{
					case WM_LBUTTONUP:
						ShellExecuteW(NULL, L"open", urlString, NULL, NULL, SW_SHOWNORMAL);
						break;
					case WM_RBUTTONUP:
						copyToClipboard(hRichEdit, urlString);
						break;
					}
					delete [] urlString;
					SendMessage(hRichEdit, EM_SETSEL, utlEnd, utlEnd);
					HideCaret(hRichEdit);			
				}
			}
		}
		return DefSubclassProc(hWnd, msg, wParam, lParam);
	}

	LRESULT RichEdit::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, 
		UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
	{
		if(msg == WM_LBUTTONUP)
			HideCaret(hWnd);
		else if(msg == WM_RBUTTONDOWN)
		{
			CHARFORMAT cf;
			memset(&cf, 0, sizeof(CHARFORMAT));
			cf.dwMask = CFM_LINK;
			SendMessage(hWnd, EM_GETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
			if(!(cf.dwEffects & CFE_LINK))
			{
				DWORD selBeg, selEnd;
				SendMessageW(hWnd, EM_GETSEL, (WPARAM)&selBeg, (LPARAM)&selEnd);
				if(selEnd-selBeg > 0)
				{
					wchar_t* urlString = new wchar_t[selEnd-selBeg+1];
					SendMessageW(hWnd, EM_GETSELTEXT, 0, reinterpret_cast<LPARAM>(urlString));
					copyToClipboard(hWnd, urlString);
					delete [] urlString;
					SendMessageW(hWnd, EM_SETSEL, selEnd, selEnd);
				}
			}
			HideCaret(hWnd);
		}
		return DefSubclassProc(hWnd, msg, wParam, lParam);
	}
};
