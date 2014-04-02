#pragma once

namespace MyRichEdit
{
	class FastStrBuff
	{
		wchar_t*	data;
		size_t		len;
		size_t		reserved;
	public:
		FastStrBuff();
		~FastStrBuff()
		{
			delete [] data;
		}

		void reserve(size_t length);

		inline void clear()
		{
			data[0] = 0;
			len = 0;
		}

		inline void push_back(wchar_t c)
		{
			if(len >= reserved - 1)
				reserve(reserved<<1);
			data[len] = c;
			data[++len] = 0;
		}

		inline size_t size()
		{
			return len;
		}

		inline wchar_t* c_str()
		{
			return data;
		}

		std::wstring firstChars(int count);

		// Compare with ignoring case
		inline bool equalIC(const wchar_t* str) const
		{
			return (_wcsicmp(data, str) == 0);
		}

		inline bool operator==(const wchar_t* str) const
		{
			return (wcscmp(data, str) == 0);
		}

		inline bool operator!=(const wchar_t* str) const
		{
			return (wcscmp(data, str) != 0);
		}

		inline wchar_t operator[](int index)
		{
			return data[index];
		}
	};
};
