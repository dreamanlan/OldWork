// HwSerial.h: interface for the HwSerial class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HWSERIAL_H__279B3A74_F4ED_4E20_9D21_8CC5F11E5ABB__INCLUDED_)
#define AFX_HWSERIAL_H__279B3A74_F4ED_4E20_9D21_8CC5F11E5ABB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//  for displaying the details of hard drives in 

//  06/11/2000  Lynn McGuire  written with many contributions from others,
//                            IDE drives only under Windows NT/2K and 9X,
//                            maybe SCSI drives later
#define  TITLE   "DiskId32"
//  Required to ensure correct PhysicalDrive IOCTL structure setup
#pragma pack(1)

//  Max number of drives assuming primary/secondary, master/slave topology
#define  MAX_IDE_DRIVES  4
#define  IDENTIFY_BUFFER_SIZE  512

//  IOCTL commands
#define  DFP_GET_VERSION          0x00074080
#define  DFP_SEND_DRIVE_COMMAND   0x0007c084
#define  DFP_RECEIVE_DRIVE_DATA   0x0007c088

#define  FILE_DEVICE_SCSI              0x0000001b
#define  IOCTL_SCSI_MINIPORT_IDENTIFY  ((FILE_DEVICE_SCSI << 16) + 0x0501)
#define  IOCTL_SCSI_MINIPORT 0x0004D008  //  see NTDDSCSI.H for definition

//  GETVERSIONOUTPARAMS contains the data returned from the 
//  Get Driver Version function.
typedef struct _GETVERSIONOUTPARAMS
{
   BYTE bVersion;      // Binary driver version.
   BYTE bRevision;     // Binary driver revision.
   BYTE bReserved;     // Not used.
   BYTE bIDEDeviceMap; // Bit map of IDE devices.
   DWORD fCapabilities; // Bit mask of driver capabilities.
   DWORD dwReserved[4]; // For future use.
} GETVERSIONOUTPARAMS, *PGETVERSIONOUTPARAMS, *LPGETVERSIONOUTPARAMS;

//  Bits returned in the fCapabilities member of GETVERSIONOUTPARAMS 
#define  CAP_IDE_ID_FUNCTION             1  // ATA ID command supported
#define  CAP_IDE_ATAPI_ID                2  // ATAPI ID command supported
#define  CAP_IDE_EXECUTE_SMART_FUNCTION  4  // SMART commannds supported

//  Valid values for the bCommandReg member of IDEREGS.
#define  IDE_ATAPI_IDENTIFY  0xA1  //  Returns ID sector for ATAPI.
#define  IDE_ATA_IDENTIFY    0xEC  //  Returns ID sector for ATA.

// The following struct defines the interesting part of the IDENTIFY
// buffer:
typedef struct _IDSECTOR
{
   USHORT  wGenConfig;
   USHORT  wNumCyls;
   USHORT  wReserved;
   USHORT  wNumHeads;
   USHORT  wBytesPerTrack;
   USHORT  wBytesPerSector;
   USHORT  wSectorsPerTrack;
   USHORT  wVendorUnique[3];
   CHAR    sSerialNumber[20];
   USHORT  wBufferType;
   USHORT  wBufferSize;
   USHORT  wECCSize;
   CHAR    sFirmwareRev[8];
   CHAR    sModelNumber[40];
   USHORT  wMoreVendorUnique;
   USHORT  wDoubleWordIO;
   USHORT  wCapabilities;
   USHORT  wReserved1;
   USHORT  wPIOTiming;
   USHORT  wDMATiming;
   USHORT  wBS;
   USHORT  wNumCurrentCyls;
   USHORT  wNumCurrentHeads;
   USHORT  wNumCurrentSectorsPerTrack;
   ULONG   ulCurrentSectorCapacity;
   USHORT  wMultSectorStuff;
   ULONG   ulTotalAddressableSectors;
   USHORT  wSingleWordDMA;
   USHORT  wMultiWordDMA;
   BYTE    bReserved[128];
} IDSECTOR, *PIDSECTOR;

typedef struct _SRB_IO_CONTROL
{
   ULONG HeaderLength;
   UCHAR Signature[8];
   ULONG Timeout;
   ULONG ControlCode;
   ULONG ReturnCode;
   ULONG Length;
} SRB_IO_CONTROL, *PSRB_IO_CONTROL;


typedef struct _UNICODE_STRING {
  USHORT  Length;//长度
  USHORT  MaximumLength;//最大长度
  PWSTR  Buffer;//缓存指针，访问物理内存时，此处指向UNICODE字符串"\device\physicalmemory"
} UNICODE_STRING,*PUNICODE_STRING;


