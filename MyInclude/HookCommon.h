// HookCommon.h: interface for the HKTool class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HookCommon_H__BB0D8354_C666_4B90_B22D_982A86FE1129__INCLUDED_)
#define AFX_HookCommon_H__BB0D8354_C666_4B90_B22D_982A86FE1129__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <fstream>

using namespace std;

class HookCommon
{
public:	
	static CString GetHookPath(void)
	{
		char buf[MAX_PATH+1];
		HINSTANCE hinst=_Module.GetModuleInstance();
		DWORD len=::GetModuleFileName(hinst,buf,MAX_PATH);
		buf[len]=0;
		CString temp(buf);
		int i=temp.ReverseFind('\\');
		if(i>=0)
			return temp.Left(i);
		else
			return "";
	}
	static CString ConvertPath(CString path)
	{		
		CString sf=path;
		sf.MakeUpper();
		sf.TrimLeft();
		sf.TrimRight();
		if(!(
			(sf.Find("HTTP://")==0||sf.Find("FILE://")==0)
			||sf.Find("\\\\")==0
			||(sf.GetLength()>3&&sf[0]>='A'&&sf[0]<='Z'&&sf[1]==':'&&sf[2]=='\\'))
			)
		{
			CString rootPath=GetHookPath();
			if(!rootPath.IsEmpty())
				sf=rootPath+"\\"+sf;
		}
		return sf;
	}
	static void LogMess(const char* mess)
	{
		CString ss(mess);
		char*s=(LPSTR)(LPCSTR)ss;
		HWND hWnd=::FindWindow(NULL,"ScriptHook");
		if(::IsWindow(hWnd))
		{
			COPYDATASTRUCT data={0x0,::strlen(s)+1,(LPVOID)s};
			::SendMessage(hWnd,WM_COPYDATA,NULL,(LPARAM)&data);
		}
	}
};

#endif // !defined(AFX_HookCommon_H__BB0D8354_C666_4B90_B22D_982A86FE1129__INCLUDED_)
