#include "global_xref.h"

inline Root::T_x166::T_x166(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::Encoding^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	array<System::Char>^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::UInt32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::UInt32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::UInt16 Temp_11 = 0;
	System::UInt16 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	//local variables.
	array<System::Char>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //ldc.i4.8
	IL_000e:            Temp_1=A_0->ReadBytes(safe_cast<System::Int32>(8));         //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_0013:                                                                        //ldc.i4.0
	IL_0014:                                                                        //ldc.i4.8
	IL_0015:            Temp_2=Temp_0->GetString(Temp_1,safe_cast<System::Int32>(0),safe_cast<System::Int32>(8));//callvirt				System::String^ System::Text::Encoding::GetString(array<System::Byte>^,System::Int32,System::Int32)
	IL_001a:                                                                        //ldc.i4.1
	IL_001b:            Temp_3=gcnew array<System::Char>(1);                        //newarr				System::Char
	IL_0020:            V_0=Temp_3;                                                 //stloc.0
	IL_0021:                                                                        //ldloc.0
	IL_0022:            Temp_4=Temp_2->Trim(V_0);                                   //callvirt				System::String^ System::String::Trim(array<System::Char>^)
	IL_0027:            this->F_x1=Temp_4;                                          //stfld				System::String^ Root::T_x166 F_x1
	IL_002c:                                                                        //ldarg.0
	IL_002d:                                                                        //ldarg.1
	IL_002e:            Temp_5=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0033:            this->F_x2=Temp_5;                                          //stfld				System::Int32 Root::T_x166 F_x2
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_6=A_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_003f:            this->F_x12=Temp_6;                                         //stfld				System::UInt32 Root::T_x166 F_x12
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldarg.1
	IL_0046:            Temp_7=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_004b:            this->F_x13=Temp_7;                                         //stfld				System::Int32 Root::T_x166 F_x13
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.1
	IL_0052:            Temp_8=A_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0057:            this->F_x8=Temp_8;                                          //stfld				System::UInt32 Root::T_x166 F_x8
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_9=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0063:            this->F_x5=Temp_9;                                          //stfld				System::Int32 Root::T_x166 F_x5
	IL_0068:                                                                        //ldarg.0
	IL_0069:                                                                        //ldarg.1
	IL_006a:            Temp_10=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_006f:            this->F_x9=Temp_10;                                         //stfld				System::Int32 Root::T_x166 F_x9
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldarg.1
	IL_0076:            Temp_11=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_007b:            this->F_x4=Temp_11;                                         //stfld				System::UInt16 Root::T_x166 F_x4
	IL_0080:                                                                        //ldarg.0
	IL_0081:                                                                        //ldarg.1
	IL_0082:            Temp_12=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0087:            this->F_x15=Temp_12;                                        //stfld				System::UInt16 Root::T_x166 F_x15
	IL_008c:                                                                        //ldarg.0
	IL_008d:                                                                        //ldarg.1
	IL_008e:            Temp_13=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0093:            this->F_x11=Temp_13;                                        //stfld				System::Int32 Root::T_x166 F_x11
	IL_0098:            return;                                                     //ret

}
inline Root::T_x166::T_x166(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x166 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x11=A_1;                                            //stfld				System::Int32 Root::T_x166 F_x11
	IL_0014:            return;                                                     //ret

}
inline System::Int32 Root::T_x166::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x166 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x166::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Int32 Root::T_x166 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x166::M_x1(System::IO::BinaryWriter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Text::Encoding^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::UInt32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::UInt32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	System::UInt16 Temp_12 = 0;
	System::UInt16 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldc.i4.8
	IL_0004:            Temp_0=gcnew array<System::Byte>(8);                        //newarr				System::Byte
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:            Temp_1=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_2=this->F_x1;                                          //ldfld				System::String^ Root::T_x166 F_x1
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:                                                                        //ldarg.0
	IL_0017:            Temp_3=this->F_x1;                                          //ldfld				System::String^ Root::T_x166 F_x1
	IL_001c:            Temp_4=Temp_3->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldc.i4.0
	IL_0023:            Temp_5=Temp_1->GetBytes(Temp_2,safe_cast<System::Int32>(0),Temp_4,V_0,safe_cast<System::Int32>(0));//callvirt				System::Int32 System::Text::Encoding::GetBytes(System::String^,System::Int32,System::Int32,array<System::Byte>^,System::Int32)
	IL_0028:                                                                        //pop
	IL_0029:                                                                        //ldarg.1
	IL_002a:                                                                        //ldloc.0
	IL_002b:            A_0->Write(V_0);                                            //callvirt				void System::IO::BinaryWriter::Write(array<System::Byte>^)
	IL_0030:                                                                        //ldarg.1
	IL_0031:                                                                        //ldarg.0
	IL_0032:            Temp_6=this->F_x2;                                          //ldfld				System::Int32 Root::T_x166 F_x2
	IL_0037:            A_0->Write(Temp_6);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_003c:                                                                        //ldarg.1
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_7=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x166 F_x12
	IL_0043:            A_0->Write(Temp_7);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0048:                                                                        //ldarg.1
	IL_0049:                                                                        //ldarg.0
	IL_004a:            Temp_8=this->F_x13;                                         //ldfld				System::Int32 Root::T_x166 F_x13
	IL_004f:            A_0->Write(Temp_8);                                         //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0054:                                                                        //ldarg.1
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_9=this->F_x8;                                          //ldfld				System::UInt32 Root::T_x166 F_x8
	IL_005b:            A_0->Write(Temp_9);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0060:                                                                        //ldarg.1
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_10=this->F_x5;                                         //ldfld				System::Int32 Root::T_x166 F_x5
	IL_0067:            A_0->Write(Temp_10);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_006c:                                                                        //ldarg.1
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_11=this->F_x9;                                         //ldfld				System::Int32 Root::T_x166 F_x9
	IL_0073:            A_0->Write(Temp_11);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0078:                                                                        //ldarg.1
	IL_0079:                                                                        //ldarg.0
	IL_007a:            Temp_12=this->F_x4;                                         //ldfld				System::UInt16 Root::T_x166 F_x4
	IL_007f:            A_0->Write(Temp_12);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0084:                                                                        //ldarg.1
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_13=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x166 F_x15
	IL_008b:            A_0->Write(Temp_13);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0090:                                                                        //ldarg.1
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_14=this->F_x11;                                        //ldfld				System::Int32 Root::T_x166 F_x11
	IL_0097:            A_0->Write(Temp_14);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_009c:            return;                                                     //ret

}
inline void Root::T_x166::M_x1(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x8=A_0;                                             //stfld				System::UInt32 Root::T_x166 F_x8
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x166::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x166 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x166::M_x12(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::UInt32 Root::T_x166 F_x12
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x166::M_x13()
//System::Object^::ToString by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldc.i4.s				10
	IL_000e:            Temp_0=gcnew array<System::String^>(10);                    //newarr				System::String
	IL_0013:            V_0=Temp_0;                                                 //stloc.0
	IL_0014:                                                                        //ldloc.0
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:                                                                        //ldstr				L"\x501D\x411F\x4F21\x4123\x1C25\x0827\x0D29"
	IL_001b:                                                                        //ldloc				V_1
	IL_001f:            Temp_1=a(L"\x501D\x411F\x4F21\x4123\x1C25\x0827\x0D29",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0024:            V_0[0]=Temp_1;                                              //stelem.ref
	IL_0025:                                                                        //ldloc.0
	IL_0026:                                                                        //ldc.i4.1
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_2=this->F_x1;                                          //ldfld				System::String^ Root::T_x166 F_x1
	IL_002d:            V_0[1]=Temp_2;                                              //stelem.ref
	IL_002e:                                                                        //ldloc.0
	IL_002f:                                                                        //ldc.i4.2
	IL_0030:                                                                        //ldstr				L"\x391D\x001F\x5E21\x0423\x7025\x4127\x5829\x582B\x5B2D\x512F\x5E31\x0E33\x1635"
	IL_0035:                                                                        //ldloc				V_1
	IL_0039:            Temp_3=a(L"\x391D\x001F\x5E21\x0423\x7025\x4127\x5829\x582B\x5B2D\x512F\x5E31\x0E33\x1635",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003e:            V_0[2]=Temp_3;                                              //stelem.ref
	IL_003f:                                                                        //ldloc.0
	IL_0040:                                                                        //ldc.i4.3
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldflda				System::UInt32 Root::T_x166 F_x12
	IL_0047:                                                                        //ldstr				L"\x461D\x181F"
	IL_004c:                                                                        //ldloc				V_1
	IL_0050:            Temp_4=a(L"\x461D\x181F",V_1);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0055:            Temp_5=this->F_x12.ToString(Temp_4);                        //call				System::String^ System::UInt32::ToString(System::String^)
	IL_005a:            V_0[3]=Temp_5;                                              //stelem.ref
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldc.i4.4
	IL_005d:                                                                        //ldstr				L"\x321D"
	IL_0062:                                                                        //ldloc				V_1
	IL_0066:            Temp_6=a(L"\x321D",V_1);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006b:            V_0[4]=Temp_6;                                              //stelem.ref
	IL_006c:                                                                        //ldloc.0
	IL_006d:                                                                        //ldc.i4.5
	IL_006e:                                                                        //ldarg.0
	IL_006f:                                                                        //ldflda				System::Int32 Root::T_x166 F_x2
	IL_0074:                                                                        //ldstr				L"\x461D\x181F"
	IL_0079:                                                                        //ldloc				V_1
	IL_007d:            Temp_7=a(L"\x461D\x181F",V_1);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0082:            Temp_8=this->F_x2.ToString(Temp_7);                         //call				System::String^ System::Int32::ToString(System::String^)
	IL_0087:            V_0[5]=Temp_8;                                              //stelem.ref
	IL_0088:                                                                        //ldloc.0
	IL_0089:                                                                        //ldc.i4.6
	IL_008a:                                                                        //ldstr				L"\x3E1D\x5C1F\x0221\x7623\x4725\x5F27\x1029\x0C2B"
	IL_008f:                                                                        //ldloc				V_1
	IL_0093:            Temp_9=a(L"\x3E1D\x5C1F\x0221\x7623\x4725\x5F27\x1029\x0C2B",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0098:            V_0[6]=Temp_9;                                              //stelem.ref
	IL_0099:                                                                        //ldloc.0
	IL_009a:                                                                        //ldc.i4.7
	IL_009b:                                                                        //ldarg.0
	IL_009c:                                                                        //ldflda				System::UInt32 Root::T_x166 F_x8
	IL_00a1:                                                                        //ldstr				L"\x461D\x181F"
	IL_00a6:                                                                        //ldloc				V_1
	IL_00aa:            Temp_10=a(L"\x461D\x181F",V_1);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00af:            Temp_11=this->F_x8.ToString(Temp_10);                       //call				System::String^ System::UInt32::ToString(System::String^)
	IL_00b4:            V_0[7]=Temp_11;                                             //stelem.ref
	IL_00b5:                                                                        //ldloc.0
	IL_00b6:                                                                        //ldc.i4.8
	IL_00b7:                                                                        //ldstr				L"\x321D"
	IL_00bc:                                                                        //ldloc				V_1
	IL_00c0:            Temp_12=a(L"\x321D",V_1);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c5:            V_0[8]=Temp_12;                                             //stelem.ref
	IL_00c6:                                                                        //ldloc.0
	IL_00c7:                                                                        //ldc.i4.s				9
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:                                                                        //ldflda				System::Int32 Root::T_x166 F_x13
	IL_00cf:                                                                        //ldstr				L"\x461D\x181F"
	IL_00d4:                                                                        //ldloc				V_1
	IL_00d8:            Temp_13=a(L"\x461D\x181F",V_1);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dd:            Temp_14=this->F_x13.ToString(Temp_13);                      //call				System::String^ System::Int32::ToString(System::String^)
	IL_00e2:            V_0[9]=Temp_14;                                             //stelem.ref
	IL_00e3:                                                                        //ldloc.0
	IL_00e4:            Temp_15=System::String::Concat(V_0);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_00e9:            return Temp_15;                                             //ret

}
inline System::UInt32 Root::T_x166::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::UInt32 Root::T_x166 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x166::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x13=A_0;                                            //stfld				System::Int32 Root::T_x166 F_x13
	IL_0007:            return;                                                     //ret

}
inline System::Int32 Root::T_x166::M_x2(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::UInt32 Temp_2 = 0;
	System::UInt32 Temp_3 = 0;
	System::UInt32 Temp_4 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0057;case 1:goto IL_0080;case 2:goto IL_000b;case 3:goto IL_003a;};//switch				(IL_0057,IL_0080,IL_000b,IL_003a)
	IL_0026:                                                                        //ldarg.1
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_4=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x166 F_x12
	IL_002d:            if(A_0<Temp_4)goto IL_0082;                                 //blt.un.s				IL_0082
	IL_002f:                                                                        //ldc.i4				0x3
	IL_0034:            V_0=3;                                                      //stloc				V_0
	IL_0038:            /*goto IL_000d;*/goto IL_003a;                              //br.s				IL_000d
	IL_003a:            goto IL_004c;                                               //br.s				IL_004c
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_2=this->F_x8;                                          //ldfld				System::UInt32 Root::T_x166 F_x8
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_3=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x166 F_x12
	IL_0049:                                                                        //sub
	IL_004a:                                                                        //add
	IL_004b:            return safe_cast<System::Int32>((Temp_2 + (A_0 - Temp_3))); //ret
	IL_004c:                                                                        //ldc.i4				0x0
	IL_0051:            V_0=0;                                                      //stloc				V_0
	IL_0055:            /*goto IL_000d;*/goto IL_0057;                              //br.s				IL_000d
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //conv.u8
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_0=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x166 F_x12
	IL_005f:                                                                        //conv.u8
	IL_0060:                                                                        //ldarg.0
	IL_0061:            Temp_1=this->F_x13;                                         //ldfld				System::Int32 Root::T_x166 F_x13
	IL_0066:                                                                        //conv.i8
	IL_0067:                                                                        //add
	IL_0068:            if(safe_cast<System::UInt64>(A_0)>=safe_cast<System::UInt64>((safe_cast<System::UInt64>(Temp_0) + safe_cast<System::UInt64>(safe_cast<System::Int64>(Temp_1)))))goto IL_0082;//bge.s				IL_0082
	IL_006a:                                                                        //ldc.i4.4
	IL_006b:                                                                        //dup
	IL_006c:                                                                        //dup
	IL_006d:                                                                        //ldc.i4.2
	IL_006e:                                                                        //sub
	IL_006f:                                                                        //blt				IL_006b
	IL_0074:                                                                        //pop
	IL_0075:                                                                        //ldc.i4				0x1
	IL_007a:            V_0=1;                                                      //stloc				V_0
	IL_007e:            /*goto IL_000d;*/goto IL_0080;                              //br.s				IL_000d
	IL_0080:            goto IL_003c;                                               //br.s				IL_003c
	IL_0082:                                                                        //ldc.i4.m1
	IL_0083:            return -1;                                                  //ret

}
inline System::Int32 Root::T_x166::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x166 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt32 Root::T_x166::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x166 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x166::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.s				40
	IL_0002:            return 40;                                                  //ret

}
