#include "global_xref.h"

inline Root::T_x51::T_x51(System::String^ A_0,System::Boolean A_1):System::ComponentModel::CancelEventArgs(A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.2
	IL_0002:                                                                        //call				void System::ComponentModel::CancelEventArgs::.ctor(System::Boolean)
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x51 F_x1
	IL_000e:            return;                                                     //ret

}
inline System::String^ Root::T_x51::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x51 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
