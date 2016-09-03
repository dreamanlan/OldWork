// HwSerial.h: interface for the HwSerial class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HWSERIAL_H__279B3A74_F4ED_4E20_9D21_8CC5F11E5ABB__INCLUDED_)
#define AFX_HWSERIAL_H__279B3A74_F4ED_4E20_9D21_8CC5F11E5ABB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

extern unsigned __int64 __cdecl GetHardDriveComputerID(int& flag,unsigned __int64* pbuf=NULL);
extern void __cdecl PrepareComputerId(char* buf,unsigned long* cpuids,unsigned __int64* hdid,int& flag);

#endif // !defined(AFX_HWSERIAL_H__279B3A74_F4ED_4E20_9D21_8CC5F11E5ABB__INCLUDED_)
