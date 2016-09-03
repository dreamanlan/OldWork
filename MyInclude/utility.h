// Utility.h: interface for the Utility class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_UTILITY_H__5E169239_13C6_4765_98DE_E7B698DF57D3__INCLUDED_)
#define AFX_UTILITY_H__5E169239_13C6_4765_98DE_E7B698DF57D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <vector>
#include <fstream>
#import <c:\windows\system32\msxml3.dll> raw_interfaces_only

#ifdef USE_GDIPLUS
#include <gdiplus.h>
#pragma comment(lib, "gdiplus.lib")
#endif

#pragma warning (disable : 4996 4312 4311 4244 )

struct PE_HEADER
{
	DWORD signature;
	IMAGE_FILE_HEADER _head;
	IMAGE_OPTIONAL_HEADER opt_head;
	IMAGE_SECTION_HEADER* section_header;  /* actual number in NumberOfSections */
};
/*
//使类不可继承的实现，原思想来自CUJ
namespace internalSealed 
{ 
　　template<typename T> 
　　class Class_Is_Sealed 
　　{ 
　　protected: 
　　　　Class_Is_Sealed(){}; 
　　}; 
}; 
//从Sealed<T>继承的类将不能再被继承，否则会出现编译错误
template<typename T> 
class Sealed: private virtual internalSealed::Class_Is_Sealed<T> 
{ 
　　friend typename T; 
};
*/
//自win98以来新增加的API的适应性处理(按默认win98 SDK编译需要),部分是旧的SDK不支持,有一些则是旧系统不支持
//,这里提供首次调用动态装入功能.
#define OS_NEWAPI_DEFVAL	0xffffffff
class OS_NewApi
{
	typedef HWND (WINAPI*GetAncestorPtr)(HWND,UINT);
	typedef UINT (WINAPI *GetWindowModuleFileNameAPtr)(HWND,LPSTR,UINT);
	typedef HANDLE (WINAPI*OpenThreadPtr)(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwThreadId);
	typedef DWORD (WINAPI*GetProcessIdPtr)(HANDLE Process);
public:
	static inline HWND GetAncestor(HWND hwnd,UINT flag)
	{
		static GetAncestorPtr fptr=(GetAncestorPtr)OS_NEWAPI_DEFVAL;
		if((DWORD)fptr==OS_NEWAPI_DEFVAL)
		{
			fptr=NULL;
			HMODULE hModule=::GetModuleHandle("User32.dll");
			if(!hModule)
				return NULL;
			fptr=(GetAncestorPtr)::GetProcAddress(hModule,"GetAncestor");
		}
		if(!fptr)
			return NULL;
		return (*fptr)(hwnd,flag);
	}
	static inline UINT GetWindowModuleFileName(HWND hwnd,LPTSTR pFileName,UINT num)
	{
		static GetWindowModuleFileNameAPtr fptr=(GetWindowModuleFileNameAPtr)OS_NEWAPI_DEFVAL;
		if((DWORD)fptr==OS_NEWAPI_DEFVAL)
		{
			fptr=NULL;
			HMODULE hModule=::GetModuleHandle("User32.dll");
			if(!hModule)
				return NULL;
			fptr=(GetWindowModuleFileNameAPtr)::GetProcAddress(hModule,"GetWindowModuleFileNameA");
		}
		if(!fptr)
			return NULL;
		return (*fptr)(hwnd,pFileName,num);
	}
	static inline HANDLE OpenThread(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwThreadId)
	{
		static OpenThreadPtr fptr=(OpenThreadPtr)OS_NEWAPI_DEFVAL;
		if((DWORD)fptr==OS_NEWAPI_DEFVAL)
		{
			fptr=NULL;
			HMODULE hModule=::GetModuleHandle("Kernel32.dll");
			if(!hModule)
				return NULL;
			fptr=(OpenThreadPtr)::GetProcAddress(hModule,"OpenThread");
		}
		if(!fptr)
			return NULL;
		return (*fptr)(dwDesiredAccess,bInheritHandle,dwThreadId);
	}	
	static inline DWORD GetProcessId(HANDLE process)
	{
		static GetProcessIdPtr fptr=(GetProcessIdPtr)OS_NEWAPI_DEFVAL;
		if((DWORD)fptr==OS_NEWAPI_DEFVAL)
		{
			fptr=NULL;
			HMODULE hModule=::GetModuleHandle("Kernel32.dll");
			if(!hModule)
				return NULL;
			fptr=(GetProcessIdPtr)::GetProcAddress(hModule,"GetProcessId");
		}
		if(!fptr)
			return NULL;
		return (*fptr)(process);
	}
};
//关键部分同步
class CriticalSection
{
public:
	void Enter(void)
	{
		::EnterCriticalSection(&criticalSection);
	}
	void Leave(void)
	{
		::LeaveCriticalSection(&criticalSection);
	}
public:
	CriticalSection()
	{
		::InitializeCriticalSection(&criticalSection);
	}
	~CriticalSection()
	{
		::DeleteCriticalSection(&criticalSection);
	}
private:
	CRITICAL_SECTION criticalSection; 
};
class CriticalSectionOperator
{
public:
	CriticalSectionOperator(CriticalSection* pCS)
	{
		pCriticalSection=pCS;
		pCriticalSection->Enter();
	}
	~CriticalSectionOperator()
	{
		pCriticalSection->Leave();
	}
private:
	CriticalSection* pCriticalSection;
};
//线程计数,用以识别进程内共享的静态变量
class TlsCap
{
public:
	inline LPVOID Get(void)
	{
		return ::TlsGetValue(tlsIx);
	}
	inline void Set(LPVOID val)
	{
		::TlsSetValue(tlsIx,val);
	}
	inline void Reset(void)
	{
		::TlsFree(tlsIx);
		tlsIx=::TlsAlloc();
	}
public:
	TlsCap()
	{
		tlsIx=::TlsAlloc();
	}
	~TlsCap()
	{
		::TlsFree(tlsIx);
	}
private:
	DWORD tlsIx;
};
struct ThreadIndex
{
	static inline UINT Get(void)
	{
		static UINT ix=1;
		int r=(UINT)TlsCapRef().Get();
		if(r)
			return r-1;
		TlsCapRef().Set((LPVOID)ix);
		::InterlockedIncrement((LONG*)&ix);
		return ix-2;
	}
	static inline void Reset(void)
	{
		TlsCapRef().Reset();
	}
private:
	static inline TlsCap& TlsCapRef(void)
	{
		static TlsCap tlsCap;
		return tlsCap;
	}
};
//堆内存释放器
template<typename T>
	class ObjectRelease
{
public:
	ObjectRelease(T* p)
	{
		pObj=p;
	}
	~ObjectRelease()
	{
		delete pObj;
	}
private:
	T* pObj;
};
template<typename T>
	class ArrayRelease
{
public:
	ArrayRelease(T* p)
	{
		pArray=p;
	}
	~ArrayRelease()
	{
		delete[] pArray;
	}
public:
		
private:
	T* pArray;
};
//自动关闭句柄
class AutoCloseHandle
{
public:
	AutoCloseHandle(HANDLE h)
	{
		handle=h;
	}
	~AutoCloseHandle()
	{
		DWORD flag;
		if(::GetHandleInformation(handle,&flag) && flag!=HANDLE_FLAG_PROTECT_FROM_CLOSE)
			::CloseHandle(handle);
	}
public:
	operator HANDLE(void)
	{
		return handle;
	}
private:
	HANDLE handle;
};
//下面的函数用于将一个强元素类型SAFEARRAY转为一个元素为VARIANT类型的SAFEARRAY
template<typename T> inline SAFEARRAY* SafeArrayCopyForScript(SAFEARRAY* psa)
{
	long length=0;
	long lBound,uBound;
	::SafeArrayGetLBound(psa,1,&lBound);
	::SafeArrayGetUBound(psa,1,&uBound);
	length=uBound-lBound+1;
	SAFEARRAY* newPsa=::SafeArrayCreateVector(VT_VARIANT,lBound,length);
	for(long i=lBound;i<=uBound;i++)
	{		
		T d;		
		::SafeArrayGetElement(psa,&i,&d);
		CComVariant var(d);
		::SafeArrayPutElement(newPsa,&i,&var);
	}	
	return newPsa;
}
//下面的函数用于将一个强元素类型数组转为一个元素为VARIANT类型的SAFEARRAY
template<typename T> inline SAFEARRAY* SafeArrayCopyForScript(T* t,long length)
{
	SAFEARRAY* newPsa=::SafeArrayCreateVector(VT_VARIANT,0,length);
	for(long i=0;i<length;i++)
	{		
		CComVariant var(t[i]);
		::SafeArrayPutElement(newPsa,&i,&var);
	}	
	return newPsa;
}
template <typename T>
struct Type2Type
{
    typedef T type;
};
//下面是一系列用于构造元素为VARIANT类型的SAFEARRAY的重载函数.
struct SafeArray
{
	static inline SAFEARRAY* Build(void)
	{
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,0,0);
		return psa;
	}
	template<typename P1>
	static inline SAFEARRAY* Build(P1 p1)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,1);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		return psa;
	}
	template<typename P1,typename P2>
	static inline SAFEARRAY* Build(P1 p1,P2 p2)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,2);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		return psa;
	}
	template<typename P1,typename P2,typename P3>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,3);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p3));
		return psa;
	}
	template<typename P1,typename P2,typename P3,typename P4>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3,P4 p4)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,4);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p3));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p4));
		return psa;
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3,P4 p4,P5 p5)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,5);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p3));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p4));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p5));
		return psa;
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,6);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p3));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p4));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p5));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p6));
		return psa;
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,7);
		::SafeArrayPutElement(psa,&ix,(PVOID)&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,(PVOID)&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,(PVOID)&CComVariant(p3));
		ix++;
		::SafeArrayPutElement(psa,&ix,(PVOID)&CComVariant(p4));
		ix++;
		::SafeArrayPutElement(psa,&ix,(PVOID)&CComVariant(p5));
		ix++;
		::SafeArrayPutElement(psa,&ix,(PVOID)&CComVariant(p6));
		ix++;
		::SafeArrayPutElement(psa,&ix,(PVOID)&CComVariant(p7));
		return psa;
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,8);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p3));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p4));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p5));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p6));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p7));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p8));
		return psa;
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8,P9 p9)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,9);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p3));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p4));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p5));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p6));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p7));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p8));		
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p9));
		return psa;
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10>
	static inline SAFEARRAY* Build(P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8,P9 p9,P10 p10)
	{
		LONG ix=0;
		SAFEARRAY* psa=::SafeArrayCreateVector(VT_VARIANT,ix,10);
		::SafeArrayPutElement(psa,&ix,&CComVariant(p1));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p2));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p3));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p4));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p5));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p6));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p7));
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p8));		
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p9));		
		ix++;
		::SafeArrayPutElement(psa,&ix,&CComVariant(p10));
		return psa;
	}
};
//下面是一系列用于提取Variant变量强类型值的重载函数.
struct VariantValue
{
	static inline BYTE Get(VARIANT _val,Type2Type<BYTE> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_UI1);
		return val.bVal;
	}
	
	static inline short Get(VARIANT _val,Type2Type<short> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_I2);
		return val.iVal;
	}

	static inline long Get(VARIANT _val,Type2Type<long> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_I4);
		return val.lVal;
	}

	static inline float Get(VARIANT _val,Type2Type<float> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_R4);
		return val.fltVal;
	}

	static inline double Get(VARIANT _val,Type2Type<double> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_R8);
		return val.dblVal;
	}

	static inline char Get(VARIANT _val,Type2Type<char> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_I1);
		return val.cVal;
	}

	static inline int Get(VARIANT _val,Type2Type<int> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_INT);
		return val.intVal;
	}

	static inline unsigned int Get(VARIANT _val,Type2Type<unsigned int> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_UINT);
		return val.uintVal;
	}

	static inline unsigned short Get(VARIANT _val,Type2Type<unsigned short> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_UI2);
		return val.uiVal;
	}

	static inline unsigned long Get(VARIANT _val,Type2Type<unsigned long> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_UI4);
		return val.ulVal;
	}

	static inline BSTR Get(VARIANT _val,Type2Type<BSTR> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_BSTR);
		if(!val.bstrVal)
			return NULL;
		return CString(val.bstrVal).AllocSysString();
	}

	static inline IDispatch* Get(VARIANT _val,Type2Type<IDispatch*> type)
	{
		CComVariant val=_val;
		val.ChangeType(VT_DISPATCH);
		if(val.pdispVal)
			val.pdispVal->AddRef();
		return val.pdispVal;
	}
	
	static inline int GetArray(VARIANT vals,CComVariant* externArgs,int maxnum)
	{
		if(vals.vt==VT_EMPTY)
		{
			return 0;
		}
		else if(vals.vt==VT_BSTR)
		{
			externArgs[0]=vals;
			return 1;
		}
		else if(vals.vt==VT_I4 || vals.vt==VT_INT || vals.vt==VT_UI4 || vals.vt==VT_UINT)
		{
			externArgs[0]=vals;
			return 1;
		}
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
				for(int i=0;i<l && i<maxnum;i++)
				{				
					CString tt;
					tt.Format("%u",i);
					CComVariant comvt;
					hresult=cddv.GetPropertyByName(CComBSTR(tt),&comvt);
					externArgs[i]=comvt;					
				}
				return (l<maxnum ? l : maxnum);
			}
			else
			{
				externArgs[0]=vals;
				return 1;				
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
				externArgs[0]=vals;
				return 1;
			}
			LONG lBound,uBound;
			::SafeArrayGetLBound(tempVT.parray,1,&lBound);
			::SafeArrayGetUBound(tempVT.parray,1,&uBound);
			long length=uBound-lBound+1;
			for(long i=lBound;i<=uBound && i<lBound+maxnum;i++)
			{
				CComVariant ccv;
				::SafeArrayGetElement(tempVT.parray,&i,&ccv);
				externArgs[i-lBound]=ccv;				
			}	
			return (length<maxnum ? length : maxnum);
		}
		return 0;
	}
};
//读取IDispatch的特性或调用其无参数方法,主要用于操作JavaScript对象
struct DispatchDriver
{	
	//特性部分
	template<typename R>
		static inline R GetProperty(IDispatch* p,BSTR name,Type2Type<R>)
	{
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.GetPropertyByName(name,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename T>
		static inline void PutProperty(IDispatch* p,BSTR name,T t)
	{
		CComVariant arg(t);
		CComDispatchDriver disp(p);
		HRESULT hr=disp.PutPropertyByName(name,&arg);
	}
	//无参数方法部分(分有返回与无返回两个)
	template<typename R>
		static inline R Invoke(IDispatch* p,BSTR name,Type2Type<R>)
	{
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.Invoke0(name,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	static inline void NRInvoke(IDispatch* p,BSTR name)
	{
		CComDispatchDriver disp(p);
		HRESULT hr=disp.Invoke0(name);
	}
	//有参数方法部分
	//有返回方法
	template<typename R,typename P1>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,Type2Type<R>)
	{
		CComVariant arg(p1);
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.Invoke1(name,&arg,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}	
	template<typename R,typename P1,typename P2>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,Type2Type<R>)
	{
		CComVariant arg1(p1);
		CComVariant arg2(p2);
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.Invoke2(name,&arg1,&arg2,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,3,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3,typename P4>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,4,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3,typename P4,typename P5>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,5,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3,typename P4,typename P5,typename P6>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,6,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,7,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p8),CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,8,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8,P9 p9,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p9),CComVariant(p8),CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,9,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}
	template<typename R,typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10>
		static inline R Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8,P9 p9,P10 p10,Type2Type<R>)
	{
		CComVariant args[]={CComVariant(p10),CComVariant(p9),CComVariant(p8),CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,10,&ret);
		return VariantValue::Get(ret,Type2Type<R>());
	}	
	//无返回方法
	template<typename P1>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1)
	{
		CComVariant arg(p1);
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.Invoke1(name,&arg,&ret);		
	}	
	template<typename P1,typename P2>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1,P2 p2)
	{
		CComVariant arg1(p1);
		CComVariant arg2(p2);
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.Invoke2(name,&arg1,&arg2,&ret);		
	}
	template<typename P1,typename P2,typename P3>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3)
	{
		CComVariant args[]={CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,3,&ret);		
	}
	template<typename P1,typename P2,typename P3,typename P4>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4)
	{
		CComVariant args[]={CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,4,&ret);		
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5)
	{
		CComVariant args[]={CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,5,&ret);		
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6)
	{
		CComVariant args[]={CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,6,&ret);		
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7)
	{
		CComVariant args[]={CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,7,&ret);		
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8>
		static inline void NRInvoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8)
	{
		CComVariant args[]={CComVariant(p8),CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,8,&ret);		
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9>
		static inline void Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8,P9 p9)
	{
		CComVariant args[]={CComVariant(p9),CComVariant(p8),CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,9,&ret);
	}
	template<typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10>
		static inline void Invoke(IDispatch* p,BSTR name,P1 p1,P2 p2,P3 p3,P4 p4,P5 p5,P6 p6,P7 p7,P8 p8,P9 p9,P10 p10)
	{
		CComVariant args[]={CComVariant(p10),CComVariant(p9),CComVariant(p8),CComVariant(p7),CComVariant(p6),CComVariant(p5),CComVariant(p4),CComVariant(p3),CComVariant(p2),CComVariant(p1)};
		CComVariant ret;
		CComDispatchDriver disp(p);
		HRESULT hr=disp.InvokeN(name,args,10,&ret);
	}
};

