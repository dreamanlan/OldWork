#include "global_xref.h"

inline Root::T_x22::T_x22(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Stack^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::Stack();                  //newobj				void System::Collections::Stack::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::Collections::Stack^ Root::T_x22 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0011:            this->F_x2=Temp_1;                                          //stfld				System::Collections::ArrayList^ Root::T_x22 F_x2
	IL_0016:                                                                        //ldarg.0
	IL_0017:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            this->M_x1(A_0);                                            //call				void Root::T_x22::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_2=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x22 F_x2
	IL_002a:            Temp_3=Temp_2->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_002f:            this->F_x12=Temp_3;                                         //stfld				System::Collections::IEnumerator^ Root::T_x22 F_x12
	IL_0034:            return;                                                     //ret

}
inline System::Object^ Root::T_x22::M_x1()
//System::Collections::IEnumerator^::get_Current by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x22 F_x12
	IL_0006:            Temp_1=Temp_0->Current;                                     //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x22::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Stack^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IInstruction^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IInstructionCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_7 = nullptr;
	System::Collections::ArrayList^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Int32 Temp_10 = 0;
	System::Collections::Stack^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Int32 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	System::Collections::ArrayList^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Object^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	System::Int32 Temp_19 = 0;
	Reflector::CodeModel::IInstruction^ Temp_20 = nullptr;
	Reflector::CodeModel::IInstruction^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodBody^ V_0 = nullptr;
	Reflector::CodeModel::IInstructionCollection^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IInstruction^ V_3 = nullptr;
	Reflector::CodeModel::IInstruction^ V_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_5 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	Reflector::CodeModel::IInstruction^ V_8 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_9 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:            goto IL_008e;                                               //br				IL_008e
	IL_0005:                                                                        //ldloc				V_11
	IL_0009:            switch(V_11){case 0:goto IL_0295;case 1:goto IL_01d1;case 2:goto IL_00c8;case 3:goto IL_0149;case 4:goto IL_0379;case 5:goto IL_02d1;case 6:goto IL_024f;case 7:goto IL_023a;case 8:goto IL_00fe;case 9:goto IL_0329;case 10:goto IL_035d;case 11:goto IL_0282;case 12:goto IL_0164;case 13:goto IL_02fd;case 14:goto IL_0262;case 15:goto IL_03ab;case 16:goto IL_02ea;case 17:goto IL_02b0;case 18:goto IL_0219;case 19:goto IL_01b8;case 20:goto IL_0346;case 21:goto IL_0316;case 22:goto IL_00e9;case 23:goto IL_01ea;case 24:goto IL_03c7;case 25:goto IL_00b4;case 26:goto IL_0114;case 27:goto IL_018a;case 28:goto IL_0134;case 29:goto IL_01fd;case 30:goto IL_01a5;case 31:goto IL_038e;};//switch				(IL_0295,IL_01d1,IL_00c8,IL_0149,IL_0379,IL_02d1,IL_024f,IL_023a,IL_00fe,IL_0329,IL_035d,IL_0282,IL_0164,IL_02fd,IL_0262,IL_03ab,IL_02ea,IL_02b0,IL_0219,IL_01b8,IL_0346,IL_0316,IL_00e9,IL_01ea,IL_03c7,IL_00b4,IL_0114,IL_018a,IL_0134,IL_01fd,IL_01a5,IL_038e)
	IL_008e:                                                                        //ldarg.0
	IL_008f:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::Stack^ Root::T_x22 F_x1
	IL_0094:                                                                        //ldarg.1
	IL_0095:            Temp_0->Push(safe_cast<System::Object^>(A_0));              //callvirt				void System::Collections::Stack::Push(System::Object^)
	IL_009a:                                                                        //ldarg.1
	IL_009b:            Temp_1=A_0->Body;                                           //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_00a0:                                                                        //isinst				Reflector::CodeModel::IMethodBody
	IL_00a5:            V_0=dynamic_cast<Reflector::CodeModel::IMethodBody^>(Temp_1);//stloc.0
	IL_00a6:                                                                        //ldc.i4				0x19
	IL_00ab:            V_11=25;                                                    //stloc				V_11
	IL_00af:            /*goto IL_0005;*/goto IL_00b4;                              //br				IL_0005
	IL_00b4:                                                                        //ldloc.0
	IL_00b5:            if(V_0==nullptr)goto IL_03cc;                               //brfalse				IL_03cc
	IL_00ba:                                                                        //ldc.i4				0x2
	IL_00bf:            V_11=2;                                                     //stloc				V_11
	IL_00c3:            /*goto IL_0005;*/goto IL_00c8;                              //br				IL_0005
	IL_00c8:            goto IL_02d3;                                               //br				IL_02d3
	IL_00cd:                                                                        //ldloc.s				V_8
	IL_00cf:            Temp_4=V_8->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_00d4:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_00d9:            V_9=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_4);//stloc.s				V_9
	IL_00db:                                                                        //ldc.i4				0x16
	IL_00e0:            V_11=22;                                                    //stloc				V_11
	IL_00e4:            /*goto IL_0005;*/goto IL_00e9;                              //br				IL_0005
	IL_00e9:                                                                        //ldloc.s				V_9
	IL_00eb:            if(V_9==nullptr)goto IL_01d6;                               //brfalse				IL_01d6
	IL_00f0:                                                                        //ldc.i4				0x8
	IL_00f5:            V_11=8;                                                     //stloc				V_11
	IL_00f9:            /*goto IL_0005;*/goto IL_00fe;                              //br				IL_0005
	IL_00fe:            goto IL_0362;                                               //br				IL_0362
	IL_0103:                                                                        //ldc.i4.0
	IL_0104:            V_7=0;                                                      //stloc.s				V_7
	IL_0106:                                                                        //ldc.i4				0x1a
	IL_010b:            V_11=26;                                                    //stloc				V_11
	IL_010f:            /*goto IL_0005;*/goto IL_0114;                              //br				IL_0005
	IL_0114:            goto IL_0287;                                               //br				IL_0287
	IL_0119:                                                                        //ldloc.3
	IL_011a:            Temp_17=V_3->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_011f:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0124:            V_5=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_17);//stloc.s				V_5
	IL_0126:                                                                        //ldc.i4				0x1c
	IL_012b:            V_11=28;                                                    //stloc				V_11
	IL_012f:            /*goto IL_0005;*/goto IL_0134;                              //br				IL_0005
	IL_0134:                                                                        //ldloc.s				V_5
	IL_0136:            if(V_5==nullptr)goto IL_034b;                               //brfalse				IL_034b
	IL_013b:                                                                        //ldc.i4				0x3
	IL_0140:            V_11=3;                                                     //stloc				V_11
	IL_0144:            /*goto IL_0005;*/goto IL_0149;                              //br				IL_0005
	IL_0149:            goto IL_021e;                                               //br				IL_021e
	IL_014e:                                                                        //ldarg.0
	IL_014f:                                                                        //ldloc.s				V_10
	IL_0151:            this->M_x1(V_10);                                           //call				void Root::T_x22::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0156:                                                                        //ldc.i4				0xc
	IL_015b:            V_11=12;                                                    //stloc				V_11
	IL_015f:            /*goto IL_0005;*/goto IL_0164;                              //br				IL_0005
	IL_0164:            goto IL_0167;                                               //br.s				IL_0167
	IL_0166:                                                                        //break
	IL_0167:            goto IL_01d6;                                               //br.s				IL_01d6
	IL_0169:                                                                        //ldloc.1
	IL_016a:                                                                        //ldloc.2
	IL_016b:            Temp_20=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IInstruction^ Reflector::CodeModel::IInstructionCollection::get_Item(System::Int32)
	IL_0170:            V_3=Temp_20;                                                //stloc.3
	IL_0171:                                                                        //ldloc.1
	IL_0172:                                                                        //ldloc.2
	IL_0173:                                                                        //ldc.i4.1
	IL_0174:                                                                        //add
	IL_0175:            Temp_21=V_1[(V_2 + 1)];                                     //callvirt				Reflector::CodeModel::IInstruction^ Reflector::CodeModel::IInstructionCollection::get_Item(System::Int32)
	IL_017a:            V_4=Temp_21;                                                //stloc.s				V_4
	IL_017c:                                                                        //ldc.i4				0x1b
	IL_0181:            V_11=27;                                                    //stloc				V_11
	IL_0185:            /*goto IL_0005;*/goto IL_018a;                              //br				IL_0005
	IL_018a:                                                                        //ldloc.3
	IL_018b:            Temp_18=V_3->Code;                                          //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_0190:                                                                        //ldc.i4.s				115
	IL_0192:            if(Temp_18!=115)goto IL_034b;                               //bne.un				IL_034b
	IL_0197:                                                                        //ldc.i4				0x1e
	IL_019c:            V_11=30;                                                    //stloc				V_11
	IL_01a0:            /*goto IL_0005;*/goto IL_01a5;                              //br				IL_0005
	IL_01a5:            goto IL_02ef;                                               //br				IL_02ef
	IL_01aa:                                                                        //ldc.i4				0x13
	IL_01af:            V_11=19;                                                    //stloc				V_11
	IL_01b3:            /*goto IL_0005;*/goto IL_01b8;                              //br				IL_0005
	IL_01b8:                                                                        //ldloc.s				V_8
	IL_01ba:            Temp_14=V_8->Code;                                          //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_01bf:                                                                        //ldc.i4.s				111
	IL_01c1:            if(Temp_14!=111)goto IL_01d6;                               //bne.un.s				IL_01d6
	IL_01c3:                                                                        //ldc.i4				0x1
	IL_01c8:            V_11=1;                                                     //stloc				V_11
	IL_01cc:            /*goto IL_0005;*/goto IL_01d1;                              //br				IL_0005
	IL_01d1:            goto IL_00cd;                                               //br				IL_00cd
	IL_01d6:                                                                        //ldloc.s				V_7
	IL_01d8:                                                                        //ldc.i4.1
	IL_01d9:                                                                        //add
	IL_01da:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_01dc:                                                                        //ldc.i4				0x17
	IL_01e1:            V_11=23;                                                    //stloc				V_11
	IL_01e5:            /*goto IL_0005;*/goto IL_01ea;                              //br				IL_0005
	IL_01ea:            goto IL_0287;                                               //br				IL_0287
	IL_01ef:                                                                        //ldc.i4				0x1d
	IL_01f4:            V_11=29;                                                    //stloc				V_11
	IL_01f8:            /*goto IL_0005;*/goto IL_01fd;                              //br				IL_0005
	IL_01fd:                                                                        //ldloc.2
	IL_01fe:                                                                        //ldloc.1
	IL_01ff:            Temp_19=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0204:                                                                        //ldc.i4.1
	IL_0205:                                                                        //sub
	IL_0206:            if(V_2<(Temp_19 - 1))goto IL_0169;                          //blt				IL_0169
	IL_020b:                                                                        //ldc.i4				0x12
	IL_0210:            V_11=18;                                                    //stloc				V_11
	IL_0214:            /*goto IL_0005;*/goto IL_0219;                              //br				IL_0005
	IL_0219:            goto IL_0103;                                               //br				IL_0103
	IL_021e:                                                                        //ldloc.s				V_5
	IL_0220:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(V_5)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0225:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_022a:            V_6=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_6);//stloc.s				V_6
	IL_022c:                                                                        //ldc.i4				0x7
	IL_0231:            V_11=7;                                                     //stloc				V_11
	IL_0235:            /*goto IL_0005;*/goto IL_023a;                              //br				IL_0005
	IL_023a:                                                                        //ldloc.s				V_6
	IL_023c:            if(V_6==nullptr)goto IL_034b;                               //brfalse				IL_034b
	IL_0241:                                                                        //ldc.i4				0x6
	IL_0246:            V_11=6;                                                     //stloc				V_11
	IL_024a:            /*goto IL_0005;*/goto IL_024f;                              //br				IL_0005
	IL_024f:            goto IL_031b;                                               //br				IL_031b
	IL_0254:                                                                        //ldc.i4				0xe
	IL_0259:            V_11=14;                                                    //stloc				V_11
	IL_025d:            /*goto IL_0005;*/goto IL_0262;                              //br				IL_0005
	IL_0262:                                                                        //ldarg.0
	IL_0263:            Temp_11=this->F_x1;                                         //ldfld				System::Collections::Stack^ Root::T_x22 F_x1
	IL_0268:                                                                        //ldloc.s				V_10
	IL_026a:            Temp_12=Temp_11->Contains(safe_cast<System::Object^>(V_10));//callvirt				System::Boolean System::Collections::Stack::Contains(System::Object^)
	IL_026f:            if(Temp_12)goto IL_01d6;                                    //brtrue				IL_01d6
	IL_0274:                                                                        //ldc.i4				0xb
	IL_0279:            V_11=11;                                                    //stloc				V_11
	IL_027d:            /*goto IL_0005;*/goto IL_0282;                              //br				IL_0005
	IL_0282:            goto IL_014e;                                               //br				IL_014e
	IL_0287:                                                                        //ldc.i4				0x0
	IL_028c:            V_11=0;                                                     //stloc				V_11
	IL_0290:            /*goto IL_0005;*/goto IL_0295;                              //br				IL_0005
	IL_0295:                                                                        //ldloc.s				V_7
	IL_0297:                                                                        //ldloc.1
	IL_0298:            Temp_2=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_029d:            if(V_7<Temp_2)goto IL_0393;                                 //blt				IL_0393
	IL_02a2:                                                                        //ldc.i4				0x11
	IL_02a7:            V_11=17;                                                    //stloc				V_11
	IL_02ab:            /*goto IL_0005;*/goto IL_02b0;                              //br				IL_0005
	IL_02b0:            goto IL_03cc;                                               //br				IL_03cc
	IL_02b5:                                                                        //ldarg.0
	IL_02b6:            Temp_15=this->F_x2;                                         //ldfld				System::Collections::ArrayList^ Root::T_x22 F_x2
	IL_02bb:                                                                        //ldloc.s				V_6
	IL_02bd:            Temp_16=Temp_15->Add(safe_cast<System::Object^>(V_6));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_02c2:                                                                        //pop
	IL_02c3:                                                                        //ldc.i4				0x5
	IL_02c8:            V_11=5;                                                     //stloc				V_11
	IL_02cc:            /*goto IL_0005;*/goto IL_02d1;                              //br				IL_0005
	IL_02d1:            goto IL_034b;                                               //br.s				IL_034b
	IL_02d3:                                                                        //ldloc.0
	IL_02d4:            Temp_5=V_0->Instructions;                                   //callvirt				Reflector::CodeModel::IInstructionCollection^ Reflector::CodeModel::IMethodBody::get_Instructions()
	IL_02d9:            V_1=Temp_5;                                                 //stloc.1
	IL_02da:                                                                        //ldc.i4.0
	IL_02db:            V_2=0;                                                      //stloc.2
	IL_02dc:                                                                        //ldc.i4				0x10
	IL_02e1:            V_11=16;                                                    //stloc				V_11
	IL_02e5:            /*goto IL_0005;*/goto IL_02ea;                              //br				IL_0005
	IL_02ea:            goto IL_01ef;                                               //br				IL_01ef
	IL_02ef:                                                                        //ldc.i4				0xd
	IL_02f4:            V_11=13;                                                    //stloc				V_11
	IL_02f8:            /*goto IL_0005;*/goto IL_02fd;                              //br				IL_0005
	IL_02fd:                                                                        //ldloc.s				V_4
	IL_02ff:            Temp_10=V_4->Code;                                          //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_0304:                                                                        //ldc.i4.s				122
	IL_0306:            if(Temp_10!=122)goto IL_034b;                               //bne.un.s				IL_034b
	IL_0308:                                                                        //ldc.i4				0x15
	IL_030d:            V_11=21;                                                    //stloc				V_11
	IL_0311:            /*goto IL_0005;*/goto IL_0316;                              //br				IL_0005
	IL_0316:            goto IL_0119;                                               //br				IL_0119
	IL_031b:                                                                        //ldc.i4				0x9
	IL_0320:            V_11=9;                                                     //stloc				V_11
	IL_0324:            /*goto IL_0005;*/goto IL_0329;                              //br				IL_0005
	IL_0329:                                                                        //ldarg.0
	IL_032a:            Temp_8=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x22 F_x2
	IL_032f:                                                                        //ldloc.s				V_6
	IL_0331:            Temp_9=Temp_8->Contains(safe_cast<System::Object^>(V_6));   //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_0336:            if(Temp_9)goto IL_034b;                                     //brtrue.s				IL_034b
	IL_0338:                                                                        //ldc.i4				0x14
	IL_033d:            V_11=20;                                                    //stloc				V_11
	IL_0341:            /*goto IL_0005;*/goto IL_0346;                              //br				IL_0005
	IL_0346:            goto IL_02b5;                                               //br				IL_02b5
	IL_034b:                                                                        //ldloc.2
	IL_034c:                                                                        //ldc.i4.1
	IL_034d:                                                                        //add
	IL_034e:            V_2=(V_2 + 1);                                              //stloc.2
	IL_034f:                                                                        //ldc.i4				0xa
	IL_0354:            V_11=10;                                                    //stloc				V_11
	IL_0358:            /*goto IL_0005;*/goto IL_035d;                              //br				IL_0005
	IL_035d:            goto IL_01ef;                                               //br				IL_01ef
	IL_0362:                                                                        //ldloc.s				V_9
	IL_0364:            Temp_7=V_9->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0369:            V_10=Temp_7;                                                //stloc.s				V_10
	IL_036b:                                                                        //ldc.i4				0x4
	IL_0370:            V_11=4;                                                     //stloc				V_11
	IL_0374:            /*goto IL_0005;*/goto IL_0379;                              //br				IL_0005
	IL_0379:                                                                        //ldloc.s				V_10
	IL_037b:            if(V_10==nullptr)goto IL_01d6;                              //brfalse				IL_01d6
	IL_0380:                                                                        //ldc.i4				0x1f
	IL_0385:            V_11=31;                                                    //stloc				V_11
	IL_0389:            /*goto IL_0005;*/goto IL_038e;                              //br				IL_0005
	IL_038e:            goto IL_0254;                                               //br				IL_0254
	IL_0393:                                                                        //ldloc.1
	IL_0394:                                                                        //ldloc.s				V_7
	IL_0396:            Temp_3=V_1[V_7];                                            //callvirt				Reflector::CodeModel::IInstruction^ Reflector::CodeModel::IInstructionCollection::get_Item(System::Int32)
	IL_039b:            V_8=Temp_3;                                                 //stloc.s				V_8
	IL_039d:                                                                        //ldc.i4				0xf
	IL_03a2:            V_11=15;                                                    //stloc				V_11
	IL_03a6:            /*goto IL_0005;*/goto IL_03ab;                              //br				IL_0005
	IL_03ab:                                                                        //ldloc.s				V_8
	IL_03ad:            Temp_13=V_8->Code;                                          //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_03b2:                                                                        //ldc.i4.s				40
	IL_03b4:            if(Temp_13==40)goto IL_00cd;                                //beq				IL_00cd
	IL_03b9:                                                                        //ldc.i4				0x18
	IL_03be:            V_11=24;                                                    //stloc				V_11
	IL_03c2:            /*goto IL_0005;*/goto IL_03c7;                              //br				IL_0005
	IL_03c7:            goto IL_01aa;                                               //br				IL_01aa
	IL_03cc:            return;                                                     //ret

}
inline System::Boolean Root::T_x22::M_x12()
//System::Collections::IEnumerator^::MoveNext by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x22 F_x12
	IL_0006:            Temp_1=Temp_0->MoveNext();                                  //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x22::M_x2()
//System::Collections::IEnumerator^::Reset by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x22 F_x12
	IL_0006:            Temp_0->Reset();                                            //callvirt				void System::Collections::IEnumerator::Reset()
	IL_000b:            return;                                                     //ret

}
