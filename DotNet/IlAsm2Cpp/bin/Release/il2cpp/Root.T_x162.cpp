#include "global_xref.h"

inline Root::T_x162::T_x162(Root::T_x2^ A_0,System::Int32 A_1,Reflector::CodeModel::IType^ A_2,System::String^ A_3,System::Int32 A_4,Reflector::CodeModel::IGenericArgumentProvider^ A_5,Reflector::CodeModel::IGenericArgumentProvider^ A_6)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldnull
	IL_0008:            this->F_x1=safe_cast<System::WeakReference^>(nullptr);      //stfld				System::WeakReference^ Root::T_x162 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x2=A_0;                                             //stfld				Root::T_x2^ Root::T_x162 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.2
	IL_0016:            this->F_x12=A_1;                                            //stfld				System::Int32 Root::T_x162 F_x12
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.3
	IL_001d:            this->F_x13=A_2;                                            //stfld				Reflector::CodeModel::IType^ Root::T_x162 F_x13
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldarg.s				A_3
	IL_0025:            this->F_x8=A_3;                                             //stfld				System::String^ Root::T_x162 F_x8
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldarg.s				A_4
	IL_002d:            this->F_x5=A_4;                                             //stfld				System::Int32 Root::T_x162 F_x5
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldnull
	IL_0034:            this->F_x10=safe_cast<Reflector::CodeModel::IType^>(nullptr);//stfld				Reflector::CodeModel::IType^ Root::T_x162 F_x10
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldnull
	IL_003b:            this->F_x7=safe_cast<array<Reflector::CodeModel::IType^>^>(nullptr);//stfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldarg.s				A_5
	IL_0043:            this->F_x9=A_5;                                             //stfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x162 F_x9
	IL_0048:                                                                        //ldarg.0
	IL_0049:                                                                        //ldarg.s				A_6
	IL_004b:            this->F_x4=A_6;                                             //stfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x162 F_x4
	IL_0050:            return;                                                     //ret

}
inline System::Int32 Root::T_x162::CompareTo(System::Object^ obj)
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
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_2=11;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0073;case 1:goto IL_003e;case 2:goto IL_0065;case 3:goto IL_0014;};//switch				(IL_0073,IL_003e,IL_0065,IL_0014)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldarg.1
	IL_0031:            if(this!=safe_cast<Root::T_x162^>(obj))goto IL_0053;        //bne.un.s				IL_0053
	IL_0033:                                                                        //ldc.i4				0x1
	IL_0038:            V_1=1;                                                      //stloc				V_1
	IL_003c:            /*goto IL_0016;*/goto IL_003e;                              //br.s				IL_0016
	IL_003e:            goto IL_0075;                                               //br.s				IL_0075
	IL_0040:                                                                        //ldc.i4.2
	IL_0041:                                                                        //dup
	IL_0042:                                                                        //dup
	IL_0043:                                                                        //ldc.i4.7
	IL_0044:                                                                        //add
	IL_0045:                                                                        //bgt				IL_0041
	IL_004a:                                                                        //pop
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldloc.0
	IL_004d:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IMethodReference^)
	IL_0052:            return Temp_0;                                              //ret
	IL_0053:                                                                        //ldarg.1
	IL_0054:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0059:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReference^>(obj);//stloc.0
	IL_005a:                                                                        //ldc.i4				0x2
	IL_005f:            V_1=2;                                                      //stloc				V_1
	IL_0063:            /*goto IL_0016;*/goto IL_0065;                              //br.s				IL_0016
	IL_0065:                                                                        //ldloc.0
	IL_0066:            if(V_0==nullptr)goto IL_0077;                               //brfalse.s				IL_0077
	IL_0068:                                                                        //ldc.i4				0x0
	IL_006d:            V_1=0;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0016;*/goto IL_0073;                              //br.s				IL_0016
	IL_0073:            goto IL_0040;                                               //br.s				IL_0040
	IL_0075:                                                                        //ldc.i4.0
	IL_0076:            return 0;                                                   //ret
	IL_0077:                                                                        //ldstr				L"\x6828\x592A\x4A2C\x5A2E\x5C30\x5632\x5B34\x4336\x1938\x563A\x483C\x4C3E\x3540\x6342\x2744\x2246\x6948\x264A\x284C\x3B4E\x3950\x3C52\x3154\x7756\x2B58\x3E5A\x3B5C\x3A5E\x1360\x0662\x0B64\x0466\x0C68\x456A"
	IL_007c:                                                                        //ldloc				V_2
	IL_0080:            Temp_1=a(L"\x6828\x592A\x4A2C\x5A2E\x5C30\x5632\x5B34\x4336\x1938\x563A\x483C\x4C3E\x3540\x6342\x2744\x2246\x6948\x264A\x284C\x3B4E\x3950\x3C52\x3154\x7756\x2B58\x3E5A\x3B5C\x3A5E\x1360\x0662\x0B64\x0466\x0C68\x456A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0085:                                                                        //ldstr				L"\x4628\x492A\x472C"
	IL_008a:                                                                        //ldloc				V_2
	IL_008e:            Temp_2=a(L"\x4628\x492A\x472C",V_2);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0093:            Temp_3=gcnew System::ArgumentException(Temp_1,Temp_2);      //newobj				void System::ArgumentException::.ctor(System::String^,System::String^)
	IL_0098:            throw Temp_3;                                               //throw

}
inline void Root::T_x162::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x2^ Temp_1 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_2 = nullptr;
	System::Byte Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::InvalidOperationException^ Temp_8 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_9 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_10 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_11 = nullptr;
	Root::T_x2^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	Root::T_x2^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Root::T_x139^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::Int32 Temp_18 = 0;
	System::Int32 Temp_19 = 0;
	Reflector::CodeModel::IType^ Temp_20 = nullptr;
	System::Byte Temp_21 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_22 = nullptr;
	Root::T_x2^ Temp_23 = nullptr;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_25 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	//local variables.
	Root::T_x139^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IGenericArgumentProvider^ V_2 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ V_3 = nullptr;
	Reflector::CodeModel::IArrayType^ V_4 = nullptr;
	Reflector::CodeModel::IGenericArgument^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	Root::T_x146 V_7 = (Root::T_x146)0;
	System::Int32 V_8 = 0;
	array<Reflector::CodeModel::IType^>^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_11=19;                                                    //stloc				V_11
	IL_0009:                                                                        //ldc.i4				0x11
	IL_000e:            V_10=17;                                                    //stloc				V_10
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0083;                                               //br.s				IL_0083
	IL_0016:                                                                        //ldloc				V_10
	IL_001a:            switch(V_10){case 0:goto IL_0217;case 1:goto IL_0379;case 2:goto IL_011a;case 3:goto IL_02b2;case 4:goto IL_01fb;case 5:goto IL_0301;case 6:goto IL_00eb;case 7:goto IL_01e8;case 8:goto IL_0240;case 9:goto IL_0152;case 10:goto IL_00a8;case 11:goto IL_029d;case 12:goto IL_034b;case 13:goto IL_0366;case 14:goto IL_01af;case 15:goto IL_0336;case 16:goto IL_02e4;case 17:goto IL_0014;case 18:goto IL_0189;case 19:goto IL_0139;case 20:goto IL_022a;case 21:goto IL_01d2;case 22:goto IL_027c;case 23:goto IL_038d;case 24:goto IL_00d2;};//switch				(IL_0217,IL_0379,IL_011a,IL_02b2,IL_01fb,IL_0301,IL_00eb,IL_01e8,IL_0240,IL_0152,IL_00a8,IL_029d,IL_034b,IL_0366,IL_01af,IL_0336,IL_02e4,IL_0014,IL_0189,IL_0139,IL_022a,IL_01d2,IL_027c,IL_038d,IL_00d2)
	IL_0083:                                                                        //ldc.i4.5
	IL_0084:                                                                        //dup
	IL_0085:                                                                        //dup
	IL_0086:                                                                        //ldc.i4.6
	IL_0087:                                                                        //sub
	IL_0088:                                                                        //blt				IL_0084
	IL_008d:                                                                        //pop
	IL_008e:                                                                        //ldarg.0
	IL_008f:            Temp_27=this->F_x5;                                         //ldfld				System::Int32 Root::T_x162 F_x5
	IL_0094:                                                                        //ldc.i4.m1
	IL_0095:            if(Temp_27==-1)goto IL_0392;                                //beq				IL_0392
	IL_009a:                                                                        //ldc.i4				0xa
	IL_009f:            V_10=10;                                                    //stloc				V_10
	IL_00a3:            /*goto IL_0016;*/goto IL_00a8;                              //br				IL_0016
	IL_00a8:            goto IL_02b7;                                               //br				IL_02b7
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_22=this->F_x7;                                         //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_00b3:                                                                        //ldloc.s				V_8
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:            Temp_23=this->F_x2;                                         //ldfld				Root::T_x2^ Root::T_x162 F_x2
	IL_00bb:                                                                        //ldloc.0
	IL_00bc:                                                                        //ldloc.2
	IL_00bd:                                                                        //ldloc.3
	IL_00be:            Temp_24=Temp_23->M_x5(V_0,V_2,V_3);                         //callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_00c3:            Temp_22[V_8]=Temp_24;                                       //stelem.ref
	IL_00c4:                                                                        //ldc.i4				0x18
	IL_00c9:            V_10=24;                                                    //stloc				V_10
	IL_00cd:            /*goto IL_0016;*/goto IL_00d2;                              //br				IL_0016
	IL_00d2:                                                                        //ldarg.0
	IL_00d3:            Temp_26=this->F_x7;                                         //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_00d8:                                                                        //ldloc.s				V_8
	IL_00da:                                                                        //ldelem.ref
	IL_00db:            if(Temp_26[V_8]!=nullptr)goto IL_013e;                      //brtrue.s				IL_013e
	IL_00dd:                                                                        //ldc.i4				0x6
	IL_00e2:            V_10=6;                                                     //stloc				V_10
	IL_00e6:            /*goto IL_0016;*/goto IL_00eb;                              //br				IL_0016
	IL_00eb:            goto IL_0245;                                               //br				IL_0245
	IL_00f0:                                                                        //ldloc.0
	IL_00f1:                                                                        //ldloc.s				V_6
	IL_00f3:            V_0->M_x13(V_6);                                            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:            Temp_12=this->F_x2;                                         //ldfld				Root::T_x2^ Root::T_x162 F_x2
	IL_00ff:                                                                        //ldloc.0
	IL_0100:                                                                        //ldloc.2
	IL_0101:                                                                        //ldloc.3
	IL_0102:            Temp_13=Temp_12->M_x5(V_0,V_2,V_3);                         //callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0107:            this->F_x10=Temp_13;                                        //stfld				Reflector::CodeModel::IType^ Root::T_x162 F_x10
	IL_010c:                                                                        //ldc.i4				0x2
	IL_0111:            V_10=2;                                                     //stloc				V_10
	IL_0115:            /*goto IL_0016;*/goto IL_011a;                              //br				IL_0016
	IL_011a:            goto IL_036b;                                               //br				IL_036b
	IL_011f:                                                                        //ldarg.0
	IL_0120:                                                                        //ldloc.0
	IL_0121:            Temp_0=V_0->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0126:            this->F_x11=Temp_0;                                         //stfld				System::Int32 Root::T_x162 F_x11
	IL_012b:                                                                        //ldc.i4				0x13
	IL_0130:            V_10=19;                                                    //stloc				V_10
	IL_0134:            /*goto IL_0016;*/goto IL_0139;                              //br				IL_0016
	IL_0139:            goto IL_0306;                                               //br				IL_0306
	IL_013e:                                                                        //ldloc.s				V_8
	IL_0140:                                                                        //ldc.i4.1
	IL_0141:                                                                        //add
	IL_0142:            V_8=(V_8 + 1);                                              //stloc.s				V_8
	IL_0144:                                                                        //ldc.i4				0x9
	IL_0149:            V_10=9;                                                     //stloc				V_10
	IL_014d:            /*goto IL_0016;*/goto IL_0152;                              //br				IL_0016
	IL_0152:            goto IL_021c;                                               //br				IL_021c
	IL_0157:                                                                        //ldstr				L"\x7C30\x5232\x5934\x5136\x5638\x493A\x503C\x5A3E\x2540\x6342\x2844\x2246\x3D48\x234A\x224C\x2B4E\x7150\x2052\x3C54\x3056\x3758\x3A5A\x295C\x2A5E\x1360\x0662\x4B64"
	IL_015c:                                                                        //ldloc				V_11
	IL_0160:            Temp_7=a(L"\x7C30\x5232\x5934\x5136\x5638\x493A\x503C\x5A3E\x2540\x6342\x2844\x2246\x3D48\x234A\x224C\x2B4E\x7150\x2052\x3C54\x3056\x3758\x3A5A\x295C\x2A5E\x1360\x0662\x4B64",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0165:            Temp_8=gcnew System::InvalidOperationException(Temp_7);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_016a:            throw Temp_8;                                               //throw
	IL_016b:                                                                        //ldarg.0
	IL_016c:                                                                        //ldloc.1
	IL_016d:                                                                        //conv.ovf.u4
	IL_016e:            Temp_25=gcnew array<Reflector::CodeModel::IType^>(safe_cast<System::UInt32>(V_1));//newarr				Reflector::CodeModel::IType
	IL_0173:            this->F_x7=Temp_25;                                         //stfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_0178:                                                                        //ldc.i4.0
	IL_0179:            V_8=0;                                                      //stloc.s				V_8
	IL_017b:                                                                        //ldc.i4				0x12
	IL_0180:            V_10=18;                                                    //stloc				V_10
	IL_0184:            /*goto IL_0016;*/goto IL_0189;                              //br				IL_0016
	IL_0189:            goto IL_021c;                                               //br				IL_021c
	IL_018e:                                                                        //ldarg.0
	IL_018f:                                                                        //ldc.i4.m1
	IL_0190:            this->F_x5=-1;                                              //stfld				System::Int32 Root::T_x162 F_x5
	IL_0195:                                                                        //ldarg.0
	IL_0196:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x2^ Root::T_x162 F_x2
	IL_019b:                                                                        //ldloc.0
	IL_019c:            Temp_1->M_x12(V_0);                                         //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_01a1:                                                                        //ldc.i4				0xe
	IL_01a6:            V_10=14;                                                    //stloc				V_10
	IL_01aa:            /*goto IL_0016;*/goto IL_01af;                              //br				IL_0016
	IL_01af:            goto IL_0392;                                               //br				IL_0392
	IL_01b4:                                                                        //ldloc.0
	IL_01b5:            Temp_18=V_0->M_x19();                                       //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_01ba:            V_6=Temp_18;                                                //stloc.s				V_6
	IL_01bc:                                                                        //ldloc.0
	IL_01bd:            Temp_19=V_0->M_x6();                                        //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_01c2:            V_7=safe_cast<Root::T_x146>(Temp_19);                       //stloc.s				V_7
	IL_01c4:                                                                        //ldc.i4				0x15
	IL_01c9:            V_10=21;                                                    //stloc				V_10
	IL_01cd:            /*goto IL_0016;*/goto IL_01d2;                              //br				IL_0016
	IL_01d2:                                                                        //ldloc.s				V_7
	IL_01d4:                                                                        //ldc.i4.1
	IL_01d5:            if(safe_cast<System::Int32>(V_7)==1)goto IL_036b;           //beq				IL_036b
	IL_01da:                                                                        //ldc.i4				0x7
	IL_01df:            V_10=7;                                                     //stloc				V_10
	IL_01e3:            /*goto IL_0016;*/goto IL_01e8;                              //br				IL_0016
	IL_01e8:            goto IL_00f0;                                               //br				IL_00f0
	IL_01ed:                                                                        //ldc.i4				0x4
	IL_01f2:            V_10=4;                                                     //stloc				V_10
	IL_01f6:            /*goto IL_0016;*/goto IL_01fb;                              //br				IL_0016
	IL_01fb:                                                                        //ldarg.0
	IL_01fc:            Temp_3=this->F_x15;                                         //ldfld				System::Byte Root::T_x162 F_x15
	IL_0201:                                                                        //ldc.i4.s				16
	IL_0203:                                                                        //and
	IL_0204:            if((Temp_3 & 16)==0)goto IL_0306;                           //brfalse				IL_0306
	IL_0209:                                                                        //ldc.i4				0x0
	IL_020e:            V_10=0;                                                     //stloc				V_10
	IL_0212:            /*goto IL_0016;*/goto IL_0217;                              //br				IL_0016
	IL_0217:            goto IL_011f;                                               //br				IL_011f
	IL_021c:                                                                        //ldc.i4				0x14
	IL_0221:            V_10=20;                                                    //stloc				V_10
	IL_0225:            /*goto IL_0016;*/goto IL_022a;                              //br				IL_0016
	IL_022a:                                                                        //ldloc.s				V_8
	IL_022c:                                                                        //ldloc.1
	IL_022d:            if(V_8<V_1)goto IL_00ad;                                    //blt				IL_00ad
	IL_0232:                                                                        //ldc.i4				0x8
	IL_0237:            V_10=8;                                                     //stloc				V_10
	IL_023b:            /*goto IL_0016;*/goto IL_0240;                              //br				IL_0016
	IL_0240:            goto IL_018e;                                               //br				IL_018e
	IL_0245:                                                                        //ldloc.s				V_8
	IL_0247:            V_1=V_8;                                                    //stloc.1
	IL_0248:                                                                        //ldarg.0
	IL_0249:            Temp_9=this->F_x7;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_024e:            V_9=Temp_9;                                                 //stloc.s				V_9
	IL_0250:                                                                        //ldarg.0
	IL_0251:                                                                        //ldloc.1
	IL_0252:                                                                        //conv.ovf.u4
	IL_0253:            Temp_10=gcnew array<Reflector::CodeModel::IType^>(safe_cast<System::UInt32>(V_1));//newarr				Reflector::CodeModel::IType
	IL_0258:            this->F_x7=Temp_10;                                         //stfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_025d:                                                                        //ldloc.s				V_9
	IL_025f:                                                                        //ldc.i4.0
	IL_0260:                                                                        //ldarg.0
	IL_0261:            Temp_11=this->F_x7;                                         //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_0266:                                                                        //ldc.i4.0
	IL_0267:                                                                        //ldloc.s				V_8
	IL_0269:            System::Array::Copy(safe_cast<System::Array^>(V_9),safe_cast<System::Int32>(0),safe_cast<System::Array^>(Temp_11),safe_cast<System::Int32>(0),V_8);//call				void System::Array::Copy(System::Array^,System::Int32,System::Array^,System::Int32,System::Int32)
	IL_026e:                                                                        //ldc.i4				0x16
	IL_0273:            V_10=22;                                                    //stloc				V_10
	IL_0277:            /*goto IL_0016;*/goto IL_027c;                              //br				IL_0016
	IL_027c:            goto IL_018e;                                               //br				IL_018e
	IL_0281:                                                                        //ldloc.s				V_4
	IL_0283:            Temp_20=V_4->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0288:                                                                        //isinst				Reflector::CodeModel::IGenericArgument
	IL_028d:            V_5=dynamic_cast<Reflector::CodeModel::IGenericArgument^>(Temp_20);//stloc.s				V_5
	IL_028f:                                                                        //ldc.i4				0xb
	IL_0294:            V_10=11;                                                    //stloc				V_10
	IL_0298:            /*goto IL_0016;*/goto IL_029d;                              //br				IL_0016
	IL_029d:                                                                        //ldloc.s				V_5
	IL_029f:            if(V_5==nullptr)goto IL_01b4;                               //brfalse				IL_01b4
	IL_02a4:                                                                        //ldc.i4				0x3
	IL_02a9:            V_10=3;                                                     //stloc				V_10
	IL_02ad:            /*goto IL_0016;*/goto IL_02b2;                              //br				IL_0016
	IL_02b2:            goto IL_0350;                                               //br				IL_0350
	IL_02b7:                                                                        //ldarg.0
	IL_02b8:            Temp_14=this->F_x2;                                         //ldfld				Root::T_x2^ Root::T_x162 F_x2
	IL_02bd:                                                                        //ldarg.0
	IL_02be:            Temp_15=this->F_x5;                                         //ldfld				System::Int32 Root::T_x162 F_x5
	IL_02c3:            Temp_16=Temp_14->M_x14(Temp_15);                            //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_02c8:            V_0=Temp_16;                                                //stloc.0
	IL_02c9:                                                                        //ldarg.0
	IL_02ca:                                                                        //ldloc.0
	IL_02cb:            Temp_17=V_0->M_x6();                                        //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_02d0:                                                                        //conv.u1
	IL_02d1:            this->F_x15=safe_cast<System::Byte>(Temp_17);               //stfld				System::Byte Root::T_x162 F_x15
	IL_02d6:                                                                        //ldc.i4				0x10
	IL_02db:            V_10=16;                                                    //stloc				V_10
	IL_02df:            /*goto IL_0016;*/goto IL_02e4;                              //br				IL_0016
	IL_02e4:                                                                        //ldarg.0
	IL_02e5:            Temp_21=this->F_x15;                                        //ldfld				System::Byte Root::T_x162 F_x15
	IL_02ea:                                                                        //ldc.i4.s				15
	IL_02ec:                                                                        //and
	IL_02ed:                                                                        //ldc.i4.5
	IL_02ee:            if((Temp_21 & 15)<=5)goto IL_01ed;                          //ble				IL_01ed
	IL_02f3:                                                                        //ldc.i4				0x5
	IL_02f8:            V_10=5;                                                     //stloc				V_10
	IL_02fc:            /*goto IL_0016;*/goto IL_0301;                              //br				IL_0016
	IL_0301:            goto IL_0157;                                               //br				IL_0157
	IL_0306:                                                                        //ldloc.0
	IL_0307:            Temp_4=V_0->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_030c:            V_1=Temp_4;                                                 //stloc.1
	IL_030d:                                                                        //ldarg.0
	IL_030e:            Temp_5=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x162::get_DeclaringType()
	IL_0313:                                                                        //isinst				Reflector::CodeModel::IGenericArgumentProvider
	IL_0318:            V_2=dynamic_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_5);//stloc.2
	IL_0319:                                                                        //ldarg.0
	IL_031a:            V_3=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(this);//stloc.3
	IL_031b:                                                                        //ldarg.0
	IL_031c:            Temp_6=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x162::get_DeclaringType()
	IL_0321:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_0326:            V_4=dynamic_cast<Reflector::CodeModel::IArrayType^>(Temp_6);//stloc.s				V_4
	IL_0328:                                                                        //ldc.i4				0xf
	IL_032d:            V_10=15;                                                    //stloc				V_10
	IL_0331:            /*goto IL_0016;*/goto IL_0336;                              //br				IL_0016
	IL_0336:                                                                        //ldloc.s				V_4
	IL_0338:            if(V_4==nullptr)goto IL_01b4;                               //brfalse				IL_01b4
	IL_033d:                                                                        //ldc.i4				0xc
	IL_0342:            V_10=12;                                                    //stloc				V_10
	IL_0346:            /*goto IL_0016;*/goto IL_034b;                              //br				IL_0016
	IL_034b:            goto IL_0281;                                               //br				IL_0281
	IL_0350:                                                                        //ldloc.s				V_5
	IL_0352:            Temp_2=V_5->Owner;                                          //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_0357:            V_2=Temp_2;                                                 //stloc.2
	IL_0358:                                                                        //ldc.i4				0xd
	IL_035d:            V_10=13;                                                    //stloc				V_10
	IL_0361:            /*goto IL_0016;*/goto IL_0366;                              //br				IL_0016
	IL_0366:            goto IL_01b4;                                               //br				IL_01b4
	IL_036b:                                                                        //ldc.i4				0x1
	IL_0370:            V_10=1;                                                     //stloc				V_10
	IL_0374:            /*goto IL_0016;*/goto IL_0379;                              //br				IL_0016
	IL_0379:                                                                        //ldloc.1
	IL_037a:            if(V_1==0)goto IL_018e;                                     //brfalse				IL_018e
	IL_037f:                                                                        //ldc.i4				0x17
	IL_0384:            V_10=23;                                                    //stloc				V_10
	IL_0388:            /*goto IL_0016;*/goto IL_038d;                              //br				IL_0016
	IL_038d:            goto IL_016b;                                               //br				IL_016b
	IL_0392:            return;                                                     //ret

}
inline void Root::T_x162::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IMethodReference^::set_GenericMethod by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_2 = nullptr;
	System::NotSupportedException^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_002f;case 1:goto IL_0042;case 2:goto IL_006a;case 3:goto IL_0055;};//switch				(IL_002f,IL_0042,IL_006a,IL_0055)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldarg.0
	IL_001f:            this->M_x1();                                               //call				void Root::T_x162::M_x1()
	IL_0024:                                                                        //ldc.i4				0x0
	IL_0029:            V_0=0;                                                      //stloc				V_0
	IL_002d:            /*goto IL_0002;*/goto IL_002f;                              //br.s				IL_0002
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_0=this->F_x7;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_0035:            if(Temp_0==nullptr)goto IL_006c;                            //brfalse.s				IL_006c
	IL_0037:                                                                        //ldc.i4				0x1
	IL_003c:            V_0=1;                                                      //stloc				V_0
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:            goto IL_004a;                                               //br.s				IL_004a
	IL_0044:            Temp_3=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0049:            throw Temp_3;                                               //throw
	IL_004a:                                                                        //ldc.i4				0x3
	IL_004f:            V_0=3;                                                      //stloc				V_0
	IL_0053:            /*goto IL_0002;*/goto IL_0055;                              //br.s				IL_0002
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_4=this->F_x7;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_005b:            Temp_5=Temp_4->Length;                                      //ldlen
	IL_005c:                                                                        //conv.i4
	IL_005d:            if(Temp_5==0)goto IL_006c;                                  //brfalse.s				IL_006c
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_0=2;                                                      //stloc				V_0
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_0044;                                               //br.s				IL_0044
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //ldc.i4.1
	IL_006e:            Temp_1=gcnew array<Reflector::CodeModel::IType^>(1);        //newarr				Reflector::CodeModel::IType
	IL_0073:            this->F_x7=Temp_1;                                          //stfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_2=this->F_x7;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_007e:                                                                        //ldc.i4.0
	IL_007f:                                                                        //ldarg.1
	IL_0080:            Temp_2[0]=A_0;                                              //stelem.ref
	IL_0081:            return;                                                     //ret

}
inline System::Boolean Root::T_x162::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IMethodReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0062;case 1:goto IL_000b;case 2:goto IL_0035;case 3:goto IL_0054;};//switch				(IL_0062,IL_000b,IL_0035,IL_0054)
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            if(this!=safe_cast<Root::T_x162^>(A_0))goto IL_003f;        //bne.un.s				IL_003f
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_1=2;                                                      //stloc				V_1
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_0064;                                               //br.s				IL_0064
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldloc.0
	IL_0039:            Temp_0=Root::T_x149::M_x12(safe_cast<Reflector::CodeModel::IMethodReference^>(this),V_0);//call				System::Boolean Root::T_x149::M_x12(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IMethodReference^)
	IL_003e:            return Temp_0;                                              //ret
	IL_003f:                                                                        //ldarg.1
	IL_0040:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0045:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.0
	IL_0046:            goto IL_0049;                                               //br.s				IL_0049
	IL_0048:                                                                        //break
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_1=3;                                                      //stloc				V_1
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_1=0;                                                      //stloc				V_1
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:            goto IL_0037;                                               //br.s				IL_0037
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:            return true;                                                //ret
	IL_0066:                                                                        //ldc.i4.0
	IL_0067:            return false;                                               //ret

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x162::M_x12()
//Reflector::CodeModel::IMethodReference^::get_GenericMethod by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	Root::T_x2^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IMemberReference^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0043;case 1:goto IL_0035;case 2:goto IL_0070;case 3:goto IL_007e;};//switch				(IL_0043,IL_0035,IL_0070,IL_007e)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x162::get_DeclaringType()
	IL_0021:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0026:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_0027:            goto IL_002a;                                               //br.s				IL_002a
	IL_0029:                                                                        //break
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_2=1;                                                      //stloc				V_2
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:            if(V_0==nullptr)goto IL_0080;                               //brfalse.s				IL_0080
	IL_0038:                                                                        //ldc.i4				0x0
	IL_003d:            V_2=0;                                                      //stloc				V_2
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:            goto IL_005e;                                               //br.s				IL_005e
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x2^ Root::T_x162 F_x2
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_3=this->F_x12;                                         //ldfld				System::Int32 Root::T_x162 F_x12
	IL_0051:                                                                        //ldnull
	IL_0052:                                                                        //ldnull
	IL_0053:            Temp_4=Temp_2->M_x13(Temp_3,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IMemberReference^ Root::T_x2::M_x13(System::Int32,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0058:                                                                        //castclass				Reflector::CodeModel::IMethodReference
	IL_005d:            return safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_4);//ret
	IL_005e:                                                                        //ldloc.0
	IL_005f:            Temp_1=V_0->GenericType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReference::get_GenericType()
	IL_0064:            V_1=Temp_1;                                                 //stloc.1
	IL_0065:                                                                        //ldc.i4				0x2
	IL_006a:            V_2=2;                                                      //stloc				V_2
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:                                                                        //ldloc.1
	IL_0071:            if(V_1==nullptr)goto IL_0080;                               //brfalse.s				IL_0080
	IL_0073:                                                                        //ldc.i4				0x3
	IL_0078:            V_2=3;                                                      //stloc				V_2
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_0045;                                               //br.s				IL_0045
	IL_0080:                                                                        //ldnull
	IL_0081:            return nullptr;                                             //ret

}
inline System::Int32 Root::T_x162::M_x13()
//System::Object^::GetHashCode by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::String^ Root::T_x162 F_x8
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x162::M_x2()
//Reflector::CodeModel::IMethodReference^::Resolve by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	System::WeakReference^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_6 = nullptr;
	System::WeakReference^ Temp_7 = nullptr;
	System::WeakReference^ Temp_8 = nullptr;
	System::Object^ Temp_9 = nullptr;
	System::WeakReference^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_12 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_13 = nullptr;
	System::WeakReference^ Temp_14 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_15 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	Reflector::CodeModel::IMethodDeclaration^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_5=1;                                                      //stloc				V_5
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0066;                                               //br.s				IL_0066
	IL_000d:                                                                        //ldloc				V_5
	IL_0011:            switch(V_5){case 0:goto IL_01bb;case 1:goto IL_000b;case 2:goto IL_0137;case 3:goto IL_0221;case 4:goto IL_00a8;case 5:goto IL_0110;case 6:goto IL_01e7;case 7:goto IL_00bc;case 8:goto IL_0194;case 9:goto IL_01d7;case 10:goto IL_0084;case 11:goto IL_01a4;case 12:goto IL_00db;case 13:goto IL_023c;case 14:goto IL_0205;case 15:goto IL_0183;case 16:goto IL_0126;case 17:goto IL_00eb;case 18:goto IL_016f;case 19:goto IL_0097;};//switch				(IL_01bb,IL_000b,IL_0137,IL_0221,IL_00a8,IL_0110,IL_01e7,IL_00bc,IL_0194,IL_01d7,IL_0084,IL_01a4,IL_00db,IL_023c,IL_0205,IL_0183,IL_0126,IL_00eb,IL_016f,IL_0097)
	IL_0066:                                                                        //ldc.i4.5
	IL_0067:                                                                        //dup
	IL_0068:                                                                        //dup
	IL_0069:                                                                        //ldc.i4.6
	IL_006a:                                                                        //add
	IL_006b:                                                                        //bgt				IL_0067
	IL_0070:                                                                        //pop
	IL_0071:                                                                        //ldarg.0
	IL_0072:            Temp_14=this->F_x1;                                         //ldfld				System::WeakReference^ Root::T_x162 F_x1
	IL_0077:            if(Temp_14==nullptr)goto IL_00c1;                           //brfalse.s				IL_00c1
	IL_0079:                                                                        //ldc.i4				0xa
	IL_007e:            V_5=10;                                                     //stloc				V_5
	IL_0082:            /*goto IL_000d;*/goto IL_0084;                              //br.s				IL_000d
	IL_0084:            goto IL_01d9;                                               //br				IL_01d9
	IL_0089:                                                                        //ldc.i4				0x13
	IL_008e:            V_5=19;                                                     //stloc				V_5
	IL_0092:            /*goto IL_000d;*/goto IL_0097;                              //br				IL_000d
	IL_0097:                                                                        //ldloc.1
	IL_0098:            if(V_1==nullptr)goto IL_00dd;                               //brfalse.s				IL_00dd
	IL_009a:                                                                        //ldc.i4				0x4
	IL_009f:            V_5=4;                                                      //stloc				V_5
	IL_00a3:            /*goto IL_000d;*/goto IL_00a8;                              //br				IL_000d
	IL_00a8:            goto IL_0102;                                               //br.s				IL_0102
	IL_00aa:                                                                        //ldloc.3
	IL_00ab:                                                                        //ldc.i4.1
	IL_00ac:                                                                        //add
	IL_00ad:            V_3=(V_3 + 1);                                              //stloc.3
	IL_00ae:                                                                        //ldc.i4				0x7
	IL_00b3:            V_5=7;                                                      //stloc				V_5
	IL_00b7:            /*goto IL_000d;*/goto IL_00bc;                              //br				IL_000d
	IL_00bc:            goto IL_0196;                                               //br				IL_0196
	IL_00c1:                                                                        //ldarg.0
	IL_00c2:            Temp_4=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x162::get_DeclaringType()
	IL_00c7:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00cc:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_4);//stloc.0
	IL_00cd:                                                                        //ldc.i4				0xc
	IL_00d2:            V_5=12;                                                     //stloc				V_5
	IL_00d6:            /*goto IL_000d;*/goto IL_00db;                              //br				IL_000d
	IL_00db:            goto IL_0118;                                               //br.s				IL_0118
	IL_00dd:                                                                        //ldc.i4				0x11
	IL_00e2:            V_5=17;                                                     //stloc				V_5
	IL_00e6:            /*goto IL_000d;*/goto IL_00eb;                              //br				IL_000d
	IL_00eb:                                                                        //ldnull
	IL_00ec:            Temp_15=nullptr;goto IL_0185;                               //br				IL_0185
	IL_00f1:                                                                        //ldarg.0
	IL_00f2:            Temp_10=this->F_x1;                                         //ldfld				System::WeakReference^ Root::T_x162 F_x1
	IL_00f7:            Temp_11=Temp_10->Target;                                    //callvirt				System::Object^ System::WeakReference::get_Target()
	IL_00fc:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_0101:            return safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_11);//ret
	IL_0102:                                                                        //ldc.i4				0x5
	IL_0107:            V_5=5;                                                      //stloc				V_5
	IL_010b:            /*goto IL_000d;*/goto IL_0110;                              //br				IL_000d
	IL_0110:                                                                        //ldloc.1
	IL_0111:            Temp_1=V_1->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0116:            Temp_15=Temp_1;goto IL_0185;                                //br.s				IL_0185
	IL_0118:                                                                        //ldc.i4				0x10
	IL_011d:            V_5=16;                                                     //stloc				V_5
	IL_0121:            /*goto IL_000d;*/goto IL_0126;                              //br				IL_000d
	IL_0126:                                                                        //ldloc.0
	IL_0127:            if(V_0!=nullptr)goto IL_015a;                               //brtrue.s				IL_015a
	IL_0129:                                                                        //ldc.i4				0x2
	IL_012e:            V_5=2;                                                      //stloc				V_5
	IL_0132:            /*goto IL_000d;*/goto IL_0137;                              //br				IL_000d
	IL_0137:            goto IL_0241;                                               //br				IL_0241
	IL_013c:                                                                        //ldarg.0
	IL_013d:                                                                        //ldloc.s				V_4
	IL_013f:            Temp_7=gcnew System::WeakReference(safe_cast<System::Object^>(V_4));//newobj				void System::WeakReference::.ctor(System::Object^)
	IL_0144:            this->F_x1=Temp_7;                                          //stfld				System::WeakReference^ Root::T_x162 F_x1
	IL_0149:                                                                        //ldarg.0
	IL_014a:            Temp_8=this->F_x1;                                          //ldfld				System::WeakReference^ Root::T_x162 F_x1
	IL_014f:            Temp_9=Temp_8->Target;                                      //callvirt				System::Object^ System::WeakReference::get_Target()
	IL_0154:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_0159:            return safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_9);//ret
	IL_015a:                                                                        //ldloc.0
	IL_015b:            Temp_13=V_0->Resolve();                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0160:            V_1=Temp_13;                                                //stloc.1
	IL_0161:                                                                        //ldc.i4				0x12
	IL_0166:            V_5=18;                                                     //stloc				V_5
	IL_016a:            /*goto IL_000d;*/goto IL_016f;                              //br				IL_000d
	IL_016f:                                                                        //ldloc.1
	IL_0170:            if(V_1==nullptr)goto IL_0089;                               //brfalse				IL_0089
	IL_0175:                                                                        //ldc.i4				0xf
	IL_017a:            V_5=15;                                                     //stloc				V_5
	IL_017e:            /*goto IL_000d;*/goto IL_0183;                              //br				IL_000d
	IL_0183:            goto IL_01c0;                                               //br.s				IL_01c0
	IL_0185:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.0
	IL_0186:                                                                        //ldc.i4				0x8
	IL_018b:            V_5=8;                                                      //stloc				V_5
	IL_018f:            /*goto IL_000d;*/goto IL_0194;                              //br				IL_000d
	IL_0194:            goto IL_0118;                                               //br.s				IL_0118
	IL_0196:                                                                        //ldc.i4				0xb
	IL_019b:            V_5=11;                                                     //stloc				V_5
	IL_019f:            /*goto IL_000d;*/goto IL_01a4;                              //br				IL_000d
	IL_01a4:                                                                        //ldloc.3
	IL_01a5:                                                                        //ldloc.2
	IL_01a6:            Temp_5=safe_cast<System::Collections::ICollection^>(V_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01ab:            if(V_3<Temp_5)goto IL_020a;                                 //blt.s				IL_020a
	IL_01ad:                                                                        //ldc.i4				0x0
	IL_01b2:            V_5=0;                                                      //stloc				V_5
	IL_01b6:            /*goto IL_000d;*/goto IL_01bb;                              //br				IL_000d
	IL_01bb:            goto IL_0089;                                               //br				IL_0089
	IL_01c0:                                                                        //ldloc.1
	IL_01c1:            Temp_12=V_1->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_01c6:            V_2=Temp_12;                                                //stloc.2
	IL_01c7:                                                                        //ldc.i4.0
	IL_01c8:            V_3=0;                                                      //stloc.3
	IL_01c9:                                                                        //ldc.i4				0x9
	IL_01ce:            V_5=9;                                                      //stloc				V_5
	IL_01d2:            /*goto IL_000d;*/goto IL_01d7;                              //br				IL_000d
	IL_01d7:            goto IL_0196;                                               //br.s				IL_0196
	IL_01d9:                                                                        //ldc.i4				0x6
	IL_01de:            V_5=6;                                                      //stloc				V_5
	IL_01e2:            /*goto IL_000d;*/goto IL_01e7;                              //br				IL_000d
	IL_01e7:                                                                        //ldarg.0
	IL_01e8:            Temp_2=this->F_x1;                                          //ldfld				System::WeakReference^ Root::T_x162 F_x1
	IL_01ed:            Temp_3=Temp_2->IsAlive;                                     //callvirt				System::Boolean System::WeakReference::get_IsAlive()
	IL_01f2:            if(!Temp_3)goto IL_00c1;                                    //brfalse				IL_00c1
	IL_01f7:                                                                        //ldc.i4				0xe
	IL_01fc:            V_5=14;                                                     //stloc				V_5
	IL_0200:            /*goto IL_000d;*/goto IL_0205;                              //br				IL_000d
	IL_0205:            goto IL_00f1;                                               //br				IL_00f1
	IL_020a:                                                                        //ldloc.2
	IL_020b:                                                                        //ldloc.3
	IL_020c:            Temp_6=V_2[V_3];                                            //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodDeclarationCollection::get_Item(System::Int32)
	IL_0211:            V_4=Temp_6;                                                 //stloc.s				V_4
	IL_0213:                                                                        //ldc.i4				0x3
	IL_0218:            V_5=3;                                                      //stloc				V_5
	IL_021c:            /*goto IL_000d;*/goto IL_0221;                              //br				IL_000d
	IL_0221:                                                                        //ldarg.0
	IL_0222:                                                                        //ldloc.s				V_4
	IL_0224:            Temp_0=Root::T_x149::M_x2(safe_cast<Reflector::CodeModel::IMethodReference^>(this),safe_cast<Reflector::CodeModel::IMethodReference^>(V_4));//call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IMethodReference^)
	IL_0229:            if(!Temp_0)goto IL_00aa;                                    //brfalse				IL_00aa
	IL_022e:                                                                        //ldc.i4				0xd
	IL_0233:            V_5=13;                                                     //stloc				V_5
	IL_0237:            /*goto IL_000d;*/goto IL_023c;                              //br				IL_000d
	IL_023c:            goto IL_013c;                                               //br				IL_013c
	IL_0241:                                                                        //ldnull
	IL_0242:            return nullptr;                                             //ret

}
inline System::String^ Root::T_x162::M_x8()
//System::Object^::ToString by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(this));//call				System::String^ Root::T_x149::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::MethodCallingConvention Root::T_x162::CallingConvention::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Byte Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x162::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x15;                                         //ldfld				System::Byte Root::T_x162 F_x15
	IL_000c:                                                                        //ldc.i4.s				15
	IL_000e:                                                                        //and
	IL_000f:            return safe_cast<Reflector::CodeModel::MethodCallingConvention>((Temp_0 & 15));//ret

}
inline void Root::T_x162::CallingConvention::set(Reflector::CodeModel::MethodCallingConvention value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IType^ Root::T_x162::DeclaringType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IType^ Root::T_x162 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x162::DeclaringType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x162::ExplicitThis::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Byte Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            this->M_x1();                                               //call				void Root::T_x162::M_x1()
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x15;                                         //ldfld				System::Byte Root::T_x162 F_x15
	IL_000f:                                                                        //ldc.i4.s				64
	IL_0011:                                                                        //and
	IL_0012:                                                                        //ldc.i4.0
	IL_0013:                                                                        //ceq
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:                                                                        //ceq
	IL_0018:            return (((Temp_0 & 64) == 0) == false);                     //ret

}
inline void Root::T_x162::ExplicitThis::set(System::Boolean value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::ITypeCollection^ Root::T_x162::GenericArguments::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x162::T_x12^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x162::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x11;                                         //ldfld				System::Int32 Root::T_x162 F_x11
	IL_000d:            Temp_1=gcnew Root::T_x162::T_x12(safe_cast<Reflector::CodeModel::IMethodReference^>(this),Temp_0);//newobj				void Root::T_x162::T_x12::.ctor(Reflector::CodeModel::IMethodReference^,System::Int32)
	IL_0012:            return safe_cast<Reflector::CodeModel::ITypeCollection^>(Temp_1);//ret

}
inline System::Boolean Root::T_x162::HasThis::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Byte Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            this->M_x1();                                               //call				void Root::T_x162::M_x1()
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x15;                                         //ldfld				System::Byte Root::T_x162 F_x15
	IL_000f:                                                                        //ldc.i4.s				32
	IL_0011:                                                                        //and
	IL_0012:                                                                        //ldc.i4.0
	IL_0013:                                                                        //ceq
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:                                                                        //ceq
	IL_0018:            return (((Temp_0 & 32) == 0) == false);                     //ret

}
inline void Root::T_x162::HasThis::set(System::Boolean value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x162::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::String^ Root::T_x162 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x162::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x162::Parameters::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	Root::T_x162::T_x2^ Temp_2 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x162::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x7;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_000c:            if(Temp_0!=nullptr)goto IL_0016;                            //brtrue.s				IL_0016
	IL_000e:            goto IL_0010;                                               //br.s				IL_0010
	IL_0010:            Temp_3=Root::T_x162::T_x2::M_x1();                          //call				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x162::T_x2::M_x1()
	IL_0015:            return Temp_3;                                              //ret
	IL_0016:                                                                        //ldc.i4.4
	IL_0017:                                                                        //dup
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //ldc.i4.2
	IL_001a:                                                                        //sub
	IL_001b:                                                                        //blt				IL_0017
	IL_0020:                                                                        //pop
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_1=this->F_x7;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162 F_x7
	IL_0027:            Temp_2=gcnew Root::T_x162::T_x2(Temp_1);                    //newobj				void Root::T_x162::T_x2::.ctor(array<Reflector::CodeModel::IType^>^)
	IL_002c:            return safe_cast<Reflector::CodeModel::IParameterDeclarationCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::IMethodReturnType^ Root::T_x162::ReturnType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Root::T_x163^ Temp_2 = nullptr;
	Root::T_x2^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x162::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x10;                                         //ldfld				Reflector::CodeModel::IType^ Root::T_x162 F_x10
	IL_000c:            if(Temp_0!=nullptr)goto IL_001f;                            //brtrue.s				IL_001f
	IL_000e:            goto IL_0011;                                               //br.s				IL_0011
	IL_0010:                                                                        //break
	IL_0011:            goto IL_0013;                                               //br.s				IL_0013
	IL_0013:                                                                        //ldarg.0
	IL_0014:            Temp_3=this->F_x2;                                          //ldfld				Root::T_x2^ Root::T_x162 F_x2
	IL_0019:            Temp_4=Temp_3->M_x7();                                      //callvirt				Reflector::CodeModel::IMethodReturnType^ Root::T_x2::M_x7()
	IL_001e:            return Temp_4;                                              //ret
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_1=this->F_x10;                                         //ldfld				Reflector::CodeModel::IType^ Root::T_x162 F_x10
	IL_0025:            Temp_2=gcnew Root::T_x163(Temp_1);                          //newobj				void Root::T_x163::.ctor(Reflector::CodeModel::IType^)
	IL_002a:            return safe_cast<Reflector::CodeModel::IMethodReturnType^>(Temp_2);//ret

}
inline void Root::T_x162::ReturnType::set(Reflector::CodeModel::IMethodReturnType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x162::T_x1::T_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IType^ Root::T_x162::T_x1 F_x1
	IL_000d:            return;                                                     //ret

}
inline Reflector::CodeModel::IType^ Root::T_x162::T_x1::M_x1()
//Reflector::CodeModel::IParameterDeclaration^::get_ParameterType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IType^ Root::T_x162::T_x1 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x162::T_x1::M_x1(Reflector::CodeModel::IExpression^ A_0)
//Reflector::CodeModel::IParameterDeclaration^::set_DefaultValue by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x1::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::IParameterDeclaration^::set_ParameterType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IExpression^ Root::T_x162::T_x1::M_x2()
//Reflector::CodeModel::IParameterDeclaration^::get_DefaultValue by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x162::T_x1::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IParameterDeclaration^>(this);//ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x162::T_x1::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_0005:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x162::T_x1::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0005:            return Temp_0;                                              //ret

}
inline void Root::T_x162::T_x1::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline static Root::T_x162::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x162::T_x2^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x162::T_x2(safe_cast<array<Reflector::CodeModel::IType^>^>(nullptr));//newobj				void Root::T_x162::T_x2::.ctor(array<Reflector::CodeModel::IType^>^)
	IL_0006:            Root::T_x162::T_x2::F_x1=safe_cast<Reflector::CodeModel::IParameterDeclarationCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x162::T_x2 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x162::T_x2::T_x2(array<Reflector::CodeModel::IType^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x162::T_x2::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x162::T_x2::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_6 = nullptr;
	Root::T_x162::T_x1^ Temp_7 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_8 = nullptr;
	System::Collections::IEnumerator^ Temp_9 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IParameterDeclaration^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_2=4;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0067;case 1:goto IL_0044;case 2:goto IL_0088;case 3:goto IL_0051;case 4:goto IL_000b;case 5:goto IL_00a9;};//switch				(IL_0067,IL_0044,IL_0088,IL_0051,IL_000b,IL_00a9)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_8=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0034:            if(Temp_8==nullptr)goto IL_00b2;                            //brfalse.s				IL_00b2
	IL_0036:            goto IL_0039;                                               //br.s				IL_0039
	IL_0038:                                                                        //break
	IL_0039:                                                                        //ldc.i4				0x1
	IL_003e:            V_2=1;                                                      //stloc				V_2
	IL_0042:            /*goto IL_000d;*/goto IL_0044;                              //br.s				IL_000d
	IL_0044:            goto IL_008a;                                               //br.s				IL_008a
	IL_0046:                                                                        //ldc.i4				0x3
	IL_004b:            V_2=3;                                                      //stloc				V_2
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:                                                                        //ldloc.1
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_4=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0058:            Temp_5=Temp_4->Length;                                      //ldlen
	IL_0059:                                                                        //conv.i4
	IL_005a:            if(V_1<Temp_5)goto IL_0069;                                 //blt.s				IL_0069
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_2=0;                                                      //stloc				V_2
	IL_0065:            /*goto IL_000d;*/goto IL_0067;                              //br.s				IL_000d
	IL_0067:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_0069:                                                                        //ldloc.0
	IL_006a:                                                                        //ldloc.1
	IL_006b:                                                                        //ldarg.0
	IL_006c:            Temp_6=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0071:                                                                        //ldloc.1
	IL_0072:                                                                        //ldelem.ref
	IL_0073:            Temp_7=gcnew Root::T_x162::T_x1(Temp_6[V_1]);               //newobj				void Root::T_x162::T_x1::.ctor(Reflector::CodeModel::IType^)
	IL_0078:            V_0[V_1]=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_7);//stelem.ref
	IL_0079:                                                                        //ldloc.1
	IL_007a:                                                                        //ldc.i4.1
	IL_007b:                                                                        //add
	IL_007c:            V_1=(V_1 + 1);                                              //stloc.1
	IL_007d:                                                                        //ldc.i4				0x2
	IL_0082:            V_2=2;                                                      //stloc				V_2
	IL_0086:            /*goto IL_000d;*/goto IL_0088;                              //br.s				IL_000d
	IL_0088:            goto IL_0046;                                               //br.s				IL_0046
	IL_008a:                                                                        //ldarg.0
	IL_008b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0090:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0091:                                                                        //conv.i4
	IL_0092:                                                                        //conv.ovf.u4
	IL_0093:            Temp_3=gcnew array<Reflector::CodeModel::IParameterDeclaration^>(safe_cast<System::UInt32>(Temp_2));//newarr				Reflector::CodeModel::IParameterDeclaration
	IL_0098:            V_0=Temp_3;                                                 //stloc.0
	IL_0099:                                                                        //ldc.i4.0
	IL_009a:            V_1=0;                                                      //stloc.1
	IL_009b:                                                                        //ldc.i4				0x5
	IL_00a0:            V_2=5;                                                      //stloc				V_2
	IL_00a4:            /*goto IL_000d;*/goto IL_00a9;                              //br				IL_000d
	IL_00a9:            goto IL_0046;                                               //br.s				IL_0046
	IL_00ab:                                                                        //ldloc.0
	IL_00ac:            Temp_0=V_0->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_00b1:            return Temp_0;                                              //ret
	IL_00b2:            Temp_9=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_00b7:            return Temp_9;                                              //ret

}
inline Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x162::T_x2::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x162::T_x2::F_x1;                            //ldsfld				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x162::T_x2 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x162::T_x2::M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x2::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x162::T_x2::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	Root::T_x162::T_x1^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            Temp_1=gcnew Root::T_x162::T_x1(Temp_0[A_0]);               //newobj				void Root::T_x162::T_x1::.ctor(Reflector::CodeModel::IType^)
	IL_000d:            return safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_1);//ret

}
inline void Root::T_x162::T_x2::M_x1(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1)
//Reflector::CodeModel::IParameterDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x2::M_x12(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x2::M_x13(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x2::M_x2()
//Reflector::CodeModel::IParameterDeclarationCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x2=safe_cast<array<Reflector::CodeModel::IType^>^>(nullptr);//stfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x162::T_x2::M_x2(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x2::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x2::M_x2(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1)
//Reflector::CodeModel::IParameterDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x162::T_x2::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x162::T_x2::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x162::T_x2::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x162::T_x2 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline Root::T_x162::T_x12::T_x12(Reflector::CodeModel::IMethodReference^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.2
	IL_0008:            this->F_x1=A_1;                                             //stfld				System::Int32 Root::T_x162::T_x12 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x162::T_x12 F_x2
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x162::T_x12::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Collections::IEnumerator^ Root::T_x162::T_x12::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x162::T_x12 F_x2
	IL_0006:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_000b:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0010:            Temp_3=safe_cast<System::Collections::IEnumerable^>(Temp_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0015:            return Temp_3;                                              //ret

}
inline void Root::T_x162::T_x12::M_x1()
//Reflector::CodeModel::ITypeCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x162::T_x12::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x12::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::ITypeCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IType^ Root::T_x162::T_x12::M_x1(System::Int32 A_0)
//Reflector::CodeModel::ITypeCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x162::T_x12 F_x2
	IL_0006:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_000b:            V_0=Temp_1;                                                 //stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            if(V_0==nullptr)goto IL_0021;                               //brfalse.s				IL_0021
	IL_000f:            goto IL_0012;                                               //br.s				IL_0012
	IL_0011:                                                                        //break
	IL_0012:            goto IL_0014;                                               //br.s				IL_0014
	IL_0014:                                                                        //ldloc.0
	IL_0015:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_001a:                                                                        //ldarg.1
	IL_001b:            Temp_3=Temp_2[A_0];                                         //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_0020:            return Temp_3;                                              //ret
	IL_0021:                                                                        //ldnull
	IL_0022:            return nullptr;                                             //ret

}
inline void Root::T_x162::T_x12::M_x1(System::Int32 A_0,Reflector::CodeModel::IType^ A_1)
//Reflector::CodeModel::ITypeCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x12::M_x12(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x12::M_x13(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x162::T_x12::M_x2(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x12::M_x2(System::Int32 A_0)
//Reflector::CodeModel::ITypeCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x162::T_x12::M_x2(System::Int32 A_0,Reflector::CodeModel::IType^ A_1)
//Reflector::CodeModel::ITypeCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x162::T_x12::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x162::T_x12 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x162::T_x12::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return false;                                               //ret

}
inline System::Object^ Root::T_x162::T_x12::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<System::Object^>(this);                    //ret

}
