#pragma once
#include "stdafx.h"
#include "resource.h"
#include "Plugin.h"
#include "ConditionExpression.h"
#include <fstream>
#include <map>
#include <vector>

#define _Module _AtlBaseModule
#include "Disasm.h"
#include "MyWindowProc.h"
#include "WinForIE.h"

#pragma comment(lib,"../../debuger_include/Ollydbg.lib")

#include "Search.h"
#include "MemoryLayout.h"

#define EXTERN_EVENT_INTERVAL	0x00010000

typedef WinForIE<true,WS_POPUP|WS_BORDER|WS_CAPTION|WS_SYSMENU|WS_MAXIMIZEBOX|WS_MINIMIZEBOX| WS_SIZEBOX
		,WS_EX_LEFT> Dlg;

extern Dlg dlg;
extern bool isNT;
extern HWND mainHwnd;
extern bool canRun;

class Register : public IDispatch
{
public:
	virtual void __stdcall put_Modified(int v)
	{
		pTR->modified=v;
	}
	virtual int __stdcall get_Modified(void)
	{
		return pTR->modified;
	}
	virtual int __stdcall get_SingleStep(void)
	{
		return pTR->singlestep;
	}
	virtual void __stdcall put_SegGs(unsigned long newVal)
	{
		pTR->s[SEG_GS]=newVal;
	}
	virtual unsigned long __stdcall get_SegGs(void)
	{
		return pTR->s[SEG_GS];
	}
	virtual void __stdcall put_SegFs(unsigned long newVal)
	{
		pTR->s[SEG_FS]=newVal;
	}
	virtual unsigned long __stdcall get_SegFs(void)
	{
		return pTR->s[SEG_FS];
	}
	virtual void __stdcall put_SegEs(unsigned long newVal)
	{
		pTR->s[SEG_ES]=newVal;
	}
	virtual unsigned long __stdcall get_SegEs(void)
	{
		return pTR->s[SEG_ES];
	}
	virtual void __stdcall put_SegDs(unsigned long newVal)
	{
		pTR->s[SEG_DS]=newVal;
	}
	virtual unsigned long __stdcall get_SegDs(void)
	{
		return pTR->s[SEG_DS];
	}
	virtual void __stdcall put_Edi(unsigned long newVal)
	{
		pTR->r[REG_EDI]=newVal;
	}
	virtual unsigned long __stdcall get_Edi(void)
	{
		return pTR->r[REG_EDI];
	}
	virtual void __stdcall put_Esi(unsigned long newVal)
	{
		pTR->r[REG_ESI]=newVal;
	}
	virtual unsigned long __stdcall get_Esi(void)
	{
		return pTR->r[REG_ESI];
	}
	virtual void __stdcall put_Ebx(unsigned long newVal)
	{
		pTR->r[REG_EBX]=newVal;
	}
	virtual unsigned long __stdcall get_Ebx(void)
	{
		return pTR->r[REG_EBX];
	}
	virtual void __stdcall put_Edx(unsigned long newVal)
	{
		pTR->r[REG_EDX]=newVal;
	}
	virtual unsigned long __stdcall get_Edx(void)
	{
		return pTR->r[REG_EDX];
	}
	virtual void __stdcall put_Ecx(unsigned long newVal)
	{
		pTR->r[REG_ECX]=newVal;
	}
	virtual unsigned long __stdcall get_Ecx(void)
	{
		return pTR->r[REG_ECX];
	}
	virtual void __stdcall put_Eax(unsigned long newVal)
	{
		pTR->r[REG_EAX]=newVal;
	}
	virtual unsigned long __stdcall get_Eax(void)
	{
		return pTR->r[REG_EAX];
	}
	virtual void __stdcall put_Ebp(unsigned long newVal)
	{
		pTR->r[REG_EBP]=newVal;
	}
	virtual unsigned long __stdcall get_Ebp(void)
	{
		return pTR->r[REG_EBP];
	}
	virtual void __stdcall put_Eip(unsigned long newVal)
	{
		pTR->ip=newVal;
	}
	virtual unsigned long __stdcall get_Eip(void)
	{
		return pTR->ip;
	}
	virtual void __stdcall put_SegCs(unsigned long newVal)
	{
		pTR->s[SEG_CS]=newVal;
	}
	virtual unsigned long __stdcall get_SegCs(void)
	{
		return pTR->s[SEG_CS];
	}
	virtual void __stdcall put_EFlags(unsigned long newVal)
	{
		pTR->flags=newVal;
	}
	virtual unsigned long __stdcall get_EFlags(void)
	{
		return pTR->flags;
	}
	virtual void __stdcall put_Esp(unsigned long newVal)
	{
		pTR->r[REG_ESP]=newVal;
	}
	virtual unsigned long __stdcall get_Esp(void)
	{
		return pTR->r[REG_ESP];
	}
	virtual void __stdcall put_SegSs(unsigned long newVal)
	{
		pTR->s[SEG_SS]=newVal;
	}
	virtual unsigned long __stdcall get_SegSs(void)	
	{
		return pTR->s[SEG_SS];
	}
	virtual void __stdcall put_Dr0(unsigned long newVal)
	{
		pTR->drlin[0]=newVal;
	}
	virtual unsigned long __stdcall get_Dr0(void)
	{
		return pTR->drlin[0];
	}
	virtual void __stdcall put_Dr1(unsigned long newVal)
	{
		pTR->drlin[1]=newVal;
	}
	virtual unsigned long __stdcall get_Dr1(void)
	{
		return pTR->drlin[1];
	}
	virtual void __stdcall put_Dr2(unsigned long newVal)
	{
		pTR->drlin[2]=newVal;
	}
	virtual unsigned long __stdcall get_Dr2(void)
	{
		return pTR->drlin[2];
	}
	virtual void __stdcall put_Dr3(unsigned long newVal)
	{
		pTR->drlin[3]=newVal;
	}
	virtual unsigned long __stdcall get_Dr3(void)
	{
		return pTR->drlin[3];
	}
	virtual void __stdcall put_Dr6(unsigned long newVal)
	{
		pTR->dr6=newVal;
	}
	virtual unsigned long __stdcall get_Dr6(void)
	{
		return pTR->dr6;
	}
	virtual void __stdcall put_Dr7(unsigned long newVal)
	{
		pTR->dr7=newVal;
	}
	virtual unsigned long __stdcall get_Dr7(void)
	{
		return pTR->dr7;
	}
	virtual unsigned long __stdcall get_ThreadId(void)
	{
		return pTR->threadid;
	}
	virtual unsigned long __stdcall get_LastError(void)
	{
		return pTR->lasterror;
	}
	virtual void __stdcall put_FpuTop(int v)
	{
		pTR->top=v;
	}
	virtual int __stdcall get_FpuTop(void)
	{
		return pTR->top;
	}
	virtual void __stdcall SetFpuReg(int ix,double v)
	{
		if(ix<0 || ix>7)return;
		pTR->f[ix]=v;
	}
	virtual double __stdcall GetFpuReg(int ix)
	{
		if(ix<0 || ix>7)return 0.0;
		return pTR->f[ix];
	}
	virtual void __stdcall SetFpuTag(int ix,unsigned char v)
	{
		if(ix<0 || ix>7)return;
		pTR->tag[ix]=v;
	}
	virtual unsigned char __stdcall GetFpuTag(int ix)
	{
		if(ix<0 || ix>7)return 0.0;
		return pTR->tag[ix];
	}
    virtual void __stdcall put_FpuStatusWord(unsigned int word)
	{
		pTR->fst=word;
	}
	virtual unsigned int __stdcall get_FpuStatusWord(void)
	{
		return pTR->fst;
	}
    virtual void __stdcall put_FpuCtrlWord(unsigned int word)
	{
		pTR->fcw=word;
	}
	virtual unsigned int __stdcall get_FpuCtrlWord(void)
	{
		return pTR->fcw;
	}
	virtual UINT __stdcall GetSegBase(int ix)
	{
		if(ix<0 || ix>5)return 0;
		return pTR->base[ix];
	}
	virtual UINT __stdcall GetSegLimit(int ix)
	{
		if(ix<0 || ix>5)return 0;
		return pTR->limit[ix];
	}
	virtual UCHAR __stdcall GetSegBig(int ix)
	{
		if(ix<0 || ix>5)return 0;
		return pTR->big[ix];
	}
	virtual int __stdcall get_SSEValid(void)
	{
		return pTR->ssevalid;
	}
	virtual void __stdcall put_SSEModified(int v)
	{
		pTR->ssemodified;
	}
	virtual int __stdcall get_SSEModified(void)
	{
		return pTR->ssemodified;
	}
	virtual void __stdcall SetSSEReg(int i,int j,char v)
	{
		if(i<0 || i>7)return;
		if(j<0 || j>15)return;
		pTR->ssereg[i][j]=v;
	}
	virtual char __stdcall GetSSEReg(int i,int j)
	{
		if(i<0 || i>7)return 0;
		if(j<0 || j>15)return 0;
		return pTR->ssereg[i][j];
	}
	virtual void __stdcall put_Mxcsr(int v)
	{
		pTR->mxcsr=v;
	}
	virtual int __stdcall get_Mxcsr(void)
	{
		return pTR->mxcsr;
	}
	virtual int __stdcall get_Selected(void)
	{
		return pTR->selected;
	}
public:
	BEGIN_INTF(Register)
		PROPERTYPUT(Modified,false)
		PROPERTYGET(Modified,true)
		PROPERTYGET(SingleStep,true)
		PROPERTYPUT(SegGs,false)
		PROPERTYGET(SegGs,true)
		PROPERTYPUT(SegFs,false)
		PROPERTYGET(SegFs,true)
		PROPERTYPUT(SegEs,false)
		PROPERTYGET(SegEs,true)
		PROPERTYPUT(SegDs,false)
		PROPERTYGET(SegDs,true)
		PROPERTYPUT(Edi,false)
		PROPERTYGET(Edi,true)
		PROPERTYPUT(Esi,false)
		PROPERTYGET(Esi,true)
		PROPERTYPUT(Ebx,false)
		PROPERTYGET(Ebx,true)
		PROPERTYPUT(Edx,false)
		PROPERTYGET(Edx,true)
		PROPERTYPUT(Ecx,false)
		PROPERTYGET(Ecx,true)
		PROPERTYPUT(Eax,false)
		PROPERTYGET(Eax,true)
		PROPERTYPUT(Ebp,false)
		PROPERTYGET(Ebp,true)
		PROPERTYPUT(Eip,false)
		PROPERTYGET(Eip,true)
		PROPERTYPUT(SegCs,false)
		PROPERTYGET(SegCs,true)
		PROPERTYPUT(EFlags,false)
		PROPERTYGET(EFlags,true)
		PROPERTYPUT(Esp,false)
		PROPERTYGET(Esp,true)
		PROPERTYPUT(SegSs,false)
		PROPERTYGET(SegSs,true)
		PROPERTYPUT(Dr0,false)
		PROPERTYGET(Dr0,true)
		PROPERTYPUT(Dr1,false)
		PROPERTYGET(Dr1,true)
		PROPERTYPUT(Dr2,false)
		PROPERTYGET(Dr2,true)
		PROPERTYPUT(Dr3,false)
		PROPERTYGET(Dr3,true)
		PROPERTYPUT(Dr6,false)
		PROPERTYGET(Dr6,true)
		PROPERTYPUT(Dr7,false)
		PROPERTYGET(Dr7,true)
		PROPERTYGET(ThreadId,true)
		PROPERTYGET(LastError,true)
		PROPERTYPUT(FpuTop,false)
		PROPERTYGET(FpuTop,true)
		METHOD(SetFpuReg)
		METHOD(GetFpuReg)
		METHOD(SetFpuTag)
		METHOD(GetFpuTag)
		PROPERTYPUT(FpuStatusWord,false)
		PROPERTYGET(FpuStatusWord,true)
		PROPERTYPUT(FpuCtrlWord,false)
		PROPERTYGET(FpuCtrlWord,true)
		METHOD(GetSegBase)
		METHOD(GetSegLimit)
		METHOD(GetSegBig)
		PROPERTYGET(SSEValid,true)
		PROPERTYPUT(SSEModified,false)
		PROPERTYGET(SSEModified,true)
		METHOD(SetSSEReg)
		METHOD(GetSSEReg)
		PROPERTYPUT(Mxcsr,false)
		PROPERTYGET(Mxcsr,true)
		PROPERTYGET(Selected,true)
	END_INTF()
public:
	void Init(t_reg* p)
	{
		pTR=p;
	}
	void InitCopy(t_reg* p)
	{
		::memcpy(&trBak,p,sizeof(t_reg));
		pTR=&trBak;
	}
public:
	Register():pTR(NULL)
	{}
private:
	t_reg* pTR;
	t_reg trBak;
};

