#include "global_xref.h"

inline Root::T_x143::T_x143(Reflector::CodeModel::IMethodReference^ A_0,array<Reflector::CodeModel::IExpression^>^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NullReferenceException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.1
	IL_0007:            if(A_0!=nullptr)goto IL_0011;                               //brtrue.s				IL_0011
	IL_0009:            goto IL_000b;                                               //br.s				IL_000b
	IL_000b:            Temp_0=gcnew System::NullReferenceException();              //newobj				void System::NullReferenceException::.ctor()
	IL_0010:            throw Temp_0;                                               //throw
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldnull
	IL_0013:            this->F_x1=safe_cast<Root::T_x2^>(nullptr);                 //stfld				Root::T_x2^ Root::T_x143 F_x1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.1
	IL_001a:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x143 F_x2
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldnull
	IL_0021:            this->F_x13=safe_cast<System::Object^>(nullptr);            //stfld				System::Object^ Root::T_x143 F_x13
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.2
	IL_0028:            this->F_x12=A_1;                                            //stfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_002d:            return;                                                     //ret

}
inline Root::T_x143::T_x143(Root::T_x2^ A_0,Reflector::CodeModel::IMethodReference^ A_1,array<Reflector::CodeModel::IExpression^>^ A_2,array<System::Byte>^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NullReferenceException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.2
	IL_0007:            if(A_1!=nullptr)goto IL_0011;                               //brtrue.s				IL_0011
	IL_0009:            goto IL_000b;                                               //br.s				IL_000b
	IL_000b:            Temp_0=gcnew System::NullReferenceException();              //newobj				void System::NullReferenceException::.ctor()
	IL_0010:            throw Temp_0;                                               //throw
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x1=A_0;                                             //stfld				Root::T_x2^ Root::T_x143 F_x1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.2
	IL_001a:            this->F_x2=A_1;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x143 F_x2
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldarg.s				A_3
	IL_0022:            this->F_x13=safe_cast<System::Object^>(A_3);                //stfld				System::Object^ Root::T_x143 F_x13
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.3
	IL_0029:            this->F_x12=A_2;                                            //stfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_002e:            return;                                                     //ret

}
inline Root::T_x143::T_x143(Root::T_x2^ A_0,Reflector::CodeModel::IMethodReference^ A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NullReferenceException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.2
	IL_0007:            if(A_1!=nullptr)goto IL_0011;                               //brtrue.s				IL_0011
	IL_0009:            goto IL_000b;                                               //br.s				IL_000b
	IL_000b:            Temp_0=gcnew System::NullReferenceException();              //newobj				void System::NullReferenceException::.ctor()
	IL_0010:            throw Temp_0;                                               //throw
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x1=A_0;                                             //stfld				Root::T_x2^ Root::T_x143 F_x1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.2
	IL_001a:            this->F_x2=A_1;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x143 F_x2
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldarg.3
	IL_0021:                                                                        //box				System::Int32
	IL_0026:            this->F_x13=safe_cast<System::Object^>(A_2);                //stfld				System::Object^ Root::T_x143 F_x13
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldnull
	IL_002d:            this->F_x12=safe_cast<array<Reflector::CodeModel::IExpression^>^>(nullptr);//stfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_0032:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpressionCollection^ Root::T_x143::M_x1()
//Reflector::CodeModel::ICustomAttribute^::get_Arguments by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::UInt16 Temp_4 = 0;
	array<Reflector::CodeModel::IExpression^>^ Temp_5 = nullptr;
	System::InvalidOperationException^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Reflector::CodeModel::IParameterDeclaration^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	Reflector::CodeModel::IExpression^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	array<Reflector::CodeModel::IExpression^>^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Object^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	array<Reflector::CodeModel::IExpression^>^ Temp_19 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	Reflector::CodeModel::Memory::ExpressionCollection^ Temp_22 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_23 = nullptr;
	System::Object^ Temp_24 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_25 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_26 = nullptr;
	System::Object^ Temp_27 = nullptr;
	Root::T_x2^ Temp_28 = nullptr;
	Root::T_x139^ Temp_29 = nullptr;
	System::Int32 Temp_30 = 0;
	System::Int32 Temp_31 = 0;
	System::Int32 Temp_32 = 0;
	System::Int32 Temp_33 = 0;
	array<Reflector::CodeModel::IExpression^>^ Temp_34 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_35 = nullptr;
	System::Object^ Temp_36 = nullptr;
	Root::T_x139^ Temp_37 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_38 = nullptr;
	Root::T_x2^ Temp_39 = nullptr;
	System::Int32 Temp_40 = 0;
	array<Reflector::CodeModel::IExpression^>^ Temp_41 = nullptr;
	System::Int32 Temp_42 = 0;
	Reflector::CodeModel::IExpression^ Temp_43 = nullptr;
	System::Int32 Temp_44 = 0;
	System::Int32 Temp_45 = 0;
	array<Reflector::CodeModel::IExpression^>^ Temp_46 = nullptr;
	System::Object^ Temp_47 = nullptr;
	Reflector::CodeModel::Memory::SnippetExpression^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_50 = nullptr;
	Reflector::CodeModel::Memory::SnippetExpression^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ Temp_53 = nullptr;
	System::Int32 Temp_54 = 0;
	System::Int32 Temp_55 = 0;
	System::Int32 Temp_56 = 0;
	System::Int32 Temp_57 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x139^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	array<Reflector::CodeModel::IExpression^>^ V_3 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ V_4 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	Reflector::CodeModel::ISnippetExpression^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	Root::T_x139^ V_11 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ V_12 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	Reflector::CodeModel::ISnippetExpression^ V_15 = nullptr;
	System::Int32 V_16 = 0;
	System::Int32 V_17 = 0;
	Reflector::CodeModel::IExpressionCollection^ V_18 = nullptr;
	array<Reflector::CodeModel::IExpression^>^ V_19 = nullptr;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_21=6;                                                     //stloc				V_21
	IL_0009:                                                                        //ldc.i4				0x1b
	IL_000e:            V_20=27;                                                    //stloc				V_20
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_00c6;                                               //br				IL_00c6
	IL_0019:                                                                        //ldloc				V_20
	IL_001d:            switch(V_20){case 0:goto IL_0808;case 1:goto IL_0533;case 2:goto IL_014a;case 3:goto IL_0195;case 4:goto IL_0121;case 5:goto IL_0798;case 6:goto IL_00df;case 7:goto IL_0134;case 8:goto IL_0786;case 9:goto IL_0182;case 10:goto IL_050c;case 11:goto IL_07c8;case 12:goto IL_070d;case 13:goto IL_047d;case 14:goto IL_075f;case 15:goto IL_051f;case 16:goto IL_01c0;case 17:goto IL_049e;case 18:goto IL_0168;case 19:goto IL_04b1;case 20:goto IL_0682;case 21:goto IL_043f;case 22:goto IL_01ac;case 23:goto IL_06fa;case 24:goto IL_07b2;case 25:goto IL_072b;case 26:goto IL_0555;case 27:goto IL_0014;case 28:goto IL_06b2;case 29:goto IL_0469;case 30:goto IL_04d8;case 31:goto IL_0417;case 32:goto IL_073e;case 33:goto IL_00fc;case 34:goto IL_04ed;case 35:goto IL_042c;case 36:goto IL_06d8;case 37:goto IL_06e8;case 38:goto IL_066d;case 39:goto IL_0772;case 40:goto IL_010f;};//switch				(IL_0808,IL_0533,IL_014a,IL_0195,IL_0121,IL_0798,IL_00df,IL_0134,IL_0786,IL_0182,IL_050c,IL_07c8,IL_070d,IL_047d,IL_075f,IL_051f,IL_01c0,IL_049e,IL_0168,IL_04b1,IL_0682,IL_043f,IL_01ac,IL_06fa,IL_07b2,IL_072b,IL_0555,IL_0014,IL_06b2,IL_0469,IL_04d8,IL_0417,IL_073e,IL_00fc,IL_04ed,IL_042c,IL_06d8,IL_06e8,IL_066d,IL_0772,IL_010f)
	IL_00c6:                                                                        //ldarg.0
	IL_00c7:            Temp_47=this->F_x13;                                        //ldfld				System::Object^ Root::T_x143 F_x13
	IL_00cc:            if(Temp_47==nullptr)goto IL_079d;                           //brfalse				IL_079d
	IL_00d1:                                                                        //ldc.i4				0x6
	IL_00d6:            V_20=6;                                                     //stloc				V_20
	IL_00da:            /*goto IL_0019;*/goto IL_00df;                              //br				IL_0019
	IL_00df:            goto IL_013c;                                               //br.s				IL_013c
	IL_00e1:                                                                        //ldloc.3
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:            Temp_25=this->F_x12;                                        //ldfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_00e8:                                                                        //ldc.i4.0
	IL_00e9:            V_3->CopyTo(safe_cast<System::Array^>(Temp_25),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_00ee:                                                                        //ldc.i4				0x21
	IL_00f3:            V_20=33;                                                    //stloc				V_20
	IL_00f7:            /*goto IL_0019;*/goto IL_00fc;                              //br				IL_0019
	IL_00fc:            goto IL_06da;                                               //br				IL_06da
	IL_0101:                                                                        //ldc.i4				0x28
	IL_0106:            V_20=40;                                                    //stloc				V_20
	IL_010a:            /*goto IL_0019;*/goto IL_010f;                              //br				IL_0019
	IL_010f:                                                                        //ldloc.s				V_13
	IL_0111:            if(V_13==nullptr)goto IL_016d;                              //brfalse.s				IL_016d
	IL_0113:                                                                        //ldc.i4				0x4
	IL_0118:            V_20=4;                                                     //stloc				V_20
	IL_011c:            /*goto IL_0019;*/goto IL_0121;                              //br				IL_0019
	IL_0121:            goto IL_04ef;                                               //br				IL_04ef
	IL_0126:                                                                        //ldc.i4				0x7
	IL_012b:            V_20=7;                                                     //stloc				V_20
	IL_012f:            /*goto IL_0019;*/goto IL_0134;                              //br				IL_0019
	IL_0134:                                                                        //ldloc.3
	IL_0135:            Temp_21=V_3->Length;                                        //ldlen
	IL_0136:                                                                        //conv.i4
	IL_0137:            Temp_54=Temp_21;goto IL_03fc;                               //br				IL_03fc
	IL_013c:                                                                        //ldc.i4				0x2
	IL_0141:            V_20=2;                                                     //stloc				V_20
	IL_0145:            /*goto IL_0019;*/goto IL_014a;                              //br				IL_0019
	IL_014a:                                                                        //ldarg.0
	IL_014b:            Temp_17=this->F_x13;                                        //ldfld				System::Object^ Root::T_x143 F_x13
	IL_0150:                                                                        //isinst				System::Int32
	IL_0155:            if(safe_cast<System::Int32>(Temp_17)==0)goto IL_06ff;       //brfalse				IL_06ff
	IL_015a:                                                                        //ldc.i4				0x12
	IL_015f:            V_20=18;                                                    //stloc				V_20
	IL_0163:            /*goto IL_0019;*/goto IL_0168;                              //br				IL_0019
	IL_0168:            goto IL_07cd;                                               //br				IL_07cd
	IL_016d:                                                                        //ldarg.0
	IL_016e:                                                                        //ldnull
	IL_016f:            this->F_x13=safe_cast<System::Object^>(nullptr);            //stfld				System::Object^ Root::T_x143 F_x13
	IL_0174:                                                                        //ldc.i4				0x9
	IL_0179:            V_20=9;                                                     //stloc				V_20
	IL_017d:            /*goto IL_0019;*/goto IL_0182;                              //br				IL_0019
	IL_0182:            goto IL_079d;                                               //br				IL_079d
	IL_0187:                                                                        //ldc.i4				0x3
	IL_018c:            V_20=3;                                                     //stloc				V_20
	IL_0190:            /*goto IL_0019;*/goto IL_0195;                              //br				IL_0019
	IL_0195:                                                                        //ldloc.s				V_4
	IL_0197:            Temp_18=V_4->Length;                                        //ldlen
	IL_0198:                                                                        //conv.i4
	IL_0199:            Temp_55=Temp_18;goto IL_0448;                               //br				IL_0448
	IL_019e:                                                                        //ldc.i4				0x16
	IL_01a3:            V_20=22;                                                    //stloc				V_20
	IL_01a7:            /*goto IL_0019;*/goto IL_01ac;                              //br				IL_0019
	IL_01ac:                                                                        //ldc.i4.0
	IL_01ad:            Temp_54=0;goto IL_03fc;                                     //br				IL_03fc
	IL_01b2:                                                                        //ldc.i4				0x10
	IL_01b7:            V_20=16;                                                    //stloc				V_20
	IL_01bb:            /*goto IL_0019;*/goto IL_01c0;                              //br				IL_0019
	IL_01c0:                                                                        //ldc.i4.0
	IL_01c1:            Temp_56=0;goto IL_04b7;                                     //br				IL_04b7
	IL_01C101:          try{
	IL_01c6:                                                                        //ldc.i4				0x0
	IL_01cb:            V_20=0;                                                     //stloc				V_20
	IL_01cf:            /*goto IL_01d3;*/goto IL_01d1;                              //br.s				IL_01d3
	IL_01d1:            goto IL_0220;                                               //br.s				IL_0220
	IL_01d3:                                                                        //ldloc				V_20
	IL_01d7:            switch(V_20){case 0:goto IL_01d1;case 1:goto IL_033d;case 2:goto IL_025c;case 3:goto IL_035f;case 4:goto IL_02a7;case 5:goto IL_027c;case 6:goto IL_03ae;case 7:goto IL_02e0;case 8:goto IL_02bf;case 9:goto IL_0395;case 10:goto IL_0318;case 11:goto IL_0244;case 12:goto IL_0237;case 13:goto IL_03c1;case 14:goto IL_036f;case 15:goto IL_0297;case 16:goto IL_0385;};//switch				(IL_01d1,IL_033d,IL_025c,IL_035f,IL_02a7,IL_027c,IL_03ae,IL_02e0,IL_02bf,IL_0395,IL_0318,IL_0244,IL_0237,IL_03c1,IL_036f,IL_0297,IL_0385)
	IL_0220:                                                                        //ldloc.1
	IL_0221:            Temp_16=V_1->M_x10();                                       //callvirt				System::Int32 Root::T_x139::M_x10()
	IL_0226:                                                                        //ldc.i4.2
	IL_0227:            if(Temp_16<2)goto IL_03b3;                                  //blt				IL_03b3
	IL_022c:                                                                        //ldc.i4				0xc
	IL_0231:            V_20=12;                                                    //stloc				V_20
	IL_0235:            /*goto IL_01d3;*/goto IL_0237;                              //br.s				IL_01d3
	IL_0237:            goto IL_0299;                                               //br.s				IL_0299
	IL_0239:                                                                        //ldc.i4				0xb
	IL_023e:            V_20=11;                                                    //stloc				V_20
	IL_0242:            /*goto IL_01d3;*/goto IL_0244;                              //br.s				IL_01d3
	IL_0244:                                                                        //ldloc.s				V_6
	IL_0246:                                                                        //ldloc.3
	IL_0247:            Temp_8=V_3->Length;                                         //ldlen
	IL_0248:                                                                        //conv.i4
	IL_0249:            if(V_6<Temp_8)goto IL_02eb;                                 //blt				IL_02eb
	IL_024e:                                                                        //ldc.i4				0x2
	IL_0253:            V_20=2;                                                     //stloc				V_20
	IL_0257:            /*goto IL_01d3;*/goto IL_025c;                              //br				IL_01d3
	IL_025c:            goto IL_0387;                                               //br				IL_0387
	IL_0261:                                                                        //ldarg.0
	IL_0262:            Temp_1=this->F_x2;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x143 F_x2
	IL_0267:            Temp_2=safe_cast<Reflector::CodeModel::IMethodSignature^>(Temp_1)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_026c:            V_5=Temp_2;                                                 //stloc.s				V_5
	IL_026e:                                                                        //ldc.i4				0x5
	IL_0273:            V_20=5;                                                     //stloc				V_20
	IL_0277:            /*goto IL_01d3;*/goto IL_027c;                              //br				IL_01d3
	IL_027c:                                                                        //ldloc.s				V_5
	IL_027e:            Temp_3=safe_cast<System::Collections::ICollection^>(V_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0283:                                                                        //ldc.i4.0
	IL_0284:            if(Temp_3<=0)goto IL_0387;                                  //ble				IL_0387
	IL_0289:                                                                        //ldc.i4				0xf
	IL_028e:            V_20=15;                                                    //stloc				V_20
	IL_0292:            /*goto IL_01d3;*/goto IL_0297;                              //br				IL_01d3
	IL_0297:            goto IL_02c1;                                               //br.s				IL_02c1
	IL_0299:                                                                        //ldc.i4				0x4
	IL_029e:            V_20=4;                                                     //stloc				V_20
	IL_02a2:            /*goto IL_01d3;*/goto IL_02a7;                              //br				IL_01d3
	IL_02a7:                                                                        //ldloc.1
	IL_02a8:            Temp_0=V_1->M_x11();                                        //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_02ad:                                                                        //conv.i4
	IL_02ae:                                                                        //ldc.i4.1
	IL_02af:            if(safe_cast<System::Int32>(Temp_0)==1)goto IL_0261;        //beq.s				IL_0261
	IL_02b1:                                                                        //ldc.i4				0x8
	IL_02b6:            V_20=8;                                                     //stloc				V_20
	IL_02ba:            /*goto IL_01d3;*/goto IL_02bf;                              //br				IL_01d3
	IL_02bf:            goto IL_02e5;                                               //br.s				IL_02e5
	IL_02c1:                                                                        //ldloc.s				V_5
	IL_02c3:            Temp_14=safe_cast<System::Collections::ICollection^>(V_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02c8:                                                                        //conv.ovf.u4
	IL_02c9:            Temp_15=gcnew array<Reflector::CodeModel::IExpression^>(safe_cast<System::UInt32>(Temp_14));//newarr				Reflector::CodeModel::IExpression
	IL_02ce:            V_3=Temp_15;                                                //stloc.3
	IL_02cf:                                                                        //ldc.i4.0
	IL_02d0:            V_6=0;                                                      //stloc.s				V_6
	IL_02d2:                                                                        //ldc.i4				0x7
	IL_02d7:            V_20=7;                                                     //stloc				V_20
	IL_02db:            /*goto IL_01d3;*/goto IL_02e0;                              //br				IL_01d3
	IL_02e0:            goto IL_0239;                                               //br				IL_0239
	IL_02e5:            Temp_6=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_02ea:            throw Temp_6;                                               //throw
	IL_02eb:                                                                        //ldloc.3
	IL_02ec:                                                                        //ldloc.s				V_6
	IL_02ee:                                                                        //ldarg.0
	IL_02ef:                                                                        //ldloc.1
	IL_02f0:                                                                        //ldloc.s				V_5
	IL_02f2:                                                                        //ldloc.s				V_6
	IL_02f4:            Temp_9=V_5[V_6];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_02f9:            Temp_10=Temp_9->ParameterType;                              //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_02fe:            Temp_11=this->M_x1(V_1,Temp_10);                            //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^,Reflector::CodeModel::IType^)
	IL_0303:            V_3[V_6]=Temp_11;                                           //stelem.ref
	IL_0304:                                                                        //ldloc.s				V_6
	IL_0306:                                                                        //ldc.i4.1
	IL_0307:                                                                        //add
	IL_0308:            V_6=(V_6 + 1);                                              //stloc.s				V_6
	IL_030a:                                                                        //ldc.i4				0xa
	IL_030f:            V_20=10;                                                    //stloc				V_20
	IL_0313:            /*goto IL_01d3;*/goto IL_0318;                              //br				IL_01d3
	IL_0318:            goto IL_0239;                                               //br				IL_0239
	IL_031d:                                                                        //ldloc.1
	IL_031e:            Temp_4=V_1->M_x11();                                        //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0323:                                                                        //conv.i4
	IL_0324:                                                                        //conv.ovf.u4
	IL_0325:            Temp_5=gcnew array<Reflector::CodeModel::IExpression^>(safe_cast<System::UInt32>(safe_cast<System::Int32>(Temp_4)));//newarr				Reflector::CodeModel::IExpression
	IL_032a:            V_4=Temp_5;                                                 //stloc.s				V_4
	IL_032c:                                                                        //ldc.i4.0
	IL_032d:            V_7=0;                                                      //stloc.s				V_7
	IL_032f:                                                                        //ldc.i4				0x1
	IL_0334:            V_20=1;                                                     //stloc				V_20
	IL_0338:            /*goto IL_01d3;*/goto IL_033d;                              //br				IL_01d3
	IL_033d:            goto IL_0361;                                               //br.s				IL_0361
	IL_033f:                                                                        //ldloc.s				V_4
	IL_0341:                                                                        //ldloc.s				V_7
	IL_0343:                                                                        //ldarg.0
	IL_0344:                                                                        //ldloc.1
	IL_0345:            Temp_13=this->M_x1(V_1);                                    //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^)
	IL_034a:            V_4[V_7]=Temp_13;                                           //stelem.ref
	IL_034b:                                                                        //ldloc.s				V_7
	IL_034d:                                                                        //ldc.i4.1
	IL_034e:                                                                        //add
	IL_034f:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_0351:                                                                        //ldc.i4				0x3
	IL_0356:            V_20=3;                                                     //stloc				V_20
	IL_035a:            /*goto IL_01d3;*/goto IL_035f;                              //br				IL_01d3
	IL_035f:            goto IL_0361;                                               //br.s				IL_0361
	IL_0361:                                                                        //ldc.i4				0xe
	IL_0366:            V_20=14;                                                    //stloc				V_20
	IL_036a:            /*goto IL_01d3;*/goto IL_036f;                              //br				IL_01d3
	IL_036f:                                                                        //ldloc.s				V_7
	IL_0371:                                                                        //ldloc.s				V_4
	IL_0373:            Temp_12=V_4->Length;                                        //ldlen
	IL_0374:                                                                        //conv.i4
	IL_0375:            if(V_7<Temp_12)goto IL_033f;                                //blt.s				IL_033f
	IL_0377:                                                                        //ldc.i4				0x10
	IL_037c:            V_20=16;                                                    //stloc				V_20
	IL_0380:            /*goto IL_01d3;*/goto IL_0385;                              //br				IL_01d3
	IL_0385:            goto IL_03b3;                                               //br.s				IL_03b3
	IL_0387:                                                                        //ldc.i4				0x9
	IL_038c:            V_20=9;                                                     //stloc				V_20
	IL_0390:            /*goto IL_01d3;*/goto IL_0395;                              //br				IL_01d3
	IL_0395:                                                                        //ldloc.1
	IL_0396:            Temp_7=V_1->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_039b:                                                                        //ldc.i4.1
	IL_039c:                                                                        //add
	IL_039d:                                                                        //ldloc.2
	IL_039e:            if((Temp_7 + 1)>=V_2)goto IL_03b3;                          //bge.s				IL_03b3
	IL_03a0:                                                                        //ldc.i4				0x6
	IL_03a5:            V_20=6;                                                     //stloc				V_20
	IL_03a9:            /*goto IL_01d3;*/goto IL_03ae;                              //br				IL_01d3
	IL_03ae:            goto IL_031d;                                               //br				IL_031d
	IL_03b3:                                                                        //ldc.i4				0xd
	IL_03b8:            V_20=13;                                                    //stloc				V_20
	IL_03bc:            /*goto IL_01d3;*/goto IL_03c1;                              //br				IL_01d3
	IL_03c1:            goto IL_0511;                                               //leave				IL_0511
	                    ;}
	                    catch(System::IndexOutOfRangeException^ Ex_03C102){
	IL_03c6:                                                                        //pop
	IL_03c7:            Temp_48=gcnew Reflector::CodeModel::Memory::SnippetExpression();//newobj				void Reflector::CodeModel::Memory::SnippetExpression::.ctor()
	IL_03cc:            V_8=safe_cast<Reflector::CodeModel::ISnippetExpression^>(Temp_48);//stloc.s				V_8
	IL_03ce:                                                                        //ldloc.s				V_8
	IL_03d0:                                                                        //ldstr				L"\x1B23"
	IL_03d5:                                                                        //ldloc				V_21
	IL_03d9:            Temp_49=a(L"\x1B23",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03de:            V_8->Value=Temp_49;                                         //callvirt				void Reflector::CodeModel::ISnippetExpression::set_Value(System::String^)
	IL_03e3:                                                                        //ldc.i4.1
	IL_03e4:            Temp_50=gcnew array<Reflector::CodeModel::IExpression^>(1); //newarr				Reflector::CodeModel::IExpression
	IL_03e9:            V_19=Temp_50;                                               //stloc.s				V_19
	IL_03eb:                                                                        //ldloc.s				V_19
	IL_03ed:                                                                        //ldc.i4.0
	IL_03ee:                                                                        //ldloc.s				V_8
	IL_03f0:            V_19[0]=safe_cast<Reflector::CodeModel::IExpression^>(V_8); //stelem.ref
	IL_03f1:                                                                        //ldloc.s				V_19
	IL_03f3:            V_3=V_19;                                                   //stloc.3
	IL_03f4:                                                                        //ldnull
	IL_03f5:            V_4=safe_cast<array<Reflector::CodeModel::IExpression^>^>(nullptr);//stloc.s				V_4
	IL_03f7:            goto IL_0511;                                               //leave				IL_0511
	                    ;}
	IL_03fc:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_9
	IL_03fe:                                                                        //ldc.i4.2
	IL_03ff:                                                                        //dup
	IL_0400:                                                                        //dup
	IL_0401:                                                                        //ldc.i4.4
	IL_0402:                                                                        //sub
	IL_0403:                                                                        //blt				IL_03ff
	IL_0408:                                                                        //pop
	IL_0409:                                                                        //ldc.i4				0x1f
	IL_040e:            V_20=31;                                                    //stloc				V_20
	IL_0412:            /*goto IL_0019;*/goto IL_0417;                              //br				IL_0019
	IL_0417:                                                                        //ldloc.s				V_4
	IL_0419:            if(V_4==nullptr)goto IL_0764;                               //brfalse				IL_0764
	IL_041e:                                                                        //ldc.i4				0x23
	IL_0423:            V_20=35;                                                    //stloc				V_20
	IL_0427:            /*goto IL_0019;*/goto IL_042c;                              //br				IL_0019
	IL_042c:            goto IL_0187;                                               //br				IL_0187
	IL_0431:                                                                        //ldc.i4				0x15
	IL_0436:            V_20=21;                                                    //stloc				V_20
	IL_043a:            /*goto IL_0019;*/goto IL_043f;                              //br				IL_0019
	IL_043f:                                                                        //ldloc.s				V_12
	IL_0441:            Temp_33=V_12->Length;                                       //ldlen
	IL_0442:                                                                        //conv.i4
	IL_0443:            Temp_57=Temp_33;goto IL_065d;                               //br				IL_065d
	IL_0448:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_10
	IL_044a:                                                                        //ldarg.0
	IL_044b:                                                                        //ldloc.s				V_9
	IL_044d:                                                                        //ldloc.s				V_10
	IL_044f:                                                                        //add
	IL_0450:                                                                        //conv.ovf.u4
	IL_0451:            Temp_19=gcnew array<Reflector::CodeModel::IExpression^>(safe_cast<System::UInt32>((V_9 + Temp_55)));//newarr				Reflector::CodeModel::IExpression
	IL_0456:            this->F_x12=Temp_19;                                        //stfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_045b:                                                                        //ldc.i4				0x1d
	IL_0460:            V_20=29;                                                    //stloc				V_20
	IL_0464:            /*goto IL_0019;*/goto IL_0469;                              //br				IL_0019
	IL_0469:                                                                        //ldloc.3
	IL_046a:            if(V_3==nullptr)goto IL_06da;                               //brfalse				IL_06da
	IL_046f:                                                                        //ldc.i4				0xd
	IL_0474:            V_20=13;                                                    //stloc				V_20
	IL_0478:            /*goto IL_0019;*/goto IL_047d;                              //br				IL_0019
	IL_047d:            goto IL_00e1;                                               //br				IL_00e1
	IL_0482:                                                                        //ldloc.s				V_12
	IL_0484:                                                                        //ldarg.0
	IL_0485:            Temp_46=this->F_x12;                                        //ldfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_048a:                                                                        //ldc.i4.0
	IL_048b:            V_12->CopyTo(safe_cast<System::Array^>(Temp_46),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0490:                                                                        //ldc.i4				0x11
	IL_0495:            V_20=17;                                                    //stloc				V_20
	IL_0499:            /*goto IL_0019;*/goto IL_049e;                              //br				IL_0019
	IL_049e:            goto IL_0101;                                               //br				IL_0101
	IL_04a3:                                                                        //ldc.i4				0x13
	IL_04a8:            V_20=19;                                                    //stloc				V_20
	IL_04ac:            /*goto IL_0019;*/goto IL_04b1;                              //br				IL_0019
	IL_04b1:                                                                        //ldloc.s				V_13
	IL_04b3:            Temp_32=V_13->Length;                                       //ldlen
	IL_04b4:                                                                        //conv.i4
	IL_04b5:            Temp_56=Temp_32;goto IL_04b7;                               //br.s				IL_04b7
	IL_04b7:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_17
	IL_04b9:                                                                        //ldarg.0
	IL_04ba:                                                                        //ldloc.s				V_16
	IL_04bc:                                                                        //ldloc.s				V_17
	IL_04be:                                                                        //add
	IL_04bf:                                                                        //conv.ovf.u4
	IL_04c0:            Temp_26=gcnew array<Reflector::CodeModel::IExpression^>(safe_cast<System::UInt32>((V_16 + Temp_56)));//newarr				Reflector::CodeModel::IExpression
	IL_04c5:            this->F_x12=Temp_26;                                        //stfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_04ca:                                                                        //ldc.i4				0x1e
	IL_04cf:            V_20=30;                                                    //stloc				V_20
	IL_04d3:            /*goto IL_0019;*/goto IL_04d8;                              //br				IL_0019
	IL_04d8:                                                                        //ldloc.s				V_12
	IL_04da:            if(V_12==nullptr)goto IL_0101;                              //brfalse				IL_0101
	IL_04df:                                                                        //ldc.i4				0x22
	IL_04e4:            V_20=34;                                                    //stloc				V_20
	IL_04e8:            /*goto IL_0019;*/goto IL_04ed;                              //br				IL_0019
	IL_04ed:            goto IL_0482;                                               //br.s				IL_0482
	IL_04ef:                                                                        //ldloc.s				V_13
	IL_04f1:                                                                        //ldarg.0
	IL_04f2:            Temp_20=this->F_x12;                                        //ldfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_04f7:                                                                        //ldloc.s				V_16
	IL_04f9:            V_13->CopyTo(safe_cast<System::Array^>(Temp_20),V_16);      //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_04fe:                                                                        //ldc.i4				0xa
	IL_0503:            V_20=10;                                                    //stloc				V_20
	IL_0507:            /*goto IL_0019;*/goto IL_050c;                              //br				IL_0019
	IL_050c:            goto IL_016d;                                               //br				IL_016d
	IL_0511:                                                                        //ldc.i4				0xf
	IL_0516:            V_20=15;                                                    //stloc				V_20
	IL_051a:            /*goto IL_0019;*/goto IL_051f;                              //br				IL_0019
	IL_051f:                                                                        //ldloc.3
	IL_0520:            if(V_3==nullptr)goto IL_019e;                               //brfalse				IL_019e
	IL_0525:                                                                        //ldc.i4				0x1
	IL_052a:            V_20=1;                                                     //stloc				V_20
	IL_052e:            /*goto IL_0019;*/goto IL_0533;                              //br				IL_0019
	IL_0533:            goto IL_0126;                                               //br				IL_0126
	IL_0538:                                                                        //ldloc.s				V_4
	IL_053a:                                                                        //ldarg.0
	IL_053b:            Temp_34=this->F_x12;                                        //ldfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_0540:                                                                        //ldloc.s				V_9
	IL_0542:            V_4->CopyTo(safe_cast<System::Array^>(Temp_34),V_9);        //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0547:                                                                        //ldc.i4				0x1a
	IL_054c:            V_20=26;                                                    //stloc				V_20
	IL_0550:            /*goto IL_0019;*/goto IL_0555;                              //br				IL_0019
	IL_0555:            goto IL_06b7;                                               //br				IL_06b7
	IL_055501:          try{
	IL_055a:                                                                        //ldc.i4				0x3
	IL_055f:            V_20=3;                                                     //stloc				V_20
	IL_0563:            /*goto IL_0567;*/goto IL_0565;                              //br.s				IL_0567
	IL_0565:            goto IL_058c;                                               //br.s				IL_058c
	IL_0567:                                                                        //ldloc				V_20
	IL_056b:            switch(V_20){case 0:goto IL_05c8;case 1:goto IL_05a9;case 2:goto IL_05fb;case 3:goto IL_0565;case 4:goto IL_05eb;case 5:goto IL_0611;case 6:goto IL_0621;};//switch				(IL_05c8,IL_05a9,IL_05fb,IL_0565,IL_05eb,IL_0611,IL_0621)
	IL_058c:                                                                        //ldloc.s				V_11
	IL_058e:            Temp_44=V_11->M_x19();                                      //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0593:                                                                        //ldc.i4.1
	IL_0594:                                                                        //add
	IL_0595:                                                                        //ldloc.s				V_11
	IL_0597:            Temp_45=V_11->M_x10();                                      //callvirt				System::Int32 Root::T_x139::M_x10()
	IL_059c:            if((Temp_44 + 1)>=Temp_45)goto IL_0613;                     //bge.s				IL_0613
	IL_059e:                                                                        //ldc.i4				0x1
	IL_05a3:            V_20=1;                                                     //stloc				V_20
	IL_05a7:            /*goto IL_0567;*/goto IL_05a9;                              //br.s				IL_0567
	IL_05a9:            goto IL_05ab;                                               //br.s				IL_05ab
	IL_05ab:                                                                        //ldloc.s				V_11
	IL_05ad:            Temp_40=V_11->M_x6();                                       //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_05b2:                                                                        //conv.ovf.u4
	IL_05b3:            Temp_41=gcnew array<Reflector::CodeModel::IExpression^>(safe_cast<System::UInt32>(Temp_40));//newarr				Reflector::CodeModel::IExpression
	IL_05b8:            V_13=Temp_41;                                               //stloc.s				V_13
	IL_05ba:                                                                        //ldc.i4.0
	IL_05bb:            V_14=0;                                                     //stloc.s				V_14
	IL_05bd:                                                                        //ldc.i4				0x0
	IL_05c2:            V_20=0;                                                     //stloc				V_20
	IL_05c6:            /*goto IL_0567;*/goto IL_05c8;                              //br.s				IL_0567
	IL_05c8:            goto IL_05ed;                                               //br.s				IL_05ed
	IL_05ca:                                                                        //ldloc.s				V_13
	IL_05cc:                                                                        //ldloc.s				V_14
	IL_05ce:                                                                        //ldarg.0
	IL_05cf:                                                                        //ldloc.s				V_11
	IL_05d1:            Temp_43=this->M_x1(V_11);                                   //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^)
	IL_05d6:            V_13[V_14]=Temp_43;                                         //stelem.ref
	IL_05d7:                                                                        //ldloc.s				V_14
	IL_05d9:                                                                        //ldc.i4.1
	IL_05da:                                                                        //add
	IL_05db:            V_14=(V_14 + 1);                                            //stloc.s				V_14
	IL_05dd:                                                                        //ldc.i4				0x4
	IL_05e2:            V_20=4;                                                     //stloc				V_20
	IL_05e6:            /*goto IL_0567;*/goto IL_05eb;                              //br				IL_0567
	IL_05eb:            goto IL_05ed;                                               //br.s				IL_05ed
	IL_05ed:                                                                        //ldc.i4				0x2
	IL_05f2:            V_20=2;                                                     //stloc				V_20
	IL_05f6:            /*goto IL_0567;*/goto IL_05fb;                              //br				IL_0567
	IL_05fb:                                                                        //ldloc.s				V_14
	IL_05fd:                                                                        //ldloc.s				V_13
	IL_05ff:            Temp_42=V_13->Length;                                       //ldlen
	IL_0600:                                                                        //conv.i4
	IL_0601:            if(V_14<Temp_42)goto IL_05ca;                               //blt.s				IL_05ca
	IL_0603:                                                                        //ldc.i4				0x5
	IL_0608:            V_20=5;                                                     //stloc				V_20
	IL_060c:            /*goto IL_0567;*/goto IL_0611;                              //br				IL_0567
	IL_0611:            goto IL_0613;                                               //br.s				IL_0613
	IL_0613:                                                                        //ldc.i4				0x6
	IL_0618:            V_20=6;                                                     //stloc				V_20
	IL_061c:            /*goto IL_0567;*/goto IL_0621;                              //br				IL_0567
	IL_0621:            goto IL_0778;                                               //leave				IL_0778
	                    ;}
	                    catch(System::IndexOutOfRangeException^ Ex_062102){
	IL_0626:                                                                        //pop
	IL_0627:            Temp_51=gcnew Reflector::CodeModel::Memory::SnippetExpression();//newobj				void Reflector::CodeModel::Memory::SnippetExpression::.ctor()
	IL_062c:            V_15=safe_cast<Reflector::CodeModel::ISnippetExpression^>(Temp_51);//stloc.s				V_15
	IL_062e:                                                                        //ldloc.s				V_15
	IL_0630:                                                                        //ldstr				L"\x1B23"
	IL_0635:                                                                        //ldloc				V_21
	IL_0639:            Temp_52=a(L"\x1B23",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_063e:            V_15->Value=Temp_52;                                        //callvirt				void Reflector::CodeModel::ISnippetExpression::set_Value(System::String^)
	IL_0643:                                                                        //ldc.i4.1
	IL_0644:            Temp_53=gcnew array<Reflector::CodeModel::IExpression^>(1); //newarr				Reflector::CodeModel::IExpression
	IL_0649:            V_19=Temp_53;                                               //stloc.s				V_19
	IL_064b:                                                                        //ldloc.s				V_19
	IL_064d:                                                                        //ldc.i4.0
	IL_064e:                                                                        //ldloc.s				V_15
	IL_0650:            V_19[0]=safe_cast<Reflector::CodeModel::IExpression^>(V_15);//stelem.ref
	IL_0651:                                                                        //ldloc.s				V_19
	IL_0653:            V_12=V_19;                                                  //stloc.s				V_12
	IL_0655:                                                                        //ldnull
	IL_0656:            V_13=safe_cast<array<Reflector::CodeModel::IExpression^>^>(nullptr);//stloc.s				V_13
	IL_0658:            goto IL_0778;                                               //leave				IL_0778
	                    ;}
	IL_065d:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_16
	IL_065f:                                                                        //ldc.i4				0x26
	IL_0664:            V_20=38;                                                    //stloc				V_20
	IL_0668:            /*goto IL_0019;*/goto IL_066d;                              //br				IL_0019
	IL_066d:                                                                        //ldloc.s				V_13
	IL_066f:            if(V_13==nullptr)goto IL_01b2;                              //brfalse				IL_01b2
	IL_0674:                                                                        //ldc.i4				0x14
	IL_0679:            V_20=20;                                                    //stloc				V_20
	IL_067d:            /*goto IL_0019;*/goto IL_0682;                              //br				IL_0019
	IL_0682:            goto IL_04a3;                                               //br				IL_04a3
	IL_0687:                                                                        //ldarg.0
	IL_0688:            Temp_36=this->F_x13;                                        //ldfld				System::Object^ Root::T_x143 F_x13
	IL_068d:                                                                        //castclass				array<System::Byte>
	IL_0692:            Temp_37=gcnew Root::T_x139(safe_cast<array<System::Byte>^>(Temp_36));//newobj				void Root::T_x139::.ctor(array<System::Byte>^)
	IL_0697:            V_11=Temp_37;                                               //stloc.s				V_11
	IL_0699:                                                                        //ldarg.0
	IL_069a:            Temp_38=this->F_x12;                                        //ldfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_069f:            V_12=Temp_38;                                               //stloc.s				V_12
	IL_06a1:                                                                        //ldnull
	IL_06a2:            V_13=safe_cast<array<Reflector::CodeModel::IExpression^>^>(nullptr);//stloc.s				V_13
	IL_06a4:                                                                        //ldc.i4				0x1c
	IL_06a9:            V_20=28;                                                    //stloc				V_20
	IL_06ad:            /*goto IL_0019;*/goto IL_06b2;                              //br				IL_0019
	IL_06b2:            /*goto IL_055a;*/goto IL_055501;                            //br				IL_055a
	IL_06b7:                                                                        //ldarg.0
	IL_06b8:            Temp_39=this->F_x1;                                         //ldfld				Root::T_x2^ Root::T_x143 F_x1
	IL_06bd:                                                                        //ldloc.1
	IL_06be:            Temp_39->M_x12(V_1);                                        //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_06c3:                                                                        //ldarg.0
	IL_06c4:                                                                        //ldnull
	IL_06c5:            this->F_x13=safe_cast<System::Object^>(nullptr);            //stfld				System::Object^ Root::T_x143 F_x13
	IL_06ca:                                                                        //ldc.i4				0x24
	IL_06cf:            V_20=36;                                                    //stloc				V_20
	IL_06d3:            /*goto IL_0019;*/goto IL_06d8;                              //br				IL_0019
	IL_06d8:            goto IL_06ff;                                               //br.s				IL_06ff
	IL_06da:                                                                        //ldc.i4				0x25
	IL_06df:            V_20=37;                                                    //stloc				V_20
	IL_06e3:            /*goto IL_0019;*/goto IL_06e8;                              //br				IL_0019
	IL_06e8:                                                                        //ldloc.s				V_4
	IL_06ea:            if(V_4==nullptr)goto IL_06b7;                               //brfalse.s				IL_06b7
	IL_06ec:                                                                        //ldc.i4				0x17
	IL_06f1:            V_20=23;                                                    //stloc				V_20
	IL_06f5:            /*goto IL_0019;*/goto IL_06fa;                              //br				IL_0019
	IL_06fa:            goto IL_0538;                                               //br				IL_0538
	IL_06ff:                                                                        //ldc.i4				0xc
	IL_0704:            V_20=12;                                                    //stloc				V_20
	IL_0708:            /*goto IL_0019;*/goto IL_070d;                              //br				IL_0019
	IL_070d:                                                                        //ldarg.0
	IL_070e:            Temp_24=this->F_x13;                                        //ldfld				System::Object^ Root::T_x143 F_x13
	IL_0713:                                                                        //isinst				array<System::Byte>
	IL_0718:            if(dynamic_cast<array<System::Byte>^>(Temp_24)==nullptr)goto IL_079d;//brfalse				IL_079d
	IL_071d:                                                                        //ldc.i4				0x19
	IL_0722:            V_20=25;                                                    //stloc				V_20
	IL_0726:            /*goto IL_0019;*/goto IL_072b;                              //br				IL_0019
	IL_072b:            goto IL_0687;                                               //br				IL_0687
	IL_0730:                                                                        //ldc.i4				0x20
	IL_0735:            V_20=32;                                                    //stloc				V_20
	IL_0739:            /*goto IL_0019;*/goto IL_073e;                              //br				IL_0019
	IL_073e:                                                                        //ldc.i4.0
	IL_073f:            Temp_57=0;goto IL_065d;                                     //br				IL_065d
	IL_0744:                                                                        //ldloc.s				V_18
	IL_0746:                                                                        //ldarg.0
	IL_0747:            Temp_23=this->F_x12;                                        //ldfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_074c:            V_18->AddRange(safe_cast<System::Collections::ICollection^>(Temp_23));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0751:                                                                        //ldc.i4				0xe
	IL_0756:            V_20=14;                                                    //stloc				V_20
	IL_075a:            /*goto IL_0019;*/goto IL_075f;                              //br				IL_0019
	IL_075f:            goto IL_080d;                                               //br				IL_080d
	IL_0764:                                                                        //ldc.i4				0x27
	IL_0769:            V_20=39;                                                    //stloc				V_20
	IL_076d:            /*goto IL_0019;*/goto IL_0772;                              //br				IL_0019
	IL_0772:                                                                        //ldc.i4.0
	IL_0773:            Temp_55=0;goto IL_0448;                                     //br				IL_0448
	IL_0778:                                                                        //ldc.i4				0x8
	IL_077d:            V_20=8;                                                     //stloc				V_20
	IL_0781:            /*goto IL_0019;*/goto IL_0786;                              //br				IL_0019
	IL_0786:                                                                        //ldloc.s				V_12
	IL_0788:            if(V_12==nullptr)goto IL_0730;                              //brfalse.s				IL_0730
	IL_078a:                                                                        //ldc.i4				0x5
	IL_078f:            V_20=5;                                                     //stloc				V_20
	IL_0793:            /*goto IL_0019;*/goto IL_0798;                              //br				IL_0019
	IL_0798:            goto IL_0431;                                               //br				IL_0431
	IL_079d:            Temp_22=gcnew Reflector::CodeModel::Memory::ExpressionCollection();//newobj				void Reflector::CodeModel::Memory::ExpressionCollection::.ctor()
	IL_07a2:            V_18=safe_cast<Reflector::CodeModel::IExpressionCollection^>(Temp_22);//stloc.s				V_18
	IL_07a4:                                                                        //ldc.i4				0x18
	IL_07a9:            V_20=24;                                                    //stloc				V_20
	IL_07ad:            /*goto IL_0019;*/goto IL_07b2;                              //br				IL_0019
	IL_07b2:                                                                        //ldarg.0
	IL_07b3:            Temp_35=this->F_x12;                                        //ldfld				array<Reflector::CodeModel::IExpression^>^ Root::T_x143 F_x12
	IL_07b8:            if(Temp_35==nullptr)goto IL_080d;                           //brfalse.s				IL_080d
	IL_07ba:                                                                        //ldc.i4				0xb
	IL_07bf:            V_20=11;                                                    //stloc				V_20
	IL_07c3:            /*goto IL_0019;*/goto IL_07c8;                              //br				IL_0019
	IL_07c8:            goto IL_0744;                                               //br				IL_0744
	IL_07cd:                                                                        //ldarg.0
	IL_07ce:            Temp_27=this->F_x13;                                        //ldfld				System::Object^ Root::T_x143 F_x13
	IL_07d3:                                                                        //unbox				System::Int32
	IL_07d8:                                                                        //ldind.i4
	IL_07d9:            V_0=safe_cast<System::Int32>(Temp_27);                      //stloc.0
	IL_07da:                                                                        //ldarg.0
	IL_07db:            Temp_28=this->F_x1;                                         //ldfld				Root::T_x2^ Root::T_x143 F_x1
	IL_07e0:                                                                        //ldloc.0
	IL_07e1:            Temp_29=Temp_28->M_x14(V_0);                                //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_07e6:            V_1=Temp_29;                                                //stloc.1
	IL_07e7:                                                                        //ldloc.1
	IL_07e8:            Temp_30=V_1->M_x19();                                       //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_07ed:                                                                        //ldloc.1
	IL_07ee:            Temp_31=V_1->M_x10();                                       //callvirt				System::Int32 Root::T_x139::M_x10()
	IL_07f3:                                                                        //add
	IL_07f4:            V_2=(Temp_30 + Temp_31);                                    //stloc.2
	IL_07f5:                                                                        //ldnull
	IL_07f6:            V_3=safe_cast<array<Reflector::CodeModel::IExpression^>^>(nullptr);//stloc.3
	IL_07f7:                                                                        //ldnull
	IL_07f8:            V_4=safe_cast<array<Reflector::CodeModel::IExpression^>^>(nullptr);//stloc.s				V_4
	IL_07fa:                                                                        //ldc.i4				0x0
	IL_07ff:            V_20=0;                                                     //stloc				V_20
	IL_0803:            /*goto IL_0019;*/goto IL_0808;                              //br				IL_0019
	IL_0808:            /*goto IL_01c6;*/goto IL_01C101;                            //br				IL_01c6
	IL_080d:                                                                        //ldloc.s				V_18
	IL_080f:            return V_18;                                                //ret

}
inline void Root::T_x143::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::ICustomAttribute^::set_Constructor by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IType^ Root::T_x143::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::ITypeDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::IFieldDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	Reflector::CodeModel::ITypeReference^ Temp_13 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::IFieldDeclaration^ Temp_16 = nullptr;
	Reflector::CodeModel::IType^ Temp_17 = nullptr;
	System::Boolean Temp_18 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_6=16;                                                     //stloc				V_6
	IL_0009:            goto IL_005c;                                               //br.s				IL_005c
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_00d7;case 1:goto IL_01ab;case 2:goto IL_0103;case 3:goto IL_006e;case 4:goto IL_007f;case 5:goto IL_0201;case 6:goto IL_0211;case 7:goto IL_017d;case 8:goto IL_0133;case 9:goto IL_0193;case 10:goto IL_01d8;case 11:goto IL_0147;case 12:goto IL_00bd;case 13:goto IL_011c;case 14:goto IL_00a0;case 15:goto IL_01c8;case 16:goto IL_0231;case 17:goto IL_015a;};//switch				(IL_00d7,IL_01ab,IL_0103,IL_006e,IL_007f,IL_0201,IL_0211,IL_017d,IL_0133,IL_0193,IL_01d8,IL_0147,IL_00bd,IL_011c,IL_00a0,IL_01c8,IL_0231,IL_015a)
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0062:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0063:                                                                        //ldc.i4				0x3
	IL_0068:            V_5=3;                                                      //stloc				V_5
	IL_006c:            /*goto IL_000b;*/goto IL_006e;                              //br.s				IL_000b
	IL_006e:                                                                        //ldloc.0
	IL_006f:            if(V_0==nullptr)goto IL_0236;                               //brfalse				IL_0236
	IL_0074:                                                                        //ldc.i4				0x4
	IL_0079:            V_5=4;                                                      //stloc				V_5
	IL_007d:            /*goto IL_000b;*/goto IL_007f;                              //br.s				IL_000b
	IL_007f:            goto IL_011e;                                               //br				IL_011e
	IL_0084:                                                                        //ldloc.3
	IL_0085:                                                                        //ldloc.s				V_4
	IL_0087:            Temp_7=V_3[V_4];                                            //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_008c:            Temp_8=safe_cast<Reflector::CodeModel::IFieldReference^>(Temp_7)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0091:            return Temp_8;                                              //ret
	IL_0092:                                                                        //ldc.i4				0xe
	IL_0097:            V_5=14;                                                     //stloc				V_5
	IL_009b:            /*goto IL_000b;*/goto IL_00a0;                              //br				IL_000b
	IL_00a0:                                                                        //ldloc.3
	IL_00a1:                                                                        //ldloc.s				V_4
	IL_00a3:            Temp_14=V_3[V_4];                                           //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_00a8:            Temp_15=Temp_14->RuntimeSpecialName;                        //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_RuntimeSpecialName()
	IL_00ad:            if(!Temp_15)goto IL_0108;                                   //brfalse.s				IL_0108
	IL_00af:                                                                        //ldc.i4				0xc
	IL_00b4:            V_5=12;                                                     //stloc				V_5
	IL_00b8:            /*goto IL_000b;*/goto IL_00bd;                              //br				IL_000b
	IL_00bd:            goto IL_014c;                                               //br				IL_014c
	IL_00c2:                                                                        //ldloc.1
	IL_00c3:            Temp_13=V_1->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_00c8:            V_2=Temp_13;                                                //stloc.2
	IL_00c9:                                                                        //ldc.i4				0x0
	IL_00ce:            V_5=0;                                                      //stloc				V_5
	IL_00d2:            /*goto IL_000b;*/goto IL_00d7;                              //br				IL_000b
	IL_00d7:                                                                        //ldloc.2
	IL_00d8:            Temp_0=V_2->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00dd:                                                                        //ldstr				L"\x7D2D\x492F\x4131\x4033\x5335\x5537"
	IL_00e2:                                                                        //ldloc				V_6
	IL_00e6:            Temp_1=a(L"\x7D2D\x492F\x4131\x4033\x5335\x5537",V_6);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00eb:            Temp_2=(Temp_0 == Temp_1);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00f0:            if(!Temp_2)goto IL_0236;                                    //brfalse				IL_0236
	IL_00f5:                                                                        //ldc.i4				0x2
	IL_00fa:            V_5=2;                                                      //stloc				V_5
	IL_00fe:            /*goto IL_000b;*/goto IL_0103;                              //br				IL_000b
	IL_0103:            goto IL_01ca;                                               //br				IL_01ca
	IL_0108:                                                                        //ldloc.s				V_4
	IL_010a:                                                                        //ldc.i4.1
	IL_010b:                                                                        //add
	IL_010c:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_010e:                                                                        //ldc.i4				0xd
	IL_0113:            V_5=13;                                                     //stloc				V_5
	IL_0117:            /*goto IL_000b;*/goto IL_011c;                              //br				IL_000b
	IL_011c:            goto IL_0185;                                               //br.s				IL_0185
	IL_011e:                                                                        //ldloc.0
	IL_011f:            Temp_3=V_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0124:            V_1=Temp_3;                                                 //stloc.1
	IL_0125:                                                                        //ldc.i4				0x8
	IL_012a:            V_5=8;                                                      //stloc				V_5
	IL_012e:            /*goto IL_000b;*/goto IL_0133;                              //br				IL_000b
	IL_0133:                                                                        //ldloc.1
	IL_0134:            if(V_1==nullptr)goto IL_0236;                               //brfalse				IL_0236
	IL_0139:                                                                        //ldc.i4				0xb
	IL_013e:            V_5=11;                                                     //stloc				V_5
	IL_0142:            /*goto IL_000b;*/goto IL_0147;                              //br				IL_000b
	IL_0147:            goto IL_00c2;                                               //br				IL_00c2
	IL_014c:                                                                        //ldc.i4				0x11
	IL_0151:            V_5=17;                                                     //stloc				V_5
	IL_0155:            /*goto IL_000b;*/goto IL_015a;                              //br				IL_000b
	IL_015a:                                                                        //ldloc.3
	IL_015b:                                                                        //ldloc.s				V_4
	IL_015d:            Temp_16=V_3[V_4];                                           //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_0162:            Temp_17=safe_cast<Reflector::CodeModel::IFieldReference^>(Temp_16)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0167:                                                                        //ldloc.1
	IL_0168:            Temp_18=Temp_17->Equals(safe_cast<System::Object^>(V_1));   //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_016d:            if(Temp_18)goto IL_0108;                                    //brtrue.s				IL_0108
	IL_016f:                                                                        //ldc.i4				0x7
	IL_0174:            V_5=7;                                                      //stloc				V_5
	IL_0178:            /*goto IL_000b;*/goto IL_017d;                              //br				IL_000b
	IL_017d:            goto IL_0180;                                               //br.s				IL_0180
	IL_017f:                                                                        //break
	IL_0180:            goto IL_0084;                                               //br				IL_0084
	IL_0185:                                                                        //ldc.i4				0x9
	IL_018a:            V_5=9;                                                      //stloc				V_5
	IL_018e:            /*goto IL_000b;*/goto IL_0193;                              //br				IL_000b
	IL_0193:                                                                        //ldloc.s				V_4
	IL_0195:                                                                        //ldloc.3
	IL_0196:            Temp_9=safe_cast<System::Collections::ICollection^>(V_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_019b:            if(V_4<Temp_9)goto IL_0203;                                 //blt.s				IL_0203
	IL_019d:                                                                        //ldc.i4				0x1
	IL_01a2:            V_5=1;                                                      //stloc				V_5
	IL_01a6:            /*goto IL_000b;*/goto IL_01ab;                              //br				IL_000b
	IL_01ab:            goto IL_0236;                                               //br				IL_0236
	IL_01b0:                                                                        //ldloc.1
	IL_01b1:            Temp_4=V_1->Fields;                                         //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_01b6:            V_3=Temp_4;                                                 //stloc.3
	IL_01b7:                                                                        //ldc.i4.0
	IL_01b8:            V_4=0;                                                      //stloc.s				V_4
	IL_01ba:                                                                        //ldc.i4				0xf
	IL_01bf:            V_5=15;                                                     //stloc				V_5
	IL_01c3:            /*goto IL_000b;*/goto IL_01c8;                              //br				IL_000b
	IL_01c8:            goto IL_0185;                                               //br.s				IL_0185
	IL_01ca:                                                                        //ldc.i4				0xa
	IL_01cf:            V_5=10;                                                     //stloc				V_5
	IL_01d3:            /*goto IL_000b;*/goto IL_01d8;                              //br				IL_000b
	IL_01d8:                                                                        //ldloc.2
	IL_01d9:            Temp_10=V_2->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_01de:                                                                        //ldstr				L"\x6B2D\x5E2F\x4731\x5933"
	IL_01e3:                                                                        //ldloc				V_6
	IL_01e7:            Temp_11=a(L"\x6B2D\x5E2F\x4731\x5933",V_6);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ec:            Temp_12=(Temp_10 == Temp_11);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01f1:            if(!Temp_12)goto IL_0236;                                   //brfalse.s				IL_0236
	IL_01f3:                                                                        //ldc.i4				0x5
	IL_01f8:            V_5=5;                                                      //stloc				V_5
	IL_01fc:            /*goto IL_000b;*/goto IL_0201;                              //br				IL_000b
	IL_0201:            goto IL_01b0;                                               //br.s				IL_01b0
	IL_0203:                                                                        //ldc.i4				0x6
	IL_0208:            V_5=6;                                                      //stloc				V_5
	IL_020c:            /*goto IL_000b;*/goto IL_0211;                              //br				IL_000b
	IL_0211:                                                                        //ldloc.3
	IL_0212:                                                                        //ldloc.s				V_4
	IL_0214:            Temp_5=V_3[V_4];                                            //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_0219:            Temp_6=Temp_5->SpecialName;                                 //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_SpecialName()
	IL_021e:            if(!Temp_6)goto IL_0108;                                    //brfalse				IL_0108
	IL_0223:                                                                        //ldc.i4				0x10
	IL_0228:            V_5=16;                                                     //stloc				V_5
	IL_022c:            /*goto IL_000b;*/goto IL_0231;                              //br				IL_000b
	IL_0231:            goto IL_0092;                                               //br				IL_0092
	IL_0236:                                                                        //ldnull
	IL_0237:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::LiteralExpression^ Temp_0 = nullptr;
	//local variables.
	Reflector::CodeModel::ILiteralExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::LiteralExpression();//newobj				void Reflector::CodeModel::Memory::LiteralExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::ILiteralExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            V_0->Value=A_0;                                             //callvirt				void Reflector::CodeModel::ILiteralExpression::set_Value(System::Object^)
	IL_000d:                                                                        //ldloc.0
	IL_000e:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Byte Temp_0 = 0;
	Root::T_x2^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::Memory::PropertyReference^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	Reflector::CodeModel::Memory::NamedArgumentExpression^ Temp_9 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_10 = nullptr;
	Reflector::CodeModel::Memory::FieldReference^ Temp_11 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::String^ Temp_15 = nullptr;
	Reflector::CodeModel::Memory::NamedArgumentExpression^ Temp_16 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_17 = nullptr;
	//local variables.
	System::Byte V_0 = 0;
	Reflector::CodeModel::IType^ V_1 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_2 = nullptr;
	Reflector::CodeModel::INamedArgumentExpression^ V_3 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_4 = nullptr;
	Reflector::CodeModel::INamedArgumentExpression^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_00bd;case 1:goto IL_00d0;case 2:goto IL_0047;case 3:goto IL_0057;};//switch				(IL_00bd,IL_00d0,IL_0047,IL_0057)
	IL_001b:                                                                        //ldc.i4.2
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.3
	IL_001f:                                                                        //add
	IL_0020:                                                                        //bgt				IL_001c
	IL_0025:                                                                        //pop
	IL_0026:                                                                        //ldarg.1
	IL_0027:            Temp_0=A_0->M_x15();                                        //callvirt				System::Byte Root::T_x139::M_x15()
	IL_002c:            V_0=Temp_0;                                                 //stloc.0
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x2^ Root::T_x143 F_x1
	IL_0033:                                                                        //ldarg.1
	IL_0034:                                                                        //ldnull
	IL_0035:                                                                        //ldnull
	IL_0036:            Temp_2=Temp_1->M_x5(A_0,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_003b:            V_1=Temp_2;                                                 //stloc.1
	IL_003c:                                                                        //ldc.i4				0x2
	IL_0041:            V_6=2;                                                      //stloc				V_6
	IL_0045:            /*goto IL_0002;*/goto IL_0047;                              //br.s				IL_0002
	IL_0047:                                                                        //ldloc.0
	IL_0048:                                                                        //ldc.i4.s				83
	IL_004a:            if(V_0!=83)goto IL_00af;                                    //bne.un.s				IL_00af
	IL_004c:                                                                        //ldc.i4				0x3
	IL_0051:            V_6=3;                                                      //stloc				V_6
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_0059:            Temp_4=gcnew Reflector::CodeModel::Memory::PropertyReference();//newobj				void Reflector::CodeModel::Memory::PropertyReference::.ctor()
	IL_005e:            V_4=safe_cast<Reflector::CodeModel::IPropertyReference^>(Temp_4);//stloc.s				V_4
	IL_0060:                                                                        //ldloc.s				V_4
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_5=this->M_x2();                                        //call				Reflector::CodeModel::IMethodReference^ Root::T_x143::M_x2()
	IL_0068:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_5)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_006d:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_4)->DeclaringType=Temp_6;//callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_0072:                                                                        //ldloc.s				V_4
	IL_0074:                                                                        //ldloc.1
	IL_0075:            V_4->PropertyType=V_1;                                      //callvirt				void Reflector::CodeModel::IPropertyReference::set_PropertyType(Reflector::CodeModel::IType^)
	IL_007a:                                                                        //ldloc.s				V_4
	IL_007c:                                                                        //ldarg.1
	IL_007d:                                                                        //ldarg.1
	IL_007e:            Temp_7=A_0->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0083:            Temp_8=A_0->M_x2(Temp_7);                                   //callvirt				System::String^ Root::T_x139::M_x2(System::Int32)
	IL_0088:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_4)->Name=Temp_8;//callvirt				void Reflector::CodeModel::IMemberReference::set_Name(System::String^)
	IL_008d:            Temp_9=gcnew Reflector::CodeModel::Memory::NamedArgumentExpression();//newobj				void Reflector::CodeModel::Memory::NamedArgumentExpression::.ctor()
	IL_0092:            V_5=safe_cast<Reflector::CodeModel::INamedArgumentExpression^>(Temp_9);//stloc.s				V_5
	IL_0094:                                                                        //ldloc.s				V_5
	IL_0096:                                                                        //ldloc.s				V_4
	IL_0098:            V_5->Member=safe_cast<Reflector::CodeModel::IMemberReference^>(V_4);//callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Member(Reflector::CodeModel::IMemberReference^)
	IL_009d:                                                                        //ldloc.s				V_5
	IL_009f:                                                                        //ldarg.0
	IL_00a0:                                                                        //ldarg.1
	IL_00a1:                                                                        //ldloc.1
	IL_00a2:            Temp_10=this->M_x1(A_0,V_1);                                //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^,Reflector::CodeModel::IType^)
	IL_00a7:            V_5->Value=Temp_10;                                         //callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Value(Reflector::CodeModel::IExpression^)
	IL_00ac:                                                                        //ldloc.s				V_5
	IL_00ae:            return safe_cast<Reflector::CodeModel::IExpression^>(V_5);  //ret
	IL_00af:                                                                        //ldc.i4				0x0
	IL_00b4:            V_6=0;                                                      //stloc				V_6
	IL_00b8:            /*goto IL_0002;*/goto IL_00bd;                              //br				IL_0002
	IL_00bd:                                                                        //ldloc.0
	IL_00be:                                                                        //ldc.i4.s				84
	IL_00c0:            if(V_0!=84)goto IL_011f;                                    //bne.un.s				IL_011f
	IL_00c2:                                                                        //ldc.i4				0x1
	IL_00c7:            V_6=1;                                                      //stloc				V_6
	IL_00cb:            /*goto IL_0002;*/goto IL_00d0;                              //br				IL_0002
	IL_00d0:            goto IL_0059;                                               //br.s				IL_0059
	IL_00d2:            Temp_11=gcnew Reflector::CodeModel::Memory::FieldReference();//newobj				void Reflector::CodeModel::Memory::FieldReference::.ctor()
	IL_00d7:            V_2=safe_cast<Reflector::CodeModel::IFieldReference^>(Temp_11);//stloc.2
	IL_00d8:                                                                        //ldloc.2
	IL_00d9:                                                                        //ldarg.0
	IL_00da:            Temp_12=this->M_x2();                                       //call				Reflector::CodeModel::IMethodReference^ Root::T_x143::M_x2()
	IL_00df:            Temp_13=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_12)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00e4:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType=Temp_13;//callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_00e9:                                                                        //ldloc.2
	IL_00ea:                                                                        //ldloc.1
	IL_00eb:            V_2->FieldType=V_1;                                         //callvirt				void Reflector::CodeModel::IFieldReference::set_FieldType(Reflector::CodeModel::IType^)
	IL_00f0:                                                                        //ldloc.2
	IL_00f1:                                                                        //ldarg.1
	IL_00f2:                                                                        //ldarg.1
	IL_00f3:            Temp_14=A_0->M_x6();                                        //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_00f8:            Temp_15=A_0->M_x2(Temp_14);                                 //callvirt				System::String^ Root::T_x139::M_x2(System::Int32)
	IL_00fd:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->Name=Temp_15;//callvirt				void Reflector::CodeModel::IMemberReference::set_Name(System::String^)
	IL_0102:            Temp_16=gcnew Reflector::CodeModel::Memory::NamedArgumentExpression();//newobj				void Reflector::CodeModel::Memory::NamedArgumentExpression::.ctor()
	IL_0107:            V_3=safe_cast<Reflector::CodeModel::INamedArgumentExpression^>(Temp_16);//stloc.3
	IL_0108:                                                                        //ldloc.3
	IL_0109:                                                                        //ldloc.2
	IL_010a:            V_3->Member=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2);//callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Member(Reflector::CodeModel::IMemberReference^)
	IL_010f:                                                                        //ldloc.3
	IL_0110:                                                                        //ldarg.0
	IL_0111:                                                                        //ldarg.1
	IL_0112:                                                                        //ldloc.1
	IL_0113:            Temp_17=this->M_x1(A_0,V_1);                                //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^,Reflector::CodeModel::IType^)
	IL_0118:            V_3->Value=Temp_17;                                         //callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Value(Reflector::CodeModel::IExpression^)
	IL_011d:                                                                        //ldloc.3
	IL_011e:            return safe_cast<Reflector::CodeModel::IExpression^>(V_3);  //ret
	IL_011f:                                                                        //ldarg.0
	IL_0120:                                                                        //ldarg.1
	IL_0121:                                                                        //ldloc.1
	IL_0122:            Temp_3=this->M_x1(A_0,V_1);                                 //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^,Reflector::CodeModel::IType^)
	IL_0127:            return Temp_3;                                              //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^ A_0,Reflector::CodeModel::IType^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::Memory::TypeOfExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	System::Collections::Hashtable^ Temp_4 = nullptr;
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
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	Reflector::CodeModel::ILiteralExpression^ Temp_21 = nullptr;
	System::Collections::Hashtable^ Temp_22 = nullptr;
	System::Object^ Temp_23 = nullptr;
	System::Object^ Temp_24 = nullptr;
	System::Boolean Temp_25 = false;
	System::Int32 Temp_26 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_27 = nullptr;
	Reflector::CodeModel::IType^ Temp_28 = nullptr;
	Reflector::CodeModel::Memory::CastExpression^ Temp_29 = nullptr;
	Root::T_x2^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_33 = nullptr;
	Reflector::CodeModel::ILiteralExpression^ Temp_34 = nullptr;
	Reflector::CodeModel::IType^ Temp_35 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_36 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_37 = nullptr;
	System::Int32 Temp_38 = 0;
	Reflector::CodeModel::Memory::LiteralExpression^ Temp_39 = nullptr;
	Reflector::CodeModel::Memory::ArrayCreateExpression^ Temp_40 = nullptr;
	Reflector::CodeModel::IType^ Temp_41 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_42 = nullptr;
	Reflector::CodeModel::Memory::ArrayInitializerExpression^ Temp_43 = nullptr;
	System::NotSupportedException^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::Boolean Temp_47 = false;
	System::Int32 Temp_48 = 0;
	System::Boolean Temp_49 = false;
	Reflector::CodeModel::ILiteralExpression^ Temp_50 = nullptr;
	System::Char Temp_51 = (System::Char)0;
	Reflector::CodeModel::ILiteralExpression^ Temp_52 = nullptr;
	System::Byte Temp_53 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_54 = nullptr;
	System::SByte Temp_55 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_56 = nullptr;
	System::Int16 Temp_57 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_58 = nullptr;
	System::UInt16 Temp_59 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_60 = nullptr;
	System::Int32 Temp_61 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_62 = nullptr;
	System::UInt32 Temp_63 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_64 = nullptr;
	System::Int64 Temp_65 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_66 = nullptr;
	System::UInt64 Temp_67 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_68 = nullptr;
	System::Single Temp_69 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_70 = nullptr;
	System::Double Temp_71 = 0;
	Reflector::CodeModel::ILiteralExpression^ Temp_72 = nullptr;
	Root::T_x2^ Temp_73 = nullptr;
	Reflector::CodeModel::IType^ Temp_74 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_75 = nullptr;
	Root::T_x2^ Temp_76 = nullptr;
	Reflector::CodeModel::IType^ Temp_77 = nullptr;
	Reflector::CodeModel::ILiteralExpression^ Temp_78 = nullptr;
	System::Collections::Hashtable^ Temp_79 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IType^ V_2 = nullptr;
	Reflector::CodeModel::ICastExpression^ V_3 = nullptr;
	Reflector::CodeModel::Memory::TypeOfExpression^ V_4 = nullptr;
	Reflector::CodeModel::IType^ V_5 = nullptr;
	Reflector::CodeModel::IArrayType^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	Reflector::CodeModel::ILiteralExpression^ V_8 = nullptr;
	Reflector::CodeModel::IArrayCreateExpression^ V_9 = nullptr;
	Reflector::CodeModel::IArrayInitializerExpression^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	Reflector::CodeModel::IExpression^ V_12 = nullptr;
	System::Object^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_15=16;                                                    //stloc				V_15
	IL_0009:                                                                        //ldc.i4				0xc
	IL_000e:            V_14=12;                                                    //stloc				V_14
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_008f;                                               //br.s				IL_008f
	IL_0016:                                                                        //ldloc				V_14
	IL_001a:            switch(V_14){case 0:goto IL_0560;case 1:goto IL_0196;case 2:goto IL_03ef;case 3:goto IL_0611;case 4:goto IL_05ac;case 5:goto IL_0402;case 6:goto IL_00b4;case 7:goto IL_0120;case 8:goto IL_0152;case 9:goto IL_0625;case 10:goto IL_04f3;case 11:goto IL_01e1;case 12:goto IL_0014;case 13:goto IL_050c;case 14:goto IL_01aa;case 15:goto IL_057c;case 16:goto IL_04e0;case 17:goto IL_067a;case 18:goto IL_0597;case 19:goto IL_0229;case 20:goto IL_0176;case 21:goto IL_0214;case 22:goto IL_06a4;case 23:goto IL_0415;case 24:goto IL_06d0;case 25:goto IL_0691;case 26:goto IL_046c;case 27:goto IL_0135;};//switch				(IL_0560,IL_0196,IL_03ef,IL_0611,IL_05ac,IL_0402,IL_00b4,IL_0120,IL_0152,IL_0625,IL_04f3,IL_01e1,IL_0014,IL_050c,IL_01aa,IL_057c,IL_04e0,IL_067a,IL_0597,IL_0229,IL_0176,IL_0214,IL_06a4,IL_0415,IL_06d0,IL_0691,IL_046c,IL_0135)
	IL_008f:                                                                        //volatile.
	IL_0091:            Temp_79=Root::T_x188::F_x17;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x17
	IL_0096:            if(Temp_79!=nullptr)goto IL_05f6;                           //brtrue				IL_05f6
	IL_009b:                                                                        //ldc.i4.5
	IL_009c:                                                                        //dup
	IL_009d:                                                                        //dup
	IL_009e:                                                                        //ldc.i4.6
	IL_009f:                                                                        //add
	IL_00a0:                                                                        //bgt				IL_009c
	IL_00a5:                                                                        //pop
	IL_00a6:                                                                        //ldc.i4				0x6
	IL_00ab:            V_14=6;                                                     //stloc				V_14
	IL_00af:            /*goto IL_0016;*/goto IL_00b4;                              //br				IL_0016
	IL_00b4:            goto IL_0242;                                               //br				IL_0242
	IL_00b9:            Temp_29=gcnew Reflector::CodeModel::Memory::CastExpression();//newobj				void Reflector::CodeModel::Memory::CastExpression::.ctor()
	IL_00be:            V_3=safe_cast<Reflector::CodeModel::ICastExpression^>(Temp_29);//stloc.3
	IL_00bf:                                                                        //ldloc.3
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:            Temp_30=this->F_x1;                                         //ldfld				Root::T_x2^ Root::T_x143 F_x1
	IL_00c6:                                                                        //ldstr				L"\x7D2D\x492F\x4131\x4033\x5335\x5537"
	IL_00cb:                                                                        //ldloc				V_15
	IL_00cf:            Temp_31=a(L"\x7D2D\x492F\x4131\x4033\x5335\x5537",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d4:                                                                        //ldstr				L"\x7A2D\x492F\x4231\x5133"
	IL_00d9:                                                                        //ldloc				V_15
	IL_00dd:            Temp_32=a(L"\x7A2D\x492F\x4231\x5133",V_15);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e2:            Temp_33=Temp_30->M_x13(Temp_31,Temp_32);                    //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x2::M_x13(System::String^,System::String^)
	IL_00e7:            V_3->TargetType=safe_cast<Reflector::CodeModel::IType^>(Temp_33);//callvirt				void Reflector::CodeModel::ICastExpression::set_TargetType(Reflector::CodeModel::IType^)
	IL_00ec:                                                                        //ldloc.3
	IL_00ed:                                                                        //ldnull
	IL_00ee:            Temp_34=Root::T_x143::M_x1(safe_cast<System::Object^>(nullptr));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_00f3:            V_3->Expression=safe_cast<Reflector::CodeModel::IExpression^>(Temp_34);//callvirt				void Reflector::CodeModel::ICastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_00f8:                                                                        //ldloc.3
	IL_00f9:            return safe_cast<Reflector::CodeModel::IExpression^>(V_3);  //ret
	IL_00fa:                                                                        //ldarg.1
	IL_00fb:            Temp_67=A_0->M_x9();                                        //callvirt				System::UInt64 Root::T_x139::M_x9()
	IL_0100:                                                                        //box				System::UInt64
	IL_0105:            Temp_68=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_67));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_010a:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_68);//ret
	IL_010b:                                                                        //ldarg.1
	IL_010c:            Temp_48=A_0->M_x6();                                        //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0111:            V_1=Temp_48;                                                //stloc.1
	IL_0112:                                                                        //ldc.i4				0x7
	IL_0117:            V_14=7;                                                     //stloc				V_14
	IL_011b:            /*goto IL_0016;*/goto IL_0120;                              //br				IL_0016
	IL_0120:                                                                        //ldloc.1
	IL_0121:                                                                        //ldc.i4.0
	IL_0122:            if(V_1>=0)goto IL_05c2;                                     //bge				IL_05c2
	IL_0127:                                                                        //ldc.i4				0x1b
	IL_012c:            V_14=27;                                                    //stloc				V_14
	IL_0130:            /*goto IL_0016;*/goto IL_0135;                              //br				IL_0016
	IL_0135:            goto IL_01f7;                                               //br				IL_01f7
	IL_013a:                                                                        //ldarg.0
	IL_013b:                                                                        //ldarg.1
	IL_013c:                                                                        //ldloc.s				V_5
	IL_013e:            Temp_3=this->M_x1(A_0,V_5);                                 //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^,Reflector::CodeModel::IType^)
	IL_0143:            return Temp_3;                                              //ret
	IL_0144:                                                                        //ldc.i4				0x8
	IL_0149:            V_14=8;                                                     //stloc				V_14
	IL_014d:            /*goto IL_0016;*/goto IL_0152;                              //br				IL_0016
	IL_0152:                                                                        //volatile.
	IL_0154:            Temp_22=Root::T_x188::F_x17;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x17
	IL_0159:            Temp_24=V_13;                                               //ldloc.s				V_13
	IL_015b:            Temp_23=Temp_22[Temp_24];                                   //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_0160:                                                                        //dup
	IL_0161:            V_13=Temp_23;                                               //stloc.s				V_13
	IL_0163:            if(V_13==nullptr)goto IL_04e5;                              //brfalse				IL_04e5
	IL_0168:                                                                        //ldc.i4				0x14
	IL_016d:            V_14=20;                                                    //stloc				V_14
	IL_0171:            /*goto IL_0016;*/goto IL_0176;                              //br				IL_0016
	IL_0176:            goto IL_0407;                                               //br				IL_0407
	IL_017b:                                                                        //ldarg.0
	IL_017c:            Temp_76=this->F_x1;                                         //ldfld				Root::T_x2^ Root::T_x143 F_x1
	IL_0181:                                                                        //ldarg.1
	IL_0182:            Temp_77=Temp_76->M_x13(A_0);                                //callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x13(Root::T_x139^)
	IL_0187:            V_2=Temp_77;                                                //stloc.2
	IL_0188:                                                                        //ldc.i4				0x1
	IL_018d:            V_14=1;                                                     //stloc				V_14
	IL_0191:            /*goto IL_0016;*/goto IL_0196;                              //br				IL_0016
	IL_0196:                                                                        //ldloc.2
	IL_0197:            if(V_2!=nullptr)goto IL_065a;                               //brtrue				IL_065a
	IL_019c:                                                                        //ldc.i4				0xe
	IL_01a1:            V_14=14;                                                    //stloc				V_14
	IL_01a5:            /*goto IL_0016;*/goto IL_01aa;                              //br				IL_0016
	IL_01aa:            goto IL_00b9;                                               //br				IL_00b9
	IL_01af:                                                                        //ldarg.0
	IL_01b0:                                                                        //ldarg.1
	IL_01b1:                                                                        //ldloc.s				V_6
	IL_01b3:            Temp_35=V_6->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_01b8:            Temp_36=this->M_x1(A_0,Temp_35);                            //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^,Reflector::CodeModel::IType^)
	IL_01bd:            V_12=Temp_36;                                               //stloc.s				V_12
	IL_01bf:                                                                        //ldloc.s				V_10
	IL_01c1:            Temp_37=V_10->Expressions;                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayInitializerExpression::get_Expressions()
	IL_01c6:                                                                        //ldloc.s				V_12
	IL_01c8:            Temp_37->Add(V_12);                                         //callvirt				void Reflector::CodeModel::IExpressionCollection::Add(Reflector::CodeModel::IExpression^)
	IL_01cd:                                                                        //ldloc.s				V_11
	IL_01cf:                                                                        //ldc.i4.1
	IL_01d0:                                                                        //add
	IL_01d1:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_01d3:                                                                        //ldc.i4				0xb
	IL_01d8:            V_14=11;                                                    //stloc				V_14
	IL_01dc:            /*goto IL_0016;*/goto IL_01e1;                              //br				IL_0016
	IL_01e1:            goto IL_066c;                                               //br				IL_066c
	IL_01e6:                                                                        //ldarg.1
	IL_01e7:            Temp_65=A_0->M_x12();                                       //callvirt				System::Int64 Root::T_x139::M_x12()
	IL_01ec:                                                                        //box				System::Int64
	IL_01f1:            Temp_66=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_65));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_01f6:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_66);//ret
	IL_01f7:                                                                        //ldnull
	IL_01f8:            Temp_78=Root::T_x143::M_x1(safe_cast<System::Object^>(nullptr));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_01fd:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_78);//ret
	IL_01fe:                                                                        //ldarg.2
	IL_01ff:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_0204:            V_6=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_1);   //stloc.s				V_6
	IL_0206:                                                                        //ldc.i4				0x15
	IL_020b:            V_14=21;                                                    //stloc				V_14
	IL_020f:            /*goto IL_0016;*/goto IL_0214;                              //br				IL_0016
	IL_0214:                                                                        //ldloc.s				V_6
	IL_0216:            if(V_6==nullptr)goto IL_06d5;                               //brfalse				IL_06d5
	IL_021b:                                                                        //ldc.i4				0x13
	IL_0220:            V_14=19;                                                    //stloc				V_14
	IL_0224:            /*goto IL_0016;*/goto IL_0229;                              //br				IL_0016
	IL_0229:            goto IL_047f;                                               //br				IL_047f
	IL_022e:                                                                        //ldloc.s				V_9
	IL_0230:            return safe_cast<Reflector::CodeModel::IExpression^>(V_9);  //ret
	IL_0231:                                                                        //ldarg.1
	IL_0232:            Temp_55=A_0->M_x4();                                        //callvirt				System::SByte Root::T_x139::M_x4()
	IL_0237:                                                                        //box				System::SByte
	IL_023c:            Temp_56=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_55));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_0241:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_56);//ret
	IL_0242:                                                                        //ldc.i4.s				30
	IL_0244:                                                                        //ldc.r4				0.5
	IL_0249:            Temp_4=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(30),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_024e:                                                                        //dup
	IL_024f:                                                                        //ldstr				L"\x7D2D\x442F\x4031\x5D33\x5835\x5F37"
	IL_0254:                                                                        //ldloc				V_15
	IL_0258:            Temp_5=a(L"\x7D2D\x442F\x4031\x5D33\x5835\x5F37",V_15);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025d:                                                                        //ldc.i4.0
	IL_025e:                                                                        //box				System::Int32
	IL_0263:            Temp_4->Add(safe_cast<System::Object^>(Temp_5),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0268:                                                                        //dup
	IL_0269:                                                                        //ldstr				L"\x6C2D\x5F2F\x5D31\x5833\x5335\x5937\x5439"
	IL_026e:                                                                        //ldloc				V_15
	IL_0272:            Temp_6=a(L"\x6C2D\x5F2F\x5D31\x5833\x5335\x5937\x5439",V_15);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0277:                                                                        //ldc.i4.1
	IL_0278:                                                                        //box				System::Int32
	IL_027d:            Temp_4->Add(safe_cast<System::Object^>(Temp_6),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0282:                                                                        //dup
	IL_0283:                                                                        //ldstr				L"\x6D2D\x582F\x5331\x4633"
	IL_0288:                                                                        //ldloc				V_15
	IL_028c:            Temp_7=a(L"\x6D2D\x582F\x5331\x4633",V_15);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0291:                                                                        //ldc.i4.2
	IL_0292:                                                                        //box				System::Int32
	IL_0297:            Temp_4->Add(safe_cast<System::Object^>(Temp_7),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_029c:                                                                        //dup
	IL_029d:                                                                        //ldstr				L"\x6C2D\x492F\x4631\x5133"
	IL_02a2:                                                                        //ldloc				V_15
	IL_02a6:            Temp_8=a(L"\x6C2D\x492F\x4631\x5133",V_15);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ab:                                                                        //ldc.i4.3
	IL_02ac:                                                                        //box				System::Int32
	IL_02b1:            Temp_4->Add(safe_cast<System::Object^>(Temp_8),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02b6:                                                                        //dup
	IL_02b7:                                                                        //ldstr				L"\x7D2D\x722F\x4B31\x4033\x5335"
	IL_02bc:                                                                        //ldloc				V_15
	IL_02c0:            Temp_9=a(L"\x7D2D\x722F\x4B31\x4033\x5335",V_15);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c5:                                                                        //ldc.i4.4
	IL_02c6:                                                                        //box				System::Int32
	IL_02cb:            Temp_4->Add(safe_cast<System::Object^>(Temp_9),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02d0:                                                                        //dup
	IL_02d1:                                                                        //ldstr				L"\x672D\x5E2F\x4631\x0533\x0035"
	IL_02d6:                                                                        //ldloc				V_15
	IL_02da:            Temp_10=a(L"\x672D\x5E2F\x4631\x0533\x0035",V_15);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02df:                                                                        //ldc.i4.5
	IL_02e0:                                                                        //box				System::Int32
	IL_02e5:            Temp_4->Add(safe_cast<System::Object^>(Temp_10),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02ea:                                                                        //dup
	IL_02eb:                                                                        //ldstr				L"\x7B2D\x792F\x5C31\x4033\x0735\x0E37"
	IL_02f0:                                                                        //ldloc				V_15
	IL_02f4:            Temp_11=a(L"\x7B2D\x792F\x5C31\x4033\x0735\x0E37",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02f9:                                                                        //ldc.i4.6
	IL_02fa:                                                                        //box				System::Int32
	IL_02ff:            Temp_4->Add(safe_cast<System::Object^>(Temp_11),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0304:                                                                        //dup
	IL_0305:                                                                        //ldstr				L"\x672D\x5E2F\x4631\x0733\x0435"
	IL_030a:                                                                        //ldloc				V_15
	IL_030e:            Temp_12=a(L"\x672D\x5E2F\x4631\x0733\x0435",V_15);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0313:                                                                        //ldc.i4.7
	IL_0314:                                                                        //box				System::Int32
	IL_0319:            Temp_4->Add(safe_cast<System::Object^>(Temp_12),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_031e:                                                                        //dup
	IL_031f:                                                                        //ldstr				L"\x7B2D\x792F\x5C31\x4033\x0535\x0A37"
	IL_0324:                                                                        //ldloc				V_15
	IL_0328:            Temp_13=a(L"\x7B2D\x792F\x5C31\x4033\x0535\x0A37",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_032d:                                                                        //ldc.i4.8
	IL_032e:                                                                        //box				System::Int32
	IL_0333:            Temp_4->Add(safe_cast<System::Object^>(Temp_13),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0338:                                                                        //dup
	IL_0339:                                                                        //ldstr				L"\x672D\x5E2F\x4631\x0233\x0235"
	IL_033e:                                                                        //ldloc				V_15
	IL_0342:            Temp_14=a(L"\x672D\x5E2F\x4631\x0233\x0235",V_15);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0347:                                                                        //ldc.i4.s				9
	IL_0349:                                                                        //box				System::Int32
	IL_034e:            Temp_4->Add(safe_cast<System::Object^>(Temp_14),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0353:                                                                        //dup
	IL_0354:                                                                        //ldstr				L"\x7B2D\x792F\x5C31\x4033\x0035\x0C37"
	IL_0359:                                                                        //ldloc				V_15
	IL_035d:            Temp_15=a(L"\x7B2D\x792F\x5C31\x4033\x0035\x0C37",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0362:                                                                        //ldc.i4.s				10
	IL_0364:                                                                        //box				System::Int32
	IL_0369:            Temp_4->Add(safe_cast<System::Object^>(Temp_15),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_036e:                                                                        //dup
	IL_036f:                                                                        //ldstr				L"\x7D2D\x592F\x5C31\x5333\x5A35\x5D37"
	IL_0374:                                                                        //ldloc				V_15
	IL_0378:            Temp_16=a(L"\x7D2D\x592F\x5C31\x5333\x5A35\x5D37",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_037d:                                                                        //ldc.i4.s				11
	IL_037f:                                                                        //box				System::Int32
	IL_0384:            Temp_4->Add(safe_cast<System::Object^>(Temp_16),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0389:                                                                        //dup
	IL_038a:                                                                        //ldstr				L"\x6A2D\x5F2F\x4731\x5633\x5A35\x5D37"
	IL_038f:                                                                        //ldloc				V_15
	IL_0393:            Temp_17=a(L"\x6A2D\x5F2F\x4731\x5633\x5A35\x5D37",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0398:                                                                        //ldc.i4.s				12
	IL_039a:                                                                        //box				System::Int32
	IL_039f:            Temp_4->Add(safe_cast<System::Object^>(Temp_17),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03a4:                                                                        //dup
	IL_03a5:                                                                        //ldstr				L"\x612D\x522F\x5831\x5133\x5535\x4C37"
	IL_03aa:                                                                        //ldloc				V_15
	IL_03ae:            Temp_18=a(L"\x612D\x522F\x5831\x5133\x5535\x4C37",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b3:                                                                        //ldc.i4.s				13
	IL_03b5:                                                                        //box				System::Int32
	IL_03ba:            Temp_4->Add(safe_cast<System::Object^>(Temp_18),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03bf:                                                                        //dup
	IL_03c0:                                                                        //ldstr				L"\x7A2D\x492F\x4231\x5133"
	IL_03c5:                                                                        //ldloc				V_15
	IL_03c9:            Temp_19=a(L"\x7A2D\x492F\x4231\x5133",V_15);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03ce:                                                                        //ldc.i4.s				14
	IL_03d0:                                                                        //box				System::Int32
	IL_03d5:            Temp_4->Add(safe_cast<System::Object^>(Temp_19),safe_cast<System::Object^>(14));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03da:                                                                        //volatile.
	IL_03dc:            Root::T_x188::F_x17=Temp_4;                                 //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x17
	IL_03e1:                                                                        //ldc.i4				0x2
	IL_03e6:            V_14=2;                                                     //stloc				V_14
	IL_03ea:            /*goto IL_0016;*/goto IL_03ef;                              //br				IL_0016
	IL_03ef:            goto IL_05f6;                                               //br				IL_05f6
	IL_03f4:                                                                        //ldc.i4				0x5
	IL_03f9:            V_14=5;                                                     //stloc				V_14
	IL_03fd:            /*goto IL_0016;*/goto IL_0402;                              //br				IL_0016
	IL_0402:            goto IL_04e5;                                               //br				IL_04e5
	IL_0407:                                                                        //ldc.i4				0x17
	IL_040c:            V_14=23;                                                    //stloc				V_14
	IL_0410:            /*goto IL_0016;*/goto IL_0415;                              //br				IL_0016
	IL_0415:                                                                        //ldloc.s				V_13
	IL_0417:                                                                        //unbox				System::Int32
	IL_041c:                                                                        //ldind.i4
	IL_041d:            switch(safe_cast<System::Int32>(V_13)){case 0:goto IL_010b;case 1:goto IL_046e;case 2:goto IL_0541;case 3:goto IL_05b1;case 4:goto IL_0231;case 5:goto IL_050e;case 6:goto IL_051f;case 7:goto IL_05cf;case 8:goto IL_0638;case 9:goto IL_01e6;case 10:goto IL_00fa;case 11:goto IL_0627;case 12:goto IL_0530;case 13:goto IL_05e0;case 14:goto IL_017b;};//switch				(IL_010b,IL_046e,IL_0541,IL_05b1,IL_0231,IL_050e,IL_051f,IL_05cf,IL_0638,IL_01e6,IL_00fa,IL_0627,IL_0530,IL_05e0,IL_017b)
	IL_045e:                                                                        //ldc.i4				0x1a
	IL_0463:            V_14=26;                                                    //stloc				V_14
	IL_0467:            /*goto IL_0016;*/goto IL_046c;                              //br				IL_0016
	IL_046c:            goto IL_03f4;                                               //br.s				IL_03f4
	IL_046e:                                                                        //ldarg.1
	IL_046f:            Temp_49=A_0->M_x13();                                       //callvirt				System::Boolean Root::T_x139::M_x13()
	IL_0474:                                                                        //box				System::Boolean
	IL_0479:            Temp_50=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_49));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_047e:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_50);//ret
	IL_047f:                                                                        //ldarg.1
	IL_0480:            Temp_38=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0485:            V_7=Temp_38;                                                //stloc.s				V_7
	IL_0487:            Temp_39=gcnew Reflector::CodeModel::Memory::LiteralExpression();//newobj				void Reflector::CodeModel::Memory::LiteralExpression::.ctor()
	IL_048c:            V_8=safe_cast<Reflector::CodeModel::ILiteralExpression^>(Temp_39);//stloc.s				V_8
	IL_048e:                                                                        //ldloc.s				V_8
	IL_0490:                                                                        //ldloc.s				V_7
	IL_0492:                                                                        //box				System::Int32
	IL_0497:            V_8->Value=safe_cast<System::Object^>(V_7);                 //callvirt				void Reflector::CodeModel::ILiteralExpression::set_Value(System::Object^)
	IL_049c:            Temp_40=gcnew Reflector::CodeModel::Memory::ArrayCreateExpression();//newobj				void Reflector::CodeModel::Memory::ArrayCreateExpression::.ctor()
	IL_04a1:            V_9=safe_cast<Reflector::CodeModel::IArrayCreateExpression^>(Temp_40);//stloc.s				V_9
	IL_04a3:                                                                        //ldloc.s				V_9
	IL_04a5:                                                                        //ldloc.s				V_6
	IL_04a7:            Temp_41=V_6->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_04ac:            V_9->Type=Temp_41;                                          //callvirt				void Reflector::CodeModel::IArrayCreateExpression::set_Type(Reflector::CodeModel::IType^)
	IL_04b1:                                                                        //ldloc.s				V_9
	IL_04b3:            Temp_42=V_9->Dimensions;                                    //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_04b8:                                                                        //ldloc.s				V_8
	IL_04ba:            Temp_42->Add(safe_cast<Reflector::CodeModel::IExpression^>(V_8));//callvirt				void Reflector::CodeModel::IExpressionCollection::Add(Reflector::CodeModel::IExpression^)
	IL_04bf:            Temp_43=gcnew Reflector::CodeModel::Memory::ArrayInitializerExpression();//newobj				void Reflector::CodeModel::Memory::ArrayInitializerExpression::.ctor()
	IL_04c4:            V_10=safe_cast<Reflector::CodeModel::IArrayInitializerExpression^>(Temp_43);//stloc.s				V_10
	IL_04c6:                                                                        //ldloc.s				V_9
	IL_04c8:                                                                        //ldloc.s				V_10
	IL_04ca:            V_9->Initializer=safe_cast<Reflector::CodeModel::IExpression^>(V_10);//callvirt				void Reflector::CodeModel::IArrayCreateExpression::set_Initializer(Reflector::CodeModel::IExpression^)
	IL_04cf:                                                                        //ldc.i4.0
	IL_04d0:            V_11=0;                                                     //stloc.s				V_11
	IL_04d2:                                                                        //ldc.i4				0x10
	IL_04d7:            V_14=16;                                                    //stloc				V_14
	IL_04db:            /*goto IL_0016;*/goto IL_04e0;                              //br				IL_0016
	IL_04e0:            goto IL_066c;                                               //br				IL_066c
	IL_04e5:                                                                        //ldc.i4				0xa
	IL_04ea:            V_14=10;                                                    //stloc				V_14
	IL_04ee:            /*goto IL_0016;*/goto IL_04f3;                              //br				IL_0016
	IL_04f3:                                                                        //ldloc.0
	IL_04f4:            Temp_25=Root::T_x143::M_x12(safe_cast<Reflector::CodeModel::IType^>(V_0));//call				System::Boolean Root::T_x143::M_x12(Reflector::CodeModel::IType^)
	IL_04f9:            if(Temp_25)goto IL_0649;                                    //brtrue				IL_0649
	IL_04fe:                                                                        //ldc.i4				0xd
	IL_0503:            V_14=13;                                                    //stloc				V_14
	IL_0507:            /*goto IL_0016;*/goto IL_050c;                              //br				IL_0016
	IL_050c:            goto IL_0581;                                               //br.s				IL_0581
	IL_050e:                                                                        //ldarg.1
	IL_050f:            Temp_57=A_0->M_x16();                                       //callvirt				System::Int16 Root::T_x139::M_x16()
	IL_0514:                                                                        //box				System::Int16
	IL_0519:            Temp_58=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_57));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_051e:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_58);//ret
	IL_051f:                                                                        //ldarg.1
	IL_0520:            Temp_59=A_0->M_x11();                                       //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0525:                                                                        //box				System::UInt16
	IL_052a:            Temp_60=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_59));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_052f:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_60);//ret
	IL_0530:                                                                        //ldarg.1
	IL_0531:            Temp_71=A_0->M_x7();                                        //callvirt				System::Double Root::T_x139::M_x7()
	IL_0536:                                                                        //box				System::Double
	IL_053b:            Temp_72=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_71));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_0540:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_72);//ret
	IL_0541:                                                                        //ldarg.1
	IL_0542:            Temp_51=A_0->M_x8();                                        //callvirt				System::Char Root::T_x139::M_x8()
	IL_0547:                                                                        //box				System::Char
	IL_054c:            Temp_52=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_51));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_0551:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_52);//ret
	IL_0552:                                                                        //ldc.i4				0x0
	IL_0557:            V_14=0;                                                     //stloc				V_14
	IL_055b:            /*goto IL_0016;*/goto IL_0560;                              //br				IL_0016
	IL_0560:                                                                        //ldloc.0
	IL_0561:            Temp_0=V_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0566:                                                                        //dup
	IL_0567:            V_13=safe_cast<System::Object^>(Temp_0);                    //stloc.s				V_13
	IL_0569:            if(Temp_0==nullptr)goto IL_04e5;                            //brfalse				IL_04e5
	IL_056e:                                                                        //ldc.i4				0xf
	IL_0573:            V_14=15;                                                    //stloc				V_14
	IL_0577:            /*goto IL_0016;*/goto IL_057c;                              //br				IL_0016
	IL_057c:            goto IL_0144;                                               //br				IL_0144
	IL_0581:                                                                        //ldloc.0
	IL_0582:            Temp_28=Root::T_x143::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_0));//call				Reflector::CodeModel::IType^ Root::T_x143::M_x1(Reflector::CodeModel::IType^)
	IL_0587:            V_5=Temp_28;                                                //stloc.s				V_5
	IL_0589:                                                                        //ldc.i4				0x12
	IL_058e:            V_14=18;                                                    //stloc				V_14
	IL_0592:            /*goto IL_0016;*/goto IL_0597;                              //br				IL_0016
	IL_0597:                                                                        //ldloc.s				V_5
	IL_0599:            if(V_5==nullptr)goto IL_0649;                               //brfalse				IL_0649
	IL_059e:                                                                        //ldc.i4				0x4
	IL_05a3:            V_14=4;                                                     //stloc				V_14
	IL_05a7:            /*goto IL_0016;*/goto IL_05ac;                              //br				IL_0016
	IL_05ac:            goto IL_013a;                                               //br				IL_013a
	IL_05b1:                                                                        //ldarg.1
	IL_05b2:            Temp_53=A_0->M_x15();                                       //callvirt				System::Byte Root::T_x139::M_x15()
	IL_05b7:                                                                        //box				System::Byte
	IL_05bc:            Temp_54=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_53));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_05c1:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_54);//ret
	IL_05c2:                                                                        //ldarg.1
	IL_05c3:                                                                        //ldloc.1
	IL_05c4:            Temp_20=A_0->M_x2(V_1);                                     //callvirt				System::String^ Root::T_x139::M_x2(System::Int32)
	IL_05c9:            Temp_21=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_20));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_05ce:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_21);//ret
	IL_05cf:                                                                        //ldarg.1
	IL_05d0:            Temp_61=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_05d5:                                                                        //box				System::Int32
	IL_05da:            Temp_62=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_61));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_05df:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_62);//ret
	IL_05e0:                                                                        //ldarg.0
	IL_05e1:                                                                        //ldarg.1
	IL_05e2:                                                                        //ldarg.0
	IL_05e3:            Temp_73=this->F_x1;                                         //ldfld				Root::T_x2^ Root::T_x143 F_x1
	IL_05e8:                                                                        //ldarg.1
	IL_05e9:                                                                        //ldnull
	IL_05ea:                                                                        //ldnull
	IL_05eb:            Temp_74=Temp_73->M_x5(A_0,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_05f0:            Temp_75=this->M_x1(A_0,Temp_74);                            //call				Reflector::CodeModel::IExpression^ Root::T_x143::M_x1(Root::T_x139^,Reflector::CodeModel::IType^)
	IL_05f5:            return Temp_75;                                             //ret
	IL_05f6:                                                                        //ldarg.0
	IL_05f7:                                                                        //ldarg.2
	IL_05f8:            Temp_2=this->M_x2(A_1);                                     //call				Reflector::CodeModel::IType^ Root::T_x143::M_x2(Reflector::CodeModel::IType^)
	IL_05fd:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0602:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2);//stloc.0
	IL_0603:                                                                        //ldc.i4				0x3
	IL_0608:            V_14=3;                                                     //stloc				V_14
	IL_060c:            /*goto IL_0016;*/goto IL_0611;                              //br				IL_0016
	IL_0611:                                                                        //ldloc.0
	IL_0612:            if(V_0==nullptr)goto IL_01fe;                               //brfalse				IL_01fe
	IL_0617:                                                                        //ldc.i4				0x9
	IL_061c:            V_14=9;                                                     //stloc				V_14
	IL_0620:            /*goto IL_0016;*/goto IL_0625;                              //br				IL_0016
	IL_0625:            goto IL_0696;                                               //br.s				IL_0696
	IL_0627:                                                                        //ldarg.1
	IL_0628:            Temp_69=A_0->M_x18();                                       //callvirt				System::Single Root::T_x139::M_x18()
	IL_062d:                                                                        //box				System::Single
	IL_0632:            Temp_70=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_69));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_0637:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_70);//ret
	IL_0638:                                                                        //ldarg.1
	IL_0639:            Temp_63=A_0->M_x2();                                        //callvirt				System::UInt32 Root::T_x139::M_x2()
	IL_063e:                                                                        //box				System::UInt32
	IL_0643:            Temp_64=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_63));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_0648:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_64);//ret
	IL_0649:                                                                        //ldarg.1
	IL_064a:            Temp_26=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_064f:                                                                        //box				System::Int32
	IL_0654:            Temp_27=Root::T_x143::M_x1(safe_cast<System::Object^>(Temp_26));//call				Reflector::CodeModel::ILiteralExpression^ Root::T_x143::M_x1(System::Object^)
	IL_0659:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_27);//ret
	IL_065a:            Temp_1=gcnew Reflector::CodeModel::Memory::TypeOfExpression();//newobj				void Reflector::CodeModel::Memory::TypeOfExpression::.ctor()
	IL_065f:            V_4=Temp_1;                                                 //stloc.s				V_4
	IL_0661:                                                                        //ldloc.s				V_4
	IL_0663:                                                                        //ldloc.2
	IL_0664:            V_4->Type=V_2;                                              //callvirt				void Reflector::CodeModel::Memory::TypeOfExpression::set_Type(Reflector::CodeModel::IType^)
	IL_0669:                                                                        //ldloc.s				V_4
	IL_066b:            return safe_cast<Reflector::CodeModel::IExpression^>(V_4);  //ret
	IL_066c:                                                                        //ldc.i4				0x11
	IL_0671:            V_14=17;                                                    //stloc				V_14
	IL_0675:            /*goto IL_0016;*/goto IL_067a;                              //br				IL_0016
	IL_067a:                                                                        //ldloc.s				V_11
	IL_067c:                                                                        //ldloc.s				V_7
	IL_067e:            if(V_11<V_7)goto IL_01af;                                   //blt				IL_01af
	IL_0683:                                                                        //ldc.i4				0x19
	IL_0688:            V_14=25;                                                    //stloc				V_14
	IL_068c:            /*goto IL_0016;*/goto IL_0691;                              //br				IL_0016
	IL_0691:            goto IL_022e;                                               //br				IL_022e
	IL_0696:                                                                        //ldc.i4				0x16
	IL_069b:            V_14=22;                                                    //stloc				V_14
	IL_069f:            /*goto IL_0016;*/goto IL_06a4;                              //br				IL_0016
	IL_06a4:                                                                        //ldloc.0
	IL_06a5:            Temp_45=V_0->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_06aa:                                                                        //ldstr				L"\x7D2D\x492F\x4131\x4033\x5335\x5537"
	IL_06af:                                                                        //ldloc				V_15
	IL_06b3:            Temp_46=a(L"\x7D2D\x492F\x4131\x4033\x5335\x5537",V_15);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06b8:            Temp_47=(Temp_45 == Temp_46);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_06bd:            if(!Temp_47)goto IL_04e5;                                   //brfalse				IL_04e5
	IL_06c2:                                                                        //ldc.i4				0x18
	IL_06c7:            V_14=24;                                                    //stloc				V_14
	IL_06cb:            /*goto IL_0016;*/goto IL_06d0;                              //br				IL_0016
	IL_06d0:            goto IL_0552;                                               //br				IL_0552
	IL_06d5:            Temp_44=gcnew System::NotSupportedException();              //newobj				void System::NotSupportedException::.ctor()
	IL_06da:            throw Temp_44;                                              //throw

}
inline System::String^ Root::T_x143::M_x12()
//System::Object^::ToString by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x7822"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x7822",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->M_x2();                                        //call				Reflector::CodeModel::IMethodReference^ Root::T_x143::M_x2()
	IL_001d:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0022:            Temp_3=Temp_2->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0027:                                                                        //ldstr				L"\x7E22"
	IL_002c:                                                                        //ldloc				V_0
	IL_0030:            Temp_4=a(L"\x7E22",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0035:            Temp_5=System::String::Concat(Temp_0,Temp_3,Temp_4);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_003a:            return Temp_5;                                              //ret

}
inline System::Boolean Root::T_x143::M_x12(Reflector::CodeModel::IType^ A_0)
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
	System::Object^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	System::Collections::Hashtable^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::Object^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Collections::Hashtable^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::Boolean Temp_55 = false;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	System::String^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	System::String^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::String^ Temp_68 = nullptr;
	System::String^ Temp_69 = nullptr;
	System::String^ Temp_70 = nullptr;
	System::Object^ Temp_71 = nullptr;
	System::String^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::String^ Temp_74 = nullptr;
	System::String^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::String^ Temp_77 = nullptr;
	System::String^ Temp_78 = nullptr;
	System::String^ Temp_79 = nullptr;
	System::String^ Temp_80 = nullptr;
	System::Collections::Hashtable^ Temp_81 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_1 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	System::Object^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_7=3;                                                      //stloc				V_7
	IL_0009:                                                                        //ldc.i4				0x24
	IL_000e:            V_6=36;                                                     //stloc				V_6
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_012a;                                               //br				IL_012a
	IL_0019:                                                                        //ldloc				V_6
	IL_001d:            switch(V_6){case 0:goto IL_0228;case 1:goto IL_0940;case 2:goto IL_0630;case 3:goto IL_029d;case 4:goto IL_07a2;case 5:goto IL_0313;case 6:goto IL_08e5;case 7:goto IL_0581;case 8:goto IL_0a43;case 9:goto IL_073c;case 10:goto IL_0aee;case 11:goto IL_0842;case 12:goto IL_0975;case 13:goto IL_06fa;case 14:goto IL_032d;case 15:goto IL_0773;case 16:goto IL_023b;case 17:goto IL_09dd;case 18:goto IL_066e;case 19:goto IL_0963;case 20:goto IL_06a4;case 21:goto IL_09a1;case 22:goto IL_027a;case 23:goto IL_0157;case 24:goto IL_0144;case 25:goto IL_09f9;case 26:goto IL_0855;case 27:goto IL_0691;case 28:goto IL_0a0d;case 29:goto IL_0b11;case 30:goto IL_0657;case 31:goto IL_0ab2;case 32:goto IL_0a56;case 33:goto IL_056e;case 34:goto IL_017a;case 35:goto IL_08f8;case 36:goto IL_0014;case 37:goto IL_0822;case 38:goto IL_01e0;case 39:goto IL_0b47;case 40:goto IL_06c7;case 41:goto IL_092e;case 42:goto IL_070d;case 43:goto IL_090b;case 44:goto IL_0198;case 45:goto IL_0a20;case 46:goto IL_05e8;case 47:goto IL_01cd;case 48:goto IL_08d1;case 49:goto IL_05fb;case 50:goto IL_0a6a;case 51:goto IL_02f3;case 52:goto IL_0760;case 53:goto IL_0643;case 54:goto IL_0b24;case 55:goto IL_0a7f;case 56:goto IL_0a9f;case 57:goto IL_0ad2;case 58:goto IL_02de;case 59:goto IL_06d7;case 60:goto IL_0729;case 61:goto IL_0350;case 62:goto IL_01f3;case 63:goto IL_02bb;case 64:goto IL_09cc;case 65:goto IL_0267;};//switch				(IL_0228,IL_0940,IL_0630,IL_029d,IL_07a2,IL_0313,IL_08e5,IL_0581,IL_0a43,IL_073c,IL_0aee,IL_0842,IL_0975,IL_06fa,IL_032d,IL_0773,IL_023b,IL_09dd,IL_066e,IL_0963,IL_06a4,IL_09a1,IL_027a,IL_0157,IL_0144,IL_09f9,IL_0855,IL_0691,IL_0a0d,IL_0b11,IL_0657,IL_0ab2,IL_0a56,IL_056e,IL_017a,IL_08f8,IL_0014,IL_0822,IL_01e0,IL_0b47,IL_06c7,IL_092e,IL_070d,IL_090b,IL_0198,IL_0a20,IL_05e8,IL_01cd,IL_08d1,IL_05fb,IL_0a6a,IL_02f3,IL_0760,IL_0643,IL_0b24,IL_0a7f,IL_0a9f,IL_0ad2,IL_02de,IL_06d7,IL_0729,IL_0350,IL_01f3,IL_02bb,IL_09cc,IL_0267)
	IL_012a:                                                                        //volatile.
	IL_012c:            Temp_81=Root::T_x188::F_x56;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x56
	IL_0131:            if(Temp_81!=nullptr)goto IL_08bc;                           //brtrue				IL_08bc
	IL_0136:                                                                        //ldc.i4				0x18
	IL_013b:            V_6=24;                                                     //stloc				V_6
	IL_013f:            /*goto IL_0019;*/goto IL_0144;                              //br				IL_0019
	IL_0144:            goto IL_0355;                                               //br				IL_0355
	IL_0149:                                                                        //ldc.i4				0x17
	IL_014e:            V_6=23;                                                     //stloc				V_6
	IL_0152:            /*goto IL_0019;*/goto IL_0157;                              //br				IL_0019
	IL_0157:                                                                        //ldloc.s				V_5
	IL_0159:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0144\x2646\x3D48\x2A4A\x194C\x364E\x2150\x3652"
	IL_015e:                                                                        //ldloc				V_7
	IL_0162:            Temp_27=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0144\x2646\x3D48\x2A4A\x194C\x364E\x2150\x3652",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0167:            if(V_5==Temp_27)goto IL_0a6f;                               //beq				IL_0a6f
	IL_016c:                                                                        //ldc.i4				0x22
	IL_0171:            V_6=34;                                                     //stloc				V_6
	IL_0175:            /*goto IL_0019;*/goto IL_017a;                              //br				IL_0019
	IL_017a:                                                                        //ldc.i4.5
	IL_017b:                                                                        //dup
	IL_017c:                                                                        //dup
	IL_017d:                                                                        //ldc.i4.6
	IL_017e:                                                                        //sub
	IL_017f:                                                                        //blt				IL_017b
	IL_0184:                                                                        //pop
	IL_0185:            goto IL_0b16;                                               //br				IL_0b16
	IL_018a:                                                                        //ldc.i4				0x2c
	IL_018f:            V_6=44;                                                     //stloc				V_6
	IL_0193:            /*goto IL_0019;*/goto IL_0198;                              //br				IL_0019
	IL_0198:                                                                        //ldloc.0
	IL_0199:            Temp_60=V_0->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_019e:                                                                        //ldstr				L"\x0F20"
	IL_01a3:                                                                        //ldloc				V_7
	IL_01a7:            Temp_61=a(L"\x0F20",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ac:                                                                        //ldloc.0
	IL_01ad:            Temp_62=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_01b2:            Temp_63=System::String::Concat(Temp_60,Temp_61,Temp_62);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_01b7:                                                                        //dup
	IL_01b8:            V_5=Temp_63;                                                //stloc.s				V_5
	IL_01ba:            if(V_5==nullptr)goto IL_065e;                               //brfalse				IL_065e
	IL_01bf:                                                                        //ldc.i4				0x2f
	IL_01c4:            V_6=47;                                                     //stloc				V_6
	IL_01c8:            /*goto IL_0019;*/goto IL_01cd;                              //br				IL_0019
	IL_01cd:            goto IL_02a4;                                               //br				IL_02a4
	IL_01d2:                                                                        //ldc.i4				0x26
	IL_01d7:            V_6=38;                                                     //stloc				V_6
	IL_01db:            /*goto IL_0019;*/goto IL_01e0;                              //br				IL_0019
	IL_01e0:            goto IL_0809;                                               //br				IL_0809
	IL_01e5:                                                                        //ldc.i4				0x3e
	IL_01ea:            V_6=62;                                                     //stloc				V_6
	IL_01ee:            /*goto IL_0019;*/goto IL_01f3;                              //br				IL_0019
	IL_01f3:                                                                        //ldloc.0
	IL_01f4:            Temp_76=V_0->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_01f9:                                                                        //ldstr				L"\x0F20"
	IL_01fe:                                                                        //ldloc				V_7
	IL_0202:            Temp_77=a(L"\x0F20",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0207:                                                                        //ldloc.0
	IL_0208:            Temp_78=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_020d:            Temp_79=System::String::Concat(Temp_76,Temp_77,Temp_78);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0212:                                                                        //dup
	IL_0213:            V_5=Temp_79;                                                //stloc.s				V_5
	IL_0215:            if(V_5==nullptr)goto IL_02a2;                               //brfalse				IL_02a2
	IL_021a:                                                                        //ldc.i4				0x0
	IL_021f:            V_6=0;                                                      //stloc				V_6
	IL_0223:            /*goto IL_0019;*/goto IL_0228;                              //br				IL_0019
	IL_0228:            goto IL_0ad7;                                               //br				IL_0ad7
	IL_022d:                                                                        //ldc.i4				0x10
	IL_0232:            V_6=16;                                                     //stloc				V_6
	IL_0236:            /*goto IL_0019;*/goto IL_023b;                              //br				IL_0019
	IL_023b:                                                                        //ldloc.2
	IL_023c:            Temp_21=V_2->Name;                                          //callvirt				System::String^ Reflector::CodeModel::IModuleReference::get_Name()
	IL_0241:                                                                        //ldstr				L"\x6220\x4C22\x4824\x4A26\x4628\x452A\x612C\x4E2E\x5F30\x5432\x4034\x5636\x5E38\x5E3A\x6F3C\x4A3E\x2F40\x3742\x2C44\x2A46\x2C48\x074A\x244C\x2D4E\x2350\x3252\x2754\x2E56"
	IL_0246:                                                                        //ldloc				V_7
	IL_024a:            Temp_22=a(L"\x6220\x4C22\x4824\x4A26\x4628\x452A\x612C\x4E2E\x5F30\x5432\x4034\x5636\x5E38\x5E3A\x6F3C\x4A3E\x2F40\x3742\x2C44\x2A46\x2C48\x074A\x244C\x2D4E\x2350\x3252\x2754\x2E56",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024f:            Temp_23=(Temp_21 == Temp_22);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0254:            if(!Temp_23)goto IL_0635;                                   //brfalse				IL_0635
	IL_0259:                                                                        //ldc.i4				0x41
	IL_025e:            V_6=65;                                                     //stloc				V_6
	IL_0262:            /*goto IL_0019;*/goto IL_0267;                              //br				IL_0019
	IL_0267:            goto IL_05ed;                                               //br				IL_05ed
	IL_026c:                                                                        //ldc.i4				0x16
	IL_0271:            V_6=22;                                                     //stloc				V_6
	IL_0275:            /*goto IL_0019;*/goto IL_027a;                              //br				IL_0019
	IL_027a:                                                                        //ldloc.s				V_5
	IL_027c:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0E44\x2246\x3048\x0A4A\x2E4C\x2C4E\x3450\x2052\x2654"
	IL_0281:                                                                        //ldloc				V_7
	IL_0285:            Temp_26=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0E44\x2246\x3048\x0A4A\x2E4C\x2C4E\x3450\x2052\x2654",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028a:            if(V_5==Temp_26)goto IL_0a6f;                               //beq				IL_0a6f
	IL_028f:                                                                        //ldc.i4				0x3
	IL_0294:            V_6=3;                                                      //stloc				V_6
	IL_0298:            /*goto IL_0019;*/goto IL_029d;                              //br				IL_0019
	IL_029d:            goto IL_0149;                                               //br				IL_0149
	IL_02a2:                                                                        //ldc.i4.1
	IL_02a3:            return true;                                                //ret
	IL_02a4:                                                                        //ldloc.s				V_5
	IL_02a6:            Temp_65=System::String::IsInterned(V_5);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_02ab:            V_5=Temp_65;                                                //stloc.s				V_5
	IL_02ad:                                                                        //ldc.i4				0x3f
	IL_02b2:            V_6=63;                                                     //stloc				V_6
	IL_02b6:            /*goto IL_0019;*/goto IL_02bb;                              //br				IL_0019
	IL_02bb:                                                                        //ldloc.s				V_5
	IL_02bd:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7F36\x4D38\x4F3A\x4D3C\x7D3E\x2440\x2B42\x2444\x3146\x2048\x244A\x384C\x3D4E"
	IL_02c2:                                                                        //ldloc				V_7
	IL_02c6:            Temp_80=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7F36\x4D38\x4F3A\x4D3C\x7D3E\x2440\x2B42\x2444\x3146\x2048\x244A\x384C\x3D4E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02cb:            if(V_5==Temp_80)goto IL_0a6f;                               //beq				IL_0a6f
	IL_02d0:                                                                        //ldc.i4				0x3a
	IL_02d5:            V_6=58;                                                     //stloc				V_6
	IL_02d9:            /*goto IL_0019;*/goto IL_02de;                              //br				IL_0019
	IL_02de:            goto IL_0a71;                                               //br				IL_0a71
	IL_02e3:                                                                        //ldc.i4.0
	IL_02e4:            return false;                                               //ret
	IL_02e5:                                                                        //ldc.i4				0x33
	IL_02ea:            V_6=51;                                                     //stloc				V_6
	IL_02ee:            /*goto IL_0019;*/goto IL_02f3;                              //br				IL_0019
	IL_02f3:                                                                        //ldloc.s				V_5
	IL_02f5:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7636\x4D38\x4F3A\x4F3C\x563E\x2340\x3642\x3144\x2246\x1948\x394A\x224C\x3F4E\x3450\x2152\x2154\x3E56\x3C58\x285A"
	IL_02fa:                                                                        //ldloc				V_7
	IL_02fe:            Temp_70=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7636\x4D38\x4F3A\x4F3C\x563E\x2340\x3642\x3144\x2246\x1948\x394A\x224C\x3F4E\x3450\x2152\x2154\x3E56\x3C58\x285A",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0303:            if(V_5!=Temp_70)goto IL_02a2;                               //bne.un.s				IL_02a2
	IL_0305:                                                                        //ldc.i4				0x5
	IL_030a:            V_6=5;                                                      //stloc				V_6
	IL_030e:            /*goto IL_0019;*/goto IL_0313;                              //br				IL_0019
	IL_0313:            goto IL_065c;                                               //br				IL_065c
	IL_0318:                                                                        //ldloc.3
	IL_0319:            Temp_55=Root::T_x143::M_x12(safe_cast<Reflector::CodeModel::IType^>(V_3));//call				System::Boolean Root::T_x143::M_x12(Reflector::CodeModel::IType^)
	IL_031e:            return Temp_55;                                             //ret
	IL_031f:                                                                        //ldc.i4				0xe
	IL_0324:            V_6=14;                                                     //stloc				V_6
	IL_0328:            /*goto IL_0019;*/goto IL_032d;                              //br				IL_0019
	IL_032d:                                                                        //ldloc.s				V_5
	IL_032f:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x4330\x5232\x4234\x5E36\x5738\x5C3A"
	IL_0334:                                                                        //ldloc				V_7
	IL_0338:            Temp_18=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x4330\x5232\x4234\x5E36\x5738\x5C3A",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033d:            if(V_5==Temp_18)goto IL_0930;                               //beq				IL_0930
	IL_0342:                                                                        //ldc.i4				0x3d
	IL_0347:            V_6=61;                                                     //stloc				V_6
	IL_034b:            /*goto IL_0019;*/goto IL_0350;                              //br				IL_0019
	IL_0350:            goto IL_0a12;                                               //br				IL_0a12
	IL_0355:                                                                        //ldc.i4.s				38
	IL_0357:                                                                        //ldc.r4				0.5
	IL_035c:            Temp_28=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(38),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_0361:                                                                        //dup
	IL_0362:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x5430\x5532\x5934\x5236\x5A38\x4F3A\x543C\x503E\x2F40\x6D42\x0644\x2846\x3B48\x084A\x2C4C\x234E\x3D50\x3A52\x3B54\x3056\x1A58\x345A\x335C\x295E\x0460\x0D62\x1164\x0E66\x0668\x056A"
	IL_0367:                                                                        //ldloc				V_7
	IL_036b:            Temp_29=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x5430\x5532\x5934\x5236\x5A38\x4F3A\x543C\x503E\x2F40\x6D42\x0644\x2846\x3B48\x084A\x2C4C\x234E\x3D50\x3A52\x3B54\x3056\x1A58\x345A\x335C\x295E\x0460\x0D62\x1164\x0E66\x0668\x056A",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0370:                                                                        //ldc.i4.0
	IL_0371:                                                                        //box				System::Int32
	IL_0376:            Temp_28->Add(safe_cast<System::Object^>(Temp_29),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_037b:                                                                        //dup
	IL_037c:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x5430\x5532\x5934\x5236\x5A38\x4F3A\x543C\x503E\x2F40\x6D42\x0644\x2846\x3B48\x0E4A\x214C\x2A4E\x3C50\x3652\x3B54\x2356\x0D58\x225A\x2D5C\x3A5E"
	IL_0381:                                                                        //ldloc				V_7
	IL_0385:            Temp_30=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x5430\x5532\x5934\x5236\x5A38\x4F3A\x543C\x503E\x2F40\x6D42\x0644\x2846\x3B48\x0E4A\x214C\x2A4E\x3C50\x3652\x3B54\x2356\x0D58\x225A\x2D5C\x3A5E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_038a:                                                                        //ldc.i4.1
	IL_038b:                                                                        //box				System::Int32
	IL_0390:            Temp_28->Add(safe_cast<System::Object^>(Temp_30),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0395:                                                                        //dup
	IL_0396:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x5430\x5532\x5934\x5236\x5A38\x4F3A\x543C\x503E\x2F40\x6D42\x0844\x2346\x1A48\x224A\x2A4C\x0C4E\x3050\x3F52\x3954\x3E56\x3758\x3C5A\x1E5C\x305E\x0F60\x1562\x0064\x0966\x1D68\x026A\x026C\x016E"
	IL_039b:                                                                        //ldloc				V_7
	IL_039f:            Temp_31=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x5430\x5532\x5934\x5236\x5A38\x4F3A\x543C\x503E\x2F40\x6D42\x0844\x2346\x1A48\x224A\x2A4C\x0C4E\x3050\x3F52\x3954\x3E56\x3758\x3C5A\x1E5C\x305E\x0F60\x1562\x0064\x0966\x1D68\x026A\x026C\x016E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a4:                                                                        //ldc.i4.2
	IL_03a5:                                                                        //box				System::Int32
	IL_03aa:            Temp_28->Add(safe_cast<System::Object^>(Temp_31),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03af:                                                                        //dup
	IL_03b0:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x682E\x5D30\x5C32\x5734\x5636\x5538\x523A\x473C\x5E3E\x3540\x2A42\x2A44\x2946\x6748\x084A\x2C4C\x234E\x3450\x3D52\x3154\x3656\x2B58\x125A\x395C"
	IL_03b5:                                                                        //ldloc				V_7
	IL_03b9:            Temp_32=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x682E\x5D30\x5C32\x5734\x5636\x5538\x523A\x473C\x5E3E\x3540\x2A42\x2A44\x2946\x6748\x084A\x2C4C\x234E\x3450\x3D52\x3154\x3656\x2B58\x125A\x395C",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03be:                                                                        //ldc.i4.3
	IL_03bf:                                                                        //box				System::Int32
	IL_03c4:            Temp_28->Add(safe_cast<System::Object^>(Temp_32),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03c9:                                                                        //dup
	IL_03ca:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x0B5E\x3860\x3362\x2064\x2166\x2568\x2A6A\x2A6C\x3C6E"
	IL_03cf:                                                                        //ldloc				V_7
	IL_03d3:            Temp_33=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x0B5E\x3860\x3362\x2064\x2166\x2568\x2A6A\x2A6C\x3C6E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d8:                                                                        //ldc.i4.4
	IL_03d9:                                                                        //box				System::Int32
	IL_03de:            Temp_28->Add(safe_cast<System::Object^>(Temp_33),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03e3:                                                                        //dup
	IL_03e4:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x165E\x2560\x2F62\x2364\x2B66\x2868\x2C6A"
	IL_03e9:                                                                        //ldloc				V_7
	IL_03ed:            Temp_34=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x165E\x2560\x2F62\x2364\x2B66\x2868\x2C6A",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03f2:                                                                        //ldc.i4.5
	IL_03f3:                                                                        //box				System::Int32
	IL_03f8:            Temp_28->Add(safe_cast<System::Object^>(Temp_34),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03fd:                                                                        //dup
	IL_03fe:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x0F5E\x2060\x3162\x2464\x2A66\x2F68\x276A\x2C6C\x286E"
	IL_0403:                                                                        //ldloc				V_7
	IL_0407:            Temp_35=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x0F5E\x2060\x3162\x2464\x2A66\x2F68\x276A\x2C6C\x286E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_040c:                                                                        //ldc.i4.6
	IL_040d:                                                                        //box				System::Int32
	IL_0412:            Temp_28->Add(safe_cast<System::Object^>(Temp_35),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0417:                                                                        //dup
	IL_0418:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x195E\x3460\x2D62\x2664\x2166\x2568\x2A6A\x2A6C\x3C6E"
	IL_041d:                                                                        //ldloc				V_7
	IL_0421:            Temp_36=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x195E\x3460\x2D62\x2664\x2166\x2568\x2A6A\x2A6C\x3C6E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0426:                                                                        //ldc.i4.7
	IL_0427:                                                                        //box				System::Int32
	IL_042c:            Temp_28->Add(safe_cast<System::Object^>(Temp_36),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0431:                                                                        //dup
	IL_0432:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x095E\x2060\x3162\x2364\x2B66\x2868\x2C6A\x3E6C"
	IL_0437:                                                                        //ldloc				V_7
	IL_043b:            Temp_37=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x095E\x2060\x3162\x2364\x2B66\x2868\x2C6A\x3E6C",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0440:                                                                        //ldc.i4.8
	IL_0441:                                                                        //box				System::Int32
	IL_0446:            Temp_28->Add(safe_cast<System::Object^>(Temp_37),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_044b:                                                                        //dup
	IL_044c:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x135E\x2860\x2162\x2364\x2B66\x2868\x2C6A\x3E6C"
	IL_0451:                                                                        //ldloc				V_7
	IL_0455:            Temp_38=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x135E\x2860\x2162\x2364\x2B66\x2868\x2C6A\x3E6C",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_045a:                                                                        //ldc.i4.s				9
	IL_045c:                                                                        //box				System::Int32
	IL_0461:            Temp_28->Add(safe_cast<System::Object^>(Temp_38),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0466:                                                                        //dup
	IL_0467:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x2570\x2A72\x2574\x3276\x3F78\x377A\x3C7C\x387E\xD280"
	IL_046c:                                                                        //ldloc				V_7
	IL_0470:            Temp_39=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x2570\x2A72\x2574\x3276\x3F78\x377A\x3C7C\x387E\xD280",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0475:                                                                        //ldc.i4.s				10
	IL_0477:                                                                        //box				System::Int32
	IL_047c:            Temp_28->Add(safe_cast<System::Object^>(Temp_39),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0481:                                                                        //dup
	IL_0482:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x3870\x3772\x3974\x3176\x3578\x3A7A\x3A7C"
	IL_0487:                                                                        //ldloc				V_7
	IL_048b:            Temp_40=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x3870\x3772\x3974\x3176\x3578\x3A7A\x3A7C",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0490:                                                                        //ldc.i4.s				11
	IL_0492:                                                                        //box				System::Int32
	IL_0497:            Temp_28->Add(safe_cast<System::Object^>(Temp_40),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_049c:                                                                        //dup
	IL_049d:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x2170\x3272\x2774\x3676\x3478\x3D7A\x317C\x3E7E\xC680"
	IL_04a2:                                                                        //ldloc				V_7
	IL_04a6:            Temp_41=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x2170\x3272\x2774\x3676\x3478\x3D7A\x317C\x3E7E\xC680",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04ab:                                                                        //ldc.i4.s				12
	IL_04ad:                                                                        //box				System::Int32
	IL_04b2:            Temp_28->Add(safe_cast<System::Object^>(Temp_41),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04b7:                                                                        //dup
	IL_04b8:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x3770\x2672\x3B74\x3476\x3F78\x377A\x3C7C\x387E\xD280"
	IL_04bd:                                                                        //ldloc				V_7
	IL_04c1:            Temp_42=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x3770\x2672\x3B74\x3476\x3F78\x377A\x3C7C\x387E\xD280",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04c6:                                                                        //ldc.i4.s				13
	IL_04c8:                                                                        //box				System::Int32
	IL_04cd:            Temp_28->Add(safe_cast<System::Object^>(Temp_42),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04d2:                                                                        //dup
	IL_04d3:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x2770\x3272\x2774\x3176\x3578\x3A7A\x3A7C\x2C7E"
	IL_04d8:                                                                        //ldloc				V_7
	IL_04dc:            Temp_43=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x2770\x3272\x2774\x3176\x3578\x3A7A\x3A7C\x2C7E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04e1:                                                                        //ldc.i4.s				14
	IL_04e3:                                                                        //box				System::Int32
	IL_04e8:            Temp_28->Add(safe_cast<System::Object^>(Temp_43),safe_cast<System::Object^>(14));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04ed:                                                                        //dup
	IL_04ee:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x3D70\x3A72\x3774\x3176\x3578\x3A7A\x3A7C\x2C7E"
	IL_04f3:                                                                        //ldloc				V_7
	IL_04f7:            Temp_44=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A\x735C\x1C5E\x0E60\x0E62\x3164\x1E66\x1968\x0E6A\x1E6C\x416E\x3D70\x3A72\x3774\x3176\x3578\x3A7A\x3A7C\x2C7E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04fc:                                                                        //ldc.i4.s				15
	IL_04fe:                                                                        //box				System::Int32
	IL_0503:            Temp_28->Add(safe_cast<System::Object^>(Temp_44),safe_cast<System::Object^>(15));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0508:                                                                        //dup
	IL_0509:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x5430\x5032\x4034\x4536\x5038\x4F3A\x443C\x113E\x0040\x2042\x2644\x2246\x3A48\x384A\x0E4C\x204E\x3F50\x2752\x2754\x3856\x3558\x755A\x1C5C\x3C5E\x0460\x3762\x1C64\x1766\x0C68"
	IL_050e:                                                                        //ldloc				V_7
	IL_0512:            Temp_45=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x5430\x5032\x4034\x4536\x5038\x4F3A\x443C\x113E\x0040\x2042\x2644\x2246\x3A48\x384A\x0E4C\x204E\x3F50\x2752\x2754\x3856\x3558\x755A\x1C5C\x3C5E\x0460\x3762\x1C64\x1766\x0C68",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0517:                                                                        //ldc.i4.s				16
	IL_0519:                                                                        //box				System::Int32
	IL_051e:            Temp_28->Add(safe_cast<System::Object^>(Temp_45),safe_cast<System::Object^>(16));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0523:                                                                        //dup
	IL_0524:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x5430\x5032\x4034\x4536\x5038\x4F3A\x443C\x113E\x0040\x2042\x2644\x2246\x3A48\x384A\x0E4C\x204E\x3F50\x2752\x2754\x3856\x3558\x755A\x1C5C\x3C5E\x0460\x2562\x0964\x0666\x0E68\x186A"
	IL_0529:                                                                        //ldloc				V_7
	IL_052d:            Temp_46=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x5430\x5032\x4034\x4536\x5038\x4F3A\x443C\x113E\x0040\x2042\x2644\x2246\x3A48\x384A\x0E4C\x204E\x3F50\x2752\x2754\x3856\x3558\x755A\x1C5C\x3C5E\x0460\x2562\x0964\x0666\x0E68\x186A",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0532:                                                                        //ldc.i4.s				17
	IL_0534:                                                                        //box				System::Int32
	IL_0539:            Temp_28->Add(safe_cast<System::Object^>(Temp_46),safe_cast<System::Object^>(17));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_053e:                                                                        //dup
	IL_053f:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x5430\x5032\x4034\x4536\x5038\x4F3A\x443C\x113E\x1140\x3142\x2C44\x2946\x2A48\x224A\x3D4C\x2E4E\x3D50\x7D52\x1C54\x3356\x3C58\x355A\x295C\x365E\x0760\x0A62\x0064\x1566\x2868\x1E6A\x196C\x076E\x1E70\x0172\x1C74\x0376\x0078"
	IL_0544:                                                                        //ldloc				V_7
	IL_0548:            Temp_47=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x5430\x5032\x4034\x4536\x5038\x4F3A\x443C\x113E\x1140\x3142\x2C44\x2946\x2A48\x224A\x3D4C\x2E4E\x3D50\x7D52\x1C54\x3356\x3C58\x355A\x295C\x365E\x0760\x0A62\x0064\x1566\x2868\x1E6A\x196C\x076E\x1E70\x0172\x1C74\x0376\x0078",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_054d:                                                                        //ldc.i4.s				18
	IL_054f:                                                                        //box				System::Int32
	IL_0554:            Temp_28->Add(safe_cast<System::Object^>(Temp_47),safe_cast<System::Object^>(18));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0559:                                                                        //volatile.
	IL_055b:            Root::T_x188::F_x56=Temp_28;                                //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x56
	IL_0560:                                                                        //ldc.i4				0x21
	IL_0565:            V_6=33;                                                     //stloc				V_6
	IL_0569:            /*goto IL_0019;*/goto IL_056e;                              //br				IL_0019
	IL_056e:            goto IL_08bc;                                               //br				IL_08bc
	IL_0573:                                                                        //ldc.i4				0x7
	IL_0578:            V_6=7;                                                      //stloc				V_6
	IL_057c:            /*goto IL_0019;*/goto IL_0581;                              //br				IL_0019
	IL_0581:                                                                        //ldloc.s				V_4
	IL_0583:                                                                        //unbox				System::Int32
	IL_0588:                                                                        //ldind.i4
	IL_0589:            switch(safe_cast<System::Int32>(V_4)){case 0:goto IL_02e3;case 1:goto IL_02e3;case 2:goto IL_02e3;case 3:goto IL_02e3;case 4:goto IL_02e3;case 5:goto IL_02e3;case 6:goto IL_02e3;case 7:goto IL_02e3;case 8:goto IL_02e3;case 9:goto IL_02e3;case 10:goto IL_02e3;case 11:goto IL_02e3;case 12:goto IL_02e3;case 13:goto IL_02e3;case 14:goto IL_02e3;case 15:goto IL_02e3;case 16:goto IL_02e3;case 17:goto IL_02e3;case 18:goto IL_02e3;};//switch				(IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3,IL_02e3)
	IL_05da:                                                                        //ldc.i4				0x2e
	IL_05df:            V_6=46;                                                     //stloc				V_6
	IL_05e3:            /*goto IL_0019;*/goto IL_05e8;                              //br				IL_0019
	IL_05e8:            goto IL_01d2;                                               //br				IL_01d2
	IL_05ed:                                                                        //ldc.i4				0x31
	IL_05f2:            V_6=49;                                                     //stloc				V_6
	IL_05f6:            /*goto IL_0019;*/goto IL_05fb;                              //br				IL_0019
	IL_05fb:                                                                        //ldloc.0
	IL_05fc:            Temp_66=V_0->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0601:                                                                        //ldstr				L"\x0F20"
	IL_0606:                                                                        //ldloc				V_7
	IL_060a:            Temp_67=a(L"\x0F20",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_060f:                                                                        //ldloc.0
	IL_0610:            Temp_68=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0615:            Temp_69=System::String::Concat(Temp_66,Temp_67,Temp_68);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_061a:                                                                        //dup
	IL_061b:            V_4=safe_cast<System::Object^>(Temp_69);                    //stloc.s				V_4
	IL_061d:            if(Temp_69==nullptr)goto IL_0809;                           //brfalse				IL_0809
	IL_0622:                                                                        //ldc.i4				0x2
	IL_0627:            V_6=2;                                                      //stloc				V_6
	IL_062b:            /*goto IL_0019;*/goto IL_0630;                              //br				IL_0019
	IL_0630:            goto IL_072e;                                               //br				IL_072e
	IL_0635:                                                                        //ldc.i4				0x35
	IL_063a:            V_6=53;                                                     //stloc				V_6
	IL_063e:            /*goto IL_0019;*/goto IL_0643;                              //br				IL_0019
	IL_0643:                                                                        //ldloc.1
	IL_0644:            if(V_1==nullptr)goto IL_09df;                               //brfalse				IL_09df
	IL_0649:                                                                        //ldc.i4				0x1e
	IL_064e:            V_6=30;                                                     //stloc				V_6
	IL_0652:            /*goto IL_0019;*/goto IL_0657;                              //br				IL_0019
	IL_0657:            goto IL_0794;                                               //br				IL_0794
	IL_065c:                                                                        //ldc.i4.0
	IL_065d:            return false;                                               //ret
	IL_065e:                                                                        //ldc.i4.1
	IL_065f:            return true;                                                //ret
	IL_0660:                                                                        //ldc.i4				0x12
	IL_0665:            V_6=18;                                                     //stloc				V_6
	IL_0669:            /*goto IL_0019;*/goto IL_066e;                              //br				IL_0019
	IL_066e:                                                                        //ldloc.s				V_5
	IL_0670:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x5030\x4732\x5434"
	IL_0675:                                                                        //ldloc				V_7
	IL_0679:            Temp_24=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x5030\x4732\x5434",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_067e:            if(V_5==Temp_24)goto IL_0930;                               //beq				IL_0930
	IL_0683:                                                                        //ldc.i4				0x1b
	IL_0688:            V_6=27;                                                     //stloc				V_6
	IL_068c:            /*goto IL_0019;*/goto IL_0691;                              //br				IL_0019
	IL_0691:            goto IL_031f;                                               //br				IL_031f
	IL_0696:                                                                        //ldc.i4				0x14
	IL_069b:            V_6=20;                                                     //stloc				V_6
	IL_069f:            /*goto IL_0019;*/goto IL_06a4;                              //br				IL_0019
	IL_06a4:                                                                        //ldloc.s				V_5
	IL_06a6:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6C2E\x5E30\x5D32\x5334\x5E36\x5E38\x4E3A\x4F3C\x5E3E\x3540\x2A42\x2A44\x2946"
	IL_06ab:                                                                        //ldloc				V_7
	IL_06af:            Temp_25=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6C2E\x5E30\x5D32\x5334\x5E36\x5E38\x4E3A\x4F3C\x5E3E\x3540\x2A42\x2A44\x2946",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06b4:            if(V_5==Temp_25)goto IL_0930;                               //beq				IL_0930
	IL_06b9:                                                                        //ldc.i4				0x28
	IL_06be:            V_6=40;                                                     //stloc				V_6
	IL_06c2:            /*goto IL_0019;*/goto IL_06c7;                              //br				IL_0019
	IL_06c7:            goto IL_0660;                                               //br.s				IL_0660
	IL_06c9:                                                                        //ldc.i4				0x3b
	IL_06ce:            V_6=59;                                                     //stloc				V_6
	IL_06d2:            /*goto IL_0019;*/goto IL_06d7;                              //br				IL_0019
	IL_06d7:                                                                        //ldloc.s				V_5
	IL_06d9:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7136\x4D38\x4B3A\x713C\x503E\x2640\x2A42\x2B44\x1446\x3D48\x2A4A\x394C\x2A4E"
	IL_06de:                                                                        //ldloc				V_7
	IL_06e2:            Temp_74=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7136\x4D38\x4B3A\x713C\x503E\x2640\x2A42\x2B44\x1446\x3D48\x2A4A\x394C\x2A4E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06e7:            if(V_5==Temp_74)goto IL_0a6f;                               //beq				IL_0a6f
	IL_06ec:                                                                        //ldc.i4				0xd
	IL_06f1:            V_6=13;                                                     //stloc				V_6
	IL_06f5:            /*goto IL_0019;*/goto IL_06fa;                              //br				IL_0019
	IL_06fa:            goto IL_0aa4;                                               //br				IL_0aa4
	IL_06ff:                                                                        //ldc.i4				0x2a
	IL_0704:            V_6=42;                                                     //stloc				V_6
	IL_0708:            /*goto IL_0019;*/goto IL_070d;                              //br				IL_0019
	IL_070d:                                                                        //ldloc.1
	IL_070e:            Temp_58=V_1->Name;                                          //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0713:                                                                        //dup
	IL_0714:            V_5=Temp_58;                                                //stloc.s				V_5
	IL_0716:            if(V_5==nullptr)goto IL_0965;                               //brfalse				IL_0965
	IL_071b:                                                                        //ldc.i4				0x3c
	IL_0720:            V_6=60;                                                     //stloc				V_6
	IL_0724:            /*goto IL_0019;*/goto IL_0729;                              //br				IL_0019
	IL_0729:            goto IL_080b;                                               //br				IL_080b
	IL_072e:                                                                        //ldc.i4				0x9
	IL_0733:            V_6=9;                                                      //stloc				V_6
	IL_0737:            /*goto IL_0019;*/goto IL_073c;                              //br				IL_0019
	IL_073c:                                                                        //volatile.
	IL_073e:            Temp_11=Root::T_x188::F_x56;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x56
	IL_0743:            Temp_13=V_4;                                                //ldloc.s				V_4
	IL_0745:            Temp_12=Temp_11[Temp_13];                                   //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_074a:                                                                        //dup
	IL_074b:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_074d:            if(V_4==nullptr)goto IL_0809;                               //brfalse				IL_0809
	IL_0752:                                                                        //ldc.i4				0x34
	IL_0757:            V_6=52;                                                     //stloc				V_6
	IL_075b:            /*goto IL_0019;*/goto IL_0760;                              //br				IL_0019
	IL_0760:            goto IL_0573;                                               //br				IL_0573
	IL_0765:                                                                        //ldc.i4				0xf
	IL_076a:            V_6=15;                                                     //stloc				V_6
	IL_076e:            /*goto IL_0019;*/goto IL_0773;                              //br				IL_0019
	IL_0773:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7236\x5538\x5E3A\x503C\x5A3E\x2F40\x3742\x1544\x3546\x2648\x3B4A\x284C\x3D4E\x2550\x3A52\x3054\x2456"
	IL_0778:                                                                        //ldloc				V_7
	IL_077c:            Temp_19=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7236\x5538\x5E3A\x503C\x5A3E\x2F40\x3742\x1544\x3546\x2648\x3B4A\x284C\x3D4E\x2550\x3A52\x3054\x2456",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0781:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7636\x4D38\x4F3A\x4F3C\x563E\x2340\x3642\x3144\x2246\x1948\x394A\x224C\x3F4E\x3450\x2152\x2154\x3E56\x3C58\x285A"
	IL_0786:                                                                        //ldloc				V_7
	IL_078a:            Temp_20=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7636\x4D38\x4F3A\x4F3C\x563E\x2340\x3642\x3144\x2246\x1948\x394A\x224C\x3F4E\x3450\x2152\x2154\x3E56\x3C58\x285A",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_078f:            goto IL_01e5;                                               //leave				IL_01e5
	IL_0794:                                                                        //ldc.i4				0x4
	IL_0799:            V_6=4;                                                      //stloc				V_6
	IL_079d:            /*goto IL_0019;*/goto IL_07a2;                              //br				IL_0019
	IL_07a2:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A"
	IL_07a7:                                                                        //ldloc				V_7
	IL_07ab:            Temp_2=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A",V_7);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07b0:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6C2E\x5E30\x5D32\x5334\x5E36\x5E38\x4E3A\x4F3C\x5E3E\x3540\x2A42\x2A44\x2946"
	IL_07b5:                                                                        //ldloc				V_7
	IL_07b9:            Temp_3=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6C2E\x5E30\x5D32\x5334\x5E36\x5E38\x4E3A\x4F3C\x5E3E\x3540\x2A42\x2A44\x2946",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07be:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x5030\x4732\x5434"
	IL_07c3:                                                                        //ldloc				V_7
	IL_07c7:            Temp_4=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x5030\x4732\x5434",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07cc:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x4330\x5232\x4234\x5E36\x5738\x5C3A"
	IL_07d1:                                                                        //ldloc				V_7
	IL_07d5:            Temp_5=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6B2E\x4330\x5232\x4234\x5E36\x5738\x5C3A",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07da:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5430\x5132"
	IL_07df:                                                                        //ldloc				V_7
	IL_07e3:            Temp_6=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5430\x5132",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07e8:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5830\x5D32\x5134\x5836\x4E38\x483A\x133C\x793E\x2E40\x3142\x2844\x3446"
	IL_07ed:                                                                        //ldloc				V_7
	IL_07f1:            Temp_7=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5830\x5D32\x5134\x5836\x4E38\x483A\x133C\x793E\x2E40\x3142\x2844\x3446",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07f6:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32"
	IL_07fb:                                                                        //ldloc				V_7
	IL_07ff:            Temp_8=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0804:            goto IL_06ff;                                               //leave				IL_06ff
	IL_0809:                                                                        //ldc.i4.1
	IL_080a:            return true;                                                //ret
	IL_080b:                                                                        //ldloc.s				V_5
	IL_080d:            Temp_75=System::String::IsInterned(V_5);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_0812:            V_5=Temp_75;                                                //stloc.s				V_5
	IL_0814:                                                                        //ldc.i4				0x25
	IL_0819:            V_6=37;                                                     //stloc				V_6
	IL_081d:            /*goto IL_0019;*/goto IL_0822;                              //br				IL_0019
	IL_0822:                                                                        //ldloc.s				V_5
	IL_0824:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A"
	IL_0829:                                                                        //ldloc				V_7
	IL_082d:            Temp_57=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0832:            if(V_5==Temp_57)goto IL_0847;                               //beq.s				IL_0847
	IL_0834:                                                                        //ldc.i4				0xb
	IL_0839:            V_6=11;                                                     //stloc				V_6
	IL_083d:            /*goto IL_0019;*/goto IL_0842;                              //br				IL_0019
	IL_0842:            goto IL_0696;                                               //br				IL_0696
	IL_0847:                                                                        //ldc.i4				0x1a
	IL_084c:            V_6=26;                                                     //stloc				V_6
	IL_0850:            /*goto IL_0019;*/goto IL_0855;                              //br				IL_0019
	IL_0855:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7F36\x4D38\x4F3A\x4D3C\x7D3E\x2440\x2B42\x2444\x3146\x2048\x244A\x384C\x3D4E"
	IL_085a:                                                                        //ldloc				V_7
	IL_085e:            Temp_48=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7F36\x4D38\x4F3A\x4D3C\x7D3E\x2440\x2B42\x2444\x3146\x2048\x244A\x384C\x3D4E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0863:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6036\x5C38\x593A\x753C\x5A3E\x2040\x2742\x2044\x3546\x0A48\x244A\x214C\x234E\x3450\x3052\x2154\x3E56\x3658\x355A\x095C\x265E\x1160\x0662"
	IL_0868:                                                                        //ldloc				V_7
	IL_086c:            Temp_49=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6036\x5C38\x593A\x753C\x5A3E\x2040\x2742\x2044\x3546\x0A48\x244A\x214C\x234E\x3450\x3052\x2154\x3E56\x3658\x355A\x095C\x265E\x1160\x0662",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0871:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7136\x4D38\x4B3A\x713C\x503E\x2640\x2A42\x2B44\x1446\x3D48\x2A4A\x394C\x2A4E"
	IL_0876:                                                                        //ldloc				V_7
	IL_087a:            Temp_50=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7136\x4D38\x4B3A\x713C\x503E\x2640\x2A42\x2B44\x1446\x3D48\x2A4A\x394C\x2A4E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_087f:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6436\x5638\x583A\x563C\x5A3E\x3540\x3042\x6B44\x0E46\x0648\x084A\x224C\x214E\x2550\x2152\x3A54\x3B56\x1A58\x345A\x395C\x3A5E"
	IL_0884:                                                                        //ldloc				V_7
	IL_0888:            Temp_51=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6436\x5638\x583A\x563C\x5A3E\x3540\x3042\x6B44\x0E46\x0648\x084A\x224C\x214E\x2550\x2152\x3A54\x3B56\x1A58\x345A\x395C\x3A5E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_088d:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0E44\x2246\x3048\x0A4A\x2E4C\x2C4E\x3450\x2052\x2654"
	IL_0892:                                                                        //ldloc				V_7
	IL_0896:            Temp_52=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0E44\x2246\x3048\x0A4A\x2E4C\x2C4E\x3450\x2052\x2654",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_089b:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0144\x2646\x3D48\x2A4A\x194C\x364E\x2150\x3652"
	IL_08a0:                                                                        //ldloc				V_7
	IL_08a4:            Temp_53=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x0144\x2646\x3D48\x2A4A\x194C\x364E\x2150\x3652",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08a9:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x1044\x3446\x2C48\x394A\x194C\x364E\x2150\x3652"
	IL_08ae:                                                                        //ldloc				V_7
	IL_08b2:            Temp_54=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x1044\x3446\x2C48\x394A\x194C\x364E\x2150\x3652",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08b7:            goto IL_018a;                                               //leave				IL_018a
	IL_08bc:                                                                        //ldarg.0
	IL_08bd:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_08c2:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_08c3:                                                                        //ldc.i4				0x30
	IL_08c8:            V_6=48;                                                     //stloc				V_6
	IL_08cc:            /*goto IL_0019;*/goto IL_08d1;                              //br				IL_0019
	IL_08d1:                                                                        //ldloc.0
	IL_08d2:            if(V_0==nullptr)goto IL_0b4c;                               //brfalse				IL_0b4c
	IL_08d7:                                                                        //ldc.i4				0x6
	IL_08dc:            V_6=6;                                                      //stloc				V_6
	IL_08e0:            /*goto IL_0019;*/goto IL_08e5;                              //br				IL_0019
	IL_08e5:            goto IL_09a6;                                               //br				IL_09a6
	IL_08ea:                                                                        //ldc.i4				0x23
	IL_08ef:            V_6=35;                                                     //stloc				V_6
	IL_08f3:            /*goto IL_0019;*/goto IL_08f8;                              //br				IL_0019
	IL_08f8:            goto IL_0965;                                               //br				IL_0965
	IL_08fd:                                                                        //ldc.i4				0x2b
	IL_0902:            V_6=43;                                                     //stloc				V_6
	IL_0906:            /*goto IL_0019;*/goto IL_090b;                              //br				IL_0019
	IL_090b:                                                                        //ldloc.s				V_5
	IL_090d:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5830\x5D32\x5134\x5836\x4E38\x483A\x133C\x793E\x2E40\x3142\x2844\x3446"
	IL_0912:                                                                        //ldloc				V_7
	IL_0916:            Temp_59=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5830\x5D32\x5134\x5836\x4E38\x483A\x133C\x793E\x2E40\x3142\x2844\x3446",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_091b:            if(V_5==Temp_59)goto IL_0930;                               //beq				IL_0930
	IL_0920:                                                                        //ldc.i4				0x29
	IL_0925:            V_6=41;                                                     //stloc				V_6
	IL_0929:            /*goto IL_0019;*/goto IL_092e;                              //br				IL_0019
	IL_092e:            goto IL_0932;                                               //br.s				IL_0932
	IL_0930:                                                                        //ldc.i4.1
	IL_0931:            return true;                                                //ret
	IL_0932:                                                                        //ldc.i4				0x1
	IL_0937:            V_6=1;                                                      //stloc				V_6
	IL_093b:            /*goto IL_0019;*/goto IL_0940;                              //br				IL_0019
	IL_0940:                                                                        //ldloc.s				V_5
	IL_0942:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32"
	IL_0947:                                                                        //ldloc				V_7
	IL_094b:            Temp_1=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0950:            if(V_5==Temp_1)goto IL_0765;                                //beq				IL_0765
	IL_0955:                                                                        //ldc.i4				0x13
	IL_095a:            V_6=19;                                                     //stloc				V_6
	IL_095e:            /*goto IL_0019;*/goto IL_0963;                              //br				IL_0019
	IL_0963:            goto IL_08ea;                                               //br.s				IL_08ea
	IL_0965:                                                                        //ldc.i4.0
	IL_0966:            return false;                                               //ret
	IL_0967:                                                                        //ldc.i4				0xc
	IL_096c:            V_6=12;                                                     //stloc				V_6
	IL_0970:            /*goto IL_0019;*/goto IL_0975;                              //br				IL_0019
	IL_0975:                                                                        //ldloc.1
	IL_0976:            Temp_15=V_1->Name;                                          //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_097b:                                                                        //ldstr				L"\x4C20\x5022\x4624\x4826\x5B28\x472A\x442C\x4D2E"
	IL_0980:                                                                        //ldloc				V_7
	IL_0984:            Temp_16=a(L"\x4C20\x5022\x4624\x4826\x5B28\x472A\x442C\x4D2E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0989:            Temp_17=(Temp_15 == Temp_16);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_098e:            if(Temp_17)goto IL_05ed;                                    //brtrue				IL_05ed
	IL_0993:                                                                        //ldc.i4				0x15
	IL_0998:            V_6=21;                                                     //stloc				V_6
	IL_099c:            /*goto IL_0019;*/goto IL_09a1;                              //br				IL_0019
	IL_09a1:            goto IL_0a48;                                               //br				IL_0a48
	IL_09a6:                                                                        //ldloc.0
	IL_09a7:            Temp_9=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_09ac:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_09b1:            V_1=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_9);//stloc.1
	IL_09b2:                                                                        //ldloc.0
	IL_09b3:            Temp_10=V_0->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_09b8:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_09bd:            V_2=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_10);//stloc.2
	IL_09be:                                                                        //ldc.i4				0x40
	IL_09c3:            V_6=64;                                                     //stloc				V_6
	IL_09c7:            /*goto IL_0019;*/goto IL_09cc;                              //br				IL_0019
	IL_09cc:                                                                        //ldloc.1
	IL_09cd:            if(V_1==nullptr)goto IL_0a48;                               //brfalse.s				IL_0a48
	IL_09cf:                                                                        //ldc.i4				0x11
	IL_09d4:            V_6=17;                                                     //stloc				V_6
	IL_09d8:            /*goto IL_0019;*/goto IL_09dd;                              //br				IL_0019
	IL_09dd:            goto IL_0967;                                               //br.s				IL_0967
	IL_09df:                                                                        //ldloc.0
	IL_09e0:            Temp_71=V_0->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_09e5:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_09ea:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_71);//stloc.3
	IL_09eb:                                                                        //ldc.i4				0x19
	IL_09f0:            V_6=25;                                                     //stloc				V_6
	IL_09f4:            /*goto IL_0019;*/goto IL_09f9;                              //br				IL_0019
	IL_09f9:                                                                        //ldloc.3
	IL_09fa:            if(V_3==nullptr)goto IL_0b4c;                               //brfalse				IL_0b4c
	IL_09ff:                                                                        //ldc.i4				0x1c
	IL_0a04:            V_6=28;                                                     //stloc				V_6
	IL_0a08:            /*goto IL_0019;*/goto IL_0a0d;                              //br				IL_0019
	IL_0a0d:            goto IL_0318;                                               //br				IL_0318
	IL_0a12:                                                                        //ldc.i4				0x2d
	IL_0a17:            V_6=45;                                                     //stloc				V_6
	IL_0a1b:            /*goto IL_0019;*/goto IL_0a20;                              //br				IL_0019
	IL_0a20:                                                                        //ldloc.s				V_5
	IL_0a22:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5430\x5132"
	IL_0a27:                                                                        //ldloc				V_7
	IL_0a2b:            Temp_64=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x782E\x5430\x5132",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a30:            if(V_5==Temp_64)goto IL_0930;                               //beq				IL_0930
	IL_0a35:                                                                        //ldc.i4				0x8
	IL_0a3a:            V_6=8;                                                      //stloc				V_6
	IL_0a3e:            /*goto IL_0019;*/goto IL_0a43;                              //br				IL_0019
	IL_0a43:            goto IL_08fd;                                               //br				IL_08fd
	IL_0a48:                                                                        //ldc.i4				0x20
	IL_0a4d:            V_6=32;                                                     //stloc				V_6
	IL_0a51:            /*goto IL_0019;*/goto IL_0a56;                              //br				IL_0019
	IL_0a56:                                                                        //ldloc.2
	IL_0a57:            if(V_2==nullptr)goto IL_0635;                               //brfalse				IL_0635
	IL_0a5c:                                                                        //ldc.i4				0x32
	IL_0a61:            V_6=50;                                                     //stloc				V_6
	IL_0a65:            /*goto IL_0019;*/goto IL_0a6a;                              //br				IL_0019
	IL_0a6a:            goto IL_022d;                                               //br				IL_022d
	IL_0a6f:                                                                        //ldc.i4.0
	IL_0a70:            return false;                                               //ret
	IL_0a71:                                                                        //ldc.i4				0x37
	IL_0a76:            V_6=55;                                                     //stloc				V_6
	IL_0a7a:            /*goto IL_0019;*/goto IL_0a7f;                              //br				IL_0019
	IL_0a7f:                                                                        //ldloc.s				V_5
	IL_0a81:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6036\x5C38\x593A\x753C\x5A3E\x2040\x2742\x2044\x3546\x0A48\x244A\x214C\x234E\x3450\x3052\x2154\x3E56\x3658\x355A\x095C\x265E\x1160\x0662"
	IL_0a86:                                                                        //ldloc				V_7
	IL_0a8a:            Temp_73=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6036\x5C38\x593A\x753C\x5A3E\x2040\x2742\x2044\x3546\x0A48\x244A\x214C\x234E\x3450\x3052\x2154\x3E56\x3658\x355A\x095C\x265E\x1160\x0662",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a8f:            if(V_5==Temp_73)goto IL_0a6f;                               //beq.s				IL_0a6f
	IL_0a91:                                                                        //ldc.i4				0x38
	IL_0a96:            V_6=56;                                                     //stloc				V_6
	IL_0a9a:            /*goto IL_0019;*/goto IL_0a9f;                              //br				IL_0019
	IL_0a9f:            goto IL_06c9;                                               //br				IL_06c9
	IL_0aa4:                                                                        //ldc.i4				0x1f
	IL_0aa9:            V_6=31;                                                     //stloc				V_6
	IL_0aad:            /*goto IL_0019;*/goto IL_0ab2;                              //br				IL_0019
	IL_0ab2:                                                                        //ldloc.s				V_5
	IL_0ab4:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6436\x5638\x583A\x563C\x5A3E\x3540\x3042\x6B44\x0E46\x0648\x084A\x224C\x214E\x2550\x2152\x3A54\x3B56\x1A58\x345A\x395C\x3A5E"
	IL_0ab9:                                                                        //ldloc				V_7
	IL_0abd:            Temp_56=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x6436\x5638\x583A\x563C\x5A3E\x3540\x3042\x6B44\x0E46\x0648\x084A\x224C\x214E\x2550\x2152\x3A54\x3B56\x1A58\x345A\x395C\x3A5E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ac2:            if(V_5==Temp_56)goto IL_0a6f;                               //beq.s				IL_0a6f
	IL_0ac4:                                                                        //ldc.i4				0x39
	IL_0ac9:            V_6=57;                                                     //stloc				V_6
	IL_0acd:            /*goto IL_0019;*/goto IL_0ad2;                              //br				IL_0019
	IL_0ad2:            goto IL_026c;                                               //br				IL_026c
	IL_0ad7:                                                                        //ldloc.s				V_5
	IL_0ad9:            Temp_0=System::String::IsInterned(V_5);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0ade:            V_5=Temp_0;                                                 //stloc.s				V_5
	IL_0ae0:                                                                        //ldc.i4				0xa
	IL_0ae5:            V_6=10;                                                     //stloc				V_6
	IL_0ae9:            /*goto IL_0019;*/goto IL_0aee;                              //br				IL_0019
	IL_0aee:                                                                        //ldloc.s				V_5
	IL_0af0:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7236\x5538\x5E3A\x503C\x5A3E\x2F40\x3742\x1544\x3546\x2648\x3B4A\x284C\x3D4E\x2550\x3A52\x3054\x2456"
	IL_0af5:                                                                        //ldloc				V_7
	IL_0af9:            Temp_14=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x772E\x5C30\x5F32\x1B34\x7236\x5538\x5E3A\x503C\x5A3E\x2F40\x3742\x1544\x3546\x2648\x3B4A\x284C\x3D4E\x2550\x3A52\x3054\x2456",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0afe:            if(V_5==Temp_14)goto IL_065c;                               //beq				IL_065c
	IL_0b03:                                                                        //ldc.i4				0x1d
	IL_0b08:            V_6=29;                                                     //stloc				V_6
	IL_0b0c:            /*goto IL_0019;*/goto IL_0b11;                              //br				IL_0019
	IL_0b11:            goto IL_02e5;                                               //br				IL_02e5
	IL_0b16:                                                                        //ldc.i4				0x36
	IL_0b1b:            V_6=54;                                                     //stloc				V_6
	IL_0b1f:            /*goto IL_0019;*/goto IL_0b24;                              //br				IL_0019
	IL_0b24:                                                                        //ldloc.s				V_5
	IL_0b26:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x1044\x3446\x2C48\x394A\x194C\x364E\x2150\x3652"
	IL_0b2b:                                                                        //ldloc				V_7
	IL_0b2f:            Temp_72=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x612E\x5430\x4732\x1B34\x7A36\x5838\x523A\x513C\x113E\x0C40\x0142\x1044\x3446\x2C48\x394A\x194C\x364E\x2150\x3652",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b34:            if(V_5!=Temp_72)goto IL_065e;                               //bne.un				IL_065e
	IL_0b39:                                                                        //ldc.i4				0x27
	IL_0b3e:            V_6=39;                                                     //stloc				V_6
	IL_0b42:            /*goto IL_0019;*/goto IL_0b47;                              //br				IL_0019
	IL_0b47:            goto IL_0a6f;                                               //br				IL_0a6f
	IL_0b4c:                                                                        //ldc.i4.0
	IL_0b4d:            return false;                                               //ret

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x143::M_x2()
//Reflector::CodeModel::ICustomAttribute^::get_Constructor by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x143 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IType^ Root::T_x143::M_x2(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IRequiredModifier^ V_0 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_003e;case 1:goto IL_0030;case 2:goto IL_006d;case 3:goto IL_005f;};//switch				(IL_003e,IL_0030,IL_006d,IL_005f)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldarg.1
	IL_001f:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_0024:            V_0=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.0
	IL_0025:                                                                        //ldc.i4				0x1
	IL_002a:            V_2=1;                                                      //stloc				V_2
	IL_002e:            /*goto IL_0002;*/goto IL_0030;                              //br.s				IL_0002
	IL_0030:                                                                        //ldloc.0
	IL_0031:            if(V_0==nullptr)goto IL_004d;                               //brfalse.s				IL_004d
	IL_0033:                                                                        //ldc.i4				0x0
	IL_0038:            V_2=0;                                                      //stloc				V_2
	IL_003c:            /*goto IL_0002;*/goto IL_003e;                              //br.s				IL_0002
	IL_003e:            goto IL_006f;                                               //br.s				IL_006f
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldloc.1
	IL_0042:            Temp_2=V_1->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_0047:            Temp_3=this->M_x2(Temp_2);                                  //call				Reflector::CodeModel::IType^ Root::T_x143::M_x2(Reflector::CodeModel::IType^)
	IL_004c:            return Temp_3;                                              //ret
	IL_004d:                                                                        //ldarg.1
	IL_004e:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_0053:            V_1=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.1
	IL_0054:                                                                        //ldc.i4				0x3
	IL_0059:            V_2=3;                                                      //stloc				V_2
	IL_005d:            /*goto IL_0002;*/goto IL_005f;                              //br.s				IL_0002
	IL_005f:                                                                        //ldloc.1
	IL_0060:            if(V_1==nullptr)goto IL_007c;                               //brfalse.s				IL_007c
	IL_0062:                                                                        //ldc.i4				0x2
	IL_0067:            V_2=2;                                                      //stloc				V_2
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:            goto IL_0040;                                               //br.s				IL_0040
	IL_006f:                                                                        //ldarg.0
	IL_0070:                                                                        //ldloc.0
	IL_0071:            Temp_0=V_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_0076:            Temp_1=this->M_x2(Temp_0);                                  //call				Reflector::CodeModel::IType^ Root::T_x143::M_x2(Reflector::CodeModel::IType^)
	IL_007b:            return Temp_1;                                              //ret
	IL_007c:                                                                        //ldarg.1
	IL_007d:            return A_0;                                                 //ret

}
