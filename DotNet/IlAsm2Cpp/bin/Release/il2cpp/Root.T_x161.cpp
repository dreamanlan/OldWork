#include "global_xref.h"

inline Root::T_x161::T_x161(Root::T_x174^ A_0,System::Int32 A_1,System::UInt16 A_2,System::String^ A_3,System::Int32 A_4,System::Object^ A_5)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x8=A_0;                                             //stfld				Root::T_x174^ Root::T_x161 F_x8
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x1=A_1;                                             //stfld				System::Int32 Root::T_x161 F_x1
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.s				A_3
	IL_0017:            this->F_x2=A_3;                                             //stfld				System::String^ Root::T_x161 F_x2
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.s				A_4
	IL_001f:            this->F_x12=A_4;                                            //stfld				System::Int32 Root::T_x161 F_x12
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.s				A_5
	IL_0027:            this->F_x7=A_5;                                             //stfld				System::Object^ Root::T_x161 F_x7
	IL_002c:                                                                        //ldarg.0
	IL_002d:                                                                        //ldarg.3
	IL_002e:                                                                        //conv.i4
	IL_002f:                                                                        //ldc.i4				0x1df7
	IL_0034:                                                                        //and
	IL_0035:                                                                        //conv.u2
	IL_0036:            this->F_x13=safe_cast<System::UInt16>((safe_cast<System::Int32>(A_2) & 7671));//stfld				System::UInt16 Root::T_x161 F_x13
	IL_003b:            return;                                                     //ret

}
inline System::Int32 Root::T_x161::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::ArgumentException^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_2=14;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_1=1;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_006b;case 1:goto IL_0014;case 2:goto IL_005a;case 3:goto IL_003e;};//switch				(IL_006b,IL_0014,IL_005a,IL_003e)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldarg.1
	IL_0031:            if(this!=safe_cast<Root::T_x161^>(obj))goto IL_0048;        //bne.un.s				IL_0048
	IL_0033:                                                                        //ldc.i4				0x3
	IL_0038:            V_1=3;                                                      //stloc				V_1
	IL_003c:            /*goto IL_0016;*/goto IL_003e;                              //br.s				IL_0016
	IL_003e:            goto IL_006d;                                               //br.s				IL_006d
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldloc.0
	IL_0042:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IMethodReference^)
	IL_0047:            return Temp_0;                                              //ret
	IL_0048:                                                                        //ldarg.1
	IL_0049:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_004e:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReference^>(obj);//stloc.0
	IL_004f:                                                                        //ldc.i4				0x2
	IL_0054:            V_1=2;                                                      //stloc				V_1
	IL_0058:            /*goto IL_0016;*/goto IL_005a;                              //br.s				IL_0016
	IL_005a:                                                                        //ldloc.0
	IL_005b:            if(V_0==nullptr)goto IL_006f;                               //brfalse.s				IL_006f
	IL_005d:            goto IL_0060;                                               //br.s				IL_0060
	IL_005f:                                                                        //break
	IL_0060:                                                                        //ldc.i4				0x0
	IL_0065:            V_1=0;                                                      //stloc				V_1
	IL_0069:            /*goto IL_0016;*/goto IL_006b;                              //br.s				IL_0016
	IL_006b:            goto IL_0040;                                               //br.s				IL_0040
	IL_006d:                                                                        //ldc.i4.0
	IL_006e:            return 0;                                                   //ret
	IL_006f:                                                                        //ldstr				L"\x6D2B\x5C2D\x572F\x4731\x5933\x5335\x5637\x4E39\x1C3B\x533D\x353F\x3141\x3043\x6645\x2A47\x2F49\x6C4B\x234D\x354F\x2651\x3C53\x3955\x3C57\x7A59\x2E5B\x3B5D\x065F\x0761\x1663\x0365\x0667\x0969\x096B\x406D"
	IL_0074:                                                                        //ldloc				V_2
	IL_0078:            Temp_1=a(L"\x6D2B\x5C2D\x572F\x4731\x5933\x5335\x5637\x4E39\x1C3B\x533D\x353F\x3141\x3043\x6645\x2A47\x2F49\x6C4B\x234D\x354F\x2651\x3C53\x3955\x3C57\x7A59\x2E5B\x3B5D\x065F\x0761\x1663\x0365\x0667\x0969\x096B\x406D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007d:                                                                        //ldstr				L"\x432B\x4C2D\x5A2F"
	IL_0082:                                                                        //ldloc				V_2
	IL_0086:            Temp_2=a(L"\x432B\x4C2D\x5A2F",V_2);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008b:            Temp_3=gcnew System::ArgumentException(Temp_1,Temp_2);      //newobj				void System::ArgumentException::.ctor(System::String^,System::String^)
	IL_0090:            throw Temp_3;                                               //throw

}
inline void Root::T_x161::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x163^ Temp_0 = nullptr;
	Root::T_x174^ Temp_1 = nullptr;
	Root::T_x2^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x139^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	array<Root::T_x161::T_x12^>^ Temp_7 = nullptr;
	Root::T_x161::T_x12^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	array<Root::T_x152^>^ Temp_10 = nullptr;
	System::UInt16 Temp_11 = 0;
	array<Root::T_x161::T_x12^>^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::UInt16 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	Root::T_x161^ Temp_16 = nullptr;
	Root::T_x161^ Temp_17 = nullptr;
	array<Root::T_x161::T_x12^>^ Temp_18 = nullptr;
	Root::T_x161^ Temp_19 = nullptr;
	Root::T_x161^ Temp_20 = nullptr;
	Root::T_x161^ Temp_21 = nullptr;
	array<Root::T_x152^>^ Temp_22 = nullptr;
	Root::T_x161^ Temp_23 = nullptr;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	Root::T_x139^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	Root::T_x146 V_6 = (Root::T_x146)0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_7=0;                                                      //stloc				V_7
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0056;                                               //br.s				IL_0056
	IL_000d:                                                                        //ldloc				V_7
	IL_0011:            switch(V_7){case 0:goto IL_000b;case 1:goto IL_01e7;case 2:goto IL_00cd;case 3:goto IL_0197;case 4:goto IL_0073;case 5:goto IL_022e;case 6:goto IL_00f1;case 7:goto IL_014b;case 8:goto IL_0180;case 9:goto IL_01a7;case 10:goto IL_0203;case 11:goto IL_01d4;case 12:goto IL_00e1;case 13:goto IL_0121;case 14:goto IL_0102;case 15:goto IL_0170;};//switch				(IL_000b,IL_01e7,IL_00cd,IL_0197,IL_0073,IL_022e,IL_00f1,IL_014b,IL_0180,IL_01a7,IL_0203,IL_01d4,IL_00e1,IL_0121,IL_0102,IL_0170)
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_14=this->F_x13;                                        //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_005c:                                                                        //conv.i4
	IL_005d:                                                                        //ldc.i4				0x8000
	IL_0062:                                                                        //and
	IL_0063:            if((safe_cast<System::Int32>(Temp_14) & 32768)!=0)goto IL_0230;//brtrue				IL_0230
	IL_0068:                                                                        //ldc.i4				0x4
	IL_006d:            V_7=4;                                                      //stloc				V_7
	IL_0071:            /*goto IL_000d;*/goto IL_0073;                              //br.s				IL_000d
	IL_0073:            goto IL_0075;                                               //br.s				IL_0075
	IL_0075:                                                                        //ldarg.0
	IL_0076:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_007b:            Temp_2=Temp_1->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_0080:            V_0=Temp_2;                                                 //stloc.0
	IL_0081:                                                                        //ldloc.0
	IL_0082:                                                                        //ldarg.0
	IL_0083:            Temp_3=this->F_x12;                                         //ldfld				System::Int32 Root::T_x161 F_x12
	IL_0088:            Temp_4=V_0->M_x14(Temp_3);                                  //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_008d:            V_1=Temp_4;                                                 //stloc.1
	IL_008e:                                                                        //ldloc.1
	IL_008f:            Temp_5=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0094:            V_2=Temp_5;                                                 //stloc.2
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldloc.2
	IL_0097:                                                                        //ldc.i4.s				15
	IL_0099:                                                                        //and
	IL_009a:            this->F_x9=safe_cast<Reflector::CodeModel::MethodCallingConvention>((V_2 & 15));//stfld				Reflector::CodeModel::MethodCallingConvention Root::T_x161 F_x9
	IL_009f:                                                                        //ldarg.0
	IL_00a0:                                                                        //ldloc.2
	IL_00a1:                                                                        //ldc.i4.s				32
	IL_00a3:                                                                        //and
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:                                                                        //ceq
	IL_00a7:                                                                        //ldc.i4.0
	IL_00a8:                                                                        //ceq
	IL_00aa:            this->HasThis=(((V_2 & 32) == 0) == false);                 //call				void Root::T_x161::set_HasThis(System::Boolean)
	IL_00af:                                                                        //ldarg.0
	IL_00b0:                                                                        //ldloc.2
	IL_00b1:                                                                        //ldc.i4.s				64
	IL_00b3:                                                                        //and
	IL_00b4:                                                                        //ldc.i4.0
	IL_00b5:                                                                        //ceq
	IL_00b7:                                                                        //ldc.i4.0
	IL_00b8:                                                                        //ceq
	IL_00ba:            this->ExplicitThis=(((V_2 & 64) == 0) == false);            //call				void Root::T_x161::set_ExplicitThis(System::Boolean)
	IL_00bf:                                                                        //ldc.i4				0x2
	IL_00c4:            V_7=2;                                                      //stloc				V_7
	IL_00c8:            /*goto IL_000d;*/goto IL_00cd;                              //br				IL_000d
	IL_00cd:                                                                        //ldloc.2
	IL_00ce:                                                                        //ldc.i4.s				16
	IL_00d0:                                                                        //and
	IL_00d1:            if((V_2 & 16)!=0)goto IL_00f4;                              //brtrue.s				IL_00f4
	IL_00d3:                                                                        //ldc.i4				0xc
	IL_00d8:            V_7=12;                                                     //stloc				V_7
	IL_00dc:            /*goto IL_000d;*/goto IL_00e1;                              //br				IL_000d
	IL_00e1:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_00e3:                                                                        //ldc.i4				0x6
	IL_00e8:            V_7=6;                                                      //stloc				V_7
	IL_00ec:            /*goto IL_000d;*/goto IL_00f1;                              //br				IL_000d
	IL_00f1:                                                                        //ldc.i4.0
	IL_00f2:            Temp_15=0;goto IL_010a;                                     //br.s				IL_010a
	IL_00f4:                                                                        //ldc.i4				0xe
	IL_00f9:            V_7=14;                                                     //stloc				V_7
	IL_00fd:            /*goto IL_000d;*/goto IL_0102;                              //br				IL_000d
	IL_0102:                                                                        //ldloc.1
	IL_0103:            Temp_13=V_1->M_x6();                                        //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0108:            Temp_15=Temp_13;goto IL_010a;                               //br.s				IL_010a
	IL_010a:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.3
	IL_010b:                                                                        //ldloc.1
	IL_010c:            Temp_6=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0111:            V_4=Temp_6;                                                 //stloc.s				V_4
	IL_0113:                                                                        //ldc.i4				0xd
	IL_0118:            V_7=13;                                                     //stloc				V_7
	IL_011c:            /*goto IL_000d;*/goto IL_0121;                              //br				IL_000d
	IL_0121:                                                                        //ldarg.0
	IL_0122:                                                                        //ldloc.s				V_4
	IL_0124:            Temp_17=this;if(V_4==0)goto IL_0132;                        //brfalse.s				IL_0132
	IL_0126:            goto IL_0128;                                               //br.s				IL_0128
	IL_0128:                                                                        //ldloc.s				V_4
	IL_012a:                                                                        //conv.ovf.u4
	IL_012b:            Temp_12=gcnew array<Root::T_x161::T_x12^>(safe_cast<System::UInt32>(V_4));//newarr				Root::T_x161::T_x12
	IL_0130:            Temp_19=Temp_17;Temp_18=Temp_12;goto IL_0135;               //br.s				IL_0135
	IL_0132:                                                                        //ldnull
	IL_0133:            Temp_19=Temp_17;Temp_18=nullptr;goto IL_0135;               //br.s				IL_0135
	IL_0135:            Temp_19->F_x11=safe_cast<array<Root::T_x161::T_x12^>^>(Temp_18);/*warning ! semantic stack doesn't empty at joint !;*///stfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_013a:                                                                        //ldc.i4.0
	IL_013b:            V_5=0;                                                      //stloc.s				V_5
	IL_013d:                                                                        //ldc.i4				0x7
	IL_0142:            V_7=7;                                                      //stloc				V_7
	IL_0146:            /*goto IL_000d;*/goto IL_014b;                              //br				IL_000d
	IL_014b:            goto IL_0172;                                               //br.s				IL_0172
	IL_014d:                                                                        //ldarg.0
	IL_014e:            Temp_7=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_0153:                                                                        //ldloc.s				V_5
	IL_0155:                                                                        //ldarg.0
	IL_0156:            Temp_8=gcnew Root::T_x161::T_x12(this);                     //newobj				void Root::T_x161::T_x12::.ctor(Root::T_x161^)
	IL_015b:            Temp_7[V_5]=Temp_8;                                         //stelem.ref
	IL_015c:                                                                        //ldloc.s				V_5
	IL_015e:                                                                        //ldc.i4.1
	IL_015f:                                                                        //add
	IL_0160:            V_5=(V_5 + 1);                                              //stloc.s				V_5
	IL_0162:                                                                        //ldc.i4				0xf
	IL_0167:            V_7=15;                                                     //stloc				V_7
	IL_016b:            /*goto IL_000d;*/goto IL_0170;                              //br				IL_000d
	IL_0170:            goto IL_0172;                                               //br.s				IL_0172
	IL_0172:                                                                        //ldc.i4				0x8
	IL_0177:            V_7=8;                                                      //stloc				V_7
	IL_017b:            /*goto IL_000d;*/goto IL_0180;                              //br				IL_000d
	IL_0180:                                                                        //ldloc.s				V_5
	IL_0182:                                                                        //ldloc.s				V_4
	IL_0184:            if(V_5<V_4)goto IL_014d;                                    //blt.s				IL_014d
	IL_0186:            goto IL_0189;                                               //br.s				IL_0189
	IL_0188:                                                                        //break
	IL_0189:                                                                        //ldc.i4				0x3
	IL_018e:            V_7=3;                                                      //stloc				V_7
	IL_0192:            /*goto IL_000d;*/goto IL_0197;                              //br				IL_000d
	IL_0197:            goto IL_0199;                                               //br.s				IL_0199
	IL_0199:                                                                        //ldc.i4				0x9
	IL_019e:            V_7=9;                                                      //stloc				V_7
	IL_01a2:            /*goto IL_000d;*/goto IL_01a7;                              //br				IL_000d
	IL_01a7:                                                                        //ldarg.0
	IL_01a8:                                                                        //ldloc.3
	IL_01a9:            Temp_21=this;if(V_3==0)goto IL_01b6;                        //brfalse.s				IL_01b6
	IL_01ab:            goto IL_01ad;                                               //br.s				IL_01ad
	IL_01ad:                                                                        //ldloc.3
	IL_01ae:                                                                        //conv.ovf.u4
	IL_01af:            Temp_10=gcnew array<Root::T_x152^>(safe_cast<System::UInt32>(V_3));//newarr				Root::T_x152
	IL_01b4:            Temp_23=Temp_21;Temp_22=Temp_10;goto IL_01b9;               //br.s				IL_01b9
	IL_01b6:                                                                        //ldnull
	IL_01b7:            Temp_23=Temp_21;Temp_22=nullptr;goto IL_01b9;               //br.s				IL_01b9
	IL_01b9:            Temp_23->F_x10=safe_cast<array<Root::T_x152^>^>(Temp_22);/*warning ! semantic stack doesn't empty at joint !;*///stfld				array<Root::T_x152^>^ Root::T_x161 F_x10
	IL_01be:                                                                        //ldloc.1
	IL_01bf:            Temp_9=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_01c4:            V_6=safe_cast<Root::T_x146>(Temp_9);                        //stloc.s				V_6
	IL_01c6:                                                                        //ldc.i4				0xb
	IL_01cb:            V_7=11;                                                     //stloc				V_7
	IL_01cf:            /*goto IL_000d;*/goto IL_01d4;                              //br				IL_000d
	IL_01d4:                                                                        //ldloc.s				V_6
	IL_01d6:                                                                        //ldc.i4.1
	IL_01d7:            if(safe_cast<System::Int32>(V_6)==1)goto IL_0205;           //beq.s				IL_0205
	IL_01d9:                                                                        //ldc.i4				0x1
	IL_01de:            V_7=1;                                                      //stloc				V_7
	IL_01e2:            /*goto IL_000d;*/goto IL_01e7;                              //br				IL_000d
	IL_01e7:            goto IL_01e9;                                               //br.s				IL_01e9
	IL_01e9:                                                                        //ldarg.0
	IL_01ea:                                                                        //ldarg.0
	IL_01eb:            Temp_0=gcnew Root::T_x163(this);                            //newobj				void Root::T_x163::.ctor(Root::T_x161^)
	IL_01f0:            this->F_x4=Temp_0;                                          //stfld				Root::T_x163^ Root::T_x161 F_x4
	IL_01f5:                                                                        //ldc.i4				0xa
	IL_01fa:            V_7=10;                                                     //stloc				V_7
	IL_01fe:            /*goto IL_000d;*/goto IL_0203;                              //br				IL_000d
	IL_0203:            goto IL_0205;                                               //br.s				IL_0205
	IL_0205:                                                                        //ldloc.0
	IL_0206:                                                                        //ldloc.1
	IL_0207:            V_0->M_x12(V_1);                                            //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_020c:                                                                        //ldarg.0
	IL_020d:                                                                        //dup
	IL_020e:            Temp_11=this->F_x13;                                        //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0213:                                                                        //conv.i4
	IL_0214:                                                                        //ldc.i4				0x8000
	IL_0219:                                                                        //or
	IL_021a:                                                                        //conv.u2
	IL_021b:            this->F_x13=safe_cast<System::UInt16>((safe_cast<System::Int32>(Temp_11) | 32768));//stfld				System::UInt16 Root::T_x161 F_x13
	IL_0220:                                                                        //ldc.i4				0x5
	IL_0225:            V_7=5;                                                      //stloc				V_7
	IL_0229:            /*goto IL_000d;*/goto IL_022e;                              //br				IL_000d
	IL_022e:            goto IL_0230;                                               //br.s				IL_0230
	IL_0230:            return;                                                     //ret

}
inline void Root::T_x161::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_8 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICustomAttribute^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0006:            if(Temp_0!=nullptr)goto IL_002b;                            //brtrue.s				IL_002b
	IL_0008:                                                                        //ldc.i4.1
	IL_0009:                                                                        //dup
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //ldc.i4.4
	IL_000c:                                                                        //add
	IL_000d:                                                                        //bgt				IL_0009
	IL_0012:                                                                        //pop
	IL_0013:            goto IL_0015;                                               //br.s				IL_0015
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldc.i4.1
	IL_0017:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_001c:            this->F_x5=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_8=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_002a:            return;                                                     //ret
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_1=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0031:            V_0=Temp_1;                                                 //stloc.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_2=V_0->Length;                                         //ldlen
	IL_0035:                                                                        //conv.i4
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:                                                                        //conv.ovf.u4
	IL_0039:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_003e:            this->F_x5=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_4=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_5=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_6=V_0->Length;                                         //ldlen
	IL_0058:                                                                        //conv.i4
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x161::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_8 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IMethodReference^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x15;                                         //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0006:            if(Temp_0!=nullptr)goto IL_002b;                            //brtrue.s				IL_002b
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:                                                                        //dup
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //ldc.i4.2
	IL_000c:                                                                        //add
	IL_000d:                                                                        //bgt				IL_0009
	IL_0012:                                                                        //pop
	IL_0013:            goto IL_0015;                                               //br.s				IL_0015
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldc.i4.1
	IL_0017:            Temp_7=gcnew array<Reflector::CodeModel::IMethodReference^>(1);//newarr				Reflector::CodeModel::IMethodReference
	IL_001c:            this->F_x15=Temp_7;                                         //stfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_8=this->F_x15;                                         //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_002a:            return;                                                     //ret
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_1=this->F_x15;                                         //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0031:            V_0=Temp_1;                                                 //stloc.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_2=V_0->Length;                                         //ldlen
	IL_0035:                                                                        //conv.i4
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:                                                                        //conv.ovf.u4
	IL_0039:            Temp_3=gcnew array<Reflector::CodeModel::IMethodReference^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::IMethodReference
	IL_003e:            this->F_x15=Temp_3;                                         //stfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_4=this->F_x15;                                         //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_5=this->F_x15;                                         //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_6=V_0->Length;                                         //ldlen
	IL_0058:                                                                        //conv.i4
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x161::M_x1(Reflector::CodeModel::MethodVisibility A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_Visibility by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::M_x1(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_HideBySignature by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4				0xffffff7f
	IL_0018:                                                                        //and
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -129);if(A_0)goto IL_001e;//brtrue.s				IL_001e
	IL_001c:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0025;                   //br.s				IL_0025
	IL_001e:                                                                        //ldc.i4				0x80
	IL_0023:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=128;goto IL_0028;        //br.s				IL_0028
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0028;          //br.s				IL_0028
	IL_0028:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0029:                                                                        //conv.u2
	IL_002a:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_002f:            return;                                                     //ret

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x161::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x161::T_x12^>^ Temp_0 = nullptr;
	array<Root::T_x161::T_x12^>^ Temp_1 = nullptr;
	array<Root::T_x161::T_x12^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::ArgumentException^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_0
	IL_000f:            switch(V_0){case 0:goto IL_0035;case 1:goto IL_0048;case 2:goto IL_0069;case 3:goto IL_007f;};//switch				(IL_0035,IL_0048,IL_0069,IL_007f)
	IL_0024:                                                                        //ldarg.0
	IL_0025:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_0=0;                                                      //stloc				V_0
	IL_0033:            /*goto IL_000b;*/goto IL_0035;                              //br.s				IL_000b
	IL_0035:                                                                        //ldarg.0
	IL_0036:            Temp_0=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_003b:            if(Temp_0!=nullptr)goto IL_0081;                            //brtrue.s				IL_0081
	IL_003d:                                                                        //ldc.i4				0x1
	IL_0042:            V_0=1;                                                      //stloc				V_0
	IL_0046:            /*goto IL_000b;*/goto IL_0048;                              //br.s				IL_000b
	IL_0048:            goto IL_005e;                                               //br.s				IL_005e
	IL_004a:                                                                        //ldstr				L"\x4820\x4D22\x4124\x4226\x5128"
	IL_004f:                                                                        //ldloc				V_1
	IL_0053:            Temp_4=a(L"\x4820\x4D22\x4124\x4226\x5128",V_1);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:            Temp_5=gcnew System::ArgumentException(Temp_4);             //newobj				void System::ArgumentException::.ctor(System::String^)
	IL_005d:            throw Temp_5;                                               //throw
	IL_005e:                                                                        //ldc.i4				0x2
	IL_0063:            V_0=2;                                                      //stloc				V_0
	IL_0067:            /*goto IL_000b;*/goto IL_0069;                              //br.s				IL_000b
	IL_0069:                                                                        //ldarg.1
	IL_006a:                                                                        //ldarg.0
	IL_006b:            Temp_2=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_0070:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0071:                                                                        //conv.i4
	IL_0072:            if(A_0<Temp_3)goto IL_0081;                                 //blt.s				IL_0081
	IL_0074:                                                                        //ldc.i4				0x3
	IL_0079:            V_0=3;                                                      //stloc				V_0
	IL_007d:            /*goto IL_000b;*/goto IL_007f;                              //br.s				IL_000b
	IL_007f:            goto IL_004a;                                               //br.s				IL_004a
	IL_0081:            goto IL_0084;                                               //br.s				IL_0084
	IL_0083:                                                                        //break
	IL_0084:                                                                        //ldarg.0
	IL_0085:            Temp_1=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_008a:                                                                        //ldarg.1
	IL_008b:                                                                        //ldelem.ref
	IL_008c:            return safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_1[A_0]);//ret

}
inline void Root::T_x161::M_x1(System::Int32 A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x161::T_x12^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0009:                                                                        //ldarg.1
	IL_000a:                                                                        //ldc.i4.1
	IL_000b:                                                                        //sub
	IL_000c:            A_0=(A_0 - 1);                                              //starg.s				A_0
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_0=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_0014:                                                                        //ldarg.1
	IL_0015:                                                                        //ldelem.ref
	IL_0016:                                                                        //ldarg.2
	IL_0017:            Temp_0[A_0]->M_x1(A_1);                                     //callvirt				void Root::T_x161::T_x12::M_x1(System::Int32)
	IL_001c:            return;                                                     //ret

}
inline void Root::T_x161::M_x1(System::Int32 A_0,System::UInt16 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x163^ Temp_4 = nullptr;
	Root::T_x163^ Temp_5 = nullptr;
	array<Root::T_x161::T_x12^>^ Temp_6 = nullptr;
	Root::T_x174^ Temp_7 = nullptr;
	Root::T_x2^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	Root::T_x163^ Temp_11 = nullptr;
	//local variables.
	Root::T_x161::T_x12^ V_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0043;                                               //br.s				IL_0043
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_00ab;case 1:goto IL_00fb;case 2:goto IL_0115;case 3:goto IL_0149;case 4:goto IL_0138;case 5:goto IL_0173;case 6:goto IL_015c;case 7:goto IL_00c2;case 8:goto IL_0066;case 9:goto IL_0183;case 10:goto IL_0078;case 11:goto IL_00d6;case 12:goto IL_0199;case 13:goto IL_0054;};//switch				(IL_00ab,IL_00fb,IL_0115,IL_0149,IL_0138,IL_0173,IL_015c,IL_00c2,IL_0066,IL_0183,IL_0078,IL_00d6,IL_0199,IL_0054)
	IL_0043:                                                                        //ldarg.0
	IL_0044:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0049:                                                                        //ldc.i4				0xd
	IL_004e:            V_3=13;                                                     //stloc				V_3
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:                                                                        //ldarg.2
	IL_0055:                                                                        //conv.i4
	IL_0056:                                                                        //ldc.i4.s				16
	IL_0058:                                                                        //and
	IL_0059:            if((safe_cast<System::Int32>(A_1) & 16)==0)goto IL_00ad;    //brfalse.s				IL_00ad
	IL_005b:                                                                        //ldc.i4				0x8
	IL_0060:            V_3=8;                                                      //stloc				V_3
	IL_0064:            /*goto IL_0002;*/goto IL_0066;                              //br.s				IL_0002
	IL_0066:            goto IL_0100;                                               //br				IL_0100
	IL_006b:                                                                        //ldc.i4.0
	IL_006c:            V_2=0;                                                      //stloc.2
	IL_006d:                                                                        //ldc.i4				0xa
	IL_0072:            V_3=10;                                                     //stloc				V_3
	IL_0076:            /*goto IL_0002;*/goto IL_0078;                              //br.s				IL_0002
	IL_0078:            goto IL_014e;                                               //br				IL_014e
	IL_007d:                                                                        //ldarg.0
	IL_007e:                                                                        //ldarg.0
	IL_007f:            Temp_7=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_0084:            Temp_8=Temp_7->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_0089:            Temp_9=Temp_8->M_x7();                                      //callvirt				Reflector::CodeModel::IMethodReturnType^ Root::T_x2::M_x7()
	IL_008e:            Temp_10=Temp_9->Type;                                       //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0093:            Temp_11=gcnew Root::T_x163(Temp_10);                        //newobj				void Root::T_x163::.ctor(Reflector::CodeModel::IType^)
	IL_0098:            this->F_x4=Temp_11;                                         //stfld				Root::T_x163^ Root::T_x161 F_x4
	IL_009d:                                                                        //ldc.i4				0x0
	IL_00a2:            V_3=0;                                                      //stloc				V_3
	IL_00a6:            /*goto IL_0002;*/goto IL_00ab;                              //br				IL_0002
	IL_00ab:            goto IL_0117;                                               //br.s				IL_0117
	IL_00ad:                                                                        //ldarg.2
	IL_00ae:                                                                        //conv.i4
	IL_00af:                                                                        //ldc.i4.7
	IL_00b0:                                                                        //and
	IL_00b1:                                                                        //conv.u2
	IL_00b2:            A_1=safe_cast<System::UInt16>((safe_cast<System::Int32>(A_1) & 7));//starg.s				A_1
	IL_00b4:                                                                        //ldc.i4				0x7
	IL_00b9:            V_3=7;                                                      //stloc				V_3
	IL_00bd:            /*goto IL_0002;*/goto IL_00c2;                              //br				IL_0002
	IL_00c2:                                                                        //ldarg.1
	IL_00c3:            if(A_0==0)goto IL_0175;                                     //brfalse				IL_0175
	IL_00c8:                                                                        //ldc.i4				0xb
	IL_00cd:            V_3=11;                                                     //stloc				V_3
	IL_00d1:            /*goto IL_0002;*/goto IL_00d6;                              //br				IL_0002
	IL_00d6:            goto IL_019e;                                               //br				IL_019e
	IL_00db:                                                                        //ldarg.0
	IL_00dc:            Temp_4=this->F_x4;                                          //ldfld				Root::T_x163^ Root::T_x161 F_x4
	IL_00e1:                                                                        //ldloc.1
	IL_00e2:                                                                        //ldloc.2
	IL_00e3:                                                                        //ldelem.ref
	IL_00e4:            Temp_4->M_x1(V_1[V_2]);                                     //callvirt				void Root::T_x163::M_x1(Reflector::CodeModel::ICustomAttribute^)
	IL_00e9:                                                                        //ldloc.2
	IL_00ea:                                                                        //ldc.i4.1
	IL_00eb:                                                                        //add
	IL_00ec:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00ed:                                                                        //ldc.i4				0x1
	IL_00f2:            V_3=1;                                                      //stloc				V_3
	IL_00f6:            /*goto IL_0002;*/goto IL_00fb;                              //br				IL_0002
	IL_00fb:            goto IL_00fe;                                               //br.s				IL_00fe
	IL_00fd:                                                                        //break
	IL_00fe:            goto IL_014e;                                               //br.s				IL_014e
	IL_0100:                                                                        //ldarg.2
	IL_0101:                                                                        //conv.i4
	IL_0102:                                                                        //ldc.i4.4
	IL_0103:                                                                        //or
	IL_0104:                                                                        //conv.u2
	IL_0105:            A_1=safe_cast<System::UInt16>((safe_cast<System::Int32>(A_1) | 4));//starg.s				A_1
	IL_0107:                                                                        //ldc.i4				0x2
	IL_010c:            V_3=2;                                                      //stloc				V_3
	IL_0110:            /*goto IL_0002;*/goto IL_0115;                              //br				IL_0002
	IL_0115:            goto IL_00ad;                                               //br.s				IL_00ad
	IL_0117:                                                                        //ldarg.0
	IL_0118:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_011d:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_0122:                                                                        //ldarg.2
	IL_0123:                                                                        //conv.i4
	IL_0124:            Temp_2=Temp_1->M_x6(safe_cast<System::Int32>(A_1));         //callvirt				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x2::M_x6(System::Int32)
	IL_0129:            V_1=Temp_2;                                                 //stloc.1
	IL_012a:                                                                        //ldc.i4				0x4
	IL_012f:            V_3=4;                                                      //stloc				V_3
	IL_0133:            /*goto IL_0002;*/goto IL_0138;                              //br				IL_0002
	IL_0138:                                                                        //ldloc.1
	IL_0139:            if(V_1==nullptr)goto IL_01b1;                               //brfalse.s				IL_01b1
	IL_013b:                                                                        //ldc.i4				0x3
	IL_0140:            V_3=3;                                                      //stloc				V_3
	IL_0144:            /*goto IL_0002;*/goto IL_0149;                              //br				IL_0002
	IL_0149:            goto IL_006b;                                               //br				IL_006b
	IL_014e:                                                                        //ldc.i4				0x6
	IL_0153:            V_3=6;                                                      //stloc				V_3
	IL_0157:            /*goto IL_0002;*/goto IL_015c;                              //br				IL_0002
	IL_015c:                                                                        //ldloc.2
	IL_015d:                                                                        //ldloc.1
	IL_015e:            Temp_3=V_1->Length;                                         //ldlen
	IL_015f:                                                                        //conv.i4
	IL_0160:            if(V_2<Temp_3)goto IL_00db;                                 //blt				IL_00db
	IL_0165:                                                                        //ldc.i4				0x5
	IL_016a:            V_3=5;                                                      //stloc				V_3
	IL_016e:            /*goto IL_0002;*/goto IL_0173;                              //br				IL_0002
	IL_0173:            goto IL_01b1;                                               //br.s				IL_01b1
	IL_0175:                                                                        //ldc.i4				0x9
	IL_017a:            V_3=9;                                                      //stloc				V_3
	IL_017e:            /*goto IL_0002;*/goto IL_0183;                              //br				IL_0002
	IL_0183:                                                                        //ldarg.0
	IL_0184:            Temp_5=this->F_x4;                                          //ldfld				Root::T_x163^ Root::T_x161 F_x4
	IL_0189:            if(Temp_5!=nullptr)goto IL_0117;                            //brtrue.s				IL_0117
	IL_018b:                                                                        //ldc.i4				0xc
	IL_0190:            V_3=12;                                                     //stloc				V_3
	IL_0194:            /*goto IL_0002;*/goto IL_0199;                              //br				IL_0002
	IL_0199:            goto IL_007d;                                               //br				IL_007d
	IL_019e:                                                                        //ldarg.0
	IL_019f:            Temp_6=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_01a4:                                                                        //ldarg.1
	IL_01a5:                                                                        //ldc.i4.1
	IL_01a6:                                                                        //sub
	IL_01a7:                                                                        //ldelem.ref
	IL_01a8:            V_0=Temp_6[(A_0 - 1)];                                      //stloc.0
	IL_01a9:                                                                        //ldloc.0
	IL_01aa:                                                                        //ldarg.2
	IL_01ab:            V_0->M_x1(A_1);                                             //callvirt				void Root::T_x161::T_x12::M_x1(System::UInt16)
	IL_01b0:            return;                                                     //ret
	IL_01b1:            return;                                                     //ret

}
inline void Root::T_x161::M_x1(System::Int32 A_0,Root::T_x152^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x152^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x10;                                         //ldfld				array<Root::T_x152^>^ Root::T_x161 F_x10
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //ldarg.2
	IL_000e:            Temp_0[A_0]=A_1;                                            //stelem.ref
	IL_000f:            return;                                                     //ret

}
inline void Root::T_x161::M_x1(System::Object^ A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_Body by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x161::M_x10()
//Reflector::CodeModel::IMethodDeclaration^::get_Virtual by M_x10
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.s				64
	IL_0009:                                                                        //and
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:                                                                        //ceq
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:            return (((safe_cast<System::Int32>(Temp_0) & 64) == 0) == false);//ret

}
inline Root::T_x2^ Root::T_x161::M_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x161::M_x12()
//Reflector::CodeModel::IMethodDeclaration^::get_Abstract by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x400
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 1024) == 0) == false);//ret

}
inline void Root::T_x161::M_x12(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_Final by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4.s				-33
	IL_000d:                                                                        //and
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -33);if(A_0)goto IL_0013;//brtrue.s				IL_0013
	IL_0011:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0017;                   //br.s				IL_0017
	IL_0013:                                                                        //ldc.i4.s				32
	IL_0015:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=32;goto IL_001a;         //br.s				IL_001a
	IL_0017:                                                                        //ldc.i4.0
	IL_0018:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_001a;          //br.s				IL_001a
	IL_001a:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_001b:                                                                        //conv.u2
	IL_001c:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_0021:            return;                                                     //ret

}
inline System::Int32 Root::T_x161::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x161::T_x12^>^ Temp_0 = nullptr;
	array<Root::T_x161::T_x12^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_000c:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_000e:            goto IL_0010;                                               //br.s				IL_0010
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_0016:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0017:                                                                        //conv.i4
	IL_0018:            return Temp_2;                                              //ret
	IL_0019:                                                                        //ldc.i4.0
	IL_001a:                                                                        //dup
	IL_001b:                                                                        //dup
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:                                                                        //add
	IL_001e:                                                                        //bgt				IL_001a
	IL_0023:                                                                        //pop
	IL_0024:                                                                        //ldc.i4.0
	IL_0025:            return 0;                                                   //ret

}
inline void Root::T_x161::M_x13(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_RuntimeSpecialName by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4				0xffffefff
	IL_0018:                                                                        //and
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -4097);if(A_0)goto IL_001e;//brtrue.s				IL_001e
	IL_001c:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0025;                   //br.s				IL_0025
	IL_001e:                                                                        //ldc.i4				0x1000
	IL_0023:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=4096;goto IL_0028;       //br.s				IL_0028
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0028;          //br.s				IL_0028
	IL_0028:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0029:                                                                        //conv.u2
	IL_002a:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_002f:            return;                                                     //ret

}
inline System::Boolean Root::T_x161::M_x14()
//Reflector::CodeModel::IMethodDeclaration^::get_Static by M_x14
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.s				16
	IL_0009:                                                                        //and
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:                                                                        //ceq
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:            return (((safe_cast<System::Int32>(Temp_0) & 16) == 0) == false);//ret

}
inline System::Boolean Root::T_x161::M_x15()
//Reflector::CodeModel::IMethodDeclaration^::get_NewSlot by M_x15
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x100
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 256) == 0) == false);//ret

}
inline System::Object^ Root::T_x161::M_x16()
//Reflector::CodeModel::IMethodDeclaration^::get_Body by M_x16
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x159^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x7;                                          //ldfld				System::Object^ Root::T_x161 F_x7
	IL_0006:            if(Temp_0==nullptr)goto IL_0017;                            //brfalse.s				IL_0017
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x7;                                          //ldfld				System::Object^ Root::T_x161 F_x7
	IL_0011:            Temp_2=gcnew Root::T_x159(this,Temp_1);                     //newobj				void Root::T_x159::.ctor(Root::T_x161^,System::Object^)
	IL_0016:            return safe_cast<System::Object^>(Temp_2);                  //ret
	IL_0017:                                                                        //ldnull
	IL_0018:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::MethodVisibility Root::T_x161::M_x17()
