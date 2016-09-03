#pragma once

#include <Wininet.h>
#include <urlmon.h>
#include <tlhelp32.h>
#include <shlwapi.h>
#include <shellapi.h>

#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <fstream>

#include "htiframe.h"

#ifndef _ATL_NO_DEFAULT_LIBS
#pragma comment(lib, "RpcRt4.lib")
#pragma comment(lib, "WinInet.lib")
#pragma comment(lib, "ShlWapi.lib")
#pragma comment(lib, "Shell32.lib")
#pragma comment(lib, "UrlMon.lib")
#pragma comment(lib, "Version.lib")
#pragma comment(lib, "Oleacc.lib")
#endif  // !_ATL_NO_DEFAULT_LIBS

struct ExterUtility
{	
	static inline HWND GetRootOwnerWindow(HWND hWnd)
	{
		HWND hWndParent;
		HWND hWndTmp = hWnd;
		do
		{
			hWndParent = hWndTmp;
			hWndTmp = ::GetParent(hWndParent);
		}
		while(hWndTmp != NULL);
		return hWndParent;
	}
	static inline HWND GetRealParentWindow(HWND hWnd)
	{
		if(::GetWindowLong(hWnd, GWL_STYLE) & WS_CHILD)
			return ::GetParent(hWnd);
		return NULL;
	}
	static inline HWND GetTopLevelWindow(HWND hWnd)
	{
		HWND hWndParent;
		HWND hWndTmp = hWnd;
		do
		{
			hWndParent = hWndTmp;
			hWndTmp = GetRealParentWindow(hWndParent);
		}
		while(hWndTmp != NULL);
		return hWndParent;
	}
	static inline HWND GetOuterLevelWindow(HWND hWnd,bool& isMDI)
	{
		HWND hWndParent;
		HWND hWndTmp = hWnd;
		isMDI=false;
		do
		{
			hWndParent = hWndTmp;
			LONG style=(::GetWindowLong(hWndParent, GWL_STYLE) & WS_CHILD);
			LONG styleEx=(::GetWindowLong(hWndParent, GWL_EXSTYLE) & WS_EX_MDICHILD);
			if(styleEx)
				isMDI=true;
			hWndTmp = (style && !styleEx) ? ::GetParent(hWndParent) : NULL;
		}
		while(hWndTmp != NULL);
		return hWndParent;
	}
	static inline CString GetFullPath(void)
	{
		char buf[MAX_PATH+1];
		HINSTANCE hinst=_Module.GetModuleInstance();
		DWORD len=::GetModuleFileName(hinst,buf,MAX_PATH);
		if(len>0)
		{
			buf[len]=0;
			return CString(buf);
		}
		else
			return "";
	}
};