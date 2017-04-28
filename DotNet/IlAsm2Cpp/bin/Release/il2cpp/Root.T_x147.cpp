#include "global_xref.h"

inline static Root::T_x147::T_x147()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x147^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew Root::T_x147();                                //newobj				void Root::T_x147::.ctor()
	IL_0005:            Root::T_x147::F_x1=Temp_0;                                  //stsfld				Root::T_x147^ Root::T_x147 F_x1
	IL_000a:            return;                                                     //ret

}
inline Root::T_x147::T_x147()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x147::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x147^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x147::F_x1;                                  //ldsfld				Root::T_x147^ Root::T_x147 F_x1
	IL_0005:            return safe_cast<System::Collections::IEnumerator^>(Temp_0);//ret

}
inline void Root::T_x147::M_x12()
//System::Collections::IEnumerator^::Reset by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline System::Boolean Root::T_x147::M_x13()
//System::Collections::IEnumerator^::MoveNext by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return false;                                               //ret

}
inline System::Object^ Root::T_x147::M_x2()
//System::Collections::IEnumerator^::get_Current by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