//下面的函数用于接收来自VBSCRIPT或JSCRIPT的数组并转换为具体类型的数组.
template<typename T> inline T* GetArrayFromScript(VARIANT vals,int& len)
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
			len=l;
			T* t=new T[l];
			for(int i=0;i<l;i++)
			{				
				CString tt;
				tt.Format("%u",i);
				CComVariant comvt;
				hresult=cddv.GetPropertyByName(CComBSTR(tt),&comvt);
				t[i]=VariantValue::Get(comvt,Type2Type<T>());
			}			
			return t;
		}	
		else
		{			
			len=1;
			T* t=new T[1];
			t[0]=VariantValue::Get(vals,Type2Type<T>());
			return t;
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
			len=1;
			T* t=new T[1];
			t[0]=VariantValue::Get(vals,Type2Type<T>());
			return t;
		}
		LONG lBound,uBound;
		::SafeArrayGetLBound(tempVT.parray,1,&lBound);
		::SafeArrayGetUBound(tempVT.parray,1,&uBound);
		long length=uBound-lBound+1;
		len=length;
		T* t=new T[length];
		for(long i=lBound;i<=uBound;i++)
		{
			CComVariant ccv;
			::SafeArrayGetElement(tempVT.parray,&i,&ccv);
			t[i-lBound]=VariantValue::Get(ccv,Type2Type<T>());
		}
		return t;
	}
}
/*
template<> inline BSTR* GetArrayFromScript<BSTR>(VARIANT vt,int& len)
{	
	len=0;
	return NULL;
}
*/
class ScriptFile
{
public:	
	//脚本文件访问部分的函数
	static inline CString GetCurrentPath(void)
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
		if(exe.IsEmpty())
			return "";
		else
		{
			exe.Replace("/","\\");
			int i=exe.ReverseFind('\\');
			if(i>=0)
				exe=exe.Left(i);
			else
				exe="";
			CString sf=exe;
			sf.MakeUpper();
			if(sf.GetLength()>=2)
			{
				if((sf[0]>='C' && sf[0]<='Z' && sf[1]==':') || (sf[0]=='\\' && sf[1]=='\\'))
				{
					return exe;
				}				
			}
			if(sf.IsEmpty())
			{
				return path+exe;
			}
			else if(sf[0]=='\\')
			{
				return path+exe;
			}
			else if(sf[0]=='.')
			{
				return path+exe.Mid(1);
			}
			else
				return path+"\\"+exe;
		}
	}
	static inline CString ConvertPath(const CString& ph)
	{
		CString path=ph;
		path.TrimLeft();
		path.TrimRight();
		int spacei=0;
		CString tPath;
		if(path.GetLength()>=2)
		{
			//如果开始为引号，则第一个引号串试为要转换的路径，否则整个串作为路径
			//识别哪个部分为路径影响对路径中的\与/间的转换(规范化为标准URL表示或本地路径表示)
			if(path[0]=='\"')
			{
				path=path.Mid(1);
				int i=path.Find('\"');
				if(i>=0)
				{
					tPath=path.Left(i);
					tPath.TrimLeft();
					tPath.TrimRight();
					path=tPath+path.Mid(i+1);
					i=tPath.GetLength();
					int ni=0;
					tPath=path;
					while(ni>0 && spacei<i)
					{
						ni=tPath.Find(' ');
						if(ni>=0)
						{
							tPath=tPath.Mid(ni+1);
							spacei+=ni+1;
						}
					}
				}
			}
		}
		CString sf=path;
		sf.MakeUpper();		
		if(sf.GetLength()>=3)
		{			
			int si=sf.Find("://");
			int ei=sf.Find(' ');
			if(si>0 && (si<ei || ei<0))//路径串中包含://且之前没有空格的路径为URL路径
			{
				if(spacei>0)
				{
					tPath=path.Left(spacei);
					tPath.Replace("\\","/");
					path=tPath+path.Mid(spacei);
				}
				else
					path.Replace("\\","/");
				return path;
			}
			else if((sf[0]>='A' && sf[0]<='Z' && sf[1]==':')
				|| (sf[0]=='\\' && sf[1]=='\\')
				)
			{
				if(spacei>0)
				{
					tPath=path.Left(spacei);
					tPath.Replace("/","\\");
					path=tPath+path.Mid(spacei);
				}
				else
					path.Replace("/","\\");
				return path;
			}
		}
		CString rootPath=GetCurrentPath();
		if(spacei>0)
		{
			tPath=path.Left(spacei);
			tPath.Replace("/","\\");
			path=tPath+path.Mid(spacei);
		}
		else
			path.Replace("/","\\");
		if(rootPath.GetLength()>0)path=rootPath+"\\"+path;
		return path;
	}
	static CString GetDirectory(const CString& path)
	{
		CString pstr=path;
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
				return pstr.Left(ei);
			else
				return pstr;
		}
		else
		{
			pstr.Replace('/','\\');
			char buf[1025];
			::strncpy(buf,pstr,1024);
			buf[1024]=0;
			::PathRemoveFileSpec(buf);
			return CString(buf);
		}
	}
	static CString ConvertPath(const CString& path,const CString& rootPath)
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
			if(rootPath.GetLength()>0)
				sf=rootPath+"\\"+sf;
		}
		if(sf.Find("://")>0)
		{
			sf.Replace("\\","/");
		}
		else
		{
			sf.Replace("/","\\");
		}
		return sf;
	}
	static inline long Read(const CString& file,char*& content)
	{
		long size=0;
		CString sf=ConvertPath(file);
		if(sf.Find("://")>0)
		{
			size=ReadURL(file,content);
		}		
		else
		{
			size=ReadLocal(file,content);
		}
		return size;
	}
	static inline long ReadURL(const CString& url,char*& content,bool pleaseGiveMeMemory=true)
	{
		if(pleaseGiveMeMemory==false && content==NULL)
			return -1;
		CComPtr<MSXML2::IXMLHTTPRequest> xmlHttpRequest;
		long rt=xmlHttpRequest.CoCreateInstance(L"MSXML2.XMLHTTP");
		rt=xmlHttpRequest->open(L"GET",CComBSTR(url),CComVariant(FALSE));
		rt=xmlHttpRequest->send();
		CComPtr<IStream> streamPtr;
		VARIANT varValue;
		rt=xmlHttpRequest->get_responseStream(&varValue);
		streamPtr.Attach((IStream*)varValue.punkVal);
		if(!streamPtr)
			return -1;
		STATSTG statstg;
		rt=streamPtr->Stat(&statstg,STATFLAG_NONAME);
		if(FAILED(rt))
			return -1;
		ULONG size=0;
		/*
		LARGE_INTEGER largeInt;		
		largeInt.LowPart=0;
		largeInt.HighPart=0;
		rt=streamPtr->Seek(largeInt,STREAM_SEEK_SET,NULL);
		*/
		if(pleaseGiveMeMemory)
		{
			int count=statstg.cbSize.LowPart;
			content=new char[count];
			::ZeroMemory((void*)content,sizeof(char)*(count));
		}
		rt=streamPtr->Read(content,statstg.cbSize.LowPart,&size);
		if(FAILED(rt))
		{
			if(pleaseGiveMeMemory)
			{
				delete[] content;
				content=NULL;
			}
			return -1;
		}
		return size;
	}
	static inline long GetLocalFileLength(const char * fileName)
	{
		WIN32_FILE_ATTRIBUTE_DATA fileAttrib;
		if(!GetFileAttributesEx(fileName,GetFileExInfoStandard,&fileAttrib))
			return -1L;
		if(fileAttrib.nFileSizeHigh)return -1L;
		return fileAttrib.nFileSizeLow;
	}
	static inline long ReadLocal(const char* fileName,char*& content,bool pleaseGiveMeMemory=true)
	{		
		if(pleaseGiveMeMemory==false && content==NULL)
			return -1;
		long count=GetLocalFileLength(fileName);
		if(count<0)
			return -1;		
		std::fstream fs;
		fs.open(fileName,std::ios_base::in|std::ios_base::binary);
		if(fs.fail())
			return -1;
		if(pleaseGiveMeMemory)
		{
			content=new char[count];
			::ZeroMemory((void*)content,sizeof(char)*(count));
		}
		fs.read(content,count);
		if(fs.fail())
		{
			if(pleaseGiveMeMemory)
			{
				delete content;
				content=NULL;
			}
			count=-1;
		}
		fs.close();
		return count;
	}
	static inline long WriteLocal(const char* fileName,char* content,long size)
	{		
		std::fstream fs;
		fs.open(fileName,std::ios_base::out|std::ios_base::binary);
		if(fs.fail())
			return -1;		
		fs.write(content,size);
		if(fs.fail())
		{			
			fs.close();
			return -1;
		}
		fs.close();
		return size;
	}	
	
	static inline UINT StrLen(const char* s)
	{
		char* d=NULL;
		__asm
		{
			mov ecx,0x7fffffff
			xor eax,eax
			mov edi,s
			cld
			repne scasb
			mov d,edi
		}
		return UINT(d-s-1);
	}
	
	static inline void StrCat(char* d,const char* s,char split=0)
	{
		int len=StrLen(d);
		int sl=0;
		if(split!=0)
		{
			d[len]=split;
			sl=1;
		}
		char* dd=d+len+sl;
		__asm
		{
			mov al,0xff
			mov esi,s
			mov edi,dd
			cld
cont:		movsb
			test byte ptr [esi],al
			jnz cont
			movsb
		}
	}

	static inline UINT StrCpyMaxN(char* d,const char* s,UINT len)
	{
		if(len<=0)return 0;
		int left;
		__asm
		{
			mov al,0xff
			mov ecx,len
			mov esi,s
			mov edi,d
			cld
L_cont:		movsb
			test byte ptr [esi],al
			loopnz L_cont
			jcxz L_end
			movsb
L_end:		mov left,ecx
		}
		return len-left;
	}

	static inline void MemCpy(void* d,const void* s,UINT len)
	{
		if(len<=0)return;
		__asm
		{
			mov ecx,len
			mov esi,s
			mov edi,d
			cld
			rep movsb
		}
	}
	//加解密函数,核心算法是旋转取模再加上一些简单的变化,这两个函数只用于二进制数据的加密
	static inline void Encode(unsigned char* up,const unsigned char* uks,int len,int rotate_num)
	{
		unsigned char uk[1025];
		int keyLen=StrLen((char*)uks);
		if(keyLen>1024)
			keyLen=1024;		
		StrCpyMaxN((char*)uk,(const char*)uks,keyLen);

		int num=rotate_num;
		for(int i=0;i<keyLen;i++)
		{
			num=(rotate_num+num-1)%rotate_num;
			uk[i]=(uk[i]+num)%255+1;
		}
		if(keyLen<=0)
			return;
		for(int i=0;i<len;i++)
		{
			up[i]=(up[i]+uk[i%keyLen])%256;
		}
	}

	static inline void Decode(unsigned char* up,const unsigned char* uks,int len,int rotate_num)
	{
		unsigned char uk[1025];
		int keyLen=StrLen((char*)uks);
		if(keyLen>1024)
			keyLen=1024;		
		StrCpyMaxN((char*)uk,(const char*)uks,keyLen);

		int num=rotate_num;
		for(int i=0;i<keyLen;i++)
		{
			num=(rotate_num+num-1)%rotate_num;
			uk[i]=(uk[i]+num)%255+1;
		}
		if(keyLen<=0)
			return;
		for(int i=0;i<len;i++)
		{
			if(up[i]<uk[i%keyLen])
			{
				up[i]=up[i]+256-uk[i%keyLen];
			}
			else
			{
				up[i]=up[i]-uk[i%keyLen];
			}
		}
	}

	static inline void Encode(const char* files,const char* filed,const char* key,int rotate_num,const char* head=NULL,int headLen=0)
	{
		char* p;
		int len=ScriptFile::ReadLocal(files,p);
		if(head!=NULL && p!=NULL)
		{
			char* p2=new char[headLen+len];
			ScriptFile::MemCpy(p2,head,headLen);
			ScriptFile::MemCpy(p2+headLen,p,len);
			delete[] p;
			p=p2;
			len+=headLen;
		}
		const unsigned char* uk=(const unsigned char*)key;
		unsigned char* up=(unsigned char*)p;		
		Encode(up,uk,len,rotate_num);
		if(p!=NULL && len>0)
		{
			ScriptFile::WriteLocal(filed,p,len);
			delete[] p;
		}
	}

	static inline void Decode(const char* files,const char* filed,const char* key,int rotate_num,const char* head=NULL,int headLen=0)
	{
		char* p;
		int len=ScriptFile::ReadLocal(files,p);
		const unsigned char* uk=(const unsigned char*)key;
		unsigned char* up=(unsigned char*)p;
		Decode(up,uk,len,rotate_num);
		if(p!=NULL && len>0)
		{	
			bool find=true;
			for(int i=0;i<headLen;i++)
			{
				if(head[i]!=p[i])
				{
					find=false;
					break;
				}
			}
			if(find)
			{
				len-=headLen;
				char* p2=new char[len];
				ScriptFile::MemCpy(p2,p+headLen,len);
				delete[] p;
				p=p2;
			}
			ScriptFile::WriteLocal(filed,p,len);		
			delete[] p;
		}
	}
	//用于处理注册码的加解密,原码与加密码具有一定对称性,比如ASCII字符解出来还是ASCII字符,这是与前面的加解密的差异之处.
	static inline void RotateKey(unsigned char* key,bool forFileName=false)
	{
		UINT len=StrLen((char*)key);
		int tnum=12060715;
		int num=tnum;
		for(UINT i=0;i<len;i++)
		{			
			UINT mod,left;			
			if(forFileName)
			{
				if(key[i]>='0' && key[i]<='9')
				{
					mod=10;left=48;
				}
				else if(key[i]>='A' && key[i]<='Z')
				{
					mod=26;left=65;
				}
				else if(key[i]>='a' && key[i]<='z')
				{
					mod=26;left=97;
				}
				else if(key[i]>=128)
				{
					mod=128;left=128;
				}
				else
				{
					continue;
				}
			}
			else
			{
				if(key[i]>=32 && key[i]<=64)
				{
					mod=33;left=32;
				}
				else if(key[i]>=65 && key[i]<=126)
				{
					mod=62;left=65;
				}
				else if(key[i]>=128)
				{
					mod=128;left=128;
				}
				else
				{
					continue;
				}
			}

			num=(tnum+num-1)%tnum;
			key[i]=(key[i]-left+(num%mod))%mod+left;
		}
	}

	static inline void UnRotateKey(unsigned char* key,bool forFileName=false)
	{
		UINT len=StrLen((char*)key);
		int tnum=12060715;
		int num=tnum;
		for(UINT i=0;i<len;i++)
		{
			UINT mod,left;
			if(forFileName)
			{
				if(key[i]>='0' && key[i]<='9')
				{
					mod=10;left=48;
				}
				else if(key[i]>='A' && key[i]<='Z')
				{
					mod=26;left=65;
				}
				else if(key[i]>='a' && key[i]<='z')
				{
					mod=26;left=97;
				}
				else if(key[i]>=128)
				{
					mod=128;left=128;
				}
				else
				{
					continue;
				}
			}
			else
			{
				if(key[i]>=32 && key[i]<=64)
				{
					mod=33;left=32;
				}
				else if(key[i]>=65 && key[i]<=126)
				{
					mod=62;left=65;
				}
				else if(key[i]>=128)
				{
					mod=128;left=128;
				}
				else
				{
					continue;
				}
			}

			num=(tnum+num-1)%tnum;
			key[i]-=left;
			if(key[i]<(num%mod))
			{
				key[i]=left+key[i]+mod-(num%mod);
			}
			else
			{
				key[i]=left+key[i]-(num%mod);
			}
		}
	}
	
	static inline unsigned int CalcuRotateNum(const char* key)
	{
		unsigned int serno=0;
		unsigned int len=StrLen(key);
		for(UINT i=0;i<len;i++)
			serno^=(UINT)key[i];
		UINT num=serno%246+10;
		return num;
	}
	//下面两个函数用于简单的手动加解密的情形,典型应用是可执行文件中的字符串常量的加解密.
	static inline void RotateMod(unsigned char* key,int num=1,bool forFileName=false)
	{
		UINT len=StrLen((char*)key);
		for(UINT i=0;i<len;i++)
		{			
			UINT mod,left;
			if(forFileName)
			{
				if(key[i]>='0' && key[i]<='9')
				{
					mod=10;left=48;
				}
				else if(key[i]>='A' && key[i]<='Z')
				{
					mod=26;left=65;
				}
				else if(key[i]>='a' && key[i]<='z')
				{
					mod=26;left=97;
				}
				else
				{
					continue;
				}
			}
			else
			{
				if(key[i]>=32 && key[i]<=64)
				{
					mod=33;left=32;
				}
				else if(key[i]>=65 && key[i]<=126)
				{
					mod=62;left=65;
				}
				else
				{
					continue;
				}
			}
			key[i]=(key[i]-left+(num%mod))%mod+left;
		}
	}

	static inline void UnRotateMod(unsigned char* key,int num=1,bool forFileName=false)
	{
		UINT len=StrLen((char*)key);
		for(UINT i=0;i<len;i++)
		{
			UINT mod,left;
			if(forFileName)
			{
				if(key[i]>='0' && key[i]<='9')
				{
					mod=10;left=48;
				}
				else if(key[i]>='A' && key[i]<='Z')
				{
					mod=26;left=65;
				}
				else if(key[i]>='a' && key[i]<='z')
				{
					mod=26;left=97;
				}
				else
				{
					continue;
				}
			}
			else
			{
				if(key[i]>=32 && key[i]<=64)
				{
					mod=33;left=32;
				}
				else if(key[i]>=65 && key[i]<=126)
				{
					mod=62;left=65;
				}
				else
				{
					continue;
				}
			}
			key[i]-=left;
			if(key[i]<(num%mod))
			{
				key[i]=left+key[i]+mod-(num%mod);
			}
			else
			{
				key[i]=left+key[i]-(num%mod);
			}
		}		
	}

	static inline CString StrToUTF8(const CString& s)
	{
		CComBSTR np(s);
		int len=::WideCharToMultiByte(CP_UTF8,0,np,np.Length(),NULL,0,NULL,NULL);
		char* buf=new char[len+1];
		::WideCharToMultiByte(CP_UTF8,0,np,np.Length(),buf,len,NULL,NULL);
		buf[len]=0;
		CString ret=CString(buf);
		delete[] buf;
		return ret;
	}

	static inline CString UTF8ToStr(const CString& s)
	{
		int len=::MultiByteToWideChar(CP_UTF8,0,s,s.GetLength(),NULL,0);
		WCHAR* buf=new WCHAR[len+1];
		::MultiByteToWideChar(CP_UTF8,0,s,s.GetLength(),buf,len);
		buf[len]=0;
		CString ret=CString(buf);
		delete[] buf;
		return ret;
	}
};
class BitmapUtility
{
#ifdef USE_GDIPLUS
	class GdiplusBitmap
	{
	public:
		GdiplusBitmap()
		{
			Gdiplus::GdiplusStartupInput gdiplusStartupInput;
			Gdiplus::Status r=Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
			if(r!=Gdiplus::Ok)
				gdiplusExist=false;
			else
				gdiplusExist=true;
		}
		~GdiplusBitmap()
		{
			Gdiplus::GdiplusShutdown(gdiplusToken);
			gdiplusExist=false;
		}
	public:
		inline bool GdiplusExist(void)
		{
			return gdiplusExist;
		}
		inline HBITMAP LoadFromURL(const CString& url)
		{
			CComPtr<MSXML2::IXMLHTTPRequest> xmlHttpRequest;
			long rt=xmlHttpRequest.CoCreateInstance(L"MSXML2.XMLHTTP");
			rt=xmlHttpRequest->open(L"GET",CComBSTR(url),CComVariant(FALSE));
			rt=xmlHttpRequest->send();
			CComPtr<IStream> streamPtr;
			VARIANT varValue;
			rt=xmlHttpRequest->get_responseStream(&varValue);
			streamPtr.Attach((IStream*)varValue.punkVal);
			if(!streamPtr)
				return NULL;
			Gdiplus::Bitmap* bp=Gdiplus::Bitmap::FromStream(streamPtr,FALSE);			
			HBITMAP hbitmap=GetHBITMAP(bp);
			delete bp;
			return hbitmap;
		}
		inline HBITMAP LoadFromFile(const CString& file)
		{
			Gdiplus::Bitmap* bp=Gdiplus::Bitmap::FromFile(CComBSTR(file),FALSE);			
			HBITMAP hbitmap=GetHBITMAP(bp);
			delete bp;
			return hbitmap;
		}
	private:
		inline HBITMAP GetHBITMAP(Gdiplus::Bitmap* bp)
		{
			UINT sw=bp->GetWidth();
			UINT sh=bp->GetHeight();
			Gdiplus::Color color(254,254,254);
			bp->GetPixel(0,0,&color);
			COLORREF bkColor=color.ToCOLORREF();
			HBITMAP hBitmap=NULL;
			bp->GetHBITMAP(color,&hBitmap);

			HDC hDC=::GetDC(NULL);
			PBITMAPINFO pbi=BitmapUtility::CreateBitmapInfoStruct(hBitmap);
			PBITMAPINFOHEADER pbih = (PBITMAPINFOHEADER) pbi; 
			unsigned char* lpBits = new unsigned char[pbih->biSizeImage];		
			BOOL rt=::GetDIBits(hDC, hBitmap, 0, (WORD) pbih->biHeight, lpBits, pbi, 
				DIB_RGB_COLORS);
			
			void* pBits=NULL;		
			HBITMAP hbitmap=::CreateDIBitmap(hDC,pbih,CBM_INIT,lpBits,(const BITMAPINFO *)pbih,DIB_RGB_COLORS);
			::ReleaseDC(NULL,hDC);
			
			::DeleteObject(hBitmap);
			delete[] pbih;
			delete[] lpBits;

			return hbitmap;
		}
	private:		
		ULONG_PTR gdiplusToken;
		bool gdiplusExist;
	};
#endif
	static inline HBITMAP LoadBitmapFromURL(const CString& url)
	{
#ifdef USE_GDIPLUS
		CString urlUpper(url);
		urlUpper.MakeUpper();
		if(urlUpper.Find(".BMP")<0)
		{
			GdiplusBitmap gpBitmap;
			if(gpBitmap.GdiplusExist())
				return gpBitmap.LoadFromURL(url);
		}
#endif
		{//没有GDI+时只支持位图文件
			char* t;
			long size=ScriptFile::ReadURL(url,t);
			if(t==NULL)
				return NULL;
			HDC hDC=::GetDC(NULL);
			const BITMAPINFOHEADER* pBIH=(const BITMAPINFOHEADER *)(t+sizeof(BITMAPFILEHEADER));
			void* pBits=NULL;		
			//注意pBIH+1正好指向数据区，相当于(char*)pBIH+sizeof(BITMAPFILEHEADER)
			HBITMAP hbitmap=::CreateDIBitmap(hDC,pBIH,CBM_INIT,pBIH+1,(const BITMAPINFO *)pBIH,DIB_RGB_COLORS);
			//下面两句是另一种装入位图的方法
			//HBITMAP hbitmap=::CreateDIBSection(hDC,(CONST BITMAPINFO *)pBIH,DIB_RGB_COLORS,&pBits,NULL,NULL);
			//::SetDIBits(hDC,hbitmap,0,pBIH->biHeight,pBIH+1,(CONST BITMAPINFO *)pBIH,DIB_RGB_COLORS);
			::ReleaseDC(NULL,hDC);
			delete[] t;
			return hbitmap;
		}
	}
	static inline HBITMAP LoadBitmapFromFile(const CString& file)
	{
#ifdef USE_GDIPLUS
		CString fileUpper(file);
		fileUpper.MakeUpper();
		if(fileUpper.Find(".BMP")<0)
		{
			GdiplusBitmap gpBitmap;
			if(gpBitmap.GdiplusExist())
				return gpBitmap.LoadFromFile(file);
		}
#endif
		{//没有GDI+时只支持位图文件
			return (HBITMAP)::LoadImage(NULL,file,IMAGE_BITMAP,0,0,LR_LOADFROMFILE);
		}
	}
public:
	//得到一个DC位图的代码
	static inline HBITMAP GetSrcBit(HDC hDC,DWORD BitWidth, DWORD BitHeight)
	{	
		HDC hBufDC;	
		HBITMAP hBitmap, hBitTemp;	
		hBufDC = ::CreateCompatibleDC(hDC);	
		hBitmap = ::CreateCompatibleBitmap(hDC, BitWidth, BitHeight);	
		hBitTemp = (HBITMAP)::SelectObject(hBufDC, hBitmap);	
		BOOL rt=::StretchBlt(hBufDC, 0, 0, BitWidth, BitHeight,		
			hDC, 0, 0, BitWidth, BitHeight, SRCCOPY);	
		hBitmap = (HBITMAP)::SelectObject(hBufDC, hBitTemp);	
		::DeleteDC(hBufDC);
		return hBitmap;
	}
	//辅助函数，用于保存位图
	static inline PBITMAPINFO CreateBitmapInfoStruct(HBITMAP hBmp)
	{ 
		BITMAP bmp; 
		PBITMAPINFO pbmi; 
		WORD    cClrBits; 
			
		if (!::GetObject(hBmp, sizeof(BITMAP), (LPSTR)&bmp)) 
		{
			AtlTrace("GetObject error:%x!\n",GetLastError());
			return NULL;
		}
    
		cClrBits = (WORD)(bmp.bmPlanes * bmp.bmBitsPixel); 
		if (cClrBits == 1) 
			cClrBits = 1; 
		else if (cClrBits <= 4) 
			cClrBits = 4; 
		else if (cClrBits <= 8) 
			cClrBits = 8; 
		else if (cClrBits <= 16) 
			cClrBits = 16; 
		else if (cClrBits <= 24) 
			cClrBits = 24; 
		else
			cClrBits = 32; 
		//不保存颜色表
		pbmi = (PBITMAPINFO)new char[sizeof(BITMAPINFOHEADER)]; 

		pbmi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER); 
		pbmi->bmiHeader.biWidth = bmp.bmWidth; 
		pbmi->bmiHeader.biHeight = bmp.bmHeight; 
		pbmi->bmiHeader.biPlanes = bmp.bmPlanes; 
		pbmi->bmiHeader.biBitCount = bmp.bmBitsPixel; 
		//不保存颜色表
		pbmi->bmiHeader.biClrUsed = 0;// (1<<cClrBits);

