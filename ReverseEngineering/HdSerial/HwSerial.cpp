//////////////////////////////////////////////////////////////////////
//
// HwSerial.cpp: implementation of the HwSerial class.
//
//////////////////////////////////////////////////////////////////////

#define _WIN32_DCOM

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <Nb30.h>
#include <objbase.h>
#include <Wbemcli.h>

#include "HwSerial.h"

#pragma comment(lib,"Netapi32.lib")
#pragma comment(lib,"Wbemuuid.lib")

//////////////////////////////////////////////////////////////////////
struct HWS_STRING
{
	static inline int StrLen(const char* s)
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
		return int(d-s-1);
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

	static inline int StrCpyMaxN(char* d,const char* s,int len)
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
cont:		movsb
			test byte ptr [esi],al
			loopnz cont
			jcxz end
			movsb
end:		mov left,ecx
		}
		return len-left;
	}

	static inline void MemCpy(void* d,const void* s,int len)
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
};

char *GetString0(int strNum, DMIHeader* pDmi)
{
	char *strPtr;
	int foundStrNum = 1; 

	strPtr = (char*)((DWORD)pDmi + pDmi->structLength);  // go directly to start of string

	if(strNum<1)
		return "NA";

	if((*strPtr) == '\0')
		return "0";

	if (strNum == 1)
		return strPtr;
	else 
	{
		while (foundStrNum != strNum) 
		{
			while ((*strPtr) != '\0')
				strPtr++;
			strPtr++;
			foundStrNum++;
		}
		return strPtr;
	}
}

char* GetString(int strNum, DMIHeader* pDmi)
{
	char* d=GetString0(strNum,pDmi);
	if(::stricmp(d,"not available")==0)
		return "NA";
	else
	{
		int len=::strlen(d);
		for(int iii=0;iii<len;iii++)
		{
			if(!(d[iii]>='a' && d[iii]<='z' || d[iii]>='A' && d[iii]<='Z' || d[iii]>='0' && d[iii]<='9'))
				d[iii]='.';
		}
		return d;
	}
}

