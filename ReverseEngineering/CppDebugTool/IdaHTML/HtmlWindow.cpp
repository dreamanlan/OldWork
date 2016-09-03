#include "StdAfx.h"
#include ".\htmlwindow.h"
#include "GuardThread.h"

Dlg dlg;
bool isNT=true;
HWND mainHwnd=NULL;

static CComPtr<IDispatch> modelDisp;
static IdaApi* model=NULL;
static GuardThread* pGuardThread=NULL;

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

//这个函数现在没有使用，不过GuardThread类代表了与消息机制相关的异步调度的设计思路，保留下来以备参考。
void CommitRequests(void)
{
	if(pGuardThread)
		pGuardThread->Signal();//让GuardThread将请求发到前台GUI线程统一处理。Event=>GuardThread=>MSG=>GUI Thread
}

bool idaapi menu_item_handler(void *ud)
{
	int type=(int)ud;
	switch(type)
	{
	case 1:
		{					
			dlg.ShowWindow(SW_SHOWNORMAL);
			dlg.CenterWindow();
			if(isNT)
				dlg.Navigate(L"res://IdaHTML.plw/main.htm");
			else
				dlg.Navigate(L"http://dreaman.haolinju.net/IdaHTML/main.htm");
		}
		break;
	case 2:
		{					
			dlg.ShowWindow(SW_SHOWNORMAL);
			dlg.CenterWindow();
			dlg.Navigate(L"http://dreaman.haolinju.net/IdaHTML/Scripts.php");
		}
		break;
	case 3:
		{
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
	case 4:
		{
			char* urlstr=askstr(0,"http://","请输入URL地址:");
			if(urlstr)
			{
				dlg.ShowWindow(SW_SHOWNORMAL);
				dlg.CenterWindow();
				dlg.Navigate(CComBSTR(urlstr));
			}
		}
		break;
	case 5:
		{
			IDispatch* pWin=dlg.GetWindowObj();
			if(pWin)
			{
				if(isNT)
					DispatchDriver::NRInvoke(pWin,L"execScript",L"window.open('res://IdaHTML.plw/help.htm','helpwin')",L"JScript");
				else
					DispatchDriver::NRInvoke(pWin,L"execScript",L"window.open('http://dreaman.haolinju.net/IdaHTML/help.htm','helpwin')",L"JScript");
				pWin->Release();
			}	
		}
		break;
	}
	return true;
}

int __stdcall IDAP_init(void)
{
	mainHwnd=(HWND)callui(ui_get_hwnd).vptr;
	::OleInitialize(NULL);
	model=IdaApi::CreateDispatch();
	modelDisp.Attach(model);
	IEAppPointer::SetPtr(model);
	dlg.OnMessage.attach(model,&IdaApi::OnIEMsg);
	if(isNT)
		dlg.InitURL(L"res://IdaHTML.plw/main.htm");
	else
		dlg.InitURL(L"http://dreaman.haolinju.net/IdaHTML/main.htm");
	dlg.DoModeless(NULL,-640,-480,640,480);//不能以idapro的主窗口作Owner窗口,那样按键消息会被idapro认为是在它的窗口里按(晕倒!)
	//dlg.ShowWindow(SW_MINIMIZE);
		
	add_menu_item("File/Save","IdaHTML -> Write Script",NULL,SETMENU_INS,menu_item_handler,(void*)1);
	add_menu_item("File/Save","IdaHTML -> Web Scripts",NULL,SETMENU_INS,menu_item_handler,(void*)2);
	add_menu_item("File/Save","IdaHTML -> Load HTML",NULL,SETMENU_INS,menu_item_handler,(void*)3);
	add_menu_item("File/Save","IdaHTML -> Load Url",NULL,SETMENU_INS,menu_item_handler,(void*)4);
	add_menu_item("File/Save","IdaHTML -> Help",NULL,SETMENU_INS,menu_item_handler,(void*)5);
	
	pGuardThread=GuardThread::Start();
	if(!pGuardThread)
	{
		return PLUGIN_SKIP;
	}
	return PLUGIN_KEEP;
}

void __stdcall IDAP_term(void)
{	
	if(pGuardThread)
	{
		GuardThread::Terminate(pGuardThread);
	}

	del_menu_item("File/IdaHTMLScripts");
	del_menu_item("File/IdaHTMLLoadHTML");
	del_menu_item("File/IdaHTMLLoadUrl");
	del_menu_item("File/IdaHTMLHelp");

	if(dlg.IsWindow())
	{
		::CloseWindow(dlg.m_hWnd);
		dlg.DestroyWindow();
	}
	IDispatch* p=modelDisp.Detach();
	p->Release();
	model=NULL;
	::OleUninitialize();
}

void __stdcall IDAP_run(int arg)
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	dlg.CenterWindow();
}

char IDAP_comment[] = "IdaHTML---use DHTML as script,by 兰翔 (alan)";
char IDAP_help[] 	= "IdaHTML---use DHTML as script,by 兰翔 (alan)";
char IDAP_name[] 	= "IdaHTML";
char IDAP_hotkey[] 	= "Ctrl-F10";

// The all-important exported PLUGIN object
plugin_t PLUGIN =
{
	IDP_INTERFACE_VERSION,	// IDA version plug-in is written for
	PLUGIN_FIX,				//PLUGIN_HIDE
	IDAP_init,				// Initialisation function
	IDAP_term,				// Clean-up function
	IDAP_run,				// Main plug-in body
	IDAP_comment,			// Comment - unused
	IDAP_help,				// As above - unused
	IDAP_name,				// Plug-in name shown in Edit->Plugins menu
	IDAP_hotkey				// Hot key to run the plug-in
};
