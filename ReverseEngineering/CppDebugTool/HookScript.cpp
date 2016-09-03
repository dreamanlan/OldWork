// HookScript.cpp: implementation of the HookScript class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "resource.h"
#include "HookScript.h"
#include "HookFunc.h"
#include "Disasm.h"

#include <vector>
#include <fstream>
#include "WinForIE.h"
#include "MyWindowProc.h"

#define INCLUDE_COMPILE

#include "../scriptc/Interpreter.h"
#include "ScLib.h"
#include "HdSerialLib.h"
//////////////////////////////////////////////////////////////////////
CString GetHookPath(void)
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
//////////////////////////////////////////////////////////////////////	
	void HookProc(int index);
	void HookProc_(int index);
	typedef void (*MYHOOKPROC)(void);
	typedef void (*MYDLLPROC)(IDispatch*);
	typedef std::vector<void*> MemPtrs;
	//下面的常量是线程区中各数据的偏移	
	static MemPtrs memPtrs;

	static HookFunc* hookFunc=NULL;
	static HMODULE cppModule=0;

	static DWORD tlsIndex=-1;
	static int curHookItemIndex=0;
	static UINT hookScript[1025];
	static CString hookedAPI[1025];
	static CString hookedDLL[1025];
	static DWORD originAPI[1025];
	static BYTE trampoline[1025*40];

	static CString hookScriptFile("HookScript.dll");

	static int curHookItemIndex_=0;
	static UINT hookScript_[1025];
	static DWORD originAPI_[1025];
	static DWORD oldAPI_[1025];
	static BYTE trampoline_[1025*40];

	//钩子设定函数声明
	bool CreateHookImpl(int ix,VARIANT func,VARIANT api,VARIANT module);
	//注入界面
	typedef WinForIE<true,WS_POPUP|WS_BORDER|WS_CAPTION|WS_SYSMENU|WS_MAXIMIZEBOX|WS_MINIMIZEBOX| WS_SIZEBOX
		,WS_EX_LEFT> Dlg;
	Dlg dlg;
	//供UI使用的对象模型
	class HookUI : public IDispatch
	{
	public:
		virtual BSTR __stdcall CompileScript(BSTR scpFile)
		{
			canRun=false;
            vmachine.Reset();

            vmachine.DefVar("window");
            vmachine.DefVar("app");

            CString err=vmachine.Compile(CString(scpFile));
            if(err.GetLength()>0)
            {
                    return err.AllocSysString();
            }

            vmachine.OnRuntimeError+=EventFactory::Produce(this,&HookUI::RuntimeError);
            //vmachine.OnCallFunction+=EventFactory::Produce(this,&HookUI::CallFunction);
            //vmachine.OnCallObject+=EventFactory::Produce(this,&HookUI::CallObject);
            //vmachine.OnGetAttr+=EventFactory::Produce(this,&HookUI::GetAttr);
            //vmachine.OnSetAttr+=EventFactory::Produce(this,&HookUI::SetAttr);
            //vmachine.OnFilterObjects+=EventFactory::Produce(this,&HookUI::FilterObjects);
            
            vmachine.LoadLibrary();
			canRun=true;
            return NULL;
		}
		virtual VARIANT __stdcall CallScript(VARIANT vals)
		{
			if(!canRun)
				return CComVariant();
			//将窗口实例传给装入的脚本
			IDispatch* pWin=dlg.GetWindowObj();
            vmachine.SetVariable(0,CComVariant(pWin));
			if(pWin)
				pWin->Release();
            //将HookUI实例传给装入的脚本
            vmachine.SetVariable(1,CComVariant((IDispatch*)this));
            //接收来自javascript的参数
            CComVariant externArgs[32];
            int num=Variant2Vars(vals,externArgs,32);

            CComVariant ret=vmachine.ExecScript(externArgs,num);
            VARIANT r;
            ::VariantInit(&r);
            ret.Detach(&r);
            return r;
		}
		virtual int __stdcall CreateHook(VARIANT func,VARIANT api,VARIANT module)
		{
			int ix=GetNullIndex();
			if(ix<0)
				return ix;
			if(!::CreateHookImpl(ix,func,api,module))
			{
				SetNullIndex(ix);
				return -1;
			}
			return ix;
		}
		virtual void __stdcall RemoveHook(int index)
		{			
			if(index>=curHookItemIndex_ || index>=1025 || (hookScript_[index]==0 && oldAPI_[index]==0 && originAPI_[index]==0))
			{
				return;
			}
			Trampoline::Remove((PBYTE)oldAPI_[index],(PBYTE)originAPI_[index]);
			SetNullIndex(index);
		}
		virtual IDispatch* __stdcall get_ExtObject(void) 
		{
			if(!pExt)
				return NULL;
			try
			{
				pExt->AddRef();
				return pExt;
			}
			catch(...)
			{}
		}
		virtual BSTR __stdcall get_HookPath(void)
		{
			CString pth=::GetHookPath();
			return pth.AllocSysString();
		}
	public:
		BEGIN_INTF(HookUI)
			METHOD(CompileScript)
			METHOD(CallScript)
			METHOD(CreateHook)
			METHOD(RemoveHook)
			PROPERTYGET(ExtObject,true)
			PROPERTYGET(HookPath,true)
		END_INTF()
	public:
		void SetExtObj(IDispatch* p)
		{
			pExt=p;
		}
		bool RuntimeError(const char* msg)
		{
			IDispatch* pWin=dlg.GetWindowObj();
			if(pWin)
			{
				DispatchDriver::NRInvoke(pWin,L"log",CComBSTR(msg));
				pWin->Release();
			}
			return true;
		}
		void CallScript_(int func,IDispatch* pHF)
		{
			if(!canRun)
				return;
			//将窗口实例传给装入的脚本
			IDispatch* pWin=dlg.GetWindowObj();
            vmachine.SetVariable(0,CComVariant(pWin));
			if(pWin)
				pWin->Release();
            //将HookUI实例传给装入的脚本
            vmachine.SetVariable(1,CComVariant((IDispatch*)this));
			//调用参数
            CComVariant externArgs[2];
			externArgs[0]=func;
			externArgs[1]=pHF;

            vmachine.ExecScript(externArgs,2);
		}
	private:
		static int Variant2Vars(VARIANT vals,CComVariant* externArgs,int maxnum)
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
						if(comvt.vt==VT_BSTR)
						{
							externArgs[i]=comvt;
						}
						else if(comvt.vt==VT_I4 || comvt.vt==VT_UI4 || comvt.vt==VT_INT || comvt.vt==VT_UINT)
						{
							externArgs[i]=comvt;
						}
						else if(comvt.vt==VT_DISPATCH && comvt.pdispVal)
						{
							externArgs[i]=comvt;							
						}
						else
						{
							externArgs[i]=comvt;
						}
					}
					return (l<maxnum ? l : maxnum);
				}
				else
				{
					if(vals.pdispVal)
					{
						try
						{
							externArgs[0]=vals;
							return 1;
						}
						catch(...)
						{}
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
					if(ccv.vt==VT_BSTR)
					{
						externArgs[i-lBound]=ccv;
					}
					else if(ccv.vt==VT_I4 || ccv.vt==VT_UI4 || ccv.vt==VT_INT || ccv.vt==VT_UINT)
					{
						externArgs[i-lBound]=ccv;
					}
					else if(ccv.vt==VT_DISPATCH && ccv.pdispVal)
					{
						externArgs[i-lBound]=ccv;						
					}
					else
					{
						externArgs[i-lBound]=ccv;
					}
				}       
				return (length<maxnum ? length : maxnum);
			}
			return 0;
		}
		static inline int GetNullIndex(void)
		{
			int ix=0;
			for(;ix<curHookItemIndex_ && ix<1025;ix++)
			{
				if(hookScript_[ix]==0 && oldAPI_[ix]==0 && originAPI_[ix]==0)
				{
					break;
				}
			}			
			if(ix>=curHookItemIndex_)
			{
				if(ix<1025)
				{
					ix=curHookItemIndex_;
					SetNullIndex(ix);
					curHookItemIndex_++;
				}
				else
				{
					return -1;
				}
			}
			return ix;
		}
		static inline void SetNullIndex(int index)
		{
			hookScript_[index]=0;
			oldAPI_[index]=0;
			originAPI_[index]=0;
		}
	public:
		bool OnTranslateMsg(HWND,LPMSG pMsg,UINT)
		{
			if(dlg.IsChild(pMsg->hwnd))
			{
				if(pMsg->message==WM_KEYDOWN && (pMsg->wParam>=VK_LEFT && pMsg->wParam<=VK_DOWN || pMsg->wParam==VK_BACK || pMsg->wParam==VK_RETURN))
					return false;
				return (bool)dlg.PreTranslateMessage(pMsg);
			}
			return false;
		}
	public:
		HookUI():pExt(NULL),canRun(false)
		{           
			::ZeroMemory(&ver,sizeof(OSVERSIONINFO));
			ver.dwOSVersionInfoSize=sizeof(OSVERSIONINFO);
			::GetVersionEx(&ver);
			if(ver.dwMajorVersion>=5)
			{
				MyMessageHook<0>::TranslateMessageProcsRef()+=EventFactory::Produce(this,&HookUI::OnTranslateMsg);
				MyMessageHook<0>::SetHook();
			}
		}
		~HookUI()
		{
			if(ver.dwMajorVersion>=5)
			{
				MyMessageHook<0>::UnHook();
			}
		}
	private:
		bool canRun;
		ScriptcRuntime vmachine;
		IDispatch* pExt;
		OSVERSIONINFO ver;
	};
	
	bool uiShow=false;
	bool showModal=false;
	HookUI* model=NULL;

	typedef IDispatch* (__stdcall* GetExtObjPtr)(void);
	typedef void (__stdcall* SetHookInfoPtr)(DWORD newproc,DWORD origin);//向C++模块传递钩子函数与原函数调用入口(trampoline)的对应信息

	void ShowUI(void)
	{		
		//显示交互界面
		//DWORD tid=::GetCurrentThreadId();
		//DWORD tid2=::GetWindowThreadProcessId(::GetForegroundWindow(),NULL);
		if(!uiShow)
		{
			uiShow=true;
			model=HookUI::CreateDispatch();
			if(cppModule)
			{
				//从C++模块获取扩展对象模型
				GetExtObjPtr fptr=(GetExtObjPtr)::GetProcAddress(cppModule,"_GetExtObj@0"); 
				if(fptr)
				{
					model->SetExtObj((*fptr)());
				}
			}
			IEAppPointer::SetPtr(model);
			dlg.InitURL(CComBSTR((LPCSTR)(GetHookPath()+"\\hookui.htm")));
			dlg.DontPostQuitMessage();
			if(!showModal)
				dlg.DoModeless(NULL,1,1,240,572);
			else
				dlg.DoModal(NULL,1,1,240,572);
		}
	}	

	void CloseUI(void)
	{
		if(uiShow)
		{
			dlg.DestroyWindow();
			model->Release();
			uiShow=false;
		}
	}

	
