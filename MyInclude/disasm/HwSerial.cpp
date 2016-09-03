//////////////////////////////////////////////////////////////////////
//
// HwSerial.cpp: implementation of the HwSerial class.
//
//////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

#include "HwSerial.h"

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

static __int64 GetHardDriveComputerID(void)
{
	int done = FALSE;
	// char string [1024];
	__int64 id = 0;
	OSVERSIONINFO version;
	
	strcpy (HardDriveSerialNumber, "");
	
	memset (&version, 0, sizeof (version));
	version.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
	GetVersionEx (&version);
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
		// if ( ! done) 
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
	
	if (done)
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
		}
	}
	return id;
}

void GetComputerId(char* buf)
{
	unsigned long s1,s2,s3,s4;
	unsigned char vendor_id[]="------------";
	__asm
	{
		xor eax,eax
		cpuid
		mov dword ptr vendor_id,ebx
		mov dword ptr vendor_id[+4],edx
		mov dword ptr vendor_id[+8],ecx
	}
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
	::sprintf(buf,"%s_%8.8X_%8.8X_%8.8X_%8.8X_%I64d",vendor_id,s1,s2,s3,s4,GetHardDriveComputerID());
}