class DebugEvent : public IDispatch
{
public:
	virtual DWORD __stdcall get_Code(void)
	{
		return pDE->dwDebugEventCode;
	}
	virtual DWORD __stdcall get_ProcessId(void)
	{
		return pDE->dwProcessId;
	}
	virtual DWORD __stdcall get_ThreadId(void)
	{
		return pDE->dwThreadId;
	}
	virtual DWORD __stdcall get_ExceptionFirstChance(void)
	{
		if(pDE->dwDebugEventCode==EXCEPTION_DEBUG_EVENT)
			return pDE->u.Exception.dwFirstChance;
		else
			return 0;
	}
	virtual DWORD __stdcall get_ExceptionCode(void)
	{
		if(pDE->dwDebugEventCode==EXCEPTION_DEBUG_EVENT)
			return pDE->u.Exception.ExceptionRecord.ExceptionCode;
		else
			return 0;
	}
	virtual DWORD __stdcall get_ExceptionFlags(void)
	{
		if(pDE->dwDebugEventCode==EXCEPTION_DEBUG_EVENT)
			return pDE->u.Exception.ExceptionRecord.ExceptionFlags;
		else
			return 0;
	}
	virtual DWORD __stdcall get_ExceptionAddress(void)
	{
		if(pDE->dwDebugEventCode==EXCEPTION_DEBUG_EVENT)
			return (DWORD)pDE->u.Exception.ExceptionRecord.ExceptionAddress;
		else
			return 0;
	}	
	virtual DWORD __stdcall get_ExceptionParamNum(void)
	{
		if(pDE->dwDebugEventCode==EXCEPTION_DEBUG_EVENT)
			return (DWORD)pDE->u.Exception.ExceptionRecord.NumberParameters;
		else
			return 0;
	}
	virtual DWORD __stdcall GetExceptionParam(int ix)
	{
		if(pDE->dwDebugEventCode==EXCEPTION_DEBUG_EVENT)
		{
			if(ix<0 || ix>=EXCEPTION_MAXIMUM_PARAMETERS)
				return 0;
			return (DWORD)pDE->u.Exception.ExceptionRecord.ExceptionInformation[ix];
		}
		else
			return 0;		
	}
	virtual DWORD __stdcall get_ProcessHandle(void)
	{		
		if(pDE->dwDebugEventCode==CREATE_PROCESS_DEBUG_EVENT)
			return (DWORD)pDE->u.CreateProcessInfo.hProcess;
		else
			return 0;
	}		
	virtual DWORD __stdcall get_ThreadHandle(void)
	{
		if(pDE->dwDebugEventCode==CREATE_PROCESS_DEBUG_EVENT)
			return (DWORD)pDE->u.CreateProcessInfo.hThread;
		else if(pDE->dwDebugEventCode==CREATE_THREAD_DEBUG_EVENT)
			return (DWORD)pDE->u.CreateThread.hThread;
		else
			return 0;
	}		
	virtual BSTR __stdcall get_ImageName(void)
	{
		if(pDE->dwDebugEventCode==CREATE_PROCESS_DEBUG_EVENT)
		{
			if(pDE->u.CreateProcessInfo.fUnicode)
				return CString((BSTR)pDE->u.CreateProcessInfo.lpImageName).AllocSysString();
			else
				return CString((char*)pDE->u.CreateProcessInfo.lpImageName).AllocSysString();
		}
		else
			return 0;
	}		
	virtual DWORD __stdcall get_BaseOfImage(void)
	{	
		if(pDE->dwDebugEventCode==CREATE_PROCESS_DEBUG_EVENT)
			return (DWORD)pDE->u.CreateProcessInfo.lpBaseOfImage;
		else
			return 0;
	}		
	virtual DWORD __stdcall get_StartAddress(void)
	{
		if(pDE->dwDebugEventCode==CREATE_PROCESS_DEBUG_EVENT)
			return (DWORD)pDE->u.CreateProcessInfo.lpStartAddress;
		else if(pDE->dwDebugEventCode==CREATE_THREAD_DEBUG_EVENT)
			return (DWORD)pDE->u.CreateThread.lpStartAddress;
		else
			return 0;
	}		
	virtual DWORD __stdcall get_ExitCode(void)
	{
		if(pDE->dwDebugEventCode==EXIT_PROCESS_DEBUG_EVENT)
			return pDE->u.ExitProcess.dwExitCode;
		else if(pDE->dwDebugEventCode==EXIT_THREAD_DEBUG_EVENT)
			return pDE->u.ExitThread.dwExitCode;
		else
			return 0;
	}
	virtual BSTR __stdcall get_NameOfDll(void)
	{
		if(pDE->dwDebugEventCode==LOAD_DLL_DEBUG_EVENT)
		{
			if(pDE->u.LoadDll.fUnicode)
				return CString((BSTR)pDE->u.LoadDll.lpImageName).AllocSysString();
			else
				return CString((char*)pDE->u.LoadDll.lpImageName).AllocSysString();
		}
		else
			return 0;
	}
	virtual DWORD __stdcall get_BaseOfDll(void)
	{
		if(pDE->dwDebugEventCode==LOAD_DLL_DEBUG_EVENT)
			return (DWORD)pDE->u.LoadDll.lpBaseOfDll;
		else if(pDE->dwDebugEventCode==UNLOAD_DLL_DEBUG_EVENT)
			return (DWORD)pDE->u.UnloadDll.lpBaseOfDll;
		else
			return 0;
	}
	virtual BSTR __stdcall get_DebugString(void)
	{
		if(pDE->dwDebugEventCode==OUTPUT_DEBUG_STRING_EVENT)
		{
			if(pDE->u.DebugString.fUnicode)
				return CString((BSTR)pDE->u.DebugString.lpDebugStringData).AllocSysString();
			else
				return CString((char*)pDE->u.DebugString.lpDebugStringData).AllocSysString();
		}
		else
			return 0;
	}
public:
	BEGIN_INTF(DebugEvent)
		PROPERTYGET(Code,true)
		PROPERTYGET(ProcessId,true)
		PROPERTYGET(ThreadId,true)
		PROPERTYGET(ExceptionFirstChance,true)
		PROPERTYGET(ExceptionCode,true)
		PROPERTYGET(ExceptionFlags,true)
		PROPERTYGET(ExceptionAddress,true)
		PROPERTYGET(ExceptionParamNum,true)
		METHOD(GetExceptionParam)
		PROPERTYGET(ProcessHandle,true)
		PROPERTYGET(ThreadHandle,true)
		PROPERTYGET(ImageName,true)
		PROPERTYGET(BaseOfImage,true)
		PROPERTYGET(StartAddress,true)
		PROPERTYGET(ExitCode,true)
		PROPERTYGET(NameOfDll,true)
		PROPERTYGET(BaseOfDll,true)
		PROPERTYGET(DebugString,true)
	END_INTF()
public:
	void Init(DEBUG_EVENT* p)
	{
		pDE=p;
	}
public:
	DebugEvent():pDE(NULL)
	{}
private:
	DEBUG_EVENT* pDE;
};

class Module : public IDispatch
{
	typedef struct
	{
		DWORD type;
		DWORD from;
		DWORD to;
	}XRef;
	typedef std::vector<XRef> JumpInfos;
	typedef std::map<DWORD,JumpInfos> XRefs;

	typedef std::map<DWORD,DWORD> DwordPair;
	typedef std::map<DWORD,DwordPair> Func_CallToXRefs;
	typedef std::map<DWORD,DwordPair> Func_CallFromXRefs;
public:
	virtual DWORD __stdcall get_Base(void)
	{
		return pm->base;
	}
	virtual DWORD __stdcall get_Size(void)
	{
		return pm->size;
	}
	virtual DWORD __stdcall get_Type(void)
	{
		return pm->type;
	}
	virtual DWORD __stdcall get_CodeBase(void)
	{
		return pm->codebase;
	}
	virtual DWORD __stdcall get_CodeSize(void)
	{
		return pm->codesize;
	}
	virtual DWORD __stdcall get_DataBase(void)
	{
		return pm->database;
	}
	virtual DWORD __stdcall get_IDataTable(void)
	{
		return pm->idatatable;
	}
	virtual DWORD __stdcall get_IDataBase(void)
	{
		return pm->idatabase;
	}
	virtual DWORD __stdcall get_EDataTable(void)
	{
		return pm->edatatable;
	}
	virtual DWORD __stdcall get_EDataSize(void)
	{
		return pm->edatasize;
	}
	virtual DWORD __stdcall get_ResBase(void)
	{
		return pm->resbase;
	}
	virtual DWORD __stdcall get_ResSize(void)
	{
		return pm->ressize;
	}
	virtual DWORD __stdcall get_RelocTable(void)
	{
		return pm->reloctable;
	}
	virtual DWORD __stdcall get_RelocSize(void)
	{
		return pm->relocsize;
	}
	virtual DWORD __stdcall get_SFXBase(void)
	{
		return pm->sfxbase;
	}
	virtual DWORD __stdcall get_SFXSize(void)
	{
		return pm->sfxsize;
	}
	virtual int __stdcall get_IsSysDll(void)
	{
		return pm->issystemdll;
	}
	virtual int __stdcall get_XRefCount(void)
	{
		return pm->njddata;
	}
	virtual VARIANT __stdcall GetXRef(int ix)
	{
		if(ix<0 || ix>=pm->njddata)
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}
		DWORD v=pm->codebase;
		t_jdest& tj=pm->jddata[ix];
		SAFEARRAY* psa=SafeArray::Build((int)tj.type,v+tj.from,v+tj.to);
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=psa;
		return rt;
	}
	virtual DWORD __stdcall get_Entry(void)
	{
		return pm->entry;
	}
	virtual BSTR __stdcall get_Name(void)
	{
		char buf[SHORTLEN+1];
		::memcpy(buf,pm->name,SHORTLEN);
		buf[SHORTLEN]=0;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall get_Path(void)
	{
		return CString(pm->path).AllocSysString();
	}
	virtual void __stdcall ClearXRefs(void)
	{
		xrefs.clear();
		func_CallToXRefs.clear();
		func_CallFromXRefs.clear();
	}
	virtual void __stdcall BuildXRefs(DWORD start,DWORD num)
	{
		for(DWORD i=start;i<start+num && i<static_cast<DWORD>(pm->njddata);i++)
		{
			int ct=i-start;
			if(ct % EXTERN_EVENT_INTERVAL == 0)
			{
				dlg.DoMessageLoopOnce();
			}

			DWORD v=pm->codebase;
			XRef xref;
			xref.type=(DWORD)pm->jddata[i].type;
			xref.from=v+pm->jddata[i].from;
			xref.to=v+pm->jddata[i].to;

			XRefs::iterator xit1=xrefs.find(xref.from);
			if(xit1==xrefs.end())
			{
				JumpInfos jis;
				xrefs[xref.from]=jis;
			}
			xit1=xrefs.find(xref.from);
			xit1->second.push_back(xref);

			XRefs::iterator xit2=xrefs.find(xref.to);
			if(xit2==xrefs.end())
			{
				JumpInfos jis;
				xrefs[xref.to]=jis;
			}
			xit2=xrefs.find(xref.to);
			xit2->second.push_back(xref);

			if(xref.type==3)
			{
				DWORD fsrc=Findprocbegin(xref.from);
				DWORD fdest=Findprocbegin(xref.to);

				Func_CallToXRefs::iterator fit1=func_CallToXRefs.find(fsrc);
				if(fit1==func_CallToXRefs.end())
				{
					DwordPair toxrefs;
					func_CallToXRefs[fsrc]=toxrefs;
				}
				fit1=func_CallToXRefs.find(fsrc);
				fit1->second[xref.from]=xref.to;

				Func_CallFromXRefs::iterator fit2=func_CallFromXRefs.find(fdest);
				if(fit2==func_CallFromXRefs.end())
				{
					DwordPair fromxrefs;
					func_CallFromXRefs[fdest]=fromxrefs;
				}
				fit2=func_CallFromXRefs.find(fdest);
				fit2->second[xref.from]=fsrc;
			}
		}
	}
	virtual VARIANT __stdcall GetProcToXRefs(DWORD proc)
	{
		Func_CallToXRefs::iterator fit=func_CallToXRefs.find(proc);
		if(fit==func_CallToXRefs.end())
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}
		SAFEARRAY* newPsa=::SafeArrayCreateVector(VT_VARIANT,0,(DWORD)fit->second.size());		
		DwordPair::iterator cit=fit->second.begin();
		for(long i=0;cit!=fit->second.end();i++,cit++)
		{		
			CString temp;
			temp.Format("%8.8X->%8.8X",cit->first,cit->second);
			CComVariant var(temp);
			::SafeArrayPutElement(newPsa,&i,&var);
		}	
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=newPsa;
		return rt;
	}
	virtual VARIANT __stdcall GetProcFromXRefs(DWORD proc)
	{
		Func_CallFromXRefs::iterator fit=func_CallFromXRefs.find(proc);
		if(fit==func_CallFromXRefs.end())
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}
		SAFEARRAY* newPsa=::SafeArrayCreateVector(VT_VARIANT,0,(DWORD)fit->second.size());		
		DwordPair::iterator cit=fit->second.begin();
		for(long i=0;cit!=fit->second.end();i++,cit++)
		{		
			CString temp;
			temp.Format("%8.8X:%8.8X",cit->second,cit->first);
			CComVariant var(temp);
			::SafeArrayPutElement(newPsa,&i,&var);
		}	
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=newPsa;
		return rt;
	}
	virtual DWORD __stdcall GetAddrXRefCount(DWORD addr)
	{
		XRefs::iterator xit=xrefs.find(addr);
		if(xit==xrefs.end())
		{
			return 0;
		}
		return (DWORD)xit->second.size();
	}
	virtual VARIANT __stdcall GetAddrXRef(DWORD addr,int index)
	{
		XRefs::iterator xit=xrefs.find(addr);
		if(xit==xrefs.end() || index<0 || index>=static_cast<int>(xit->second.size()))
		{
			VARIANT rt0;
			::VariantInit(&rt0);
			rt0.vt=VT_ARRAY|VT_VARIANT;
			rt0.parray=SafeArray::Build();
			return rt0;
		}
		XRef& xref=xit->second[index];
		SAFEARRAY* psa=SafeArray::Build(xref.type,xref.from,xref.to);
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=psa;
		return rt;
	}
public:
	BEGIN_INTF(Module)
		PROPERTYGET(Base,true)
		PROPERTYGET(Size,true)
		PROPERTYGET(Type,true)
		PROPERTYGET(CodeBase,true)
		PROPERTYGET(CodeSize,true)
		PROPERTYGET(DataBase,true)
		PROPERTYGET(IDataTable,true)
		PROPERTYGET(IDataBase,true)
		PROPERTYGET(EDataTable,true)
		PROPERTYGET(EDataSize,true)
		PROPERTYGET(ResBase,true)
		PROPERTYGET(ResSize,true)
		PROPERTYGET(RelocTable,true)
		PROPERTYGET(RelocSize,true)
		PROPERTYGET(SFXBase,true)
		PROPERTYGET(SFXSize,true)
		PROPERTYGET(IsSysDll,true)
		PROPERTYGET(XRefCount,true)
		METHOD(GetXRef)
		PROPERTYGET(Entry,true)
		PROPERTYGET(Name,true)
		PROPERTYGET(Path,true)
		METHOD(ClearXRefs)
		METHOD(BuildXRefs)
		METHOD(GetProcToXRefs)
		METHOD(GetProcFromXRefs)
		METHOD(GetAddrXRefCount)
		METHOD(GetAddrXRef)		
	END_INTF()
