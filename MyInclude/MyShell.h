#pragma once

#include "ExterCommon.h"

#define MAXEVENTS 16
					   
template<typename T>
	class DispEventHandler : public IDispatch
{
	typedef DispEventHandler<T> ComObj;
	typedef std::map<CString,DISPID> NAME_IDS;
	typedef std::map<DISPID,CString> ID_NAMES;	
	DispEventHandler():m_cRef(0)
	{}
public:
	static inline ComObj* CreateObject(T* ptr)
	{
		ComObj* p=new ComObj();
		p->AddRef();
		p->ieDlg=ptr;
		return p;
	}

	STDMETHODIMP QueryInterface(REFIID riid, void** ppv)
	{
		if (NULL == ppv) return E_POINTER;
		*ppv = NULL;
		
		HRESULT hr = S_OK;
		
		if ((implIID == riid) || (IID_IUnknown == riid) || (IID_IDispatch == riid))
			*ppv = static_cast<IDispatch*>(this);		

		if(*ppv!=NULL)
		{
			reinterpret_cast<IUnknown*>(*ppv)->AddRef();
			return hr;
		}
		return E_NOINTERFACE;		
	}
	STDMETHODIMP_(ULONG) AddRef(void)
	{
		return ++m_cRef;
	}
	STDMETHODIMP_(ULONG) Release(void)
	{
		if (0 != --m_cRef) return m_cRef;
		delete this;
		return 0;
	}
	STDMETHODIMP GetTypeInfoCount(UINT* pctinfo)
	{
		if (NULL == pctinfo) return E_POINTER;
		*pctinfo = 0;
		return S_OK;
	}
	STDMETHODIMP GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo)
	{
		if (NULL == ppTInfo) return E_POINTER;
		*ppTInfo = NULL;
		return E_FAIL;
	}
	STDMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId)
	{
		if (IID_NULL != riid)
			return DISP_E_UNKNOWNINTERFACE;
		
		if (NULL == rgDispId) return E_POINTER;
		if (NULL == rgszNames) return E_POINTER;
		if (cNames != 1) return E_INVALIDARG;
		CString name(*rgszNames);
		NAME_IDS::iterator it=name_ids.find(name);
		if(it!=name_ids.end())
		{
			*rgDispId=it->second;
		}
		else
		{
			*rgDispId = 0x00000000;
		}
		return S_OK;
	}
	STDMETHODIMP Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr)
	{
		if (IID_NULL != riid)
			return DISP_E_UNKNOWNINTERFACE;
		
		if (NULL == pDispParams) return E_POINTER;
		
		CComPtr<IDispatch> win2Ptr;
		win2Ptr.Attach(ieDlg->GetWindowObj());
		if(!win2Ptr)return S_OK;			
		ID_NAMES::iterator it=id_names.find(dispIdMember);
		if(it!=id_names.end())
		{			
			CComDispatchDriver comDisp(win2Ptr);
			CComVariant* args=new CComVariant[pDispParams->cArgs];
			for(int i=pDispParams->cArgs-1;i>=0;i--)
				args[pDispParams->cArgs-i-1]=pDispParams->rgvarg[i];
			HRESULT hr=comDisp.InvokeN(CComBSTR(it->second),args,pDispParams->cArgs);
			delete[] args;
			return hr;
		}		
		return S_OK;
	}
public:	
	static inline BSTR EnumEventIntfCLSID(IDispatch* obj,UINT num)
	{
		HRESULT hr;
		CComQIPtr<IConnectionPointContainer> cpContainer(obj);
		if(!cpContainer)return 0;
		CComPtr<IEnumConnectionPoints> enumCPs;
		hr=cpContainer->EnumConnectionPoints(&enumCPs);
		if(!enumCPs)return 0;
		CString ret("");
		CString dlt("");
		hr=enumCPs->Reset();
		for(DWORD i=0;i<num && i<MAXEVENTS;i++)
		{
			CComPtr<IConnectionPoint> ptrCP;
			ULONG num_;				
			hr=enumCPs->Next(1,&ptrCP,&num_);
			if(!ptrCP)break;
			IID iid;
			hr=ptrCP->GetConnectionInterface(&iid);			
			unsigned char* t;
			::UuidToString(&iid,&t);
			ret+=dlt;
			ret+=CString(t);
			dlt=",";
			::RpcStringFree(&t);
		}
		return ret.AllocSysString();
	}
	inline void Advise(IDispatch* obj,BSTR clsid)
	{
		HRESULT hr;
		UUID uuid;
		hr=::UuidFromStringW((RPC_WSTR)clsid,&uuid);
		if(!connPoint)
		{
			CComQIPtr<IConnectionPointContainer> cpContainer(obj);
			if(!cpContainer)return;
			hr=cpContainer->FindConnectionPoint(uuid,&connPoint);
			if(!connPoint)return;
			implIID=uuid;
			hr=connPoint->Advise(this,&cookie);
		}
	}
	inline void dispid_name_func(DISPID dispID,BSTR name,BSTR scriptFunc)
	{
		name_ids[CString(name)]=dispID;
		id_names[dispID]=CString(scriptFunc);
	}
	inline void Unadvise(void)
	{
		if(connPoint)
		{
			try
			{
				HRESULT hr=connPoint->Unadvise(cookie);
			}
			catch(...)
			{}
		}
	}
private:
	NAME_IDS name_ids;
	ID_NAMES id_names;
	IID implIID;	
	CComPtr<IConnectionPoint> connPoint;
	DWORD cookie;
	unsigned int m_cRef;
	T* ieDlg;
};

template
	<typename Owner>
class WindowIteratorT
{
	typedef WindowIteratorT<Owner> WindowIterator;
public:
	WindowIteratorT(Owner* ptr,BSTR scp)
	{
		owner=ptr;
		scpCallback=CString(scp);
	}
public:
	static BOOL CALLBACK EnumProc(HWND hwnd,LPARAM lParam)
	{
		WindowIterator* pWI=(WindowIterator*)lParam;
		return pWI->CallScpHandler(hwnd);
	}
private:
	BOOL CallScpHandler(HWND hwnd)
	{
		IDispatch* tempPtr=owner->GetWindowObj();
		CComPtr<IDispatch> p;
		if(tempPtr)
		{				
			p.Attach(tempPtr);
			int rt=DispatchDriver::Invoke(p,CComBSTR(scpCallback),(UINT)hwnd,Type2Type<int>());
			if(rt)
			{
				return TRUE;
			}
		}
		return FALSE;
	}
private:
	Owner* owner;
	CString scpCallback;
};

#define DEFPARAM0
#define DEFPARAM1 DEFPARAM0,UINT p1
#define DEFPARAM2 DEFPARAM1,UINT p2
#define DEFPARAM3 DEFPARAM2,UINT p3
#define DEFPARAM4 DEFPARAM3,UINT p4
#define DEFPARAM5 DEFPARAM4,UINT p5
#define DEFPARAM6 DEFPARAM5,UINT p6
#define DEFPARAM7 DEFPARAM6,UINT p7
#define DEFPARAM8 DEFPARAM7,UINT p8
#define DEFPARAM9 DEFPARAM8,UINT p9
#define DEFPARAM10 DEFPARAM9,UINT p10
#define DEFPARAM11 DEFPARAM10,UINT p11
#define DEFPARAM12 DEFPARAM11,UINT p12
#define DEFPARAM13 DEFPARAM12,UINT p13
#define DEFPARAM14 DEFPARAM13,UINT p14
#define DEFPARAM15 DEFPARAM14,UINT p15
#define DEFPARAM16 DEFPARAM15,UINT p16

#define DEFPARAM(x) DEFPARAM##x

#define CALLPARAM0
#define CALLPARAM1 CALLPARAM0,params[0]
#define CALLPARAM2 CALLPARAM1,params[1]
#define CALLPARAM3 CALLPARAM2,params[2]
#define CALLPARAM4 CALLPARAM3,params[3]
#define CALLPARAM5 CALLPARAM4,params[4]
#define CALLPARAM6 CALLPARAM5,params[5]
#define CALLPARAM7 CALLPARAM6,params[6]
#define CALLPARAM8 CALLPARAM7,params[7]
#define CALLPARAM9 CALLPARAM8,params[8]
#define CALLPARAM10 CALLPARAM9,params[9]
#define CALLPARAM11 CALLPARAM10,params[10]
#define CALLPARAM12 CALLPARAM11,params[11]
#define CALLPARAM13 CALLPARAM12,params[12]
#define CALLPARAM14 CALLPARAM13,params[13]
#define CALLPARAM15 CALLPARAM14,params[14]
#define CALLPARAM16 CALLPARAM15,params[15]

#define CALLPARAM(x) CALLPARAM##x

#define CASECALL(x)	\
	case x:\
		return CallApi##x(api CALLPARAM(x));

#define PUSHPARAM0
#define PUSHPARAM1 \
	__asm {push p1} \
	PUSHPARAM0
#define PUSHPARAM2 \
	__asm {push p2} \
	PUSHPARAM1
#define PUSHPARAM3 \
	__asm {push p3} \
	PUSHPARAM2
#define PUSHPARAM4 \
	__asm {push p4} \
	PUSHPARAM3
#define PUSHPARAM5 \
	__asm {push p5} \
	PUSHPARAM4
#define PUSHPARAM6 \
	__asm {push p6} \
	PUSHPARAM5
#define PUSHPARAM7 \
	__asm {push p7} \
	PUSHPARAM6
#define PUSHPARAM8 \
	__asm {push p8} \
	PUSHPARAM7
#define PUSHPARAM9 \
	__asm {push p9} \
	PUSHPARAM8
#define PUSHPARAM10 \
	__asm {push p10} \
	PUSHPARAM9
#define PUSHPARAM11 \
	__asm {push p11} \
	PUSHPARAM10
#define PUSHPARAM12 \
	__asm {push p12} \
	PUSHPARAM11
#define PUSHPARAM13 \
	__asm {push p13} \
	PUSHPARAM12
#define PUSHPARAM14 \
	__asm {push p14} \
	PUSHPARAM13
#define PUSHPARAM15 \
	__asm {push p15} \
	PUSHPARAM14
#define PUSHPARAM16 \
	__asm {push p16} \
	PUSHPARAM15

#define PUSHPARAM(x) PUSHPARAM##x

#define DEFCALLAPI(x) \
	UINT CallApi##x (UINT api DEFPARAM(x) ) \
	{ \
		UINT r=0; \
		__asm {mov eax,api} \
		PUSHPARAM(x) \
		__asm {call eax} \
		__asm {mov r,eax} \
		return r;\
	};

