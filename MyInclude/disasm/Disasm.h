// Disasm.h: interface for the Disasm class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DISASM_H__4C0886AC_F69C_4928_8C55_4440E53B281A__INCLUDED_)
#define AFX_DISASM_H__4C0886AC_F69C_4928_8C55_4440E53B281A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <windows.h>
#include <vector>

#define DETOUR_INSTRUCTION_TARGET_NONE 0
#define DETOUR_INSTRUCTION_TARGET_DYNAMIC 0

#define ENTRY_CopyBytes1			1, 1, 0, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes1Dynamic		1, 1, 0, 0, DYNAMIC, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes2			2, 2, 0, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes2Jump		2, 2, 0, 1, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes2CantJump	2, 2, 0, 1, NOENLARGE, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes2Dynamic		2, 2, 0, 0, DYNAMIC, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes3			3, 3, 0, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes3Dynamic		3, 3, 0, 0, DYNAMIC, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes3Or5			5, 3, 0, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes3Or5Target	5, 3, 0, 1, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes5Or7Dynamic	7, 5, 0, 0, DYNAMIC, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes3Or5Address	5, 3, 0, 0, ADDRESS, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes4			4, 4, 0, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes5			5, 5, 0, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes7			7, 7, 0, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes2Mod			2, 2, 1, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes2Mod1		3, 3, 1, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes2ModOperand	6, 4, 1, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytes3Mod			3, 3, 2, 0, 0, &CDetourDis::CopyBytes
#define ENTRY_CopyBytesPrefix		1, 1, 0, 0, 0, &CDetourDis::CopyBytesPrefix
#define ENTRY_Copy0F				1, 1, 0, 0, 0, &CDetourDis::Copy0F
#define ENTRY_Copy66				1, 1, 0, 0, 0, &CDetourDis::Copy66
#define ENTRY_Copy67				1, 1, 0, 0, 0, &CDetourDis::Copy67
#define ENTRY_CopyF6				0, 0, 0, 0, 0, &CDetourDis::CopyF6
#define ENTRY_CopyF7				0, 0, 0, 0, 0, &CDetourDis::CopyF7
#define ENTRY_CopyFF				0, 0, 0, 0, 0, &CDetourDis::CopyFF
#define ENTRY_Invalid				1, 1, 0, 0, 0, &CDetourDis::Invalid
#define ENTRY_End					0, 0, 0, 0, 0, NULL

