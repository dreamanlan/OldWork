#include "global_xref.h"

inline Root::T_x131::T_x131()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x130();*/                                         //call				void Root::T_x130::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x131::T_x131(System::Boolean A_0,System::Boolean A_1):Root::T_x130(A_0,A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldarg.2
	IL_0003:                                                                        //call				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_0008:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssemblyReference^ Root::T_x131::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0)
//Reflector::ITranslator^::TranslateAssemblyReference by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x2(A_0);                                     //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x129::M_x2(Reflector::CodeModel::IAssemblyReference^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IModuleReference^ Root::T_x131::M_x1(Reflector::CodeModel::IModuleReference^ A_0)
//Reflector::ITranslator^::TranslateModuleReference by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModuleReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x2(A_0);                                     //callvirt				Reflector::CodeModel::IModuleReference^ Root::T_x129::M_x2(Reflector::CodeModel::IModuleReference^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::INamespace^ Root::T_x131::M_x1(Reflector::CodeModel::INamespace^ A_0)
//Reflector::ITranslator^::TranslateNamespace by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::INamespace^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x2(A_0);                                     //callvirt				Reflector::CodeModel::INamespace^ Root::T_x129::M_x2(Reflector::CodeModel::INamespace^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x131::M_x2(Reflector::CodeModel::IAssembly^ A_0)
//Reflector::ITranslator^::TranslateAssembly by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x129::M_x1(Reflector::CodeModel::IAssembly^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x131::M_x2(Reflector::CodeModel::IEventDeclaration^ A_0)
//Reflector::ITranslator^::TranslateEventDeclaration by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //callvirt				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x131::M_x2(Reflector::CodeModel::IFieldDeclaration^ A_0)
//Reflector::ITranslator^::TranslateFieldDeclaration by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //callvirt				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x131::M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0)
//Reflector::ITranslator^::TranslateMethodDeclaration by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x131::M_x2(Reflector::CodeModel::IModule^ A_0)
//Reflector::ITranslator^::TranslateModule by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModule^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //callvirt				Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x131::M_x2(Reflector::CodeModel::IPropertyDeclaration^ A_0)
//Reflector::ITranslator^::TranslatePropertyDeclaration by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IPropertyDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0007:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x131::M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0)
//Reflector::ITranslator^::TranslateTypeDeclaration by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0007:            return Temp_0;                                              //ret

}
