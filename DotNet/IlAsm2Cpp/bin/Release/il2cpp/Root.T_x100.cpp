#include "global_xref.h"

inline Root::T_x100::T_x100(Reflector::CodeModel::IAssemblyResolver^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_000c:            this->F_x1=safe_cast<System::Collections::IDictionary^>(Temp_0);//stfld				System::Collections::IDictionary^ Root::T_x100 F_x1
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyResolver^ Root::T_x100 F_x2
	IL_0018:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x100::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1)
//Reflector::CodeModel::IAssemblyResolver^::Resolve by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyResolver^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	System::Collections::IDictionary^ Temp_2 = nullptr;
	System::Collections::IDictionary^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Collections::IDictionary^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_003e;case 1:goto IL_000b;case 2:goto IL_0066;};//switch				(IL_003e,IL_000b,IL_0066)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_5=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x100 F_x1
	IL_002b:                                                                        //ldarg.1
	IL_002c:            Temp_6=Temp_5->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_0031:            if(Temp_6)goto IL_0068;                                     //brtrue.s				IL_0068
	IL_0033:                                                                        //ldc.i4				0x0
	IL_0038:            V_1=0;                                                      //stloc				V_1
	IL_003c:            /*goto IL_000d;*/goto IL_003e;                              //br.s				IL_000d
	IL_003e:            goto IL_0040;                                               //br.s				IL_0040
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyResolver^ Root::T_x100 F_x2
	IL_0046:                                                                        //ldarg.1
	IL_0047:                                                                        //ldarg.2
	IL_0048:            Temp_1=Temp_0->Resolve(A_0,A_1);                            //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyResolver::Resolve(Reflector::CodeModel::IAssemblyReference^,System::String^)
	IL_004d:            V_0=Temp_1;                                                 //stloc.0
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_2=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x100 F_x1
	IL_0054:                                                                        //ldarg.1
	IL_0055:                                                                        //ldloc.0
	IL_0056:            Temp_2->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_0));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_005b:                                                                        //ldc.i4				0x2
	IL_0060:            V_1=2;                                                      //stloc				V_1
	IL_0064:            /*goto IL_000d;*/goto IL_0066;                              //br.s				IL_000d
	IL_0066:            goto IL_0068;                                               //br.s				IL_0068
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_3=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x100 F_x1
	IL_006e:                                                                        //ldarg.1
	IL_006f:            Temp_4=Temp_3[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_0074:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0079:            return safe_cast<Reflector::CodeModel::IAssembly^>(Temp_4); //ret

}