typedef struct _OBJECT_ATTRIBUTES {
    ULONG Length;//长度 18h
    HANDLE RootDirectory;//  00000000
    PUNICODE_STRING ObjectName;//指向对象名的指针
    ULONG Attributes;//对象属性00000040h
    PVOID SecurityDescriptor;        // Points to type SECURITY_DESCRIPTOR，0
    PVOID SecurityQualityOfService;  // Points to type SECURITY_QUALITY_OF_SERVICE，0
} OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;

typedef DWORD  (__stdcall *ZWOS)(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES);
typedef DWORD  (__stdcall *ZWMV)(HANDLE,HANDLE,PVOID,ULONG,ULONG,PLARGE_INTEGER,PSIZE_T,DWORD,ULONG,ULONG);
typedef DWORD  (__stdcall *ZWUMV)(HANDLE,PVOID);

//
// This is the header defined previous to the official release of the
// SMBIOS 2.1 Specification. This header was used by Intel and IBM
// as a private add-on to the DMI BIOS 2.0 Specification.
 
//
typedef struct DmiStructureTableHeader
{
	BYTE     	header[5];             		// _DMI_ 0x494D445F
	BYTE     	checksum;             			// checksum of DMI BIOS Header Structure
	WORD     	len; 								 // Total Length of DMI BIOS Structure Table
	DWORD    	biosStructureTableAddress; // 32 bit physical address of beginning
											// of byte aligned DMI structure table
	WORD     	numStructures;      // Total number of structures within the DMI
										//  Structure table
	BYTE     	dmiBiosRevision;   // Revision of the DMI BIOS Extensions

} DmiStructureTableHeader;

//
// SMBIOS 2.1 Structure Table Entry Point
//
typedef struct SmBiosStructureTableHeader
{
	BYTE     	anchorString[4];        // _SM_ 0x5F4D535F
	BYTE     	checksum;               // checksum of DMI BIOS Header Structure
	BYTE     	len;                    // Total Length of DMI BIOS Structure Table
	BYTE     	majorVersion;           // major version of the spec
	BYTE     	minorVersion;           // minor version of the spec
	WORD     	maxStrucSize;           // maximum structure size
	BYTE     	epRevision;             // EPS revision
	BYTE     	reserved[5];            // reserved, must be 0
	DmiStructureTableHeader DmiTable;   // legacy DMI BIOS Table Header
} SmBiosStructureTableHeader;

// 4-byte header that each structure begins with
typedef struct DMIHeader
{
	BYTE   	structType;	// Specifies the type of structure.  Types 0 through 127 
						// (7Fh) are reserved for and defined by this specification.
						// Types 128 through 256 (80h to FFh) are available for 
						// system and OEM-specific information.	
	BYTE    	structLength;
	WORD    	structHandle;
} DMIHeader;
// BIOS info
typedef struct DMIType0
{
	DMIHeader 	header;
	BYTE vendor;
	BYTE version;
	WORD startAddrSeg;
	BYTE verdate;
	BYTE romsize;
	unsigned __int64 attr;
}DMIType0;
// System info
typedef struct DMIType1
{
	DMIHeader 	header;
	BYTE manufacturer;
	BYTE product;
	BYTE version;
	BYTE sn;
	BYTE uuid[16];
}DMIType1;
// Base Board info
typedef struct DMIType2
{
	DMIHeader 	header;
	BYTE manufacturer;
	BYTE product;
	BYTE version;
	BYTE sn;
}DMIType2;
// System Enclosure information
typedef struct DMIType3
{
	DMIHeader 	header;
	BYTE 			manufacturer;
	BYTE 			chassisType;
	BYTE 			version;
	BYTE 			serialNumber;
} DMIType3;
// Processor information
typedef struct DMIType4
{
	DMIHeader 	header;
 
	BYTE 			socketDesignation;
	BYTE 			processorType;
	BYTE 			processorFamily;
	BYTE 			processorManufacturer;
	unsigned __int64 processorID;
	BYTE 			processorVersion;
	BYTE 			voltage;
	WORD 			externalClock;
	WORD 			maxSpeed;
	WORD 			currentSpeed;
	BYTE 			status;
	BYTE 			processorUpgrade;
} DMIType4;

typedef struct _ASTAT_
{
	ADAPTER_STATUS adapt;
	NAME_BUFFER    NameBuff [30];
}ASTAT, * PASTAT;

#endif // !defined(AFX_HWSERIAL_H__279B3A74_F4ED_4E20_9D21_8CC5F11E5ABB__INCLUDED_)
