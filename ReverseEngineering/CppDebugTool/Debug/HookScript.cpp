#ifndef _WIN32_WINNT		// 允许使用特定于 Windows XP 或更高版本的功能。
#define _WIN32_WINNT 0x0501	// 将此值更改为相应的值，以适用于 Windows 的其他版本。
#endif	

#include <windows.h>
#include <string>
#include <sstream>
#include <fstream>

#include "D:\Program Files\Microsoft DirectX SDK (December 2006)\Include\D3d8.h"
#include "D:\Program Files\Microsoft DirectX SDK (December 2006)\Include\D3d9.h"

class IDirect3DDevice9;
//-------------------------------------------------------------------------------------
#undef INTERFACE
#define INTERFACE IDirect3DVertexShader9

DECLARE_INTERFACE_(IDirect3DVertexShader9, IUnknown)
{
    /*** IUnknown methods ***/
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;

    /*** IDirect3DVertexShader9 methods ***/
    STDMETHOD(GetDevice)(THIS_ IDirect3DDevice9** ppDevice) PURE;
    STDMETHOD(GetFunction)(THIS_ void*,UINT* pSizeOfData) PURE;
    
    #ifdef D3D_DEBUG_INFO
    DWORD Version;
    LPCWSTR CreationCallStack;
    #endif
};
    
typedef struct IDirect3DVertexShader9 *LPDIRECT3DVERTEXSHADER9, *PDIRECT3DVERTEXSHADER9;
//-------------------------------------------------------------------------------------
#undef INTERFACE
#define INTERFACE IDirect3DPixelShader9

DECLARE_INTERFACE_(IDirect3DPixelShader9, IUnknown)
{
    /*** IUnknown methods ***/
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;

    /*** IDirect3DPixelShader9 methods ***/
    STDMETHOD(GetDevice)(THIS_ IDirect3DDevice9** ppDevice) PURE;
    STDMETHOD(GetFunction)(THIS_ void*,UINT* pSizeOfData) PURE;
    
    #ifdef D3D_DEBUG_INFO
    DWORD Version;
    LPCWSTR CreationCallStack;
    #endif
};
    
typedef struct IDirect3DPixelShader9 *LPDIRECT3DPIXELSHADER9, *PDIRECT3DPIXELSHADER9;
//-------------------------------------------------------------------------------------
typedef interface ID3DXBuffer ID3DXBuffer;
typedef interface ID3DXBuffer *LPD3DXBUFFER;

#undef INTERFACE
#define INTERFACE ID3DXBuffer

DECLARE_INTERFACE_(ID3DXBuffer, IUnknown)
{
    // IUnknown
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    // ID3DXBuffer
    STDMETHOD_(LPVOID, GetBufferPointer)(THIS) PURE;
    STDMETHOD_(DWORD, GetBufferSize)(THIS) PURE;
};

extern "C"
{
HRESULT WINAPI
    D3DXDisassembleShader(
        CONST DWORD*                    pShader, 
        BOOL                            EnableColorCode, 
        LPCSTR                          pComments, 
        LPD3DXBUFFER*                   ppDisassembly);
}
//-------------------------------------------------------------------------------------

#include "include/HookFuncIntf.h"
#include "include/GenerateDisp.h"

#pragma comment(lib,"user32.lib")
#pragma comment(lib,"winmm.lib")
#pragma comment(lib,"D:\\Program Files\\Microsoft DirectX SDK (December 2006)\\lib\\x86\\d3dx9.lib")

MSG msg;
IDispatch* pExtObj=NULL;
DWORD originalAPI=0,newAPI=0;
int fillMode=3;
int alphaTest=1;
int alphaBlend=1;

bool restored1=true;
bool restored2=true;

int batchCountInTargetRange=0;
int totalBatchCountInTargetRange=0;

int batchCount=0;
int totalBatchCount=0;

int targetCount=0;
int totalTargetCount=0;

int minBatchCount=0;
int maxBatchCount=999;