#define DEFHOOKPROC_(x) \
	static void __declspec(naked) HookProc_##x()\
	{\
		HookProc_(x);\
	}
	DEFHOOKPROC_(0)
	DEFHOOKPROC_(1)
	DEFHOOKPROC_(2)
	DEFHOOKPROC_(3)
	DEFHOOKPROC_(4)
	DEFHOOKPROC_(5)
	DEFHOOKPROC_(6)
	DEFHOOKPROC_(7)
	DEFHOOKPROC_(8)
	DEFHOOKPROC_(9)
	DEFHOOKPROC_(10)
	DEFHOOKPROC_(11)
	DEFHOOKPROC_(12)
	DEFHOOKPROC_(13)
	DEFHOOKPROC_(14)
	DEFHOOKPROC_(15)
	DEFHOOKPROC_(16)
	DEFHOOKPROC_(17)
	DEFHOOKPROC_(18)
	DEFHOOKPROC_(19)
	DEFHOOKPROC_(20)
	DEFHOOKPROC_(21)
	DEFHOOKPROC_(22)
	DEFHOOKPROC_(23)
	DEFHOOKPROC_(24)
	DEFHOOKPROC_(25)
	DEFHOOKPROC_(26)
	DEFHOOKPROC_(27)
	DEFHOOKPROC_(28)
	DEFHOOKPROC_(29)
	DEFHOOKPROC_(30)
	DEFHOOKPROC_(31)
	DEFHOOKPROC_(32)
	DEFHOOKPROC_(33)
	DEFHOOKPROC_(34)
	DEFHOOKPROC_(35)
	DEFHOOKPROC_(36)
	DEFHOOKPROC_(37)
	DEFHOOKPROC_(38)
	DEFHOOKPROC_(39)
	DEFHOOKPROC_(40)
	DEFHOOKPROC_(41)
	DEFHOOKPROC_(42)
	DEFHOOKPROC_(43)
	DEFHOOKPROC_(44)
	DEFHOOKPROC_(45)
	DEFHOOKPROC_(46)
	DEFHOOKPROC_(47)
	DEFHOOKPROC_(48)
	DEFHOOKPROC_(49)
	DEFHOOKPROC_(50)
	DEFHOOKPROC_(51)
	DEFHOOKPROC_(52)
	DEFHOOKPROC_(53)
	DEFHOOKPROC_(54)
	DEFHOOKPROC_(55)
	DEFHOOKPROC_(56)
	DEFHOOKPROC_(57)
	DEFHOOKPROC_(58)
	DEFHOOKPROC_(59)
	DEFHOOKPROC_(60)
	DEFHOOKPROC_(61)
	DEFHOOKPROC_(62)
	DEFHOOKPROC_(63)
	DEFHOOKPROC_(64)
	DEFHOOKPROC_(65)
	DEFHOOKPROC_(66)
	DEFHOOKPROC_(67)
	DEFHOOKPROC_(68)
	DEFHOOKPROC_(69)
	DEFHOOKPROC_(70)
	DEFHOOKPROC_(71)
	DEFHOOKPROC_(72)
	DEFHOOKPROC_(73)
	DEFHOOKPROC_(74)
	DEFHOOKPROC_(75)
	DEFHOOKPROC_(76)
	DEFHOOKPROC_(77)
	DEFHOOKPROC_(78)
	DEFHOOKPROC_(79)
	DEFHOOKPROC_(80)
	DEFHOOKPROC_(81)
	DEFHOOKPROC_(82)
	DEFHOOKPROC_(83)
	DEFHOOKPROC_(84)
	DEFHOOKPROC_(85)
	DEFHOOKPROC_(86)
	DEFHOOKPROC_(87)
	DEFHOOKPROC_(88)
	DEFHOOKPROC_(89)
	DEFHOOKPROC_(90)
	DEFHOOKPROC_(91)
	DEFHOOKPROC_(92)
	DEFHOOKPROC_(93)
	DEFHOOKPROC_(94)
	DEFHOOKPROC_(95)
	DEFHOOKPROC_(96)
	DEFHOOKPROC_(97)
	DEFHOOKPROC_(98)
	DEFHOOKPROC_(99)
	DEFHOOKPROC_(100)
	DEFHOOKPROC_(101)
	DEFHOOKPROC_(102)
	DEFHOOKPROC_(103)
	DEFHOOKPROC_(104)
	DEFHOOKPROC_(105)
	DEFHOOKPROC_(106)
	DEFHOOKPROC_(107)
	DEFHOOKPROC_(108)
	DEFHOOKPROC_(109)
	DEFHOOKPROC_(110)
	DEFHOOKPROC_(111)
	DEFHOOKPROC_(112)
	DEFHOOKPROC_(113)
	DEFHOOKPROC_(114)
	DEFHOOKPROC_(115)
	DEFHOOKPROC_(116)
	DEFHOOKPROC_(117)
	DEFHOOKPROC_(118)
	DEFHOOKPROC_(119)
	DEFHOOKPROC_(120)
	DEFHOOKPROC_(121)
	DEFHOOKPROC_(122)
	DEFHOOKPROC_(123)
	DEFHOOKPROC_(124)
	DEFHOOKPROC_(125)
	DEFHOOKPROC_(126)
	DEFHOOKPROC_(127)
	DEFHOOKPROC_(128)
	DEFHOOKPROC_(129)
	DEFHOOKPROC_(130)
	DEFHOOKPROC_(131)
	DEFHOOKPROC_(132)
	DEFHOOKPROC_(133)
	DEFHOOKPROC_(134)
	DEFHOOKPROC_(135)
	DEFHOOKPROC_(136)
	DEFHOOKPROC_(137)
	DEFHOOKPROC_(138)
	DEFHOOKPROC_(139)
	DEFHOOKPROC_(140)
	DEFHOOKPROC_(141)
	DEFHOOKPROC_(142)
	DEFHOOKPROC_(143)
	DEFHOOKPROC_(144)
	DEFHOOKPROC_(145)
	DEFHOOKPROC_(146)
	DEFHOOKPROC_(147)
	DEFHOOKPROC_(148)
	DEFHOOKPROC_(149)
	DEFHOOKPROC_(150)
	DEFHOOKPROC_(151)
	DEFHOOKPROC_(152)
	DEFHOOKPROC_(153)
	DEFHOOKPROC_(154)
	DEFHOOKPROC_(155)
	DEFHOOKPROC_(156)
	DEFHOOKPROC_(157)
	DEFHOOKPROC_(158)
	DEFHOOKPROC_(159)
	DEFHOOKPROC_(160)
	DEFHOOKPROC_(161)
	DEFHOOKPROC_(162)
	DEFHOOKPROC_(163)
	DEFHOOKPROC_(164)
	DEFHOOKPROC_(165)
	DEFHOOKPROC_(166)
	DEFHOOKPROC_(167)
	DEFHOOKPROC_(168)
	DEFHOOKPROC_(169)
	DEFHOOKPROC_(170)
	DEFHOOKPROC_(171)
	DEFHOOKPROC_(172)
	DEFHOOKPROC_(173)
	DEFHOOKPROC_(174)
	DEFHOOKPROC_(175)
	DEFHOOKPROC_(176)
	DEFHOOKPROC_(177)
	DEFHOOKPROC_(178)
	DEFHOOKPROC_(179)
	DEFHOOKPROC_(180)
	DEFHOOKPROC_(181)
	DEFHOOKPROC_(182)
	DEFHOOKPROC_(183)
	DEFHOOKPROC_(184)
	DEFHOOKPROC_(185)
	DEFHOOKPROC_(186)
	DEFHOOKPROC_(187)
	DEFHOOKPROC_(188)
	DEFHOOKPROC_(189)
	DEFHOOKPROC_(190)
	DEFHOOKPROC_(191)
	DEFHOOKPROC_(192)
	DEFHOOKPROC_(193)
	DEFHOOKPROC_(194)
	DEFHOOKPROC_(195)
	DEFHOOKPROC_(196)
	DEFHOOKPROC_(197)
	DEFHOOKPROC_(198)
	DEFHOOKPROC_(199)
	DEFHOOKPROC_(200)
	DEFHOOKPROC_(201)
	DEFHOOKPROC_(202)
	DEFHOOKPROC_(203)
	DEFHOOKPROC_(204)
	DEFHOOKPROC_(205)
	DEFHOOKPROC_(206)
	DEFHOOKPROC_(207)
	DEFHOOKPROC_(208)
	DEFHOOKPROC_(209)
	DEFHOOKPROC_(210)
	DEFHOOKPROC_(211)
	DEFHOOKPROC_(212)
	DEFHOOKPROC_(213)
	DEFHOOKPROC_(214)
	DEFHOOKPROC_(215)
	DEFHOOKPROC_(216)
	DEFHOOKPROC_(217)
	DEFHOOKPROC_(218)
	DEFHOOKPROC_(219)
	DEFHOOKPROC_(220)
	DEFHOOKPROC_(221)
	DEFHOOKPROC_(222)
	DEFHOOKPROC_(223)
	DEFHOOKPROC_(224)
	DEFHOOKPROC_(225)
	DEFHOOKPROC_(226)
	DEFHOOKPROC_(227)
	DEFHOOKPROC_(228)
	DEFHOOKPROC_(229)
	DEFHOOKPROC_(230)
	DEFHOOKPROC_(231)
	DEFHOOKPROC_(232)
	DEFHOOKPROC_(233)
	DEFHOOKPROC_(234)
	DEFHOOKPROC_(235)
	DEFHOOKPROC_(236)
	DEFHOOKPROC_(237)
	DEFHOOKPROC_(238)
	DEFHOOKPROC_(239)
	DEFHOOKPROC_(240)
	DEFHOOKPROC_(241)
	DEFHOOKPROC_(242)
	DEFHOOKPROC_(243)
	DEFHOOKPROC_(244)
	DEFHOOKPROC_(245)
	DEFHOOKPROC_(246)
	DEFHOOKPROC_(247)
	DEFHOOKPROC_(248)
	DEFHOOKPROC_(249)
	DEFHOOKPROC_(250)
	DEFHOOKPROC_(251)
	DEFHOOKPROC_(252)
	DEFHOOKPROC_(253)
	DEFHOOKPROC_(254)
	DEFHOOKPROC_(255)
	DEFHOOKPROC_(256)
	DEFHOOKPROC_(257)
	DEFHOOKPROC_(258)
	DEFHOOKPROC_(259)
	DEFHOOKPROC_(260)
	DEFHOOKPROC_(261)
	DEFHOOKPROC_(262)
	DEFHOOKPROC_(263)
	DEFHOOKPROC_(264)
	DEFHOOKPROC_(265)
	DEFHOOKPROC_(266)
	DEFHOOKPROC_(267)
	DEFHOOKPROC_(268)
	DEFHOOKPROC_(269)
	DEFHOOKPROC_(270)
	DEFHOOKPROC_(271)
	DEFHOOKPROC_(272)
	DEFHOOKPROC_(273)
	DEFHOOKPROC_(274)
	DEFHOOKPROC_(275)
	DEFHOOKPROC_(276)
	DEFHOOKPROC_(277)
	DEFHOOKPROC_(278)
	DEFHOOKPROC_(279)
	DEFHOOKPROC_(280)
	DEFHOOKPROC_(281)
	DEFHOOKPROC_(282)
	DEFHOOKPROC_(283)
	DEFHOOKPROC_(284)
	DEFHOOKPROC_(285)
	DEFHOOKPROC_(286)
	DEFHOOKPROC_(287)
	DEFHOOKPROC_(288)
	DEFHOOKPROC_(289)
	DEFHOOKPROC_(290)
	DEFHOOKPROC_(291)
	DEFHOOKPROC_(292)
	DEFHOOKPROC_(293)
	DEFHOOKPROC_(294)
	DEFHOOKPROC_(295)
	DEFHOOKPROC_(296)
	DEFHOOKPROC_(297)
	DEFHOOKPROC_(298)
	DEFHOOKPROC_(299)
	DEFHOOKPROC_(300)
	DEFHOOKPROC_(301)
	DEFHOOKPROC_(302)
	DEFHOOKPROC_(303)
	DEFHOOKPROC_(304)
	DEFHOOKPROC_(305)
	DEFHOOKPROC_(306)
	DEFHOOKPROC_(307)
	DEFHOOKPROC_(308)
	DEFHOOKPROC_(309)
	DEFHOOKPROC_(310)
	DEFHOOKPROC_(311)
	DEFHOOKPROC_(312)
	DEFHOOKPROC_(313)
	DEFHOOKPROC_(314)
	DEFHOOKPROC_(315)
	DEFHOOKPROC_(316)
	DEFHOOKPROC_(317)
	DEFHOOKPROC_(318)
	DEFHOOKPROC_(319)
	DEFHOOKPROC_(320)
	DEFHOOKPROC_(321)
	DEFHOOKPROC_(322)
	DEFHOOKPROC_(323)
	DEFHOOKPROC_(324)
	DEFHOOKPROC_(325)
	DEFHOOKPROC_(326)
	DEFHOOKPROC_(327)
	DEFHOOKPROC_(328)
	DEFHOOKPROC_(329)
	DEFHOOKPROC_(330)
	DEFHOOKPROC_(331)
	DEFHOOKPROC_(332)
	DEFHOOKPROC_(333)
	DEFHOOKPROC_(334)
	DEFHOOKPROC_(335)
	DEFHOOKPROC_(336)
	DEFHOOKPROC_(337)
	DEFHOOKPROC_(338)
	DEFHOOKPROC_(339)
	DEFHOOKPROC_(340)
	DEFHOOKPROC_(341)
	DEFHOOKPROC_(342)
	DEFHOOKPROC_(343)
	DEFHOOKPROC_(344)
	DEFHOOKPROC_(345)
	DEFHOOKPROC_(346)
	DEFHOOKPROC_(347)
	DEFHOOKPROC_(348)
	DEFHOOKPROC_(349)
	DEFHOOKPROC_(350)
	DEFHOOKPROC_(351)
	DEFHOOKPROC_(352)
	DEFHOOKPROC_(353)
	DEFHOOKPROC_(354)
	DEFHOOKPROC_(355)
	DEFHOOKPROC_(356)
	DEFHOOKPROC_(357)
	DEFHOOKPROC_(358)
	DEFHOOKPROC_(359)
	DEFHOOKPROC_(360)
	DEFHOOKPROC_(361)
	DEFHOOKPROC_(362)
	DEFHOOKPROC_(363)
	DEFHOOKPROC_(364)
	DEFHOOKPROC_(365)
	DEFHOOKPROC_(366)
	DEFHOOKPROC_(367)
	DEFHOOKPROC_(368)
	DEFHOOKPROC_(369)
	DEFHOOKPROC_(370)
	DEFHOOKPROC_(371)
	DEFHOOKPROC_(372)
	DEFHOOKPROC_(373)
	DEFHOOKPROC_(374)
	DEFHOOKPROC_(375)
	DEFHOOKPROC_(376)
	DEFHOOKPROC_(377)
	DEFHOOKPROC_(378)
	DEFHOOKPROC_(379)
	DEFHOOKPROC_(380)
	DEFHOOKPROC_(381)
	DEFHOOKPROC_(382)
	DEFHOOKPROC_(383)
	DEFHOOKPROC_(384)
	DEFHOOKPROC_(385)
	DEFHOOKPROC_(386)
	DEFHOOKPROC_(387)
	DEFHOOKPROC_(388)
	DEFHOOKPROC_(389)
	DEFHOOKPROC_(390)
	DEFHOOKPROC_(391)
	DEFHOOKPROC_(392)
	DEFHOOKPROC_(393)
	DEFHOOKPROC_(394)
	DEFHOOKPROC_(395)
	DEFHOOKPROC_(396)
	DEFHOOKPROC_(397)
	DEFHOOKPROC_(398)
	DEFHOOKPROC_(399)
	DEFHOOKPROC_(400)
	DEFHOOKPROC_(401)
	DEFHOOKPROC_(402)
	DEFHOOKPROC_(403)
	DEFHOOKPROC_(404)
	DEFHOOKPROC_(405)
	DEFHOOKPROC_(406)
	DEFHOOKPROC_(407)
	DEFHOOKPROC_(408)
	DEFHOOKPROC_(409)
	DEFHOOKPROC_(410)
	DEFHOOKPROC_(411)
	DEFHOOKPROC_(412)
	DEFHOOKPROC_(413)
	DEFHOOKPROC_(414)
	DEFHOOKPROC_(415)
	DEFHOOKPROC_(416)
	DEFHOOKPROC_(417)
	DEFHOOKPROC_(418)
	DEFHOOKPROC_(419)
	DEFHOOKPROC_(420)
	DEFHOOKPROC_(421)
	DEFHOOKPROC_(422)
	DEFHOOKPROC_(423)
	DEFHOOKPROC_(424)
	DEFHOOKPROC_(425)
	DEFHOOKPROC_(426)
	DEFHOOKPROC_(427)
	DEFHOOKPROC_(428)
	DEFHOOKPROC_(429)
	DEFHOOKPROC_(430)
	DEFHOOKPROC_(431)
	DEFHOOKPROC_(432)
	DEFHOOKPROC_(433)
	DEFHOOKPROC_(434)
	DEFHOOKPROC_(435)
	DEFHOOKPROC_(436)
	DEFHOOKPROC_(437)
	DEFHOOKPROC_(438)
	DEFHOOKPROC_(439)
	DEFHOOKPROC_(440)
	DEFHOOKPROC_(441)
	DEFHOOKPROC_(442)
	DEFHOOKPROC_(443)
	DEFHOOKPROC_(444)
	DEFHOOKPROC_(445)
	DEFHOOKPROC_(446)
	DEFHOOKPROC_(447)
	DEFHOOKPROC_(448)
	DEFHOOKPROC_(449)
	DEFHOOKPROC_(450)
	DEFHOOKPROC_(451)
	DEFHOOKPROC_(452)
	DEFHOOKPROC_(453)
	DEFHOOKPROC_(454)
	DEFHOOKPROC_(455)
	DEFHOOKPROC_(456)
	DEFHOOKPROC_(457)
	DEFHOOKPROC_(458)
	DEFHOOKPROC_(459)
	DEFHOOKPROC_(460)
	DEFHOOKPROC_(461)
	DEFHOOKPROC_(462)
	DEFHOOKPROC_(463)
	DEFHOOKPROC_(464)
	DEFHOOKPROC_(465)
	DEFHOOKPROC_(466)
	DEFHOOKPROC_(467)
	DEFHOOKPROC_(468)
	DEFHOOKPROC_(469)
	DEFHOOKPROC_(470)
	DEFHOOKPROC_(471)
	DEFHOOKPROC_(472)
	DEFHOOKPROC_(473)
	DEFHOOKPROC_(474)
	DEFHOOKPROC_(475)
	DEFHOOKPROC_(476)
	DEFHOOKPROC_(477)
	DEFHOOKPROC_(478)
	DEFHOOKPROC_(479)
	DEFHOOKPROC_(480)
	DEFHOOKPROC_(481)
	DEFHOOKPROC_(482)
	DEFHOOKPROC_(483)
	DEFHOOKPROC_(484)
	DEFHOOKPROC_(485)
	DEFHOOKPROC_(486)
	DEFHOOKPROC_(487)
	DEFHOOKPROC_(488)
	DEFHOOKPROC_(489)
	DEFHOOKPROC_(490)
	DEFHOOKPROC_(491)
	DEFHOOKPROC_(492)
	DEFHOOKPROC_(493)
	DEFHOOKPROC_(494)
	DEFHOOKPROC_(495)
	DEFHOOKPROC_(496)
	DEFHOOKPROC_(497)
	DEFHOOKPROC_(498)
	DEFHOOKPROC_(499)
	DEFHOOKPROC_(500)
	DEFHOOKPROC_(501)
	DEFHOOKPROC_(502)
	DEFHOOKPROC_(503)
	DEFHOOKPROC_(504)
	DEFHOOKPROC_(505)
	DEFHOOKPROC_(506)
	DEFHOOKPROC_(507)
	DEFHOOKPROC_(508)
	DEFHOOKPROC_(509)
	DEFHOOKPROC_(510)
	DEFHOOKPROC_(511)
	DEFHOOKPROC_(512)
	DEFHOOKPROC_(513)
	DEFHOOKPROC_(514)
	DEFHOOKPROC_(515)
	DEFHOOKPROC_(516)
	DEFHOOKPROC_(517)
	DEFHOOKPROC_(518)
	DEFHOOKPROC_(519)
	DEFHOOKPROC_(520)
	DEFHOOKPROC_(521)
	DEFHOOKPROC_(522)
	DEFHOOKPROC_(523)
	DEFHOOKPROC_(524)
	DEFHOOKPROC_(525)
	DEFHOOKPROC_(526)
	DEFHOOKPROC_(527)
	DEFHOOKPROC_(528)
	DEFHOOKPROC_(529)
	DEFHOOKPROC_(530)
	DEFHOOKPROC_(531)
	DEFHOOKPROC_(532)
	DEFHOOKPROC_(533)
	DEFHOOKPROC_(534)
	DEFHOOKPROC_(535)
	DEFHOOKPROC_(536)
	DEFHOOKPROC_(537)
	DEFHOOKPROC_(538)
	DEFHOOKPROC_(539)
	DEFHOOKPROC_(540)
	DEFHOOKPROC_(541)
	DEFHOOKPROC_(542)
	DEFHOOKPROC_(543)
	DEFHOOKPROC_(544)
	DEFHOOKPROC_(545)
	DEFHOOKPROC_(546)
	DEFHOOKPROC_(547)
	DEFHOOKPROC_(548)
	DEFHOOKPROC_(549)
	DEFHOOKPROC_(550)
	DEFHOOKPROC_(551)
	DEFHOOKPROC_(552)
	DEFHOOKPROC_(553)
	DEFHOOKPROC_(554)
	DEFHOOKPROC_(555)
	DEFHOOKPROC_(556)
	DEFHOOKPROC_(557)
	DEFHOOKPROC_(558)
	DEFHOOKPROC_(559)
	DEFHOOKPROC_(560)
	DEFHOOKPROC_(561)
	DEFHOOKPROC_(562)
	DEFHOOKPROC_(563)
	DEFHOOKPROC_(564)
	DEFHOOKPROC_(565)
	DEFHOOKPROC_(566)
	DEFHOOKPROC_(567)
	DEFHOOKPROC_(568)
	DEFHOOKPROC_(569)
	DEFHOOKPROC_(570)
	DEFHOOKPROC_(571)
	DEFHOOKPROC_(572)
	DEFHOOKPROC_(573)
	DEFHOOKPROC_(574)
	DEFHOOKPROC_(575)
	DEFHOOKPROC_(576)
	DEFHOOKPROC_(577)
	DEFHOOKPROC_(578)
	DEFHOOKPROC_(579)
	DEFHOOKPROC_(580)
	DEFHOOKPROC_(581)
	DEFHOOKPROC_(582)
	DEFHOOKPROC_(583)
	DEFHOOKPROC_(584)
	DEFHOOKPROC_(585)
	DEFHOOKPROC_(586)
	DEFHOOKPROC_(587)
	DEFHOOKPROC_(588)
	DEFHOOKPROC_(589)
	DEFHOOKPROC_(590)
	DEFHOOKPROC_(591)
	DEFHOOKPROC_(592)
	DEFHOOKPROC_(593)
	DEFHOOKPROC_(594)
	DEFHOOKPROC_(595)
	DEFHOOKPROC_(596)
	DEFHOOKPROC_(597)
	DEFHOOKPROC_(598)
	DEFHOOKPROC_(599)
	DEFHOOKPROC_(600)
	DEFHOOKPROC_(601)
	DEFHOOKPROC_(602)
	DEFHOOKPROC_(603)
	DEFHOOKPROC_(604)
	DEFHOOKPROC_(605)
	DEFHOOKPROC_(606)
	DEFHOOKPROC_(607)
	DEFHOOKPROC_(608)
	DEFHOOKPROC_(609)
	DEFHOOKPROC_(610)
	DEFHOOKPROC_(611)
	DEFHOOKPROC_(612)
	DEFHOOKPROC_(613)
	DEFHOOKPROC_(614)
	DEFHOOKPROC_(615)
	DEFHOOKPROC_(616)
	DEFHOOKPROC_(617)
	DEFHOOKPROC_(618)
	DEFHOOKPROC_(619)
	DEFHOOKPROC_(620)
	DEFHOOKPROC_(621)
	DEFHOOKPROC_(622)
	DEFHOOKPROC_(623)
	DEFHOOKPROC_(624)
	DEFHOOKPROC_(625)
	DEFHOOKPROC_(626)
	DEFHOOKPROC_(627)
	DEFHOOKPROC_(628)
	DEFHOOKPROC_(629)
	DEFHOOKPROC_(630)
	DEFHOOKPROC_(631)
	DEFHOOKPROC_(632)
	DEFHOOKPROC_(633)
	DEFHOOKPROC_(634)
	DEFHOOKPROC_(635)
	DEFHOOKPROC_(636)
	DEFHOOKPROC_(637)
	DEFHOOKPROC_(638)
	DEFHOOKPROC_(639)
	DEFHOOKPROC_(640)
	DEFHOOKPROC_(641)
	DEFHOOKPROC_(642)
	DEFHOOKPROC_(643)
	DEFHOOKPROC_(644)
	DEFHOOKPROC_(645)
	DEFHOOKPROC_(646)
	DEFHOOKPROC_(647)
	DEFHOOKPROC_(648)
	DEFHOOKPROC_(649)
	DEFHOOKPROC_(650)
	DEFHOOKPROC_(651)
	DEFHOOKPROC_(652)
	DEFHOOKPROC_(653)
	DEFHOOKPROC_(654)
	DEFHOOKPROC_(655)
	DEFHOOKPROC_(656)
	DEFHOOKPROC_(657)
	DEFHOOKPROC_(658)
	DEFHOOKPROC_(659)
	DEFHOOKPROC_(660)
	DEFHOOKPROC_(661)
	DEFHOOKPROC_(662)
	DEFHOOKPROC_(663)
	DEFHOOKPROC_(664)
	DEFHOOKPROC_(665)
	DEFHOOKPROC_(666)
	DEFHOOKPROC_(667)
	DEFHOOKPROC_(668)
	DEFHOOKPROC_(669)
	DEFHOOKPROC_(670)
	DEFHOOKPROC_(671)
	DEFHOOKPROC_(672)
	DEFHOOKPROC_(673)
	DEFHOOKPROC_(674)
	DEFHOOKPROC_(675)
	DEFHOOKPROC_(676)
	DEFHOOKPROC_(677)
	DEFHOOKPROC_(678)
	DEFHOOKPROC_(679)
	DEFHOOKPROC_(680)
	DEFHOOKPROC_(681)
	DEFHOOKPROC_(682)
	DEFHOOKPROC_(683)
	DEFHOOKPROC_(684)
	DEFHOOKPROC_(685)
	DEFHOOKPROC_(686)
	DEFHOOKPROC_(687)
	DEFHOOKPROC_(688)
	DEFHOOKPROC_(689)
	DEFHOOKPROC_(690)
	DEFHOOKPROC_(691)
	DEFHOOKPROC_(692)
	DEFHOOKPROC_(693)
	DEFHOOKPROC_(694)
	DEFHOOKPROC_(695)
	DEFHOOKPROC_(696)
	DEFHOOKPROC_(697)
	DEFHOOKPROC_(698)
	DEFHOOKPROC_(699)
	DEFHOOKPROC_(700)
	DEFHOOKPROC_(701)
	DEFHOOKPROC_(702)
	DEFHOOKPROC_(703)
	DEFHOOKPROC_(704)
	DEFHOOKPROC_(705)
	DEFHOOKPROC_(706)
	DEFHOOKPROC_(707)
	DEFHOOKPROC_(708)
	DEFHOOKPROC_(709)
	DEFHOOKPROC_(710)
	DEFHOOKPROC_(711)
	DEFHOOKPROC_(712)
	DEFHOOKPROC_(713)
	DEFHOOKPROC_(714)
	DEFHOOKPROC_(715)
	DEFHOOKPROC_(716)
	DEFHOOKPROC_(717)
	DEFHOOKPROC_(718)
	DEFHOOKPROC_(719)
	DEFHOOKPROC_(720)
	DEFHOOKPROC_(721)
	DEFHOOKPROC_(722)
	DEFHOOKPROC_(723)
	DEFHOOKPROC_(724)
	DEFHOOKPROC_(725)
	DEFHOOKPROC_(726)
	DEFHOOKPROC_(727)
	DEFHOOKPROC_(728)
	DEFHOOKPROC_(729)
	DEFHOOKPROC_(730)
	DEFHOOKPROC_(731)
	DEFHOOKPROC_(732)
	DEFHOOKPROC_(733)
	DEFHOOKPROC_(734)
	DEFHOOKPROC_(735)
	DEFHOOKPROC_(736)
	DEFHOOKPROC_(737)
	DEFHOOKPROC_(738)
	DEFHOOKPROC_(739)
	DEFHOOKPROC_(740)
	DEFHOOKPROC_(741)
	DEFHOOKPROC_(742)
	DEFHOOKPROC_(743)
	DEFHOOKPROC_(744)
	DEFHOOKPROC_(745)
	DEFHOOKPROC_(746)
	DEFHOOKPROC_(747)
	DEFHOOKPROC_(748)
	DEFHOOKPROC_(749)
	DEFHOOKPROC_(750)
	DEFHOOKPROC_(751)
	DEFHOOKPROC_(752)
	DEFHOOKPROC_(753)
	DEFHOOKPROC_(754)
	DEFHOOKPROC_(755)
	DEFHOOKPROC_(756)
	DEFHOOKPROC_(757)
	DEFHOOKPROC_(758)
	DEFHOOKPROC_(759)
	DEFHOOKPROC_(760)
	DEFHOOKPROC_(761)
	DEFHOOKPROC_(762)
	DEFHOOKPROC_(763)
	DEFHOOKPROC_(764)
	DEFHOOKPROC_(765)
	DEFHOOKPROC_(766)
	DEFHOOKPROC_(767)
	DEFHOOKPROC_(768)
	DEFHOOKPROC_(769)
	DEFHOOKPROC_(770)
	DEFHOOKPROC_(771)
	DEFHOOKPROC_(772)
	DEFHOOKPROC_(773)
	DEFHOOKPROC_(774)
	DEFHOOKPROC_(775)
	DEFHOOKPROC_(776)
	DEFHOOKPROC_(777)
	DEFHOOKPROC_(778)
	DEFHOOKPROC_(779)
	DEFHOOKPROC_(780)
	DEFHOOKPROC_(781)
	DEFHOOKPROC_(782)
	DEFHOOKPROC_(783)
	DEFHOOKPROC_(784)
	DEFHOOKPROC_(785)
	DEFHOOKPROC_(786)
	DEFHOOKPROC_(787)
	DEFHOOKPROC_(788)
	DEFHOOKPROC_(789)
	DEFHOOKPROC_(790)
	DEFHOOKPROC_(791)
	DEFHOOKPROC_(792)
	DEFHOOKPROC_(793)
	DEFHOOKPROC_(794)
	DEFHOOKPROC_(795)
	DEFHOOKPROC_(796)
	DEFHOOKPROC_(797)
	DEFHOOKPROC_(798)
	DEFHOOKPROC_(799)
	DEFHOOKPROC_(800)
	DEFHOOKPROC_(801)
	DEFHOOKPROC_(802)
	DEFHOOKPROC_(803)
	DEFHOOKPROC_(804)
	DEFHOOKPROC_(805)
	DEFHOOKPROC_(806)
	DEFHOOKPROC_(807)
	DEFHOOKPROC_(808)
	DEFHOOKPROC_(809)
	DEFHOOKPROC_(810)
	DEFHOOKPROC_(811)
	DEFHOOKPROC_(812)
	DEFHOOKPROC_(813)
	DEFHOOKPROC_(814)
	DEFHOOKPROC_(815)
	DEFHOOKPROC_(816)
	DEFHOOKPROC_(817)
	DEFHOOKPROC_(818)
	DEFHOOKPROC_(819)
	DEFHOOKPROC_(820)
	DEFHOOKPROC_(821)
	DEFHOOKPROC_(822)
	DEFHOOKPROC_(823)
	DEFHOOKPROC_(824)
	DEFHOOKPROC_(825)
	DEFHOOKPROC_(826)
	DEFHOOKPROC_(827)
	DEFHOOKPROC_(828)
	DEFHOOKPROC_(829)
	DEFHOOKPROC_(830)
	DEFHOOKPROC_(831)
	DEFHOOKPROC_(832)
	DEFHOOKPROC_(833)
	DEFHOOKPROC_(834)
	DEFHOOKPROC_(835)
	DEFHOOKPROC_(836)
	DEFHOOKPROC_(837)
	DEFHOOKPROC_(838)
	DEFHOOKPROC_(839)
	DEFHOOKPROC_(840)
	DEFHOOKPROC_(841)
	DEFHOOKPROC_(842)
	DEFHOOKPROC_(843)
	DEFHOOKPROC_(844)
	DEFHOOKPROC_(845)
	DEFHOOKPROC_(846)
	DEFHOOKPROC_(847)
	DEFHOOKPROC_(848)
	DEFHOOKPROC_(849)
	DEFHOOKPROC_(850)
	DEFHOOKPROC_(851)
	DEFHOOKPROC_(852)
	DEFHOOKPROC_(853)
	DEFHOOKPROC_(854)
	DEFHOOKPROC_(855)
	DEFHOOKPROC_(856)
	DEFHOOKPROC_(857)
	DEFHOOKPROC_(858)
	DEFHOOKPROC_(859)
	DEFHOOKPROC_(860)
	DEFHOOKPROC_(861)
	DEFHOOKPROC_(862)
	DEFHOOKPROC_(863)
	DEFHOOKPROC_(864)
	DEFHOOKPROC_(865)
	DEFHOOKPROC_(866)
	DEFHOOKPROC_(867)
	DEFHOOKPROC_(868)
	DEFHOOKPROC_(869)
	DEFHOOKPROC_(870)
	DEFHOOKPROC_(871)
	DEFHOOKPROC_(872)
	DEFHOOKPROC_(873)
	DEFHOOKPROC_(874)
	DEFHOOKPROC_(875)
	DEFHOOKPROC_(876)
	DEFHOOKPROC_(877)
	DEFHOOKPROC_(878)
	DEFHOOKPROC_(879)
	DEFHOOKPROC_(880)
	DEFHOOKPROC_(881)
	DEFHOOKPROC_(882)
	DEFHOOKPROC_(883)
	DEFHOOKPROC_(884)
	DEFHOOKPROC_(885)
	DEFHOOKPROC_(886)
	DEFHOOKPROC_(887)
	DEFHOOKPROC_(888)
	DEFHOOKPROC_(889)
	DEFHOOKPROC_(890)
	DEFHOOKPROC_(891)
	DEFHOOKPROC_(892)
	DEFHOOKPROC_(893)
	DEFHOOKPROC_(894)
	DEFHOOKPROC_(895)
	DEFHOOKPROC_(896)
	DEFHOOKPROC_(897)
	DEFHOOKPROC_(898)
	DEFHOOKPROC_(899)
	DEFHOOKPROC_(900)
	DEFHOOKPROC_(901)
	DEFHOOKPROC_(902)
	DEFHOOKPROC_(903)
	DEFHOOKPROC_(904)
	DEFHOOKPROC_(905)
	DEFHOOKPROC_(906)
	DEFHOOKPROC_(907)
	DEFHOOKPROC_(908)
	DEFHOOKPROC_(909)
	DEFHOOKPROC_(910)
	DEFHOOKPROC_(911)
	DEFHOOKPROC_(912)
	DEFHOOKPROC_(913)
	DEFHOOKPROC_(914)
	DEFHOOKPROC_(915)
	DEFHOOKPROC_(916)
	DEFHOOKPROC_(917)
	DEFHOOKPROC_(918)
	DEFHOOKPROC_(919)
	DEFHOOKPROC_(920)
	DEFHOOKPROC_(921)
	DEFHOOKPROC_(922)
	DEFHOOKPROC_(923)
	DEFHOOKPROC_(924)
	DEFHOOKPROC_(925)
	DEFHOOKPROC_(926)
	DEFHOOKPROC_(927)
	DEFHOOKPROC_(928)
	DEFHOOKPROC_(929)
	DEFHOOKPROC_(930)
	DEFHOOKPROC_(931)
	DEFHOOKPROC_(932)
	DEFHOOKPROC_(933)
	DEFHOOKPROC_(934)
	DEFHOOKPROC_(935)
	DEFHOOKPROC_(936)
	DEFHOOKPROC_(937)
	DEFHOOKPROC_(938)
	DEFHOOKPROC_(939)
	DEFHOOKPROC_(940)
	DEFHOOKPROC_(941)
	DEFHOOKPROC_(942)
	DEFHOOKPROC_(943)
	DEFHOOKPROC_(944)
	DEFHOOKPROC_(945)
	DEFHOOKPROC_(946)
	DEFHOOKPROC_(947)
	DEFHOOKPROC_(948)
	DEFHOOKPROC_(949)
	DEFHOOKPROC_(950)
	DEFHOOKPROC_(951)
	DEFHOOKPROC_(952)
	DEFHOOKPROC_(953)
	DEFHOOKPROC_(954)
	DEFHOOKPROC_(955)
	DEFHOOKPROC_(956)
	DEFHOOKPROC_(957)
	DEFHOOKPROC_(958)
	DEFHOOKPROC_(959)
	DEFHOOKPROC_(960)
	DEFHOOKPROC_(961)
	DEFHOOKPROC_(962)
	DEFHOOKPROC_(963)
	DEFHOOKPROC_(964)
	DEFHOOKPROC_(965)
	DEFHOOKPROC_(966)
	DEFHOOKPROC_(967)
	DEFHOOKPROC_(968)
	DEFHOOKPROC_(969)
	DEFHOOKPROC_(970)
	DEFHOOKPROC_(971)
	DEFHOOKPROC_(972)
	DEFHOOKPROC_(973)
	DEFHOOKPROC_(974)
	DEFHOOKPROC_(975)
	DEFHOOKPROC_(976)
	DEFHOOKPROC_(977)
	DEFHOOKPROC_(978)
	DEFHOOKPROC_(979)
	DEFHOOKPROC_(980)
	DEFHOOKPROC_(981)
	DEFHOOKPROC_(982)
	DEFHOOKPROC_(983)
	DEFHOOKPROC_(984)
	DEFHOOKPROC_(985)
	DEFHOOKPROC_(986)
	DEFHOOKPROC_(987)
	DEFHOOKPROC_(988)
	DEFHOOKPROC_(989)
	DEFHOOKPROC_(990)
	DEFHOOKPROC_(991)
	DEFHOOKPROC_(992)
	DEFHOOKPROC_(993)
	DEFHOOKPROC_(994)
	DEFHOOKPROC_(995)
	DEFHOOKPROC_(996)
	DEFHOOKPROC_(997)
	DEFHOOKPROC_(998)
	DEFHOOKPROC_(999)
	DEFHOOKPROC_(1000)
	DEFHOOKPROC_(1001)
	DEFHOOKPROC_(1002)
	DEFHOOKPROC_(1003)
	DEFHOOKPROC_(1004)
	DEFHOOKPROC_(1005)
	DEFHOOKPROC_(1006)
	DEFHOOKPROC_(1007)
	DEFHOOKPROC_(1008)
	DEFHOOKPROC_(1009)
	DEFHOOKPROC_(1010)
	DEFHOOKPROC_(1011)
	DEFHOOKPROC_(1012)
	DEFHOOKPROC_(1013)
	DEFHOOKPROC_(1014)
	DEFHOOKPROC_(1015)
	DEFHOOKPROC_(1016)
	DEFHOOKPROC_(1017)
	DEFHOOKPROC_(1018)
	DEFHOOKPROC_(1019)
	DEFHOOKPROC_(1020)
	DEFHOOKPROC_(1021)
	DEFHOOKPROC_(1022)
	DEFHOOKPROC_(1023)
	DEFHOOKPROC_(1024)
