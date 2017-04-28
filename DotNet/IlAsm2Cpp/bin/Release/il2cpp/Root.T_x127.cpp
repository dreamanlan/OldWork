#include "global_xref.h"

inline Root::T_x127::T_x127(System::IO::Stream^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::BinaryReader^ Temp_0 = nullptr;
	System::UInt32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	array<System::String^>^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::String^ Temp_13 = nullptr;
	System::IO::Stream^ Temp_14 = nullptr;
	System::Int64 Temp_15 = 0;
	array<System::Int32>^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::Int32 Temp_18 = 0;
	array<System::Int32>^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::Int32 Temp_21 = 0;
	System::Int32 Temp_22 = 0;
	System::IO::Stream^ Temp_23 = nullptr;
	System::Int64 Temp_24 = 0;
	array<System::Int32>^ Temp_25 = nullptr;
	array<System::String^>^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	System::IO::Stream^ Temp_28 = nullptr;
	System::Int32 Temp_29 = 0;
	array<System::Byte>^ Temp_30 = nullptr;
	System::Text::Encoding^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::Int32 Temp_33 = 0;
	array<Root::T_x126^>^ Temp_34 = nullptr;
	array<Root::T_x126^>^ Temp_35 = nullptr;
	System::Int32 Temp_36 = 0;
	System::IO::Stream^ Temp_37 = nullptr;
	Root::T_x126^ Temp_38 = nullptr;
	array<Root::T_x126^>^ Temp_39 = nullptr;
	System::IO::Stream^ Temp_40 = nullptr;
	System::Int64 Temp_41 = 0;
	array<System::Byte>^ Temp_42 = nullptr;
	System::Globalization::CultureInfo^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	array<System::Object^>^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::NotSupportedException^ Temp_47 = nullptr;
	System::Globalization::CultureInfo^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	array<System::Object^>^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::NotSupportedException^ Temp_52 = nullptr;
	System::IO::Stream^ Temp_53 = nullptr;
	System::Int32 Temp_54 = 0;
	System::Int64 Temp_55 = 0;
	System::String^ Temp_56 = nullptr;
	System::InvalidOperationException^ Temp_57 = nullptr;
	//local variables.
	System::IO::BinaryReader^ V_0 = nullptr;
	System::UInt32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	array<System::String^>^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	array<System::Int32>^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	array<System::Int32>^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Int64 V_12 = 0;
	System::Int64 V_13 = 0;
	array<System::Int32>^ V_14 = nullptr;
	array<System::String^>^ V_15 = nullptr;
	System::Int32 V_16 = 0;
	System::Int32 V_17 = 0;
	array<System::Byte>^ V_18 = nullptr;
	System::Int32 V_19 = 0;
	Root::T_x126^ V_20 = nullptr;
	array<System::Object^>^ V_21 = nullptr;
	System::Int32 V_22 = 0;
	System::Int32 V_23 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_23=13;                                                    //stloc				V_23
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000f:                                                                        //ldarg.1
	IL_0010:            Temp_0=gcnew System::IO::BinaryReader(A_0);                 //newobj				void System::IO::BinaryReader::.ctor(System::IO::Stream^)
	IL_0015:            V_0=Temp_0;                                                 //stloc.0
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_1=V_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_001c:            V_1=Temp_1;                                                 //stloc.1
	IL_001d:                                                                        //ldloc.1
	IL_001e:                                                                        //ldc.i4				0xbeefcace
	IL_0023:            if(V_1==3203386062)goto IL_02f5;                            //beq				IL_02f5
	IL_0028:            goto IL_0160;                                               //br				IL_0160
	IL_002d:                                                                        //ldloc.0
	IL_002e:            Temp_22=V_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0033:                                                                        //conv.i8
	IL_0034:            V_12=safe_cast<System::Int64>(Temp_22);                     //stloc.s				V_12
	IL_0036:                                                                        //ldloc.0
	IL_0037:            Temp_23=V_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_003c:            Temp_24=Temp_23->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0041:            V_13=Temp_24;                                               //stloc.s				V_13
	IL_0043:                                                                        //ldloc.s				V_5
	IL_0045:                                                                        //conv.ovf.u4
	IL_0046:            Temp_25=gcnew array<System::Int32>(safe_cast<System::UInt32>(V_5));//newarr				System::Int32
	IL_004b:            V_14=Temp_25;                                               //stloc.s				V_14
	IL_004d:                                                                        //ldloc.s				V_5
	IL_004f:                                                                        //conv.ovf.u4
	IL_0050:            Temp_26=gcnew array<System::String^>(safe_cast<System::UInt32>(V_5));//newarr				System::String
	IL_0055:            V_15=Temp_26;                                               //stloc.s				V_15
	IL_0057:                                                                        //ldc.i4.0
	IL_0058:            V_16=0;                                                     //stloc.s				V_16
	IL_005a:            goto IL_0317;                                               //br				IL_0317
	IL_005f:                                                                        //ldloc.s				V_9
	IL_0061:                                                                        //ldloc.s				V_8
	IL_0063:            Temp_17=V_8->Length;                                        //ldlen
	IL_0064:                                                                        //conv.i4
	IL_0065:            if(V_9<Temp_17)goto IL_010c;                                //blt				IL_010c
	IL_006a:            goto IL_0305;                                               //br				IL_0305
	IL_006f:                                                                        //ldloc.0
	IL_0070:            Temp_8=V_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0075:            V_4=Temp_8;                                                 //stloc.s				V_4
	IL_0077:                                                                        //ldloc.s				V_4
	IL_0079:                                                                        //ldc.i4.2
	IL_007a:            if(V_4==2)goto IL_01d4;                                     //beq				IL_01d4
	IL_007f:            goto IL_0122;                                               //br				IL_0122
	IL_0084:                                                                        //ldloc.0
	IL_0085:            Temp_37=V_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_008a:                                                                        //ldloc.s				V_12
	IL_008c:                                                                        //ldloc.s				V_14
	IL_008e:                                                                        //ldloc.s				V_19
	IL_0090:                                                                        //ldelem.i4
	IL_0091:                                                                        //conv.i8
	IL_0092:                                                                        //add
	IL_0093:            Temp_37->Position=(V_12 + safe_cast<System::Int64>(V_14[V_19]));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0098:            Temp_38=gcnew Root::T_x126();                               //newobj				void Root::T_x126::.ctor()
	IL_009d:            V_20=Temp_38;                                               //stloc.s				V_20
	IL_009f:                                                                        //ldloc.s				V_20
	IL_00a1:                                                                        //ldloc.s				V_15
	IL_00a3:                                                                        //ldloc.s				V_19
	IL_00a5:                                                                        //ldelem.ref
	IL_00a6:            V_20->M_x1(V_15[V_19]);                                     //callvirt				void Root::T_x126::M_x1(System::String^)
	IL_00ab:                                                                        //ldloc.s				V_20
	IL_00ad:                                                                        //ldnull
	IL_00ae:            V_20->M_x1(safe_cast<System::Object^>(nullptr));            //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_00b3:                                                                        //ldloc.s				V_4
	IL_00b5:            V_22=V_4;                                                   //stloc.s				V_22
	IL_00b7:                                                                        //ldloc.s				V_22
	IL_00b9:                                                                        //ldc.i4.1
	IL_00ba:            if(V_22!=1)goto IL_00fe;                                    //bne.un.s				IL_00fe
	IL_00bc:            goto IL_012c;                                               //br.s				IL_012c
	IL_00be:                                                                        //ldloc.0
	IL_00bf:            Temp_3=V_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_00c4:                                                                        //pop
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:            Temp_4=V_0->ReadString();                                   //callvirt				System::String^ System::IO::BinaryReader::ReadString()
	IL_00cb:            V_3=Temp_4;                                                 //stloc.3
	IL_00cc:                                                                        //ldloc.0
	IL_00cd:            Temp_5=V_0->ReadString();                                   //callvirt				System::String^ System::IO::BinaryReader::ReadString()
	IL_00d2:                                                                        //pop
	IL_00d3:                                                                        //ldloc.3
	IL_00d4:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6B38\x5E3A\x4E3C\x503E\x3440\x3142\x2644\x2246\x3A48\x654A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A\x0F5C\x3A5E\x0060\x0762\x0064\x1566"
	IL_00d9:                                                                        //ldloc				V_23
	IL_00dd:            Temp_6=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6B38\x5E3A\x4E3C\x503E\x3440\x3142\x2644\x2246\x3A48\x654A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A\x0F5C\x3A5E\x0060\x0762\x0064\x1566",V_23);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e2:            Temp_7=V_3->StartsWith(Temp_6);                             //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_00e7:            if(Temp_7)goto IL_006f;                                     //brtrue.s				IL_006f
	IL_00e9:            goto IL_0174;                                               //br				IL_0174
	IL_00ee:                                                                        //ldloc.s				V_11
	IL_00f0:                                                                        //ldloc.s				V_10
	IL_00f2:            Temp_20=V_10->Length;                                       //ldlen
	IL_00f3:                                                                        //conv.i4
	IL_00f4:            if(V_11<Temp_20)goto IL_0288;                               //blt				IL_0288
	IL_00f9:            goto IL_002d;                                               //br				IL_002d
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:                                                                        //ldloc.s				V_20
	IL_0101:                                                                        //ldloc.0
	IL_0102:            this->M_x1(V_20,V_0);                                       //call				void Root::T_x127::M_x1(Root::T_x126^,System::IO::BinaryReader^)
	IL_0107:            goto IL_02cd;                                               //br				IL_02cd
	IL_010c:                                                                        //ldloc.s				V_8
	IL_010e:                                                                        //ldloc.s				V_9
	IL_0110:                                                                        //ldloc.0
	IL_0111:            Temp_18=V_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0116:            V_8[V_9]=Temp_18;                                           //stelem.i4
	IL_0117:                                                                        //ldloc.s				V_9
	IL_0119:                                                                        //ldc.i4.1
	IL_011a:                                                                        //add
	IL_011b:            V_9=(V_9 + 1);                                              //stloc.s				V_9
	IL_011d:            goto IL_005f;                                               //br				IL_005f
	IL_0122:                                                                        //ldloc.s				V_4
	IL_0124:                                                                        //ldc.i4.1
	IL_0125:            if(V_4==1)goto IL_01d4;                                     //beq				IL_01d4
	IL_012a:            goto IL_01a1;                                               //br.s				IL_01a1
	IL_012c:                                                                        //ldarg.0
	IL_012d:                                                                        //ldloc.s				V_20
	IL_012f:                                                                        //ldloc.0
	IL_0130:                                                                        //ldloc.s				V_6
	IL_0132:            this->M_x1(V_20,V_0,V_6);                                   //call				void Root::T_x127::M_x1(Root::T_x126^,System::IO::BinaryReader^,array<System::String^>^)
	IL_0137:            goto IL_02cd;                                               //br				IL_02cd
	IL_013c:                                                                        //ldloc.s				V_19
	IL_013e:                                                                        //ldarg.0
	IL_013f:            Temp_35=this->F_x1;                                         //ldfld				array<Root::T_x126^>^ Root::T_x127 F_x1
	IL_0144:            Temp_36=Temp_35->Length;                                    //ldlen
	IL_0145:                                                                        //conv.i4
	IL_0146:            if(V_19<Temp_36)goto IL_0084;                               //blt				IL_0084
	IL_014b:            goto IL_0327;                                               //br				IL_0327
	IL_0150:                                                                        //ldloc.s				V_7
	IL_0152:                                                                        //ldloc.s				V_6
	IL_0154:            Temp_12=V_6->Length;                                        //ldlen
	IL_0155:                                                                        //conv.i4
	IL_0156:            if(V_7<Temp_12)goto IL_029e;                                //blt				IL_029e
	IL_015b:            goto IL_0259;                                               //br				IL_0259
	IL_0160:                                                                        //ldstr				L"\x622A\x432C\x592E\x5030\x5F32\x5C34\x5336\x1938\x493A\x583C\x4C3E\x2E40\x3642\x3744\x2446\x2C48\x6B4A\x2B4C\x264E\x3D50\x3652\x7554\x2456\x3058\x3C5A\x335C\x3E5E\x1560\x1662\x1764\x0266\x4768"
	IL_0165:                                                                        //ldloc				V_23
	IL_0169:            Temp_56=a(L"\x622A\x432C\x592E\x5030\x5F32\x5C34\x5336\x1938\x493A\x583C\x4C3E\x2E40\x3642\x3744\x2446\x2C48\x6B4A\x2B4C\x264E\x3D50\x3652\x7554\x2456\x3058\x3C5A\x335C\x3E5E\x1560\x1662\x1764\x0266\x4768",V_23);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016e:            Temp_57=gcnew System::InvalidOperationException(Temp_56);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0173:            throw Temp_57;                                              //throw
	IL_0174:            Temp_48=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0179:                                                                        //ldstr				L"\x7F2A\x452C\x462E\x4230\x1332\x4734\x5236\x4A38\x543A\x483C\x4D3E\x2240\x2642\x6544\x3546\x2C48\x2A4A\x294C\x2A4E\x2350\x7352\x2154\x2E56\x2958\x3E5A\x7D5C\x365E\x1260\x4362\x0B64\x0866\x1D68\x4B6A\x1E6C\x1A6E\x0170\x0372\x1A74\x0576\x0D78\x1E7A\x197C\x457E\xA180\xA482\xFE84\xB786\xF488\xAC8A\xA38C"
	IL_017e:                                                                        //ldloc				V_23
	IL_0182:            Temp_49=a(L"\x7F2A\x452C\x462E\x4230\x1332\x4734\x5236\x4A38\x543A\x483C\x4D3E\x2240\x2642\x6544\x3546\x2C48\x2A4A\x294C\x2A4E\x2350\x7352\x2154\x2E56\x2958\x3E5A\x7D5C\x365E\x1260\x4362\x0B64\x0866\x1D68\x4B6A\x1E6C\x1A6E\x0170\x0372\x1A74\x0576\x0D78\x1E7A\x197C\x457E\xA180\xA482\xFE84\xB786\xF488\xAC8A\xA38C",V_23);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0187:                                                                        //ldc.i4.1
	IL_0188:            Temp_50=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_018d:            V_21=Temp_50;                                               //stloc.s				V_21
	IL_018f:                                                                        //ldloc.s				V_21
	IL_0191:                                                                        //ldc.i4.0
	IL_0192:                                                                        //ldloc.3
	IL_0193:            V_21[0]=safe_cast<System::Object^>(V_3);                    //stelem.ref
	IL_0194:                                                                        //ldloc.s				V_21
	IL_0196:            Temp_51=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_48),Temp_49,V_21);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_019b:            Temp_52=gcnew System::NotSupportedException(Temp_51);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_01a0:            throw Temp_52;                                              //throw
	IL_01a1:            Temp_43=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01a6:                                                                        //ldstr				L"\x7E2A\x432C\x442E\x5F30\x5C32\x4234\x5936\x1938\x493A\x483C\x513E\x3540\x2A42\x2844\x2246\x6948\x3D4A\x284C\x3D4E\x2250\x3A52\x3A54\x3956\x7958\x7C5A\x265C\x6F5E\x1C60\x4462\x4B64"
	IL_01ab:                                                                        //ldloc				V_23
	IL_01af:            Temp_44=a(L"\x7E2A\x432C\x442E\x5F30\x5C32\x4234\x5936\x1938\x493A\x483C\x513E\x3540\x2A42\x2844\x2246\x6948\x3D4A\x284C\x3D4E\x2250\x3A52\x3A54\x3956\x7958\x7C5A\x265C\x6F5E\x1C60\x4462\x4B64",V_23);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b4:                                                                        //ldc.i4.1
	IL_01b5:            Temp_45=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_01ba:            V_21=Temp_45;                                               //stloc.s				V_21
	IL_01bc:                                                                        //ldloc.s				V_21
	IL_01be:                                                                        //ldc.i4.0
	IL_01bf:                                                                        //ldloc.s				V_4
	IL_01c1:                                                                        //box				System::Int32
	IL_01c6:            V_21[0]=safe_cast<System::Object^>(V_4);                    //stelem.ref
	IL_01c7:                                                                        //ldloc.s				V_21
	IL_01c9:            Temp_46=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_43),Temp_44,V_21);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_01ce:            Temp_47=gcnew System::NotSupportedException(Temp_46);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_01d3:            throw Temp_47;                                              //throw
	IL_01d4:                                                                        //ldloc.0
	IL_01d5:            Temp_9=V_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_01da:            V_5=Temp_9;                                                 //stloc.s				V_5
	IL_01dc:                                                                        //ldloc.0
	IL_01dd:            Temp_10=V_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_01e2:                                                                        //conv.ovf.u4
	IL_01e3:            Temp_11=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_10));//newarr				System::String
	IL_01e8:            V_6=Temp_11;                                                //stloc.s				V_6
	IL_01ea:                                                                        //ldc.i4.0
	IL_01eb:            V_7=0;                                                      //stloc.s				V_7
	IL_01ed:            goto IL_0150;                                               //br				IL_0150
	IL_01f2:                                                                        //ldarg.0
	IL_01f3:                                                                        //ldloc.s				V_5
	IL_01f5:                                                                        //conv.ovf.u4
	IL_01f6:            Temp_34=gcnew array<Root::T_x126^>(safe_cast<System::UInt32>(V_5));//newarr				Root::T_x126
	IL_01fb:            this->F_x1=Temp_34;                                         //stfld				array<Root::T_x126^>^ Root::T_x127 F_x1
	IL_0200:                                                                        //ldc.i4.0
	IL_0201:            V_19=0;                                                     //stloc.s				V_19
	IL_0203:            goto IL_013c;                                               //br				IL_013c
	IL_0208:                                                                        //ldloc.0
	IL_0209:            Temp_28=V_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_020e:                                                                        //ldloc.s				V_13
	IL_0210:                                                                        //ldloc.s				V_10
	IL_0212:                                                                        //ldloc.s				V_16
	IL_0214:                                                                        //ldelem.i4
	IL_0215:                                                                        //conv.i8
	IL_0216:                                                                        //add
	IL_0217:            Temp_28->Position=(V_13 + safe_cast<System::Int64>(V_10[V_16]));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_021c:                                                                        //ldarg.0
	IL_021d:                                                                        //ldloc.0
	IL_021e:            Temp_29=this->M_x1(V_0);                                    //call				System::Int32 Root::T_x127::M_x1(System::IO::BinaryReader^)
	IL_0223:            V_17=Temp_29;                                               //stloc.s				V_17
	IL_0225:                                                                        //ldloc.0
	IL_0226:                                                                        //ldloc.s				V_17
	IL_0228:            Temp_30=V_0->ReadBytes(V_17);                               //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_022d:            V_18=Temp_30;                                               //stloc.s				V_18
	IL_022f:                                                                        //ldloc.s				V_15
	IL_0231:                                                                        //ldloc.s				V_16
	IL_0233:            Temp_31=System::Text::Encoding::Unicode;                    //call				System::Text::Encoding^ System::Text::Encoding::get_Unicode()
	IL_0238:                                                                        //ldloc.s				V_18
	IL_023a:                                                                        //ldc.i4.0
	IL_023b:                                                                        //ldloc.s				V_17
	IL_023d:            Temp_32=Temp_31->GetString(V_18,safe_cast<System::Int32>(0),V_17);//callvirt				System::String^ System::Text::Encoding::GetString(array<System::Byte>^,System::Int32,System::Int32)
	IL_0242:            V_15[V_16]=Temp_32;                                         //stelem.ref
	IL_0243:                                                                        //ldloc.s				V_14
	IL_0245:                                                                        //ldloc.s				V_16
	IL_0247:                                                                        //ldloc.0
	IL_0248:            Temp_33=V_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_024d:            V_14[V_16]=Temp_33;                                         //stelem.i4
	IL_024e:                                                                        //ldloc.s				V_16
	IL_0250:                                                                        //ldc.i4.1
	IL_0251:                                                                        //add
	IL_0252:            V_16=(V_16 + 1);                                            //stloc.s				V_16
	IL_0254:            goto IL_0317;                                               //br				IL_0317
	IL_0259:                                                                        //ldloc.0
	IL_025a:            Temp_14=V_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_025f:            Temp_15=Temp_14->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0264:                                                                        //ldc.i4.8
	IL_0265:                                                                        //conv.i8
	IL_0266:                                                                        //rem
	IL_0267:                                                                        //ldc.i4.0
	IL_0268:                                                                        //conv.i8
	IL_0269:            if((Temp_15 % 8)==0)goto IL_02e3;                           //beq.s				IL_02e3
	IL_026b:            goto IL_026d;                                               //br.s				IL_026d
	IL_026d:                                                                        //ldloc.0
	IL_026e:                                                                        //ldc.i4.8
	IL_026f:                                                                        //conv.i8
	IL_0270:                                                                        //ldloc.0
	IL_0271:            Temp_40=V_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_0276:            Temp_41=Temp_40->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_027b:                                                                        //ldc.i4.8
	IL_027c:                                                                        //conv.i8
	IL_027d:                                                                        //rem
	IL_027e:                                                                        //sub
	IL_027f:                                                                        //conv.i4
	IL_0280:            Temp_42=V_0->ReadBytes(safe_cast<System::Int32>((8 - (Temp_41 % 8))));//callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_0285:                                                                        //pop
	IL_0286:            goto IL_02e3;                                               //br.s				IL_02e3
	IL_0288:                                                                        //ldloc.s				V_10
	IL_028a:                                                                        //ldloc.s				V_11
	IL_028c:                                                                        //ldloc.0
	IL_028d:            Temp_21=V_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0292:            V_10[V_11]=Temp_21;                                         //stelem.i4
	IL_0293:                                                                        //ldloc.s				V_11
	IL_0295:                                                                        //ldc.i4.1
	IL_0296:                                                                        //add
	IL_0297:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_0299:            goto IL_00ee;                                               //br				IL_00ee
	IL_029e:                                                                        //ldloc.s				V_6
	IL_02a0:                                                                        //ldloc.s				V_7
	IL_02a2:                                                                        //ldloc.0
	IL_02a3:            Temp_13=V_0->ReadString();                                  //callvirt				System::String^ System::IO::BinaryReader::ReadString()
	IL_02a8:            V_6[V_7]=Temp_13;                                           //stelem.ref
	IL_02a9:                                                                        //ldloc.s				V_7
	IL_02ab:                                                                        //ldc.i4.1
	IL_02ac:                                                                        //add
	IL_02ad:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_02af:            goto IL_0150;                                               //br				IL_0150
	IL_02b4:                                                                        //ldloc.0
	IL_02b5:            Temp_53=V_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_02ba:                                                                        //ldloc.0
	IL_02bb:            Temp_54=V_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02c0:                                                                        //conv.i8
	IL_02c1:                                                                        //ldc.i4.1
	IL_02c2:            Temp_55=Temp_53->Seek(safe_cast<System::Int64>(Temp_54),safe_cast<System::IO::SeekOrigin>(1));//callvirt				System::Int64 System::IO::Stream::Seek(System::Int64,System::IO::SeekOrigin)
	IL_02c7:                                                                        //pop
	IL_02c8:            goto IL_006f;                                               //br				IL_006f
	IL_02cd:                                                                        //ldarg.0
	IL_02ce:            Temp_39=this->F_x1;                                         //ldfld				array<Root::T_x126^>^ Root::T_x127 F_x1
	IL_02d3:                                                                        //ldloc.s				V_19
	IL_02d5:                                                                        //ldloc.s				V_20
	IL_02d7:            Temp_39[V_19]=V_20;                                         //stelem.ref
	IL_02d8:                                                                        //ldloc.s				V_19
	IL_02da:                                                                        //ldc.i4.1
	IL_02db:                                                                        //add
	IL_02dc:            V_19=(V_19 + 1);                                            //stloc.s				V_19
	IL_02de:            goto IL_013c;                                               //br				IL_013c
	IL_02e3:                                                                        //ldloc.s				V_5
	IL_02e5:                                                                        //conv.ovf.u4
	IL_02e6:            Temp_16=gcnew array<System::Int32>(safe_cast<System::UInt32>(V_5));//newarr				System::Int32
	IL_02eb:            V_8=Temp_16;                                                //stloc.s				V_8
	IL_02ed:                                                                        //ldc.i4.0
	IL_02ee:            V_9=0;                                                      //stloc.s				V_9
	IL_02f0:            goto IL_005f;                                               //br				IL_005f
	IL_02f5:                                                                        //ldloc.0
	IL_02f6:            Temp_2=V_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02fb:            V_2=Temp_2;                                                 //stloc.2
	IL_02fc:                                                                        //ldloc.2
	IL_02fd:                                                                        //ldc.i4.1
	IL_02fe:            if(V_2<=1)goto IL_00be;                                     //ble				IL_00be
	IL_0303:            goto IL_02b4;                                               //br.s				IL_02b4
	IL_0305:                                                                        //ldloc.s				V_5
	IL_0307:                                                                        //conv.ovf.u4
	IL_0308:            Temp_19=gcnew array<System::Int32>(safe_cast<System::UInt32>(V_5));//newarr				System::Int32
	IL_030d:            V_10=Temp_19;                                               //stloc.s				V_10
	IL_030f:                                                                        //ldc.i4.0
	IL_0310:            V_11=0;                                                     //stloc.s				V_11
	IL_0312:            goto IL_00ee;                                               //br				IL_00ee
	IL_0317:                                                                        //ldloc.s				V_16
	IL_0319:                                                                        //ldloc.s				V_15
	IL_031b:            Temp_27=V_15->Length;                                       //ldlen
	IL_031c:                                                                        //conv.i4
	IL_031d:            if(V_16<Temp_27)goto IL_0208;                               //blt				IL_0208
	IL_0322:            goto IL_01f2;                                               //br				IL_01f2
	IL_0327:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x127::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x126^>^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x126^>^ Root::T_x127 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Int32 Root::T_x127::M_x1(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Byte Temp_0 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Byte V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_004d;case 1:goto IL_0029;case 2:goto IL_0061;};//switch				(IL_004d,IL_0029,IL_0061)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldc.i4.0
	IL_001b:            V_0=0;                                                      //stloc.0
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:            V_1=0;                                                      //stloc.1
	IL_001e:                                                                        //ldc.i4				0x1
	IL_0023:            V_3=1;                                                      //stloc				V_3
	IL_0027:            /*goto IL_0002;*/goto IL_0029;                              //br.s				IL_0002
	IL_0029:            goto IL_002b;                                               //br.s				IL_002b
	IL_002b:                                                                        //ldarg.1
	IL_002c:            Temp_0=A_0->ReadByte();                                     //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_0031:            V_2=Temp_0;                                                 //stloc.2
	IL_0032:                                                                        //ldloc.0
	IL_0033:                                                                        //ldloc.2
	IL_0034:                                                                        //ldc.i4.s				127
	IL_0036:                                                                        //and
	IL_0037:                                                                        //ldloc.1
	IL_0038:                                                                        //ldc.i4.s				31
	IL_003a:                                                                        //and
	IL_003b:                                                                        //shl
	IL_003c:                                                                        //or
	IL_003d:            V_0=(V_0 | ((V_2 & 127) << (V_1 & 31)));                    //stloc.0
	IL_003e:                                                                        //ldloc.1
	IL_003f:                                                                        //ldc.i4.7
	IL_0040:                                                                        //add
	IL_0041:            V_1=(V_1 + 7);                                              //stloc.1
	IL_0042:                                                                        //ldc.i4				0x0
	IL_0047:            V_3=0;                                                      //stloc				V_3
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:                                                                        //ldloc.2
	IL_004e:                                                                        //ldc.i4				0x80
	IL_0053:                                                                        //and
	IL_0054:            if((V_2 & 128)!=0)goto IL_002b;                             //brtrue.s				IL_002b
	IL_0056:                                                                        //ldc.i4				0x2
	IL_005b:            V_3=2;                                                      //stloc				V_3
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_0063;                                               //br.s				IL_0063
	IL_0063:                                                                        //ldloc.0
	IL_0064:            return V_0;                                                 //ret

}
inline void Root::T_x127::M_x1(Root::T_x126^ A_0,System::IO::BinaryReader^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Char Temp_3 = (System::Char)0;
	System::Byte Temp_4 = 0;
	System::SByte Temp_5 = 0;
	System::Int16 Temp_6 = 0;
	System::UInt16 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::UInt32 Temp_9 = 0;
	System::Int64 Temp_10 = 0;
	System::UInt64 Temp_11 = 0;
	System::Single Temp_12 = 0;
	System::Double Temp_13 = 0;
	System::Decimal Temp_14;
	System::Int64 Temp_15 = 0;
	System::DateTime Temp_16;
	System::Int64 Temp_17 = 0;
	System::TimeSpan Temp_18;
	System::IO::Stream^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	array<System::Byte>^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	array<System::Byte>^ Temp_23 = nullptr;
	System::IO::MemoryStream^ Temp_24 = nullptr;
	//local variables.
	Root::T_x127::T_x1 V_0 = (Root::T_x127::T_x1)0;
	Root::T_x127::T_x1 V_1 = (Root::T_x127::T_x1)0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_00c8;case 1:goto IL_002c;case 2:goto IL_01bf;};//switch				(IL_00c8,IL_002c,IL_01bf)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.2
	IL_0019:            Temp_0=this->M_x1(A_1);                                     //call				System::Int32 Root::T_x127::M_x1(System::IO::BinaryReader^)
	IL_001e:            V_0=safe_cast<Root::T_x127::T_x1>(Temp_0);                  //stloc.0
	IL_001f:                                                                        //ldloc.0
	IL_0020:            V_1=V_0;                                                    //stloc.1
	IL_0021:                                                                        //ldc.i4				0x1
	IL_0026:            V_2=1;                                                      //stloc				V_2
	IL_002a:            /*goto IL_0002;*/goto IL_002c;                              //br.s				IL_0002
	IL_002c:                                                                        //ldloc.1
	IL_002d:            switch(safe_cast<System::Int32>(V_1)){case 0:goto IL_01d6;case 1:goto IL_011a;case 2:goto IL_00f1;case 3:goto IL_015e;case 4:goto IL_01c4;case 5:goto IL_0217;case 6:goto IL_019f;case 7:goto IL_01de;case 8:goto IL_014c;case 9:goto IL_00df;case 10:goto IL_0229;case 11:goto IL_0205;case 12:goto IL_0127;case 13:goto IL_00cd;case 14:goto IL_01f3;case 15:goto IL_0103;case 16:goto IL_0170;case 17:goto IL_023b;case 18:goto IL_023b;case 19:goto IL_023b;case 20:goto IL_023b;case 21:goto IL_023b;case 22:goto IL_023b;case 23:goto IL_023b;case 24:goto IL_023b;case 25:goto IL_023b;case 26:goto IL_023b;case 27:goto IL_023b;case 28:goto IL_023b;case 29:goto IL_023b;case 30:goto IL_023b;case 31:goto IL_023b;case 32:goto IL_0139;case 33:goto IL_0187;};//switch				(IL_01d6,IL_011a,IL_00f1,IL_015e,IL_01c4,IL_0217,IL_019f,IL_01de,IL_014c,IL_00df,IL_0229,IL_0205,IL_0127,IL_00cd,IL_01f3,IL_0103,IL_0170,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_023b,IL_0139,IL_0187)
	IL_00ba:                                                                        //ldc.i4				0x0
	IL_00bf:            V_2=0;                                                      //stloc				V_2
	IL_00c3:            /*goto IL_0002;*/goto IL_00c8;                              //br				IL_0002
	IL_00c8:            goto IL_01b1;                                               //br				IL_01b1
	IL_00cd:                                                                        //ldarg.1
	IL_00ce:                                                                        //ldarg.2
	IL_00cf:            Temp_13=A_1->ReadDouble();                                  //callvirt				System::Double System::IO::BinaryReader::ReadDouble()
	IL_00d4:                                                                        //box				System::Double
	IL_00d9:            A_0->M_x1(safe_cast<System::Object^>(Temp_13));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_00de:            return;                                                     //ret
	IL_00df:                                                                        //ldarg.1
	IL_00e0:                                                                        //ldarg.2
	IL_00e1:            Temp_9=A_1->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_00e6:                                                                        //box				System::UInt32
	IL_00eb:            A_0->M_x1(safe_cast<System::Object^>(Temp_9));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_00f0:            return;                                                     //ret
	IL_00f1:                                                                        //ldarg.1
	IL_00f2:                                                                        //ldarg.2
	IL_00f3:            Temp_2=A_1->ReadBoolean();                                  //callvirt				System::Boolean System::IO::BinaryReader::ReadBoolean()
	IL_00f8:                                                                        //box				System::Boolean
	IL_00fd:            A_0->M_x1(safe_cast<System::Object^>(Temp_2));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0102:            return;                                                     //ret
	IL_0103:                                                                        //ldarg.1
	IL_0104:                                                                        //ldarg.2
	IL_0105:            Temp_15=A_1->ReadInt64();                                   //callvirt				System::Int64 System::IO::BinaryReader::ReadInt64()
	IL_010a:            Temp_16=System::DateTime(Temp_15);                          //newobj				void System::DateTime::.ctor(System::Int64)
	IL_010f:                                                                        //box				System::DateTime
	IL_0114:            A_0->M_x1(safe_cast<System::Object^>(Temp_16));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0119:            return;                                                     //ret
	IL_011a:                                                                        //ldarg.1
	IL_011b:                                                                        //ldarg.2
	IL_011c:            Temp_1=A_1->ReadString();                                   //callvirt				System::String^ System::IO::BinaryReader::ReadString()
	IL_0121:            A_0->M_x1(safe_cast<System::Object^>(Temp_1));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0126:            return;                                                     //ret
	IL_0127:                                                                        //ldarg.1
	IL_0128:                                                                        //ldarg.2
	IL_0129:            Temp_12=A_1->ReadSingle();                                  //callvirt				System::Single System::IO::BinaryReader::ReadSingle()
	IL_012e:                                                                        //box				System::Single
	IL_0133:            A_0->M_x1(safe_cast<System::Object^>(Temp_12));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0138:            return;                                                     //ret
	IL_0139:                                                                        //ldarg.1
	IL_013a:                                                                        //ldarg.2
	IL_013b:                                                                        //ldarg.2
	IL_013c:            Temp_20=A_1->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0141:            Temp_21=A_1->ReadBytes(Temp_20);                            //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_0146:            A_0->M_x1(safe_cast<System::Object^>(Temp_21));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_014b:            return;                                                     //ret
	IL_014c:                                                                        //ldarg.1
	IL_014d:                                                                        //ldarg.2
	IL_014e:            Temp_8=A_1->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0153:                                                                        //box				System::Int32
	IL_0158:            A_0->M_x1(safe_cast<System::Object^>(Temp_8));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_015d:            return;                                                     //ret
	IL_015e:                                                                        //ldarg.1
	IL_015f:                                                                        //ldarg.2
	IL_0160:            Temp_3=A_1->ReadChar();                                     //callvirt				System::Char System::IO::BinaryReader::ReadChar()
	IL_0165:                                                                        //box				System::Char
	IL_016a:            A_0->M_x1(safe_cast<System::Object^>(Temp_3));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_016f:            return;                                                     //ret
	IL_0170:                                                                        //ldarg.1
	IL_0171:                                                                        //ldarg.2
	IL_0172:            Temp_17=A_1->ReadInt64();                                   //callvirt				System::Int64 System::IO::BinaryReader::ReadInt64()
	IL_0177:            Temp_18=System::TimeSpan(Temp_17);                          //newobj				void System::TimeSpan::.ctor(System::Int64)
	IL_017c:                                                                        //box				System::TimeSpan
	IL_0181:            A_0->M_x1(safe_cast<System::Object^>(Temp_18));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0186:            return;                                                     //ret
	IL_0187:                                                                        //ldarg.1
	IL_0188:                                                                        //ldarg.2
	IL_0189:                                                                        //ldarg.2
	IL_018a:            Temp_22=A_1->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_018f:            Temp_23=A_1->ReadBytes(Temp_22);                            //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_0194:            Temp_24=gcnew System::IO::MemoryStream(Temp_23);            //newobj				void System::IO::MemoryStream::.ctor(array<System::Byte>^)
	IL_0199:            A_0->M_x1(safe_cast<System::Object^>(Temp_24));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_019e:            return;                                                     //ret
	IL_019f:                                                                        //ldarg.1
	IL_01a0:                                                                        //ldarg.2
	IL_01a1:            Temp_6=A_1->ReadInt16();                                    //callvirt				System::Int16 System::IO::BinaryReader::ReadInt16()
	IL_01a6:                                                                        //box				System::Int16
	IL_01ab:            A_0->M_x1(safe_cast<System::Object^>(Temp_6));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_01b0:            return;                                                     //ret
	IL_01b1:                                                                        //ldc.i4				0x2
	IL_01b6:            V_2=2;                                                      //stloc				V_2
	IL_01ba:            /*goto IL_0002;*/goto IL_01bf;                              //br				IL_0002
	IL_01bf:            goto IL_023b;                                               //br				IL_023b
	IL_01c4:                                                                        //ldarg.1
	IL_01c5:                                                                        //ldarg.2
	IL_01c6:            Temp_4=A_1->ReadByte();                                     //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_01cb:                                                                        //box				System::Byte
	IL_01d0:            A_0->M_x1(safe_cast<System::Object^>(Temp_4));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_01d5:            return;                                                     //ret
	IL_01d6:                                                                        //ldarg.1
	IL_01d7:                                                                        //ldnull
	IL_01d8:            A_0->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_01dd:            return;                                                     //ret
	IL_01de:            goto IL_01e1;                                               //br.s				IL_01e1
	IL_01e0:                                                                        //break
	IL_01e1:                                                                        //ldarg.1
	IL_01e2:                                                                        //ldarg.2
	IL_01e3:            Temp_7=A_1->ReadUInt16();                                   //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_01e8:                                                                        //box				System::UInt16
	IL_01ed:            A_0->M_x1(safe_cast<System::Object^>(Temp_7));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_01f2:            return;                                                     //ret
	IL_01f3:                                                                        //ldarg.1
	IL_01f4:                                                                        //ldarg.2
	IL_01f5:            Temp_14=A_1->ReadDecimal();                                 //callvirt				System::Decimal System::IO::BinaryReader::ReadDecimal()
	IL_01fa:                                                                        //box				System::Decimal
	IL_01ff:            A_0->M_x1(safe_cast<System::Object^>(Temp_14));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0204:            return;                                                     //ret
	IL_0205:                                                                        //ldarg.1
	IL_0206:                                                                        //ldarg.2
	IL_0207:            Temp_11=A_1->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_020c:                                                                        //box				System::UInt64
	IL_0211:            A_0->M_x1(safe_cast<System::Object^>(Temp_11));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0216:            return;                                                     //ret
	IL_0217:                                                                        //ldarg.1
	IL_0218:                                                                        //ldarg.2
	IL_0219:            Temp_5=A_1->ReadSByte();                                    //callvirt				System::SByte System::IO::BinaryReader::ReadSByte()
	IL_021e:                                                                        //box				System::SByte
	IL_0223:            A_0->M_x1(safe_cast<System::Object^>(Temp_5));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0228:            return;                                                     //ret
	IL_0229:                                                                        //ldarg.1
	IL_022a:                                                                        //ldarg.2
	IL_022b:            Temp_10=A_1->ReadInt64();                                   //callvirt				System::Int64 System::IO::BinaryReader::ReadInt64()
	IL_0230:                                                                        //box				System::Int64
	IL_0235:            A_0->M_x1(safe_cast<System::Object^>(Temp_10));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_023a:            return;                                                     //ret
	IL_023b:                                                                        //ldarg.0
	IL_023c:                                                                        //ldarg.1
	IL_023d:                                                                        //ldarg.2
	IL_023e:            Temp_19=A_1->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_0243:            this->M_x1(A_0,Temp_19);                                    //call				void Root::T_x127::M_x1(Root::T_x126^,System::IO::Stream^)
	IL_0248:            return;                                                     //ret

}
inline void Root::T_x127::M_x1(Root::T_x126^ A_0,System::IO::BinaryReader^ A_1,array<System::String^>^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::UInt64 Temp_1 = 0;
	System::Type^ Temp_2 = nullptr;
	System::SByte Temp_3 = 0;
	System::Type^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Int16 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Type^ Temp_8 = nullptr;
	System::Int64 Temp_9 = 0;
	System::DateTime Temp_10;
	System::UInt32 Temp_11 = 0;
	System::Type^ Temp_12 = nullptr;
	System::Type^ Temp_13 = nullptr;
	System::Type^ Temp_14 = nullptr;
	System::Type^ Temp_15 = nullptr;
	System::IO::Stream^ Temp_16 = nullptr;
	System::Type^ Temp_17 = nullptr;
	System::Type^ Temp_18 = nullptr;
	System::Single Temp_19 = 0;
	System::Type^ Temp_20 = nullptr;
	System::Double Temp_21 = 0;
	System::Type^ Temp_22 = nullptr;
	System::Type^ Temp_23 = nullptr;
	System::Type^ Temp_24 = nullptr;
	System::UInt16 Temp_25 = 0;
	System::Byte Temp_26 = 0;
	System::Type^ Temp_27 = nullptr;
	System::Decimal Temp_28;
	System::Int64 Temp_29 = 0;
	System::Int64 Temp_30 = 0;
	System::TimeSpan Temp_31;
	System::Type^ Temp_32 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Type^ V_1 = nullptr;
	System::IO::FileNotFoundException^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_008e;                                               //br				IL_008e
	IL_0005:                                                                        //ldloc				V_3
	IL_0009:            switch(V_3){case 0:goto IL_0374;case 1:goto IL_0356;case 2:goto IL_02c0;case 3:goto IL_03ab;case 4:goto IL_0151;case 5:goto IL_00b9;case 6:goto IL_0405;case 7:goto IL_0282;case 8:goto IL_0164;case 9:goto IL_02f1;case 10:goto IL_00a4;case 11:goto IL_00fc;case 12:goto IL_00de;case 13:goto IL_0477;case 14:goto IL_0133;case 15:goto IL_0195;case 16:goto IL_02a2;case 17:goto IL_0418;case 18:goto IL_0182;case 19:goto IL_02d3;case 20:goto IL_0495;case 21:goto IL_0264;case 22:goto IL_0316;case 23:goto IL_0251;case 24:goto IL_0436;case 25:goto IL_01f3;case 26:goto IL_01d5;case 27:goto IL_03c9;case 28:goto IL_0334;case 29:goto IL_022a;case 30:goto IL_01b0;case 31:goto IL_03dc;};//switch				(IL_0374,IL_0356,IL_02c0,IL_03ab,IL_0151,IL_00b9,IL_0405,IL_0282,IL_0164,IL_02f1,IL_00a4,IL_00fc,IL_00de,IL_0477,IL_0133,IL_0195,IL_02a2,IL_0418,IL_0182,IL_02d3,IL_0495,IL_0264,IL_0316,IL_0251,IL_0436,IL_01f3,IL_01d5,IL_03c9,IL_0334,IL_022a,IL_01b0,IL_03dc)
	IL_008e:                                                                        //ldarg.0
	IL_008f:                                                                        //ldarg.2
	IL_0090:            Temp_0=this->M_x1(A_1);                                     //call				System::Int32 Root::T_x127::M_x1(System::IO::BinaryReader^)
	IL_0095:            V_0=Temp_0;                                                 //stloc.0
	IL_0096:                                                                        //ldc.i4				0xa
	IL_009b:            V_3=10;                                                     //stloc				V_3
	IL_009f:            /*goto IL_0005;*/goto IL_00a4;                              //br				IL_0005
	IL_00a4:                                                                        //ldloc.0
	IL_00a5:                                                                        //ldc.i4.m1
	IL_00a6:            if(V_0==-1)goto IL_04c3;                                    //beq				IL_04c3
	IL_00ab:                                                                        //ldc.i4				0x5
	IL_00b0:            V_3=5;                                                      //stloc				V_3
	IL_00b4:            /*goto IL_0005;*/goto IL_00b9;                              //br				IL_0005
	IL_00b9:            goto IL_0241;                                               //br				IL_0241
	IL_00be:                                                                        //ldarg.1
	IL_00bf:                                                                        //ldarg.2
	IL_00c0:            Temp_19=A_1->ReadSingle();                                  //callvirt				System::Single System::IO::BinaryReader::ReadSingle()
	IL_00c5:                                                                        //box				System::Single
	IL_00ca:            A_0->M_x1(safe_cast<System::Object^>(Temp_19));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_00cf:            return;                                                     //ret
	IL_00d0:                                                                        //ldc.i4				0xc
	IL_00d5:            V_3=12;                                                     //stloc				V_3
	IL_00d9:            /*goto IL_0005;*/goto IL_00de;                              //br				IL_0005
	IL_00de:                                                                        //ldloc.1
	IL_00df:                                                                        //ldtoken				System::UInt32
	IL_00e4:            Temp_12=System::UInt32::typeid;                             //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00e9:            if(V_1!=Temp_12)goto IL_0348;                               //bne.un				IL_0348
	IL_00ee:                                                                        //ldc.i4				0xb
	IL_00f3:            V_3=11;                                                     //stloc				V_3
	IL_00f7:            /*goto IL_0005;*/goto IL_00fc;                              //br				IL_0005
	IL_00fc:            goto IL_049a;                                               //br				IL_049a
	IL_0101:                                                                        //ldarg.1
	IL_0102:                                                                        //ldarg.2
	IL_0103:            Temp_7=A_1->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0108:                                                                        //box				System::Int32
	IL_010d:            A_0->M_x1(safe_cast<System::Object^>(Temp_7));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0112:            return;                                                     //ret
	IL_0113:                                                                        //ldarg.1
	IL_0114:                                                                        //ldarg.2
	IL_0115:            Temp_28=A_1->ReadDecimal();                                 //callvirt				System::Decimal System::IO::BinaryReader::ReadDecimal()
	IL_011a:                                                                        //box				System::Decimal
	IL_011f:            A_0->M_x1(safe_cast<System::Object^>(Temp_28));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0124:            return;                                                     //ret
	IL_0125:                                                                        //ldc.i4				0xe
	IL_012a:            V_3=14;                                                     //stloc				V_3
	IL_012e:            /*goto IL_0005;*/goto IL_0133;                              //br				IL_0005
	IL_0133:                                                                        //ldloc.1
	IL_0134:                                                                        //ldtoken				System::String
	IL_0139:            Temp_14=System::String::typeid;                             //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_013e:            if(V_1!=Temp_14)goto IL_0256;                               //bne.un				IL_0256
	IL_0143:                                                                        //ldc.i4				0x4
	IL_0148:            V_3=4;                                                      //stloc				V_3
	IL_014c:            /*goto IL_0005;*/goto IL_0151;                              //br				IL_0005
	IL_0151:            goto IL_0287;                                               //br				IL_0287
	IL_0156:                                                                        //ldc.i4				0x8
	IL_015b:            V_3=8;                                                      //stloc				V_3
	IL_015f:            /*goto IL_0005;*/goto IL_0164;                              //br				IL_0005
	IL_0164:                                                                        //ldloc.1
	IL_0165:                                                                        //ldtoken				System::Single
	IL_016a:            Temp_8=System::Single::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_016f:            if(V_1!=Temp_8)goto IL_0469;                                //bne.un				IL_0469
	IL_0174:                                                                        //ldc.i4				0x12
	IL_0179:            V_3=18;                                                     //stloc				V_3
	IL_017d:            /*goto IL_0005;*/goto IL_0182;                              //br				IL_0005
	IL_0182:            goto IL_00be;                                               //br				IL_00be
	IL_0187:                                                                        //ldc.i4				0xf
	IL_018c:            V_3=15;                                                     //stloc				V_3
	IL_0190:            /*goto IL_0005;*/goto IL_0195;                              //br				IL_0005
	IL_0195:                                                                        //ldloc.1
	IL_0196:                                                                        //ldtoken				System::TimeSpan
	IL_019b:            Temp_15=System::TimeSpan::typeid;                           //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_01a0:            if(V_1!=Temp_15)goto IL_020f;                               //bne.un.s				IL_020f
	IL_01a2:                                                                        //ldc.i4				0x1e
	IL_01a7:            V_3=30;                                                     //stloc				V_3
	IL_01ab:            /*goto IL_0005;*/goto IL_01b0;                              //br				IL_0005
	IL_01b0:            goto IL_04ac;                                               //br				IL_04ac
	IL_01b5:                                                                        //ldarg.1
	IL_01b6:                                                                        //ldarg.2
	IL_01b7:            Temp_25=A_1->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_01bc:                                                                        //box				System::UInt16
	IL_01c1:            A_0->M_x1(safe_cast<System::Object^>(Temp_25));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_01c6:            return;                                                     //ret
	IL_01c7:                                                                        //ldc.i4				0x1a
	IL_01cc:            V_3=26;                                                     //stloc				V_3
	IL_01d0:            /*goto IL_0005;*/goto IL_01d5;                              //br				IL_0005
	IL_01d5:                                                                        //ldloc.1
	IL_01d6:                                                                        //ldtoken				System::Byte
	IL_01db:            Temp_27=System::Byte::typeid;                               //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_01e0:            if(V_1!=Temp_27)goto IL_0294;                               //bne.un				IL_0294
	IL_01e5:                                                                        //ldc.i4				0x19
	IL_01ea:            V_3=25;                                                     //stloc				V_3
	IL_01ee:            /*goto IL_0005;*/goto IL_01f3;                              //br				IL_0005
	IL_01f3:            goto IL_038b;                                               //br				IL_038b
	IL_01f8:                                                                        //ldarg.1
	IL_01f9:                                                                        //ldarg.2
	IL_01fa:            Temp_9=A_1->ReadInt64();                                    //callvirt				System::Int64 System::IO::BinaryReader::ReadInt64()
	IL_01ff:            Temp_10=System::DateTime(Temp_9);                           //newobj				void System::DateTime::.ctor(System::Int64)
	IL_0204:                                                                        //box				System::DateTime
	IL_0209:            A_0->M_x1(safe_cast<System::Object^>(Temp_10));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_020e:            return;                                                     //ret
	IL_020f:                                                                        //ldarg.0
	IL_0210:                                                                        //ldarg.1
	IL_0211:                                                                        //ldarg.2
	IL_0212:            Temp_16=A_1->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_0217:            this->M_x1(A_0,Temp_16);                                    //call				void Root::T_x127::M_x1(Root::T_x126^,System::IO::Stream^)
	IL_021c:                                                                        //ldc.i4				0x1d
	IL_0221:            V_3=29;                                                     //stloc				V_3
	IL_0225:            /*goto IL_0005;*/goto IL_022a;                              //br				IL_0005
	IL_022a:            goto IL_04c3;                                               //br				IL_04c3
	IL_022f:                                                                        //ldarg.1
	IL_0230:                                                                        //ldarg.2
	IL_0231:            Temp_6=A_1->ReadInt16();                                    //callvirt				System::Int16 System::IO::BinaryReader::ReadInt16()
	IL_0236:                                                                        //box				System::Int16
	IL_023b:            A_0->M_x1(safe_cast<System::Object^>(Temp_6));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0240:            return;                                                     //ret
	IL_0241:                                                                        //ldnull
	IL_0242:            V_1=safe_cast<System::Type^>(nullptr);                      //stloc.1
	IL_0243:                                                                        //ldc.i4				0x17
	IL_0248:            V_3=23;                                                     //stloc				V_3
	IL_024c:            /*goto IL_0005;*/goto IL_0251;                              //br				IL_0005
	IL_0251:            /*goto IL_044d;*/goto IL_044C01;                            //br				IL_044d
	IL_0256:                                                                        //ldc.i4				0x15
	IL_025b:            V_3=21;                                                     //stloc				V_3
	IL_025f:            /*goto IL_0005;*/goto IL_0264;                              //br				IL_0005
	IL_0264:                                                                        //ldloc.1
	IL_0265:                                                                        //ldtoken				System::Int32
	IL_026a:            Temp_22=System::Int32::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_026f:            if(V_1!=Temp_22)goto IL_01c7;                               //bne.un				IL_01c7
	IL_0274:                                                                        //ldc.i4				0x7
	IL_0279:            V_3=7;                                                      //stloc				V_3
	IL_027d:            /*goto IL_0005;*/goto IL_0282;                              //br				IL_0005
	IL_0282:            goto IL_0101;                                               //br				IL_0101
	IL_0287:                                                                        //ldarg.1
	IL_0288:                                                                        //ldarg.2
	IL_0289:            Temp_5=A_1->ReadString();                                   //callvirt				System::String^ System::IO::BinaryReader::ReadString()
	IL_028e:            A_0->M_x1(safe_cast<System::Object^>(Temp_5));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0293:            return;                                                     //ret
	IL_0294:                                                                        //ldc.i4				0x10
	IL_0299:            V_3=16;                                                     //stloc				V_3
	IL_029d:            /*goto IL_0005;*/goto IL_02a2;                              //br				IL_0005
	IL_02a2:                                                                        //ldloc.1
	IL_02a3:                                                                        //ldtoken				System::SByte
	IL_02a8:            Temp_17=System::SByte::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_02ad:            if(V_1!=Temp_17)goto IL_03ce;                               //bne.un				IL_03ce
	IL_02b2:                                                                        //ldc.i4				0x2
	IL_02b7:            V_3=2;                                                      //stloc				V_3
	IL_02bb:            /*goto IL_0005;*/goto IL_02c0;                              //br				IL_0005
	IL_02c0:            goto IL_0379;                                               //br				IL_0379
	IL_02c5:                                                                        //ldc.i4				0x13
	IL_02ca:            V_3=19;                                                     //stloc				V_3
	IL_02ce:            /*goto IL_0005;*/goto IL_02d3;                              //br				IL_0005
	IL_02d3:                                                                        //ldloc.1
	IL_02d4:                                                                        //ldtoken				System::DateTime
	IL_02d9:            Temp_20=System::DateTime::typeid;                           //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_02de:            if(V_1!=Temp_20)goto IL_0187;                               //bne.un				IL_0187
	IL_02e3:                                                                        //ldc.i4				0x9
	IL_02e8:            V_3=9;                                                      //stloc				V_3
	IL_02ec:            /*goto IL_0005;*/goto IL_02f1;                              //br				IL_0005
	IL_02f1:            goto IL_01f8;                                               //br				IL_01f8
	IL_02f6:                                                                        //ldarg.1
	IL_02f7:                                                                        //ldarg.2
	IL_02f8:            Temp_21=A_1->ReadDouble();                                  //callvirt				System::Double System::IO::BinaryReader::ReadDouble()
	IL_02fd:                                                                        //box				System::Double
	IL_0302:            A_0->M_x1(safe_cast<System::Object^>(Temp_21));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0307:            return;                                                     //ret
	IL_0308:                                                                        //ldc.i4				0x16
	IL_030d:            V_3=22;                                                     //stloc				V_3
	IL_0311:            /*goto IL_0005;*/goto IL_0316;                              //br				IL_0005
	IL_0316:                                                                        //ldloc.1
	IL_0317:                                                                        //ldtoken				System::Int64
	IL_031c:            Temp_23=System::Int64::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0321:            if(V_1!=Temp_23)goto IL_040a;                               //bne.un				IL_040a
	IL_0326:                                                                        //ldc.i4				0x1c
	IL_032b:            V_3=28;                                                     //stloc				V_3
	IL_032f:            /*goto IL_0005;*/goto IL_0334;                              //br				IL_0005
	IL_0334:            goto IL_0336;                                               //br.s				IL_0336
	IL_0336:                                                                        //ldarg.1
	IL_0337:                                                                        //ldarg.2
	IL_0338:            Temp_29=A_1->ReadInt64();                                   //callvirt				System::Int64 System::IO::BinaryReader::ReadInt64()
	IL_033d:                                                                        //box				System::Int64
	IL_0342:            A_0->M_x1(safe_cast<System::Object^>(Temp_29));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_0347:            return;                                                     //ret
	IL_0348:                                                                        //ldc.i4				0x1
	IL_034d:            V_3=1;                                                      //stloc				V_3
	IL_0351:            /*goto IL_0005;*/goto IL_0356;                              //br				IL_0005
	IL_0356:                                                                        //ldloc.1
	IL_0357:                                                                        //ldtoken				System::UInt64
	IL_035c:            Temp_2=System::UInt64::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0361:            if(V_1!=Temp_2)goto IL_0156;                                //bne.un				IL_0156
	IL_0366:                                                                        //ldc.i4				0x0
	IL_036b:            V_3=0;                                                      //stloc				V_3
	IL_036f:            /*goto IL_0005;*/goto IL_0374;                              //br				IL_0005
	IL_0374:            goto IL_043b;                                               //br				IL_043b
	IL_0379:                                                                        //ldarg.1
	IL_037a:                                                                        //ldarg.2
	IL_037b:            Temp_3=A_1->ReadSByte();                                    //callvirt				System::SByte System::IO::BinaryReader::ReadSByte()
	IL_0380:                                                                        //box				System::SByte
	IL_0385:            A_0->M_x1(safe_cast<System::Object^>(Temp_3));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_038a:            return;                                                     //ret
	IL_038b:                                                                        //ldarg.1
	IL_038c:                                                                        //ldarg.2
	IL_038d:            Temp_26=A_1->ReadByte();                                    //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_0392:                                                                        //box				System::Byte
	IL_0397:            A_0->M_x1(safe_cast<System::Object^>(Temp_26));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_039c:            return;                                                     //ret
	IL_039d:                                                                        //ldc.i4				0x3
	IL_03a2:            V_3=3;                                                      //stloc				V_3
	IL_03a6:            /*goto IL_0005;*/goto IL_03ab;                              //br				IL_0005
	IL_03ab:                                                                        //ldloc.1
	IL_03ac:                                                                        //ldtoken				System::Decimal
	IL_03b1:            Temp_4=System::Decimal::typeid;                             //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_03b6:            if(V_1!=Temp_4)goto IL_02c5;                                //bne.un				IL_02c5
	IL_03bb:                                                                        //ldc.i4				0x1b
	IL_03c0:            V_3=27;                                                     //stloc				V_3
	IL_03c4:            /*goto IL_0005;*/goto IL_03c9;                              //br				IL_0005
	IL_03c9:            goto IL_0113;                                               //br				IL_0113
	IL_03ce:                                                                        //ldc.i4				0x1f
	IL_03d3:            V_3=31;                                                     //stloc				V_3
	IL_03d7:            /*goto IL_0005;*/goto IL_03dc;                              //br				IL_0005
	IL_03dc:                                                                        //ldloc.1
	IL_03dd:                                                                        //ldtoken				System::Int16
	IL_03e2:            Temp_32=System::Int16::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_03e7:            if(V_1!=Temp_32)goto IL_0308;                               //bne.un				IL_0308
	IL_03ec:                                                                        //ldc.i4.4
	IL_03ed:                                                                        //dup
	IL_03ee:                                                                        //dup
	IL_03ef:                                                                        //ldc.i4.2
	IL_03f0:                                                                        //sub
	IL_03f1:                                                                        //blt				IL_03ed
	IL_03f6:                                                                        //pop
	IL_03f7:                                                                        //ldc.i4				0x6
	IL_03fc:            V_3=6;                                                      //stloc				V_3
	IL_0400:            /*goto IL_0005;*/goto IL_0405;                              //br				IL_0005
	IL_0405:            goto IL_022f;                                               //br				IL_022f
	IL_040a:                                                                        //ldc.i4				0x11
	IL_040f:            V_3=17;                                                     //stloc				V_3
	IL_0413:            /*goto IL_0005;*/goto IL_0418;                              //br				IL_0005
	IL_0418:                                                                        //ldloc.1
	IL_0419:                                                                        //ldtoken				System::UInt16
	IL_041e:            Temp_18=System::UInt16::typeid;                             //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0423:            if(V_1!=Temp_18)goto IL_00d0;                               //bne.un				IL_00d0
	IL_0428:                                                                        //ldc.i4				0x18
	IL_042d:            V_3=24;                                                     //stloc				V_3
	IL_0431:            /*goto IL_0005;*/goto IL_0436;                              //br				IL_0005
	IL_0436:            goto IL_01b5;                                               //br				IL_01b5
	IL_043b:                                                                        //ldarg.1
	IL_043c:                                                                        //ldarg.2
	IL_043d:            Temp_1=A_1->ReadUInt64();                                   //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_0442:                                                                        //box				System::UInt64
	IL_0447:            A_0->M_x1(safe_cast<System::Object^>(Temp_1));              //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_044c:            return;                                                     //ret
	IL_044C01:          try{
	IL_044d:                                                                        //ldarg.3
	IL_044e:                                                                        //ldloc.0
	IL_044f:                                                                        //ldelem.ref
	IL_0450:                                                                        //ldc.i4.1
	IL_0451:            Temp_24=System::Type::GetType(A_2[V_0],true);               //call				System::Type^ System::Type::GetType(System::String^,System::Boolean)
	IL_0456:            V_1=Temp_24;                                                //stloc.1
	IL_0457:            goto IL_0125;                                               //leave				IL_0125
	                    ;}
	                    catch(System::IO::FileNotFoundException^ Ex_045702){
	IL_045c:            V_2=Ex_045702;                                              //stloc.2
	IL_045d:                                                                        //ldarg.1
	IL_045e:                                                                        //ldloc.2
	IL_045f:            A_0->M_x1(safe_cast<System::Exception^>(V_2));              //callvirt				void Root::T_x126::M_x1(System::Exception^)
	IL_0464:            goto IL_0125;                                               //leave				IL_0125
	                    ;}
	IL_0469:                                                                        //ldc.i4				0xd
	IL_046e:            V_3=13;                                                     //stloc				V_3
	IL_0472:            /*goto IL_0005;*/goto IL_0477;                              //br				IL_0005
	IL_0477:                                                                        //ldloc.1
	IL_0478:                                                                        //ldtoken				System::Double
	IL_047d:            Temp_13=System::Double::typeid;                             //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0482:            if(V_1!=Temp_13)goto IL_039d;                               //bne.un				IL_039d
	IL_0487:                                                                        //ldc.i4				0x14
	IL_048c:            V_3=20;                                                     //stloc				V_3
	IL_0490:            /*goto IL_0005;*/goto IL_0495;                              //br				IL_0005
	IL_0495:            goto IL_02f6;                                               //br				IL_02f6
	IL_049a:                                                                        //ldarg.1
	IL_049b:                                                                        //ldarg.2
	IL_049c:            Temp_11=A_1->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_04a1:                                                                        //box				System::UInt32
	IL_04a6:            A_0->M_x1(safe_cast<System::Object^>(Temp_11));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_04ab:            return;                                                     //ret
	IL_04ac:                                                                        //ldarg.1
	IL_04ad:                                                                        //ldarg.2
	IL_04ae:            Temp_30=A_1->ReadInt64();                                   //callvirt				System::Int64 System::IO::BinaryReader::ReadInt64()
	IL_04b3:            Temp_31=System::TimeSpan(Temp_30);                          //newobj				void System::TimeSpan::.ctor(System::Int64)
	IL_04b8:                                                                        //box				System::TimeSpan
	IL_04bd:            A_0->M_x1(safe_cast<System::Object^>(Temp_31));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_04c2:            return;                                                     //ret
	IL_04c3:            return;                                                     //ret

}
inline void Root::T_x127::M_x1(Root::T_x126^ A_0,System::IO::Stream^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Runtime::Serialization::StreamingContext Temp_0;
	System::Runtime::Serialization::Formatters::Binary::BinaryFormatter^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	System::Runtime::Serialization::Formatters::Binary::BinaryFormatter^ V_0 = nullptr;
	System::IO::FileNotFoundException^ V_1 = nullptr;
	System::Runtime::Serialization::SerializationException^ V_2 = nullptr;
	System::ArgumentNullException^ V_3 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_000001:          try{
	IL_0001:                                                                        //ldc.i4.s				12
	IL_0003:            Temp_0=System::Runtime::Serialization::StreamingContext(safe_cast<System::Runtime::Serialization::StreamingContextStates>(12));//newobj				void System::Runtime::Serialization::StreamingContext::.ctor(System::Runtime::Serialization::StreamingContextStates)
	IL_0008:            Temp_1=gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter(safe_cast<System::Runtime::Serialization::ISurrogateSelector^>(nullptr),Temp_0);//newobj				void System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::.ctor(System::Runtime::Serialization::ISurrogateSelector^,System::Runtime::Serialization::StreamingContext)
	IL_000d:            V_0=Temp_1;                                                 //stloc.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:                                                                        //ldloc.0
	IL_0010:                                                                        //ldarg.2
	IL_0011:            Temp_2=V_0->Deserialize(A_1);                               //callvirt				System::Object^ System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(System::IO::Stream^)
	IL_0016:            A_0->M_x1(Temp_2);                                          //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_001b:            goto IL_0050;                                               //leave.s				IL_0050
	                    ;}
	                    catch(System::IO::FileNotFoundException^ Ex_001B02){
	IL_001d:            V_1=Ex_001B02;                                              //stloc.1
	IL_001e:                                                                        //ldarg.1
	IL_001f:                                                                        //ldloc.1
	IL_0020:            A_0->M_x1(safe_cast<System::Exception^>(V_1));              //callvirt				void Root::T_x126::M_x1(System::Exception^)
	IL_0025:                                                                        //ldarg.1
	IL_0026:                                                                        //ldnull
	IL_0027:            A_0->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_002c:            goto IL_0050;                                               //leave.s				IL_0050
	                    ;}
	                    catch(System::Runtime::Serialization::SerializationException^ Ex_002C02){
	IL_002e:            V_2=Ex_002C02;                                              //stloc.2
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldloc.2
	IL_0031:            A_0->M_x1(safe_cast<System::Exception^>(V_2));              //callvirt				void Root::T_x126::M_x1(System::Exception^)
	IL_0036:                                                                        //ldarg.1
	IL_0037:                                                                        //ldnull
	IL_0038:            A_0->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_003d:            goto IL_0050;                                               //leave.s				IL_0050
	                    ;}
	                    catch(System::ArgumentNullException^ Ex_003D02){
	IL_003f:            V_3=Ex_003D02;                                              //stloc.3
	IL_0040:                                                                        //ldarg.1
	IL_0041:                                                                        //ldloc.3
	IL_0042:            A_0->M_x1(safe_cast<System::Exception^>(V_3));              //callvirt				void Root::T_x126::M_x1(System::Exception^)
	IL_0047:                                                                        //ldarg.1
	IL_0048:                                                                        //ldnull
	IL_0049:            A_0->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x126::M_x1(System::Object^)
	IL_004e:            goto IL_0050;                                               //leave.s				IL_0050
	                    ;}
	IL_0050:            goto IL_0053;                                               //br.s				IL_0053
	IL_0052:                                                                        //break
	IL_0053:            return;                                                     //ret

}