void GetSysID(char* sysid)
{	
	
	SIZE_T ssize;
	ssize=0x20000;
	char* phyMem=new char[ssize];

	OSVERSIONINFO version;
	memset (&version, 0, sizeof (version));
	version.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
	GetVersionEx (&version);
	if (version.dwPlatformId == VER_PLATFORM_WIN32_NT)
	{
		UNICODE_STRING struniph;
		OBJECT_ATTRIBUTES obj_ar;
		ZWOS ZWopenS;
		ZWMV ZWmapV;
		ZWUMV ZWunmapV;
		HANDLE hSection;
		HMODULE hinstLib;
		DWORD ba;
		LARGE_INTEGER so;
		so.LowPart=0x000e0000;//物理内存的基址，就是e000:0000
		so.HighPart=0x00000000;
		wchar_t strPH[30]=L"\\device\\physicalmemory";

		// 初始化全局字符串
		//变量初始化
		ba=0;//联系后的基址将在这里返回
		struniph.Buffer=strPH;
		struniph.Length=0x2c;//注意大小是按字节算
		struniph.MaximumLength =0x2e;//也是字节
		obj_ar.Attributes =64;//属性
		obj_ar.Length =24;//OBJECT_ATTRIBUTES类型的长度
		obj_ar.ObjectName=&struniph;//指向对象的指针
		obj_ar.RootDirectory=0;
		obj_ar.SecurityDescriptor=0;
		obj_ar.SecurityQualityOfService =0;
		//读入ntdll.dll,得到函数地址
		bool exist=true;
		hinstLib = ::GetModuleHandle("ntdll.dll");
		if(!hinstLib)
		{
			exist=false;
			hinstLib=::LoadLibrary("ntdll.dll");			
		}
		if(hinstLib)
		{
			ZWopenS=(ZWOS)::GetProcAddress(hinstLib,"ZwOpenSection");
			ZWmapV=(ZWMV)::GetProcAddress(hinstLib,"ZwMapViewOfSection");
			ZWunmapV=(ZWUMV)::GetProcAddress(hinstLib,"ZwUnmapViewOfSection");
			//调用函数，对物理内存进行映射
			if(ZWopenS && ZWmapV && ZWunmapV)
			{
				LONG r=ZWopenS(&hSection,4,&obj_ar);
				if(r==0)
				{
					r=ZWmapV((HANDLE)hSection,(HANDLE)0xffffffff,&ba,0,ssize,&so,&ssize,1,0,2);
					if(r==0)
					{
						::memcpy(phyMem,(LPCVOID)ba,ssize);
						r=ZWunmapV((HANDLE) -1,(PVOID)ba);
					}
				}
			}
		}
		else
		{
			::memcpy(phyMem,(LPCVOID)0x000e0000,ssize);
		}
		if(!exist)
		{
			::FreeLibrary(hinstLib);
		}
	}
	else
	{
		::memcpy(phyMem,(LPCVOID)0x000e0000,ssize);
	}
	char smbios[5]="NA";
	char bios[256]="NA";
	char sys[256]="NA";
	char board[256]="NA";
	char cpu[256]="NA";
	char macaddr[256]="NA";

	SmBiosStructureTableHeader* pSmBios=NULL;
	DmiStructureTableHeader* pDmiTable=NULL;
	for(DWORD offset=0;offset<ssize;offset+=16)
	{
		DWORD val=*(DWORD*)(phyMem+offset);
		if(val==0x5F4D535F)
		{
			pSmBios=(SmBiosStructureTableHeader*)(phyMem+offset);
			val=*(DWORD*)(pSmBios->DmiTable.header);
			if(val==0x494D445F)
			{
				pDmiTable=&(pSmBios->DmiTable);
				char msg[1025];
				::sprintf(smbios,"%2.2X%2.2X",(DWORD)pSmBios->majorVersion,(DWORD)pSmBios->minorVersion);
				break;
			}
		}
	}
	if(pDmiTable)
	{
		DMIHeader* pDmi=(DMIHeader*)(pDmiTable->biosStructureTableAddress-0xE0000+phyMem);
		DWORD size=pDmiTable->len;
		DWORD num=pDmiTable->numStructures;

		if(::IsBadReadPtr(pDmi,size))
		{
			char msg[256];
			::sprintf(msg,"%2.2X%2.2X%4.4X%4.4X%4.4X",(DWORD)pSmBios->checksum,(DWORD)pDmiTable->checksum,(DWORD)pSmBios->maxStrucSize,(DWORD)pDmiTable->len,(DWORD)pDmiTable->numStructures);
			bios[0]=0;
			HWS_STRING::StrCat(bios,"NA");
			HWS_STRING::StrCat(bios,"NA");
			HWS_STRING::StrCat(bios,smbios);
		}
		else
		{
			for(int order=0;order<num;order++)
			{
				if(pDmi->structType==0)
				{
					DMIType0* pVal=(DMIType0*)pDmi;
					//::sprintf(bios,"%s%s%s",GetString(pVal->version,pDmi),GetString(pVal->verdate,pDmi),smbios);
					bios[0]=0;
					HWS_STRING::StrCat(bios,GetString(pVal->version,pDmi));
					HWS_STRING::StrCat(bios,GetString(pVal->verdate,pDmi));
					HWS_STRING::StrCat(bios,smbios);
				}
				else if(pDmi->structType==1)
				{				
					DMIType1* pVal=(DMIType1*)pDmi;
					//::sprintf(sys,"%s",GetString(pVal->sn,pDmi));
					HWS_STRING::StrCpyMaxN(sys,GetString(pVal->sn,pDmi),255);
				}
				else if(pDmi->structType==2)
				{				
					DMIType2* pVal=(DMIType2*)pDmi;
					//::sprintf(board,"%s%s%s%s%s",sys,GetString(pVal->manufacturer,pDmi),GetString(pVal->product,pDmi),GetString(pVal->version,pDmi),GetString(pVal->sn,pDmi));
					board[0]=0;
					HWS_STRING::StrCat(board,sys);
					HWS_STRING::StrCat(board,GetString(pVal->manufacturer,pDmi));
					HWS_STRING::StrCat(board,GetString(pVal->product,pDmi));
					HWS_STRING::StrCat(board,GetString(pVal->version,pDmi));
					HWS_STRING::StrCat(board,GetString(pVal->sn,pDmi));
				}
				else if(pDmi->structType==3)
				{
				}
				else if(pDmi->structType==4)
				{				
					DMIType4* pVal=(DMIType4*)pDmi;
					::sprintf(cpu,"%I64X",pVal->processorID);
				}
				DWORD dmiAddr=(DWORD)pDmi;
				int len = pDmi->structLength;
				/*
					* Some BIOSes (e.g. Intel BIOSes and maybe others) do not 
					* terminate the Type 5 Structure with two null bytes; therefore 
					* this special check when calculating the length of a Type 5
					* Structure.
				*/
				if(pDmi->structType == 0x05) 
				{
					if(*(WORD*)(dmiAddr + len) == 0x0000)
						len += 2;
				}
				else
				{
					while(*(WORD *)(dmiAddr + len) != 0x0000)
						len++;
					len += 2;
				}
				dmiAddr+=len;
				pDmi=(DMIHeader*)dmiAddr;
			}
		}
	}

	delete[] phyMem;

	ASTAT adapter;
	NCB ncb;
    UCHAR uRetCode;

	::memset( &ncb, 0, sizeof(ncb) );
    ncb.ncb_command = NCBENUM;
    ncb.ncb_lana_num = 0;
	LANA_ENUM lana_enum;
	ncb.ncb_buffer = (unsigned char *) &lana_enum;
	ncb.ncb_length=sizeof(lana_enum);
	UCHAR uRetEnum = ::Netbios( &ncb );

	if(uRetEnum==0)
	{
		for(int ii=0;ii<lana_enum.length;ii++)
		{
			::memset( &ncb, 0, sizeof(ncb) );
			ncb.ncb_command = NCBRESET;
			ncb.ncb_lana_num = lana_enum.lana[ii];
			uRetCode = ::Netbios( &ncb );

			::memset( &ncb, 0, sizeof(ncb) );
			ncb.ncb_command = NCBASTAT;
			ncb.ncb_lana_num = lana_enum.lana[ii];
			::strcpy((char*)ncb.ncb_callname,  "*               ");
			ncb.ncb_buffer = (unsigned char *)&adapter;
			ncb.ncb_length = sizeof(adapter);
			uRetCode = ::Netbios( &ncb );
			if(uRetCode==0)
			{
				::sprintf(macaddr,"%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X",
						adapter.adapt.adapter_address[0],
						adapter.adapt.adapter_address[1],
						adapter.adapt.adapter_address[2],
						adapter.adapt.adapter_address[3],
						adapter.adapt.adapter_address[4],
						adapter.adapt.adapter_address[5] );
				break;
			}
		}
	}
	else
	{
		::memset( &ncb, 0, sizeof(ncb) );
		ncb.ncb_command = NCBRESET;
		ncb.ncb_lana_num = 0;
		uRetCode = ::Netbios( &ncb );

		::memset( &ncb, 0, sizeof(ncb) );
		ncb.ncb_command = NCBASTAT;
		ncb.ncb_lana_num = 0;
		::strcpy((char*)ncb.ncb_callname,  "*               ");
		ncb.ncb_buffer = (unsigned char *)&adapter;
		ncb.ncb_length = sizeof(adapter);
		uRetCode = ::Netbios( &ncb );
		if( uRetCode == 0 )
		{
			::sprintf(macaddr,"%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X",
					adapter.adapt.adapter_address[0],
					adapter.adapt.adapter_address[1],
					adapter.adapt.adapter_address[2],
					adapter.adapt.adapter_address[3],
					adapter.adapt.adapter_address[4],
					adapter.adapt.adapter_address[5] );
		}
	}
	if(macaddr[0]=='N' && macaddr[1]=='A')
	{
		IWbemLocator* pWbemLocator=NULL;
		HRESULT hRes = ::CoInitializeEx(0, COINIT_MULTITHREADED); 
		hRes =  ::CoInitializeSecurity(
			NULL, 
			-1,                          // COM authentication
			NULL,                        // Authentication services
			NULL,                        // Reserved
			RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication 
			RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation  
			NULL,                        // Authentication info
			EOAC_NONE,                   // Additional capabilities 
			NULL                         // Reserved
			);

		hRes = ::CoCreateInstance(
            CLSID_WbemLocator,
            NULL ,
            CLSCTX_INPROC_SERVER, 
            IID_IWbemLocator ,
            (void**)&pWbemLocator
            ) ;
		if(SUCCEEDED(hRes))
		{
			IWbemServices* pWbemServices=NULL;
			hRes = pWbemLocator->ConnectServer(
				L"ROOT\\CIMV2",  // Namespace
				NULL,          // Userid
				NULL,           // PW
				NULL,           // Locale
				0,              // flags
				NULL,           // Authority
				NULL,           // Context
				&pWbemServices
				);
			if(SUCCEEDED(hRes))
			{
				hRes = CoSetProxyBlanket(
					pWbemServices,               // Indicates the proxy to set
					RPC_C_AUTHN_WINNT,           // RPC_C_AUTHN_xxx
					RPC_C_AUTHZ_NONE,            // RPC_C_AUTHZ_xxx
					NULL,                        // Server principal name 
					RPC_C_AUTHN_LEVEL_CALL,      // RPC_C_AUTHN_LEVEL_xxx 
					RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
					NULL,                        // client identity
					EOAC_NONE                    // proxy capabilities 
					);

				IEnumWbemClassObject* pEnumObj=NULL;
				hRes = pWbemServices->CreateInstanceEnum(L"Win32_NetworkAdapterConfiguration",WBEM_FLAG_FORWARD_ONLY,NULL,&pEnumObj);
				if(SUCCEEDED(hRes))
				{
					for(hRes=WBEM_S_NO_ERROR;hRes==WBEM_S_NO_ERROR;)
					{
						IWbemClassObject* pObj=NULL;
						ULONG ct=0;
						hRes = pEnumObj->Next(WBEM_INFINITE,1,&pObj,&ct);
						if(hRes==WBEM_S_NO_ERROR || hRes==WBEM_S_FALSE)
						{
							VARIANT ret;
							::VariantInit(&ret);
							HRESULT hr=pObj->Get(L"IPEnabled",0,&ret,NULL,NULL);
							if(ret.boolVal)
							{
								::VariantInit(&ret);
								hr=pObj->Get(L"MACAddress",0,&ret,NULL,NULL);
								int cch=::SysStringLen(ret.bstrVal);
								int num=::WideCharToMultiByte(CP_ACP,0,ret.bstrVal,cch,NULL,0,NULL,NULL);
								::WideCharToMultiByte(CP_ACP,0,ret.bstrVal,cch,macaddr,num,NULL,NULL);
								macaddr[num]=0;
								::VariantClear(&ret);
								::VariantClear(&ret);
								break;
							}
							else
								::VariantClear(&ret);
						}
					}
					pEnumObj->Release();
				}
				pWbemServices->Release();
			}
			pWbemLocator->Release(); // Free memory resources.
		}
	}
	//::sprintf(sysid,"%s_%s_%s_%s",bios,board,cpu,macaddr);
	sysid[0]=0;
	HWS_STRING::StrCat(sysid,bios);
	HWS_STRING::StrCat(sysid,board,'_');
	HWS_STRING::StrCat(sysid,cpu,'_');
	//HWS_STRING::StrCat(sysid,macaddr,'_');
}
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
// Define global buffers.
BYTE IdOutCmd [sizeof (SENDCMDOUTPARAMS) + IDENTIFY_BUFFER_SIZE - 1];
WORD serial[256];
DWORD OldInterruptAddress;
DWORDLONG IDTR;
char HardDriveSerialNumber [1024];