#undef DEFHOOKPROC_
	static MYHOOKPROC hookProc_[1025]=
	{
		HookProc_0	,
		HookProc_1	,
		HookProc_2	,
		HookProc_3	,
		HookProc_4	,
		HookProc_5	,
		HookProc_6	,
		HookProc_7	,
		HookProc_8	,
		HookProc_9	,
		HookProc_10	,
		HookProc_11	,
		HookProc_12	,
		HookProc_13	,
		HookProc_14	,
		HookProc_15	,
		HookProc_16	,
		HookProc_17	,
		HookProc_18	,
		HookProc_19	,
		HookProc_20	,
		HookProc_21	,
		HookProc_22	,
		HookProc_23	,
		HookProc_24	,
		HookProc_25	,
		HookProc_26	,
		HookProc_27	,
		HookProc_28	,
		HookProc_29	,
		HookProc_30	,
		HookProc_31	,
		HookProc_32	,
		HookProc_33	,
		HookProc_34	,
		HookProc_35	,
		HookProc_36	,
		HookProc_37	,
		HookProc_38	,
		HookProc_39	,
		HookProc_40	,
		HookProc_41	,
		HookProc_42	,
		HookProc_43	,
		HookProc_44	,
		HookProc_45	,
		HookProc_46	,
		HookProc_47	,
		HookProc_48	,
		HookProc_49	,
		HookProc_50	,
		HookProc_51	,
		HookProc_52	,
		HookProc_53	,
		HookProc_54	,
		HookProc_55	,
		HookProc_56	,
		HookProc_57	,
		HookProc_58	,
		HookProc_59	,
		HookProc_60	,
		HookProc_61	,
		HookProc_62	,
		HookProc_63	,
		HookProc_64	,
		HookProc_65	,
		HookProc_66	,
		HookProc_67	,
		HookProc_68	,
		HookProc_69	,
		HookProc_70	,
		HookProc_71	,
		HookProc_72	,
		HookProc_73	,
		HookProc_74	,
		HookProc_75	,
		HookProc_76	,
		HookProc_77	,
		HookProc_78	,
		HookProc_79	,
		HookProc_80	,
		HookProc_81	,
		HookProc_82	,
		HookProc_83	,
		HookProc_84	,
		HookProc_85	,
		HookProc_86	,
		HookProc_87	,
		HookProc_88	,
		HookProc_89	,
		HookProc_90	,
		HookProc_91	,
		HookProc_92	,
		HookProc_93	,
		HookProc_94	,
		HookProc_95	,
		HookProc_96	,
		HookProc_97	,
		HookProc_98	,
		HookProc_99	,
		HookProc_100	,
		HookProc_101	,
		HookProc_102	,
		HookProc_103	,
		HookProc_104	,
		HookProc_105	,
		HookProc_106	,
		HookProc_107	,
		HookProc_108	,
		HookProc_109	,
		HookProc_110	,
		HookProc_111	,
		HookProc_112	,
		HookProc_113	,
		HookProc_114	,
		HookProc_115	,
		HookProc_116	,
		HookProc_117	,
		HookProc_118	,
		HookProc_119	,
		HookProc_120	,
		HookProc_121	,
		HookProc_122	,
		HookProc_123	,
		HookProc_124	,
		HookProc_125	,
		HookProc_126	,
		HookProc_127	,
		HookProc_128	,
		HookProc_129	,
		HookProc_130	,
		HookProc_131	,
		HookProc_132	,
		HookProc_133	,
		HookProc_134	,
		HookProc_135	,
		HookProc_136	,
		HookProc_137	,
		HookProc_138	,
		HookProc_139	,
		HookProc_140	,
		HookProc_141	,
		HookProc_142	,
		HookProc_143	,
		HookProc_144	,
		HookProc_145	,
		HookProc_146	,
		HookProc_147	,
		HookProc_148	,
		HookProc_149	,
		HookProc_150	,
		HookProc_151	,
		HookProc_152	,
		HookProc_153	,
		HookProc_154	,
		HookProc_155	,
		HookProc_156	,
		HookProc_157	,
		HookProc_158	,
		HookProc_159	,
		HookProc_160	,
		HookProc_161	,
		HookProc_162	,
		HookProc_163	,
		HookProc_164	,
		HookProc_165	,
		HookProc_166	,
		HookProc_167	,
		HookProc_168	,
		HookProc_169	,
		HookProc_170	,
		HookProc_171	,
		HookProc_172	,
		HookProc_173	,
		HookProc_174	,
		HookProc_175	,
		HookProc_176	,
		HookProc_177	,
		HookProc_178	,
		HookProc_179	,
		HookProc_180	,
		HookProc_181	,
		HookProc_182	,
		HookProc_183	,
		HookProc_184	,
		HookProc_185	,
		HookProc_186	,
		HookProc_187	,
		HookProc_188	,
		HookProc_189	,
		HookProc_190	,
		HookProc_191	,
		HookProc_192	,
		HookProc_193	,
		HookProc_194	,
		HookProc_195	,
		HookProc_196	,
		HookProc_197	,
		HookProc_198	,
		HookProc_199	,
		HookProc_200	,
		HookProc_201	,
		HookProc_202	,
		HookProc_203	,
		HookProc_204	,
		HookProc_205	,
		HookProc_206	,
		HookProc_207	,
		HookProc_208	,
		HookProc_209	,
		HookProc_210	,
		HookProc_211	,
		HookProc_212	,
		HookProc_213	,
		HookProc_214	,
		HookProc_215	,
		HookProc_216	,
		HookProc_217	,
		HookProc_218	,
		HookProc_219	,
		HookProc_220	,
		HookProc_221	,
		HookProc_222	,
		HookProc_223	,
		HookProc_224	,
		HookProc_225	,
		HookProc_226	,
		HookProc_227	,
		HookProc_228	,
		HookProc_229	,
		HookProc_230	,
		HookProc_231	,
		HookProc_232	,
		HookProc_233	,
		HookProc_234	,
		HookProc_235	,
		HookProc_236	,
		HookProc_237	,
		HookProc_238	,
		HookProc_239	,
		HookProc_240	,
		HookProc_241	,
		HookProc_242	,
		HookProc_243	,
		HookProc_244	,
		HookProc_245	,
		HookProc_246	,
		HookProc_247	,
		HookProc_248	,
		HookProc_249	,
		HookProc_250	,
		HookProc_251	,
		HookProc_252	,
		HookProc_253	,
		HookProc_254	,
		HookProc_255	,
		HookProc_256	,
		HookProc_257	,
		HookProc_258	,
		HookProc_259	,
		HookProc_260	,
		HookProc_261	,
		HookProc_262	,
		HookProc_263	,
		HookProc_264	,
		HookProc_265	,
		HookProc_266	,
		HookProc_267	,
		HookProc_268	,
		HookProc_269	,
		HookProc_270	,
		HookProc_271	,
		HookProc_272	,
		HookProc_273	,
		HookProc_274	,
		HookProc_275	,
		HookProc_276	,
		HookProc_277	,
		HookProc_278	,
		HookProc_279	,
		HookProc_280	,
		HookProc_281	,
		HookProc_282	,
		HookProc_283	,
		HookProc_284	,
		HookProc_285	,
		HookProc_286	,
		HookProc_287	,
		HookProc_288	,
		HookProc_289	,
		HookProc_290	,
		HookProc_291	,
		HookProc_292	,
		HookProc_293	,
		HookProc_294	,
		HookProc_295	,
		HookProc_296	,
		HookProc_297	,
		HookProc_298	,
		HookProc_299	,
		HookProc_300	,
		HookProc_301	,
		HookProc_302	,
		HookProc_303	,
		HookProc_304	,
		HookProc_305	,
		HookProc_306	,
		HookProc_307	,
		HookProc_308	,
		HookProc_309	,
		HookProc_310	,
		HookProc_311	,
		HookProc_312	,
		HookProc_313	,
		HookProc_314	,
		HookProc_315	,
		HookProc_316	,
		HookProc_317	,
		HookProc_318	,
		HookProc_319	,
		HookProc_320	,
		HookProc_321	,
		HookProc_322	,
		HookProc_323	,
		HookProc_324	,
		HookProc_325	,
		HookProc_326	,
		HookProc_327	,
		HookProc_328	,
		HookProc_329	,
		HookProc_330	,
		HookProc_331	,
		HookProc_332	,
		HookProc_333	,
		HookProc_334	,
		HookProc_335	,
		HookProc_336	,
		HookProc_337	,
		HookProc_338	,
		HookProc_339	,
		HookProc_340	,
		HookProc_341	,
		HookProc_342	,
		HookProc_343	,
		HookProc_344	,
		HookProc_345	,
		HookProc_346	,
		HookProc_347	,
		HookProc_348	,
		HookProc_349	,
		HookProc_350	,
		HookProc_351	,
		HookProc_352	,
		HookProc_353	,
		HookProc_354	,
		HookProc_355	,
		HookProc_356	,
		HookProc_357	,
		HookProc_358	,
		HookProc_359	,
		HookProc_360	,
		HookProc_361	,
		HookProc_362	,
		HookProc_363	,
		HookProc_364	,
		HookProc_365	,
		HookProc_366	,
		HookProc_367	,
		HookProc_368	,
		HookProc_369	,
		HookProc_370	,
		HookProc_371	,
		HookProc_372	,
		HookProc_373	,
		HookProc_374	,
		HookProc_375	,
		HookProc_376	,
		HookProc_377	,
		HookProc_378	,
		HookProc_379	,
		HookProc_380	,
		HookProc_381	,
		HookProc_382	,
		HookProc_383	,
		HookProc_384	,
		HookProc_385	,
		HookProc_386	,
		HookProc_387	,
		HookProc_388	,
		HookProc_389	,
		HookProc_390	,
		HookProc_391	,
		HookProc_392	,
		HookProc_393	,
		HookProc_394	,
		HookProc_395	,
		HookProc_396	,
		HookProc_397	,
		HookProc_398	,
		HookProc_399	,
		HookProc_400	,
		HookProc_401	,
		HookProc_402	,
		HookProc_403	,
		HookProc_404	,
		HookProc_405	,
		HookProc_406	,
		HookProc_407	,
		HookProc_408	,
		HookProc_409	,
		HookProc_410	,
		HookProc_411	,
		HookProc_412	,
		HookProc_413	,
		HookProc_414	,
		HookProc_415	,
		HookProc_416	,
		HookProc_417	,
		HookProc_418	,
		HookProc_419	,
		HookProc_420	,
		HookProc_421	,
		HookProc_422	,
		HookProc_423	,
		HookProc_424	,
		HookProc_425	,
		HookProc_426	,
		HookProc_427	,
		HookProc_428	,
		HookProc_429	,
		HookProc_430	,
		HookProc_431	,
		HookProc_432	,
		HookProc_433	,
		HookProc_434	,
		HookProc_435	,
		HookProc_436	,
		HookProc_437	,
		HookProc_438	,
		HookProc_439	,
		HookProc_440	,
		HookProc_441	,
		HookProc_442	,
		HookProc_443	,
		HookProc_444	,
		HookProc_445	,
		HookProc_446	,
		HookProc_447	,
		HookProc_448	,
		HookProc_449	,
		HookProc_450	,
		HookProc_451	,
		HookProc_452	,
		HookProc_453	,
		HookProc_454	,
		HookProc_455	,
		HookProc_456	,
		HookProc_457	,
		HookProc_458	,
		HookProc_459	,
		HookProc_460	,
		HookProc_461	,
		HookProc_462	,
		HookProc_463	,
		HookProc_464	,
		HookProc_465	,
		HookProc_466	,
		HookProc_467	,
		HookProc_468	,
		HookProc_469	,
		HookProc_470	,
		HookProc_471	,
		HookProc_472	,
		HookProc_473	,
		HookProc_474	,
		HookProc_475	,
		HookProc_476	,
		HookProc_477	,
		HookProc_478	,
		HookProc_479	,
		HookProc_480	,
		HookProc_481	,
		HookProc_482	,
		HookProc_483	,
		HookProc_484	,
		HookProc_485	,
		HookProc_486	,
		HookProc_487	,
		HookProc_488	,
		HookProc_489	,
		HookProc_490	,
		HookProc_491	,
		HookProc_492	,
		HookProc_493	,
		HookProc_494	,
		HookProc_495	,
		HookProc_496	,
		HookProc_497	,
		HookProc_498	,
		HookProc_499	,
		HookProc_500	,
		HookProc_501	,
		HookProc_502	,
		HookProc_503	,
		HookProc_504	,
		HookProc_505	,
		HookProc_506	,
		HookProc_507	,
		HookProc_508	,
		HookProc_509	,
		HookProc_510	,
		HookProc_511	,
		HookProc_512	,
		HookProc_513	,
		HookProc_514	,
		HookProc_515	,
		HookProc_516	,
		HookProc_517	,
		HookProc_518	,
		HookProc_519	,
		HookProc_520	,
		HookProc_521	,
		HookProc_522	,
		HookProc_523	,
		HookProc_524	,
		HookProc_525	,
		HookProc_526	,
		HookProc_527	,
		HookProc_528	,
		HookProc_529	,
		HookProc_530	,
		HookProc_531	,
		HookProc_532	,
		HookProc_533	,
		HookProc_534	,
		HookProc_535	,
		HookProc_536	,
		HookProc_537	,
		HookProc_538	,
		HookProc_539	,
		HookProc_540	,
		HookProc_541	,
		HookProc_542	,
		HookProc_543	,
		HookProc_544	,
		HookProc_545	,
		HookProc_546	,
		HookProc_547	,
		HookProc_548	,
		HookProc_549	,
		HookProc_550	,
		HookProc_551	,
		HookProc_552	,
		HookProc_553	,
		HookProc_554	,
		HookProc_555	,
		HookProc_556	,
		HookProc_557	,
		HookProc_558	,
		HookProc_559	,
		HookProc_560	,
		HookProc_561	,
		HookProc_562	,
		HookProc_563	,
		HookProc_564	,
		HookProc_565	,
		HookProc_566	,
		HookProc_567	,
		HookProc_568	,
		HookProc_569	,
		HookProc_570	,
		HookProc_571	,
		HookProc_572	,
		HookProc_573	,
		HookProc_574	,
		HookProc_575	,
		HookProc_576	,
		HookProc_577	,
		HookProc_578	,
		HookProc_579	,
		HookProc_580	,
		HookProc_581	,
		HookProc_582	,
		HookProc_583	,
		HookProc_584	,
		HookProc_585	,
		HookProc_586	,
		HookProc_587	,
		HookProc_588	,
		HookProc_589	,
		HookProc_590	,
		HookProc_591	,
		HookProc_592	,
		HookProc_593	,
		HookProc_594	,
		HookProc_595	,
		HookProc_596	,
		HookProc_597	,
		HookProc_598	,
		HookProc_599	,
		HookProc_600	,
		HookProc_601	,
		HookProc_602	,
		HookProc_603	,
		HookProc_604	,
		HookProc_605	,
		HookProc_606	,
		HookProc_607	,
		HookProc_608	,
		HookProc_609	,
		HookProc_610	,
		HookProc_611	,
		HookProc_612	,
		HookProc_613	,
		HookProc_614	,
		HookProc_615	,
		HookProc_616	,
		HookProc_617	,
		HookProc_618	,
		HookProc_619	,
		HookProc_620	,
		HookProc_621	,
		HookProc_622	,
		HookProc_623	,
		HookProc_624	,
		HookProc_625	,
		HookProc_626	,
		HookProc_627	,
		HookProc_628	,
		HookProc_629	,
		HookProc_630	,
		HookProc_631	,
		HookProc_632	,
		HookProc_633	,
		HookProc_634	,
		HookProc_635	,
		HookProc_636	,
		HookProc_637	,
		HookProc_638	,
		HookProc_639	,
		HookProc_640	,
		HookProc_641	,
		HookProc_642	,
		HookProc_643	,
		HookProc_644	,
		HookProc_645	,
		HookProc_646	,
		HookProc_647	,
		HookProc_648	,
		HookProc_649	,
		HookProc_650	,
		HookProc_651	,
		HookProc_652	,
		HookProc_653	,
		HookProc_654	,
		HookProc_655	,
		HookProc_656	,
		HookProc_657	,
		HookProc_658	,
		HookProc_659	,
		HookProc_660	,
		HookProc_661	,
		HookProc_662	,
		HookProc_663	,
		HookProc_664	,
		HookProc_665	,
		HookProc_666	,
		HookProc_667	,
		HookProc_668	,
		HookProc_669	,
		HookProc_670	,
		HookProc_671	,
		HookProc_672	,
		HookProc_673	,
		HookProc_674	,
		HookProc_675	,
		HookProc_676	,
		HookProc_677	,
		HookProc_678	,
		HookProc_679	,
		HookProc_680	,
		HookProc_681	,
		HookProc_682	,
		HookProc_683	,
		HookProc_684	,
		HookProc_685	,
		HookProc_686	,
		HookProc_687	,
		HookProc_688	,
		HookProc_689	,
		HookProc_690	,
		HookProc_691	,
		HookProc_692	,
		HookProc_693	,
		HookProc_694	,
		HookProc_695	,
		HookProc_696	,
		HookProc_697	,
		HookProc_698	,
		HookProc_699	,
		HookProc_700	,
		HookProc_701	,
		HookProc_702	,
		HookProc_703	,
		HookProc_704	,
		HookProc_705	,
		HookProc_706	,
		HookProc_707	,
		HookProc_708	,
		HookProc_709	,
		HookProc_710	,
		HookProc_711	,
		HookProc_712	,
		HookProc_713	,
		HookProc_714	,
		HookProc_715	,
		HookProc_716	,
		HookProc_717	,
		HookProc_718	,
		HookProc_719	,
		HookProc_720	,
		HookProc_721	,
		HookProc_722	,
		HookProc_723	,
		HookProc_724	,
		HookProc_725	,
		HookProc_726	,
		HookProc_727	,
		HookProc_728	,
		HookProc_729	,
		HookProc_730	,
		HookProc_731	,
		HookProc_732	,
		HookProc_733	,
		HookProc_734	,
		HookProc_735	,
		HookProc_736	,
		HookProc_737	,
		HookProc_738	,
		HookProc_739	,
		HookProc_740	,
		HookProc_741	,
		HookProc_742	,
		HookProc_743	,
		HookProc_744	,
		HookProc_745	,
		HookProc_746	,
		HookProc_747	,
		HookProc_748	,
		HookProc_749	,
		HookProc_750	,
		HookProc_751	,
		HookProc_752	,
		HookProc_753	,
		HookProc_754	,
		HookProc_755	,
		HookProc_756	,
		HookProc_757	,
		HookProc_758	,
		HookProc_759	,
		HookProc_760	,
		HookProc_761	,
		HookProc_762	,
		HookProc_763	,
		HookProc_764	,
		HookProc_765	,
		HookProc_766	,
		HookProc_767	,
		HookProc_768	,
		HookProc_769	,
		HookProc_770	,
		HookProc_771	,
		HookProc_772	,
		HookProc_773	,
		HookProc_774	,
		HookProc_775	,
		HookProc_776	,
		HookProc_777	,
		HookProc_778	,
		HookProc_779	,
		HookProc_780	,
		HookProc_781	,
		HookProc_782	,
		HookProc_783	,
		HookProc_784	,
		HookProc_785	,
		HookProc_786	,
		HookProc_787	,
		HookProc_788	,
		HookProc_789	,
		HookProc_790	,
		HookProc_791	,
		HookProc_792	,
		HookProc_793	,
		HookProc_794	,
		HookProc_795	,
		HookProc_796	,
		HookProc_797	,
		HookProc_798	,
		HookProc_799	,
		HookProc_800	,
		HookProc_801	,
		HookProc_802	,
		HookProc_803	,
		HookProc_804	,
		HookProc_805	,
		HookProc_806	,
		HookProc_807	,
		HookProc_808	,
		HookProc_809	,
		HookProc_810	,
		HookProc_811	,
		HookProc_812	,
		HookProc_813	,
		HookProc_814	,
		HookProc_815	,
		HookProc_816	,
		HookProc_817	,
		HookProc_818	,
		HookProc_819	,
		HookProc_820	,
		HookProc_821	,
		HookProc_822	,
		HookProc_823	,
		HookProc_824	,
		HookProc_825	,
		HookProc_826	,
		HookProc_827	,
		HookProc_828	,
		HookProc_829	,
		HookProc_830	,
		HookProc_831	,
		HookProc_832	,
		HookProc_833	,
		HookProc_834	,
		HookProc_835	,
		HookProc_836	,
		HookProc_837	,
		HookProc_838	,
		HookProc_839	,
		HookProc_840	,
		HookProc_841	,
		HookProc_842	,
		HookProc_843	,
		HookProc_844	,
		HookProc_845	,
		HookProc_846	,
		HookProc_847	,
		HookProc_848	,
		HookProc_849	,
		HookProc_850	,
		HookProc_851	,
		HookProc_852	,
		HookProc_853	,
		HookProc_854	,
		HookProc_855	,
		HookProc_856	,
		HookProc_857	,
		HookProc_858	,
		HookProc_859	,
		HookProc_860	,
		HookProc_861	,
		HookProc_862	,
		HookProc_863	,
		HookProc_864	,
		HookProc_865	,
		HookProc_866	,
		HookProc_867	,
		HookProc_868	,
		HookProc_869	,
		HookProc_870	,
		HookProc_871	,
		HookProc_872	,
		HookProc_873	,
		HookProc_874	,
		HookProc_875	,
		HookProc_876	,
		HookProc_877	,
		HookProc_878	,
		HookProc_879	,
		HookProc_880	,
		HookProc_881	,
		HookProc_882	,
		HookProc_883	,
		HookProc_884	,
		HookProc_885	,
		HookProc_886	,
		HookProc_887	,
		HookProc_888	,
		HookProc_889	,
		HookProc_890	,
		HookProc_891	,
		HookProc_892	,
		HookProc_893	,
		HookProc_894	,
		HookProc_895	,
		HookProc_896	,
		HookProc_897	,
		HookProc_898	,
		HookProc_899	,
		HookProc_900	,
		HookProc_901	,
		HookProc_902	,
		HookProc_903	,
		HookProc_904	,
		HookProc_905	,
		HookProc_906	,
		HookProc_907	,
		HookProc_908	,
		HookProc_909	,
		HookProc_910	,
		HookProc_911	,
		HookProc_912	,
		HookProc_913	,
		HookProc_914	,
		HookProc_915	,
		HookProc_916	,
		HookProc_917	,
		HookProc_918	,
		HookProc_919	,
		HookProc_920	,
		HookProc_921	,
		HookProc_922	,
		HookProc_923	,
		HookProc_924	,
		HookProc_925	,
		HookProc_926	,
		HookProc_927	,
		HookProc_928	,
		HookProc_929	,
		HookProc_930	,
		HookProc_931	,
		HookProc_932	,
		HookProc_933	,
		HookProc_934	,
		HookProc_935	,
		HookProc_936	,
		HookProc_937	,
		HookProc_938	,
		HookProc_939	,
		HookProc_940	,
		HookProc_941	,
		HookProc_942	,
		HookProc_943	,
		HookProc_944	,
		HookProc_945	,
		HookProc_946	,
		HookProc_947	,
		HookProc_948	,
		HookProc_949	,
		HookProc_950	,
		HookProc_951	,
		HookProc_952	,
		HookProc_953	,
		HookProc_954	,
		HookProc_955	,
		HookProc_956	,
		HookProc_957	,
		HookProc_958	,
		HookProc_959	,
		HookProc_960	,
		HookProc_961	,
		HookProc_962	,
		HookProc_963	,
		HookProc_964	,
		HookProc_965	,
		HookProc_966	,
		HookProc_967	,
		HookProc_968	,
		HookProc_969	,
		HookProc_970	,
		HookProc_971	,
		HookProc_972	,
		HookProc_973	,
		HookProc_974	,
		HookProc_975	,
		HookProc_976	,
		HookProc_977	,
		HookProc_978	,
		HookProc_979	,
		HookProc_980	,
		HookProc_981	,
		HookProc_982	,
		HookProc_983	,
		HookProc_984	,
		HookProc_985	,
		HookProc_986	,
		HookProc_987	,
		HookProc_988	,
		HookProc_989	,
		HookProc_990	,
		HookProc_991	,
		HookProc_992	,
		HookProc_993	,
		HookProc_994	,
		HookProc_995	,
		HookProc_996	,
		HookProc_997	,
		HookProc_998	,
		HookProc_999	,
		HookProc_1000	,
		HookProc_1001	,
		HookProc_1002	,
		HookProc_1003	,
		HookProc_1004	,
		HookProc_1005	,
		HookProc_1006	,
		HookProc_1007	,
		HookProc_1008	,
		HookProc_1009	,
		HookProc_1010	,
		HookProc_1011	,
		HookProc_1012	,
		HookProc_1013	,
		HookProc_1014	,
		HookProc_1015	,
		HookProc_1016	,
		HookProc_1017	,
		HookProc_1018	,
		HookProc_1019	,
		HookProc_1020	,
		HookProc_1021	,
		HookProc_1022	,
		HookProc_1023	,
		HookProc_1024	
	};			

