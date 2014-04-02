#ifndef _MSC_VER
#error This code can be only compiled using Visual Studio
#endif

#pragma once

#include <WinSock2.h>
#include "plInterface.h"

#ifdef _DEBUG
# define CRTDBG_MAP_ALLOC
# include <stdlib.h>
# include <crtdbg.h>
#endif

#define _CRT_SECURE_NO_DEPRECATE 1
#define _ATL_SECURE_NO_DEPRECATE 1
#define _CRT_NON_CONFORMING_SWPRINTFS 1

#include "RSS.h"

#include <windows.h>
#include <windowsx.h>
#include <wininet.h>
#pragma comment(lib, "Wininet.lib")
#pragma comment(lib, "Ws2_32.lib")
#include <iostream>
#include "resource.h"
#include <CommCtrl.h>
#ifndef MY_RICHEDIT_NO_OLE
# include <gdiplus.h>
#endif

#include <string>
#include <stack>
#include <sstream>
#include <vector>
#include <hash_map>
using namespace std;
using namespace stdext;

#include <ctime>
#ifdef _USE_32BIT_TIME_T
# error You must use 64-bit time_t
#endif

#include "utlNews.h"

#ifdef WIN32
# pragma comment (lib,"Comctl32.lib")
# ifndef MY_RICHEDIT_NO_OLE
#  pragma comment (lib,"Gdiplus.lib")
# endif
#else
# pragma comment (lib,"Comctl64.lib")
# ifndef MY_RICHEDIT_NO_OLE
#  pragma comment (lib,"Gdiplus64.lib")
# endif
#endif

/// Free with delete []
static wchar_t* my_strdup(const unsigned char* str)
{
	int len = MultiByteToWideChar(CP_UTF8, 0, (char*)str, -1, NULL, 0);
	if(len<=0)
		return NULL;
	wchar_t* ret = new wchar_t[len+1];
	MultiByteToWideChar(CP_UTF8, 0, (char*)str, -1, ret, len);
	return ret;
}

static vector<wstring> split(wstring& list)
{
	vector<wstring> ret;
	if(list.size()>0)
	{
		size_t pos = 0;
		size_t found;
		while ((found = list.find(L"\r\n", pos)) != wstring::npos)
		{
			ret.push_back(list.substr(pos, found - pos));
			pos = found + 2;
		}
		ret.push_back(list.substr(pos));
	}
	return ret;
}

static void copyToClipboard(HWND hWnd, const wchar_t* str)
{
	if(OpenClipboard(hWnd) == TRUE)
	{
		EmptyClipboard();
		HGLOBAL clipbuffer = GlobalAlloc(GMEM_MOVEABLE|GMEM_SHARE, (wcslen(str)+1)<<1);
		wchar_t* buff = reinterpret_cast<wchar_t*>(GlobalLock(clipbuffer));
		lstrcpyW(buff, str);
		GlobalUnlock(clipbuffer);
		SetClipboardData(CF_UNICODETEXT, clipbuffer);
		CloseClipboard();
	}
}
