// Ring0Mem.h: interface for the Ring0Mem class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RING0MEM_H__D889C861_6ACC_11D7_AA09_10E08C80313F__INCLUDED_)
#define AFX_RING0MEM_H__D889C861_6ACC_11D7_AA09_10E08C80313F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

template<
	int tag=0,
	int size=0x1000
	>
	class SharedMem
{
public:
	static inline SharedMem& InstanceRef(void)
	{
		static SharedMem sharedMem;
		return sharedMem;
	}
public:
	inline int GetMem(void)
	{
		return newproc;
	}
public:
	SharedMem()
	{
		maphandle=::CreateFileMapping(
            (HANDLE)0xffffffff,
            NULL,
            PAGE_READWRITE,
            0,
            size,
            NULL
        );
        newproc=(int)::MapViewOfFile(
            maphandle,
            FILE_MAP_ALL_ACCESS,
            0,
            0,
            0
        );
	}
	~SharedMem()
	{
		::UnmapViewOfFile((LPVOID)newproc);
        ::CloseHandle(maphandle);
	}
private:
	 HANDLE maphandle;
	 int newproc;
};

class Ring0Mem  
{	
	typedef SharedMem<-1> SharedMem_1;
	typedef struct
	{
		__int16  offlow;
		__int16  sel;
		__int16  prot;
		__int16  offhig;
	}CALLGATE;
	typedef struct
	{
		__int16  seglim;
		__int16  baselow;
		char  basemid;
		char  prot;
		char  seglim2;
		char  basehig;
	}SEGSEL;
private:
	static inline void InitRing0CallRet(void)
	{
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x800)=0x9a;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x801)=0x00;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x802)=0x00;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x803)=0x00;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x804)=0x00;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x805)=0x58;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x806)=0x00;

		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x900)=0xc9;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0x901)=0xcb;
	}
	static inline int GetRing0Call(void)
	{
		return SharedMem_1::InstanceRef().GetMem()+0x800;
	}
	static inline int GetRing0Ret(void)
	{
		return SharedMem_1::InstanceRef().GetMem()+0x900;
	}
	static inline void CreateTrampoline_(void)
	{
		int ordinal=*(int*)(SharedMem_1::InstanceRef().GetMem()+0);
		int trampoline=*(int*)(SharedMem_1::InstanceRef().GetMem()+4);		
		int procnew=*(int*)(SharedMem_1::InstanceRef().GetMem()+8);
		int count=*(int*)(SharedMem_1::InstanceRef().GetMem()+12);
		_CreateTrampoline((char*)ordinal,(char*)trampoline,count,procnew);
		InitRing0CallRet();
		int r=GetRing0Ret();
		__asm
		{
			mov eax,r
			mov esp,ebp
			pop ebp
			jmp eax
		};
	}
	static inline void RemoveTrampoline_(void)
	{
		int ordinal=*(int*)(SharedMem_1::InstanceRef().GetMem()+16);
		int trampoline=*(int*)(SharedMem_1::InstanceRef().GetMem()+20);
		int count=*(int*)(SharedMem_1::InstanceRef().GetMem()+24);
		_RemoveTrampoline((char*)ordinal,(char*)trampoline,count);
		InitRing0CallRet();
		int r=GetRing0Ret();
		__asm
		{
			mov eax,r
			mov esp,ebp
			pop ebp
			jmp eax
		};
	}
	static inline void _CreateTrampoline(char *ordinal,char *trampoline,int procnew,int count)
	{
			int i;
			for(i=0;i<count;i++)
					trampoline[i]=ordinal[i];
			trampoline[i]=0xe9;
			*(int*)&trampoline[i+1]=ordinal-trampoline-5;//actual is ordinal+i-trampoline-i-5

			ordinal[0]=0xe9;
			*(int*)&ordinal[1]=(int)procnew - (int)ordinal-5;
	}
	static inline void _RemoveTrampoline(char *ordinal,char *trampoline,int count)
	{
			int i;
			for(i=0;i<count;i++)
					ordinal[i]=trampoline[i];
	}
private:
	static int GetGDTBase(void)
	{
		__asm
		{	
			push eax
			sgdt [esp-2]
			pop eax
			mov esp,ebp
			pop ebp
			ret 0
		};
	}
	inline void SetKernelCall(int proc,int gateoffset=0x58,int segment=0x60)
	{
		int gdtbase;
		gdtbase=GetGDTBase();
		callgate.sel=(__int16)(segment&0x0000ffff);
		callgate.offlow=(int)proc&0xffff;
		callgate.offhig=(int)(proc>>16)&0xffff;
		
		*(CALLGATE*)(gdtbase+gateoffset)=callgate;
		*(SEGSEL*)(gdtbase+segment)=segsel;
	}
public:
	inline static Ring0Mem*& Instance(void)
	{
		static Ring0Mem* pMem=NULL;
		if(pMem==NULL)
			pMem=new Ring0Mem();
		return pMem;
	}
public:
	inline void CreateTrampoline(PBYTE ordinal,PBYTE trampoline,int procnew,int count)
	{
		*(int*)(SharedMem_1::InstanceRef().GetMem()+0)=(int)ordinal;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+4)=(int)trampoline;		
		*(int*)(SharedMem_1::InstanceRef().GetMem()+8)=(int)procnew;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+12)=(int)count;
		
		SetKernelCall((int)&Ring0Mem::CreateTrampoline_);
		InitRing0CallRet();
		int c=GetRing0Call();
		__asm
		{
			mov eax,c
			jmp eax
		};
	}
	inline void RemoveTrampoline(PBYTE ordinal,PBYTE trampoline,int count)
	{
		*(int*)(SharedMem_1::InstanceRef().GetMem()+16)=(int)ordinal;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+20)=(int)trampoline;
		*(int*)(SharedMem_1::InstanceRef().GetMem()+24)=(int)count;
		SetKernelCall((int)&Ring0Mem::RemoveTrampoline_);
		InitRing0CallRet();
		int c=GetRing0Call();
		__asm
		{
			mov eax,c
			jmp eax
		};
	}
public:
	Ring0Mem()
	{
		CALLGATE tcallgate={0x0000,0x60,0xec00,0x0000};
		SEGSEL tsegsel={0xffff,0x0000,0x00,0x9a,0xcf,0x00};

		callgate=tcallgate;
		segsel=tsegsel;
	}	
private:
	CALLGATE callgate;
	SEGSEL segsel;
};

#endif // !defined(AFX_RING0MEM_H__D889C861_6ACC_11D7_AA09_10E08C80313F__INCLUDED_)
