#include "global_xref.h"

inline Root::T_x152::T_x152(Reflector::CodeModel::IGenericArgumentProvider^ A_0,System::Int32 A_1,System::UInt16 A_2,System::String^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x152 F_x2
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x12=A_1;                                            //stfld				System::Int32 Root::T_x152 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.3
	IL_0016:            this->F_x13=A_2;                                            //stfld				System::UInt16 Root::T_x152 F_x13
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.s				A_3
	IL_001e:            this->F_x8=A_3;                                             //stfld				System::String^ Root::T_x152 F_x8
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldnull
	IL_0025:            this->F_x5=safe_cast<array<Reflector::CodeModel::IType^>^>(nullptr);//stfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_002a:            return;                                                     //ret

}
inline System::Int32 Root::T_x152::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	Reflector::CodeModel::IGenericParameter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_2=1;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_006f;case 1:goto IL_000b;case 2:goto IL_0061;case 3:goto IL_0098;case 4:goto IL_003d;case 5:goto IL_0087;};//switch				(IL_006f,IL_000b,IL_0061,IL_0098,IL_003d,IL_0087)
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            if(this!=safe_cast<Root::T_x152^>(obj))goto IL_0075;        //bne.un.s				IL_0075
	IL_0032:                                                                        //ldc.i4				0x4
	IL_0037:            V_2=4;                                                      //stloc				V_2
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:            goto IL_0040;                                               //br.s				IL_0040
	IL_003f:                                                                        //break
	IL_0040:            goto IL_0071;                                               //br.s				IL_0071
	IL_0042:                                                                        //ldloc.1
	IL_0043:            return V_1;                                                 //ret
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_0=this->M_x12();                                       //call				System::String^ Root::T_x152::M_x12()
	IL_004a:                                                                        //ldloc.0
	IL_004b:            Temp_1=V_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IGenericParameter::get_Name()
	IL_0050:            Temp_2=Temp_0->CompareTo(Temp_1);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0055:            V_1=Temp_2;                                                 //stloc.1
	IL_0056:                                                                        //ldc.i4				0x2
	IL_005b:            V_2=2;                                                      //stloc				V_2
	IL_005f:            /*goto IL_000d;*/goto IL_0061;                              //br.s				IL_000d
	IL_0061:                                                                        //ldloc.1
	IL_0062:            if(V_1==0)goto IL_0073;                                     //brfalse.s				IL_0073
	IL_0064:                                                                        //ldc.i4				0x0
	IL_0069:            V_2=0;                                                      //stloc				V_2
	IL_006d:            /*goto IL_000d;*/goto IL_006f;                              //br.s				IL_000d
	IL_006f:            goto IL_0042;                                               //br.s				IL_0042
	IL_0071:                                                                        //ldc.i4.0
	IL_0072:            return 0;                                                   //ret
	IL_0073:                                                                        //ldc.i4.0
	IL_0074:            return 0;                                                   //ret
	IL_0075:                                                                        //ldarg.1
	IL_0076:                                                                        //isinst				Reflector::CodeModel::IGenericParameter
	IL_007b:            V_0=dynamic_cast<Reflector::CodeModel::IGenericParameter^>(obj);//stloc.0
	IL_007c:                                                                        //ldc.i4				0x5
	IL_0081:            V_2=5;                                                      //stloc				V_2
	IL_0085:            /*goto IL_000d;*/goto IL_0087;                              //br.s				IL_000d
	IL_0087:                                                                        //ldloc.0
	IL_0088:            if(V_0==nullptr)goto IL_009a;                               //brfalse.s				IL_009a
	IL_008a:                                                                        //ldc.i4				0x3
	IL_008f:            V_2=3;                                                      //stloc				V_2
	IL_0093:            /*goto IL_000d;*/goto IL_0098;                              //br				IL_000d
	IL_0098:            goto IL_0044;                                               //br.s				IL_0044
	IL_009a:                                                                        //ldc.i4.m1
	IL_009b:            return -1;                                                  //ret

}
inline Reflector::CodeModel::ITypeCollection^ Root::T_x152::M_x1()
//Reflector::CodeModel::IGenericParameter^::get_Constraints by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::Memory::ReferenceTypeConstraint^ Temp_2 = nullptr;
	Root::T_x173^ Temp_3 = nullptr;
	System::UInt16 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	Reflector::CodeModel::Memory::ValueTypeConstraint^ Temp_6 = nullptr;
	System::UInt16 Temp_7 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_11 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Reflector::CodeModel::Memory::DefaultConstructorConstraint^ Temp_14 = nullptr;
	System::UInt16 Temp_15 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_16 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	System::UInt16 Temp_19 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_20 = nullptr;
	System::UInt16 Temp_21 = 0;
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
	//local variables.
	array<Reflector::CodeModel::IType^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_3=16;                                                     //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0062;                                               //br.s				IL_0062
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_00f1;case 1:goto IL_01a3;case 2:goto IL_0126;case 3:goto IL_010a;case 4:goto IL_0078;case 5:goto IL_0238;case 6:goto IL_0202;case 7:goto IL_016b;case 8:goto IL_014f;case 9:goto IL_01f2;case 10:goto IL_0191;case 11:goto IL_0136;case 12:goto IL_01d9;case 13:goto IL_017b;case 14:goto IL_021c;case 15:goto IL_01c6;case 16:goto IL_000b;case 17:goto IL_0085;case 18:goto IL_0096;};//switch				(IL_00f1,IL_01a3,IL_0126,IL_010a,IL_0078,IL_0238,IL_0202,IL_016b,IL_014f,IL_01f2,IL_0191,IL_0136,IL_01d9,IL_017b,IL_021c,IL_01c6,IL_000b,IL_0085,IL_0096)
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_21=this->F_x13;                                        //ldfld				System::UInt16 Root::T_x152 F_x13
	IL_0068:                                                                        //conv.i4
	IL_0069:                                                                        //ldc.i4.4
	IL_006a:                                                                        //and
	IL_006b:            if((safe_cast<System::Int32>(Temp_21) & 4)!=0)goto IL_0088; //brtrue.s				IL_0088
	IL_006d:                                                                        //ldc.i4				0x4
	IL_0072:            V_3=4;                                                      //stloc				V_3
	IL_0076:            /*goto IL_000d;*/goto IL_0078;                              //br.s				IL_000d
	IL_0078:            goto IL_007a;                                               //br.s				IL_007a
	IL_007a:                                                                        //ldc.i4				0x11
	IL_007f:            V_3=17;                                                     //stloc				V_3
	IL_0083:            /*goto IL_000d;*/goto IL_0085;                              //br.s				IL_000d
	IL_0085:                                                                        //ldc.i4.0
	IL_0086:            Temp_22=0;goto IL_0099;                                     //br.s				IL_0099
	IL_0088:                                                                        //ldc.i4				0x12
	IL_008d:            V_3=18;                                                     //stloc				V_3
	IL_0091:            /*goto IL_000d;*/goto IL_0096;                              //br				IL_000d
	IL_0096:                                                                        //ldc.i4.1
	IL_0097:            Temp_22=1;goto IL_0099;                                     //br.s				IL_0099
	IL_0099:            /*warning ! semantic stack doesn't empty at joint !;*/      //ldarg.0
	IL_009a:            Temp_15=this->F_x13;                                        //ldfld				System::UInt16 Root::T_x152 F_x13
	IL_009f:                                                                        //conv.i4
	IL_00a0:                                                                        //ldc.i4.8
	IL_00a1:                                                                        //and
	IL_00a2:            Temp_24=Temp_22;if((safe_cast<System::Int32>(Temp_15) & 8)!=0)goto IL_00a9;//brtrue.s				IL_00a9
	IL_00a4:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_00a6:                                                                        //ldc.i4.0
	IL_00a7:            Temp_26=Temp_24;Temp_25=0;goto IL_00ac;                     //br.s				IL_00ac
	IL_00a9:                                                                        //ldc.i4.1
	IL_00aa:            Temp_26=Temp_24;Temp_25=1;goto IL_00ac;                     //br.s				IL_00ac
	IL_00ac:            /*warning ! semantic stack doesn't empty at joint !;*/      //add
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_16=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_00b3:            Temp_28=(Temp_26 + Temp_25);if(Temp_16!=nullptr)goto IL_00ba;//brtrue.s				IL_00ba
	IL_00b5:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_00b7:                                                                        //ldc.i4.0
	IL_00b8:            Temp_30=Temp_28;Temp_29=0;goto IL_00c4;                     //br.s				IL_00c4
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:            Temp_17=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_00c0:            Temp_18=Temp_17->Length;                                    //ldlen
	IL_00c1:                                                                        //conv.i4
	IL_00c2:            Temp_30=Temp_28;Temp_29=Temp_18;goto IL_00c4;               //br.s				IL_00c4
	IL_00c4:            /*warning ! semantic stack doesn't empty at joint !;*/      //add
	IL_00c5:                                                                        //ldarg.0
	IL_00c6:            Temp_19=this->F_x13;                                        //ldfld				System::UInt16 Root::T_x152 F_x13
	IL_00cb:                                                                        //conv.i4
	IL_00cc:                                                                        //ldc.i4.s				16
	IL_00ce:                                                                        //and
	IL_00cf:            Temp_32=(Temp_30 + Temp_29);if((safe_cast<System::Int32>(Temp_19) & 16)!=0)goto IL_00d6;//brtrue.s				IL_00d6
	IL_00d1:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_00d3:                                                                        //ldc.i4.0
	IL_00d4:            Temp_34=Temp_32;Temp_33=0;goto IL_00d9;                     //br.s				IL_00d9
	IL_00d6:                                                                        //ldc.i4.1
	IL_00d7:            Temp_34=Temp_32;Temp_33=1;goto IL_00d9;                     //br.s				IL_00d9
	IL_00d9:            /*warning ! semantic stack doesn't empty at joint !;*/      //add
	IL_00da:                                                                        //conv.ovf.u4
	IL_00db:            Temp_20=gcnew array<Reflector::CodeModel::IType^>(safe_cast<System::UInt32>((Temp_34 + Temp_33)));//newarr				Reflector::CodeModel::IType
	IL_00e0:            V_0=Temp_20;                                                //stloc.0
	IL_00e1:                                                                        //ldc.i4.0
	IL_00e2:            V_1=0;                                                      //stloc.1
	IL_00e3:                                                                        //ldc.i4				0x0
	IL_00e8:            V_3=0;                                                      //stloc				V_3
	IL_00ec:            /*goto IL_000d;*/goto IL_00f1;                              //br				IL_000d
	IL_00f1:                                                                        //ldarg.0
	IL_00f2:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x152 F_x13
	IL_00f7:                                                                        //conv.i4
	IL_00f8:                                                                        //ldc.i4.4
	IL_00f9:                                                                        //and
	IL_00fa:            if((safe_cast<System::Int32>(Temp_0) & 4)==0)goto IL_0128;  //brfalse.s				IL_0128
	IL_00fc:                                                                        //ldc.i4				0x3
	IL_0101:            V_3=3;                                                      //stloc				V_3
	IL_0105:            /*goto IL_000d;*/goto IL_010a;                              //br				IL_000d
	IL_010a:            goto IL_010c;                                               //br.s				IL_010c
	IL_010c:                                                                        //ldloc.0
	IL_010d:            Temp_1=V_1;                                                 //ldloc.1
	IL_010e:                                                                        //dup
	IL_010f:                                                                        //ldc.i4.1
	IL_0110:                                                                        //add
	IL_0111:            V_1=(Temp_1 + 1);                                           //stloc.1
	IL_0112:            Temp_2=gcnew Reflector::CodeModel::Memory::ReferenceTypeConstraint();//newobj				void Reflector::CodeModel::Memory::ReferenceTypeConstraint::.ctor()
	IL_0117:            V_0[Temp_1]=safe_cast<Reflector::CodeModel::IType^>(Temp_2);//stelem.ref
	IL_0118:                                                                        //ldc.i4				0x2
	IL_011d:            V_3=2;                                                      //stloc				V_3
	IL_0121:            /*goto IL_000d;*/goto IL_0126;                              //br				IL_000d
	IL_0126:            goto IL_0128;                                               //br.s				IL_0128
	IL_0128:                                                                        //ldc.i4				0xb
	IL_012d:            V_3=11;                                                     //stloc				V_3
	IL_0131:            /*goto IL_000d;*/goto IL_0136;                              //br				IL_000d
	IL_0136:                                                                        //ldarg.0
	IL_0137:            Temp_7=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x152 F_x13
	IL_013c:                                                                        //conv.i4
	IL_013d:                                                                        //ldc.i4.8
	IL_013e:                                                                        //and
	IL_013f:            if((safe_cast<System::Int32>(Temp_7) & 8)==0)goto IL_016d;  //brfalse.s				IL_016d
	IL_0141:                                                                        //ldc.i4				0x8
	IL_0146:            V_3=8;                                                      //stloc				V_3
	IL_014a:            /*goto IL_000d;*/goto IL_014f;                              //br				IL_000d
	IL_014f:            goto IL_0151;                                               //br.s				IL_0151
	IL_0151:                                                                        //ldloc.0
	IL_0152:            Temp_5=V_1;                                                 //ldloc.1
	IL_0153:                                                                        //dup
	IL_0154:                                                                        //ldc.i4.1
	IL_0155:                                                                        //add
	IL_0156:            V_1=(Temp_5 + 1);                                           //stloc.1
	IL_0157:            Temp_6=gcnew Reflector::CodeModel::Memory::ValueTypeConstraint();//newobj				void Reflector::CodeModel::Memory::ValueTypeConstraint::.ctor()
	IL_015c:            V_0[Temp_5]=safe_cast<Reflector::CodeModel::IType^>(Temp_6);//stelem.ref
	IL_015d:                                                                        //ldc.i4				0x7
	IL_0162:            V_3=7;                                                      //stloc				V_3
	IL_0166:            /*goto IL_000d;*/goto IL_016b;                              //br				IL_000d
	IL_016b:            goto IL_016d;                                               //br.s				IL_016d
	IL_016d:                                                                        //ldc.i4				0xd
	IL_0172:            V_3=13;                                                     //stloc				V_3
	IL_0176:            /*goto IL_000d;*/goto IL_017b;                              //br				IL_000d
	IL_017b:                                                                        //ldarg.0
	IL_017c:            Temp_12=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_0181:            if(Temp_12==nullptr)goto IL_01f4;                           //brfalse.s				IL_01f4
	IL_0183:                                                                        //ldc.i4				0xa
	IL_0188:            V_3=10;                                                     //stloc				V_3
	IL_018c:            /*goto IL_000d;*/goto IL_0191;                              //br				IL_000d
	IL_0191:            goto IL_0193;                                               //br.s				IL_0193
	IL_0193:                                                                        //ldc.i4.0
	IL_0194:            V_2=0;                                                      //stloc.2
	IL_0195:                                                                        //ldc.i4				0x1
	IL_019a:            V_3=1;                                                      //stloc				V_3
	IL_019e:            /*goto IL_000d;*/goto IL_01a3;                              //br				IL_000d
	IL_01a3:            goto IL_01c8;                                               //br.s				IL_01c8
	IL_01a5:                                                                        //ldloc.0
	IL_01a6:            Temp_10=V_1;                                                //ldloc.1
	IL_01a7:                                                                        //dup
	IL_01a8:                                                                        //ldc.i4.1
	IL_01a9:                                                                        //add
	IL_01aa:            V_1=(Temp_10 + 1);                                          //stloc.1
	IL_01ab:                                                                        //ldarg.0
	IL_01ac:            Temp_11=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_01b1:                                                                        //ldloc.2
	IL_01b2:                                                                        //ldelem.ref
	IL_01b3:            V_0[Temp_10]=Temp_11[V_2];                                  //stelem.ref
	IL_01b4:                                                                        //ldloc.2
	IL_01b5:                                                                        //ldc.i4.1
	IL_01b6:                                                                        //add
	IL_01b7:            V_2=(V_2 + 1);                                              //stloc.2
	IL_01b8:                                                                        //ldc.i4				0xf
	IL_01bd:            V_3=15;                                                     //stloc				V_3
	IL_01c1:            /*goto IL_000d;*/goto IL_01c6;                              //br				IL_000d
	IL_01c6:            goto IL_01c8;                                               //br.s				IL_01c8
	IL_01c8:            goto IL_01cb;                                               //br.s				IL_01cb
	IL_01ca:                                                                        //break
	IL_01cb:                                                                        //ldc.i4				0xc
	IL_01d0:            V_3=12;                                                     //stloc				V_3
	IL_01d4:            /*goto IL_000d;*/goto IL_01d9;                              //br				IL_000d
	IL_01d9:                                                                        //ldloc.2
	IL_01da:                                                                        //ldarg.0
	IL_01db:            Temp_8=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_01e0:            Temp_9=Temp_8->Length;                                      //ldlen
	IL_01e1:                                                                        //conv.i4
	IL_01e2:            if(V_2<Temp_9)goto IL_01a5;                                 //blt.s				IL_01a5
	IL_01e4:                                                                        //ldc.i4				0x9
	IL_01e9:            V_3=9;                                                      //stloc				V_3
	IL_01ed:            /*goto IL_000d;*/goto IL_01f2;                              //br				IL_000d
	IL_01f2:            goto IL_01f4;                                               //br.s				IL_01f4
	IL_01f4:                                                                        //ldc.i4				0x6
	IL_01f9:            V_3=6;                                                      //stloc				V_3
	IL_01fd:            /*goto IL_000d;*/goto IL_0202;                              //br				IL_000d
	IL_0202:                                                                        //ldarg.0
	IL_0203:            Temp_4=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x152 F_x13
	IL_0208:                                                                        //conv.i4
	IL_0209:                                                                        //ldc.i4.s				16
	IL_020b:                                                                        //and
	IL_020c:            if((safe_cast<System::Int32>(Temp_4) & 16)==0)goto IL_023a; //brfalse.s				IL_023a
	IL_020e:                                                                        //ldc.i4				0xe
	IL_0213:            V_3=14;                                                     //stloc				V_3
	IL_0217:            /*goto IL_000d;*/goto IL_021c;                              //br				IL_000d
	IL_021c:            goto IL_021e;                                               //br.s				IL_021e
	IL_021e:                                                                        //ldloc.0
	IL_021f:            Temp_13=V_1;                                                //ldloc.1
	IL_0220:                                                                        //dup
	IL_0221:                                                                        //ldc.i4.1
	IL_0222:                                                                        //add
	IL_0223:            V_1=(Temp_13 + 1);                                          //stloc.1
	IL_0224:            Temp_14=gcnew Reflector::CodeModel::Memory::DefaultConstructorConstraint();//newobj				void Reflector::CodeModel::Memory::DefaultConstructorConstraint::.ctor()
	IL_0229:            V_0[Temp_13]=safe_cast<Reflector::CodeModel::IType^>(Temp_14);//stelem.ref
	IL_022a:                                                                        //ldc.i4				0x5
	IL_022f:            V_3=5;                                                      //stloc				V_3
	IL_0233:            /*goto IL_000d;*/goto IL_0238;                              //br				IL_000d
	IL_0238:            goto IL_023a;                                               //br.s				IL_023a
	IL_023a:                                                                        //ldloc.0
	IL_023b:            Temp_3=gcnew Root::T_x173(V_0);                             //newobj				void Root::T_x173::.ctor(array<Reflector::CodeModel::IType^>^)
	IL_0240:            return safe_cast<Reflector::CodeModel::ITypeCollection^>(Temp_3);//ret

}
inline void Root::T_x152::M_x1(Reflector::CodeModel::GenericParameterVariance A_0)
//Reflector::CodeModel::IGenericParameter^::set_Variance by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x152::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
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
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_0006:            if(Temp_0!=nullptr)goto IL_0023;                            //brtrue.s				IL_0023
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.1
	IL_000f:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0014:            this->F_x1=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_8=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_0022:            return;                                                     //ret
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_1=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_0029:            V_0=Temp_1;                                                 //stloc.0
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldloc.0
	IL_002c:            Temp_2=V_0->Length;                                         //ldlen
	IL_002d:                                                                        //conv.i4
	IL_002e:                                                                        //ldc.i4.1
	IL_002f:                                                                        //add
	IL_0030:                                                                        //conv.ovf.u4
	IL_0031:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0036:            this->F_x1=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_4=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_0042:                                                                        //ldc.i4.0
	IL_0043:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_5=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_6=V_0->Length;                                         //ldlen
	IL_0050:                                                                        //conv.i4
	IL_0051:                                                                        //ldarg.1
	IL_0052:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_0053:            return;                                                     //ret

}
inline void Root::T_x152::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IType^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::IType^>^ Temp_8 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IType^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_0006:            if(Temp_0!=nullptr)goto IL_0023;                            //brtrue.s				IL_0023
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.1
	IL_000f:            Temp_7=gcnew array<Reflector::CodeModel::IType^>(1);        //newarr				Reflector::CodeModel::IType
	IL_0014:            this->F_x5=Temp_7;                                          //stfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_8=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_0022:            return;                                                     //ret
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_1=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_0029:            V_0=Temp_1;                                                 //stloc.0
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldloc.0
	IL_002c:            Temp_2=V_0->Length;                                         //ldlen
	IL_002d:                                                                        //conv.i4
	IL_002e:                                                                        //ldc.i4.1
	IL_002f:                                                                        //add
	IL_0030:                                                                        //conv.ovf.u4
	IL_0031:            Temp_3=gcnew array<Reflector::CodeModel::IType^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::IType
	IL_0036:            this->F_x5=Temp_3;                                          //stfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_4=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_0042:                                                                        //ldc.i4.0
	IL_0043:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_5=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IType^>^ Root::T_x152 F_x5
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_6=V_0->Length;                                         //ldlen
	IL_0050:                                                                        //conv.i4
	IL_0051:                                                                        //ldarg.1
	IL_0052:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_0053:            return;                                                     //ret

}
inline System::Boolean Root::T_x152::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0051;case 1:goto IL_0035;case 2:goto IL_000b;case 3:goto IL_005f;};//switch				(IL_0051,IL_0035,IL_000b,IL_005f)
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            if(this!=safe_cast<Root::T_x152^>(A_0))goto IL_003f;        //bne.un.s				IL_003f
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_1=1;                                                      //stloc				V_1
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_006c;                                               //br.s				IL_006c
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldloc.0
	IL_0039:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IType^>(this),V_0);//call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_003e:            return Temp_0;                                              //ret
	IL_003f:                                                                        //ldarg.1
	IL_0040:                                                                        //isinst				Reflector::CodeModel::IType
	IL_0045:            V_0=dynamic_cast<Reflector::CodeModel::IType^>(A_0);        //stloc.0
	IL_0046:                                                                        //ldc.i4				0x0
	IL_004b:            V_1=0;                                                      //stloc				V_1
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:                                                                        //ldloc.0
	IL_0052:            if(V_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_0054:                                                                        //ldc.i4				0x3
	IL_0059:            V_1=3;                                                      //stloc				V_1
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:                                                                        //ldc.i4.4
	IL_0060:                                                                        //dup
	IL_0061:                                                                        //dup
	IL_0062:                                                                        //ldc.i4.2
	IL_0063:                                                                        //sub
	IL_0064:                                                                        //blt				IL_0060
	IL_0069:                                                                        //pop
	IL_006a:            goto IL_0037;                                               //br.s				IL_0037
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:            return true;                                                //ret
	IL_006e:                                                                        //ldc.i4.0
	IL_006f:            return false;                                               //ret

}
inline void Root::T_x152::M_x1(System::String^ A_0)
//Reflector::CodeModel::IGenericParameter^::set_Name by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x152::M_x12()
//Reflector::CodeModel::IGenericParameter^::get_Name by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::String^ Root::T_x152 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x152::M_x13()
//System::Object^::ToString by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::String^ Root::T_x152::M_x12()
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x152::M_x2()
//System::Object^::GetHashCode by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::String^ Root::T_x152::M_x12()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::GenericParameterVariance Root::T_x152::M_x8()
//Reflector::CodeModel::IGenericParameter^::get_Variance by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::UInt16 Root::T_x152 F_x13
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.3
	IL_0008:                                                                        //and
	IL_0009:            return safe_cast<Reflector::CodeModel::GenericParameterVariance>((safe_cast<System::Int32>(Temp_0) & 3));//ret

}
inline Reflector::CodeModel::IType^ Root::T_x152::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x152::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	Root::T_x11^ Temp_2 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x152 F_x1
	IL_0016:            Temp_2=gcnew Root::T_x11(Temp_1);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_001b:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x152::Owner::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x152 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x152::Owner::set(Reflector::CodeModel::IGenericArgumentProvider^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x152::Position::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x152 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x152::Position::set(System::Int32 value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
