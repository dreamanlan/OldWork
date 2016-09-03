#include "StdAfx.h"
#include ".\htmlwindow.h"

Dlg dlg;
bool isNT=true;
HWND mainHwnd=NULL;
bool canRun=false;
CComPtr<IDispatch> modelDisp;
OllyApi* model=NULL;

CString GetCurPath(void)
{
	HINSTANCE hinst=_Module.GetModuleInstance();
	char buf[MAX_PATH+1];
	DWORD len=::GetModuleFileName(hinst,buf,MAX_PATH);
	buf[len]=0;
	CString rootPath(buf);
	int i=rootPath.ReverseFind('\\');
	if(i>=0)
	{
		return rootPath.Left(i);
	}
	else
	{
		return "";
	}
}

namespace DataScript
{
	std::string getResourceAsString(const std::string& file,const std::string& group)
	{
		return "";
	}
}

extern "C"
{
	__declspec(dllexport) int __cdecl ODBG_Plugindata(char shortname[32])
	{
		::strcpy(shortname,"OllyHTML");
		return PLUGIN_VERSION;
	}
	__declspec(dllexport) int __cdecl ODBG_Plugininit(int ollydbgversion,HWND hw,ulong *features)
	{
		mainHwnd=hw;
		::OleInitialize(NULL);
		model=OllyApi::CreateDispatch();
		modelDisp.Attach(model);
		IEAppPointer::SetPtr(model);
		dlg.OnMessage.attach(model,&OllyApi::OnIEMsg);
		if(isNT)
			dlg.InitURL(L"res://OllyHTML.dll/main.htm");
		else
			dlg.InitURL(L"http://dreaman.haolinju.net/OllyHTML/main.htm");
		dlg.DoModeless(hw,-640,-480,640,480);
		//dlg.ShowWindow(SW_MINIMIZE);
		return 0;
	}
	__declspec(dllexport) int __cdecl ODBG_Pluginmenu(int origin,char data[4096],void *item)
	{
		if(origin==PM_MAIN)
		{
			::strcpy(data,"0 Write Script,1 Web Scripts,Load {2 Html,3 Url}|4 Show UI\tAlt+F12|5 Help,6 About");
			return 1;
		}
		return 0;
	}
	__declspec(dllexport) void __cdecl ODBG_Pluginaction(int origin,int action,void *item)
	{
		if(origin==PM_MAIN)
		{
			switch(action)
			{
			case 0:
				{
					canRun=false;
					dlg.ShowWindow(SW_SHOWNORMAL);
					dlg.CenterWindow();
					if(isNT)
						dlg.Navigate(L"res://OllyHTML.dll/main.htm");
					else
						dlg.Navigate(L"http://dreaman.haolinju.net/OllyHTML/main.htm");
				}
				break;
			case 1:
				{
					canRun=false;
					dlg.ShowWindow(SW_SHOWNORMAL);
					dlg.CenterWindow();
					dlg.Navigate(L"http://dreaman.haolinju.net/OllyHTML/Scripts.php");
				}
				break;
			case 2:
				{
					canRun=false;
					CFileDialog fd(TRUE,"*.htm",GetCurPath()+"\\*.htm",OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,"网页文件\0*.htm\0所有文件\0*.*\0\0",mainHwnd);
					int id=fd.DoModal();
					if(id==IDOK)
					{
						dlg.ShowWindow(SW_SHOWNORMAL);
						dlg.CenterWindow();
						dlg.Navigate(CComBSTR(fd.m_szFileName));
					}
				}
				break;
			case 3:
				{
					canRun=false;
					char urlstr[TEXTLEN+1]={"http://"};
					int r=Gettext("请输入URL",urlstr,0,254,FIXEDFONT);
					if(r>0)
					{
						dlg.ShowWindow(SW_SHOWNORMAL);
						dlg.CenterWindow();
						urlstr[r]=0;
						dlg.Navigate(CComBSTR(urlstr));
					}
				}
				break;
			case 4:
				dlg.ShowWindow(SW_SHOWNORMAL);
				dlg.CenterWindow();
				break;
			case 5:
				{
					IDispatch* pWin=dlg.GetWindowObj();
					if(pWin)
					{
						if(isNT)
							DispatchDriver::NRInvoke(pWin,L"execScript",L"window.open('res://OllyHTML.dll/help.htm','helpwin')",L"JScript");
						else
							DispatchDriver::NRInvoke(pWin,L"execScript",L"window.open('http://dreaman.haolinju.net/OllyHTML/help.htm','helpwin')",L"JScript");
						pWin->Release();
					}	
				}
				break;
			case 6:
				::MessageBox(mainHwnd,"用DHTML+javascript作脚本的Ollydbg插件\r\n\r\nOllyHTML by 兰翔 (alan)\r\n\r\nnationphone@sina.com/126.com/163.com\r\ndreaman_163@163.com\r\n\r\n主要API实现参照了OllyScript与OllyMachine的代码\r\n感谢SHaG与罗聪","关于",MB_OK);
				break;
			}
		}
	}
	__declspec(dllexport) int  __cdecl ODBG_Pluginshortcut(int origin,int ctrl,int alt,int shift,int key,void *item)
	{
		if(ctrl==0 && alt==1 && shift==0 && key==VK_F12)
		{
			dlg.ShowWindow(SW_SHOWNORMAL);
			dlg.CenterWindow();
			return 1;
		}
		return 0;
	}
	__declspec(dllexport) int __cdecl ODBG_Pluginclose(void)
	{
		if(dlg.IsWindow())
			::CloseWindow(dlg.m_hWnd);
		return 0;
	}
	__declspec(dllexport) void __cdecl ODBG_Plugindestroy(void)
	{
		if(dlg.IsWindow())
			dlg.DestroyWindow();
		IDispatch* p=modelDisp.Detach();
		p->Release();
		model=NULL;
		::OleUninitialize();
	}
	__declspec(dllexport) void __cdecl ODBG_Pluginreset(void)
	{
		if(!canRun)
			return;
		IDispatch* pWin=dlg.GetWindowObj();
		if(pWin)
		{
			DispatchDriver::NRInvoke(pWin,L"OnReset");
			pWin->Release();
		}
	}
	__declspec(dllexport) int __cdecl ODBG_Pausedex(int reason,int extdata,t_reg *reg,DEBUG_EVENT *debugevent)
	{
		if(!canRun)
			return 0;
		IDispatch* pWin=dlg.GetWindowObj();
		if(pWin)
		{
			CComPtr<IDispatch> p1,p2;
			Register* pReg=NULL; 
			if(reg)
			{
				pReg=Register::CreateDispatch();
				pReg->Init(reg);
				p1.Attach(pReg);
			}
			DebugEvent* pDE=NULL;
			if(debugevent)
			{
				pDE=DebugEvent::CreateDispatch();
				pDE->Init(debugevent);
				p2.Attach(pDE);
			}
			int r=DispatchDriver::Invoke(pWin,L"OnPaused",reason,extdata,p1,p2,Type2Type<int>());
			pWin->Release();
			if(r)
				return 1;
			return 0;
		}		
		return 0;
	}
	__declspec(dllexport) void __cdecl ODBG_Pluginmainloop(DEBUG_EVENT *debugevent)
	{
		if(!canRun)
			return;
		IDispatch* pWin=dlg.GetWindowObj();
		if(pWin)
		{
			CComPtr<IDispatch> p;
			DebugEvent* pDE=NULL;
			if(debugevent)
			{
				pDE=DebugEvent::CreateDispatch();
				pDE->Init(debugevent);
				p.Attach(pDE);
			}
			DispatchDriver::NRInvoke(pWin,L"OnStep",p);
			pWin->Release();
		}		
	}
}