static unsigned int WaitHardDiskIde() 
{ 
	BYTE xx;	
Waiting:
	__asm
	{
		mov dx, 0x1f7
		in al, dx
		cmp al, 0x80
		jb Endwaiting
		jmp Waiting
	}
Endwaiting:
	__asm
	{
		mov xx, al
	}
	
	return xx; 
} 

static void InterruptProcess(void)//中断服务程序
{
	int   xx;
	int   i;
	WORD temp;
	//保存寄存器值
	__asm
	{
		push eax
		push ebx
		push ecx
		push edx
		push esi
	}
	
	WaitHardDiskIde();//等待硬盘空闲状态
	__asm
	{
		mov dx, 0x1f6
		mov al, 0xa0
		out dx, al
	}
	xx = WaitHardDiskIde(); //若直接在Ring3级执行等待命令，会进入死循环
	if ((xx&0x50)!=0x50) 
	{
		__asm
		{
			pop esi
			pop edx
			pop ecx
			pop ebx
			pop eax
			leave
			iretd
		}
	}
	
	__asm
	{
		mov dx, 0x1f6 //命令端口1f6,选择驱动器0
		mov al, 0xa0
		out dx, al
		inc dx
		mov al, 0xec
		out dx, al //发送读驱动器参数命令
	}
	
	xx = WaitHardDiskIde(); 
	if ((xx&0x58)!=0x58) 
	{
		__asm
		{
			pop esi
			pop edx
			pop ecx
			pop ebx
			pop eax
			leave
			iretd
		}
	}
	//读取硬盘控制器的全部信息
	for (i=0;i<256;i++) 
	{
		__asm
		{
			mov dx, 0x1f0
			in ax, dx
			mov temp, ax
		}
		serial[i] = temp; 
	} 
	
	__asm
	{
		pop esi
		pop edx
		pop ecx
		pop ebx
		pop eax
		leave
		iretd
	}
}

