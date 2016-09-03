// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once

#define WTL_MODULE

#include "stdafx.h"

#include "injdll.h"
#include <Psapi.h>
#include "WinForIE.h"

#include <process.h>
#include <vector>
#include <map>
#include <Lm.h>

#include <fstream>
using namespace std;

#define MYWM_NOTIFYICON WINFORIE_LAST_MSG+1

typedef int (*InstallPtr)(void);
typedef int (*UninstallPtr)(void);

#pragma comment(lib,"Psapi.lib")

extern void DisplayLastError(void);
extern void GetLastErrorMsg(char* mess,int size);

template<class T>
	class InjectModel : public IDispatch
{
	#define CALL_API_DEBUG		1
	#define CALL_API_WAIT		2
	#define CALL_API_TIME		1000
	#define WAIT_PROCESS_TIME	1000
	typedef std::map<UINT,CString> StrParams;
public:
	virtual void __stdcall ShowLastError(void) 
	{
		::DisplayLastError();
	}
	virtual DWORD __stdcall RunProgram(BSTR exe,VARIANT dll,VARIANT proc,DWORD ordinal,BOOL isDebug)
	{
		CString exePath(exe);
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		::ZeroMemory( &si, sizeof(si) );
		si.cb = sizeof(si);
		::ZeroMemory( &pi, sizeof(pi) );

		DWORD flag=CREATE_SUSPENDED;
		if(isDebug)
		{
			flag=0;
		}
		DWORD r=::CreateProcess(NULL,(LPTSTR)(LPCSTR)exePath,NULL,NULL,FALSE,flag,NULL,NULL,&si,&pi);
		if(!r)
		{
			return 0;
		}		
		if(isDebug)
		{
			::Sleep(WAIT_PROCESS_TIME);//等待1秒钟，让目标进程启动
			r=::SuspendThread(pi.hThread);
		}

		CString dllPath;
		DWORD dllHandle=0;
		if(dll.vt==VT_BSTR)
		{
			dllPath=CString(dll.bstrVal);
		}
		else
		{
			CComVariant var(dll);
			var.ChangeType(VT_UINT);
			dllHandle=var.uintVal;
		}
		CString procName;
		DWORD procRva=0;
		if(proc.vt==VT_BSTR)
		{
			procName=CString(proc.bstrVal);
		}
		else
		{
			CComVariant var(proc);
			var.ChangeType(VT_UINT);
			procRva=var.uintVal;
		}
		r=NtStartup(pi.hProcess,pi.hThread,dllPath,procName,ordinal,isDebug,dllHandle,procRva);

		r=::ResumeThread(pi.hThread);	

		r=::CloseHandle(pi.hProcess);
		r=::CloseHandle(pi.hThread);
		
		return pi.dwProcessId;
	}
	virtual DWORD __stdcall RunProgram2(BSTR exe,VARIANT dll,VARIANT proc,DWORD ordinal,BOOL isDebug,VARIANT vars)
	{
		CString exePath(exe);
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		::ZeroMemory( &si, sizeof(si) );
		si.cb = sizeof(si);
		::ZeroMemory( &pi, sizeof(pi) );

		DWORD flag=CREATE_SUSPENDED;
		if(isDebug)
		{
			flag=0;
		}
		DWORD r=::CreateProcess(NULL,(LPTSTR)(LPCSTR)exePath,NULL,NULL,FALSE,flag,NULL,NULL,&si,&pi);
		if(!r)
		{
			return 0;
		}		
		if(isDebug)
		{
			::Sleep(WAIT_PROCESS_TIME);//等待1秒钟，让目标进程启动
			r=::SuspendThread(pi.hThread);
		}
		CString dllPath;
		DWORD dllHandle=0;
		if(dll.vt==VT_BSTR)
		{
			dllPath=CString(dll.bstrVal);
		}
		else
		{
			CComVariant var(dll);
			var.ChangeType(VT_UINT);
			dllHandle=var.uintVal;
		}
		CString procName;
		DWORD procRva=0;
		if(proc.vt==VT_BSTR)
		{
			procName=CString(proc.bstrVal);
		}
		else
		{
			CComVariant var(proc);
			var.ChangeType(VT_UINT);
			procRva=var.uintVal;
		}
		r=NtStartup2(pi.hProcess,pi.hThread,dllPath,procName,ordinal,isDebug,vars,dllHandle,procRva);

		r=::ResumeThread(pi.hThread);	

		r=::CloseHandle(pi.hProcess);
		r=::CloseHandle(pi.hThread);
		
		return pi.dwProcessId;
	}
	virtual DWORD __stdcall RunProgramRT(BSTR exe,VARIANT dll,VARIANT proc,DWORD ordinal,DWORD flag)
	{
		CString exePath(exe);
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		::ZeroMemory( &si, sizeof(si) );
		si.cb = sizeof(si);
		::ZeroMemory( &pi, sizeof(pi) );

		DWORD nflag=CREATE_SUSPENDED;
		if(flag & CALL_API_DEBUG)
		{
			nflag=0;
		}
		DWORD r=::CreateProcess(NULL,(LPTSTR)(LPCSTR)exePath,NULL,NULL,FALSE,nflag,NULL,NULL,&si,&pi);
		if(!r)
		{
			return 0;
		}		
		if(flag & CALL_API_DEBUG)
		{
			::Sleep(WAIT_PROCESS_TIME);//等待1秒钟，让目标进程启动
			r=::SuspendThread(pi.hThread);
		}

		CString dllPath;
		DWORD dllHandle=0;
		if(dll.vt==VT_BSTR)
		{
			dllPath=CString(dll.bstrVal);
		}
		else
		{
			CComVariant var(dll);
			var.ChangeType(VT_UINT);
			dllHandle=var.uintVal;
		}
		CString procName;
		DWORD procRva=0;
		if(proc.vt==VT_BSTR)
		{
			procName=CString(proc.bstrVal);
		}
		else
		{
			CComVariant var(proc);
			var.ChangeType(VT_UINT);
			procRva=var.uintVal;
		}
		r=NtStartupRT(pi.hProcess,pi.hThread,dllPath,procName,ordinal,flag,dllHandle,procRva);

		r=::ResumeThread(pi.hThread);	

		r=::CloseHandle(pi.hProcess);
		r=::CloseHandle(pi.hThread);
		
		return pi.dwProcessId;
	}
	virtual DWORD __stdcall RunProgramRT2(BSTR exe,VARIANT dll,VARIANT proc,DWORD ordinal,DWORD flag,VARIANT vars)
	{
		CString exePath(exe);
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		::ZeroMemory( &si, sizeof(si) );
		si.cb = sizeof(si);
		::ZeroMemory( &pi, sizeof(pi) );

		DWORD nflag=CREATE_SUSPENDED;
		if(flag & CALL_API_DEBUG)
		{
			nflag=0;
		}
		DWORD r=::CreateProcess(NULL,(LPTSTR)(LPCSTR)exePath,NULL,NULL,FALSE,nflag,NULL,NULL,&si,&pi);
		if(!r)
		{
			return 0;
		}		
		if(flag & CALL_API_DEBUG)
		{
			::Sleep(WAIT_PROCESS_TIME);//等待1秒钟，让目标进程启动
			r=::SuspendThread(pi.hThread);
		}
		CString dllPath;
		DWORD dllHandle=0;
		if(dll.vt==VT_BSTR)
		{
			dllPath=CString(dll.bstrVal);
		}
		else
		{
			CComVariant var(dll);
			var.ChangeType(VT_UINT);
			dllHandle=var.uintVal;
		}
		CString procName;
		DWORD procRva=0;
		if(proc.vt==VT_BSTR)
		{
			procName=CString(proc.bstrVal);
		}
		else
		{
			CComVariant var(proc);
			var.ChangeType(VT_UINT);
			procRva=var.uintVal;
		}
		r=NtStartupRT2(pi.hProcess,pi.hThread,dllPath,procName,ordinal,flag,vars,dllHandle,procRva);

		r=::ResumeThread(pi.hThread);	

		r=::CloseHandle(pi.hProcess);
		r=::CloseHandle(pi.hThread);
		
		return pi.dwProcessId;
	}
	virtual BOOL __stdcall InjectAndCallOnThread(DWORD pid,DWORD tid,VARIANT dll,VARIANT proc,DWORD ordinal,BOOL isDebug)
	{
		HANDLE hProcess = ::OpenProcess( PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoCloseProcess(hProcess);

		HANDLE hThread = ::OpenThread( THREAD_GET_CONTEXT | THREAD_SET_CONTEXT | THREAD_SUSPEND_RESUME ,FALSE, tid);
		if(!hThread)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标线程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoCloseThread(hThread);

		DWORD r=::SuspendThread(hThread);

		CString dllPath;
		DWORD dllHandle=0;
		if(dll.vt==VT_BSTR)
		{
			dllPath=CString(dll.bstrVal);
		}
		else
		{
			CComVariant var(dll);
			var.ChangeType(VT_UINT);
			dllHandle=var.uintVal;
		}
		CString procName;
		DWORD procRva=0;
		if(proc.vt==VT_BSTR)
		{
			procName=CString(proc.bstrVal);
		}
		else
		{
			CComVariant var(proc);
			var.ChangeType(VT_UINT);
			procRva=var.uintVal;
		}
		r=NtStartup(hProcess,hThread,dllPath,procName,ordinal,isDebug,dllHandle,procRva);

		r=::ResumeThread(hThread);	
		return TRUE;
	}
	virtual BOOL __stdcall InjectAndCallOnThread2(DWORD pid,DWORD tid,VARIANT dll,VARIANT proc,DWORD ordinal,BOOL isDebug,VARIANT vars)
	{
		HANDLE hProcess = ::OpenProcess( PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoCloseProcess(hProcess);

		HANDLE hThread = ::OpenThread( THREAD_GET_CONTEXT | THREAD_SET_CONTEXT | THREAD_SUSPEND_RESUME ,FALSE, tid);
		if(!hThread)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标线程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoCloseThread(hThread);

		DWORD r=::SuspendThread(hThread);

		CString dllPath;
		DWORD dllHandle=0;
		if(dll.vt==VT_BSTR)
		{
			dllPath=CString(dll.bstrVal);
		}
		else
		{
			CComVariant var(dll);
			var.ChangeType(VT_UINT);
			dllHandle=var.uintVal;
		}
		CString procName;
		DWORD procRva=0;
		if(proc.vt==VT_BSTR)
		{
			procName=CString(proc.bstrVal);
		}
		else
		{
			CComVariant var(proc);
			var.ChangeType(VT_UINT);
			procRva=var.uintVal;
		}
		r=NtStartup2(hProcess,hThread,dllPath,procName,ordinal,isDebug,vars,dllHandle,procRva);

		r=::ResumeThread(hThread);	
		return TRUE;
	}
	virtual BOOL __stdcall InjectDll(DWORD pid,BSTR dll,BOOL isDebug)
	{
		CString dllPath(dll);

		HANDLE hProcess = ::OpenProcess( PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoClose(hProcess);

		return RemoteLoadLibrary(hProcess,dllPath,isDebug);
	}
	virtual BOOL __stdcall FreeDll(DWORD pid,BSTR dll,BOOL isDebug)
	{
		CString dllPath(dll);

		HANDLE hProcess = ::OpenProcess( PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoClose(hProcess);

		return RemoteFreeLibrary(hProcess,dllPath,isDebug);
	}
	virtual DWORD __stdcall GetDll(DWORD pid,BSTR dll,BOOL isDebug)
	{
		CString dllPath(dll);

		HANDLE hProcess = ::OpenProcess( PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoClose(hProcess);

		DWORD flag=0;
		if(isDebug)
			flag=CALL_API_DEBUG;
		DWORD dwHandle=RemoteGetModuleHandle(hProcess,dllPath,flag);
		return dwHandle;
	}
	virtual DWORD __stdcall GetProc(DWORD pid,DWORD dllHandle,VARIANT proc,BOOL isDebug)
	{
		HANDLE hProcess = ::OpenProcess( PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoClose(hProcess);

		if(proc.vt==VT_BSTR)
		{
			CString procName(proc.bstrVal);
			DWORD addr=RemoteGetProcAddress(hProcess,dllHandle,procName,isDebug);
			return addr;
		}
		else
		{
			CComVariant vProc(proc);
			vProc.ChangeType(VT_UINT);
			DWORD addr=RemoteGetProcAddress(hProcess,dllHandle,vProc.uintVal,isDebug);
			return addr;
		}
	}
	/*
	flag = 0 normal (not flag)
		 = 1 debug
		 = 2 wait api return
		 = 3 combine 1 and 2
	*/
	virtual DWORD __stdcall CallAddr(DWORD pid,DWORD addr,DWORD flag)
	{
		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			mov eax, [esp+4]
			call eax
			retn 4
			nop
			nop

		end start

		end
		*/
		unsigned char code[0x0C]={
				0x90,0x8B,0x44,0x24,0x04,0xFF,0xD0,0xC2,0x04,0x00,0x90,0x90
			};

		HANDLE hProcess = ::OpenProcess( PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoClose(hProcess);

		DWORD dwLen=sizeof(code);
		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0x0C);
		
		DWORD ret=RemoteShellCode(hProcess,shellcode,dwLen,addr,flag);
		return ret;
	}	
	/*
	flag = 0 normal (not flag)
		 = 1 debug
		 = 2 wait api return
		 = 3 combine 1 and 2
	*/
	virtual DWORD __stdcall CallAddr2(DWORD pid,DWORD addr,DWORD flag,VARIANT vals)
	{
		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			call Delta
		Delta:
			pop ebp
			mov edi,[esp+4]
			mov ecx,[ebp + (offset ArgNum - Delta)]
			lea edx,[ebp + (offset ArgsPtr - Delta)]
			mov eax,ecx
			shl eax,2
			add eax,edx
		PushArgs:	
			sub eax,4
			push [eax]
			loop PushArgs
			call edi
		Quit:	
			retn 4
			
		ArgNum dd ? ;fill in runtime
		ArgsPtr dd ? ;fill in runtime

		end start

		end
		*/
		unsigned char code[0x24]={
				0x90,0xE8,0x00,0x00,0x00,0x00,0x5D,0x8B,0x7C,0x24,0x04,0x8B,0x4D,0x1E,0x8D,0x55,0x22,0x8B,0xC1,0xC1,0xE0,0x02,0x03,0xC2,0x83,0xE8,0x04,0xFF,0x30,0xE2,0xF9,0xFF
				,0xD7,0xC2,0x04
			};

		HANDLE hProcess = ::OpenProcess( PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE ,FALSE, pid );
		if(!hProcess)
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"不能打开目标进程！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		AutoCloseHandle autoClose(hProcess);	

		typedef std::map<UINT,CString> StrParams;
		UINT pcount=0;
		UINT params[16];
		StrParams strparams;
		UINT strslen=0;
		
		ParseArguments(vals,params,pcount,strparams,strslen);
		if(pcount==0)
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"必须要指定参数才能调用带参数过程！","Inject Error",MB_OK);
			}
			return FALSE;
		}

		
		DWORD dwLen=sizeof(code)+4+pcount*4+strslen;
		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0x24);
		*(DWORD*)(shellcode+0x24)=(DWORD)pcount;

		LPVOID pProc = ::VirtualAllocEx( hProcess, NULL, dwLen, MEM_COMMIT, PAGE_EXECUTE_READWRITE );
		if(!pProc)
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中分配shellcode内存失败！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		else
		{
			//设定字符串及其在目标进程空间的起始地址，设定参数值
			DWORD strbase=(DWORD)(shellcode+0x24+4+pcount*4);
			//StrParams
			for(UINT i=0;i<pcount;i++)
			{
				StrParams::iterator it=strparams.find(i);
				if(it!=strparams.end())
				{
					params[i]=strbase-(DWORD)shellcode+(DWORD)pProc;//目标进程空间地址
					CString& str=it->second;
					DWORD strlen=str.GetLength();
					::memcpy((LPVOID)strbase,(LPCVOID)(LPCSTR)str,strlen);
					strbase+=strlen+1;
				}
			}
			for(int i=0;i<pcount;i++)
			{
				*(DWORD*)(shellcode+0x28+i*4)=params[i];
			}
		}

		DWORD ret=RemoteShellCode(hProcess,shellcode,dwLen,addr,flag,pProc);		
		return ret;
	}
	virtual void __stdcall Initialize(void)
	{
		owner->Initialize();
		AdjustPrivilege(TRUE);
	}
	virtual void __stdcall RefreshProcessList(void)
	{
		owner->RefreshProcessList();
	}
	virtual void __stdcall Hook(BSTR hookDll)
	{
		owner->Hook(CString(hookDll));
	}
	virtual void __stdcall UnHook(void)
	{
		owner->UnHook();
	}
private:
	DWORD RemoteShellCode(HANDLE hProcess,char* shellcode,DWORD dwLen,DWORD arg,DWORD flag,LPVOID pProc=0)
	{
		DWORD ret=TRUE;
		BOOL r=TRUE;
		DWORD dw=0;
		DWORD dwID=0,dwWritten=0;
		
		if(!pProc)
			pProc = ::VirtualAllocEx( hProcess, NULL, dwLen, MEM_COMMIT, PAGE_EXECUTE_READWRITE );
		if( pProc && ::WriteProcessMemory(hProcess, pProc, shellcode,dwLen, &dwWritten))
		{
			if(dwWritten != dwLen)
			{
				if(flag & CALL_API_DEBUG)
				{
					::MessageBox(owner->dlg.m_hWnd,"在目标进程中写入shellcode字节数与要写入字节数不等！","Inject Error",MB_OK);
				}
				r=::VirtualFreeEx( hProcess, pProc, dwLen, MEM_DECOMMIT );
				ret=FALSE;
			}
			else
			{
				if(flag & CALL_API_DEBUG)
				{
					CString temp;
					temp.Format("现在可以在目标进程0x%8.8X处设置断点，然后点‘确定’以调试目标进程执行\r\nshellcode的情况。",(DWORD)pProc);
					::MessageBox(owner->dlg.m_hWnd,temp,"Inject Debug",MB_OK);
				}
				HANDLE hThread = ::CreateRemoteThread( hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pProc,(LPVOID)arg,0,&dwID ); 
				DWORD time=CALL_API_TIME;//等待CALL_API_TIME ms的时间，如果执行失败时间应该够了，执行成功则无需等待了。
				if(flag & CALL_API_WAIT)
				{
					time=INFINITE;
				}
				dw=::WaitForSingleObject( hThread,time );
				//GetProcAddress的返回值
				r=::GetExitCodeThread( hThread, &dw );
				if(r)
				{
					if(!dw)
					{
						if(flag & CALL_API_DEBUG)
						{
							::MessageBox(owner->dlg.m_hWnd,"目标进程执行shellcode/GetProcAddress失败或目标API返回0！","Inject Error",MB_OK);
						}
						ret=FALSE;
					}
					else
					{
						ret=dw;
					}
				}
				r=::CloseHandle( hThread );
				
				r=::VirtualFreeEx( hProcess, pProc, dwLen, MEM_DECOMMIT );
			}
		}
		else
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中分配shellcode内存失败！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}
		return ret;
	}
	BOOL RemoteLoadLibrary(HANDLE hProcess,const CString& dllPath,BOOL isDebug)
	{
		BOOL ret=TRUE;
		BOOL r=TRUE;
		DWORD dw=0;
		// 向目标进程地址空间写入DLL名称
		DWORD dwSize=0, dwWritten=0;
		dwSize = dllPath.GetLength()+1;
		LPVOID lpBuf = ::VirtualAllocEx( hProcess, NULL, dwSize, MEM_COMMIT, PAGE_EXECUTE_READWRITE );
		if (lpBuf && ::WriteProcessMemory( hProcess, lpBuf, (LPVOID)(LPCSTR)dllPath, dwSize, &dwWritten ) )
		{
  			// 要写入字节数与实际写入字节数不相等，仍属失败
  			if ( dwWritten != dwSize )
  			{
				if(isDebug)
				{
					::MessageBox(owner->dlg.m_hWnd,"在目标进程中写入LoadLibraryA参数字节数与要写入字节数不等！","Inject Error",MB_OK);
				}
				r=::VirtualFreeEx( hProcess, lpBuf, dwSize, MEM_DECOMMIT );				
				ret=FALSE;
  			}
			else
			{
				// 使目标进程调用LoadLibrary，加载DLL
				DWORD dwID=0;
				LPVOID pFunc = LoadLibraryA;
				if(isDebug)
				{
					CString temp;
					temp.Format("现在可以在目标进程0x%8.8X处设置断点，然后点‘确定’以调试目标进程执行\r\nLoadLibraryA(\"%s\")\r\n的情况。",(DWORD)pFunc,dllPath);
					::MessageBox(owner->dlg.m_hWnd,temp,"Inject Debug",MB_OK);
				}
				HANDLE hThread = ::CreateRemoteThread( hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pFunc, lpBuf, 0, &dwID );
				// 等待LoadLibrary加载完毕
				dw=::WaitForSingleObject( hThread, INFINITE );
				r=::GetExitCodeThread( hThread, &dw );
				if(r && !dw)
				{
					if(isDebug)
					{
						::MessageBox(owner->dlg.m_hWnd,"目标进程执行LoadLibraryA失败！","Inject Error",MB_OK);
					}
					ret=FALSE;
				}
				r=::CloseHandle( hThread );

				// 释放目标进程中申请的空间
				r=::VirtualFreeEx( hProcess, lpBuf, dwSize, MEM_DECOMMIT );
			}
		}
		else
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中分配LoadLibraryA参数内存失败！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}		

		return ret;
	}
	BOOL RemoteFreeLibrary(HANDLE hProcess,const CString& dllPath,BOOL isDebug)
	{		
		DWORD flag=0;
		if(isDebug)
			flag=CALL_API_DEBUG;
		DWORD dwHandle=RemoteGetModuleHandle(hProcess,dllPath,flag);
		if(!dwHandle)
			return FALSE;

		BOOL ret=TRUE;
		BOOL r=TRUE;
		DWORD dw=0,dwID=0;		
		// 使目标进程调用FreeLibrary，卸载DLL
		DWORD pFunc = (DWORD)FreeLibrary;
		if(isDebug)
		{
			CString temp;
			temp.Format("现在可以在目标进程0x%8.8X处设置断点，然后点‘确定’以调试目标进程执行\r\nFreeLibrary(0x%8.8X)\r\n的情况。",(DWORD)pFunc,dwHandle);
			::MessageBox(owner->dlg.m_hWnd,temp,"Inject Debug",MB_OK);
		}
		HANDLE hThread = ::CreateRemoteThread( hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pFunc, (LPVOID)dwHandle, 0, &dwID );
		// 等待FreeLibrary卸载完毕
		dw=::WaitForSingleObject( hThread, INFINITE );
		r=::GetExitCodeThread( hThread, &dw );
		if(r && !dw)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"目标进程执行FreeLibrary失败！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}
		r=::CloseHandle( hThread );

		return ret;
	}
	DWORD RemoteGetModuleHandle(HANDLE hProcess,const CString& dllPath,BOOL isDebug)
	{
		DWORD flag=CALL_API_WAIT;
		if(isDebug)
			flag|=CALL_API_DEBUG;

		DWORD ret=TRUE;
		BOOL r=TRUE;
		DWORD dw=0;
		// 向目标进程地址空间写入DLL名称
		DWORD dwSize=0, dwWritten=0;
		dwSize = dllPath.GetLength()+1;
		LPVOID lpBuf = ::VirtualAllocEx( hProcess, NULL, dwSize, MEM_COMMIT, PAGE_EXECUTE_READWRITE );
		if (lpBuf && ::WriteProcessMemory( hProcess, lpBuf, (LPVOID)(LPCSTR)dllPath, dwSize, &dwWritten ) )
		{
  			// 要写入字节数与实际写入字节数不相等，仍属失败
  			if ( dwWritten != dwSize )
  			{
				if(flag & CALL_API_DEBUG)
				{
					::MessageBox(owner->dlg.m_hWnd,"在目标进程中写入GetModuleHandleA参数字节数与要写入字节数不等！","Inject Error",MB_OK);
				}
				r=::VirtualFreeEx( hProcess, lpBuf, dwSize, MEM_DECOMMIT );		
				ret=FALSE;
  			}
			else
			{				
				// 使目标进程调用GetModuleHandle，获得DLL在目标进程中的句柄
				DWORD dwHandle=0, dwID=0;
				LPVOID pFunc = GetModuleHandleA;
				if(flag & CALL_API_DEBUG)
				{
					CString temp;
					temp.Format("现在可以在目标进程0x%8.8X处设置断点，然后点‘确定’以调试目标进程执行\r\nGetModuleHandleA(\"%s\")\r\n的情况。",(DWORD)pFunc,dllPath);
					::MessageBox(owner->dlg.m_hWnd,temp,"Inject Debug",MB_OK);
				}
				HANDLE hThread = ::CreateRemoteThread( hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pFunc, lpBuf, 0, &dwID );
				// 等待GetModuleHandle运行完毕
				dw=::WaitForSingleObject( hThread, INFINITE );
				// 获得GetModuleHandle的返回值
				r=::GetExitCodeThread( hThread, &dwHandle );
				r=::CloseHandle( hThread );

				// 释放目标进程中申请的空间
				r=::VirtualFreeEx( hProcess, lpBuf, dwSize, MEM_DECOMMIT );
				
				if(!dwHandle)
				{
					if(flag & CALL_API_DEBUG)
					{
						::MessageBox(owner->dlg.m_hWnd,"目标进程中找不到指定模块！","Inject Error",MB_OK);
					}
					ret=FALSE;
				}
				else
				{
					ret=dwHandle;
				}
			}
		}
		else
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中分配GetModuleHandleA参数内存失败！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}