#define DEFHOOKPROC(x) \
	static void __declspec(naked) HookProc##x()\
	{\
		HookProc(x);\
	}
	DEFHOOKPROC(0)
	DEFHOOKPROC(1)
	DEFHOOKPROC(2)
	DEFHOOKPROC(3)
	DEFHOOKPROC(4)
	DEFHOOKPROC(5)
	DEFHOOKPROC(6)
	DEFHOOKPROC(7)
	DEFHOOKPROC(8)
	DEFHOOKPROC(9)
	DEFHOOKPROC(10)
	DEFHOOKPROC(11)
	DEFHOOKPROC(12)
	DEFHOOKPROC(13)
	DEFHOOKPROC(14)
	DEFHOOKPROC(15)
	DEFHOOKPROC(16)
	DEFHOOKPROC(17)
	DEFHOOKPROC(18)
	DEFHOOKPROC(19)
	DEFHOOKPROC(20)
	DEFHOOKPROC(21)
	DEFHOOKPROC(22)
	DEFHOOKPROC(23)
	DEFHOOKPROC(24)
	DEFHOOKPROC(25)
	DEFHOOKPROC(26)
	DEFHOOKPROC(27)
	DEFHOOKPROC(28)
	DEFHOOKPROC(29)
	DEFHOOKPROC(30)
	DEFHOOKPROC(31)
	DEFHOOKPROC(32)
	DEFHOOKPROC(33)
	DEFHOOKPROC(34)
	DEFHOOKPROC(35)
	DEFHOOKPROC(36)
	DEFHOOKPROC(37)
	DEFHOOKPROC(38)
	DEFHOOKPROC(39)
	DEFHOOKPROC(40)
	DEFHOOKPROC(41)
	DEFHOOKPROC(42)
	DEFHOOKPROC(43)
	DEFHOOKPROC(44)
	DEFHOOKPROC(45)
	DEFHOOKPROC(46)
	DEFHOOKPROC(47)
	DEFHOOKPROC(48)
	DEFHOOKPROC(49)
	DEFHOOKPROC(50)
	DEFHOOKPROC(51)
	DEFHOOKPROC(52)
	DEFHOOKPROC(53)
	DEFHOOKPROC(54)
	DEFHOOKPROC(55)
	DEFHOOKPROC(56)
	DEFHOOKPROC(57)
	DEFHOOKPROC(58)
	DEFHOOKPROC(59)
	DEFHOOKPROC(60)
	DEFHOOKPROC(61)
	DEFHOOKPROC(62)
	DEFHOOKPROC(63)
	DEFHOOKPROC(64)
	DEFHOOKPROC(65)
	DEFHOOKPROC(66)
	DEFHOOKPROC(67)
	DEFHOOKPROC(68)
	DEFHOOKPROC(69)
	DEFHOOKPROC(70)
	DEFHOOKPROC(71)
	DEFHOOKPROC(72)
	DEFHOOKPROC(73)
	DEFHOOKPROC(74)
	DEFHOOKPROC(75)
	DEFHOOKPROC(76)
	DEFHOOKPROC(77)
	DEFHOOKPROC(78)
	DEFHOOKPROC(79)
	DEFHOOKPROC(80)
	DEFHOOKPROC(81)
	DEFHOOKPROC(82)
	DEFHOOKPROC(83)
	DEFHOOKPROC(84)
	DEFHOOKPROC(85)
	DEFHOOKPROC(86)
	DEFHOOKPROC(87)
	DEFHOOKPROC(88)
	DEFHOOKPROC(89)
	DEFHOOKPROC(90)
	DEFHOOKPROC(91)
	DEFHOOKPROC(92)
	DEFHOOKPROC(93)
	DEFHOOKPROC(94)
	DEFHOOKPROC(95)
	DEFHOOKPROC(96)
	DEFHOOKPROC(97)
	DEFHOOKPROC(98)
	DEFHOOKPROC(99)
	DEFHOOKPROC(100)
	DEFHOOKPROC(101)
	DEFHOOKPROC(102)
	DEFHOOKPROC(103)
	DEFHOOKPROC(104)
	DEFHOOKPROC(105)
	DEFHOOKPROC(106)
	DEFHOOKPROC(107)
	DEFHOOKPROC(108)
	DEFHOOKPROC(109)
	DEFHOOKPROC(110)
	DEFHOOKPROC(111)
	DEFHOOKPROC(112)
	DEFHOOKPROC(113)
	DEFHOOKPROC(114)
	DEFHOOKPROC(115)
	DEFHOOKPROC(116)
	DEFHOOKPROC(117)
	DEFHOOKPROC(118)
	DEFHOOKPROC(119)
	DEFHOOKPROC(120)
	DEFHOOKPROC(121)
	DEFHOOKPROC(122)
	DEFHOOKPROC(123)
	DEFHOOKPROC(124)
	DEFHOOKPROC(125)
	DEFHOOKPROC(126)
	DEFHOOKPROC(127)
	DEFHOOKPROC(128)
	DEFHOOKPROC(129)
	DEFHOOKPROC(130)
	DEFHOOKPROC(131)
	DEFHOOKPROC(132)
	DEFHOOKPROC(133)
	DEFHOOKPROC(134)
	DEFHOOKPROC(135)
	DEFHOOKPROC(136)
	DEFHOOKPROC(137)
	DEFHOOKPROC(138)
	DEFHOOKPROC(139)
	DEFHOOKPROC(140)
	DEFHOOKPROC(141)
	DEFHOOKPROC(142)
	DEFHOOKPROC(143)
	DEFHOOKPROC(144)
	DEFHOOKPROC(145)
	DEFHOOKPROC(146)
	DEFHOOKPROC(147)
	DEFHOOKPROC(148)
	DEFHOOKPROC(149)
	DEFHOOKPROC(150)
	DEFHOOKPROC(151)
	DEFHOOKPROC(152)
	DEFHOOKPROC(153)
	DEFHOOKPROC(154)
	DEFHOOKPROC(155)
	DEFHOOKPROC(156)
	DEFHOOKPROC(157)
	DEFHOOKPROC(158)
	DEFHOOKPROC(159)
	DEFHOOKPROC(160)
	DEFHOOKPROC(161)
	DEFHOOKPROC(162)
	DEFHOOKPROC(163)
	DEFHOOKPROC(164)
	DEFHOOKPROC(165)
	DEFHOOKPROC(166)
	DEFHOOKPROC(167)
	DEFHOOKPROC(168)
	DEFHOOKPROC(169)
	DEFHOOKPROC(170)
	DEFHOOKPROC(171)
	DEFHOOKPROC(172)
	DEFHOOKPROC(173)
	DEFHOOKPROC(174)
	DEFHOOKPROC(175)
	DEFHOOKPROC(176)
	DEFHOOKPROC(177)
	DEFHOOKPROC(178)
	DEFHOOKPROC(179)
	DEFHOOKPROC(180)
	DEFHOOKPROC(181)
	DEFHOOKPROC(182)
	DEFHOOKPROC(183)
	DEFHOOKPROC(184)
	DEFHOOKPROC(185)
	DEFHOOKPROC(186)
	DEFHOOKPROC(187)
	DEFHOOKPROC(188)
	DEFHOOKPROC(189)
	DEFHOOKPROC(190)
	DEFHOOKPROC(191)
	DEFHOOKPROC(192)
	DEFHOOKPROC(193)
	DEFHOOKPROC(194)
	DEFHOOKPROC(195)
	DEFHOOKPROC(196)
	DEFHOOKPROC(197)
	DEFHOOKPROC(198)
	DEFHOOKPROC(199)
	DEFHOOKPROC(200)
	DEFHOOKPROC(201)
	DEFHOOKPROC(202)
	DEFHOOKPROC(203)
	DEFHOOKPROC(204)
	DEFHOOKPROC(205)
	DEFHOOKPROC(206)
	DEFHOOKPROC(207)
	DEFHOOKPROC(208)
	DEFHOOKPROC(209)
	DEFHOOKPROC(210)
	DEFHOOKPROC(211)
	DEFHOOKPROC(212)
	DEFHOOKPROC(213)
	DEFHOOKPROC(214)
	DEFHOOKPROC(215)
	DEFHOOKPROC(216)
	DEFHOOKPROC(217)
	DEFHOOKPROC(218)
	DEFHOOKPROC(219)
	DEFHOOKPROC(220)
	DEFHOOKPROC(221)
	DEFHOOKPROC(222)
	DEFHOOKPROC(223)
	DEFHOOKPROC(224)
	DEFHOOKPROC(225)
	DEFHOOKPROC(226)
	DEFHOOKPROC(227)
	DEFHOOKPROC(228)
	DEFHOOKPROC(229)
	DEFHOOKPROC(230)
	DEFHOOKPROC(231)
	DEFHOOKPROC(232)
	DEFHOOKPROC(233)
	DEFHOOKPROC(234)
	DEFHOOKPROC(235)
	DEFHOOKPROC(236)
	DEFHOOKPROC(237)
	DEFHOOKPROC(238)
	DEFHOOKPROC(239)
	DEFHOOKPROC(240)
	DEFHOOKPROC(241)
	DEFHOOKPROC(242)
	DEFHOOKPROC(243)
	DEFHOOKPROC(244)
	DEFHOOKPROC(245)
	DEFHOOKPROC(246)
	DEFHOOKPROC(247)
	DEFHOOKPROC(248)
	DEFHOOKPROC(249)
	DEFHOOKPROC(250)
	DEFHOOKPROC(251)
	DEFHOOKPROC(252)
	DEFHOOKPROC(253)
	DEFHOOKPROC(254)
	DEFHOOKPROC(255)
	DEFHOOKPROC(256)
	DEFHOOKPROC(257)
	DEFHOOKPROC(258)
	DEFHOOKPROC(259)
	DEFHOOKPROC(260)
	DEFHOOKPROC(261)
	DEFHOOKPROC(262)
	DEFHOOKPROC(263)
	DEFHOOKPROC(264)
	DEFHOOKPROC(265)
	DEFHOOKPROC(266)
	DEFHOOKPROC(267)
	DEFHOOKPROC(268)
	DEFHOOKPROC(269)
	DEFHOOKPROC(270)
	DEFHOOKPROC(271)
	DEFHOOKPROC(272)
	DEFHOOKPROC(273)
	DEFHOOKPROC(274)
	DEFHOOKPROC(275)
	DEFHOOKPROC(276)
	DEFHOOKPROC(277)
	DEFHOOKPROC(278)
	DEFHOOKPROC(279)
	DEFHOOKPROC(280)
	DEFHOOKPROC(281)
	DEFHOOKPROC(282)
	DEFHOOKPROC(283)
	DEFHOOKPROC(284)
	DEFHOOKPROC(285)
	DEFHOOKPROC(286)
	DEFHOOKPROC(287)
	DEFHOOKPROC(288)
	DEFHOOKPROC(289)
	DEFHOOKPROC(290)
	DEFHOOKPROC(291)
	DEFHOOKPROC(292)
	DEFHOOKPROC(293)
	DEFHOOKPROC(294)
	DEFHOOKPROC(295)
	DEFHOOKPROC(296)
	DEFHOOKPROC(297)
	DEFHOOKPROC(298)
	DEFHOOKPROC(299)
	DEFHOOKPROC(300)
	DEFHOOKPROC(301)
	DEFHOOKPROC(302)
	DEFHOOKPROC(303)
	DEFHOOKPROC(304)
	DEFHOOKPROC(305)
	DEFHOOKPROC(306)
	DEFHOOKPROC(307)
	DEFHOOKPROC(308)
	DEFHOOKPROC(309)
	DEFHOOKPROC(310)
	DEFHOOKPROC(311)
	DEFHOOKPROC(312)
	DEFHOOKPROC(313)
	DEFHOOKPROC(314)
	DEFHOOKPROC(315)
	DEFHOOKPROC(316)
	DEFHOOKPROC(317)
	DEFHOOKPROC(318)
	DEFHOOKPROC(319)
	DEFHOOKPROC(320)
	DEFHOOKPROC(321)
	DEFHOOKPROC(322)
	DEFHOOKPROC(323)
	DEFHOOKPROC(324)
	DEFHOOKPROC(325)
	DEFHOOKPROC(326)
	DEFHOOKPROC(327)
	DEFHOOKPROC(328)
	DEFHOOKPROC(329)
	DEFHOOKPROC(330)
	DEFHOOKPROC(331)
	DEFHOOKPROC(332)
	DEFHOOKPROC(333)
	DEFHOOKPROC(334)
	DEFHOOKPROC(335)
	DEFHOOKPROC(336)
	DEFHOOKPROC(337)
	DEFHOOKPROC(338)
	DEFHOOKPROC(339)
	DEFHOOKPROC(340)
	DEFHOOKPROC(341)
	DEFHOOKPROC(342)
	DEFHOOKPROC(343)
	DEFHOOKPROC(344)
	DEFHOOKPROC(345)
	DEFHOOKPROC(346)
	DEFHOOKPROC(347)
	DEFHOOKPROC(348)
	DEFHOOKPROC(349)
	DEFHOOKPROC(350)
	DEFHOOKPROC(351)
	DEFHOOKPROC(352)
	DEFHOOKPROC(353)
	DEFHOOKPROC(354)
	DEFHOOKPROC(355)
	DEFHOOKPROC(356)
	DEFHOOKPROC(357)
	DEFHOOKPROC(358)
	DEFHOOKPROC(359)
	DEFHOOKPROC(360)
	DEFHOOKPROC(361)
	DEFHOOKPROC(362)
	DEFHOOKPROC(363)
	DEFHOOKPROC(364)
	DEFHOOKPROC(365)
	DEFHOOKPROC(366)
	DEFHOOKPROC(367)
	DEFHOOKPROC(368)
	DEFHOOKPROC(369)
	DEFHOOKPROC(370)
	DEFHOOKPROC(371)
	DEFHOOKPROC(372)
	DEFHOOKPROC(373)
	DEFHOOKPROC(374)
	DEFHOOKPROC(375)
	DEFHOOKPROC(376)
	DEFHOOKPROC(377)
	DEFHOOKPROC(378)
	DEFHOOKPROC(379)
	DEFHOOKPROC(380)
	DEFHOOKPROC(381)
	DEFHOOKPROC(382)
	DEFHOOKPROC(383)
	DEFHOOKPROC(384)
	DEFHOOKPROC(385)
	DEFHOOKPROC(386)
	DEFHOOKPROC(387)
	DEFHOOKPROC(388)
	DEFHOOKPROC(389)
	DEFHOOKPROC(390)
	DEFHOOKPROC(391)
	DEFHOOKPROC(392)
	DEFHOOKPROC(393)
	DEFHOOKPROC(394)
	DEFHOOKPROC(395)
	DEFHOOKPROC(396)
	DEFHOOKPROC(397)
	DEFHOOKPROC(398)
	DEFHOOKPROC(399)
	DEFHOOKPROC(400)
	DEFHOOKPROC(401)
	DEFHOOKPROC(402)
	DEFHOOKPROC(403)
	DEFHOOKPROC(404)
	DEFHOOKPROC(405)
	DEFHOOKPROC(406)
	DEFHOOKPROC(407)
	DEFHOOKPROC(408)
	DEFHOOKPROC(409)
	DEFHOOKPROC(410)
	DEFHOOKPROC(411)
	DEFHOOKPROC(412)
	DEFHOOKPROC(413)
	DEFHOOKPROC(414)
	DEFHOOKPROC(415)
	DEFHOOKPROC(416)
	DEFHOOKPROC(417)
	DEFHOOKPROC(418)
	DEFHOOKPROC(419)
	DEFHOOKPROC(420)
	DEFHOOKPROC(421)
	DEFHOOKPROC(422)
	DEFHOOKPROC(423)
	DEFHOOKPROC(424)
	DEFHOOKPROC(425)
	DEFHOOKPROC(426)
	DEFHOOKPROC(427)
	DEFHOOKPROC(428)
	DEFHOOKPROC(429)
	DEFHOOKPROC(430)
	DEFHOOKPROC(431)
	DEFHOOKPROC(432)
	DEFHOOKPROC(433)
	DEFHOOKPROC(434)
	DEFHOOKPROC(435)
	DEFHOOKPROC(436)
	DEFHOOKPROC(437)
	DEFHOOKPROC(438)
	DEFHOOKPROC(439)
	DEFHOOKPROC(440)
	DEFHOOKPROC(441)
	DEFHOOKPROC(442)
	DEFHOOKPROC(443)
	DEFHOOKPROC(444)
	DEFHOOKPROC(445)
	DEFHOOKPROC(446)
	DEFHOOKPROC(447)
	DEFHOOKPROC(448)
	DEFHOOKPROC(449)
	DEFHOOKPROC(450)
	DEFHOOKPROC(451)
	DEFHOOKPROC(452)
	DEFHOOKPROC(453)
	DEFHOOKPROC(454)
	DEFHOOKPROC(455)
	DEFHOOKPROC(456)
	DEFHOOKPROC(457)
	DEFHOOKPROC(458)
	DEFHOOKPROC(459)
	DEFHOOKPROC(460)
	DEFHOOKPROC(461)
	DEFHOOKPROC(462)
	DEFHOOKPROC(463)
	DEFHOOKPROC(464)
	DEFHOOKPROC(465)
	DEFHOOKPROC(466)
	DEFHOOKPROC(467)
	DEFHOOKPROC(468)
	DEFHOOKPROC(469)
	DEFHOOKPROC(470)
	DEFHOOKPROC(471)
	DEFHOOKPROC(472)
	DEFHOOKPROC(473)
	DEFHOOKPROC(474)
	DEFHOOKPROC(475)
	DEFHOOKPROC(476)
	DEFHOOKPROC(477)
	DEFHOOKPROC(478)
	DEFHOOKPROC(479)
	DEFHOOKPROC(480)
	DEFHOOKPROC(481)
	DEFHOOKPROC(482)
	DEFHOOKPROC(483)
	DEFHOOKPROC(484)
	DEFHOOKPROC(485)
	DEFHOOKPROC(486)
	DEFHOOKPROC(487)
	DEFHOOKPROC(488)
	DEFHOOKPROC(489)
	DEFHOOKPROC(490)
	DEFHOOKPROC(491)
	DEFHOOKPROC(492)
	DEFHOOKPROC(493)
	DEFHOOKPROC(494)
	DEFHOOKPROC(495)
	DEFHOOKPROC(496)
	DEFHOOKPROC(497)
	DEFHOOKPROC(498)
	DEFHOOKPROC(499)
	DEFHOOKPROC(500)
	DEFHOOKPROC(501)
	DEFHOOKPROC(502)
	DEFHOOKPROC(503)
	DEFHOOKPROC(504)
	DEFHOOKPROC(505)
	DEFHOOKPROC(506)
	DEFHOOKPROC(507)
	DEFHOOKPROC(508)
	DEFHOOKPROC(509)
	DEFHOOKPROC(510)
	DEFHOOKPROC(511)
	DEFHOOKPROC(512)
	DEFHOOKPROC(513)
	DEFHOOKPROC(514)
	DEFHOOKPROC(515)
	DEFHOOKPROC(516)
	DEFHOOKPROC(517)
	DEFHOOKPROC(518)
	DEFHOOKPROC(519)
	DEFHOOKPROC(520)
	DEFHOOKPROC(521)
	DEFHOOKPROC(522)
	DEFHOOKPROC(523)
	DEFHOOKPROC(524)
	DEFHOOKPROC(525)
	DEFHOOKPROC(526)
	DEFHOOKPROC(527)
	DEFHOOKPROC(528)
	DEFHOOKPROC(529)
	DEFHOOKPROC(530)
	DEFHOOKPROC(531)
	DEFHOOKPROC(532)
	DEFHOOKPROC(533)
	DEFHOOKPROC(534)
	DEFHOOKPROC(535)
	DEFHOOKPROC(536)
	DEFHOOKPROC(537)
	DEFHOOKPROC(538)
	DEFHOOKPROC(539)
	DEFHOOKPROC(540)
	DEFHOOKPROC(541)
	DEFHOOKPROC(542)
	DEFHOOKPROC(543)
	DEFHOOKPROC(544)
	DEFHOOKPROC(545)
	DEFHOOKPROC(546)
	DEFHOOKPROC(547)
	DEFHOOKPROC(548)
	DEFHOOKPROC(549)
	DEFHOOKPROC(550)
	DEFHOOKPROC(551)
	DEFHOOKPROC(552)
	DEFHOOKPROC(553)
	DEFHOOKPROC(554)
	DEFHOOKPROC(555)
	DEFHOOKPROC(556)
	DEFHOOKPROC(557)
	DEFHOOKPROC(558)
	DEFHOOKPROC(559)
	DEFHOOKPROC(560)
	DEFHOOKPROC(561)
	DEFHOOKPROC(562)
	DEFHOOKPROC(563)
	DEFHOOKPROC(564)
	DEFHOOKPROC(565)
	DEFHOOKPROC(566)
	DEFHOOKPROC(567)
	DEFHOOKPROC(568)
	DEFHOOKPROC(569)
	DEFHOOKPROC(570)
	DEFHOOKPROC(571)
	DEFHOOKPROC(572)
	DEFHOOKPROC(573)
	DEFHOOKPROC(574)
	DEFHOOKPROC(575)
	DEFHOOKPROC(576)
	DEFHOOKPROC(577)
	DEFHOOKPROC(578)
	DEFHOOKPROC(579)
	DEFHOOKPROC(580)
	DEFHOOKPROC(581)
	DEFHOOKPROC(582)
	DEFHOOKPROC(583)
	DEFHOOKPROC(584)
	DEFHOOKPROC(585)
	DEFHOOKPROC(586)
	DEFHOOKPROC(587)
	DEFHOOKPROC(588)
	DEFHOOKPROC(589)
	DEFHOOKPROC(590)
	DEFHOOKPROC(591)
	DEFHOOKPROC(592)
	DEFHOOKPROC(593)
	DEFHOOKPROC(594)
	DEFHOOKPROC(595)
	DEFHOOKPROC(596)
	DEFHOOKPROC(597)
	DEFHOOKPROC(598)
	DEFHOOKPROC(599)
	DEFHOOKPROC(600)
	DEFHOOKPROC(601)
	DEFHOOKPROC(602)
	DEFHOOKPROC(603)
	DEFHOOKPROC(604)
	DEFHOOKPROC(605)
	DEFHOOKPROC(606)
	DEFHOOKPROC(607)
	DEFHOOKPROC(608)
	DEFHOOKPROC(609)
	DEFHOOKPROC(610)
	DEFHOOKPROC(611)
	DEFHOOKPROC(612)
	DEFHOOKPROC(613)
	DEFHOOKPROC(614)
	DEFHOOKPROC(615)
	DEFHOOKPROC(616)
	DEFHOOKPROC(617)
	DEFHOOKPROC(618)
	DEFHOOKPROC(619)
	DEFHOOKPROC(620)
	DEFHOOKPROC(621)
	DEFHOOKPROC(622)
	DEFHOOKPROC(623)
	DEFHOOKPROC(624)
	DEFHOOKPROC(625)
	DEFHOOKPROC(626)
	DEFHOOKPROC(627)
	DEFHOOKPROC(628)
	DEFHOOKPROC(629)
	DEFHOOKPROC(630)
	DEFHOOKPROC(631)
	DEFHOOKPROC(632)
	DEFHOOKPROC(633)
	DEFHOOKPROC(634)
	DEFHOOKPROC(635)
	DEFHOOKPROC(636)
	DEFHOOKPROC(637)
	DEFHOOKPROC(638)
	DEFHOOKPROC(639)
	DEFHOOKPROC(640)
	DEFHOOKPROC(641)
	DEFHOOKPROC(642)
	DEFHOOKPROC(643)
	DEFHOOKPROC(644)
	DEFHOOKPROC(645)
	DEFHOOKPROC(646)
	DEFHOOKPROC(647)
	DEFHOOKPROC(648)
	DEFHOOKPROC(649)
	DEFHOOKPROC(650)
	DEFHOOKPROC(651)
	DEFHOOKPROC(652)
	DEFHOOKPROC(653)
	DEFHOOKPROC(654)
	DEFHOOKPROC(655)
	DEFHOOKPROC(656)
	DEFHOOKPROC(657)
	DEFHOOKPROC(658)
	DEFHOOKPROC(659)
	DEFHOOKPROC(660)
	DEFHOOKPROC(661)
	DEFHOOKPROC(662)
	DEFHOOKPROC(663)
	DEFHOOKPROC(664)
	DEFHOOKPROC(665)
	DEFHOOKPROC(666)
	DEFHOOKPROC(667)
	DEFHOOKPROC(668)
	DEFHOOKPROC(669)
	DEFHOOKPROC(670)
	DEFHOOKPROC(671)
	DEFHOOKPROC(672)
	DEFHOOKPROC(673)
	DEFHOOKPROC(674)
	DEFHOOKPROC(675)
	DEFHOOKPROC(676)
	DEFHOOKPROC(677)
	DEFHOOKPROC(678)
	DEFHOOKPROC(679)
	DEFHOOKPROC(680)
	DEFHOOKPROC(681)
	DEFHOOKPROC(682)
	DEFHOOKPROC(683)
	DEFHOOKPROC(684)
	DEFHOOKPROC(685)
	DEFHOOKPROC(686)
	DEFHOOKPROC(687)
	DEFHOOKPROC(688)
	DEFHOOKPROC(689)
	DEFHOOKPROC(690)
	DEFHOOKPROC(691)
	DEFHOOKPROC(692)
	DEFHOOKPROC(693)
	DEFHOOKPROC(694)
	DEFHOOKPROC(695)
	DEFHOOKPROC(696)
	DEFHOOKPROC(697)
	DEFHOOKPROC(698)
	DEFHOOKPROC(699)
	DEFHOOKPROC(700)
	DEFHOOKPROC(701)
	DEFHOOKPROC(702)
	DEFHOOKPROC(703)
	DEFHOOKPROC(704)
	DEFHOOKPROC(705)
	DEFHOOKPROC(706)
	DEFHOOKPROC(707)
	DEFHOOKPROC(708)
	DEFHOOKPROC(709)
	DEFHOOKPROC(710)
	DEFHOOKPROC(711)
	DEFHOOKPROC(712)
	DEFHOOKPROC(713)
	DEFHOOKPROC(714)
	DEFHOOKPROC(715)
	DEFHOOKPROC(716)
	DEFHOOKPROC(717)
	DEFHOOKPROC(718)
	DEFHOOKPROC(719)
	DEFHOOKPROC(720)
	DEFHOOKPROC(721)
	DEFHOOKPROC(722)
	DEFHOOKPROC(723)
	DEFHOOKPROC(724)
	DEFHOOKPROC(725)
	DEFHOOKPROC(726)
	DEFHOOKPROC(727)
	DEFHOOKPROC(728)
	DEFHOOKPROC(729)
	DEFHOOKPROC(730)
	DEFHOOKPROC(731)
	DEFHOOKPROC(732)
	DEFHOOKPROC(733)
	DEFHOOKPROC(734)
	DEFHOOKPROC(735)
	DEFHOOKPROC(736)
	DEFHOOKPROC(737)
	DEFHOOKPROC(738)
	DEFHOOKPROC(739)
	DEFHOOKPROC(740)
	DEFHOOKPROC(741)
	DEFHOOKPROC(742)
	DEFHOOKPROC(743)
	DEFHOOKPROC(744)
	DEFHOOKPROC(745)
	DEFHOOKPROC(746)
	DEFHOOKPROC(747)
	DEFHOOKPROC(748)
	DEFHOOKPROC(749)
	DEFHOOKPROC(750)
	DEFHOOKPROC(751)
	DEFHOOKPROC(752)
	DEFHOOKPROC(753)
	DEFHOOKPROC(754)
	DEFHOOKPROC(755)
	DEFHOOKPROC(756)
	DEFHOOKPROC(757)
	DEFHOOKPROC(758)
	DEFHOOKPROC(759)
	DEFHOOKPROC(760)
	DEFHOOKPROC(761)
	DEFHOOKPROC(762)
	DEFHOOKPROC(763)
	DEFHOOKPROC(764)
	DEFHOOKPROC(765)
	DEFHOOKPROC(766)
	DEFHOOKPROC(767)
	DEFHOOKPROC(768)
	DEFHOOKPROC(769)
	DEFHOOKPROC(770)
	DEFHOOKPROC(771)
	DEFHOOKPROC(772)
	DEFHOOKPROC(773)
	DEFHOOKPROC(774)
	DEFHOOKPROC(775)
	DEFHOOKPROC(776)
	DEFHOOKPROC(777)
	DEFHOOKPROC(778)
	DEFHOOKPROC(779)
	DEFHOOKPROC(780)
	DEFHOOKPROC(781)
	DEFHOOKPROC(782)
	DEFHOOKPROC(783)
	DEFHOOKPROC(784)
	DEFHOOKPROC(785)
	DEFHOOKPROC(786)
	DEFHOOKPROC(787)
	DEFHOOKPROC(788)
	DEFHOOKPROC(789)
	DEFHOOKPROC(790)
	DEFHOOKPROC(791)
	DEFHOOKPROC(792)
	DEFHOOKPROC(793)
	DEFHOOKPROC(794)
	DEFHOOKPROC(795)
	DEFHOOKPROC(796)
	DEFHOOKPROC(797)
	DEFHOOKPROC(798)
	DEFHOOKPROC(799)
	DEFHOOKPROC(800)
	DEFHOOKPROC(801)
	DEFHOOKPROC(802)
	DEFHOOKPROC(803)
	DEFHOOKPROC(804)
	DEFHOOKPROC(805)
	DEFHOOKPROC(806)
	DEFHOOKPROC(807)
	DEFHOOKPROC(808)
	DEFHOOKPROC(809)
	DEFHOOKPROC(810)
	DEFHOOKPROC(811)
	DEFHOOKPROC(812)
	DEFHOOKPROC(813)
	DEFHOOKPROC(814)
	DEFHOOKPROC(815)
	DEFHOOKPROC(816)
	DEFHOOKPROC(817)
	DEFHOOKPROC(818)
	DEFHOOKPROC(819)
	DEFHOOKPROC(820)
	DEFHOOKPROC(821)
	DEFHOOKPROC(822)
	DEFHOOKPROC(823)
	DEFHOOKPROC(824)
	DEFHOOKPROC(825)
	DEFHOOKPROC(826)
	DEFHOOKPROC(827)
	DEFHOOKPROC(828)
	DEFHOOKPROC(829)
	DEFHOOKPROC(830)
	DEFHOOKPROC(831)
	DEFHOOKPROC(832)
	DEFHOOKPROC(833)
	DEFHOOKPROC(834)
	DEFHOOKPROC(835)
	DEFHOOKPROC(836)
	DEFHOOKPROC(837)
	DEFHOOKPROC(838)
	DEFHOOKPROC(839)
	DEFHOOKPROC(840)
	DEFHOOKPROC(841)
	DEFHOOKPROC(842)
	DEFHOOKPROC(843)
	DEFHOOKPROC(844)
	DEFHOOKPROC(845)
	DEFHOOKPROC(846)
	DEFHOOKPROC(847)
	DEFHOOKPROC(848)
	DEFHOOKPROC(849)
	DEFHOOKPROC(850)
	DEFHOOKPROC(851)
	DEFHOOKPROC(852)
	DEFHOOKPROC(853)
	DEFHOOKPROC(854)
	DEFHOOKPROC(855)
	DEFHOOKPROC(856)
	DEFHOOKPROC(857)
	DEFHOOKPROC(858)
	DEFHOOKPROC(859)
	DEFHOOKPROC(860)
	DEFHOOKPROC(861)
	DEFHOOKPROC(862)
	DEFHOOKPROC(863)
	DEFHOOKPROC(864)
	DEFHOOKPROC(865)
	DEFHOOKPROC(866)
	DEFHOOKPROC(867)
	DEFHOOKPROC(868)
	DEFHOOKPROC(869)
	DEFHOOKPROC(870)
	DEFHOOKPROC(871)
	DEFHOOKPROC(872)
	DEFHOOKPROC(873)
	DEFHOOKPROC(874)
	DEFHOOKPROC(875)
	DEFHOOKPROC(876)
	DEFHOOKPROC(877)
	DEFHOOKPROC(878)
	DEFHOOKPROC(879)
	DEFHOOKPROC(880)
	DEFHOOKPROC(881)
	DEFHOOKPROC(882)
	DEFHOOKPROC(883)
	DEFHOOKPROC(884)
	DEFHOOKPROC(885)
	DEFHOOKPROC(886)
	DEFHOOKPROC(887)
	DEFHOOKPROC(888)
	DEFHOOKPROC(889)
	DEFHOOKPROC(890)
	DEFHOOKPROC(891)
	DEFHOOKPROC(892)
	DEFHOOKPROC(893)
	DEFHOOKPROC(894)
	DEFHOOKPROC(895)
	DEFHOOKPROC(896)
	DEFHOOKPROC(897)
	DEFHOOKPROC(898)
	DEFHOOKPROC(899)
	DEFHOOKPROC(900)
	DEFHOOKPROC(901)
	DEFHOOKPROC(902)
	DEFHOOKPROC(903)
	DEFHOOKPROC(904)
	DEFHOOKPROC(905)
	DEFHOOKPROC(906)
	DEFHOOKPROC(907)
	DEFHOOKPROC(908)
	DEFHOOKPROC(909)
	DEFHOOKPROC(910)
	DEFHOOKPROC(911)
	DEFHOOKPROC(912)
	DEFHOOKPROC(913)
	DEFHOOKPROC(914)
	DEFHOOKPROC(915)
	DEFHOOKPROC(916)
	DEFHOOKPROC(917)
	DEFHOOKPROC(918)
	DEFHOOKPROC(919)
	DEFHOOKPROC(920)
	DEFHOOKPROC(921)
	DEFHOOKPROC(922)
	DEFHOOKPROC(923)
	DEFHOOKPROC(924)
	DEFHOOKPROC(925)
	DEFHOOKPROC(926)
	DEFHOOKPROC(927)
	DEFHOOKPROC(928)
	DEFHOOKPROC(929)
	DEFHOOKPROC(930)
	DEFHOOKPROC(931)
	DEFHOOKPROC(932)
	DEFHOOKPROC(933)
	DEFHOOKPROC(934)
	DEFHOOKPROC(935)
	DEFHOOKPROC(936)
	DEFHOOKPROC(937)
	DEFHOOKPROC(938)
	DEFHOOKPROC(939)
	DEFHOOKPROC(940)
	DEFHOOKPROC(941)
	DEFHOOKPROC(942)
	DEFHOOKPROC(943)
	DEFHOOKPROC(944)
	DEFHOOKPROC(945)
	DEFHOOKPROC(946)
	DEFHOOKPROC(947)
	DEFHOOKPROC(948)
	DEFHOOKPROC(949)
	DEFHOOKPROC(950)
	DEFHOOKPROC(951)
	DEFHOOKPROC(952)
	DEFHOOKPROC(953)
	DEFHOOKPROC(954)
	DEFHOOKPROC(955)
	DEFHOOKPROC(956)
	DEFHOOKPROC(957)
	DEFHOOKPROC(958)
	DEFHOOKPROC(959)
	DEFHOOKPROC(960)
	DEFHOOKPROC(961)
	DEFHOOKPROC(962)
	DEFHOOKPROC(963)
	DEFHOOKPROC(964)
	DEFHOOKPROC(965)
	DEFHOOKPROC(966)
	DEFHOOKPROC(967)
	DEFHOOKPROC(968)
	DEFHOOKPROC(969)
	DEFHOOKPROC(970)
	DEFHOOKPROC(971)
	DEFHOOKPROC(972)
	DEFHOOKPROC(973)
	DEFHOOKPROC(974)
	DEFHOOKPROC(975)
	DEFHOOKPROC(976)
	DEFHOOKPROC(977)
	DEFHOOKPROC(978)
	DEFHOOKPROC(979)
	DEFHOOKPROC(980)
	DEFHOOKPROC(981)
	DEFHOOKPROC(982)
	DEFHOOKPROC(983)
	DEFHOOKPROC(984)
	DEFHOOKPROC(985)
	DEFHOOKPROC(986)
	DEFHOOKPROC(987)
	DEFHOOKPROC(988)
	DEFHOOKPROC(989)
	DEFHOOKPROC(990)
	DEFHOOKPROC(991)
	DEFHOOKPROC(992)
	DEFHOOKPROC(993)
	DEFHOOKPROC(994)
	DEFHOOKPROC(995)
	DEFHOOKPROC(996)
	DEFHOOKPROC(997)
	DEFHOOKPROC(998)
	DEFHOOKPROC(999)
	DEFHOOKPROC(1000)
	DEFHOOKPROC(1001)
	DEFHOOKPROC(1002)
	DEFHOOKPROC(1003)
	DEFHOOKPROC(1004)
	DEFHOOKPROC(1005)
	DEFHOOKPROC(1006)
	DEFHOOKPROC(1007)
	DEFHOOKPROC(1008)
	DEFHOOKPROC(1009)
	DEFHOOKPROC(1010)
	DEFHOOKPROC(1011)
	DEFHOOKPROC(1012)
	DEFHOOKPROC(1013)
	DEFHOOKPROC(1014)
	DEFHOOKPROC(1015)
	DEFHOOKPROC(1016)
	DEFHOOKPROC(1017)
	DEFHOOKPROC(1018)
	DEFHOOKPROC(1019)
	DEFHOOKPROC(1020)
	DEFHOOKPROC(1021)
	DEFHOOKPROC(1022)
	DEFHOOKPROC(1023)
	DEFHOOKPROC(1024)
