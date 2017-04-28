#include "global_xref.h"

inline Root::T_x132::T_x132()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::ITranslator^ Root::T_x132::M_x1()
//Reflector::ITranslatorManager^::get_Disassembler by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ITranslator^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::ITranslator^ Root::T_x132 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x132::M_x1(Reflector::ITranslator^ A_0)
//Reflector::ITranslatorManager^::set_Disassembler by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Reflector::ITranslator^ Root::T_x132 F_x1
	IL_0007:            return;                                                     //ret

}
