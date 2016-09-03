#pragma once

extern bool Replace(char * s,const char * searchstr,const char * replstring,int length);
extern int FindWithWildcards(const char* source, const char* findstring, int len);
extern int Hex2Bin(const CString& s, char* arr, DWORD size);

extern BOOL GetPEInfo(DWORD ep);
extern BOOL SaveDump(const char* szFileName, DWORD ep);