// MyWindowProc.h: interface for the MyWindowProc class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYWINDOWPROC_H__BCD94658_DC5C_4EBF_814B_8796F5173CB1__INCLUDED_)
#define AFX_MYWINDOWPROC_H__BCD94658_DC5C_4EBF_814B_8796F5173CB1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <map>

#include "disasm.h"

template<typename T>
	class ClassObjectId
	{
		typedef std::vector<DWORD> IDs;
		typedef std::map<DWORD,T*> Objects;
	public:
		static inline void InsertObject(DWORD id,T* pObj)
		{
			ObjectsRef()[id]=pObj;
		}
		static inline T* GetObject(DWORD id)
		{
			Objects::iterator it=ObjectsRef().find(id);
			if(it!=ObjectsRef().end())
			{
				return it->second;
			}
			return NULL;
		}
		static inline void EraseObject(DWORD id)
		{
			ObjectsRef().erase(id);
		}
		static inline void EraseObject(T* pObj)
		{
			IDs ids;
			Objects::iterator it=ObjectsRef().begin();
			while(it!=ObjectsRef().end())
			{
				if(it->second==pObj)
				{
					ids.push_back(it->first);
				}
				it++;
			}
			IDs::iterator idIt=ids.begin();
			while(idIt!=ids.end())
			{
				ObjectsRef().erase(*idIt);
				idIt++;
			}
		}
	public:
		virtual ~ClassObjectId()
		{
			T* pObj=static_cast<T*>(const_cast<ClassObjectId*>(this));
			EraseObject(pObj);
		}
	private:
		static inline Objects& ObjectsRef(void)
		{
			static Objects objects;
			return objects;
		}
	};

typedef LRESULT (CALLBACK* WndProcPtr)(
									   HWND hwnd,      // handle to window
									   UINT uMsg,      // message identifier
									   WPARAM wParam,  // first message parameter
									   LPARAM lParam   // second message parameter
									   );

typedef IEvent4<HWND&,UINT&,WPARAM&,LPARAM&> WndProcEvent;
typedef EventTrigerT<WndProcEvent> WndProcEventContainer;
class MyWindowProc : public ClassObjectId<MyWindowProc>
{
public:
	static LRESULT CALLBACK Impl(
		HWND hwnd,      // handle to window
		UINT uMsg,      // message identifier
		WPARAM wParam,  // first message parameter
		LPARAM lParam   // second message parameter
		)
	{
		MyWindowProc* pObj=GetObject((DWORD)hwnd);
		if(!pObj)
		{
				return DefWindowProc(hwnd,uMsg,wParam,lParam);
		}
		else
		{
			WndProcPtr procPtr=pObj->ProcRef();
			WndProcEventContainer::iterator it=pObj->WndProcsRef().begin();
			while(it!=pObj->WndProcsRef().end())
			{
				if((**it)(hwnd,uMsg,wParam,lParam))return 0;
				it++;
			}		
			if(!procPtr)
				return DefWindowProc(hwnd,uMsg,wParam,lParam);
			else
				return ::CallWindowProc(procPtr,hwnd,uMsg,wParam,lParam);
		}
	}
	inline void AlterProc(HWND hWnd)
	{
		MyWindowProc* pObj=GetObject((DWORD)hWnd);
		if(pObj)
		{
			return;
		}
		WndProcPtr ptr=(WndProcPtr)::SetWindowLong(hWnd,GWL_WNDPROC,(LONG)Impl);
		ProcRef()=ptr;
		InsertObject((DWORD)hWnd,this);
	}
	inline void RestoreProc(HWND hWnd)
	{
		if(!::IsWindow(hWnd))return;
		WndProcPtr& ptr=ProcRef();
		if(ptr)
		{
			::SetWindowLong(hWnd,GWL_WNDPROC,(LONG)ptr);
			ptr=NULL;
			EraseObject((DWORD)hWnd);
		}
	}
	inline WndProcPtr& ProcRef(void)
	{
		return proc;
	}
	inline WndProcEventContainer& WndProcsRef(void)
	{
		return wndProcs;
	}
public:
	MyWindowProc():proc(NULL)
	{}
private:
	WndProcPtr proc;
	WndProcEventContainer wndProcs;	
};

