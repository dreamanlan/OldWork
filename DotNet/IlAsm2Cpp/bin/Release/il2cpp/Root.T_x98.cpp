#include "global_xref.h"

inline Root::T_x98::T_x98()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::String^ Root::T_x98 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=gcnew System::Collections::Specialized::StringCollection();//newobj				void System::Collections::Specialized::StringCollection::.ctor()
	IL_0011:            this->F_x2=Temp_1;                                          //stfld				System::Collections::Specialized::StringCollection^ Root::T_x98 F_x2
	IL_0016:                                                                        //ldarg.0
	IL_0017:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_001c:            return;                                                     //ret

}
inline System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Specialized::StringCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Specialized::StringCollection^ Root::T_x98 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x98::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x98 F_x1
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x98::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x98 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
