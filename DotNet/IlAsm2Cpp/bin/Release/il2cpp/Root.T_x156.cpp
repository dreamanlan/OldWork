#include "global_xref.h"

inline Root::T_x156::T_x156(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::IO::Stream^ Temp_2 = nullptr;
	System::Int64 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Byte Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::Text::Encoding^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	array<System::Char>^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::IO::Stream^ Temp_11 = nullptr;
	System::Int64 Temp_12 = 0;
	System::IO::Stream^ Temp_13 = nullptr;
	System::Int64 Temp_14 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Byte>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Byte V_3 = 0;
	System::Int32 V_4 = 0;
	array<System::Char>^ V_5 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				System::Int32 Root::T_x156 F_x1
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0019:            this->F_x2=Temp_1;                                          //stfld				System::Int32 Root::T_x156 F_x2
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_2=A_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_0024:            Temp_3=Temp_2->Position;                                    //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0029:                                                                        //conv.i4
	IL_002a:            V_0=safe_cast<System::Int32>(Temp_3);                       //stloc.0
	IL_002b:                                                                        //ldc.i4.s				32
	IL_002d:            Temp_4=gcnew array<System::Byte>(32);                       //newarr				System::Byte
	IL_0032:            V_1=Temp_4;                                                 //stloc.1
	IL_0033:                                                                        //ldc.i4.0
	IL_0034:            V_2=0;                                                      //stloc.2
	IL_0035:                                                                        //ldc.i4.0
	IL_0036:            V_3=0;                                                      //stloc.3
	IL_0037:            goto IL_0077;                                               //br.s				IL_0077
	IL_0039:                                                                        //ldloc.2
	IL_003a:                                                                        //ldc.i4.1
	IL_003b:                                                                        //add
	IL_003c:            V_2=(V_2 + 1);                                              //stloc.2
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_7=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_0043:                                                                        //ldloc.1
	IL_0044:            Temp_8=Temp_7->GetString(V_1);                              //callvirt				System::String^ System::Text::Encoding::GetString(array<System::Byte>^)
	IL_0049:                                                                        //ldc.i4.1
	IL_004a:            Temp_9=gcnew array<System::Char>(1);                        //newarr				System::Char
	IL_004f:            V_5=Temp_9;                                                 //stloc.s				V_5
	IL_0051:                                                                        //ldloc.s				V_5
	IL_0053:            Temp_10=Temp_8->Trim(V_5);                                  //callvirt				System::String^ System::String::Trim(array<System::Char>^)
	IL_0058:            this->F_x12=Temp_10;                                        //stfld				System::String^ Root::T_x156 F_x12
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_11=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_0063:            Temp_12=Temp_11->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0068:                                                                        //ldloc.0
	IL_0069:                                                                        //conv.i8
	IL_006a:                                                                        //sub
	IL_006b:                                                                        //ldc.i4.3
	IL_006c:                                                                        //conv.i8
	IL_006d:                                                                        //and
	IL_006e:                                                                        //conv.i4
	IL_006f:            V_4=safe_cast<System::Int32>(((Temp_12 - safe_cast<System::Int64>(V_0)) & 3));//stloc.s				V_4
	IL_0071:                                                                        //ldloc.s				V_4
	IL_0073:            if(V_4==0)goto IL_00a6;                                     //brfalse.s				IL_00a6
	IL_0075:            goto IL_008d;                                               //br.s				IL_008d
	IL_0077:                                                                        //ldarg.1
	IL_0078:            Temp_5=A_0->ReadByte();                                     //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_007d:                                                                        //dup
	IL_007e:            V_3=Temp_5;                                                 //stloc.3
	IL_007f:            if(safe_cast<System::Int32>(V_3)!=0)goto IL_0083;           //brtrue.s				IL_0083
	IL_0081:            goto IL_0039;                                               //br.s				IL_0039
	IL_0083:                                                                        //ldloc.1
	IL_0084:            Temp_6=V_2;                                                 //ldloc.2
	IL_0085:                                                                        //dup
	IL_0086:                                                                        //ldc.i4.1
	IL_0087:                                                                        //add
	IL_0088:            V_2=(Temp_6 + 1);                                           //stloc.2
	IL_0089:                                                                        //ldloc.3
	IL_008a:            V_1[Temp_6]=V_3;                                            //stelem.i1
	IL_008b:            goto IL_0077;                                               //br.s				IL_0077
	IL_008d:                                                                        //ldarg.1
	IL_008e:            Temp_13=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_0093:                                                                        //dup
	IL_0094:            Temp_14=Temp_13->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0099:                                                                        //ldc.i4.4
	IL_009a:                                                                        //ldloc.s				V_4
	IL_009c:                                                                        //sub
	IL_009d:                                                                        //conv.i8
	IL_009e:                                                                        //add
	IL_009f:            Temp_13->Position=(Temp_14 + safe_cast<System::Int64>((4 - V_4)));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_00a4:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_00a6:            return;                                                     //ret

}
inline Root::T_x156::T_x156(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x12=A_0;                                            //stfld				System::String^ Root::T_x156 F_x12
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::Int32 Root::T_x156 F_x2
	IL_0014:            return;                                                     //ret

}
inline System::Int32 Root::T_x156::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x156 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x156::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x156 F_x1
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x156::M_x1(System::IO::Stream^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::BinaryWriter^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Text::Encoding^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	array<System::Byte>^ Temp_5 = nullptr;
	System::IO::Stream^ Temp_6 = nullptr;
	System::Int64 Temp_7 = 0;
	//local variables.
	System::IO::BinaryWriter^ V_0 = nullptr;
	array<System::Byte>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_00ab;case 1:goto IL_0074;case 2:goto IL_0067;case 3:goto IL_0094;};//switch				(IL_00ab,IL_0074,IL_0067,IL_0094)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=gcnew System::IO::BinaryWriter(A_0);                 //newobj				void System::IO::BinaryWriter::.ctor(System::IO::Stream^)
	IL_0021:            V_0=Temp_0;                                                 //stloc.0
	IL_0022:                                                                        //ldloc.0
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x156 F_x1
	IL_0029:            V_0->Write(Temp_1);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_002e:                                                                        //ldloc.0
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_2=this->F_x2;                                          //ldfld				System::Int32 Root::T_x156 F_x2
	IL_0035:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_003a:            Temp_3=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_4=this->F_x12;                                         //ldfld				System::String^ Root::T_x156 F_x12
	IL_0045:            Temp_5=Temp_3->GetBytes(Temp_4);                            //callvirt				array<System::Byte>^ System::Text::Encoding::GetBytes(System::String^)
	IL_004a:            V_1=Temp_5;                                                 //stloc.1
	IL_004b:                                                                        //ldloc.0
	IL_004c:                                                                        //ldloc.1
	IL_004d:            V_0->Write(V_1);                                            //callvirt				void System::IO::BinaryWriter::Write(array<System::Byte>^)
	IL_0052:                                                                        //ldloc.0
	IL_0053:                                                                        //ldc.i4.0
	IL_0054:            V_0->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_0059:            goto IL_005c;                                               //br.s				IL_005c
	IL_005b:                                                                        //break
	IL_005c:                                                                        //ldc.i4				0x2
	IL_0061:            V_2=2;                                                      //stloc				V_2
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:            goto IL_0069;                                               //br.s				IL_0069
	IL_0069:                                                                        //ldc.i4				0x1
	IL_006e:            V_2=1;                                                      //stloc				V_2
	IL_0072:            /*goto IL_0002;*/goto IL_0074;                              //br.s				IL_0002
	IL_0074:                                                                        //ldloc.0
	IL_0075:            Temp_6=V_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_007a:            Temp_7=Temp_6->Length;                                      //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_007f:                                                                        //ldc.i4.4
	IL_0080:                                                                        //conv.i8
	IL_0081:                                                                        //rem
	IL_0082:                                                                        //ldc.i4.0
	IL_0083:                                                                        //conv.i8
	IL_0084:            if((Temp_7 % 4)!=0)goto IL_0096;                            //bne.un.s				IL_0096
	IL_0086:                                                                        //ldc.i4				0x3
	IL_008b:            V_2=3;                                                      //stloc				V_2
	IL_008f:            /*goto IL_0002;*/goto IL_0094;                              //br				IL_0002
	IL_0094:            goto IL_00ad;                                               //br.s				IL_00ad
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldc.i4.0
	IL_0098:            V_0->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_009d:                                                                        //ldc.i4				0x0
	IL_00a2:            V_2=0;                                                      //stloc				V_2
	IL_00a6:            /*goto IL_0002;*/goto IL_00ab;                              //br				IL_0002
	IL_00ab:            goto IL_0069;                                               //br.s				IL_0069
	IL_00ad:            return;                                                     //ret

}
inline System::Int32 Root::T_x156::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x156 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x156::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0043;case 1:goto IL_0036;case 2:goto IL_006f;case 3:goto IL_0053;};//switch				(IL_0043,IL_0036,IL_006f,IL_0053)
	IL_001b:                                                                        //ldc.i4.8
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x156 F_x12
	IL_0022:            Temp_1=Temp_0->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_0027:                                                                        //add
	IL_0028:                                                                        //ldc.i4.1
	IL_0029:                                                                        //add
	IL_002a:            V_0=((8 + Temp_1) + 1);                                     //stloc.0
	IL_002b:                                                                        //ldc.i4				0x1
	IL_0030:            V_1=1;                                                      //stloc				V_1
	IL_0034:            /*goto IL_0002;*/goto IL_0036;                              //br.s				IL_0002
	IL_0036:            goto IL_0038;                                               //br.s				IL_0038
	IL_0038:                                                                        //ldc.i4				0x0
	IL_003d:            V_1=0;                                                      //stloc				V_1
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldc.i4.4
	IL_0045:                                                                        //rem
	IL_0046:            if((V_0 % 4)!=0)goto IL_0055;                               //brtrue.s				IL_0055
	IL_0048:                                                                        //ldc.i4				0x3
	IL_004d:            V_1=3;                                                      //stloc				V_1
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_0071;                                               //br.s				IL_0071
	IL_0055:                                                                        //ldloc.0
	IL_0056:                                                                        //ldc.i4.1
	IL_0057:                                                                        //add
	IL_0058:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0059:                                                                        //ldc.i4.4
	IL_005a:                                                                        //dup
	IL_005b:                                                                        //dup
	IL_005c:                                                                        //ldc.i4.2
	IL_005d:                                                                        //sub
	IL_005e:                                                                        //blt				IL_005a
	IL_0063:                                                                        //pop
	IL_0064:                                                                        //ldc.i4				0x2
	IL_0069:            V_1=2;                                                      //stloc				V_1
	IL_006d:            /*goto IL_0002;*/goto IL_006f;                              //br.s				IL_0002
	IL_006f:            goto IL_0038;                                               //br.s				IL_0038
	IL_0071:                                                                        //ldloc.0
	IL_0072:            return V_0;                                                 //ret

}
inline System::String^ Root::T_x156::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x156 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