static void __stdcall ReadIdeSerialNumber()
{      
	__asm
	{
		push eax        
		//获取修改的中断的中断描述符（中断门）地址
		sidt IDTR	
		mov eax,dword ptr [IDTR+02h]        
		add eax,3*08h+04h
		cli
		//保存原先的中断入口地址
		push ecx
		mov ecx,dword ptr [eax]
		mov cx,word ptr [eax-04h]
		mov dword ptr OldInterruptAddress,ecx
		pop ecx
		//设置修改的中断入口地址为新的中断处理程序入口地址
		push ebx
		lea ebx,InterruptProcess		
		mov word ptr [eax-04h],bx
		shr ebx,10h
		mov word ptr [eax+02h],bx
		pop ebx
		//执行中断，转到Ring 0（类似CIH病毒原理）
		int 3h
		//恢复原先的中断入口地址
		push ecx
		mov ecx,dword ptr OldInterruptAddress
		mov word ptr [eax-04h],cx
		shr ecx,10h
		mov word ptr [eax+02h],cx
		pop ecx
		sti
		pop eax
	}
}

static char *ConvertToString (DWORD diskdata [256], int firstIndex, int lastIndex)
{
	static char string [1024];
	int index = 0;
	int position = 0;
	
	//  each integer has two characters stored in it backwards
	for (index = firstIndex; index <= lastIndex; index++)
	{
		//  get high byte for 1st character
		string [position] = (char) (diskdata [index] / 256);
		position++;
		
		//  get low byte for 2nd character
		string [position] = (char) (diskdata [index] % 256);
		position++;
	}
	
	//  end the string 
	string [position] = '\0';
	
	//  cut off the trailing blanks
	for (index = position - 1; index > 0 && ' ' == string [index]; index--)
		string [index] = '\0';
	
	return string;
}