int minTargetCount=0;
int maxTargetCount=100;

int stateCount=0;
int totalStateCount=0;

int pixelShaderCount=0;
int totalPixelShaderCount=0;

int vertexShaderCount=0;
int totalVertexShaderCount=0;

int pixelShaderCountInRange=0;
int totalPixelShaderCountInRange=0;

int vertexShaderCountInRange=0;
int totalVertexShaderCountInRange=0;

bool saveCommand=false;
bool saveProgram=false;
int saveCommandCount=0;

float bestFPS=0;
float worstFPS=999;
float lastFPS=0;
float avgFPS=0;

unsigned int frameCount=0;
unsigned int lastFrameCount=0;
unsigned int lastFrameTime=0;

static unsigned int getMilliseconds()
{
	static unsigned int zeroTime=0;
	unsigned int v = (unsigned int)::timeGetTime();
	if(zeroTime==0)
	{
		zeroTime=v;
	}
	return v-zeroTime;
}

static bool inBatchRange(void)
{
	return batchCountInTargetRange>=minBatchCount && batchCountInTargetRange<=maxBatchCount;
}

static bool inTargetRange(void)
{
	return targetCount>=minTargetCount && targetCount<=maxTargetCount;
}

static bool inRange(void)
{
	return inTargetRange() && inBatchRange();
}

class ExtObj : public IDispatch
{
public:
	virtual void __stdcall SetFillMode(int v)
	{
		restored1=false;
		restored2=false;
		
		fillMode=v;
	}
	virtual void __stdcall SetAlphaTest(int v)
	{
		alphaTest=v;
	}
	virtual void __stdcall SetAlphaBlend(int v)
	{
		alphaBlend=v;
	}
	virtual void __stdcall DoSaveProgram(void)
	{
		saveCommand=true;
		saveProgram=false;
		saveCommandCount=frameCount;
	}
	virtual int __stdcall GetTotalBatchCountInTargetRange(void)
	{
		return totalBatchCountInTargetRange;
	}
	virtual int __stdcall GetTotalBatchCount(void)
	{
		return totalBatchCount;
	}
	virtual int __stdcall GetTotalTargetCount(void)
	{
		return totalTargetCount;
	}
	virtual int __stdcall GetTotalStateCount(void)
	{
		return totalStateCount;
	}
	virtual int __stdcall GetTotalPixelShaderCount(void)
	{
		return totalPixelShaderCount;
	}
	virtual int __stdcall GetTotalVertexShaderCount(void)
	{
		return totalVertexShaderCount;
	}
	virtual int __stdcall GetTotalPixelShaderCountInRange(void)
	{
		return totalPixelShaderCountInRange;
	}
	virtual int __stdcall GetTotalVertexShaderCountInRange(void)
	{
		return totalVertexShaderCountInRange;
	}
	virtual void __stdcall SetTargetCount(int minVal,int maxVal)
	{
		minTargetCount=minVal;
		maxTargetCount=maxVal;
	}
	virtual int __stdcall GetMinTargetCount(void)
	{
		return minTargetCount;
	}
	virtual int __stdcall GetMaxTargetCount(void)
	{
		return maxTargetCount;
	}
	virtual void __stdcall SetBatchCount(int minVal,int maxVal)
	{
		minBatchCount=minVal;
		maxBatchCount=maxVal;
	}
	virtual int __stdcall GetMinBatchCount(void)
	{
		return minBatchCount;
	}
	virtual int __stdcall GetMaxBatchCount(void)
	{
		return maxBatchCount;
	}
	virtual float __stdcall get_AvgFPS(void)
	{
		return avgFPS;
	}
	virtual float __stdcall get_LastFPS(void)
	{
		return lastFPS;
	}
	virtual float __stdcall get_BestFPS(void)
	{
		return bestFPS;
	}
	virtual float __stdcall get_WorstFPS(void)
	{
		return worstFPS;
	}
public:
	BEGIN_INTF(ExtObj)
		METHOD(SetFillMode)
		METHOD(SetAlphaTest)
		METHOD(SetAlphaBlend)
		METHOD(DoSaveProgram)
		METHOD(GetTotalBatchCountInTargetRange)
		METHOD(GetTotalBatchCount)
		METHOD(GetTotalTargetCount)
		METHOD(GetTotalStateCount)
		METHOD(GetTotalPixelShaderCount)
		METHOD(GetTotalVertexShaderCount)
		METHOD(GetTotalPixelShaderCountInRange)
		METHOD(GetTotalVertexShaderCountInRange)
		METHOD(SetTargetCount)
		METHOD(GetMinTargetCount)
		METHOD(GetMaxTargetCount)
		METHOD(SetBatchCount)
		METHOD(GetMinBatchCount)
		METHOD(GetMaxBatchCount)
		PROPERTYGET(AvgFPS,true)
		PROPERTYGET(LastFPS,true)
		PROPERTYGET(BestFPS,true)
		PROPERTYGET(WorstFPS,true)		
	END_INTF()
public:
	ExtObj()
	{
	}
	~ExtObj()
	{
	}
};

