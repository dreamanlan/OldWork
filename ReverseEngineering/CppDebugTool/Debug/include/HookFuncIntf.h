#pragma once

interface HookFunc : public IDispatch 
{
public:
	virtual void __stdcall DirectReturnInt32(unsigned int int32Val, unsigned int popn);
	virtual void __stdcall DirectReturnInt64(unsigned int low32Val,unsigned int high32Val, unsigned int popn);
	virtual void __stdcall CallBeforeExit(UINT script);
	virtual void __stdcall BeforeExitReturnInt32(unsigned int int32Val);
	virtual void __stdcall BeforeExitReturnInt64(unsigned int low32Val,unsigned int high32Val);
	virtual unsigned int __stdcall get_Edx(void);
	virtual unsigned int __stdcall get_Ebx(void);
	virtual unsigned int __stdcall get_Ebp(void);
	virtual unsigned int __stdcall get_Esi(void);
	virtual unsigned int __stdcall get_Edi(void);
	virtual unsigned int __stdcall get_Eax(void);
	virtual unsigned int __stdcall get_Esp(void);
	virtual unsigned int __stdcall get_EFlags(void);
	virtual unsigned int __stdcall get_SegCs(void);
	virtual unsigned int __stdcall get_SegDs(void);
	virtual unsigned int __stdcall get_SegEs(void);
	virtual unsigned int __stdcall get_SegSs(void);
	virtual unsigned int __stdcall get_SegFs(void);
	virtual unsigned int __stdcall get_SegGs(void);
	virtual unsigned int __stdcall get_Eip(void);
	virtual unsigned int __stdcall get_ParamPtr(void);
	virtual unsigned int __stdcall get_ThisPtr(void);
	virtual unsigned int __stdcall get_OriginalAPI(void);
	virtual unsigned int __stdcall get_DirectReturn(void);
	virtual unsigned int __stdcall get_ReturnLowInt32(void);
	virtual unsigned int __stdcall get_ReturnHighInt32(void);
	virtual unsigned int __stdcall get_PopNBytes(void);
	virtual UINT __stdcall get_BeforeExitScript(void);
	virtual void __stdcall Log(const char* mess);
	virtual void __stdcall LogStdInfo(const char* name);
	virtual void __stdcall EnableRecursion(unsigned int val);
	virtual const char* __stdcall IntToHex(unsigned int val);
	virtual unsigned int __stdcall HexToInt(const char* val);
	virtual void __stdcall ShowUI(void);
	virtual void __stdcall CloseUI(void);
};
/*
class HookUI : public IDispatch
{
	public:
		virtual BSTR __stdcall CompileScript(BSTR scpFile);//SC脚本中app=HookUI,window=window
		virtual VARIANT __stdcall CallScript(VARIANT vals);
		virtual int __stdcall CreateHook(VARIANT func,VARIANT api,VARIANT module);
		virtual void __stdcall RemoveHook(int index);
		virtual IDispatch* __stdcall get_ExtObject(void);
		virtual BSTR __stdcall get_HookPath(void);
};
*/
/*UI脚本例子
//compileScript();//编译SC脚本
//var a=createHook(1,0x000449d8,0);//指定脚本调用参数1为1下钩子
//var b=createHook("test",0x00044000,0);//使用C++模块中指定函数下钩子，有别于脚本钩子与HookScript.cfg配置的钩子，
//这种钩子直接从目标函数跳到钩子函数，HookScript.cpp中的SetHookInfo函数包含了对应钩子的原函数调用地址(实际实施调
//用的地址,不是被钩住的函数的原始地址,脚本钩子与HookScript.cfg配置的钩子通过参数HookFunc*也可得到对应调用地址) 
//...
//removeHook(a);
//removeHook(b);
*/