static void PrintIdeInfo (int drive, DWORD diskdata [256])
{
	char string1 [1024];
	__int64 sectors = 0;
	__int64 bytes = 0;
	
	//  copy the hard drive serial number to the buffer
	strcpy (string1, ConvertToString (diskdata, 10, 19));
	if (0 == HardDriveSerialNumber [0] &&
		//  serial number must be alphanumeric
		//  (but there can be leading spaces on IBM drives)
		(isalnum (string1 [0]) || isalnum (string1 [19])))
		strcpy (HardDriveSerialNumber, string1);
}

static int ReadDrivePortsInWin9X (void)
{
	ReadIdeSerialNumber();
	DWORD diskData[256];
	for(int i=0;i<256;i++)
		diskData[i]=(DWORD)serial[i];
	PrintIdeInfo(0,diskData);
	return 1;
}

// DoIDENTIFY
// FUNCTION: Send an IDENTIFY command to the drive
// bDriveNum = 0-3
// bIDCmd = IDE_ATA_IDENTIFY or IDE_ATAPI_IDENTIFY
static BOOL DoIDENTIFY (HANDLE hPhysicalDriveIOCTL, PSENDCMDINPARAMS pSCIP,
				 PSENDCMDOUTPARAMS pSCOP, BYTE bIDCmd, BYTE bDriveNum,
				 PDWORD lpcbBytesReturned)
{
	// Set up data structures for IDENTIFY command.
	pSCIP -> cBufferSize = IDENTIFY_BUFFER_SIZE;
	pSCIP -> irDriveRegs.bFeaturesReg = 0;
	pSCIP -> irDriveRegs.bSectorCountReg = 1;
	pSCIP -> irDriveRegs.bSectorNumberReg = 1;
	pSCIP -> irDriveRegs.bCylLowReg = 0;
	pSCIP -> irDriveRegs.bCylHighReg = 0;
	
	// Compute the drive number.
	pSCIP -> irDriveRegs.bDriveHeadReg = 0xA0 | ((bDriveNum & 1) << 4);
	
	// The command can either be IDE identify or ATAPI identify.
	pSCIP -> irDriveRegs.bCommandReg = bIDCmd;
	pSCIP -> bDriveNumber = bDriveNum;
	pSCIP -> cBufferSize = IDENTIFY_BUFFER_SIZE;
	
	return ( DeviceIoControl (hPhysicalDriveIOCTL, DFP_RECEIVE_DRIVE_DATA,
		(LPVOID) pSCIP,
		sizeof(SENDCMDINPARAMS) - 1,
		(LPVOID) pSCOP,
		sizeof(SENDCMDOUTPARAMS) + IDENTIFY_BUFFER_SIZE - 1,
		lpcbBytesReturned, NULL) );
}