#undef DEFHOOKPROC
	static MYHOOKPROC hookProc[1025]=
	{
		HookProc0	,
		HookProc1	,
		HookProc2	,
		HookProc3	,
		HookProc4	,
		HookProc5	,
		HookProc6	,
		HookProc7	,
		HookProc8	,
		HookProc9	,
		HookProc10	,
		HookProc11	,
		HookProc12	,
		HookProc13	,
		HookProc14	,
		HookProc15	,
		HookProc16	,
		HookProc17	,
		HookProc18	,
		HookProc19	,
		HookProc20	,
		HookProc21	,
		HookProc22	,
		HookProc23	,
		HookProc24	,
		HookProc25	,
		HookProc26	,
		HookProc27	,
		HookProc28	,
		HookProc29	,
		HookProc30	,
		HookProc31	,
		HookProc32	,
		HookProc33	,
		HookProc34	,
		HookProc35	,
		HookProc36	,
		HookProc37	,
		HookProc38	,
		HookProc39	,
		HookProc40	,
		HookProc41	,
		HookProc42	,
		HookProc43	,
		HookProc44	,
		HookProc45	,
		HookProc46	,
		HookProc47	,
		HookProc48	,
		HookProc49	,
		HookProc50	,
		HookProc51	,
		HookProc52	,
		HookProc53	,
		HookProc54	,
		HookProc55	,
		HookProc56	,
		HookProc57	,
		HookProc58	,
		HookProc59	,
		HookProc60	,
		HookProc61	,
		HookProc62	,
		HookProc63	,
		HookProc64	,
		HookProc65	,
		HookProc66	,
		HookProc67	,
		HookProc68	,
		HookProc69	,
		HookProc70	,
		HookProc71	,
		HookProc72	,
		HookProc73	,
		HookProc74	,
		HookProc75	,
		HookProc76	,
		HookProc77	,
		HookProc78	,
		HookProc79	,
		HookProc80	,
		HookProc81	,
		HookProc82	,
		HookProc83	,
		HookProc84	,
		HookProc85	,
		HookProc86	,
		HookProc87	,
		HookProc88	,
		HookProc89	,
		HookProc90	,
		HookProc91	,
		HookProc92	,
		HookProc93	,
		HookProc94	,
		HookProc95	,
		HookProc96	,
		HookProc97	,
		HookProc98	,
		HookProc99	,
		HookProc100	,
		HookProc101	,
		HookProc102	,
		HookProc103	,
		HookProc104	,
		HookProc105	,
		HookProc106	,
		HookProc107	,
		HookProc108	,
		HookProc109	,
		HookProc110	,
		HookProc111	,
		HookProc112	,
		HookProc113	,
		HookProc114	,
		HookProc115	,
		HookProc116	,
		HookProc117	,
		HookProc118	,
		HookProc119	,
		HookProc120	,
		HookProc121	,
		HookProc122	,
		HookProc123	,
		HookProc124	,
		HookProc125	,
		HookProc126	,
		HookProc127	,
		HookProc128	,
		HookProc129	,
		HookProc130	,
		HookProc131	,
		HookProc132	,
		HookProc133	,
		HookProc134	,
		HookProc135	,
		HookProc136	,
		HookProc137	,
		HookProc138	,
		HookProc139	,
		HookProc140	,
		HookProc141	,
		HookProc142	,
		HookProc143	,
		HookProc144	,
		HookProc145	,
		HookProc146	,
		HookProc147	,
		HookProc148	,
		HookProc149	,
		HookProc150	,
		HookProc151	,
		HookProc152	,
		HookProc153	,
		HookProc154	,
		HookProc155	,
		HookProc156	,
		HookProc157	,
		HookProc158	,
		HookProc159	,
		HookProc160	,
		HookProc161	,
		HookProc162	,
		HookProc163	,
		HookProc164	,
		HookProc165	,
		HookProc166	,
		HookProc167	,
		HookProc168	,
		HookProc169	,
		HookProc170	,
		HookProc171	,
		HookProc172	,
		HookProc173	,
		HookProc174	,
		HookProc175	,
		HookProc176	,
		HookProc177	,
		HookProc178	,
		HookProc179	,
		HookProc180	,
		HookProc181	,
		HookProc182	,
		HookProc183	,
		HookProc184	,
		HookProc185	,
		HookProc186	,
		HookProc187	,
		HookProc188	,
		HookProc189	,
		HookProc190	,
		HookProc191	,
		HookProc192	,
		HookProc193	,
		HookProc194	,
		HookProc195	,
		HookProc196	,
		HookProc197	,
		HookProc198	,
		HookProc199	,
		HookProc200	,
		HookProc201	,
		HookProc202	,
		HookProc203	,
		HookProc204	,
		HookProc205	,
		HookProc206	,
		HookProc207	,
		HookProc208	,
		HookProc209	,
		HookProc210	,
		HookProc211	,
		HookProc212	,
		HookProc213	,
		HookProc214	,
		HookProc215	,
		HookProc216	,
		HookProc217	,
		HookProc218	,
		HookProc219	,
		HookProc220	,
		HookProc221	,
		HookProc222	,
		HookProc223	,
		HookProc224	,
		HookProc225	,
		HookProc226	,
		HookProc227	,
		HookProc228	,
		HookProc229	,
		HookProc230	,
		HookProc231	,
		HookProc232	,
		HookProc233	,
		HookProc234	,
		HookProc235	,
		HookProc236	,
		HookProc237	,
		HookProc238	,
		HookProc239	,
		HookProc240	,
		HookProc241	,
		HookProc242	,
		HookProc243	,
		HookProc244	,
		HookProc245	,
		HookProc246	,
		HookProc247	,
		HookProc248	,
		HookProc249	,
		HookProc250	,
		HookProc251	,
		HookProc252	,
		HookProc253	,
		HookProc254	,
		HookProc255	,
		HookProc256	,
		HookProc257	,
		HookProc258	,
		HookProc259	,
		HookProc260	,
		HookProc261	,
		HookProc262	,
		HookProc263	,
		HookProc264	,
		HookProc265	,
		HookProc266	,
		HookProc267	,
		HookProc268	,
		HookProc269	,
		HookProc270	,
		HookProc271	,
		HookProc272	,
		HookProc273	,
		HookProc274	,
		HookProc275	,
		HookProc276	,
		HookProc277	,
		HookProc278	,
		HookProc279	,
		HookProc280	,
		HookProc281	,
		HookProc282	,
		HookProc283	,
		HookProc284	,
		HookProc285	,
		HookProc286	,
		HookProc287	,
		HookProc288	,
		HookProc289	,
		HookProc290	,
		HookProc291	,
		HookProc292	,
		HookProc293	,
		HookProc294	,
		HookProc295	,
		HookProc296	,
		HookProc297	,
		HookProc298	,
		HookProc299	,
		HookProc300	,
		HookProc301	,
		HookProc302	,
		HookProc303	,
		HookProc304	,
		HookProc305	,
		HookProc306	,
		HookProc307	,
		HookProc308	,
		HookProc309	,
		HookProc310	,
		HookProc311	,
		HookProc312	,
		HookProc313	,
		HookProc314	,
		HookProc315	,
		HookProc316	,
		HookProc317	,
		HookProc318	,
		HookProc319	,
		HookProc320	,
		HookProc321	,
		HookProc322	,
		HookProc323	,
		HookProc324	,
		HookProc325	,
		HookProc326	,
		HookProc327	,
		HookProc328	,
		HookProc329	,
		HookProc330	,
		HookProc331	,
		HookProc332	,
		HookProc333	,
		HookProc334	,
		HookProc335	,
		HookProc336	,
		HookProc337	,
		HookProc338	,
		HookProc339	,
		HookProc340	,
		HookProc341	,
		HookProc342	,
		HookProc343	,
		HookProc344	,
		HookProc345	,
		HookProc346	,
		HookProc347	,
		HookProc348	,
		HookProc349	,
		HookProc350	,
		HookProc351	,
		HookProc352	,
		HookProc353	,
		HookProc354	,
		HookProc355	,
		HookProc356	,
		HookProc357	,
		HookProc358	,
		HookProc359	,
		HookProc360	,
		HookProc361	,
		HookProc362	,
		HookProc363	,
		HookProc364	,
		HookProc365	,
		HookProc366	,
		HookProc367	,
		HookProc368	,
		HookProc369	,
		HookProc370	,
		HookProc371	,
		HookProc372	,
		HookProc373	,
		HookProc374	,
		HookProc375	,
		HookProc376	,
		HookProc377	,
		HookProc378	,
		HookProc379	,
		HookProc380	,
		HookProc381	,
		HookProc382	,
		HookProc383	,
		HookProc384	,
		HookProc385	,
		HookProc386	,
		HookProc387	,
		HookProc388	,
		HookProc389	,
		HookProc390	,
		HookProc391	,
		HookProc392	,
		HookProc393	,
		HookProc394	,
		HookProc395	,
		HookProc396	,
		HookProc397	,
		HookProc398	,
		HookProc399	,
		HookProc400	,
		HookProc401	,
		HookProc402	,
		HookProc403	,
		HookProc404	,
		HookProc405	,
		HookProc406	,
		HookProc407	,
		HookProc408	,
		HookProc409	,
		HookProc410	,
		HookProc411	,
		HookProc412	,
		HookProc413	,
		HookProc414	,
		HookProc415	,
		HookProc416	,
		HookProc417	,
		HookProc418	,
		HookProc419	,
		HookProc420	,
		HookProc421	,
		HookProc422	,
		HookProc423	,
		HookProc424	,
		HookProc425	,
		HookProc426	,
		HookProc427	,
		HookProc428	,
		HookProc429	,
		HookProc430	,
		HookProc431	,
		HookProc432	,
		HookProc433	,
		HookProc434	,
		HookProc435	,
		HookProc436	,
		HookProc437	,
		HookProc438	,
		HookProc439	,
		HookProc440	,
		HookProc441	,
		HookProc442	,
		HookProc443	,
		HookProc444	,
		HookProc445	,
		HookProc446	,
		HookProc447	,
		HookProc448	,
		HookProc449	,
		HookProc450	,
		HookProc451	,
		HookProc452	,
		HookProc453	,
		HookProc454	,
		HookProc455	,
		HookProc456	,
		HookProc457	,
		HookProc458	,
		HookProc459	,
		HookProc460	,
		HookProc461	,
		HookProc462	,
		HookProc463	,
		HookProc464	,
		HookProc465	,
		HookProc466	,
		HookProc467	,
		HookProc468	,
		HookProc469	,
		HookProc470	,
		HookProc471	,
		HookProc472	,
		HookProc473	,
		HookProc474	,
		HookProc475	,
		HookProc476	,
		HookProc477	,
		HookProc478	,
		HookProc479	,
		HookProc480	,
		HookProc481	,
		HookProc482	,
		HookProc483	,
		HookProc484	,
		HookProc485	,
		HookProc486	,
		HookProc487	,
		HookProc488	,
		HookProc489	,
		HookProc490	,
		HookProc491	,
		HookProc492	,
		HookProc493	,
		HookProc494	,
		HookProc495	,
		HookProc496	,
		HookProc497	,
		HookProc498	,
		HookProc499	,
		HookProc500	,
		HookProc501	,
		HookProc502	,
		HookProc503	,
		HookProc504	,
		HookProc505	,
		HookProc506	,
		HookProc507	,
		HookProc508	,
		HookProc509	,
		HookProc510	,
		HookProc511	,
		HookProc512	,
		HookProc513	,
		HookProc514	,
		HookProc515	,
		HookProc516	,
		HookProc517	,
		HookProc518	,
		HookProc519	,
		HookProc520	,
		HookProc521	,
		HookProc522	,
		HookProc523	,
		HookProc524	,
		HookProc525	,
		HookProc526	,
		HookProc527	,
		HookProc528	,
		HookProc529	,
		HookProc530	,
		HookProc531	,
		HookProc532	,
		HookProc533	,
		HookProc534	,
		HookProc535	,
		HookProc536	,
		HookProc537	,
		HookProc538	,
		HookProc539	,
		HookProc540	,
		HookProc541	,
		HookProc542	,
		HookProc543	,
		HookProc544	,
		HookProc545	,
		HookProc546	,
		HookProc547	,
		HookProc548	,
		HookProc549	,
		HookProc550	,
		HookProc551	,
		HookProc552	,
		HookProc553	,
		HookProc554	,
		HookProc555	,
		HookProc556	,
		HookProc557	,
		HookProc558	,
		HookProc559	,
		HookProc560	,
		HookProc561	,
		HookProc562	,
		HookProc563	,
		HookProc564	,
		HookProc565	,
		HookProc566	,
		HookProc567	,
		HookProc568	,
		HookProc569	,
		HookProc570	,
		HookProc571	,
		HookProc572	,
		HookProc573	,
		HookProc574	,
		HookProc575	,
		HookProc576	,
		HookProc577	,
		HookProc578	,
		HookProc579	,
		HookProc580	,
		HookProc581	,
		HookProc582	,
		HookProc583	,
		HookProc584	,
		HookProc585	,
		HookProc586	,
		HookProc587	,
		HookProc588	,
		HookProc589	,
		HookProc590	,
		HookProc591	,
		HookProc592	,
		HookProc593	,
		HookProc594	,
		HookProc595	,
		HookProc596	,
		HookProc597	,
		HookProc598	,
		HookProc599	,
		HookProc600	,
		HookProc601	,
		HookProc602	,
		HookProc603	,
		HookProc604	,
		HookProc605	,
		HookProc606	,
		HookProc607	,
		HookProc608	,
		HookProc609	,
		HookProc610	,
		HookProc611	,
		HookProc612	,
		HookProc613	,
		HookProc614	,
		HookProc615	,
		HookProc616	,
		HookProc617	,
		HookProc618	,
		HookProc619	,
		HookProc620	,
		HookProc621	,
		HookProc622	,
		HookProc623	,
		HookProc624	,
		HookProc625	,
		HookProc626	,
		HookProc627	,
		HookProc628	,
		HookProc629	,
		HookProc630	,
		HookProc631	,
		HookProc632	,
		HookProc633	,
		HookProc634	,
		HookProc635	,
		HookProc636	,
		HookProc637	,
		HookProc638	,
		HookProc639	,
		HookProc640	,
		HookProc641	,
		HookProc642	,
		HookProc643	,
		HookProc644	,
		HookProc645	,
		HookProc646	,
		HookProc647	,
		HookProc648	,
		HookProc649	,
		HookProc650	,
		HookProc651	,
		HookProc652	,
		HookProc653	,
		HookProc654	,
		HookProc655	,
		HookProc656	,
		HookProc657	,
		HookProc658	,
		HookProc659	,
		HookProc660	,
		HookProc661	,
		HookProc662	,
		HookProc663	,
		HookProc664	,
		HookProc665	,
		HookProc666	,
		HookProc667	,
		HookProc668	,
		HookProc669	,
		HookProc670	,
		HookProc671	,
		HookProc672	,
		HookProc673	,
		HookProc674	,
		HookProc675	,
		HookProc676	,
		HookProc677	,
		HookProc678	,
		HookProc679	,
		HookProc680	,
		HookProc681	,
		HookProc682	,
		HookProc683	,
		HookProc684	,
		HookProc685	,
		HookProc686	,
		HookProc687	,
		HookProc688	,
		HookProc689	,
		HookProc690	,
		HookProc691	,
		HookProc692	,
		HookProc693	,
		HookProc694	,
		HookProc695	,
		HookProc696	,
		HookProc697	,
		HookProc698	,
		HookProc699	,
		HookProc700	,
		HookProc701	,
		HookProc702	,
		HookProc703	,
		HookProc704	,
		HookProc705	,
		HookProc706	,
		HookProc707	,
		HookProc708	,
		HookProc709	,
		HookProc710	,
		HookProc711	,
		HookProc712	,
		HookProc713	,
		HookProc714	,
		HookProc715	,
		HookProc716	,
		HookProc717	,
		HookProc718	,
		HookProc719	,
		HookProc720	,
		HookProc721	,
		HookProc722	,
		HookProc723	,
		HookProc724	,
		HookProc725	,
		HookProc726	,
		HookProc727	,
		HookProc728	,
		HookProc729	,
		HookProc730	,
		HookProc731	,
		HookProc732	,
		HookProc733	,
		HookProc734	,
		HookProc735	,
		HookProc736	,
		HookProc737	,
		HookProc738	,
		HookProc739	,
		HookProc740	,
		HookProc741	,
		HookProc742	,
		HookProc743	,
		HookProc744	,
		HookProc745	,
		HookProc746	,
		HookProc747	,
		HookProc748	,
		HookProc749	,
		HookProc750	,
		HookProc751	,
		HookProc752	,
		HookProc753	,
		HookProc754	,
		HookProc755	,
		HookProc756	,
		HookProc757	,
		HookProc758	,
		HookProc759	,
		HookProc760	,
		HookProc761	,
		HookProc762	,
		HookProc763	,
		HookProc764	,
		HookProc765	,
		HookProc766	,
		HookProc767	,
		HookProc768	,
		HookProc769	,
		HookProc770	,
		HookProc771	,
		HookProc772	,
		HookProc773	,
		HookProc774	,
		HookProc775	,
		HookProc776	,
		HookProc777	,
		HookProc778	,
		HookProc779	,
		HookProc780	,
		HookProc781	,
		HookProc782	,
		HookProc783	,
		HookProc784	,
		HookProc785	,
		HookProc786	,
		HookProc787	,
		HookProc788	,
		HookProc789	,
		HookProc790	,
		HookProc791	,
		HookProc792	,
		HookProc793	,
		HookProc794	,
		HookProc795	,
		HookProc796	,
		HookProc797	,
		HookProc798	,
		HookProc799	,
		HookProc800	,
		HookProc801	,
		HookProc802	,
		HookProc803	,
		HookProc804	,
		HookProc805	,
		HookProc806	,
		HookProc807	,
		HookProc808	,
		HookProc809	,
		HookProc810	,
		HookProc811	,
		HookProc812	,
		HookProc813	,
		HookProc814	,
		HookProc815	,
		HookProc816	,
		HookProc817	,
		HookProc818	,
		HookProc819	,
		HookProc820	,
		HookProc821	,
		HookProc822	,
		HookProc823	,
		HookProc824	,
		HookProc825	,
		HookProc826	,
		HookProc827	,
		HookProc828	,
		HookProc829	,
		HookProc830	,
		HookProc831	,
		HookProc832	,
		HookProc833	,
		HookProc834	,
		HookProc835	,
		HookProc836	,
		HookProc837	,
		HookProc838	,
		HookProc839	,
		HookProc840	,
		HookProc841	,
		HookProc842	,
		HookProc843	,
		HookProc844	,
		HookProc845	,
		HookProc846	,
		HookProc847	,
		HookProc848	,
		HookProc849	,
		HookProc850	,
		HookProc851	,
		HookProc852	,
		HookProc853	,
		HookProc854	,
		HookProc855	,
		HookProc856	,
		HookProc857	,
		HookProc858	,
		HookProc859	,
		HookProc860	,
		HookProc861	,
		HookProc862	,
		HookProc863	,
		HookProc864	,
		HookProc865	,
		HookProc866	,
		HookProc867	,
		HookProc868	,
		HookProc869	,
		HookProc870	,
		HookProc871	,
		HookProc872	,
		HookProc873	,
		HookProc874	,
		HookProc875	,
		HookProc876	,
		HookProc877	,
		HookProc878	,
		HookProc879	,
		HookProc880	,
		HookProc881	,
		HookProc882	,
		HookProc883	,
		HookProc884	,
		HookProc885	,
		HookProc886	,
		HookProc887	,
		HookProc888	,
		HookProc889	,
		HookProc890	,
		HookProc891	,
		HookProc892	,
		HookProc893	,
		HookProc894	,
		HookProc895	,
		HookProc896	,
		HookProc897	,
		HookProc898	,
		HookProc899	,
		HookProc900	,
		HookProc901	,
		HookProc902	,
		HookProc903	,
		HookProc904	,
		HookProc905	,
		HookProc906	,
		HookProc907	,
		HookProc908	,
		HookProc909	,
		HookProc910	,
		HookProc911	,
		HookProc912	,
		HookProc913	,
		HookProc914	,
		HookProc915	,
		HookProc916	,
		HookProc917	,
		HookProc918	,
		HookProc919	,
		HookProc920	,
		HookProc921	,
		HookProc922	,
		HookProc923	,
		HookProc924	,
		HookProc925	,
		HookProc926	,
		HookProc927	,
		HookProc928	,
		HookProc929	,
		HookProc930	,
		HookProc931	,
		HookProc932	,
		HookProc933	,
		HookProc934	,
		HookProc935	,
		HookProc936	,
		HookProc937	,
		HookProc938	,
		HookProc939	,
		HookProc940	,
		HookProc941	,
		HookProc942	,
		HookProc943	,
		HookProc944	,
		HookProc945	,
		HookProc946	,
		HookProc947	,
		HookProc948	,
		HookProc949	,
		HookProc950	,
		HookProc951	,
		HookProc952	,
		HookProc953	,
		HookProc954	,
		HookProc955	,
		HookProc956	,
		HookProc957	,
		HookProc958	,
		HookProc959	,
		HookProc960	,
		HookProc961	,
		HookProc962	,
		HookProc963	,
		HookProc964	,
		HookProc965	,
		HookProc966	,
		HookProc967	,
		HookProc968	,
		HookProc969	,
		HookProc970	,
		HookProc971	,
		HookProc972	,
		HookProc973	,
		HookProc974	,
		HookProc975	,
		HookProc976	,
		HookProc977	,
		HookProc978	,
		HookProc979	,
		HookProc980	,
		HookProc981	,
		HookProc982	,
		HookProc983	,
		HookProc984	,
		HookProc985	,
		HookProc986	,
		HookProc987	,
		HookProc988	,
		HookProc989	,
		HookProc990	,
		HookProc991	,
		HookProc992	,
		HookProc993	,
		HookProc994	,
		HookProc995	,
		HookProc996	,
		HookProc997	,
		HookProc998	,
		HookProc999	,
		HookProc1000	,
		HookProc1001	,
		HookProc1002	,
		HookProc1003	,
		HookProc1004	,
		HookProc1005	,
		HookProc1006	,
		HookProc1007	,
		HookProc1008	,
		HookProc1009	,
		HookProc1010	,
		HookProc1011	,
		HookProc1012	,
		HookProc1013	,
		HookProc1014	,
		HookProc1015	,
		HookProc1016	,
		HookProc1017	,
		HookProc1018	,
		HookProc1019	,
		HookProc1020	,
		HookProc1021	,
		HookProc1022	,
		HookProc1023	,
		HookProc1024	
	};					
		
	void Log(const char* mess)
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
	//使用线程局部存储来为钩子函数对CallScriptHook与CallBeforeExitScript函数的调用保存与传递信息，考虑到钩子函数的重入，
	//要求在CallScriptHook与CallBeforeExitScript中不同时既“清除重入标志”又调用“当前某个被钩住的函数或原函数或者直接或
	//间接调用前两类函数的函数”。
	long GetBaseAddr(void)
	{	
		long rt=(long)::TlsGetValue(tlsIndex);
		if(!rt)
		{
			void* p=::LocalAlloc(LPTR,256);
			::TlsSetValue(tlsIndex,p);
			memPtrs.push_back(p);

			char buf[128];
			::sprintf(buf,"thread id:%8.8X,no thread local storage,allocate it:%8.8X!",::GetCurrentThreadId(),(int)p);
			Log(buf);
			return (long)p;
		}
		else
			return rt;
	}
	//用脚本语言实现的钩子，这类钩子由用户交互式设定并可随时撤销
	static void __stdcall CallScriptHook_(int index,long eip,long thisPtr,long regedx,long regebx,long regebp,long regesi,long regedi,long regeax,long regesp,long regeflags,long paramPtr,long& directReturn,long& popNBytes)
	{	
		int segcs,segds,seges,segss,segfs,seggs;
		__asm
		{
			xor eax,eax
			mov ax,cs
			mov segcs,eax
			mov ax,ds
			mov segds,eax					
			mov ax,es
			mov seges,eax
			mov ax,fs
			mov segfs,eax
			mov ax,gs
			mov seggs,eax
			mov ax,ss
			mov segss,eax
		}
		HookFunc* f=hookFunc;
		f->Push();
		f->Init();
		f->PutCallData(eip,thisPtr,paramPtr);
		f->PutOriginalAPI(originAPI_[index]);
		f->PutSegmentRegister(segcs,segds,seges,segss,segfs,seggs);
		f->PutGeneralRegister(regedx,regebx,regebp,regesi,regedi,regeax,regesp,regeflags);
		try
		{				
			if(model)
			{
				UINT funcAddr=hookScript_[index];
				model->CallScript_(funcAddr,f);			
			}			
		}
		catch(...)
		{
			if(model)
			{
				model->RuntimeError("脚本调用错误！");			
			}
		}
		directReturn=f->get_DirectReturn();
		popNBytes=f->get_PopNBytes();
		//如果后续没有BeforeExit钩子，则进入函数时压入的HookFunc信息出栈。
		if(directReturn!=2)
				f->Pop();
	}
	static void __stdcall CallBeforeExitScript_(void)
	{
		HookFunc* f=hookFunc;
		try
		{
			if(model)
			{
				UINT funcAddr=f->get_BeforeExitScript();
				model->CallScript_(funcAddr,f);			
			}
		}
		catch(...)
		{
			if(model)
			{
				model->RuntimeError("函数返回时脚本调用错误！");			
			}
		}
		long baseAddr=GetBaseAddr();
		*(long*)(baseAddr+orginReturnAddr)=f->get_Eip();			
		f->Pop();
	}
	//功能描述: 这个函数用于钩住所要求的API，它由特殊处理构成,
	//		它自己处理参数栈与返回值（因此它用了naked修饰）。
	//返回类型: void 
	//参数列表: int index
	static void __declspec(naked) HookProc_(int index)
	{		
		__asm
		{
			push ebp
			mov ebp,esp
			sub esp,52				;为下面定义的局部变量分配空间			
		}
		long eip,paramPtr,directReturn,popNBytes,thisPtr,regedx,regebx,regebp,regesi,regedi,regeax,regesp,regeflags;
		__asm
		{
			mov regeax,eax
			mov regebx,ebx
			mov regesi,esi
			mov regedi,edi
			pushfd
			pop eax
			mov regeflags,eax
			mov eax,ebp
			mov eax,[eax]			;取出调用此函数时的ebp
			mov regebp,eax

			mov eax,[ebp+12]		;从调用者堆栈中取出指令指针
			mov eip,eax
			mov eax,ebp
			add eax,12				;钩住的指令是函数的首指令,因此钩子生效时的esp指向返回指令指针
			mov regesp,eax
			add eax,4				;设置API调用参数区域指针
			mov paramPtr,eax					
			mov thisPtr,ecx
			mov regedx,edx

			push edx
			push ecx
			call GetBaseAddr		;使用线程局部存储保存与传递上下文信息
			pop ecx
			pop edx
			test eax,eax			;如果取不到线程局部存储则不启用钩子
			jz tooriginal
			cmp dword ptr [eax],0	;如果是重入钩子函数则不启用钩子
			jna starthook	
tooriginal:
			mov eax,index
			shl eax,2
			add eax,offset originAPI_
			mov eax,[eax]			
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
						 			;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			jmp eax					;跳到原API函数
starthook:			
			mov dword ptr [eax+regEDX],edx
			mov dword ptr [eax+regECX],ecx
			mov dword ptr [eax],1			
			xor eax,eax
			mov directReturn,eax	;初始化
			mov popNBytes,eax
			
		}		
		CallScriptHook_(index,eip,thisPtr,regedx,regebx,regebp,regesi,regedi,regeax,regesp,regeflags,paramPtr,directReturn,popNBytes);
		__asm
		{	
			mov eax,directReturn
			test eax,eax
			jnz dreturn
			mov eax,index
			shl eax,2
			add eax,offset originAPI_
			mov eax,[eax]			
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
						 			;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			push eax
			call GetBaseAddr		;栈调整之后不能引用局部变量与参数;使用线程局部存储保存与传递上下文信息
			mov dword ptr [eax],0
			mov edx,[eax+regEDX]	;恢复进入此函数时的edx,ecx寄存器值
			mov ecx,[eax+regECX]
			pop eax
			jmp eax					;跳到原API函数
dreturn:			
			cmp eax,1
			ja beforeexit
			mov eax,popNBytes
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
									;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			pop edx					;弹出返回IP
			add esp,eax				;弹出调用参数			
			push edx				;压回返回IP			
			call GetBaseAddr		;栈调整之后不能引用局部变量与参数;使用线程局部存储保存与传递上下文信息
			mov dword ptr [eax],0			
			mov ecx,[eax+regECX]	;恢复进入此函数时的ecx寄存器值
			mov edx,[eax+regEDX]	;设置返回值高32位，若无则恢复进入时的edx值。						
			mov eax,[eax+regEAX]	;设置返回值低32位
			ret 0					;返回
beforeexit:
			mov eax,index
			shl eax,2
			add eax,offset originAPI_
			mov eax,[eax]
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
									;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			pop edx					;取出原调用函数的返回地址
			push eax
			call GetBaseAddr		;栈调整之后不能引用局部变量与参数;使用线程局部存储保存与传递上下文信息			
			mov edx,[eax+regEDX]	;恢复进入此函数时的edx,ecx寄存器值
			mov ecx,[eax+regECX]			
			pop eax
			call eax				;调用原API函数
			push ecx
			push edx
			push eax
			call GetBaseAddr			;使用线程局部存储保存与传递上下文信息
			pop dword ptr [eax+regEAX]	;设置缺省返回值的低32位
			pop dword ptr [eax+regEDX]	;设置缺省返回值的高32位，若无则记录返回时的edx值。
			pop dword ptr [eax+regECX]			
			mov dword ptr [eax],1
			call CallBeforeExitScript_		;调用退出函数钩子
			call GetBaseAddr			;使用线程局部存储保存与传递上下文信息
			mov ecx,[eax+regECX]		;恢复调用原API函数的返回时的ecx寄存器值
			push dword ptr [eax+orginReturnAddr]	;压回原调用函数的返回地址			
			mov dword ptr [eax],0
			mov edx,[eax+regEDX]		;设置返回值的高32位，若无则恢复edx值。
			mov eax,[eax+regEAX]		;设置返回值的低32位
			ret 0						;返回
		}
	}
	static bool CreateHookImpl(int ix,VARIANT func,VARIANT api,VARIANT module)
	{
		//确定新函数地址
		SetHookInfoPtr pSetHookInfo=NULL;
		DWORD newproc=0;
		if(func.vt==VT_BSTR)
		{
			hookScript_[ix]=0;
			if(cppModule)
			{
				pSetHookInfo=(SetHookInfoPtr)::GetProcAddress(cppModule,"_SetHookInfo@8");
				CString fname=CString(func.bstrVal);
				newproc=(DWORD)::GetProcAddress(cppModule,fname);
			}
		}
		else if(func.vt==VT_I4 || func.vt==VT_UI4 || func.vt==VT_INT || func.vt==VT_UINT)
		{
			hookScript_[ix]=func.ulVal;
			newproc=(DWORD)hookProc_[ix];
		}
		if(!newproc)
			return false;
		//获取模块句柄		
		HMODULE hModule=NULL;
		if(module.vt==VT_BSTR)
		{
			CString dll=CString(module.bstrVal);
			if(dll.IsEmpty())
			{
				hModule=::GetModuleHandle(NULL);
			}
			else
			{
				hModule=::GetModuleHandle(dll);
				if(!hModule)
				{
					hModule=::LoadLibrary(dll);
				}
			}
		}
		else
		{
			hModule=::GetModuleHandle(NULL);
		}
		if(!hModule)
			return false;
		//设定钩子
		DWORD proc=0;
		if(api.vt==VT_BSTR)
		{
			CString func=CString(api.bstrVal);				
			proc=(DWORD)::GetProcAddress(hModule,func);			
		}
		else if(api.vt==VT_I4 || api.vt==VT_UI4 || api.vt==VT_INT || api.vt==VT_UINT)
		{
			DWORD v=api.ulVal;
			if((v & 0xffff0000)==0)
				proc=(DWORD)::GetProcAddress(hModule,(LPCSTR)v);
			else
				proc=v+(DWORD)hModule;
		}
		if(proc)
		{
			Trampoline::Create((PBYTE)proc,trampoline_+ix*40,newproc);
			oldAPI_[ix]=proc;
			originAPI_[ix]=(DWORD)(trampoline_+ix*40);
			if(pSetHookInfo)
			{
				(*pSetHookInfo)(newproc,originAPI_[ix]);
			}
			return true;
		}
		return false;
	}
	//下面是用C++语言作脚本的钩子部分，这部分钩子在初始化时即生效且一直有效
	static void __stdcall CallScriptHook(int index,long eip,long thisPtr,long regedx,long regebx,long regebp,long regesi,long regedi,long regeax,long regesp,long regeflags,long paramPtr,long& directReturn,long& popNBytes)
	{	
		int segcs,segds,seges,segss,segfs,seggs;
		__asm
		{
			xor eax,eax
			mov ax,cs
			mov segcs,eax
			mov ax,ds
			mov segds,eax					
			mov ax,es
			mov seges,eax
			mov ax,fs
			mov segfs,eax
			mov ax,gs
			mov seggs,eax
			mov ax,ss
			mov segss,eax
		}
		HookFunc* f=hookFunc;
		f->Push();
		f->Init();
		f->PutCallData(eip,thisPtr,paramPtr);
		f->PutOriginalAPI(originAPI[index]);
		f->PutSegmentRegister(segcs,segds,seges,segss,segfs,seggs);
		f->PutGeneralRegister(regedx,regebx,regebp,regesi,regedi,regeax,regesp,regeflags);
		try
		{				
			if(hookScript[index]==NULL)//直接处理函数
			{
				f->LogStdInfo(hookedAPI[index]);
				return;
			}
			else
			{
				UINT funcAddr=hookScript[index];
				UINT arg=(UINT)f;
				__asm
				{
					mov eax,funcAddr
					push f
					call eax
				}
			}			
		}
		catch(...)
		{
			Log("DLL函数执行异常！");			
		}
		directReturn=f->get_DirectReturn();
		popNBytes=f->get_PopNBytes();
		//如果后续没有BeforeExit钩子，则进入函数时压入的HookFunc信息出栈。
		if(directReturn!=2)
				f->Pop();
	}
	static void __stdcall CallBeforeExitScript(void)
	{
		HookFunc* f=hookFunc;
		UINT funcAddr=f->get_BeforeExitScript();
		try
		{
			UINT arg=(UINT)f;
			__asm
			{
				mov eax,funcAddr
				push f
				call eax
			}			
		}
		catch(...)
		{
			Log("函数返回时DLL函数执行异常！");			
		}
		long baseAddr=GetBaseAddr();
		*(long*)(baseAddr+orginReturnAddr)=f->get_Eip();			
		f->Pop();
	}
	//功能描述: 这个函数用于钩住所要求的API，它由特殊处理构成,
	//		它自己处理参数栈与返回值（因此它用了naked修饰）。
	//返回类型: void 
	//参数列表: int index
	static void __declspec(naked) HookProc(int index)
	{		
		__asm
		{
			push ebp
			mov ebp,esp
			sub esp,52				;为下面定义的局部变量分配空间			
		}
		long eip,paramPtr,directReturn,popNBytes,thisPtr,regedx,regebx,regebp,regesi,regedi,regeax,regesp,regeflags;
		__asm
		{
			mov regeax,eax
			mov regebx,ebx
			mov regesi,esi
			mov regedi,edi
			pushfd
			pop eax
			mov regeflags,eax
			mov eax,ebp
			mov eax,[eax]			;取出调用此函数时的ebp
			mov regebp,eax

			mov eax,[ebp+12]		;从调用者堆栈中取出指令指针
			mov eip,eax
			mov eax,ebp
			add eax,12				;钩住的指令是函数的首指令,因此钩子生效时的esp指向返回指令指针
			mov regesp,eax
			add eax,4				;设置API调用参数区域指针
			mov paramPtr,eax					
			mov thisPtr,ecx
			mov regedx,edx

			push edx
			push ecx
			call GetBaseAddr		;使用线程局部存储保存与传递上下文信息
			pop ecx
			pop edx
			test eax,eax			;如果取不到线程局部存储则不启用钩子
			jz tooriginal
			cmp dword ptr [eax],0	;如果是重入钩子函数则不启用钩子
			jna starthook	
tooriginal:
			mov eax,index
			shl eax,2
			add eax,offset originAPI
			mov eax,[eax]			
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
						 			;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			jmp eax					;跳到原API函数
starthook:			
			mov dword ptr [eax+regEDX],edx
			mov dword ptr [eax+regECX],ecx
			mov dword ptr [eax],1			
			xor eax,eax
			mov directReturn,eax	;初始化
			mov popNBytes,eax
			
		}		
		CallScriptHook(index,eip,thisPtr,regedx,regebx,regebp,regesi,regedi,regeax,regesp,regeflags,paramPtr,directReturn,popNBytes);
		__asm
		{	
			mov eax,directReturn
			test eax,eax
			jnz dreturn
			mov eax,index
			shl eax,2
			add eax,offset originAPI
			mov eax,[eax]			
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
						 			;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			push eax
			call GetBaseAddr		;栈调整之后不能引用局部变量与参数;使用线程局部存储保存与传递上下文信息
			mov dword ptr [eax],0
			mov edx,[eax+regEDX]	;恢复进入此函数时的edx,ecx寄存器值
			mov ecx,[eax+regECX]
			pop eax
			jmp eax					;跳到原API函数
dreturn:			
			cmp eax,1
			ja beforeexit
			mov eax,popNBytes
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
									;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			pop edx					;弹出返回IP
			add esp,eax				;弹出调用参数			
			push edx				;压回返回IP			
			call GetBaseAddr		;栈调整之后不能引用局部变量与参数;使用线程局部存储保存与传递上下文信息
			mov dword ptr [eax],0			
			mov ecx,[eax+regECX]	;恢复进入此函数时的ecx寄存器值
			mov edx,[eax+regEDX]	;设置返回值高32位，若无则恢复进入时的edx值。						
			mov eax,[eax+regEAX]	;设置返回值低32位
			ret 0					;返回
beforeexit:
			mov eax,index
			shl eax,2
			add eax,offset originAPI
			mov eax,[eax]
			mov esp,ebp				;恢复栈
			pop ebp					;恢复进入此函数时的EBP
			add esp,8				;弹出进入本函数调用函数时的IP
									;弹出调用参数，至此栈
									;恢复为进入HookProcXXX时的情形。
			pop edx					;取出原调用函数的返回地址
			push eax
			call GetBaseAddr		;栈调整之后不能引用局部变量与参数;使用线程局部存储保存与传递上下文信息			
			mov edx,[eax+regEDX]	;恢复进入此函数时的edx,ecx寄存器值
			mov ecx,[eax+regECX]			
			pop eax
			call eax				;调用原API函数
			push ecx
			push edx
			push eax
			call GetBaseAddr			;使用线程局部存储保存与传递上下文信息
			pop dword ptr [eax+regEAX]	;设置缺省返回值的低32位
			pop dword ptr [eax+regEDX]	;设置缺省返回值的高32位，若无则记录返回时的edx值。
			pop dword ptr [eax+regECX]			
			mov dword ptr [eax],1
			call CallBeforeExitScript		;调用退出函数钩子
			call GetBaseAddr			;使用线程局部存储保存与传递上下文信息
			mov ecx,[eax+regECX]		;恢复调用原API函数的返回时的ecx寄存器值
			push dword ptr [eax+orginReturnAddr]	;压回原调用函数的返回地址			
			mov dword ptr [eax],0
			mov edx,[eax+regEDX]		;设置返回值的高32位，若无则恢复edx值。
			mov eax,[eax+regEAX]		;设置返回值的低32位
			ret 0						;返回
		}
	}
	static void _FinalInit(void)
	{
		for(int i=0;i<curHookItemIndex;i++)
		{
			HMODULE hModule=NULL;
			if(hookedDLL[i].IsEmpty())
			{
				hModule=::GetModuleHandle(NULL);
			}
			else
			{
				hModule=::GetModuleHandle(hookedDLL[i]);
				if(!hModule)
					hModule=::LoadLibrary(hookedDLL[i]);
			}
			if(!hModule)
				continue;
			DWORD oldAPI=0;
			if(hookedAPI[i][0]>='0' && hookedAPI[i][0]<='9')
			{
				if(hookedAPI[i].GetLength()>2 && hookedAPI[i][0]=='0' && hookedAPI[i][1]=='x')
				{
					int address;
					CString hex=hookedAPI[i].Mid(2);
					hex.MakeUpper();
					::sscanf(hex,"%X",&address);
					oldAPI=(DWORD)address+(DWORD)hModule;
				}
				else
				{
					DWORD v=(DWORD)::atoi(hookedAPI[i]);
					if((v & 0xffff0000)==0)
						oldAPI=(DWORD)::GetProcAddress(hModule,(LPCSTR)v);
					else
						oldAPI=v+(DWORD)hModule;
				}
			}
			else
			{
				oldAPI=(DWORD)::GetProcAddress(hModule,hookedAPI[i]);
			}			
			if(oldAPI==0)
			{
				char buf[1024];
				::sprintf(buf,"无法从模块%s(%8.8X)取得过程%s的地址!",hookedDLL[i],int(hModule),hookedAPI[i]);
				::MessageBox(NULL,buf,"钩子初始化",MB_OK);
			}
			else
			{
				Trampoline::Create((PBYTE)oldAPI,trampoline+i*40,(DWORD)hookProc[i]);
				originAPI[i]=(DWORD)(trampoline+i*40);
			}			
		}
	}	
	static void HookAPI(CString dll,CString newAPI,CString oldAPI)
	{		
		hookedDLL[curHookItemIndex]=dll;
		hookedAPI[curHookItemIndex]=oldAPI;
		if(!cppModule || newAPI.IsEmpty() || newAPI=="*")
		{
			hookScript[curHookItemIndex]=0;
		}		
		else
		{
			UINT proc=(UINT)::GetProcAddress(cppModule,newAPI);
			if(!proc)
				hookScript[curHookItemIndex]=0;
			else
				hookScript[curHookItemIndex]=proc;
		}	
		curHookItemIndex++;
	}
	//功能描述: 这个函数填充钩子数据，它必须在DLL被装入时执行。
	//返回类型: void 
	//参数列表:
	void _Init(void)
	{
		bool isHookConfig=false;
		bool showUI=false;
		tlsIndex=::TlsAlloc();

		HookFunc* f=HookFunc::CreateDispatch();
		hookFunc=f;
		cppModule=::LoadLibrary((LPCSTR)(GetHookPath()+"\\"+hookScriptFile));
		
		curHookItemIndex=0;	
		char line[256];
		CString dll;
		std::ifstream file;
		file.open((LPCSTR)(GetHookPath()+"\\HookScript.cfg"));
		if(file.good())
		{
			while(!file.eof())
			{
				file.getline(line,255);
				CString lineStr(line);			
				lineStr.TrimLeft();
				lineStr.TrimRight();
				if(lineStr.IsEmpty() || lineStr[0]=='#')
					continue;	
				if(!isHookConfig)
				{
					//所有选择开关必须在钩子配置数据之前设置
					if(lineStr==":showui")
					{
						showUI=true;
						continue;
					}
					else if(lineStr==":showmodal")
					{
						showModal=true;
						continue;
					}
					isHookConfig=true;
				}
				int i=lineStr.Find("<-");			
				if(i>=0)
				{
					CString newAPI=lineStr.Left(i);
					newAPI.TrimRight();
					CString oldAPI=lineStr.Right(lineStr.GetLength()-i-2);
					oldAPI.TrimLeft();					
					HookAPI(dll,newAPI,oldAPI);
				}
				else
				{
					dll=lineStr;
				}
			}
			file.close();					
		}
		_FinalInit();

		if(showUI)
		{
			ShowUI();
		}
	}	
	void _Finalize(void)
	{
		CloseUI();

		if(cppModule)
			::FreeLibrary(cppModule);
		if(hookFunc)
			hookFunc->Release();

		MemPtrs::iterator it=memPtrs.begin();
		while(it!=memPtrs.end())
		{
			char buf[128];
			::sprintf(buf,"free addition thread local storage:%8.8X!",(int)*it);
			Log(buf);
			it++;
		}
		::TlsFree(tlsIndex);
	}
	void _ThreadInit(void)
	{
		void* p=::LocalAlloc(LPTR,256);
		::TlsSetValue(tlsIndex,p);
		char buf[128];
		::sprintf(buf,"thread start,id:%8.8X,init thread local storage:%8.8X.",::GetCurrentThreadId(),(int)p);
		Log(buf);
	}
	void _ThreadFinalize(void)
	{
		void* p=::TlsGetValue(tlsIndex);
		::LocalFree((HLOCAL)p);
		char buf[128];
		::sprintf(buf,"thread exit,id:%8.8X,free thread local storage:%8.8X.",::GetCurrentThreadId(),(int)p);
		Log(buf);
	}
	