//Reflector::CodeModel::IMethodDeclaration^::get_Visibility by M_x17
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.7
	IL_0008:                                                                        //and
	IL_0009:            return safe_cast<Reflector::CodeModel::MethodVisibility>((safe_cast<System::Int32>(Temp_0) & 7));//ret

}
inline System::Boolean Root::T_x161::M_x18()
//Reflector::CodeModel::IMethodDeclaration^::get_HideBySignature by M_x18
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x80
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 128) == 0) == false);//ret

}
inline Reflector::CodeModel::IMethodReferenceCollection^ Root::T_x161::M_x19()
//Reflector::CodeModel::IMethodDeclaration^::get_Overrides by M_x19
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	Root::T_x161::T_x1^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReferenceCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x15;                                         //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x161::T_x1::M_x1();                          //call				Reflector::CodeModel::IMethodReferenceCollection^ Root::T_x161::T_x1::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x15;                                         //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161 F_x15
	IL_0016:            Temp_2=gcnew Root::T_x161::T_x1(Temp_1);                    //newobj				void Root::T_x161::T_x1::.ctor(array<Reflector::CodeModel::IMethodReference^>^)
	IL_001b:            return safe_cast<Reflector::CodeModel::IMethodReferenceCollection^>(Temp_2);//ret

}
inline System::Boolean Root::T_x161::M_x2()
//Reflector::CodeModel::IMethodDeclaration^::get_SpecialName by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x800
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 2048) == 0) == false);//ret

}
inline System::Boolean Root::T_x161::M_x2(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_8 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_9 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_12 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_2=0;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0036;                                               //br.s				IL_0036
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_000b;case 1:goto IL_00c4;case 2:goto IL_004c;case 3:goto IL_005d;case 4:goto IL_00ed;case 5:goto IL_011e;case 6:goto IL_00dd;case 7:goto IL_00b4;};//switch				(IL_000b,IL_00c4,IL_004c,IL_005d,IL_00ed,IL_011e,IL_00dd,IL_00b4)
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_12=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_003c:            if(Temp_12==nullptr)goto IL_0123;                           //brfalse				IL_0123
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_2=2;                                                      //stloc				V_2
	IL_004a:            /*goto IL_000d;*/goto IL_004c;                              //br.s				IL_000d
	IL_004c:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_004e:                                                                        //ldloc.0
	IL_004f:                                                                        //ldc.i4.1
	IL_0050:                                                                        //add
	IL_0051:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0052:                                                                        //ldc.i4				0x3
	IL_0057:            V_2=3;                                                      //stloc				V_2
	IL_005b:            /*goto IL_000d;*/goto IL_005d;                              //br.s				IL_000d
	IL_005d:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_5=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0065:            Temp_6=Temp_5->Length;                                      //ldlen
	IL_0066:                                                                        //conv.i4
	IL_0067:                                                                        //ldc.i4.1
	IL_0068:                                                                        //sub
	IL_0069:                                                                        //conv.ovf.u4
	IL_006a:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_6 - 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_006f:            V_1=Temp_7;                                                 //stloc.1
	IL_0070:                                                                        //ldarg.0
	IL_0071:            Temp_8=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0076:                                                                        //ldc.i4.0
	IL_0077:                                                                        //ldloc.1
	IL_0078:                                                                        //ldc.i4.0
	IL_0079:                                                                        //ldloc.0
	IL_007a:            System::Array::Copy(safe_cast<System::Array^>(Temp_8),safe_cast<System::Int32>(0),safe_cast<System::Array^>(V_1),safe_cast<System::Int32>(0),V_0);//call				void System::Array::Copy(System::Array^,System::Int32,System::Array^,System::Int32,System::Int32)
	IL_007f:                                                                        //ldarg.0
	IL_0080:            Temp_9=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0085:                                                                        //ldloc.0
	IL_0086:                                                                        //ldc.i4.1
	IL_0087:                                                                        //add
	IL_0088:                                                                        //ldloc.1
	IL_0089:                                                                        //ldloc.0
	IL_008a:                                                                        //ldarg.0
	IL_008b:            Temp_10=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0090:            Temp_11=Temp_10->Length;                                    //ldlen
	IL_0091:                                                                        //conv.i4
	IL_0092:                                                                        //ldloc.0
	IL_0093:                                                                        //sub
	IL_0094:                                                                        //ldc.i4.1
	IL_0095:                                                                        //sub
	IL_0096:            System::Array::Copy(safe_cast<System::Array^>(Temp_9),(V_0 + 1),safe_cast<System::Array^>(V_1),V_0,((Temp_11 - V_0) - 1));//call				void System::Array::Copy(System::Array^,System::Int32,System::Array^,System::Int32,System::Int32)
	IL_009b:                                                                        //ldarg.0
	IL_009c:                                                                        //ldloc.1
	IL_009d:            this->F_x5=V_1;                                             //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_00a2:                                                                        //ldc.i4.1
	IL_00a3:            return true;                                                //ret
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:            V_0=0;                                                      //stloc.0
	IL_00a6:                                                                        //ldc.i4				0x7
	IL_00ab:            V_2=7;                                                      //stloc				V_2
	IL_00af:            /*goto IL_000d;*/goto IL_00b4;                              //br				IL_000d
	IL_00b4:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_00b6:                                                                        //ldc.i4				0x1
	IL_00bb:            V_2=1;                                                      //stloc				V_2
	IL_00bf:            /*goto IL_000d;*/goto IL_00c4;                              //br				IL_000d
	IL_00c4:                                                                        //ldloc.0
	IL_00c5:                                                                        //ldarg.0
	IL_00c6:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_00cb:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_00cc:                                                                        //conv.i4
	IL_00cd:            if(V_0<Temp_1)goto IL_00df;                                 //blt.s				IL_00df
	IL_00cf:                                                                        //ldc.i4				0x6
	IL_00d4:            V_2=6;                                                      //stloc				V_2
	IL_00d8:            /*goto IL_000d;*/goto IL_00dd;                              //br				IL_000d
	IL_00dd:            goto IL_0123;                                               //br.s				IL_0123
	IL_00df:                                                                        //ldc.i4				0x4
	IL_00e4:            V_2=4;                                                      //stloc				V_2
	IL_00e8:            /*goto IL_000d;*/goto IL_00ed;                              //br				IL_000d
	IL_00ed:                                                                        //ldc.i4.0
	IL_00ee:                                                                        //dup
	IL_00ef:                                                                        //dup
	IL_00f0:                                                                        //ldc.i4.2
	IL_00f1:                                                                        //sub
	IL_00f2:                                                                        //blt				IL_00ee
	IL_00f7:                                                                        //pop
	IL_00f8:                                                                        //ldarg.1
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:            Temp_2=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_00ff:                                                                        //ldloc.0
	IL_0100:                                                                        //ldelem.ref
	IL_0101:            Temp_3=Temp_2[V_0]->Constructor;                            //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_0106:            Temp_4=A_0->Equals(safe_cast<System::Object^>(Temp_3));     //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_010b:            if(!Temp_4)goto IL_004e;                                    //brfalse				IL_004e
	IL_0110:                                                                        //ldc.i4				0x5
	IL_0115:            V_2=5;                                                      //stloc				V_2
	IL_0119:            /*goto IL_000d;*/goto IL_011e;                              //br				IL_000d
	IL_011e:            goto IL_005f;                                               //br				IL_005f
	IL_0123:                                                                        //ldc.i4.0
	IL_0124:            return false;                                               //ret

}
inline void Root::T_x161::M_x2(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_NewSlot by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4				0xfffffeff
	IL_0010:                                                                        //and
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -257);if(A_0)goto IL_0016;//brtrue.s				IL_0016
	IL_0014:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_001d;                   //br.s				IL_001d
	IL_0016:                                                                        //ldc.i4				0x100
	IL_001b:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=256;goto IL_0020;        //br.s				IL_0020
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0020;          //br.s				IL_0020
	IL_0020:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0021:                                                                        //conv.u2
	IL_0022:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_0027:            return;                                                     //ret

}
inline System::Boolean Root::T_x161::M_x2(System::Object^ A_0)
//System::Object^::Equals by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IMethodReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_0018;*/goto IL_000b;                              //br.s				IL_0018
	IL_000b:                                                                        //ldc.i4.1
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:            goto IL_0031;                                               //br.s				IL_0031
	IL_0018:                                                                        //ldloc				V_1
	IL_001c:            switch(V_1){case 0:goto IL_005c;case 1:goto IL_0040;case 2:goto IL_006a;case 3:goto IL_000b;};//switch				(IL_005c,IL_0040,IL_006a,IL_000b)
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldarg.1
	IL_0033:            if(this!=safe_cast<Root::T_x161^>(A_0))goto IL_004a;        //bne.un.s				IL_004a
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_1=1;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0018;*/goto IL_0040;                              //br.s				IL_0018
	IL_0040:            goto IL_006c;                                               //br.s				IL_006c
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldloc.0
	IL_0044:            Temp_0=Root::T_x149::M_x12(safe_cast<Reflector::CodeModel::IMethodReference^>(this),V_0);//call				System::Boolean Root::T_x149::M_x12(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IMethodReference^)
	IL_0049:            return Temp_0;                                              //ret
	IL_004a:                                                                        //ldarg.1
	IL_004b:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0050:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.0
	IL_0051:                                                                        //ldc.i4				0x0
	IL_0056:            V_1=0;                                                      //stloc				V_1
	IL_005a:            /*goto IL_0018;*/goto IL_005c;                              //br.s				IL_0018
	IL_005c:                                                                        //ldloc.0
	IL_005d:            if(V_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_1=2;                                                      //stloc				V_1
	IL_0068:            /*goto IL_0018;*/goto IL_006a;                              //br.s				IL_0018
	IL_006a:            goto IL_0042;                                               //br.s				IL_0042
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:            return true;                                                //ret
	IL_006e:                                                                        //ldc.i4.0
	IL_006f:            return false;                                               //ret

}
inline System::String^ Root::T_x161::M_x4()
//System::Object^::ToString by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(this));//call				System::String^ Root::T_x149::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x161::M_x4(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_Static by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4.s				-17
	IL_000d:                                                                        //and
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -17);if(A_0)goto IL_0013;//brtrue.s				IL_0013
	IL_0011:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0017;                   //br.s				IL_0017
	IL_0013:                                                                        //ldc.i4.s				16
	IL_0015:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=16;goto IL_001a;         //br.s				IL_001a
	IL_0017:                                                                        //ldc.i4.0
	IL_0018:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_001a;          //br.s				IL_001a
	IL_001a:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_001b:                                                                        //conv.u2
	IL_001c:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_0021:            return;                                                     //ret

}
inline System::Boolean Root::T_x161::M_x5()
//Reflector::CodeModel::IMethodDeclaration^::get_Final by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.s				32
	IL_0009:                                                                        //and
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:                                                                        //ceq
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:            return (((safe_cast<System::Int32>(Temp_0) & 32) == 0) == false);//ret

}
inline void Root::T_x161::M_x5(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_Virtual by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4.s				-65
	IL_0015:                                                                        //and
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -65);if(A_0)goto IL_001b;//brtrue.s				IL_001b
	IL_0019:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_001f;                   //br.s				IL_001f
	IL_001b:                                                                        //ldc.i4.s				64
	IL_001d:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=64;goto IL_0022;         //br.s				IL_0022
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0022;          //br.s				IL_0022
	IL_0022:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0023:                                                                        //conv.u2
	IL_0024:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_0029:            return;                                                     //ret

}
inline System::Int32 Root::T_x161::M_x6()
//System::Object^::GetHashCode by M_x6
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::String^ Root::T_x161 F_x2
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x161::M_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x161::T_x12^>^ Temp_0 = nullptr;
	Root::T_x174^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	Root::T_x163^ Temp_5 = nullptr;
	System::Byte Temp_6 = 0;
	Root::T_x163^ Temp_7 = nullptr;
	Root::T_x174^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	System::UInt16 Temp_10 = 0;
	Root::T_x174^ Temp_11 = nullptr;
	Root::T_x2^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Root::T_x139^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::String^ Temp_16 = nullptr;
	System::InvalidOperationException^ Temp_17 = nullptr;
	System::UInt16 Temp_18 = 0;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	Root::T_x139^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	Reflector::CodeModel::IType^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_7=16;                                                     //stloc				V_7
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_6=1;                                                      //stloc				V_6
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0067;                                               //br.s				IL_0067
	IL_0016:                                                                        //ldloc				V_6
	IL_001a:            switch(V_6){case 0:goto IL_00d9;case 1:goto IL_0014;case 2:goto IL_00bf;case 3:goto IL_0113;case 4:goto IL_01e4;case 5:goto IL_00e9;case 6:goto IL_0100;case 7:goto IL_017b;case 8:goto IL_0195;case 9:goto IL_0225;case 10:goto IL_0150;case 11:goto IL_01ae;case 12:goto IL_00aa;case 13:goto IL_0251;case 14:goto IL_0087;case 15:goto IL_0129;case 16:goto IL_026b;case 17:goto IL_01fc;};//switch				(IL_00d9,IL_0014,IL_00bf,IL_0113,IL_01e4,IL_00e9,IL_0100,IL_017b,IL_0195,IL_0225,IL_0150,IL_01ae,IL_00aa,IL_0251,IL_0087,IL_0129,IL_026b,IL_01fc)
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_18=this->F_x13;                                        //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_006d:                                                                        //conv.i4
	IL_006e:                                                                        //ldc.i4				0x200
	IL_0073:                                                                        //and
	IL_0074:            if((safe_cast<System::Int32>(Temp_18) & 512)!=0)goto IL_0270;//brtrue				IL_0270
	IL_0079:            goto IL_007c;                                               //br.s				IL_007c
	IL_007b:                                                                        //break
	IL_007c:                                                                        //ldc.i4				0xe
	IL_0081:            V_6=14;                                                     //stloc				V_6
	IL_0085:            /*goto IL_0016;*/goto IL_0087;                              //br.s				IL_0016
	IL_0087:            goto IL_01b0;                                               //br				IL_01b0
	IL_008c:                                                                        //ldloc.0
	IL_008d:                                                                        //ldloc.1
	IL_008e:                                                                        //ldarg.0
	IL_008f:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_2=V_0->M_x5(V_1,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_1),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(this));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_009a:            V_5=Temp_2;                                                 //stloc.s				V_5
	IL_009c:                                                                        //ldc.i4				0xc
	IL_00a1:            V_6=12;                                                     //stloc				V_6
	IL_00a5:            /*goto IL_0016;*/goto IL_00aa;                              //br				IL_0016
	IL_00aa:                                                                        //ldloc.s				V_5
	IL_00ac:            if(V_5==nullptr)goto IL_0152;                               //brfalse				IL_0152
	IL_00b1:                                                                        //ldc.i4				0x2
	IL_00b6:            V_6=2;                                                      //stloc				V_6
	IL_00ba:            /*goto IL_0016;*/goto IL_00bf;                              //br				IL_0016
	IL_00bf:            goto IL_0201;                                               //br				IL_0201
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:            Temp_6=V_1->M_x15();                                        //callvirt				System::Byte Root::T_x139::M_x15()
	IL_00ca:                                                                        //pop
	IL_00cb:                                                                        //ldc.i4				0x0
	IL_00d0:            V_6=0;                                                      //stloc				V_6
	IL_00d4:            /*goto IL_0016;*/goto IL_00d9;                              //br				IL_0016
	IL_00d9:            goto IL_013f;                                               //br.s				IL_013f
	IL_00db:                                                                        //ldc.i4				0x5
	IL_00e0:            V_6=5;                                                      //stloc				V_6
	IL_00e4:            /*goto IL_0016;*/goto IL_00e9;                              //br				IL_0016
	IL_00e9:                                                                        //ldloc.2
	IL_00ea:                                                                        //ldc.i4.s				16
	IL_00ec:                                                                        //and
	IL_00ed:            if((V_2 & 16)==0)goto IL_0180;                              //brfalse				IL_0180
	IL_00f2:                                                                        //ldc.i4				0x6
	IL_00f7:            V_6=6;                                                      //stloc				V_6
	IL_00fb:            /*goto IL_0016;*/goto IL_0100;                              //br				IL_0016
	IL_0100:            goto IL_0256;                                               //br				IL_0256
	IL_0105:                                                                        //ldc.i4				0x3
	IL_010a:            V_6=3;                                                      //stloc				V_6
	IL_010e:            /*goto IL_0016;*/goto IL_0113;                              //br				IL_0016
	IL_0113:                                                                        //ldloc.s				V_4
	IL_0115:                                                                        //ldloc.3
	IL_0116:            if(V_4<V_3)goto IL_008c;                                    //blt				IL_008c
	IL_011b:                                                                        //ldc.i4				0xf
	IL_0120:            V_6=15;                                                     //stloc				V_6
	IL_0124:            /*goto IL_0016;*/goto IL_0129;                              //br				IL_0016
	IL_0129:            goto IL_0152;                                               //br.s				IL_0152
	IL_012b:                                                                        //ldstr				L"\x632D\x512F\x5E31\x5233\x5935\x4A37\x5739\x593B\x5A3D\x603F\x2F41\x2143\x3245\x2047\x2549\x284B\x6E4D\x234F\x3B51\x3353\x3855\x3957\x2E59\x295B\x2C5D\x055F\x4C61"
	IL_0130:                                                                        //ldloc				V_7
	IL_0134:            Temp_16=a(L"\x632D\x512F\x5E31\x5233\x5935\x4A37\x5739\x593B\x5A3D\x603F\x2F41\x2143\x3245\x2047\x2549\x284B\x6E4D\x234F\x3B51\x3353\x3855\x3957\x2E59\x295B\x2C5D\x055F\x4C61",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0139:            Temp_17=gcnew System::InvalidOperationException(Temp_16);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_013e:            throw Temp_17;                                              //throw
	IL_013f:                                                                        //ldc.i4.0
	IL_0140:            V_4=0;                                                      //stloc.s				V_4
	IL_0142:                                                                        //ldc.i4				0xa
	IL_0147:            V_6=10;                                                     //stloc				V_6
	IL_014b:            /*goto IL_0016;*/goto IL_0150;                              //br				IL_0016
	IL_0150:            goto IL_0105;                                               //br.s				IL_0105
	IL_0152:                                                                        //ldloc.0
	IL_0153:                                                                        //ldloc.1
	IL_0154:            V_0->M_x12(V_1);                                            //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_0159:                                                                        //ldarg.0
	IL_015a:                                                                        //dup
	IL_015b:            Temp_10=this->F_x13;                                        //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0160:                                                                        //conv.i4
	IL_0161:                                                                        //ldc.i4				0x200
	IL_0166:                                                                        //or
	IL_0167:                                                                        //conv.u2
	IL_0168:            this->F_x13=safe_cast<System::UInt16>((safe_cast<System::Int32>(Temp_10) | 512));//stfld				System::UInt16 Root::T_x161 F_x13
	IL_016d:                                                                        //ldc.i4				0x7
	IL_0172:            V_6=7;                                                      //stloc				V_6
	IL_0176:            /*goto IL_0016;*/goto IL_017b;                              //br				IL_0016
	IL_017b:            goto IL_0270;                                               //br				IL_0270
	IL_0180:                                                                        //ldloc.1
	IL_0181:            Temp_3=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0186:            V_3=Temp_3;                                                 //stloc.3
	IL_0187:                                                                        //ldc.i4				0x8
	IL_018c:            V_6=8;                                                      //stloc				V_6
	IL_0190:            /*goto IL_0016;*/goto IL_0195;                              //br				IL_0016
	IL_0195:                                                                        //ldarg.0
	IL_0196:            Temp_5=this->F_x4;                                          //ldfld				Root::T_x163^ Root::T_x161 F_x4
	IL_019b:            if(Temp_5==nullptr)goto IL_00c4;                            //brfalse				IL_00c4
	IL_01a0:                                                                        //ldc.i4				0xb
	IL_01a5:            V_6=11;                                                     //stloc				V_6
	IL_01a9:            /*goto IL_0016;*/goto IL_01ae;                              //br				IL_0016
	IL_01ae:            goto IL_022a;                                               //br.s				IL_022a
	IL_01b0:                                                                        //ldarg.0
	IL_01b1:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_01b6:                                                                        //ldarg.0
	IL_01b7:            Temp_11=this->F_x8;                                         //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_01bc:            Temp_12=Temp_11->M_x4();                                    //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_01c1:            V_0=Temp_12;                                                //stloc.0
	IL_01c2:                                                                        //ldloc.0
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:            Temp_13=this->F_x12;                                        //ldfld				System::Int32 Root::T_x161 F_x12
	IL_01c9:            Temp_14=V_0->M_x14(Temp_13);                                //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_01ce:            V_1=Temp_14;                                                //stloc.1
	IL_01cf:                                                                        //ldloc.1
	IL_01d0:            Temp_15=V_1->M_x6();                                        //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_01d5:            V_2=Temp_15;                                                //stloc.2
	IL_01d6:                                                                        //ldc.i4				0x4
	IL_01db:            V_6=4;                                                      //stloc				V_6
	IL_01df:            /*goto IL_0016;*/goto IL_01e4;                              //br				IL_0016
	IL_01e4:                                                                        //ldloc.2
	IL_01e5:                                                                        //ldc.i4.s				15
	IL_01e7:                                                                        //and
	IL_01e8:                                                                        //ldc.i4.5
	IL_01e9:            if((V_2 & 15)<=5)goto IL_00db;                              //ble				IL_00db
	IL_01ee:                                                                        //ldc.i4				0x11
	IL_01f3:            V_6=17;                                                     //stloc				V_6
	IL_01f7:            /*goto IL_0016;*/goto IL_01fc;                              //br				IL_0016
	IL_01fc:            goto IL_012b;                                               //br				IL_012b
	IL_0201:                                                                        //ldarg.0
	IL_0202:            Temp_0=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_0207:                                                                        //ldloc.s				V_4
	IL_0209:                                                                        //ldelem.ref
	IL_020a:                                                                        //ldloc.s				V_5
	IL_020c:            Temp_0[V_4]->M_x2(V_5);                                     //callvirt				void Root::T_x161::T_x12::M_x2(Reflector::CodeModel::IType^)
	IL_0211:                                                                        //ldloc.s				V_4
	IL_0213:                                                                        //ldc.i4.1
	IL_0214:                                                                        //add
	IL_0215:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_0217:                                                                        //ldc.i4				0x9
	IL_021c:            V_6=9;                                                      //stloc				V_6
	IL_0220:            /*goto IL_0016;*/goto IL_0225;                              //br				IL_0016
	IL_0225:            goto IL_0105;                                               //br				IL_0105
	IL_022a:                                                                        //ldarg.0
	IL_022b:            Temp_7=this->F_x4;                                          //ldfld				Root::T_x163^ Root::T_x161 F_x4
	IL_0230:                                                                        //ldloc.0
	IL_0231:                                                                        //ldloc.1
	IL_0232:                                                                        //ldarg.0
	IL_0233:            Temp_8=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_0238:                                                                        //ldarg.0
	IL_0239:            Temp_9=V_0->M_x5(V_1,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_8),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(this));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_023e:            Temp_7->M_x1(Temp_9);                                       //callvirt				void Root::T_x163::M_x1(Reflector::CodeModel::IType^)
	IL_0243:                                                                        //ldc.i4				0xd
	IL_0248:            V_6=13;                                                     //stloc				V_6
	IL_024c:            /*goto IL_0016;*/goto IL_0251;                              //br				IL_0016
	IL_0251:            goto IL_013f;                                               //br				IL_013f
	IL_0256:                                                                        //ldloc.1
	IL_0257:            Temp_4=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_025c:                                                                        //pop
	IL_025d:                                                                        //ldc.i4				0x10
	IL_0262:            V_6=16;                                                     //stloc				V_6
	IL_0266:            /*goto IL_0016;*/goto IL_026b;                              //br				IL_0016
	IL_026b:            goto IL_0180;                                               //br				IL_0180
	IL_0270:            return;                                                     //ret

}
inline System::Boolean Root::T_x161::M_x8()
//Reflector::CodeModel::IMethodDeclaration^::get_RuntimeSpecialName by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x1000
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 4096) == 0) == false);//ret

}
inline void Root::T_x161::M_x8(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_Abstract by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4				0xfffffbff
	IL_0018:                                                                        //and
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -1025);if(A_0)goto IL_001e;//brtrue.s				IL_001e
	IL_001c:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0025;                   //br.s				IL_0025
	IL_001e:                                                                        //ldc.i4				0x400
	IL_0023:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=1024;goto IL_0028;       //br.s				IL_0028
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0028;          //br.s				IL_0028
	IL_0028:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0029:                                                                        //conv.u2
	IL_002a:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_002f:            return;                                                     //ret

}
inline System::Int32 Root::T_x161::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x161 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x161::M_x9(System::Boolean A_0)
//Reflector::CodeModel::IMethodDeclaration^::set_SpecialName by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4				0xfffff7ff
	IL_0010:                                                                        //and
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -2049);if(A_0)goto IL_0016;//brtrue.s				IL_0016
	IL_0014:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_001d;                   //br.s				IL_001d
	IL_0016:                                                                        //ldc.i4				0x800
	IL_001b:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=2048;goto IL_0020;       //br.s				IL_0020
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0020;          //br.s				IL_0020
	IL_0020:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0021:                                                                        //conv.u2
	IL_0022:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_0027:            return;                                                     //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x161::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IMethodDeclaration^>(this);//ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x161::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	Root::T_x11^ Temp_4 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:            Temp_1->M_x12();                                            //callvirt				void Root::T_x2::M_x12()
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0016:            if(Temp_2!=nullptr)goto IL_0023;                            //brtrue.s				IL_0023
	IL_0018:            goto IL_001b;                                               //br.s				IL_001b
	IL_001a:                                                                        //break
	IL_001b:            goto IL_001d;                                               //br.s				IL_001d
	IL_001d:            Temp_5=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_0022:            return Temp_5;                                              //ret
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_3=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x161 F_x5
	IL_0029:            Temp_4=gcnew Root::T_x11(Temp_3);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_002e:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_4);//ret

}
inline Reflector::CodeModel::MethodCallingConvention Root::T_x161::CallingConvention::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::MethodCallingConvention Temp_0 = (Reflector::CodeModel::MethodCallingConvention)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x9;                                          //ldfld				Reflector::CodeModel::MethodCallingConvention Root::T_x161 F_x9
	IL_000c:            return Temp_0;                                              //ret

}
inline void Root::T_x161::CallingConvention::set(Reflector::CodeModel::MethodCallingConvention value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IType^ Root::T_x161::DeclaringType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_0006:            return safe_cast<Reflector::CodeModel::IType^>(Temp_0);     //ret

}
inline void Root::T_x161::DeclaringType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x161::Documentation::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x2^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x11();                                       //call				Root::T_x2^ Root::T_x161::M_x11()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_1=Temp_0->M_x12(safe_cast<System::Object^>(this));     //callvirt				System::String^ Root::T_x2::M_x12(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline void Root::T_x161::Documentation::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x161::ExplicitThis::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0017:                                                                        //conv.i4
	IL_0018:                                                                        //ldc.i4				0x4000
	IL_001d:                                                                        //and
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ceq
	IL_0021:                                                                        //ldc.i4.0
	IL_0022:                                                                        //ceq
	IL_0024:            return (((safe_cast<System::Int32>(Temp_0) & 16384) == 0) == false);//ret

}
inline void Root::T_x161::ExplicitThis::set(System::Boolean value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4				0xffffbfff
	IL_0018:                                                                        //and
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -16385);if(value)goto IL_001e;//brtrue.s				IL_001e
	IL_001c:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0025;                   //br.s				IL_0025
	IL_001e:                                                                        //ldc.i4				0x4000
	IL_0023:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=16384;goto IL_0028;      //br.s				IL_0028
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0028;          //br.s				IL_0028
	IL_0028:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0029:                                                                        //conv.u2
	IL_002a:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_002f:            return;                                                     //ret

}
inline Reflector::CodeModel::ITypeCollection^ Root::T_x161::GenericArguments::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x152^>^ Temp_0 = nullptr;
	array<Root::T_x152^>^ Temp_1 = nullptr;
	Root::T_x173^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x7();                                               //call				void Root::T_x161::M_x7()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x10;                                         //ldfld				array<Root::T_x152^>^ Root::T_x161 F_x10
	IL_000c:            if(Temp_0!=nullptr)goto IL_0019;                            //brtrue.s				IL_0019
	IL_000e:            goto IL_0011;                                               //br.s				IL_0011
	IL_0010:                                                                        //break
	IL_0011:            goto IL_0013;                                               //br.s				IL_0013
	IL_0013:            Temp_3=Root::T_x173::M_x1();                                //call				Reflector::CodeModel::ITypeCollection^ Root::T_x173::M_x1()
	IL_0018:            return Temp_3;                                              //ret
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_1=this->F_x10;                                         //ldfld				array<Root::T_x152^>^ Root::T_x161 F_x10
	IL_001f:            Temp_2=gcnew Root::T_x173(safe_cast<array<Reflector::CodeModel::IType^>^>(Temp_1));//newobj				void Root::T_x173::.ctor(array<Reflector::CodeModel::IType^>^)
	IL_0024:            return safe_cast<Reflector::CodeModel::ITypeCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x161::GenericMethod::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline void Root::T_x161::GenericMethod::set(Reflector::CodeModel::IMethodReference^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x161::HasThis::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_000f:                                                                        //conv.i4
	IL_0010:                                                                        //ldc.i4				0x2000
	IL_0015:                                                                        //and
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ceq
	IL_0019:                                                                        //ldc.i4.0
	IL_001a:                                                                        //ceq
	IL_001c:            return (((safe_cast<System::Int32>(Temp_0) & 8192) == 0) == false);//ret

}
inline void Root::T_x161::HasThis::set(System::Boolean value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x161^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x161^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x161^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x161 F_x13
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4				0xffffdfff
	IL_0010:                                                                        //and
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -8193);if(value)goto IL_0016;//brtrue.s				IL_0016
	IL_0014:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_001d;                   //br.s				IL_001d
	IL_0016:                                                                        //ldc.i4				0x2000
	IL_001b:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=8192;goto IL_0020;       //br.s				IL_0020
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0020;          //br.s				IL_0020
	IL_0020:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0021:                                                                        //conv.u2
	IL_0022:            Temp_9->F_x13=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x161 F_x13
	IL_0027:            return;                                                     //ret

}
inline System::String^ Root::T_x161::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::String^ Root::T_x161 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x161::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x161::Parameters::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x161::T_x12^>^ Temp_0 = nullptr;
	array<Root::T_x161::T_x12^>^ Temp_1 = nullptr;
	Root::T_x161::T_x2^ Temp_2 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_000c:            if(Temp_0!=nullptr)goto IL_0016;                            //brtrue.s				IL_0016
	IL_000e:            goto IL_0010;                                               //br.s				IL_0010
	IL_0010:            Temp_3=Root::T_x161::T_x2::M_x1();                          //call				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x161::T_x2::M_x1()
	IL_0015:            return Temp_3;                                              //ret
	IL_0016:            goto IL_0019;                                               //br.s				IL_0019
	IL_0018:                                                                        //break
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_1=this->F_x11;                                         //ldfld				array<Root::T_x161::T_x12^>^ Root::T_x161 F_x11
	IL_001f:            Temp_2=gcnew Root::T_x161::T_x2(safe_cast<array<Reflector::CodeModel::IParameterDeclaration^>^>(Temp_1));//newobj				void Root::T_x161::T_x2::.ctor(array<Reflector::CodeModel::IParameterDeclaration^>^)
	IL_0024:            return safe_cast<Reflector::CodeModel::IParameterDeclarationCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::IMethodReturnType^ Root::T_x161::ReturnType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x163^ Temp_0 = nullptr;
	Root::T_x163^ Temp_1 = nullptr;
	Root::T_x174^ Temp_2 = nullptr;
	Root::T_x2^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x161::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x163^ Root::T_x161 F_x4
	IL_000c:            if(Temp_0!=nullptr)goto IL_0021;                            //brtrue.s				IL_0021
	IL_000e:            goto IL_0010;                                               //br.s				IL_0010
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x8;                                          //ldfld				Root::T_x174^ Root::T_x161 F_x8
	IL_0016:            Temp_3=Temp_2->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_001b:            Temp_4=Temp_3->M_x7();                                      //callvirt				Reflector::CodeModel::IMethodReturnType^ Root::T_x2::M_x7()
	IL_0020:            return Temp_4;                                              //ret
	IL_0021:                                                                        //ldc.i4.4
	IL_0022:                                                                        //dup
	IL_0023:                                                                        //dup
	IL_0024:                                                                        //ldc.i4.2
	IL_0025:                                                                        //sub
	IL_0026:                                                                        //blt				IL_0022
	IL_002b:                                                                        //pop
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_1=this->F_x4;                                          //ldfld				Root::T_x163^ Root::T_x161 F_x4
	IL_0032:            return safe_cast<Reflector::CodeModel::IMethodReturnType^>(Temp_1);//ret

}
inline void Root::T_x161::ReturnType::set(Reflector::CodeModel::IMethodReturnType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x161::T_x12::T_x12(Root::T_x161^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4				0x1fffffff
	IL_0006:            this->F_x12=536870911;                                      //stfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x1=A_0;                                             //stfld				Root::T_x161^ Root::T_x161::T_x12 F_x1
	IL_0018:            return;                                                     //ret

}
inline Reflector::CodeModel::IType^ Root::T_x161::T_x12::M_x1()
//Reflector::CodeModel::IParameterDeclaration^::get_ParameterType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Root::T_x161^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IType^ Root::T_x161::T_x12 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0017;                            //brtrue.s				IL_0017
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x161::T_x12 F_x1
	IL_0010:            Temp_2->M_x7();                                             //callvirt				void Root::T_x161::M_x7()
	IL_0015:            goto IL_0017;                                               //br.s				IL_0017
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				Reflector::CodeModel::IType^ Root::T_x161::T_x12 F_x2
	IL_001d:            return Temp_1;                                              //ret

}
inline void Root::T_x161::T_x12::M_x1(Reflector::CodeModel::IExpression^ A_0)
//Reflector::CodeModel::IParameterDeclaration^::set_DefaultValue by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x12::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::IParameterDeclaration^::set_ParameterType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IType^ Root::T_x161::T_x12 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x161::T_x12::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::UInt32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::NotSupportedException^ Temp_3 = nullptr;
	System::UInt32 Temp_4 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_0=3;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_005f;case 1:goto IL_0077;case 2:goto IL_003e;case 3:goto IL_0014;};//switch				(IL_005f,IL_0077,IL_003e,IL_0014)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldc.i4.m1
	IL_0031:            if(A_0!=-1)goto IL_0054;                                    //bne.un.s				IL_0054
	IL_0033:                                                                        //ldc.i4				0x2
	IL_0038:            V_0=2;                                                      //stloc				V_0
	IL_003c:            /*goto IL_0016;*/goto IL_003e;                              //br.s				IL_0016
	IL_003e:            goto IL_007c;                                               //br.s				IL_007c
	IL_0040:                                                                        //ldstr				L"\x701F\x4321\x5623\x4725\x4527\x4F29\x582B\x4B2D\x422F\x1231\x5A33\x5735\x5537\x5F39\x1C3B\x573D\x2E3F\x2641\x2143\x3E45\x6847\x2549\x394B\x3A4D\x704F\x3D51\x3253\x7655\x2A57\x3B59\x325B\x395D\x055F\x4C61"
	IL_0045:                                                                        //ldloc				V_1
	IL_0049:            Temp_2=a(L"\x701F\x4321\x5623\x4725\x4527\x4F29\x582B\x4B2D\x422F\x1231\x5A33\x5735\x5537\x5F39\x1C3B\x573D\x2E3F\x2641\x2143\x3E45\x6847\x2549\x394B\x3A4D\x704F\x3D51\x3253\x7655\x2A57\x3B59\x325B\x395D\x055F\x4C61",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004e:            Temp_3=gcnew System::NotSupportedException(Temp_2);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0053:            throw Temp_3;                                               //throw
	IL_0054:                                                                        //ldc.i4				0x0
	IL_0059:            V_0=0;                                                      //stloc				V_0
	IL_005d:            /*goto IL_0016;*/goto IL_005f;                              //br.s				IL_0016
	IL_005f:                                                                        //ldarg.1
	IL_0060:                                                                        //conv.i8
	IL_0061:                                                                        //ldc.i4				0xe0000000
	IL_0066:                                                                        //conv.u8
	IL_0067:                                                                        //and
	IL_0068:                                                                        //ldc.i4.0
	IL_0069:                                                                        //conv.i8
	IL_006a:            if((safe_cast<System::Int64>(A_0) & 3758096384)==0)goto IL_008f;//beq.s				IL_008f
	IL_006c:                                                                        //ldc.i4				0x1
	IL_0071:            V_0=1;                                                      //stloc				V_0
	IL_0075:            /*goto IL_0016;*/goto IL_0077;                              //br.s				IL_0016
	IL_0077:            goto IL_007a;                                               //br.s				IL_007a
	IL_0079:                                                                        //break
	IL_007a:            goto IL_0040;                                               //br.s				IL_0040
	IL_007c:                                                                        //ldarg.0
	IL_007d:                                                                        //dup
	IL_007e:            Temp_4=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_0083:                                                                        //ldc.i4				0x1fffffff
	IL_0088:                                                                        //or
	IL_0089:            this->F_x12=safe_cast<System::UInt32>((Temp_4 | 536870911));//stfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_008e:            return;                                                     //ret
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //ldarg.0
	IL_0091:            Temp_0=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_0096:                                                                        //ldc.i4				0xe0000000
	IL_009b:                                                                        //and
	IL_009c:            this->F_x12=safe_cast<System::UInt32>((Temp_0 & 3758096384));//stfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:            Temp_1=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_00a8:                                                                        //ldarg.1
	IL_00a9:                                                                        //or
	IL_00aa:            this->F_x12=safe_cast<System::UInt32>((Temp_1 | safe_cast<System::UInt32>(A_0)));//stfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_00af:            return;                                                     //ret

}
inline void Root::T_x161::T_x12::M_x1(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::UInt32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //dup
	IL_0005:            Temp_0=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_000a:                                                                        //ldc.i4				0x1fffffff
	IL_000f:                                                                        //and
	IL_0010:            this->F_x12=safe_cast<System::UInt32>((Temp_0 & 536870911));//stfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldarg.0
	IL_0017:            Temp_1=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_001c:                                                                        //ldarg.1
	IL_001d:                                                                        //conv.i4
	IL_001e:                                                                        //ldc.i4.s				29
	IL_0020:                                                                        //shl
	IL_0021:                                                                        //or
	IL_0022:            this->F_x12=safe_cast<System::UInt32>((Temp_1 | safe_cast<System::UInt32>((safe_cast<System::Int32>(A_0) << 29))));//stfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_0027:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x161::T_x12::M_x2()
//Reflector::CodeModel::IParameterDeclaration^::get_DefaultValue by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x161^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x161::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->M_x11();                                     //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=Temp_1->M_x1(safe_cast<Reflector::CodeModel::IParameterDeclaration^>(this));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x2::M_x1(Reflector::CodeModel::IParameterDeclaration^)
	IL_0011:            return Temp_2;                                              //ret

}
inline void Root::T_x161::T_x12::M_x2(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IType^ Root::T_x161::T_x12 F_x2
	IL_0007:            return;                                                     //ret

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x161::T_x12::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IParameterDeclaration^>(this);//ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x161::T_x12::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x161^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	Root::T_x161^ Temp_3 = nullptr;
	Root::T_x2^ Temp_4 = nullptr;
	System::UInt32 Temp_5 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Root::T_x11^ Temp_11 = nullptr;
	Root::T_x11^ Temp_12 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_13 = nullptr;
	Root::T_x11^ Temp_14 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICustomAttribute^>^ V_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ V_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_007d;case 1:goto IL_008e;case 2:goto IL_0070;case 3:goto IL_00d0;case 4:goto IL_00bf;case 5:goto IL_00af;case 6:goto IL_009e;case 7:goto IL_0062;};//switch				(IL_007d,IL_008e,IL_0070,IL_00d0,IL_00bf,IL_00af,IL_009e,IL_0062)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x161::T_x12 F_x1
	IL_0031:            Temp_1=Temp_0->M_x11();                                     //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_2=Temp_1->M_x2(safe_cast<Reflector::CodeModel::IParameterDeclaration^>(this));//callvirt				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x2::M_x2(Reflector::CodeModel::IParameterDeclaration^)
	IL_003c:            V_0=Temp_2;                                                 //stloc.0
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_3=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x161::T_x12 F_x1
	IL_0043:            Temp_4=Temp_3->M_x11();                                     //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_5=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_004e:                                                                        //ldc.i4.s				29
	IL_0050:                                                                        //shr.un
	IL_0051:            Temp_6=Temp_4->M_x6(safe_cast<System::Int32>((Temp_5 >> 29)));//callvirt				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x2::M_x6(System::Int32)
	IL_0056:            V_1=Temp_6;                                                 //stloc.1
	IL_0057:                                                                        //ldc.i4				0x7
	IL_005c:            V_3=7;                                                      //stloc				V_3
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:                                                                        //ldloc.0
	IL_0063:            if(V_0!=nullptr)goto IL_0090;                               //brtrue.s				IL_0090
	IL_0065:                                                                        //ldc.i4				0x2
	IL_006a:            V_3=2;                                                      //stloc				V_3
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0072:                                                                        //ldc.i4				0x0
	IL_0077:            V_3=0;                                                      //stloc				V_3
	IL_007b:            /*goto IL_0002;*/goto IL_007d;                              //br.s				IL_0002
	IL_007d:                                                                        //ldloc.0
	IL_007e:            if(V_0!=nullptr)goto IL_00f1;                               //brtrue.s				IL_00f1
	IL_0080:                                                                        //ldc.i4				0x1
	IL_0085:            V_3=1;                                                      //stloc				V_3
	IL_0089:            /*goto IL_0002;*/goto IL_008e;                              //br				IL_0002
	IL_008e:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_0090:                                                                        //ldc.i4				0x6
	IL_0095:            V_3=6;                                                      //stloc				V_3
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:                                                                        //ldloc.1
	IL_009f:            if(V_1!=nullptr)goto IL_0072;                               //brtrue.s				IL_0072
	IL_00a1:                                                                        //ldc.i4				0x5
	IL_00a6:            V_3=5;                                                      //stloc				V_3
	IL_00aa:            /*goto IL_0002;*/goto IL_00af;                              //br				IL_0002
	IL_00af:            goto IL_00ea;                                               //br.s				IL_00ea
	IL_00b1:                                                                        //ldc.i4				0x4
	IL_00b6:            V_3=4;                                                      //stloc				V_3
	IL_00ba:            /*goto IL_0002;*/goto IL_00bf;                              //br				IL_0002
	IL_00bf:                                                                        //ldloc.1
	IL_00c0:            if(V_1!=nullptr)goto IL_0090;                               //brtrue.s				IL_0090
	IL_00c2:                                                                        //ldc.i4				0x3
	IL_00c7:            V_3=3;                                                      //stloc				V_3
	IL_00cb:            /*goto IL_0002;*/goto IL_00d0;                              //br				IL_0002
	IL_00d0:                                                                        //ldc.i4.4
	IL_00d1:                                                                        //dup
	IL_00d2:                                                                        //dup
	IL_00d3:                                                                        //ldc.i4.2
	IL_00d4:                                                                        //sub
	IL_00d5:                                                                        //blt				IL_00d1
	IL_00da:                                                                        //pop
	IL_00db:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00dd:                                                                        //ldloc.1
	IL_00de:            Temp_12=gcnew Root::T_x11(V_1);                             //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_00e3:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_12);//ret
	IL_00e4:            Temp_13=Root::T_x11::M_x1();                                //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_00e9:            return Temp_13;                                             //ret
	IL_00ea:                                                                        //ldloc.0
	IL_00eb:            Temp_14=gcnew Root::T_x11(V_0);                             //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_00f0:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_14);//ret
	IL_00f1:                                                                        //ldloc.0
	IL_00f2:            Temp_7=V_0->Length;                                         //ldlen
	IL_00f3:                                                                        //conv.i4
	IL_00f4:                                                                        //ldloc.1
	IL_00f5:            Temp_8=V_1->Length;                                         //ldlen
	IL_00f6:                                                                        //conv.i4
	IL_00f7:                                                                        //add
	IL_00f8:                                                                        //conv.ovf.u4
	IL_00f9:            Temp_9=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_7 + Temp_8)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_00fe:            V_2=Temp_9;                                                 //stloc.2
	IL_00ff:                                                                        //ldloc.1
	IL_0100:                                                                        //ldloc.2
	IL_0101:                                                                        //ldc.i4.0
	IL_0102:            V_1->CopyTo(safe_cast<System::Array^>(V_2),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0107:                                                                        //ldloc.0
	IL_0108:                                                                        //ldloc.2
	IL_0109:                                                                        //ldloc.1
	IL_010a:            Temp_10=V_1->Length;                                        //ldlen
	IL_010b:                                                                        //conv.i4
	IL_010c:            V_0->CopyTo(safe_cast<System::Array^>(V_2),Temp_10);        //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0111:                                                                        //ldloc.2
	IL_0112:            Temp_11=gcnew Root::T_x11(V_2);                             //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_0117:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_11);//ret

}
inline System::String^ Root::T_x161::T_x12::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	Root::T_x161^ Temp_2 = nullptr;
	Root::T_x2^ Temp_3 = nullptr;
	System::UInt32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_0006:                                                                        //ldc.i4				0x1fffffff
	IL_000b:                                                                        //and
	IL_000c:                                                                        //ldc.i4				0x1fffffff
	IL_0011:            if((Temp_0 & 536870911)==536870911)goto IL_0035;            //beq.s				IL_0035
	IL_0013:            goto IL_0016;                                               //br.s				IL_0016
	IL_0015:                                                                        //break
	IL_0016:            goto IL_0018;                                               //br.s				IL_0018
	IL_0018:                                                                        //ldarg.0
	IL_0019:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x161::T_x12 F_x1
	IL_001e:            Temp_3=Temp_2->M_x11();                                     //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_4=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x161::T_x12 F_x12
	IL_0029:                                                                        //ldc.i4				0x1fffffff
	IL_002e:                                                                        //and
	IL_002f:            Temp_5=Temp_3->M_x17((Temp_4 & 536870911));                 //callvirt				System::String^ Root::T_x2::M_x17(System::Int32)
	IL_0034:            return Temp_5;                                              //ret
	IL_0035:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_003a:            return Temp_1;                                              //ret

}
inline void Root::T_x161::T_x12::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline static Root::T_x161::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x161::T_x2^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x161::T_x2(safe_cast<array<Reflector::CodeModel::IParameterDeclaration^>^>(nullptr));//newobj				void Root::T_x161::T_x2::.ctor(array<Reflector::CodeModel::IParameterDeclaration^>^)
	IL_0006:            Root::T_x161::T_x2::F_x1=safe_cast<Reflector::CodeModel::IParameterDeclarationCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x161::T_x2 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x161::T_x2::T_x2(array<Reflector::CodeModel::IParameterDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x161::T_x2::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x161::T_x2::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0016:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_001b:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x161::T_x2::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x161::T_x2::F_x1;                            //ldsfld				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x161::T_x2 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x161::T_x2::M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.m1
	IL_000b:            return -1;                                                  //ret
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:                                                                        //sub
	IL_0011:                                                                        //blt				IL_000d
	IL_0016:                                                                        //pop
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0025:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0026:                                                                        //conv.i4
	IL_0027:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_002c:            return Temp_4;                                              //ret

}
inline void Root::T_x161::T_x2::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x161::T_x2::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x161::T_x2::M_x1(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1)
//Reflector::CodeModel::IParameterDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x2::M_x12(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x2::M_x13(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x2::M_x2()
//Reflector::CodeModel::IParameterDeclarationCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x2=safe_cast<array<Reflector::CodeModel::IParameterDeclaration^>^>(nullptr);//stfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x161::T_x2::M_x2(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000f;                            //brtrue.s				IL_000f
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:            return false;                                               //ret
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_001d:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldc.i4.m1
	IL_0025:                                                                        //ceq
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ceq
	IL_002a:            return ((Temp_4 == -1) == false);                           //ret

}
inline void Root::T_x161::T_x2::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x2::M_x2(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1)
//Reflector::CodeModel::IParameterDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x161::T_x2::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x161::T_x2::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x161::T_x2::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x161::T_x2 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline static Root::T_x161::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x161::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x161::T_x1(safe_cast<array<Reflector::CodeModel::IMethodReference^>^>(nullptr));//newobj				void Root::T_x161::T_x1::.ctor(array<Reflector::CodeModel::IMethodReference^>^)
	IL_0006:            Root::T_x161::T_x1::F_x1=safe_cast<Reflector::CodeModel::IMethodReferenceCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IMethodReferenceCollection^ Root::T_x161::T_x1 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x161::T_x1::T_x1(array<Reflector::CodeModel::IMethodReference^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x161::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x161::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0016:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_001b:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::IMethodReferenceCollection^ Root::T_x161::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReferenceCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x161::T_x1::F_x1;                            //ldsfld				Reflector::CodeModel::IMethodReferenceCollection^ Root::T_x161::T_x1 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x161::T_x1::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IMethodReferenceCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.m1
	IL_000b:            return -1;                                                  //ret
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:                                                                        //sub
	IL_0011:                                                                        //blt				IL_000d
	IL_0016:                                                                        //pop
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0025:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0026:                                                                        //conv.i4
	IL_0027:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_002c:            return Temp_4;                                              //ret

}
inline void Root::T_x161::T_x1::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IMethodReferenceCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x161::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IMethodReferenceCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x161::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IMethodReference^ A_1)
//Reflector::CodeModel::IMethodReferenceCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x1::M_x12(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IMethodReferenceCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x1::M_x13(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IMethodReferenceCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x1::M_x2()
//Reflector::CodeModel::IMethodReferenceCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x161::T_x1::M_x2(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IMethodReferenceCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000f;                            //brtrue.s				IL_000f
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:            return false;                                               //ret
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_001d:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldc.i4.m1
	IL_0025:                                                                        //ceq
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ceq
	IL_002a:            return ((Temp_4 == -1) == false);                           //ret

}
inline void Root::T_x161::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IMethodReferenceCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x161::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IMethodReference^ A_1)
//Reflector::CodeModel::IMethodReferenceCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x161::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x161::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x161::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodReference^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IMethodReference^>^ Root::T_x161::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
