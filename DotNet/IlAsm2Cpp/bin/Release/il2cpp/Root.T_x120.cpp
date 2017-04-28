#include "global_xref.h"

inline Root::T_x120::T_x120()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x120::M_x1(System::String^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_0=11;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:                                                                        //ldstr				L"\x2328"
	IL_0010:                                                                        //ldloc				V_0
	IL_0014:            Temp_0=a(L"\x2328",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0019:            Temp_1=System::String::Concat(A_1,Temp_0);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_001e:            Root::T_x120::M_x2(A_0,Temp_1);                             //call				void Root::T_x120::M_x2(System::String^,System::String^)
	IL_0023:            return;                                                     //ret

}
inline void Root::T_x120::M_x2(System::String^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::IO::StreamWriter^ Temp_3 = nullptr;
	//local variables.
	System::IO::StreamWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_2=6;                                                      //stloc				V_2
	IL_0009:                                                                        //ldstr				L"\x4723\x1C25\x7427"
	IL_000e:                                                                        //ldloc				V_2
	IL_0012:            Temp_0=a(L"\x4723\x1C25\x7427",V_2);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldstr				L"\x0A23\x4A25\x4727\x4D29"
	IL_001d:                                                                        //ldloc				V_2
	IL_0021:            Temp_1=a(L"\x0A23\x4A25\x4727\x4D29",V_2);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0026:            Temp_2=System::String::Concat(Temp_0,A_0,Temp_1);           //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_002b:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldc.i4.1
	IL_002f:            Temp_3=gcnew System::IO::StreamWriter(A_0,true);            //newobj				void System::IO::StreamWriter::.ctor(System::String^,System::Boolean)
	IL_0034:            V_0=Temp_3;                                                 //stloc.0
	IL_0035:            /*goto IL_0037;*/goto IL_003501;                            //br.s				IL_0037
	IL_003501:          try{
	IL_0037:                                                                        //ldc.i4.2
	IL_0038:                                                                        //dup
	IL_0039:                                                                        //dup
	IL_003a:                                                                        //ldc.i4.4
	IL_003b:                                                                        //sub
	IL_003c:                                                                        //blt				IL_0038
	IL_0041:                                                                        //pop
	IL_0042:                                                                        //ldloc.0
	IL_0043:                                                                        //ldarg.1
	IL_0044:            V_0->Write(A_1);                                            //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0049:            goto IL_0091;                                               //leave.s				IL_0091
	                    ;}
	                    finally{
	IL_004b:                                                                        //ldc.i4				0x0
	IL_0050:            V_1=0;                                                      //stloc				V_1
	IL_0054:            /*goto IL_0058;*/goto IL_0056;                              //br.s				IL_0058
	IL_0056:            goto IL_006d;                                               //br.s				IL_006d
	IL_0058:                                                                        //ldloc				V_1
	IL_005c:            switch(V_1){case 0:goto IL_0056;case 1:goto IL_007b;case 2:goto IL_008e;};//switch				(IL_0056,IL_007b,IL_008e)
	IL_006d:                                                                        //ldloc.0
	IL_006e:            if(V_0==nullptr)goto IL_0090;                               //brfalse.s				IL_0090
	IL_0070:                                                                        //ldc.i4				0x1
	IL_0075:            V_1=1;                                                      //stloc				V_1
	IL_0079:            /*goto IL_0058;*/goto IL_007b;                              //br.s				IL_0058
	IL_007b:            goto IL_007d;                                               //br.s				IL_007d
	IL_007d:                                                                        //ldloc.0
	IL_007e:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0083:                                                                        //ldc.i4				0x2
	IL_0088:            V_1=2;                                                      //stloc				V_1
	IL_008c:            /*goto IL_0058;*/goto IL_008e;                              //br.s				IL_0058
	IL_008e:            goto IL_0090;                                               //br.s				IL_0090
	IL_0090:                                                                        //endfinally
	                    ;}
	IL_0091:            return;                                                     //ret

}
