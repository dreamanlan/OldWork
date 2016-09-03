#pragma once

#ifdef _DEBUG

#ifdef _DLL

#ifdef INCLUDE_COMPILE
#pragma comment(lib,"sc_full_mdd.lib")
#else
#pragma comment(lib,"sc_vm_mdd.lib")
#endif

#else//_DLL

#ifdef INCLUDE_COMPILE
#pragma comment(lib,"sc_full_mtd.lib")
#else
#pragma comment(lib,"sc_vm_mtd.lib")
#endif

#endif//_DLL

#else//_DEBUG

#ifdef _DLL

#ifdef INCLUDE_COMPILE
#pragma comment(lib,"sc_full_md.lib")
#else
#pragma comment(lib,"sc_vm_md.lib")
#endif

#else//_DLL

#ifdef INCLUDE_COMPILE
#pragma comment(lib,"sc_full_mt.lib")
#else
#pragma comment(lib,"sc_vm_mt.lib")
#endif

#endif//_DLL

#endif//_DEBUG