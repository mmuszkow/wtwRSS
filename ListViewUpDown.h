#pragma once

#include "stdinc.h"

BOOL GetLVItem(HWND hListView, UINT mask, int iItem, int iSubItem, 
		LPLVITEM pitem, UINT stateMask)
{
	pitem->mask = mask;
	pitem->stateMask = stateMask;
	pitem->iItem = iItem;
	pitem->iSubItem = iSubItem;
	return ListView_GetItem(hListView, pitem);
}

void ListView_SwapItems(HWND hListView, int iItem1, int iItem2)
{
	//I assume that 4K buffer is really enough for storing the content of a column
	static const int LOCAL_BUFFER_SIZE = 4096;
	static TCHAR szBuffer1[LOCAL_BUFFER_SIZE + 1];
	static TCHAR szBuffer2[LOCAL_BUFFER_SIZE + 1];

	LVITEM lvi1, lvi2;
	UINT uMask = LVIF_TEXT | LVIF_IMAGE | LVIF_INDENT | LVIF_PARAM  | LVIF_STATE;
	
	lvi1.pszText = szBuffer1;
	lvi2.pszText = szBuffer2;
	lvi1.cchTextMax  = LOCAL_BUFFER_SIZE;
	lvi2.cchTextMax  = LOCAL_BUFFER_SIZE;

	BOOL bResult1 = GetLVItem(hListView, uMask, iItem1, 0, &lvi1, (UINT)-1);
	BOOL bResult2 = GetLVItem(hListView, uMask, iItem2, 0, &lvi2, (UINT)-1);

	if (bResult1 && bResult2)
	{
		lvi1.iItem = iItem2;
		lvi2.iItem = iItem1;
		lvi1.mask = uMask;
		lvi2.mask = uMask;
		lvi1.stateMask = (UINT)-1;
		lvi2.stateMask = (UINT)-1;
		//swap the items
		ListView_SetItem(hListView, &lvi1);
		ListView_SetItem(hListView, &lvi2);

		int iColCount = Header_GetItemCount(ListView_GetHeader(hListView));
		//Loop for swapping each column in the items.
		for (int iIndex = 1; iIndex < iColCount; iIndex++)
		{
			szBuffer1[0] = TEXT('\0');
			szBuffer2[0] = TEXT('\0');
			ListView_GetItemText(hListView, iItem1, iIndex, szBuffer1, LOCAL_BUFFER_SIZE);
			ListView_GetItemText(hListView, iItem2, iIndex, szBuffer2, LOCAL_BUFFER_SIZE);
			ListView_SetItemText(hListView, iItem2, iIndex, szBuffer1);
			ListView_SetItemText(hListView, iItem1, iIndex, szBuffer2);
		}
	}
}

void ListView_MoveSelectedItemsUp(HWND hListView)
{
	int iCount = ListView_GetItemCount(hListView);
	for (int iIndex = 1; iIndex < iCount; iIndex++)
		if (ListView_GetItemState(hListView, iIndex, LVIS_SELECTED) != 0)
			ListView_SwapItems(hListView, iIndex, iIndex - 1);
}

void ListView_MoveSelectedItemsDown(HWND hListView)
{
	int iCount = ListView_GetItemCount(hListView);
	for (int iIndex = iCount - 1; iIndex >= 0; iIndex--)
		if (ListView_GetItemState(hListView, iIndex, LVIS_SELECTED) != 0)
			ListView_SwapItems(hListView, iIndex, iIndex + 1);
}