		pbmi->bmiHeader.biCompression = BI_RGB; 
		pbmi->bmiHeader.biSizeImage = ((pbmi->bmiHeader.biWidth * cClrBits +31) & ~31)/8 
									  * pbmi->bmiHeader.biHeight ; 
		pbmi->bmiHeader.biClrImportant = 0; 
		return pbmi; 
	}
	static inline void CreateBMPFile(LPCTSTR pszFile, PBITMAPINFO pbi, 
					  HBITMAP hBMP, HDC hDC) 
	 { 
		HANDLE hf;                 // file handle 
		BITMAPFILEHEADER hdr;       // bitmap file-header 
		PBITMAPINFOHEADER pbih;     // bitmap info-header 
		LPBYTE lpBits;              // memory pointer 
		DWORD dwTotal;              // total count of bytes 
		DWORD cb;                   // incremental count of bytes 
		BYTE *hp;                   // byte pointer 
		DWORD dwTmp; 
		

		pbih = (PBITMAPINFOHEADER) pbi; 
		lpBits =new unsigned char[pbih->biSizeImage];
		if (!lpBits) 
		{
			AtlTrace("GlobalAlloc error:%x!\n",GetLastError());
			return ;
		}
		if (!::GetDIBits(hDC, hBMP, 0, (WORD) pbih->biHeight, lpBits, pbi, 
			DIB_RGB_COLORS)) 
		{
			AtlTrace("GetDIBits error:%x!\n",GetLastError());
			return ; 
		}

		hf = ::CreateFile(pszFile, 
					   GENERIC_READ | GENERIC_WRITE, 
					   (DWORD) 0, 
						NULL, 
					   CREATE_ALWAYS, 
					   FILE_ATTRIBUTE_NORMAL, 
					   (HANDLE) NULL); 
		if (hf == INVALID_HANDLE_VALUE) 
		{
			AtlTrace("CreateFile error:%x!\n",GetLastError());
			return ;
		}
		hdr.bfType = 0x4d42;        // 0x42 = "B" 0x4d = "M" 
		// Compute the size of the entire file. 
		hdr.bfSize = (DWORD) (sizeof(BITMAPFILEHEADER) + 
					 pbih->biSize + pbih->biClrUsed 
					 * sizeof(RGBQUAD) + pbih->biSizeImage); 
		hdr.bfReserved1 = 0; 
		hdr.bfReserved2 = 0; 

		// Compute the offset to the array of color indices. 
		hdr.bfOffBits = (DWORD) sizeof(BITMAPFILEHEADER) + 
						pbih->biSize + pbih->biClrUsed 
						* sizeof (RGBQUAD); 

		// Copy the BITMAPFILEHEADER into the .BMP file. 
		if (!::WriteFile(hf, (LPVOID) &hdr, sizeof(BITMAPFILEHEADER), 
			(LPDWORD) &dwTmp,  NULL)) 
		{
		   AtlTrace("WriteFile error:%x!\n",GetLastError());
		}

		// Copy the BITMAPINFOHEADER and RGBQUAD array into the file. 
		if (!::WriteFile(hf, (LPVOID) pbih, sizeof(BITMAPINFOHEADER) 
					  + pbih->biClrUsed * sizeof (RGBQUAD), 
					  (LPDWORD) &dwTmp,  NULL)) 
		{
			AtlTrace("WriteFile error:%x!\n",GetLastError()); 
		}

		// Copy the array of color indices into the .BMP file. 
		dwTotal = cb = pbih->biSizeImage; 
		hp = lpBits; 
		if (!::WriteFile(hf, (LPSTR) hp, (int) cb, (LPDWORD) &dwTmp,NULL)) 
		{
			AtlTrace("WriteFile error:%x!\n",GetLastError()); 
		}
		// Close the .BMP file. 
		if (!::CloseHandle(hf)) 
		{
			AtlTrace("CloseHandle error:%x!\n",GetLastError()); 
		}
    
		// Free memory. 
		delete[] lpBits;
	}
	static inline HBITMAP LoadBitmap(const CString& fileName)
	{
		HBITMAP hbitmap=NULL;
		if(fileName.Find("://")>=0)
		{
			hbitmap=LoadBitmapFromURL(fileName);
		}
		else
		{
			hbitmap=LoadBitmapFromFile(fileName);	
		}
		return hbitmap;
	}
	//辅助函数，用于打印位图
	static inline void DrawBitmap(HDC hDC,HBITMAP hBmp,int iX,int iY,double dScaleX=1.0,double dScaleY=1.0,int iWidth=0,int iLength=0)
	{
		HPALETTE hPal = NULL;
		BITMAP bm;
		BITMAPINFOHEADER bi;
		LPBITMAPINFOHEADER lpbi;
		DWORD dwLen;
		HANDLE hDIB;
		HANDLE handle;
		HDC hDC1;
		if(::GetDeviceCaps(hDC,RASTERCAPS) & RC_PALETTE)
		{
			UINT nSize = sizeof(LOGPALETTE) + (sizeof(PALETTEENTRY) * 256);		
			LOGPALETTE *pLP = (LOGPALETTE *) new BYTE[nSize];		
			pLP->palVersion = 0x300;		
			pLP->palNumEntries = ::GetSystemPaletteEntries( hDC, 0, 255, pLP->palPalEntry );		
			hPal=::CreatePalette(pLP);		
			delete[] pLP;		
		}	
		if(hPal==NULL)
			hPal = (HPALETTE)::GetStockObject(DEFAULT_PALETTE);	
		::GetObject(hBmp,sizeof(bm),(LPSTR)&bm);	
		bi.biSize = sizeof(BITMAPINFOHEADER);	
		bi.biWidth = bm.bmWidth;	
		bi.biHeight = bm.bmHeight;	
		bi.biPlanes = 1;	
		bi.biBitCount = bm.bmPlanes * bm.bmBitsPixel;	
		bi.biCompression = BI_RGB;	
		bi.biSizeImage = 0;	
		bi.biXPelsPerMeter = 0;	
		bi.biYPelsPerMeter = 0;	
		bi.biClrUsed = 0;	
		bi.biClrImportant = 0;	
		int nColors = (1 << bi.biBitCount);	
		if( nColors > 256 )		
			nColors = 0;	
		dwLen = bi.biSize + nColors * sizeof(RGBQUAD);	
		hDC1 = ::GetDC(NULL);	
		hPal = ::SelectPalette(hDC1,hPal,FALSE);	
		::RealizePalette(hDC1);	
		hDIB = ::GlobalAlloc(GMEM_FIXED,dwLen);	
		if(!hDIB)		
		{		
			::SelectPalette(hDC1,hPal,FALSE);		
			::ReleaseDC(NULL,hDC1);		
			::DeleteObject(hPal);		
			return;		
		}	
		lpbi = (LPBITMAPINFOHEADER)hDIB;	
		*lpbi = bi;	
		BOOL rt=::GetDIBits(hDC1, hBmp, 0L, (DWORD)bi.biHeight,		
			(LPBYTE)NULL, (LPBITMAPINFO)lpbi, (DWORD)DIB_RGB_COLORS);	
		bi = *lpbi;	
		if(bi.biSizeImage == 0)		
			bi.biSizeImage = ((((bi.biWidth * bi.biBitCount) + 31) & ~31) / 8)* bi.biHeight;	
		dwLen += bi.biSizeImage;	
		if (handle = ::GlobalReAlloc(hDIB, dwLen, GMEM_MOVEABLE))		
			hDIB = handle;	
		else		
		{		
			::GlobalFree(hDIB);		
			::SelectPalette(hDC1,hPal,FALSE);		
			::ReleaseDC(NULL,hDC1);		
			::DeleteObject(hPal);		
			return;		
		}	
		lpbi = (LPBITMAPINFOHEADER)hDIB;	
		BOOL bGotBits = ::GetDIBits( hDC1, hBmp,0L,(DWORD)bi.biHeight,(LPBYTE)lpbi+ (bi.biSize + nColors * sizeof(RGBQUAD)),		
			(LPBITMAPINFO)lpbi,(DWORD)DIB_RGB_COLORS);	
		if( !bGotBits )		
		{		
			::GlobalFree(hDIB);		
			::SelectPalette(hDC1,hPal,FALSE);		
			::ReleaseDC(NULL,hDC1);		
			::DeleteObject(hPal);		
			return;		
		}	
		if(iWidth==0 || iLength==0)		
		{		
			iWidth=lpbi->biWidth;		
			iLength=lpbi->biHeight;		
			iWidth=(int)(dScaleX*iWidth);		
			iLength=(int)(iLength*dScaleY);		
		}	
		rt=::StretchDIBits(hDC,iX,iY,iWidth,iLength,0,0,lpbi->biWidth,lpbi->biHeight,(LPBYTE)lpbi
			+ (bi.biSize + nColors * sizeof(RGBQUAD)),(LPBITMAPINFO)lpbi,DIB_RGB_COLORS,SRCCOPY);	
		::SelectPalette(hDC1,hPal,FALSE);	
		::ReleaseDC(NULL,hDC1);	
		::DeleteObject(hDIB);	
		::DeleteObject(hPal);	
	}
};
#endif // !defined(AFX_UTILITY_H__5E169239_13C6_4765_98DE_E7B698DF57D3__INCLUDED_)
