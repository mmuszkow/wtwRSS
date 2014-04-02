#pragma once

#include "stdinc.h"
#include "FastStrBuff.h"

namespace MyRichEdit
{
	FastStrBuff::FastStrBuff()
	{
		len = 0;
		reserved = 5;
		data = new wchar_t[reserved];
		data[0] = 0;
	}

	void FastStrBuff::reserve(size_t length)
	{
		wchar_t* newData = new wchar_t[length];
		wcscpy_s(newData, length, data);
		delete [] data;
		data = newData;
		reserved = length;
	}

	std::wstring FastStrBuff::firstChars(int count)
	{
		wchar_t c = data[count];
		data[count] = 0;
		std::wstring sub(data);
		data[count] = c;
		return sub;
	}
};
