#include "global_xref.h"

inline Root::T_x172::T_x172(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Int32>^ Temp_0 = nullptr;
	array<System::Int32>^ Temp_1 = nullptr;
	array<Root::T_x171^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Byte Temp_4 = 0;
	System::Byte Temp_5 = 0;
	System::Byte Temp_6 = 0;
	System::Byte Temp_7 = 0;
	System::UInt64 Temp_8 = 0;
	System::UInt64 Temp_9 = 0;
	System::Int16 Temp_10 = 0;
	array<System::Int32>^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Int16 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	System::Int32 Temp_18 = 0;
	System::Int32 Temp_19 = 0;
	System::Int32 Temp_20 = 0;
	System::Int32 Temp_21 = 0;
	System::Int32 Temp_22 = 0;
	System::Int32 Temp_23 = 0;
	System::Int32 Temp_24 = 0;
	System::Int32 Temp_25 = 0;
	System::Int32 Temp_26 = 0;
	System::Int32 Temp_27 = 0;
	System::Int32 Temp_28 = 0;
	System::Int32 Temp_29 = 0;
	System::Int32 Temp_30 = 0;
	System::Int32 Temp_31 = 0;
	System::Int32 Temp_32 = 0;
	System::Int32 Temp_33 = 0;
	System::Int32 Temp_34 = 0;
	System::Int32 Temp_35 = 0;
	System::Int32 Temp_36 = 0;
	System::Int32 Temp_37 = 0;
	System::Int32 Temp_38 = 0;
	System::Int32 Temp_39 = 0;
	System::Int32 Temp_40 = 0;
	System::Int32 Temp_41 = 0;
	System::Int32 Temp_42 = 0;
	System::Int32 Temp_43 = 0;
	System::Int32 Temp_44 = 0;
	System::Int32 Temp_45 = 0;
	System::Int32 Temp_46 = 0;
	System::Int32 Temp_47 = 0;
	System::Int32 Temp_48 = 0;
	System::Int32 Temp_49 = 0;
	System::Int32 Temp_50 = 0;
	System::Int32 Temp_51 = 0;
	System::Int32 Temp_52 = 0;
	System::Int32 Temp_53 = 0;
	System::Int32 Temp_54 = 0;
	System::Int32 Temp_55 = 0;
	System::Int32 Temp_56 = 0;
	System::Int32 Temp_57 = 0;
	System::Int32 Temp_58 = 0;
	System::Int32 Temp_59 = 0;
	System::Int32 Temp_60 = 0;
	System::Int32 Temp_61 = 0;
	System::Int32 Temp_62 = 0;
	System::Int32 Temp_63 = 0;
	System::Int32 Temp_64 = 0;
	System::Int32 Temp_65 = 0;
	System::Int32 Temp_66 = 0;
	System::Int32 Temp_67 = 0;
	System::Int32 Temp_68 = 0;
	System::Int32 Temp_69 = 0;
	System::Int32 Temp_70 = 0;
	System::Int32 Temp_71 = 0;
	System::Int32 Temp_72 = 0;
	System::Int32 Temp_73 = 0;
	System::Int32 Temp_74 = 0;
	System::Int32 Temp_75 = 0;
	System::Int32 Temp_76 = 0;
	System::Int32 Temp_77 = 0;
	System::Int32 Temp_78 = 0;
	System::Int32 Temp_79 = 0;
	System::Int32 Temp_80 = 0;
	System::Int32 Temp_81 = 0;
	System::Int32 Temp_82 = 0;
	System::Int32 Temp_83 = 0;
	System::Int32 Temp_84 = 0;
	System::Int32 Temp_85 = 0;
	System::Int32 Temp_86 = 0;
	System::Int32 Temp_87 = 0;
	System::Int32 Temp_88 = 0;
	System::Int32 Temp_89 = 0;
	System::Int32 Temp_90 = 0;
	System::Int32 Temp_91 = 0;
	System::Int32 Temp_92 = 0;
	System::Int32 Temp_93 = 0;
	System::Int32 Temp_94 = 0;
	System::Int32 Temp_95 = 0;
	System::Int32 Temp_96 = 0;
	System::Int16 Temp_97 = 0;
	System::Int16 Temp_98 = 0;
	System::Globalization::CultureInfo^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	array<System::Object^>^ Temp_101 = nullptr;
	System::String^ Temp_102 = nullptr;
	System::Globalization::CultureInfo^ Temp_103 = nullptr;
	System::String^ Temp_104 = nullptr;
	System::String^ Temp_105 = nullptr;
	System::InvalidOperationException^ Temp_106 = nullptr;
	Root::T_x172^ Temp_107 = nullptr;
	Root::T_x172^ Temp_108 = nullptr;
	System::Int32 Temp_109 = 0;
	Root::T_x172^ Temp_110 = nullptr;
	Root::T_x172^ Temp_111 = nullptr;
	Root::T_x172^ Temp_112 = nullptr;
	System::Int32 Temp_113 = 0;
	Root::T_x172^ Temp_114 = nullptr;
	Root::T_x172^ Temp_115 = nullptr;
	Root::T_x172^ Temp_116 = nullptr;
	System::Int32 Temp_117 = 0;
	Root::T_x172^ Temp_118 = nullptr;
	System::Int32 Temp_119 = 0;
	array<System::Int32>^ Temp_120 = nullptr;
	System::Int32 Temp_121 = 0;
	array<System::Int32>^ Temp_122 = nullptr;
	System::Int32 Temp_123 = 0;
	System::Int32 Temp_124 = 0;
	array<System::Int32>^ Temp_125 = nullptr;
	//local variables.
	System::Byte V_0 = 0;
	System::UInt64 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	array<System::Object^>^ V_4 = nullptr;
	System::Int16 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_6=3;                                                      //stloc				V_6
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldc.i4.s				64
	IL_000c:            Temp_0=gcnew array<System::Int32>(64);                      //newarr				System::Int32
	IL_0011:            this->F_x13=Temp_0;                                         //stfld				array<System::Int32>^ Root::T_x172 F_x13
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4.s				96
	IL_0019:            Temp_1=gcnew array<System::Int32>(96);                      //newarr				System::Int32
	IL_001e:            this->F_x8=Temp_1;                                          //stfld				array<System::Int32>^ Root::T_x172 F_x8
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldc.i4.s				64
	IL_0026:            Temp_2=gcnew array<Root::T_x171^>(64);                      //newarr				Root::T_x171
	IL_002b:            this->F_x5=Temp_2;                                          //stfld				array<Root::T_x171^>^ Root::T_x172 F_x5
	IL_0030:                                                                        //ldarg.0
	IL_0031:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_3=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_003c:                                                                        //pop
	IL_003d:                                                                        //ldarg.0
	IL_003e:                                                                        //ldarg.1
	IL_003f:            Temp_4=A_0->ReadByte();                                     //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_0044:                                                                        //ldc.i4.8
	IL_0045:                                                                        //shl
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_5=A_0->ReadByte();                                     //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_004c:                                                                        //or
	IL_004d:                                                                        //conv.i2
	IL_004e:            this->F_x9=safe_cast<System::Int16>(((Temp_4 << 8) | Temp_5));//stfld				System::Int16 Root::T_x172 F_x9
	IL_0053:                                                                        //ldarg.1
	IL_0054:            Temp_6=A_0->ReadByte();                                     //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_0059:            V_0=Temp_6;                                                 //stloc.0
	IL_005a:                                                                        //ldarg.1
	IL_005b:            Temp_7=A_0->ReadByte();                                     //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_0060:                                                                        //pop
	IL_0061:                                                                        //ldarg.1
	IL_0062:            Temp_8=A_0->ReadUInt64();                                   //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_0067:            V_1=Temp_8;                                                 //stloc.1
	IL_0068:                                                                        //ldarg.1
	IL_0069:            Temp_9=A_0->ReadUInt64();                                   //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_006e:                                                                        //pop
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_10=this->M_x1();                                       //call				System::Int16 Root::T_x172::M_x1()
	IL_0075:                                                                        //ldc.i4				0x100
	IL_007a:            if(Temp_10==256)goto IL_00e6;                               //beq.s				IL_00e6
	IL_007c:            goto IL_007e;                                               //br.s				IL_007e
	IL_007e:                                                                        //ldarg.0
	IL_007f:            Temp_97=this->M_x1();                                       //call				System::Int16 Root::T_x172::M_x1()
	IL_0084:                                                                        //ldc.i4				0x101
	IL_0089:            if(Temp_97==257)goto IL_00e6;                               //beq.s				IL_00e6
	IL_008b:            goto IL_008d;                                               //br.s				IL_008d
	IL_008d:                                                                        //ldarg.0
	IL_008e:            Temp_98=this->M_x1();                                       //call				System::Int16 Root::T_x172::M_x1()
	IL_0093:                                                                        //ldc.i4				0x200
	IL_0098:            if(Temp_98==512)goto IL_00e6;                               //beq.s				IL_00e6
	IL_009a:            goto IL_009c;                                               //br.s				IL_009c
	IL_009c:            Temp_99=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a1:                                                                        //ldstr				L"\x6820\x4D22\x5324\x4626\x4528\x422A\x492C\x0F2E\x5C30\x5632\x4134\x5636\x1438\x5F3A\x5C3C\x4B3E\x2040\x6342\x3144\x2646\x2B48\x274A\x284C\x6F4E\x3950\x3652\x3454\x3356\x3C58\x295A\x7D5C\x295E\x0460\x1162\x1664\x0E66\x0668\x056A\x4D6C\x146E\x4170\x0E72\x5B74"
	IL_00a6:                                                                        //ldloc				V_6
	IL_00aa:            Temp_100=a(L"\x6820\x4D22\x5324\x4626\x4528\x422A\x492C\x0F2E\x5C30\x5632\x4134\x5636\x1438\x5F3A\x5C3C\x4B3E\x2040\x6342\x3144\x2646\x2B48\x274A\x284C\x6F4E\x3950\x3652\x3454\x3356\x3C58\x295A\x7D5C\x295E\x0460\x1162\x1664\x0E66\x0668\x056A\x4D6C\x146E\x4170\x0E72\x5B74",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00af:                                                                        //ldc.i4.1
	IL_00b0:            Temp_101=gcnew array<System::Object^>(1);                   //newarr				System::Object
	IL_00b5:            V_4=Temp_101;                                               //stloc.s				V_4
	IL_00b7:                                                                        //ldloc.s				V_4
	IL_00b9:                                                                        //ldc.i4.0
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:                                                                        //ldflda				System::Int16 Root::T_x172 F_x9
	IL_00c0:                                                                        //ldstr				L"\x5920\x1722"
	IL_00c5:                                                                        //ldloc				V_6
	IL_00c9:            Temp_102=a(L"\x5920\x1722",V_6);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ce:            Temp_103=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00d3:            Temp_104=this->F_x9.ToString(Temp_102,safe_cast<System::IFormatProvider^>(Temp_103));//call				System::String^ System::Int16::ToString(System::String^,System::IFormatProvider^)
	IL_00d8:            V_4[0]=safe_cast<System::Object^>(Temp_104);                //stelem.ref
	IL_00d9:                                                                        //ldloc.s				V_4
	IL_00db:            Temp_105=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_99),Temp_100,V_4);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00e0:            Temp_106=gcnew System::InvalidOperationException(Temp_105); //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_00e5:            throw Temp_106;                                             //throw
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:                                                                        //ldc.i4.1
	IL_00e9:                                                                        //and
	IL_00ea:            Temp_108=this;if((V_0 & 1)==0)goto IL_00f1;                 //brfalse.s				IL_00f1
	IL_00ec:            goto IL_00ee;                                               //br.s				IL_00ee
	IL_00ee:                                                                        //ldc.i4.4
	IL_00ef:            Temp_110=Temp_108;Temp_109=4;goto IL_00f4;                  //br.s				IL_00f4
	IL_00f1:                                                                        //ldc.i4.2
	IL_00f2:            Temp_110=Temp_108;Temp_109=2;goto IL_00f4;                  //br.s				IL_00f4
	IL_00f4:            Temp_110->F_x1=Temp_109;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::Int32 Root::T_x172 F_x1
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:                                                                        //ldloc.0
	IL_00fb:                                                                        //ldc.i4.2
	IL_00fc:                                                                        //and
	IL_00fd:            Temp_112=this;if((V_0 & 2)==0)goto IL_0104;                 //brfalse.s				IL_0104
	IL_00ff:            goto IL_0101;                                               //br.s				IL_0101
	IL_0101:                                                                        //ldc.i4.4
	IL_0102:            Temp_114=Temp_112;Temp_113=4;goto IL_0107;                  //br.s				IL_0107
	IL_0104:                                                                        //ldc.i4.2
	IL_0105:            Temp_114=Temp_112;Temp_113=2;goto IL_0107;                  //br.s				IL_0107
	IL_0107:            Temp_114->F_x12=Temp_113;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::Int32 Root::T_x172 F_x12
	IL_010c:                                                                        //ldarg.0
	IL_010d:                                                                        //ldloc.0
	IL_010e:                                                                        //ldc.i4.4
	IL_010f:                                                                        //and
	IL_0110:            Temp_116=this;if((V_0 & 4)==0)goto IL_0117;                 //brfalse.s				IL_0117
	IL_0112:            goto IL_0114;                                               //br.s				IL_0114
	IL_0114:                                                                        //ldc.i4.4
	IL_0115:            Temp_118=Temp_116;Temp_117=4;goto IL_011a;                  //br.s				IL_011a
	IL_0117:                                                                        //ldc.i4.2
	IL_0118:            Temp_118=Temp_116;Temp_117=2;goto IL_011a;                  //br.s				IL_011a
	IL_011a:            Temp_118->F_x2=Temp_117;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::Int32 Root::T_x172 F_x2
	IL_011f:                                                                        //ldc.i4.0
	IL_0120:            V_2=0;                                                      //stloc.2
	IL_0121:            goto IL_014b;                                               //br.s				IL_014b
	IL_0123:                                                                        //ldarg.0
	IL_0124:            Temp_11=this->F_x13;                                        //ldfld				array<System::Int32>^ Root::T_x172 F_x13
	IL_0129:                                                                        //ldloc.2
	IL_012a:                                                                        //ldloc.1
	IL_012b:                                                                        //ldloc.2
	IL_012c:                                                                        //ldc.i4.s				63
	IL_012e:                                                                        //and
	IL_012f:                                                                        //shr.un
	IL_0130:                                                                        //ldc.i4.1
	IL_0131:                                                                        //conv.i8
	IL_0132:                                                                        //and
	IL_0133:                                                                        //ldc.i4.0
	IL_0134:                                                                        //conv.i8
	IL_0135:            Temp_122=Temp_11;Temp_121=V_2;if(((V_1 >> (V_2 & 63)) & 1)!=0)goto IL_013c;//bne.un.s				IL_013c
	IL_0137:            goto IL_0139;                                               //br.s				IL_0139
	IL_0139:                                                                        //ldc.i4.0
	IL_013a:            Temp_125=Temp_122;Temp_124=Temp_121;Temp_123=0;goto IL_0144;//br.s				IL_0144
	IL_013c:                                                                        //ldarg.1
	IL_013d:            Temp_12=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0142:            Temp_125=Temp_122;Temp_124=Temp_121;Temp_123=Temp_12;goto IL_0144;//br.s				IL_0144
	IL_0144:            Temp_125[Temp_124]=Temp_123;/*warning ! semantic stack doesn't empty at joint !;*///stelem.i4
	IL_0145:                                                                        //ldloc.2
	IL_0146:                                                                        //ldc.i4.1
	IL_0147:                                                                        //add
	IL_0148:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0149:            goto IL_014b;                                               //br.s				IL_014b
	IL_014b:                                                                        //ldloc.2
	IL_014c:                                                                        //ldc.i4.s				64
	IL_014e:            if(V_2<64)goto IL_0123;                                     //blt.s				IL_0123
	IL_0150:            goto IL_0152;                                               //br.s				IL_0152
	IL_0152:                                                                        //ldc.i4.0
	IL_0153:            V_3=0;                                                      //stloc.3
	IL_0154:                                                                        //ldarg.0
	IL_0155:            Temp_13=this->M_x1();                                       //call				System::Int16 Root::T_x172::M_x1()
	IL_015a:            V_5=Temp_13;                                                //stloc.s				V_5
	IL_015c:                                                                        //ldloc.s				V_5
	IL_015e:                                                                        //ldc.i4				0x100
	IL_0163:                                                                        //sub
	IL_0164:            switch((V_5 - 256)){case 0:goto IL_0180;case 1:goto IL_0184;};//switch				(IL_0180,IL_0184)
	IL_0171:            goto IL_0173;                                               //br.s				IL_0173
	IL_0173:                                                                        //ldloc.s				V_5
	IL_0175:                                                                        //ldc.i4				0x200
	IL_017a:            if(V_5==512)goto IL_0188;                                   //beq.s				IL_0188
	IL_017c:            goto IL_017e;                                               //br.s				IL_017e
	IL_017e:            goto IL_018c;                                               //br.s				IL_018c
	IL_0180:                                                                        //ldc.i4.4
	IL_0181:            V_3=4;                                                      //stloc.3
	IL_0182:            goto IL_018c;                                               //br.s				IL_018c
	IL_0184:                                                                        //ldc.i4.2
	IL_0185:            V_3=2;                                                      //stloc.3
	IL_0186:            goto IL_018c;                                               //br.s				IL_018c
	IL_0188:                                                                        //ldc.i4.0
	IL_0189:            V_3=0;                                                      //stloc.3
	IL_018a:            goto IL_018c;                                               //br.s				IL_018c
	IL_018c:                                                                        //ldarg.0
	IL_018d:                                                                        //ldc.i4.0
	IL_018e:                                                                        //ldarg.1
	IL_018f:                                                                        //ldc.i4.2
	IL_0190:                                                                        //ldarg.0
	IL_0191:            Temp_14=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0196:                                                                        //add
	IL_0197:                                                                        //ldarg.0
	IL_0198:            Temp_15=this->M_x13();                                      //call				System::Int32 Root::T_x172::M_x13()
	IL_019d:                                                                        //add
	IL_019e:                                                                        //ldarg.0
	IL_019f:            Temp_16=this->M_x13();                                      //call				System::Int32 Root::T_x172::M_x13()
	IL_01a4:                                                                        //add
	IL_01a5:                                                                        //ldarg.0
	IL_01a6:            Temp_17=this->M_x13();                                      //call				System::Int32 Root::T_x172::M_x13()
	IL_01ab:                                                                        //add
	IL_01ac:            this->M_x1(safe_cast<System::Int32>(0),A_0,((((2 + Temp_14) + Temp_15) + Temp_16) + Temp_17));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_01b1:                                                                        //ldarg.0
	IL_01b2:                                                                        //ldc.i4.1
	IL_01b3:                                                                        //ldarg.1
	IL_01b4:                                                                        //ldarg.0
	IL_01b5:                                                                        //ldc.i4.s				68
	IL_01b7:            Temp_18=this->M_x12(safe_cast<System::Int32>(68));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_01bc:                                                                        //ldarg.0
	IL_01bd:            Temp_19=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_01c2:                                                                        //add
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:            Temp_20=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_01c9:                                                                        //add
	IL_01ca:            this->M_x1(safe_cast<System::Int32>(1),A_0,((Temp_18 + Temp_19) + Temp_20));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_01cf:                                                                        //ldarg.0
	IL_01d0:                                                                        //ldc.i4.2
	IL_01d1:                                                                        //ldarg.1
	IL_01d2:                                                                        //ldc.i4.4
	IL_01d3:                                                                        //ldarg.0
	IL_01d4:            Temp_21=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_01d9:                                                                        //add
	IL_01da:                                                                        //ldarg.0
	IL_01db:            Temp_22=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_01e0:                                                                        //add
	IL_01e1:                                                                        //ldarg.0
	IL_01e2:                                                                        //ldc.i4.s				64
	IL_01e4:            Temp_23=this->M_x12(safe_cast<System::Int32>(64));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_01e9:                                                                        //add
	IL_01ea:                                                                        //ldarg.0
	IL_01eb:                                                                        //ldc.i4.4
	IL_01ec:            Temp_24=this->M_x2(safe_cast<System::Int32>(4));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_01f1:                                                                        //add
	IL_01f2:                                                                        //ldarg.0
	IL_01f3:                                                                        //ldc.i4.6
	IL_01f4:            Temp_25=this->M_x2(safe_cast<System::Int32>(6));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_01f9:                                                                        //add
	IL_01fa:            this->M_x1(safe_cast<System::Int32>(2),A_0,(((((4 + Temp_21) + Temp_22) + Temp_23) + Temp_24) + Temp_25));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_01ff:                                                                        //ldarg.0
	IL_0200:                                                                        //ldc.i4.3
	IL_0201:                                                                        //ldarg.1
	IL_0202:                                                                        //ldarg.0
	IL_0203:                                                                        //ldc.i4.4
	IL_0204:            Temp_26=this->M_x2(safe_cast<System::Int32>(4));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0209:            this->M_x1(safe_cast<System::Int32>(3),A_0,Temp_26);        //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_020e:                                                                        //ldarg.0
	IL_020f:                                                                        //ldc.i4.4
	IL_0210:                                                                        //ldarg.1
	IL_0211:                                                                        //ldc.i4.2
	IL_0212:                                                                        //ldarg.0
	IL_0213:            Temp_27=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0218:                                                                        //add
	IL_0219:                                                                        //ldarg.0
	IL_021a:            Temp_28=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_021f:                                                                        //add
	IL_0220:            this->M_x1(safe_cast<System::Int32>(4),A_0,((2 + Temp_27) + Temp_28));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0225:                                                                        //ldarg.0
	IL_0226:                                                                        //ldc.i4.5
	IL_0227:                                                                        //ldarg.1
	IL_0228:                                                                        //ldarg.0
	IL_0229:                                                                        //ldc.i4.6
	IL_022a:            Temp_29=this->M_x2(safe_cast<System::Int32>(6));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_022f:            this->M_x1(safe_cast<System::Int32>(5),A_0,Temp_29);        //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0234:                                                                        //ldarg.0
	IL_0235:                                                                        //ldc.i4.6
	IL_0236:                                                                        //ldarg.1
	IL_0237:                                                                        //ldc.i4.8
	IL_0238:                                                                        //ldarg.0
	IL_0239:            Temp_30=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_023e:                                                                        //add
	IL_023f:                                                                        //ldarg.0
	IL_0240:            Temp_31=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_0245:                                                                        //add
	IL_0246:                                                                        //ldarg.0
	IL_0247:                                                                        //ldc.i4.8
	IL_0248:            Temp_32=this->M_x2(safe_cast<System::Int32>(8));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_024d:                                                                        //add
	IL_024e:            this->M_x1(safe_cast<System::Int32>(6),A_0,(((8 + Temp_30) + Temp_31) + Temp_32));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0253:                                                                        //ldarg.0
	IL_0254:                                                                        //ldc.i4.7
	IL_0255:                                                                        //ldarg.1
	IL_0256:                                                                        //ldarg.0
	IL_0257:                                                                        //ldc.i4.8
	IL_0258:            Temp_33=this->M_x2(safe_cast<System::Int32>(8));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_025d:            this->M_x1(safe_cast<System::Int32>(7),A_0,Temp_33);        //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0262:                                                                        //ldarg.0
	IL_0263:                                                                        //ldc.i4.8
	IL_0264:                                                                        //ldarg.1
	IL_0265:                                                                        //ldc.i4.4
	IL_0266:                                                                        //ldarg.0
	IL_0267:            Temp_34=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_026c:                                                                        //add
	IL_026d:            this->M_x1(safe_cast<System::Int32>(8),A_0,(4 + Temp_34));  //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0272:                                                                        //ldarg.0
	IL_0273:                                                                        //ldc.i4.s				9
	IL_0275:                                                                        //ldarg.1
	IL_0276:                                                                        //ldarg.0
	IL_0277:                                                                        //ldc.i4.2
	IL_0278:            Temp_35=this->M_x2(safe_cast<System::Int32>(2));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_027d:                                                                        //ldarg.0
	IL_027e:                                                                        //ldc.i4.s				64
	IL_0280:            Temp_36=this->M_x12(safe_cast<System::Int32>(64));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0285:                                                                        //add
	IL_0286:            this->M_x1(safe_cast<System::Int32>(9),A_0,(Temp_35 + Temp_36));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_028b:                                                                        //ldarg.0
	IL_028c:                                                                        //ldc.i4.s				10
	IL_028e:                                                                        //ldarg.1
	IL_028f:                                                                        //ldarg.0
	IL_0290:                                                                        //ldc.i4.s				71
	IL_0292:            Temp_37=this->M_x12(safe_cast<System::Int32>(71));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0297:                                                                        //ldarg.0
	IL_0298:            Temp_38=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_029d:                                                                        //add
	IL_029e:                                                                        //ldarg.0
	IL_029f:            Temp_39=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_02a4:                                                                        //add
	IL_02a5:            this->M_x1(safe_cast<System::Int32>(10),A_0,((Temp_37 + Temp_38) + Temp_39));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_02aa:                                                                        //ldarg.0
	IL_02ab:                                                                        //ldc.i4.s				11
	IL_02ad:                                                                        //ldarg.1
	IL_02ae:                                                                        //ldc.i4.2
	IL_02af:                                                                        //ldarg.0
	IL_02b0:                                                                        //ldc.i4.s				65
	IL_02b2:            Temp_40=this->M_x12(safe_cast<System::Int32>(65));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_02b7:                                                                        //add
	IL_02b8:                                                                        //ldarg.0
	IL_02b9:            Temp_41=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_02be:                                                                        //add
	IL_02bf:            this->M_x1(safe_cast<System::Int32>(11),A_0,((2 + Temp_40) + Temp_41));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_02c4:                                                                        //ldarg.0
	IL_02c5:                                                                        //ldc.i4.s				12
	IL_02c7:                                                                        //ldarg.1
	IL_02c8:                                                                        //ldarg.0
	IL_02c9:                                                                        //ldc.i4.s				81
	IL_02cb:            Temp_42=this->M_x12(safe_cast<System::Int32>(81));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_02d0:                                                                        //ldarg.0
	IL_02d1:                                                                        //ldc.i4.s				66
	IL_02d3:            Temp_43=this->M_x12(safe_cast<System::Int32>(66));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_02d8:                                                                        //add
	IL_02d9:                                                                        //ldarg.0
	IL_02da:            Temp_44=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_02df:                                                                        //add
	IL_02e0:            this->M_x1(safe_cast<System::Int32>(12),A_0,((Temp_42 + Temp_43) + Temp_44));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_02e5:                                                                        //ldarg.0
	IL_02e6:                                                                        //ldc.i4.s				13
	IL_02e8:                                                                        //ldarg.1
	IL_02e9:                                                                        //ldarg.0
	IL_02ea:                                                                        //ldc.i4.s				69
	IL_02ec:            Temp_45=this->M_x12(safe_cast<System::Int32>(69));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_02f1:                                                                        //ldarg.0
	IL_02f2:            Temp_46=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_02f7:                                                                        //add
	IL_02f8:            this->M_x1(safe_cast<System::Int32>(13),A_0,(Temp_45 + Temp_46));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_02fd:                                                                        //ldarg.0
	IL_02fe:                                                                        //ldc.i4.s				14
	IL_0300:                                                                        //ldarg.1
	IL_0301:                                                                        //ldc.i4.2
	IL_0302:                                                                        //ldarg.0
	IL_0303:                                                                        //ldc.i4.s				70
	IL_0305:            Temp_47=this->M_x12(safe_cast<System::Int32>(70));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_030a:                                                                        //add
	IL_030b:                                                                        //ldarg.0
	IL_030c:            Temp_48=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_0311:                                                                        //add
	IL_0312:            this->M_x1(safe_cast<System::Int32>(14),A_0,((2 + Temp_47) + Temp_48));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0317:                                                                        //ldarg.0
	IL_0318:                                                                        //ldc.i4.s				15
	IL_031a:                                                                        //ldarg.1
	IL_031b:                                                                        //ldc.i4.6
	IL_031c:                                                                        //ldarg.0
	IL_031d:                                                                        //ldc.i4.2
	IL_031e:            Temp_49=this->M_x2(safe_cast<System::Int32>(2));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0323:                                                                        //add
	IL_0324:            this->M_x1(safe_cast<System::Int32>(15),A_0,(6 + Temp_49)); //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0329:                                                                        //ldarg.0
	IL_032a:                                                                        //ldc.i4.s				16
	IL_032c:                                                                        //ldarg.1
	IL_032d:                                                                        //ldc.i4.4
	IL_032e:                                                                        //ldarg.0
	IL_032f:                                                                        //ldc.i4.4
	IL_0330:            Temp_50=this->M_x2(safe_cast<System::Int32>(4));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0335:                                                                        //add
	IL_0336:            this->M_x1(safe_cast<System::Int32>(16),A_0,(4 + Temp_50)); //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_033b:                                                                        //ldarg.0
	IL_033c:                                                                        //ldc.i4.s				17
	IL_033e:                                                                        //ldarg.1
	IL_033f:                                                                        //ldarg.0
	IL_0340:            Temp_51=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_0345:            this->M_x1(safe_cast<System::Int32>(17),A_0,Temp_51);       //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_034a:                                                                        //ldarg.0
	IL_034b:                                                                        //ldc.i4.s				18
	IL_034d:                                                                        //ldarg.1
	IL_034e:                                                                        //ldarg.0
	IL_034f:                                                                        //ldc.i4.2
	IL_0350:            Temp_52=this->M_x2(safe_cast<System::Int32>(2));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0355:                                                                        //ldarg.0
	IL_0356:                                                                        //ldc.i4.s				20
	IL_0358:            Temp_53=this->M_x2(safe_cast<System::Int32>(20));           //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_035d:                                                                        //add
	IL_035e:            this->M_x1(safe_cast<System::Int32>(18),A_0,(Temp_52 + Temp_53));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0363:                                                                        //ldarg.0
	IL_0364:                                                                        //ldc.i4.s				19
	IL_0366:                                                                        //ldarg.1
	IL_0367:                                                                        //ldarg.0
	IL_0368:                                                                        //ldc.i4.s				20
	IL_036a:            Temp_54=this->M_x2(safe_cast<System::Int32>(20));           //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_036f:            this->M_x1(safe_cast<System::Int32>(19),A_0,Temp_54);       //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0374:                                                                        //ldarg.0
	IL_0375:                                                                        //ldc.i4.s				20
	IL_0377:                                                                        //ldarg.1
	IL_0378:                                                                        //ldc.i4.2
	IL_0379:                                                                        //ldarg.0
	IL_037a:            Temp_55=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_037f:                                                                        //add
	IL_0380:                                                                        //ldarg.0
	IL_0381:                                                                        //ldc.i4.s				64
	IL_0383:            Temp_56=this->M_x12(safe_cast<System::Int32>(64));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0388:                                                                        //add
	IL_0389:            this->M_x1(safe_cast<System::Int32>(20),A_0,((2 + Temp_55) + Temp_56));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_038e:                                                                        //ldarg.0
	IL_038f:                                                                        //ldc.i4.s				21
	IL_0391:                                                                        //ldarg.1
	IL_0392:                                                                        //ldarg.0
	IL_0393:                                                                        //ldc.i4.2
	IL_0394:            Temp_57=this->M_x2(safe_cast<System::Int32>(2));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0399:                                                                        //ldarg.0
	IL_039a:                                                                        //ldc.i4.s				23
	IL_039c:            Temp_58=this->M_x2(safe_cast<System::Int32>(23));           //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_03a1:                                                                        //add
	IL_03a2:            this->M_x1(safe_cast<System::Int32>(21),A_0,(Temp_57 + Temp_58));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_03a7:                                                                        //ldarg.0
	IL_03a8:                                                                        //ldc.i4.s				22
	IL_03aa:                                                                        //ldarg.1
	IL_03ab:                                                                        //ldarg.0
	IL_03ac:                                                                        //ldc.i4.s				23
	IL_03ae:            Temp_59=this->M_x2(safe_cast<System::Int32>(23));           //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_03b3:            this->M_x1(safe_cast<System::Int32>(22),A_0,Temp_59);       //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_03b8:                                                                        //ldarg.0
	IL_03b9:                                                                        //ldc.i4.s				23
	IL_03bb:                                                                        //ldarg.1
	IL_03bc:                                                                        //ldc.i4.2
	IL_03bd:                                                                        //ldarg.0
	IL_03be:            Temp_60=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_03c3:                                                                        //add
	IL_03c4:                                                                        //ldarg.0
	IL_03c5:            Temp_61=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_03ca:                                                                        //add
	IL_03cb:            this->M_x1(safe_cast<System::Int32>(23),A_0,((2 + Temp_60) + Temp_61));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_03d0:                                                                        //ldarg.0
	IL_03d1:                                                                        //ldc.i4.s				24
	IL_03d3:                                                                        //ldarg.1
	IL_03d4:                                                                        //ldc.i4.2
	IL_03d5:                                                                        //ldarg.0
	IL_03d6:                                                                        //ldc.i4.6
	IL_03d7:            Temp_62=this->M_x2(safe_cast<System::Int32>(6));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_03dc:                                                                        //add
	IL_03dd:                                                                        //ldarg.0
	IL_03de:                                                                        //ldc.i4.s				67
	IL_03e0:            Temp_63=this->M_x12(safe_cast<System::Int32>(67));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_03e5:                                                                        //add
	IL_03e6:            this->M_x1(safe_cast<System::Int32>(24),A_0,((2 + Temp_62) + Temp_63));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_03eb:                                                                        //ldarg.0
	IL_03ec:                                                                        //ldc.i4.s				25
	IL_03ee:                                                                        //ldarg.1
	IL_03ef:                                                                        //ldarg.0
	IL_03f0:                                                                        //ldc.i4.2
	IL_03f1:            Temp_64=this->M_x2(safe_cast<System::Int32>(2));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_03f6:                                                                        //ldarg.0
	IL_03f7:                                                                        //ldc.i4.s				72
	IL_03f9:            Temp_65=this->M_x12(safe_cast<System::Int32>(72));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_03fe:                                                                        //add
	IL_03ff:                                                                        //ldarg.0
	IL_0400:                                                                        //ldc.i4.s				72
	IL_0402:            Temp_66=this->M_x12(safe_cast<System::Int32>(72));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0407:                                                                        //add
	IL_0408:            this->M_x1(safe_cast<System::Int32>(25),A_0,((Temp_64 + Temp_65) + Temp_66));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_040d:                                                                        //ldarg.0
	IL_040e:                                                                        //ldc.i4.s				26
	IL_0410:                                                                        //ldarg.1
	IL_0411:                                                                        //ldarg.0
	IL_0412:            Temp_67=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0417:            this->M_x1(safe_cast<System::Int32>(26),A_0,Temp_67);       //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_041c:                                                                        //ldarg.0
	IL_041d:                                                                        //ldc.i4.s				27
	IL_041f:                                                                        //ldarg.1
	IL_0420:                                                                        //ldarg.0
	IL_0421:            Temp_68=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_0426:            this->M_x1(safe_cast<System::Int32>(27),A_0,Temp_68);       //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_042b:                                                                        //ldarg.0
	IL_042c:                                                                        //ldc.i4.s				28
	IL_042e:                                                                        //ldarg.1
	IL_042f:                                                                        //ldc.i4.2
	IL_0430:                                                                        //ldarg.0
	IL_0431:                                                                        //ldc.i4.s				73
	IL_0433:            Temp_69=this->M_x12(safe_cast<System::Int32>(73));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0438:                                                                        //add
	IL_0439:                                                                        //ldarg.0
	IL_043a:            Temp_70=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_043f:                                                                        //add
	IL_0440:                                                                        //ldarg.0
	IL_0441:                                                                        //ldc.i4.0
	IL_0442:            Temp_71=this->M_x2(safe_cast<System::Int32>(0));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0447:                                                                        //add
	IL_0448:            this->M_x1(safe_cast<System::Int32>(28),A_0,(((2 + Temp_69) + Temp_70) + Temp_71));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_044d:                                                                        //ldarg.0
	IL_044e:                                                                        //ldc.i4.s				29
	IL_0450:                                                                        //ldarg.1
	IL_0451:                                                                        //ldc.i4.4
	IL_0452:                                                                        //ldarg.0
	IL_0453:                                                                        //ldc.i4.4
	IL_0454:            Temp_72=this->M_x2(safe_cast<System::Int32>(4));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0459:                                                                        //add
	IL_045a:            this->M_x1(safe_cast<System::Int32>(29),A_0,(4 + Temp_72)); //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_045f:                                                                        //ldarg.0
	IL_0460:                                                                        //ldc.i4.s				30
	IL_0462:                                                                        //ldarg.1
	IL_0463:                                                                        //ldc.i4.8
	IL_0464:            this->M_x1(safe_cast<System::Int32>(30),A_0,safe_cast<System::Int32>(8));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0469:                                                                        //ldarg.0
	IL_046a:                                                                        //ldc.i4.s				31
	IL_046c:                                                                        //ldarg.1
	IL_046d:                                                                        //ldc.i4.4
	IL_046e:            this->M_x1(safe_cast<System::Int32>(31),A_0,safe_cast<System::Int32>(4));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0473:                                                                        //ldarg.0
	IL_0474:                                                                        //ldc.i4.s				32
	IL_0476:                                                                        //ldarg.1
	IL_0477:                                                                        //ldc.i4.s				16
	IL_0479:                                                                        //ldarg.0
	IL_047a:            Temp_73=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_047f:                                                                        //add
	IL_0480:                                                                        //ldarg.0
	IL_0481:            Temp_74=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0486:                                                                        //add
	IL_0487:                                                                        //ldarg.0
	IL_0488:            Temp_75=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_048d:                                                                        //add
	IL_048e:            this->M_x1(safe_cast<System::Int32>(32),A_0,(((16 + Temp_73) + Temp_74) + Temp_75));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0493:                                                                        //ldarg.0
	IL_0494:                                                                        //ldc.i4.s				33
	IL_0496:                                                                        //ldarg.1
	IL_0497:                                                                        //ldc.i4.4
	IL_0498:            this->M_x1(safe_cast<System::Int32>(33),A_0,safe_cast<System::Int32>(4));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_049d:                                                                        //ldarg.0
	IL_049e:                                                                        //ldc.i4.s				34
	IL_04a0:                                                                        //ldarg.1
	IL_04a1:                                                                        //ldc.i4.s				12
	IL_04a3:            this->M_x1(safe_cast<System::Int32>(34),A_0,safe_cast<System::Int32>(12));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_04a8:                                                                        //ldarg.0
	IL_04a9:                                                                        //ldc.i4.s				35
	IL_04ab:                                                                        //ldarg.1
	IL_04ac:                                                                        //ldc.i4.s				12
	IL_04ae:                                                                        //ldarg.0
	IL_04af:            Temp_76=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_04b4:                                                                        //add
	IL_04b5:                                                                        //ldarg.0
	IL_04b6:            Temp_77=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_04bb:                                                                        //add
	IL_04bc:                                                                        //ldarg.0
	IL_04bd:            Temp_78=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_04c2:                                                                        //add
	IL_04c3:                                                                        //ldarg.0
	IL_04c4:            Temp_79=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_04c9:                                                                        //add
	IL_04ca:            this->M_x1(safe_cast<System::Int32>(35),A_0,((((12 + Temp_76) + Temp_77) + Temp_78) + Temp_79));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_04cf:                                                                        //ldarg.0
	IL_04d0:                                                                        //ldc.i4.s				36
	IL_04d2:                                                                        //ldarg.1
	IL_04d3:                                                                        //ldc.i4.4
	IL_04d4:                                                                        //ldarg.0
	IL_04d5:                                                                        //ldc.i4.s				35
	IL_04d7:            Temp_80=this->M_x2(safe_cast<System::Int32>(35));           //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_04dc:                                                                        //add
	IL_04dd:            this->M_x1(safe_cast<System::Int32>(36),A_0,(4 + Temp_80)); //call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_04e2:                                                                        //ldarg.0
	IL_04e3:                                                                        //ldc.i4.s				37
	IL_04e5:                                                                        //ldarg.1
	IL_04e6:                                                                        //ldc.i4.s				12
	IL_04e8:                                                                        //ldarg.0
	IL_04e9:                                                                        //ldc.i4.s				35
	IL_04eb:            Temp_81=this->M_x2(safe_cast<System::Int32>(35));           //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_04f0:                                                                        //add
	IL_04f1:            this->M_x1(safe_cast<System::Int32>(37),A_0,(12 + Temp_81));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_04f6:                                                                        //ldarg.0
	IL_04f7:                                                                        //ldc.i4.s				38
	IL_04f9:                                                                        //ldarg.1
	IL_04fa:                                                                        //ldc.i4.4
	IL_04fb:                                                                        //ldarg.0
	IL_04fc:            Temp_82=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0501:                                                                        //add
	IL_0502:                                                                        //ldarg.0
	IL_0503:            Temp_83=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_0508:                                                                        //add
	IL_0509:            this->M_x1(safe_cast<System::Int32>(38),A_0,((4 + Temp_82) + Temp_83));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_050e:                                                                        //ldarg.0
	IL_050f:                                                                        //ldc.i4.s				39
	IL_0511:                                                                        //ldarg.1
	IL_0512:                                                                        //ldc.i4.8
	IL_0513:                                                                        //ldarg.0
	IL_0514:            Temp_84=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0519:                                                                        //add
	IL_051a:                                                                        //ldarg.0
	IL_051b:            Temp_85=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0520:                                                                        //add
	IL_0521:                                                                        //ldarg.0
	IL_0522:                                                                        //ldc.i4.s				80
	IL_0524:            Temp_86=this->M_x12(safe_cast<System::Int32>(80));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0529:                                                                        //add
	IL_052a:            this->M_x1(safe_cast<System::Int32>(39),A_0,(((8 + Temp_84) + Temp_85) + Temp_86));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_052f:                                                                        //ldarg.0
	IL_0530:                                                                        //ldc.i4.s				40
	IL_0532:                                                                        //ldarg.1
	IL_0533:                                                                        //ldc.i4.8
	IL_0534:                                                                        //ldarg.0
	IL_0535:            Temp_87=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_053a:                                                                        //add
	IL_053b:                                                                        //ldarg.0
	IL_053c:                                                                        //ldc.i4.s				80
	IL_053e:            Temp_88=this->M_x12(safe_cast<System::Int32>(80));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0543:                                                                        //add
	IL_0544:            this->M_x1(safe_cast<System::Int32>(40),A_0,((8 + Temp_87) + Temp_88));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0549:                                                                        //ldarg.0
	IL_054a:                                                                        //ldc.i4.s				41
	IL_054c:                                                                        //ldarg.1
	IL_054d:                                                                        //ldarg.0
	IL_054e:                                                                        //ldc.i4.2
	IL_054f:            Temp_89=this->M_x2(safe_cast<System::Int32>(2));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_0554:                                                                        //ldarg.0
	IL_0555:                                                                        //ldc.i4.2
	IL_0556:            Temp_90=this->M_x2(safe_cast<System::Int32>(2));            //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_055b:                                                                        //add
	IL_055c:            this->M_x1(safe_cast<System::Int32>(41),A_0,(Temp_89 + Temp_90));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0561:                                                                        //ldarg.0
	IL_0562:                                                                        //ldc.i4.s				42
	IL_0564:                                                                        //ldarg.1
	IL_0565:                                                                        //ldc.i4.4
	IL_0566:                                                                        //ldarg.0
	IL_0567:                                                                        //ldc.i4.s				82
	IL_0569:            Temp_91=this->M_x12(safe_cast<System::Int32>(82));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_056e:                                                                        //add
	IL_056f:                                                                        //ldarg.0
	IL_0570:            Temp_92=this->M_x12();                                      //call				System::Int32 Root::T_x172::M_x12()
	IL_0575:                                                                        //add
	IL_0576:                                                                        //ldloc.3
	IL_0577:                                                                        //add
	IL_0578:            this->M_x1(safe_cast<System::Int32>(42),A_0,(((4 + Temp_91) + Temp_92) + V_3));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_057d:                                                                        //ldarg.0
	IL_057e:                                                                        //ldc.i4.s				43
	IL_0580:                                                                        //ldarg.1
	IL_0581:                                                                        //ldarg.0
	IL_0582:                                                                        //ldc.i4.s				72
	IL_0584:            Temp_93=this->M_x12(safe_cast<System::Int32>(72));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_0589:                                                                        //ldarg.0
	IL_058a:            Temp_94=this->M_x2();                                       //call				System::Int32 Root::T_x172::M_x2()
	IL_058f:                                                                        //add
	IL_0590:            this->M_x1(safe_cast<System::Int32>(43),A_0,(Temp_93 + Temp_94));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_0595:                                                                        //ldarg.0
	IL_0596:                                                                        //ldc.i4.s				44
	IL_0598:                                                                        //ldarg.1
	IL_0599:                                                                        //ldarg.0
	IL_059a:                                                                        //ldc.i4.s				42
	IL_059c:            Temp_95=this->M_x2(safe_cast<System::Int32>(42));           //call				System::Int32 Root::T_x172::M_x2(System::Int32)
	IL_05a1:                                                                        //ldarg.0
	IL_05a2:                                                                        //ldc.i4.s				64
	IL_05a4:            Temp_96=this->M_x12(safe_cast<System::Int32>(64));          //call				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_05a9:                                                                        //add
	IL_05aa:            this->M_x1(safe_cast<System::Int32>(44),A_0,(Temp_95 + Temp_96));//call				void Root::T_x172::M_x1(System::Int32,System::IO::BinaryReader^,System::Int32)
	IL_05af:            return;                                                     //ret

}
inline System::Int16 Root::T_x172::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				System::Int16 Root::T_x172 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x171^ Root::T_x172::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x171^>^ Temp_0 = nullptr;
	//local variables.
	Root::T_x171^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Root::T_x171^>^ Root::T_x172 F_x5
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            V_0=Temp_0[A_0];                                            //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:            V_0->M_x9();                                                //callvirt				void Root::T_x171::M_x9()
	IL_000f:                                                                        //ldloc.0
	IL_0010:            return V_0;                                                 //ret

}
inline void Root::T_x172::M_x1(System::Int32 A_0,System::IO::BinaryReader^ A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x171^>^ Temp_0 = nullptr;
	Root::T_x171^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Root::T_x171^>^ Root::T_x172 F_x5
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.1
	IL_0008:                                                                        //ldarg.0
	IL_0009:                                                                        //ldarg.2
	IL_000a:                                                                        //ldarg.3
	IL_000b:            Temp_1=gcnew Root::T_x171(A_0,this,A_1,A_2);                //newobj				void Root::T_x171::.ctor(System::Int32,Root::T_x172^,System::IO::BinaryReader^,System::Int32)
	IL_0010:            Temp_0[A_0]=Temp_1;                                         //stelem.ref
	IL_0011:            return;                                                     //ret

}
inline System::Int32 Root::T_x172::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x172 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x172::M_x12(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Int32>^ Temp_0 = nullptr;
	array<System::Int32>^ Temp_1 = nullptr;
	array<System::Int32>^ Temp_2 = nullptr;
	array<System::Int32>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	array<System::Int32>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<System::Int32>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	array<System::Int32>^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	array<System::Int32>^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	array<System::Int32>^ Temp_16 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Int32>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_003f;                                               //br.s				IL_003f
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0105;case 1:goto IL_0053;case 2:goto IL_00bf;case 3:goto IL_00a4;case 4:goto IL_0134;case 5:goto IL_00cf;case 6:goto IL_0119;case 7:goto IL_0082;case 8:goto IL_00e4;case 9:goto IL_0169;case 10:goto IL_017f;case 11:goto IL_0147;case 12:goto IL_0064;};//switch				(IL_0105,IL_0053,IL_00bf,IL_00a4,IL_0134,IL_00cf,IL_0119,IL_0082,IL_00e4,IL_0169,IL_017f,IL_0147,IL_0064)
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_0=this->F_x8;                                          //ldfld				array<System::Int32>^ Root::T_x172 F_x8
	IL_0045:                                                                        //ldarg.1
	IL_0046:                                                                        //ldelem.i4
	IL_0047:            V_0=Temp_0[A_0];                                            //stloc.0
	IL_0048:                                                                        //ldc.i4				0x1
	IL_004d:            V_4=1;                                                      //stloc				V_4
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:                                                                        //ldloc.0
	IL_0054:            if(V_0!=0)goto IL_0181;                                     //brtrue				IL_0181
	IL_0059:                                                                        //ldc.i4				0xc
	IL_005e:            V_4=12;                                                     //stloc				V_4
	IL_0062:            /*goto IL_0002;*/goto IL_0064;                              //br.s				IL_0002
	IL_0064:            goto IL_011b;                                               //br				IL_011b
	IL_0069:                                                                        //ldloc.2
	IL_006a:                                                                        //ldloc.1
	IL_006b:            Temp_4=V_1->Length;                                         //ldlen
	IL_006c:                                                                        //conv.i4
	IL_006d:            Temp_5=Root::T_x17::M_x1(Temp_4);                           //call				System::Int32 Root::T_x17::M_x1(System::Int32)
	IL_0072:                                                                        //ldc.i4.s				31
	IL_0074:                                                                        //and
	IL_0075:                                                                        //shl
	IL_0076:            V_2=(V_2 << (Temp_5 & 31));                                 //stloc.2
	IL_0077:                                                                        //ldc.i4				0x7
	IL_007c:            V_4=7;                                                      //stloc				V_4
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:                                                                        //ldarg.0
	IL_0083:            Temp_3=this->F_x8;                                          //ldfld				array<System::Int32>^ Root::T_x172 F_x8
	IL_0088:                                                                        //ldarg.1
	IL_0089:                                                                        //ldloc.2
	IL_008a:                                                                        //ldc.i4				0xffff
	IL_008f:            Temp_11=Temp_3;Temp_10=A_0;if(V_2<=65535)goto IL_00e6;      //ble.s				IL_00e6
	IL_0091:            Temp_13=Temp_11;Temp_12=Temp_10;goto IL_0136;               //br				IL_0136
	IL_0096:                                                                        //ldc.i4				0x3
	IL_009b:            V_4=3;                                                      //stloc				V_4
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:                                                                        //ldloc.2
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:            Temp_2=this->F_x13;                                         //ldfld				array<System::Int32>^ Root::T_x172 F_x13
	IL_00ab:                                                                        //ldloc.1
	IL_00ac:                                                                        //ldloc.3
	IL_00ad:                                                                        //ldelem.i4
	IL_00ae:                                                                        //ldelem.i4
	IL_00af:            if(V_2>=Temp_2[V_1[V_3]])goto IL_0107;                      //bge.s				IL_0107
	IL_00b1:                                                                        //ldc.i4				0x2
	IL_00b6:            V_4=2;                                                      //stloc				V_4
	IL_00ba:            /*goto IL_0002;*/goto IL_00bf;                              //br				IL_0002
	IL_00bf:            goto IL_00ec;                                               //br.s				IL_00ec
	IL_00c1:                                                                        //ldc.i4				0x5
	IL_00c6:            V_4=5;                                                      //stloc				V_4
	IL_00ca:            /*goto IL_0002;*/goto IL_00cf;                              //br				IL_0002
	IL_00cf:                                                                        //ldloc.1
	IL_00d0:                                                                        //ldloc.3
	IL_00d1:                                                                        //ldelem.i4
	IL_00d2:                                                                        //ldc.i4.s				112
	IL_00d4:            if(V_1[V_3]==112)goto IL_0107;                              //beq.s				IL_0107
	IL_00d6:                                                                        //ldc.i4				0x8
	IL_00db:            V_4=8;                                                      //stloc				V_4
	IL_00df:            /*goto IL_0002;*/goto IL_00e4;                              //br				IL_0002
	IL_00e4:            goto IL_0096;                                               //br.s				IL_0096
	IL_00e6:                                                                        //ldc.i4.2
	IL_00e7:            Temp_16=Temp_11;Temp_15=Temp_10;Temp_14=2;goto IL_016e;     //br				IL_016e
	IL_00ec:                                                                        //ldarg.0
	IL_00ed:            Temp_1=this->F_x13;                                         //ldfld				array<System::Int32>^ Root::T_x172 F_x13
	IL_00f2:                                                                        //ldloc.1
	IL_00f3:                                                                        //ldloc.3
	IL_00f4:                                                                        //ldelem.i4
	IL_00f5:                                                                        //ldelem.i4
	IL_00f6:            V_2=Temp_1[V_1[V_3]];                                       //stloc.2
	IL_00f7:                                                                        //ldc.i4				0x0
	IL_00fc:            V_4=0;                                                      //stloc				V_4
	IL_0100:            /*goto IL_0002;*/goto IL_0105;                              //br				IL_0002
	IL_0105:            goto IL_0107;                                               //br.s				IL_0107
	IL_0107:                                                                        //ldloc.3
	IL_0108:                                                                        //ldc.i4.1
	IL_0109:                                                                        //add
	IL_010a:            V_3=(V_3 + 1);                                              //stloc.3
	IL_010b:                                                                        //ldc.i4				0x6
	IL_0110:            V_4=6;                                                      //stloc				V_4
	IL_0114:            /*goto IL_0002;*/goto IL_0119;                              //br				IL_0002
	IL_0119:            goto IL_0139;                                               //br.s				IL_0139
	IL_011b:                                                                        //ldarg.1
	IL_011c:            Temp_7=Root::T_x17::M_x2(A_0);                              //call				array<System::Int32>^ Root::T_x17::M_x2(System::Int32)
	IL_0121:            V_1=Temp_7;                                                 //stloc.1
	IL_0122:                                                                        //ldc.i4.0
	IL_0123:            V_2=0;                                                      //stloc.2
	IL_0124:                                                                        //ldc.i4.0
	IL_0125:            V_3=0;                                                      //stloc.3
	IL_0126:                                                                        //ldc.i4				0x4
	IL_012b:            V_4=4;                                                      //stloc				V_4
	IL_012f:            /*goto IL_0002;*/goto IL_0134;                              //br				IL_0002
	IL_0134:            goto IL_0139;                                               //br.s				IL_0139
	IL_0136:                                                                        //ldc.i4.4
	IL_0137:            Temp_16=Temp_13;Temp_15=Temp_12;Temp_14=4;goto IL_016e;     //br.s				IL_016e
	IL_0139:                                                                        //ldc.i4				0xb
	IL_013e:            V_4=11;                                                     //stloc				V_4
	IL_0142:            /*goto IL_0002;*/goto IL_0147;                              //br				IL_0002
	IL_0147:                                                                        //ldc.i4.4
	IL_0148:                                                                        //dup
	IL_0149:                                                                        //dup
	IL_014a:                                                                        //ldc.i4.2
	IL_014b:                                                                        //sub
	IL_014c:                                                                        //blt				IL_0148
	IL_0151:                                                                        //pop
	IL_0152:                                                                        //ldloc.3
	IL_0153:                                                                        //ldloc.1
	IL_0154:            Temp_6=V_1->Length;                                         //ldlen
	IL_0155:                                                                        //conv.i4
	IL_0156:            if(V_3<Temp_6)goto IL_00c1;                                 //blt				IL_00c1
	IL_015b:                                                                        //ldc.i4				0x9
	IL_0160:            V_4=9;                                                      //stloc				V_4
	IL_0164:            /*goto IL_0002;*/goto IL_0169;                              //br				IL_0002
	IL_0169:            goto IL_0069;                                               //br				IL_0069
	IL_016e:            /*warning ! semantic stack doesn't empty at joint !;*/      //dup
	IL_016f:                                                                        //stloc.0
	IL_0170:            Temp_16[Temp_15]=Temp_14;                                   //stelem.i4
	IL_0171:                                                                        //ldc.i4				0xa
	IL_0176:            V_4=10;                                                     //stloc				V_4
	IL_017a:            /*goto IL_0002;*/goto IL_017f;                              //br				IL_0002
	IL_017f:            goto IL_0181;                                               //br.s				IL_0181
	IL_0181:                                                                        //ldloc.0
	IL_0182:            return V_0;                                                 //ret

}
inline System::Int32 Root::T_x172::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x172 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x172::M_x13(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x171^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Root::T_x171^>^ Root::T_x172 F_x5
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldnull
	IL_0008:            Temp_0[A_0]=safe_cast<Root::T_x171^>(nullptr);              //stelem.ref
	IL_0009:            return;                                                     //ret

}
inline System::Int32 Root::T_x172::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x172 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x172::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Int32>^ Temp_0 = nullptr;
	array<System::Int32>^ Temp_1 = nullptr;
	array<System::Int32>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0067;case 1:goto IL_0092;case 2:goto IL_00ac;case 3:goto IL_0075;case 4:goto IL_004c;case 5:goto IL_003b;case 6:goto IL_0059;};//switch				(IL_0067,IL_0092,IL_00ac,IL_0075,IL_004c,IL_003b,IL_0059)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_0=this->F_x8;                                          //ldfld				array<System::Int32>^ Root::T_x172 F_x8
	IL_002d:                                                                        //ldarg.1
	IL_002e:                                                                        //ldelem.i4
	IL_002f:            V_0=Temp_0[A_0];                                            //stloc.0
	IL_0030:                                                                        //ldc.i4				0x5
	IL_0035:            V_1=5;                                                      //stloc				V_1
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_003e;                                               //br.s				IL_003e
	IL_003d:                                                                        //break
	IL_003e:                                                                        //ldloc.0
	IL_003f:            if(V_0!=0)goto IL_00ae;                                     //brtrue.s				IL_00ae
	IL_0041:                                                                        //ldc.i4				0x4
	IL_0046:            V_1=4;                                                      //stloc				V_1
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_006a;                                               //br.s				IL_006a
	IL_004e:                                                                        //ldc.i4				0x6
	IL_0053:            V_1=6;                                                      //stloc				V_1
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:                                                                        //ldc.i4.2
	IL_005a:            Temp_3=2;goto IL_0094;                                      //br.s				IL_0094
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_1=0;                                                      //stloc				V_1
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:                                                                        //ldc.i4.4
	IL_0068:            Temp_3=4;goto IL_0094;                                      //br.s				IL_0094
	IL_006a:                                                                        //ldc.i4				0x3
	IL_006f:            V_1=3;                                                      //stloc				V_1
	IL_0073:            /*goto IL_0002;*/goto IL_0075;                              //br.s				IL_0002
	IL_0075:                                                                        //ldarg.0
	IL_0076:            Temp_2=this->F_x13;                                         //ldfld				array<System::Int32>^ Root::T_x172 F_x13
	IL_007b:                                                                        //ldarg.1
	IL_007c:                                                                        //ldelem.i4
	IL_007d:                                                                        //ldc.i4				0xffff
	IL_0082:            if(Temp_2[A_0]<=65535)goto IL_004e;                         //ble.s				IL_004e
	IL_0084:                                                                        //ldc.i4				0x1
	IL_0089:            V_1=1;                                                      //stloc				V_1
	IL_008d:            /*goto IL_0002;*/goto IL_0092;                              //br				IL_0002
	IL_0092:            goto IL_005c;                                               //br.s				IL_005c
	IL_0094:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.0
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_1=this->F_x8;                                          //ldfld				array<System::Int32>^ Root::T_x172 F_x8
	IL_009b:                                                                        //ldarg.1
	IL_009c:                                                                        //ldloc.0
	IL_009d:            Temp_1[A_0]=Temp_3;                                         //stelem.i4
	IL_009e:                                                                        //ldc.i4				0x2
	IL_00a3:            V_1=2;                                                      //stloc				V_1
	IL_00a7:            /*goto IL_0002;*/goto IL_00ac;                              //br				IL_0002
	IL_00ac:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_00ae:                                                                        //ldloc.0
	IL_00af:            return V_0;                                                 //ret

}
inline System::Int32 Root::T_x172::M_x8(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Int32>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				array<System::Int32>^ Root::T_x172 F_x13
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.i4
	IL_0008:            return Temp_0[A_0];                                         //ret

}
