#include "global_xref.h"

inline Root::T_x49::T_x49(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::EventArgs();*/                                    //call				void System::EventArgs::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x49 F_x1
	IL_000d:            return;                                                     //ret

}
inline System::String^ Root::T_x49::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x49 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
