// HookFunc.h: interface for the HookFunc class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HOOKFUNC_H__99E7C437_71E3_4322_90EF_287B48207F9E__INCLUDED_)
#define AFX_HOOKFUNC_H__99E7C437_71E3_4322_90EF_287B48207F9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <vector>
#define MAXTHREADNUM 100

#define bAlreadyRun			0  //重入标志
#define orginReturnAddr		4
#define regEAX				8
#define regEDX				12
#define regECX				16	

extern long GetBaseAddr(void);

class HookFunc : public IDispatch 
{
	struct Data
	{
		unsigned int segCs,segDs,segEs,segFs,segGs,segSs;
		unsigned int edx,ebx,ebp,esi,edi,eax,esp,eFlags;
		unsigned int eip,paramPtr,thisPtr;
		unsigned int originalAPI;
		unsigned int directReturn;
		unsigned int popNBytes;
		unsigned int beforeExitScript;
	};
	typedef std::vector<Data> Datas;
public:
	virtual void __stdcall DirectReturnInt32(unsigned int int32Val, unsigned int popn)
	{
		DataRef().directReturn=1;		
		DataRef().popNBytes=popn;
		long baseAddr=GetBaseAddr();
		*(int*)(baseAddr+regEAX)=int32Val;
	}
	
	virtual void __stdcall DirectReturnInt64(unsigned int low32Val,unsigned int high32Val, unsigned int popn)
	{
		DataRef().directReturn=1;		
		DataRef().popNBytes=popn;
		long baseAddr=GetBaseAddr();
		*(int*)(baseAddr+regEAX)=low32Val;
		*(int*)(baseAddr+regEDX)=high32Val;
	}

	virtual void __stdcall CallBeforeExit(UINT script)
	{
		DataRef().directReturn=2;
		DataRef().beforeExitScript=script;
	}
	
	virtual void __stdcall BeforeExitReturnInt32(unsigned int int32Val)
	{
		long baseAddr=GetBaseAddr();
		*(int*)(baseAddr+regEAX)=int32Val;
	}

	virtual void __stdcall BeforeExitReturnInt64(unsigned int low32Val,unsigned int high32Val)
	{
		long baseAddr=GetBaseAddr();
		*(int*)(baseAddr+regEAX)=low32Val;
		*(int*)(baseAddr+regEDX)=high32Val;
	}
	
	virtual unsigned int __stdcall get_Edx(void)
	{
		return DataRef().edx;
	}

	virtual unsigned int __stdcall get_Ebx(void)
	{
		return DataRef().ebx;
	}

	virtual unsigned int __stdcall get_Ebp(void)
	{
		return DataRef().ebp;
	}

	virtual unsigned int __stdcall get_Esi(void)
	{
		return DataRef().esi;
	}

	virtual unsigned int __stdcall get_Edi(void)
	{
		return DataRef().edi;
	}

	virtual unsigned int __stdcall get_Eax(void)
	{
		return DataRef().eax;
	}

	virtual unsigned int __stdcall get_Esp(void)
	{
		return DataRef().esp;
	}

	virtual unsigned int __stdcall get_EFlags(void)
	{
		return DataRef().eFlags;
	}
	
	virtual unsigned int __stdcall get_SegCs(void)
	{
		return DataRef().segCs;
	}

	virtual unsigned int __stdcall get_SegDs(void)
	{
		return DataRef().segDs;	
	}
	
	virtual unsigned int __stdcall get_SegEs(void)
	{
		return DataRef().segEs;	
	}
	
	virtual unsigned int __stdcall get_SegSs(void)
	{
		return DataRef().segSs;	
	}
	
	virtual unsigned int __stdcall get_SegFs(void)
	{
		return DataRef().segFs;	
	}
	
	virtual unsigned int __stdcall get_SegGs(void)
	{
		return DataRef().segGs;	
	}
	
	virtual unsigned int __stdcall get_Eip(void)
	{
		return DataRef().eip;	
	}
	
	virtual unsigned int __stdcall get_ParamPtr(void)
	{
		return DataRef().paramPtr;	
	}
	
	virtual unsigned int __stdcall get_ThisPtr(void)
	{
		return DataRef().thisPtr;
	}
	
	virtual unsigned int __stdcall get_OriginalAPI(void)
	{
		return DataRef().originalAPI;
	}

	virtual unsigned int __stdcall get_DirectReturn(void)
	{
		return DataRef().directReturn;	
	}
	
	virtual unsigned int __stdcall get_ReturnLowInt32(void)
	{
		long baseAddr=GetBaseAddr();
		return *(int*)(baseAddr+regEAX);
	}

	virtual unsigned int __stdcall get_ReturnHighInt32(void)
	{
		long baseAddr=GetBaseAddr();
		return *(int*)(baseAddr+regEDX);
	}
	
	virtual unsigned int __stdcall get_PopNBytes(void)
	{
		return DataRef().popNBytes;	
	}
	
	virtual UINT __stdcall get_BeforeExitScript(void)
	{
		return DataRef().beforeExitScript;	
	}	

	virtual void __stdcall Log(const char* mess)
	{
		char*s=(LPSTR)mess;
		HWND hWnd=::FindWindow(NULL,"ScriptHook");
		if(::IsWindow(hWnd))
		{
			COPYDATASTRUCT data={0x5656,::strlen(s)+1,(LPVOID)s};
			::SendMessage(hWnd,WM_COPYDATA,NULL,(LPARAM)&data);
		}		
	}

