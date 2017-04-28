#include "global_xref.h"

inline Root::T_x116::T_x116()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Root::T_x116::M_x1(Reflector::CodeModel::IFieldReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Boolean Temp_3 = false;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	Reflector::CodeModel::IType^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0026;                                               //br.s				IL_0026
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_006e;case 1:goto IL_007c;case 2:goto IL_0053;case 3:goto IL_003f;};//switch				(IL_006e,IL_007c,IL_0053,IL_003f)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_0=A_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_002c:            V_0=Temp_0;                                                 //stloc.0
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0033:            V_1=Temp_1;                                                 //stloc.1
	IL_0034:                                                                        //ldc.i4				0x3
	IL_0039:            V_3=3;                                                      //stloc				V_3
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:                                                                        //ldloc.0
	IL_0040:                                                                        //ldloc.1
	IL_0041:            Temp_3=V_0->Equals(safe_cast<System::Object^>(V_1));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0046:            if(!Temp_3)goto IL_007e;                                    //brfalse.s				IL_007e
	IL_0048:                                                                        //ldc.i4				0x2
	IL_004d:            V_3=2;                                                      //stloc				V_3
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_005c;                                               //br.s				IL_005c
	IL_0055:                                                                        //ldloc.2
	IL_0056:            Temp_2=Root::T_x115::M_x1(V_2);                             //call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_005b:            return Temp_2;                                              //ret
	IL_005c:                                                                        //ldloc.0
	IL_005d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0062:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(V_0);//stloc.2
	IL_0063:                                                                        //ldc.i4				0x0
	IL_0068:            V_3=0;                                                      //stloc				V_3
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:                                                                        //ldloc.2
	IL_006f:            if(V_2==nullptr)goto IL_007e;                               //brfalse.s				IL_007e
	IL_0071:                                                                        //ldc.i4				0x1
	IL_0076:            V_3=1;                                                      //stloc				V_3
	IL_007a:            /*goto IL_0002;*/goto IL_007c;                              //br.s				IL_0002
	IL_007c:            goto IL_0055;                                               //br.s				IL_0055
	IL_007e:                                                                        //ldc.i4.0
	IL_007f:            return false;                                               //ret

}
inline System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_003d;case 1:goto IL_0061;case 2:goto IL_0074;case 3:goto IL_004b;};//switch				(IL_003d,IL_0061,IL_0074,IL_004b)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_0=A_0->DeclaringType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_002c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0031:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_0032:                                                                        //ldc.i4				0x0
	IL_0037:            V_2=0;                                                      //stloc				V_2
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:                                                                        //ldloc.0
	IL_003e:            if(V_0==nullptr)goto IL_0076;                               //brfalse.s				IL_0076
	IL_0040:                                                                        //ldc.i4				0x3
	IL_0045:            V_2=3;                                                      //stloc				V_2
	IL_0049:            /*goto IL_000d;*/goto IL_004b;                              //br.s				IL_000d
	IL_004b:            goto IL_004f;                                               //br.s				IL_004f
	IL_004d:                                                                        //ldloc.1
	IL_004e:            return V_1;                                                 //ret
	IL_004f:                                                                        //ldloc.0
	IL_0050:            Temp_3=Root::T_x116::M_x1(V_0);                             //call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0055:            V_1=Temp_3;                                                 //stloc.1
	IL_0056:                                                                        //ldc.i4				0x1
	IL_005b:            V_2=1;                                                      //stloc				V_2
	IL_005f:            /*goto IL_000d;*/goto IL_0061;                              //br.s				IL_000d
	IL_0061:                                                                        //ldloc.1
	IL_0062:            Temp_2=Root::T_x116::T_x1::M_x12();                         //call				System::Int32 Root::T_x116::T_x1::M_x12()
	IL_0067:            if(V_1!=Temp_2)goto IL_0076;                                //bne.un.s				IL_0076
	IL_0069:                                                                        //ldc.i4				0x2
	IL_006e:            V_2=2;                                                      //stloc				V_2
	IL_0072:            /*goto IL_000d;*/goto IL_0074;                              //br.s				IL_000d
	IL_0074:            goto IL_004d;                                               //br.s				IL_004d
	IL_0076:                                                                        //ldarg.0
	IL_0077:            Temp_1=Root::T_x116::M_x2(A_0);                             //call				System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::IMemberReference^)
	IL_007c:            return Temp_1;                                              //ret

}
inline System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_006c;case 1:goto IL_0043;case 2:goto IL_0059;case 3:goto IL_0035;};//switch				(IL_006c,IL_0043,IL_0059,IL_0035)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0021:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0026:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_0027:            goto IL_002a;                                               //br.s				IL_002a
	IL_0029:                                                                        //break
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_2=3;                                                      //stloc				V_2
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:            if(V_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_0038:                                                                        //ldc.i4				0x1
	IL_003d:            V_2=1;                                                      //stloc				V_2
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:            goto IL_0047;                                               //br.s				IL_0047
	IL_0045:                                                                        //ldloc.1
	IL_0046:            return V_1;                                                 //ret
	IL_0047:                                                                        //ldloc.0
	IL_0048:            Temp_1=Root::T_x116::M_x1(V_0);                             //call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_004d:            V_1=Temp_1;                                                 //stloc.1
	IL_004e:                                                                        //ldc.i4				0x2
	IL_0053:            V_2=2;                                                      //stloc				V_2
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:                                                                        //ldloc.1
	IL_005a:            Temp_2=Root::T_x116::T_x1::M_x12();                         //call				System::Int32 Root::T_x116::T_x1::M_x12()
	IL_005f:            if(V_1!=Temp_2)goto IL_006e;                                //bne.un.s				IL_006e
	IL_0061:                                                                        //ldc.i4				0x0
	IL_0066:            V_2=0;                                                      //stloc				V_2
	IL_006a:            /*goto IL_0002;*/goto IL_006c;                              //br.s				IL_0002
	IL_006c:            goto IL_0045;                                               //br.s				IL_0045
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_3=Root::T_x116::M_x2(A_0);                             //call				System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0074:            return Temp_3;                                              //ret

}
inline System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_2 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IFieldDeclaration^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_5 = (Reflector::CodeModel::MethodVisibility)0;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::MethodVisibility Temp_7 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::FieldVisibility Temp_8 = (Reflector::CodeModel::FieldVisibility)0;
	Reflector::CodeModel::IMethodReference^ Temp_9 = nullptr;
	System::NotSupportedException^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::Boolean Temp_12 = false;
	Reflector::CodeModel::IMethodDeclaration^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::IType^ Temp_16 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Boolean Temp_19 = false;
	System::String^ Temp_20 = nullptr;
	System::Boolean Temp_21 = false;
	System::Boolean Temp_22 = false;
	System::Boolean Temp_23 = false;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_24 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_25 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_26 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IMethodReference^ V_3 = nullptr;
	Reflector::CodeModel::IArrayType^ V_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::String^ V_7 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_8 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_9 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_10 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_11 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_12 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	Reflector::CodeModel::IEventReference^ V_15 = nullptr;
	System::Int32 V_16 = 0;
	Reflector::CodeModel::FieldVisibility V_17 = (Reflector::CodeModel::FieldVisibility)0;
	Reflector::CodeModel::MethodVisibility V_18 = (Reflector::CodeModel::MethodVisibility)0;
	System::Int32 V_19 = 0;
	System::Int32 V_20 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_20=1;                                                     //stloc				V_20
	IL_0009:            goto IL_0137;                                               //br				IL_0137
	IL_000e:                                                                        //ldloc				V_19
	IL_0012:            switch(V_19){case 0:goto IL_074b;case 1:goto IL_0672;case 2:goto IL_029a;case 3:goto IL_06a5;case 4:goto IL_027e;case 5:goto IL_05dd;case 6:goto IL_0160;case 7:goto IL_0360;case 8:goto IL_01eb;case 9:goto IL_0303;case 10:goto IL_053b;case 11:goto IL_03d9;case 12:goto IL_06e0;case 13:goto IL_049b;case 14:goto IL_02ee;case 15:goto IL_05ac;case 16:goto IL_0328;case 17:goto IL_01b2;case 18:goto IL_0811;case 19:goto IL_083e;case 20:goto IL_0734;case 21:goto IL_058b;case 22:goto IL_061c;case 23:goto IL_077b;case 24:goto IL_05f0;case 25:goto IL_0485;case 26:goto IL_045f;case 27:goto IL_02ad;case 28:goto IL_0188;case 29:goto IL_041f;case 30:goto IL_071f;case 31:goto IL_03a6;case 32:goto IL_0236;case 33:goto IL_051b;case 34:goto IL_04b5;case 35:goto IL_024a;case 36:goto IL_06c6;case 37:goto IL_08b9;case 38:goto IL_0378;case 39:goto IL_0690;case 40:goto IL_019f;case 41:goto IL_02c7;case 42:goto IL_0269;case 43:goto IL_07fc;case 44:goto IL_08a0;case 45:goto IL_0447;case 46:goto IL_0641;case 47:goto IL_04c9;case 48:goto IL_03ec;case 49:goto IL_0434;case 50:goto IL_021c;case 51:goto IL_06fa;case 52:goto IL_0790;case 53:goto IL_0472;case 54:goto IL_0173;case 55:goto IL_0859;case 56:goto IL_0609;case 57:goto IL_0550;case 58:goto IL_0563;case 59:goto IL_01ca;case 60:goto IL_040c;case 61:goto IL_0313;case 62:goto IL_04e0;case 63:goto IL_07db;case 64:goto IL_088a;case 65:goto IL_07b3;case 66:goto IL_0824;case 67:goto IL_0504;case 68:goto IL_014c;case 69:goto IL_03c0;case 70:goto IL_0346;case 71:goto IL_038d;};//switch				(IL_074b,IL_0672,IL_029a,IL_06a5,IL_027e,IL_05dd,IL_0160,IL_0360,IL_01eb,IL_0303,IL_053b,IL_03d9,IL_06e0,IL_049b,IL_02ee,IL_05ac,IL_0328,IL_01b2,IL_0811,IL_083e,IL_0734,IL_058b,IL_061c,IL_077b,IL_05f0,IL_0485,IL_045f,IL_02ad,IL_0188,IL_041f,IL_071f,IL_03a6,IL_0236,IL_051b,IL_04b5,IL_024a,IL_06c6,IL_08b9,IL_0378,IL_0690,IL_019f,IL_02c7,IL_0269,IL_07fc,IL_08a0,IL_0447,IL_0641,IL_04c9,IL_03ec,IL_0434,IL_021c,IL_06fa,IL_0790,IL_0472,IL_0173,IL_0859,IL_0609,IL_0550,IL_0563,IL_01ca,IL_040c,IL_0313,IL_04e0,IL_07db,IL_088a,IL_07b3,IL_0824,IL_0504,IL_014c,IL_03c0,IL_0346,IL_038d)
	IL_0137:                                                                        //ldarg.0
	IL_0138:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_013d:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(A_0);//stloc.0
	IL_013e:                                                                        //ldc.i4				0x44
	IL_0143:            V_19=68;                                                    //stloc				V_19
	IL_0147:            /*goto IL_000e;*/goto IL_014c;                              //br				IL_000e
	IL_014c:                                                                        //ldloc.0
	IL_014d:            if(V_0==nullptr)goto IL_04a0;                               //brfalse				IL_04a0
	IL_0152:                                                                        //ldc.i4				0x6
	IL_0157:            V_19=6;                                                     //stloc				V_19
	IL_015b:            /*goto IL_000e;*/goto IL_0160;                              //br				IL_000e
	IL_0160:            goto IL_0221;                                               //br				IL_0221
	IL_0165:                                                                        //ldc.i4				0x36
	IL_016a:            V_19=54;                                                    //stloc				V_19
	IL_016e:            /*goto IL_000e;*/goto IL_0173;                              //br				IL_000e
	IL_0173:                                                                        //ldloc.s				V_13
	IL_0175:            if(V_13==nullptr)goto IL_0411;                              //brfalse				IL_0411
	IL_017a:                                                                        //ldc.i4				0x1c
	IL_017f:            V_19=28;                                                    //stloc				V_19
	IL_0183:            /*goto IL_000e;*/goto IL_0188;                              //br				IL_000e
	IL_0188:            goto IL_044d;                                               //br				IL_044d
	IL_018d:                                                                        //ldc.i4.s				103
	IL_018f:            V_14=103;                                                   //stloc.s				V_14
	IL_0191:                                                                        //ldc.i4				0x28
	IL_0196:            V_19=40;                                                    //stloc				V_19
	IL_019a:            /*goto IL_000e;*/goto IL_019f;                              //br				IL_000e
	IL_019f:            goto IL_0338;                                               //br				IL_0338
	IL_01a4:                                                                        //ldc.i4				0x11
	IL_01a9:            V_19=17;                                                    //stloc				V_19
	IL_01ad:            /*goto IL_000e;*/goto IL_01b2;                              //br				IL_000e
	IL_01b2:                                                                        //ldnull
	IL_01b3:            Temp_25=nullptr;goto IL_02da;                               //br				IL_02da
	IL_01b8:                                                                        //ldc.i4.s				49
	IL_01ba:            V_6=49;                                                     //stloc.s				V_6
	IL_01bc:                                                                        //ldc.i4				0x3b
	IL_01c1:            V_19=59;                                                    //stloc				V_19
	IL_01c5:            /*goto IL_000e;*/goto IL_01ca;                              //br				IL_000e
	IL_01ca:            goto IL_0816;                                               //br				IL_0816
	IL_01cf:                                                                        //ldloc.s				V_6
	IL_01d1:                                                                        //ldc.i4.4
	IL_01d2:                                                                        //add
	IL_01d3:            return (V_6 + 4);                                           //ret
	IL_01d4:                                                                        //ldloc.s				V_8
	IL_01d6:            Temp_5=Root::T_x115::M_x1(V_8);                             //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_01db:            V_18=Temp_5;                                                //stloc.s				V_18
	IL_01dd:                                                                        //ldc.i4				0x8
	IL_01e2:            V_19=8;                                                     //stloc				V_19
	IL_01e6:            /*goto IL_000e;*/goto IL_01eb;                              //br				IL_000e
	IL_01eb:                                                                        //ldloc.s				V_18
	IL_01ed:            switch(safe_cast<System::Int32>(V_18)){case 0:goto IL_02d5;case 1:goto IL_02d5;case 2:goto IL_0333;case 3:goto IL_0520;case 4:goto IL_08c3;case 5:goto IL_0625;case 6:goto IL_0392;};//switch				(IL_02d5,IL_02d5,IL_0333,IL_0520,IL_08c3,IL_0625,IL_0392)
	IL_020e:                                                                        //ldc.i4				0x32
	IL_0213:            V_19=50;                                                    //stloc				V_19
	IL_0217:            /*goto IL_000e;*/goto IL_021c;                              //br				IL_000e
	IL_021c:            goto IL_0464;                                               //br				IL_0464
	IL_0221:                                                                        //ldloc.0
	IL_0222:            Temp_3=V_0->Resolve();                                      //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldReference::Resolve()
	IL_0227:            V_1=Temp_3;                                                 //stloc.1
	IL_0228:                                                                        //ldc.i4				0x20
	IL_022d:            V_19=32;                                                    //stloc				V_19
	IL_0231:            /*goto IL_000e;*/goto IL_0236;                              //br				IL_000e
	IL_0236:                                                                        //ldloc.1
	IL_0237:            if(V_1!=nullptr)goto IL_088f;                               //brtrue				IL_088f
	IL_023c:                                                                        //ldc.i4				0x23
	IL_0241:            V_19=35;                                                    //stloc				V_19
	IL_0245:            /*goto IL_000e;*/goto IL_024a;                              //br				IL_000e
	IL_024a:            goto IL_024c;                                               //br.s				IL_024c
	IL_024c:                                                                        //ldc.i4				0xa6
	IL_0251:            return 166;                                                 //ret
	IL_0252:                                                                        //ldloc.s				V_9
	IL_0254:            Temp_9=V_9->GetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_0259:            V_10=Temp_9;                                                //stloc.s				V_10
	IL_025b:                                                                        //ldc.i4				0x2a
	IL_0260:            V_19=42;                                                    //stloc				V_19
	IL_0264:            /*goto IL_000e;*/goto IL_0269;                              //br				IL_000e
	IL_0269:                                                                        //ldloc.s				V_10
	IL_026b:            if(V_10==nullptr)goto IL_0439;                              //brfalse				IL_0439
	IL_0270:                                                                        //ldc.i4				0x4
	IL_0275:            V_19=4;                                                     //stloc				V_19
	IL_0279:            /*goto IL_000e;*/goto IL_027e;                              //br				IL_000e
	IL_027e:            goto IL_073d;                                               //br				IL_073d
	IL_0283:                                                                        //ldloc.s				V_6
	IL_0285:            return V_6;                                                 //ret
	IL_0286:                                                                        //ldloc.s				V_6
	IL_0288:                                                                        //ldc.i4.6
	IL_0289:                                                                        //add
	IL_028a:            V_6=(V_6 + 6);                                              //stloc.s				V_6
	IL_028c:                                                                        //ldc.i4				0x2
	IL_0291:            V_19=2;                                                     //stloc				V_19
	IL_0295:            /*goto IL_000e;*/goto IL_029a;                              //br				IL_000e
	IL_029a:            goto IL_0595;                                               //br				IL_0595
	IL_029f:                                                                        //ldc.i4				0x1b
	IL_02a4:            V_19=27;                                                    //stloc				V_19
	IL_02a8:            /*goto IL_000e;*/goto IL_02ad;                              //br				IL_000e
	IL_02ad:                                                                        //ldloc.s				V_5
	IL_02af:            Temp_12=V_5->Virtual;                                       //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Virtual()
	IL_02b4:            if(!Temp_12)goto IL_0816;                                   //brfalse				IL_0816
	IL_02b9:                                                                        //ldc.i4				0x29
	IL_02be:            V_19=41;                                                    //stloc				V_19
	IL_02c2:            /*goto IL_000e;*/goto IL_02c7;                              //br				IL_000e
	IL_02c7:            goto IL_0398;                                               //br				IL_0398
	IL_02cc:                                                                        //ldloc.s				V_6
	IL_02ce:                                                                        //ldc.i4.2
	IL_02cf:                                                                        //add
	IL_02d0:            return (V_6 + 2);                                           //ret
	IL_02d1:                                                                        //ldloc.2
	IL_02d2:                                                                        //ldc.i4.2
	IL_02d3:                                                                        //add
	IL_02d4:            return (V_2 + 2);                                           //ret
	IL_02d5:                                                                        //ldloc.s				V_14
	IL_02d7:                                                                        //ldc.i4.4
	IL_02d8:                                                                        //add
	IL_02d9:            return (V_14 + 4);                                          //ret
	IL_02da:            V_13=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_25);/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_13
	IL_02dc:                                                                        //ldc.i4.s				103
	IL_02de:            V_14=103;                                                   //stloc.s				V_14
	IL_02e0:                                                                        //ldc.i4				0xe
	IL_02e5:            V_19=14;                                                    //stloc				V_19
	IL_02e9:            /*goto IL_000e;*/goto IL_02ee;                              //br				IL_000e
	IL_02ee:                                                                        //ldloc.s				V_13
	IL_02f0:            if(V_13==nullptr)goto IL_0165;                              //brfalse				IL_0165
	IL_02f5:                                                                        //ldc.i4				0x9
	IL_02fa:            V_19=9;                                                     //stloc				V_19
	IL_02fe:            /*goto IL_000e;*/goto IL_0303;                              //br				IL_000e
	IL_0303:            goto IL_0305;                                               //br.s				IL_0305
	IL_0305:                                                                        //ldc.i4				0x3d
	IL_030a:            V_19=61;                                                    //stloc				V_19
	IL_030e:            /*goto IL_000e;*/goto IL_0313;                              //br				IL_000e
	IL_0313:                                                                        //ldloc.s				V_11
	IL_0315:            if(V_11==nullptr)goto IL_0165;                              //brfalse				IL_0165
	IL_031a:                                                                        //ldc.i4				0x10
	IL_031f:            V_19=16;                                                    //stloc				V_19
	IL_0323:            /*goto IL_000e;*/goto IL_0328;                              //br				IL_000e
	IL_0328:            goto IL_018d;                                               //br				IL_018d
	IL_032d:                                                                        //ldc.i4				0xa6
	IL_0332:            return 166;                                                 //ret
	IL_0333:                                                                        //ldloc.s				V_14
	IL_0335:                                                                        //ldc.i4.5
	IL_0336:                                                                        //add
	IL_0337:            return (V_14 + 5);                                          //ret
	IL_0338:                                                                        //ldc.i4				0x46
	IL_033d:            V_19=70;                                                    //stloc				V_19
	IL_0341:            /*goto IL_000e;*/goto IL_0346;                              //br				IL_000e
	IL_0346:                                                                        //ldloc.s				V_8
	IL_0348:            Temp_23=Root::T_x115::M_x2(V_8);                            //call				System::Boolean Root::T_x115::M_x2(Reflector::CodeModel::IPropertyReference^)
	IL_034d:            if(!Temp_23)goto IL_01d4;                                   //brfalse				IL_01d4
	IL_0352:                                                                        //ldc.i4				0x7
	IL_0357:            V_19=7;                                                     //stloc				V_19
	IL_035b:            /*goto IL_000e;*/goto IL_0360;                              //br				IL_000e
	IL_0360:            goto IL_03c5;                                               //br.s				IL_03c5
	IL_0362:                                                                        //ldarg.0
	IL_0363:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_0368:            V_8=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(A_0);//stloc.s				V_8
	IL_036a:                                                                        //ldc.i4				0x26
	IL_036f:            V_19=38;                                                    //stloc				V_19
	IL_0373:            /*goto IL_000e;*/goto IL_0378;                              //br				IL_000e
	IL_0378:                                                                        //ldloc.s				V_8
	IL_037a:            if(V_8==nullptr)goto IL_0765;                               //brfalse				IL_0765
	IL_037f:                                                                        //ldc.i4				0x47
	IL_0384:            V_19=71;                                                    //stloc				V_19
	IL_0388:            /*goto IL_000e;*/goto IL_038d;                              //br				IL_000e
	IL_038d:            goto IL_07e5;                                               //br				IL_07e5
	IL_0392:                                                                        //ldloc.s				V_14
	IL_0394:            return V_14;                                                //ret
	IL_0395:                                                                        //ldc.i4.s				61
	IL_0397:            return 61;                                                  //ret
	IL_0398:                                                                        //ldc.i4				0x1f
	IL_039d:            V_19=31;                                                    //stloc				V_19
	IL_03a1:            /*goto IL_000e;*/goto IL_03a6;                              //br				IL_000e
	IL_03a6:                                                                        //ldloc.s				V_5
	IL_03a8:            Temp_14=V_5->Abstract;                                      //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Abstract()
	IL_03ad:            if(Temp_14)goto IL_0816;                                    //brtrue				IL_0816
	IL_03b2:                                                                        //ldc.i4				0x45
	IL_03b7:            V_19=69;                                                    //stloc				V_19
	IL_03bb:            /*goto IL_000e;*/goto IL_03c0;                              //br				IL_000e
	IL_03c0:            goto IL_04ef;                                               //br				IL_04ef
	IL_03c5:                                                                        //ldloc.s				V_14
	IL_03c7:                                                                        //ldc.i4.6
	IL_03c8:                                                                        //add
	IL_03c9:            V_14=(V_14 + 6);                                            //stloc.s				V_14
	IL_03cb:                                                                        //ldc.i4				0xb
	IL_03d0:            V_19=11;                                                    //stloc				V_19
	IL_03d4:            /*goto IL_000e;*/goto IL_03d9;                              //br				IL_000e
	IL_03d9:            goto IL_01d4;                                               //br				IL_01d4
	IL_03de:                                                                        //ldc.i4				0x30
	IL_03e3:            V_19=48;                                                    //stloc				V_19
	IL_03e7:            /*goto IL_000e;*/goto IL_03ec;                              //br				IL_000e
	IL_03ec:                                                                        //ldloc.s				V_12
	IL_03ee:            Temp_17=V_12->Resolve();                                    //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_03f3:            Temp_25=Temp_17;goto IL_02da;                               //br				IL_02da
	IL_03f8:                                                                        //ldloc.s				V_16
	IL_03fa:                                                                        //ldc.i4.6
	IL_03fb:                                                                        //add
	IL_03fc:            V_16=(V_16 + 6);                                            //stloc.s				V_16
	IL_03fe:                                                                        //ldc.i4				0x3c
	IL_0403:            V_19=60;                                                    //stloc				V_19
	IL_0407:            /*goto IL_000e;*/goto IL_040c;                              //br				IL_000e
	IL_040c:            goto IL_062a;                                               //br				IL_062a
	IL_0411:                                                                        //ldc.i4				0x1d
	IL_0416:            V_19=29;                                                    //stloc				V_19
	IL_041a:            /*goto IL_000e;*/goto IL_041f;                              //br				IL_000e
	IL_041f:                                                                        //ldloc.s				V_11
	IL_0421:            if(V_11==nullptr)goto IL_0338;                              //brfalse				IL_0338
	IL_0426:                                                                        //ldc.i4				0x31
	IL_042b:            V_19=49;                                                    //stloc				V_19
	IL_042f:            /*goto IL_000e;*/goto IL_0434;                              //br				IL_000e
	IL_0434:            goto IL_04ce;                                               //br				IL_04ce
	IL_0439:                                                                        //ldc.i4				0x2d
	IL_043e:            V_19=45;                                                    //stloc				V_19
	IL_0442:            /*goto IL_000e;*/goto IL_0447;                              //br				IL_000e
	IL_0447:                                                                        //ldnull
	IL_0448:            Temp_26=nullptr;goto IL_0677;                               //br				IL_0677
	IL_044d:                                                                        //ldc.i4.s				127
	IL_044f:            V_14=127;                                                   //stloc.s				V_14
	IL_0451:                                                                        //ldc.i4				0x1a
	IL_0456:            V_19=26;                                                    //stloc				V_19
	IL_045a:            /*goto IL_000e;*/goto IL_045f;                              //br				IL_000e
	IL_045f:            goto IL_0338;                                               //br				IL_0338
	IL_0464:                                                                        //ldc.i4				0x35
	IL_0469:            V_19=53;                                                    //stloc				V_19
	IL_046d:            /*goto IL_000e;*/goto IL_0472;                              //br				IL_000e
	IL_0472:            goto IL_0765;                                               //br				IL_0765
	IL_0477:                                                                        //ldc.i4				0x19
	IL_047c:            V_19=25;                                                    //stloc				V_19
	IL_0480:            /*goto IL_000e;*/goto IL_0485;                              //br				IL_000e
	IL_0485:            goto IL_08ca;                                               //br				IL_08ca
	IL_048a:                                                                        //ldc.i4.s				97
	IL_048c:            V_2=97;                                                     //stloc.2
	IL_048d:                                                                        //ldc.i4				0xd
	IL_0492:            V_19=13;                                                    //stloc				V_19
	IL_0496:            /*goto IL_000e;*/goto IL_049b;                              //br				IL_000e
	IL_049b:            goto IL_0843;                                               //br				IL_0843
	IL_04a0:                                                                        //ldarg.0
	IL_04a1:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_04a6:            V_3=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.3
	IL_04a7:                                                                        //ldc.i4				0x22
	IL_04ac:            V_19=34;                                                    //stloc				V_19
	IL_04b0:            /*goto IL_000e;*/goto IL_04b5;                              //br				IL_000e
	IL_04b5:                                                                        //ldloc.3
	IL_04b6:            if(V_3==nullptr)goto IL_0362;                               //brfalse				IL_0362
	IL_04bb:                                                                        //ldc.i4				0x2f
	IL_04c0:            V_19=47;                                                    //stloc				V_19
	IL_04c4:            /*goto IL_000e;*/goto IL_04c9;                              //br				IL_000e
	IL_04c9:            goto IL_0704;                                               //br				IL_0704
	IL_04ce:                                                                        //ldc.i4.s				115
	IL_04d0:            V_14=115;                                                   //stloc.s				V_14
	IL_04d2:                                                                        //ldc.i4				0x3e
	IL_04d7:            V_19=62;                                                    //stloc				V_19
	IL_04db:            /*goto IL_000e;*/goto IL_04e0;                              //br				IL_000e
	IL_04e0:            goto IL_0338;                                               //br				IL_0338
	IL_04e5:                                                                        //ldloc.s				V_16
	IL_04e7:                                                                        //ldc.i4.2
	IL_04e8:                                                                        //add
	IL_04e9:            return (V_16 + 2);                                          //ret
	IL_04ea:                                                                        //ldloc.s				V_6
	IL_04ec:                                                                        //ldc.i4.1
	IL_04ed:                                                                        //add
	IL_04ee:            return (V_6 + 1);                                           //ret
	IL_04ef:                                                                        //ldloc.s				V_6
	IL_04f1:                                                                        //ldc.i4.s				12
	IL_04f3:                                                                        //add
	IL_04f4:            V_6=(V_6 + 12);                                             //stloc.s				V_6
	IL_04f6:                                                                        //ldc.i4				0x43
	IL_04fb:            V_19=67;                                                    //stloc				V_19
	IL_04ff:            /*goto IL_000e;*/goto IL_0504;                              //br				IL_000e
	IL_0504:            goto IL_0816;                                               //br				IL_0816
	IL_0509:                                                                        //ldloc.2
	IL_050a:                                                                        //ldc.i4.6
	IL_050b:                                                                        //add
	IL_050c:            V_2=(V_2 + 6);                                              //stloc.2
	IL_050d:                                                                        //ldc.i4				0x21
	IL_0512:            V_19=33;                                                    //stloc				V_19
	IL_0516:            /*goto IL_000e;*/goto IL_051b;                              //br				IL_000e
	IL_051b:            goto IL_0843;                                               //br				IL_0843
	IL_0520:                                                                        //ldloc.s				V_14
	IL_0522:                                                                        //ldc.i4.1
	IL_0523:                                                                        //add
	IL_0524:            return (V_14 + 1);                                          //ret
	IL_0525:                                                                        //ldloc.3
	IL_0526:            Temp_13=V_3->Resolve();                                     //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_052b:            V_5=Temp_13;                                                //stloc.s				V_5
	IL_052d:                                                                        //ldc.i4				0xa
	IL_0532:            V_19=10;                                                    //stloc				V_19
	IL_0536:            /*goto IL_000e;*/goto IL_053b;                              //br				IL_000e
	IL_053b:                                                                        //ldloc.s				V_5
	IL_053d:            if(V_5!=nullptr)goto IL_0799;                               //brtrue				IL_0799
	IL_0542:                                                                        //ldc.i4				0x39
	IL_0547:            V_19=57;                                                    //stloc				V_19
	IL_054b:            /*goto IL_000e;*/goto IL_0550;                              //br				IL_000e
	IL_0550:            goto IL_032d;                                               //br				IL_032d
	IL_0555:                                                                        //ldc.i4				0x3a
	IL_055a:            V_19=58;                                                    //stloc				V_19
	IL_055e:            /*goto IL_000e;*/goto IL_0563;                              //br				IL_000e
	IL_0563:                                                                        //ldloc.s				V_7
	IL_0565:                                                                        //ldstr				L"\x311E\x4220\x4022\x5124\x4826\x5B28"
	IL_056a:                                                                        //ldloc				V_20
	IL_056e:            Temp_18=a(L"\x311E\x4220\x4022\x5124\x4826\x5B28",V_20);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0573:            Temp_19=(V_7 == Temp_18);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0578:            if(!Temp_19)goto IL_029f;                                   //brfalse				IL_029f
	IL_057d:                                                                        //ldc.i4				0x15
	IL_0582:            V_19=21;                                                    //stloc				V_19
	IL_0586:            /*goto IL_000e;*/goto IL_058b;                              //br				IL_000e
	IL_058b:            goto IL_01b8;                                               //br				IL_01b8
	IL_0590:                                                                        //ldloc.s				V_16
	IL_0592:                                                                        //ldc.i4.5
	IL_0593:                                                                        //add
	IL_0594:            return (V_16 + 5);                                          //ret
	IL_0595:                                                                        //ldloc.s				V_5
	IL_0597:            Temp_2=V_5->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_059c:            V_18=Temp_2;                                                //stloc.s				V_18
	IL_059e:                                                                        //ldc.i4				0xf
	IL_05a3:            V_19=15;                                                    //stloc				V_19
	IL_05a7:            /*goto IL_000e;*/goto IL_05ac;                              //br				IL_000e
	IL_05ac:                                                                        //ldloc.s				V_18
	IL_05ae:            switch(safe_cast<System::Int32>(V_18)){case 0:goto IL_01cf;case 1:goto IL_01cf;case 2:goto IL_08be;case 3:goto IL_04ea;case 4:goto IL_06aa;case 5:goto IL_02cc;case 6:goto IL_0283;};//switch				(IL_01cf,IL_01cf,IL_08be,IL_04ea,IL_06aa,IL_02cc,IL_0283)
	IL_05cf:                                                                        //ldc.i4				0x5
	IL_05d4:            V_19=5;                                                     //stloc				V_19
	IL_05d8:            /*goto IL_000e;*/goto IL_05dd;                              //br				IL_000e
	IL_05dd:            goto IL_06b8;                                               //br				IL_06b8
	IL_05e2:                                                                        //ldc.i4				0x18
	IL_05e7:            V_19=24;                                                    //stloc				V_19
	IL_05eb:            /*goto IL_000e;*/goto IL_05f0;                              //br				IL_000e
	IL_05f0:                                                                        //ldloc.1
	IL_05f1:            Temp_11=V_1->Static;                                        //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_Static()
	IL_05f6:            if(!Temp_11)goto IL_0843;                                   //brfalse				IL_0843
	IL_05fb:                                                                        //ldc.i4				0x38
	IL_0600:            V_19=56;                                                    //stloc				V_19
	IL_0604:            /*goto IL_000e;*/goto IL_0609;                              //br				IL_000e
	IL_0609:            goto IL_0509;                                               //br				IL_0509
	IL_060e:                                                                        //ldc.i4				0x16
	IL_0613:            V_19=22;                                                    //stloc				V_19
	IL_0617:            /*goto IL_000e;*/goto IL_061c;                              //br				IL_000e
	IL_061c:            goto IL_04a0;                                               //br				IL_04a0
	IL_0621:                                                                        //ldloc.2
	IL_0622:                                                                        //ldc.i4.1
	IL_0623:                                                                        //add
	IL_0624:            return (V_2 + 1);                                           //ret
	IL_0625:                                                                        //ldloc.s				V_14
	IL_0627:                                                                        //ldc.i4.2
	IL_0628:                                                                        //add
	IL_0629:            return (V_14 + 2);                                          //ret
	IL_062a:                                                                        //ldloc.s				V_15
	IL_062c:            Temp_7=Root::T_x115::M_x2(V_15);                            //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x2(Reflector::CodeModel::IEventReference^)
	IL_0631:            V_18=Temp_7;                                                //stloc.s				V_18
	IL_0633:                                                                        //ldc.i4				0x2e
	IL_0638:            V_19=46;                                                    //stloc				V_19
	IL_063c:            /*goto IL_000e;*/goto IL_0641;                              //br				IL_000e
	IL_0641:                                                                        //ldloc.s				V_18
	IL_0643:            switch(safe_cast<System::Int32>(V_18)){case 0:goto IL_06ff;case 1:goto IL_06ff;case 2:goto IL_0590;case 3:goto IL_06af;case 4:goto IL_07e0;case 5:goto IL_04e5;case 6:goto IL_0762;};//switch				(IL_06ff,IL_06ff,IL_0590,IL_06af,IL_07e0,IL_04e5,IL_0762)
	IL_0664:                                                                        //ldc.i4				0x1
	IL_0669:            V_19=1;                                                     //stloc				V_19
	IL_066d:            /*goto IL_000e;*/goto IL_0672;                              //br				IL_000e
	IL_0672:            goto IL_0477;                                               //br				IL_0477
	IL_0677:            Temp_26=Temp_0;/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_11
	IL_0679:                                                                        //ldloc.s				V_9
	IL_067b:            Temp_1=V_9->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_0680:            V_12=Temp_1;                                                //stloc.s				V_12
	IL_0682:                                                                        //ldc.i4				0x27
	IL_0687:            V_19=39;                                                    //stloc				V_19
	IL_068b:            /*goto IL_000e;*/goto IL_0690;                              //br				IL_000e
	IL_0690:                                                                        //ldloc.s				V_12
	IL_0692:            if(V_12==nullptr)goto IL_01a4;                              //brfalse				IL_01a4
	IL_0697:                                                                        //ldc.i4				0x3
	IL_069c:            V_19=3;                                                     //stloc				V_19
	IL_06a0:            /*goto IL_000e;*/goto IL_06a5;                              //br				IL_000e
	IL_06a5:            goto IL_03de;                                               //br				IL_03de
	IL_06aa:                                                                        //ldloc.s				V_6
	IL_06ac:                                                                        //ldc.i4.3
	IL_06ad:                                                                        //add
	IL_06ae:            return (V_6 + 3);                                           //ret
	IL_06af:                                                                        //ldloc.s				V_16
	IL_06b1:                                                                        //ldc.i4.1
	IL_06b2:                                                                        //add
	IL_06b3:            return (V_16 + 1);                                          //ret
	IL_06b4:                                                                        //ldloc.2
	IL_06b5:                                                                        //ldc.i4.4
	IL_06b6:                                                                        //add
	IL_06b7:            return (V_2 + 4);                                           //ret
	IL_06b8:                                                                        //ldc.i4				0x24
	IL_06bd:            V_19=36;                                                    //stloc				V_19
	IL_06c1:            /*goto IL_000e;*/goto IL_06c6;                              //br				IL_000e
	IL_06c6:            goto IL_0362;                                               //br				IL_0362
	IL_06cb:                                                                        //ldc.i4				0x8b
	IL_06d0:            V_16=139;                                                   //stloc.s				V_16
	IL_06d2:                                                                        //ldc.i4				0xc
	IL_06d7:            V_19=12;                                                    //stloc				V_19
	IL_06db:            /*goto IL_000e;*/goto IL_06e0;                              //br				IL_000e
	IL_06e0:                                                                        //ldloc.s				V_15
	IL_06e2:            Temp_6=Root::T_x115::M_x1(V_15);                            //call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IEventReference^)
	IL_06e7:            if(!Temp_6)goto IL_062a;                                    //brfalse				IL_062a
	IL_06ec:                                                                        //ldc.i4				0x33
	IL_06f1:            V_19=51;                                                    //stloc				V_19
	IL_06f5:            /*goto IL_000e;*/goto IL_06fa;                              //br				IL_000e
	IL_06fa:            goto IL_03f8;                                               //br				IL_03f8
	IL_06ff:                                                                        //ldloc.s				V_16
	IL_0701:                                                                        //ldc.i4.4
	IL_0702:                                                                        //add
	IL_0703:            return (V_16 + 4);                                          //ret
	IL_0704:                                                                        //ldloc.3
	IL_0705:            Temp_16=safe_cast<Reflector::CodeModel::IMemberReference^>(V_3)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_070a:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_070f:            V_4=dynamic_cast<Reflector::CodeModel::IArrayType^>(Temp_16);//stloc.s				V_4
	IL_0711:                                                                        //ldc.i4				0x1e
	IL_0716:            V_19=30;                                                    //stloc				V_19
	IL_071a:            /*goto IL_000e;*/goto IL_071f;                              //br				IL_000e
	IL_071f:                                                                        //ldloc.s				V_4
	IL_0721:            if(V_4==nullptr)goto IL_0525;                               //brfalse				IL_0525
	IL_0726:                                                                        //ldc.i4				0x14
	IL_072b:            V_19=20;                                                    //stloc				V_19
	IL_072f:            /*goto IL_000e;*/goto IL_0734;                              //br				IL_000e
	IL_0734:            goto IL_0395;                                               //br				IL_0395
	IL_0739:                                                                        //ldloc.2
	IL_073a:                                                                        //ldc.i4.3
	IL_073b:                                                                        //add
	IL_073c:            return (V_2 + 3);                                           //ret
	IL_073d:                                                                        //ldc.i4				0x0
	IL_0742:            V_19=0;                                                     //stloc				V_19
	IL_0746:            /*goto IL_000e;*/goto IL_074b;                              //br				IL_000e
	IL_074b:                                                                        //ldc.i4.4
	IL_074c:                                                                        //dup
	IL_074d:                                                                        //dup
	IL_074e:                                                                        //ldc.i4.2
	IL_074f:                                                                        //sub
	IL_0750:                                                                        //blt				IL_074c
	IL_0755:                                                                        //pop
	IL_0756:                                                                        //ldloc.s				V_10
	IL_0758:            Temp_0=V_10->Resolve();                                     //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_075d:            goto IL_0677;                                               //br				IL_0677
	IL_0762:                                                                        //ldloc.s				V_16
	IL_0764:            return V_16;                                                //ret
	IL_0765:                                                                        //ldarg.0
	IL_0766:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_076b:            V_15=dynamic_cast<Reflector::CodeModel::IEventReference^>(A_0);//stloc.s				V_15
	IL_076d:                                                                        //ldc.i4				0x17
	IL_0772:            V_19=23;                                                    //stloc				V_19
	IL_0776:            /*goto IL_000e;*/goto IL_077b;                              //br				IL_000e
	IL_077b:                                                                        //ldloc.s				V_15
	IL_077d:            if(V_15==nullptr)goto IL_08ca;                              //brfalse				IL_08ca
	IL_0782:                                                                        //ldc.i4				0x34
	IL_0787:            V_19=52;                                                    //stloc				V_19
	IL_078b:            /*goto IL_000e;*/goto IL_0790;                              //br				IL_000e
	IL_0790:            goto IL_06cb;                                               //br				IL_06cb
	IL_0795:                                                                        //ldloc.2
	IL_0796:                                                                        //ldc.i4.5
	IL_0797:                                                                        //add
	IL_0798:            return (V_2 + 5);                                           //ret
	IL_0799:                                                                        //ldc.i4.s				61
	IL_079b:            V_6=61;                                                     //stloc.s				V_6
	IL_079d:                                                                        //ldloc.3
	IL_079e:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(V_3)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_07a3:            V_7=Temp_4;                                                 //stloc.s				V_7
	IL_07a5:                                                                        //ldc.i4				0x41
	IL_07aa:            V_19=65;                                                    //stloc				V_19
	IL_07ae:            /*goto IL_000e;*/goto IL_07b3;                              //br				IL_000e
	IL_07b3:                                                                        //ldloc.s				V_7
	IL_07b5:                                                                        //ldstr				L"\x311E\x4220\x5722\x4A24\x5526"
	IL_07ba:                                                                        //ldloc				V_20
	IL_07be:            Temp_20=a(L"\x311E\x4220\x5722\x4A24\x5526",V_20);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07c3:            Temp_21=(V_7 == Temp_20);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_07c8:            if(Temp_21)goto IL_01b8;                                    //brtrue				IL_01b8
	IL_07cd:                                                                        //ldc.i4				0x3f
	IL_07d2:            V_19=63;                                                    //stloc				V_19
	IL_07d6:            /*goto IL_000e;*/goto IL_07db;                              //br				IL_000e
	IL_07db:            goto IL_0555;                                               //br				IL_0555
	IL_07e0:                                                                        //ldloc.s				V_16
	IL_07e2:                                                                        //ldc.i4.3
	IL_07e3:                                                                        //add
	IL_07e4:            return (V_16 + 3);                                          //ret
	IL_07e5:                                                                        //ldloc.s				V_8
	IL_07e7:            Temp_24=V_8->Resolve();                                     //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyReference::Resolve()
	IL_07ec:            V_9=Temp_24;                                                //stloc.s				V_9
	IL_07ee:                                                                        //ldc.i4				0x2b
	IL_07f3:            V_19=43;                                                    //stloc				V_19
	IL_07f7:            /*goto IL_000e;*/goto IL_07fc;                              //br				IL_000e
	IL_07fc:                                                                        //ldloc.s				V_9
	IL_07fe:            if(V_9==nullptr)goto IL_0765;                               //brfalse				IL_0765
	IL_0803:                                                                        //ldc.i4				0x12
	IL_0808:            V_19=18;                                                    //stloc				V_19
	IL_080c:            /*goto IL_000e;*/goto IL_0811;                              //br				IL_000e
	IL_0811:            goto IL_0252;                                               //br				IL_0252
	IL_0816:                                                                        //ldc.i4				0x42
	IL_081b:            V_19=66;                                                    //stloc				V_19
	IL_081f:            /*goto IL_000e;*/goto IL_0824;                              //br				IL_000e
	IL_0824:                                                                        //ldloc.s				V_5
	IL_0826:            Temp_22=V_5->Static;                                        //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Static()
	IL_082b:            if(!Temp_22)goto IL_0595;                                   //brfalse				IL_0595
	IL_0830:                                                                        //ldc.i4				0x13
	IL_0835:            V_19=19;                                                    //stloc				V_19
	IL_0839:            /*goto IL_000e;*/goto IL_083e;                              //br				IL_000e
	IL_083e:            goto IL_0286;                                               //br				IL_0286
	IL_0843:                                                                        //ldloc.1
	IL_0844:            Temp_8=V_1->Visibility;                                     //callvirt				Reflector::CodeModel::FieldVisibility Reflector::CodeModel::IFieldDeclaration::get_Visibility()
	IL_0849:            V_17=Temp_8;                                                //stloc.s				V_17
	IL_084b:                                                                        //ldc.i4				0x37
	IL_0850:            V_19=55;                                                    //stloc				V_19
	IL_0854:            /*goto IL_000e;*/goto IL_0859;                              //br				IL_000e
	IL_0859:                                                                        //ldloc.s				V_17
	IL_085b:            switch(safe_cast<System::Int32>(V_17)){case 0:goto IL_06b4;case 1:goto IL_06b4;case 2:goto IL_0795;case 3:goto IL_0621;case 4:goto IL_0739;case 5:goto IL_02d1;case 6:goto IL_08c8;};//switch				(IL_06b4,IL_06b4,IL_0795,IL_0621,IL_0739,IL_02d1,IL_08c8)
	IL_087c:                                                                        //ldc.i4				0x40
	IL_0881:            V_19=64;                                                    //stloc				V_19
	IL_0885:            /*goto IL_000e;*/goto IL_088a;                              //br				IL_000e
	IL_088a:            goto IL_060e;                                               //br				IL_060e
	IL_088f:                                                                        //ldc.i4.s				85
	IL_0891:            V_2=85;                                                     //stloc.2
	IL_0892:                                                                        //ldc.i4				0x2c
	IL_0897:            V_19=44;                                                    //stloc				V_19
	IL_089b:            /*goto IL_000e;*/goto IL_08a0;                              //br				IL_000e
	IL_08a0:                                                                        //ldloc.0
	IL_08a1:            Temp_15=Root::T_x116::M_x1(V_0);                            //call				System::Boolean Root::T_x116::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_08a6:            if(!Temp_15)goto IL_05e2;                                   //brfalse				IL_05e2
	IL_08ab:                                                                        //ldc.i4				0x25
	IL_08b0:            V_19=37;                                                    //stloc				V_19
	IL_08b4:            /*goto IL_000e;*/goto IL_08b9;                              //br				IL_000e
	IL_08b9:            goto IL_048a;                                               //br				IL_048a
	IL_08be:                                                                        //ldloc.s				V_6
	IL_08c0:                                                                        //ldc.i4.5
	IL_08c1:                                                                        //add
	IL_08c2:            return (V_6 + 5);                                           //ret
	IL_08c3:                                                                        //ldloc.s				V_14
	IL_08c5:                                                                        //ldc.i4.3
	IL_08c6:                                                                        //add
	IL_08c7:            return (V_14 + 3);                                          //ret
	IL_08c8:                                                                        //ldloc.2
	IL_08c9:            return V_2;                                                 //ret
	IL_08ca:            Temp_10=gcnew System::NotSupportedException();              //newobj				void System::NotSupportedException::.ctor()
	IL_08cf:            throw Temp_10;                                              //throw

}
inline System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	System::NotSupportedException^ Temp_1 = nullptr;
	Reflector::CodeModel::TypeVisibility Temp_2 = (Reflector::CodeModel::TypeVisibility)0;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	System::Boolean Temp_7 = false;
	Reflector::CodeModel::ITypeReference^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::TypeVisibility V_3 = (Reflector::CodeModel::TypeVisibility)0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_005b;                                               //br.s				IL_005b
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_017c;case 1:goto IL_0135;case 2:goto IL_0105;case 3:goto IL_00bf;case 4:goto IL_007b;case 5:goto IL_0093;case 6:goto IL_01ac;case 7:goto IL_00d9;case 8:goto IL_01d8;case 9:goto IL_01bf;case 10:goto IL_0209;case 11:goto IL_01ee;case 12:goto IL_023d;case 13:goto IL_019b;case 14:goto IL_0166;case 15:goto IL_014b;case 16:goto IL_006d;case 17:goto IL_011c;case 18:goto IL_00a6;case 19:goto IL_00f2;};//switch				(IL_017c,IL_0135,IL_0105,IL_00bf,IL_007b,IL_0093,IL_01ac,IL_00d9,IL_01d8,IL_01bf,IL_0209,IL_01ee,IL_023d,IL_019b,IL_0166,IL_014b,IL_006d,IL_011c,IL_00a6,IL_00f2)
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0061:            V_0=Temp_0;                                                 //stloc.0
	IL_0062:                                                                        //ldc.i4				0x10
	IL_0067:            V_4=16;                                                     //stloc				V_4
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:                                                                        //ldloc.0
	IL_006e:            if(V_0!=nullptr)goto IL_00c5;                               //brtrue.s				IL_00c5
	IL_0070:                                                                        //ldc.i4				0x4
	IL_0075:            V_4=4;                                                      //stloc				V_4
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_017e;                                               //br				IL_017e
	IL_0080:                                                                        //ldloc.1
	IL_0081:            return V_1;                                                 //ret
	IL_0082:                                                                        //ldc.i4.s				31
	IL_0084:            V_1=31;                                                     //stloc.1
	IL_0085:                                                                        //ldc.i4				0x5
	IL_008a:            V_4=5;                                                      //stloc				V_4
	IL_008e:            /*goto IL_0002;*/goto IL_0093;                              //br				IL_0002
	IL_0093:            goto IL_01f4;                                               //br				IL_01f4
	IL_0098:                                                                        //ldc.i4				0x12
	IL_009d:            V_4=18;                                                     //stloc				V_4
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:                                                                        //ldloc.0
	IL_00a7:            Temp_7=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_00ac:            if(!Temp_7)goto IL_01b1;                                    //brfalse				IL_01b1
	IL_00b1:                                                                        //ldc.i4				0x3
	IL_00b6:            V_4=3;                                                      //stloc				V_4
	IL_00ba:            /*goto IL_0002;*/goto IL_00bf;                              //br				IL_0002
	IL_00bf:            goto IL_013a;                                               //br.s				IL_013a
	IL_00c1:                                                                        //ldloc.1
	IL_00c2:                                                                        //ldc.i4.3
	IL_00c3:                                                                        //add
	IL_00c4:            return (V_1 + 3);                                           //ret
	IL_00c5:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_00c7:                                                                        //break
	IL_00c8:                                                                        //ldc.i4.s				13
	IL_00ca:            V_1=13;                                                     //stloc.1
	IL_00cb:                                                                        //ldc.i4				0x7
	IL_00d0:            V_4=7;                                                      //stloc				V_4
	IL_00d4:            /*goto IL_0002;*/goto IL_00d9;                              //br				IL_0002
	IL_00d9:                                                                        //ldloc.0
	IL_00da:            Temp_3=V_0->Interface;                                      //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_Interface()
	IL_00df:            if(Temp_3)goto IL_01f4;                                     //brtrue				IL_01f4
	IL_00e4:                                                                        //ldc.i4				0x13
	IL_00e9:            V_4=19;                                                     //stloc				V_4
	IL_00ed:            /*goto IL_0002;*/goto IL_00f2;                              //br				IL_0002
	IL_00f2:            goto IL_0184;                                               //br				IL_0184
	IL_00f7:                                                                        //ldc.i4				0x2
	IL_00fc:            V_4=2;                                                      //stloc				V_4
	IL_0100:            /*goto IL_0002;*/goto IL_0105;                              //br				IL_0002
	IL_0105:            goto IL_0242;                                               //br				IL_0242
	IL_010a:                                                                        //ldloc.1
	IL_010b:                                                                        //ldc.i4.4
	IL_010c:                                                                        //add
	IL_010d:            return (V_1 + 4);                                           //ret
	IL_010e:                                                                        //ldc.i4				0x11
	IL_0113:            V_4=17;                                                     //stloc				V_4
	IL_0117:            /*goto IL_0002;*/goto IL_011c;                              //br				IL_0002
	IL_011c:                                                                        //ldloc.0
	IL_011d:            Temp_6=Root::T_x115::M_x2(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				System::Boolean Root::T_x115::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0122:            if(!Temp_6)goto IL_01f4;                                    //brfalse				IL_01f4
	IL_0127:                                                                        //ldc.i4				0x1
	IL_012c:            V_4=1;                                                      //stloc				V_4
	IL_0130:            /*goto IL_0002;*/goto IL_0135;                              //br				IL_0002
	IL_0135:            goto IL_0082;                                               //br				IL_0082
	IL_013a:                                                                        //ldc.i4.s				25
	IL_013c:            V_1=25;                                                     //stloc.1
	IL_013d:                                                                        //ldc.i4				0xf
	IL_0142:            V_4=15;                                                     //stloc				V_4
	IL_0146:            /*goto IL_0002;*/goto IL_014b;                              //br				IL_0002
	IL_014b:            goto IL_01f4;                                               //br				IL_01f4
	IL_0150:                                                                        //ldloc.1
	IL_0151:                                                                        //ldc.i4.2
	IL_0152:                                                                        //add
	IL_0153:            return (V_1 + 2);                                           //ret
	IL_0154:                                                                        //ldloc.1
	IL_0155:                                                                        //ldc.i4.5
	IL_0156:                                                                        //add
	IL_0157:            return (V_1 + 5);                                           //ret
	IL_0158:                                                                        //ldc.i4				0xe
	IL_015d:            V_4=14;                                                     //stloc				V_4
	IL_0161:            /*goto IL_0002;*/goto IL_0166;                              //br				IL_0002
	IL_0166:                                                                        //ldloc.0
	IL_0167:            Temp_5=V_0->Abstract;                                       //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_Abstract()
	IL_016c:            if(Temp_5)goto IL_010e;                                     //brtrue.s				IL_010e
	IL_016e:                                                                        //ldc.i4				0x0
	IL_0173:            V_4=0;                                                      //stloc				V_4
	IL_0177:            /*goto IL_0002;*/goto IL_017c;                              //br				IL_0002
	IL_017c:            goto IL_01dd;                                               //br.s				IL_01dd
	IL_017e:                                                                        //ldc.i4				0xa6
	IL_0183:            return 166;                                                 //ret
	IL_0184:                                                                        //ldc.i4.7
	IL_0185:            V_1=7;                                                      //stloc.1
	IL_0186:                                                                        //ldloc.0
	IL_0187:            Temp_8=V_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_018c:            V_2=Temp_8;                                                 //stloc.2
	IL_018d:                                                                        //ldc.i4				0xd
	IL_0192:            V_4=13;                                                     //stloc				V_4
	IL_0196:            /*goto IL_0002;*/goto IL_019b;                              //br				IL_0002
	IL_019b:                                                                        //ldloc.2
	IL_019c:            if(V_2==nullptr)goto IL_01f4;                               //brfalse.s				IL_01f4
	IL_019e:                                                                        //ldc.i4				0x6
	IL_01a3:            V_4=6;                                                      //stloc				V_4
	IL_01a7:            /*goto IL_0002;*/goto IL_01ac;                              //br				IL_0002
	IL_01ac:            goto IL_0098;                                               //br				IL_0098
	IL_01b1:                                                                        //ldc.i4				0x9
	IL_01b6:            V_4=9;                                                      //stloc				V_4
	IL_01ba:            /*goto IL_0002;*/goto IL_01bf;                              //br				IL_0002
	IL_01bf:                                                                        //ldloc.0
	IL_01c0:            Temp_4=Root::T_x115::M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				System::Boolean Root::T_x115::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_01c5:            if(!Temp_4)goto IL_010e;                                    //brfalse				IL_010e
	IL_01ca:                                                                        //ldc.i4				0x8
	IL_01cf:            V_4=8;                                                      //stloc				V_4
	IL_01d3:            /*goto IL_0002;*/goto IL_01d8;                              //br				IL_0002
	IL_01d8:            goto IL_0158;                                               //br				IL_0158
	IL_01dd:                                                                        //ldc.i4.s				19
	IL_01df:            V_1=19;                                                     //stloc.1
	IL_01e0:                                                                        //ldc.i4				0xb
	IL_01e5:            V_4=11;                                                     //stloc				V_4
	IL_01e9:            /*goto IL_0002;*/goto IL_01ee;                              //br				IL_0002
	IL_01ee:            goto IL_01f4;                                               //br.s				IL_01f4
	IL_01f0:                                                                        //ldloc.1
	IL_01f1:                                                                        //ldc.i4.1
	IL_01f2:                                                                        //add
	IL_01f3:            return (V_1 + 1);                                           //ret
	IL_01f4:                                                                        //ldloc.0
	IL_01f5:            Temp_2=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::TypeVisibility Reflector::CodeModel::ITypeDeclaration::get_Visibility()
	IL_01fa:            V_3=Temp_2;                                                 //stloc.3
	IL_01fb:                                                                        //ldc.i4				0xa
	IL_0200:            V_4=10;                                                     //stloc				V_4
	IL_0204:            /*goto IL_0002;*/goto IL_0209;                              //br				IL_0002
	IL_0209:                                                                        //ldloc.3
	IL_020a:            switch(safe_cast<System::Int32>(V_3)){case 0:goto IL_01f0;case 1:goto IL_0080;case 2:goto IL_0080;case 3:goto IL_010a;case 4:goto IL_00c1;case 5:goto IL_01f0;case 6:goto IL_0154;case 7:goto IL_0150;};//switch				(IL_01f0,IL_0080,IL_0080,IL_010a,IL_00c1,IL_01f0,IL_0154,IL_0150)
	IL_022f:                                                                        //ldc.i4				0xc
	IL_0234:            V_4=12;                                                     //stloc				V_4
	IL_0238:            /*goto IL_0002;*/goto IL_023d;                              //br				IL_0002
	IL_023d:            goto IL_00f7;                                               //br				IL_00f7
	IL_0242:            Temp_1=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0247:            throw Temp_1;                                               //throw

}
inline System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::IMemberReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::NotSupportedException^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::MethodVisibility Temp_5 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_6 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::FieldVisibility Temp_7 = (Reflector::CodeModel::FieldVisibility)0;
	System::Int32 Temp_8 = 0;
	Reflector::CodeModel::IFieldDeclaration^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	Reflector::CodeModel::MethodVisibility Temp_14 = (Reflector::CodeModel::MethodVisibility)0;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_18 = nullptr;
	Reflector::CodeModel::IType^ Temp_19 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_2 = nullptr;
	Reflector::CodeModel::IArrayType^ V_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_4 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_5 = nullptr;
	Reflector::CodeModel::IEventReference^ V_6 = nullptr;
	Reflector::CodeModel::FieldVisibility V_7 = (Reflector::CodeModel::FieldVisibility)0;
	Reflector::CodeModel::MethodVisibility V_8 = (Reflector::CodeModel::MethodVisibility)0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:            goto IL_0073;                                               //br.s				IL_0073
	IL_0002:                                                                        //ldloc				V_9
	IL_0006:            switch(V_9){case 0:goto IL_030f;case 1:goto IL_02de;case 2:goto IL_00af;case 3:goto IL_032a;case 4:goto IL_00d3;case 5:goto IL_0218;case 6:goto IL_0292;case 7:goto IL_019d;case 8:goto IL_0181;case 9:goto IL_0372;case 10:goto IL_00e8;case 11:goto IL_0239;case 12:goto IL_0265;case 13:goto IL_024e;case 14:goto IL_01b7;case 15:goto IL_009c;case 16:goto IL_0150;case 17:goto IL_02b6;case 18:goto IL_01e7;case 19:goto IL_033f;case 20:goto IL_0134;case 21:goto IL_0279;case 22:goto IL_0103;case 23:goto IL_0088;case 24:goto IL_035e;case 25:goto IL_01cb;};//switch				(IL_030f,IL_02de,IL_00af,IL_032a,IL_00d3,IL_0218,IL_0292,IL_019d,IL_0181,IL_0372,IL_00e8,IL_0239,IL_0265,IL_024e,IL_01b7,IL_009c,IL_0150,IL_02b6,IL_01e7,IL_033f,IL_0134,IL_0279,IL_0103,IL_0088,IL_035e,IL_01cb)
	IL_0073:                                                                        //ldarg.0
	IL_0074:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0079:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(A_0);//stloc.0
	IL_007a:                                                                        //ldc.i4				0x17
	IL_007f:            V_9=23;                                                     //stloc				V_9
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:                                                                        //ldloc.0
	IL_0089:            if(V_0==nullptr)goto IL_01a2;                               //brfalse				IL_01a2
	IL_008e:                                                                        //ldc.i4				0xf
	IL_0093:            V_9=15;                                                     //stloc				V_9
	IL_0097:            /*goto IL_0002;*/goto IL_009c;                              //br				IL_0002
	IL_009c:            goto IL_0250;                                               //br				IL_0250
	IL_00a1:                                                                        //ldc.i4				0x2
	IL_00a6:            V_9=2;                                                      //stloc				V_9
	IL_00aa:            /*goto IL_0002;*/goto IL_00af;                              //br				IL_0002
	IL_00af:            goto IL_00bd;                                               //br.s				IL_00bd
	IL_00b1:            Temp_0=Root::T_x116::T_x1::M_x12();                         //call				System::Int32 Root::T_x116::T_x1::M_x12()
	IL_00b6:            return Temp_0;                                              //ret
	IL_00b7:            Temp_16=Root::T_x116::T_x1::M_x12();                        //call				System::Int32 Root::T_x116::T_x1::M_x12()
	IL_00bc:            return Temp_16;                                             //ret
	IL_00bd:                                                                        //ldarg.0
	IL_00be:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_00c3:            V_6=dynamic_cast<Reflector::CodeModel::IEventReference^>(A_0);//stloc.s				V_6
	IL_00c5:                                                                        //ldc.i4				0x4
	IL_00ca:            V_9=4;                                                      //stloc				V_9
	IL_00ce:            /*goto IL_0002;*/goto IL_00d3;                              //br				IL_0002
	IL_00d3:                                                                        //ldloc.s				V_6
	IL_00d5:            if(V_6==nullptr)goto IL_0389;                               //brfalse				IL_0389
	IL_00da:                                                                        //ldc.i4				0xa
	IL_00df:            V_9=10;                                                     //stloc				V_9
	IL_00e3:            /*goto IL_0002;*/goto IL_00e8;                              //br				IL_0002
	IL_00e8:            goto IL_01d0;                                               //br				IL_01d0
	IL_00ed:                                                                        //ldloc.1
	IL_00ee:            Temp_7=V_1->Visibility;                                     //callvirt				Reflector::CodeModel::FieldVisibility Reflector::CodeModel::IFieldDeclaration::get_Visibility()
	IL_00f3:            V_7=Temp_7;                                                 //stloc.s				V_7
	IL_00f5:                                                                        //ldc.i4				0x16
	IL_00fa:            V_9=22;                                                     //stloc				V_9
	IL_00fe:            /*goto IL_0002;*/goto IL_0103;                              //br				IL_0002
	IL_0103:                                                                        //ldloc.s				V_7
	IL_0105:            switch(safe_cast<System::Int32>(V_7)){case 0:goto IL_00b7;case 1:goto IL_00b7;case 2:goto IL_00b7;case 3:goto IL_00b7;case 4:goto IL_027e;case 5:goto IL_027e;case 6:goto IL_027e;};//switch				(IL_00b7,IL_00b7,IL_00b7,IL_00b7,IL_027e,IL_027e,IL_027e)
	IL_0126:                                                                        //ldc.i4				0x14
	IL_012b:            V_9=20;                                                     //stloc				V_9
	IL_012f:            /*goto IL_0002;*/goto IL_0134;                              //br				IL_0002
	IL_0134:            goto IL_0284;                                               //br				IL_0284
	IL_0139:                                                                        //ldloc.s				V_5
	IL_013b:            Temp_14=Root::T_x115::M_x1(V_5);                            //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_0140:            V_8=Temp_14;                                                //stloc.s				V_8
	IL_0142:                                                                        //ldc.i4				0x10
	IL_0147:            V_9=16;                                                     //stloc				V_9
	IL_014b:            /*goto IL_0002;*/goto IL_0150;                              //br				IL_0002
	IL_0150:                                                                        //ldloc.s				V_8
	IL_0152:            switch(safe_cast<System::Int32>(V_8)){case 0:goto IL_02bb;case 1:goto IL_02bb;case 2:goto IL_02bb;case 3:goto IL_02bb;case 4:goto IL_037d;case 5:goto IL_037d;case 6:goto IL_037d;};//switch				(IL_02bb,IL_02bb,IL_02bb,IL_02bb,IL_037d,IL_037d,IL_037d)
	IL_0173:                                                                        //ldc.i4				0x8
	IL_0178:            V_9=8;                                                      //stloc				V_9
	IL_017c:            /*goto IL_0002;*/goto IL_0181;                              //br				IL_0002
	IL_0181:            goto IL_0184;                                               //br.s				IL_0184
	IL_0183:                                                                        //break
	IL_0184:            goto IL_00a1;                                               //br				IL_00a1
	IL_0189:            Temp_12=Root::T_x116::T_x1::M_x12();                        //call				System::Int32 Root::T_x116::T_x1::M_x12()
	IL_018e:            return Temp_12;                                             //ret
	IL_018f:                                                                        //ldc.i4				0x7
	IL_0194:            V_9=7;                                                      //stloc				V_9
	IL_0198:            /*goto IL_0002;*/goto IL_019d;                              //br				IL_0002
	IL_019d:            goto IL_0314;                                               //br				IL_0314
	IL_01a2:                                                                        //ldarg.0
	IL_01a3:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_01a8:            V_2=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.2
	IL_01a9:                                                                        //ldc.i4				0xe
	IL_01ae:            V_9=14;                                                     //stloc				V_9
	IL_01b2:            /*goto IL_0002;*/goto IL_01b7;                              //br				IL_0002
	IL_01b7:                                                                        //ldloc.2
	IL_01b8:            if(V_2==nullptr)goto IL_0314;                               //brfalse				IL_0314
	IL_01bd:                                                                        //ldc.i4				0x19
	IL_01c2:            V_9=25;                                                     //stloc				V_9
	IL_01c6:            /*goto IL_0002;*/goto IL_01cb;                              //br				IL_0002
	IL_01cb:            goto IL_0344;                                               //br				IL_0344
	IL_01d0:                                                                        //ldloc.s				V_6
	IL_01d2:            Temp_5=Root::T_x115::M_x2(V_6);                             //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x2(Reflector::CodeModel::IEventReference^)
	IL_01d7:            V_8=Temp_5;                                                 //stloc.s				V_8
	IL_01d9:                                                                        //ldc.i4				0x12
	IL_01de:            V_9=18;                                                     //stloc				V_9
	IL_01e2:            /*goto IL_0002;*/goto IL_01e7;                              //br				IL_0002
	IL_01e7:                                                                        //ldloc.s				V_8
	IL_01e9:            switch(safe_cast<System::Int32>(V_8)){case 0:goto IL_0189;case 1:goto IL_0189;case 2:goto IL_0189;case 3:goto IL_0189;case 4:goto IL_021d;case 5:goto IL_021d;case 6:goto IL_021d;};//switch				(IL_0189,IL_0189,IL_0189,IL_0189,IL_021d,IL_021d,IL_021d)
	IL_020a:                                                                        //ldc.i4				0x5
	IL_020f:            V_9=5;                                                      //stloc				V_9
	IL_0213:            /*goto IL_0002;*/goto IL_0218;                              //br				IL_0002
	IL_0218:            goto IL_02a8;                                               //br				IL_02a8
	IL_021d:            Temp_13=Root::T_x116::T_x1::M_x2();                         //call				System::Int32 Root::T_x116::T_x1::M_x2()
	IL_0222:            return Temp_13;                                             //ret
	IL_0223:                                                                        //ldloc.2
	IL_0224:            Temp_18=V_2->Resolve();                                     //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0229:            V_4=Temp_18;                                                //stloc.s				V_4
	IL_022b:                                                                        //ldc.i4				0xb
	IL_0230:            V_9=11;                                                     //stloc				V_9
	IL_0234:            /*goto IL_0002;*/goto IL_0239;                              //br				IL_0002
	IL_0239:                                                                        //ldloc.s				V_4
	IL_023b:            if(V_4!=nullptr)goto IL_02c7;                               //brtrue				IL_02c7
	IL_0240:                                                                        //ldc.i4				0xd
	IL_0245:            V_9=13;                                                     //stloc				V_9
	IL_0249:            /*goto IL_0002;*/goto IL_024e;                              //br				IL_0002
	IL_024e:            goto IL_02c1;                                               //br.s				IL_02c1
	IL_0250:                                                                        //ldloc.0
	IL_0251:            Temp_9=V_0->Resolve();                                      //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldReference::Resolve()
	IL_0256:            V_1=Temp_9;                                                 //stloc.1
	IL_0257:                                                                        //ldc.i4				0xc
	IL_025c:            V_9=12;                                                     //stloc				V_9
	IL_0260:            /*goto IL_0002;*/goto IL_0265;                              //br				IL_0002
	IL_0265:                                                                        //ldloc.1
	IL_0266:            if(V_1!=nullptr)goto IL_00ed;                               //brtrue				IL_00ed
	IL_026b:                                                                        //ldc.i4				0x15
	IL_0270:            V_9=21;                                                     //stloc				V_9
	IL_0274:            /*goto IL_0002;*/goto IL_0279;                              //br				IL_0002
	IL_0279:            goto IL_0377;                                               //br				IL_0377
	IL_027e:            Temp_17=Root::T_x116::T_x1::M_x2();                         //call				System::Int32 Root::T_x116::T_x1::M_x2()
	IL_0283:            return Temp_17;                                             //ret
	IL_0284:                                                                        //ldc.i4				0x6
	IL_0289:            V_9=6;                                                      //stloc				V_9
	IL_028d:            /*goto IL_0002;*/goto IL_0292;                              //br				IL_0002
	IL_0292:            goto IL_01a2;                                               //br				IL_01a2
	IL_0297:                                                                        //ldloc.3
	IL_0298:            Temp_3=V_3->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_029d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_02a2:            Temp_4=Root::T_x116::M_x2(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_3));//call				System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_02a7:            return Temp_4;                                              //ret
	IL_02a8:                                                                        //ldc.i4				0x11
	IL_02ad:            V_9=17;                                                     //stloc				V_9
	IL_02b1:            /*goto IL_0002;*/goto IL_02b6;                              //br				IL_0002
	IL_02b6:            goto IL_0389;                                               //br				IL_0389
	IL_02bb:            Temp_10=Root::T_x116::T_x1::M_x12();                        //call				System::Int32 Root::T_x116::T_x1::M_x12()
	IL_02c0:            return Temp_10;                                             //ret
	IL_02c1:            Temp_8=Root::T_x116::T_x1::M_x1();                          //call				System::Int32 Root::T_x116::T_x1::M_x1()
	IL_02c6:            return Temp_8;                                              //ret
	IL_02c7:                                                                        //ldloc.s				V_4
	IL_02c9:            Temp_6=V_4->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_02ce:            V_8=Temp_6;                                                 //stloc.s				V_8
	IL_02d0:                                                                        //ldc.i4				0x1
	IL_02d5:            V_9=1;                                                      //stloc				V_9
	IL_02d9:            /*goto IL_0002;*/goto IL_02de;                              //br				IL_0002
	IL_02de:                                                                        //ldloc.s				V_8
	IL_02e0:            switch(safe_cast<System::Int32>(V_8)){case 0:goto IL_00b1;case 1:goto IL_00b1;case 2:goto IL_00b1;case 3:goto IL_00b1;case 4:goto IL_0383;case 5:goto IL_0383;case 6:goto IL_0383;};//switch				(IL_00b1,IL_00b1,IL_00b1,IL_00b1,IL_0383,IL_0383,IL_0383)
	IL_0301:                                                                        //ldc.i4				0x0
	IL_0306:            V_9=0;                                                      //stloc				V_9
	IL_030a:            /*goto IL_0002;*/goto IL_030f;                              //br				IL_0002
	IL_030f:            goto IL_018f;                                               //br				IL_018f
	IL_0314:                                                                        //ldarg.0
	IL_0315:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_031a:            V_5=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(A_0);//stloc.s				V_5
	IL_031c:                                                                        //ldc.i4				0x3
	IL_0321:            V_9=3;                                                      //stloc				V_9
	IL_0325:            /*goto IL_0002;*/goto IL_032a;                              //br				IL_0002
	IL_032a:                                                                        //ldloc.s				V_5
	IL_032c:            if(V_5==nullptr)goto IL_00bd;                               //brfalse				IL_00bd
	IL_0331:                                                                        //ldc.i4				0x13
	IL_0336:            V_9=19;                                                     //stloc				V_9
	IL_033a:            /*goto IL_0002;*/goto IL_033f;                              //br				IL_0002
	IL_033f:            goto IL_0139;                                               //br				IL_0139
	IL_0344:                                                                        //ldloc.2
	IL_0345:            Temp_19=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_034a:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_034f:            V_3=dynamic_cast<Reflector::CodeModel::IArrayType^>(Temp_19);//stloc.3
	IL_0350:                                                                        //ldc.i4				0x18
	IL_0355:            V_9=24;                                                     //stloc				V_9
	IL_0359:            /*goto IL_0002;*/goto IL_035e;                              //br				IL_0002
	IL_035e:                                                                        //ldloc.3
	IL_035f:            if(V_3==nullptr)goto IL_0223;                               //brfalse				IL_0223
	IL_0364:                                                                        //ldc.i4				0x9
	IL_0369:            V_9=9;                                                      //stloc				V_9
	IL_036d:            /*goto IL_0002;*/goto IL_0372;                              //br				IL_0002
	IL_0372:            goto IL_0297;                                               //br				IL_0297
	IL_0377:            Temp_15=Root::T_x116::T_x1::M_x1();                         //call				System::Int32 Root::T_x116::T_x1::M_x1()
	IL_037c:            return Temp_15;                                             //ret
	IL_037d:            Temp_11=Root::T_x116::T_x1::M_x2();                         //call				System::Int32 Root::T_x116::T_x1::M_x2()
	IL_0382:            return Temp_11;                                             //ret
	IL_0383:            Temp_1=Root::T_x116::T_x1::M_x2();                          //call				System::Int32 Root::T_x116::T_x1::M_x2()
	IL_0388:            return Temp_1;                                              //ret
	IL_0389:            Temp_2=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_038e:            throw Temp_2;                                               //throw

}
inline System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::TypeVisibility Temp_1 = (Reflector::CodeModel::TypeVisibility)0;
	System::NotSupportedException^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::TypeVisibility V_1 = (Reflector::CodeModel::TypeVisibility)0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0031;case 1:goto IL_0052;case 2:goto IL_00a9;case 3:goto IL_003f;case 4:goto IL_0072;};//switch				(IL_0031,IL_0052,IL_00a9,IL_003f,IL_0072)
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:                                                                        //ldc.i4				0x0
	IL_002b:            V_2=0;                                                      //stloc				V_2
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0!=nullptr)goto IL_0060;                               //brtrue.s				IL_0060
	IL_0034:                                                                        //ldc.i4				0x3
	IL_0039:            V_2=3;                                                      //stloc				V_2
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0054;                                               //br.s				IL_0054
	IL_0041:            Temp_4=Root::T_x116::T_x1::M_x12();                         //call				System::Int32 Root::T_x116::T_x1::M_x12()
	IL_0046:            return Temp_4;                                              //ret
	IL_0047:                                                                        //ldc.i4				0x1
	IL_004c:            V_2=1;                                                      //stloc				V_2
	IL_0050:            /*goto IL_0002;*/goto IL_0052;                              //br.s				IL_0002
	IL_0052:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_0054:            Temp_3=Root::T_x116::T_x1::M_x1();                          //call				System::Int32 Root::T_x116::T_x1::M_x1()
	IL_0059:            return Temp_3;                                              //ret
	IL_005a:            Temp_5=Root::T_x116::T_x1::M_x2();                          //call				System::Int32 Root::T_x116::T_x1::M_x2()
	IL_005f:            return Temp_5;                                              //ret
	IL_0060:                                                                        //ldloc.0
	IL_0061:            Temp_1=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::TypeVisibility Reflector::CodeModel::ITypeDeclaration::get_Visibility()
	IL_0066:            V_1=Temp_1;                                                 //stloc.1
	IL_0067:                                                                        //ldc.i4				0x4
	IL_006c:            V_2=4;                                                      //stloc				V_2
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0075;                                               //br.s				IL_0075
	IL_0074:                                                                        //break
	IL_0075:                                                                        //ldloc.1
	IL_0076:            switch(safe_cast<System::Int32>(V_1)){case 0:goto IL_0041;case 1:goto IL_005a;case 2:goto IL_005a;case 3:goto IL_0041;case 4:goto IL_005a;case 5:goto IL_0041;case 6:goto IL_0041;case 7:goto IL_005a;};//switch				(IL_0041,IL_005a,IL_005a,IL_0041,IL_005a,IL_0041,IL_0041,IL_005a)
	IL_009b:                                                                        //ldc.i4				0x2
	IL_00a0:            V_2=2;                                                      //stloc				V_2
	IL_00a4:            /*goto IL_0002;*/goto IL_00a9;                              //br				IL_0002
	IL_00a9:            goto IL_0047;                                               //br.s				IL_0047
	IL_00ab:            Temp_2=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00b0:            throw Temp_2;                                               //throw

}
inline static Root::T_x116::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Color Temp_0;
	System::Drawing::Color Temp_1;
	System::Int32 Temp_2 = 0;
	System::Byte Temp_3 = 0;
	System::Byte Temp_4 = 0;
	System::Byte Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::Byte Temp_7 = 0;
	System::Byte Temp_8 = 0;
	System::Byte Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::Byte Temp_11 = 0;
	System::Byte Temp_12 = 0;
	System::Byte Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	System::Byte Temp_15 = 0;
	System::Byte Temp_16 = 0;
	System::Byte Temp_17 = 0;
	System::Int32 Temp_18 = 0;
	//local variables.
	System::Drawing::Color V_0;
	System::Drawing::Color V_1;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=System::Drawing::SystemColors::WindowText;           //call				System::Drawing::Color System::Drawing::SystemColors::get_WindowText()
	IL_0008:            V_0=Temp_0;                                                 //stloc.0
	IL_0009:            Temp_1=System::Drawing::SystemColors::Window;               //call				System::Drawing::Color System::Drawing::SystemColors::get_Window()
	IL_000e:            V_1=Temp_1;                                                 //stloc.1
	IL_000f:            Temp_2=Root::T_x116::T_x1::F_x1;                            //ldsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0014:                                                                        //ldloca.s				V_0
	IL_0016:            Temp_3=V_0.A;                                               //call				System::Byte System::Drawing::Color::get_A()
	IL_001b:                                                                        //ldloca.s				V_1
	IL_001d:            Temp_4=V_1.A;                                               //call				System::Byte System::Drawing::Color::get_A()
	IL_0022:            Temp_5=Root::T_x116::T_x1::M_x1(Temp_3,Temp_4);             //call				System::Byte Root::T_x116::T_x1::M_x1(System::Byte,System::Byte)
	IL_0027:                                                                        //ldc.i4.s				24
	IL_0029:                                                                        //shl
	IL_002a:                                                                        //or
	IL_002b:            Root::T_x116::T_x1::F_x1=(Temp_2 | safe_cast<System::Int32>((Temp_5 << 24)));//stsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0030:            Temp_6=Root::T_x116::T_x1::F_x1;                            //ldsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0035:                                                                        //ldloca.s				V_0
	IL_0037:            Temp_7=V_0.R;                                               //call				System::Byte System::Drawing::Color::get_R()
	IL_003c:                                                                        //ldloca.s				V_1
	IL_003e:            Temp_8=V_1.R;                                               //call				System::Byte System::Drawing::Color::get_R()
	IL_0043:            Temp_9=Root::T_x116::T_x1::M_x1(Temp_7,Temp_8);             //call				System::Byte Root::T_x116::T_x1::M_x1(System::Byte,System::Byte)
	IL_0048:                                                                        //ldc.i4.s				16
	IL_004a:                                                                        //shl
	IL_004b:                                                                        //or
	IL_004c:            Root::T_x116::T_x1::F_x1=(Temp_6 | safe_cast<System::Int32>((Temp_9 << 16)));//stsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0051:            Temp_10=Root::T_x116::T_x1::F_x1;                           //ldsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0056:                                                                        //ldloca.s				V_0
	IL_0058:            Temp_11=V_0.G;                                              //call				System::Byte System::Drawing::Color::get_G()
	IL_005d:                                                                        //ldloca.s				V_1
	IL_005f:            Temp_12=V_1.G;                                              //call				System::Byte System::Drawing::Color::get_G()
	IL_0064:            Temp_13=Root::T_x116::T_x1::M_x1(Temp_11,Temp_12);          //call				System::Byte Root::T_x116::T_x1::M_x1(System::Byte,System::Byte)
	IL_0069:                                                                        //ldc.i4.8
	IL_006a:                                                                        //shl
	IL_006b:                                                                        //or
	IL_006c:            Root::T_x116::T_x1::F_x1=(Temp_10 | safe_cast<System::Int32>((Temp_13 << 8)));//stsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0071:            Temp_14=Root::T_x116::T_x1::F_x1;                           //ldsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0076:                                                                        //ldloca.s				V_0
	IL_0078:            Temp_15=V_0.B;                                              //call				System::Byte System::Drawing::Color::get_B()
	IL_007d:                                                                        //ldloca.s				V_1
	IL_007f:            Temp_16=V_1.B;                                              //call				System::Byte System::Drawing::Color::get_B()
	IL_0084:            Temp_17=Root::T_x116::T_x1::M_x1(Temp_15,Temp_16);          //call				System::Byte Root::T_x116::T_x1::M_x1(System::Byte,System::Byte)
	IL_0089:                                                                        //or
	IL_008a:            Root::T_x116::T_x1::F_x1=(Temp_14 | safe_cast<System::Int32>(Temp_17));//stsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_008f:                                                                        //ldloca.s				V_0
	IL_0091:            Temp_18=V_0.ToArgb();                                       //call				System::Int32 System::Drawing::Color::ToArgb()
	IL_0096:            Root::T_x116::T_x1::F_x2=Temp_18;                           //stsfld				System::Int32 Root::T_x116::T_x1 F_x2
	IL_009b:            return;                                                     //ret

}
inline Root::T_x116::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Int32 Root::T_x116::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x116::T_x1::M_x2();                          //call				System::Int32 Root::T_x116::T_x1::M_x2()
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Byte Root::T_x116::T_x1::M_x1(System::Byte A_0,System::Byte A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            if(A_0<=A_1)goto IL_0019;                                   //ble.s				IL_0019
	IL_0004:            goto IL_0006;                                               //br.s				IL_0006
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //conv.r8
	IL_0008:                                                                        //ldarg.0
	IL_0009:                                                                        //ldarg.1
	IL_000a:                                                                        //sub
	IL_000b:                                                                        //conv.r8
	IL_000c:                                                                        //ldc.r8				0.5
	IL_0015:                                                                        //mul
	IL_0016:                                                                        //add
	IL_0017:                                                                        //conv.u1
	IL_0018:            return safe_cast<System::Byte>((safe_cast<System::Double>(A_1) + (safe_cast<System::Double>((A_0 - A_1)) * 0.5)));//ret
	IL_0019:                                                                        //ldc.i4.4
	IL_001a:                                                                        //dup
	IL_001b:                                                                        //dup
	IL_001c:                                                                        //ldc.i4.2
	IL_001d:                                                                        //sub
	IL_001e:                                                                        //blt				IL_001a
	IL_0023:                                                                        //pop
	IL_0024:                                                                        //ldarg.1
	IL_0025:                                                                        //conv.r8
	IL_0026:                                                                        //ldarg.1
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //sub
	IL_0029:                                                                        //conv.r8
	IL_002a:                                                                        //ldc.r8				0.5
	IL_0033:                                                                        //mul
	IL_0034:                                                                        //sub
	IL_0035:                                                                        //conv.u1
	IL_0036:            return safe_cast<System::Byte>((safe_cast<System::Double>(A_1) - (safe_cast<System::Double>((A_1 - A_0)) * 0.5)));//ret

}
inline System::Int32 Root::T_x116::T_x1::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x116::T_x1::F_x1;                            //ldsfld				System::Int32 Root::T_x116::T_x1 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x116::T_x1::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x116::T_x1::F_x2;                            //ldsfld				System::Int32 Root::T_x116::T_x1 F_x2
	IL_0005:            return Temp_0;                                              //ret

}
