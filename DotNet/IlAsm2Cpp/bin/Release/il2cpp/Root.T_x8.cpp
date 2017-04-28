#include "global_xref.h"

inline Root::T_x8::T_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x179^ Temp_0 = nullptr;
	Root::T_x178^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew Root::T_x179();                                //newobj				void Root::T_x179::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				Root::T_x179^ Root::T_x8 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=gcnew Root::T_x178();                                //newobj				void Root::T_x178::.ctor()
	IL_0011:            this->F_x2=Temp_1;                                          //stfld				Root::T_x178^ Root::T_x8 F_x2
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldnull
	IL_0018:            this->F_x12=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x8 F_x12
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldnull
	IL_001f:            this->F_x13=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x8 F_x13
	IL_0024:                                                                        //ldarg.0
	IL_0025:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_002a:            return;                                                     //ret

}
inline Root::T_x178^ Root::T_x8::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x178^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x178^ Root::T_x8 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x8::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x13=A_0;                                            //stfld				System::String^ Root::T_x8 F_x13
	IL_0007:            return;                                                     //ret

}
inline Root::T_x179^ Root::T_x8::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x179^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x179^ Root::T_x8 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x8::M_x13()
//System::Object^::ToString by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Root::T_x178^ Temp_4 = nullptr;
	System::Collections::IEnumerator^ Temp_5 = nullptr;
	Root::T_x179^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Object^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::IO::StringReader^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
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
	Root::T_x179^ Temp_24 = nullptr;
	System::Collections::IEnumerator^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Boolean Temp_28 = false;
	System::Object^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	Root::T_x177^ V_1 = nullptr;
	Root::T_x8^ V_2 = nullptr;
	System::IO::StringReader^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_9=17;                                                     //stloc				V_9
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:            goto IL_0049;                                               //br.s				IL_0049
	IL_0018:                                                                        //ldloc				V_7
	IL_001c:            switch(V_7){case 0:goto IL_0091;case 1:goto IL_0167;case 2:goto IL_043f;case 3:goto IL_0424;case 4:goto IL_03ea;case 5:goto IL_00b0;case 6:goto IL_0121;case 7:goto IL_0194;case 8:goto IL_03d1;case 9:goto IL_0081;};//switch				(IL_0091,IL_0167,IL_043f,IL_0424,IL_03ea,IL_00b0,IL_0121,IL_0194,IL_03d1,IL_0081)
	IL_0049:                                                                        //ldloc.0
	IL_004a:                                                                        //ldstr				L"\x132E"
	IL_004f:                                                                        //ldloc				V_9
	IL_0053:            Temp_2=a(L"\x132E",V_9);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_005d:                                                                        //ldloc.0
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_3=this->M_x8();                                        //call				System::String^ Root::T_x8::M_x8()
	IL_0064:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_4=this->M_x1();                                        //call				Root::T_x178^ Root::T_x8::M_x1()
	IL_006f:            Temp_5=Temp_4->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ Root::T_x178::GetEnumerator()
	IL_0074:            V_5=Temp_5;                                                 //stloc.s				V_5
	IL_0076:                                                                        //ldc.i4				0x9
	IL_007b:            V_7=9;                                                      //stloc				V_7
	IL_007f:            /*goto IL_0018;*/goto IL_0081;                              //br.s				IL_0018
	IL_0081:            /*goto IL_02d8;*/goto IL_02D702;                            //br				IL_02d8
	IL_0086:                                                                        //ldc.i4				0x0
	IL_008b:            V_7=0;                                                      //stloc				V_7
	IL_008f:            /*goto IL_0018;*/goto IL_0091;                              //br.s				IL_0018
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_6=this->M_x12();                                       //call				Root::T_x179^ Root::T_x8::M_x12()
	IL_0097:            Temp_7=Temp_6->M_x2();                                      //callvirt				System::Int32 Root::T_x179::M_x2()
	IL_009c:                                                                        //ldc.i4.0
	IL_009d:            if(Temp_7<=0)goto IL_03c3;                                  //ble				IL_03c3
	IL_00a2:                                                                        //ldc.i4				0x5
	IL_00a7:            V_7=5;                                                      //stloc				V_7
	IL_00ab:            /*goto IL_0018;*/goto IL_00b0;                              //br				IL_0018
	IL_00b0:            goto IL_03ef;                                               //br				IL_03ef
	IL_00b5:                                                                        //ldc.i4.2
	IL_00b6:                                                                        //dup
	IL_00b7:                                                                        //dup
	IL_00b8:                                                                        //ldc.i4.4
	IL_00b9:                                                                        //sub
	IL_00ba:                                                                        //blt				IL_00b6
	IL_00bf:                                                                        //pop
	IL_00c0:                                                                        //ldloc.0
	IL_00c1:                                                                        //ldstr				L"\x112E"
	IL_00c6:                                                                        //ldloc				V_9
	IL_00ca:            Temp_17=a(L"\x112E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cf:            V_0->Write(Temp_17);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:                                                                        //ldarg.0
	IL_00d6:            Temp_18=this->M_x2();                                       //call				System::String^ Root::T_x8::M_x2()
	IL_00db:            V_0->Write(Temp_18);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:                                                                        //ldstr				L"\x132E\x1E30"
	IL_00e6:                                                                        //ldloc				V_9
	IL_00ea:            Temp_19=a(L"\x132E\x1E30",V_9);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ef:                                                                        //ldarg.0
	IL_00f0:            Temp_20=this->M_x8();                                       //call				System::String^ Root::T_x8::M_x8()
	IL_00f5:                                                                        //ldstr				L"\x112E"
	IL_00fa:                                                                        //ldloc				V_9
	IL_00fe:            Temp_21=a(L"\x112E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0103:            Temp_22=System::String::Concat(Temp_19,Temp_20,Temp_21);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0108:            V_0->Write(Temp_22);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_010d:                                                                        //ldloc.0
	IL_010e:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0113:                                                                        //ldc.i4				0x6
	IL_0118:            V_7=6;                                                      //stloc				V_7
	IL_011c:            /*goto IL_0018;*/goto IL_0121;                              //br				IL_0018
	IL_0121:            goto IL_0429;                                               //br				IL_0429
	IL_0126:                                                                        //ldloc.0
	IL_0127:                                                                        //ldstr				L"\x132E\x1E30"
	IL_012c:                                                                        //ldloc				V_9
	IL_0130:            Temp_32=a(L"\x132E\x1E30",V_9);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0135:                                                                        //ldarg.0
	IL_0136:            Temp_33=this->M_x8();                                       //call				System::String^ Root::T_x8::M_x8()
	IL_013b:                                                                        //ldstr				L"\x112E"
	IL_0140:                                                                        //ldloc				V_9
	IL_0144:            Temp_34=a(L"\x112E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0149:            Temp_35=System::String::Concat(Temp_32,Temp_33,Temp_34);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_014e:            V_0->Write(Temp_35);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0153:                                                                        //ldloc.0
	IL_0154:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0159:                                                                        //ldc.i4				0x1
	IL_015e:            V_7=1;                                                      //stloc				V_7
	IL_0162:            /*goto IL_0018;*/goto IL_0167;                              //br				IL_0018
	IL_0167:            goto IL_0429;                                               //br				IL_0429
	IL_016c:                                                                        //ldloc.0
	IL_016d:                                                                        //ldstr				L"\x002E\x0F30"
	IL_0172:                                                                        //ldloc				V_9
	IL_0176:            Temp_27=a(L"\x002E\x0F30",V_9);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017b:            V_0->Write(Temp_27);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0180:                                                                        //ldloc.0
	IL_0181:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0186:                                                                        //ldc.i4				0x7
	IL_018b:            V_7=7;                                                      //stloc				V_7
	IL_018f:            /*goto IL_0018;*/goto IL_0194;                              //br				IL_0018
	IL_0194:            goto IL_0429;                                               //br				IL_0429
	IL_019401:          try{
	IL_0199:                                                                        //ldc.i4				0x6
	IL_019e:            V_7=6;                                                      //stloc				V_7
	IL_01a2:            /*goto IL_01a6;*/goto IL_01a4;                              //br.s				IL_01a6
	IL_01a4:            goto IL_01cf;                                               //br.s				IL_01cf
	IL_01a6:                                                                        //ldloc				V_7
	IL_01aa:            switch(V_7){case 0:goto IL_01f5;case 1:goto IL_0282;case 2:goto IL_0258;case 3:goto IL_0248;case 4:goto IL_0221;case 5:goto IL_0231;case 6:goto IL_01a4;case 7:goto IL_0272;};//switch				(IL_01f5,IL_0282,IL_0258,IL_0248,IL_0221,IL_0231,IL_01a4,IL_0272)
	IL_01cf:            goto IL_024a;                                               //br.s				IL_024a
	IL_01d1:                                                                        //ldloc.s				V_5
	IL_01d3:            Temp_10=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_01d8:                                                                        //castclass				Root::T_x8
	IL_01dd:            V_2=safe_cast<Root::T_x8^>(Temp_10);                        //stloc.2
	IL_01de:                                                                        //ldloc.2
	IL_01df:            Temp_11=V_2->M_x13();                                       //callvirt				System::String^ Root::T_x8::M_x13()
	IL_01e4:            Temp_12=gcnew System::IO::StringReader(Temp_11);            //newobj				void System::IO::StringReader::.ctor(System::String^)
	IL_01e9:            V_3=Temp_12;                                                //stloc.3
	IL_01ea:                                                                        //ldc.i4				0x0
	IL_01ef:            V_7=0;                                                      //stloc				V_7
	IL_01f3:            /*goto IL_01a6;*/goto IL_01f5;                              //br.s				IL_01a6
	IL_01f5:            goto IL_0223;                                               //br.s				IL_0223
	IL_01f7:                                                                        //ldloc.0
	IL_01f8:                                                                        //ldstr				L"\x262E"
	IL_01fd:                                                                        //ldloc				V_9
	IL_0201:            Temp_14=a(L"\x262E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0206:                                                                        //ldloc.3
	IL_0207:            Temp_15=V_3->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_020c:            Temp_16=System::String::Concat(Temp_14,Temp_15);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0211:            V_0->WriteLine(Temp_16);                                    //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0216:                                                                        //ldc.i4				0x4
	IL_021b:            V_7=4;                                                      //stloc				V_7
	IL_021f:            /*goto IL_01a6;*/goto IL_0221;                              //br.s				IL_01a6
	IL_0221:            goto IL_0223;                                               //br.s				IL_0223
	IL_0223:                                                                        //ldc.i4				0x5
	IL_0228:            V_7=5;                                                      //stloc				V_7
	IL_022c:            /*goto IL_01a6;*/goto IL_0231;                              //br				IL_01a6
	IL_0231:                                                                        //ldloc.3
	IL_0232:            Temp_13=V_3->Peek();                                        //callvirt				System::Int32 System::IO::TextReader::Peek()
	IL_0237:                                                                        //ldc.i4.m1
	IL_0238:            if(Temp_13!=-1)goto IL_01f7;                                //bne.un.s				IL_01f7
	IL_023a:                                                                        //ldc.i4				0x3
	IL_023f:            V_7=3;                                                      //stloc				V_7
	IL_0243:            /*goto IL_01a6;*/goto IL_0248;                              //br				IL_01a6
	IL_0248:            goto IL_024a;                                               //br.s				IL_024a
	IL_024a:                                                                        //ldc.i4				0x2
	IL_024f:            V_7=2;                                                      //stloc				V_7
	IL_0253:            /*goto IL_01a6;*/goto IL_0258;                              //br				IL_01a6
	IL_0258:                                                                        //ldloc.s				V_5
	IL_025a:            Temp_9=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_025f:            if(Temp_9)goto IL_01d1;                                     //brtrue				IL_01d1
	IL_0264:                                                                        //ldc.i4				0x7
	IL_0269:            V_7=7;                                                      //stloc				V_7
	IL_026d:            /*goto IL_01a6;*/goto IL_0272;                              //br				IL_01a6
	IL_0272:            goto IL_0274;                                               //br.s				IL_0274
	IL_0274:                                                                        //ldc.i4				0x1
	IL_0279:            V_7=1;                                                      //stloc				V_7
	IL_027d:            /*goto IL_01a6;*/goto IL_0282;                              //br				IL_01a6
	IL_0282:            goto IL_0126;                                               //leave				IL_0126
	                    ;}
	                    finally{
	IL_0287:            goto IL_029e;                                               //br.s				IL_029e
	IL_0289:                                                                        //ldloc				V_7
	IL_028d:            switch(V_7){case 0:goto IL_02d5;case 1:goto IL_02c1;case 2:goto IL_02b2;};//switch				(IL_02d5,IL_02c1,IL_02b2)
	IL_029e:                                                                        //ldloc.s				V_5
	IL_02a0:                                                                        //isinst				System::IDisposable
	IL_02a5:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_02a7:                                                                        //ldc.i4				0x2
	IL_02ac:            V_7=2;                                                      //stloc				V_7
	IL_02b0:            /*goto IL_0289;*/goto IL_02b2;                              //br.s				IL_0289
	IL_02b2:                                                                        //ldloc.s				V_6
	IL_02b4:            if(V_6==nullptr)goto IL_02d7;                               //brfalse.s				IL_02d7
	IL_02b6:                                                                        //ldc.i4				0x1
	IL_02bb:            V_7=1;                                                      //stloc				V_7
	IL_02bf:            /*goto IL_0289;*/goto IL_02c1;                              //br.s				IL_0289
	IL_02c1:            goto IL_02c3;                                               //br.s				IL_02c3
	IL_02c3:                                                                        //ldloc.s				V_6
	IL_02c5:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_02ca:                                                                        //ldc.i4				0x0
	IL_02cf:            V_7=0;                                                      //stloc				V_7
	IL_02d3:            /*goto IL_0289;*/goto IL_02d5;                              //br.s				IL_0289
	IL_02d5:            goto IL_02d7;                                               //br.s				IL_02d7
	IL_02d7:                                                                        //endfinally
	                    ;}
	IL_02D702:          try{
	IL_02d8:                                                                        //ldc.i4				0x0
	IL_02dd:            V_7=0;                                                      //stloc				V_7
	IL_02e1:            /*goto IL_02e5;*/goto IL_02e3;                              //br.s				IL_02e5
	IL_02e3:            goto IL_0302;                                               //br.s				IL_0302
	IL_02e5:                                                                        //ldloc				V_7
	IL_02e9:            switch(V_7){case 0:goto IL_02e3;case 1:goto IL_0323;case 2:goto IL_036d;case 3:goto IL_030f;case 4:goto IL_035d;};//switch				(IL_02e3,IL_0323,IL_036d,IL_030f,IL_035d)
	IL_0302:            goto IL_0304;                                               //br.s				IL_0304
	IL_0304:                                                                        //ldc.i4				0x3
	IL_0309:            V_7=3;                                                      //stloc				V_7
	IL_030d:            /*goto IL_02e5;*/goto IL_030f;                              //br.s				IL_02e5
	IL_030f:                                                                        //ldloc.s				V_5
	IL_0311:            Temp_28=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0316:            if(Temp_28)goto IL_0325;                                    //brtrue.s				IL_0325
	IL_0318:                                                                        //ldc.i4				0x1
	IL_031d:            V_7=1;                                                      //stloc				V_7
	IL_0321:            /*goto IL_02e5;*/goto IL_0323;                              //br.s				IL_02e5
	IL_0323:            goto IL_035f;                                               //br.s				IL_035f
	IL_0325:                                                                        //ldloc.s				V_5
	IL_0327:            Temp_29=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_032c:                                                                        //castclass				Root::T_x177
	IL_0331:            V_1=safe_cast<Root::T_x177^>(Temp_29);                      //stloc.1
	IL_0332:                                                                        //ldloc.0
	IL_0333:                                                                        //ldstr				L"\x0F2E"
	IL_0338:                                                                        //ldloc				V_9
	IL_033c:            Temp_30=a(L"\x0F2E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0341:            V_0->Write(Temp_30);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0346:                                                                        //ldloc.0
	IL_0347:                                                                        //ldloc.1
	IL_0348:            Temp_31=V_1->M_x2();                                        //callvirt				System::String^ Root::T_x177::M_x2()
	IL_034d:            V_0->Write(Temp_31);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0352:                                                                        //ldc.i4				0x4
	IL_0357:            V_7=4;                                                      //stloc				V_7
	IL_035b:            /*goto IL_02e5;*/goto IL_035d;                              //br.s				IL_02e5
	IL_035d:            goto IL_0304;                                               //br.s				IL_0304
	IL_035f:                                                                        //ldc.i4				0x2
	IL_0364:            V_7=2;                                                      //stloc				V_7
	IL_0368:            /*goto IL_02e5;*/goto IL_036d;                              //br				IL_02e5
	IL_036d:            goto IL_0086;                                               //leave				IL_0086
	                    ;}
	                    finally{
	IL_0372:            goto IL_0389;                                               //br.s				IL_0389
	IL_0374:                                                                        //ldloc				V_7
	IL_0378:            switch(V_7){case 0:goto IL_03c0;case 1:goto IL_03ac;case 2:goto IL_039d;};//switch				(IL_03c0,IL_03ac,IL_039d)
	IL_0389:                                                                        //ldloc.s				V_5
	IL_038b:                                                                        //isinst				System::IDisposable
	IL_0390:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_0392:                                                                        //ldc.i4				0x2
	IL_0397:            V_7=2;                                                      //stloc				V_7
	IL_039b:            /*goto IL_0374;*/goto IL_039d;                              //br.s				IL_0374
	IL_039d:                                                                        //ldloc.s				V_6
	IL_039f:            if(V_6==nullptr)goto IL_03c2;                               //brfalse.s				IL_03c2
	IL_03a1:                                                                        //ldc.i4				0x1
	IL_03a6:            V_7=1;                                                      //stloc				V_7
	IL_03aa:            /*goto IL_0374;*/goto IL_03ac;                              //br.s				IL_0374
	IL_03ac:            goto IL_03ae;                                               //br.s				IL_03ae
	IL_03ae:                                                                        //ldloc.s				V_6
	IL_03b0:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_03b5:                                                                        //ldc.i4				0x0
	IL_03ba:            V_7=0;                                                      //stloc				V_7
	IL_03be:            /*goto IL_0374;*/goto IL_03c0;                              //br.s				IL_0374
	IL_03c0:            goto IL_03c2;                                               //br.s				IL_03c2
	IL_03c2:                                                                        //endfinally
	                    ;}
	IL_03c3:                                                                        //ldc.i4				0x8
	IL_03c8:            V_7=8;                                                      //stloc				V_7
	IL_03cc:            /*goto IL_0018;*/goto IL_03d1;                              //br				IL_0018
	IL_03d1:                                                                        //ldarg.0
	IL_03d2:            Temp_26=this->M_x2();                                       //call				System::String^ Root::T_x8::M_x2()
	IL_03d7:            if(Temp_26==nullptr)goto IL_016c;                           //brfalse				IL_016c
	IL_03dc:                                                                        //ldc.i4				0x4
	IL_03e1:            V_7=4;                                                      //stloc				V_7
	IL_03e5:            /*goto IL_0018;*/goto IL_03ea;                              //br				IL_0018
	IL_03ea:            goto IL_00b5;                                               //br				IL_00b5
	IL_03ef:                                                                        //ldloc.0
	IL_03f0:                                                                        //ldstr				L"\x112E"
	IL_03f5:                                                                        //ldloc				V_9
	IL_03f9:            Temp_23=a(L"\x112E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03fe:            V_0->Write(Temp_23);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0403:                                                                        //ldloc.0
	IL_0404:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0409:                                                                        //ldarg.0
	IL_040a:            Temp_24=this->M_x12();                                      //call				Root::T_x179^ Root::T_x8::M_x12()
	IL_040f:            Temp_25=Temp_24->GetEnumerator();                           //callvirt				System::Collections::IEnumerator^ Root::T_x179::GetEnumerator()
	IL_0414:            V_5=Temp_25;                                                //stloc.s				V_5
	IL_0416:                                                                        //ldc.i4				0x3
	IL_041b:            V_7=3;                                                      //stloc				V_7
	IL_041f:            /*goto IL_0018;*/goto IL_0424;                              //br				IL_0018
	IL_0424:            /*goto IL_0199;*/goto IL_019401;                            //br				IL_0199
	IL_0429:                                                                        //ldloc.0
	IL_042a:            Temp_8=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_042f:            V_4=Temp_8;                                                 //stloc.s				V_4
	IL_0431:                                                                        //ldc.i4				0x2
	IL_0436:            V_7=2;                                                      //stloc				V_7
	IL_043a:            /*goto IL_0018;*/goto IL_043f;                              //br				IL_0018
	IL_043f:            goto IL_0487;                                               //leave.s				IL_0487
	                    ;}
	                    finally{
	IL_0441:                                                                        //ldc.i4				0x0
	IL_0446:            V_8=0;                                                      //stloc				V_8
	IL_044a:            /*goto IL_044e;*/goto IL_044c;                              //br.s				IL_044e
	IL_044c:            goto IL_0463;                                               //br.s				IL_0463
	IL_044e:                                                                        //ldloc				V_8
	IL_0452:            switch(V_8){case 0:goto IL_044c;case 1:goto IL_0484;case 2:goto IL_0471;};//switch				(IL_044c,IL_0484,IL_0471)
	IL_0463:                                                                        //ldloc.0
	IL_0464:            if(V_0==nullptr)goto IL_0486;                               //brfalse.s				IL_0486
	IL_0466:                                                                        //ldc.i4				0x2
	IL_046b:            V_8=2;                                                      //stloc				V_8
	IL_046f:            /*goto IL_044e;*/goto IL_0471;                              //br.s				IL_044e
	IL_0471:            goto IL_0473;                                               //br.s				IL_0473
	IL_0473:                                                                        //ldloc.0
	IL_0474:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0479:                                                                        //ldc.i4				0x1
	IL_047e:            V_8=1;                                                      //stloc				V_8
	IL_0482:            /*goto IL_044e;*/goto IL_0484;                              //br.s				IL_044e
	IL_0484:            goto IL_0486;                                               //br.s				IL_0486
	IL_0486:                                                                        //endfinally
	                    ;}
	IL_0487:                                                                        //ldloc.s				V_4
	IL_0489:            return V_4;                                                 //ret

}
inline System::String^ Root::T_x8::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::String^ Root::T_x8 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x8::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::String^ Root::T_x8 F_x12
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x8::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x8 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
