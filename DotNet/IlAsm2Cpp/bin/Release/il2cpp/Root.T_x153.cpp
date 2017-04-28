#include "global_xref.h"

inline Root::T_x153::T_x153(Root::T_x161^ A_0,System::Int32 A_1,System::Int32 A_2,System::Object^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x161^ Root::T_x153 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::Int32 Root::T_x153 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.3
	IL_0016:            this->F_x12=A_2;                                            //stfld				System::Int32 Root::T_x153 F_x12
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.s				A_3
	IL_001e:            this->F_x13=A_3;                                            //stfld				System::Object^ Root::T_x153 F_x13
	IL_0023:            return;                                                     //ret

}
inline System::Int32 Root::T_x153::M_x1()
//System::Object^::GetHashCode by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->M_x12();                                       //call				System::Int32 Root::T_x153::M_x12()
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldloca.s				V_0
	IL_000c:            Temp_1=V_0.GetHashCode();                                   //call				System::Int32 System::Int32::GetHashCode()
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_2=this->M_x13();                                       //call				System::Int32 Root::T_x153::M_x13()
	IL_0017:            V_0=Temp_2;                                                 //stloc.0
	IL_0018:                                                                        //ldloca.s				V_0
	IL_001a:            Temp_3=V_0.GetHashCode();                                   //call				System::Int32 System::Int32::GetHashCode()
	IL_001f:                                                                        //add
	IL_0020:            return (Temp_1 + Temp_3);                                   //ret

}
inline void Root::T_x153::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IInstruction^::set_Code by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::Int32 Root::T_x153 F_x12
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x153::M_x1(System::Object^ A_0)
//Reflector::CodeModel::IInstruction^::set_Value by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x153::M_x12()
//Reflector::CodeModel::IInstruction^::get_Code by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x153 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x153::M_x13()
//Reflector::CodeModel::IInstruction^::get_Offset by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x153 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Object^ Root::T_x153::M_x2()
//Reflector::CodeModel::IInstruction^::get_Value by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x161^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Root::T_x161^ Temp_3 = nullptr;
	Root::T_x161^ Temp_4 = nullptr;
	Root::T_x2^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::IGenericArgumentProvider^ V_0 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0077;                                               //br.s				IL_0077
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0375;case 1:goto IL_035c;case 2:goto IL_01ca;case 3:goto IL_02fa;case 4:goto IL_008c;case 5:goto IL_00cb;case 6:goto IL_01a8;case 7:goto IL_02e7;case 8:goto IL_0299;case 9:goto IL_0286;case 10:goto IL_02c5;case 11:goto IL_03a1;case 12:goto IL_0200;case 13:goto IL_02b2;case 14:goto IL_0330;case 15:goto IL_0229;case 16:goto IL_0192;case 17:goto IL_0320;case 18:goto IL_0388;case 19:goto IL_00a5;case 20:goto IL_00b8;case 21:goto IL_0213;case 22:goto IL_00e4;case 23:goto IL_01dd;case 24:goto IL_00f7;case 25:goto IL_0349;case 26:goto IL_0273;};//switch				(IL_0375,IL_035c,IL_01ca,IL_02fa,IL_008c,IL_00cb,IL_01a8,IL_02e7,IL_0299,IL_0286,IL_02c5,IL_03a1,IL_0200,IL_02b2,IL_0330,IL_0229,IL_0192,IL_0320,IL_0388,IL_00a5,IL_00b8,IL_0213,IL_00e4,IL_01dd,IL_00f7,IL_0349,IL_0273)
	IL_0077:                                                                        //ldarg.0
	IL_0078:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x153 F_x12
	IL_007d:            V_2=Temp_0;                                                 //stloc.2
	IL_007e:                                                                        //ldc.i4				0x4
	IL_0083:            V_3=4;                                                      //stloc				V_3
	IL_0087:            /*goto IL_0002;*/goto IL_008c;                              //br				IL_0002
	IL_008c:                                                                        //ldloc.2
	IL_008d:                                                                        //ldc.i4				0xc2
	IL_0092:            if(V_2>194)goto IL_037a;                                    //bgt				IL_037a
	IL_0097:                                                                        //ldc.i4				0x13
	IL_009c:            V_3=19;                                                     //stloc				V_3
	IL_00a0:            /*goto IL_0002;*/goto IL_00a5;                              //br				IL_0002
	IL_00a5:            goto IL_0322;                                               //br				IL_0322
	IL_00aa:                                                                        //ldc.i4				0x14
	IL_00af:            V_3=20;                                                     //stloc				V_3
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:            goto IL_03a6;                                               //br				IL_03a6
	IL_00bd:                                                                        //ldc.i4				0x5
	IL_00c2:            V_3=5;                                                      //stloc				V_3
	IL_00c6:            /*goto IL_0002;*/goto IL_00cb;                              //br				IL_0002
	IL_00cb:                                                                        //ldloc.2
	IL_00cc:                                                                        //ldc.i4				0xc6
	IL_00d1:            if(V_2==198)goto IL_022e;                                   //beq				IL_022e
	IL_00d6:                                                                        //ldc.i4				0x16
	IL_00db:            V_3=22;                                                     //stloc				V_3
	IL_00df:            /*goto IL_0002;*/goto IL_00e4;                              //br				IL_0002
	IL_00e4:            goto IL_0205;                                               //br				IL_0205
	IL_00e9:                                                                        //ldc.i4				0x18
	IL_00ee:            V_3=24;                                                     //stloc				V_3
	IL_00f2:            /*goto IL_0002;*/goto IL_00f7;                              //br				IL_0002
	IL_00f7:                                                                        //ldloc.2
	IL_00f8:                                                                        //ldc.i4.s				111
	IL_00fa:                                                                        //sub
	IL_00fb:            switch((V_2 - 111)){case 0:goto IL_022e;case 1:goto IL_022e;case 2:goto IL_022e;case 3:goto IL_03a6;case 4:goto IL_022e;case 5:goto IL_022e;case 6:goto IL_022e;case 7:goto IL_03a6;case 8:goto IL_03a6;case 9:goto IL_03a6;case 10:goto IL_022e;case 11:goto IL_03a6;case 12:goto IL_022e;case 13:goto IL_022e;case 14:goto IL_022e;case 15:goto IL_022e;case 16:goto IL_022e;case 17:goto IL_022e;case 18:goto IL_022e;case 19:goto IL_03a6;case 20:goto IL_03a6;case 21:goto IL_03a6;case 22:goto IL_03a6;case 23:goto IL_03a6;case 24:goto IL_03a6;case 25:goto IL_03a6;case 26:goto IL_03a6;case 27:goto IL_03a6;case 28:goto IL_03a6;case 29:goto IL_022e;case 30:goto IL_022e;case 31:goto IL_03a6;case 32:goto IL_022e;};//switch				(IL_022e,IL_022e,IL_022e,IL_03a6,IL_022e,IL_022e,IL_022e,IL_03a6,IL_03a6,IL_03a6,IL_022e,IL_03a6,IL_022e,IL_022e,IL_022e,IL_022e,IL_022e,IL_022e,IL_022e,IL_03a6,IL_03a6,IL_03a6,IL_03a6,IL_03a6,IL_03a6,IL_03a6,IL_03a6,IL_03a6,IL_03a6,IL_022e,IL_022e,IL_03a6,IL_022e)
	IL_0184:                                                                        //ldc.i4				0x10
	IL_0189:            V_3=16;                                                     //stloc				V_3
	IL_018d:            /*goto IL_0002;*/goto IL_0192;                              //br				IL_0002
	IL_0192:            goto IL_0195;                                               //br.s				IL_0195
	IL_0194:                                                                        //break
	IL_0195:            goto IL_0278;                                               //br				IL_0278
	IL_019a:                                                                        //ldc.i4				0x6
	IL_019f:            V_3=6;                                                      //stloc				V_3
	IL_01a3:            /*goto IL_0002;*/goto IL_01a8;                              //br				IL_0002
	IL_01a8:                                                                        //ldloc.2
	IL_01a9:                                                                        //ldc.i4				0xfe15
	IL_01ae:                                                                        //sub
	IL_01af:            switch((V_2 - 65045)){case 0:goto IL_022e;case 1:goto IL_022e;};//switch				(IL_022e,IL_022e)
	IL_01bc:                                                                        //ldc.i4				0x2
	IL_01c1:            V_3=2;                                                      //stloc				V_3
	IL_01c5:            /*goto IL_0002;*/goto IL_01ca;                              //br				IL_0002
	IL_01ca:            goto IL_028b;                                               //br				IL_028b
	IL_01cf:                                                                        //ldc.i4				0x17
	IL_01d4:            V_3=23;                                                     //stloc				V_3
	IL_01d8:            /*goto IL_0002;*/goto IL_01dd;                              //br				IL_0002
	IL_01dd:                                                                        //ldloc.2
	IL_01de:                                                                        //ldc.i4.s				39
	IL_01e0:                                                                        //sub
	IL_01e1:            switch((V_2 - 39)){case 0:goto IL_022e;case 1:goto IL_022e;case 2:goto IL_022e;};//switch				(IL_022e,IL_022e,IL_022e)
	IL_01f2:                                                                        //ldc.i4				0xc
	IL_01f7:            V_3=12;                                                     //stloc				V_3
	IL_01fb:            /*goto IL_0002;*/goto IL_0200;                              //br				IL_0002
	IL_0200:            goto IL_00e9;                                               //br				IL_00e9
	IL_0205:                                                                        //ldc.i4				0x15
	IL_020a:            V_3=21;                                                     //stloc				V_3
	IL_020e:            /*goto IL_0002;*/goto IL_0213;                              //br				IL_0002
	IL_0213:                                                                        //ldloc.2
	IL_0214:                                                                        //ldc.i4				0xd0
	IL_0219:            if(V_2==208)goto IL_022e;                                   //beq.s				IL_022e
	IL_021b:                                                                        //ldc.i4				0xf
	IL_0220:            V_3=15;                                                     //stloc				V_3
	IL_0224:            /*goto IL_0002;*/goto IL_0229;                              //br				IL_0002
	IL_0229:            goto IL_00aa;                                               //br				IL_00aa
	IL_022e:                                                                        //ldarg.0
	IL_022f:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x153 F_x1
	IL_0234:            Temp_2=Temp_1->DeclaringType;                               //callvirt				Reflector::CodeModel::IType^ Root::T_x161::get_DeclaringType()
	IL_0239:                                                                        //isinst				Reflector::CodeModel::IGenericArgumentProvider
	IL_023e:            V_0=dynamic_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_2);//stloc.0
	IL_023f:                                                                        //ldarg.0
	IL_0240:            Temp_3=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x153 F_x1
	IL_0245:            V_1=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_3);//stloc.1
	IL_0246:                                                                        //ldarg.0
	IL_0247:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x153 F_x1
	IL_024c:            Temp_5=Temp_4->M_x11();                                     //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_0251:                                                                        //ldarg.0
	IL_0252:            Temp_6=this->F_x13;                                         //ldfld				System::Object^ Root::T_x153 F_x13
	IL_0257:                                                                        //unbox				System::Int32
	IL_025c:                                                                        //ldind.i4
	IL_025d:                                                                        //ldloc.0
	IL_025e:                                                                        //ldloc.1
	IL_025f:            Temp_7=Temp_5->M_x8(safe_cast<System::Int32>(Temp_6),V_0,V_1);//callvirt				System::Object^ Root::T_x2::M_x8(System::Int32,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0264:            return Temp_7;                                              //ret
	IL_0265:                                                                        //ldc.i4				0x1a
	IL_026a:            V_3=26;                                                     //stloc				V_3
	IL_026e:            /*goto IL_0002;*/goto IL_0273;                              //br				IL_0002
	IL_0273:            goto IL_03a6;                                               //br				IL_03a6
	IL_0278:                                                                        //ldc.i4				0x9
	IL_027d:            V_3=9;                                                      //stloc				V_3
	IL_0281:            /*goto IL_0002;*/goto IL_0286;                              //br				IL_0002
	IL_0286:            goto IL_03a6;                                               //br				IL_03a6
	IL_028b:                                                                        //ldc.i4				0x8
	IL_0290:            V_3=8;                                                      //stloc				V_3
	IL_0294:            /*goto IL_0002;*/goto IL_0299;                              //br				IL_0002
	IL_0299:                                                                        //ldloc.2
	IL_029a:                                                                        //ldc.i4				0xfe1c
	IL_029f:            if(V_2!=65052)goto IL_03a6;                                 //bne.un				IL_03a6
	IL_02a4:                                                                        //ldc.i4				0xd
	IL_02a9:            V_3=13;                                                     //stloc				V_3
	IL_02ad:            /*goto IL_0002;*/goto IL_02b2;                              //br				IL_0002
	IL_02b2:            goto IL_022e;                                               //br				IL_022e
	IL_02b7:                                                                        //ldc.i4				0xa
	IL_02bc:            V_3=10;                                                     //stloc				V_3
	IL_02c0:            /*goto IL_0002;*/goto IL_02c5;                              //br				IL_0002
	IL_02c5:                                                                        //ldloc.2
	IL_02c6:                                                                        //ldc.i4				0xfe06
	IL_02cb:                                                                        //sub
	IL_02cc:            switch((V_2 - 65030)){case 0:goto IL_022e;case 1:goto IL_022e;};//switch				(IL_022e,IL_022e)
	IL_02d9:                                                                        //ldc.i4				0x7
	IL_02de:            V_3=7;                                                      //stloc				V_3
	IL_02e2:            /*goto IL_0002;*/goto IL_02e7;                              //br				IL_0002
	IL_02e7:            goto IL_019a;                                               //br				IL_019a
	IL_02ec:                                                                        //ldc.i4				0x3
	IL_02f1:            V_3=3;                                                      //stloc				V_3
	IL_02f5:            /*goto IL_0002;*/goto IL_02fa;                              //br				IL_0002
	IL_02fa:                                                                        //ldloc.2
	IL_02fb:                                                                        //ldc.i4				0xa3
	IL_0300:                                                                        //sub
	IL_0301:            switch((V_2 - 163)){case 0:goto IL_022e;case 1:goto IL_022e;case 2:goto IL_022e;};//switch				(IL_022e,IL_022e,IL_022e)
	IL_0312:                                                                        //ldc.i4				0x11
	IL_0317:            V_3=17;                                                     //stloc				V_3
	IL_031b:            /*goto IL_0002;*/goto IL_0320;                              //br				IL_0002
	IL_0320:            goto IL_034e;                                               //br.s				IL_034e
	IL_0322:                                                                        //ldc.i4				0xe
	IL_0327:            V_3=14;                                                     //stloc				V_3
	IL_032b:            /*goto IL_0002;*/goto IL_0330;                              //br				IL_0002
	IL_0330:                                                                        //ldloc.2
	IL_0331:                                                                        //ldc.i4				0x8f
	IL_0336:            if(V_2>143)goto IL_02ec;                                    //bgt				IL_02ec
	IL_033b:                                                                        //ldc.i4				0x19
	IL_0340:            V_3=25;                                                     //stloc				V_3
	IL_0344:            /*goto IL_0002;*/goto IL_0349;                              //br				IL_0002
	IL_0349:            goto IL_01cf;                                               //br				IL_01cf
	IL_034e:                                                                        //ldc.i4				0x1
	IL_0353:            V_3=1;                                                      //stloc				V_3
	IL_0357:            /*goto IL_0002;*/goto IL_035c;                              //br				IL_0002
	IL_035c:                                                                        //ldloc.2
	IL_035d:                                                                        //ldc.i4				0xc2
	IL_0362:            if(V_2==194)goto IL_022e;                                   //beq				IL_022e
	IL_0367:                                                                        //ldc.i4				0x0
	IL_036c:            V_3=0;                                                      //stloc				V_3
	IL_0370:            /*goto IL_0002;*/goto IL_0375;                              //br				IL_0002
	IL_0375:            goto IL_0265;                                               //br				IL_0265
	IL_037a:                                                                        //ldc.i4				0x12
	IL_037f:            V_3=18;                                                     //stloc				V_3
	IL_0383:            /*goto IL_0002;*/goto IL_0388;                              //br				IL_0002
	IL_0388:                                                                        //ldloc.2
	IL_0389:                                                                        //ldc.i4				0xd0
	IL_038e:            if(V_2>208)goto IL_02b7;                                    //bgt				IL_02b7
	IL_0393:                                                                        //ldc.i4				0xb
	IL_0398:            V_3=11;                                                     //stloc				V_3
	IL_039c:            /*goto IL_0002;*/goto IL_03a1;                              //br				IL_0002
	IL_03a1:            goto IL_00bd;                                               //br				IL_00bd
	IL_03a6:                                                                        //ldarg.0
	IL_03a7:            Temp_8=this->F_x13;                                         //ldfld				System::Object^ Root::T_x153 F_x13
	IL_03ac:            return Temp_8;                                              //ret

}
inline void Root::T_x153::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IInstruction^::set_Offset by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Int32 Root::T_x153 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x153::M_x2(System::Object^ A_0)
//System::Object^::Equals by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Object^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Int32 Temp_8 = 0;
	System::Boolean Temp_9 = false;
	System::Int32 Temp_10 = 0;
	//local variables.
	Reflector::CodeModel::IInstruction^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_2=12;                                                     //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_004e;                                               //br.s				IL_004e
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_00f8;case 1:goto IL_0096;case 2:goto IL_011a;case 3:goto IL_0161;case 4:goto IL_0171;case 5:goto IL_007d;case 6:goto IL_018a;case 7:goto IL_00aa;case 8:goto IL_006a;case 9:goto IL_00df;case 10:goto IL_00be;case 11:goto IL_005d;case 12:goto IL_000b;case 13:goto IL_0134;};//switch				(IL_00f8,IL_0096,IL_011a,IL_0161,IL_0171,IL_007d,IL_018a,IL_00aa,IL_006a,IL_00df,IL_00be,IL_005d,IL_000b,IL_0134)
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:            if(this!=safe_cast<Root::T_x153^>(A_0))goto IL_0081;        //bne.un.s				IL_0081
	IL_0052:                                                                        //ldc.i4				0xb
	IL_0057:            V_2=11;                                                     //stloc				V_2
	IL_005b:            /*goto IL_000d;*/goto IL_005d;                              //br.s				IL_000d
	IL_005d:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_005f:                                                                        //ldc.i4				0x8
	IL_0064:            V_2=8;                                                      //stloc				V_2
	IL_0068:            /*goto IL_000d;*/goto IL_006a;                              //br.s				IL_000d
	IL_006a:                                                                        //ldloc.0
	IL_006b:            Temp_4=V_0->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_0070:            if(Temp_4!=nullptr)goto IL_00ac;                            //brtrue.s				IL_00ac
	IL_0072:                                                                        //ldc.i4				0x5
	IL_0077:            V_2=5;                                                      //stloc				V_2
	IL_007b:            /*goto IL_000d;*/goto IL_007d;                              //br.s				IL_000d
	IL_007d:            goto IL_00b0;                                               //br.s				IL_00b0
	IL_007f:                                                                        //ldc.i4.0
	IL_0080:            return false;                                               //ret
	IL_0081:                                                                        //ldarg.1
	IL_0082:                                                                        //isinst				Reflector::CodeModel::IInstruction
	IL_0087:            V_0=dynamic_cast<Reflector::CodeModel::IInstruction^>(A_0); //stloc.0
	IL_0088:                                                                        //ldc.i4				0x1
	IL_008d:            V_2=1;                                                      //stloc				V_2
	IL_0091:            /*goto IL_000d;*/goto IL_0096;                              //br				IL_000d
	IL_0096:                                                                        //ldloc.0
	IL_0097:            if(V_0==nullptr)goto IL_0191;                               //brfalse				IL_0191
	IL_009c:                                                                        //ldc.i4				0x7
	IL_00a1:            V_2=7;                                                      //stloc				V_2
	IL_00a5:            /*goto IL_000d;*/goto IL_00aa;                              //br				IL_000d
	IL_00aa:            goto IL_011f;                                               //br.s				IL_011f
	IL_00ac:                                                                        //ldc.i4.0
	IL_00ad:            return false;                                               //ret
	IL_00ae:                                                                        //ldc.i4.1
	IL_00af:            return true;                                                //ret
	IL_00b0:                                                                        //ldc.i4				0xa
	IL_00b5:            V_2=10;                                                     //stloc				V_2
	IL_00b9:            /*goto IL_000d;*/goto IL_00be;                              //br				IL_000d
	IL_00be:                                                                        //ldarg.0
	IL_00bf:            Temp_5=this->M_x2();                                        //call				System::Object^ Root::T_x153::M_x2()
	IL_00c4:                                                                        //ldloc.0
	IL_00c5:            Temp_6=V_0->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_00ca:            Temp_7=Temp_5->Equals(Temp_6);                              //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00cf:            if(Temp_7)goto IL_00e1;                                     //brtrue.s				IL_00e1
	IL_00d1:                                                                        //ldc.i4				0x9
	IL_00d6:            V_2=9;                                                      //stloc				V_2
	IL_00da:            /*goto IL_000d;*/goto IL_00df;                              //br				IL_000d
	IL_00df:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_00e1:                                                                        //ldc.i4.1
	IL_00e2:            return true;                                                //ret
	IL_00e3:                                                                        //ldarg.0
	IL_00e4:            Temp_10=this->M_x12();                                      //call				System::Int32 Root::T_x153::M_x12()
	IL_00e9:            V_1=Temp_10;                                                //stloc.1
	IL_00ea:                                                                        //ldc.i4				0x0
	IL_00ef:            V_2=0;                                                      //stloc				V_2
	IL_00f3:            /*goto IL_000d;*/goto IL_00f8;                              //br				IL_000d
	IL_00f8:                                                                        //ldloca.s				V_1
	IL_00fa:                                                                        //ldloc.0
	IL_00fb:            Temp_0=V_0->Code;                                           //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_0100:                                                                        //box				System::Int32
	IL_0105:            Temp_1=V_1.Equals(safe_cast<System::Object^>(Temp_0));      //call				System::Boolean System::Int32::Equals(System::Object^)
	IL_010a:            if(Temp_1)goto IL_0163;                                     //brtrue.s				IL_0163
	IL_010c:                                                                        //ldc.i4				0x2
	IL_0111:            V_2=2;                                                      //stloc				V_2
	IL_0115:            /*goto IL_000d;*/goto IL_011a;                              //br				IL_000d
	IL_011a:            goto IL_007f;                                               //br				IL_007f
	IL_011f:                                                                        //ldarg.0
	IL_0120:            Temp_3=this->M_x13();                                       //call				System::Int32 Root::T_x153::M_x13()
	IL_0125:            V_1=Temp_3;                                                 //stloc.1
	IL_0126:                                                                        //ldc.i4				0xd
	IL_012b:            V_2=13;                                                     //stloc				V_2
	IL_012f:            /*goto IL_000d;*/goto IL_0134;                              //br				IL_000d
	IL_0134:                                                                        //ldloca.s				V_1
	IL_0136:                                                                        //ldloc.0
	IL_0137:            Temp_8=V_0->Offset;                                         //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Offset()
	IL_013c:                                                                        //box				System::Int32
	IL_0141:            Temp_9=V_1.Equals(safe_cast<System::Object^>(Temp_8));      //call				System::Boolean System::Int32::Equals(System::Object^)
	IL_0146:            if(Temp_9)goto IL_00e3;                                     //brtrue.s				IL_00e3
	IL_0148:                                                                        //ldc.i4.4
	IL_0149:                                                                        //dup
	IL_014a:                                                                        //dup
	IL_014b:                                                                        //ldc.i4.2
	IL_014c:                                                                        //sub
	IL_014d:                                                                        //blt				IL_0149
	IL_0152:                                                                        //pop
	IL_0153:                                                                        //ldc.i4				0x3
	IL_0158:            V_2=3;                                                      //stloc				V_2
	IL_015c:            /*goto IL_000d;*/goto IL_0161;                              //br				IL_000d
	IL_0161:            goto IL_018f;                                               //br.s				IL_018f
	IL_0163:                                                                        //ldc.i4				0x4
	IL_0168:            V_2=4;                                                      //stloc				V_2
	IL_016c:            /*goto IL_000d;*/goto IL_0171;                              //br				IL_000d
	IL_0171:                                                                        //ldarg.0
	IL_0172:            Temp_2=this->M_x2();                                        //call				System::Object^ Root::T_x153::M_x2()
	IL_0177:            if(Temp_2!=nullptr)goto IL_00b0;                            //brtrue				IL_00b0
	IL_017c:                                                                        //ldc.i4				0x6
	IL_0181:            V_2=6;                                                      //stloc				V_2
	IL_0185:            /*goto IL_000d;*/goto IL_018a;                              //br				IL_000d
	IL_018a:            goto IL_005f;                                               //br				IL_005f
	IL_018f:                                                                        //ldc.i4.0
	IL_0190:            return false;                                               //ret
	IL_0191:                                                                        //ldc.i4.0
	IL_0192:            return false;                                               //ret

}
inline System::String^ Root::T_x153::M_x8()
//System::Object^::ToString by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::Globalization::CultureInfo^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	//local variables.
	System::Object^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_6=2;                                                      //stloc				V_6
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->M_x2();                                        //call				System::Object^ Root::T_x153::M_x2()
	IL_000f:            V_0=Temp_0;                                                 //stloc.0
	IL_0010:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0015:            Temp_2=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_1));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_001a:            V_1=Temp_2;                                                 //stloc.1
	IL_001b:            /*goto IL_001d;*/goto IL_001B01;                            //br.s				IL_001d
	IL_001B01:          try{
	IL_001d:            goto IL_0038;                                               //br.s				IL_0038
	IL_001f:                                                                        //ldloc				V_4
	IL_0023:            switch(V_4){case 0:goto IL_010e;case 1:goto IL_00f7;case 2:goto IL_00b6;case 3:goto IL_00c7;};//switch				(IL_010e,IL_00f7,IL_00b6,IL_00c7)
	IL_0038:            goto IL_003b;                                               //br.s				IL_003b
	IL_003a:                                                                        //break
	IL_003b:                                                                        //ldloc.1
	IL_003c:                                                                        //ldstr				L"\x6C1F"
	IL_0041:                                                                        //ldloc				V_6
	IL_0045:            Temp_3=a(L"\x6C1F",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_4=this->M_x13();                                       //call				System::Int32 Root::T_x153::M_x13()
	IL_0050:            V_3=Temp_4;                                                 //stloc.3
	IL_0051:                                                                        //ldloca.s				V_3
	IL_0053:                                                                        //ldstr				L"\x781F\x1621"
	IL_0058:                                                                        //ldloc				V_6
	IL_005c:            Temp_5=a(L"\x781F\x1621",V_6);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0061:            Temp_6=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0066:            Temp_7=V_3.ToString(Temp_5,safe_cast<System::IFormatProvider^>(Temp_6));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_006b:            Temp_8=System::String::Concat(Temp_3,Temp_7);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0070:            V_1->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0075:                                                                        //ldloc.1
	IL_0076:                                                                        //ldstr				L"\x1A1F\x0221"
	IL_007b:                                                                        //ldloc				V_6
	IL_007f:            Temp_9=a(L"\x1A1F\x0221",V_6);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0084:            V_1->Write(Temp_9);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0089:                                                                        //ldloc.1
	IL_008a:                                                                        //ldarg.0
	IL_008b:                                                                        //ldflda				System::Int32 Root::T_x153 F_x12
	IL_0090:                                                                        //ldstr				L"\x781F\x1621"
	IL_0095:                                                                        //ldloc				V_6
	IL_0099:            Temp_10=a(L"\x781F\x1621",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009e:            Temp_11=this->F_x12.ToString(Temp_10);                      //call				System::String^ System::Int32::ToString(System::String^)
	IL_00a3:            V_1->Write(Temp_11);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00a8:                                                                        //ldc.i4				0x2
	IL_00ad:            V_4=2;                                                      //stloc				V_4
	IL_00b1:            /*goto IL_001f;*/goto IL_00b6;                              //br				IL_001f
	IL_00b6:                                                                        //ldloc.0
	IL_00b7:            if(V_0==nullptr)goto IL_00f9;                               //brfalse.s				IL_00f9
	IL_00b9:                                                                        //ldc.i4				0x3
	IL_00be:            V_4=3;                                                      //stloc				V_4
	IL_00c2:            /*goto IL_001f;*/goto IL_00c7;                              //br				IL_001f
	IL_00c7:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_00c9:                                                                        //ldloc.1
	IL_00ca:                                                                        //ldstr				L"\x001F"
	IL_00cf:                                                                        //ldloc				V_6
	IL_00d3:            Temp_13=a(L"\x001F",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d8:            V_1->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00dd:                                                                        //ldloc.1
	IL_00de:                                                                        //ldloc.0
	IL_00df:            Temp_14=V_0->ToString();                                    //callvirt				System::String^ System::Object::ToString()
	IL_00e4:            V_1->Write(Temp_14);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e9:                                                                        //ldc.i4				0x1
	IL_00ee:            V_4=1;                                                      //stloc				V_4
	IL_00f2:            /*goto IL_001f;*/goto IL_00f7;                              //br				IL_001f
	IL_00f7:            goto IL_00f9;                                               //br.s				IL_00f9
	IL_00f9:                                                                        //ldloc.1
	IL_00fa:            Temp_12=V_1->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_00ff:            V_2=Temp_12;                                                //stloc.2
	IL_0100:                                                                        //ldc.i4				0x0
	IL_0105:            V_4=0;                                                      //stloc				V_4
	IL_0109:            /*goto IL_001f;*/goto IL_010e;                              //br				IL_001f
	IL_010e:            goto IL_0156;                                               //leave.s				IL_0156
	                    ;}
	                    finally{
	IL_0110:                                                                        //ldc.i4				0x0
	IL_0115:            V_5=0;                                                      //stloc				V_5
	IL_0119:            /*goto IL_011d;*/goto IL_011b;                              //br.s				IL_011d
	IL_011b:            goto IL_0132;                                               //br.s				IL_0132
	IL_011d:                                                                        //ldloc				V_5
	IL_0121:            switch(V_5){case 0:goto IL_011b;case 1:goto IL_0153;case 2:goto IL_0140;};//switch				(IL_011b,IL_0153,IL_0140)
	IL_0132:                                                                        //ldloc.1
	IL_0133:            if(V_1==nullptr)goto IL_0155;                               //brfalse.s				IL_0155
	IL_0135:                                                                        //ldc.i4				0x2
	IL_013a:            V_5=2;                                                      //stloc				V_5
	IL_013e:            /*goto IL_011d;*/goto IL_0140;                              //br.s				IL_011d
	IL_0140:            goto IL_0142;                                               //br.s				IL_0142
	IL_0142:                                                                        //ldloc.1
	IL_0143:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0148:                                                                        //ldc.i4				0x1
	IL_014d:            V_5=1;                                                      //stloc				V_5
	IL_0151:            /*goto IL_011d;*/goto IL_0153;                              //br.s				IL_011d
	IL_0153:            goto IL_0155;                                               //br.s				IL_0155
	IL_0155:                                                                        //endfinally
	                    ;}
	IL_0156:                                                                        //ldloc.2
	IL_0157:            return V_2;                                                 //ret

}
