#include "stdinc.h"
#include "RSSPanel.h"
#include "PluginController.h"

namespace wtwRSS
{
	LRESULT CALLBACK RSSPanel::treeParentProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
	{
		if(msg == WM_NOTIFY)
		{
			switch(((LPNMHDR)lParam)->code)
			{
				case NM_CUSTOMDRAW:
				{
					LPNMTVCUSTOMDRAW pTVCD = reinterpret_cast<LPNMTVCUSTOMDRAW>(lParam);
					switch(pTVCD->nmcd.dwDrawStage)
					{
						case CDDS_PREPAINT:
							if(pTVCD->nmcd.lItemlParam == NORMNODE)
								return CDRF_NOTIFYITEMDRAW;
						case CDDS_ITEMPREPAINT:
							if(pTVCD->nmcd.lItemlParam == LINKNODE)
								pTVCD->clrText = GetSysColor(COLOR_HOTLIGHT);
							return CDRF_NEWFONT;
					}
					break;
				}
				case TVN_SELCHANGED:
				{
					LPNMTREEVIEW pTV = reinterpret_cast<LPNMTREEVIEW>(lParam);
					RSSPanel* panel = reinterpret_cast<RSSPanel*>(dwRefData);
					wchar_t src[1025] = {0};
					
					TVITEM tvi;
					tvi.mask=TVIF_TEXT;
					tvi.pszText=src;
					tvi.cchTextMax=1024;
					tvi.hItem=pTV->itemNew.hItem;
					SendMessage(panel->hTree, TVM_GETITEM, TVGN_CARET, (LPARAM)&tvi);

					panel->setHtml(src);
				}
			}
		}
		return DefSubclassProc(hWnd, msg, wParam, lParam);
	}

	LRESULT CALLBACK RSSPanel::treeProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
	{
		if(msg == WM_LBUTTONDBLCLK)
		{
			HTREEITEM hItem = TreeView_GetSelection(hWnd);
			if(hItem != NULL)
			{
				TVITEM	item;
				item.hItem = hItem;
				item.mask = LVIF_PARAM;
				TreeView_GetItem(hWnd, &item);
				if(item.lParam == LINKNODE)
				{
					item.mask = LVIF_TEXT;
					item.pszText = new wchar_t[512];
					item.cchTextMax = 511;
					item.pszText[0] = 0;
					TreeView_GetItem(hWnd, &item);
					ShellExecute(hWnd, L"open", item.pszText, 0, 0, SW_SHOWNORMAL);
					delete [] item.pszText;
				}
			}
		}
		// doesn't work anyway ...
		/*else if(msg == WM_NOTIFY && ((LPNMHDR)lParam)->code == TTN_GETDISPINFO)
		{
			SendMessage(((LPNMHDR)lParam)->hwndFrom, TTM_SETMAXTIPWIDTH, 0, 100);
			return TRUE;
		}*/
		return DefSubclassProc(hWnd, msg, wParam, lParam);
	}

	COLORREF RSSPanel::ARGB2BGR(COLORREF color)
	{
		COLORREF r = color & 0x00FF0000;
		COLORREF g = color & 0x0000FF00;
		COLORREF b = color & 0x000000FF;
		return (b << 16) | g | (r >> 16);
	}