template
	<typename T>
	class MyShell : public IDispatch
{
	typedef std::vector<CString> FileNames;
	struct FunctionInfo
	{
		CString name;
		DWORD addr;
	};
	typedef std::vector<FunctionInfo> FunctionsInfo;
	typedef std::map<DWORD,CString> FunctionsMap;
	struct FunctionInfoSortPredicate
	{
		bool operator() (const FunctionInfo& a,const FunctionInfo& b)
		{
			if(a.addr<=b.addr)
				return true;
			else
				return false;
		}
	};
	typedef WindowIteratorT<T> WindowIterator;
	typedef std::map<CString,HMODULE> ApiModules;
	typedef DispEventHandler<T> EventHandlerClass;	
	typedef std::map<CString,CAdapt<CComPtr<EventHandlerClass> > > CLSID_SINKS;
	typedef std::map<IDispatch*,CLSID_SINKS> OBJ_EVENTS;
public:
	virtual VARIANT __stdcall RegRead(BSTR key,int isNumber)
	{
		CString fullKey(key);
		fullKey.MakeUpper();
		CString normalKey,keyPart,namePart;
		HKEY hk=ParseRegKey(fullKey,normalKey,keyPart,namePart);
		if(!hk)
			return CComVariant();
		CRegKey reg;
		LONG r0=reg.Open(hk,keyPart);
		if(r0!=ERROR_SUCCESS)
			return CComVariant();
		if(isNumber)
		{
			DWORD val;
			r0=reg.QueryDWORDValue(namePart,val);
			reg.Close();
			CComVariant ret(val);
			VARIANT r;
			::VariantInit(&r);
			ret.Detach(&r);
			return r;
		}
		else
		{
			char buf[1025];
			DWORD len=1024;
			r0=reg.QueryStringValue(namePart,buf,&len);
			reg.Close();
			if(r0!=ERROR_SUCCESS)
				return CComVariant();
			CComVariant ret((LPCSTR)buf);
			VARIANT r;
			::VariantInit(&r);
			ret.Detach(&r);
			return r;
		}
	}
	virtual int __stdcall RegWrite(BSTR key,VARIANT value)
	{
		CString fullKey(key);
		fullKey.MakeUpper();
		CString normalKey,keyPart,namePart;
		HKEY hk=ParseRegKey(fullKey,normalKey,keyPart,namePart);
		if(!hk)
			return 0;
		CRegKey reg;
		LONG r=reg.Create(hk,keyPart);
		if(r!=ERROR_SUCCESS)
			return 0;	
		if(value.vt!=VT_BSTR)
		{
			CComVariant v(value);
			v.ChangeType(VT_UI4);
			DWORD val=v.ulVal;
			if(namePart.IsEmpty())
				r=reg.SetDWORDValue(NULL,val);
			else
				r=reg.SetDWORDValue(namePart,val);
			reg.Close();
			if(r!=ERROR_SUCCESS)
				return 0;
			return 1;
		}
		else
		{
			CString strVal(value.bstrVal);	
			if(namePart.IsEmpty())
				r=reg.SetStringValue(NULL,strVal);
			else
				r=reg.SetStringValue(namePart,strVal);
			reg.Close();
			if(r!=ERROR_SUCCESS)
				return 0;
			return 1;
		}
	}
	virtual int __stdcall RegDelete(BSTR key)
	{
		CString fullKey(key);
		fullKey.MakeUpper();
		CString normalKey,keyPart,namePart;
		HKEY hk=ParseRegKey(fullKey,normalKey,keyPart,namePart);
		if(!hk)
			return 0;
		CRegKey reg;
		LONG r=reg.Open(hk,keyPart);
		if(r!=ERROR_SUCCESS)
			return 0;
		r=reg.DeleteValue(namePart);
		if(r==ERROR_SUCCESS)
		{
			reg.Close();
			return 1;
		}
		else
		{
			r=reg.RecurseDeleteKey(namePart);
			reg.Close();
			if(r!=ERROR_SUCCESS)
				return 0;
			return 1;
		}
	}
	virtual DWORD __stdcall ShellExecute(BSTR op,BSTR file,BSTR param,BSTR dir,int showCmd,int wait)
	{
		LPTSTR pOp=NULL;
		CString strOp(op);
		if(strOp.GetLength()>0)
			pOp=(LPTSTR)(LPCSTR)strOp;
		LPTSTR pFile=NULL;
		CString strFile(file);
		if(strFile.GetLength()>0)
			pFile=(LPTSTR)(LPCSTR)strFile;
		LPTSTR pParam=NULL;
		CString strParam(param);
		if(strParam.GetLength()>0)
			pParam=(LPTSTR)(LPCSTR)strParam;
		LPTSTR pDir=NULL;
		CString strDir(dir);
		if(strDir.GetLength()>0)
			pDir=(LPTSTR)(LPCSTR)strDir;
		
		SHELLEXECUTEINFO exeInfo;
		exeInfo.cbSize=sizeof(SHELLEXECUTEINFO);
		exeInfo.fMask=(SEE_MASK_DOENVSUBST | 
			SEE_MASK_FLAG_DDEWAIT |
			0x04000000 | 
			SEE_MASK_NOCLOSEPROCESS | 
			SEE_MASK_NO_CONSOLE
			);
		exeInfo.hwnd=owner->m_hWnd;
		exeInfo.lpVerb=pOp;
		exeInfo.lpFile=pFile;
		exeInfo.lpParameters=pParam;
		exeInfo.lpDirectory=pDir;
		exeInfo.nShow=showCmd;
		exeInfo.hInstApp=NULL;
		exeInfo.lpIDList=NULL;
		exeInfo.lpClass=NULL;
		exeInfo.hkeyClass=NULL;
		exeInfo.dwHotKey=NULL;
		exeInfo.hMonitor=NULL;
		exeInfo.hIcon=NULL;
		exeInfo.hProcess=NULL;

		BOOL r=::ShellExecuteEx(&exeInfo);
		DWORD pid=0;
		if(r && exeInfo.hProcess)
		{
			pid=OS_NewApi::GetProcessId(exeInfo.hProcess);
			if(wait)		
			{
				//轮询等待进程终止
				MSG msg;
				for(;;)
				{
					DWORD rtCode=::MsgWaitForMultipleObjects(1,&(exeInfo.hProcess),FALSE,INFINITE,QS_ALLEVENTS);
					if(rtCode==WAIT_OBJECT_0+1)
					{
						bool isQuit=false;   
						while(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) 
						{
							if (msg.message == WM_QUIT)  
							{
								isQuit=true;
								break;
							}
							DispatchMessage(&msg);
						}
						if(isQuit)
							break;
						::Sleep(100);
					}
					else if(rtCode!=WAIT_TIMEOUT)
					{
						break;
					}
				}
			}
			::CloseHandle( exeInfo.hProcess );
		}
		return pid;
	}
	virtual int __stdcall CopyFile(BSTR src,BSTR dest,int failIfExists)
	{
		return ::CopyFile(CString(src),CString(dest),failIfExists);
	}
	virtual int __stdcall MoveFile(BSTR src,BSTR dest,int flags)
	{
		return ::MoveFileEx(CString(src),CString(dest),flags);
	}
	virtual int __stdcall DeleteFile(BSTR file)
	{
		return ::DeleteFile(CString(file));
	}
	virtual int __stdcall CreateDirectory(BSTR path)
	{
		CString path_(path);
		path_.Replace('/','\\');
		int i=path_.Find('\\');
		if(i==0)
			i=path_.Find('\\',i+1);
		while(i>0)
		{
			CString lPath=path_.Left(i);
			if(!::PathFileExists(lPath) && !::CreateDirectory(lPath,NULL))
				return FALSE;
			i=path_.Find('\\',i+1);
		}
		if(!::PathFileExists(path_) && !::CreateDirectory(path_,NULL))
			return FALSE;
		return TRUE;
	}
	virtual int __stdcall RemoveDirectory(BSTR path)
	{
		CString path_(path);
		path_.Replace('/','\\');
		return RemoveDirectory_(path_);
	}
	virtual void __stdcall DirectoryIterate(BSTR path,int maxLevel,BSTR scpCallback)
	{
		CString path_(path);
		path_.Replace('/','\\');
		DirectoryIterate_(path_,maxLevel,CString(scpCallback),1);
	}
	virtual int __stdcall PathFileExists(BSTR path)
	{
		return ::PathFileExists(CString(path));
	}
	virtual BOOL __stdcall ProcessIterate(BSTR findKey,BSTR scpCallback)
	{
		try
		{
			CString key(findKey);
			key.MakeUpper();
			HANDLE         hProcessSnap = INVALID_HANDLE_VALUE; 
			BOOL           bRet			= TRUE; 
			PROCESSENTRY32 pe32			= {0}; 
			
			hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); 		
			if(hProcessSnap == INVALID_HANDLE_VALUE) 
				return FALSE; 
			
			pe32.dwSize = sizeof(PROCESSENTRY32); 
			if(::Process32First(hProcessSnap, &pe32)) 
			{ 
				do 
				{
					CString exeFile(pe32.szExeFile);
					exeFile.MakeUpper();
					if(key.IsEmpty() || exeFile.Find(key)>=0)
					{
						IDispatch* tempPtr=owner->GetWindowObj();
						CComPtr<IDispatch> p;
						if(tempPtr)
						{				
							p.Attach(tempPtr);
							int rt=DispatchDriver::Invoke(p,scpCallback,pe32.th32ProcessID,pe32.th32ParentProcessID,pe32.cntThreads,CComBSTR(pe32.szExeFile),(DWORD)pe32.pcPriClassBase,Type2Type<int>());
							if(!rt)
							{
								break;
							}
						}
					}
				}
				while(::Process32Next(hProcessSnap, &pe32)); 
			}
			else
			{
				bRet=FALSE;
			}
			::CloseHandle(hProcessSnap);
			return bRet;
		}
		catch(...)
		{
			return FALSE;
		}	
	}
	virtual BOOL __stdcall ThreadIterate(DWORD pid,BSTR scpCallback)
	{
		try
		{
			HANDLE         hThreadSnap	= INVALID_HANDLE_VALUE; 
			BOOL           bRet			= TRUE; 
			THREADENTRY32 te32			= {0}; 
			
			hThreadSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0); 		
			if(hThreadSnap == INVALID_HANDLE_VALUE) 
				return FALSE; 
			
			te32.dwSize = sizeof(THREADENTRY32); 
			if(::Thread32First(hThreadSnap, &te32)) 
			{ 
				do 
				{
					if(te32.th32OwnerProcessID==pid)
					{
						IDispatch* tempPtr=owner->GetWindowObj();
						CComPtr<IDispatch> p;
						if(tempPtr)
						{				
							p.Attach(tempPtr);
							int rt=DispatchDriver::Invoke(p,scpCallback,te32.th32ThreadID,te32.th32OwnerProcessID,(DWORD)te32.tpBasePri,Type2Type<int>());
							if(!rt)
							{
								break;
							}
						}
					}
				}
				while(::Thread32Next(hThreadSnap, &te32)); 
			}
			else
			{
				bRet=FALSE;
			}
			::CloseHandle(hThreadSnap);
			return bRet;
		}
		catch(...)
		{
			return FALSE;
		}
	}
	virtual BOOL __stdcall ModuleIterate(DWORD pid,BSTR scpCallback)
	{
		try
		{
			HANDLE			hModuleSnap = INVALID_HANDLE_VALUE; 
			BOOL			bRet		= TRUE; 
			MODULEENTRY32	me32		= {0};
			hModuleSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid); 
			if(hModuleSnap == INVALID_HANDLE_VALUE) 
			{
				return FALSE; 
			} 
			
			me32.dwSize = sizeof(MODULEENTRY32);
			if(::Module32First(hModuleSnap, &me32)) 
			{
				do 
				{
					IDispatch* tempPtr=owner->GetWindowObj();
					CComPtr<IDispatch> p;
					if(tempPtr)
					{				
						p.Attach(tempPtr);
						int rt=DispatchDriver::Invoke(p,scpCallback,CComBSTR(me32.szModule),me32.th32ProcessID,(DWORD)me32.modBaseAddr,me32.modBaseSize,CComBSTR(me32.szExePath),(DWORD)me32.hModule,Type2Type<int>());
						if(!rt)
						{
							break;
						}
					}
				}
				while(::Module32Next(hModuleSnap, &me32)); 
			}
			else
			{
				bRet=FALSE;
			}
			CloseHandle( hModuleSnap ); 
			return bRet;
		}
		catch(...)
		{
			return FALSE;
		}
	}
	virtual BOOL __stdcall HeapIterate(DWORD pid,BSTR scpCallback)
	{
		try
		{
			HANDLE			hHeapListSnap = INVALID_HANDLE_VALUE; 
			BOOL			bRet		  = TRUE; 
			HEAPLIST32		heapList32	  = {0};
			hHeapListSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPHEAPLIST, pid); 
			if(hHeapListSnap == INVALID_HANDLE_VALUE) 
			{
				return FALSE; 
			} 

			heapList32.dwSize=sizeof(HEAPLIST32);
			if(::Heap32ListFirst(hHeapListSnap,&heapList32)) 
			{
				do 
				{
					HEAPENTRY32 heapEntry32	= {0};
					heapEntry32.dwSize=sizeof(HEAPENTRY32);
					if(Heap32First(&heapEntry32,heapList32.th32ProcessID,heapList32.th32HeapID))
					{
						do
						{
							IDispatch* tempPtr=owner->GetWindowObj();
							CComPtr<IDispatch> p;
							if(tempPtr)
							{				
								p.Attach(tempPtr);
								int rt=DispatchDriver::Invoke(p,scpCallback,(DWORD)heapEntry32.hHandle,(DWORD)heapEntry32.dwAddress,(DWORD)heapEntry32.dwBlockSize,(DWORD)heapEntry32.dwFlags,(DWORD)heapEntry32.th32ProcessID,Type2Type<int>());
								if(!rt)
								{
									goto beforeReturn;
								}
							}
						}
						while(::Heap32Next(&heapEntry32));
					}
					else
					{
						break;
					}
				}
				while(::Heap32ListNext(hHeapListSnap,&heapList32)); 
			}
			else
			{
				bRet=FALSE;
			}
beforeReturn:
			CloseHandle( hHeapListSnap ); 
			return bRet;
		}
		catch(...)
		{
			return FALSE;
		}
	}
	virtual BOOL __stdcall TerminateProcess(DWORD id)
	{
		BOOL bRet=FALSE;
		HANDLE hProcess = OpenProcess (PROCESS_ALL_ACCESS,FALSE,id);
		if(hProcess)
		{
			bRet=::TerminateProcess(hProcess,0);
			CloseHandle(hProcess);
		}
		return bRet;
	}
	virtual DWORD __stdcall get_ProcessId(void)
	{
		return ::GetCurrentProcessId();
	}
	virtual DWORD __stdcall get_ThreadId(void)
	{
		return ::GetCurrentThreadId();
	}
	virtual BOOL __stdcall ProcessExists(DWORD id)
	{
		HANDLE handle=::OpenProcess(PROCESS_ALL_ACCESS,FALSE,id);
		if(!handle)
			return FALSE;
		DWORD r=::WaitForSingleObject(handle,0);
		::CloseHandle(handle);
		if(r!=WAIT_TIMEOUT)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall ThreadExists(DWORD id)
	{		
		HANDLE handle=OS_NewApi::OpenThread(PROCESS_ALL_ACCESS,FALSE,id);
		if(!handle)
			return FALSE;
		DWORD r=::WaitForSingleObject(handle,0);
		::CloseHandle(handle);
		if(r!=WAIT_TIMEOUT)
			return FALSE;
		return TRUE;
	}
	virtual void __stdcall ClearExportInfo(void)
	{
		exportInfo.clear();
	}
	virtual BOOL __stdcall ParseExportInfo(DWORD pid,DWORD mbase,DWORD msize)
	{
		try
		{
			HANDLE handle=::OpenProcess(PROCESS_ALL_ACCESS, FALSE,pid);
			if(!handle)
				return FALSE;
			AutoCloseHandle autoClose(handle);
			char* buf=new char[msize];
			ArrayRelease<char> arrayRelease(buf);

			DWORD size=0;
			BOOL r=::ReadProcessMemory(handle,(LPCVOID)mbase,buf,msize,&size);
			if(!r)
				return FALSE;

			DWORD base=(DWORD)buf;
			const IMAGE_DOS_HEADER* dos_head = (const IMAGE_DOS_HEADER*)base;	    		
			if (dos_head->e_magic != IMAGE_DOS_SIGNATURE)
			{
				return FALSE;
			}                         /* verify DOS-EXE-Header */
			const PE_HEADER* header=(const PE_HEADER*)((char *)dos_head + dos_head->e_lfanew);/* after end of DOS-EXE-Header: offset to PE-Header */		
			IMAGE_EXPORT_DIRECTORY* exp_dcp=(IMAGE_EXPORT_DIRECTORY*)(base+header->opt_head.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
			CString dllName=(char*)(base+exp_dcp->Name);
			FunctionsInfo fis;
			if(exp_dcp->AddressOfFunctions)
			{
				DWORD* addrs=(DWORD*)(base+exp_dcp->AddressOfFunctions);
				for(DWORD i=0;i<exp_dcp->NumberOfFunctions;i++)
				{
					FunctionInfo fi;
					fi.addr=mbase+addrs[i];

					CString temp;
					temp.Format("%s!#%d",(LPCSTR)dllName,exp_dcp->Base+i);

					fi.name=temp;
					fis.push_back(fi);
				}
			}
			if(exp_dcp->AddressOfNames && exp_dcp->AddressOfNameOrdinals)
			{
				DWORD* addrs=(DWORD*)(base+exp_dcp->AddressOfNames);
				WORD* ixs=(WORD*)(base+exp_dcp->AddressOfNameOrdinals);
				for(DWORD i=0;i<exp_dcp->NumberOfNames && addrs[i];i++)
				{
					DWORD addr=base+addrs[i];
					DWORD ix=(DWORD)ixs[i];

					CString temp;
					temp.Format("%s|%s",(LPCSTR)fis[ix].name,(char*)addr);

					fis[ix].name=temp;
				}
			}
			FunctionsInfo::iterator it=fis.begin();
			for(;it!=fis.end();it++)
			{
				if(it->addr!=0)
				{
					exportInfo.push_back(*it);
				}
			}
			return TRUE;
		}
		catch(...)
		{
			return FALSE;
		}
	}
	virtual void __stdcall BuildExportInfo(void)
	{
		std::sort(exportInfo.begin(),exportInfo.end(),FunctionInfoSortPredicate());
	}
	virtual VARIANT __stdcall GetExportFunctionInfo(DWORD addr)
	{
		int size=(int)exportInfo.size();
		int low=0;
		int high=size-1;
		while(low<=high)
		{
			int m=(low+high)/2;
			const FunctionInfo& fi=exportInfo[m];
			if(fi.addr==addr)
			{
				SAFEARRAY* psa=SafeArray::Build(fi.addr,CComBSTR(fi.name));
                VARIANT rt;
                ::VariantInit(&rt);
                rt.vt=VT_ARRAY|VT_VARIANT;
                rt.parray=psa;
                return rt;
			}
			else if(fi.addr<addr)
			{
				low=m+1;
			}
			else
			{
				high=m-1;
			}
		}
		if(high>=0)
		{
			const FunctionInfo& fi=exportInfo[high];
			SAFEARRAY* psa=SafeArray::Build(fi.addr,CComBSTR(fi.name));
			VARIANT rt;
			::VariantInit(&rt);
			rt.vt=VT_ARRAY|VT_VARIANT;
			rt.parray=psa;
			return rt;
		}
		else
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}
	}
	virtual VARIANT __stdcall get_ExportInfo(void)
	{
		FunctionsInfo::iterator it=exportInfo.begin();		
		if(it==exportInfo.end())
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}
		SAFEARRAY* newPsa=::SafeArrayCreateVector(VT_VARIANT,0,(DWORD)exportInfo.size());              
		for(long i=0;it!=exportInfo.end();i++,it++)
		{               
			CString temp;
			temp.Format("%8.8X:%s",it->addr,(LPCSTR)it->name);
			CComVariant var(temp);
			::SafeArrayPutElement(newPsa,&i,&var);
		}       
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=newPsa;
		return rt;
	}
	virtual void __stdcall ClearImportInfo(void)
	{
		importRecords.clear();
		importInfo.clear();
	}
	virtual BOOL __stdcall ParseImportInfo(DWORD pid,DWORD mbase,DWORD msize)
	{
		try
		{
			HANDLE handle=::OpenProcess(PROCESS_ALL_ACCESS, FALSE,pid);
			if(!handle)
				return FALSE;
			AutoCloseHandle autoClose(handle);
			char* buf=new char[msize];
			ArrayRelease<char> arrayRelease(buf);

			DWORD size=0;
			BOOL r=::ReadProcessMemory(handle,(LPCVOID)mbase,buf,msize,&size);
			if(!r)
				return FALSE;

			DWORD base=(DWORD)buf;
			const IMAGE_DOS_HEADER* dos_head = (const IMAGE_DOS_HEADER*)base;	    		
			if (dos_head->e_magic != IMAGE_DOS_SIGNATURE)
			{
				return FALSE;
			}                         /* verify DOS-EXE-Header */
			const PE_HEADER* header=(const PE_HEADER*)((char *)dos_head + dos_head->e_lfanew);/* after end of DOS-EXE-Header: offset to PE-Header */	
			IMAGE_IMPORT_DESCRIPTOR* imp_dcp=(IMAGE_IMPORT_DESCRIPTOR*)(base+header->opt_head.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
			for(int i=0;imp_dcp[i].Name;i++)
			{                       
				CString dllName((char*)(base+imp_dcp[i].Name));			
				DWORD* thunk_data=(DWORD*)(base+imp_dcp[i].OriginalFirstThunk);
				DWORD* thunk_data2=(DWORD*)(base+imp_dcp[i].FirstThunk);  

				for(int j=0;thunk_data[j] && thunk_data2[j];j++)
				{
						if((thunk_data[j] & 0x80000000) != 0)
						{
							CString temp;
							temp.Format("%s!#%d",(LPCSTR)dllName,(thunk_data[j] & 0x0000FFFF));

							importRecords[thunk_data2[j]]=temp;
						}
						else
						{
							char* funcName=(char*)(base+thunk_data[j])+2;
							CString temp;
							temp.Format("%s!%s",(LPCSTR)dllName,(LPCSTR)funcName);

							importRecords[thunk_data2[j]]=temp;
						}
				}
			}
			return TRUE;
		}
		catch(...)
		{
			return FALSE;
		}
	}
	virtual void __stdcall BuildImportInfo(void)
	{
		if(importInfo.size()<=0)
		{
			FunctionsMap::iterator it=importRecords.begin();
			for(;it!=importRecords.end();it++)
			{
				FunctionInfo fi;
				fi.addr=it->first;
				fi.name=it->second;
				importInfo.push_back(fi);
			}
			importRecords.clear();
		}
		std::sort(importInfo.begin(),importInfo.end(),FunctionInfoSortPredicate());
	}
	virtual VARIANT __stdcall GetImportFunctionInfo(DWORD addr)
	{
		DWORD size=(DWORD)importInfo.size();
		DWORD low=0;
		DWORD high=size-1;
		while(low<=high)
		{
			DWORD m=(low+high)/2;
			const FunctionInfo& fi=importInfo[m];
			if(fi.addr==addr)
			{
				SAFEARRAY* psa=SafeArray::Build(fi.addr,CComBSTR(fi.name));
                VARIANT rt;
                ::VariantInit(&rt);
                rt.vt=VT_ARRAY|VT_VARIANT;
                rt.parray=psa;
                return rt;
			}
			else if(fi.addr<addr)
			{
				low=m+1;
			}
			else
			{
				high=m-1;
			}
		}
		if(high>=0)
		{
			const FunctionInfo& fi=importInfo[high];
			SAFEARRAY* psa=SafeArray::Build(fi.addr,CComBSTR(fi.name));
			VARIANT rt;
			::VariantInit(&rt);
			rt.vt=VT_ARRAY|VT_VARIANT;
			rt.parray=psa;
			return rt;
		}
		else
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}		
	}
	virtual VARIANT __stdcall get_ImportInfo(void)
	{
		FunctionsInfo::iterator it=importInfo.begin();		
		if(it==importInfo.end())
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}
		SAFEARRAY* newPsa=::SafeArrayCreateVector(VT_VARIANT,0,(DWORD)importInfo.size());              
		for(long i=0;it!=importInfo.end();i++,it++)
		{               
			CString temp;
			temp.Format("%8.8X:%s",it->addr,(LPCSTR)it->name);
			CComVariant var(temp);
			::SafeArrayPutElement(newPsa,&i,&var);
		}       
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=newPsa;
		return rt;
	}
	virtual BSTR __stdcall GetError(int error)
	{
		if(!error)
			error=::GetLastError();
		LPVOID lpMsgBuf=NULL;
		::FormatMessage(
			FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL,
			error,
			MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
			(LPTSTR) &lpMsgBuf,
			0,
			NULL 
			);
		CString ret((LPSTR)lpMsgBuf);
		::LocalFree(lpMsgBuf);
		return ret.AllocSysString();
	}
	virtual int __stdcall GetFileSize(BSTR fileName)
	{
		return ScriptFile::GetLocalFileLength(CString(fileName));
	}
	virtual BSTR __stdcall GetFileTime(BSTR fileName)
	{		
		WIN32_FILE_ATTRIBUTE_DATA fileAttrib;
		if(!GetFileAttributesEx(CString(fileName),GetFileExInfoStandard,&fileAttrib))
			return NULL;
		CString retStr;
		retStr.Format("%s;%s;%s",(LPCSTR)FormatUTCFileTime(fileAttrib.ftCreationTime),(LPCSTR)FormatUTCFileTime(fileAttrib.ftLastWriteTime),(LPCSTR)FormatUTCFileTime(fileAttrib.ftLastAccessTime));
		return retStr.AllocSysString();
	}
	virtual BSTR __stdcall GetFileVersion(BSTR fileName)
	{
		CString fileStr(fileName);
		DWORD d=0;
		DWORD size=::GetFileVersionInfoSize(fileStr,&d);
		if(size==0)
			return NULL;
		char* pData=new char[size];
		BOOL r=::GetFileVersionInfo(fileStr,d,size,pData);
		if(!r)
		{
			delete[] pData;
			return NULL;
		}
		VS_FIXEDFILEINFO* pBuf=NULL;
		UINT len=0;
		r=::VerQueryValue(pData,"\\",(LPVOID*)&pBuf,&len);
		if(!r)
		{
			delete[] pData;
			return NULL;
		}
		CString temp;
		temp.Format("%u.%u.%u.%u",HIWORD(pBuf->dwFileVersionMS),LOWORD(pBuf->dwFileVersionMS),HIWORD(pBuf->dwFileVersionLS),LOWORD(pBuf->dwFileVersionLS));
		return temp.AllocSysString();
	}
	virtual BSTR __stdcall GetProductVersion(BSTR fileName)
	{
		CString fileStr(fileName);
		DWORD d=0;
		DWORD size=::GetFileVersionInfoSize(fileStr,&d);
		if(size==0)
			return NULL;
		char* pData=new char[size];
		BOOL r=::GetFileVersionInfo(fileStr,d,size,pData);
		if(!r)
		{
			delete[] pData;
			return NULL;
		}
		VS_FIXEDFILEINFO* pBuf=NULL;
		UINT len=0;
		r=::VerQueryValue(pData,"\\",(LPVOID*)&pBuf,&len);
		if(!r)
		{
			delete[] pData;
			return NULL;
		}
		CString temp;
		temp.Format("%u.%u.%u.%u",HIWORD(pBuf->dwProductVersionMS),LOWORD(pBuf->dwProductVersionMS),HIWORD(pBuf->dwProductVersionLS),LOWORD(pBuf->dwProductVersionLS));
		return temp.AllocSysString();
	}
