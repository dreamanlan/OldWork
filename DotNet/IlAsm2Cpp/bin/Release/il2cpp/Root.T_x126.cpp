#include "global_xref.h"

inline Root::T_x126::T_x126()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Exception^ Root::T_x126::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Exception^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Exception^ Root::T_x126 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x126::M_x1(System::Exception^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::Exception^ Root::T_x126 F_x12
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x126::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Object^ Root::T_x126 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x126::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x126 F_x1
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x126::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x126 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Object^ Root::T_x126::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x126 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