static int ReadPhysicalDriveInNT (void)
{
	int done = FALSE;
	int drive = 0;
	
	for (drive = 0; drive < MAX_IDE_DRIVES; drive++)
	{
		HANDLE hPhysicalDriveIOCTL = 0;
		
		//  Try to get a handle to PhysicalDrive IOCTL, report failure
		//  and exit if can't.
		char driveName [256];
		
		sprintf (driveName, "\\\\.\\PhysicalDrive%d", drive);
		
		//  Windows NT, Windows 2000, must have admin rights
		hPhysicalDriveIOCTL = CreateFile (driveName,
			GENERIC_READ | GENERIC_WRITE, 
			FILE_SHARE_READ | FILE_SHARE_WRITE, NULL,
			OPEN_EXISTING, 0, NULL);
		// if (hPhysicalDriveIOCTL == INVALID_HANDLE_VALUE)
		//    printf ("Unable to open physical drive %d, error code: 0x%lX\n",
		//            drive, GetLastError ());
		
		if (hPhysicalDriveIOCTL != INVALID_HANDLE_VALUE)
		{
			GETVERSIONOUTPARAMS VersionParams;
			DWORD               cbBytesReturned = 0;
			
			// Get the version, etc of PhysicalDrive IOCTL
			memset ((void*) &VersionParams, 0, sizeof(VersionParams));
			
			if ( ! DeviceIoControl (hPhysicalDriveIOCTL, DFP_GET_VERSION,
				NULL, 
				0,
				&VersionParams,
				sizeof(VersionParams),
				&cbBytesReturned, NULL) )
			{         
				// printf ("DFP_GET_VERSION failed for drive %d\n", i);
				// continue;
			}
			
			// If there is a IDE device at number "i" issue commands
			// to the device
			if (VersionParams.bIDEDeviceMap > 0)
			{
				BYTE             bIDCmd = 0;   // IDE or ATAPI IDENTIFY cmd
				SENDCMDINPARAMS  scip;
				//SENDCMDOUTPARAMS OutCmd;
				
				// Now, get the ID sector for all IDE devices in the system.
				// If the device is ATAPI use the IDE_ATAPI_IDENTIFY command,
				// otherwise use the IDE_ATA_IDENTIFY command
				bIDCmd = (VersionParams.bIDEDeviceMap >> drive & 0x10) ? \
IDE_ATAPI_IDENTIFY : IDE_ATA_IDENTIFY;
				
				memset (&scip, 0, sizeof(scip));
				memset (IdOutCmd, 0, sizeof(IdOutCmd));
				
				if ( DoIDENTIFY (hPhysicalDriveIOCTL, 
					&scip, 
					(PSENDCMDOUTPARAMS)&IdOutCmd, 
					(BYTE) bIDCmd,
					(BYTE) drive,
					&cbBytesReturned))
				{
					DWORD diskdata [256];
					int ijk = 0;
					USHORT *pIdSector = (USHORT *)
						((PSENDCMDOUTPARAMS) IdOutCmd) -> bBuffer;
					
					for (ijk = 0; ijk < 256; ijk++)
						diskdata [ijk] = pIdSector [ijk];
					
					PrintIdeInfo (drive, diskdata);
					
					done = TRUE;
				}
			}
			
			CloseHandle (hPhysicalDriveIOCTL);
		}
	}
	
	return done;
}

