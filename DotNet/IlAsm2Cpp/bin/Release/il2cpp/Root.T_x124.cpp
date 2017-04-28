#include "global_xref.h"

inline Root::T_x124::T_x124(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::ComponentModel::CancelEventArgs();*/              //call				void System::ComponentModel::CancelEventArgs::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x124 F_x1
	IL_000d:            return;                                                     //ret

}
inline System::Object^ Root::T_x124::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Object^ Root::T_x124 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
