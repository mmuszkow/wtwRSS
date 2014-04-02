#include "stdinc.h"

#include "SettingsPage.h"
#include "ListViewUpDown.h"

namespace wtwRSS
{
	INT_PTR CALLBACK SettingsPage::AddNewProc(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
	{
		switch(Msg)
		{
		case WM_INITDIALOG:
			return TRUE;

		case WM_COMMAND:
			switch(wParam)
			{
			case IDCANCEL:
				EndDialog(hDlg, NULL);
				return TRUE;
			case IDOK:
				addNewRet* ret = new addNewRet();
				if(GetWindowTextLength(GetDlgItem(hDlg,IDC_ADDRESS)) == 0)
					return TRUE;
				GetWindowText(GetDlgItem(hDlg,IDC_ADDRESS), ret->url, 1023);
				if(Button_GetState(GetDlgItem(hDlg,IDC_NOTIFY)) & BST_CHECKED)
					ret->notify = TRUE;
				else
					ret->notify = FALSE;
				EndDialog(hDlg, reinterpret_cast<INT_PTR>(ret));
				return TRUE;
			}
			break;
		}

		return FALSE;
	}

	void SettingsPage::add(HWND hDlg)
	{
		addNewRet* ret = reinterpret_cast<addNewRet*>(DialogBoxW(
			PluginController::getInstance().getDllHINSTANCE(),
			MAKEINTRESOURCE(IDD_NEWFEED), 
			hDlg, 
			AddNewProc));
		if(ret)
		{
			HWND hChannels = GetDlgItem(hDlg, IDC_CHANNELS);
			LVITEM lvi;
			lvi.mask = 0;
			lvi.iItem = 0;
			lvi.iSubItem = 0;
			ListView_InsertItem(hChannels, &lvi);
			ListView_SetCheckState(hChannels, 0, ret->notify);
			
			lvi.mask = LVIF_TEXT;
			lvi.pszText = ret->url;
			lvi.iSubItem = 1;
			ListView_SetItem(hChannels, &lvi);

			delete ret;
		}
	}

	void SettingsPage::remove(HWND hDlg)
	{
		HWND hChannels = GetDlgItem(hDlg, IDC_CHANNELS);
		int iPos = ListView_GetNextItem(hChannels, -1, LVNI_SELECTED);
		while (iPos != -1) 
		{
			ListView_DeleteItem(hChannels, iPos);
			iPos = ListView_GetNextItem(hChannels, -1, LVNI_SELECTED);
		}
	}

	INT_PTR CALLBACK SettingsPage::DlgProc(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
	{
		switch(Msg)
		{
		case WM_INITDIALOG:
			{
				HWND hChannels = GetDlgItem(hDlg, IDC_CHANNELS);
				ListView_SetExtendedListViewStyle(hChannels, 
					LVS_EX_CHECKBOXES|LVS_EX_DOUBLEBUFFER|LVS_EX_FLATSB|LVS_EX_FULLROWSELECT);

				LVCOLUMN lvc;
				lvc.mask = LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM;

				lvc.iSubItem = 0;    
				lvc.cx = 22;
				lvc.pszText = 0;
				ListView_InsertColumn(hChannels,0,&lvc);

				lvc.iSubItem = 1;    
				lvc.cx = 385;
				lvc.pszText = L"Adres kanału";
				ListView_InsertColumn(hChannels,1,&lvc);

				LVITEM lvi;

				PluginController &plug = PluginController::getInstance();
				vector<wstring> list = split(plug.getSettings()->getWStr(config::FEEDS));
				for(unsigned int i=0;i<list.size();i+=2)
				{
					lvi.mask = 0;
					lvi.iItem = i>>1;
					lvi.iSubItem = 0;
					ListView_InsertItem(hChannels, &lvi);
					if(i+1 < list.size() && list[i+1] == L"1")
						ListView_SetCheckState(hChannels, i, TRUE);

					lvi.mask = LVIF_TEXT;
					lvi.pszText = const_cast<wchar_t*>(list[i].c_str());
					lvi.iSubItem = 1;
					ListView_SetItem(hChannels, &lvi);
				}
					
				return TRUE;
			}

		case WM_CTLCOLORDLG:
		case WM_CTLCOLORBTN:
		case WM_CTLCOLOREDIT:
		case WM_CTLCOLORSTATIC:
			return reinterpret_cast<INT_PTR>(GetStockObject(WHITE_BRUSH));

		case WM_COMMAND:
			switch(wParam)
			{
			case IDC_RSS_HELP:
				MessageBox(hDlg, 
					L"Informacje o kanałach pobierane są co 5 minut.\r\nJeśli kanał nie posiada atrybutów informujących o czasie/dacie zmiany\r\nto nie będą się o nim wyświetlały powiadomienia.\r\nPobieranie kanałów przy starcie i wznawianiu komunikatora jest opóźniane o 30 sekund.", 
					L"RSS - Informacje", MB_ICONINFORMATION|MB_OK);
				return TRUE;
			case IDC_ADD:
				add(hDlg);
				return TRUE;
			case IDC_DEL:
				remove(hDlg);
				return TRUE;
			case IDOK:
				EndDialog(hDlg, 0);
				return TRUE;
			case IDC_UP:
				{
					HWND hChannels = GetDlgItem(hDlg, IDC_CHANNELS);
					ListView_MoveSelectedItemsUp(hChannels);
					SetFocus(hChannels);
					return TRUE;
				}
			case IDC_DOWN:
				{
					HWND hChannels = GetDlgItem(hDlg, IDC_CHANNELS);
					ListView_MoveSelectedItemsDown(hChannels);
					SetFocus(hChannels);
					return TRUE;
				}
			}
			break;
		}

		return FALSE;
	}
	
	SettingsPage::SettingsPage(HWND hParent, HINSTANCE hInst)
	{			
		PluginController& plug = PluginController::getInstance();
		wtwUtils::Settings* sett = plug.getSettings();
		sett->read();

		hPanel = CreateDialog(
			hInst,
			MAKEINTRESOURCE(IDD_SETTINGS),
			hParent,
			DlgProc);

		vector<wstring> list = split(sett->getWStr(config::FEEDS));
		HWND hChannels = GetDlgItem(hPanel, IDC_CHANNELS);

		for(unsigned int i=0;i<list.size();i+=2)
		{
			if(i+1 < list.size())
			{
				if(list[i+1] == L"1")
				{
					ListView_SetCheckState(hChannels, i>>1, TRUE);
				}
				else
				{
					ListView_SetCheckState(hChannels, i>>1, FALSE);
				}
			}
		}

		if(sett->getInt(config::SHOW_PANEL, 1) == 1)
			SendMessage(GetDlgItem(hPanel, IDC_SHOW_PANEL), BM_SETCHECK, BST_CHECKED, 0);
		else
			SendMessage(GetDlgItem(hPanel, IDC_SHOW_PANEL), BM_SETCHECK, BST_UNCHECKED, 0);

		SetDlgItemInt(hPanel, IDC_NOTIFY_TIME, sett->getInt(config::NOTIFY_TIME, config::DEFAULT_NOTIFY_TIME), FALSE);
	}

	
	void SettingsPage::apply() 
	{
		PluginController& plug = PluginController::getInstance();
		wtwUtils::Settings* sett = plug.getSettings();

		HWND hChannels = GetDlgItem(hPanel, IDC_CHANNELS);
		int count = ListView_GetItemCount(hChannels);
		wstring feeds;
		LVITEM item;
		item.mask = LVIF_TEXT;
		item.pszText = new wchar_t[1025];
		item.cchTextMax = 1024;
		item.iSubItem = 1;

		for(int i=0;i<count-1;i++)
		{
			item.iItem = i;
			ListView_GetItem(hChannels, &item);
			feeds += item.pszText;
			feeds += L"\r\n";

			if(ListView_GetCheckState(hChannels, i) == TRUE)
				feeds += L"1\r\n";
			else
				feeds += L"0\r\n";
		}
		if(count > 0)
		{
			item.iItem = count-1;
			ListView_GetItem(hChannels, &item);
			feeds += item.pszText;

			if(ListView_GetCheckState(hChannels, count-1) == TRUE)
				feeds += L"\r\n1";
			else
				feeds += L"\r\n0";
		}

		delete [] item.pszText;
		sett->setStr(config::FEEDS,feeds.c_str());

		if(SendMessage(GetDlgItem(hPanel, IDC_SHOW_PANEL), BM_GETCHECK, 0, 0))
		{
			sett->setInt(config::SHOW_PANEL, 1);
			PluginController::getInstance().createPanel();
		}
		else
		{
			sett->setInt(config::SHOW_PANEL, 0);
			PluginController::getInstance().destroyPanel();
		}

		int notifyTime = GetDlgItemInt(hPanel, IDC_NOTIFY_TIME, NULL, FALSE);
		sett->setInt(config::NOTIFY_TIME, notifyTime);
		sett->write();
	}
};
