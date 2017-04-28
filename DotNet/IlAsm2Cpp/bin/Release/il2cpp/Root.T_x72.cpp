#include "global_xref.h"

inline Root::T_x72::T_x72(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::EventArgs();*/                                    //call				void System::EventArgs::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x72 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:            this->F_x2=false;                                           //stfld				System::Boolean Root::T_x72 F_x2
	IL_0014:            return;                                                     //ret

}
inline System::Boolean Root::T_x72::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Boolean Root::T_x72 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x72::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Boolean Root::T_x72 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x72::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x72 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