#define  SENDIDLENGTH  sizeof (SENDCMDOUTPARAMS) + IDENTIFY_BUFFER_SIZE

static int ReadIdeDriveAsScsiDriveInNT (void)
{
	int done = FALSE;
	int controller = 0;
	
	for (controller = 0; controller < 2; controller++)
	{
		HANDLE hScsiDriveIOCTL = 0;
		char   driveName [256];
		
		//  Try to get a handle to PhysicalDrive IOCTL, report failure
		//  and exit if can't.
		sprintf (driveName, "\\\\.\\Scsi%d:", controller);
		
		//  Windows NT, Windows 2000, any rights should do
		hScsiDriveIOCTL = CreateFile (driveName,
			GENERIC_READ | GENERIC_WRITE, 
			FILE_SHARE_READ | FILE_SHARE_WRITE, NULL,
			OPEN_EXISTING, 0, NULL);
		// if (hScsiDriveIOCTL == INVALID_HANDLE_VALUE)
		//    printf ("Unable to open SCSI controller %d, error code: 0x%lX\n",
		//            controller, GetLastError ());
		
		if (hScsiDriveIOCTL != INVALID_HANDLE_VALUE)
		{
			int drive = 0;
			
			for (drive = 0; drive < 2; drive++)
			{
				char buffer [sizeof (SRB_IO_CONTROL) + SENDIDLENGTH];
				SRB_IO_CONTROL *p = (SRB_IO_CONTROL *) buffer;
				SENDCMDINPARAMS *pin =
					(SENDCMDINPARAMS *) (buffer + sizeof (SRB_IO_CONTROL));
				DWORD dummy;
				
				memset (buffer, 0, sizeof (buffer));
				p -> HeaderLength = sizeof (SRB_IO_CONTROL);
				p -> Timeout = 10000;
				p -> Length = SENDIDLENGTH;
				p -> ControlCode = IOCTL_SCSI_MINIPORT_IDENTIFY;
				strncpy ((char *) p -> Signature, "SCSIDISK", 8);
				
				pin -> irDriveRegs.bCommandReg = IDE_ATA_IDENTIFY;
				pin -> bDriveNumber = drive;
				
				if (DeviceIoControl (hScsiDriveIOCTL, IOCTL_SCSI_MINIPORT, 
					buffer,
					sizeof (SRB_IO_CONTROL) +
					sizeof (SENDCMDINPARAMS) - 1,
					buffer,
					sizeof (SRB_IO_CONTROL) + SENDIDLENGTH,
					&dummy, NULL))
				{
					SENDCMDOUTPARAMS *pOut =
						(SENDCMDOUTPARAMS *) (buffer + sizeof (SRB_IO_CONTROL));
					IDSECTOR *pId = (IDSECTOR *) (pOut -> bBuffer);
					if (pId -> sModelNumber [0])
					{
						DWORD diskdata [256];
						int ijk = 0;
						USHORT *pIdSector = (USHORT *) pId;
						
						for (ijk = 0; ijk < 256; ijk++)
							diskdata [ijk] = pIdSector [ijk];
						
						PrintIdeInfo (controller * 2 + drive, diskdata);
						
						done = TRUE;
					}
				}
			}
			CloseHandle (hScsiDriveIOCTL);
		}
	}
	
	return done;
}