public:
	void Init(t_module* p)
	{
		pm=p;
	}
public:
	Module():pm(NULL)
	{}
private:
	t_module* pm;
	XRefs xrefs;
	Func_CallToXRefs func_CallToXRefs;
	Func_CallFromXRefs func_CallFromXRefs;
};

class Thread : public IDispatch
{
public:
	virtual DWORD __stdcall get_ID(void)
	{
		return pt->threadid;
	}
	virtual DWORD __stdcall get_Type(void)
	{
		return pt->type;
	}
	virtual DWORD __stdcall get_Handle(void)
	{
		return (DWORD)pt->thread;
	}
	virtual DWORD __stdcall get_DataBlock(void)
	{
		return pt->datablock;
	}
	virtual DWORD __stdcall get_Entry(void)
	{
		return pt->entry;
	}
	virtual DWORD __stdcall get_StackTop(void)
	{
		return pt->stacktop;
	}
	virtual DWORD __stdcall get_StackBottom(void)
	{
		return pt->stackbottom;
	}
	virtual IDispatch* __stdcall get_Reg(void)
	{
		Register* p=Register::CreateDispatch();
		p->Init(&(pt->reg));
		return p;
	}
	virtual int __stdcall get_RegValid(void)
	{
		return pt->regvalid;
	}
	virtual IDispatch* __stdcall get_OldReg(void)
	{
		Register* p=Register::CreateDispatch();
		p->Init(&(pt->oldreg));
		return p;
	}
	virtual int __stdcall get_OldRegValid(void)
	{
		return pt->oldregvalid;
	}
	virtual int __stdcall get_SuspendCount(void)
	{
		return pt->suspendcount;
	}
	virtual long __stdcall get_UserTime(void)
	{
		return pt->usertime;
	}
	virtual long __stdcall get_SysTime(void)
	{
		return pt->systime;
	}
public:
	BEGIN_INTF(Thread)
		PROPERTYGET(ID,true)
		PROPERTYGET(Type,true)
		PROPERTYGET(Handle,true)
		PROPERTYGET(DataBlock,true)
		PROPERTYGET(Entry,true)
		PROPERTYGET(StackTop,true)
		PROPERTYGET(StackBottom,true)
		PROPERTYGET(Reg,true)
		PROPERTYGET(RegValid,true)
		PROPERTYGET(OldReg,true)
		PROPERTYGET(OldRegValid,true)
		PROPERTYGET(SuspendCount,true)
		PROPERTYGET(UserTime,true)
		PROPERTYGET(SysTime,true)
	END_INTF()
public:
	void Init(t_thread* p)
	{
		pt=p;
	}
public:
	Thread():pt(NULL)
	{}
private:
	t_thread* pt; 
};

class MemoryInfo : public IDispatch
{
public:
	virtual DWORD __stdcall get_Base(void)
	{
		return pm->base;
	}
	virtual DWORD __stdcall get_Size(void)
	{
		return pm->size;
	}
	virtual DWORD __stdcall get_Type(void)
	{
		return pm->type;
	}
	virtual DWORD __stdcall get_Owner(void)
	{
		return pm->owner;
	}
	virtual DWORD __stdcall get_InitAccess(void)
	{
		return pm->initaccess;
	}
	virtual DWORD __stdcall get_Access(void)
	{
		return pm->access;
	}
	virtual DWORD __stdcall get_ThreadID(void)
	{
		return pm->threadid;
	}
	virtual BSTR __stdcall get_Section(void)
	{
		char buf[SHORTLEN+1];
		::memcpy(buf,pm->sect,SHORTLEN);
		buf[SHORTLEN]=0;
		return CString(buf).AllocSysString();
	}
public:
	BEGIN_INTF(MemoryInfo)
		PROPERTYGET(Base,true)
		PROPERTYGET(Size,true)
		PROPERTYGET(Type,true)
		PROPERTYGET(Owner,true)
		PROPERTYGET(InitAccess,true)
		PROPERTYGET(Access,true)
		PROPERTYGET(ThreadID,true)
		PROPERTYGET(Section,true)
	END_INTF()
public:
	void Init(t_memory* p)
	{
		pm=p;
	}
public:
	MemoryInfo():pm(NULL)
	{}
private:
	t_memory* pm; 
};
class AsmInfo : public IDispatch
{
public:
	virtual int __stdcall get_CodeLength(void)
	{
		return info.length;
	}
	virtual int __stdcall GetByte(int ix)
	{
		if(ix<0 || ix>=MAXCMDSIZE)
			return 0;
		return (int)info.code[ix];
	}
	virtual int __stdcall GetMask(int ix)
	{
		if(ix<0 || ix>=MAXCMDSIZE)
			return 0;
		return (int)info.mask[ix];
	}
	virtual int __stdcall get_JumpSize(void)
	{
		return info.jmpsize;
	}
	virtual int __stdcall get_JumpOffset(void)
	{
		return info.jmpoffset;
	}
	virtual int __stdcall get_JumpPosition(void)
	{
		return info.jmppos;
	}
	virtual BSTR __stdcall get_Error(void)
	{
		if(error.IsEmpty())
			return NULL;
		return error.AllocSysString();
	}
public:
	BEGIN_INTF(AsmInfo)
		PROPERTYGET(CodeLength,true)
		METHOD(GetByte)
		METHOD(GetMask)
		PROPERTYGET(JumpSize,true)
		PROPERTYGET(JumpOffset,true)
		PROPERTYGET(JumpPosition,true)
		PROPERTYGET(Error,true)
	END_INTF()
public:
	void Init(t_asmmodel* p)
	{
		::memcpy(&info,p,sizeof(t_asmmodel));
	}
	void SetError(const char* s)
	{
		error=s;
	}
private:
	t_asmmodel info;
	CString error;
};

class OperandInfo : public IDispatch
{
public:
	virtual int __stdcall get_Type(void)
	{
		return (int)info.optype;
	}
	virtual int __stdcall get_Size(void)
	{
		return (int)info.opsize;
	}
	virtual int __stdcall GetRegScale(int ix)
	{
		if(ix<0 || ix>=8)
			return 0;
		return (int)info.regscale[ix];
	}
	virtual int __stdcall get_Seg(void)
	{
		return (int)info.seg;
	}
	virtual DWORD __stdcall get_Const(void)
	{
		return info.opconst;
	}
public:
	BEGIN_INTF(OperandInfo)
		PROPERTYGET(Type,true)
		PROPERTYGET(Size,true)
		METHOD(GetRegScale)
		PROPERTYGET(Seg,true)
		PROPERTYGET(Const,true)
	END_INTF()
public:
	void Init(t_operand* p)
	{
		::memcpy(&info,p,sizeof(t_operand));
	}
private:
	t_operand info;
};