#define BUFSIZE 4096
	virtual BSTR __stdcall CallConsoleApp(BSTR cmd,BSTR curDir,BSTR envString)
	{
		CString retStr="";
		HANDLE hChildStdoutRd, hChildStdoutWr, hChildStdoutRdDup, hSaveStdout;
		 
		SECURITY_ATTRIBUTES saAttr; 
		BOOL fSuccess;
		
		::AllocConsole();
#if _WIN32_WINNT>=0x0500
		HWND hwnd=::GetConsoleWindow();
		::ShowWindow(hwnd,SW_HIDE);
#else		
		DWORD PTIDs[2];
		PTIDs[0]=::GetCurrentProcessId();
		PTIDs[1]=::GetCurrentThreadId();
		::EnumWindows(&MyShell::MyHideConsole,(LPARAM)PTIDs);
#endif
		// Set the bInheritHandle flag so pipe handles are inherited. 		 
		saAttr.nLength = sizeof(SECURITY_ATTRIBUTES); 
		saAttr.bInheritHandle = TRUE; 
		saAttr.lpSecurityDescriptor = NULL; 
		 
		// The steps for redirecting child process's STDOUT: 
		//     1. Save current STDOUT, to be restored later. 
		//     2. Create anonymous pipe to be STDOUT for child process. 
		//     3. Set STDOUT of the parent process to be write handle to 
		//        the pipe, so it is inherited by the child process. 
		//     4. Create a noninheritable duplicate of the read handle and
		//        close the inheritable read handle. 
		 
		// Save the handle to the current STDOUT. 		 
		hSaveStdout = ::GetStdHandle(STD_OUTPUT_HANDLE); 		 
		// Create a pipe for the child process's STDOUT. 		 
		if(!::CreatePipe(&hChildStdoutRd, &hChildStdoutWr, &saAttr, 0))
		{
			retStr+="Stdout pipe creation failed.\n"; 
		}		 
		// Set a write handle to the pipe to be STDOUT. 		 
		if(!::SetStdHandle(STD_OUTPUT_HANDLE, hChildStdoutWr))
		{
			retStr+="Redirecting STDOUT failed.\n"; 
		}		 
		// Create noninheritable read handle and close the inheritable read 
		// handle.
		fSuccess = ::DuplicateHandle(::GetCurrentProcess(), hChildStdoutRd,
			::GetCurrentProcess(), &hChildStdoutRdDup , 0,
			FALSE,
			DUPLICATE_SAME_ACCESS);
		if(!fSuccess )
		{
			retStr+="DuplicateHandle failed.\n";
		}
		::CloseHandle(hChildStdoutRd);
		// Now create the child process. 
		STARTUPINFO startInfo;
		PROCESS_INFORMATION procInfo;
		::ZeroMemory((PVOID)&startInfo,sizeof(startInfo));
		startInfo.cb=sizeof(startInfo);
		startInfo.dwFlags=STARTF_USESHOWWINDOW;
		startInfo.wShowWindow=SW_HIDE;
		
		CString envStr(envString);
		char* envBuf=NULL;
		if(envStr.GetLength()>0)
		{
			envBuf=new char[envStr.GetLength()+2];
			::ZeroMemory(envBuf,envStr.GetLength()+2);
			::CopyMemory(envBuf,envStr,envStr.GetLength());
			for(int ei=0;ei<envStr.GetLength();ei++)
			{
				if(envBuf[ei]==';')
					envBuf[ei]=0;
			}
		}
		fSuccess=::CreateProcess(NULL,(LPSTR)(LPCSTR)CString(cmd),NULL,NULL,TRUE,0,envBuf,CString(curDir),&startInfo,&procInfo);
		if(!fSuccess)
		{
			retStr+="Can not startup compile program.\n";
		}		
		else
		{
			::CloseHandle(procInfo.hThread);
			::CloseHandle(procInfo.hProcess);
		}
		// After process creation, restore the saved STDOUT. 		 
		if(!SetStdHandle(STD_OUTPUT_HANDLE, hSaveStdout)) 
			retStr+="Re-redirecting Stdout failed.\n";	
		//Wait process terminate.
		/*在调用cl.exe时发现几点：
			1、等待函数返回值指示有消息需要处理时表明cl.exe处理已经完成；
			2、在管道读写句柄均关闭时cl.exe进程才真正退出。
		*/
		HANDLE handle=::OpenProcess(PROCESS_ALL_ACCESS,FALSE,procInfo.dwProcessId);
		DWORD rtCode=::MsgWaitForMultipleObjects(1,&handle,FALSE,INFINITE,0);
		::CloseHandle(handle);
		// Close the write end of the pipe. 		 
		if(!::CloseHandle(hChildStdoutWr))
			retStr+="Can't close the write end of the pipe";	
		// Read from pipe that is the standard output for child process. 
		DWORD dwRead; 
		CHAR chBuf[BUFSIZE+1];		
		// Read output from the child process.
		//::PeekNamedPipe(hChildStdoutRdDup,NULL,0,NULL,&dwRead,NULL)
		for (;;) 
		{
			if(!::ReadFile(hChildStdoutRdDup, chBuf, BUFSIZE, &dwRead, NULL) || dwRead==0)
				break; 
			chBuf[dwRead]=0;
			retStr+=CString(chBuf);
		}
		// Close the read end of the pipe.
		if(!::CloseHandle(hChildStdoutRdDup))
			retStr+="Can't close the read end of the pipe";
		//Release environment variable block.
		if(envBuf!=NULL)
		{
			delete[] envBuf;
		}
		::FreeConsole();
		return retStr.AllocSysString();
	}
	virtual BSTR __stdcall GetTxtFileFormat(BSTR filePath)
	{
		CString cFilePath(filePath);
		long size=ScriptFile::GetLocalFileLength(cFilePath);
		if(size<0)
			return NULL;
		std::fstream file(cFilePath,std::ios_base::in | std::ios_base::out | std::ios_base::binary);
		if(file.fail())
			return NULL;
		if(size>=2)
		{
			file.seekg(0);
			unsigned short flag=0;
			file.read((char*)&flag,2);
			if(flag==0xFEFF)//Unicode
			{			
				file.close();
				return CString("Unicode").AllocSysString();
			}
			else if(flag==0xFFFE)//Unicode big endian
			{
				//这种格式的文件我们不支持，它的存储与WINDOWS平台下的存储习惯相反。
				file.close();
				return CString("Unicode big endian").AllocSysString();
			}
			else if(flag==0xBBEF && size>=3)//?UTF-8
			{
				char flag2=0;
				file.read(&flag2,1);
				if(flag2=='\xBF')//UTF-8
				{
					file.close();
					return CString("UTF-8").AllocSysString();
				}
			}
		}
		file.close();
		return CString("ANSI").AllocSysString();
	}
	virtual BOOL __stdcall TxtFileReplace(BSTR filePath,BSTR src,BSTR dest)
	{
		CString cFilePath(filePath);
		long size=ScriptFile::GetLocalFileLength(cFilePath);
		if(size<0)
			return FALSE;
		std::fstream file(cFilePath,std::ios_base::in | std::ios_base::out | std::ios_base::binary);
		if(file.fail())
			return FALSE;
		if(size>=2)
		{
			file.seekg(0);
			unsigned short flag=0;
			file.read((char*)&flag,2);
			if(flag==0xFEFF)//Unicode
			{
				size-=2;
				char* buf=new char[size+6];
				*(UINT*)buf=(UINT)size;
				file.read(buf+4,size);
				buf[size+4]=0;
				buf[size+5]=0;
				CComBSTR fileContent((BSTR)(buf+4));
				delete[] buf;

				CString strContent=CString(fileContent);
				strContent.Replace(CString(src),CString(dest));
				CComBSTR bstrContent(strContent);

				file.seekp(2);
				file.write((const char*)(BSTR)bstrContent,bstrContent.Length()*2);
				file.close();
				return TRUE;
			}
			else if(flag==0xFFFE)//Unicode big endian
			{
				//这种格式的文件我们不支持，它的存储与WINDOWS平台下的存储习惯相反。
				file.close();
				return FALSE;
			}
			else if(flag==0xBBEF && size>=3)//?UTF-8
			{
				char flag2=0;
				file.read(&flag2,1);
				if(flag2=='\xBF')//UTF-8
				{
					size-=3;
					char* buf=new char[size+1];
					file.read(buf,size);
					buf[size]=0;
					CString fileContent(buf);
					delete[] buf;

					CString strContent=ScriptFile::UTF8ToStr(fileContent);
					strContent.Replace(CString(src),CString(dest));
					CString utf8Content=ScriptFile::StrToUTF8(strContent);

					file.seekp(3);
					file.write(utf8Content,utf8Content.GetLength());
					file.close();
					return TRUE;
				}
			}
		}
		//普通ANSI ASCII文件
		{
			file.seekg(0);
			char* buf=new char[size+1];
			file.read(buf,size);
			buf[size]=0;
			CString fileContent(buf);
			delete[] buf;

			fileContent.Replace(CString(src),CString(dest));
			
			file.seekp(0);
			file.write(fileContent,fileContent.GetLength());
			file.close();
			return TRUE;
		}
	}
	virtual UINT __stdcall CountTxtFileLines(BSTR filePath)
	{
		std::fstream file(CString(filePath),std::ios_base::in);
		if(file.fail())
			return 0;
		int count=0;
		char c;
		while(!file.eof() && !file.fail())
		{
			file.get(c);
			if(c=='\n')
				count++;
		}
		file.close();
		return count;
	}
	virtual BSTR __stdcall ReadTxtFile(BSTR filePath)
	{
		CString cFilePath(filePath);
		long size=ScriptFile::GetLocalFileLength(cFilePath);
		if(size<0)
			return NULL;
		std::fstream file(cFilePath,std::ios_base::in | std::ios_base::out | std::ios_base::binary);
		if(file.fail())
			return NULL;
		if(size>=2)
		{
			file.seekg(0);
			unsigned short flag=0;
			file.read((char*)&flag,2);
			if(flag==0xFEFF)//Unicode
			{
				size-=2;
				char* buf=new char[size+6];
				*(UINT*)buf=(UINT)size;
				file.read(buf+4,size);
				buf[size+4]=0;
				buf[size+5]=0;
				CComBSTR fileContent((BSTR)(buf+4));
				delete[] buf;

				CString strContent=CString(fileContent);

				file.close();
				return strContent.AllocSysString();
			}
			else if(flag==0xFFFE)//Unicode big endian
			{
				//这种格式的文件我们不支持，它的存储与WINDOWS平台下的存储习惯相反。
				file.close();
				return NULL;
			}
			else if(flag==0xBBEF && size>=3)//?UTF-8
			{
				char flag2=0;
				file.read(&flag2,1);
				if(flag2=='\xBF')//UTF-8
				{
					size-=3;
					char* buf=new char[size+1];
					file.read(buf,size);
					buf[size]=0;
					CString fileContent(buf);
					delete[] buf;

					CString strContent=ScriptFile::UTF8ToStr(fileContent);

					file.close();
					return strContent.AllocSysString();
				}
			}		
		}
		//普通ANSI ASCII文件
		{
			file.seekg(0);
			char* buf=new char[size+1];
			file.read(buf,size);
			buf[size]=0;
			CString fileContent(buf);
			delete[] buf;

			file.close();
			return fileContent.AllocSysString();
		}
	}
	virtual BOOL __stdcall WriteTxtFile(BSTR filePath,BSTR format,BSTR content)
	{
		CString cFilePath(filePath);
		CString cFormat(format);
		CString strContent(content);
		std::fstream file(cFilePath,std::ios_base::out | std::ios_base::binary);
		if(file.fail())
			return FALSE;
		unsigned short flag=0;
		if(cFormat.CompareNoCase("Unicode")==0)//Unicode
		{
			flag=0xFEFF;

			CComBSTR bstrContent(strContent);

			file.seekp(0);
			file.write((const char*)&flag,2);
			file.write((const char*)(BSTR)bstrContent,bstrContent.Length()*2);
			file.close();
			return TRUE;
		}
		else if(cFormat.CompareNoCase("Unicode big endian")==0)//Unicode big endian
		{
			//这种格式的文件我们不支持，它的存储与WINDOWS平台下的存储习惯相反。
			flag=0xFFFE;
			file.close();
			return FALSE;
		}
		else if(cFormat.CompareNoCase("UTF-8")==0)//UTF-8
		{
			flag=0xBBEF;
			char flag2='\xBF';

			CString utf8Content=ScriptFile::StrToUTF8(strContent);

			file.seekp(0);
			file.write((const char*)&flag,2);
			file.write((const char*)&flag2,1);
			file.write(utf8Content,utf8Content.GetLength());
			file.close();
			return TRUE;
		}		
		//普通ANSI ASCII文件
		{
			file.seekp(0);
			file.write(strContent,strContent.GetLength());
			file.close();
			return TRUE;
		}
	}
	virtual BOOL __stdcall AppendTxtFile(BSTR filePath,BSTR content)
	{
		CString cFilePath(filePath);
		CString strContent(content);
		long size=ScriptFile::GetLocalFileLength(cFilePath);
		if(size<0)
			return FALSE;
		std::fstream file(cFilePath,std::ios_base::in | std::ios_base::out | std::ios_base::binary);
		if(file.fail())
			return FALSE;
		if(size>=2)
		{
			file.seekg(0);
			unsigned short flag=0;
			file.read((char*)&flag,2);
			if(flag==0xFEFF)//Unicode
			{
				CComBSTR bstrContent(strContent);

				file.seekp(0,std::ios_base::end);
				file.write((const char*)(BSTR)bstrContent,bstrContent.Length()*2);
				file.close();
				return TRUE;
			}
			else if(flag==0xFFFE)//Unicode big endian
			{
				//这种格式的文件我们不支持，它的存储与WINDOWS平台下的存储习惯相反。
				file.close();
				return FALSE;
			}
			else if(flag==0xBBEF && size>=3)//?UTF-8
			{
				char flag2=0;
				file.read(&flag2,1);
				if(flag2=='\xBF')//UTF-8
				{
					CString utf8Content=ScriptFile::StrToUTF8(strContent);
					
					file.seekp(0,std::ios_base::end);
					file.write(utf8Content,utf8Content.GetLength());
					file.close();
					return TRUE;
				}
			}	
		}
		//普通ANSI ASCII文件
		{			
			file.seekp(0,std::ios_base::end);
			file.write(strContent,strContent.GetLength());
			file.close();
			return TRUE;
		}
	}
	virtual BSTR __stdcall GetComputerName(void)
	{
		char buf[1025];
		DWORD len=1024;
		BOOL rt=::GetComputerName(buf,&len);
		if(!rt)
			return NULL;
		buf[len]=0;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall GetUserName(void)
	{
		char buf[1025];
		DWORD len=1024;
		BOOL rt=::GetUserName(buf,&len);
		if(!rt)
			return NULL;
		buf[len]=0;
		return CString(buf).AllocSysString();
	}
	virtual unsigned int __stdcall FindWindow(UINT hwndParent,UINT hwndFirstChild,BSTR className,BSTR windowTitle)
	{
		const char* pClassName=NULL;
		const char* pWindowTitle=NULL;
		CString cName(className),wTitle(windowTitle);
		if(cName.GetLength()>0)
			pClassName=(LPCSTR)cName;
		if(wTitle.GetLength()>0)
			pWindowTitle=(LPCSTR)wTitle;		
		return (UINT)::FindWindowEx((HWND)hwndParent,(HWND)hwndFirstChild,pClassName,pWindowTitle);
	}
	virtual UINT __stdcall SendMessage(unsigned int hwnd,unsigned int msg,unsigned int wParam,unsigned int lParam)
	{
		return ::SendMessage((HWND)hwnd,msg,wParam,lParam);
	}
	virtual UINT __stdcall PostMessage(unsigned int hwnd,unsigned int msg,unsigned int wParam,unsigned int lParam)
	{
		return ::PostMessage((HWND)hwnd,msg,wParam,lParam);
	}
	virtual UINT __stdcall SendNotifyMessage(unsigned int hwnd,unsigned int msg,unsigned int wParam,unsigned int lParam)
	{
		return ::SendNotifyMessage((HWND)hwnd,msg,wParam,lParam);
	}
	virtual UINT __stdcall SendMessageTimeout(unsigned int hwnd,unsigned int msg,unsigned int wParam,unsigned int lParam,UINT uFlag,UINT timeout)
	{
		DWORD r=0;
		::SendMessageTimeout((HWND)hwnd,msg,wParam,lParam,uFlag,timeout,&r);
		return r;
	}
	virtual UINT __stdcall SendCopyDataMsg(unsigned int hwnd,DWORD cmd,BSTR msg)
	{
		HWND hWnd=owner->m_hWnd;
		CString msgStr(msg);
		COPYDATASTRUCT data;
		data.dwData=cmd;
		data.cbData=msgStr.GetLength()+1;
		data.lpData=(LPVOID)(LPCSTR)msgStr;
		return ::SendMessage((HWND)hwnd,WM_COPYDATA,(WPARAM)hWnd,(LPARAM)&data);
	}
	virtual BOOL __stdcall IsWindow(UINT hwnd)
	{
		return ::IsWindow((HWND)hwnd);
	}
	virtual BOOL __stdcall IsWindowEnabled(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::IsWindowEnabled((HWND)hwnd);
	}
	virtual BOOL __stdcall IsWindowUnicode(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::IsWindowUnicode((HWND)hwnd);
	}
	virtual BOOL __stdcall IsWindowVisible(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::IsWindowVisible((HWND)hwnd);
	}
	virtual BOOL __stdcall IsWindowZoomed(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::IsZoomed((HWND)hwnd);
	}
	virtual BOOL __stdcall IsWindowIconic(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::IsIconic((HWND)hwnd);
	}
	virtual DWORD __stdcall GetWindowProcessId(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return NULL;
		DWORD pid=0;
		DWORD tid=::GetWindowThreadProcessId((HWND)hwnd,&pid);
		return pid;
	}
	virtual DWORD __stdcall GetWindowThreadId(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return NULL;
		DWORD pid=0;
		DWORD tid=::GetWindowThreadProcessId((HWND)hwnd,&pid);
		return tid;
	}
    virtual UINT __stdcall GetParent(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return NULL;
		return (UINT)::GetParent((HWND)hwnd);
	}
	virtual UINT __stdcall GetAncestor(UINT hwnd,UINT flag)
	{
		if(!::IsWindow((HWND)hwnd))
			return NULL;
		return (UINT)OS_NewApi::GetAncestor((HWND)hwnd,flag);
	}
	virtual BOOL __stdcall IsChild(UINT hwndParent,UINT hwnd)
	{
		if(!::IsWindow((HWND)hwndParent) || !::IsWindow((HWND)hwnd))
			return FALSE;
		return ::IsChild((HWND)hwndParent,(HWND)hwnd);
	}
	virtual UINT __stdcall GetLastActivePopup(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return NULL;
		return (UINT)::GetLastActivePopup((HWND)hwnd);
	}
	virtual BOOL __stdcall WindowIterate(BSTR scp)
	{
		WindowIterator wi(owner,scp);
		return ::EnumWindows(WindowIterator::EnumProc,(LPARAM)&wi);
	}
	virtual BOOL __stdcall ThreadWindowIterate(DWORD tid,BSTR scp)
	{
		HANDLE handle=OS_NewApi::OpenThread(PROCESS_ALL_ACCESS,FALSE,tid);
		if(!handle)
			return FALSE;
		DWORD r=::WaitForSingleObject(handle,0);
		::CloseHandle(handle);
		if(r!=WAIT_TIMEOUT)
			return FALSE;
		WindowIterator wi(owner,scp);
		return ::EnumThreadWindows(tid,WindowIterator::EnumProc,(LPARAM)&wi);
	}
	virtual BOOL __stdcall ChildWindowIterate(UINT hwnd,BSTR scp)
	{		
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		WindowIterator wi(owner,scp);
		return ::EnumChildWindows((HWND)hwnd,WindowIterator::EnumProc,(LPARAM)&wi);
	}
	virtual BSTR __stdcall GetWindowModuleFileName(UINT hwnd)
	{
		char fileName[1025];
		UINT len=OS_NewApi::GetWindowModuleFileName((HWND)hwnd,fileName,1024);
		fileName[len]=0;
		return CString(fileName).AllocSysString();
	}
	virtual BOOL __stdcall EnableWindow(UINT hwnd,BOOL bEnable)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::EnableWindow((HWND)hwnd,bEnable);
	}
	virtual BOOL __stdcall ShowWindow(UINT hwnd,int cmd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::ShowWindow((HWND)hwnd,cmd);
	}
	virtual UINT __stdcall WindowFromPoint(LONG x,LONG y)
	{
		POINT pt;
		pt.x=x;
		pt.y=y;
		return (UINT)::WindowFromPoint(pt);
	}
	virtual UINT __stdcall ChildWindowFromPoint(UINT hwnd,LONG x,LONG y,UINT flag)
	{
		if(::IsWindow((HWND)hwnd))
			return NULL;
		POINT pt;
		pt.x=x;
		pt.y=y;
		return (UINT)::ChildWindowFromPointEx((HWND)hwnd,pt,flag);
	}
	virtual BOOL __stdcall MinimizeWindow(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::CloseWindow((HWND)hwnd);
	}
	virtual BOOL __stdcall MaximizeWindow(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::OpenIcon((HWND)hwnd);
	}
	virtual BOOL __stdcall NormalWindow(UINT hwnd_)
	{
		HWND hwnd=(HWND)hwnd_;
		if(!::IsWindow(hwnd))return FALSE;
		bool isMDI;
		hwnd=ExterUtility::GetOuterLevelWindow(hwnd,isMDI);
		if(isMDI)
		{
			::SendMessage(::GetParent(hwnd), WM_MDIRESTORE,(WPARAM)hwnd,NULL);
			return TRUE;
		}
		else
			return ::ShowWindow(hwnd,SW_SHOWNORMAL);
	}
	virtual BOOL __stdcall SysCloseWindow(UINT hwnd_)
	{
		HWND hwnd=(HWND)hwnd_;
		if(!::IsWindow(hwnd))
			return FALSE;
		bool isMDI;
		hwnd=ExterUtility::GetOuterLevelWindow(hwnd,isMDI);
		if(isMDI)
			::SendMessage(::GetParent(hwnd),WM_MDIDESTROY,(WPARAM)hwnd,NULL);
		else
			::SendMessage(hwnd,WM_SYSCOMMAND,SC_CLOSE,0);
		return TRUE;
	}
	virtual BOOL __stdcall SetWindowText(UINT hwnd,BSTR txt)
	{
		if(!::IsWindow((HWND)hwnd))
			return FALSE;
		return ::SetWindowText((HWND)hwnd,(LPCSTR)CString(txt));
	}
	virtual BSTR __stdcall GetWindowText(UINT hwnd)
	{
		if(!::IsWindow((HWND)hwnd))
			return NULL;
		int len=::GetWindowTextLength((HWND)hwnd);
		if(len<=0)
			return NULL;
		char* txt=new char[len+1];		
		len=::GetWindowText((HWND)hwnd,txt,len);
		txt[len]=0;
		CString txtStr(txt);
		delete[] txt;
		return txtStr.AllocSysString();
	}
	virtual int __stdcall MoveWindow(UINT hwnd,int x,int y,int w,int h,BOOL bRepaint)
	{
		return ::MoveWindow((HWND)hwnd,x,y,w,h,bRepaint);
	}
	virtual int __stdcall SetWindowLong(UINT hwnd,int ix,int val)
	{
		return ::SetWindowLongPtr((HWND)hwnd,ix,val);
	}
	virtual int __stdcall GetWindowLong(UINT hwnd,int ix)
	{
		return ::GetWindowLongPtr((HWND)hwnd,ix);
	}
	virtual int __stdcall ModifyStyle(UINT hwnd,UINT remove,UINT add,UINT flag)
	{
		CWindow win;
		win.Attach((HWND)hwnd);
		int r=win.ModifyStyle(remove,add,flag);
		win.Detach();
		return r;
	}
	virtual int __stdcall ModifyStyleEx(UINT hwnd,UINT remove,UINT add,UINT flag)
	{
		CWindow win;
		win.Attach((HWND)hwnd);
		int r=win.ModifyStyleEx(remove,add,flag);
		win.Detach();
		return r;
	}
	virtual int __stdcall GetStyle(UINT hwnd)
	{
		CWindow win;
		win.Attach((HWND)hwnd);
		int r=win.GetStyle();
		win.Detach();
		return r;
	}
	virtual int __stdcall GetExStyle(UINT hwnd)
	{
		CWindow win;
		win.Attach((HWND)hwnd);
		int r=win.GetStyle();
		win.Detach();
		return r;
	}
	virtual int __stdcall SetWindowPos(UINT hwnd,UINT hwndInsertAfter,int x,int y,int w,int h,UINT flag)
	{
		return ::SetWindowPos((HWND)hwnd,(HWND)hwndInsertAfter,x,y,w,h,flag);
	}
	virtual IDispatch* __stdcall GetWBDocument(UINT hwnd)
	{
		HWND _hWnd=(HWND)hwnd;
		HWND hWndChild=NULL;

		TCHAR szClassName[256];
		::GetClassName(_hWnd,(LPTSTR)&szClassName,sizeof(szClassName));
  		if ( _tcscmp( szClassName, _T("Internet Explorer_Server") ) == 0 )
  		{
			hWndChild=_hWnd;
  		}
		else
		{
  			::EnumChildWindows( _hWnd, MyEnumChildProc, (LPARAM)&hWndChild );
  			if(NULL == hWndChild)
				return NULL;
		}

  		UINT nMsg = ::RegisterWindowMessage( _T("WM_HTML_GETOBJECT") );
  		LRESULT lRes;
  		::SendMessageTimeout( hWndChild, nMsg, 0L, 0L, SMTO_ABORTIFHUNG, 1000, (DWORD*) &lRes );

  		CComPtr< IHTMLDocument2 > spDoc;
  		HRESULT hr = ::ObjectFromLresult( lRes, IID_IHTMLDocument2, 0 , (LPVOID *) &spDoc );
  		if ( FAILED ( hr ) ) 
			return NULL;
		return spDoc.Detach();
	}
	virtual int __stdcall GetIECount(void)
	{
		CComPtr< IShellWindows > spShellWin;
		HRESULT hr = spShellWin.CoCreateInstance(CLSID_ShellWindows);
		if(FAILED(hr)) 
			return -1;

		long nCount=0;
		spShellWin->get_Count(&nCount); // ?得浏览器实例个数
		return nCount;
	}
	virtual IDispatch* __stdcall GetIEDocument(long ix)
	{
		CComPtr< IShellWindows > spShellWin;
		HRESULT hr = spShellWin.CoCreateInstance(CLSID_ShellWindows);
		if(FAILED(hr)) 
			return NULL;

		CComPtr< IDispatch > spDisp;
		hr=spShellWin->Item(CComVariant(ix), &spDisp );
		if (FAILED(hr))
			return NULL;
		CComQIPtr< IWebBrowser2 > spBrowser = spDisp;
		if(!spBrowser)
			return NULL;
		spDisp.Release();

		hr = spBrowser->get_Document( &spDisp );
		if(FAILED(hr))
			return NULL;

		CComQIPtr< IHTMLDocument2 > spDoc = spDisp;
		if(!spDoc)
			return NULL;
		return spDoc.Detach();
	}
	virtual void __stdcall put_Clipboard(BSTR text)
	{
		if(!::OpenClipboard(NULL))
			return;
		CString ctext(text);
		int len=ctext.GetLength();
		::EmptyClipboard();
		HGLOBAL hGlobal=::GlobalAlloc(GMEM_MOVEABLE,len+1);
		if(!hGlobal)
		{
			::CloseClipboard();
			return;
		}
		LPVOID pData=::GlobalLock(hGlobal);
		if(NULL==pData)
		{
			::CloseClipboard();
			return;
		}
		::CopyMemory(pData,(LPCSTR)ctext,len);
		((char*)pData)[len]=0;
		::GlobalUnlock(hGlobal);
		::SetClipboardData(CF_TEXT,hGlobal);
		::CloseClipboard();
	}
	virtual BSTR __stdcall get_Clipboard(void)
	{
		if(!::IsClipboardFormatAvailable(CF_TEXT))
			return NULL;
		if(!::OpenClipboard(NULL))
			return NULL;
		CString text;
		HGLOBAL hGlobal=::GetClipboardData(CF_TEXT);
		if(hGlobal)
		{
			LPVOID pData=::GlobalLock(hGlobal);
			text=(LPSTR)pData;
			::GlobalUnlock(hGlobal);
		}
		::CloseClipboard();
		return text.AllocSysString();
	}
	virtual UINT __stdcall GetApi(VARIANT dllOrHandle,BSTR api)
	{
		HMODULE hModule=NULL;
		CString apiName(api);
		if(dllOrHandle.vt==VT_BSTR)
		{
			CString dllName(dllOrHandle.bstrVal);
			ApiModules::iterator it=apiModules.find(dllName);
			if(it!=apiModules.end())
			{
				hModule=it->second;
			}
			else
			{
				hModule=::GetModuleHandle(dllName);
				if(!hModule)
				{
					hModule=::LoadLibrary(dllName);
					if(hModule)
					{
						apiModules[dllName]=hModule;	
					}
				}
			}
		}
		else
		{
			hModule=(HMODULE)dllOrHandle.uintVal;
		}
		if(hModule)
		{
			return (UINT)::GetProcAddress(hModule,apiName);
		}
		return 0;
	}
	virtual UINT __stdcall CallApi(UINT api,VARIANT vals)
	{
		CString strs[16];
		UINT pcount=0;
		UINT params[16];
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
						strs[pcount]=CString(comvt.bstrVal);
						params[pcount]=(UINT)(LPCSTR)strs[pcount];
						pcount++;
					}
					else if(comvt.vt==VT_EMPTY || comvt.vt==VT_NULL || comvt.vt==VT_ERROR)
					{
						params[pcount]=0;
						pcount++;
					}
					else if(comvt.vt==VT_R8)
					{
						__int64 temp=(__int64)comvt.dblVal;
						params[pcount]=(UINT)((temp&0xffffffff00000000)>>32);
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
					strs[pcount]=CString(comvt.bstrVal);
					params[pcount]=(UINT)(LPCSTR)strs[pcount];
					pcount++;
				}
				else if(comvt.vt==VT_EMPTY || comvt.vt==VT_NULL || comvt.vt==VT_ERROR)
				{
					params[pcount]=0;
					pcount++;
				}
				else if(comvt.vt==VT_R8)
				{
					__int64 temp=(__int64)comvt.dblVal;
					params[pcount]=(UINT)((temp&0xffffffff00000000)>>32);
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
		switch(pcount)
		{
		CASECALL(0)
		CASECALL(1)
		CASECALL(2)
		CASECALL(3)
		CASECALL(4)
		CASECALL(5)
		CASECALL(6)
		CASECALL(7)
		CASECALL(8)
		CASECALL(9)
		CASECALL(10)
		CASECALL(11)
		CASECALL(12)
		CASECALL(13)
		CASECALL(14)
		CASECALL(15)
		CASECALL(16)
		}
		return 0;
	}
	virtual UINT __stdcall LoadApi(BSTR dll)
	{
		CString dllName(dll);
		HMODULE hModule=NULL;
		ApiModules::iterator it=apiModules.find(dllName);
		if(it!=apiModules.end())
		{
			hModule=it->second;
		}
		else
		{
			hModule=::LoadLibrary(dllName);
			if(hModule)
			{
				apiModules[dllName]=hModule;	
			}
		}
		if(hModule)
			return (UINT)hModule;
		return 0;
	}
	virtual UINT __stdcall FreeApi(BSTR dll)
	{
		CString dllName(dll);
		HMODULE hModule=NULL;
		ApiModules::iterator it=apiModules.find(dllName);
		if(it!=apiModules.end())
		{
			hModule=it->second;
			apiModules.erase(it);
		}
		else
		{
			hModule=::GetModuleHandle(dllName);
		}
		if(hModule)
		{
			::FreeLibrary(hModule);
			return (UINT)hModule;
		}
		return 0;
	}
	virtual BOOL __stdcall IsBadCodePtr(UINT addr)
	{
		return ::IsBadCodePtr((FARPROC)addr);
	}
	virtual BOOL __stdcall IsBadReadPtr(UINT addr,UINT size)
	{
		return ::IsBadReadPtr((LPCVOID)addr,size);
	}
	virtual BOOL __stdcall IsBadStringPtr(UINT addr,UINT size)
	{
		return ::IsBadStringPtr((LPCTSTR)addr,size);
	}
	virtual BOOL __stdcall IsBadWritePtr(UINT addr,UINT size)
	{
		return ::IsBadWritePtr((LPVOID)addr,size);
	}
	virtual UINT __stdcall Malloc(UINT size)
	{
		return (UINT)malloc(size);
	}
	virtual void __stdcall Mfree(UINT addr)
	{
		free((void*)addr);
	}
	virtual void __stdcall Memmove(UINT dest,UINT src,UINT size)
	{
		memmove((void*)dest,(const void*)src,size);
	}
	virtual void __stdcall Memset(UINT addr,INT val,UINT size)
	{
		memset((void*)addr,val,size);
	}
	virtual void __stdcall Memfill(INT addr,INT size,INT startPos,VARIANT vals)
	{
		INT start=startPos;
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
				for(int i=0;i<l;i++)
				{				
					CString tt;
					tt.Format("%u",i);
					CComVariant comvt;
					hresult=cddv.GetPropertyByName(CComBSTR(tt),&comvt);
					if(SUCCEEDED(hresult))
					{
						MemAssign(addr,size,start,comvt);
					}
				}
			}	
			else
			{
				MemAssign(addr,size,start,vals);
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
				MemAssign(addr,size,start,vals);
			}
			else
			{
				LONG lBound,uBound;
				::SafeArrayGetLBound(tempVT.parray,1,&lBound);
				::SafeArrayGetUBound(tempVT.parray,1,&uBound);
				for(long i=lBound;i<=uBound;i++)
				{
					CComVariant ccv;
					::SafeArrayGetElement(tempVT.parray,&i,&ccv);
					MemAssign(addr,size,start,ccv);
				}
			}
		}
	}
	virtual BSTR __stdcall get_CmdLine(void)
	{
		CString cmdLine(::GetCommandLine());
		return cmdLine.AllocSysString();
	}
	virtual BSTR __stdcall get_ExePath(void)
	{
		char curDir[1025];	
		::GetCurrentDirectory(1025,curDir);
		CString exe,path(curDir);
		CString dir(::GetCommandLine());
		dir.TrimLeft();
		dir.TrimRight();
		if(dir[0]=='"')
		{//引号括起来的命令行,第一个字符串即为主程序全路径
			dir=dir.Mid(1);
			int i=dir.Find('"');
			if(i<=0)
				exe="";
			else
			{
				exe=dir.Left(i);
				exe.TrimLeft();
				exe.TrimRight();
			}
		}
		else
		{			
			int i=dir.Find(' ');
			if(i>=0)
			{//第一个空格前为主程序全路径
				exe=dir.Left(i);
			}
			else
			{//整个串就是主程序全路径
				exe=dir;
			}
		}
		exe.Replace("/","\\");
		if(exe.IsEmpty())
			return CString("").AllocSysString();
		else
		{
			CString sf=exe;
			sf.MakeUpper();
			if(sf.GetLength()>=3)
			{
				if((sf[0]>='C' && sf[0]<='Z' && sf[1]==':' && sf[2]=='\\') || (sf[0]=='\\' && sf[1]=='\\'))
				{
					return exe.AllocSysString();
				}
			}
			if(sf[0]=='\\')
			{
				return (path+exe).AllocSysString();
			}
			else if(sf[0]=='.')
			{
				return (path+exe.Mid(1)).AllocSysString();
			}
			else
				return (path+"\\"+exe).AllocSysString();
		}
	}
	virtual BSTR __stdcall get_CmdArgs(void)
	{
		CString args;
		CString dir(::GetCommandLine());
		if(dir[0]=='"')
		{//引号括起来的命令行,第一个字符串后面为参数串
			dir=dir.Mid(1);
			int i=dir.Find('"');
			if(i<=0)
				args="";
			else
				args=dir.Mid(i+1);
		}
		else
		{			
			int i=dir.Find(' ');
			if(i>=0)
			{//第一个空格后即为参数串
				args=dir.Mid(i+1);
			}
			else
			{//整个串就是主程序全路径,参数串为空
				args="";
			}
		}
		args.TrimLeft();
		args.TrimRight();
		return args.AllocSysString();
	}
	virtual BSTR __stdcall get_FullPath(void)
	{
		CString p=ExterUtility::GetFullPath();
		if(p.IsEmpty())
			return NULL;
		return p.AllocSysString();
	}
	virtual BSTR __stdcall PathGetDirectory(BSTR path)
	{
		CString pstr(path);
		if(::PathIsURL(pstr))
		{
			pstr.Replace('\\','/');
			int i=pstr.Find('?');
			if(i>=0)
			{
				pstr=pstr.Left(i);				
			}
			int ei=pstr.ReverseFind('/');
			if(ei>=0)
				return pstr.Left(ei).AllocSysString();
			else
				return pstr.AllocSysString();
		}
		else
		{
			pstr.Replace('/','\\');
			char buf[1025];
			::strncpy(buf,pstr,1024);
			buf[1024]=0;
			::PathRemoveFileSpec(buf);
			return CString(buf).AllocSysString();
		}
	}
	virtual BSTR __stdcall ExpandEnvironmentStrings(BSTR str)
	{
#define INFO_BUFFER_SIZE 32768
		char buf[INFO_BUFFER_SIZE];
		CString cstr(str);
		DWORD ct=::ExpandEnvironmentStrings(cstr,buf,INFO_BUFFER_SIZE);
		if(ct>INFO_BUFFER_SIZE)
		{
			char* pBuf=new char[ct];
			::ExpandEnvironmentStrings(cstr,pBuf,ct);
			CString temp(pBuf);
			delete[] pBuf;
			return temp.AllocSysString();
		}
		else
			return CString(buf).AllocSysString();
	}	
	virtual BSTR __stdcall EnumEventIntfCLSID(VARIANT obj,unsigned int num)
	{
		if(obj.vt!=VT_DISPATCH)
			return NULL;
		return EventHandlerClass::EnumEventIntfCLSID(obj.pdispVal,num);
	}
	virtual void __stdcall Advise(VARIANT objptr,BSTR clsid,unsigned int dispID,BSTR name,BSTR scriptFunc)
	{
		if(objptr.vt!=VT_DISPATCH)
			return;
		IDispatch* obj=objptr.pdispVal;
		OBJ_EVENTS::iterator it=obj_events.find(obj);
		if(it!=obj_events.end())
		{
			CLSID_SINKS::iterator it2=it->second.find(CString(clsid));
			if(it2!=it->second.end())
			{
				((CComPtr<EventHandlerClass>)it2->second)->dispid_name_func(dispID,name,scriptFunc);
				return;
			}
		}
		EventHandlerClass* ehClass=EventHandlerClass::CreateObject(owner);
		CComPtr<EventHandlerClass> ptr;
		ptr.Attach(ehClass);
		ehClass->Advise(obj,clsid);		
		ehClass->dispid_name_func(dispID,name,scriptFunc);
		if(it==obj_events.end())
		{
			CLSID_SINKS cs;
			obj_events[obj]=cs;
			it=obj_events.find(obj);
		}
		it->second[CString(clsid)]=CAdapt<CComPtr<EventHandlerClass> >(ptr);
	}
	virtual void __stdcall Unadvise(VARIANT objptr,BSTR clsid)
	{
		if(objptr.vt!=VT_DISPATCH)
			return;
		IDispatch* obj=objptr.pdispVal;
		OBJ_EVENTS::iterator it=obj_events.find(obj);
		if(it!=obj_events.end())
		{
			CLSID_SINKS::iterator it2=it->second.find(CString(clsid));
			if(it2!=it->second.end())
			{
				((CComPtr<EventHandlerClass>)it2->second)->Unadvise();
				it->second.erase(it2);
				if(it->second.size()<=0)
					obj_events.erase(it);
			}
		}
	}
	virtual IDispatch* __stdcall ScriptQueryInterface(VARIANT objptr,BSTR clsid)
	{
		if(objptr.vt!=VT_DISPATCH)
			return NULL;
		IDispatch* obj=objptr.pdispVal;
		UUID uuid;
		::UuidFromStringW((RPC_WSTR)clsid,&uuid);
		IDispatch* p=NULL;
		HRESULT hr=obj->QueryInterface(uuid,(void**)&p);
		return p;
	}	
