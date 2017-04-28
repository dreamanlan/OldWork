#include "global_xref.h"

inline Root::T_x170::T_x170()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x170::M_x1(System::IO::BinaryWriter^ A_0,System::Int32 A_1,System::Int32 A_2,System::Int32 A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::Stream^ Temp_0 = nullptr;
	System::Int64 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int16 Temp_5 = 0;
	System::Int16 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x170::T_x1 V_1;
	System::UInt32 V_2 = 0;
	array<System::Byte>^ V_3 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:            Temp_0=A_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_0009:            Temp_1=Temp_0->Position;                                    //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_000e:                                                                        //conv.i4
	IL_000f:            V_0=safe_cast<System::Int32>(Temp_1);                       //stloc.0
	IL_0010:                                                                        //ldloca.s				V_1
	IL_0012:            V_1=Root::T_x170::T_x1();                                   //initobj				Root::T_x170::T_x1
	IL_0018:                                                                        //ldc.i4.0
	IL_0019:            V_2=0;                                                      //stloc.2
	IL_001a:                                                                        //ldloc.2
	IL_001b:            Temp_2=gcnew array<System::Byte>(V_2);                      //newarr				System::Byte
	IL_0020:            V_3=Temp_2;                                                 //stloc.3
	IL_0021:                                                                        //ldloca.s				V_1
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldc.i4.s				28
	IL_0026:                                                                        //add
	IL_0027:            V_1.F_x4=(V_0 + 28);                                        //stfld				System::Int32 Root::T_x170::T_x1 F_x4
	IL_002c:                                                                        //ldloca.s				V_1
	IL_002e:                                                                        //ldloca.s				V_1
	IL_0030:            Temp_3=V_1.F_x4;                                            //ldfld				System::Int32 Root::T_x170::T_x1 F_x4
	IL_0035:                                                                        //ldarg.3
	IL_0036:                                                                        //sub
	IL_0037:                                                                        //ldarg.s				A_3
	IL_0039:                                                                        //add
	IL_003a:            V_1.F_x9=((Temp_3 - A_2) + A_3);                            //stfld				System::Int32 Root::T_x170::T_x1 F_x9
	IL_003f:                                                                        //ldarg.1
	IL_0040:                                                                        //ldloca.s				V_1
	IL_0042:            Temp_4=V_1.F_x1;                                            //ldfld				System::Int32 Root::T_x170::T_x1 F_x1
	IL_0047:            A_0->Write(Temp_4);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //ldarg.2
	IL_004e:            A_0->Write(A_1);                                            //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0053:                                                                        //ldarg.1
	IL_0054:                                                                        //ldloca.s				V_1
	IL_0056:            Temp_5=V_1.F_x12;                                           //ldfld				System::Int16 Root::T_x170::T_x1 F_x12
	IL_005b:                                                                        //conv.u2
	IL_005c:            A_0->Write(safe_cast<System::UInt16>(Temp_5));              //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0061:                                                                        //ldarg.1
	IL_0062:                                                                        //ldloca.s				V_1
	IL_0064:            Temp_6=V_1.F_x13;                                           //ldfld				System::Int16 Root::T_x170::T_x1 F_x13
	IL_0069:                                                                        //conv.u2
	IL_006a:            A_0->Write(safe_cast<System::UInt16>(Temp_6));              //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_006f:                                                                        //ldarg.1
	IL_0070:                                                                        //ldloca.s				V_1
	IL_0072:            Temp_7=V_1.F_x8;                                            //ldfld				System::Int32 Root::T_x170::T_x1 F_x8
	IL_0077:            A_0->Write(Temp_7);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_007c:                                                                        //ldarg.1
	IL_007d:                                                                        //ldloca.s				V_1
	IL_007f:            Temp_8=V_1.F_x5;                                            //ldfld				System::Int32 Root::T_x170::T_x1 F_x5
	IL_0084:            A_0->Write(Temp_8);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0089:                                                                        //ldarg.1
	IL_008a:                                                                        //ldloca.s				V_1
	IL_008c:            Temp_9=V_1.F_x8;                                            //ldfld				System::Int32 Root::T_x170::T_x1 F_x8
	IL_0091:            A_0->Write(Temp_9);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0096:                                                                        //ldarg.1
	IL_0097:                                                                        //ldloca.s				V_1
	IL_0099:            Temp_10=V_1.F_x5;                                           //ldfld				System::Int32 Root::T_x170::T_x1 F_x5
	IL_009e:            A_0->Write(Temp_10);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_00a3:                                                                        //ldarg.1
	IL_00a4:                                                                        //ldloca.s				V_1
	IL_00a6:            Temp_11=V_1.F_x9;                                           //ldfld				System::Int32 Root::T_x170::T_x1 F_x9
	IL_00ab:            A_0->Write(Temp_11);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_00b0:                                                                        //ldarg.1
	IL_00b1:                                                                        //ldloca.s				V_1
	IL_00b3:            Temp_12=V_1.F_x4;                                           //ldfld				System::Int32 Root::T_x170::T_x1 F_x4
	IL_00b8:            A_0->Write(Temp_12);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_00bd:                                                                        //ldarg.1
	IL_00be:                                                                        //ldloc.3
	IL_00bf:            A_0->Write(V_3);                                            //callvirt				void System::IO::BinaryWriter::Write(array<System::Byte>^)
	IL_00c4:            return;                                                     //ret

}