typedef IEvent4<HWND,UINT,UINT_PTR,DWORD> TimerProcEvent;
typedef EventTrigerT<TimerProcEvent> TimerProcEventContainer;
class MyTimerProc : public ClassObjectId<MyTimerProc>
{
public:
	static VOID CALLBACK Impl( 
		HWND hwnd,         // handle to window
		UINT uMsg,         // WM_TIMER message
		UINT idEvent,  // timer identifier
		DWORD dwTime       // current system time
		)
	{
		MyTimerProc* pObj=GetObject(idEvent);
		if(!pObj)
			return;
		TimerProcEventContainer::iterator it=pObj->TimerProcsRef().begin();
		while(it!=pObj->TimerProcsRef().end())
		{
			(**it)(hwnd,uMsg,idEvent,dwTime);
			it++;
		}
	}
	inline void SetTimer(UINT uElapse)
	{
		TimerIDRef()=::SetTimer(NULL,0,uElapse,Impl);
		InsertObject(TimerIDRef(),this);
	}
	inline void KillTimer(void)
	{
		UINT_PTR& id=TimerIDRef();
		if(id)
		{
			::KillTimer(NULL,TimerIDRef());
			id=0;
			EraseObject(id);
		}
	}
	inline UINT_PTR& TimerIDRef(void)
	{
		return timerID;
	}
	inline TimerProcEventContainer& TimerProcsRef(void)
	{
		return timerProcs;
	}
public:
	MyTimerProc():timerID(0)
	{}
private:
	UINT_PTR timerID;
	TimerProcEventContainer timerProcs;
};

typedef BOOL (WINAPI* TranslateMessagePtr)(
										   CONST MSG* lpMsg   // message information
										   );

typedef BOOL (WINAPI* IsDialogMessageAPtr)(
										   HWND hDlg,   // handle to dialog box
										   LPMSG lpMsg  // message to be checked
										   );

typedef BOOL (WINAPI* IsDialogMessageWPtr)(
										   HWND hDlg,   // handle to dialog box
										   LPMSG lpMsg  // message to be checked
										   );