public:
	BEGIN_INTF(MyShell)
		METHOD(RegRead)
		METHOD(RegWrite)
		METHOD(RegDelete)
		METHOD(ShellExecute)
		METHOD(CopyFile)
		METHOD(MoveFile)
		METHOD(DeleteFile)
		METHOD(CreateDirectory)
		METHOD(RemoveDirectory)
		METHOD(DirectoryIterate)
		METHOD(PathFileExists)
		METHOD(ProcessIterate)
		METHOD(ThreadIterate)
		METHOD(ModuleIterate)
		METHOD(HeapIterate)
		METHOD(TerminateProcess)
		PROPERTYGET(ProcessId,true)
		PROPERTYGET(ThreadId,true)
		METHOD(ProcessExists)
		METHOD(ThreadExists)
		METHOD(ClearExportInfo)
		METHOD(ParseExportInfo)
		METHOD(BuildExportInfo)
		METHOD(GetExportFunctionInfo)
		PROPERTYGET(ExportInfo,true)
		METHOD(ClearImportInfo)
		METHOD(ParseImportInfo)
		METHOD(BuildImportInfo)
		METHOD(GetImportFunctionInfo)
		PROPERTYGET(ImportInfo,true)
		METHOD(GetError)
		METHOD(GetFileSize)
		METHOD(GetFileTime)
		METHOD(GetFileVersion)
		METHOD(GetProductVersion)
		METHOD(CallConsoleApp)
		METHOD(GetTxtFileFormat)
		METHOD(TxtFileReplace)
		METHOD(CountTxtFileLines)
		METHOD(ReadTxtFile)
		METHOD(WriteTxtFile)
		METHOD(AppendTxtFile)
		METHOD(GetComputerName)
		METHOD(GetUserName)	
		METHOD(FindWindow)
		METHOD(SendMessage)
		METHOD(PostMessage)
		METHOD(SendNotifyMessage)
		METHOD(SendMessageTimeout)
		METHOD(SendCopyDataMsg)
		METHOD(IsWindow)
		METHOD(IsWindowEnabled)
		METHOD(IsWindowUnicode)
		METHOD(IsWindowVisible)
		METHOD(IsWindowZoomed)
		METHOD(IsWindowIconic)
		METHOD(GetWindowProcessId)
		METHOD(GetWindowThreadId)
		METHOD(GetParent)
		METHOD(GetAncestor)
		METHOD(IsChild)
		METHOD(GetLastActivePopup)
		METHOD(WindowIterate)
		METHOD(ThreadWindowIterate)
		METHOD(ChildWindowIterate)
		METHOD(GetWindowModuleFileName)
		METHOD(EnableWindow)
		METHOD(ShowWindow)
		METHOD(WindowFromPoint)
		METHOD(ChildWindowFromPoint)
		METHOD(MinimizeWindow)
		METHOD(MaximizeWindow)
		METHOD(NormalWindow)
		METHOD(SysCloseWindow)
		METHOD(SetWindowText)
		METHOD(GetWindowText)
		METHOD(MoveWindow)
		METHOD(SetWindowLong)
		METHOD(GetWindowLong)
		METHOD(ModifyStyle)
		METHOD(ModifyStyleEx)
		METHOD(GetStyle)
		METHOD(GetExStyle)
		METHOD(SetWindowPos)
		METHOD(GetWBDocument)
		METHOD(GetIECount)
		METHOD(GetIEDocument)
		PROPERTYPUT(Clipboard,false)
		PROPERTYGET(Clipboard,true)
		METHOD(GetApi)
		METHOD(CallApi)
		METHOD(LoadApi)
		METHOD(FreeApi)
		METHOD(IsBadCodePtr)
		METHOD(IsBadReadPtr)
		METHOD(IsBadStringPtr)
		METHOD(IsBadWritePtr)
		METHOD(Malloc)
		METHOD(Mfree)
		METHOD(Memmove)
		METHOD(Memset)
		METHOD(Memfill)
		PROPERTYGET(CmdLine,true)
		PROPERTYGET(ExePath,true)
		PROPERTYGET(CmdArgs,true)
		PROPERTYGET(FullPath,true)
		METHOD(PathGetDirectory)
		METHOD(ExpandEnvironmentStrings)
		METHOD(EnumEventIntfCLSID)
		METHOD(Advise)
		METHOD(Unadvise)
		METHOD(ScriptQueryInterface)		
	END_INTF()
