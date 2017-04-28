#include "global_xref.h"

inline Root::T_x163::T_x163(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<array<Reflector::CodeModel::ICustomAttribute^>^>(nullptr);//stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x2=safe_cast<System::Object^>(A_0);                 //stfld				System::Object^ Root::T_x163 F_x2
	IL_0014:            return;                                                     //ret

}
inline Root::T_x163::T_x163(Root::T_x161^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<array<Reflector::CodeModel::ICustomAttribute^>^>(nullptr);//stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x2=safe_cast<System::Object^>(A_0);                 //stfld				System::Object^ Root::T_x163 F_x2
	IL_0014:            return;                                                     //ret

}
inline Reflector::CodeModel::IType^ Root::T_x163::M_x1()
//Reflector::CodeModel::IMethodReturnType^::get_Type by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	Root::T_x161^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0031;case 1:goto IL_003f;case 2:goto IL_0052;};//switch				(IL_0031,IL_003f,IL_0052)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x163 F_x2
	IL_0020:                                                                        //isinst				Root::T_x161
	IL_0025:            V_0=dynamic_cast<Root::T_x161^>(Temp_0);                    //stloc.0
	IL_0026:                                                                        //ldc.i4				0x0
	IL_002b:            V_1=0;                                                      //stloc				V_1
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0==nullptr)goto IL_0054;                               //brfalse.s				IL_0054
	IL_0034:                                                                        //ldc.i4				0x1
	IL_0039:            V_1=1;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldloc.0
	IL_0042:            V_0->M_x7();                                                //callvirt				void Root::T_x161::M_x7()
	IL_0047:                                                                        //ldc.i4				0x2
	IL_004c:            V_1=2;                                                      //stloc				V_1
	IL_0050:            /*goto IL_0002;*/goto IL_0052;                              //br.s				IL_0002
	IL_0052:            goto IL_0054;                                               //br.s				IL_0054
	IL_0054:                                                                        //ldarg.0
	IL_0055:            Temp_1=this->F_x2;                                          //ldfld				System::Object^ Root::T_x163 F_x2
	IL_005a:                                                                        //castclass				Reflector::CodeModel::IType
	IL_005f:            return safe_cast<Reflector::CodeModel::IType^>(Temp_1);     //ret

}
inline void Root::T_x163::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_8 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICustomAttribute^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0006:            if(Temp_0!=nullptr)goto IL_0020;                            //brtrue.s				IL_0020
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldc.i4.1
	IL_000c:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0011:            this->F_x1=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0016:                                                                        //ldarg.0
	IL_0017:            Temp_8=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_001f:            return;                                                     //ret
	IL_0020:                                                                        //ldc.i4.4
	IL_0021:                                                                        //dup
	IL_0022:                                                                        //dup
	IL_0023:                                                                        //ldc.i4.2
	IL_0024:                                                                        //sub
	IL_0025:                                                                        //blt				IL_0021
	IL_002a:                                                                        //pop
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_1=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0031:            V_0=Temp_1;                                                 //stloc.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_2=V_0->Length;                                         //ldlen
	IL_0035:                                                                        //conv.i4
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:                                                                        //conv.ovf.u4
	IL_0039:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_003e:            this->F_x1=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_4=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_5=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_6=V_0->Length;                                         //ldlen
	IL_0058:                                                                        //conv.i4
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x163::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::IMethodReturnType^::set_Type by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=safe_cast<System::Object^>(A_0);                 //stfld				System::Object^ Root::T_x163 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x163::M_x2()
//System::Object^::ToString by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x163 F_x2
	IL_0006:            Temp_1=Temp_0->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x163::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	Root::T_x11^ Temp_2 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x163 F_x1
	IL_0016:            Temp_2=gcnew Root::T_x11(Temp_1);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_001b:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_2);//ret

}
