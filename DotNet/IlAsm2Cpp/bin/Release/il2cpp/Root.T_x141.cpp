#include "global_xref.h"

inline Root::T_x141::T_x141()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x144^ Temp_0 = nullptr;
	Root::T_x144^ Temp_1 = nullptr;
	Root::T_x144^ Temp_2 = nullptr;
	Root::T_x144^ Temp_3 = nullptr;
	Root::T_x144^ Temp_4 = nullptr;
	Root::T_x144^ Temp_5 = nullptr;
	Root::T_x144^ Temp_6 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.s				72
	IL_0009:            this->F_x1=72;                                              //stfld				System::Int32 Root::T_x141 F_x1
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:            this->F_x2=2;                                               //stfld				System::UInt16 Root::T_x141 F_x2
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            this->F_x12=0;                                              //stfld				System::UInt16 Root::T_x141 F_x12
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            Temp_0=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_0024:            this->F_x13=Temp_0;                                         //stfld				Root::T_x144^ Root::T_x141 F_x13
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldc.i4.1
	IL_002b:            this->F_x8=1;                                               //stfld				System::UInt32 Root::T_x141 F_x8
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldc.i4.0
	IL_0032:            this->F_x5=0;                                               //stfld				System::Int32 Root::T_x141 F_x5
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:                                                                        //ldc.i4.0
	IL_003a:            Temp_1=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_003f:            this->F_x9=Temp_1;                                          //stfld				Root::T_x144^ Root::T_x141 F_x9
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldc.i4.0
	IL_0046:                                                                        //ldc.i4.0
	IL_0047:            Temp_2=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_004c:            this->F_x4=Temp_2;                                          //stfld				Root::T_x144^ Root::T_x141 F_x4
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldc.i4.0
	IL_0053:                                                                        //ldc.i4.0
	IL_0054:            Temp_3=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_0059:            this->F_x15=Temp_3;                                         //stfld				Root::T_x144^ Root::T_x141 F_x15
	IL_005e:                                                                        //ldarg.0
	IL_005f:                                                                        //ldc.i4.0
	IL_0060:                                                                        //ldc.i4.0
	IL_0061:            Temp_4=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_0066:            this->F_x11=Temp_4;                                         //stfld				Root::T_x144^ Root::T_x141 F_x11
	IL_006b:                                                                        //ldarg.0
	IL_006c:                                                                        //ldc.i4.0
	IL_006d:                                                                        //ldc.i4.0
	IL_006e:            Temp_5=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_0073:            this->F_x10=Temp_5;                                         //stfld				Root::T_x144^ Root::T_x141 F_x10
	IL_0078:                                                                        //ldarg.0
	IL_0079:                                                                        //ldc.i4.0
	IL_007a:                                                                        //ldc.i4.0
	IL_007b:            Temp_6=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_0080:            this->F_x7=Temp_6;                                          //stfld				Root::T_x144^ Root::T_x141 F_x7
	IL_0085:            return;                                                     //ret

}
inline Root::T_x141::T_x141(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::UInt16 Temp_1 = 0;
	System::UInt16 Temp_2 = 0;
	Root::T_x144^ Temp_3 = nullptr;
	System::UInt32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	Root::T_x144^ Temp_6 = nullptr;
	Root::T_x144^ Temp_7 = nullptr;
	Root::T_x144^ Temp_8 = nullptr;
	Root::T_x144^ Temp_9 = nullptr;
	Root::T_x144^ Temp_10 = nullptr;
	Root::T_x144^ Temp_11 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=A_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_000d:            this->F_x1=safe_cast<System::Int32>(Temp_0);                //stfld				System::Int32 Root::T_x141 F_x1
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->ReadUInt16();                                   //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0019:            this->F_x2=Temp_1;                                          //stfld				System::UInt16 Root::T_x141 F_x2
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->ReadUInt16();                                   //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0025:            this->F_x12=Temp_2;                                         //stfld				System::UInt16 Root::T_x141 F_x12
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldarg.1
	IL_002c:            Temp_3=gcnew Root::T_x144(A_0);                             //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_0031:            this->F_x13=Temp_3;                                         //stfld				Root::T_x144^ Root::T_x141 F_x13
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldarg.1
	IL_0038:            Temp_4=A_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_003d:            this->F_x8=Temp_4;                                          //stfld				System::UInt32 Root::T_x141 F_x8
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_5=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0049:            this->F_x5=Temp_5;                                          //stfld				System::Int32 Root::T_x141 F_x5
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:            Temp_6=gcnew Root::T_x144(A_0);                             //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_0055:            this->F_x9=Temp_6;                                          //stfld				Root::T_x144^ Root::T_x141 F_x9
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:            Temp_7=gcnew Root::T_x144(A_0);                             //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_0061:            this->F_x4=Temp_7;                                          //stfld				Root::T_x144^ Root::T_x141 F_x4
	IL_0066:                                                                        //ldarg.0
	IL_0067:                                                                        //ldarg.1
	IL_0068:            Temp_8=gcnew Root::T_x144(A_0);                             //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_006d:            this->F_x15=Temp_8;                                         //stfld				Root::T_x144^ Root::T_x141 F_x15
	IL_0072:                                                                        //ldarg.0
	IL_0073:                                                                        //ldarg.1
	IL_0074:            Temp_9=gcnew Root::T_x144(A_0);                             //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_0079:            this->F_x11=Temp_9;                                         //stfld				Root::T_x144^ Root::T_x141 F_x11
	IL_007e:                                                                        //ldarg.0
	IL_007f:                                                                        //ldarg.1
	IL_0080:            Temp_10=gcnew Root::T_x144(A_0);                            //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_0085:            this->F_x10=Temp_10;                                        //stfld				Root::T_x144^ Root::T_x141 F_x10
	IL_008a:                                                                        //ldarg.0
	IL_008b:                                                                        //ldarg.1
	IL_008c:            Temp_11=gcnew Root::T_x144(A_0);                            //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_0091:            this->F_x7=Temp_11;                                         //stfld				Root::T_x144^ Root::T_x141 F_x7
	IL_0096:            return;                                                     //ret

}
inline Root::T_x144^ Root::T_x141::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x144^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x144^ Root::T_x141 F_x4
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x141::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x5=A_0;                                             //stfld				System::Int32 Root::T_x141 F_x5
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x141::M_x1(System::IO::BinaryWriter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::UInt16 Temp_1 = 0;
	System::UInt16 Temp_2 = 0;
	Root::T_x144^ Temp_3 = nullptr;
	System::UInt32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	Root::T_x144^ Temp_6 = nullptr;
	Root::T_x144^ Temp_7 = nullptr;
	Root::T_x144^ Temp_8 = nullptr;
	Root::T_x144^ Temp_9 = nullptr;
	Root::T_x144^ Temp_10 = nullptr;
	Root::T_x144^ Temp_11 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x141 F_x1
	IL_000a:            A_0->Write(Temp_0);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_000f:                                                                        //ldarg.1
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				System::UInt16 Root::T_x141 F_x2
	IL_0016:            A_0->Write(Temp_1);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_001b:                                                                        //ldarg.1
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x141 F_x12
	IL_0022:            A_0->Write(Temp_2);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_3=this->F_x13;                                         //ldfld				Root::T_x144^ Root::T_x141 F_x13
	IL_002d:                                                                        //ldarg.1
	IL_002e:            Temp_3->M_x1(A_0);                                          //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_0033:                                                                        //ldarg.1
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_4=this->F_x8;                                          //ldfld				System::UInt32 Root::T_x141 F_x8
	IL_003a:            A_0->Write(Temp_4);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_003f:                                                                        //ldarg.1
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_5=this->F_x5;                                          //ldfld				System::Int32 Root::T_x141 F_x5
	IL_0046:            A_0->Write(Temp_5);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_6=this->F_x9;                                          //ldfld				Root::T_x144^ Root::T_x141 F_x9
	IL_0051:                                                                        //ldarg.1
	IL_0052:            Temp_6->M_x1(A_0);                                          //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_7=this->F_x4;                                          //ldfld				Root::T_x144^ Root::T_x141 F_x4
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_7->M_x1(A_0);                                          //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_8=this->F_x15;                                         //ldfld				Root::T_x144^ Root::T_x141 F_x15
	IL_0069:                                                                        //ldarg.1
	IL_006a:            Temp_8->M_x1(A_0);                                          //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_9=this->F_x11;                                         //ldfld				Root::T_x144^ Root::T_x141 F_x11
	IL_0075:                                                                        //ldarg.1
	IL_0076:            Temp_9->M_x1(A_0);                                          //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_10=this->F_x10;                                        //ldfld				Root::T_x144^ Root::T_x141 F_x10
	IL_0081:                                                                        //ldarg.1
	IL_0082:            Temp_10->M_x1(A_0);                                         //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_0087:                                                                        //ldarg.0
	IL_0088:            Temp_11=this->F_x7;                                         //ldfld				Root::T_x144^ Root::T_x141 F_x7
	IL_008d:                                                                        //ldarg.1
	IL_008e:            Temp_11->M_x1(A_0);                                         //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_0093:            return;                                                     //ret

}
inline System::Int32 Root::T_x141::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				System::Int32 Root::T_x141 F_x5
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x144^ Root::T_x141::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x144^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				Root::T_x144^ Root::T_x141 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x144^ Root::T_x141::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x144^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x144^ Root::T_x141 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x141::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x141 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
