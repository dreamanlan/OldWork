// dlldata.c 的包装

#ifdef _MERGE_PROXYSTUB // 合并代理存根(stub) DLL

#define REGISTER_PROXY_DLL //DllRegisterServer 等

#define _WIN32_WINNT 0x0500	//用于 Win2000，对于 NT4 或安装了 DCOM 的 Win95，请将它更改为 0x0400
#define USE_STUBLESS_PROXY	//仅当使用 MIDL 开关 /Oicf 时定义

#pragma comment(lib, "rpcns4.lib")
#pragma comment(lib, "rpcrt4.lib")

#define ENTRY_PREFIX	Prx

#include "dlldata.c"
#include "IdaHTML_p.c"

#endif //_MERGE_PROXYSTUB