class DisasmInfo : public IDispatch
{
public:
	virtual DWORD __stdcall get_IP(void)
	{
		return info.ip;
	}
	virtual BSTR __stdcall get_Dump(void)
	{
		return CString(info.dump).AllocSysString();
	}
	virtual BSTR __stdcall get_Disasm(void)
	{
		char buf[TEXTLEN+1];
		::memcpy(buf,info.result,TEXTLEN);
		buf[TEXTLEN]=0;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall get_Comment(void)
	{
		char buf[TEXTLEN+1];
		::memcpy(buf,info.comment,TEXTLEN);
		buf[TEXTLEN]=0;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall GetOPComment(int ix)
	{
		if(ix<0 || ix>=3)
			return NULL;
		char buf[TEXTLEN+1];
		::memcpy(buf,info.opinfo[ix],TEXTLEN);
		buf[TEXTLEN]=0;
		return CString(buf).AllocSysString();
	}
	virtual int __stdcall get_CmdType(void)
	{
		return info.cmdtype;
	}
	virtual int __stdcall get_MemType(void)
	{
		return info.memtype;
	}
	virtual int __stdcall get_PrefixNum(void)
	{
		return info.nprefix;
	}
	virtual int __stdcall get_Indexed(void)
	{
		return info.indexed;
	}
	virtual DWORD __stdcall get_JumpConst(void)
	{
		return info.jmpconst;
	}
	virtual DWORD __stdcall get_JumpTable(void)
	{
		return info.jmptable;
	}
	virtual DWORD __stdcall get_AddrConst(void)
	{
		return info.adrconst;
	}
	virtual DWORD __stdcall get_ImmConst(void)
	{
		return info.immconst;
	}
	virtual BOOL __stdcall get_ZeroImm(void)
	{
		return info.zeroconst;
	}
	virtual int __stdcall get_FixupOffset(void)
	{
		return info.fixupoffset;
	}
	virtual int __stdcall get_FixupSize(void)
	{
		return info.fixupsize;
	}
	virtual DWORD __stdcall get_JumpAddr(void)
	{
		return info.jmpaddr;
	}
	virtual int __stdcall get_Condition(void)
	{
		return info.condition;
	}
	virtual int __stdcall get_Error(void)
	{
		return info.error;
	}
	virtual int __stdcall get_Warnings(void)
	{
		return info.warnings;
	}
	virtual int __stdcall GetOPType(int ix)
	{
		if(ix<0 || ix>=3)
			return 0;
		return info.optype[ix];
	}
	virtual int __stdcall GetOPSize(int ix)
	{
		if(ix<0 || ix>=3)
			return 0;
		return info.opsize[ix];
	}
	virtual int __stdcall GetOPGood(int ix)
	{
		if(ix<0 || ix>=3)
			return 0;
		return info.opgood[ix];
	}
	virtual DWORD __stdcall GetOPAddr(int ix)
	{
		if(ix<0 || ix>=3)
			return 0;
		return info.opaddr[ix];
	}
	virtual DWORD __stdcall GetOPData(int ix)
	{
		if(ix<0 || ix>=3)
			return 0;
		return info.opdata[ix];
	}
	virtual IDispatch* __stdcall GetOPInfo(int ix)
	{
		if(ix<0 || ix>=3)
			return NULL;
		OperandInfo* p=OperandInfo::CreateDispatch();
		p->Init(&(info.op[ix]));
		return p;
	}
	virtual DWORD __stdcall GetRegData(int ix)
	{
		if(ix<0 || ix>7)
			return 0;
		return info.regdata[ix];
	}
	virtual int __stdcall GetRegStatus(int ix)
	{
		if(ix<0 || ix>7)
			return 0;
		return info.regstatus[ix];
	}
	virtual DWORD __stdcall get_AddrData(void)
	{
		return info.addrdata;
	}
	virtual int __stdcall get_AddrStatus(void)
	{
		return info.addrstatus;
	}
	virtual DWORD __stdcall GetRegStack(int ix)
	{
		if(ix<0 || ix>=NREGSTACK)
			return 0;
		return info.regstack[ix];
	}
	virtual int __stdcall GetRegStackStatus(int ix)
	{
		if(ix<0 || ix>=NREGSTACK)
			return 0;
		return info.rststatus[ix];
	}
	virtual int __stdcall get_RegStackNum(void)
	{
		return info.nregstack;
	}
public:
	BEGIN_INTF(DisasmInfo)
		PROPERTYGET(IP,true)
		PROPERTYGET(Dump,true)
		PROPERTYGET(Disasm,true)
		PROPERTYGET(Comment,true)
		METHOD(GetOPComment)
		PROPERTYGET(CmdType,true)
		PROPERTYGET(MemType,true)
		PROPERTYGET(PrefixNum,true)
		PROPERTYGET(Indexed,true)
		PROPERTYGET(JumpConst,true)
		PROPERTYGET(JumpTable,true)
		PROPERTYGET(AddrConst,true)
		PROPERTYGET(ImmConst,true)
		PROPERTYGET(ZeroImm,true)
		PROPERTYGET(FixupOffset,true)
		PROPERTYGET(FixupSize,true)
		PROPERTYGET(JumpAddr,true)
		PROPERTYGET(Condition,true)
		PROPERTYGET(Error,true)
		PROPERTYGET(Warnings,true)
		METHOD(GetOPType)
		METHOD(GetOPSize)
		METHOD(GetOPGood)
		METHOD(GetOPAddr)
		METHOD(GetOPData)
		METHOD(GetOPInfo)
		METHOD(GetRegData)
		METHOD(GetRegStatus)
		PROPERTYGET(AddrData,true)
		PROPERTYGET(AddrStatus,true)
		METHOD(GetRegStack)
		METHOD(GetRegStackStatus)
		PROPERTYGET(RegStackNum,true)
	END_INTF()
public:
	void Init(t_disasm* p)
	{
		::memcpy(&info,p,sizeof(t_disasm));
	}
private:
	t_disasm info;
};

class ResultInfo : public IDispatch
{
public:
	virtual int __stdcall get_Type(void)
	{
		return info.type;
	}
	virtual int __stdcall get_DataType(void)
	{
		return info.dtype;
	}
	virtual int __stdcall GetBinaryValue(int ix)
	{
		if(ix<0 || ix>=10)
			return 0;
		return (int)info.data[ix];
	}
	virtual DWORD __stdcall get_UintValue(void)
	{
		return info.u;
	}
	virtual long __stdcall get_IntValue(void)
	{
		return info.l;
	}
	virtual double __stdcall get_FloatValue(void)
	{
		return info.f;
	}
	virtual BSTR __stdcall get_CstrValue(void)
	{
		return CString(info.value).AllocSysString();
	}
	virtual BSTR __stdcall get_BstrValue(void)
	{
		return CString(info.wvalue).AllocSysString();
	}
	virtual DWORD __stdcall get_LValueAddr(void)
	{
		return info.lvaddr;
	}
	virtual int __stdcall get_RetIndex(void)
	{
		return rindex;
	}
public:
	BEGIN_INTF(ResultInfo)
		PROPERTYGET(Type,true)
		PROPERTYGET(DataType,true)
		METHOD(GetBinaryValue)
		PROPERTYGET(UintValue,true)
		PROPERTYGET(IntValue,true)
		PROPERTYGET(FloatValue,true)
		PROPERTYGET(CstrValue,true)
		PROPERTYGET(BstrValue,true)
		PROPERTYGET(LValueAddr,true)
		PROPERTYGET(RetIndex,true)
	END_INTF()
public:
	void Init(t_result* p)
	{
		::memcpy(&info,p,sizeof(t_result));
	}
	void SetIndex(int ix)
	{
		rindex=ix;
	}
public:
	ResultInfo():rindex(-1)
	{}
private:
	t_result info;
	int rindex;
};

class RuntraceInfo : public IDispatch
{
public:
	virtual IDispatch* __stdcall get_NewReg(void)
	{
		Register* p=Register::CreateDispatch();
		p->InitCopy(&newReg);
		return p;
	}
	virtual IDispatch* __stdcall get_OldReg(void)
	{
		Register* p=Register::CreateDispatch();
		p->InitCopy(&oldReg);
		return p;
	}
	virtual int __stdcall GetCmd(int ix)
	{
		if(ix<0 || ix>=MAXCMDSIZE)
			return 0;
		return (int)cmd[ix];
	}
	virtual BSTR __stdcall get_Comment(void)
	{
		comment[TEXTLEN]=0;
		return CString(comment).AllocSysString();
	}
	virtual int __stdcall get_RetValue(void)
	{
		return ret;
	}
public:
	BEGIN_INTF(RuntraceInfo)
		PROPERTYGET(NewReg,true)
		PROPERTYGET(OldReg,true)
		METHOD(GetCmd)
		PROPERTYGET(Comment,true)
		PROPERTYGET(RetValue,true)
	END_INTF()
public:
	RuntraceInfo()
	{
		::memset(&newReg,0,sizeof(t_reg));
		::memset(&oldReg,0,sizeof(t_reg));
		::memset(cmd,0,MAXCMDSIZE);
		::memset(comment,0,TEXTLEN);
	}
public:
	t_reg newReg,oldReg;
	char cmd[MAXCMDSIZE];
	char comment[TEXTLEN+1];
	int ret;
};

class DumpInfo : public IDispatch
{
public:
	virtual BSTR __stdcall get_FileName(void)
	{
		return CString(pinfo->filename).AllocSysString();
	}
	virtual DWORD __stdcall get_Base(void)
	{
		return pinfo->base;
	}
	virtual DWORD __stdcall get_Size(void)
	{
		return pinfo->size;
	}
	virtual DWORD __stdcall get_Addr(void)
	{
		return pinfo->addr;
	}
	virtual DWORD __stdcall get_LastAddr(void)
	{
		return pinfo->lastaddr;
	}
	virtual DWORD __stdcall get_Sel0(void)
	{
		return pinfo->sel0;
	}
	virtual DWORD __stdcall get_Sel1(void)
	{
		return pinfo->sel1;
	}
	virtual DWORD __stdcall get_StartSel(void)
	{
		return pinfo->startsel;
	}
	virtual DWORD __stdcall get_RelAddr(void)
	{
		return pinfo->reladdr;
	}
	virtual BSTR __stdcall get_RelName(void)
	{
		char buf[SHORTLEN+1];
		::memcpy(buf,pinfo->relname,SHORTLEN);
		buf[SHORTLEN]=0;
		return CString(buf).AllocSysString();
	}
	virtual int __stdcall get_RuntraceOffset(void)
	{
		return pinfo->runtraceoffset;
	}
public:
	BEGIN_INTF(DumpInfo)
		PROPERTYGET(FileName,true)
		PROPERTYGET(Base,true)
		PROPERTYGET(Size,true)
		PROPERTYGET(Addr,true)
		PROPERTYGET(LastAddr,true)
		PROPERTYGET(Sel0,true)
		PROPERTYGET(Sel1,true)
		PROPERTYGET(StartSel,true)
		PROPERTYGET(RelAddr,true)
		PROPERTYGET(RelName,true)
		PROPERTYGET(RuntraceOffset,true)
	END_INTF()
public:
	void Init(t_dump* p)
	{
		pinfo=p;
	}
	DumpInfo():pinfo(NULL)
	{}
private:
	t_dump* pinfo;
};

class Condition : public IDispatch
{
public:
	virtual DWORD __stdcall get_Condition(void)
	{
		return reinterpret_cast<DWORD>(this);
	}
	virtual IDispatch* __stdcall And(IDispatch* v)
	{
		if(!v)
			return NULL;
		DWORD pCond=DispatchDriver::GetProperty(v,L"Condition",Type2Type<DWORD>());
		if(pCondition && pCond)
		{
			Condition* pv=reinterpret_cast<Condition*>(pCond);

			AndCondition* p=new AndCondition(pCondition,pv->GetCondition());
			Condition* ptr=Condition::CreateDispatch();
			ptr->Init(p);
			p->Release();
			return ptr;
		}
		return NULL;
	}
	virtual IDispatch* __stdcall Or(IDispatch* v)
	{
		if(!v)
			return NULL;
		DWORD pCond=DispatchDriver::GetProperty(v,L"Condition",Type2Type<DWORD>());
		if(pCondition && pCond)
		{
			Condition* pv=reinterpret_cast<Condition*>(pCond);

			OrCondition* p=new OrCondition(pCondition,pv->GetCondition());
			Condition* ptr=Condition::CreateDispatch();
			ptr->Init(p);
			p->Release();
			return ptr;
		}
		return NULL;
	}
	virtual IDispatch* __stdcall Not(void)
	{
		if(pCondition)
		{
			NotCondition* p=new NotCondition(pCondition);
			Condition* ptr=Condition::CreateDispatch();
			ptr->Init(p);
			p->Release();
			return ptr;
		}
		return NULL;
	}
	virtual IDispatch* __stdcall Xor(IDispatch* v)
	{
		if(!v)
			return NULL;
		DWORD pCond=DispatchDriver::GetProperty(v,L"Condition",Type2Type<DWORD>());
		if(pCondition && pCond)
		{
			Condition* pv=reinterpret_cast<Condition*>(pCond);

			XorCondition* p=new XorCondition(pCondition,pv->GetCondition());
			Condition* ptr=Condition::CreateDispatch();
			ptr->Init(p);
			p->Release();
			return ptr;
		}
		return NULL;
	}
public:
	BEGIN_INTF(Condition)
		PROPERTYGET(Condition,true)
		METHOD(And)
		METHOD(Or)
		METHOD(Not)
		METHOD(Xor)
	END_INTF()
public:
	Condition()
	{
		pCondition=NULL;
	}
	~Condition()
	{
		if(pCondition)
			pCondition->Release();
	}
	void Init(ConditionExpression* p)
	{
		pCondition=p;
		if(p)
			p->AddRef();
	}
	ConditionExpression* GetCondition(void)
	{
		return pCondition;
	}
private:
	ConditionExpression* pCondition;
};
//定义DisasmInfo整数字段LAMBDA表达式变量，所有这些变量都使用静态实例，对每个进程的有一个唯一的实例。
#define DefFieldMember(NAME)	\
	virtual IDispatch* __stdcall get_##NAME(void)\
	{\
		static CComPtr<IDispatch> ptr;\
		if(!ptr)\
		{\
			IntegerFields* p=IntegerFields::CreateDispatch();\
			p->Init(FieldValueClass(NAME)::Value);\
			ptr.Attach(p);\
		}\
		IDispatch* pp=NULL;\
		ptr.QueryInterface(&pp);\
		return pp;\
	}

//定义DisasmInfo字符串字段LAMBDA表达式变量，所有这些变量都使用静态实例，对每个进程的有一个唯一的实例。
#define DefStrFieldMember(NAME)	\
	virtual IDispatch* __stdcall get_##NAME(void)\
	{\
		static CComPtr<IDispatch> ptr;\
		if(!ptr)\
		{\
			StringFields* p=StringFields::CreateDispatch();\
			p->Init(FieldValueClass(NAME)::Value);\
			ptr.Attach(p);\
		}\
		IDispatch* pp=NULL;\
		ptr.QueryInterface(&pp);\
		return pp;\
	}

class IntegerFields : public IDispatch
{
public:
	virtual IDispatch* __stdcall EQ(int v)
	{
		if(!fptr)
			return NULL;
		ConditionExpression* p=new CompareCondition<0>(fptr,v);	
		Condition* ptr=Condition::CreateDispatch();
		ptr->Init(p);
		p->Release();
		return ptr;
	}
	virtual IDispatch* __stdcall GE(int v)
	{
		if(!fptr)
			return NULL;
		ConditionExpression* p=new CompareCondition<1>(fptr,v);	
		Condition* ptr=Condition::CreateDispatch();
		ptr->Init(p);
		p->Release();
		return ptr;
	}
	virtual IDispatch* __stdcall LE(int v)
	{
		if(!fptr)
			return NULL;
		ConditionExpression* p=new CompareCondition<-1>(fptr,v);	
		Condition* ptr=Condition::CreateDispatch();
		ptr->Init(p);
		p->Release();
		return ptr;
	}
	virtual IDispatch* __stdcall get_IP(void)
	{
		IntegerFields* p=IntegerFields::CreateDispatch();
		p->Init(FieldValueClass(IP)::Value);
		return p;
	}

DefFieldMember(CmdType)
DefFieldMember(MemType)
DefFieldMember(PrefixNum)
DefFieldMember(Indexed)
DefFieldMember(JumpConst)
DefFieldMember(JumpTable)
DefFieldMember(AddrConst)
DefFieldMember(ImmConst)
DefFieldMember(ZeroImm)
DefFieldMember(FixupOffset)
DefFieldMember(FixupSize)
DefFieldMember(JumpAddr)
DefFieldMember(Error)
DefFieldMember(Warnings)
DefFieldMember(OPType1)
DefFieldMember(OPType2)
DefFieldMember(OPType3)
DefFieldMember(OPSize1)
DefFieldMember(OPSize2)
DefFieldMember(OPSize3)
DefFieldMember(OPSeg1)
DefFieldMember(OPSeg2)
DefFieldMember(OPSeg3)
DefFieldMember(OPConst1)
DefFieldMember(OPConst2)
DefFieldMember(OPConst3)
DefFieldMember(OPEaxScale1)
DefFieldMember(OPEcxScale1)
DefFieldMember(OPEdxScale1)
DefFieldMember(OPEbxScale1)
DefFieldMember(OPEspScale1)
DefFieldMember(OPEbpScale1)
DefFieldMember(OPEsiScale1)
DefFieldMember(OPEdiScale1)
DefFieldMember(OPEaxScale2)
DefFieldMember(OPEcxScale2)
DefFieldMember(OPEdxScale2)
DefFieldMember(OPEbxScale2)
DefFieldMember(OPEspScale2)
DefFieldMember(OPEbpScale2)
DefFieldMember(OPEsiScale2)
DefFieldMember(OPEdiScale2)
DefFieldMember(OPEaxScale3)
DefFieldMember(OPEcxScale3)
DefFieldMember(OPEdxScale3)
DefFieldMember(OPEbxScale3)
DefFieldMember(OPEspScale3)
DefFieldMember(OPEbpScale3)
DefFieldMember(OPEsiScale3)
DefFieldMember(OPEdiScale3)

public:
	BEGIN_INTF(IntegerFields)
		METHOD(EQ)
		METHOD(GE)
		METHOD(LE)
		PROPERTYGET(IP,true)
		PROPERTYGET(CmdType,true)
		PROPERTYGET(MemType,true)
		PROPERTYGET(PrefixNum,true)
		PROPERTYGET(Indexed,true)
		PROPERTYGET(JumpConst,true)
		PROPERTYGET(JumpTable,true)
		PROPERTYGET(AddrConst,true)
		PROPERTYGET(ImmConst,true)
		PROPERTYGET(ZeroImm,true)
		PROPERTYGET(FixupOffset,true)
		PROPERTYGET(FixupSize,true)
		PROPERTYGET(JumpAddr,true)
		PROPERTYGET(Error,true)
		PROPERTYGET(Warnings,true)
		PROPERTYGET(OPType1,true)
		PROPERTYGET(OPType2,true)
		PROPERTYGET(OPType3,true)
		PROPERTYGET(OPSize1,true)
		PROPERTYGET(OPSize2,true)
		PROPERTYGET(OPSize3,true)
		PROPERTYGET(OPSeg1,true)
		PROPERTYGET(OPSeg2,true)
		PROPERTYGET(OPSeg3,true)
		PROPERTYGET(OPConst1,true)
		PROPERTYGET(OPConst2,true)
		PROPERTYGET(OPConst3,true)
		PROPERTYGET(OPEaxScale1,true)
		PROPERTYGET(OPEcxScale1,true)
		PROPERTYGET(OPEdxScale1,true)
		PROPERTYGET(OPEbxScale1,true)
		PROPERTYGET(OPEspScale1,true)
		PROPERTYGET(OPEbpScale1,true)
		PROPERTYGET(OPEsiScale1,true)
		PROPERTYGET(OPEdiScale1,true)
		PROPERTYGET(OPEaxScale2,true)
		PROPERTYGET(OPEcxScale2,true)
		PROPERTYGET(OPEdxScale2,true)
		PROPERTYGET(OPEbxScale2,true)
		PROPERTYGET(OPEspScale2,true)
		PROPERTYGET(OPEbpScale2,true)
		PROPERTYGET(OPEsiScale2,true)
		PROPERTYGET(OPEdiScale2,true)
		PROPERTYGET(OPEaxScale3,true)
		PROPERTYGET(OPEcxScale3,true)
		PROPERTYGET(OPEdxScale3,true)
		PROPERTYGET(OPEbxScale3,true)
		PROPERTYGET(OPEspScale3,true)
		PROPERTYGET(OPEbpScale3,true)
		PROPERTYGET(OPEsiScale3,true)
		PROPERTYGET(OPEdiScale3,true)
	END_INTF()
public:
	IntegerFields()
	{
		fptr=NULL;
	}
	void Init(IntValuePtr _fptr)
	{
		fptr=_fptr;
	}
private:
	IntValuePtr fptr;
};
class StringFields : public IDispatch
{
public:
	virtual IDispatch* __stdcall Like(BSTR str,BOOL ignoreCase)
	{
		if(!fptr)
			return NULL;
		StringLikeCondition* p=new StringLikeCondition(fptr,CString(str),ignoreCase);	
		Condition* ptr=Condition::CreateDispatch();
		ptr->Init(p);
		p->Release();
		return ptr;
	}
	virtual IDispatch* __stdcall Match(BSTR str,BOOL ignoreCase)
	{
		if(!fptr)
			return NULL;
		StringMatchCondition* p=new StringMatchCondition(fptr,CString(str),ignoreCase);
		if(!p->IsValid())
		{
			error=p->Error();
			p->Release();
			return NULL;
		}
		else
		{
			error.Empty();
		}
		Condition* ptr=Condition::CreateDispatch();
		ptr->Init(p);
		p->Release();
		return ptr;
	}
	virtual BSTR __stdcall get_RegExpError(void)
	{
		return error.AllocSysString();
	}

DefStrFieldMember(Dump)
DefStrFieldMember(Disasm)
DefStrFieldMember(Comment)
DefStrFieldMember(OPComment1)
DefStrFieldMember(OPComment2)
DefStrFieldMember(OPComment3)

public:
	BEGIN_INTF(StringFields)
		METHOD(Like)
		METHOD(Match)
		PROPERTYGET(RegExpError,true)
		PROPERTYGET(Dump,true)
		PROPERTYGET(Disasm,true)
		PROPERTYGET(Comment,true)
		PROPERTYGET(OPComment1,true)
		PROPERTYGET(OPComment2,true)
		PROPERTYGET(OPComment3,true)
	END_INTF()
public:
	StringFields()
	{
		fptr=NULL;
	}
	void Init(StrValuePtr _fptr)
	{
		fptr=_fptr;
	}
private:
	StrValuePtr fptr;
	CString error;
};
class Analyser : public IDispatch
{
public:
	virtual BOOL __stdcall AnalyseCode(DWORD addr)
	{		
		t_module* pm=Findmodule(addr);
		if(!pm)
			return FALSE;
		int r=Analysecode(pm);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual IDispatch* __stdcall Asm(DWORD addr,BSTR cmd)
	{		
		t_asmmodel model;
		::memset(&model,0,sizeof(t_asmmodel));
		char error[255] = {0};
		int len = 0;
		CString buffer(cmd);
		if((len = Assemble((LPSTR)(LPCSTR)buffer, addr, &model, 0, 0, error)) < 0)
		{
			AsmInfo* p=AsmInfo::CreateDispatch();
			p->Init(&model);
			p->SetError(error);
			return p;
		}
		else
		{
			AsmInfo* p=AsmInfo::CreateDispatch();
			p->Init(&model);
			DWORD r=Writememory(model.code, addr, len, MM_DELANAL | MM_SILENT);
			if(!r)
				p->SetError("内存不可写！");
			Broadcast(WM_USER_CHALL, 0, 0);			
			return p;
		}
	}
	virtual IDispatch* __stdcall Disasm(DWORD addr)
	{
		char cmd[MAXCMDSIZE]={0};
		DWORD size=Readcommand(addr,cmd);
		if(size==0)
			return NULL;
		t_disasm dasm;
		::memset(&dasm,0,sizeof(t_disasm));
		DWORD dsize=0;
		unsigned char* bytes=Finddecode(addr,&dsize);
		::Disasm((uchar*)cmd,size,addr,bytes,&dasm,DISASM_ALL,Getcputhreadid());
		DisasmInfo* p=DisasmInfo::CreateDispatch();
		p->Init(&dasm);
		return p;
	}
	virtual IDispatch* __stdcall FindDisasm(DWORD addr,int cmdType,bool onlyConstAddr)
	{
		DWORD endaddr;
		int ct=0;
		int size = 0;
		t_memory* tmem = Findmemory(addr);
		char cmd[MAXCMDSIZE]={0};
		do 
		{
			addr = Disassembleforward(0, tmem->base, tmem->size, addr, 1, 1); 
			endaddr = Disassembleforward(0, tmem->base, tmem->size, addr, 1, 1); 
			size = Readcommand(addr, cmd);

			if(addr == tmem->base + tmem->size)
				size = 0;
			if(size)
			{			
				bool find=false;
				t_disasm dasm;
				::memset(&dasm,0,sizeof(t_disasm));
				DWORD dsize=0;
				unsigned char* bytes=Finddecode(addr,&dsize);
				::Disasm((uchar*)cmd,size,addr,bytes,&dasm,DISASM_CODE,NULL);
				if(dasm.cmdtype==cmdType)
				{
					if(onlyConstAddr)
					{
						if(dasm.jmpaddr>0 || dasm.indexed==0 && dasm.adrconst>0)
						{
							find=true;
						}
					}
					else
					{
						find=true;
					}
				}
				if(find)
				{
					DisasmInfo* p=DisasmInfo::CreateDispatch();
					p->Init(&dasm);
					return p;
				}
			}

			if(ct % EXTERN_EVENT_INTERVAL == 0)
			{
				dlg.DoMessageLoopOnce();
			}
			ct++;
		} while(size != 0);
		return NULL;
	}
	virtual IDispatch* __stdcall FindDisasm2(DWORD addr,IDispatch* condition)
	{
		if(!condition)
			return NULL;
		DWORD pCond=DispatchDriver::GetProperty(condition,L"Condition",Type2Type<DWORD>());
		if(!pCond)
			return NULL;
		Condition* pv=reinterpret_cast<Condition*>(pCond);
		ConditionExpression* pCE=pv->GetCondition();
		pCE->AddRef();//引用计数加1

		DWORD endaddr;
		int ct=0;
		int size = 0;
		t_memory* tmem = Findmemory(addr);
		char cmd[MAXCMDSIZE]={0};
		do 
		{
			addr = Disassembleforward(0, tmem->base, tmem->size, addr, 1, 1); 
			endaddr = Disassembleforward(0, tmem->base, tmem->size, addr, 1, 1); 
			size = Readcommand(addr, cmd);

			if(addr == tmem->base + tmem->size)
				size = 0;
			if(size)
			{
				t_disasm dasm;
				::memset(&dasm,0,sizeof(t_disasm));
				DWORD dsize=0;
				unsigned char* bytes=Finddecode(addr,&dsize);
				::Disasm((uchar*)cmd,size,addr,bytes,&dasm,DISASM_CODE,NULL);
				if((*pCE)(&dasm))
				{
					pCE->Release();//引用计数减1

					DisasmInfo* p=DisasmInfo::CreateDispatch();
					p->Init(&dasm);
					return p;
				}
			}

			if(ct % EXTERN_EVENT_INTERVAL == 0)
			{
				dlg.DoMessageLoopOnce();
			}
			ct++;
		} while(size != 0);

		pCE->Release();//引用计数减1
		return NULL;
	}
	virtual BOOL __stdcall Cpu(DWORD dasmaddr,DWORD dumpaddr,DWORD stackaddr)
	{
		Setcpu(0, dasmaddr, dumpaddr, stackaddr, CPU_ASMCENTER | CPU_DUMPHIST | CPU_DUMPFIRST | CPU_REGAUTO | CPU_REDRAW);
		//Redrawdisassembler();
		return TRUE;
	}
	virtual BOOL __stdcall CpuWithThread(DWORD tid,DWORD dumpaddr)
	{
		Setcpu(tid, 0, dumpaddr, 0, CPU_ASMHIST | CPU_ASMCENTER | CPU_DUMPHIST | CPU_DUMPFIRST | CPU_REGAUTO | CPU_REDRAW);
		//Redrawdisassembler();
		return TRUE;
	}
	virtual BOOL __stdcall CpuWithRuntrace(DWORD back)
	{
		Setcpu(0, back, 0, 0, CPU_ASMCENTER | CPU_RUNTRACE | CPU_REDRAW);
		//Redrawdisassembler();
		return TRUE;
	}
	virtual DWORD __stdcall Dump(BSTR title,DWORD addr,DWORD len,DWORD type)
	{
		CString stitle(title);
		DWORD r = (DWORD)Createdumpwindow(
			(LPSTR)(LPCSTR)stitle,
			addr,
			len,
			addr,
			type,
			NULL
			);
		return r;
	}
	virtual BOOL __stdcall UpdateDump(DWORD hwnd,DWORD addr,DWORD len,DWORD type)
	{
		t_dump* pDump = (t_dump *)::GetWindowLong((HWND)hwnd, 0);
		if(!pDump)
			return FALSE;

		pDump->base = addr;
		pDump->addr = addr;
		pDump->size = len;

		Setdumptype(
			pDump,
			type
			);
		Broadcast(WM_USER_CHALL, 0, 0);
		return TRUE;
	}
	virtual BOOL __stdcall Comment(DWORD addr,BSTR cmd)
	{
		CString buffer(cmd);
		if(!buffer.IsEmpty())
		{
			int r=Insertname(addr, NM_COMMENT, (LPSTR)(LPCSTR)buffer);
			if(r==-1)
				return FALSE;
			Broadcast(WM_USER_CHALL, 0, 0);
		}
		else
		{
			Deletenamerange(addr, addr + 1, NM_COMMENT);
			Broadcast(WM_USER_CHALL, 0, 0);
		}
		return TRUE;
	}
	virtual DWORD __stdcall DumpToFile(DWORD addr,DWORD size,BSTR file)
	{
		CString filename(file);
		char* membuf = new char[size];
		DWORD memlen = Readmemory(membuf, addr, size, MM_RESILENT);

		std::ofstream fout;
		fout.open(filename);
		if(!fout.fail())
		{
			fout.write(membuf,memlen);
			fout.close();
		}
		else
		{
			memlen=0;
		}
		delete [] membuf;
		return memlen;
	}
	virtual DWORD __stdcall DumpToFileAppended(DWORD addr,DWORD size,BSTR file)
	{
		CString filename(file);
		char* membuf = new char[size];
		DWORD memlen = Readmemory(membuf, addr, size, MM_RESILENT);

		std::ofstream fout;
		fout.open(filename,std::ios::app);
		if(!fout.fail())
		{
			fout.write(membuf,memlen);
			fout.close();
		}
		else
		{
			memlen=0;
		}
		delete [] membuf;
		return memlen;
	}
	virtual BOOL __stdcall DumpPE(DWORD addr,BSTR file)
	{
		CString filename(file);
		BOOL r = GetPEInfo(addr);
		if (!r)
			return FALSE;
		return SaveDump(filename, addr);		
	}
	virtual DWORD __stdcall Find(DWORD addr,BSTR target)
	{
		CString pattern(target);
		if(pattern.Find('?') >=0 )
		{
			// Wildcard search
			char *membuf = 0;
			t_memory* tmem = Findmemory(addr);
			int memlen = tmem->size - (addr - tmem->base);
			membuf = new char[memlen];

			memlen = Readmemory(membuf, addr, memlen, MM_RESILENT);
			int pos = FindWithWildcards(membuf, pattern, memlen);

			delete [] membuf;

			if(pos > -1)
				return addr + pos;
			else
				return 0;
		}
		else
		{
			char buffer[4096] = {0};
			// Regular search
			char *membuf = 0;
			t_memory* tmem = Findmemory(addr);
			int memlen = tmem->size - (addr - tmem->base);
			membuf = new char[memlen];

			int len = Hex2Bin(pattern, buffer, sizeof(buffer));
			memlen = Readmemory(membuf, addr, memlen, MM_RESILENT);
			char* p = std::search(membuf, membuf+memlen, buffer, buffer+len);

			delete [] membuf;

			if(p < membuf + memlen)
				return addr + p - membuf;
			else
				return 0;
		}
	}
	virtual DWORD __stdcall FindOP(DWORD addr,BSTR target)
	{
        CString pattern(target);
		DWORD endaddr;
		int ct=0;
		int result = -1;
		int ok = 0;
		t_memory* tmem = Findmemory(addr);
		char cmd[MAXCMDSIZE] = {0};
		do 
		{
			addr = Disassembleforward(0, tmem->base, tmem->size, addr, 1, 1); 
			endaddr = Disassembleforward(0, tmem->base, tmem->size, addr, 1, 1); 
			ok = Readcommand(addr, cmd);

			if(addr == tmem->base + tmem->size)
				ok = 0;
			if(ok)
			{
				result = FindWithWildcards(cmd, pattern, endaddr - addr);
			}

			if(ct % EXTERN_EVENT_INTERVAL == 0)
			{
				dlg.DoMessageLoopOnce();
			}
			ct++;
		} while(result != 0 && ok != 0);
		if(ok!=0)
			return addr;
		else
			return 0;
	}
	virtual BOOL __stdcall Fill(DWORD addr,DWORD len,DWORD v)
	{
		BYTE* buffer = new BYTE[len];
		BYTE b = (BYTE)v;
		for(DWORD i = 0; i < len; i++)
			buffer[i] = b;
		Writememory(buffer, addr, len, MM_DELANAL | MM_SILENT);
		delete [] buffer;
		Broadcast(WM_USER_CHALL, 0, 0);
		return TRUE;
	}
	virtual BOOL __stdcall Replace(DWORD addr,BSTR src,BSTR dest,DWORD len)
	{// Replace
		CString srcPattern(src),destPattern(dest);
		char *membuf = 0;
		t_memory* tmem = Findmemory(addr);
		membuf = new char[len];
		int memlen = Readmemory(membuf, addr, len, MM_RESILENT);
		bool replaced = false;
		try
		{
			DWORD i = 0;
			while(i < len)
			{
				replaced = ::Replace(membuf + i, srcPattern, destPattern, destPattern.GetLength()) || replaced;
				if(i % EXTERN_EVENT_INTERVAL == 0)
				{
					dlg.DoMessageLoopOnce();
				}
				i++;
			}
		}
		catch(char* /*str*/)
		{
			delete [] membuf;
			return FALSE;
		}		
		if(replaced)
		{
			Writememory(membuf, addr, len, MM_DELANAL | MM_SILENT);
			Broadcast(WM_USER_CHALL, 0, 0);
		}
		delete [] membuf;
		return TRUE;
	}
	virtual BSTR __stdcall GetLabel(DWORD addr)
	{
		char buf[TEXTLEN]={0};
		if(NM_NONAME==Findlabel(addr,buf))
			return NULL;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall GetSymbolicName(DWORD addr)
	{
		char buf[TEXTLEN]={0};
		int len=Findsymbolicname(addr,buf);
		if(len==0)		
			return NULL;
		buf[len]=0;
		return CString(buf).AllocSysString();
	}
	virtual VARIANT __stdcall DecodeAddress(DWORD addr)
	{		
		char sym[4096] = {0};
		char buf[TEXTLEN] = {0};
		int r=Decodeaddress(addr, 0, ADC_JUMP | ADC_STRING | ADC_ENTRY | ADC_OFFSET | ADC_SYMBOL, sym, 4096, buf);
		sym[r]=0;
		SAFEARRAY* psa=SafeArray::Build(sym,buf);
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=psa;
		return rt;
	}
	virtual IDispatch* __stdcall GetThreadInfo(DWORD id)
	{
		t_thread* pt=Findthread(id);
		if(!pt)
			return NULL;
		Thread* p=Thread::CreateDispatch();
		p->Init(pt);
		return p;
	}
	virtual IDispatch* __stdcall GetMemoryInfo(DWORD addr)
	{		
		t_memory* pm = Findmemory(addr);
		if(!pm)
			return NULL;
		MemoryInfo* p=MemoryInfo::CreateDispatch();
		p->Init(pm);
		return p;
	}
	virtual IDispatch* __stdcall GetModuleInfo(DWORD addr)
	{		
		t_module* mod = Findmodule(addr);
		if(!mod)
			return NULL;
		Module* p=Module::CreateDispatch();
		p->Init(mod);
		return p;
	}
	virtual DWORD __stdcall GetFileOffset(DWORD addr)
	{
		t_module* mod=Findmodule(addr);
		return Findfileoffset(mod,addr);
	}
	virtual DWORD __stdcall GetPrevOPAddr(DWORD addr,DWORD n)
	{
		t_memory* tmem = Findmemory(addr);
		if(!tmem)
			return 0;
	    return Disassembleback(0, tmem->base, tmem->size, addr, n, 1);
	}
	virtual DWORD __stdcall GetNextOPAddr(DWORD addr,DWORD n)
	{
		t_memory* tmem = Findmemory(addr);
		if(!tmem)
			return 0;
	    return Disassembleforward(0, tmem->base, tmem->size, addr, n, 1);
	}
	virtual DWORD __stdcall FindProcBegin(DWORD addr)
	{
		return Findprocbegin(addr);
	}
	virtual DWORD __stdcall FindProcEnd(DWORD addr)
	{
		return Findprocend(addr);
	}
	virtual DWORD __stdcall FindPrevProc(DWORD addr)
	{
		return Findprevproc(addr);
	}
	virtual DWORD __stdcall FindNextProc(DWORD addr)
	{
		return Findnextproc(addr);
	}
	virtual DWORD __stdcall FollowCall(DWORD addr)
	{
		return Followcall(addr);
	}
	virtual BOOL __stdcall SelectDisasm(DWORD addr,DWORD size)
	{
		Setdisasm(addr,size,CPU_ASMCENTER | CPU_ASMFOCUS | CPU_REGAUTO);
		Redrawdisassembler();
		return TRUE;
	}
	virtual BSTR __stdcall DemangleName(BSTR name,int type)
	{
		CString nameStr(name);
		char buf[TEXTLEN]={0};
		int len=Demanglename((LPSTR)(LPCSTR)name,type,buf);
		if(len==0)
			return NULL;
		buf[len]=0;
		return CString(buf).AllocSysString();
	}

	virtual DWORD __stdcall FindImportByName(BSTR name,DWORD addr0,DWORD addr1)
	{
		CString nameStr(name);
		return Findimportbyname((LPSTR)(LPCSTR)nameStr,addr0,addr1);
	}
	virtual DWORD __stdcall FindLabelByName(BSTR name,DWORD addr0,DWORD addr1)
	{
		DWORD addr=0;
		CString nameStr(name);
		if(NM_NONAME==Findlabelbyname((LPSTR)(LPCSTR)nameStr,&addr,addr0,addr1))
			return 0;
		return addr;
	}
	virtual BSTR __stdcall FindName(DWORD addr,int type)
	{
		char buf[TEXTLEN]={0};
		int len=Findname(addr,type,buf);
		if(len==0)
			return NULL;
		buf[len]=0;
		return CString(buf).AllocSysString();
	}
	virtual VARIANT __stdcall FindNextName(void)
	{
		char buf[TEXTLEN]={0};
		DWORD addr=Findnextname(buf);
		SAFEARRAY* psa=SafeArray::Build(buf,addr);
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_ARRAY|VT_VARIANT;
		rt.parray=psa;
		return rt;
	}
	virtual IDispatch* __stdcall get_DisasmPane(void)
	{
		t_dump* pt=(t_dump*)Plugingetvalue(VAL_CPUDASM);
		DumpInfo* p=DumpInfo::CreateDispatch();
		p->Init(pt);
		return p;
	}
	virtual IDispatch* __stdcall get_DumpPane(void)
	{
		t_dump* pt=(t_dump*)Plugingetvalue(VAL_CPUDDUMP);
		DumpInfo* p=DumpInfo::CreateDispatch();
		p->Init(pt);
		return p;
	}
	virtual IDispatch* __stdcall get_StackPane(void)
	{
		t_dump* pt=(t_dump*)Plugingetvalue(VAL_CPUDSTACK);
		DumpInfo* p=DumpInfo::CreateDispatch();
		p->Init(pt);
		return p;
	}
public:
	BEGIN_INTF(Analyser)
		METHOD(AnalyseCode)
		METHOD(Asm)
		METHOD(Disasm)
		METHOD(FindDisasm)
		METHOD(FindDisasm2)
		METHOD(Cpu)
		METHOD(CpuWithThread)
		METHOD(CpuWithRuntrace)
		METHOD(Dump)
		METHOD(UpdateDump)
		METHOD(Comment)
		METHOD(DumpToFile)
		METHOD(DumpToFileAppended)
		METHOD(DumpPE)
		METHOD(Find)
		METHOD(FindOP)
		METHOD(Fill)
		METHOD(Replace)
		METHOD(GetLabel)
		METHOD(GetSymbolicName)
		METHOD(DecodeAddress)
		METHOD(GetThreadInfo)
		METHOD(GetMemoryInfo)
		METHOD(GetModuleInfo)
		METHOD(GetFileOffset)
		METHOD(GetPrevOPAddr)
		METHOD(GetNextOPAddr)
		METHOD(FindProcBegin)
		METHOD(FindProcEnd)
		METHOD(FindPrevProc)
		METHOD(FindNextProc)
		METHOD(FollowCall)
		METHOD(SelectDisasm)
		METHOD(DemangleName)
		METHOD(FindImportByName)
		METHOD(FindLabelByName)
		METHOD(FindName)
		METHOD(FindNextName)
		PROPERTYGET(DisasmPane,true)
		PROPERTYGET(DumpPane,true)
		PROPERTYGET(StackPane,true)
	END_INTF()
};

class BreakPoint : public IDispatch
{
public:
	virtual BOOL __stdcall Clear(DWORD addr)
	{
		Deletebreakpoints(addr,addr+1, 0);
		Broadcast(WM_USER_CHALL, 0, 0);
		return TRUE;
	}
	virtual BOOL __stdcall TempOn(DWORD addr)
	{
		Tempbreakpoint(addr, TY_ONESHOT|TY_KEEPCOND);
		Broadcast(WM_USER_CHALL, 0, 0);
		return TRUE;
	}
	virtual BOOL __stdcall On(DWORD addr)
	{
		int r=Setbreakpoint(addr, TY_ACTIVE, 0);
		Broadcast(WM_USER_CHALL, 0, 0);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall OnCond(DWORD addr,BSTR cond,DWORD passcount)
	{
		CString buffer(cond);
		int r=Setbreakpointext(addr, TY_ACTIVE, 0, passcount);
		if(r==-1)
			return FALSE;
		r=Insertname(addr, NM_BREAK, (LPSTR)(LPCSTR)buffer);
		if(r==-1)
			return FALSE;
		Deletenamerange(addr, addr + 1, NM_BREAKEXPL);//删除表达式说明
		Deletenamerange(addr, addr + 1, NM_BREAKEXPR);//删除表达式
		Broadcast(WM_USER_CHALL,0,0);
		return TRUE;
	}
	virtual BOOL __stdcall OnLog(DWORD addr,BSTR explanation,BSTR expression,DWORD passcount,BOOL noBreak)
	{
		CString expl(explanation),exp(expression);
		int r=Setbreakpointext(addr, TY_ACTIVE, 0, passcount);
		if(r==-1)
			return FALSE;
		Deletenamerange(addr, addr + 1, NM_BREAK);//删除条件
		if(expl.IsEmpty())
		{
			Deletenamerange(addr, addr + 1, NM_BREAKEXPL);//删除表达式说明
		}
		else
		{
			r=Insertname(addr, NM_BREAKEXPL, (LPSTR)(LPCSTR)expl);
			if(r==-1)
				return FALSE;
		}
		if(exp.IsEmpty())
		{
			Deletenamerange(addr,addr + 1, NM_BREAKEXPR);//删除表达式
			return FALSE;//不能缺少LOG表达式
		}
		else
		{
			int type=COND_BRKALWAYS;
			if(noBreak)
				type=COND_NOBREAK;
			CString buffer;
			buffer.Format("%c%s",type | COND_LOGALWAYS | COND_ARGALWAYS | COND_FILLING,(LPCSTR)exp);
			r=Insertname(addr, NM_BREAKEXPR, (LPSTR)(LPCSTR)buffer);
			if(r==-1)
				return FALSE;
		}
		Broadcast(WM_USER_CHALL,0,0);
		return TRUE;
	}
	virtual BOOL __stdcall OnCondLog(DWORD addr,BSTR cond,BSTR explanation,BSTR expression,DWORD passcount,BOOL noBreak)
	{
		CString expl(explanation),exp(expression),condition(cond);
		int r=Setbreakpointext(addr, TY_ACTIVE, 0,passcount);
		if(r==-1)
			return FALSE;		
		if(expl.IsEmpty())
		{
			Deletenamerange(addr, addr + 1, NM_BREAKEXPL);//删除表达式说明
		}
		else
		{
			r=Insertname(addr, NM_BREAKEXPL, (LPSTR)(LPCSTR)expl);
			if(r==-1)
				return FALSE;
		}
		if(condition.IsEmpty())
		{
			Deletenamerange(addr, addr + 1, NM_BREAK);//删除条件
			return FALSE;//不能缺少条件
		}
		else
		{
			r=Insertname(addr, NM_BREAK, (LPSTR)(LPCSTR)condition);
			if(r==-1)
				return FALSE;
		}
		if(exp.IsEmpty())
		{
			Deletenamerange(addr,addr + 1, NM_BREAKEXPR);//删除表达式
			return FALSE;//不能缺少LOG表达式
		}
		else
		{
			int type=0;
			if(noBreak)
				type=COND_NOBREAK;
			CString buffer;
			buffer.Format("%c%s",type | COND_LOGTRUE | COND_ARGTRUE | COND_FILLING, (LPCSTR)exp);
			r=Insertname(addr, NM_BREAKEXPR, (LPSTR)(LPCSTR)buffer);
			if(r==-1)
				return FALSE;
		}
		Broadcast(WM_USER_CHALL,0,0);
		return TRUE;
	}
	virtual BOOL __stdcall HardwareClear(DWORD addr)
	{
		Deletehardwarebreakbyaddr(addr);
		return TRUE;
	}
	virtual BOOL __stdcall HardwareOnCode(DWORD addr,DWORD size)
	{
		int r=Sethardwarebreakpoint(addr, size, HB_CODE);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall HardwareOnAccess(DWORD addr,DWORD size)
	{
		int r=Sethardwarebreakpoint(addr, size, HB_ACCESS);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall HardwareOnWrite(DWORD addr,DWORD size)
	{
		int r=Sethardwarebreakpoint(addr, size, HB_WRITE);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall DeleteHardware(int index)
	{
		if(index<0 || index>3)
			return FALSE;
		int r=Deletehardwarebreakpoint(index);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall MemoryClear(void)
	{
		int r=Setmembreakpoint(0, 0, 0);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall OnMemoryRead(DWORD addr,DWORD size)
	{
		int r=Setmembreakpoint(MEMBP_READ, addr, size);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall OnMemoryWrite(DWORD addr,DWORD size)
	{
		int r=Setmembreakpoint(MEMBP_WRITE, addr, size);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall OnMemoryAccess(DWORD addr,DWORD size)
	{
		int r=Setmembreakpoint(MEMBP_READ | MEMBP_WRITE, addr, size);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BSTR __stdcall GetType(DWORD addr)
	{
		DWORD r=Getbreakpointtypecount(addr,NULL);
		switch(r)
		{
		case TY_SET:
			return CString("int3").AllocSysString();
		case TY_ACTIVE:
			return CString("active").AllocSysString();
		case TY_DISABLED:
			return CString("disabled").AllocSysString();
		case TY_ONESHOT:
			return CString("oneshot").AllocSysString();
		case TY_INVALID:
			return CString("invalid").AllocSysString();
		default:
			return NULL;
		}
	}
	virtual DWORD __stdcall GetPassCount(DWORD addr)
	{
		DWORD ct=0;
		DWORD r=Getbreakpointtypecount(addr,&ct);
		if(r==TY_INVALID)
			return 0;
		return ct;
	}
public:
	BEGIN_INTF(BreakPoint)
		METHOD(Clear)
		METHOD(TempOn)
		METHOD(On)
		METHOD(OnCond)
		METHOD(OnLog)
		METHOD(OnCondLog)
		METHOD(HardwareClear)
		METHOD(HardwareOnCode)
		METHOD(HardwareOnAccess)
		METHOD(HardwareOnWrite)
		METHOD(DeleteHardware)
		METHOD(MemoryClear)
		METHOD(OnMemoryRead)
		METHOD(OnMemoryWrite)
		METHOD(OnMemoryAccess)
		METHOD(GetType)
		METHOD(GetPassCount)
	END_INTF()
};

class Execution : public IDispatch
{
public:
	virtual BOOL __stdcall Run(void)
	{		
		int r=Go(Getcputhreadid(), 0, STEP_RUN, 0, 1);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall ToReturn(void)
	{
		Sendshortcut(PM_MAIN, 0, WM_KEYDOWN, 1, 0, VK_F9); 
		return TRUE;
	}
	virtual BOOL __stdcall ToUserCode(void)
	{
		Sendshortcut(PM_MAIN, 0, WM_SYSKEYDOWN, 0, 0, VK_F9);
		return TRUE;
	}
	virtual BOOL __stdcall StepInto(void)
	{
		int r=Go(Getcputhreadid(), 0, STEP_IN, 0, 1);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall StepOver(void)
	{
		int r=Go(Getcputhreadid(), 0, STEP_OVER, 0, 1);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall AnimateInto(void)
	{
		Animate(ANIMATE_IN);
		int r=Go(Getcputhreadid(), 0, STEP_IN, 0, 1);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall AnimateOver(void)
	{
		Animate(ANIMATE_OVER);
		int r=Go(Getcputhreadid(), 0, STEP_OVER, 0, 1);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall ExceptionStepInto(void)
	{
		Sendshortcut(PM_MAIN, 0, WM_KEYDOWN, 0, 1, VK_F7);
		return TRUE;
	}
	virtual BOOL __stdcall ExceptionContinue(void)
	{
		Sendshortcut(PM_MAIN, 0, WM_KEYDOWN, 0, 1, VK_F9);
		return TRUE;
	}
	virtual BOOL __stdcall OpenExeFile(BSTR file)
	{
		CString exe(file);
		int r=OpenEXEfile((LPSTR)(LPCSTR)exe,0);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall AttachToActiveProcess(int pid)
	{
		int r=Attachtoactiveprocess(pid);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall SuspendProcess(int processevents)
	{
		int r=Suspendprocess(processevents);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual DWORD __stdcall RunSingleThread(DWORD tid)
	{
		return Runsinglethread(tid);
	}
	virtual void __stdcall RestoreAllThreads(void)
	{
		Restoreallthreads();
	}
public:
	BEGIN_INTF(Execution)
		METHOD(Run)
		METHOD(ToReturn)
		METHOD(ToUserCode)
		METHOD(StepInto)
		METHOD(StepOver)
		METHOD(AnimateInto)
		METHOD(AnimateOver)
		METHOD(ExceptionStepInto)
		METHOD(ExceptionContinue)
		METHOD(OpenExeFile)
		METHOD(AttachToActiveProcess)
		METHOD(SuspendProcess)
		METHOD(RunSingleThread)
		METHOD(RestoreAllThreads)
	END_INTF()
};

class Tracer : public IDispatch
{
public:
	virtual BOOL __stdcall SetCondition(BSTR cond,int onsuspicious,DWORD in0,DWORD in1,DWORD out0,DWORD out1,DWORD ct)
	{
		if(Runtracesize() == 0) 
		{
			DWORD threadid = Getcputhreadid();
			if(threadid == 0)
				threadid = Plugingetvalue(VAL_MAINTHREADID);
			t_thread* pthr = Findthread(threadid);
			if(pthr != NULL)
				Startruntrace(&(pthr->reg));
		}
		CString buffer(cond);
		Settracecondition((LPSTR)(LPCSTR)buffer, onsuspicious, in0, in1, out0, out1);
		if(ct>0)
			Settracecount(ct);
		return TRUE;
	}
	virtual BOOL __stdcall Into(void)
	{
		Sendshortcut(PM_MAIN, 0, WM_KEYDOWN, 1, 0, VK_F11);
		return TRUE;
	}
	virtual BOOL __stdcall Over(void)
	{
		Sendshortcut(PM_MAIN, 0, WM_KEYDOWN, 1, 0, VK_F12);
		return TRUE;
	}
	virtual int __stdcall FindPrev(DWORD addr,int startback)
	{
		return Findprevruntraceip(addr,startback);
	}
	virtual int __stdcall FindNext(DWORD addr,int startback)
	{
		return Findnextruntraceip(addr,startback);
	}
	virtual IDispatch* __stdcall GetRegisterInfo(DWORD nback)
	{
		RuntraceInfo* p=RuntraceInfo::CreateDispatch();
		int r=Getruntraceregisters(nback,&(p->newReg),&(p->oldReg),p->cmd,p->comment);
		p->ret=r;
		return p;
	}
	virtual DWORD __stdcall GetProfile(DWORD addr)
	{
		DWORD ct=0;
		int r=Getruntraceprofile(addr,1,&ct);
		if(r==-1)
			return 0;
		return ct;
	}
	virtual int __stdcall get_Size(void)
	{
		return Runtracesize();
	}
	virtual BOOL __stdcall Close(void)
	{
		Deleteruntrace();
		return TRUE;
	}
	virtual BOOL __stdcall Hit(DWORD addr0,DWORD addr1,int mode)
	{
		int r=Modifyhittrace(addr0,addr1,mode);
		if(r==-1)
			return FALSE;
		return TRUE;
	}
	virtual BOOL __stdcall IsHit(DWORD addr)
	{
		unsigned char* p=Findhittrace(addr,NULL,NULL);
		if(!p)
			return FALSE;
		if((p[0] & TR_HIT) == TR_HIT)
			return TRUE;
		return FALSE;
	}
	virtual int __stdcall InsertWatch(int index,BSTR exp)
	{
		CString expStr(exp);
		return Insertwatch(index,(LPSTR)(LPCSTR)expStr);
	}
	virtual int __stdcall DeleteWatch(int index)
	{
		return Deletewatch(index);
	}
	virtual BSTR __stdcall GetWatch(int index)
	{
		char buf[TEXTLEN];
		int len=Getwatch(index,buf);
		if(len==0)
			return NULL;
		buf[len]=0;
		return CString(buf).AllocSysString();
	}
	virtual IDispatch* __stdcall CalcExpression(BSTR expression,int a,int b,DWORD threadid)
	{
		CString expStr(expression);
		t_result res;
		int ix=Expression(&res,(LPSTR)(LPCSTR)expStr,a,b,NULL,0,0,threadid);
		ResultInfo* p=ResultInfo::CreateDispatch();
		p->Init(&res);
		p->SetIndex(ix);
		return p;
	}
	virtual DWORD __stdcall ShowWatchWindow(void)
	{
		return (DWORD)Createwatchwindow();
	}
	virtual DWORD __stdcall ShowRuntraceWindow(void)
	{
		return (DWORD)Creatertracewindow();
	}
	virtual BOOL __stdcall ScrollRuntraceWindow(int back)
	{
		Scrollruntracewindow(back);
		return TRUE;
	}
	virtual DWORD __stdcall ShowProfileWindow(DWORD base,DWORD size)
	{
		return (DWORD)Createprofilewindow(base,size);
	}
public:
	BEGIN_INTF(Tracer)
		METHOD(SetCondition)
		METHOD(Into)
		METHOD(Over)
		METHOD(FindPrev)
		METHOD(FindNext)
		METHOD(GetRegisterInfo)
		METHOD(GetProfile)
		PROPERTYGET(Size,true)
		METHOD(Close)
		METHOD(Hit)
		METHOD(IsHit)
		METHOD(InsertWatch)
		METHOD(DeleteWatch)
		METHOD(GetWatch)
		METHOD(CalcExpression)
		METHOD(ShowWatchWindow)
		METHOD(ShowRuntraceWindow)
		METHOD(ScrollRuntraceWindow)
		METHOD(ShowProfileWindow)
	END_INTF()
};

class Memory : public IDispatch
{
public:
	virtual DWORD __stdcall OpenProcess(DWORD id)
	{
		return (DWORD)::OpenProcess(PROCESS_ALL_ACCESS, FALSE,id);
	}
	virtual BOOL __stdcall CloseHandle(DWORD handle)
	{
		return ::CloseHandle((HANDLE)handle);
	}
	virtual DWORD __stdcall VirtualAllocEx(DWORD hProcess,DWORD size)
	{
		return (DWORD)::VirtualAllocEx((HANDLE)hProcess,NULL,size,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
	}
	virtual BOOL __stdcall VirtualFreeEx(DWORD hProcess,DWORD addr,DWORD size)
	{
		return ::VirtualFreeEx((HANDLE)hProcess,(LPVOID)addr,size,MEM_RELEASE);
	}
	virtual VARIANT __stdcall VirtualQueryEx(DWORD hProcess,DWORD addr)
	{
		MEMORY_BASIC_INFORMATION mbi;
		::ZeroMemory(&mbi,sizeof(mbi));
		BOOL r=::VirtualQueryEx((HANDLE)hProcess,(LPVOID)addr,&mbi,sizeof(mbi));
		SAFEARRAY* psa=SafeArray::Build(mbi.BaseAddress,mbi.AllocationBase,mbi.AllocationProtect,(DWORD)mbi.RegionSize,mbi.State,mbi.Protect,mbi.Type);
		VARIANT rt;
		::VariantInit(&rt);
		rt.vt=VT_VARIANT|VT_ARRAY;
		rt.parray=psa;
		return rt;
	}
	virtual DWORD __stdcall VirtualProtectEx(DWORD hProcess,DWORD base,DWORD flag)
	{
		DWORD oldFlag=0;
		MEMORY_BASIC_INFORMATION mbi;
		::ZeroMemory(&mbi,sizeof(mbi));
		BOOL r=::VirtualQueryEx((HANDLE)hProcess,(LPVOID)base,&mbi,sizeof(mbi));
		r=::VirtualProtectEx((HANDLE)hProcess,mbi.BaseAddress,mbi.RegionSize,flag,&oldFlag);
		if(!r)
			return 0;
		return oldFlag;
	}
	virtual BOOL __stdcall WriteProcessBstr(DWORD hProcess,unsigned int base,BSTR val)
	{
		UINT size=SysStringLen(val)*2+2;
		UINT v=(UINT)val;
		BOOL r=WriteProcessMemory((HANDLE)hProcess,(LPVOID)(base-4),(LPVOID)(v-4),size+4,NULL);
		FlushInstructionCache((HANDLE)hProcess,(LPVOID)base,size);
		return r;
	}
	virtual BOOL __stdcall WriteProcessCstr(unsigned int hProcess,DWORD base,BSTR val)
	{
		CString temp(val);
		UINT size=temp.GetLength()+1;
		BOOL r=WriteProcessMemory((HANDLE)hProcess,(LPVOID)base,(LPVOID)(LPCSTR)temp,size,NULL);
		FlushInstructionCache((HANDLE)hProcess,(LPVOID)base,size);
		return r;
	}
	virtual BOOL __stdcall WriteProcessDword(DWORD hProcess,DWORD base,DWORD val)
	{
		UINT size=4;
		BOOL r=WriteProcessMemory((HANDLE)hProcess,(LPVOID)base,(LPVOID)&val,size,NULL);
		FlushInstructionCache((HANDLE)hProcess,(LPVOID)base,size);
		return r;
	}
	virtual BOOL __stdcall WriteProcessWord(DWORD hProcess,DWORD base,unsigned short val)
	{
		UINT size=2;
		BOOL r=WriteProcessMemory((HANDLE)hProcess,(LPVOID)base,(LPVOID)&val,size,NULL);
		FlushInstructionCache((HANDLE)hProcess,(LPVOID)base,size);
		return r;
	}
	virtual BOOL __stdcall WriteProcessByte(DWORD hProcess,DWORD base,unsigned char val)
	{
		UINT size=1;
		BOOL r=WriteProcessMemory((HANDLE)hProcess,(LPVOID)base,(LPVOID)&val,size,NULL);
		FlushInstructionCache((HANDLE)hProcess,(LPVOID)base,size);
		return r;
	}
	virtual BSTR __stdcall ReadProcessBstr(DWORD hProcess,DWORD base)
	{
		UINT bstrSize=ReadProcessDword(hProcess,base-4);
		char* buf=new char[bstrSize+2+4];
		char* v=buf+4;
		UINT size=bstrSize+2;
		int r=::ReadProcessMemory((HANDLE)hProcess,(LPCVOID)(base-4),(LPVOID)(v-4),size+4,NULL);
		v[bstrSize]=0;
		v[bstrSize+1]=0;
		delete[] buf;
		return CComBSTR((BSTR)v).Detach();
	}
	virtual BSTR __stdcall ReadProcessCstr(DWORD hProcess,DWORD base)
	{
		UINT strSize=1024;
		char* buf=new char[strSize+1];
		char* v=buf;
		UINT size=strSize+1;
		CString temp="";		
		for(int pos=0;;pos+=static_cast<int>(strSize))
		{
			int r=::ReadProcessMemory((HANDLE)hProcess,(LPCVOID)(base+pos),(LPVOID)v,size,NULL);
			int i=0;
			for(;i<=(int)strSize;i++)
			{
				if(v[i]==0)
				{
					temp+=v;
					break;
				}
			}
			if(i>static_cast<int>(strSize))
			{
				v[strSize]=0;
				temp+=v;
			}
			else
				break;
		}
		delete[] buf;
		return temp.AllocSysString();
	}
	virtual UINT __stdcall ReadProcessDword(DWORD hProcess,DWORD base)
	{
		UINT val;
		UINT size=4;
		int r=::ReadProcessMemory((HANDLE)hProcess,(LPCVOID)base,(LPVOID)&val,size,NULL);
		return val;
	}
	virtual unsigned short __stdcall ReadProcessWord(DWORD hProcess,DWORD base)
	{
		unsigned short val;
		UINT size=2;
		int r=::ReadProcessMemory((HANDLE)hProcess,(LPCVOID)base,(LPVOID)&val,size,NULL);
		return val;
	}
	virtual unsigned char __stdcall ReadProcessByte(DWORD hProcess,DWORD base)
	{
		unsigned char val;
		UINT size=1;
		int r=::ReadProcessMemory((HANDLE)hProcess,(LPCVOID)base,(LPVOID)&val,size,NULL);
		return val;
	}
	virtual DWORD __stdcall WriteProcess(DWORD hProcess,DWORD addr,DWORD buf,DWORD size)
	{
		DWORD sizeWritten=0;
		WriteProcessMemory((HANDLE)hProcess,(LPVOID)addr,(LPCVOID)buf,size,&sizeWritten);
		return sizeWritten;
	}
	virtual DWORD __stdcall ReadProcess(DWORD hProcess,DWORD addr,DWORD buf,DWORD size)
	{
		DWORD sizeRead=0;
		ReadProcessMemory((HANDLE)hProcess,(LPCVOID)addr,(LPVOID)buf,size,&sizeRead);
		return sizeRead;
	}
	virtual BOOL __stdcall ParseLayout(BSTR layoutScript)
	{
		BOOL ret=FALSE;
		DataScript::ScriptDataFile file;		
		if(file.loadFromString(std::string((LPCSTR)CString(layoutScript))))
		{
			m_LayoutDatas.clear();
			m_LayoutDatas=file.getScriptDatas();
			ret=TRUE;
		}
		return ret;
	}
	virtual IDispatch* __stdcall CreateLayout(BSTR layoutName)
	{
		IDispatch* p=NULL;
		std::string name((LPCTSTR)CString(layoutName));
		DataScript::ScriptDatas::iterator it=m_LayoutDatas.find(name);
		if(it!=m_LayoutDatas.end())
		{
			MemoryLayoutObj* pObj=MemoryLayoutObj::CreateDispatch();
			if(NULL!=pObj)
			{
				pObj->AttachLayout(name,m_LayoutDatas);
				p=pObj;
			}
		}
		return p;
	}
public:
	BEGIN_INTF(Memory)
		METHOD(OpenProcess)
		METHOD(CloseHandle)
		METHOD(VirtualAllocEx)
		METHOD(VirtualFreeEx)
		METHOD(VirtualQueryEx)
		METHOD(VirtualProtectEx)
		METHOD(WriteProcessBstr)
		METHOD(WriteProcessCstr)
		METHOD(WriteProcessDword)
		METHOD(WriteProcessWord)
		METHOD(WriteProcessByte)
		METHOD(ReadProcessBstr)
		METHOD(ReadProcessCstr)
		METHOD(ReadProcessDword)
		METHOD(ReadProcessWord)
		METHOD(ReadProcessByte)
		METHOD(ReadProcess)
		METHOD(WriteProcess)
		METHOD(ParseLayout)
		METHOD(CreateLayout)
	END_INTF()
private:
	DataScript::ScriptDatas m_LayoutDatas;
};


class OllyApi : public IDispatch
{
public:
	virtual UINT __stdcall get_Hwnd(void)
	{
		return (UINT)mainHwnd;
	}
	virtual void __stdcall EnableDebug(void)
	{
		canRun=true;
	}
	virtual void __stdcall DisableDebug(void)
	{
		canRun=false;
	}
	virtual void __stdcall SendShortcut(int where,DWORD addr,int msg,int ctrl,int shift,int vkcode)
	{
		Sendshortcut(where,addr,msg,ctrl,shift,vkcode);
	}
	virtual void __stdcall Log(long addr,int highlight,BSTR mess)
	{
        Addtolist(addr,highlight,"%s",CString(mess));		
	}
	virtual DWORD __stdcall AskAddr(BSTR title,DWORD data)
	{
		DWORD d=data;
		CString stitle(title);
		if(Getlong((LPSTR)(LPCSTR)stitle,&d,4,0,0)==-1)
			return -1;
		return d;
	}
	virtual BSTR __stdcall AskStr(BSTR title,BSTR text)
	{
		char buf[TEXTLEN+1];
		CString stitle(title),stext(text);
		::strncpy(buf,stext,TEXTLEN);
		buf[TEXTLEN]=0;
		int len=Gettext((LPSTR)(LPCSTR)stitle,buf,0,254,FIXEDFONT);
		if(len==-1)
			return NULL;
		buf[len]=0;
		return CString(buf).AllocSysString();
	}
	virtual BSTR __stdcall AskFile(BOOL isOpen,BSTR title,BSTR name,BSTR defext)
	{
		char buf[MAX_PATH+1];
		CString stitle(title),sname(name),sdefext(defext);
		::strncpy(buf,sname,MAX_PATH);
		buf[MAX_PATH]=0;
		int mode=0;
		if(!isOpen)
			mode=0x80;
		if(!Browsefilename((LPSTR)(LPCSTR)stitle,buf,(LPSTR)(LPCSTR)sdefext,mode))
			return NULL;
		return CString(buf).AllocSysString();
	}
	virtual int __stdcall get_Status(void)
	{
		return Getstatus();
	}
	virtual int __stdcall get_HBPEnabled(void)
	{
		return Plugingetvalue(VAL_HARDBP);
	}
	virtual int __stdcall get_ProcessId(void)
	{
		return Plugingetvalue(VAL_PROCESSID);
	}
	virtual int __stdcall get_ProcessHandle(void)
	{
		return Plugingetvalue(VAL_HPROCESS);
	}
	virtual int __stdcall get_MainThreadId(void)
	{
		return Plugingetvalue(VAL_MAINTHREADID);
	}
	virtual int __stdcall get_MainThreadHandle(void)
	{
		return Plugingetvalue(VAL_HMAINTHREAD);
	}
	virtual DWORD __stdcall get_CpuThreadId(void)
	{
		return Getcputhreadid();
	}
	virtual DWORD __stdcall get_CpuThreadHandle(void)
	{
		DWORD id=Getcputhreadid();
		t_thread* pTT=Findthread(id);
		if(pTT)
			return (DWORD)pTT->thread;
		return 0;
	}
	virtual IDispatch* __stdcall get_SelModule(void)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_MODULES);
		return GetModule(pt->data.selected);
	}
	virtual int __stdcall get_ModuleNumber(void)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_MODULES);
		return pt->data.n;
	}
	virtual IDispatch* __stdcall GetModule(int ix)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_MODULES);
		if(ix<0 || ix>=pt->data.n)
			return NULL;
		t_module* pp=(t_module*)((char*)(pt->data.data) + ix * pt->data.itemsize);
		Module* p=Module::CreateDispatch();
		p->Init(pp);
		return p;
	}
	virtual IDispatch* __stdcall get_SelMemory(void)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_MEMORY);
		return GetMemory(pt->data.selected);
	}
	virtual int __stdcall get_MemoryNumber(void)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_MEMORY);
		return pt->data.n;
	}
	virtual IDispatch* __stdcall GetMemory(int ix)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_MEMORY);
		if(ix<0 || ix>=pt->data.n)
			return NULL;
		t_memory* pp=(t_memory*)((char*)(pt->data.data) + ix * pt->data.itemsize);
		MemoryInfo* p=MemoryInfo::CreateDispatch();
		p->Init(pp);
		return p;
	}
	virtual IDispatch* __stdcall get_SelThread(void)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_THREADS);
		return GetThread(pt->data.selected);
	}
	virtual int __stdcall get_ThreadNumber(void)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_THREADS);
		return pt->data.n;
	}
	virtual IDispatch* __stdcall GetThread(int ix)
	{
		t_table* pt=(t_table*)Plugingetvalue(VAL_THREADS);
		if(ix<0 || ix>=pt->data.n)
			return NULL;
		t_thread* pp=(t_thread*)((char*)(pt->data.data) + ix * pt->data.itemsize);
		Thread* p=Thread::CreateDispatch();
		p->Init(pp);
		return p;
	}
	virtual DWORD __stdcall ShowLogWindow(void)
	{
		return (DWORD)Createlistwindow();
	}
	virtual DWORD __stdcall ShowWinWindow(void)
	{
		return (DWORD)Createwinwindow();
	}
	virtual DWORD __stdcall ShowThreadWindow(void)
	{
		return (DWORD)Createthreadwindow();
	}
	virtual DWORD __stdcall ShowPatchWindow(void)
	{
		return (DWORD)Createpatchwindow();
	}
	virtual IDispatch* __stdcall get_Analyser(void)
	{
		if(!pAnalyser)
			return NULL;
		IDispatch* p=NULL;
		pAnalyser.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_BreakPoint(void)
	{
		if(!pBreakPoint)
			return NULL;
		IDispatch* p=NULL;
		pBreakPoint.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_Execution(void)
	{
		if(!pExecution)
			return NULL;
		IDispatch* p=NULL;
		pExecution.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_Tracer(void)
	{
		if(!pTracer)
			return NULL;
		IDispatch* p=NULL;
		pTracer.QueryInterface(&p);
		return p;
	}
	virtual IDispatch* __stdcall get_Memory(void)
	{
		if(!pMemory)
			return NULL;
		IDispatch* p=NULL;
		pMemory.QueryInterface(&p);
		return p;
	}	
	virtual IDispatch* __stdcall get_IntegerFields(void)
	{
		if(!pIntegers)
			return NULL;
		IDispatch* p=NULL;
		pIntegers.QueryInterface(&p);
		return p;		
	}
	virtual IDispatch* __stdcall get_StringFields(void)
	{
		if(!pStrings)
			return NULL;
		IDispatch* p=NULL;
		pStrings.QueryInterface(&p);
		return p;		
	}
public:
	BEGIN_INTF(OllyApi)
		PROPERTYGET(Hwnd,true)
		METHOD(EnableDebug)
		METHOD(DisableDebug)
		METHOD(SendShortcut)
		METHOD(Log)
		METHOD(AskAddr)
		METHOD(AskStr)
		METHOD(AskFile)
		PROPERTYGET(Status,true)
		PROPERTYGET(HBPEnabled,true)
		PROPERTYGET(ProcessId,true)
		PROPERTYGET(ProcessHandle,true)
		PROPERTYGET(MainThreadId,true)
		PROPERTYGET(MainThreadHandle,true)
		PROPERTYGET(CpuThreadId,true)
		PROPERTYGET(CpuThreadHandle,true)
		PROPERTYGET(SelModule,true)
		PROPERTYGET(ModuleNumber,true)
		METHOD(GetModule)
		PROPERTYGET(SelMemory,true)
		PROPERTYGET(MemoryNumber,true)
		METHOD(GetMemory)
		PROPERTYGET(SelThread,true)
		PROPERTYGET(ThreadNumber,true)
		METHOD(GetThread)
		METHOD(ShowLogWindow)
		METHOD(ShowWinWindow)
		METHOD(ShowThreadWindow)
		METHOD(ShowPatchWindow)
		PROPERTYGET(Analyser,true)
		PROPERTYGET(BreakPoint,true)
		PROPERTYGET(Execution,true)
		PROPERTYGET(Tracer,true)
		PROPERTYGET(Memory,true)
		PROPERTYGET(IntegerFields,true)
		PROPERTYGET(StringFields,true)
	END_INTF()
public:
	bool OnTranslateMsg(HWND,LPMSG pMsg,UINT)
	{
		if(pMsg->message==WM_KEYDOWN && (pMsg->wParam>=VK_LEFT && pMsg->wParam<=VK_DOWN || pMsg->wParam==VK_BACK || pMsg->wParam==VK_RETURN))
			return false;
		return dlg.PreTranslateMessage(pMsg)==TRUE;
	}
	bool OnIEMsg(HWND hWnd,UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult, BOOL& bHandled)
	{
		if(uMsg==WM_SYSCOMMAND)
		{			
			if(wParam==SC_CLOSE)
			{
				if(dlg.IsWindowVisible())
				{
					dlg.ShowWindow(SW_HIDE);
					return true;
				}
			}
		}
		return false;
	}
public:
	OllyApi()
	{
		IDispatch* p=Analyser::CreateDispatch();
		pAnalyser.Attach(p);
		
		p=BreakPoint::CreateDispatch();
		pBreakPoint.Attach(p);
		
		p=Execution::CreateDispatch();
		pExecution.Attach(p);
		
		p=Tracer::CreateDispatch();
		pTracer.Attach(p);

		p=Memory::CreateDispatch();
		pMemory.Attach(p);

		p=IntegerFields::CreateDispatch();
		pIntegers.Attach(p);

		p=StringFields::CreateDispatch();
		pStrings.Attach(p);
		
		::ZeroMemory(&ver,sizeof(OSVERSIONINFO));
        ver.dwOSVersionInfoSize=sizeof(OSVERSIONINFO);
        ::GetVersionEx(&ver);
        if(ver.dwMajorVersion>=5)
        {
			isNT=true;
			MyMessageHook<0>::TranslateMessageProcsRef()+=EventFactory::Produce(this,&OllyApi::OnTranslateMsg);
            MyMessageHook<0>::SetHook();
        }
		else
		{
			isNT=false;
		}

	}
	~OllyApi()
	{
		if(ver.dwMajorVersion>=5)
        {
            MyMessageHook<0>::UnHook();
        }
	}
private:
	CComPtr<IDispatch> pAnalyser;
	CComPtr<IDispatch> pBreakPoint;
	CComPtr<IDispatch> pExecution;
	CComPtr<IDispatch> pTracer;
	CComPtr<IDispatch> pMemory;
	CComPtr<IDispatch> pIntegers;
	CComPtr<IDispatch> pStrings;

	OSVERSIONINFO ver;
};