	void RSSPanel::create(WTWFUNCTIONS* fn, HWND hParent, RECT r)
	{
		wtw = fn;
		hPanel = CreateWindow(WC_STATIC, 0, WS_CHILD, 
			r.left,r.top,r.right-r.left,r.bottom-r.top,
			hParent,NULL,NULL,NULL);

		fontColor = static_cast<COLORREF>(wtw->fnCall(WTW_GET_THEME_COLOR, THEME_COLOR_CONTACT_NORMAL_TEXT, 0));
		bkColor = static_cast<COLORREF>(wtw->fnCall(WTW_GET_THEME_COLOR, THEME_COLOR_CONTACT_LIST_BG, 0));

		richEdit.create(hPanel, 0,r.bottom-r.top-PREVIEW_H,r.right-r.left, PREVIEW_H);
		richEdit.setFontColor(fontColor);
		richEdit.setBackgroundColor(bkColor);

		hTree = CreateWindow(WC_TREEVIEW,0,
			WS_CHILD|WS_VISIBLE|
			TVS_HASBUTTONS|
			TVS_LINESATROOT|
			TVS_FULLROWSELECT|
			TVS_INFOTIP,
			0,0,r.right-r.left,r.bottom-r.top-PREVIEW_H,
			hPanel,NULL,NULL,NULL);
		TreeView_SetExtendedStyle(hTree, 
			TVS_EX_DOUBLEBUFFER, 
			TVS_EX_DOUBLEBUFFER);		

		hImageList = ImageList_Create(16, 16, ILC_COLOR32, 3, 0);
		HINSTANCE hInst = PluginController::getInstance().getDllHINSTANCE();
		HICON hIcon = LoadIcon(hInst, MAKEINTRESOURCE(IDI_CHANNEL));
		ImageList_AddIcon(hImageList, hIcon);
		hIcon = LoadIcon(hInst, MAKEINTRESOURCE(IDI_ITEM));
		ImageList_AddIcon(hImageList, hIcon);
		hIcon = LoadIcon(hInst, MAKEINTRESOURCE(IDI_LINK));
		ImageList_AddIcon(hImageList, hIcon);
		TreeView_SetImageList(hTree, hImageList, TVSIL_NORMAL);
		TreeView_SetTextColor(hTree, ARGB2BGR(fontColor));
		TreeView_SetBkColor(hTree, ARGB2BGR(bkColor));

		SendMessage(richEdit.getHwnd(), EM_SETBKGNDCOLOR, 0, ARGB2BGR(bkColor));

		SetWindowSubclass(hTree, treeProc, 0, 0);
		SetWindowSubclass(hPanel, treeParentProc, 0, reinterpret_cast<DWORD_PTR>(this));
	}

