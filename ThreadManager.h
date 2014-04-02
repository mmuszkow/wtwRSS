#pragma once

#include "RSSUpdater.h"

namespace wtwRSS
{
	class ThreadManager
	{
		CRITICAL_SECTION	m_active;
		stack<RSSUpdaterThread*>		active;
		HANDLE				hThread;
		static WTWFUNCTIONS* wtw;
		bool				abortAll;

		static DWORD WINAPI ThreadManager::CleanerThreadFunc(LPVOID arg);


	public:
		ThreadManager(WTWFUNCTIONS* fn) : hThread(NULL), abortAll(false)
		{
			InitializeCriticalSection(&m_active);
			ThreadManager::wtw = fn;
		}
		~ThreadManager();

		void start(RSSUpdaterThread* thread);

		unsigned int getActiveCount()
		{
			EnterCriticalSection(&m_active);
			unsigned int count = active.size();
			LeaveCriticalSection(&m_active);
			return count;
		}
	};
};
