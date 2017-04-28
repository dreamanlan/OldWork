#include "global_xref.h"

inline Root::DotfuscatorAttribute::DotfuscatorAttribute(System::String^ a)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            /*System::Attribute();*/                                    //call				void System::Attribute::.ctor()
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->a=a;                                                  //stfld				System::String^ Root::DotfuscatorAttribute a
	IL_000d:            return;                                                     //ret

}
inline System::String^ Root::DotfuscatorAttribute::A::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->a;                                             //ldfld				System::String^ Root::DotfuscatorAttribute a
	IL_0006:            return Temp_0;                                              //ret

}