	void RSSPanel::update(vector<RSS_Feed*>& feeds)
	{
		wstring		str;
		RSS_Item*	item;

		TVINSERTSTRUCT tvins;
		tvins.hInsertAfter = TVI_LAST;
		tvins.item.lParam = NULL;

		TreeView_DeleteAllItems(hTree);
		for(unsigned int i=0; i<feeds.size(); i++)
		{
			// insert channel title
			tvins.item.mask = TVIF_TEXT | TVIF_IMAGE | TVIF_SELECTEDIMAGE | TVIF_PARAM | TVIF_STATE;
			tvins.item.iImage = 0;
			tvins.item.iSelectedImage = 0;
			if(!feeds[i]) 
			{
				tvins.item.pszText = L"Błąd pobierania";
				tvins.item.cchTextMax = wcslen(L"Błąd pobierania");
				tvins.item.iImage = 3;
				tvins.item.iSelectedImage = 3;
			}
			else if(feeds[i]->title)
			{
				tvins.item.pszText = feeds[i]->title;
				tvins.item.cchTextMax = wcslen(feeds[i]->title);
			}
			else
			{
				tvins.item.pszText = L"Brak tytułu";
				tvins.item.cchTextMax = wcslen(L"Brak tytułu");
			}
			tvins.hParent = TVI_ROOT;
			tvins.item.stateMask = TVIS_EXPANDED;
			tvins.item.state = TVIS_EXPANDED;
			HTREEITEM hChannel = reinterpret_cast<HTREEITEM>(SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins));

			if(!feeds[i]) continue;

			// insert channel info
			tvins.item.mask = TVIF_TEXT | TVIF_PARAM;
			tvins.hParent = hChannel;
			if(feeds[i]->description)
			{
				tvins.item.pszText = feeds[i]->description;
				tvins.item.cchTextMax = wcslen(feeds[i]->description);
				SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
			}

			if(feeds[i]->link)
			{
				tvins.item.pszText = feeds[i]->link;
				tvins.item.cchTextMax = wcslen(feeds[i]->link);
				tvins.item.lParam = LINKNODE;
				tvins.item.mask |= TVIF_IMAGE|TVIF_SELECTEDIMAGE;
				tvins.item.iImage = 2;
				tvins.item.iSelectedImage = 2;
				SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
				
				tvins.item.lParam = NORMNODE;
				tvins.item.mask &= ~(TVIF_IMAGE|TVIF_SELECTEDIMAGE);
			}

			if(feeds[i]->category)
			{
				str = RSS_text("Kategoria: ");
				str += feeds[i]->category;
				tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
				tvins.item.cchTextMax = str.size();
				SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
			}

			if(feeds[i]->copyright)
			{
				str = RSS_text("Prawa autorskie: ");
				str += feeds[i]->copyright;
				tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
				tvins.item.cchTextMax = str.size();
				SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
			}

			if(feeds[i]->language)
			{
				str = RSS_text("Język: ");
				str += feeds[i]->language;
				tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
				tvins.item.cchTextMax = str.size();
				SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
			}
			
			item = feeds[i]->items;
			while(item)
			{
				// insert item title
				if(item->title)
				{
					tvins.item.pszText = item->title;
					tvins.item.cchTextMax = wcslen(item->title);
				}
				else
				{
					tvins.item.pszText = L"Brak tytułu";
					tvins.item.cchTextMax = wcslen(L"Brak tytułu");
				}
				tvins.item.mask |= TVIF_IMAGE|TVIF_SELECTEDIMAGE;
				tvins.item.iImage = 1;
				tvins.item.iSelectedImage = 1;
				tvins.hParent = hChannel;
				HTREEITEM hItem = reinterpret_cast<HTREEITEM>(SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins));

				// insert item info
				tvins.item.mask &= ~(TVIF_IMAGE|TVIF_SELECTEDIMAGE);
				tvins.hParent = hItem;

				if(item->link)
				{
					tvins.item.pszText = item->link;
					tvins.item.cchTextMax = wcslen(item->link);

					tvins.item.lParam = LINKNODE;
					tvins.item.mask |= TVIF_IMAGE|TVIF_SELECTEDIMAGE;
					tvins.item.iImage = 2;
					tvins.item.iSelectedImage = 2;
					SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
				
					tvins.item.lParam = NORMNODE;
					tvins.item.mask &= ~(TVIF_IMAGE|TVIF_SELECTEDIMAGE);
				}

				if(item->description)
				{
					tvins.item.pszText = item->description;
					tvins.item.cchTextMax = wcslen(item->description);
					SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
				}

				if(item->author)
				{
					str = RSS_text("Autor: ");
					if(item->author->name)
						str += item->author->name;
					if(item->author->uri)
					{
						str += RSS_text(" URI: ");
						str += item->author->uri;
					}
					if(item->author->email)
					{
						str += RSS_text(" E-mail: ");
						str += item->author->email;
					}
					tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
					tvins.item.cchTextMax = str.size();
					SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
				}

				if(item->pubDate != 0)
				{
					wchar_t* t = _wctime(&item->pubDate);
					if(t)
					{
						str = RSS_text("Data: ");
						str += t;
						tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
						tvins.item.cchTextMax = str.size();
						SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
					}
				}

				if(item->category)
				{
					str = RSS_text("Kategoria: ");
					str += item->category;
					tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
					tvins.item.cchTextMax = str.size();
					SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
				}

				if(item->source)
				{
					str = RSS_text("Źródło: ");
					str +=item->source;
					tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
					tvins.item.cchTextMax = str.size();
					SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
				}

				if(item->comments)
				{
					str = RSS_text("Komentarze: ");
					str += item->comments;
					tvins.item.pszText = const_cast<wchar_t*>(str.c_str());
					tvins.item.cchTextMax = str.size();
					SendMessage(hTree, TVM_INSERTITEM, 0, (LPARAM) &tvins);
				}

				item = item->next;
			}
		}
		InvalidateRect(hTree, NULL, TRUE);
	}
}
