#include "global_xref.h"

inline Root::T_x137::T_x137(Reflector::CodeModel::IAssemblyManager^ A_0,Reflector::CodeModel::IAssemblyCache^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x137 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				Reflector::CodeModel::IAssemblyCache^ Root::T_x137 F_x2
	IL_0014:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x137::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1)
//Reflector::CodeModel::IAssemblyResolver^::Resolve by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyCache^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_3 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyCache^ Root::T_x137 F_x2
	IL_0009:                                                                        //ldarg.1
	IL_000a:                                                                        //ldarg.2
	IL_000b:            Temp_1=Temp_0->QueryLocation(A_0,A_1);                      //callvirt				System::String^ Reflector::CodeModel::IAssemblyCache::QueryLocation(Reflector::CodeModel::IAssemblyReference^,System::String^)
	IL_0010:            V_0=Temp_1;                                                 //stloc.0
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_2=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x137 F_x1
	IL_0017:                                                                        //ldloc.0
	IL_0018:            Temp_3=Temp_2->LoadFile(V_0);                               //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_001d:            V_1=Temp_3;                                                 //stloc.1
	IL_001e:                                                                        //ldloc.1
	IL_001f:            return V_1;                                                 //ret

}