class CDetourDis
{
public:
	static int CopyNInstruction(PBYTE dst,PBYTE src,int needBytes=1);
	static PBYTE CopyInstructionEx(PBYTE pbDst,PBYTE pbSrc,PBYTE *ppbTarget,LONG *plExtra);
	static PBYTE CopyInstruction(PBYTE pbDst, PBYTE pbSrc, PBYTE *ppbTarget);
public:
	CDetourDis(PBYTE *ppbTarget, LONG *plExtra);	
	PBYTE CopyInstruction(PBYTE pbDst, PBYTE pbSrc);
	static BOOL	SanityCheckSystem();
private:
	struct COPYENTRY;
	typedef const COPYENTRY * REFCOPYENTRY;
	typedef PBYTE (CDetourDis::* COPYFUNC)(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	enum 
	{
		DYNAMIC 	= 0x1u,
		ADDRESS 	= 0x2u,
		NOENLARGE	= 0x4u,

		SIB			= 0x10u,
		NOTSIB		= 0x0fu,
	};
	struct COPYENTRY 
	{
		ULONG 		nOpcode 		: 8;				// Opcode
		ULONG		nFixedSize 		: 3;				// Fixed size of opcode
		ULONG		nFixedSize16 	: 3;				// Fixed size when 16 bit operand
		ULONG		nModOffset 		: 3;				// Offset to mod/rm byte (0=none)
		LONG		nRelOffset 		: 3;				// Offset to relative target.
		ULONG		nFlagBits		: 4;				// Flags for DYNAMIC, etc.
		COPYFUNC	pfCopy;								// Function pointer.
	};
private:	
	PBYTE CopyBytes(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	PBYTE CopyBytesPrefix(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);	
	
	PBYTE Invalid(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	PBYTE AdjustTarget(PBYTE pbDst, PBYTE pbSrc, LONG cbOp, LONG cbTargetOffset);
	
	VOID	Set16BitOperand();
	VOID	Set32BitOperand();
	VOID	Set16BitAddress();
	VOID	Set32BitAddress();	
private:
	PBYTE Copy0F(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	PBYTE Copy66(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	PBYTE Copy67(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	PBYTE CopyF6(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	PBYTE CopyF7(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
	PBYTE CopyFF(REFCOPYENTRY pEntry, PBYTE pbDst, PBYTE pbSrc);
private:	
	static const COPYENTRY	s_rceCopyTable[257];
	static const COPYENTRY	s_rceCopyTable0F[257];
	static const BYTE 		s_rbModRm[256];
private:
	BOOL				m_b16BitOperand;
	BOOL				m_b16BitAddress;

	PBYTE *				m_ppbTarget;
	LONG *				m_plExtra;
	
	LONG				m_lScratchExtra;
	PBYTE				m_pbScratchTarget;
	BYTE				m_rbScratchDst[64];
};

class MemoryProtect
{
public:
	void SetRestore(bool val)
	{
		isRestore=val;
	}
public:
	MemoryProtect(LPCVOID base,DWORD flag=PAGE_EXECUTE_READWRITE,bool restore=true):isRestore(restore)
	{
		DWORD rt=::VirtualQuery((LPCVOID)base,&mbi,sizeof(mbi));
		rt=::VirtualProtect(mbi.BaseAddress,mbi.RegionSize,flag,&oldFlag);
	}
	~MemoryProtect()
	{
		if(isRestore)
		{
			DWORD flag;
			DWORD rt=::VirtualProtect(mbi.BaseAddress,mbi.RegionSize,oldFlag,&flag);			
		}
	}
private:
	MEMORY_BASIC_INFORMATION mbi;
	DWORD oldFlag;
	bool isRestore;
};

#define REPBYTES 6

struct Trampoline
{
	static void Create(PBYTE ordinal,PBYTE trampoline,DWORD procnew)
	{
		MemoryProtect mp((LPCVOID)ordinal);		
		
		int count=CDetourDis::CopyNInstruction(trampoline,ordinal,REPBYTES);
		trampoline[count]=(BYTE)0xe9;
		*(DWORD*)&trampoline[count+1]=ordinal-trampoline-5;//actual is ordinal+count-(trampoline+count)-5
		
		ordinal[0]=(BYTE)0xe9;
		*(DWORD*)&ordinal[1]=(DWORD)procnew - (DWORD)ordinal-5;
	}
	static void Remove(PBYTE ordinal,PBYTE trampoline)
	{
		MemoryProtect mp((LPCVOID)ordinal);		
		int count=CDetourDis::CopyNInstruction(ordinal,trampoline,REPBYTES);		
	}	
};

#define APINUMBER	32

class ApiHook
{
public:
	int HookApi(DWORD originalApi,DWORD newApi)
	{
		int curApiIndex=nextApiIndex;
		nextApiIndex++;
		PBYTE ori=(PBYTE)originalApi;
		PBYTE old=(PBYTE)(trampoline+curApiIndex*4);
		Trampoline::Create(ori,old,newApi);
		return curApiIndex;
	}
	void UnHookApi(int index)
	{
		index=CheckIndex(index);
		Trampoline::Remove(GetOriginal(index),GetOld(index));
	}
	PBYTE GetOriginal(int index)
	{		
		return original[CheckIndex(index)];
	}
	PBYTE GetOld(int index)
	{
		return (PBYTE)(trampoline+CheckIndex(index)*4);
	}
public:
	ApiHook():nextApiIndex(0)
	{}
private:
	int CheckIndex(int index)
	{
		if(index<0)
			index=0;
		if(index>=nextApiIndex)
			index=nextApiIndex-1;
		return index;
	}
private:
	PBYTE original[APINUMBER];
	PBYTE trampoline[APINUMBER*4];
	int nextApiIndex;
};
#endif // !defined(AFX_DISASM_H__4C0886AC_F69C_4928_8C55_4440E53B281A__INCLUDED_)
