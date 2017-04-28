#include "global_xref.h"

inline Root::T_x123::T_x123(System::Object^ A_0,System::IServiceProvider^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x123 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::IServiceProvider^ Root::T_x123 F_x2
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x123::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::IServiceProvider^ Temp_2 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_005a;case 1:goto IL_0040;case 2:goto IL_0032;};//switch				(IL_005a,IL_0040,IL_0032)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->F_x1;                                          //ldfld				System::Object^ Root::T_x123 F_x1
	IL_0021:            Temp_1=this->M_x2(Temp_0);                                  //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_0026:            V_0=Temp_1;                                                 //stloc.0
	IL_0027:                                                                        //ldc.i4				0x2
	IL_002c:            V_1=2;                                                      //stloc				V_1
	IL_0030:            /*goto IL_0002;*/goto IL_0032;                              //br.s				IL_0002
	IL_0032:                                                                        //ldloc.0
	IL_0033:            if(V_0==nullptr)goto IL_005c;                               //brfalse.s				IL_005c
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_1=1;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_2=this->F_x2;                                          //ldfld				System::IServiceProvider^ Root::T_x123 F_x2
	IL_004a:            this->M_x2(V_0,Temp_2);                                     //call				void Root::T_x123::M_x2(System::String^,System::IServiceProvider^)
	IL_004f:                                                                        //ldc.i4				0x0
	IL_0054:            V_1=0;                                                      //stloc				V_1
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:            goto IL_005c;                                               //br.s				IL_005c
	IL_005c:            return;                                                     //ret

}
inline System::Boolean Root::T_x123::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::MethodVisibility Temp_0 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::FieldVisibility Temp_1 = (Reflector::CodeModel::FieldVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_2 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::ITypeDeclaration^ Temp_5 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	Reflector::CodeModel::TypeVisibility Temp_10 = (Reflector::CodeModel::TypeVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_11 = (Reflector::CodeModel::MethodVisibility)0;
	//local variables.
	Reflector::CodeModel::INamespace^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IMemberReference^ V_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_5 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_6 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_7 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_8 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_9 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_10 = nullptr;
	Reflector::CodeModel::IEventReference^ V_11 = nullptr;
	Reflector::CodeModel::TypeVisibility V_12 = (Reflector::CodeModel::TypeVisibility)0;
	Reflector::CodeModel::FieldVisibility V_13 = (Reflector::CodeModel::FieldVisibility)0;
	Reflector::CodeModel::MethodVisibility V_14 = (Reflector::CodeModel::MethodVisibility)0;
	System::Int32 V_15 = 0;
	//method body ------- 
	IL_0000:            goto IL_00ba;                                               //br				IL_00ba
	IL_0005:                                                                        //ldloc				V_15
	IL_0009:            switch(V_15){case 0:goto IL_033e;case 1:goto IL_029c;case 2:goto IL_01f8;case 3:goto IL_0113;case 4:goto IL_0435;case 5:goto IL_036f;case 6:goto IL_044a;case 7:goto IL_04f9;case 8:goto IL_021e;case 9:goto IL_00e3;case 10:goto IL_0486;case 11:goto IL_035a;case 12:goto IL_024e;case 13:goto IL_013a;case 14:goto IL_03d8;case 15:goto IL_02b1;case 16:goto IL_0160;case 17:goto IL_04d1;case 18:goto IL_0196;case 19:goto IL_017a;case 20:goto IL_014d;case 21:goto IL_0313;case 22:goto IL_0390;case 23:goto IL_03f4;case 24:goto IL_04e6;case 25:goto IL_01d5;case 26:goto IL_020b;case 27:goto IL_01b9;case 28:goto IL_00f6;case 29:goto IL_0236;case 30:goto IL_026e;case 31:goto IL_02ce;case 32:goto IL_03a5;case 33:goto IL_04b6;case 34:goto IL_0326;case 35:goto IL_03c4;case 36:goto IL_0417;case 37:goto IL_027f;case 38:goto IL_02e3;case 39:goto IL_04a2;case 40:goto IL_0463;case 41:goto IL_02fe;case 42:goto IL_00cf;};//switch				(IL_033e,IL_029c,IL_01f8,IL_0113,IL_0435,IL_036f,IL_044a,IL_04f9,IL_021e,IL_00e3,IL_0486,IL_035a,IL_024e,IL_013a,IL_03d8,IL_02b1,IL_0160,IL_04d1,IL_0196,IL_017a,IL_014d,IL_0313,IL_0390,IL_03f4,IL_04e6,IL_01d5,IL_020b,IL_01b9,IL_00f6,IL_0236,IL_026e,IL_02ce,IL_03a5,IL_04b6,IL_0326,IL_03c4,IL_0417,IL_027f,IL_02e3,IL_04a2,IL_0463,IL_02fe,IL_00cf)
	IL_00ba:                                                                        //ldarg.1
	IL_00bb:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_00c0:            V_0=dynamic_cast<Reflector::CodeModel::INamespace^>(A_0);   //stloc.0
	IL_00c1:                                                                        //ldc.i4				0x2a
	IL_00c6:            V_15=42;                                                    //stloc				V_15
	IL_00ca:            /*goto IL_0005;*/goto IL_00cf;                              //br				IL_0005
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:            if(V_0==nullptr)goto IL_048d;                               //brfalse				IL_048d
	IL_00d5:                                                                        //ldc.i4				0x9
	IL_00da:            V_15=9;                                                     //stloc				V_15
	IL_00de:            /*goto IL_0005;*/goto IL_00e3;                              //br				IL_0005
	IL_00e3:            goto IL_0257;                                               //br				IL_0257
	IL_00e8:                                                                        //ldc.i4				0x1c
	IL_00ed:            V_15=28;                                                    //stloc				V_15
	IL_00f1:            /*goto IL_0005;*/goto IL_00f6;                              //br				IL_0005
	IL_00f6:            goto IL_02b8;                                               //br				IL_02b8
	IL_00fb:                                                                        //ldc.i4.1
	IL_00fc:            return true;                                                //ret
	IL_00fd:                                                                        //ldloc.3
	IL_00fe:            Temp_10=V_3->Visibility;                                    //callvirt				Reflector::CodeModel::TypeVisibility Reflector::CodeModel::ITypeDeclaration::get_Visibility()
	IL_0103:            V_12=Temp_10;                                               //stloc.s				V_12
	IL_0105:                                                                        //ldc.i4				0x3
	IL_010a:            V_15=3;                                                     //stloc				V_15
	IL_010e:            /*goto IL_0005;*/goto IL_0113;                              //br				IL_0005
	IL_0113:                                                                        //ldloc.s				V_12
	IL_0115:                                                                        //ldc.i4.1
	IL_0116:                                                                        //sub
	IL_0117:            switch((V_12 - safe_cast<Reflector::CodeModel::TypeVisibility>(1))){case 0:goto IL_041c;case 1:goto IL_041c;case 2:goto IL_0286;case 3:goto IL_041c;};//switch				(IL_041c,IL_041c,IL_0286,IL_041c)
	IL_012c:                                                                        //ldc.i4				0xd
	IL_0131:            V_15=13;                                                    //stloc				V_15
	IL_0135:            /*goto IL_0005;*/goto IL_013a;                              //br				IL_0005
	IL_013a:            goto IL_0210;                                               //br				IL_0210
	IL_013f:                                                                        //ldc.i4				0x14
	IL_0144:            V_15=20;                                                    //stloc				V_15
	IL_0148:            /*goto IL_0005;*/goto IL_014d;                              //br				IL_0005
	IL_014d:            goto IL_0220;                                               //br				IL_0220
	IL_0152:                                                                        //ldc.i4				0x10
	IL_0157:            V_15=16;                                                    //stloc				V_15
	IL_015b:            /*goto IL_0005;*/goto IL_0160;                              //br				IL_0005
	IL_0160:                                                                        //ldarg.0
	IL_0161:                                                                        //ldloc.2
	IL_0162:            Temp_4=this->M_x1(safe_cast<System::Object^>(V_2));         //call				System::Boolean Root::T_x123::M_x1(System::Object^)
	IL_0167:            if(Temp_4)goto IL_0259;                                     //brtrue				IL_0259
	IL_016c:                                                                        //ldc.i4				0x13
	IL_0171:            V_15=19;                                                    //stloc				V_15
	IL_0175:            /*goto IL_0005;*/goto IL_017a;                              //br				IL_0005
	IL_017a:            goto IL_0284;                                               //br				IL_0284
	IL_017f:                                                                        //ldloc.s				V_9
	IL_0181:            Temp_0=V_9->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0186:            V_14=Temp_0;                                                //stloc.s				V_14
	IL_0188:                                                                        //ldc.i4				0x12
	IL_018d:            V_15=18;                                                    //stloc				V_15
	IL_0191:            /*goto IL_0005;*/goto IL_0196;                              //br				IL_0005
	IL_0196:                                                                        //ldloc.s				V_14
	IL_0198:                                                                        //ldc.i4.4
	IL_0199:                                                                        //sub
	IL_019a:            switch((V_14 - safe_cast<Reflector::CodeModel::MethodVisibility>(4))){case 0:goto IL_048b;case 1:goto IL_02b8;case 2:goto IL_048b;};//switch				(IL_048b,IL_02b8,IL_048b)
	IL_01ab:                                                                        //ldc.i4				0x1b
	IL_01b0:            V_15=27;                                                    //stloc				V_15
	IL_01b4:            /*goto IL_0005;*/goto IL_01b9;                              //br				IL_0005
	IL_01b9:            goto IL_00e8;                                               //br				IL_00e8
	IL_01be:                                                                        //ldloc.s				V_11
	IL_01c0:            Temp_2=Root::T_x115::M_x2(V_11);                            //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x2(Reflector::CodeModel::IEventReference^)
	IL_01c5:            V_14=Temp_2;                                                //stloc.s				V_14
	IL_01c7:                                                                        //ldc.i4				0x19
	IL_01cc:            V_15=25;                                                    //stloc				V_15
	IL_01d0:            /*goto IL_0005;*/goto IL_01d5;                              //br				IL_0005
	IL_01d5:                                                                        //ldloc.s				V_14
	IL_01d7:                                                                        //ldc.i4.4
	IL_01d8:                                                                        //sub
	IL_01d9:            switch((V_14 - safe_cast<Reflector::CodeModel::MethodVisibility>(4))){case 0:goto IL_0253;case 1:goto IL_04fb;case 2:goto IL_0253;};//switch				(IL_0253,IL_04fb,IL_0253)
	IL_01ea:                                                                        //ldc.i4				0x2
	IL_01ef:            V_15=2;                                                     //stloc				V_15
	IL_01f3:            /*goto IL_0005;*/goto IL_01f8;                              //br				IL_0005
	IL_01f8:            goto IL_04eb;                                               //br				IL_04eb
	IL_01fd:                                                                        //ldc.i4				0x1a
	IL_0202:            V_15=26;                                                    //stloc				V_15
	IL_0206:            /*goto IL_0005;*/goto IL_020b;                              //br				IL_0005
	IL_020b:            goto IL_04bb;                                               //br				IL_04bb
	IL_0210:                                                                        //ldc.i4				0x8
	IL_0215:            V_15=8;                                                     //stloc				V_15
	IL_0219:            /*goto IL_0005;*/goto IL_021e;                              //br				IL_0005
	IL_021e:            goto IL_0286;                                               //br.s				IL_0286
	IL_0220:                                                                        //ldarg.1
	IL_0221:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_0226:            V_11=dynamic_cast<Reflector::CodeModel::IEventReference^>(A_0);//stloc.s				V_11
	IL_0228:                                                                        //ldc.i4				0x1d
	IL_022d:            V_15=29;                                                    //stloc				V_15
	IL_0231:            /*goto IL_0005;*/goto IL_0236;                              //br				IL_0005
	IL_0236:            goto IL_0239;                                               //br.s				IL_0239
	IL_0238:                                                                        //break
	IL_0239:                                                                        //ldloc.s				V_11
	IL_023b:            if(V_11==nullptr)goto IL_04fb;                              //brfalse				IL_04fb
	IL_0240:                                                                        //ldc.i4				0xc
	IL_0245:            V_15=12;                                                    //stloc				V_15
	IL_0249:            /*goto IL_0005;*/goto IL_024e;                              //br				IL_0005
	IL_024e:            goto IL_01be;                                               //br				IL_01be
	IL_0253:                                                                        //ldc.i4.1
	IL_0254:            return true;                                                //ret
	IL_0255:                                                                        //ldc.i4.0
	IL_0256:            return false;                                               //ret
	IL_0257:                                                                        //ldc.i4.1
	IL_0258:            return true;                                                //ret
	IL_0259:                                                                        //ldloc.1
	IL_025a:            Temp_5=V_1->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_025f:            V_3=Temp_5;                                                 //stloc.3
	IL_0260:                                                                        //ldc.i4				0x1e
	IL_0265:            V_15=30;                                                    //stloc				V_15
	IL_0269:            /*goto IL_0005;*/goto IL_026e;                              //br				IL_0005
	IL_026e:                                                                        //ldloc.3
	IL_026f:            if(V_3==nullptr)goto IL_0286;                               //brfalse.s				IL_0286
	IL_0271:                                                                        //ldc.i4				0x25
	IL_0276:            V_15=37;                                                    //stloc				V_15
	IL_027a:            /*goto IL_0005;*/goto IL_027f;                              //br				IL_0005
	IL_027f:            goto IL_00fd;                                               //br				IL_00fd
	IL_0284:                                                                        //ldc.i4.0
	IL_0285:            return false;                                               //ret
	IL_0286:                                                                        //ldarg.1
	IL_0287:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_028c:            V_4=dynamic_cast<Reflector::CodeModel::IMemberReference^>(A_0);//stloc.s				V_4
	IL_028e:                                                                        //ldc.i4				0x1
	IL_0293:            V_15=1;                                                     //stloc				V_15
	IL_0297:            /*goto IL_0005;*/goto IL_029c;                              //br				IL_0005
	IL_029c:                                                                        //ldloc.s				V_4
	IL_029e:            if(V_4==nullptr)goto IL_04fb;                               //brfalse				IL_04fb
	IL_02a3:                                                                        //ldc.i4				0xf
	IL_02a8:            V_15=15;                                                    //stloc				V_15
	IL_02ac:            /*goto IL_0005;*/goto IL_02b1;                              //br				IL_0005
	IL_02b1:            goto IL_0374;                                               //br				IL_0374
	IL_02b6:                                                                        //ldc.i4.1
	IL_02b7:            return true;                                                //ret
	IL_02b8:                                                                        //ldarg.1
	IL_02b9:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_02be:            V_10=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(A_0);//stloc.s				V_10
	IL_02c0:                                                                        //ldc.i4				0x1f
	IL_02c5:            V_15=31;                                                    //stloc				V_15
	IL_02c9:            /*goto IL_0005;*/goto IL_02ce;                              //br				IL_0005
	IL_02ce:                                                                        //ldloc.s				V_10
	IL_02d0:            if(V_10==nullptr)goto IL_0220;                              //brfalse				IL_0220
	IL_02d5:                                                                        //ldc.i4				0x26
	IL_02da:            V_15=38;                                                    //stloc				V_15
	IL_02de:            /*goto IL_0005;*/goto IL_02e3;                              //br				IL_0005
	IL_02e3:            goto IL_03dd;                                               //br				IL_03dd
	IL_02e8:                                                                        //ldarg.1
	IL_02e9:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_02ee:            V_6=dynamic_cast<Reflector::CodeModel::IFieldReference^>(A_0);//stloc.s				V_6
	IL_02f0:                                                                        //ldc.i4				0x29
	IL_02f5:            V_15=41;                                                    //stloc				V_15
	IL_02f9:            /*goto IL_0005;*/goto IL_02fe;                              //br				IL_0005
	IL_02fe:                                                                        //ldloc.s				V_6
	IL_0300:            if(V_6==nullptr)goto IL_04bb;                               //brfalse				IL_04bb
	IL_0305:                                                                        //ldc.i4				0x15
	IL_030a:            V_15=21;                                                    //stloc				V_15
	IL_030e:            /*goto IL_0005;*/goto IL_0313;                              //br				IL_0005
	IL_0313:            goto IL_041e;                                               //br				IL_041e
	IL_0318:                                                                        //ldc.i4				0x22
	IL_031d:            V_15=34;                                                    //stloc				V_15
	IL_0321:            /*goto IL_0005;*/goto IL_0326;                              //br				IL_0005
	IL_0326:                                                                        //ldarg.0
	IL_0327:                                                                        //ldloc.s				V_5
	IL_0329:            Temp_9=this->M_x1(safe_cast<System::Object^>(V_5));         //call				System::Boolean Root::T_x123::M_x1(System::Object^)
	IL_032e:            if(Temp_9)goto IL_02e8;                                     //brtrue.s				IL_02e8
	IL_0330:                                                                        //ldc.i4				0x0
	IL_0335:            V_15=0;                                                     //stloc				V_15
	IL_0339:            /*goto IL_0005;*/goto IL_033e;                              //br				IL_0005
	IL_033e:            goto IL_0255;                                               //br				IL_0255
	IL_0343:                                                                        //ldloc.s				V_8
	IL_0345:            Temp_7=V_8->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_034a:            V_9=Temp_7;                                                 //stloc.s				V_9
	IL_034c:                                                                        //ldc.i4				0xb
	IL_0351:            V_15=11;                                                    //stloc				V_15
	IL_0355:            /*goto IL_0005;*/goto IL_035a;                              //br				IL_0005
	IL_035a:                                                                        //ldloc.s				V_9
	IL_035c:            if(V_9==nullptr)goto IL_02b8;                               //brfalse				IL_02b8
	IL_0361:                                                                        //ldc.i4				0x5
	IL_0366:            V_15=5;                                                     //stloc				V_15
	IL_036a:            /*goto IL_0005;*/goto IL_036f;                              //br				IL_0005
	IL_036f:            goto IL_017f;                                               //br				IL_017f
	IL_0374:                                                                        //ldloc.s				V_4
	IL_0376:            Temp_3=V_4->DeclaringType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_037b:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0380:            V_5=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_3);//stloc.s				V_5
	IL_0382:                                                                        //ldc.i4				0x16
	IL_0387:            V_15=22;                                                    //stloc				V_15
	IL_038b:            /*goto IL_0005;*/goto IL_0390;                              //br				IL_0005
	IL_0390:                                                                        //ldloc.s				V_5
	IL_0392:            if(V_5==nullptr)goto IL_02e8;                               //brfalse				IL_02e8
	IL_0397:                                                                        //ldc.i4				0x20
	IL_039c:            V_15=32;                                                    //stloc				V_15
	IL_03a0:            /*goto IL_0005;*/goto IL_03a5;                              //br				IL_0005
	IL_03a5:            goto IL_0318;                                               //br				IL_0318
	IL_03aa:                                                                        //ldloc.1
	IL_03ab:            Temp_8=V_1->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_03b0:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_03b5:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_8);//stloc.2
	IL_03b6:                                                                        //ldc.i4				0x23
	IL_03bb:            V_15=35;                                                    //stloc				V_15
	IL_03bf:            /*goto IL_0005;*/goto IL_03c4;                              //br				IL_0005
	IL_03c4:                                                                        //ldloc.2
	IL_03c5:            if(V_2==nullptr)goto IL_0259;                               //brfalse				IL_0259
	IL_03ca:                                                                        //ldc.i4				0xe
	IL_03cf:            V_15=14;                                                    //stloc				V_15
	IL_03d3:            /*goto IL_0005;*/goto IL_03d8;                              //br				IL_0005
	IL_03d8:            goto IL_0152;                                               //br				IL_0152
	IL_03dd:                                                                        //ldloc.s				V_10
	IL_03df:            Temp_11=Root::T_x115::M_x1(V_10);                           //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_03e4:            V_14=Temp_11;                                               //stloc.s				V_14
	IL_03e6:                                                                        //ldc.i4				0x17
	IL_03eb:            V_15=23;                                                    //stloc				V_15
	IL_03ef:            /*goto IL_0005;*/goto IL_03f4;                              //br				IL_0005
	IL_03f4:                                                                        //ldloc.s				V_14
	IL_03f6:                                                                        //ldc.i4.4
	IL_03f7:                                                                        //sub
	IL_03f8:            switch((V_14 - safe_cast<Reflector::CodeModel::MethodVisibility>(4))){case 0:goto IL_02b6;case 1:goto IL_0220;case 2:goto IL_02b6;};//switch				(IL_02b6,IL_0220,IL_02b6)
	IL_0409:                                                                        //ldc.i4				0x24
	IL_040e:            V_15=36;                                                    //stloc				V_15
	IL_0412:            /*goto IL_0005;*/goto IL_0417;                              //br				IL_0005
	IL_0417:            goto IL_013f;                                               //br				IL_013f
	IL_041c:                                                                        //ldc.i4.1
	IL_041d:            return true;                                                //ret
	IL_041e:                                                                        //ldloc.s				V_6
	IL_0420:            Temp_6=V_6->Resolve();                                      //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldReference::Resolve()
	IL_0425:            V_7=Temp_6;                                                 //stloc.s				V_7
	IL_0427:                                                                        //ldc.i4				0x4
	IL_042c:            V_15=4;                                                     //stloc				V_15
	IL_0430:            /*goto IL_0005;*/goto IL_0435;                              //br				IL_0005
	IL_0435:                                                                        //ldloc.s				V_7
	IL_0437:            if(V_7==nullptr)goto IL_04bb;                               //brfalse				IL_04bb
	IL_043c:                                                                        //ldc.i4				0x6
	IL_0441:            V_15=6;                                                     //stloc				V_15
	IL_0445:            /*goto IL_0005;*/goto IL_044a;                              //br				IL_0005
	IL_044a:            goto IL_044c;                                               //br.s				IL_044c
	IL_044c:                                                                        //ldloc.s				V_7
	IL_044e:            Temp_1=V_7->Visibility;                                     //callvirt				Reflector::CodeModel::FieldVisibility Reflector::CodeModel::IFieldDeclaration::get_Visibility()
	IL_0453:            V_13=Temp_1;                                                //stloc.s				V_13
	IL_0455:                                                                        //ldc.i4				0x28
	IL_045a:            V_15=40;                                                    //stloc				V_15
	IL_045e:            /*goto IL_0005;*/goto IL_0463;                              //br				IL_0005
	IL_0463:                                                                        //ldloc.s				V_13
	IL_0465:                                                                        //ldc.i4.4
	IL_0466:                                                                        //sub
	IL_0467:            switch((V_13 - safe_cast<Reflector::CodeModel::FieldVisibility>(4))){case 0:goto IL_00fb;case 1:goto IL_04bb;case 2:goto IL_00fb;};//switch				(IL_00fb,IL_04bb,IL_00fb)
	IL_0478:                                                                        //ldc.i4				0xa
	IL_047d:            V_15=10;                                                    //stloc				V_15
	IL_0481:            /*goto IL_0005;*/goto IL_0486;                              //br				IL_0005
	IL_0486:            goto IL_01fd;                                               //br				IL_01fd
	IL_048b:                                                                        //ldc.i4.1
	IL_048c:            return true;                                                //ret
	IL_048d:                                                                        //ldarg.1
	IL_048e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0493:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.1
	IL_0494:                                                                        //ldc.i4				0x27
	IL_0499:            V_15=39;                                                    //stloc				V_15
	IL_049d:            /*goto IL_0005;*/goto IL_04a2;                              //br				IL_0005
	IL_04a2:                                                                        //ldloc.1
	IL_04a3:            if(V_1==nullptr)goto IL_0286;                               //brfalse				IL_0286
	IL_04a8:                                                                        //ldc.i4				0x21
	IL_04ad:            V_15=33;                                                    //stloc				V_15
	IL_04b1:            /*goto IL_0005;*/goto IL_04b6;                              //br				IL_0005
	IL_04b6:            goto IL_03aa;                                               //br				IL_03aa
	IL_04bb:                                                                        //ldarg.1
	IL_04bc:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_04c1:            V_8=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.s				V_8
	IL_04c3:                                                                        //ldc.i4				0x11
	IL_04c8:            V_15=17;                                                    //stloc				V_15
	IL_04cc:            /*goto IL_0005;*/goto IL_04d1;                              //br				IL_0005
	IL_04d1:                                                                        //ldloc.s				V_8
	IL_04d3:            if(V_8==nullptr)goto IL_02b8;                               //brfalse				IL_02b8
	IL_04d8:                                                                        //ldc.i4				0x18
	IL_04dd:            V_15=24;                                                    //stloc				V_15
	IL_04e1:            /*goto IL_0005;*/goto IL_04e6;                              //br				IL_0005
	IL_04e6:            goto IL_0343;                                               //br				IL_0343
	IL_04eb:                                                                        //ldc.i4				0x7
	IL_04f0:            V_15=7;                                                     //stloc				V_15
	IL_04f4:            /*goto IL_0005;*/goto IL_04f9;                              //br				IL_0005
	IL_04f9:            goto IL_04fb;                                               //br.s				IL_04fb
	IL_04fb:                                                                        //ldc.i4.0
	IL_04fc:            return false;                                               //ret

}
inline void Root::T_x123::M_x1(System::String^ A_0,System::IServiceProvider^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::IWindowCollection^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::IWindow^ Temp_4 = nullptr;
	System::Windows::Forms::Control^ Temp_5 = nullptr;
	//local variables.
	Reflector::IWindowManager^ V_0 = nullptr;
	Reflector::IWindow^ V_1 = nullptr;
	Root::T_x47^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_3=5;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.2
	IL_0015:                                                                        //ldtoken				Reflector::IWindowManager
	IL_001a:            Temp_0=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_001f:            Temp_1=A_1->GetService(Temp_0);                             //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0024:                                                                        //castclass				Reflector::IWindowManager
	IL_0029:            V_0=safe_cast<Reflector::IWindowManager^>(Temp_1);          //stloc.0
	IL_002a:                                                                        //ldloc.0
	IL_002b:            Temp_2=V_0->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0030:                                                                        //ldstr				L"\x6E22\x5624\x4326\x4728\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x6E38\x523A\x533C\x5B3E\x2E40\x3442"
	IL_0035:                                                                        //ldloc				V_3
	IL_0039:            Temp_3=a(L"\x6E22\x5624\x4326\x4728\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x6E38\x523A\x533C\x5B3E\x2E40\x3442",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003e:            Temp_4=Temp_2[Temp_3];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0043:            V_1=Temp_4;                                                 //stloc.1
	IL_0044:                                                                        //ldloc.1
	IL_0045:                                                                        //ldc.i4.1
	IL_0046:            V_1->Visible=true;                                          //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_004b:                                                                        //ldloc.1
	IL_004c:            Temp_5=V_1->Content;                                        //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_0051:                                                                        //castclass				Root::T_x47
	IL_0056:            V_2=safe_cast<Root::T_x47^>(Temp_5);                        //stloc.2
	IL_0057:                                                                        //ldloc.2
	IL_0058:                                                                        //ldarg.1
	IL_0059:            V_2->M_x1(A_0);                                             //callvirt				void Root::T_x47::M_x1(System::String^)
	IL_005e:            return;                                                     //ret

}
inline System::Boolean Root::T_x123::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_2=4;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x8
	IL_000e:            V_1=8;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0047;                                               //br.s				IL_0047
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00f6;case 1:goto IL_0108;case 2:goto IL_00a4;case 3:goto IL_0070;case 4:goto IL_012a;case 5:goto IL_00c8;case 6:goto IL_00e5;case 7:goto IL_0094;case 8:goto IL_0014;case 9:goto IL_0063;};//switch				(IL_00f6,IL_0108,IL_00a4,IL_0070,IL_012a,IL_00c8,IL_00e5,IL_0094,IL_0014,IL_0063)
	IL_0047:                                                                        //ldarg.0
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_7=this->F_x1;                                          //ldfld				System::Object^ Root::T_x123 F_x1
	IL_004e:            Temp_8=this->M_x1(Temp_7);                                  //call				System::Boolean Root::T_x123::M_x1(System::Object^)
	IL_0053:            if(!Temp_8)goto IL_0131;                                    //brfalse				IL_0131
	IL_0058:                                                                        //ldc.i4				0x9
	IL_005d:            V_1=9;                                                      //stloc				V_1
	IL_0061:            /*goto IL_0016;*/goto IL_0063;                              //br.s				IL_0016
	IL_0063:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_0065:                                                                        //ldc.i4				0x3
	IL_006a:            V_1=3;                                                      //stloc				V_1
	IL_006e:            /*goto IL_0016;*/goto IL_0070;                              //br.s				IL_0016
	IL_0070:                                                                        //ldloc.0
	IL_0071:                                                                        //ldstr				L"\x4F21\x4D23\x4525\x5A27\x4529\x5F2B\x412D\x562F\x4631\x1A33"
	IL_0076:                                                                        //ldloc				V_2
	IL_007a:            Temp_3=a(L"\x4F21\x4D23\x4525\x5A27\x4529\x5F2B\x412D\x562F\x4631\x1A33",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007f:            Temp_4=V_0->StartsWith(Temp_3);                             //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_0084:            if(!Temp_4)goto IL_0131;                                    //brfalse				IL_0131
	IL_0089:                                                                        //ldc.i4				0x7
	IL_008e:            V_1=7;                                                      //stloc				V_1
	IL_0092:            /*goto IL_0016;*/goto IL_0094;                              //br.s				IL_0016
	IL_0094:            goto IL_00f8;                                               //br.s				IL_00f8
	IL_0096:                                                                        //ldc.i4				0x2
	IL_009b:            V_1=2;                                                      //stloc				V_1
	IL_009f:            /*goto IL_0016;*/goto IL_00a4;                              //br				IL_0016
	IL_00a4:                                                                        //ldloc.0
	IL_00a5:                                                                        //ldstr				L"\x5121\x5D23\x5525\x5C27\x4F29\x412B\x002D"
	IL_00aa:                                                                        //ldloc				V_2
	IL_00ae:            Temp_1=a(L"\x5121\x5D23\x5525\x5C27\x4F29\x412B\x002D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:            Temp_2=V_0->StartsWith(Temp_1);                             //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_00b8:            if(!Temp_2)goto IL_0065;                                    //brfalse.s				IL_0065
	IL_00ba:                                                                        //ldc.i4				0x5
	IL_00bf:            V_1=5;                                                      //stloc				V_1
	IL_00c3:            /*goto IL_0016;*/goto IL_00c8;                              //br				IL_0016
	IL_00c8:            goto IL_012f;                                               //br.s				IL_012f
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:                                                                        //ldarg.0
	IL_00cc:            Temp_5=this->F_x1;                                          //ldfld				System::Object^ Root::T_x123 F_x1
	IL_00d1:            Temp_6=this->M_x2(Temp_5);                                  //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_00d6:            V_0=Temp_6;                                                 //stloc.0
	IL_00d7:                                                                        //ldc.i4				0x6
	IL_00dc:            V_1=6;                                                      //stloc				V_1
	IL_00e0:            /*goto IL_0016;*/goto IL_00e5;                              //br				IL_0016
	IL_00e5:                                                                        //ldloc.0
	IL_00e6:            if(V_0==nullptr)goto IL_0131;                               //brfalse.s				IL_0131
	IL_00e8:                                                                        //ldc.i4				0x0
	IL_00ed:            V_1=0;                                                      //stloc				V_1
	IL_00f1:            /*goto IL_0016;*/goto IL_00f6;                              //br				IL_0016
	IL_00f6:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00f8:                                                                        //ldc.i4.1
	IL_00f9:            return true;                                                //ret
	IL_00fa:                                                                        //ldc.i4				0x1
	IL_00ff:            V_1=1;                                                      //stloc				V_1
	IL_0103:            /*goto IL_0016;*/goto IL_0108;                              //br				IL_0016
	IL_0108:                                                                        //ldc.i4.4
	IL_0109:                                                                        //dup
	IL_010a:                                                                        //dup
	IL_010b:                                                                        //ldc.i4.2
	IL_010c:                                                                        //sub
	IL_010d:                                                                        //blt				IL_0109
	IL_0112:                                                                        //pop
	IL_0113:                                                                        //ldloc.0
	IL_0114:            Temp_0=V_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0119:                                                                        //ldc.i4.0
	IL_011a:            if(Temp_0<=0)goto IL_0131;                                  //ble.s				IL_0131
	IL_011c:                                                                        //ldc.i4				0x4
	IL_0121:            V_1=4;                                                      //stloc				V_1
	IL_0125:            /*goto IL_0016;*/goto IL_012a;                              //br				IL_0016
	IL_012a:            goto IL_0096;                                               //br				IL_0096
	IL_012f:                                                                        //ldc.i4.1
	IL_0130:            return true;                                                //ret
	IL_0131:                                                                        //ldc.i4.0
	IL_0132:            return false;                                               //ret

}
inline System::String^ Root::T_x123::M_x2(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Globalization::CultureInfo^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	Reflector::CodeModel::IType^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	System::Boolean Temp_25 = false;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Globalization::CultureInfo^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::Globalization::CultureInfo^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::Object^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::Globalization::CultureInfo^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::Globalization::CultureInfo^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::Int32 Temp_51 = 0;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::Globalization::CultureInfo^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	System::Globalization::CultureInfo^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	//local variables.
	Reflector::CodeModel::INamespace^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::IMemberReference^ V_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_6 = nullptr;
	System::String^ V_7 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_8 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_9 = nullptr;
	Reflector::CodeModel::IEventReference^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_12=2;                                                     //stloc				V_12
	IL_0009:            goto IL_0093;                                               //br				IL_0093
	IL_000e:                                                                        //ldloc				V_11
	IL_0012:            switch(V_11){case 0:goto IL_0402;case 1:goto IL_026c;case 2:goto IL_01c5;case 3:goto IL_0281;case 4:goto IL_0100;case 5:goto IL_04a3;case 6:goto IL_0359;case 7:goto IL_0347;case 8:goto IL_00ed;case 9:goto IL_01e4;case 10:goto IL_03d6;case 11:goto IL_04bd;case 12:goto IL_03eb;case 13:goto IL_0399;case 14:goto IL_0473;case 15:goto IL_0326;case 16:goto IL_00a8;case 17:goto IL_04ce;case 18:goto IL_02f8;case 19:goto IL_04f4;case 20:goto IL_03ba;case 21:goto IL_048e;case 22:goto IL_00d8;case 23:goto IL_042f;case 24:goto IL_023a;case 25:goto IL_015f;case 26:goto IL_0140;case 27:goto IL_01f9;case 28:goto IL_012d;case 29:goto IL_00bc;case 30:goto IL_01b1;};//switch				(IL_0402,IL_026c,IL_01c5,IL_0281,IL_0100,IL_04a3,IL_0359,IL_0347,IL_00ed,IL_01e4,IL_03d6,IL_04bd,IL_03eb,IL_0399,IL_0473,IL_0326,IL_00a8,IL_04ce,IL_02f8,IL_04f4,IL_03ba,IL_048e,IL_00d8,IL_042f,IL_023a,IL_015f,IL_0140,IL_01f9,IL_012d,IL_00bc,IL_01b1)
	IL_0093:                                                                        //ldarg.1
	IL_0094:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_0099:            V_0=dynamic_cast<Reflector::CodeModel::INamespace^>(A_0);   //stloc.0
	IL_009a:                                                                        //ldc.i4				0x10
	IL_009f:            V_11=16;                                                    //stloc				V_11
	IL_00a3:            /*goto IL_000e;*/goto IL_00a8;                              //br				IL_000e
	IL_00a8:                                                                        //ldloc.0
	IL_00a9:            if(V_0==nullptr)goto IL_04a8;                               //brfalse				IL_04a8
	IL_00ae:                                                                        //ldc.i4				0x1d
	IL_00b3:            V_11=29;                                                    //stloc				V_11
	IL_00b7:            /*goto IL_000e;*/goto IL_00bc;                              //br				IL_000e
	IL_00bc:            goto IL_02b5;                                               //br				IL_02b5
	IL_00c1:                                                                        //ldloc.s				V_4
	IL_00c3:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_00c8:            V_8=dynamic_cast<Reflector::CodeModel::IFieldReference^>(V_4);//stloc.s				V_8
	IL_00ca:                                                                        //ldc.i4				0x16
	IL_00cf:            V_11=22;                                                    //stloc				V_11
	IL_00d3:            /*goto IL_000e;*/goto IL_00d8;                              //br				IL_000e
	IL_00d8:                                                                        //ldloc.s				V_8
	IL_00da:            if(V_8==nullptr)goto IL_0255;                               //brfalse				IL_0255
	IL_00df:                                                                        //ldc.i4				0x8
	IL_00e4:            V_11=8;                                                     //stloc				V_11
	IL_00e8:            /*goto IL_000e;*/goto IL_00ed;                              //br				IL_000e
	IL_00ed:            goto IL_038b;                                               //br				IL_038b
	IL_00f2:                                                                        //ldc.i4				0x4
	IL_00f7:            V_11=4;                                                     //stloc				V_11
	IL_00fb:            /*goto IL_000e;*/goto IL_0100;                              //br				IL_000e
	IL_0100:                                                                        //ldloc.s				V_6
	IL_0102:            Temp_12=safe_cast<Reflector::CodeModel::IMemberReference^>(V_6)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0107:                                                                        //ldstr				L"\x0E1F\x4121\x4723\x5225\x4727\x5829"
	IL_010c:                                                                        //ldloc				V_12
	IL_0110:            Temp_13=a(L"\x0E1F\x4121\x4723\x5225\x4727\x5829",V_12);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0115:            Temp_14=(Temp_12 == Temp_13);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_011a:            if(!Temp_14)goto IL_0434;                                   //brfalse				IL_0434
	IL_011f:                                                                        //ldc.i4				0x1c
	IL_0124:            V_11=28;                                                    //stloc				V_11
	IL_0128:            /*goto IL_000e;*/goto IL_012d;                              //br				IL_000e
	IL_012d:            goto IL_04dc;                                               //br				IL_04dc
	IL_0132:                                                                        //ldc.i4				0x1a
	IL_0137:            V_11=26;                                                    //stloc				V_11
	IL_013b:            /*goto IL_000e;*/goto IL_0140;                              //br				IL_000e
	IL_0140:                                                                        //ldloc.1
	IL_0141:            Temp_50=V_1->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0146:            Temp_51=Temp_50->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_014b:                                                                        //ldc.i4.0
	IL_014c:            if(Temp_51<=0)goto IL_023c;                                 //ble				IL_023c
	IL_0151:                                                                        //ldc.i4				0x19
	IL_0156:            V_11=25;                                                    //stloc				V_11
	IL_015a:            /*goto IL_000e;*/goto IL_015f;                              //br				IL_000e
	IL_015f:            goto IL_02c6;                                               //br				IL_02c6
	IL_0164:                                                                        //ldarg.0
	IL_0165:                                                                        //ldloc.s				V_5
	IL_0167:            Temp_26=this->M_x2(safe_cast<System::Object^>(V_5));        //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_016c:                                                                        //ldstr				L"\x0E1F"
	IL_0171:                                                                        //ldloc				V_12
	IL_0175:            Temp_27=a(L"\x0E1F",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017a:                                                                        //ldloc.s				V_8
	IL_017c:            Temp_28=safe_cast<Reflector::CodeModel::IMemberReference^>(V_8)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0181:            Temp_29=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0186:            Temp_30=Temp_28->ToLower(Temp_29);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_018b:            Temp_31=System::String::Concat(Temp_26,Temp_27,Temp_30);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0190:            return Temp_31;                                             //ret
	IL_0191:            Temp_36=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0196:            V_2=Temp_36;                                                //stloc.2
	IL_0197:                                                                        //ldloc.1
	IL_0198:            Temp_37=V_1->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_019d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_01a2:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_37);//stloc.3
	IL_01a3:                                                                        //ldc.i4				0x1e
	IL_01a8:            V_11=30;                                                    //stloc				V_11
	IL_01ac:            /*goto IL_000e;*/goto IL_01b1;                              //br				IL_000e
	IL_01b1:                                                                        //ldloc.3
	IL_01b2:            if(V_3==nullptr)goto IL_0132;                               //brfalse				IL_0132
	IL_01b7:                                                                        //ldc.i4				0x2
	IL_01bc:            V_11=2;                                                     //stloc				V_11
	IL_01c0:            /*goto IL_000e;*/goto IL_01c5;                              //br				IL_000e
	IL_01c5:            goto IL_02fd;                                               //br				IL_02fd
	IL_01ca:                                                                        //ldloc.s				V_7
	IL_01cc:            return V_7;                                                 //ret
	IL_01cd:                                                                        //ldloc.s				V_4
	IL_01cf:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_01d4:            V_10=dynamic_cast<Reflector::CodeModel::IEventReference^>(V_4);//stloc.s				V_10
	IL_01d6:                                                                        //ldc.i4				0x9
	IL_01db:            V_11=9;                                                     //stloc				V_11
	IL_01df:            /*goto IL_000e;*/goto IL_01e4;                              //br				IL_000e
	IL_01e4:                                                                        //ldloc.s				V_10
	IL_01e6:            if(V_10==nullptr)goto IL_04f9;                              //brfalse				IL_04f9
	IL_01eb:                                                                        //ldc.i4				0x1b
	IL_01f0:            V_11=27;                                                    //stloc				V_11
	IL_01f4:            /*goto IL_000e;*/goto IL_01f9;                              //br				IL_000e
	IL_01f9:            goto IL_0286;                                               //br				IL_0286
	IL_01fe:                                                                        //ldarg.0
	IL_01ff:                                                                        //ldloc.s				V_5
	IL_0201:            Temp_39=this->M_x2(safe_cast<System::Object^>(V_5));        //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_0206:                                                                        //ldstr				L"\x0E1F"
	IL_020b:                                                                        //ldloc				V_12
	IL_020f:            Temp_40=a(L"\x0E1F",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0214:                                                                        //ldloc.s				V_5
	IL_0216:            Temp_41=V_5->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_021b:            Temp_42=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0220:            Temp_43=Temp_41->ToLower(Temp_42);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_0225:            Temp_44=System::String::Concat(Temp_39,Temp_40,Temp_43);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_022a:            V_7=Temp_44;                                                //stloc.s				V_7
	IL_022c:                                                                        //ldc.i4				0x18
	IL_0231:            V_11=24;                                                    //stloc				V_11
	IL_0235:            /*goto IL_000e;*/goto IL_023a;                              //br				IL_000e
	IL_023a:            goto IL_01ca;                                               //br.s				IL_01ca
	IL_023c:                                                                        //ldloc.2
	IL_023d:                                                                        //ldloc.1
	IL_023e:            Temp_32=V_1->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0243:            Temp_33=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0248:            Temp_34=Temp_32->ToLower(Temp_33);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_024d:            Temp_35=System::String::Concat(V_2,Temp_34);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0252:            V_2=Temp_35;                                                //stloc.2
	IL_0253:                                                                        //ldloc.2
	IL_0254:            return V_2;                                                 //ret
	IL_0255:                                                                        //ldloc.s				V_4
	IL_0257:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_025c:            V_9=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(V_4);//stloc.s				V_9
	IL_025e:                                                                        //ldc.i4				0x1
	IL_0263:            V_11=1;                                                     //stloc				V_11
	IL_0267:            /*goto IL_000e;*/goto IL_026c;                              //br				IL_000e
	IL_026c:                                                                        //ldloc.s				V_9
	IL_026e:            if(V_9==nullptr)goto IL_01cd;                               //brfalse				IL_01cd
	IL_0273:                                                                        //ldc.i4				0x3
	IL_0278:            V_11=3;                                                     //stloc				V_11
	IL_027c:            /*goto IL_000e;*/goto IL_0281;                              //br				IL_000e
	IL_0281:            goto IL_035e;                                               //br				IL_035e
	IL_0286:                                                                        //ldarg.0
	IL_0287:                                                                        //ldloc.s				V_5
	IL_0289:            Temp_52=this->M_x2(safe_cast<System::Object^>(V_5));        //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_028e:                                                                        //ldstr				L"\x0E1F"
	IL_0293:                                                                        //ldloc				V_12
	IL_0297:            Temp_53=a(L"\x0E1F",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_029c:                                                                        //ldloc.s				V_10
	IL_029e:            Temp_54=safe_cast<Reflector::CodeModel::IMemberReference^>(V_10)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_02a3:            Temp_55=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_02a8:            Temp_56=Temp_54->ToLower(Temp_55);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_02ad:            Temp_57=System::String::Concat(Temp_52,Temp_53,Temp_56);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_02b2:            return Temp_57;                                             //ret
	IL_02b3:                                                                        //ldnull
	IL_02b4:            return nullptr;                                             //ret
	IL_02b5:                                                                        //ldloc.0
	IL_02b6:            Temp_59=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_02bb:            Temp_60=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_02c0:            Temp_61=Temp_59->ToLower(Temp_60);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_02c5:            return Temp_61;                                             //ret
	IL_02c6:                                                                        //ldloc.1
	IL_02c7:            Temp_45=V_1->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_02cc:            Temp_46=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_02d1:            Temp_47=Temp_45->ToLower(Temp_46);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_02d6:                                                                        //ldstr				L"\x0E1F"
	IL_02db:                                                                        //ldloc				V_12
	IL_02df:            Temp_48=a(L"\x0E1F",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e4:            Temp_49=System::String::Concat(Temp_47,Temp_48);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_02e9:            V_2=Temp_49;                                                //stloc.2
	IL_02ea:                                                                        //ldc.i4				0x12
	IL_02ef:            V_11=18;                                                    //stloc				V_11
	IL_02f3:            /*goto IL_000e;*/goto IL_02f8;                              //br				IL_000e
	IL_02f8:            goto IL_023c;                                               //br				IL_023c
	IL_02fd:                                                                        //ldarg.0
	IL_02fe:                                                                        //ldloc.3
	IL_02ff:            Temp_3=this->M_x2(safe_cast<System::Object^>(V_3));         //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_0304:                                                                        //ldstr				L"\x0E1F"
	IL_0309:                                                                        //ldloc				V_12
	IL_030d:            Temp_4=a(L"\x0E1F",V_12);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0312:            Temp_5=System::String::Concat(Temp_3,Temp_4);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0317:            V_2=Temp_5;                                                 //stloc.2
	IL_0318:                                                                        //ldc.i4				0xf
	IL_031d:            V_11=15;                                                    //stloc				V_11
	IL_0321:            /*goto IL_000e;*/goto IL_0326;                              //br				IL_000e
	IL_0326:            goto IL_023c;                                               //br				IL_023c
	IL_032b:                                                                        //ldloc.s				V_4
	IL_032d:            Temp_21=V_4->DeclaringType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0332:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0337:            V_5=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_21);//stloc.s				V_5
	IL_0339:                                                                        //ldc.i4				0x7
	IL_033e:            V_11=7;                                                     //stloc				V_11
	IL_0342:            /*goto IL_000e;*/goto IL_0347;                              //br				IL_000e
	IL_0347:                                                                        //ldloc.s				V_5
	IL_0349:            if(V_5!=nullptr)goto IL_03bf;                               //brtrue.s				IL_03bf
	IL_034b:                                                                        //ldc.i4				0x6
	IL_0350:            V_11=6;                                                     //stloc				V_11
	IL_0354:            /*goto IL_000e;*/goto IL_0359;                              //br				IL_000e
	IL_0359:            goto IL_02b3;                                               //br				IL_02b3
	IL_035e:                                                                        //ldarg.0
	IL_035f:                                                                        //ldloc.s				V_5
	IL_0361:            Temp_6=this->M_x2(safe_cast<System::Object^>(V_5));         //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_0366:                                                                        //ldstr				L"\x0E1F"
	IL_036b:                                                                        //ldloc				V_12
	IL_036f:            Temp_7=a(L"\x0E1F",V_12);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0374:                                                                        //ldloc.s				V_9
	IL_0376:            Temp_8=safe_cast<Reflector::CodeModel::IMemberReference^>(V_9)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_037b:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0380:            Temp_10=Temp_8->ToLower(Temp_9);                            //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_0385:            Temp_11=System::String::Concat(Temp_6,Temp_7,Temp_10);      //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_038a:            return Temp_11;                                             //ret
	IL_038b:                                                                        //ldc.i4				0xd
	IL_0390:            V_11=13;                                                    //stloc				V_11
	IL_0394:            /*goto IL_000e;*/goto IL_0399;                              //br				IL_000e
	IL_0399:                                                                        //ldloc.s				V_8
	IL_039b:            Temp_24=V_8->FieldType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_03a0:                                                                        //ldloc.s				V_5
	IL_03a2:            Temp_25=Temp_24->Equals(safe_cast<System::Object^>(V_5));   //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_03a7:            if(!Temp_25)goto IL_0164;                                   //brfalse				IL_0164
	IL_03ac:                                                                        //ldc.i4				0x14
	IL_03b1:            V_11=20;                                                    //stloc				V_11
	IL_03b5:            /*goto IL_000e;*/goto IL_03ba;                              //br				IL_000e
	IL_03ba:            goto IL_04d3;                                               //br				IL_04d3
	IL_03bf:                                                                        //ldloc.s				V_4
	IL_03c1:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_03c6:            V_6=dynamic_cast<Reflector::CodeModel::IMethodReference^>(V_4);//stloc.s				V_6
	IL_03c8:                                                                        //ldc.i4				0xa
	IL_03cd:            V_11=10;                                                    //stloc				V_11
	IL_03d1:            /*goto IL_000e;*/goto IL_03d6;                              //br				IL_000e
	IL_03d6:                                                                        //ldloc.s				V_6
	IL_03d8:            if(V_6==nullptr)goto IL_00c1;                               //brfalse				IL_00c1
	IL_03dd:                                                                        //ldc.i4				0xc
	IL_03e2:            V_11=12;                                                    //stloc				V_11
	IL_03e6:            /*goto IL_000e;*/goto IL_03eb;                              //br				IL_000e
	IL_03eb:            goto IL_03ed;                                               //br.s				IL_03ed
	IL_03ed:            Temp_23=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_03f2:            V_7=Temp_23;                                                //stloc.s				V_7
	IL_03f4:                                                                        //ldc.i4				0x0
	IL_03f9:            V_11=0;                                                     //stloc				V_11
	IL_03fd:            /*goto IL_000e;*/goto IL_0402;                              //br				IL_000e
	IL_0402:                                                                        //ldloc.s				V_6
	IL_0404:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(V_6)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0409:                                                                        //ldstr				L"\x0E1F\x4121\x5023\x4925\x5A27"
	IL_040e:                                                                        //ldloc				V_12
	IL_0412:            Temp_1=a(L"\x0E1F\x4121\x5023\x4925\x5A27",V_12);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0417:            Temp_2=(Temp_0 == Temp_1);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_041c:            if(!Temp_2)goto IL_00f2;                                    //brfalse				IL_00f2
	IL_0421:                                                                        //ldc.i4				0x17
	IL_0426:            V_11=23;                                                    //stloc				V_11
	IL_042a:            /*goto IL_000e;*/goto IL_042f;                              //br				IL_000e
	IL_042f:            goto IL_01fe;                                               //br				IL_01fe
	IL_0434:                                                                        //ldarg.0
	IL_0435:                                                                        //ldloc.s				V_5
	IL_0437:            Temp_15=this->M_x2(safe_cast<System::Object^>(V_5));        //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_043c:                                                                        //ldstr				L"\x0E1F"
	IL_0441:                                                                        //ldloc				V_12
	IL_0445:            Temp_16=a(L"\x0E1F",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_044a:                                                                        //ldloc.s				V_6
	IL_044c:            Temp_17=safe_cast<Reflector::CodeModel::IMemberReference^>(V_6)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0451:            Temp_18=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0456:            Temp_19=Temp_17->ToLower(Temp_18);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_045b:            Temp_20=System::String::Concat(Temp_15,Temp_16,Temp_19);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0460:            V_7=Temp_20;                                                //stloc.s				V_7
	IL_0462:            goto IL_0465;                                               //br.s				IL_0465
	IL_0464:                                                                        //break
	IL_0465:                                                                        //ldc.i4				0xe
	IL_046a:            V_11=14;                                                    //stloc				V_11
	IL_046e:            /*goto IL_000e;*/goto IL_0473;                              //br				IL_000e
	IL_0473:            goto IL_01ca;                                               //br				IL_01ca
	IL_0478:                                                                        //ldarg.1
	IL_0479:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_047e:            V_4=dynamic_cast<Reflector::CodeModel::IMemberReference^>(A_0);//stloc.s				V_4
	IL_0480:                                                                        //ldc.i4				0x15
	IL_0485:            V_11=21;                                                    //stloc				V_11
	IL_0489:            /*goto IL_000e;*/goto IL_048e;                              //br				IL_000e
	IL_048e:                                                                        //ldloc.s				V_4
	IL_0490:            if(V_4==nullptr)goto IL_04f9;                               //brfalse				IL_04f9
	IL_0495:                                                                        //ldc.i4				0x5
	IL_049a:            V_11=5;                                                     //stloc				V_11
	IL_049e:            /*goto IL_000e;*/goto IL_04a3;                              //br				IL_000e
	IL_04a3:            goto IL_032b;                                               //br				IL_032b
	IL_04a8:                                                                        //ldarg.1
	IL_04a9:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_04ae:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.1
	IL_04af:                                                                        //ldc.i4				0xb
	IL_04b4:            V_11=11;                                                    //stloc				V_11
	IL_04b8:            /*goto IL_000e;*/goto IL_04bd;                              //br				IL_000e
	IL_04bd:                                                                        //ldloc.1
	IL_04be:            if(V_1==nullptr)goto IL_0478;                               //brfalse.s				IL_0478
	IL_04c0:                                                                        //ldc.i4				0x11
	IL_04c5:            V_11=17;                                                    //stloc				V_11
	IL_04c9:            /*goto IL_000e;*/goto IL_04ce;                              //br				IL_000e
	IL_04ce:            goto IL_0191;                                               //br				IL_0191
	IL_04d3:                                                                        //ldarg.0
	IL_04d4:                                                                        //ldloc.s				V_5
	IL_04d6:            Temp_38=this->M_x2(safe_cast<System::Object^>(V_5));        //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_04db:            return Temp_38;                                             //ret
	IL_04dc:                                                                        //ldarg.0
	IL_04dd:                                                                        //ldloc.s				V_5
	IL_04df:            Temp_58=this->M_x2(safe_cast<System::Object^>(V_5));        //call				System::String^ Root::T_x123::M_x2(System::Object^)
	IL_04e4:            V_7=Temp_58;                                                //stloc.s				V_7
	IL_04e6:                                                                        //ldc.i4				0x13
	IL_04eb:            V_11=19;                                                    //stloc				V_11
	IL_04ef:            /*goto IL_000e;*/goto IL_04f4;                              //br				IL_000e
	IL_04f4:            goto IL_01ca;                                               //br				IL_01ca
	IL_04f9:            Temp_22=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_04fe:            return Temp_22;                                             //ret

}
inline void Root::T_x123::M_x2(System::String^ A_0,System::IServiceProvider^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	array<System::Object^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_2=2;                                                      //stloc				V_2
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:            Temp_0=System::Globalization::CultureInfo::InstalledUICulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InstalledUICulture()
	IL_0011:                                                                        //ldstr				L"\x481F\x5621\x5023\x5625\x1227\x0529\x032B\x432D\x432F\x5631\x5A33\x0435\x1637\x5739\x553B\x5D3D\x323F\x2D41\x3743\x2945\x2E47\x3E49\x624B\x2D4D\x3F4F\x3F51\x7B53\x3355\x3657\x7759\x295B\x2D5D\x4F5F\x0E61\x0D63\x0465\x1A67\x0B69\x1E6B\x176D\x586F\x1671\x4973\x1F75\x1C77\x1F79\x557B\x517D\xFB7F\xB281\xF983"
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            Temp_1=a(L"\x481F\x5621\x5023\x5625\x1227\x0529\x032B\x432D\x432F\x5631\x5A33\x0435\x1637\x5739\x553B\x5D3D\x323F\x2D41\x3743\x2945\x2E47\x3E49\x624B\x2D4D\x3F4F\x3F51\x7B53\x3355\x3657\x7759\x295B\x2D5D\x4F5F\x0E61\x0D63\x0465\x1A67\x0B69\x1E6B\x176D\x586F\x1671\x4973\x1F75\x1C77\x1F79\x557B\x517D\xFB7F\xB281\xF983",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001f:                                                                        //ldc.i4.1
	IL_0020:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0025:            V_1=Temp_2;                                                 //stloc.1
	IL_0026:                                                                        //ldloc.1
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            V_1[0]=safe_cast<System::Object^>(A_0);                     //stelem.ref
	IL_002a:                                                                        //ldloc.1
	IL_002b:            Temp_3=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_1);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0030:            V_0=Temp_3;                                                 //stloc.0
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldloc.0
	IL_0033:                                                                        //ldarg.2
	IL_0034:            this->M_x1(V_0,A_1);                                        //call				void Root::T_x123::M_x1(System::String^,System::IServiceProvider^)
	IL_0039:            return;                                                     //ret

}
