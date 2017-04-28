#include "global_xref.h"

inline Root::T_x158::T_x158()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x158::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::String^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::String^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	Reflector::CodeModel::IType^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Char Temp_22 = (System::Char)0;
	System::Boolean Temp_23 = false;
	System::String^ Temp_24 = nullptr;
	System::Boolean Temp_25 = false;
	System::Boolean Temp_26 = false;
	System::Char Temp_27 = (System::Char)0;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::Int32 Temp_30 = 0;
	System::String^ Temp_31 = nullptr;
	System::Boolean Temp_32 = false;
	System::String^ Temp_33 = nullptr;
	System::Boolean Temp_34 = false;
	System::Globalization::CultureInfo^ Temp_35 = nullptr;
	System::Char Temp_36 = (System::Char)0;
	System::String^ Temp_37 = nullptr;
	Reflector::CodeModel::IType^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	System::String^ Temp_45 = nullptr;
	System::Boolean Temp_46 = false;
	System::String^ Temp_47 = nullptr;
	System::Char Temp_48 = (System::Char)0;
	System::Boolean Temp_49 = false;
	System::Char Temp_50 = (System::Char)0;
	System::Boolean Temp_51 = false;
	System::String^ Temp_52 = nullptr;
	System::Boolean Temp_53 = false;
	System::Int32 Temp_54 = 0;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	Reflector::CodeModel::IArrayType^ V_1 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_2 = nullptr;
	Reflector::CodeModel::IPointerType^ V_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Char V_7 = (System::Char)0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_9=2;                                                      //stloc				V_9
	IL_0009:            goto IL_00e3;                                               //br				IL_00e3
	IL_000e:                                                                        //ldloc				V_8
	IL_0012:            switch(V_8){case 0:goto IL_060e;case 1:goto IL_0363;case 2:goto IL_0248;case 3:goto IL_0467;case 4:goto IL_056c;case 5:goto IL_0221;case 6:goto IL_0518;case 7:goto IL_039d;case 8:goto IL_031f;case 9:goto IL_026a;case 10:goto IL_053f;case 11:goto IL_0683;case 12:goto IL_04c4;case 13:goto IL_05c0;case 14:goto IL_0332;case 15:goto IL_020e;case 16:goto IL_0505;case 17:goto IL_059e;case 18:goto IL_04a1;case 19:goto IL_0649;case 20:goto IL_03b7;case 21:goto IL_01fa;case 22:goto IL_0350;case 23:goto IL_06d0;case 24:goto IL_01a6;case 25:goto IL_0418;case 26:goto IL_0454;case 27:goto IL_027d;case 28:goto IL_013d;case 29:goto IL_02c3;case 30:goto IL_0150;case 31:goto IL_0627;case 32:goto IL_01b9;case 33:goto IL_0432;case 34:goto IL_06bd;case 35:goto IL_03cb;case 36:goto IL_01e0;case 37:goto IL_0107;case 38:goto IL_0174;case 39:goto IL_0696;case 40:goto IL_065c;case 41:goto IL_03fd;case 42:goto IL_048e;case 43:goto IL_011b;case 44:goto IL_04d4;case 45:goto IL_0293;case 46:goto IL_02d6;case 47:goto IL_05eb;case 48:goto IL_06f4;case 49:goto IL_02fd;case 50:goto IL_02ae;};//switch				(IL_060e,IL_0363,IL_0248,IL_0467,IL_056c,IL_0221,IL_0518,IL_039d,IL_031f,IL_026a,IL_053f,IL_0683,IL_04c4,IL_05c0,IL_0332,IL_020e,IL_0505,IL_059e,IL_04a1,IL_0649,IL_03b7,IL_01fa,IL_0350,IL_06d0,IL_01a6,IL_0418,IL_0454,IL_027d,IL_013d,IL_02c3,IL_0150,IL_0627,IL_01b9,IL_0432,IL_06bd,IL_03cb,IL_01e0,IL_0107,IL_0174,IL_0696,IL_065c,IL_03fd,IL_048e,IL_011b,IL_04d4,IL_0293,IL_02d6,IL_05eb,IL_06f4,IL_02fd,IL_02ae)
	IL_00e3:                                                                        //ldstr				L"\x4C1F\x4D21\x4723\x4725\x4427"
	IL_00e8:                                                                        //ldloc				V_9
	IL_00ec:            Temp_0=a(L"\x4C1F\x4D21\x4723\x4725\x4427",V_9);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f1:            V_0=Temp_0;                                                 //stloc.0
	IL_00f2:                                                                        //ldarg.0
	IL_00f3:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_00f8:            V_1=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.1
	IL_00f9:                                                                        //ldc.i4				0x25
	IL_00fe:            V_8=37;                                                     //stloc				V_8
	IL_0102:            /*goto IL_000e;*/goto IL_0107;                              //br				IL_000e
	IL_0107:                                                                        //ldloc.1
	IL_0108:            if(V_1==nullptr)goto IL_01e5;                               //brfalse				IL_01e5
	IL_010d:                                                                        //ldc.i4				0x2b
	IL_0112:            V_8=43;                                                     //stloc				V_8
	IL_0116:            /*goto IL_000e;*/goto IL_011b;                              //br				IL_000e
	IL_011b:            goto IL_0355;                                               //br				IL_0355
	IL_0120:                                                                        //ldstr				L"\x4E1F\x5721\x4923"
	IL_0125:                                                                        //ldloc				V_9
	IL_0129:            Temp_9=a(L"\x4E1F\x5721\x4923",V_9);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012e:            V_0=Temp_9;                                                 //stloc.0
	IL_012f:                                                                        //ldc.i4				0x1c
	IL_0134:            V_8=28;                                                     //stloc				V_8
	IL_0138:            /*goto IL_000e;*/goto IL_013d;                              //br				IL_000e
	IL_013d:            goto IL_06f9;                                               //br				IL_06f9
	IL_0142:                                                                        //ldc.i4				0x1e
	IL_0147:            V_8=30;                                                     //stloc				V_8
	IL_014b:            /*goto IL_000e;*/goto IL_0150;                              //br				IL_000e
	IL_0150:                                                                        //ldloc.0
	IL_0151:                                                                        //ldstr				L"\x491F\x4C21\x5023"
	IL_0156:                                                                        //ldloc				V_9
	IL_015a:            Temp_31=a(L"\x491F\x4C21\x5023",V_9);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015f:            Temp_32=(V_0 == Temp_31);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0164:            if(Temp_32)goto IL_0120;                                    //brtrue.s				IL_0120
	IL_0166:                                                                        //ldc.i4				0x26
	IL_016b:            V_8=38;                                                     //stloc				V_8
	IL_016f:            /*goto IL_000e;*/goto IL_0174;                              //br				IL_000e
	IL_0174:            goto IL_0688;                                               //br				IL_0688
	IL_0179:                                                                        //ldloc.3
	IL_017a:            Temp_38=V_3->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_017f:            Temp_39=Root::T_x158::M_x1(Temp_38);                        //call				System::String^ Root::T_x158::M_x1(Reflector::CodeModel::IType^)
	IL_0184:                                                                        //ldstr				L"\x701F\x5621\x5623"
	IL_0189:                                                                        //ldloc				V_9
	IL_018d:            Temp_40=a(L"\x701F\x5621\x5623",V_9);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0192:            Temp_41=System::String::Concat(Temp_39,Temp_40);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0197:            V_0=Temp_41;                                                //stloc.0
	IL_0198:                                                                        //ldc.i4				0x18
	IL_019d:            V_8=24;                                                     //stloc				V_8
	IL_01a1:            /*goto IL_000e;*/goto IL_01a6;                              //br				IL_000e
	IL_01a6:            goto IL_0298;                                               //br				IL_0298
	IL_01ab:                                                                        //ldc.i4				0x20
	IL_01b0:            V_8=32;                                                     //stloc				V_8
	IL_01b4:            /*goto IL_000e;*/goto IL_01b9;                              //br				IL_000e
	IL_01b9:                                                                        //ldloc.0
	IL_01ba:                                                                        //ldstr				L"\x431F\x4A21\x4523\x5425"
	IL_01bf:                                                                        //ldloc				V_9
	IL_01c3:            Temp_33=a(L"\x431F\x4A21\x4523\x5425",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c8:            Temp_34=(V_0 == Temp_33);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01cd:            if(!Temp_34)goto IL_02c8;                                   //brfalse				IL_02c8
	IL_01d2:                                                                        //ldc.i4				0x24
	IL_01d7:            V_8=36;                                                     //stloc				V_8
	IL_01db:            /*goto IL_000e;*/goto IL_01e0;                              //br				IL_000e
	IL_01e0:            goto IL_0437;                                               //br				IL_0437
	IL_01e5:                                                                        //ldarg.0
	IL_01e6:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_01eb:            V_2=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.2
	IL_01ec:                                                                        //ldc.i4				0x15
	IL_01f1:            V_8=21;                                                     //stloc				V_8
	IL_01f5:            /*goto IL_000e;*/goto IL_01fa;                              //br				IL_000e
	IL_01fa:                                                                        //ldloc.2
	IL_01fb:            if(V_2==nullptr)goto IL_03a2;                               //brfalse				IL_03a2
	IL_0200:                                                                        //ldc.i4				0xf
	IL_0205:            V_8=15;                                                     //stloc				V_8
	IL_0209:            /*goto IL_000e;*/goto IL_020e;                              //br				IL_000e
	IL_020e:            goto IL_03d0;                                               //br				IL_03d0
	IL_0213:                                                                        //ldc.i4				0x5
	IL_0218:            V_8=5;                                                      //stloc				V_8
	IL_021c:            /*goto IL_000e;*/goto IL_0221;                              //br				IL_000e
	IL_0221:                                                                        //ldloc.0
	IL_0222:                                                                        //ldstr				L"\x441F\x4D21\x5123\x4425\x4427\x4F29"
	IL_0227:                                                                        //ldloc				V_9
	IL_022b:            Temp_12=a(L"\x441F\x4D21\x5123\x4425\x4427\x4F29",V_9);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0230:            Temp_13=(V_0 == Temp_12);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0235:            if(!Temp_13)goto IL_0459;                                   //brfalse				IL_0459
	IL_023a:                                                                        //ldc.i4				0x2
	IL_023f:            V_8=2;                                                      //stloc				V_8
	IL_0243:            /*goto IL_000e;*/goto IL_0248;                              //br				IL_000e
	IL_0248:            goto IL_0120;                                               //br				IL_0120
	IL_024d:                                                                        //ldstr				L"\x541F\x4721\x5C23\x5225"
	IL_0252:                                                                        //ldloc				V_9
	IL_0256:            Temp_56=a(L"\x541F\x4721\x5C23\x5225",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025b:            V_0=Temp_56;                                                //stloc.0
	IL_025c:                                                                        //ldc.i4				0x9
	IL_0261:            V_8=9;                                                      //stloc				V_8
	IL_0265:            /*goto IL_000e;*/goto IL_026a;                              //br				IL_000e
	IL_026a:            goto IL_06f9;                                               //br				IL_06f9
	IL_026f:                                                                        //ldc.i4				0x1b
	IL_0274:            V_8=27;                                                     //stloc				V_8
	IL_0278:            /*goto IL_000e;*/goto IL_027d;                              //br				IL_000e
	IL_027d:                                                                        //ldloc.s				V_6
	IL_027f:                                                                        //ldc.i4.0
	IL_0280:            if(V_6>=0)goto IL_03ff;                                     //bge				IL_03ff
	IL_0285:                                                                        //ldc.i4				0x2d
	IL_028a:            V_8=45;                                                     //stloc				V_8
	IL_028e:            /*goto IL_000e;*/goto IL_0293;                              //br				IL_000e
	IL_0293:            goto IL_0142;                                               //br				IL_0142
	IL_0298:                                                                        //ldarg.0
	IL_0299:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_029e:            V_4=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.s				V_4
	IL_02a0:                                                                        //ldc.i4				0x32
	IL_02a5:            V_8=50;                                                     //stloc				V_8
	IL_02a9:            /*goto IL_000e;*/goto IL_02ae;                              //br				IL_000e
	IL_02ae:                                                                        //ldloc.s				V_4
	IL_02b0:            if(V_4==nullptr)goto IL_0142;                               //brfalse				IL_0142
	IL_02b5:                                                                        //ldc.i4				0x1d
	IL_02ba:            V_8=29;                                                     //stloc				V_8
	IL_02be:            /*goto IL_000e;*/goto IL_02c3;                              //br				IL_000e
	IL_02c3:            goto IL_0544;                                               //br				IL_0544
	IL_02c8:                                                                        //ldc.i4				0x2e
	IL_02cd:            V_8=46;                                                     //stloc				V_8
	IL_02d1:            /*goto IL_000e;*/goto IL_02d6;                              //br				IL_000e
	IL_02d6:                                                                        //ldloc.0
	IL_02d7:                                                                        //ldstr				L"\x531F\x5621\x5623\x4F25\x4627\x4D29"
	IL_02dc:                                                                        //ldloc				V_9
	IL_02e0:            Temp_52=a(L"\x531F\x5621\x5623\x4F25\x4627\x4D29",V_9);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e5:            Temp_53=(V_0 == Temp_52);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_02ea:            if(!Temp_53)goto IL_06c2;                                   //brfalse				IL_06c2
	IL_02ef:                                                                        //ldc.i4				0x31
	IL_02f4:            V_8=49;                                                     //stloc				V_8
	IL_02f8:            /*goto IL_000e;*/goto IL_02fd;                              //br				IL_000e
	IL_02fd:            goto IL_024d;                                               //br				IL_024d
	IL_0302:                                                                        //ldstr				L"\x4F1F\x4021\x4E23"
	IL_0307:                                                                        //ldloc				V_9
	IL_030b:            Temp_55=a(L"\x4F1F\x4021\x4E23",V_9);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0310:            V_0=Temp_55;                                                //stloc.0
	IL_0311:                                                                        //ldc.i4				0x8
	IL_0316:            V_8=8;                                                      //stloc				V_8
	IL_031a:            /*goto IL_000e;*/goto IL_031f;                              //br				IL_000e
	IL_031f:            goto IL_06f9;                                               //br				IL_06f9
	IL_0324:                                                                        //ldc.i4				0xe
	IL_0329:            V_8=14;                                                     //stloc				V_8
	IL_032d:            /*goto IL_000e;*/goto IL_0332;                              //br				IL_000e
	IL_0332:                                                                        //ldloc.s				V_6
	IL_0334:                                                                        //ldc.i4.1
	IL_0335:                                                                        //add
	IL_0336:                                                                        //ldloc.s				V_5
	IL_0338:            Temp_17=V_5->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_033d:            if((V_6 + 1)>=Temp_17)goto IL_0613;                         //bge				IL_0613
	IL_0342:                                                                        //ldc.i4				0x16
	IL_0347:            V_8=22;                                                     //stloc				V_8
	IL_034b:            /*goto IL_000e;*/goto IL_0350;                              //br				IL_000e
	IL_0350:            goto IL_0493;                                               //br				IL_0493
	IL_0355:                                                                        //ldc.i4				0x1
	IL_035a:            V_8=1;                                                      //stloc				V_8
	IL_035e:            /*goto IL_000e;*/goto IL_0363;                              //br				IL_000e
	IL_0363:                                                                        //ldloc.1
	IL_0364:            Temp_1=V_1->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0369:                                                                        //ldstr				L"\x731F\x5B21\x5723\x5225\x4D27\x4729"
	IL_036e:                                                                        //ldloc				V_9
	IL_0372:            Temp_2=a(L"\x731F\x5B21\x5723\x5225\x4D27\x4729",V_9);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0377:                                                                        //ldstr				L"\x621F\x5B21\x5023\x4325"
	IL_037c:                                                                        //ldloc				V_9
	IL_0380:            Temp_3=a(L"\x621F\x5B21\x5023\x4325",V_9);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0385:            Temp_4=Root::T_x183::M_x1(Temp_1,Temp_2,Temp_3);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_038a:            if(!Temp_4)goto IL_0571;                                    //brfalse				IL_0571
	IL_038f:                                                                        //ldc.i4				0x7
	IL_0394:            V_8=7;                                                      //stloc				V_8
	IL_0398:            /*goto IL_000e;*/goto IL_039d;                              //br				IL_000e
	IL_039d:            goto IL_062c;                                               //br				IL_062c
	IL_03a2:                                                                        //ldarg.0
	IL_03a3:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_03a8:            V_3=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.3
	IL_03a9:                                                                        //ldc.i4				0x14
	IL_03ae:            V_8=20;                                                     //stloc				V_8
	IL_03b2:            /*goto IL_000e;*/goto IL_03b7;                              //br				IL_000e
	IL_03b7:                                                                        //ldloc.3
	IL_03b8:            if(V_3==nullptr)goto IL_0298;                               //brfalse				IL_0298
	IL_03bd:                                                                        //ldc.i4				0x23
	IL_03c2:            V_8=35;                                                     //stloc				V_8
	IL_03c6:            /*goto IL_000e;*/goto IL_03cb;                              //br				IL_000e
	IL_03cb:            goto IL_0179;                                               //br				IL_0179
	IL_03d0:                                                                        //ldloc.2
	IL_03d1:            Temp_18=V_2->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_03d6:            Temp_19=Root::T_x158::M_x1(Temp_18);                        //call				System::String^ Root::T_x158::M_x1(Reflector::CodeModel::IType^)
	IL_03db:                                                                        //ldstr				L"\x721F\x4721\x4223"
	IL_03e0:                                                                        //ldloc				V_9
	IL_03e4:            Temp_20=a(L"\x721F\x4721\x4223",V_9);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e9:            Temp_21=System::String::Concat(Temp_19,Temp_20);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_03ee:            V_0=Temp_21;                                                //stloc.0
	IL_03ef:                                                                        //ldc.i4				0x29
	IL_03f4:            V_8=41;                                                     //stloc				V_8
	IL_03f8:            /*goto IL_000e;*/goto IL_03fd;                              //br				IL_000e
	IL_03fd:            goto IL_03a2;                                               //br.s				IL_03a2
	IL_03ff:                                                                        //ldloc.s				V_5
	IL_0401:                                                                        //ldloc.s				V_6
	IL_0403:            Temp_27=V_5[V_6];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_0408:            V_7=Temp_27;                                                //stloc.s				V_7
	IL_040a:                                                                        //ldc.i4				0x19
	IL_040f:            V_8=25;                                                     //stloc				V_8
	IL_0413:            /*goto IL_000e;*/goto IL_0418;                              //br				IL_000e
	IL_0418:                                                                        //ldloc.s				V_7
	IL_041a:            Temp_26=System::Char::IsDigit(V_7);                         //call				System::Boolean System::Char::IsDigit(System::Char)
	IL_041f:            if(Temp_26)goto IL_0613;                                    //brtrue				IL_0613
	IL_0424:                                                                        //ldc.i4				0x21
	IL_0429:            V_8=33;                                                     //stloc				V_8
	IL_042d:            /*goto IL_000e;*/goto IL_0432;                              //br				IL_000e
	IL_0432:            goto IL_05c5;                                               //br				IL_05c5
	IL_0437:                                                                        //ldstr				L"\x431F\x4A21"
	IL_043c:                                                                        //ldloc				V_9
	IL_0440:            Temp_42=a(L"\x431F\x4A21",V_9);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0445:            V_0=Temp_42;                                                //stloc.0
	IL_0446:                                                                        //ldc.i4				0x1a
	IL_044b:            V_8=26;                                                     //stloc				V_8
	IL_044f:            /*goto IL_000e;*/goto IL_0454;                              //br				IL_000e
	IL_0454:            goto IL_06f9;                                               //br				IL_06f9
	IL_0459:                                                                        //ldc.i4				0x3
	IL_045e:            V_8=3;                                                      //stloc				V_8
	IL_0462:            /*goto IL_000e;*/goto IL_0467;                              //br				IL_000e
	IL_0467:                                                                        //ldloc.0
	IL_0468:                                                                        //ldstr				L"\x421F\x4D21\x4B23\x4A25\x4D27\x4B29\x422B"
	IL_046d:                                                                        //ldloc				V_9
	IL_0471:            Temp_10=a(L"\x421F\x4D21\x4B23\x4A25\x4D27\x4B29\x422B",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0476:            Temp_11=(V_0 == Temp_10);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_047b:            if(!Temp_11)goto IL_01ab;                                   //brfalse				IL_01ab
	IL_0480:                                                                        //ldc.i4				0x2a
	IL_0485:            V_8=42;                                                     //stloc				V_8
	IL_0489:            /*goto IL_000e;*/goto IL_048e;                              //br				IL_000e
	IL_048e:            goto IL_05a3;                                               //br				IL_05a3
	IL_0493:                                                                        //ldc.i4				0x12
	IL_0498:            V_8=18;                                                     //stloc				V_8
	IL_049c:            /*goto IL_000e;*/goto IL_04a1;                              //br				IL_000e
	IL_04a1:                                                                        //ldloc.s				V_5
	IL_04a3:                                                                        //ldloc.s				V_6
	IL_04a5:                                                                        //ldc.i4.1
	IL_04a6:                                                                        //add
	IL_04a7:            Temp_22=V_5[(V_6 + 1)];                                     //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_04ac:            Temp_23=System::Char::IsDigit(Temp_22);                     //call				System::Boolean System::Char::IsDigit(System::Char)
	IL_04b1:            if(Temp_23)goto IL_0613;                                    //brtrue				IL_0613
	IL_04b6:                                                                        //ldc.i4				0xc
	IL_04bb:            V_8=12;                                                     //stloc				V_8
	IL_04bf:            /*goto IL_000e;*/goto IL_04c4;                              //br				IL_000e
	IL_04c4:            goto IL_04c6;                                               //br.s				IL_04c6
	IL_04c6:                                                                        //ldc.i4				0x2c
	IL_04cb:            V_8=44;                                                     //stloc				V_8
	IL_04cf:            /*goto IL_000e;*/goto IL_04d4;                              //br				IL_000e
	IL_04d4:                                                                        //ldloc.s				V_5
	IL_04d6:                                                                        //ldloc.s				V_6
	IL_04d8:            Temp_48=V_5[V_6];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_04dd:            Temp_49=System::Char::IsLower(Temp_48);                     //call				System::Boolean System::Char::IsLower(System::Char)
	IL_04e2:                                                                        //ldloc.s				V_5
	IL_04e4:                                                                        //ldloc.s				V_6
	IL_04e6:                                                                        //ldc.i4.1
	IL_04e7:                                                                        //add
	IL_04e8:            Temp_50=V_5[(V_6 + 1)];                                     //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_04ed:            Temp_51=System::Char::IsLower(Temp_50);                     //call				System::Boolean System::Char::IsLower(System::Char)
	IL_04f2:            if(Temp_49!=Temp_51)goto IL_0142;                           //bne.un				IL_0142
	IL_04f7:                                                                        //ldc.i4				0x10
	IL_04fc:            V_8=16;                                                     //stloc				V_8
	IL_0500:            /*goto IL_000e;*/goto IL_0505;                              //br				IL_000e
	IL_0505:            goto IL_0613;                                               //br				IL_0613
	IL_050a:                                                                        //ldc.i4				0x6
	IL_050f:            V_8=6;                                                      //stloc				V_8
	IL_0513:            /*goto IL_000e;*/goto IL_0518;                              //br				IL_000e
	IL_0518:                                                                        //ldloc.0
	IL_0519:                                                                        //ldstr				L"\x421F\x5B21\x5023\x4325"
	IL_051e:                                                                        //ldloc				V_9
	IL_0522:            Temp_14=a(L"\x421F\x5B21\x5023\x4325",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0527:            Temp_15=(V_0 == Temp_14);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_052c:            if(Temp_15)goto IL_0120;                                    //brtrue				IL_0120
	IL_0531:                                                                        //ldc.i4				0xa
	IL_0536:            V_8=10;                                                     //stloc				V_8
	IL_053a:            /*goto IL_000e;*/goto IL_053f;                              //br				IL_000e
	IL_053f:            goto IL_064e;                                               //br				IL_064e
	IL_0544:                                                                        //ldloc.s				V_4
	IL_0546:            Temp_28=V_4->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_054b:            V_5=Temp_28;                                                //stloc.s				V_5
	IL_054d:            Temp_29=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0552:            V_0=Temp_29;                                                //stloc.0
	IL_0553:                                                                        //ldloc.s				V_5
	IL_0555:            Temp_30=V_5->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_055a:                                                                        //ldc.i4.1
	IL_055b:                                                                        //sub
	IL_055c:            V_6=(Temp_30 - 1);                                          //stloc.s				V_6
	IL_055e:                                                                        //ldc.i4				0x4
	IL_0563:            V_8=4;                                                      //stloc				V_8
	IL_0567:            /*goto IL_000e;*/goto IL_056c;                              //br				IL_000e
	IL_056c:            goto IL_026f;                                               //br				IL_026f
	IL_0571:                                                                        //ldloc.1
	IL_0572:            Temp_5=V_1->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0577:            Temp_6=Root::T_x158::M_x1(Temp_5);                          //call				System::String^ Root::T_x158::M_x1(Reflector::CodeModel::IType^)
	IL_057c:                                                                        //ldstr				L"\x611F\x5021\x5623\x4725\x5127"
	IL_0581:                                                                        //ldloc				V_9
	IL_0585:            Temp_7=a(L"\x611F\x5021\x5623\x4725\x5127",V_9);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_058a:            Temp_8=System::String::Concat(Temp_6,Temp_7);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_058f:            V_0=Temp_8;                                                 //stloc.0
	IL_0590:                                                                        //ldc.i4				0x11
	IL_0595:            V_8=17;                                                     //stloc				V_8
	IL_0599:            /*goto IL_000e;*/goto IL_059e;                              //br				IL_000e
	IL_059e:            goto IL_01e5;                                               //br				IL_01e5
	IL_05a3:                                                                        //ldstr				L"\x461F\x4E21\x4523\x4125"
	IL_05a8:                                                                        //ldloc				V_9
	IL_05ac:            Temp_47=a(L"\x461F\x4E21\x4523\x4125",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b1:            V_0=Temp_47;                                                //stloc.0
	IL_05b2:                                                                        //ldc.i4				0xd
	IL_05b7:            V_8=13;                                                     //stloc				V_8
	IL_05bb:            /*goto IL_000e;*/goto IL_05c0;                              //br				IL_000e
	IL_05c0:            goto IL_06f9;                                               //br				IL_06f9
	IL_05c5:                                                                        //ldloc.s				V_7
	IL_05c7:            Temp_35=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_05cc:            Temp_36=System::Char::ToLower(V_7,Temp_35);                 //call				System::Char System::Char::ToLower(System::Char,System::Globalization::CultureInfo^)
	IL_05d1:                                                                        //box				System::Char
	IL_05d6:                                                                        //ldloc.0
	IL_05d7:            Temp_37=System::String::Concat(safe_cast<System::Object^>(Temp_36),safe_cast<System::Object^>(V_0));//call				System::String^ System::String::Concat(System::Object^,System::Object^)
	IL_05dc:            V_0=Temp_37;                                                //stloc.0
	IL_05dd:                                                                        //ldc.i4				0x2f
	IL_05e2:            V_8=47;                                                     //stloc				V_8
	IL_05e6:            /*goto IL_000e;*/goto IL_05eb;                              //br				IL_000e
	IL_05eb:                                                                        //ldc.i4.4
	IL_05ec:                                                                        //dup
	IL_05ed:                                                                        //dup
	IL_05ee:                                                                        //ldc.i4.2
	IL_05ef:                                                                        //sub
	IL_05f0:                                                                        //blt				IL_05ec
	IL_05f5:                                                                        //pop
	IL_05f6:                                                                        //ldloc.s				V_5
	IL_05f8:            Temp_54=V_5->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_05fd:                                                                        //ldc.i4.1
	IL_05fe:            if(Temp_54<=1)goto IL_0613;                                 //ble.s				IL_0613
	IL_0600:                                                                        //ldc.i4				0x0
	IL_0605:            V_8=0;                                                      //stloc				V_8
	IL_0609:            /*goto IL_000e;*/goto IL_060e;                              //br				IL_000e
	IL_060e:            goto IL_0324;                                               //br				IL_0324
	IL_0613:                                                                        //ldloc.s				V_6
	IL_0615:                                                                        //ldc.i4.1
	IL_0616:                                                                        //sub
	IL_0617:            V_6=(V_6 - 1);                                              //stloc.s				V_6
	IL_0619:                                                                        //ldc.i4				0x1f
	IL_061e:            V_8=31;                                                     //stloc				V_8
	IL_0622:            /*goto IL_000e;*/goto IL_0627;                              //br				IL_000e
	IL_0627:            goto IL_026f;                                               //br				IL_026f
	IL_062c:                                                                        //ldstr				L"\x421F\x5721\x4223\x4025\x4D27\x5829"
	IL_0631:                                                                        //ldloc				V_9
	IL_0635:            Temp_16=a(L"\x421F\x5721\x4223\x4025\x4D27\x5829",V_9);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_063a:            V_0=Temp_16;                                                //stloc.0
	IL_063b:                                                                        //ldc.i4				0x13
	IL_0640:            V_8=19;                                                     //stloc				V_8
	IL_0644:            /*goto IL_000e;*/goto IL_0649;                              //br				IL_000e
	IL_0649:            goto IL_01e5;                                               //br				IL_01e5
	IL_064e:                                                                        //ldc.i4				0x28
	IL_0653:            V_8=40;                                                     //stloc				V_8
	IL_0657:            /*goto IL_000e;*/goto IL_065c;                              //br				IL_000e
	IL_065c:                                                                        //ldloc.0
	IL_065d:                                                                        //ldstr				L"\x461F\x4E21\x4B23\x4725\x5C27"
	IL_0662:                                                                        //ldloc				V_9
	IL_0666:            Temp_45=a(L"\x461F\x4E21\x4B23\x4725\x5C27",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_066b:            Temp_46=(V_0 == Temp_45);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0670:            if(Temp_46)goto IL_0120;                                    //brtrue				IL_0120
	IL_0675:                                                                        //ldc.i4				0xb
	IL_067a:            V_8=11;                                                     //stloc				V_8
	IL_067e:            /*goto IL_000e;*/goto IL_0683;                              //br				IL_000e
	IL_0683:            goto IL_0213;                                               //br				IL_0213
	IL_0688:                                                                        //ldc.i4				0x27
	IL_068d:            V_8=39;                                                     //stloc				V_8
	IL_0691:            /*goto IL_000e;*/goto IL_0696;                              //br				IL_000e
	IL_0696:                                                                        //ldloc.0
	IL_0697:                                                                        //ldstr				L"\x551F\x4B21\x4A23\x5225"
	IL_069c:                                                                        //ldloc				V_9
	IL_06a0:            Temp_43=a(L"\x551F\x4B21\x4A23\x5225",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06a5:            Temp_44=(V_0 == Temp_43);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_06aa:            if(Temp_44)goto IL_0120;                                    //brtrue				IL_0120
	IL_06af:                                                                        //ldc.i4				0x22
	IL_06b4:            V_8=34;                                                     //stloc				V_8
	IL_06b8:            /*goto IL_000e;*/goto IL_06bd;                              //br				IL_000e
	IL_06bd:            goto IL_050a;                                               //br				IL_050a
	IL_06c2:                                                                        //ldc.i4				0x17
	IL_06c7:            V_8=23;                                                     //stloc				V_8
	IL_06cb:            /*goto IL_000e;*/goto IL_06d0;                              //br				IL_000e
	IL_06d0:                                                                        //ldloc.0
	IL_06d1:                                                                        //ldstr				L"\x4F1F\x4021\x4E23\x4325\x4B27\x5E29"
	IL_06d6:                                                                        //ldloc				V_9
	IL_06da:            Temp_24=a(L"\x4F1F\x4021\x4E23\x4325\x4B27\x5E29",V_9);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06df:            Temp_25=(V_0 == Temp_24);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_06e4:            if(!Temp_25)goto IL_06f9;                                   //brfalse.s				IL_06f9
	IL_06e6:                                                                        //ldc.i4				0x30
	IL_06eb:            V_8=48;                                                     //stloc				V_8
	IL_06ef:            /*goto IL_000e;*/goto IL_06f4;                              //br				IL_000e
	IL_06f4:            goto IL_0302;                                               //br				IL_0302
	IL_06f9:                                                                        //ldloc.0
	IL_06fa:            return V_0;                                                 //ret

}
inline System::String^ Root::T_x158::M_x1(Reflector::CodeModel::IType^ A_0,array<System::String^>^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Globalization::CultureInfo^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0058;case 1:goto IL_0034;case 2:goto IL_006d;};//switch				(IL_0058,IL_0034,IL_006d)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_001f:            V_0=Temp_0;                                                 //stloc.0
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_1=Root::T_x158::M_x1(A_0);                             //call				System::String^ Root::T_x158::M_x1(Reflector::CodeModel::IType^)
	IL_0026:            V_1=Temp_1;                                                 //stloc.1
	IL_0027:                                                                        //ldc.i4.1
	IL_0028:            V_2=1;                                                      //stloc.2
	IL_0029:                                                                        //ldc.i4				0x1
	IL_002e:            V_3=1;                                                      //stloc				V_3
	IL_0032:            /*goto IL_0002;*/goto IL_0034;                              //br.s				IL_0002
	IL_0034:            goto IL_0036;                                               //br.s				IL_0036
	IL_0036:                                                                        //ldloc.1
	IL_0037:                                                                        //ldloca.s				V_2
	IL_0039:            Temp_3=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_003e:            Temp_4=V_2.ToString(safe_cast<System::IFormatProvider^>(Temp_3));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0043:            Temp_5=System::String::Concat(V_1,Temp_4);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0048:            V_0=Temp_5;                                                 //stloc.0
	IL_0049:                                                                        //ldloc.2
	IL_004a:                                                                        //ldc.i4.1
	IL_004b:                                                                        //add
	IL_004c:            V_2=(V_2 + 1);                                              //stloc.2
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_3=0;                                                      //stloc				V_3
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_2=System::Array::IndexOf(safe_cast<System::Array^>(A_1),safe_cast<System::Object^>(V_0));//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^)
	IL_005f:                                                                        //ldc.i4.m1
	IL_0060:            if(Temp_2!=-1)goto IL_0036;                                 //bne.un.s				IL_0036
	IL_0062:                                                                        //ldc.i4				0x2
	IL_0067:            V_3=2;                                                      //stloc				V_3
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:            goto IL_006f;                                               //br.s				IL_006f
	IL_006f:                                                                        //ldloc.0
	IL_0070:            return V_0;                                                 //ret

}