typedef IEvent3<HWND,LPMSG,UINT> TranslateMessageProcEvent;
typedef SimpleEventTrigerT<TranslateMessageProcEvent> TranslateMessageProcEventContainer;
template<int K>
	struct MyMessageHook
{
	static BOOL WINAPI TranslateMessageImpl(
		CONST MSG* lpMsg   // message information
		)
	{		
		TranslateMessageProcEvent* pEvent=TranslateMessageProcsRef().get();
		if(pEvent)
		{
			if((*pEvent)(NULL,(LPMSG)lpMsg,0))return TRUE;
		}
		BOOL rt=(*TranslateMessageRef())(lpMsg);
		return rt;
	}
	static BOOL WINAPI IsDialogMessageAImpl(
		HWND hDlg,   // handle to dialog box
		LPMSG lpMsg  // message to be checked
		)
	{
		TranslateMessageProcEvent* pEvent=TranslateMessageProcsRef().get();
		if(pEvent)
		{
			if((*pEvent)(hDlg,lpMsg,1))return TRUE;
		}
		BOOL rt=(*IsDialogMessageARef())(hDlg,lpMsg);
		return rt;
	}
	static BOOL WINAPI IsDialogMessageWImpl(
		HWND hDlg,   // handle to dialog box
		LPMSG lpMsg  // message to be checked
		)
	{
		TranslateMessageProcEvent* pEvent=TranslateMessageProcsRef().get();
		if(pEvent)
		{
			if((*pEvent)(hDlg,lpMsg,2))return TRUE;
		}
		BOOL rt=(*IsDialogMessageWRef())(hDlg,lpMsg);
		return rt;
	}
	//对于一般的有一个常见主消息循环的程序，下面的钩子函数应足够应付。
	//它修改指定模块的移入函数表来实现TranslateMessage钩子。
	static inline void SetHook(LPCSTR fileName)
	{
		HookTypeRef()=0;
		DWORD base=(DWORD)::GetModuleHandle(fileName);
		const IMAGE_DOS_HEADER* dos_head = (const IMAGE_DOS_HEADER*)base;	    		
		if (dos_head->e_magic != IMAGE_DOS_SIGNATURE)
		{
			::MessageBox(NULL,"unknown type of file","",MB_OK);
			return;
		}                         /* verify DOS-EXE-Header */
		const PE_HEADER* header=(const PE_HEADER*)((char *)dos_head + dos_head->e_lfanew);/* after end of DOS-EXE-Header: offset to PE-Header */		
		IMAGE_IMPORT_DESCRIPTOR* imp_dcp=(IMAGE_IMPORT_DESCRIPTOR*)(base+header->opt_head.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
		for(int i=0;imp_dcp[i].Name;i++)
		{			
			CString name((char*)(base+imp_dcp[i].Name));
			if(!name.CompareNoCase("USER32.DLL"))
			{
				break;
			}
		}
		if(!imp_dcp[i].Name)
		{
			::MessageBox(NULL,"can not find import entry : USER32.DLL","",MB_OK);
			return;
		}
		DWORD* thunk_data=(DWORD*)(base+imp_dcp[i].OriginalFirstThunk);
		DWORD* thunk_data2=(DWORD*)(base+imp_dcp[i].FirstThunk);		
		int findCount=0;
		for(i=0;thunk_data[i] && thunk_data2[i];i++)
		{
			if((thunk_data[i] & 0x80000000) != 0)continue;
			char* pName=(char*)(base+thunk_data[i])+2;
			CString name(pName);			
			if(name=="TranslateMessage")
			{
				TranslateMessagePtr fptr=(TranslateMessagePtr)thunk_data2[i];
				TranslateMessageRef()=fptr;
				DWORD* pAddr=(DWORD*)&thunk_data2[i];
				*pAddr=(DWORD)TranslateMessageImpl;
				findCount++;
			}		
			if(name=="IsDialogMessageA")
			{
				IsDialogMessageAPtr fptr=(IsDialogMessageAPtr)thunk_data2[i];
				IsDialogMessageARef()=fptr;
				DWORD* pAddr=(DWORD*)&thunk_data2[i];
				*pAddr=(DWORD)IsDialogMessageAImpl;
				findCount++;
			}
			if(name=="IsDialogMessageW")
			{
				IsDialogMessageWPtr fptr=(IsDialogMessageWPtr)thunk_data2[i];
				IsDialogMessageWRef()=fptr;
				DWORD* pAddr=(DWORD*)&thunk_data2[i];
				*pAddr=(DWORD)IsDialogMessageWImpl;
				findCount++;
			}
			if(findCount>=3)break;
		}		
	}
	//下面的函数采用修改函数代码的方式来实现函数钩子。
	static inline void SetHook(void)
	{
		HookTypeRef()=1;
		MemoryProtect mp((LPCVOID)GetCode());
		mp.SetRestore(false);
		
		HMODULE module=::GetModuleHandle("USER32.DLL");
		if(!module)return;
		FARPROC translateMsg=NULL,isDialogMsgA=NULL,isDialogMsgW=NULL;
		
		translateMsg=::GetProcAddress(module,"TranslateMessage");
		Trampoline::Create((PBYTE)translateMsg,GetCode(),(DWORD)TranslateMessageImpl);
		isDialogMsgA=::GetProcAddress(module,"IsDialogMessageA");
		Trampoline::Create((PBYTE)isDialogMsgA,GetCode(40),(DWORD)IsDialogMessageAImpl);
		isDialogMsgW=::GetProcAddress(module,"IsDialogMessageW");
		Trampoline::Create((PBYTE)isDialogMsgW,GetCode(80),(DWORD)IsDialogMessageWImpl);
		
		TranslateMessageRef()=(TranslateMessagePtr)GetCode();
		IsDialogMessageARef()=(IsDialogMessageAPtr)GetCode(40);
		IsDialogMessageWRef()=(IsDialogMessageWPtr)GetCode(80);
		
		*(FARPROC*)GetCode(120)=translateMsg;
		*(FARPROC*)GetCode(124)=isDialogMsgA;
		*(FARPROC*)GetCode(128)=isDialogMsgW;
	}
	static inline void UnHook(void)
	{
		if(!HookTypeRef())return;
		FARPROC translateMsg=NULL,isDialogMsgA=NULL,isDialogMsgW=NULL;
		
		translateMsg=*(FARPROC*)GetCode(120);
		isDialogMsgA=*(FARPROC*)GetCode(124);
		isDialogMsgW=*(FARPROC*)GetCode(128);
		
		Trampoline::Remove((PBYTE)translateMsg,GetCode());
		Trampoline::Remove((PBYTE)isDialogMsgA,GetCode(40));
		Trampoline::Remove((PBYTE)isDialogMsgW,GetCode(80));
		
		TranslateMessageRef()=(TranslateMessagePtr)translateMsg;
		IsDialogMessageARef()=(IsDialogMessageAPtr)isDialogMsgA;
		IsDialogMessageWRef()=(IsDialogMessageWPtr)isDialogMsgW;
	}
	static inline TranslateMessagePtr& TranslateMessageRef(void)
	{
		static TranslateMessagePtr translateMsg;
		return translateMsg;
	}
	static inline IsDialogMessageAPtr& IsDialogMessageARef(void)
	{
		static IsDialogMessageAPtr isDlgMsg;
		return isDlgMsg;
	}
	static inline IsDialogMessageWPtr& IsDialogMessageWRef(void)
	{
		static IsDialogMessageWPtr isDlgMsg;
		return isDlgMsg;
	}
	static inline TranslateMessageProcEventContainer& TranslateMessageProcsRef(void)
	{
		static TranslateMessageProcEventContainer translateMessageProcs;
		return translateMessageProcs;
	}
	static inline PBYTE GetCode(int st=0)
	{
		static BYTE code[132];
		return code+st;
	}	
	static inline int& HookTypeRef(void)
	{
		static int hookType=0;
		return hookType;
	}
};

//通常应使用上面的模板类，实在必要钩住GetMessage/PeekMessage时
//可以使用下面的模板类，它采用Windows Hook技术实现，因为是属于
//GetMessage/PeekMessage调用过程的一部分，在它的事件处理中不要
//使用消息处理函数，较好的做法是在事件处理中将消息暂存到一个队
//列中,然后定时处理该队列(可以与前面的定时器模板类联合使用)。
typedef IEvent3<int,WPARAM,LPARAM> MsgProcEvent;
typedef SimpleEventTrigerT<MsgProcEvent> MsgProcEventContainer;
class MyMsgHook : public ClassObjectId<MyMsgHook>
{
public:
	static LRESULT CALLBACK Impl(
		int code,
		WPARAM wParam,
		LPARAM lParam 
		)
	{	
		DWORD tid=::GetCurrentThreadId();
		MyMsgHook* pObj=GetObject(tid);
		if(!pObj)
			return 0;
		HHOOK hHook=pObj->HHookRef();
		if(code<0 && hHook)return ::CallNextHookEx(hHook,code,wParam,lParam);
		//code==HC_ACTION
		MsgProcEvent* pEvent=pObj->MsgProcsRef().get();
		if(pEvent)
		{
			(*pEvent)(code,wParam,lParam);
		}
		if(hHook)return ::CallNextHookEx(hHook,code,wParam,lParam);
		return 0;
	}
	inline void SetHook(void)
	{
		DWORD tid=::GetCurrentThreadId();
		MyMsgHook* pObj=GetObject(tid);
		if(pObj)
			return;
		HHOOK hHook=::SetWindowsHookEx(WH_GETMESSAGE,Impl,NULL,tid);
		if(hHook)
		{
			HHookRef()=hHook;
			InsertObject(tid,this);
		}
	}
	inline void UnHook(void)
	{
		HHOOK& hHook=HHookRef();
		if(hHook)
		{
			::UnhookWindowsHookEx(hHook);
			HHookRef()=NULL;
			DWORD tid=::GetCurrentThreadId();
			EraseObject(tid);
		}
	}	
	inline HHOOK& HHookRef(void)
	{
		return handle;
	}
	inline MsgProcEventContainer& MsgProcsRef(void)
	{
		return msgProcs;
	}
public:
	MyMsgHook():handle(NULL)
	{}
private:
	HHOOK handle;
	MsgProcEventContainer msgProcs;
};

#endif // !defined(AFX_MYWINDOWPROC_H__BCD94658_DC5C_4EBF_814B_8796F5173CB1__INCLUDED_)