unsigned __int64 GetHardDriveComputerID(int& flag,unsigned __int64* pbuf=NULL)
{
	flag=0;
	int done = FALSE;
	// char string [1024];
	unsigned __int64 id = 0;
	OSVERSIONINFO version;
	
	strcpy (HardDriveSerialNumber, "");
	flag|=0x0001;
	memset (&version, 0, sizeof (version));
	version.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
	GetVersionEx (&version);
	flag|=0x0002;
	if (version.dwPlatformId == VER_PLATFORM_WIN32_NT)
	{
		//  this works under WinNT4 or Win2K if you have admin rights
#ifdef PRINTING_TO_CONSOLE_ALLOWED
		printf ("\nTrying to read the drive IDs using physical access\n");
#endif
		done = ReadPhysicalDriveInNT ();
		
		//  this should work in WinNT or Win2K if previous did not work
		//  this is kind of a backdoor via the SCSI mini port driver into
		//     the IDE drives
#ifdef PRINTING_TO_CONSOLE_ALLOWED
		printf ("\nTrying to read the drive IDs using the SCSI back door\n");
#endif
		if(!done) 
			done = ReadIdeDriveAsScsiDriveInNT ();
	}
	else
	{
		//  this works under Win9X and calls a VXD
		int attempt = 0;
		
		//  try this up to 10 times to get a hard drive serial number
		for (attempt = 0;
		attempt < 10 && ! done && 0 == HardDriveSerialNumber [0];
		attempt++)
			done = ReadDrivePortsInWin9X ();
	}	
	flag|=0x0004;
	if(done)
	{
		char *p = HardDriveSerialNumber;
		
		//WriteConstantString ("HardDriveSerialNumber", HardDriveSerialNumber);
		
		//  ignore first 5 characters from western digital hard drives if
		//  the first four characters are WD-W
		if ( ! strncmp (HardDriveSerialNumber, "WD-W", 4)) p += 5;
		for ( ; p && *p; p++)
		{
			if ('-' == *p) continue;
			id *= 10;
			switch (*p)
			{
			case '0': id += 0; break;
			case '1': id += 1; break;
			case '2': id += 2; break;
			case '3': id += 3; break;
			case '4': id += 4; break;
			case '5': id += 5; break;
			case '6': id += 6; break;
			case '7': id += 7; break;
			case '8': id += 8; break;
			case '9': id += 9; break;
			case 'a': case 'A': id += 10; break;
			case 'b': case 'B': id += 11; break;
			case 'c': case 'C': id += 12; break;
			case 'd': case 'D': id += 13; break;
			case 'e': case 'E': id += 14; break;
			case 'f': case 'F': id += 15; break;
			case 'g': case 'G': id += 16; break;
			case 'h': case 'H': id += 17; break;
			case 'i': case 'I': id += 18; break;
			case 'j': case 'J': id += 19; break;
			case 'k': case 'K': id += 20; break;
			case 'l': case 'L': id += 21; break;
			case 'm': case 'M': id += 22; break;
			case 'n': case 'N': id += 23; break;
			case 'o': case 'O': id += 24; break;
			case 'p': case 'P': id += 25; break;
			case 'q': case 'Q': id += 26; break;
			case 'r': case 'R': id += 27; break;
			case 's': case 'S': id += 28; break;
			case 't': case 'T': id += 29; break;
			case 'u': case 'U': id += 30; break;
			case 'v': case 'V': id += 31; break;
			case 'w': case 'W': id += 32; break;
			case 'x': case 'X': id += 33; break;
			case 'y': case 'Y': id += 34; break;
			case 'z': case 'Z': id += 35; break;
			}
			flag++;
		}
	}
	flag|=0x0008;
	if(pbuf)
		*pbuf=id;
	return id;
}

void PrepareComputerId(char* buf,unsigned long* cpuids,unsigned __int64* hdid,int& flag)
{
	unsigned long s1;
	unsigned long s2;
	unsigned long s3;
	unsigned long s4;
	unsigned __int64 s5;

	unsigned char vendor_id[]="------------";
	char sysid[1025];
	char temp[256];
	s5=GetHardDriveComputerID(flag);
	__asm
	{
		xor eax,eax
		cpuid
		mov dword ptr vendor_id,ebx
		mov dword ptr vendor_id[+4],edx
		mov dword ptr vendor_id[+8],ecx
	}
	::sprintf(temp,"%I64d",s5);
	hdid[0]=s5;
	GetSysID(sysid);
	__asm
	{
		mov eax,01h
		xor edx,edx
		cpuid
		mov s1,edx
		mov s2,eax
	}
	__asm
	{
		mov eax,03h
		xor ecx,ecx
		xor edx,edx
		cpuid
		mov s3,edx
		mov s4,ecx
	}
	cpuids[0]=s1;
	cpuids[1]=s2;
	cpuids[2]=s3;
	cpuids[3]=s4;
	//::sprintf(buf,"%s_%I64d",sysid,s5);
	buf[0]=0;
	HWS_STRING::StrCat(buf,sysid);
	HWS_STRING::StrCat(buf,temp,'_');
}