	virtual void __stdcall LogStdInfo(const char* name)
	{
		CString mess;
		mess.Format("%s run, EIP:%8.8X, ParamPtr:%8.8X \r\nCS:%4.4X, DS:%4.4X, ES:%4.4X, SS:%4.4X, FS:%4.4X, GS:%4.4X\r\n",name,DataRef().eip,DataRef().paramPtr,DataRef().segCs,DataRef().segDs,DataRef().segEs,DataRef().segSs,DataRef().segFs,DataRef().segGs);
		char*s=(LPSTR)(LPCSTR)mess;		
		HWND hWnd=::FindWindow(NULL,"ScriptHook");
		if(::IsWindow(hWnd))
		{
			COPYDATASTRUCT data={0x5656,::strlen(s)+1,(LPVOID)s};
			::SendMessage(hWnd,WM_COPYDATA,NULL,(LPARAM)&data);
		}	
	}

	virtual void __stdcall EnableRecursion(unsigned int val)
	{
		long baseAddr=GetBaseAddr();
		if(val==0)
			*(int*)(baseAddr+bAlreadyRun)=1;
		else
			*(int*)(baseAddr+bAlreadyRun)=0;
	}

	virtual const char* __stdcall IntToHex(unsigned int val)
	{
		CString temp;
		temp.Format("%8.8X",val);
		return temp;
	}
	virtual unsigned int __stdcall HexToInt(const char* val)
	{
		UINT ret;
		::sscanf(val,"%X",&ret);	
		return ret;
	}
	virtual void __stdcall ShowUI(void);
	virtual void __stdcall CloseUI(void);
public:
	BEGIN_INTF(HookFunc)
		METHOD(DirectReturnInt32)
		METHOD(DirectReturnInt64)
		METHOD(CallBeforeExit)
		METHOD(BeforeExitReturnInt32)
		METHOD(BeforeExitReturnInt64)
		PROPERTYGET(Edx,true)
		PROPERTYGET(Ebx,true)
		PROPERTYGET(Ebp,true)
		PROPERTYGET(Esi,true)
		PROPERTYGET(Edi,true)
		PROPERTYGET(Eax,true)
		PROPERTYGET(Esp,true)
		PROPERTYGET(EFlags,true)
		PROPERTYGET(SegCs,true)
		PROPERTYGET(SegDs,true)
		PROPERTYGET(SegEs,true)
		PROPERTYGET(SegSs,true)
		PROPERTYGET(SegFs,true)
		PROPERTYGET(SegGs,true)
		PROPERTYGET(Eip,true)
		PROPERTYGET(ParamPtr,true)
		PROPERTYGET(ThisPtr,true)
		PROPERTYGET(OriginalAPI,true)
		PROPERTYGET(DirectReturn,true)
		PROPERTYGET(ReturnLowInt32,true)
		PROPERTYGET(ReturnHighInt32,true)
		PROPERTYGET(PopNBytes,true)
		PROPERTYGET(BeforeExitScript,true)
		METHOD(Log)
		METHOD(LogStdInfo)
		METHOD(EnableRecursion)
		METHOD(IntToHex)
		METHOD(HexToInt)
		METHOD(ShowUI)
		METHOD(CloseUI)
	END_INTF()
public:
	inline void PutCallData(unsigned int eip,unsigned int thisPtr,unsigned int paramPtr)
	{
		DataRef().eip=eip;
		DataRef().thisPtr=thisPtr;
		DataRef().paramPtr=paramPtr;
	}
	inline void PutOriginalAPI(unsigned int originalAPI)
	{
		DataRef().originalAPI=originalAPI;
	}
	inline void PutSegmentRegister(unsigned int segcs,unsigned int segds,unsigned int seges,unsigned int segss,unsigned int segfs,unsigned int seggs)
	{
		DataRef().segCs=segcs;
		DataRef().segDs=segds;
		DataRef().segEs=seges;
		DataRef().segSs=segss;
		DataRef().segFs=segfs;
		DataRef().segGs=seggs;
	}
	inline void PutGeneralRegister(unsigned int regedx,unsigned int regebx,unsigned int regebp,unsigned int regesi,unsigned int regedi,unsigned int regeax,unsigned int regesp,unsigned int regeflags)
	{
		DataRef().edx=regedx;
		DataRef().ebx=regebx;
		DataRef().ebp=regebp;
		DataRef().esi=regesi;
		DataRef().edi=regedi;
		DataRef().eax=regeax;
		DataRef().esp=regesp;
		DataRef().eFlags=regeflags;
	}
	inline void Push(void)
	{
		Data data;
		DatasRef().push_back(data);
	}
	inline void Pop(void)
	{
		if(!DatasRef().empty())
			DatasRef().pop_back();
	}
	inline void Init(void)
	{
		DataRef().directReturn=0;
		DataRef().popNBytes=0;
	}	
private:	
	inline Data& DataRef(void)
	{
		return DatasRef().back();
	}
	inline Datas& DatasRef(void)
	{
		int ix=ThreadIndex::Get();
		return datas[ix];
	}	
private:
	Datas datas[MAXTHREADNUM];
};

#endif // !defined(AFX_HOOKFUNC_H__99E7C437_71E3_4322_90EF_287B48207F9E__INCLUDED_)