extern "C"
{
//必要的输出函数，向debug.dll暴露C++脚本提供的扩展COM对象。
__declspec(dllexport) IDispatch* __stdcall GetExtObj(void)
{
	
	return pExtObj;
}
//必要的输出函数，由debug.dll调用传入钩子函数与原函数的对应关系。
__declspec(dllexport) void __stdcall SetHookInfo(DWORD newproc,DWORD origin)
{
	newAPI=newproc;
	originalAPI=origin;
}
__declspec(dllexport) void __stdcall BeginScene(HookFunc* pHF)
{	
	BOOL bRet=::PeekMessage(&msg, 0, 0, 0, PM_REMOVE); 			
	if(bRet)
	{
		::TranslateMessage(&msg); 
		::DispatchMessage(&msg); 
	}						
//#define TEST_BEGIN_SCENE
#ifdef TEST_BEGIN_SCENE	
	std::stringstream ss;
	ss<<"BeginScene";
	pHF->Log(ss.str().c_str());
#endif	
}
__declspec(dllexport) void __stdcall EndScene(HookFunc* pHF)
{
//#define TEST_END_SCENE	
#ifdef TEST_END_SCENE
	std::stringstream ss;
	ss<<"EndScene";
	pHF->Log(ss.str().c_str());
#endif	
}
__declspec(dllexport) void __stdcall Present(HookFunc* pHF)
{	
	++frameCount;
	unsigned int frameTime=getMilliseconds();
	if(lastFrameTime==0)
	{
		lastFrameTime=frameTime;
		lastFrameCount=frameCount;
	}
	else if(frameTime>lastFrameTime+1000 && frameCount>lastFrameCount+10)
	{
		lastFPS=(frameCount-lastFrameCount)*float(1000.0/(frameTime-lastFrameTime));
		if(bestFPS<lastFPS)
			bestFPS=lastFPS;
		if(worstFPS>lastFPS)
			worstFPS=lastFPS;
			
		if(avgFPS==0)
			avgFPS=lastFPS;
    else
			avgFPS=(avgFPS+lastFPS)/2;
				
		lastFrameTime=frameTime;
		lastFrameCount=frameCount;
	}
	
	//-----------------------------------------------------	
	totalBatchCountInTargetRange=batchCountInTargetRange;
	totalBatchCount=batchCount;
	totalTargetCount=targetCount;
	
	totalStateCount=stateCount;
	
	totalPixelShaderCount=pixelShaderCount;
	totalVertexShaderCount=vertexShaderCount;
		
	totalPixelShaderCountInRange=pixelShaderCountInRange;
	totalVertexShaderCountInRange=vertexShaderCountInRange;
	
	//-----------------------------------------------------	
	batchCountInTargetRange=0;	
	batchCount=0;
	targetCount=0;
	
	stateCount=0;
	
	pixelShaderCount=0;
	vertexShaderCount=0;
		
	pixelShaderCountInRange=0;
	vertexShaderCountInRange=0;
	
	//-----------------------------------------------------	
	if(saveCommand && frameCount==saveCommandCount+1)
	{
		saveProgram=true;
	}
	else if(saveProgram && frameCount!=saveCommandCount+1)
	{
		saveProgram=false;
		saveCommand=false;
	}
		
#ifdef TEST_PRESENT	
	std::stringstream ss;
	ss<<"Present";
	pHF->Log(ss.str().c_str());
#endif	
}
__declspec(dllexport) void __stdcall SetRenderTarget(HookFunc* pHF)
{
	++targetCount;
}
__declspec(dllexport) void __stdcall SetStreamSource(HookFunc* pHF)
{
	std::stringstream ss;
	ss<<"SetStreamSource";
	pHF->Log(ss.str().c_str());
}
__declspec(dllexport) void __stdcall DrawIndex(HookFunc* pHF)
{
	++batchCount;
	if(inTargetRange())
		++batchCountInTargetRange;
}
__declspec(dllexport) void __stdcall Draw(HookFunc* pHF)
{
	++batchCount;
	if(inTargetRange())
		++batchCountInTargetRange;
}
__declspec(dllexport) void __stdcall SetPixelShader8(HookFunc* pHF)
{
	DWORD ptr=pHF->get_ParamPtr();
	DWORD a=*(DWORD*)ptr;
	DWORD b=*(DWORD*)(ptr+4);	
	if(b!=0)
	{
		++pixelShaderCount;
	}
	
	if(b!=0 && inRange())
	{
		++pixelShaderCountInRange;		
		
		if(saveProgram)
		{
			LPDIRECT3DDEVICE8 pDevice=(LPDIRECT3DDEVICE8)a;
			void* pData=NULL;
			DWORD size=0;
			HRESULT hr=pDevice->GetPixelShaderFunction(b,pData,&size);
			if(!FAILED(hr))
			{
				pData=new char[size];
				pDevice->GetPixelShaderFunction(b,pData,&size);
				
				LPD3DXBUFFER pBuf=NULL;
				hr=::D3DXDisassembleShader((CONST DWORD *)pData,FALSE,NULL,&pBuf);
				if(!FAILED(hr))
				{
					size=pBuf->GetBufferSize();
					void* pShader=pBuf->GetBufferPointer();
					
					std::stringstream ss;
					ss<<"pixel_"<<pHF->IntToHex(b)<<".txt";
					pHF->Log(ss.str().c_str());
					std::fstream file(ss.str().c_str(),std::ios_base::out);
					file.write((const char*)pShader,size);
					file.close();
					
					pBuf->Release();
				}
				else
				{
					std::stringstream ss;
					ss<<"failed disassemble:pixel_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
					pHF->Log(ss.str().c_str());				
				}
				delete[] pData;
			}
			else
			{
				std::stringstream ss;
				ss<<"failed:pixel_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
				pHF->Log(ss.str().c_str());
			}
		}
	}
}
__declspec(dllexport) void __stdcall SetVertexShader8(HookFunc* pHF)
{
	DWORD ptr=pHF->get_ParamPtr();
	DWORD a=*(DWORD*)ptr;
	DWORD b=*(DWORD*)(ptr+4);
	if((b & 0xFFFF0000)!=0)
	{
		++vertexShaderCount;
	}
		
	if((b & 0xFFFF0000)!=0 && inRange())
	{
		++vertexShaderCountInRange;		
	}
	
	if(b!=0 && inRange())
	{
		if(saveProgram)
		{
			LPDIRECT3DDEVICE8 pDevice=(LPDIRECT3DDEVICE8)a;
			void* pData=NULL;
			DWORD size=0;
			HRESULT hr=pDevice->GetVertexShaderFunction(b,pData,&size);
			if(!FAILED(hr))
			{
				pData=new char[size];
				pDevice->GetVertexShaderFunction(b,pData,&size);
				
				LPD3DXBUFFER pBuf=NULL;
				hr=::D3DXDisassembleShader((CONST DWORD *)pData,FALSE,NULL,&pBuf);
				if(!FAILED(hr))
				{
					size=pBuf->GetBufferSize();
					void* pShader=pBuf->GetBufferPointer();
					
					std::stringstream ss;
					ss<<"vertex_"<<pHF->IntToHex(b)<<".txt";
					pHF->Log(ss.str().c_str());
					std::fstream file(ss.str().c_str(),std::ios_base::out);
					file.write((const char*)pShader,size);
					file.close();
					
					pBuf->Release();
				}
				else
				{
					std::stringstream ss;
					ss<<"failed disassemble:vertex_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
					pHF->Log(ss.str().c_str());				
				}
				delete[] pData;
			}
			else if((b & 0xFFFF00FF)!=0 && (b & 0x0000FF00)==0)
			{
				std::stringstream ss;
				ss<<"failed:vertex_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
				pHF->Log(ss.str().c_str());
			}
		}
	}
}
__declspec(dllexport) void __stdcall SetPixelShader9(HookFunc* pHF)
{
	DWORD ptr=pHF->get_ParamPtr();
	DWORD a=*(DWORD*)ptr;
	DWORD b=*(DWORD*)(ptr+4);
	if(b!=0)
	{
		++pixelShaderCount;
	}
	
	if(b!=0 && inRange())
	{
		++pixelShaderCountInRange;		
		
		if(saveProgram)
		{
			LPDIRECT3DPIXELSHADER9 pIntf=(LPDIRECT3DPIXELSHADER9)b;
			void* pData=NULL;
			UINT size=0;
			HRESULT hr=pIntf->GetFunction(pData,&size);
			if(!FAILED(hr))
			{
				pData=new char[size];
				pIntf->GetFunction(pData,&size);
				
				LPD3DXBUFFER pBuf=NULL;
				hr=::D3DXDisassembleShader((CONST DWORD *)pData,FALSE,NULL,&pBuf);
				if(!FAILED(hr))
				{
					size=pBuf->GetBufferSize();
					void* pShader=pBuf->GetBufferPointer();
					
					std::stringstream ss;
					ss<<"pixel_"<<pHF->IntToHex(b)<<".txt";
					pHF->Log(ss.str().c_str());
					std::fstream file(ss.str().c_str(),std::ios_base::out);
					file.write((const char*)pShader,size);
					file.close();
					
					pBuf->Release();
				}
				else
				{
					std::stringstream ss;
					ss<<"failed disassemble:pixel_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
					pHF->Log(ss.str().c_str());				
				}
				delete[] pData;
			}
			else
			{
				std::stringstream ss;
				ss<<"failed:pixel_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
				pHF->Log(ss.str().c_str());
			}
		}
	}
}
__declspec(dllexport) void __stdcall SetVertexShader9(HookFunc* pHF)
{
	DWORD ptr=pHF->get_ParamPtr();
	DWORD a=*(DWORD*)ptr;
	DWORD b=*(DWORD*)(ptr+4);
	if(b!=0)
	{
		++vertexShaderCount;
	}
	
	if(b!=0 && inRange())
	{
		++vertexShaderCountInRange;		
		
		if(saveProgram)
		{
			LPDIRECT3DVERTEXSHADER9 pIntf=(LPDIRECT3DVERTEXSHADER9)b;
			void* pData=NULL;
			UINT size=0;
			HRESULT hr=pIntf->GetFunction(pData,&size);
			if(!FAILED(hr))
			{
				pData=new char[size];
				pIntf->GetFunction(pData,&size);
				
				LPD3DXBUFFER pBuf=NULL;
				hr=::D3DXDisassembleShader((CONST DWORD *)pData,FALSE,NULL,&pBuf);
				if(!FAILED(hr))
				{
					size=pBuf->GetBufferSize();
					void* pShader=pBuf->GetBufferPointer();
					
					std::stringstream ss;
					ss<<"vertex_"<<pHF->IntToHex(b)<<".txt";
					pHF->Log(ss.str().c_str());
					std::fstream file(ss.str().c_str(),std::ios_base::out);
					file.write((const char*)pShader,size);
					file.close();
					
					pBuf->Release();
				}
				else
				{
					std::stringstream ss;
					ss<<"failed disassemble:vertex_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
					pHF->Log(ss.str().c_str());				
				}
				delete[] pData;
			}
			else
			{
				std::stringstream ss;
				ss<<"failed:vertex_"<<pHF->IntToHex(b)<<":"<<pHF->IntToHex((int)hr);
				pHF->Log(ss.str().c_str());
			}
		}
	}
}
__declspec(dllexport) void __stdcall Reset(HookFunc* pHF)
{
	DWORD ptr=pHF->get_ParamPtr();
	D3DPRESENT_PARAMETERS* pParam=*(D3DPRESENT_PARAMETERS**)(ptr+4);
	pParam->Windowed=TRUE;
}
__declspec(dllexport) void __stdcall SetRenderState(HookFunc* pHF)
{
	DWORD ptr=pHF->get_ParamPtr();
	int a=*(int*)ptr;
	int b=*(int*)(ptr+4);
	int c=*(int*)(ptr+8);
//#define TEST_STATE	
#ifdef TEST_STATE	
	std::stringstream ss;
	ss<<"SetRenderState:"<<pHF->IntToHex(a)<<" "<<b<<" "<<c;
	pHF->Log(ss.str().c_str());
#endif

	++stateCount;
	
	if(inRange())
	{
		if(b==8)
		{
			*(int*)(ptr+8)=fillMode;
		}
		else if(b==15 && alphaTest==0)
		{
			*(int*)(ptr+8)=0;
		}
		else if(b==27 && alphaBlend==0)
		{
			*(int*)(ptr+8)=0;
		}
		
		restored2=false;
		if(!restored1)
		{
			restored1=true;			
			DWORD addr=pHF->get_OriginalAPI();
			__asm
			{
				mov eax,fillMode
				push eax
				mov eax,8
				push eax
				mov eax,a
				push eax
				mov eax,addr
				call eax
			}
			__asm
			{
				mov eax,alphaTest
				push eax
				mov eax,15
				push eax
				mov eax,a
				push eax
				mov eax,addr
				call eax
			}
			__asm
			{
				mov eax,alphaBlend
				push eax
				mov eax,27
				push eax
				mov eax,a
				push eax
				mov eax,addr
				call eax
			}
		}
	}
	else
	{
		if(b==8)
		{
			*(int*)(ptr+8)=3;
		}		
		
		restored1=false;
		if(!restored2)
		{
			restored2=true;
			DWORD addr=pHF->get_OriginalAPI();
			__asm
			{
				mov eax,3
				push eax
				mov eax,8
				push eax
				mov eax,a
				push eax
				mov eax,addr
				call eax
			}
			/*
			__asm
			{
				mov eax,1
				push eax
				mov eax,15
				push eax
				mov eax,a
				push eax
				mov eax,addr
				call eax
			}
			__asm
			{
				mov eax,1
				push eax
				mov eax,27
				push eax
				mov eax,a
				push eax
				mov eax,addr
				call eax
			}
			*/
		}
	}
}
};


BOOL WINAPI DllMain (HINSTANCE hInst     /* Library instance handle. */ ,
                       DWORD reason        /* Reason this function is being called. */ ,
                       LPVOID reserved     /* Not used. */ )
{
    switch (reason)
    {
      case DLL_PROCESS_ATTACH:
      	pExtObj=ExtObj::CreateDispatch();
        break;

      case DLL_PROCESS_DETACH:
      	pExtObj->Release();
        break;

      case DLL_THREAD_ATTACH:
        break;

      case DLL_THREAD_DETACH:
        break;
    }

    /* Returns TRUE on success, FALSE on failure */
    return TRUE;
}

