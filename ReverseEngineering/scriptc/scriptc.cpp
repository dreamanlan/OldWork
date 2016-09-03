
#include "stdafx.h"
#include <fstream>
#include <conio.h>
#include "Interpreter.h"

static char stdinbuf[1024*1024]={""};
int _tmain(int argc, _TCHAR* argv[])
{
#ifdef _DEBUG
	int tmpDbgFlag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
    tmpDbgFlag |= _CRTDBG_DELAY_FREE_MEM_DF;
    tmpDbgFlag |= _CRTDBG_LEAK_CHECK_DF;
    _CrtSetDbgFlag(tmpDbgFlag);
#endif
	std::cout<<"类C脚本编译解释器 V0.5 版权所有(C) 2005 南枫"<<std::endl;
	std::cout<<"用法:命令行带一个参数，参数为脚本文件，或者不带参数从标准输入键入脚本"<<std::endl;
	std::cout<<"，输入CTRL+Z并按回车结束，或者利用重定向从文件读取。"<<std::endl<<std::endl;

	char* buf=stdinbuf;
	if(argc<2)
	{
		std::cout<<"请输入脚本内容（输入CTRL+Z并按回车结束）："<<std::endl;
		std::cin.read(stdinbuf,1024*1024);
		stdinbuf[std::cin.gcount()]=0;
	}
	else
	{
		std::ifstream file(argv[1],std::ios_base::in);
		file.read(buf,1024*1024);
		buf[file.gcount()]=0;
	}
	//yydebug=1;
	printf("开始编译...\n");
	
	ScriptcRuntime vmachine;
	CString err=vmachine.Compile(buf,ScriptFile::ConvertPath("main.sc"));
	if(err.GetLength()>0)
	{
		std::cout<<err<<std::endl;
		std::cout<<"按任意键退出..."<<std::endl;
		::getch();
		return -1;
	}
	else		
		vmachine.SaveFile("ss.sc");
	printf("编译结束.\n");
	printf("开始执行...\n");
	ScriptcRuntime vmachine2;
	if(!vmachine2.LoadFile("ss.sc"))
	{
		std::cout<<"装入文件错误，按任意键退出..."<<std::endl;
		::getch();
		return -2;
	}
	::CoInitialize(NULL);
	vmachine2.LoadLibrary();
	vmachine2.ExecScript();
	DynamicDispatch::ClearAll();
	vmachine2.UnloadLibrary();
	printf("执行结束,按任意键退出程序.\n");
	::CoUninitialize();
	::getch();
	return 0;
}