		return ret;
	}
	DWORD RemoteGetProcAddress(HANDLE hProcess,DWORD dllHandle,const CString& procName,BOOL isDebug)
	{
		DWORD flag=CALL_API_WAIT;
		if(isDebug)
			flag|=CALL_API_DEBUG;

		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			call Delta
		Delta:
			pop ebp
			lea eax, [ebp + (offset ApiName - Delta)]
			push eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			push eax	
			mov eax, [esp+0ch]
			call eax
			retn 4
			
		ModuleHandle dd 0 ;fill in runtime
		ApiName dd ? ;

		end start

		end
		*/
		unsigned char code[0x18]={
				0x90,0xE8,0x00,0x00,0x00,0x00,0x5D,0x8D,0x45,0x16,0x50,0x8B,0x45,0x12,0x50,0x8B,0x44,0x24,0x0C,0xFF,0xD0,0xC2,0x04
			};
		
		DWORD pFunc=(DWORD)GetProcAddress;
		DWORD dwLen=sizeof(code)+4+procName.GetLength()+1;

		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0x18);
		*(DWORD*)(shellcode+0x18)=dllHandle;
		DWORD len=(DWORD)procName.GetLength();
		::memcpy(shellcode+0x1C,(LPCVOID)(LPCSTR)procName,procName.GetLength());

		DWORD ret=RemoteShellCode(hProcess,shellcode,dwLen,pFunc,flag);
		return ret;
	}
	DWORD RemoteGetProcAddress(HANDLE hProcess,DWORD dllHandle,DWORD ordinal,BOOL isDebug)
	{
		DWORD flag=CALL_API_WAIT;
		if(isDebug)
			flag|=CALL_API_DEBUG;

		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			call Delta
		Delta:
			pop ebp
			mov eax, [ebp + (offset ApiOrdinal - Delta)]
			push eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			push eax	
			mov eax, [esp+0ch]
			call eax
			retn 4
			
		ModuleHandle dd 0 ;fill in runtime
		ApiOrdinal dd 0 ;fill in runtime

		end start

		end
		*/
		unsigned char code[0x18]={
				0x90,0xE8,0x00,0x00,0x00,0x00,0x5D,0x8B,0x45,0x16,0x50,0x8B,0x45,0x12,0x50,0x8B,0x44,0x24,0x0C,0xFF,0xD0,0xC2,0x04,0x00
			};
		
		DWORD pFunc=(DWORD)GetProcAddress;
		DWORD dwLen=sizeof(code)+8;

		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0x18);
		*(DWORD*)(shellcode+0x18)=dllHandle;
		*(DWORD*)(shellcode+0x1C)=ordinal;

		DWORD ret=RemoteShellCode(hProcess,shellcode,dwLen,pFunc,flag);
		return ret;
	}
	BOOL NtStartup(HANDLE hProcess,HANDLE hThread,const CString& dllPath,const CString& procName,DWORD ordinal,BOOL isDebug,DWORD dllHandle=0,DWORD procRva=0)
	{
		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			nop
			nop
			nop
			nop
			pushad
			call Delta
		Delta:
			pop ebp
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jnz CheckAddr
			lea eax, [ebp + (offset ModuleHandle - Delta)]
			push eax 
			mov eax, [ebp + (offset DllNamePtr - Delta)]
			push eax
			push 0
			mov eax, [ebp + (offset DllPathPtr - Delta)]
			push eax
			mov eax, [ebp + (offset LdrLoadDll - Delta)]
			call eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jz Quit	
		CheckAddr:	
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz GetAddr
			add eax, [ebp + (offset ModuleHandle - Delta)]
			jmp CallFunc
		GetAddr:	
			lea eax, [ebp + (offset FunctionAddress - Delta)]
			push eax
			mov eax, [ebp + (offset Ordinal - Delta)]
			push eax
			mov eax, [ebp + (offset ApiNamePtr - Delta)]
			push eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			push eax	
			mov eax, [ebp + (offset LdrGetProcedureAddress - Delta)]
			call eax
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz Quit
		CallFunc:	
			call eax
		Quit:	
			popad
			mov esp,00000000h
			db 0e9h

		OEP dd 0	
		ModuleHandle dd 0
		FunctionAddress dd 0
		LdrLoadDll dd 0
		LdrGetProcedureAddress dd 0
		DllPathPtr dd 0
		DllNamePtr dd 0
		ApiNamePtr dd 0
		Ordinal dd 0
		Strings db ?


		end start

		end
		*/
		unsigned char code[0x8C]={
				0x90,0x90,0x90,0x90,0x90,0x60,0xE8,0x00,0x00,0x00,0x00,0x5D,0x8B,0x85,0x81,0x00,0x00,0x00,0x85,0xC0,0x75,0x29,0x8D,0x85,0x81,0x00,0x00,0x00,0x50,0x8B,0x85,0x95
				,0x00,0x00,0x00,0x50,0x6A,0x00,0x8B,0x85,0x91,0x00,0x00,0x00,0x50,0x8B,0x85,0x89,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0x81,0x00,0x00,0x00,0x85,0xC0,0x74,0x42,0x8B
				,0x85,0x85,0x00,0x00,0x00,0x85,0xC0,0x74,0x08,0x03,0x85,0x81,0x00,0x00,0x00,0xEB,0x2E,0x8D,0x85,0x85,0x00,0x00,0x00,0x50,0x8B,0x85,0x9D,0x00,0x00,0x00,0x50,0x8B
				,0x85,0x99,0x00,0x00,0x00,0x50,0x8B,0x85,0x81,0x00,0x00,0x00,0x50,0x8B,0x85,0x8D,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0x85,0x00,0x00,0x00,0x85,0xC0,0x74,0x02,0xFF
				,0xD0,0x61,0xBC,0x00,0x00,0x00,0x00,0xE9,0x00,0x00,0x00,0x00
			};
		
		int pi=dllPath.ReverseFind('\\');
		CString path;
		CString dll;
		if(pi>=0)
		{
			path=dllPath.Left(pi)+";";
			dll=dllPath.Mid(pi+1);
		}
		else
		{
			dll=dllPath;
		}
		/*
		dll name的格式为UNICODE_STRING格式：
		typedef struct _UNICODE_STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PWSTR  Buffer;
		} UNICODE_STRING *PUNICODE_STRING;
		proc name的格式为ANSI_STRING格式：
		typedef struct _STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PCHAR  Buffer;
		} ANSI_STRING *PANSI_STRING;
		*/
		DWORD nameslen=dll.GetLength()*2+2+8+procName.GetLength()+1+8;
		if(!path.IsEmpty())
		{
			nameslen+=path.GetLength()*2+2+4;
		}

		DWORD dwLen=sizeof(code)+32+nameslen;
		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		HMODULE handle=::GetModuleHandle("NTDLL.dll");
		DWORD dwLdrLoadDll=(DWORD)::GetProcAddress(handle,"LdrLoadDll");
		DWORD dwLdrGetProcedureAddress=(DWORD)::GetProcAddress(handle,"LdrGetProcedureAddress");

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0x8C);
		*(DWORD*)(shellcode+0x8C)=dllHandle;
		*(DWORD*)(shellcode+0x90)=procRva;
		*(DWORD*)(shellcode+0x94)=dwLdrLoadDll;
		*(DWORD*)(shellcode+0x98)=dwLdrGetProcedureAddress;
		*(DWORD*)(shellcode+0xA8)=ordinal;
        		
		BOOL ret=TRUE;
		BOOL r=TRUE;
		DWORD dwProtect = 0;
		DWORD dwWritten = 0;

		CONTEXT* pCtx=new CONTEXT[1];
		::ZeroMemory(pCtx, sizeof(CONTEXT));
		pCtx->ContextFlags = CONTEXT_FULL;
		r=::GetThreadContext(hThread,pCtx);

		DWORD dwCodeBase = (pCtx->Esp - dwLen) & ~0x1fu;        // Cache-line align.
		*(DWORD*)(shellcode+0x83)=pCtx->Esp;
		*(DWORD*)(shellcode+0x88)=pCtx->Eip-(dwCodeBase+0x8C);

		//设定字符串及其在目标进程空间的起始地址，设定参数值
		DWORD strbase=(DWORD)(shellcode+0x8C+32);
				
		if(!path.IsEmpty())
		{
			BSTR s0=path.AllocSysString();
			DWORD len=path.GetLength()*2+2+4;
			::memcpy((LPVOID)strbase,(LPCVOID)((DWORD)s0-4),len);
			*(DWORD*)(shellcode+0x9C)=strbase+4-(DWORD)shellcode+dwCodeBase;
			::SysFreeString(s0);
			strbase+=len;
		}
		else
		{
			*(DWORD*)(shellcode+0x9C)=0;
		}

		BSTR s=dll.AllocSysString();
		DWORD len=dll.GetLength()*2+2;
		*(USHORT*)strbase=len-2;
		*(USHORT*)(strbase+2)=len;
		*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
		::memcpy((LPVOID)(strbase+8),(LPCVOID)(DWORD)s,len);
		*(DWORD*)(shellcode+0xA0)=strbase-(DWORD)shellcode+dwCodeBase;
		::SysFreeString(s);
		strbase+=len+8;

		len=procName.GetLength()+1;
		*(USHORT*)strbase=len-1;
		*(USHORT*)(strbase+2)=len;
		*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
		::memcpy((LPVOID)(strbase+8),(LPCVOID)(LPCSTR)procName,len);
		*(DWORD*)(shellcode+0xA4)=strbase-(DWORD)shellcode+dwCodeBase;
		strbase+=len+8;
			
		//将shellcode写入目标进程并修改EIP指向shellcode	
		pCtx->Esp = dwCodeBase - 4;
		pCtx->Eip = dwCodeBase;
		if(isDebug)
		{
			shellcode[0]=0xCC;
		}

		if (!::VirtualProtectEx(hProcess, (PBYTE)dwCodeBase, dwLen, PAGE_EXECUTE_READWRITE, &dwProtect)) 
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"改变目标进程堆栈内存权限失败！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}
		else if (!::WriteProcessMemory(hProcess, (PBYTE)dwCodeBase, shellcode, dwLen,&dwWritten) || dwWritten != dwLen) 
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中写入shellcode字节数与要写入字节数不等！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}
		if(isDebug)
		{
			CString temp;
			temp.Format("现在可以在目标进程0x%8.8X处设置断点，然后点‘确定’以调试目标进程执行\r\nshellcode的情况。",(DWORD)dwCodeBase);
			::MessageBox(owner->dlg.m_hWnd,temp,"Inject Debug",MB_OK);
		}
		
		r=::FlushInstructionCache(hProcess, (PBYTE)dwCodeBase, dwLen);
		r=::SetThreadContext(hThread, pCtx);
		delete[] pCtx;	
		return ret;
	}
	BOOL NtStartup2(HANDLE hProcess,HANDLE hThread,const CString& dllPath,const CString& procName,DWORD ordinal,BOOL isDebug,VARIANT vals,DWORD dllHandle=0,DWORD procRva=0)
	{
		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			nop
			nop
			nop
			nop
			pushad
			call Delta
		Delta:
			pop ebp
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jnz CheckAddr
			lea eax, [ebp + (offset ModuleHandle - Delta)]
			push eax 
			mov eax, [ebp + (offset DllNamePtr - Delta)]
			push eax
			push 0
			mov eax, [ebp + (offset DllPathPtr - Delta)]
			push eax
			mov eax, [ebp + (offset LdrLoadDll - Delta)]
			call eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jz Quit
		CheckAddr:
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz GetAddr
			add eax, [ebp + (offset ModuleHandle - Delta)]
			jmp CallFunc
		GetAddr:	
			lea eax, [ebp + (offset FunctionAddress - Delta)]
			push eax
			mov eax, [ebp + (offset Ordinal - Delta)]
			push eax
			mov eax, [ebp + (offset ApiNamePtr - Delta)]
			push eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			push eax	
			mov eax, [ebp + (offset LdrGetProcedureAddress - Delta)]
			call eax
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz Quit
		CallFunc:	
			mov ebx,eax
			mov ecx,[ebp + (offset ArgNum - Delta)]
			lea edx,[ebp + (offset ArgsPtr - Delta)]
			mov eax,ecx
			shl eax,2
			add eax,edx
		PushArgs:	
			sub eax,4
			push [eax]
			loop PushArgs
			call ebx
		Quit:	
			popad
			mov esp,00000000h
			db 0e9h
			
		OEP dd 0
		ModuleHandle dd 0
		FunctionAddress dd 0
		LdrLoadDll dd 0
		LdrGetProcedureAddress dd 0
		DllPathPtr dd 0
		DllNamePtr dd 0
		ApiNamePtr dd 0
		Ordinal dd 0
		ArgNum dd 0 ;fill in runtime
		ArgsPtr dd 0 ;fill in runtime


		end start

		end
		*/
		unsigned char code[0xA8]={
				0x90,0x90,0x90,0x90,0x90,0x60,0xE8,0x00,0x00,0x00,0x00,0x5D,0x8B,0x85,0x9D,0x00,0x00,0x00,0x85,0xC0,0x75,0x29,0x8D,0x85,0x9D,0x00,0x00,0x00,0x50,0x8B,0x85,0xB1
				,0x00,0x00,0x00,0x50,0x6A,0x00,0x8B,0x85,0xAD,0x00,0x00,0x00,0x50,0x8B,0x85,0xA5,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0x9D,0x00,0x00,0x00,0x85,0xC0,0x74,0x5E,0x8B
				,0x85,0xA1,0x00,0x00,0x00,0x85,0xC0,0x74,0x08,0x03,0x85,0x9D,0x00,0x00,0x00,0xEB,0x2E,0x8D,0x85,0xA1,0x00,0x00,0x00,0x50,0x8B,0x85,0xB9,0x00,0x00,0x00,0x50,0x8B
				,0x85,0xB5,0x00,0x00,0x00,0x50,0x8B,0x85,0x9D,0x00,0x00,0x00,0x50,0x8B,0x85,0xA9,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0xA1,0x00,0x00,0x00,0x85,0xC0,0x74,0x1E,0x8B
				,0xD8,0x8B,0x8D,0xBD,0x00,0x00,0x00,0x8D,0x95,0xC1,0x00,0x00,0x00,0x8B,0xC1,0xC1,0xE0,0x02,0x03,0xC2,0x83,0xE8,0x04,0xFF,0x30,0xE2,0xF9,0xFF,0xD3,0x61,0xBC,0x00
				,0x00,0x00,0x00,0xE9,0x00,0x00,0x00,0x00
			};


		typedef std::map<UINT,CString> StrParams;
		UINT pcount=0;
		UINT params[16];
		StrParams strparams;
		UINT strslen=0;
		
		ParseArguments(vals,params,pcount,strparams,strslen);
		if(pcount==0)
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"必须要指定参数才能调用带参数过程！","Inject Error",MB_OK);
			}
			return FALSE;
		}

		int pi=dllPath.ReverseFind('\\');
		CString path;
		CString dll;
		if(pi>=0)
		{
			path=dllPath.Left(pi)+";";
			dll=dllPath.Mid(pi+1);
		}
		else
		{
			dll=dllPath;
		}
		/*
		dll name的格式为UNICODE_STRING格式：
		typedef struct _UNICODE_STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PWSTR  Buffer;
		} UNICODE_STRING *PUNICODE_STRING;
		proc name的格式为ANSI_STRING格式：
		typedef struct _STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PCHAR  Buffer;
		} ANSI_STRING *PANSI_STRING;
		*/
		DWORD nameslen=dll.GetLength()*2+2+8+procName.GetLength()+1+8;
		if(!path.IsEmpty())
		{
			nameslen+=path.GetLength()*2+2+4;
		}

		DWORD dwLen=sizeof(code)+36+pcount*4+nameslen+strslen;
		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		HMODULE handle=::GetModuleHandle("NTDLL.dll");
		DWORD dwLdrLoadDll=(DWORD)::GetProcAddress(handle,"LdrLoadDll");
		DWORD dwLdrGetProcedureAddress=(DWORD)::GetProcAddress(handle,"LdrGetProcedureAddress");

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0xA8);
		*(DWORD*)(shellcode+0xA8)=dllHandle;
		*(DWORD*)(shellcode+0xAC)=procRva;
		*(DWORD*)(shellcode+0xB0)=dwLdrLoadDll;
		*(DWORD*)(shellcode+0xB4)=dwLdrGetProcedureAddress;
		*(DWORD*)(shellcode+0xC4)=ordinal;
		*(DWORD*)(shellcode+0xC8)=(DWORD)pcount;
			
		BOOL ret=TRUE;
		BOOL r=TRUE;
		DWORD dwProtect = 0;
		DWORD dwWritten = 0;

		CONTEXT* pCtx=new CONTEXT[1];
		::ZeroMemory(pCtx, sizeof(CONTEXT));
		pCtx->ContextFlags = CONTEXT_FULL;
		r=::GetThreadContext(hThread,pCtx);

		DWORD dwCodeBase = (pCtx->Esp - dwLen) & ~0x1fu;        // Cache-line align.
		*(DWORD*)(shellcode+0x9F)=pCtx->Esp;
		*(DWORD*)(shellcode+0xA4)=pCtx->Eip-(dwCodeBase+0xA8);

		//设定字符串及其在目标进程空间的起始地址，设定参数值
		DWORD strbase=(DWORD)(shellcode+0xA8+36+pcount*4);

		if(!path.IsEmpty())
		{
			BSTR s0=path.AllocSysString();
			DWORD len=path.GetLength()*2+2+4;
			::memcpy((LPVOID)strbase,(LPCVOID)((DWORD)s0-4),len);
			*(DWORD*)(shellcode+0xB8)=strbase+4-(DWORD)shellcode+dwCodeBase;
			::SysFreeString(s0);
			strbase+=len;
		}
		else
		{
			*(DWORD*)(shellcode+0xB8)=0;
		}

		BSTR s=dll.AllocSysString();
		DWORD len=dll.GetLength()*2+2;
		*(USHORT*)strbase=len-2;
		*(USHORT*)(strbase+2)=len;
		*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
		::memcpy((LPVOID)(strbase+8),(LPCVOID)(DWORD)s,len);
		*(DWORD*)(shellcode+0xBC)=strbase-(DWORD)shellcode+dwCodeBase;
		::SysFreeString(s);
		strbase+=len+8;

		len=procName.GetLength()+1;
		*(USHORT*)strbase=len-1;
		*(USHORT*)(strbase+2)=len;
		*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
		::memcpy((LPVOID)(strbase+8),(LPCVOID)(LPCSTR)procName,len);
		*(DWORD*)(shellcode+0xC0)=strbase-(DWORD)shellcode+dwCodeBase;
		strbase+=len+8;

		//StrParams
		for(UINT i=0;i<pcount;i++)
		{
			StrParams::iterator it=strparams.find(i);
			if(it!=strparams.end())
			{
				params[i]=strbase-(DWORD)shellcode+dwCodeBase;//目标进程空间地址
				CString& str=it->second;
				DWORD strlen=str.GetLength();
				::memcpy((LPVOID)strbase,(LPCVOID)(LPCSTR)str,strlen);
				strbase+=strlen+1;
			}
		}
		for(int i=0;i<pcount;i++)
		{
			*(DWORD*)(shellcode+0xCC+i*4)=params[i];
		}

		//将shellcode写入目标进程并修改EIP指向shellcode			    
		pCtx->Esp = dwCodeBase - 4;
		pCtx->Eip = dwCodeBase;
		if(isDebug)
		{
			shellcode[0]=0xCC;
		}

		if (!::VirtualProtectEx(hProcess, (PBYTE)dwCodeBase, dwLen, PAGE_EXECUTE_READWRITE, &dwProtect)) 
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"改变目标进程堆栈内存权限失败！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}
		else if (!::WriteProcessMemory(hProcess, (PBYTE)dwCodeBase, shellcode, dwLen,&dwWritten) || dwWritten != dwLen) 
		{
			if(isDebug)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中写入shellcode字节数与要写入字节数不等！","Inject Error",MB_OK);
			}
			ret=FALSE;
		}
		if(isDebug)
		{
			CString temp;
			temp.Format("现在可以在目标进程0x%8.8X处设置断点，然后点‘确定’以调试目标进程执行\r\nshellcode的情况。",(DWORD)dwCodeBase);
			::MessageBox(owner->dlg.m_hWnd,temp,"Inject Debug",MB_OK);
		}

		r=::FlushInstructionCache(hProcess, (PBYTE)dwCodeBase, dwLen);
		r=::SetThreadContext(hThread, pCtx);
		delete[] pCtx;		
		return ret;
	}
	DWORD NtStartupRT(HANDLE hProcess,HANDLE hThread,const CString& dllPath,const CString& procName,DWORD ordinal,DWORD flag,DWORD dllHandle=0,DWORD procRva=0)
	{
		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			nop
			call Delta
		Delta:
			pop ebp
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jnz CheckAddr
			lea eax, [ebp + (offset ModuleHandle - Delta)]
			push eax 
			mov eax, [ebp + (offset DllNamePtr - Delta)]
			push eax
			push 0
			mov eax, [ebp + (offset DllPathPtr - Delta)]
			push eax
			mov eax, [ebp + (offset LdrLoadDll - Delta)]
			call eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jz Quit	
		CheckAddr:	
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz GetAddr
			add eax, [ebp + (offset ModuleHandle - Delta)]
			jmp CallFunc
		GetAddr:	
			lea eax, [ebp + (offset FunctionAddress - Delta)]
			push eax
			mov eax, [ebp + (offset Ordinal - Delta)]
			push eax
			mov eax, [ebp + (offset ApiNamePtr - Delta)]
			push eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			push eax	
			mov eax, [ebp + (offset LdrGetProcedureAddress - Delta)]
			call eax
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz Quit
		CallFunc:	
			call eax
		Quit:	
			ret 4
				
		ModuleHandle dd 0
		FunctionAddress dd 0
		LdrLoadDll dd 0
		LdrGetProcedureAddress dd 0
		DllPathPtr dd 0
		DllNamePtr dd 0
		ApiNamePtr dd 0
		Ordinal dd 0
		Strings db ?


		end start

		end
		*/
		unsigned char code[0x80]={
				0x90,0x90,0xE8,0x00,0x00,0x00,0x00,0x5D,0x8B,0x85,0x79,0x00,0x00,0x00,0x85,0xC0,0x75,0x29,0x8D,0x85,0x79,0x00,0x00,0x00,0x50,0x8B,0x85,0x8D,0x00,0x00,0x00,0x50
				,0x6A,0x00,0x8B,0x85,0x89,0x00,0x00,0x00,0x50,0x8B,0x85,0x81,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0x79,0x00,0x00,0x00,0x85,0xC0,0x74,0x42,0x8B,0x85,0x7D,0x00,0x00
				,0x00,0x85,0xC0,0x74,0x08,0x03,0x85,0x79,0x00,0x00,0x00,0xEB,0x2E,0x8D,0x85,0x7D,0x00,0x00,0x00,0x50,0x8B,0x85,0x95,0x00,0x00,0x00,0x50,0x8B,0x85,0x91,0x00,0x00
				,0x00,0x50,0x8B,0x85,0x79,0x00,0x00,0x00,0x50,0x8B,0x85,0x85,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0x7D,0x00,0x00,0x00,0x85,0xC0,0x74,0x02,0xFF,0xD0,0xC2,0x04,0x00
			};
		
		int pi=dllPath.ReverseFind('\\');
		CString path;
		CString dll;
		if(pi>=0)
		{
			path=dllPath.Left(pi)+";";
			dll=dllPath.Mid(pi+1);
		}
		else
		{
			dll=dllPath;
		}
		/*
		dll name的格式为UNICODE_STRING格式：
		typedef struct _UNICODE_STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PWSTR  Buffer;
		} UNICODE_STRING *PUNICODE_STRING;
		proc name的格式为ANSI_STRING格式：
		typedef struct _STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PCHAR  Buffer;
		} ANSI_STRING *PANSI_STRING;
		*/
		DWORD nameslen=dll.GetLength()*2+2+8+procName.GetLength()+1+8;
		if(!path.IsEmpty())
		{
			nameslen+=path.GetLength()*2+2+4;
		}

		DWORD dwLen=sizeof(code)+32+nameslen;
		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		HMODULE handle=::GetModuleHandle("NTDLL.dll");
		DWORD dwLdrLoadDll=(DWORD)::GetProcAddress(handle,"LdrLoadDll");
		DWORD dwLdrGetProcedureAddress=(DWORD)::GetProcAddress(handle,"LdrGetProcedureAddress");

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0x80);
		*(DWORD*)(shellcode+0x80)=dllHandle;
		*(DWORD*)(shellcode+0x84)=procRva;
		*(DWORD*)(shellcode+0x88)=dwLdrLoadDll;
		*(DWORD*)(shellcode+0x8C)=dwLdrGetProcedureAddress;
		*(DWORD*)(shellcode+0x9C)=ordinal;
        		
		LPVOID pProc = ::VirtualAllocEx( hProcess, NULL, dwLen, MEM_COMMIT, PAGE_EXECUTE_READWRITE );
		if(!pProc)
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中分配shellcode内存失败！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		else
		{
			//设定字符串及其在目标进程空间的起始地址，设定参数值
			DWORD dwCodeBase=(DWORD)pProc;
			DWORD strbase=(DWORD)(shellcode+0x80+32);

			if(!path.IsEmpty())
			{
				BSTR s0=path.AllocSysString();
				DWORD len=path.GetLength()*2+2+4;
				::memcpy((LPVOID)strbase,(LPCVOID)((DWORD)s0-4),len);
				*(DWORD*)(shellcode+0x90)=strbase+4-(DWORD)shellcode+dwCodeBase;
				::SysFreeString(s0);
				strbase+=len;
			}
			else
			{
				*(DWORD*)(shellcode+0x90)=0;
			}

			BSTR s=dll.AllocSysString();
			DWORD len=dll.GetLength()*2+2;
			*(USHORT*)strbase=len-2;
			*(USHORT*)(strbase+2)=len;
			*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
			::memcpy((LPVOID)(strbase+8),(LPCVOID)(DWORD)s,len);
			*(DWORD*)(shellcode+0x94)=strbase-(DWORD)shellcode+dwCodeBase;
			::SysFreeString(s);
			strbase+=len+8;

			len=procName.GetLength()+1;
			*(USHORT*)strbase=len-1;
			*(USHORT*)(strbase+2)=len;
			*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
			::memcpy((LPVOID)(strbase+8),(LPCVOID)(LPCSTR)procName,len);
			*(DWORD*)(shellcode+0x98)=strbase-(DWORD)shellcode+dwCodeBase;
			strbase+=len+8;
		}

		DWORD ret=RemoteShellCode(hProcess,shellcode,dwLen,0,flag,pProc);		
		return ret;
	}
	DWORD NtStartupRT2(HANDLE hProcess,HANDLE hThread,const CString& dllPath,const CString& procName,DWORD ordinal,DWORD flag,VARIANT vals,DWORD dllHandle=0,DWORD procRva=0)
	{
		/*
		.386
		.model flat, stdcall
		option casemap :none

		.code
		start:
			nop
			nop
			call Delta
		Delta:
			pop ebp
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jnz CheckAddr
			lea eax, [ebp + (offset ModuleHandle - Delta)]
			push eax 
			mov eax, [ebp + (offset DllNamePtr - Delta)]
			push eax
			push 0
			mov eax, [ebp + (offset DllPathPtr - Delta)]
			push eax
			mov eax, [ebp + (offset LdrLoadDll - Delta)]
			call eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			test eax,eax
			jz Quit
		CheckAddr:
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz GetAddr
			add eax, [ebp + (offset ModuleHandle - Delta)]
			jmp CallFunc
		GetAddr:	
			lea eax, [ebp + (offset FunctionAddress - Delta)]
			push eax
			mov eax, [ebp + (offset Ordinal - Delta)]
			push eax
			mov eax, [ebp + (offset ApiNamePtr - Delta)]
			push eax
			mov eax, [ebp + (offset ModuleHandle - Delta)]
			push eax	
			mov eax, [ebp + (offset LdrGetProcedureAddress - Delta)]
			call eax
			mov eax,[ebp + (offset FunctionAddress - Delta)]
			test eax,eax
			jz Quit
		CallFunc:	
			mov ebx,eax
			mov ecx,[ebp + (offset ArgNum - Delta)]
			lea edx,[ebp + (offset ArgsPtr - Delta)]
			mov eax,ecx
			shl eax,2
			add eax,edx
		PushArgs:	
			sub eax,4
			push [eax]
			loop PushArgs
			call ebx
		Quit:	
			ret 4
			
		ModuleHandle dd 0
		FunctionAddress dd 0
		LdrLoadDll dd 0
		LdrGetProcedureAddress dd 0
		DllPathPtr dd 0
		DllNamePtr dd 0
		ApiNamePtr dd 0
		Ordinal dd 0
		ArgNum dd 0 ;fill in runtime
		ArgsPtr dd 0 ;fill in runtime


		end start

		end
		*/
		unsigned char code[0x9C]={
				0x90,0x90,0xE8,0x00,0x00,0x00,0x00,0x5D,0x8B,0x85,0x95,0x00,0x00,0x00,0x85,0xC0,0x75,0x29,0x8D,0x85,0x95,0x00,0x00,0x00,0x50,0x8B,0x85,0xA9,0x00,0x00,0x00,0x50
				,0x6A,0x00,0x8B,0x85,0xA5,0x00,0x00,0x00,0x50,0x8B,0x85,0x9D,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0x95,0x00,0x00,0x00,0x85,0xC0,0x74,0x5E,0x8B,0x85,0x99,0x00,0x00
				,0x00,0x85,0xC0,0x74,0x08,0x03,0x85,0x95,0x00,0x00,0x00,0xEB,0x2E,0x8D,0x85,0x99,0x00,0x00,0x00,0x50,0x8B,0x85,0xB1,0x00,0x00,0x00,0x50,0x8B,0x85,0xAD,0x00,0x00
				,0x00,0x50,0x8B,0x85,0x95,0x00,0x00,0x00,0x50,0x8B,0x85,0xA1,0x00,0x00,0x00,0xFF,0xD0,0x8B,0x85,0x99,0x00,0x00,0x00,0x85,0xC0,0x74,0x1E,0x8B,0xD8,0x8B,0x8D,0xB5
				,0x00,0x00,0x00,0x8D,0x95,0xB9,0x00,0x00,0x00,0x8B,0xC1,0xC1,0xE0,0x02,0x03,0xC2,0x83,0xE8,0x04,0xFF,0x30,0xE2,0xF9,0xFF,0xD3,0xC2,0x04,0x00
			};


		typedef std::map<UINT,CString> StrParams;
		UINT pcount=0;
		UINT params[16];
		StrParams strparams;
		UINT strslen=0;
		
		ParseArguments(vals,params,pcount,strparams,strslen);
		if(pcount==0)
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"必须要指定参数才能调用带参数过程！","Inject Error",MB_OK);
			}
			return FALSE;
		}

		int pi=dllPath.ReverseFind('\\');
		CString path;
		CString dll;
		if(pi>=0)
		{
			path=dllPath.Left(pi)+";";
			dll=dllPath.Mid(pi+1);
		}
		else
		{
			dll=dllPath;
		}
		/*
		dll name的格式为UNICODE_STRING格式：
		typedef struct _UNICODE_STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PWSTR  Buffer;
		} UNICODE_STRING *PUNICODE_STRING;
		proc name的格式为ANSI_STRING格式：
		typedef struct _STRING {
			USHORT  Length;
			USHORT  MaximumLength;
			PCHAR  Buffer;
		} ANSI_STRING *PANSI_STRING;
		*/
		DWORD nameslen=dll.GetLength()*2+2+8+procName.GetLength()+1+8;
		if(!path.IsEmpty())
		{
			nameslen+=path.GetLength()*2+2+4;
		}

		DWORD dwLen=sizeof(code)+36+pcount*4+nameslen+strslen;
		char* shellcode=new char[dwLen];
		ArrayRelease<char> array(shellcode);

		HMODULE handle=::GetModuleHandle("NTDLL.dll");
		DWORD dwLdrLoadDll=(DWORD)::GetProcAddress(handle,"LdrLoadDll");
		DWORD dwLdrGetProcedureAddress=(DWORD)::GetProcAddress(handle,"LdrGetProcedureAddress");

		::memset(shellcode,0,dwLen);
		::memcpy(shellcode,code,0x9C);
		*(DWORD*)(shellcode+0x9C)=dllHandle;
		*(DWORD*)(shellcode+0xA0)=procRva;
		*(DWORD*)(shellcode+0xA4)=dwLdrLoadDll;
		*(DWORD*)(shellcode+0xA8)=dwLdrGetProcedureAddress;
		*(DWORD*)(shellcode+0xB8)=ordinal;
		*(DWORD*)(shellcode+0xBC)=(DWORD)pcount;
		
		LPVOID pProc = ::VirtualAllocEx( hProcess, NULL, dwLen, MEM_COMMIT, PAGE_EXECUTE_READWRITE );
		if(!pProc)
		{
			if(flag & CALL_API_DEBUG)
			{
				::MessageBox(owner->dlg.m_hWnd,"在目标进程中分配shellcode内存失败！","Inject Error",MB_OK);
			}
			return FALSE;
		}
		else
		{
			//设定字符串及其在目标进程空间的起始地址，设定参数值
			DWORD dwCodeBase=(DWORD)pProc;
			DWORD strbase=(DWORD)(shellcode+0x9C+36+pcount*4);

			if(!path.IsEmpty())
			{
				BSTR s0=path.AllocSysString();
				DWORD len=path.GetLength()*2+2+4;
				::memcpy((LPVOID)strbase,(LPCVOID)((DWORD)s0-4),len);
				*(DWORD*)(shellcode+0xAC)=strbase+4-(DWORD)shellcode+dwCodeBase;
				::SysFreeString(s0);
				strbase+=len;
			}
			else
			{
				*(DWORD*)(shellcode+0xAC)=0;
			}

			BSTR s=dll.AllocSysString();
			DWORD len=dll.GetLength()*2+2;
			*(USHORT*)strbase=len-2;
			*(USHORT*)(strbase+2)=len;
			*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
			::memcpy((LPVOID)(strbase+8),(LPCVOID)(DWORD)s,len);
			*(DWORD*)(shellcode+0xB0)=strbase-(DWORD)shellcode+dwCodeBase;
			::SysFreeString(s);
			strbase+=len+8;

			len=procName.GetLength()+1;
			*(USHORT*)strbase=len-1;
			*(USHORT*)(strbase+2)=len;
			*(DWORD*)(strbase+4)=strbase+8-(DWORD)shellcode+dwCodeBase;
			::memcpy((LPVOID)(strbase+8),(LPCVOID)(LPCSTR)procName,len);
			*(DWORD*)(shellcode+0xB4)=strbase-(DWORD)shellcode+dwCodeBase;
			strbase+=len+8;

			//StrParams
			for(UINT i=0;i<pcount;i++)
			{
				StrParams::iterator it=strparams.find(i);
				if(it!=strparams.end())
				{
					params[i]=strbase-(DWORD)shellcode+dwCodeBase;//目标进程空间地址
					CString& str=it->second;
					DWORD strlen=str.GetLength();
					::memcpy((LPVOID)strbase,(LPCVOID)(LPCSTR)str,strlen);
					strbase+=strlen+1;
				}
			}
			for(int i=0;i<pcount;i++)
			{
				*(DWORD*)(shellcode+0xC0+i*4)=params[i];
			}
		}

		DWORD ret=RemoteShellCode(hProcess,shellcode,dwLen,0,flag,pProc);		
		return ret;		
	}
	static inline UINT ParseArguments(VARIANT vals,UINT params[16],UINT& pcount,StrParams& strparams,UINT& strslen)
	{
		//对jscript传入数组的处理
		if(vals.vt==(VT_DISPATCH|VT_BYREF))
		{		
			vals.pdispVal=*vals.ppdispVal;
			vals.vt=VT_DISPATCH;
		}
		if(vals.vt==VT_DISPATCH)
		{
			CComDispatchDriver cddv(vals.pdispVal);
			HRESULT hresult;
			CComVariant comvtl;
			hresult=cddv.GetPropertyByName(L"length",&comvtl);
			if(hresult==S_OK)
			{
				int l=comvtl.intVal;
				for(int i=0;i<l && pcount<16;i++)
				{				
					CString tt;
					tt.Format("%u",i);
					CComVariant comvt;
					hresult=cddv.GetPropertyByName(CComBSTR(tt),&comvt);
					if(comvt.vt==VT_BSTR)
					{
						CString strarg=CString(comvt.bstrVal);
						strparams[pcount]=strarg;
						params[pcount]=0;
						pcount++;
						strslen+=strarg.GetLength()+1;
					}
					else if(comvt.vt==VT_EMPTY || comvt.vt==VT_NULL || comvt.vt==VT_ERROR)
					{
						params[pcount]=0;
						pcount++;
					}
					else if(comvt.vt==VT_R8)
					{
						__int64 temp=(__int64)comvt.dblVal;
						params[pcount]=(UINT)(temp&0xffffffff00000000)>>32;
						pcount++;
						params[pcount]=(UINT)(temp&0xffffffff);
						pcount++;
					}
					else
					{
						params[pcount]=comvt.lVal;
						pcount++;
					}
				}				
			}	
		}
		else
		{
			//对VBSCRIPT脚本传递参数的转换
			VARIANT tempVT;
			tempVT=vals;
			if(tempVT.vt==(VT_VARIANT|VT_BYREF))
			{
				tempVT=*tempVT.pvarVal;
			}
			if(tempVT.vt==(VT_ARRAY|VT_BYREF|VT_VARIANT))
			{
				tempVT.parray=*tempVT.pparray;
				tempVT.vt=(VT_ARRAY|VT_VARIANT);
			}
			if(!(tempVT.vt&VT_ARRAY))
			{
				return 0;
			}
			LONG lBound,uBound;
			::SafeArrayGetLBound(tempVT.parray,1,&lBound);
			::SafeArrayGetUBound(tempVT.parray,1,&uBound);
			long length=uBound-lBound+1;
			for(long i=lBound;i<=uBound && pcount<16;i++)
			{
				CComVariant comvt;
				::SafeArrayGetElement(tempVT.parray,&i,&comvt);
				if(comvt.vt==VT_BSTR)
				{
					CString strarg=CString(comvt.bstrVal);
					strparams[pcount]=strarg;
					params[pcount]=0;
					pcount++;
					strslen+=strarg.GetLength()+1;
				}
				else if(comvt.vt==VT_EMPTY || comvt.vt==VT_NULL || comvt.vt==VT_ERROR)
				{
					params[pcount]=0;
					pcount++;
				}
				else if(comvt.vt==VT_R8)
				{
					__int64 temp=(__int64)comvt.dblVal;
					params[pcount]=(UINT)(temp&0xffffffff00000000)>>32;
					pcount++;
					params[pcount]=(UINT)(temp&0xffffffff);
					pcount++;
				}
				else
				{
					params[pcount]=comvt.lVal;
					pcount++;
				}
			}			
		}
		return pcount;
	}
	static inline void AdjustPrivilege(BOOL bEnable)
	{
		AdjustPrivilege(::GetCurrentProcessId(), bEnable);
	}
	static inline void AdjustPrivilege(int pid, BOOL bEnable)
	{
		HANDLE hProcess;
		HANDLE hToken=0;
		TOKEN_PRIVILEGES tkp;
		tkp.PrivilegeCount = 1;  
		tkp.Privileges[0].Attributes = 0;
		if (bEnable)
			tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
		if (::LookupPrivilegeValue(NULL, "SeDebugPrivilege", &tkp.Privileges[0].Luid))
		{
			if (hProcess = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid))
			{
				if (::OpenProcessToken(hProcess, TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY, &hToken))
				{
					if (::AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, NULL, NULL))
					{
						::CloseHandle(hToken);
					}
				}
				::CloseHandle(hProcess);
			}
		}
	}
