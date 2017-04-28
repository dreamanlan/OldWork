#include "global_xref.h"

inline Root::T_x53::T_x53(Root::T_x18::T_x56^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x18::T_x56^ Root::T_x53 F_x1
	IL_000d:            return;                                                     //ret

}
inline Root::T_x54^ Root::T_x53::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x56^ Temp_0 = nullptr;
	Root::T_x18::T_x9^ Temp_1 = nullptr;
	Root::T_x54^ Temp_2 = nullptr;
	//local variables.
	Root::T_x18::T_x9^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x18::T_x56^ Root::T_x53 F_x1
	IL_0006:            Temp_1=Temp_0->M_x12();                                     //callvirt				Root::T_x18::T_x9^ Root::T_x18::T_x56::M_x12()
	IL_000b:            V_0=Temp_1;                                                 //stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            if(V_0==nullptr)goto IL_001b;                               //brfalse.s				IL_001b
	IL_000f:            goto IL_0012;                                               //br.s				IL_0012
	IL_0011:                                                                        //break
	IL_0012:            goto IL_0014;                                               //br.s				IL_0014
	IL_0014:                                                                        //ldloc.0
	IL_0015:            Temp_2=gcnew Root::T_x54(V_0);                              //newobj				void Root::T_x54::.ctor(Root::T_x18::T_x9^)
	IL_001a:            return Temp_2;                                              //ret
	IL_001b:                                                                        //ldnull
	IL_001c:            return nullptr;                                             //ret

}
