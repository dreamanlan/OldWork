#include "global_xref.h"

inline Root::T_x154::T_x154(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::UInt16 Temp_1 = 0;
	System::UInt16 Temp_2 = 0;
	System::UInt32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Text::Encoding^ Temp_5 = nullptr;
	array<System::Byte>^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	array<System::Char>^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Byte Temp_11 = 0;
	System::UInt16 Temp_12 = 0;
	System::UInt32 Temp_13 = 0;
	System::UInt16 Temp_14 = 0;
	System::String^ Temp_15 = nullptr;
	System::InvalidOperationException^ Temp_16 = nullptr;
	System::UInt16 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::InvalidOperationException^ Temp_19 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Char>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_2=5;                                                      //stloc				V_2
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_0=A_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0016:            this->F_x1=Temp_0;                                          //stfld				System::UInt32 Root::T_x154 F_x1
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_1=A_0->ReadUInt16();                                   //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0022:            this->F_x2=Temp_1;                                          //stfld				System::UInt16 Root::T_x154 F_x2
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_2=A_0->ReadUInt16();                                   //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_002e:            this->F_x12=Temp_2;                                         //stfld				System::UInt16 Root::T_x154 F_x12
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_3=A_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_003a:            this->F_x13=Temp_3;                                         //stfld				System::UInt32 Root::T_x154 F_x13
	IL_003f:                                                                        //ldarg.1
	IL_0040:            Temp_4=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0045:            V_0=Temp_4;                                                 //stloc.0
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_5=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_6=A_0->ReadBytes(V_0);                                 //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_0053:                                                                        //ldc.i4.0
	IL_0054:                                                                        //ldloc.0
	IL_0055:            Temp_7=Temp_5->GetString(Temp_6,safe_cast<System::Int32>(0),V_0);//callvirt				System::String^ System::Text::Encoding::GetString(array<System::Byte>^,System::Int32,System::Int32)
	IL_005a:                                                                        //ldc.i4.1
	IL_005b:            Temp_8=gcnew array<System::Char>(1);                        //newarr				System::Char
	IL_0060:            V_1=Temp_8;                                                 //stloc.1
	IL_0061:                                                                        //ldloc.1
	IL_0062:            Temp_9=Temp_7->Trim(V_1);                                   //callvirt				System::String^ System::String::Trim(array<System::Char>^)
	IL_0067:            this->F_x8=Temp_9;                                          //stfld				System::String^ Root::T_x154 F_x8
	IL_006c:            goto IL_008e;                                               //br.s				IL_008e
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_14=this->F_x2;                                         //ldfld				System::UInt16 Root::T_x154 F_x2
	IL_0074:                                                                        //conv.i4
	IL_0075:                                                                        //ldc.i4.1
	IL_0076:            if(safe_cast<System::Int32>(Temp_14)!=1)goto IL_0099;       //bne.un.s				IL_0099
	IL_0078:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_007a:                                                                        //ldstr				L"\x6A22\x4B24\x5126\x4828\x472A\x442C\x4B2E\x1130\x1432\x7734\x6436\x7338\x793A\x1A3C\x1F3E\x3240\x2A42\x2244\x2946\x2848\x3F4A\x384C\x3D4E\x3450\x7352\x3C54\x3956\x7958\x165A\x385C\x2B5E\x0060\x0762\x0464\x1366\x0868\x4B6A\x056C\x0A6E\x1070\x1772\x1074\x0576\x5778"
	IL_007f:                                                                        //ldloc				V_2
	IL_0083:            Temp_18=a(L"\x6A22\x4B24\x5126\x4828\x472A\x442C\x4B2E\x1130\x1432\x7734\x6436\x7338\x793A\x1A3C\x1F3E\x3240\x2A42\x2244\x2946\x2848\x3F4A\x384C\x3D4E\x3450\x7352\x3C54\x3956\x7958\x165A\x385C\x2B5E\x0060\x0762\x0464\x1366\x0868\x4B6A\x056C\x0A6E\x1070\x1772\x1074\x0576\x5778",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0088:            Temp_19=gcnew System::InvalidOperationException(Temp_18);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_008d:            throw Temp_19;                                              //throw
	IL_008e:            Temp_10=V_0;                                                //ldloc.0
	IL_008f:                                                                        //dup
	IL_0090:                                                                        //ldc.i4.1
	IL_0091:                                                                        //add
	IL_0092:            V_0=(Temp_10 + 1);                                          //stloc.0
	IL_0093:                                                                        //ldc.i4.4
	IL_0094:                                                                        //rem
	IL_0095:            if((Temp_10 % 4)!=0)goto IL_00ad;                           //brtrue.s				IL_00ad
	IL_0097:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_0099:                                                                        //ldstr				L"\x6A22\x4B24\x5126\x4828\x472A\x442C\x4B2E\x1130\x7E32\x5034\x4336\x5838\x5F3A\x5C3C\x4B3E\x2040\x6342\x3344\x2246\x3B48\x384A\x244C\x204E\x3F50\x7D52"
	IL_009e:                                                                        //ldloc				V_2
	IL_00a2:            Temp_15=a(L"\x6A22\x4B24\x5126\x4828\x472A\x442C\x4B2E\x1130\x7E32\x5034\x4336\x5838\x5F3A\x5C3C\x4B3E\x2040\x6342\x3344\x2246\x3B48\x384A\x244C\x204E\x3F50\x7D52",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a7:            Temp_16=gcnew System::InvalidOperationException(Temp_15);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_00ac:            throw Temp_16;                                              //throw
	IL_00ad:                                                                        //ldarg.1
	IL_00ae:            Temp_11=A_0->ReadByte();                                    //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_00b3:                                                                        //pop
	IL_00b4:            goto IL_008e;                                               //br.s				IL_008e
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:            Temp_17=this->F_x12;                                        //ldfld				System::UInt16 Root::T_x154 F_x12
	IL_00bc:                                                                        //conv.i4
	IL_00bd:                                                                        //ldc.i4.1
	IL_00be:            if(safe_cast<System::Int32>(Temp_17)==1)goto IL_00dd;       //beq.s				IL_00dd
	IL_00c0:            goto IL_0099;                                               //br.s				IL_0099
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:                                                                        //ldarg.1
	IL_00c4:            Temp_12=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_00c9:            this->F_x5=Temp_12;                                         //stfld				System::UInt16 Root::T_x154 F_x5
	IL_00ce:                                                                        //ldarg.0
	IL_00cf:            Temp_13=this->F_x1;                                         //ldfld				System::UInt32 Root::T_x154 F_x1
	IL_00d4:                                                                        //ldc.i4				0x424a5342
	IL_00d9:            if(Temp_13==1112167234)goto IL_006e;                        //beq.s				IL_006e
	IL_00db:            goto IL_007a;                                               //br.s				IL_007a
	IL_00dd:            return;                                                     //ret

}
inline Root::T_x154::T_x154(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4				0x424a5342
	IL_000c:            this->F_x1=1112167234;                                      //stfld				System::UInt32 Root::T_x154 F_x1
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:            this->F_x2=1;                                               //stfld				System::UInt16 Root::T_x154 F_x2
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldc.i4.1
	IL_001a:            this->F_x12=1;                                              //stfld				System::UInt16 Root::T_x154 F_x12
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldc.i4.0
	IL_0021:            this->F_x13=0;                                              //stfld				System::UInt32 Root::T_x154 F_x13
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            this->F_x8=A_0;                                             //stfld				System::String^ Root::T_x154 F_x8
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldc.i4.0
	IL_002f:            this->F_x5=0;                                               //stfld				System::UInt16 Root::T_x154 F_x5
	IL_0034:            return;                                                     //ret

}
inline System::String^ Root::T_x154::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::String^ Root::T_x154 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x154::M_x1(System::IO::BinaryWriter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::UInt16 Temp_1 = 0;
	System::UInt16 Temp_2 = 0;
	System::UInt32 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Text::Encoding^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::UInt16 Temp_11 = 0;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x1;                                          //ldfld				System::UInt32 Root::T_x154 F_x1
	IL_000a:            A_0->Write(Temp_0);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_000f:                                                                        //ldarg.1
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				System::UInt16 Root::T_x154 F_x2
	IL_0016:            A_0->Write(Temp_1);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_001b:                                                                        //ldarg.1
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x154 F_x12
	IL_0022:            A_0->Write(Temp_2);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0027:                                                                        //ldarg.1
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_3=this->F_x13;                                         //ldfld				System::UInt32 Root::T_x154 F_x13
	IL_002e:            A_0->Write(Temp_3);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0033:                                                                        //ldc.i4.s				12
	IL_0035:            Temp_4=gcnew array<System::Byte>(12);                       //newarr				System::Byte
	IL_003a:            V_0=Temp_4;                                                 //stloc.0
	IL_003b:            Temp_5=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_6=this->F_x8;                                          //ldfld				System::String^ Root::T_x154 F_x8
	IL_0046:                                                                        //ldc.i4.0
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_7=this->F_x8;                                          //ldfld				System::String^ Root::T_x154 F_x8
	IL_004d:            Temp_8=Temp_7->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_0052:                                                                        //ldloc.0
	IL_0053:                                                                        //ldc.i4.0
	IL_0054:            Temp_9=Temp_5->GetBytes(Temp_6,safe_cast<System::Int32>(0),Temp_8,V_0,safe_cast<System::Int32>(0));//callvirt				System::Int32 System::Text::Encoding::GetBytes(System::String^,System::Int32,System::Int32,array<System::Byte>^,System::Int32)
	IL_0059:                                                                        //pop
	IL_005a:                                                                        //ldarg.1
	IL_005b:                                                                        //ldloc.0
	IL_005c:            Temp_10=V_0->Length;                                        //ldlen
	IL_005d:                                                                        //conv.i4
	IL_005e:            A_0->Write(Temp_10);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0063:                                                                        //ldarg.1
	IL_0064:                                                                        //ldloc.0
	IL_0065:            A_0->Write(V_0);                                            //callvirt				void System::IO::BinaryWriter::Write(array<System::Byte>^)
	IL_006a:                                                                        //ldarg.1
	IL_006b:                                                                        //ldarg.0
	IL_006c:            Temp_11=this->F_x5;                                         //ldfld				System::UInt16 Root::T_x154 F_x5
	IL_0071:            A_0->Write(Temp_11);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0076:            return;                                                     //ret

}
inline System::Int32 Root::T_x154::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.s				30
	IL_0002:            return 30;                                                  //ret

}
