#include "global_xref.h"

inline Root::T_x113::T_x113()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline array<System::Byte>^ Root::T_x113::M_x1(array<System::Byte>^ A_0,System::Int32 A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Boolean Temp_4 = false;
	System::String^ Temp_5 = nullptr;
	System::Globalization::CultureInfo^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Char Temp_10 = (System::Char)0;
	System::Int32 Temp_11 = 0;
	System::Char Temp_12 = (System::Char)0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Char V_3 = (System::Char)0;
	array<System::Byte>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Byte V_7 = 0;
	System::Char V_8 = (System::Char)0;
	System::String^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_11=1;                                                     //stloc				V_11
	IL_0009:            goto IL_0078;                                               //br.s				IL_0078
	IL_000b:                                                                        //ldloc				V_10
	IL_000f:            switch(V_10){case 0:goto IL_023c;case 1:goto IL_00ce;case 2:goto IL_00e5;case 3:goto IL_0089;case 4:goto IL_00a8;case 5:goto IL_01be;case 6:goto IL_0217;case 7:goto IL_019a;case 8:goto IL_0279;case 9:goto IL_01aa;case 10:goto IL_0253;case 11:goto IL_015a;case 12:goto IL_0146;case 13:goto IL_0184;case 14:goto IL_02f5;case 15:goto IL_0292;case 16:goto IL_02db;case 17:goto IL_01d5;case 18:goto IL_02a5;case 19:goto IL_0266;case 20:goto IL_02b9;case 21:goto IL_022a;case 22:goto IL_0201;case 23:goto IL_01f1;case 24:goto IL_016a;};//switch				(IL_023c,IL_00ce,IL_00e5,IL_0089,IL_00a8,IL_01be,IL_0217,IL_019a,IL_0279,IL_01aa,IL_0253,IL_015a,IL_0146,IL_0184,IL_02f5,IL_0292,IL_02db,IL_01d5,IL_02a5,IL_0266,IL_02b9,IL_022a,IL_0201,IL_01f1,IL_016a)
	IL_0078:                                                                        //ldc.i4.0
	IL_0079:            V_0=0;                                                      //stloc.0
	IL_007a:                                                                        //ldc.i4.0
	IL_007b:            V_1=0;                                                      //stloc.1
	IL_007c:                                                                        //ldc.i4.0
	IL_007d:            V_2=0;                                                      //stloc.2
	IL_007e:                                                                        //ldc.i4				0x3
	IL_0083:            V_10=3;                                                     //stloc				V_10
	IL_0087:            /*goto IL_000b;*/goto IL_0089;                              //br.s				IL_000b
	IL_0089:            goto IL_021c;                                               //br				IL_021c
	IL_008e:                                                                        //ldloc.s				V_4
	IL_0090:            Temp_3=V_5;                                                 //ldloc.s				V_5
	IL_0092:                                                                        //dup
	IL_0093:                                                                        //ldc.i4.1
	IL_0094:                                                                        //add
	IL_0095:            V_5=(Temp_3 + 1);                                           //stloc.s				V_5
	IL_0097:                                                                        //ldloc.s				V_7
	IL_0099:            V_4[Temp_3]=V_7;                                            //stelem.i1
	IL_009a:                                                                        //ldc.i4				0x4
	IL_009f:            V_10=4;                                                     //stloc				V_10
	IL_00a3:            /*goto IL_000b;*/goto IL_00a8;                              //br				IL_000b
	IL_00a8:            goto IL_0186;                                               //br				IL_0186
	IL_00ad:                                                                        //ldarg.2
	IL_00ae:                                                                        //ldloc.1
	IL_00af:                                                                        //ldc.i4.2
	IL_00b0:                                                                        //mul
	IL_00b1:                                                                        //add
	IL_00b2:                                                                        //conv.ovf.u4
	IL_00b3:            Temp_1=gcnew array<System::Byte>(safe_cast<System::UInt32>((A_2 + (V_1 * 2))));//newarr				System::Byte
	IL_00b8:            V_4=Temp_1;                                                 //stloc.s				V_4
	IL_00ba:                                                                        //ldc.i4.0
	IL_00bb:            V_5=0;                                                      //stloc.s				V_5
	IL_00bd:                                                                        //ldc.i4.0
	IL_00be:            V_6=0;                                                      //stloc.s				V_6
	IL_00c0:                                                                        //ldc.i4				0x1
	IL_00c5:            V_10=1;                                                     //stloc				V_10
	IL_00c9:            /*goto IL_000b;*/goto IL_00ce;                              //br				IL_000b
	IL_00ce:            goto IL_01f3;                                               //br				IL_01f3
	IL_00d3:                                                                        //ldloc.1
	IL_00d4:                                                                        //ldc.i4.1
	IL_00d5:                                                                        //add
	IL_00d6:            V_1=(V_1 + 1);                                              //stloc.1
	IL_00d7:                                                                        //ldc.i4				0x2
	IL_00dc:            V_10=2;                                                     //stloc				V_10
	IL_00e0:            /*goto IL_000b;*/goto IL_00e5;                              //br				IL_000b
	IL_00e5:            goto IL_01c3;                                               //br				IL_01c3
	IL_00ea:                                                                        //ldloca.s				V_7
	IL_00ec:                                                                        //ldstr				L"\x471E\x1320"
	IL_00f1:                                                                        //ldloc				V_11
	IL_00f5:            Temp_5=a(L"\x471E\x1320",V_11);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fa:            Temp_6=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00ff:            Temp_7=V_7.ToString(Temp_5,safe_cast<System::IFormatProvider^>(Temp_6));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_0104:            V_9=Temp_7;                                                 //stloc.s				V_9
	IL_0106:                                                                        //ldloc.s				V_4
	IL_0108:            Temp_8=V_5;                                                 //ldloc.s				V_5
	IL_010a:                                                                        //dup
	IL_010b:                                                                        //ldc.i4.1
	IL_010c:                                                                        //add
	IL_010d:            Temp_9=(Temp_8 + 1);                                        //stloc.s				V_5
	IL_010f:                                                                        //ldc.i4.s				37
	IL_0111:            V_4[Temp_8]=37;                                             //stelem.i1
	IL_0112:                                                                        //ldloc.s				V_4
	IL_0114:                                                                        //ldloc.s				V_5
	IL_0116:                                                                        //dup
	IL_0117:                                                                        //ldc.i4.1
	IL_0118:                                                                        //add
	IL_0119:            Temp_11=(Temp_9 + 1);                                       //stloc.s				V_5
	IL_011b:                                                                        //ldloc.s				V_9
	IL_011d:                                                                        //ldc.i4.0
	IL_011e:            Temp_10=V_9[safe_cast<System::Int32>(0)];                   //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_0123:                                                                        //conv.u1
	IL_0124:            V_4[Temp_9]=safe_cast<System::Byte>(Temp_10);               //stelem.i1
	IL_0125:                                                                        //ldloc.s				V_4
	IL_0127:                                                                        //ldloc.s				V_5
	IL_0129:                                                                        //dup
	IL_012a:                                                                        //ldc.i4.1
	IL_012b:                                                                        //add
	IL_012c:            V_5=(Temp_11 + 1);                                          //stloc.s				V_5
	IL_012e:                                                                        //ldloc.s				V_9
	IL_0130:                                                                        //ldc.i4.1
	IL_0131:            Temp_12=V_9[safe_cast<System::Int32>(1)];                   //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_0136:                                                                        //conv.u1
	IL_0137:            V_4[Temp_11]=safe_cast<System::Byte>(Temp_12);              //stelem.i1
	IL_0138:                                                                        //ldc.i4				0xc
	IL_013d:            V_10=12;                                                    //stloc				V_10
	IL_0141:            /*goto IL_000b;*/goto IL_0146;                              //br				IL_000b
	IL_0146:            goto IL_0186;                                               //br.s				IL_0186
	IL_0148:                                                                        //ldloc.0
	IL_0149:                                                                        //ldc.i4.1
	IL_014a:                                                                        //add
	IL_014b:            V_0=(V_0 + 1);                                              //stloc.0
	IL_014c:                                                                        //ldc.i4				0xb
	IL_0151:            V_10=11;                                                    //stloc				V_10
	IL_0155:            /*goto IL_000b;*/goto IL_015a;                              //br				IL_000b
	IL_015a:            goto IL_01c3;                                               //br.s				IL_01c3
	IL_015c:                                                                        //ldc.i4				0x18
	IL_0161:            V_10=24;                                                    //stloc				V_10
	IL_0165:            /*goto IL_000b;*/goto IL_016a;                              //br				IL_000b
	IL_016a:            goto IL_016d;                                               //br.s				IL_016d
	IL_016c:                                                                        //break
	IL_016d:                                                                        //ldloc.s				V_8
	IL_016f:                                                                        //ldc.i4.s				32
	IL_0171:            if(V_8!=(System::Char)32)goto IL_00ea;                      //bne.un				IL_00ea
	IL_0176:                                                                        //ldc.i4				0xd
	IL_017b:            V_10=13;                                                    //stloc				V_10
	IL_017f:            /*goto IL_000b;*/goto IL_0184;                              //br				IL_000b
	IL_0184:            goto IL_01d7;                                               //br.s				IL_01d7
	IL_0186:                                                                        //ldloc.s				V_6
	IL_0188:                                                                        //ldc.i4.1
	IL_0189:                                                                        //add
	IL_018a:            V_6=(V_6 + 1);                                              //stloc.s				V_6
	IL_018c:                                                                        //ldc.i4				0x7
	IL_0191:            V_10=7;                                                     //stloc				V_10
	IL_0195:            /*goto IL_000b;*/goto IL_019a;                              //br				IL_000b
	IL_019a:            goto IL_01f3;                                               //br.s				IL_01f3
	IL_019c:                                                                        //ldc.i4				0x9
	IL_01a1:            V_10=9;                                                     //stloc				V_10
	IL_01a5:            /*goto IL_000b;*/goto IL_01aa;                              //br				IL_000b
	IL_01aa:                                                                        //ldloc.1
	IL_01ab:            if(V_1!=0)goto IL_00ad;                                     //brtrue				IL_00ad
	IL_01b0:                                                                        //ldc.i4				0x5
	IL_01b5:            V_10=5;                                                     //stloc				V_10
	IL_01b9:            /*goto IL_000b;*/goto IL_01be;                              //br				IL_000b
	IL_01be:            goto IL_02be;                                               //br				IL_02be
	IL_01c3:                                                                        //ldloc.2
	IL_01c4:                                                                        //ldc.i4.1
	IL_01c5:                                                                        //add
	IL_01c6:            V_2=(V_2 + 1);                                              //stloc.2
	IL_01c7:                                                                        //ldc.i4				0x11
	IL_01cc:            V_10=17;                                                    //stloc				V_10
	IL_01d0:            /*goto IL_000b;*/goto IL_01d5;                              //br				IL_000b
	IL_01d5:            goto IL_021c;                                               //br.s				IL_021c
	IL_01d7:                                                                        //ldloc.s				V_4
	IL_01d9:            Temp_2=V_5;                                                 //ldloc.s				V_5
	IL_01db:                                                                        //dup
	IL_01dc:                                                                        //ldc.i4.1
	IL_01dd:                                                                        //add
	IL_01de:            V_5=(Temp_2 + 1);                                           //stloc.s				V_5
	IL_01e0:                                                                        //ldc.i4.s				43
	IL_01e2:            V_4[Temp_2]=43;                                             //stelem.i1
	IL_01e3:                                                                        //ldc.i4				0x17
	IL_01e8:            V_10=23;                                                    //stloc				V_10
	IL_01ec:            /*goto IL_000b;*/goto IL_01f1;                              //br				IL_000b
	IL_01f1:            goto IL_0186;                                               //br.s				IL_0186
	IL_01f3:                                                                        //ldc.i4				0x16
	IL_01f8:            V_10=22;                                                    //stloc				V_10
	IL_01fc:            /*goto IL_000b;*/goto IL_0201;                              //br				IL_000b
	IL_0201:                                                                        //ldloc.s				V_6
	IL_0203:                                                                        //ldarg.2
	IL_0204:            if(V_6<A_2)goto IL_02c0;                                    //blt				IL_02c0
	IL_0209:                                                                        //ldc.i4				0x6
	IL_020e:            V_10=6;                                                     //stloc				V_10
	IL_0212:            /*goto IL_000b;*/goto IL_0217;                              //br				IL_000b
	IL_0217:            goto IL_02fa;                                               //br				IL_02fa
	IL_021c:                                                                        //ldc.i4				0x15
	IL_0221:            V_10=21;                                                    //stloc				V_10
	IL_0225:            /*goto IL_000b;*/goto IL_022a;                              //br				IL_000b
	IL_022a:                                                                        //ldloc.2
	IL_022b:                                                                        //ldarg.2
	IL_022c:            if(V_2<A_2)goto IL_023e;                                    //blt.s				IL_023e
	IL_022e:                                                                        //ldc.i4				0x0
	IL_0233:            V_10=0;                                                     //stloc				V_10
	IL_0237:            /*goto IL_000b;*/goto IL_023c;                              //br				IL_000b
	IL_023c:            goto IL_0297;                                               //br.s				IL_0297
	IL_023e:                                                                        //ldarg.0
	IL_023f:                                                                        //ldarg.1
	IL_0240:                                                                        //ldloc.2
	IL_0241:                                                                        //add
	IL_0242:                                                                        //ldelem.u1
	IL_0243:                                                                        //conv.u2
	IL_0244:            V_3=safe_cast<System::Char>(safe_cast<System::UInt16>(A_0[(A_1 + V_2)]));//stloc.3
	IL_0245:                                                                        //ldc.i4				0xa
	IL_024a:            V_10=10;                                                    //stloc				V_10
	IL_024e:            /*goto IL_000b;*/goto IL_0253;                              //br				IL_000b
	IL_0253:                                                                        //ldloc.3
	IL_0254:                                                                        //ldc.i4.s				32
	IL_0256:            if(V_3!=(System::Char)32)goto IL_026b;                      //bne.un.s				IL_026b
	IL_0258:                                                                        //ldc.i4				0x13
	IL_025d:            V_10=19;                                                    //stloc				V_10
	IL_0261:            /*goto IL_000b;*/goto IL_0266;                              //br				IL_000b
	IL_0266:            goto IL_0148;                                               //br				IL_0148
	IL_026b:                                                                        //ldc.i4				0x8
	IL_0270:            V_10=8;                                                     //stloc				V_10
	IL_0274:            /*goto IL_000b;*/goto IL_0279;                              //br				IL_000b
	IL_0279:                                                                        //ldloc.3
	IL_027a:            Temp_0=Root::T_x113::M_x1(V_3);                             //call				System::Boolean Root::T_x113::M_x1(System::Char)
	IL_027f:            if(Temp_0)goto IL_01c3;                                     //brtrue				IL_01c3
	IL_0284:                                                                        //ldc.i4				0xf
	IL_0289:            V_10=15;                                                    //stloc				V_10
	IL_028d:            /*goto IL_000b;*/goto IL_0292;                              //br				IL_000b
	IL_0292:            goto IL_00d3;                                               //br				IL_00d3
	IL_0297:                                                                        //ldc.i4				0x12
	IL_029c:            V_10=18;                                                    //stloc				V_10
	IL_02a0:            /*goto IL_000b;*/goto IL_02a5;                              //br				IL_000b
	IL_02a5:                                                                        //ldloc.0
	IL_02a6:            if(V_0!=0)goto IL_00ad;                                     //brtrue				IL_00ad
	IL_02ab:                                                                        //ldc.i4				0x14
	IL_02b0:            V_10=20;                                                    //stloc				V_10
	IL_02b4:            /*goto IL_000b;*/goto IL_02b9;                              //br				IL_000b
	IL_02b9:            goto IL_019c;                                               //br				IL_019c
	IL_02be:                                                                        //ldarg.0
	IL_02bf:            return A_0;                                                 //ret
	IL_02c0:                                                                        //ldarg.0
	IL_02c1:                                                                        //ldarg.1
	IL_02c2:                                                                        //ldloc.s				V_6
	IL_02c4:                                                                        //add
	IL_02c5:                                                                        //ldelem.u1
	IL_02c6:            V_7=A_0[(A_1 + V_6)];                                       //stloc.s				V_7
	IL_02c8:                                                                        //ldloc.s				V_7
	IL_02ca:                                                                        //conv.u2
	IL_02cb:            V_8=safe_cast<System::Char>(safe_cast<System::UInt16>(V_7));//stloc.s				V_8
	IL_02cd:                                                                        //ldc.i4				0x10
	IL_02d2:            V_10=16;                                                    //stloc				V_10
	IL_02d6:            /*goto IL_000b;*/goto IL_02db;                              //br				IL_000b
	IL_02db:                                                                        //ldloc.s				V_8
	IL_02dd:            Temp_4=Root::T_x113::M_x1(V_8);                             //call				System::Boolean Root::T_x113::M_x1(System::Char)
	IL_02e2:            if(!Temp_4)goto IL_015c;                                    //brfalse				IL_015c
	IL_02e7:                                                                        //ldc.i4				0xe
	IL_02ec:            V_10=14;                                                    //stloc				V_10
	IL_02f0:            /*goto IL_000b;*/goto IL_02f5;                              //br				IL_000b
	IL_02f5:            goto IL_008e;                                               //br				IL_008e
	IL_02fa:                                                                        //ldloc.s				V_4
	IL_02fc:            return V_4;                                                 //ret

}
inline System::Boolean Root::T_x113::M_x1(System::Char A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0086;                                               //br.s				IL_0086
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_01ae;case 1:goto IL_00c5;case 2:goto IL_0297;case 3:goto IL_0249;case 4:goto IL_020a;case 5:goto IL_000b;case 6:goto IL_00d8;case 7:goto IL_0150;case 8:goto IL_026c;case 9:goto IL_0186;case 10:goto IL_019b;case 11:goto IL_0281;case 12:goto IL_0259;case 13:goto IL_0114;case 14:goto IL_0233;case 15:goto IL_0163;case 16:goto IL_01fa;case 17:goto IL_0127;case 18:goto IL_01e4;case 19:goto IL_00ee;case 20:goto IL_00af;case 21:goto IL_0220;case 22:goto IL_01c1;case 23:goto IL_01d4;case 24:goto IL_009c;case 25:goto IL_00fe;case 26:goto IL_013d;case 27:goto IL_0173;};//switch				(IL_01ae,IL_00c5,IL_0297,IL_0249,IL_020a,IL_000b,IL_00d8,IL_0150,IL_026c,IL_0186,IL_019b,IL_0281,IL_0259,IL_0114,IL_0233,IL_0163,IL_01fa,IL_0127,IL_01e4,IL_00ee,IL_00af,IL_0220,IL_01c1,IL_01d4,IL_009c,IL_00fe,IL_013d,IL_0173)
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //ldc.i4.s				97
	IL_0089:            if(A_0<(System::Char)97)goto IL_0142;                       //blt				IL_0142
	IL_008e:                                                                        //ldc.i4				0x18
	IL_0093:            V_0=24;                                                     //stloc				V_0
	IL_0097:            /*goto IL_000d;*/goto IL_009c;                              //br				IL_000d
	IL_009c:            goto IL_024b;                                               //br				IL_024b
	IL_00a1:                                                                        //ldc.i4				0x14
	IL_00a6:            V_0=20;                                                     //stloc				V_0
	IL_00aa:            /*goto IL_000d;*/goto IL_00af;                              //br				IL_000d
	IL_00af:                                                                        //ldarg.0
	IL_00b0:                                                                        //ldc.i4.s				42
	IL_00b2:            if(A_0==(System::Char)42)goto IL_018b;                      //beq				IL_018b
	IL_00b7:                                                                        //ldc.i4				0x1
	IL_00bc:            V_0=1;                                                      //stloc				V_0
	IL_00c0:            /*goto IL_000d;*/goto IL_00c5;                              //br				IL_000d
	IL_00c5:            goto IL_01fc;                                               //br				IL_01fc
	IL_00ca:                                                                        //ldc.i4				0x6
	IL_00cf:            V_0=6;                                                      //stloc				V_0
	IL_00d3:            /*goto IL_000d;*/goto IL_00d8;                              //br				IL_000d
	IL_00d8:                                                                        //ldarg.0
	IL_00d9:                                                                        //ldc.i4.s				46
	IL_00db:            if(A_0==(System::Char)46)goto IL_018b;                      //beq				IL_018b
	IL_00e0:                                                                        //ldc.i4				0x13
	IL_00e5:            V_0=19;                                                     //stloc				V_0
	IL_00e9:            /*goto IL_000d;*/goto IL_00ee;                              //br				IL_000d
	IL_00ee:            goto IL_0165;                                               //br.s				IL_0165
	IL_00f0:                                                                        //ldc.i4				0x19
	IL_00f5:            V_0=25;                                                     //stloc				V_0
	IL_00f9:            /*goto IL_000d;*/goto IL_00fe;                              //br				IL_000d
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:                                                                        //ldc.i4.s				90
	IL_0101:            if(A_0<=(System::Char)90)goto IL_0271;                      //ble				IL_0271
	IL_0106:                                                                        //ldc.i4				0xd
	IL_010b:            V_0=13;                                                     //stloc				V_0
	IL_010f:            /*goto IL_000d;*/goto IL_0114;                              //br				IL_000d
	IL_0114:            goto IL_01b3;                                               //br				IL_01b3
	IL_0119:                                                                        //ldc.i4				0x11
	IL_011e:            V_0=17;                                                     //stloc				V_0
	IL_0122:            /*goto IL_000d;*/goto IL_0127;                              //br				IL_000d
	IL_0127:            goto IL_012a;                                               //br.s				IL_012a
	IL_0129:                                                                        //break
	IL_012a:                                                                        //ldarg.0
	IL_012b:                                                                        //ldc.i4.s				40
	IL_012d:            if(A_0==(System::Char)40)goto IL_018b;                      //beq.s				IL_018b
	IL_012f:                                                                        //ldc.i4				0x1a
	IL_0134:            V_0=26;                                                     //stloc				V_0
	IL_0138:            /*goto IL_000d;*/goto IL_013d;                              //br				IL_000d
	IL_013d:            goto IL_01d6;                                               //br				IL_01d6
	IL_0142:                                                                        //ldc.i4				0x7
	IL_0147:            V_0=7;                                                      //stloc				V_0
	IL_014b:            /*goto IL_000d;*/goto IL_0150;                              //br				IL_000d
	IL_0150:                                                                        //ldarg.0
	IL_0151:                                                                        //ldc.i4.s				65
	IL_0153:            if(A_0<(System::Char)65)goto IL_01b3;                       //blt.s				IL_01b3
	IL_0155:                                                                        //ldc.i4				0xf
	IL_015a:            V_0=15;                                                     //stloc				V_0
	IL_015e:            /*goto IL_000d;*/goto IL_0163;                              //br				IL_000d
	IL_0163:            goto IL_00f0;                                               //br.s				IL_00f0
	IL_0165:                                                                        //ldc.i4				0x1b
	IL_016a:            V_0=27;                                                     //stloc				V_0
	IL_016e:            /*goto IL_000d;*/goto IL_0173;                              //br				IL_000d
	IL_0173:                                                                        //ldarg.0
	IL_0174:                                                                        //ldc.i4.s				33
	IL_0176:            if(A_0==(System::Char)33)goto IL_018b;                      //beq.s				IL_018b
	IL_0178:                                                                        //ldc.i4				0x9
	IL_017d:            V_0=9;                                                      //stloc				V_0
	IL_0181:            /*goto IL_000d;*/goto IL_0186;                              //br				IL_000d
	IL_0186:            goto IL_00a1;                                               //br				IL_00a1
	IL_018b:                                                                        //ldc.i4.1
	IL_018c:            return true;                                                //ret
	IL_018d:                                                                        //ldc.i4				0xa
	IL_0192:            V_0=10;                                                     //stloc				V_0
	IL_0196:            /*goto IL_000d;*/goto IL_019b;                              //br				IL_000d
	IL_019b:                                                                        //ldarg.0
	IL_019c:                                                                        //ldc.i4.s				45
	IL_019e:            if(A_0==(System::Char)45)goto IL_018b;                      //beq.s				IL_018b
	IL_01a0:                                                                        //ldc.i4				0x0
	IL_01a5:            V_0=0;                                                      //stloc				V_0
	IL_01a9:            /*goto IL_000d;*/goto IL_01ae;                              //br				IL_000d
	IL_01ae:            goto IL_0273;                                               //br				IL_0273
	IL_01b3:                                                                        //ldc.i4				0x16
	IL_01b8:            V_0=22;                                                     //stloc				V_0
	IL_01bc:            /*goto IL_000d;*/goto IL_01c1;                              //br				IL_000d
	IL_01c1:                                                                        //ldarg.0
	IL_01c2:                                                                        //ldc.i4.s				48
	IL_01c4:            if(A_0<(System::Char)48)goto IL_018d;                       //blt.s				IL_018d
	IL_01c6:                                                                        //ldc.i4				0x17
	IL_01cb:            V_0=23;                                                     //stloc				V_0
	IL_01cf:            /*goto IL_000d;*/goto IL_01d4;                              //br				IL_000d
	IL_01d4:            goto IL_0225;                                               //br.s				IL_0225
	IL_01d6:                                                                        //ldc.i4				0x12
	IL_01db:            V_0=18;                                                     //stloc				V_0
	IL_01df:            /*goto IL_000d;*/goto IL_01e4;                              //br				IL_000d
	IL_01e4:                                                                        //ldarg.0
	IL_01e5:                                                                        //ldc.i4.s				41
	IL_01e7:            if(A_0!=(System::Char)41)goto IL_029c;                      //bne.un				IL_029c
	IL_01ec:                                                                        //ldc.i4				0x10
	IL_01f1:            V_0=16;                                                     //stloc				V_0
	IL_01f5:            /*goto IL_000d;*/goto IL_01fa;                              //br				IL_000d
	IL_01fa:            goto IL_018b;                                               //br.s				IL_018b
	IL_01fc:                                                                        //ldc.i4				0x4
	IL_0201:            V_0=4;                                                      //stloc				V_0
	IL_0205:            /*goto IL_000d;*/goto IL_020a;                              //br				IL_000d
	IL_020a:                                                                        //ldarg.0
	IL_020b:                                                                        //ldc.i4.s				92
	IL_020d:            if(A_0==(System::Char)92)goto IL_018b;                      //beq				IL_018b
	IL_0212:                                                                        //ldc.i4				0x15
	IL_0217:            V_0=21;                                                     //stloc				V_0
	IL_021b:            /*goto IL_000d;*/goto IL_0220;                              //br				IL_000d
	IL_0220:            goto IL_0119;                                               //br				IL_0119
	IL_0225:                                                                        //ldc.i4				0xe
	IL_022a:            V_0=14;                                                     //stloc				V_0
	IL_022e:            /*goto IL_000d;*/goto IL_0233;                              //br				IL_000d
	IL_0233:                                                                        //ldarg.0
	IL_0234:                                                                        //ldc.i4.s				57
	IL_0236:            if(A_0>(System::Char)57)goto IL_018d;                       //bgt				IL_018d
	IL_023b:                                                                        //ldc.i4				0x3
	IL_0240:            V_0=3;                                                      //stloc				V_0
	IL_0244:            /*goto IL_000d;*/goto IL_0249;                              //br				IL_000d
	IL_0249:            goto IL_0271;                                               //br.s				IL_0271
	IL_024b:                                                                        //ldc.i4				0xc
	IL_0250:            V_0=12;                                                     //stloc				V_0
	IL_0254:            /*goto IL_000d;*/goto IL_0259;                              //br				IL_000d
	IL_0259:                                                                        //ldarg.0
	IL_025a:                                                                        //ldc.i4.s				122
	IL_025c:            if(A_0<=(System::Char)122)goto IL_0271;                     //ble.s				IL_0271
	IL_025e:                                                                        //ldc.i4				0x8
	IL_0263:            V_0=8;                                                      //stloc				V_0
	IL_0267:            /*goto IL_000d;*/goto IL_026c;                              //br				IL_000d
	IL_026c:            goto IL_0142;                                               //br				IL_0142
	IL_0271:                                                                        //ldc.i4.1
	IL_0272:            return true;                                                //ret
	IL_0273:                                                                        //ldc.i4				0xb
	IL_0278:            V_0=11;                                                     //stloc				V_0
	IL_027c:            /*goto IL_000d;*/goto IL_0281;                              //br				IL_000d
	IL_0281:                                                                        //ldarg.0
	IL_0282:                                                                        //ldc.i4.s				95
	IL_0284:            if(A_0==(System::Char)95)goto IL_018b;                      //beq				IL_018b
	IL_0289:                                                                        //ldc.i4				0x2
	IL_028e:            V_0=2;                                                      //stloc				V_0
	IL_0292:            /*goto IL_000d;*/goto IL_0297;                              //br				IL_000d
	IL_0297:            goto IL_00ca;                                               //br				IL_00ca
	IL_029c:                                                                        //ldc.i4.0
	IL_029d:            return false;                                               //ret

}
inline System::String^ Root::T_x113::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
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
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_0=14;                                                     //stloc				V_0
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldstr				L"\x0A2B"
	IL_001a:                                                                        //ldloc				V_0
	IL_001e:            Temp_0=a(L"\x0A2B",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0023:                                                                        //ldstr				L"\x0A2B\x4F2D\x5D2F\x4231\x0F33"
	IL_0028:                                                                        //ldloc				V_0
	IL_002c:            Temp_1=a(L"\x0A2B\x4F2D\x5D2F\x4231\x0F33",V_0);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0031:            Temp_2=A_0->Replace(Temp_0,Temp_1);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0036:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldstr				L"\x102B"
	IL_003e:                                                                        //ldloc				V_0
	IL_0042:            Temp_3=a(L"\x102B",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0047:                                                                        //ldstr				L"\x0A2B\x422D\x442F\x0931"
	IL_004c:                                                                        //ldloc				V_0
	IL_0050:            Temp_4=a(L"\x0A2B\x422D\x442F\x0931",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0055:            Temp_5=A_0->Replace(Temp_3,Temp_4);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_005a:            A_0=Temp_5;                                                 //starg.s				A_0
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //ldstr				L"\x122B"
	IL_0062:                                                                        //ldloc				V_0
	IL_0066:            Temp_6=a(L"\x122B",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006b:                                                                        //ldstr				L"\x0A2B\x492D\x442F\x0931"
	IL_0070:                                                                        //ldloc				V_0
	IL_0074:            Temp_7=a(L"\x0A2B\x492D\x442F\x0931",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0079:            Temp_8=A_0->Replace(Temp_6,Temp_7);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_007e:            A_0=Temp_8;                                                 //starg.s				A_0
	IL_0080:                                                                        //ldarg.0
	IL_0081:                                                                        //ldstr				L"\x0B2B"
	IL_0086:                                                                        //ldloc				V_0
	IL_008a:            Temp_9=a(L"\x0B2B",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008f:                                                                        //ldstr				L"\x0A2B\x4F2D\x402F\x5D31\x4733\x0D35"
	IL_0094:                                                                        //ldloc				V_0
	IL_0098:            Temp_10=a(L"\x0A2B\x4F2D\x402F\x5D31\x4733\x0D35",V_0);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009d:            Temp_11=A_0->Replace(Temp_9,Temp_10);                       //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_00a2:            A_0=Temp_11;                                                //starg.s				A_0
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:                                                                        //ldstr				L"\x0E2B"
	IL_00aa:                                                                        //ldloc				V_0
	IL_00ae:            Temp_12=a(L"\x0E2B",V_0);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:                                                                        //ldstr				L"\x0A2B\x5F2D\x452F\x5D31\x4033\x0D35"
	IL_00b8:                                                                        //ldloc				V_0
	IL_00bc:            Temp_13=a(L"\x0A2B\x5F2D\x452F\x5D31\x4033\x0D35",V_0);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c1:            Temp_14=A_0->Replace(Temp_12,Temp_13);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_00c6:            A_0=Temp_14;                                                //starg.s				A_0
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:            return A_0;                                                 //ret

}
inline void Root::T_x113::M_x1(System::String^ A_0,System::String^ A_1,System::String^ A_2,System::String^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Type^ Temp_7 = nullptr;
	System::Reflection::Assembly^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Text::Encoding^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	array<System::Byte>^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::Windows::Forms::DialogResult Temp_34 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	array<System::Byte>^ V_2 = nullptr;
	System::Exception^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_5=12;                                                     //stloc				V_5
	IL_000501:          try{
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:                                                                        //ldc.i4.4
	IL_0017:                                                                        //dup
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //ldc.i4.2
	IL_001a:                                                                        //sub
	IL_001b:                                                                        //blt				IL_0017
	IL_0020:                                                                        //pop
	IL_0021:                                                                        //ldstr				L"\x6229\x432B\x432D\x552F\x4231\x5533\x5135\x5D37"
	IL_0026:                                                                        //ldloc				V_5
	IL_002a:            Temp_2=a(L"\x6229\x432B\x432D\x552F\x4231\x5533\x5135\x5D37",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002f:            Temp_3=Root::T_x128::M_x1(Temp_2);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0034:                                                                        //ldstr				L"\x0529\x6A2B\x4B2D\x552F\x5631\x5633\x5735\x5B37\x5139\x123B\x5F3D\x333F\x3241\x3C43"
	IL_0039:                                                                        //ldloc				V_5
	IL_003d:            Temp_4=a(L"\x0529\x6A2B\x4B2D\x552F\x5631\x5633\x5735\x5B37\x5139\x123B\x5F3D\x333F\x3241\x3C43",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0042:            Temp_5=System::String::Concat(Temp_3,Temp_4);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0047:            V_1=Temp_5;                                                 //stloc.1
	IL_0048:                                                                        //ldloc.0
	IL_0049:                                                                        //ldstr				L"\x5929\x432B\x5B2D\x422F\x5131\x5133\x0B35"
	IL_004e:                                                                        //ldloc				V_5
	IL_0052:            Temp_6=a(L"\x5929\x432B\x5B2D\x422F\x5131\x5133\x0B35",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0057:                                                                        //ldtoken				Root::T_x113
	IL_005c:            Temp_7=Root::T_x113::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0061:            Temp_8=Temp_7->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_0066:            Temp_9=Temp_8->FullName;                                    //callvirt				System::String^ System::Reflection::Assembly::get_FullName()
	IL_006b:            Temp_10=Root::T_x113::M_x2(Temp_9);                         //call				System::String^ Root::T_x113::M_x2(System::String^)
	IL_0070:            Temp_11=System::String::Concat(Temp_6,Temp_10);             //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0075:            V_0->Write(Temp_11);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_007a:                                                                        //ldloc.0
	IL_007b:                                                                        //ldstr				L"\x0C29"
	IL_0080:                                                                        //ldloc				V_5
	IL_0084:            Temp_12=a(L"\x0C29",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:            V_0->Write(Temp_12);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_008e:                                                                        //ldloc.0
	IL_008f:                                                                        //ldstr				L"\x5E29\x432B\x132D"
	IL_0094:                                                                        //ldloc				V_5
	IL_0098:            Temp_13=a(L"\x5E29\x432B\x132D",V_5);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_14=Root::T_x113::M_x2(A_0);                            //call				System::String^ Root::T_x113::M_x2(System::String^)
	IL_00a3:            Temp_15=System::String::Concat(Temp_13,Temp_14);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00a8:            V_0->Write(Temp_15);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ad:                                                                        //ldloc.0
	IL_00ae:                                                                        //ldstr				L"\x0C29"
	IL_00b3:                                                                        //ldloc				V_5
	IL_00b7:            Temp_16=a(L"\x0C29",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bc:            V_0->Write(Temp_16);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00c1:                                                                        //ldloc.0
	IL_00c2:                                                                        //ldstr				L"\x4C29\x5E2B\x412D\x5D2F\x0F31"
	IL_00c7:                                                                        //ldloc				V_5
	IL_00cb:            Temp_17=a(L"\x4C29\x5E2B\x412D\x5D2F\x0F31",V_5);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d0:                                                                        //ldarg.1
	IL_00d1:            Temp_18=Root::T_x113::M_x2(A_1);                            //call				System::String^ Root::T_x113::M_x2(System::String^)
	IL_00d6:            Temp_19=System::String::Concat(Temp_17,Temp_18);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00db:            V_0->Write(Temp_19);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:                                                                        //ldstr				L"\x0C29"
	IL_00e6:                                                                        //ldloc				V_5
	IL_00ea:            Temp_20=a(L"\x0C29",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ef:            V_0->Write(Temp_20);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00f4:                                                                        //ldloc.0
	IL_00f5:                                                                        //ldstr				L"\x5929\x592B\x4C2D\x5A2F\x5731\x5733\x4235\x0537"
	IL_00fa:                                                                        //ldloc				V_5
	IL_00fe:            Temp_21=a(L"\x5929\x592B\x4C2D\x5A2F\x5731\x5733\x4235\x0537",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0103:                                                                        //ldarg.2
	IL_0104:            Temp_22=Root::T_x113::M_x2(A_2);                            //call				System::String^ Root::T_x113::M_x2(System::String^)
	IL_0109:            Temp_23=System::String::Concat(Temp_21,Temp_22);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_010e:            V_0->Write(Temp_23);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0113:                                                                        //ldloc.0
	IL_0114:                                                                        //ldstr				L"\x0C29"
	IL_0119:                                                                        //ldloc				V_5
	IL_011d:            Temp_24=a(L"\x0C29",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0122:            V_0->Write(Temp_24);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0127:                                                                        //ldloc.0
	IL_0128:                                                                        //ldstr				L"\x4729\x492B\x5D2D\x432F\x5331\x5333\x5335\x0537"
	IL_012d:                                                                        //ldloc				V_5
	IL_0131:            Temp_25=a(L"\x4729\x492B\x5D2D\x432F\x5331\x5333\x5335\x0537",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0136:                                                                        //ldarg.3
	IL_0137:            Temp_26=Root::T_x113::M_x2(A_3);                            //call				System::String^ Root::T_x113::M_x2(System::String^)
	IL_013c:            Temp_27=System::String::Concat(Temp_25,Temp_26);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0141:            V_0->Write(Temp_27);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0146:            Temp_28=System::Text::Encoding::ASCII;                      //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_014b:                                                                        //ldloc.0
	IL_014c:            Temp_29=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0151:            Temp_30=Temp_28->GetBytes(Temp_29);                         //callvirt				array<System::Byte>^ System::Text::Encoding::GetBytes(System::String^)
	IL_0156:            V_2=Temp_30;                                                //stloc.2
	IL_0157:                                                                        //ldloc.1
	IL_0158:                                                                        //ldloc.2
	IL_0159:            Root::T_x4::M_x1(V_1,V_2);                                  //call				void Root::T_x4::M_x1(System::String^,array<System::Byte>^)
	IL_015e:            goto IL_01a6;                                               //leave.s				IL_01a6
	                    ;}
	                    finally{
	IL_0160:                                                                        //ldc.i4				0x0
	IL_0165:            V_4=0;                                                      //stloc				V_4
	IL_0169:            /*goto IL_016d;*/goto IL_016b;                              //br.s				IL_016d
	IL_016b:            goto IL_0182;                                               //br.s				IL_0182
	IL_016d:                                                                        //ldloc				V_4
	IL_0171:            switch(V_4){case 0:goto IL_016b;case 1:goto IL_01a3;case 2:goto IL_0190;};//switch				(IL_016b,IL_01a3,IL_0190)
	IL_0182:                                                                        //ldloc.0
	IL_0183:            if(V_0==nullptr)goto IL_01a5;                               //brfalse.s				IL_01a5
	IL_0185:                                                                        //ldc.i4				0x2
	IL_018a:            V_4=2;                                                      //stloc				V_4
	IL_018e:            /*goto IL_016d;*/goto IL_0190;                              //br.s				IL_016d
	IL_0190:            goto IL_0192;                                               //br.s				IL_0192
	IL_0192:                                                                        //ldloc.0
	IL_0193:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0198:                                                                        //ldc.i4				0x1
	IL_019d:            V_4=1;                                                      //stloc				V_4
	IL_01a1:            /*goto IL_016d;*/goto IL_01a3;                              //br.s				IL_016d
	IL_01a3:            goto IL_01a5;                                               //br.s				IL_01a5
	IL_01a5:                                                                        //endfinally
	                    ;}
	IL_01a6:            goto IL_01cd;                                               //leave.s				IL_01cd
	                    ;}
	                    catch(System::Exception^ Ex_01A602){
	IL_01a8:            V_3=Ex_01A602;                                              //stloc.3
	IL_01a9:                                                                        //ldloc.3
	IL_01aa:            Temp_31=V_3->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_01af:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345"
	IL_01b4:                                                                        //ldloc				V_5
	IL_01b8:            Temp_32=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01bd:            Temp_33=Root::T_x128::M_x1(Temp_32);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_01c2:                                                                        //ldc.i4.0
	IL_01c3:                                                                        //ldc.i4.s				16
	IL_01c5:            Temp_34=System::Windows::Forms::MessageBox::Show(Temp_31,Temp_33,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01ca:                                                                        //pop
	IL_01cb:            goto IL_01cd;                                               //leave.s				IL_01cd
	                    ;}
	IL_01cd:            return;                                                     //ret

}
inline System::String^ Root::T_x113::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Text::Encoding^ Temp_1 = nullptr;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Text::Encoding^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	array<System::Byte>^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            if(A_0==nullptr)goto IL_0030;                               //brfalse.s				IL_0030
	IL_0003:            goto IL_0005;                                               //br.s				IL_0005
	IL_0005:                                                                        //ldarg.0
	IL_0006:            Temp_0=Root::T_x113::M_x1(A_0);                             //call				System::String^ Root::T_x113::M_x1(System::String^)
	IL_000b:            A_0=Temp_0;                                                 //starg.s				A_0
	IL_000d:            Temp_1=System::Text::Encoding::UTF8;                        //call				System::Text::Encoding^ System::Text::Encoding::get_UTF8()
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_2=Temp_1->GetBytes(A_0);                               //callvirt				array<System::Byte>^ System::Text::Encoding::GetBytes(System::String^)
	IL_0018:            V_0=Temp_2;                                                 //stloc.0
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldc.i4.0
	IL_001b:                                                                        //ldloc.0
	IL_001c:            Temp_3=V_0->Length;                                         //ldlen
	IL_001d:                                                                        //conv.i4
	IL_001e:            Temp_4=Root::T_x113::M_x1(V_0,safe_cast<System::Int32>(0),Temp_3);//call				array<System::Byte>^ Root::T_x113::M_x1(array<System::Byte>^,System::Int32,System::Int32)
	IL_0023:            V_1=Temp_4;                                                 //stloc.1
	IL_0024:            Temp_5=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_0029:                                                                        //ldloc.1
	IL_002a:            Temp_6=Temp_5->GetString(V_1);                              //callvirt				System::String^ System::Text::Encoding::GetString(array<System::Byte>^)
	IL_002f:            return Temp_6;                                              //ret
	IL_0030:            goto IL_0033;                                               //br.s				IL_0033
	IL_0032:                                                                        //break
	IL_0033:                                                                        //ldnull
	IL_0034:            return nullptr;                                             //ret

}