private:
	DEFCALLAPI(0)
	DEFCALLAPI(1)
	DEFCALLAPI(2)
	DEFCALLAPI(3)
	DEFCALLAPI(4)
	DEFCALLAPI(5)
	DEFCALLAPI(6)
	DEFCALLAPI(7)
	DEFCALLAPI(8)
	DEFCALLAPI(9)
	DEFCALLAPI(10)
	DEFCALLAPI(11)
	DEFCALLAPI(12)
	DEFCALLAPI(13)
	DEFCALLAPI(14)
	DEFCALLAPI(15)
	DEFCALLAPI(16)
private:	
	static BOOL CALLBACK MyEnumChildProc(HWND hwnd,LPARAM lParam)
	{
		TCHAR szClassName[256];
		::GetClassName(hwnd,(LPTSTR)&szClassName,sizeof(szClassName));
  		if ( _tcscmp( szClassName, _T("Internet Explorer_Server") ) == 0 )
  		{
    		*(HWND*)lParam = hwnd;
    		return FALSE; // 找到第一个 IE 控件的子窗口就停止
  		}
  		else
		{
			return TRUE; // 继续枚举子窗口
		}
	}
	static void MemAssign(INT addr,INT size,INT& start,VARIANT var)
	{
		VOID* pAddr=(VOID*)(addr+start);
		if(NULL!=pAddr)
		{
			if(var.vt==VT_BSTR)
			{
				CString temp(var.bstrVal);
				const CHAR* pStr=(LPCTSTR)temp;
				if(NULL!=pStr)
				{
					INT len=(INT)strlen(pStr);
					if(start<=size-len)
					{
						memcpy((VOID*)pAddr,pStr,len);
						start+=len;
					}
				}
			}
			else
			{
				VARIANT temp;
				VariantInit(&temp);
				VariantChangeType(&temp,&var,0,VT_INT);
				INT val=temp.intVal;
				if((val & 0xffffff00)==0)
				{
					if(start<=size-1)
					{
						*(UCHAR*)pAddr=(UCHAR)(val & 0xff);
						start+=1;
					}
				}
				else if((val & 0xffff0000)==0)
				{
					if(start<=size-2)
					{
						*(USHORT*)pAddr=(USHORT)(val & 0xffff);
						start+=2;
					}
				}
				else if((val & 0xff000000)==0)
				{
					if(start<=size-3)
					{
						memcpy((VOID*)pAddr,&val,3);
						start+=3;
					}
				}
				else if(start<=size-4)
				{
					*(UINT*)pAddr=(UINT)val;
					start+=4;
				}
			}
		}
	}
