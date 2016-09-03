#include "stdafx.h"
#include "dumper.h"

BOOL GetPEInfo(DWORD ep)
{
	unsigned int i;
	HANDLE hFile,hHeap;
	PIMAGE_DOS_HEADER idosh;
	PIMAGE_NT_HEADERS ipeh;
	PIMAGE_SECTION_HEADER isech;
	LPBYTE fbuf;
	DWORD dwFsiz,dwRsiz;
	strCurEIP = ep;
	DbgePath = (LPTSTR)Plugingetvalue(VAL_EXEFILENAME);
	DbgeName = (LPTSTR)strrchr(DbgePath,'\\');
	memset(szWorkPath,0,sizeof(szWorkPath));
	strncpy(szWorkPath,DbgePath,(DbgeName-DbgePath));
	DbgeName++;
	hFile = CreateFile(DbgePath,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);
	if(hFile == INVALID_HANDLE_VALUE) 
	{
		MessageBox(mainHwnd,"DUMP: Can\'t Access File",PNAME,MB_OK);
		return FALSE;
	}
	dwFsiz = GetFileSize(hFile,NULL);
	hHeap = HeapCreate(HEAP_NO_SERIALIZE,1,0);
	fbuf = (LPBYTE)HeapAlloc(hHeap, 0, dwFsiz);
	if(ReadFile(hFile,fbuf,dwFsiz,&dwRsiz,NULL) == 0) 
	{
		MessageBox(mainHwnd,"DUMP: Can\'t Read File ",PNAME,MB_OK);
		CloseHandle(hFile);
		HeapFree(hHeap,HEAP_NO_SERIALIZE,fbuf);
		return FALSE;
	}
	CloseHandle(hFile);
	idosh = (PIMAGE_DOS_HEADER)fbuf;
	if(idosh->e_magic != IMAGE_DOS_SIGNATURE) 
	{
		MessageBox(mainHwnd,"DUMP: Bad DOS Signature!!",PNAME,MB_OK | MB_ICONEXCLAMATION);
		HeapFree(hHeap,HEAP_NO_SERIALIZE,fbuf);
		return FALSE;
	}
	ipeh = (PIMAGE_NT_HEADERS)(fbuf + idosh->e_lfanew);
	if(ipeh->Signature != IMAGE_NT_SIGNATURE) 
	{
		MessageBox(mainHwnd,"DUMP: Bad PE Signature!!",PNAME,MB_OK | MB_ICONEXCLAMATION);
		HeapFree(hHeap,HEAP_NO_SERIALIZE,fbuf);
		return FALSE;
	}
	PEFileInfo.woNumOfSect   = ipeh->FileHeader.NumberOfSections;
	PEFileInfo.dwImageBase   = ipeh->OptionalHeader.ImageBase;
	PEFileInfo.dwSizeOfImage = ipeh->OptionalHeader.SizeOfImage;
	PEFileInfo.dwBaseOfCode  = ipeh->OptionalHeader.BaseOfCode ;
	PEFileInfo.dwBaseOfData  = ipeh->OptionalHeader.BaseOfData ;
	PEFileInfo.dwAddrOfEP    = ipeh->OptionalHeader.AddressOfEntryPoint;
	lpSectInfo = (LPSECTIONINFO)malloc(sizeof(SECTIONINFO)*PEFileInfo.woNumOfSect+1);
	isech = IMAGE_FIRST_SECTION(ipeh);
	for(i=0; i<(int)PEFileInfo.woNumOfSect; i++) 
	{
		strcpy((char *)(lpSectInfo+i)->byName,(char *)(isech+i)->Name);
		(lpSectInfo+i)->dwVSize            = (isech+i)->Misc.VirtualSize;
		(lpSectInfo+i)->dwVOffset          = (isech+i)->VirtualAddress;
		(lpSectInfo+i)->dwRSize            = (isech+i)->SizeOfRawData;
		(lpSectInfo+i)->dwROffset          = (isech+i)->PointerToRawData;
		(lpSectInfo+i)->dwCharacteristics  = (isech+i)->Characteristics;
	}
	HeapFree(hHeap,HEAP_NO_SERIALIZE,fbuf);
	return TRUE;
}
BOOL SaveDump(const char* szFileName, DWORD ep)
{
	strCurEIP = ep;
	//OPENFILENAME ofn;
	HANDLE hHeap, hFile;
	PIMAGE_DOS_HEADER idosh;
	PIMAGE_NT_HEADERS ipeh;
	PIMAGE_SECTION_HEADER isech;
	LPBYTE lpDumpData;
	DWORD dwFrom,dwSize,dwAccBytes;
	unsigned int i;
	dwFrom = PEFileInfo.dwImageBase;
	dwSize = PEFileInfo.dwSizeOfImage;
	hHeap = HeapCreate(HEAP_NO_SERIALIZE,1,0);
	lpDumpData = (LPBYTE)HeapAlloc(hHeap,HEAP_NO_SERIALIZE | HEAP_ZERO_MEMORY,dwSize);
	dwSize = Readmemory(lpDumpData,dwFrom,dwSize,MM_RESTORE);
	idosh = (PIMAGE_DOS_HEADER)lpDumpData;
	if(idosh->e_magic != IMAGE_DOS_SIGNATURE) 
	{
		MessageBox(mainHwnd, "DUMP: Bad DOS Signature!!",PNAME,MB_OK | MB_ICONEXCLAMATION);
		HeapFree(hHeap,HEAP_NO_SERIALIZE,lpDumpData);
		return FALSE;
	}
	ipeh = (PIMAGE_NT_HEADERS)(lpDumpData + idosh->e_lfanew);
	if(ipeh->Signature != IMAGE_NT_SIGNATURE) 
	{
		MessageBox(mainHwnd, "DUMP: Bad PE Signature!!",PNAME,MB_OK | MB_ICONEXCLAMATION);
		HeapFree(hHeap,HEAP_NO_SERIALIZE,lpDumpData);
		return FALSE;
	}
	ipeh->FileHeader.NumberOfSections        = PEFileInfo.woNumOfSect;
	ipeh->OptionalHeader.ImageBase           = PEFileInfo.dwImageBase;
	ipeh->OptionalHeader.SizeOfImage         = PEFileInfo.dwSizeOfImage;
	ipeh->OptionalHeader.BaseOfCode          = PEFileInfo.dwBaseOfCode;
	ipeh->OptionalHeader.BaseOfData          = PEFileInfo.dwBaseOfData;
	ipeh->OptionalHeader.AddressOfEntryPoint = (strCurEIP - PEFileInfo.dwImageBase) ;
	isech = IMAGE_FIRST_SECTION(ipeh);
	if(FixSect) {
		for(i=0; i<(int)PEFileInfo.woNumOfSect; i++) 
		{
			strcpy((char *)(isech+i)->Name,(char *)(lpSectInfo+i)->byName);
			(isech+i)->Misc.VirtualSize = (lpSectInfo+i)->dwVSize;
			(isech+i)->VirtualAddress   = (lpSectInfo+i)->dwVOffset;
			(isech+i)->SizeOfRawData    = (lpSectInfo+i)->dwVSize;
			(isech+i)->PointerToRawData = (lpSectInfo+i)->dwVOffset;
			(isech+i)->Characteristics  = (lpSectInfo+i)->dwCharacteristics;
		}
	}

	hFile = CreateFile(szFileName, GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if(hFile != INVALID_HANDLE_VALUE) 
	{
		SetFilePointer(hFile, 0, 0, FILE_BEGIN);
		WriteFile(hFile, lpDumpData, dwSize, &dwAccBytes, NULL);
		CloseHandle(hFile);
	}
	HeapFree(hHeap,HEAP_NO_SERIALIZE,lpDumpData);
	return TRUE;
}