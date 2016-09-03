// Injdll.h: interface for the Injdll class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INJDLL_H__39528BB0_F1A6_4B47_82D5_81CD1EACB352__INCLUDED_)
#define AFX_INJDLL_H__39528BB0_F1A6_4B47_82D5_81CD1EACB352__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <windows.h>

#ifdef _DEBUG
	//#warning DLL注入函数仅在Release版时才正确！
#endif

typedef HINSTANCE (WINAPI *PROCLOADLIBRARY)(PWCHAR);

typedef struct {
	PROCLOADLIBRARY 	fnLoadLibrary;
	WCHAR				wzLibFile[MAX_PATH];
} INJLIBINFO, *PINJLIBINFO;
extern BOOL WINAPI DetourContinueProcessWithDllA(HANDLE hProcess, LPCSTR lpDllName);
extern BOOL WINAPI DetourContinueProcessWithDllW(HANDLE hProcess, LPCWSTR lpDllName);

#ifdef UNICODE
	#define DetourContinueProcessWithDll DetourContinueProcessWithDllW
#else
	#define DetourContinueProcessWithDll DetourContinueProcessWithDllA
#endif // !UNICODE

#endif // !defined(AFX_INJDLL_H__39528BB0_F1A6_4B47_82D5_81CD1EACB352__INCLUDED_)
