// HKTool.h: interface for the HKTool class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HKTOOL_H__BB0D8354_C666_4B90_B22D_982A86FE1129__INCLUDED_)
#define AFX_HKTOOL_H__BB0D8354_C666_4B90_B22D_982A86FE1129__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <map>
#include "HookCommon.h"
#include "MyShell.h"

#define INCLUDE_COMPILE

#include "../../scriptc/Interpreter.h"
#include "ScLib.h"

#pragma data_seg (".HookSection")		
	HHOOK hHook = NULL;		
#pragma data_seg ()

class HookScript;

static bool isHookObj=false;
static HHOOK hDelayLoadHook=NULL;
static HMODULE dllModule=NULL;
static CString dllFile;
static HookScript* pScript=NULL;

using namespace std;

class HookScriptUtility : public IDispatch
{
public:
	virtual void __stdcall Log(BSTR msg)
	{
		HookCommon::LogMess(CString(msg));
	}
	virtual BOOL __stdcall IsMatch(BSTR cmd,BSTR key)
	{
		CString cmdStr(cmd);
		CString keyStr(key);
		cmdStr.MakeLower();
		keyStr.MakeLower();
		return cmdStr.Find(keyStr)>=0;
	}
	virtual IDispatch* __stdcall get_Shell(void)
	{
		if(!shell)return NULL;
		IDispatch* p=NULL;
		shell.QueryInterface(&p);
		return p;
	}
public:
	BEGIN_INTF(HookScriptUtility)
		METHOD(Log)
		METHOD(IsMatch)
		PROPERTYGET(Shell,true)
	END_INTF()
public:
	HookScriptUtility():m_hWnd(NULL)
	{
		MyShell<HookScriptUtility>* pMS=MyShell<HookScriptUtility>::CreateDispatch();
		pMS->Init(this);
		shell.Attach(pMS);
	}
public:	
	inline IDispatch* GetWindowObj(void)
	{
		return NULL;
	}
	HWND m_hWnd;
private:
	CComPtr<IDispatch> shell;
};

class HookScript
{
public:
	void Compile(const char* scpFile)
	{
		canRun=false;
        vmachine.Reset();

		vmachine.DefVar("app");

        CString err=vmachine.Compile(scpFile);
        if(err.GetLength()>0)
        {
			HookCommon::LogMess(err);
			return;
        }

        vmachine.OnRuntimeError+=EventFactory::Produce(this,&HookScript::RuntimeError);
        //vmachine.OnCallFunction+=EventFactory::Produce(this,&HookScript::CallFunction);
        //vmachine.OnCallObject+=EventFactory::Produce(this,&HookScript::CallObject);
        //vmachine.OnGetAttr+=EventFactory::Produce(this,&HookScript::GetAttr);
        //vmachine.OnSetAttr+=EventFactory::Produce(this,&HookScript::SetAttr);
        //vmachine.OnFilterObjects+=EventFactory::Produce(this,&HookScript::FilterObjects);
        
        vmachine.LoadLibrary();
		canRun=true;
	}
	CString GetDll(const char* cmd)
	{
		if(!canRun)
			return "";
		vmachine.SetVariable(0,CComVariant(model));
        CComVariant args[2];
		args[0]=CComVariant(0);
		args[1]=CComVariant(cmd);        
        CComVariant v=vmachine.ExecScript(args,2);
		if(vmachine.IsIString(v))
		{
			CString r = vmachine.ReadIString(v);
			return r;
		}
		return "";
	}
	int GetDelayLoad(const char* cmd)
	{
		if(!canRun)
			return FALSE;
		vmachine.SetVariable(0,CComVariant(model));
        CComVariant args[2];
		args[0]=CComVariant(1);
		args[1]=CComVariant(cmd);        
        CComVariant v=vmachine.ExecScript(args,2);
		return v.lVal;
	}
	void ExecApi(DWORD module)
	{
		if(!canRun)
			return;
		vmachine.SetVariable(0,CComVariant(model));
        CComVariant args[2];
		args[0]=CComVariant(2);
		args[1]=CComVariant(module);
        CComVariant ret=vmachine.ExecScript(args,2);     
	}
public:
	bool RuntimeError(const char* msg)
	{
		HookCommon::LogMess(msg);
		return true;
	}	
public:
	HookScript():canRun(false)
	{
		IDispatch* p=HookScriptUtility::CreateDispatch();
		model.Attach(p);
	}
	virtual ~HookScript()
	{}
private:
	bool canRun;
	ScriptcRuntime vmachine;
	CComPtr<IDispatch> model;
};

