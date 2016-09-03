#pragma once

#ifdef _DEBUG

#ifdef _DLL
#pragma comment(lib,"HdSerial_mdd.lib")
#else//_DLL
#pragma comment(lib,"HdSerial_mtd.lib")
#endif//_DLL

#else//_DEBUG

#ifdef _DLL
#pragma comment(lib,"HdSerial_md.lib")
#else//_DLL
#pragma comment(lib,"HdSerial_mt.lib")
#endif//_DLL

#endif//_DEBUG