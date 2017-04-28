#include "global_xref.h"

inline Root::T_x177::T_x177()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x177::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::String^ Root::T_x177 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x177::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::String^ Root::T_x177 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x177::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x177 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x177::M_x2()
//System::Object^::ToString by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->M_x12();                                       //call				System::String^ Root::T_x177::M_x12()
	IL_000f:                                                                        //ldstr				L"\x231D\x021F"
	IL_0014:                                                                        //ldloc				V_0
	IL_0018:            Temp_1=a(L"\x231D\x021F",V_0);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001d:                                                                        //ldarg.0
	IL_001e:            Temp_2=this->M_x1();                                        //call				System::String^ Root::T_x177::M_x1()
	IL_0023:                                                                        //ldstr				L"\x3C1D"
	IL_0028:                                                                        //ldloc				V_0
	IL_002c:            Temp_3=a(L"\x3C1D",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0031:            Temp_4=System::String::Concat(Temp_0,Temp_1,Temp_2,Temp_3); //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_0036:            return Temp_4;                                              //ret

}
inline void Root::T_x177::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x177 F_x1
	IL_0007:            return;                                                     //ret

}