class HookTool
{
public:
	static int Install(void)
	{
		hHook=::SetWindowsHookEx(WH_SHELL,MyShellProc,_Module.GetModuleInstance(),0);
		if(!hHook)
		{
			CString tt;
			tt.Format("监测初始化失败，错误码：%8.8X",::GetLastError());
			HookCommon::LogMess(tt);
			return 0;
		}	
		HookCommon::LogMess("监测初始化成功!");
		return 1;
	}
	static int Uninstall(void)
	{
		if(hHook)
		{
			if(!::UnhookWindowsHookEx(hHook))
			{	
				return 0;
			}
			hHook=NULL;
		}		
		return 1;
	}
	static void load(HWND hwnd)
	{
		if(isHookObj && pScript)
		{
			dllModule=::LoadLibrary(HookCommon::ConvertPath(dllFile));

			if(dllModule)
			{
				CString temp;
				temp.Format("装入模块[%s]，窗口句柄：%8.8X，模块句柄：%8.8X",dllFile,(DWORD)hwnd,(DWORD)dllModule);
				HookCommon::LogMess(temp);

				pScript->ExecApi((DWORD)dllModule);
			}
			else
			{
				CString temp;
				temp.Format("装入模块[%s]失败，窗口句柄：%8.8X，错误码：%8.8X",dllFile,(DWORD)hwnd,::GetLastError());
				HookCommon::LogMess(temp);
			}
		}
	}
	static bool Init(void)
	{
		char* cmdStr=::GetCommandLine();
		pScript=new HookScript();
		pScript->Compile(HookCommon::GetHookPath()+"\\hook.cfg");
		CString dll=pScript->GetDll(cmdStr);
		int delayLoad=pScript->GetDelayLoad(cmdStr);
		if(!dll.IsEmpty())
		{
			isHookObj=true;
			dllFile=dll;

			::CoUninitialize();
			::OleUninitialize();
			HRESULT hr=::OleInitialize(NULL);

			CString temp;
			temp.Format("发现匹配进程 %s (监测句柄：%8.8X) OLE:%8.8X",cmdStr,hHook,hr);
			HookCommon::LogMess(temp);

			switch(delayLoad)
			{
			case 1:
				{
					hDelayLoadHook=::SetWindowsHookEx(WH_GETMESSAGE,MyGetMsgProc,_Module.GetModuleInstance(),::GetCurrentThreadId());
					if(!hDelayLoadHook)
					{
						CString tt;
						tt.Format("消息钩子型延迟装载初始化失败，错误码：%8.8X",::GetLastError());
						HookCommon::LogMess(tt);
					}
					else
					{
						CString tt;
						tt.Format("消息钩子型延迟装载初始化成功：%8.8X",(DWORD)hDelayLoadHook);
						HookCommon::LogMess(tt);
					}
				}
				break;
			case 2:
				{
					UINT_PTR val=::SetTimer(NULL,NULL,3000,&HookTool::TimerProc);
					if(!val)
					{
						CString tt;
						tt.Format("定时器型延迟装载初始化失败，错误码：%8.8X",::GetLastError());
						HookCommon::LogMess(tt);
					}
					else
					{
						CString tt;
						tt.Format("定时器型延迟装载初始化成功：%8.8X",(DWORD)val);
						HookCommon::LogMess(tt);
					}
				}
				break;
			default:
				{
					load(NULL);
				}
				break;
			}

			return true;
		}
		else
		{
			CString temp;
			temp.Format("监测到进程 %s",cmdStr);
			HookCommon::LogMess(temp);
			return false;
		}
	}
	static bool Finalize(void)
	{		
		if(isHookObj)
		{
			if(dllModule)
			{
				::FreeLibrary(dllModule);
				dllModule=NULL;
				return true;
			}
			if(pScript)
			{
				delete pScript;
				pScript=NULL;
			}
			::OleUninitialize();
		}
		return false;
	}
	static LRESULT CALLBACK MyGetMsgProc(int nCode,
		WPARAM wParam,
		LPARAM lParam
	)
	{
		static bool first=true;
		MSG* pMsg=(MSG*)lParam;
		
		if(first)
		{
			first=false;
			load(pMsg->hwnd);
		}
		else
		{
			CString temp;
			temp.Format("关闭消息钩子型延迟装载：%8.8X，窗口句柄：%8.8X",hDelayLoadHook,(DWORD)pMsg->hwnd);
			HookCommon::LogMess(temp);
			::UnhookWindowsHookEx(hDelayLoadHook);
		}
		if(hDelayLoadHook)
		{
			return ::CallNextHookEx(hDelayLoadHook,nCode,wParam,lParam);
		}
		return 0;
	}
	static void CALLBACK TimerProc(
		HWND hwnd,
		UINT uMsg,
		UINT_PTR idEvent,
		DWORD dwTime
		)
	{
		static bool first=true;
		
		if(first)
		{
			first=false;		

			load(hwnd);
		}
		else
		{
			CString temp;
			temp.Format("关闭定时器型延迟装载：%8.8X，窗口句柄：%8.8X",idEvent,(DWORD)hwnd);
			HookCommon::LogMess(temp);
			::KillTimer(NULL,idEvent);
		}
	}
	static LRESULT CALLBACK MyShellProc(
	  int nCode,      // hook code
	  WPARAM wParam,  // depends on hook code
	  LPARAM lParam   // depends on hook code
	)
	{
		if(hHook)
			return ::CallNextHookEx(hHook,nCode,wParam,lParam);
		return 0;
	}
};
#endif // !defined(AFX_HKTOOL_H__BB0D8354_C666_4B90_B22D_982A86FE1129__INCLUDED_)