private:
	static BOOL CALLBACK MyHideConsole(HWND hwnd,LPARAM lParam)
	{
		char cName[1025];
		int len=::GetClassName(hwnd,cName,1024);
		cName[len]=0;
		if(CString(cName)=="ConsoleWindowClass")
		{
			DWORD* ptids=(DWORD*)lParam;
			DWORD pid=0;
			DWORD tid=::GetWindowThreadProcessId(hwnd,&pid);
			if(ptids[0]==pid && ptids[1]==tid)
			{
				::ShowWindow(hwnd,SW_HIDE);
				return FALSE;
			}
		}
		return TRUE;
	}
	inline CString FormatUTCFileTime(const FILETIME& ft)
	{
		SYSTEMTIME st;
		FILETIME localFt;
		BOOL r=::FileTimeToLocalFileTime(&ft,&localFt);
		if(!r)
			return "";
		r=::FileTimeToSystemTime(&localFt,&st);
		if(!r)
			return "";
		else
		{
			CString temp;
			temp.Format("%4.4u-%2.2u-%2.2u %2.2u:%2.2u:%2.2u %3.3u",st.wYear,st.wMonth,st.wDay,st.wHour,st.wMinute,st.wSecond,st.wMilliseconds);
			return temp;
		}
	}
	inline HKEY ParseRegKey(const CString& key,CString& fullKey,CString& keyPart,CString& namePart)
	{
		int s=key.Find('\\');
		int e=key.ReverseFind('\\');
		CString root=key;
		if(s>0)
			root=key.Left(s);
		fullKey="";
		if(s>0)
			fullKey=key.Mid(s+1);
		keyPart="";
		if(e>0 && e>s)
			keyPart=fullKey.Left(e-s-1);
		namePart="";
		if(e>0)
			namePart=key.Mid(e+1);
		if(root=="HKLM")
			return HKEY_LOCAL_MACHINE;
		else if(root=="HKCU")
			return HKEY_CURRENT_USER;		
		else if(root=="HKCR")
			return HKEY_CLASSES_ROOT;
		else if(root=="HKEY_USERS")
			return HKEY_USERS;
		else if(root=="HKEY_CURRENT_CONFIG")
			return HKEY_CURRENT_CONFIG;
		else
			return 0;
	}
	int RemoveDirectory_(const CString& path_)
	{
		CString path(path_);
		if(::PathIsDirectory(path))
		{
			if(path[path.GetLength()-1]!='\\')
				path+="\\";
			WIN32_FIND_DATA FileData;
			HANDLE hSearch = ::FindFirstFile(path+"*", &FileData); 
			if (hSearch != INVALID_HANDLE_VALUE) 
			{						
				do 
				{
					CString fileName(FileData.cFileName);
					if(fileName=="." || fileName=="..")
						continue;
					fileName=path+fileName;
					if(::PathIsDirectory(fileName))
					{
						if(::PathIsDirectoryEmpty(fileName))
							::RemoveDirectory(fileName);
						else
							RemoveDirectory_(fileName);
					}
					else
					{
						::DeleteFile(fileName);
					}
				}while(::FindNextFile(hSearch, &FileData));
				::FindClose(hSearch);
			}
			if(::PathIsDirectoryEmpty(path))
			{
				return ::RemoveDirectory(path);
			}
		}
		return FALSE;
	}
	bool DirectoryIterate_(const CString& path_,int maxLevel,const CString& scpCallback,int curLevel)
	{		
		CString path(path_);
		if(::PathIsDirectory(path))
		{
			IDispatch* tempPtr=owner->GetWindowObj();
			CComPtr<IDispatch> p;
			if(tempPtr)
			{				
				p.Attach(tempPtr);
				int rt=DispatchDriver::Invoke(p,CComBSTR(scpCallback),CComBSTR(path_),(int)TRUE,Type2Type<int>());
				if(!rt)
				{
					return false;
				}
			}
			FileNames subdirs;
			if(path[path.GetLength()-1]!='\\')
				path+="\\";
			WIN32_FIND_DATA FileData;
			HANDLE hSearch = ::FindFirstFile(path+"*", &FileData); 
			if (hSearch != INVALID_HANDLE_VALUE) 
			{						
				do 
				{
					CString fileName(FileData.cFileName);
					if(fileName=="." || fileName=="..")
						continue;
					fileName=path+fileName;
					if(::PathIsDirectory(fileName))
					{
						subdirs.push_back(fileName);
					}
					else
					{
						if(tempPtr)
						{
							int rt=DispatchDriver::Invoke(p,CComBSTR(scpCallback),CComBSTR(fileName),(int)FALSE,Type2Type<int>());
							if(!rt)
							{
								return false;
							}
						}
					}
				}while(::FindNextFile(hSearch, &FileData));
				::FindClose(hSearch);
			}
			if(maxLevel<1 || curLevel<maxLevel)
			{
				FileNames::iterator it=subdirs.begin();
				while(it!=subdirs.end())
				{
					if(!DirectoryIterate_(*it,maxLevel,scpCallback,curLevel+1))
						return false;
					it++;
				}
			}
		}
		return true;
	}
public:
	MyShell()
	{
	}
	~MyShell()
	{
		try
		{
			OBJ_EVENTS::iterator it=obj_events.begin();
			while(it!=obj_events.end())
			{
				CLSID_SINKS::iterator it2=it->second.begin();
				while(it2!=it->second.end())
				{
					((CComPtr<EventHandlerClass>)(it2->second))->Unadvise();
					it2++;
				}			
				it->second.clear();
				it++;
			}
			obj_events.clear();

			ApiModules::iterator apiIt=apiModules.begin();
			while(apiIt!=apiModules.end())
			{
				::FreeLibrary(apiIt->second);
				apiIt++;
			}
			apiModules.clear();
		}
		catch(...)
		{}
	}
	void Init(T* ptr)
	{
		owner=ptr;
	}
private:
	T* owner;

	FunctionsInfo exportInfo;
	FunctionsMap importRecords;
	FunctionsInfo importInfo;

	ApiModules apiModules;
	OBJ_EVENTS obj_events;
};