public:
	BEGIN_INTF(InjectModel)
		METHOD(ShowLastError)
		METHOD(RunProgram)
		METHOD(RunProgram2)
		METHOD(RunProgramRT)
		METHOD(RunProgramRT2)
		METHOD(InjectAndCallOnThread)
		METHOD(InjectAndCallOnThread2)
		METHOD(InjectDll)
		METHOD(FreeDll)
		METHOD(GetDll)
		METHOD(GetProc)
		METHOD(CallAddr)
		METHOD(CallAddr2)
		METHOD(Initialize)
		METHOD(RefreshProcessList)
		METHOD(Hook)
		METHOD(UnHook)
	END_INTF()
public:
	void Init(T* ptr)
	{
		owner=ptr;
	}
private:
	T* owner;
};

class CMainDlg
{
	typedef WinForIE
		<
			true,
			WS_POPUP|WS_BORDER|WS_CAPTION|WS_SYSMENU|WS_MINIMIZEBOX|WS_MAXIMIZEBOX|WS_SIZEBOX,
			WS_EX_LEFT
		> IEDLG;
public:
	IEDLG dlg;
	CComPtr<IDispatch> modelPtr;
public:
	void Initialize(void)
	{
		if(!hShellIcon)
		{
			hShellIcon=(HICON)::LoadImage(_Module.GetResourceInstance(), MAKEINTRESOURCE(IDR_MAINFRAME), 
				IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR);
			if(hShellIcon)
				MyTaskBarAddIcon(dlg.m_hWnd,0,hShellIcon,"单击显示或者隐藏应用程序窗口。");
		}
			
		RefreshProcessList();
	}
	void RefreshProcessList(void)
	{
		CComPtr<IDispatch> p;
		p.Attach(dlg.GetWindowObj());
		if(!p)return;	
		DWORD procIds[256];
		DWORD procNum=256;
		if(!::EnumProcesses(procIds,sizeof(procIds),&procNum))
		{
			::DisplayLastError();
			return;
		}
		for(int i=0;i<procNum;i++)
		{			
			// Get a handle to the process.
			HANDLE hProcess = ::OpenProcess( PROCESS_QUERY_INFORMATION |
										   PROCESS_VM_READ,
										   FALSE, procIds[i] );
			// Get the process name.
			if ( hProcess )
			{
				HMODULE hMod;
				DWORD cbNeeded;
				char procName[32];
				char pathName[1024];

				if ( ::EnumProcessModules( hProcess, &hMod, sizeof(hMod), 
					 &cbNeeded) )
				{					
					::GetModuleBaseName( hProcess,hMod,procName,sizeof(procName) );
					::GetModuleFileNameEx( hProcess,hMod,pathName,sizeof(pathName) );
					DispatchDriver::NRInvoke(p,L"PutProcInfo",int(procIds[i]),CComBSTR(procName),CComBSTR(pathName));	
				}
				::CloseHandle( hProcess );
			}
		}
	}
	void Hook(const CString& hookPath)
	{		
		CString hookFile=hookPath+"\\hook.dll";
		HMODULE hModule=::GetModuleHandle(hookFile);
		if(hModule)
		{
			::MessageBox(dlg.m_hWnd,"已经初始化监测。",hookFile,MB_OK);
			return;
		}
		hookModule=::LoadLibrary(hookFile);
		if(hookModule)
		{
			InstallPtr insPtr=(InstallPtr)::GetProcAddress(hookModule,"Install");
			if(insPtr)
			{				
				int ret=(*insPtr)();
				hookInstalled=true;
			}
		}
		else
			::MessageBox(dlg.m_hWnd,"无法打开监测文件。",hookFile,MB_OK);
	}
	void UnHook(void)
	{
		if(hookModule)
		{							
			if(hookInstalled)
			{
				UninstallPtr uninsPtr=(UninstallPtr)::GetProcAddress(hookModule,"Uninstall");
				int ret=(*uninsPtr)();
				if(!ret)
					::MessageBox(dlg.m_hWnd,"撤销监测失败!","错误",MB_OK);
				else
					hookInstalled=false;
			}
			else
				::MessageBox(dlg.m_hWnd,"没有发现监测。","错误",MB_OK);
			::FreeLibrary(hookModule);
			hookModule=NULL;
		}
	}
	bool OnIEMsg(HWND hWnd,UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{
		if(uMsg==WM_SYSCOMMAND)
		{			
			if(wParam==SC_MINIMIZE)
			{
				if(dlg.IsWindowVisible())
				{
					dlg.ShowWindow(SW_HIDE);
					return true;
				}
			}
			if(wParam==SC_CLOSE)
			{
				return false;
			}
		}
		MESSAGE_HANDLER(WM_CLOSE,OnClose);
		MESSAGE_HANDLER(MYWM_NOTIFYICON,On_MYWM_NOTIFYICON)
		return false;
	}
	void DoModeless(const char* cmd)
	{
		CString cmdStr;
		if(cmd)
			cmdStr=CString(cmd);
		InjectModel<CMainDlg>* p=InjectModel<CMainDlg>::CreateDispatch();
		modelPtr.Attach(p);
		p->Init(this);

		dlg.OnMessage+=EventFactory::Produce(this,&CMainDlg::OnIEMsg);
		if(::PathFileExists(ScriptFile::GetCurrentPath()+"\\ui.htm"))
		{
			dlg.InitURL(CComBSTR(ScriptFile::GetCurrentPath()+"\\ui.htm"));
		}
		else
		{
			char buf[MAX_PATH+1];
			HINSTANCE hinst=_Module.GetModuleInstance();
			DWORD len=::GetModuleFileName(hinst,buf,MAX_PATH);
			if(len<=0)
			{
				return;
			}
			buf[len]=0;
			CString fileName(buf);
			int ix=fileName.ReverseFind('\\');
			fileName=fileName.Mid(ix+1);
			CString url;
			url.Format("res://%s/ui.htm",fileName);
			dlg.InitURL(CComBSTR(url));
		}
		dlg.InitTitle("InjectDll");
		IEAppPointer::SetPtr(modelPtr);
		dlg.DoModeless(NULL,-1,-1,-1,-1);		
	}
private:
	LRESULT OnClose(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& bHandled)
	{
		if(hShellIcon)
		{
			MyTaskBarDeleteIcon(dlg.m_hWnd,0);
		}
		bHandled=FALSE;
		return 0;
	}
private:
	BOOL MyTaskBarAddIcon(HWND hwnd, UINT uID, HICON hicon, LPSTR lpszTip) 
	{ 
		BOOL res; 
		NOTIFYICONDATA tnid; 
 
		tnid.cbSize = sizeof(NOTIFYICONDATA); 
		tnid.hWnd = hwnd; 
		tnid.uID = uID; 
		tnid.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP; 
		tnid.uCallbackMessage = MYWM_NOTIFYICON; 
		tnid.hIcon = hicon; 
		if (lpszTip) 
			lstrcpyn(tnid.szTip, lpszTip, sizeof(tnid.szTip)); 
		else 
			tnid.szTip[0] = '\0'; 
 
		res = Shell_NotifyIcon(NIM_ADD, &tnid); 
 
		if (hicon) 
			DestroyIcon(hicon); 
 
		return res; 
	} 

	BOOL MyTaskBarDeleteIcon(HWND hwnd, UINT uID) 
	{ 
		BOOL res; 
		NOTIFYICONDATA tnid; 
 
		tnid.cbSize = sizeof(NOTIFYICONDATA); 
		tnid.hWnd = hwnd; 
		tnid.uID = uID; 
         
		res = Shell_NotifyIcon(NIM_DELETE, &tnid); 
		return res; 
	} 

	LRESULT On_MYWM_NOTIFYICON(UINT /*uMsg*/, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
	{ 
		UINT uID; 
		UINT uMouseMsg; 
 
		uID = (UINT) wParam; 
		uMouseMsg = (UINT) lParam; 
 
		if(uMouseMsg == WM_LBUTTONUP) 
		{ 
			if(dlg.IsWindowVisible())
				dlg.ShowWindow(SW_HIDE);
			else
				dlg.ShowWindow(SW_SHOW);
		}
		else if(uMouseMsg == WM_RBUTTONUP)
		{
			IDispatch* temp=dlg.GetWindowObj();
			if(!temp)return 0;
			CComPtr<IDispatch> p;
			p.Attach(temp);
			if(!p)return 0;
			CPoint pt;
			BOOL r=::GetCursorPos(&pt);
			if(!r)return 0;
			DispatchDriver::NRInvoke(p,L"OnTrayPopup",pt.x,pt.y);
		}		
		return 0; 
	}
public:
	CMainDlg():hookInstalled(false),hookModule(NULL),hShellIcon(NULL)
	{}
	~CMainDlg()
	{}
private:
	HICON hShellIcon;
	HMODULE hookModule;
	bool hookInstalled;
};