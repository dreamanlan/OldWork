#include "global_xref.h"

inline Root::T_x4::T_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Net::IWebProxy^ Root::T_x4::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Net::ICredentials^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Net::NetworkCredential^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::Net::NetworkCredential^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Net::WebProxy^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	array<System::Char>^ Temp_16 = nullptr;
	array<System::String^>^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Boolean Temp_22 = false;
	System::Net::IWebProxy^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Boolean Temp_26 = false;
	//local variables.
	System::Net::IWebProxy^ V_0 = nullptr;
	System::Net::NetworkCredential^ V_1 = nullptr;
	array<System::String^>^ V_2 = nullptr;
	array<System::Char>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_5=10;                                                     //stloc				V_5
	IL_0009:                                                                        //ldc.i4				0x6
	IL_000e:            V_4=6;                                                      //stloc				V_4
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_007f;                                               //br.s				IL_007f
	IL_0016:                                                                        //ldloc				V_4
	IL_001a:            switch(V_4){case 0:goto IL_01bc;case 1:goto IL_0121;case 2:goto IL_00f6;case 3:goto IL_02df;case 4:goto IL_01a9;case 5:goto IL_027a;case 6:goto IL_0014;case 7:goto IL_00b5;case 8:goto IL_0134;case 9:goto IL_02fe;case 10:goto IL_00e2;case 11:goto IL_028a;case 12:goto IL_02c7;case 13:goto IL_01f5;case 14:goto IL_02b5;case 15:goto IL_023f;case 16:goto IL_0226;case 17:goto IL_0109;case 18:goto IL_01d7;case 19:goto IL_0208;case 20:goto IL_0256;case 21:goto IL_017e;case 22:goto IL_0148;case 23:goto IL_0169;};//switch				(IL_01bc,IL_0121,IL_00f6,IL_02df,IL_01a9,IL_027a,IL_0014,IL_00b5,IL_0134,IL_02fe,IL_00e2,IL_028a,IL_02c7,IL_01f5,IL_02b5,IL_023f,IL_0226,IL_0109,IL_01d7,IL_0208,IL_0256,IL_017e,IL_0148,IL_0169)
	IL_007f:                                                                        //ldc.i4.5
	IL_0080:                                                                        //dup
	IL_0081:                                                                        //dup
	IL_0082:                                                                        //ldc.i4.6
	IL_0083:                                                                        //add
	IL_0084:                                                                        //bgt				IL_0080
	IL_0089:                                                                        //pop
	IL_008a:            Temp_24=Root::T_x4::F_x1;                                   //ldsfld				System::String^ Root::T_x4 F_x1
	IL_008f:                                                                        //ldstr				L"\x6627\x4529\x422B\x4B2D"
	IL_0094:                                                                        //ldloc				V_5
	IL_0098:            Temp_25=a(L"\x6627\x4529\x422B\x4B2D",V_5);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009d:            Temp_26=(Temp_24 == Temp_25);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00a2:            if(!Temp_26)goto IL_016e;                                   //brfalse				IL_016e
	IL_00a7:                                                                        //ldc.i4				0x7
	IL_00ac:            V_4=7;                                                      //stloc				V_4
	IL_00b0:            /*goto IL_0016;*/goto IL_00b5;                              //br				IL_0016
	IL_00b5:            goto IL_02b7;                                               //br				IL_02b7
	IL_00ba:                                                                        //ldnull
	IL_00bb:            V_1=safe_cast<System::Net::NetworkCredential^>(nullptr);    //stloc.1
	IL_00bc:            Temp_15=Root::T_x4::F_x12;                                  //ldsfld				System::String^ Root::T_x4 F_x12
	IL_00c1:                                                                        //ldc.i4.1
	IL_00c2:            Temp_16=gcnew array<System::Char>(1);                       //newarr				System::Char
	IL_00c7:            V_3=Temp_16;                                                //stloc.3
	IL_00c8:                                                                        //ldloc.3
	IL_00c9:                                                                        //ldc.i4.0
	IL_00ca:                                                                        //ldc.i4.s				92
	IL_00cc:            V_3[0]=(System::Char)92;                                    //stelem.i2
	IL_00cd:                                                                        //ldloc.3
	IL_00ce:            Temp_17=Temp_15->Split(V_3);                                //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_00d3:            V_2=Temp_17;                                                //stloc.2
	IL_00d4:                                                                        //ldc.i4				0xa
	IL_00d9:            V_4=10;                                                     //stloc				V_4
	IL_00dd:            /*goto IL_0016;*/goto IL_00e2;                              //br				IL_0016
	IL_00e2:                                                                        //ldloc.2
	IL_00e3:            Temp_5=V_2->Length;                                         //ldlen
	IL_00e4:                                                                        //conv.i4
	IL_00e5:                                                                        //ldc.i4.1
	IL_00e6:            if(Temp_5<=1)goto IL_014d;                                  //ble.s				IL_014d
	IL_00e8:                                                                        //ldc.i4				0x2
	IL_00ed:            V_4=2;                                                      //stloc				V_4
	IL_00f1:            /*goto IL_0016;*/goto IL_00f6;                              //br				IL_0016
	IL_00f6:            goto IL_025b;                                               //br				IL_025b
	IL_00fb:                                                                        //ldc.i4				0x11
	IL_0100:            V_4=17;                                                     //stloc				V_4
	IL_0104:            /*goto IL_0016;*/goto IL_0109;                              //br				IL_0016
	IL_0109:            Temp_14=Root::T_x4::F_x12;                                  //ldsfld				System::String^ Root::T_x4 F_x12
	IL_010e:            if(Temp_14==nullptr)goto IL_01dc;                           //brfalse				IL_01dc
	IL_0113:                                                                        //ldc.i4				0x1
	IL_0118:            V_4=1;                                                      //stloc				V_4
	IL_011c:            /*goto IL_0016;*/goto IL_0121;                              //br				IL_0016
	IL_0121:            goto IL_01ae;                                               //br				IL_01ae
	IL_0126:                                                                        //ldc.i4				0x8
	IL_012b:            V_4=8;                                                      //stloc				V_4
	IL_012f:            /*goto IL_0016;*/goto IL_0134;                              //br				IL_0016
	IL_0134:                                                                        //ldloc.0
	IL_0135:            if(V_0!=nullptr)goto IL_027c;                               //brtrue				IL_027c
	IL_013a:                                                                        //ldc.i4				0x16
	IL_013f:            V_4=22;                                                     //stloc				V_4
	IL_0143:            /*goto IL_0016;*/goto IL_0148;                              //br				IL_0016
	IL_0148:            goto IL_022b;                                               //br				IL_022b
	IL_014d:                                                                        //ldloc.2
	IL_014e:                                                                        //ldc.i4.0
	IL_014f:                                                                        //ldelem.ref
	IL_0150:            Temp_6=Root::T_x4::F_x13;                                   //ldsfld				System::String^ Root::T_x4 F_x13
	IL_0155:            Temp_7=gcnew System::Net::NetworkCredential(V_2[0],Temp_6); //newobj				void System::Net::NetworkCredential::.ctor(System::String^,System::String^)
	IL_015a:            V_1=Temp_7;                                                 //stloc.1
	IL_015b:                                                                        //ldc.i4				0x17
	IL_0160:            V_4=23;                                                     //stloc				V_4
	IL_0164:            /*goto IL_0016;*/goto IL_0169;                              //br				IL_0016
	IL_0169:            goto IL_0241;                                               //br				IL_0241
	IL_016e:                                                                        //ldnull
	IL_016f:            V_0=safe_cast<System::Net::IWebProxy^>(nullptr);            //stloc.0
	IL_0170:                                                                        //ldc.i4				0x15
	IL_0175:            V_4=21;                                                     //stloc				V_4
	IL_0179:            /*goto IL_0016;*/goto IL_017e;                              //br				IL_0016
	IL_017e:            Temp_20=Root::T_x4::F_x1;                                   //ldsfld				System::String^ Root::T_x4 F_x1
	IL_0183:                                                                        //ldstr				L"\x6C27\x4F29\x4A2B\x4F2D\x452F\x5E31\x4033"
	IL_0188:                                                                        //ldloc				V_5
	IL_018c:            Temp_21=a(L"\x6C27\x4F29\x4A2B\x4F2D\x452F\x5E31\x4033",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0191:            Temp_22=(Temp_20 == Temp_21);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0196:            if(Temp_22)goto IL_022b;                                    //brtrue				IL_022b
	IL_019b:                                                                        //ldc.i4				0x4
	IL_01a0:            V_4=4;                                                      //stloc				V_4
	IL_01a4:            /*goto IL_0016;*/goto IL_01a9;                              //br				IL_0016
	IL_01a9:            goto IL_0126;                                               //br				IL_0126
	IL_01ae:                                                                        //ldc.i4				0x0
	IL_01b3:            V_4=0;                                                      //stloc				V_4
	IL_01b7:            /*goto IL_0016;*/goto IL_01bc;                              //br				IL_0016
	IL_01bc:            Temp_0=Root::T_x4::F_x12;                                   //ldsfld				System::String^ Root::T_x4 F_x12
	IL_01c1:            Temp_1=Temp_0->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_01c6:                                                                        //ldc.i4.0
	IL_01c7:            if(Temp_1<=0)goto IL_01dc;                                  //ble.s				IL_01dc
	IL_01c9:                                                                        //ldc.i4				0x12
	IL_01ce:            V_4=18;                                                     //stloc				V_4
	IL_01d2:            /*goto IL_0016;*/goto IL_01d7;                              //br				IL_0016
	IL_01d7:            goto IL_00ba;                                               //br				IL_00ba
	IL_01dc:                                                                        //ldloc.0
	IL_01dd:            Temp_2=System::Net::CredentialCache::DefaultCredentials;    //call				System::Net::ICredentials^ System::Net::CredentialCache::get_DefaultCredentials()
	IL_01e2:            V_0->Credentials=Temp_2;                                    //callvirt				void System::Net::IWebProxy::set_Credentials(System::Net::ICredentials^)
	IL_01e7:                                                                        //ldc.i4				0xd
	IL_01ec:            V_4=13;                                                     //stloc				V_4
	IL_01f0:            /*goto IL_0016;*/goto IL_01f5;                              //br				IL_0016
	IL_01f5:            goto IL_0303;                                               //br				IL_0303
	IL_01fa:                                                                        //ldc.i4				0x13
	IL_01ff:            V_4=19;                                                     //stloc				V_4
	IL_0203:            /*goto IL_0016;*/goto IL_0208;                              //br				IL_0016
	IL_0208:            Temp_18=Root::T_x4::F_x2;                                   //ldsfld				System::String^ Root::T_x4 F_x2
	IL_020d:            Temp_19=Temp_18->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_0212:                                                                        //ldc.i4.0
	IL_0213:            if(Temp_19<=0)goto IL_00fb;                                 //ble				IL_00fb
	IL_0218:                                                                        //ldc.i4				0x10
	IL_021d:            V_4=16;                                                     //stloc				V_4
	IL_0221:            /*goto IL_0016;*/goto IL_0226;                              //br				IL_0016
	IL_0226:            goto IL_02e4;                                               //br				IL_02e4
	IL_022b:            Temp_23=Root::T_x4::T_x1::M_x12();                          //call				System::Net::IWebProxy^ Root::T_x4::T_x1::M_x12()
	IL_0230:            V_0=Temp_23;                                                //stloc.0
	IL_0231:                                                                        //ldc.i4				0xf
	IL_0236:            V_4=15;                                                     //stloc				V_4
	IL_023a:            /*goto IL_0016;*/goto IL_023f;                              //br				IL_0016
	IL_023f:            goto IL_027c;                                               //br.s				IL_027c
	IL_0241:                                                                        //ldloc.0
	IL_0242:                                                                        //ldloc.1
	IL_0243:            V_0->Credentials=safe_cast<System::Net::ICredentials^>(V_1);//callvirt				void System::Net::IWebProxy::set_Credentials(System::Net::ICredentials^)
	IL_0248:                                                                        //ldc.i4				0x14
	IL_024d:            V_4=20;                                                     //stloc				V_4
	IL_0251:            /*goto IL_0016;*/goto IL_0256;                              //br				IL_0016
	IL_0256:            goto IL_0303;                                               //br				IL_0303
	IL_025b:                                                                        //ldloc.2
	IL_025c:                                                                        //ldc.i4.1
	IL_025d:                                                                        //ldelem.ref
	IL_025e:            Temp_3=Root::T_x4::F_x13;                                   //ldsfld				System::String^ Root::T_x4 F_x13
	IL_0263:                                                                        //ldloc.2
	IL_0264:                                                                        //ldc.i4.0
	IL_0265:                                                                        //ldelem.ref
	IL_0266:            Temp_4=gcnew System::Net::NetworkCredential(V_2[1],Temp_3,V_2[0]);//newobj				void System::Net::NetworkCredential::.ctor(System::String^,System::String^,System::String^)
	IL_026b:            V_1=Temp_4;                                                 //stloc.1
	IL_026c:                                                                        //ldc.i4				0x5
	IL_0271:            V_4=5;                                                      //stloc				V_4
	IL_0275:            /*goto IL_0016;*/goto IL_027a;                              //br				IL_0016
	IL_027a:            goto IL_0241;                                               //br.s				IL_0241
	IL_027c:                                                                        //ldc.i4				0xb
	IL_0281:            V_4=11;                                                     //stloc				V_4
	IL_0285:            /*goto IL_0016;*/goto IL_028a;                              //br				IL_0016
	IL_028a:            Temp_8=Root::T_x4::F_x1;                                    //ldsfld				System::String^ Root::T_x4 F_x1
	IL_028f:                                                                        //ldstr				L"\x6B27\x5F29\x5F2B\x5A2D\x5F2F\x5F31"
	IL_0294:                                                                        //ldloc				V_5
	IL_0298:            Temp_9=a(L"\x6B27\x5F29\x5F2B\x5A2D\x5F2F\x5F31",V_5);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_029d:            Temp_10=(Temp_8 == Temp_9);                                 //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_02a2:            if(!Temp_10)goto IL_00fb;                                   //brfalse				IL_00fb
	IL_02a7:                                                                        //ldc.i4				0xe
	IL_02ac:            V_4=14;                                                     //stloc				V_4
	IL_02b0:            /*goto IL_0016;*/goto IL_02b5;                              //br				IL_0016
	IL_02b5:            goto IL_02b9;                                               //br.s				IL_02b9
	IL_02b7:                                                                        //ldnull
	IL_02b8:            return nullptr;                                             //ret
	IL_02b9:                                                                        //ldc.i4				0xc
	IL_02be:            V_4=12;                                                     //stloc				V_4
	IL_02c2:            /*goto IL_0016;*/goto IL_02c7;                              //br				IL_0016
	IL_02c7:            Temp_11=Root::T_x4::F_x2;                                   //ldsfld				System::String^ Root::T_x4 F_x2
	IL_02cc:            if(Temp_11==nullptr)goto IL_00fb;                           //brfalse				IL_00fb
	IL_02d1:                                                                        //ldc.i4				0x3
	IL_02d6:            V_4=3;                                                      //stloc				V_4
	IL_02da:            /*goto IL_0016;*/goto IL_02df;                              //br				IL_0016
	IL_02df:            goto IL_01fa;                                               //br				IL_01fa
	IL_02e4:            Temp_12=Root::T_x4::F_x2;                                   //ldsfld				System::String^ Root::T_x4 F_x2
	IL_02e9:                                                                        //ldc.i4.1
	IL_02ea:            Temp_13=gcnew System::Net::WebProxy(Temp_12,true);          //newobj				void System::Net::WebProxy::.ctor(System::String^,System::Boolean)
	IL_02ef:            V_0=safe_cast<System::Net::IWebProxy^>(Temp_13);            //stloc.0
	IL_02f0:                                                                        //ldc.i4				0x9
	IL_02f5:            V_4=9;                                                      //stloc				V_4
	IL_02f9:            /*goto IL_0016;*/goto IL_02fe;                              //br				IL_0016
	IL_02fe:            goto IL_00fb;                                               //br				IL_00fb
	IL_0303:                                                                        //ldloc.0
	IL_0304:            return V_0;                                                 //ret

}
inline System::Net::WebRequest^ Root::T_x4::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Net::WebRequest^ Temp_0 = nullptr;
	System::Net::WebHeaderCollection^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Net::ICredentials^ Temp_4 = nullptr;
	System::Net::IWebProxy^ Temp_5 = nullptr;
	//local variables.
	System::Net::WebRequest^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:                                                                        //ldc.i4.2
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.3
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=System::Net::WebRequest::Create(A_0);                //call				System::Net::WebRequest^ System::Net::WebRequest::Create(System::String^)
	IL_001a:            V_0=Temp_0;                                                 //stloc.0
	IL_001b:                                                                        //ldloc.0
	IL_001c:            Temp_1=V_0->Headers;                                        //callvirt				System::Net::WebHeaderCollection^ System::Net::WebRequest::get_Headers()
	IL_0021:                                                                        //ldstr				L"\x5C1E\x4020\x4022\x4D24\x4226\x0428\x682A\x422C\x412E\x4530\x4132\x5A34\x5B36"
	IL_0026:                                                                        //ldloc				V_1
	IL_002a:            Temp_2=a(L"\x5C1E\x4020\x4022\x4D24\x4226\x0428\x682A\x422C\x412E\x4530\x4132\x5A34\x5B36",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002f:                                                                        //ldstr				L"\x711E\x4E20\x0E22\x4624\x4626\x4A28\x432A\x482C\x032E\x1130\x5D32\x5A34\x1A36\x4A38\x4F3A\x523C\x4D3E\x2440\x6F42\x6544\x2A46\x2848\x334A\x604C\x2E4E\x3650\x3652\x6854\x6756"
	IL_0034:                                                                        //ldloc				V_1
	IL_0038:            Temp_3=a(L"\x711E\x4E20\x0E22\x4624\x4626\x4A28\x432A\x482C\x032E\x1130\x5D32\x5A34\x1A36\x4A38\x4F3A\x523C\x4D3E\x2440\x6F42\x6544\x2A46\x2848\x334A\x604C\x2E4E\x3650\x3652\x6854\x6756",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003d:            Temp_1->Add(Temp_2,Temp_3);                                 //callvirt				void System::Collections::Specialized::NameValueCollection::Add(System::String^,System::String^)
	IL_0042:                                                                        //ldloc.0
	IL_0043:            Temp_4=System::Net::CredentialCache::DefaultCredentials;    //call				System::Net::ICredentials^ System::Net::CredentialCache::get_DefaultCredentials()
	IL_0048:            V_0->Credentials=Temp_4;                                    //callvirt				void System::Net::WebRequest::set_Credentials(System::Net::ICredentials^)
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_5=Root::T_x4::M_x1();                                  //call				System::Net::IWebProxy^ Root::T_x4::M_x1()
	IL_0053:            V_0->Proxy=Temp_5;                                          //callvirt				void System::Net::WebRequest::set_Proxy(System::Net::IWebProxy^)
	IL_0058:                                                                        //ldloc.0
	IL_0059:            return V_0;                                                 //ret

}
inline void Root::T_x4::M_x1(System::String^ A_0,array<System::Byte>^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Net::WebRequest^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::IO::Stream^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Net::WebResponse^ Temp_6 = nullptr;
	//local variables.
	System::Net::WebRequest^ V_0 = nullptr;
	System::IO::Stream^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_3=17;                                                     //stloc				V_3
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=Root::T_x4::M_x1(A_0);                               //call				System::Net::WebRequest^ Root::T_x4::M_x1(System::String^)
	IL_000f:            V_0=Temp_0;                                                 //stloc.0
	IL_0010:                                                                        //ldloc.0
	IL_0011:                                                                        //ldstr				L"\x7F2E\x7E30\x6032\x6134"
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            Temp_1=a(L"\x7F2E\x7E30\x6032\x6134",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001f:            V_0->Method=Temp_1;                                         //callvirt				void System::Net::WebRequest::set_Method(System::String^)
	IL_0024:                                                                        //ldloc.0
	IL_0025:                                                                        //ldstr				L"\x4E2E\x4130\x4332\x5934\x5E36\x5A38\x5A3A\x493C\x563E\x2E40\x2D42\x6A44\x3F46\x6448\x3C4A\x3A4C\x384E\x7C50\x3552\x3A54\x2556\x3458\x765A\x285C\x2D5E\x0D60\x0662\x0B64\x0466\x0668\x0F6A\x086C\x0B6E"
	IL_002a:                                                                        //ldloc				V_3
	IL_002e:            Temp_2=a(L"\x4E2E\x4130\x4332\x5934\x5E36\x5A38\x5A3A\x493C\x563E\x2E40\x2D42\x6A44\x3F46\x6448\x3C4A\x3A4C\x384E\x7C50\x3552\x3A54\x2556\x3458\x765A\x285C\x2D5E\x0D60\x0662\x0B64\x0466\x0668\x0F6A\x086C\x0B6E",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0033:            V_0->ContentType=Temp_2;                                    //callvirt				void System::Net::WebRequest::set_ContentType(System::String^)
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_3=A_1->Length;                                         //ldlen
	IL_003b:                                                                        //conv.i4
	IL_003c:                                                                        //conv.i8
	IL_003d:            V_0->ContentLength=safe_cast<System::Int64>(Temp_3);        //callvirt				void System::Net::WebRequest::set_ContentLength(System::Int64)
	IL_0042:                                                                        //ldloc.0
	IL_0043:            Temp_4=V_0->GetRequestStream();                             //callvirt				System::IO::Stream^ System::Net::WebRequest::GetRequestStream()
	IL_0048:            V_1=Temp_4;                                                 //stloc.1
	IL_0049:            /*goto IL_004b;*/goto IL_004901;                            //br.s				IL_004b
	IL_004901:          try{
	IL_004b:                                                                        //ldc.i4.2
	IL_004c:                                                                        //dup
	IL_004d:                                                                        //dup
	IL_004e:                                                                        //ldc.i4.4
	IL_004f:                                                                        //sub
	IL_0050:                                                                        //blt				IL_004c
	IL_0055:                                                                        //pop
	IL_0056:                                                                        //ldloc.1
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldc.i4.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_5=A_1->Length;                                         //ldlen
	IL_005b:                                                                        //conv.i4
	IL_005c:            V_1->Write(A_1,safe_cast<System::Int32>(0),Temp_5);         //callvirt				void System::IO::Stream::Write(array<System::Byte>^,System::Int32,System::Int32)
	IL_0061:            goto IL_00a9;                                               //leave.s				IL_00a9
	                    ;}
	                    finally{
	IL_0063:                                                                        //ldc.i4				0x0
	IL_0068:            V_2=0;                                                      //stloc				V_2
	IL_006c:            /*goto IL_0070;*/goto IL_006e;                              //br.s				IL_0070
	IL_006e:            goto IL_0085;                                               //br.s				IL_0085
	IL_0070:                                                                        //ldloc				V_2
	IL_0074:            switch(V_2){case 0:goto IL_006e;case 1:goto IL_0093;case 2:goto IL_00a6;};//switch				(IL_006e,IL_0093,IL_00a6)
	IL_0085:                                                                        //ldloc.1
	IL_0086:            if(V_1==nullptr)goto IL_00a8;                               //brfalse.s				IL_00a8
	IL_0088:                                                                        //ldc.i4				0x1
	IL_008d:            V_2=1;                                                      //stloc				V_2
	IL_0091:            /*goto IL_0070;*/goto IL_0093;                              //br.s				IL_0070
	IL_0093:            goto IL_0095;                                               //br.s				IL_0095
	IL_0095:                                                                        //ldloc.1
	IL_0096:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_009b:                                                                        //ldc.i4				0x2
	IL_00a0:            V_2=2;                                                      //stloc				V_2
	IL_00a4:            /*goto IL_0070;*/goto IL_00a6;                              //br.s				IL_0070
	IL_00a6:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_00a8:                                                                        //endfinally
	                    ;}
	IL_00a9:                                                                        //ldloc.0
	IL_00aa:            Temp_6=V_0->GetResponse();                                  //callvirt				System::Net::WebResponse^ System::Net::WebRequest::GetResponse()
	IL_00af:                                                                        //pop
	IL_00b0:            return;                                                     //ret

}
inline void Root::T_x4::M_x1(System::String^ A_0,System::String^ A_1,System::String^ A_2,System::String^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Root::T_x4::F_x1=A_0;                                       //stsfld				System::String^ Root::T_x4 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Root::T_x4::F_x2=A_1;                                       //stsfld				System::String^ Root::T_x4 F_x2
	IL_000c:                                                                        //ldarg.2
	IL_000d:            Root::T_x4::F_x12=A_2;                                      //stsfld				System::String^ Root::T_x4 F_x12
	IL_0012:                                                                        //ldarg.3
	IL_0013:            Root::T_x4::F_x13=A_3;                                      //stsfld				System::String^ Root::T_x4 F_x13
	IL_0018:            return;                                                     //ret

}
inline System::Net::WebResponse^ Root::T_x4::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Net::WebRequest^ Temp_0 = nullptr;
	System::Net::WebResponse^ Temp_1 = nullptr;
	//local variables.
	System::Net::WebRequest^ V_0 = nullptr;
	System::Net::WebResponse^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=Root::T_x4::M_x1(A_0);                               //call				System::Net::WebRequest^ Root::T_x4::M_x1(System::String^)
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            Temp_1=V_0->GetResponse();                                  //callvirt				System::Net::WebResponse^ System::Net::WebRequest::GetResponse()
	IL_000d:            V_1=Temp_1;                                                 //stloc.1
	IL_000e:                                                                        //ldloc.1
	IL_000f:            return V_1;                                                 //ret

}
inline Root::T_x4::T_x1::T_x1(System::Boolean A_0,System::Uri^ A_1,System::Net::IWebProxy^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::DateTime Temp_0;
	System::Net::IWebProxy^ Temp_1 = nullptr;
	System::DateTime Temp_2;
	Root::T_x4::T_x1::T_x2^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::DateTime::MaxValue;                          //ldsfld				System::DateTime System::DateTime MaxValue
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::DateTime Root::T_x4::T_x1 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldflda				System::TimeSpan Root::T_x4::T_x1 F_x2
	IL_0011:                                                                        //ldc.i4.0
	IL_0012:                                                                        //ldc.i4.s				15
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:            System::TimeSpan(safe_cast<System::Int32>(0),safe_cast<System::Int32>(15),safe_cast<System::Int32>(0));//call				void System::TimeSpan::.ctor(System::Int32,System::Int32,System::Int32)
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            this->F_x12=false;                                          //stfld				System::Boolean Root::T_x4::T_x1 F_x12
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldnull
	IL_0023:            this->F_x13=safe_cast<System::Uri^>(nullptr);               //stfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldnull
	IL_002a:            this->F_x8=safe_cast<System::Net::IWebProxy^>(nullptr);     //stfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_002f:                                                                        //ldarg.0
	IL_0030:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0035:                                                                        //ldarg.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            this->F_x12=A_0;                                            //stfld				System::Boolean Root::T_x4::T_x1 F_x12
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldarg.2
	IL_003e:            this->F_x13=A_1;                                            //stfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_0043:                                                                        //ldarg.0
	IL_0044:                                                                        //ldarg.3
	IL_0045:            this->F_x8=A_2;                                             //stfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_1=this->F_x8;                                          //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_0050:            if(Temp_1!=nullptr)goto IL_0061;                            //brtrue.s				IL_0061
	IL_0052:            goto IL_0054;                                               //br.s				IL_0054
	IL_0054:                                                                        //ldarg.0
	IL_0055:            Temp_3=gcnew Root::T_x4::T_x1::T_x2();                      //newobj				void Root::T_x4::T_x1::T_x2::.ctor()
	IL_005a:            this->F_x8=safe_cast<System::Net::IWebProxy^>(Temp_3);      //stfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_005f:            goto IL_0061;                                               //br.s				IL_0061
	IL_0061:                                                                        //ldarg.0
	IL_0062:            this->M_x2();                                               //call				void Root::T_x4::T_x1::M_x2()
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_2=System::DateTime::Now;                               //call				System::DateTime System::DateTime::get_Now()
	IL_006d:            this->F_x1=Temp_2;                                          //stfld				System::DateTime Root::T_x4::T_x1 F_x1
	IL_0072:            return;                                                     //ret

}
inline System::Boolean Root::T_x4::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	System::Boolean V_0 = false;
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x4::T_x1::T_x1_11::WinHttpCheckPlatform();   //call				System::Boolean Root::T_x4::T_x1::T_x1_11::WinHttpCheckPlatform()
	IL_000001:          try{
	IL_0005:            V_0=Temp_0;                                                 //stloc.0
	IL_0006:            goto IL_000d;                                               //leave.s				IL_000d
	                    ;}
	                    catch(System::Object^ Ex_000602){
	IL_0008:                                                                        //pop
	IL_0009:                                                                        //ldc.i4.0
	IL_000a:            V_0=false;                                                  //stloc.0
	IL_000b:            goto IL_000d;                                               //leave.s				IL_000d
	                    ;}
	IL_000d:                                                                        //ldloc.0
	IL_000e:            return V_0;                                                 //ret

}
inline void Root::T_x4::T_x1::M_x1(System::Net::ICredentials^ A_0)
//System::Net::IWebProxy^::set_Credentials by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Net::IWebProxy^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Credentials=A_0;                                    //callvirt				void System::Net::IWebProxy::set_Credentials(System::Net::ICredentials^)
	IL_000c:            return;                                                     //ret

}
inline System::Boolean Root::T_x4::T_x1::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	System::Boolean V_0 = false;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_000001:          try{
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldc.i4				0x3
	IL_0010:            V_1=3;                                                      //stloc				V_1
	IL_0014:            /*goto IL_0018;*/goto IL_0016;                              //br.s				IL_0018
	IL_0016:            goto IL_0031;                                               //br.s				IL_0031
	IL_0018:                                                                        //ldloc				V_1
	IL_001c:            switch(V_1){case 0:goto IL_0055;case 1:goto IL_0046;case 2:goto IL_0062;case 3:goto IL_0016;};//switch				(IL_0055,IL_0046,IL_0062,IL_0016)
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldc.i4.0
	IL_0033:                                                                        //ldc.i4.0
	IL_0034:            Temp_0=Root::T_x4::T_x1::T_x1_11::InternetCheckConnection(A_0,safe_cast<System::Int32>(0),safe_cast<System::Int32>(0));//call				System::Boolean Root::T_x4::T_x1::T_x1_11::InternetCheckConnection(System::String^,System::Int32,System::Int32)
	IL_0039:            if(!Temp_0)goto IL_0057;                                    //brfalse.s				IL_0057
	IL_003b:                                                                        //ldc.i4				0x1
	IL_0040:            V_1=1;                                                      //stloc				V_1
	IL_0044:            /*goto IL_0018;*/goto IL_0046;                              //br.s				IL_0018
	IL_0046:            goto IL_0048;                                               //br.s				IL_0048
	IL_0048:                                                                        //ldc.i4.1
	IL_0049:            V_0=true;                                                   //stloc.0
	IL_004a:                                                                        //ldc.i4				0x0
	IL_004f:            V_1=0;                                                      //stloc				V_1
	IL_0053:            /*goto IL_0018;*/goto IL_0055;                              //br.s				IL_0018
	IL_0055:            goto IL_0069;                                               //leave.s				IL_0069
	IL_0057:                                                                        //ldc.i4				0x2
	IL_005c:            V_1=2;                                                      //stloc				V_1
	IL_0060:            /*goto IL_0018;*/goto IL_0062;                              //br.s				IL_0018
	IL_0062:            goto IL_0067;                                               //leave.s				IL_0067
	                    ;}
	                    catch(System::Object^ Ex_006202){
	IL_0064:                                                                        //pop
	IL_0065:            goto IL_0067;                                               //leave.s				IL_0067
	                    ;}
	IL_0067:                                                                        //ldc.i4.0
	IL_0068:            return false;                                               //ret
	IL_0069:                                                                        //ldloc.0
	IL_006a:            return V_0;                                                 //ret

}
inline System::Uri^ Root::T_x4::T_x1::M_x1(System::Uri^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IntPtr Temp_0 = (System::IntPtr)0;
	System::String^ Temp_1 = nullptr;
	System::IntPtr Temp_2 = (System::IntPtr)0;
	System::Net::IWebProxy^ Temp_3 = nullptr;
	System::Uri^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::Uri^ Temp_9 = nullptr;
	System::IntPtr Temp_10 = (System::IntPtr)0;
	System::IntPtr Temp_11 = (System::IntPtr)0;
	System::Boolean Temp_12 = false;
	System::Boolean Temp_13 = false;
	System::IntPtr Temp_14 = (System::IntPtr)0;
	System::IntPtr Temp_15 = (System::IntPtr)0;
	System::Boolean Temp_16 = false;
	System::IntPtr Temp_17 = (System::IntPtr)0;
	System::String^ Temp_18 = nullptr;
	System::IntPtr Temp_19 = (System::IntPtr)0;
	array<System::Char>^ Temp_20 = nullptr;
	array<System::String^>^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::IntPtr Temp_24 = (System::IntPtr)0;
	System::Boolean Temp_25 = false;
	System::IntPtr Temp_26 = (System::IntPtr)0;
	System::Boolean Temp_27 = false;
	System::Boolean Temp_28 = false;
	System::Uri^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::Int32 Temp_31 = 0;
	System::String^ Temp_32 = nullptr;
	System::IntPtr Temp_33 = (System::IntPtr)0;
	System::String^ Temp_34 = nullptr;
	System::IntPtr Temp_35 = (System::IntPtr)0;
	System::Uri^ Temp_36 = nullptr;
	//local variables.
	System::IntPtr V_0 = (System::IntPtr)0;
	Root::T_x4::T_x1::T_x1_11::T_x2 V_1;
	Root::T_x4::T_x1::T_x1_11::T_x12 V_2;
	System::String^ V_3 = nullptr;
	System::Uri^ V_4 = nullptr;
	System::Boolean V_5 = false;
	array<System::String^>^ V_6 = nullptr;
	System::String^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::String^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	array<System::Char>^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	System::Int32 V_13 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_13=3;                                                     //stloc				V_13
	IL_0009:            goto IL_00ab;                                               //br				IL_00ab
	IL_000e:                                                                        //ldloc				V_12
	IL_0012:            switch(V_12){case 0:goto IL_03fb;case 1:goto IL_015a;case 2:goto IL_028a;case 3:goto IL_02d0;case 4:goto IL_0137;case 5:goto IL_03d0;case 6:goto IL_010a;case 7:goto IL_0379;case 8:goto IL_0121;case 9:goto IL_0248;case 10:goto IL_01b4;case 11:goto IL_0218;case 12:goto IL_0187;case 13:goto IL_0321;case 14:goto IL_026c;case 15:goto IL_04e1;case 16:goto IL_040c;case 17:goto IL_04a2;case 18:goto IL_0311;case 19:goto IL_048d;case 20:goto IL_02ee;case 21:goto IL_016d;case 22:goto IL_00ec;case 23:goto IL_044e;case 24:goto IL_0422;case 25:goto IL_035f;case 26:goto IL_02a4;case 27:goto IL_01db;case 28:goto IL_039a;case 29:goto IL_03e8;case 30:goto IL_0235;case 31:goto IL_01f9;case 32:goto IL_047a;case 33:goto IL_04c8;case 34:goto IL_04b8;case 35:goto IL_0345;case 36:goto IL_0461;};//switch				(IL_03fb,IL_015a,IL_028a,IL_02d0,IL_0137,IL_03d0,IL_010a,IL_0379,IL_0121,IL_0248,IL_01b4,IL_0218,IL_0187,IL_0321,IL_026c,IL_04e1,IL_040c,IL_04a2,IL_0311,IL_048d,IL_02ee,IL_016d,IL_00ec,IL_044e,IL_0422,IL_035f,IL_02a4,IL_01db,IL_039a,IL_03e8,IL_0235,IL_01f9,IL_047a,IL_04c8,IL_04b8,IL_0345,IL_0461)
	IL_00ab:            Temp_0=System::IntPtr::Zero;                                //ldsfld				System::IntPtr System::IntPtr Zero
	IL_00b0:            V_0=Temp_0;                                                 //stloc.0
	IL_00b1:                                                                        //ldloca.s				V_1
	IL_00b3:            V_1=Root::T_x4::T_x1::T_x1_11::T_x2();                      //initobj				Root::T_x4::T_x1::T_x1_11::T_x2
	IL_00b9:                                                                        //ldloca.s				V_2
	IL_00bb:            V_2=Root::T_x4::T_x1::T_x1_11::T_x12();                     //initobj				Root::T_x4::T_x1::T_x1_11::T_x12
	IL_00c1:                                                                        //ldnull
	IL_00c2:            V_3=safe_cast<System::String^>(nullptr);                    //stloc.3
	IL_00c3:                                                                        //ldarg.1
	IL_00c4:            V_4=A_0;                                                    //stloc.s				V_4
	IL_00c6:                                                                        //ldstr				L"\x4020\x5622\x5124\x4826\x0928\x5B2A\x5F2C\x402E\x4930\x4A32\x1534\x5636\x5E38\x5E3A\x533C\x4B3E\x6E40\x7242\x6B44\x7746"
	IL_00cb:                                                                        //ldloc				V_13
	IL_00cf:            Temp_1=a(L"\x4020\x5622\x5124\x4826\x0928\x5B2A\x5F2C\x402E\x4930\x4A32\x1534\x5636\x5E38\x5E3A\x533C\x4B3E\x6E40\x7242\x6B44\x7746",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d4:                                                                        //ldc.i4.0
	IL_00d5:                                                                        //ldnull
	IL_00d6:                                                                        //ldnull
	IL_00d7:                                                                        //ldc.i4.0
	IL_00d8:            Temp_2=Root::T_x4::T_x1::T_x1_11::WinHttpOpen(Temp_1,safe_cast<System::Int32>(0),safe_cast<System::String^>(nullptr),safe_cast<System::String^>(nullptr),safe_cast<System::Int32>(0));//call				System::IntPtr Root::T_x4::T_x1::T_x1_11::WinHttpOpen(System::String^,System::Int32,System::String^,System::String^,System::Int32)
	IL_00dd:            V_0=Temp_2;                                                 //stloc.0
	IL_00de:                                                                        //ldc.i4				0x16
	IL_00e3:            V_12=22;                                                    //stloc				V_12
	IL_00e7:            /*goto IL_000e;*/goto IL_00ec;                              //br				IL_000e
	IL_00ec:                                                                        //ldloc.0
	IL_00ed:            Temp_24=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_00f2:            Temp_25=(V_0 == Temp_24);                                   //call				System::Boolean System::IntPtr::op_Equality(System::IntPtr,System::IntPtr)
	IL_00f7:            if(!Temp_25)goto IL_0453;                                   //brfalse				IL_0453
	IL_00fc:                                                                        //ldc.i4				0x6
	IL_0101:            V_12=6;                                                     //stloc				V_12
	IL_0105:            /*goto IL_000e;*/goto IL_010a;                              //br				IL_000e
	IL_010a:            goto IL_02d5;                                               //br				IL_02d5
	IL_010f:                                                                        //ldloc.s				V_9
	IL_0111:            V_7=V_9;                                                    //stloc.s				V_7
	IL_0113:                                                                        //ldc.i4				0x8
	IL_0118:            V_12=8;                                                     //stloc				V_12
	IL_011c:            /*goto IL_000e;*/goto IL_0121;                              //br				IL_000e
	IL_0121:            /*goto IL_01b9;*/goto IL_01B401;                            //br				IL_01b9
	IL_0126:                                                                        //ldc.i4.0
	IL_0127:            V_5=false;                                                  //stloc.s				V_5
	IL_0129:                                                                        //ldc.i4				0x4
	IL_012e:            V_12=4;                                                     //stloc				V_12
	IL_0132:            /*goto IL_000e;*/goto IL_0137;                              //br				IL_000e
	IL_0137:                                                                        //ldloc.0
	IL_0138:                                                                        //ldarg.1
	IL_0139:            Temp_5=A_0->ToString();                                     //callvirt				System::String^ System::Uri::ToString()
	IL_013e:                                                                        //ldloca.s				V_1
	IL_0140:                                                                        //ldloca.s				V_2
	IL_0142:            Temp_6=Root::T_x4::T_x1::T_x1_11::WinHttpGetProxyForUrl(V_0,Temp_5,safe_cast<Root::T_x4::T_x1::T_x1_11::T_x2%>(V_1),safe_cast<Root::T_x4::T_x1::T_x1_11::T_x12%>(V_2));//call				System::Boolean Root::T_x4::T_x1::T_x1_11::WinHttpGetProxyForUrl(System::IntPtr,System::String^,Root::T_x4::T_x1::T_x1_11::T_x2%,Root::T_x4::T_x1::T_x1_11::T_x12%)
	IL_0147:            if(!Temp_6)goto IL_034a;                                    //brfalse				IL_034a
	IL_014c:                                                                        //ldc.i4				0x1
	IL_0151:            V_12=1;                                                     //stloc				V_12
	IL_0155:            /*goto IL_000e;*/goto IL_015a;                              //br				IL_000e
	IL_015a:            goto IL_023a;                                               //br				IL_023a
	IL_015f:                                                                        //ldc.i4				0x15
	IL_0164:            V_12=21;                                                    //stloc				V_12
	IL_0168:            /*goto IL_000e;*/goto IL_016d;                              //br				IL_000e
	IL_016d:                                                                        //ldloca.s				V_1
	IL_016f:            Temp_23=V_1.F_x5;                                           //ldfld				System::Boolean Root::T_x4::T_x1::T_x1_11::T_x2 F_x5
	IL_0174:            if(Temp_23)goto IL_047f;                                    //brtrue				IL_047f
	IL_0179:                                                                        //ldc.i4				0xc
	IL_017e:            V_12=12;                                                    //stloc				V_12
	IL_0182:            /*goto IL_000e;*/goto IL_0187;                              //br				IL_000e
	IL_0187:            goto IL_0271;                                               //br				IL_0271
	IL_018c:                                                                        //ldloca.s				V_1
	IL_018e:                                                                        //ldc.i4.2
	IL_018f:            V_1.F_x1=2;                                                 //stfld				System::Int32 Root::T_x4::T_x1::T_x1_11::T_x2 F_x1
	IL_0194:                                                                        //ldloca.s				V_1
	IL_0196:                                                                        //ldarg.0
	IL_0197:            Temp_29=this->F_x13;                                        //ldfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_019c:            Temp_30=Temp_29->ToString();                                //callvirt				System::String^ System::Uri::ToString()
	IL_01a1:            V_1.F_x12=Temp_30;                                          //stfld				System::String^ Root::T_x4::T_x1::T_x1_11::T_x2 F_x12
	IL_01a6:                                                                        //ldc.i4				0xa
	IL_01ab:            V_12=10;                                                    //stloc				V_12
	IL_01af:            /*goto IL_000e;*/goto IL_01b4;                              //br				IL_000e
	IL_01b4:            goto IL_02d8;                                               //br				IL_02d8
	IL_01B401:          try{
	IL_01b9:                                                                        //ldloc.s				V_7
	IL_01bb:            Temp_9=gcnew System::Uri(V_7);                              //newobj				void System::Uri::.ctor(System::String^)
	IL_01c0:            V_4=Temp_9;                                                 //stloc.s				V_4
	IL_01c2:            goto IL_047f;                                               //leave				IL_047f
	                    ;}
	                    catch(System::UriFormatException^ Ex_01C202){
	IL_01c7:                                                                        //pop
	IL_01c8:            goto IL_047f;                                               //leave				IL_047f
	                    ;}
	IL_01cd:                                                                        //ldc.i4				0x1b
	IL_01d2:            V_12=27;                                                    //stloc				V_12
	IL_01d6:            /*goto IL_000e;*/goto IL_01db;                              //br				IL_000e
	IL_01db:                                                                        //ldloc.0
	IL_01dc:            Temp_26=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_01e1:            Temp_27=(V_0 != Temp_26);                                   //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_01e6:            if(!Temp_27)goto IL_04e6;                                   //brfalse				IL_04e6
	IL_01eb:                                                                        //ldc.i4				0x1f
	IL_01f0:            V_12=31;                                                    //stloc				V_12
	IL_01f4:            /*goto IL_000e;*/goto IL_01f9;                              //br				IL_000e
	IL_01f9:            goto IL_028f;                                               //br				IL_028f
	IL_01fe:                                                                        //ldloc.s				V_6
	IL_0200:                                                                        //ldloc.s				V_8
	IL_0202:                                                                        //ldelem.ref
	IL_0203:            Temp_32=Root::T_x4::T_x1::M_x2(V_6[V_8]);                   //call				System::String^ Root::T_x4::T_x1::M_x2(System::String^)
	IL_0208:            V_9=Temp_32;                                                //stloc.s				V_9
	IL_020a:                                                                        //ldc.i4				0xb
	IL_020f:            V_12=11;                                                    //stloc				V_12
	IL_0213:            /*goto IL_000e;*/goto IL_0218;                              //br				IL_000e
	IL_0218:            goto IL_021b;                                               //br.s				IL_021b
	IL_021a:                                                                        //break
	IL_021b:                                                                        //ldloc.s				V_9
	IL_021d:            Temp_13=Root::T_x4::T_x1::M_x1(V_9);                        //call				System::Boolean Root::T_x4::T_x1::M_x1(System::String^)
	IL_0222:            if(!Temp_13)goto IL_040e;                                   //brfalse				IL_040e
	IL_0227:                                                                        //ldc.i4				0x1e
	IL_022c:            V_12=30;                                                    //stloc				V_12
	IL_0230:            /*goto IL_000e;*/goto IL_0235;                              //br				IL_000e
	IL_0235:            goto IL_010f;                                               //br				IL_010f
	IL_023a:                                                                        //ldc.i4				0x9
	IL_023f:            V_12=9;                                                     //stloc				V_12
	IL_0243:            /*goto IL_000e;*/goto IL_0248;                              //br				IL_000e
	IL_0248:                                                                        //ldloca.s				V_2
	IL_024a:            Temp_10=V_2.F_x2;                                           //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x12 F_x2
	IL_024f:            Temp_11=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_0254:            Temp_12=(Temp_10 != Temp_11);                               //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_0259:            if(!Temp_12)goto IL_0313;                                   //brfalse				IL_0313
	IL_025e:                                                                        //ldc.i4				0xe
	IL_0263:            V_12=14;                                                    //stloc				V_12
	IL_0267:            /*goto IL_000e;*/goto IL_026c;                              //br				IL_000e
	IL_026c:            goto IL_0427;                                               //br				IL_0427
	IL_0271:                                                                        //ldloca.s				V_1
	IL_0273:                                                                        //ldc.i4.1
	IL_0274:            V_1.F_x5=true;                                              //stfld				System::Boolean Root::T_x4::T_x1::T_x1_11::T_x2 F_x5
	IL_0279:                                                                        //ldc.i4.1
	IL_027a:            V_5=true;                                                   //stloc.s				V_5
	IL_027c:                                                                        //ldc.i4				0x2
	IL_0281:            V_12=2;                                                     //stloc				V_12
	IL_0285:            /*goto IL_000e;*/goto IL_028a;                              //br				IL_000e
	IL_028a:            goto IL_047f;                                               //br				IL_047f
	IL_028f:                                                                        //ldloc.0
	IL_0290:            Temp_28=Root::T_x4::T_x1::T_x1_11::WinHttpCloseHandle(V_0); //call				System::Boolean Root::T_x4::T_x1::T_x1_11::WinHttpCloseHandle(System::IntPtr)
	IL_0295:                                                                        //pop
	IL_0296:                                                                        //ldc.i4				0x1a
	IL_029b:            V_12=26;                                                    //stloc				V_12
	IL_029f:            /*goto IL_000e;*/goto IL_02a4;                              //br				IL_000e
	IL_02a4:            goto IL_04e6;                                               //br				IL_04e6
	IL_02a9:                                                                        //ldloca.s				V_2
	IL_02ab:            Temp_33=V_2.F_x12;                                          //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x12 F_x12
	IL_02b0:            Temp_34=System::Runtime::InteropServices::Marshal::PtrToStringUni(Temp_33);//call				System::String^ System::Runtime::InteropServices::Marshal::PtrToStringUni(System::IntPtr)
	IL_02b5:                                                                        //pop
	IL_02b6:                                                                        //ldloca.s				V_2
	IL_02b8:            Temp_35=V_2.F_x12;                                          //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x12 F_x12
	IL_02bd:            System::Runtime::InteropServices::Marshal::FreeHGlobal(Temp_35);//call				void System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr)
	IL_02c2:                                                                        //ldc.i4				0x3
	IL_02c7:            V_12=3;                                                     //stloc				V_12
	IL_02cb:            /*goto IL_000e;*/goto IL_02d0;                              //br				IL_000e
	IL_02d0:            goto IL_03ed;                                               //br				IL_03ed
	IL_02d5:                                                                        //ldloc.s				V_4
	IL_02d7:            return V_4;                                                 //ret
	IL_02d8:                                                                        //ldloca.s				V_1
	IL_02da:                                                                        //ldc.i4.0
	IL_02db:            V_1.F_x5=false;                                             //stfld				System::Boolean Root::T_x4::T_x1::T_x1_11::T_x2 F_x5
	IL_02e0:                                                                        //ldc.i4				0x14
	IL_02e5:            V_12=20;                                                    //stloc				V_12
	IL_02e9:            /*goto IL_000e;*/goto IL_02ee;                              //br				IL_000e
	IL_02ee:            goto IL_0126;                                               //br				IL_0126
	IL_02f3:                                                                        //ldloca.s				V_1
	IL_02f5:                                                                        //ldc.i4.1
	IL_02f6:            V_1.F_x1=1;                                                 //stfld				System::Int32 Root::T_x4::T_x1::T_x1_11::T_x2 F_x1
	IL_02fb:                                                                        //ldloca.s				V_1
	IL_02fd:                                                                        //ldc.i4.3
	IL_02fe:            V_1.F_x2=3;                                                 //stfld				System::Int32 Root::T_x4::T_x1::T_x1_11::T_x2 F_x2
	IL_0303:                                                                        //ldc.i4				0x12
	IL_0308:            V_12=18;                                                    //stloc				V_12
	IL_030c:            /*goto IL_000e;*/goto IL_0311;                              //br				IL_000e
	IL_0311:            goto IL_02d8;                                               //br.s				IL_02d8
	IL_0313:                                                                        //ldc.i4				0xd
	IL_0318:            V_12=13;                                                    //stloc				V_12
	IL_031c:            /*goto IL_000e;*/goto IL_0321;                              //br				IL_000e
	IL_0321:                                                                        //ldloca.s				V_2
	IL_0323:            Temp_14=V_2.F_x12;                                          //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x12 F_x12
	IL_0328:            Temp_15=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_032d:            Temp_16=(Temp_14 != Temp_15);                               //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_0332:            if(!Temp_16)goto IL_03ed;                                   //brfalse				IL_03ed
	IL_0337:                                                                        //ldc.i4				0x23
	IL_033c:            V_12=35;                                                    //stloc				V_12
	IL_0340:            /*goto IL_000e;*/goto IL_0345;                              //br				IL_000e
	IL_0345:            goto IL_02a9;                                               //br				IL_02a9
	IL_034a:            Temp_7=System::Runtime::InteropServices::Marshal::GetLastWin32Error();//call				System::Int32 System::Runtime::InteropServices::Marshal::GetLastWin32Error()
	IL_034f:            V_10=Temp_7;                                                //stloc.s				V_10
	IL_0351:                                                                        //ldc.i4				0x19
	IL_0356:            V_12=25;                                                    //stloc				V_12
	IL_035a:            /*goto IL_000e;*/goto IL_035f;                              //br				IL_000e
	IL_035f:                                                                        //ldloc.s				V_10
	IL_0361:                                                                        //ldc.i4				0x2eef
	IL_0366:            if(V_10!=12015)goto IL_047f;                                //bne.un				IL_047f
	IL_036b:                                                                        //ldc.i4				0x7
	IL_0370:            V_12=7;                                                     //stloc				V_12
	IL_0374:            /*goto IL_000e;*/goto IL_0379;                              //br				IL_000e
	IL_0379:            goto IL_015f;                                               //br				IL_015f
	IL_037e:                                                                        //ldarg.0
	IL_037f:            Temp_3=this->F_x8;                                          //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_0384:                                                                        //ldarg.1
	IL_0385:            Temp_4=Temp_3->GetProxy(A_0);                               //callvirt				System::Uri^ System::Net::IWebProxy::GetProxy(System::Uri^)
	IL_038a:            V_4=Temp_4;                                                 //stloc.s				V_4
	IL_038c:                                                                        //ldc.i4				0x1c
	IL_0391:            V_12=28;                                                    //stloc				V_12
	IL_0395:            /*goto IL_000e;*/goto IL_039a;                              //br				IL_000e
	IL_039a:            goto IL_047f;                                               //br				IL_047f
	IL_039f:                                                                        //ldloc.3
	IL_03a0:                                                                        //ldc.i4.1
	IL_03a1:            Temp_20=gcnew array<System::Char>(1);                       //newarr				System::Char
	IL_03a6:            V_11=Temp_20;                                               //stloc.s				V_11
	IL_03a8:                                                                        //ldloc.s				V_11
	IL_03aa:                                                                        //ldc.i4.0
	IL_03ab:                                                                        //ldc.i4.s				59
	IL_03ad:            V_11[0]=(System::Char)59;                                   //stelem.i2
	IL_03ae:                                                                        //ldloc.s				V_11
	IL_03b0:            Temp_21=V_3->Split(V_11);                                   //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_03b5:            V_6=Temp_21;                                                //stloc.s				V_6
	IL_03b7:                                                                        //ldloc.s				V_6
	IL_03b9:                                                                        //ldc.i4.0
	IL_03ba:                                                                        //ldelem.ref
	IL_03bb:            Temp_22=Root::T_x4::T_x1::M_x2(V_6[0]);                     //call				System::String^ Root::T_x4::T_x1::M_x2(System::String^)
	IL_03c0:            V_7=Temp_22;                                                //stloc.s				V_7
	IL_03c2:                                                                        //ldc.i4				0x5
	IL_03c7:            V_12=5;                                                     //stloc				V_12
	IL_03cb:            /*goto IL_000e;*/goto IL_03d0;                              //br				IL_000e
	IL_03d0:                                                                        //ldloc.s				V_6
	IL_03d2:            Temp_8=V_6->Length;                                         //ldlen
	IL_03d3:                                                                        //conv.i4
	IL_03d4:                                                                        //ldc.i4.1
	IL_03d5:            /*if(Temp_8<=1)goto IL_01b9;*/if(Temp_8<=1)goto IL_01B401;  //ble				IL_01b9
	IL_03da:                                                                        //ldc.i4				0x1d
	IL_03df:            V_12=29;                                                    //stloc				V_12
	IL_03e3:            /*goto IL_000e;*/goto IL_03e8;                              //br				IL_000e
	IL_03e8:            goto IL_04a7;                                               //br				IL_04a7
	IL_03ed:                                                                        //ldc.i4				0x0
	IL_03f2:            V_12=0;                                                     //stloc				V_12
	IL_03f6:            /*goto IL_000e;*/goto IL_03fb;                              //br				IL_000e
	IL_03fb:                                                                        //ldloc.3
	IL_03fc:            if(V_3==nullptr)goto IL_037e;                               //brfalse.s				IL_037e
	IL_03fe:                                                                        //ldc.i4				0x10
	IL_0403:            V_12=16;                                                    //stloc				V_12
	IL_0407:            /*goto IL_000e;*/goto IL_040c;                              //br				IL_000e
	IL_040c:            goto IL_039f;                                               //br.s				IL_039f
	IL_040e:                                                                        //ldloc.s				V_8
	IL_0410:                                                                        //ldc.i4.1
	IL_0411:                                                                        //add
	IL_0412:            V_8=(V_8 + 1);                                              //stloc.s				V_8
	IL_0414:                                                                        //ldc.i4				0x18
	IL_0419:            V_12=24;                                                    //stloc				V_12
	IL_041d:            /*goto IL_000e;*/goto IL_0422;                              //br				IL_000e
	IL_0422:            goto IL_04ba;                                               //br				IL_04ba
	IL_0427:                                                                        //ldloca.s				V_2
	IL_0429:            Temp_17=V_2.F_x2;                                           //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x12 F_x2
	IL_042e:            Temp_18=System::Runtime::InteropServices::Marshal::PtrToStringUni(Temp_17);//call				System::String^ System::Runtime::InteropServices::Marshal::PtrToStringUni(System::IntPtr)
	IL_0433:            V_3=Temp_18;                                                //stloc.3
	IL_0434:                                                                        //ldloca.s				V_2
	IL_0436:            Temp_19=V_2.F_x2;                                           //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x12 F_x2
	IL_043b:            System::Runtime::InteropServices::Marshal::FreeHGlobal(Temp_19);//call				void System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr)
	IL_0440:                                                                        //ldc.i4				0x17
	IL_0445:            V_12=23;                                                    //stloc				V_12
	IL_0449:            /*goto IL_000e;*/goto IL_044e;                              //br				IL_000e
	IL_044e:            goto IL_0313;                                               //br				IL_0313
	IL_0453:                                                                        //ldc.i4				0x24
	IL_0458:            V_12=36;                                                    //stloc				V_12
	IL_045c:            /*goto IL_000e;*/goto IL_0461;                              //br				IL_000e
	IL_0461:                                                                        //ldarg.0
	IL_0462:            Temp_36=this->F_x13;                                        //ldfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_0467:            if(Temp_36==nullptr)goto IL_02f3;                           //brfalse				IL_02f3
	IL_046c:                                                                        //ldc.i4				0x20
	IL_0471:            V_12=32;                                                    //stloc				V_12
	IL_0475:            /*goto IL_000e;*/goto IL_047a;                              //br				IL_000e
	IL_047a:            goto IL_018c;                                               //br				IL_018c
	IL_047f:                                                                        //ldc.i4				0x13
	IL_0484:            V_12=19;                                                    //stloc				V_12
	IL_0488:            /*goto IL_000e;*/goto IL_048d;                              //br				IL_000e
	IL_048d:                                                                        //ldloc.s				V_5
	IL_048f:            if(V_5)goto IL_0126;                                        //brtrue				IL_0126
	IL_0494:                                                                        //ldc.i4				0x11
	IL_0499:            V_12=17;                                                    //stloc				V_12
	IL_049d:            /*goto IL_000e;*/goto IL_04a2;                              //br				IL_000e
	IL_04a2:            goto IL_01cd;                                               //br				IL_01cd
	IL_04a7:                                                                        //ldc.i4.0
	IL_04a8:            V_8=0;                                                      //stloc.s				V_8
	IL_04aa:                                                                        //ldc.i4				0x22
	IL_04af:            V_12=34;                                                    //stloc				V_12
	IL_04b3:            /*goto IL_000e;*/goto IL_04b8;                              //br				IL_000e
	IL_04b8:            goto IL_04ba;                                               //br.s				IL_04ba
	IL_04ba:                                                                        //ldc.i4				0x21
	IL_04bf:            V_12=33;                                                    //stloc				V_12
	IL_04c3:            /*goto IL_000e;*/goto IL_04c8;                              //br				IL_000e
	IL_04c8:                                                                        //ldloc.s				V_8
	IL_04ca:                                                                        //ldloc.s				V_6
	IL_04cc:            Temp_31=V_6->Length;                                        //ldlen
	IL_04cd:                                                                        //conv.i4
	IL_04ce:            if(V_8<Temp_31)goto IL_01fe;                                //blt				IL_01fe
	IL_04d3:                                                                        //ldc.i4				0xf
	IL_04d8:            V_12=15;                                                    //stloc				V_12
	IL_04dc:            /*goto IL_000e;*/goto IL_04e1;                              //br				IL_000e
	IL_04e1:            /*goto IL_01b9;*/goto IL_01B401;                            //br				IL_01b9
	IL_04e6:                                                                        //ldloc.s				V_4
	IL_04e8:            return V_4;                                                 //ret

}
inline System::Net::IWebProxy^ Root::T_x4::T_x1::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IntPtr Temp_0 = (System::IntPtr)0;
	System::String^ Temp_1 = nullptr;
	System::IntPtr Temp_2 = (System::IntPtr)0;
	System::IntPtr Temp_3 = (System::IntPtr)0;
	System::String^ Temp_4 = nullptr;
	System::IntPtr Temp_5 = (System::IntPtr)0;
	System::IntPtr Temp_6 = (System::IntPtr)0;
	System::IntPtr Temp_7 = (System::IntPtr)0;
	System::Boolean Temp_8 = false;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::IntPtr Temp_11 = (System::IntPtr)0;
	System::IntPtr Temp_12 = (System::IntPtr)0;
	System::Boolean Temp_13 = false;
	System::Boolean Temp_14 = false;
	System::AppDomain^ Temp_15 = nullptr;
	System::Security::Principal::WindowsIdentity^ Temp_16 = nullptr;
	System::Security::Principal::WindowsPrincipal^ Temp_17 = nullptr;
	System::Net::WebProxy^ Temp_18 = nullptr;
	System::Net::ICredentials^ Temp_19 = nullptr;
	System::IntPtr Temp_20 = (System::IntPtr)0;
	System::IntPtr Temp_21 = (System::IntPtr)0;
	System::Boolean Temp_22 = false;
	System::Uri^ Temp_23 = nullptr;
	Root::T_x4::T_x1^ Temp_24 = nullptr;
	System::IntPtr Temp_25 = (System::IntPtr)0;
	System::String^ Temp_26 = nullptr;
	System::IntPtr Temp_27 = (System::IntPtr)0;
	//local variables.
	System::Net::IWebProxy^ V_0 = nullptr;
	Root::T_x4::T_x1::T_x1_11::T_x1 V_1;
	System::Boolean V_2 = false;
	System::String^ V_3 = nullptr;
	System::Uri^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_004b;                                               //br.s				IL_004b
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_0089;case 1:goto IL_00c7;case 2:goto IL_0215;case 3:goto IL_0068;case 4:goto IL_01a5;case 5:goto IL_0178;case 6:goto IL_00a6;case 7:goto IL_0192;case 8:goto IL_00da;case 9:goto IL_00ee;case 10:goto IL_01bd;case 11:goto IL_0058;case 12:goto IL_0101;case 13:goto IL_01e6;case 14:goto IL_014e;case 15:goto IL_0122;};//switch				(IL_0089,IL_00c7,IL_0215,IL_0068,IL_01a5,IL_0178,IL_00a6,IL_0192,IL_00da,IL_00ee,IL_01bd,IL_0058,IL_0101,IL_01e6,IL_014e,IL_0122)
	IL_004b:                                                                        //ldnull
	IL_004c:            V_0=safe_cast<System::Net::IWebProxy^>(nullptr);            //stloc.0
	IL_004d:                                                                        //ldc.i4				0xb
	IL_0052:            V_5=11;                                                     //stloc				V_5
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            /*goto IL_023f;*/goto IL_023A02;                            //br				IL_023f
	IL_005d:                                                                        //ldc.i4				0x3
	IL_0062:            V_5=3;                                                      //stloc				V_5
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:                                                                        //ldloca.s				V_1
	IL_006a:            Temp_6=V_1.F_x12;                                           //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x12
	IL_006f:            Temp_7=System::IntPtr::Zero;                                //ldsfld				System::IntPtr System::IntPtr Zero
	IL_0074:            Temp_8=(Temp_6 != Temp_7);                                  //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_0079:            if(!Temp_8)goto IL_00f3;                                    //brfalse.s				IL_00f3
	IL_007b:                                                                        //ldc.i4				0x0
	IL_0080:            V_5=0;                                                      //stloc				V_5
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:            goto IL_0127;                                               //br				IL_0127
	IL_008e:                                                                        //ldloca.s				V_1
	IL_0090:            Temp_14=V_1.F_x1;                                           //ldfld				System::Boolean Root::T_x4::T_x1::T_x1_11::T_x1 F_x1
	IL_0095:            V_2=Temp_14;                                                //stloc.2
	IL_0096:                                                                        //ldnull
	IL_0097:            V_3=safe_cast<System::String^>(nullptr);                    //stloc.3
	IL_0098:                                                                        //ldc.i4				0x6
	IL_009d:            V_5=6;                                                      //stloc				V_5
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:                                                                        //ldloca.s				V_1
	IL_00a8:            Temp_11=V_1.F_x2;                                           //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x2
	IL_00ad:            Temp_12=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_00b2:            Temp_13=(Temp_11 != Temp_12);                               //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_00b7:            if(!Temp_13)goto IL_005d;                                   //brfalse.s				IL_005d
	IL_00b9:                                                                        //ldc.i4				0x1
	IL_00be:            V_5=1;                                                      //stloc				V_5
	IL_00c2:            /*goto IL_0002;*/goto IL_00c7;                              //br				IL_0002
	IL_00c7:            goto IL_01ee;                                               //br				IL_01ee
	IL_00cc:                                                                        //ldc.i4				0x8
	IL_00d1:            V_5=8;                                                      //stloc				V_5
	IL_00d5:            /*goto IL_0002;*/goto IL_00da;                              //br				IL_0002
	IL_00da:                                                                        //ldloc.0
	IL_00db:            if(V_0==nullptr)goto IL_02a9;                               //brfalse				IL_02a9
	IL_00e0:                                                                        //ldc.i4				0x9
	IL_00e5:            V_5=9;                                                      //stloc				V_5
	IL_00e9:            /*goto IL_0002;*/goto IL_00ee;                              //br				IL_0002
	IL_00ee:            goto IL_0197;                                               //br				IL_0197
	IL_00f3:                                                                        //ldc.i4				0xc
	IL_00f8:            V_5=12;                                                     //stloc				V_5
	IL_00fc:            /*goto IL_0002;*/goto IL_0101;                              //br				IL_0002
	IL_0101:                                                                        //ldloca.s				V_1
	IL_0103:            Temp_20=V_1.F_x13;                                          //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x13
	IL_0108:            Temp_21=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_010d:            Temp_22=(Temp_20 != Temp_21);                               //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_0112:            if(!Temp_22)goto IL_0150;                                   //brfalse.s				IL_0150
	IL_0114:                                                                        //ldc.i4				0xf
	IL_0119:            V_5=15;                                                     //stloc				V_5
	IL_011d:            /*goto IL_0002;*/goto IL_0122;                              //br				IL_0002
	IL_0122:            goto IL_01bf;                                               //br				IL_01bf
	IL_0127:                                                                        //ldloca.s				V_1
	IL_0129:            Temp_0=V_1.F_x12;                                           //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x12
	IL_012e:            Temp_1=System::Runtime::InteropServices::Marshal::PtrToStringUni(Temp_0);//call				System::String^ System::Runtime::InteropServices::Marshal::PtrToStringUni(System::IntPtr)
	IL_0133:                                                                        //pop
	IL_0134:                                                                        //ldloca.s				V_1
	IL_0136:            Temp_2=V_1.F_x12;                                           //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x12
	IL_013b:            System::Runtime::InteropServices::Marshal::FreeHGlobal(Temp_2);//call				void System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr)
	IL_0140:                                                                        //ldc.i4				0xe
	IL_0145:            V_5=14;                                                     //stloc				V_5
	IL_0149:            /*goto IL_0002;*/goto IL_014e;                              //br				IL_0002
	IL_014e:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_0150:                                                                        //ldloc.3
	IL_0151:            Temp_23=Root::T_x4::T_x1::M_x12(V_3);                       //call				System::Uri^ Root::T_x4::T_x1::M_x12(System::String^)
	IL_0156:            V_4=Temp_23;                                                //stloc.s				V_4
	IL_0158:                                                                        //ldloc.2
	IL_0159:                                                                        //ldloc.s				V_4
	IL_015b:                                                                        //ldloc.0
	IL_015c:            Temp_24=gcnew Root::T_x4::T_x1(V_2,V_4,V_0);                //newobj				void Root::T_x4::T_x1::.ctor(System::Boolean,System::Uri^,System::Net::IWebProxy^)
	IL_0161:            return safe_cast<System::Net::IWebProxy^>(Temp_24);         //ret
	IL_0162:                                                                        //ldloca.s				V_1
	IL_0164:            V_1=Root::T_x4::T_x1::T_x1_11::T_x1();                      //initobj				Root::T_x4::T_x1::T_x1_11::T_x1
	IL_016a:                                                                        //ldc.i4				0x5
	IL_016f:            V_5=5;                                                      //stloc				V_5
	IL_0173:            /*goto IL_0002;*/goto IL_0178;                              //br				IL_0002
	IL_0178:                                                                        //ldloca.s				V_1
	IL_017a:            Temp_10=Root::T_x4::T_x1::T_x1_11::WinHttpGetIEProxyConfigForCurrentUser(safe_cast<Root::T_x4::T_x1::T_x1_11::T_x1%>(V_1));//call				System::Boolean Root::T_x4::T_x1::T_x1_11::WinHttpGetIEProxyConfigForCurrentUser(Root::T_x4::T_x1::T_x1_11::T_x1%)
	IL_017f:            if(!Temp_10)goto IL_02a9;                                   //brfalse				IL_02a9
	IL_0184:                                                                        //ldc.i4				0x7
	IL_0189:            V_5=7;                                                      //stloc				V_5
	IL_018d:            /*goto IL_0002;*/goto IL_0192;                              //br				IL_0002
	IL_0192:            goto IL_008e;                                               //br				IL_008e
	IL_0197:                                                                        //ldc.i4				0x4
	IL_019c:            V_5=4;                                                      //stloc				V_5
	IL_01a0:            /*goto IL_0002;*/goto IL_01a5;                              //br				IL_0002
	IL_01a5:            Temp_9=Root::T_x4::T_x1::M_x1();                            //call				System::Boolean Root::T_x4::T_x1::M_x1()
	IL_01aa:            if(!Temp_9)goto IL_02a9;                                    //brfalse				IL_02a9
	IL_01af:                                                                        //ldc.i4				0xa
	IL_01b4:            V_5=10;                                                     //stloc				V_5
	IL_01b8:            /*goto IL_0002;*/goto IL_01bd;                              //br				IL_0002
	IL_01bd:            /*goto IL_021a;*/goto IL_021501;                            //br.s				IL_021a
	IL_01bf:                                                                        //ldloca.s				V_1
	IL_01c1:            Temp_25=V_1.F_x13;                                          //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x13
	IL_01c6:            Temp_26=System::Runtime::InteropServices::Marshal::PtrToStringUni(Temp_25);//call				System::String^ System::Runtime::InteropServices::Marshal::PtrToStringUni(System::IntPtr)
	IL_01cb:                                                                        //pop
	IL_01cc:                                                                        //ldloca.s				V_1
	IL_01ce:            Temp_27=V_1.F_x13;                                          //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x13
	IL_01d3:            System::Runtime::InteropServices::Marshal::FreeHGlobal(Temp_27);//call				void System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr)
	IL_01d8:                                                                        //ldc.i4				0xd
	IL_01dd:            V_5=13;                                                     //stloc				V_5
	IL_01e1:            /*goto IL_0002;*/goto IL_01e6;                              //br				IL_0002
	IL_01e6:            goto IL_01e9;                                               //br.s				IL_01e9
	IL_01e8:                                                                        //break
	IL_01e9:            goto IL_0150;                                               //br				IL_0150
	IL_01ee:                                                                        //ldloca.s				V_1
	IL_01f0:            Temp_3=V_1.F_x2;                                            //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x2
	IL_01f5:            Temp_4=System::Runtime::InteropServices::Marshal::PtrToStringUni(Temp_3);//call				System::String^ System::Runtime::InteropServices::Marshal::PtrToStringUni(System::IntPtr)
	IL_01fa:            V_3=Temp_4;                                                 //stloc.3
	IL_01fb:                                                                        //ldloca.s				V_1
	IL_01fd:            Temp_5=V_1.F_x2;                                            //ldfld				System::IntPtr Root::T_x4::T_x1::T_x1_11::T_x1 F_x2
	IL_0202:            System::Runtime::InteropServices::Marshal::FreeHGlobal(Temp_5);//call				void System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr)
	IL_0207:                                                                        //ldc.i4				0x2
	IL_020c:            V_5=2;                                                      //stloc				V_5
	IL_0210:            /*goto IL_0002;*/goto IL_0215;                              //br				IL_0002
	IL_0215:            goto IL_005d;                                               //br				IL_005d
	IL_021501:          try{
	IL_021a:            Temp_15=System::AppDomain::CurrentDomain;                   //call				System::AppDomain^ System::AppDomain::get_CurrentDomain()
	IL_021f:                                                                        //ldc.i4.2
	IL_0220:            Temp_15->SetPrincipalPolicy(safe_cast<System::Security::Principal::PrincipalPolicy>(2));//callvirt				void System::AppDomain::SetPrincipalPolicy(System::Security::Principal::PrincipalPolicy)
	IL_0225:            Temp_16=System::Security::Principal::WindowsIdentity::GetCurrent();//call				System::Security::Principal::WindowsIdentity^ System::Security::Principal::WindowsIdentity::GetCurrent()
	IL_022a:            Temp_17=gcnew System::Security::Principal::WindowsPrincipal(Temp_16);//newobj				void System::Security::Principal::WindowsPrincipal::.ctor(System::Security::Principal::WindowsIdentity^)
	IL_022f:            System::Threading::Thread::CurrentPrincipal=safe_cast<System::Security::Principal::IPrincipal^>(Temp_17);//call				void System::Threading::Thread::set_CurrentPrincipal(System::Security::Principal::IPrincipal^)
	IL_0234:            goto IL_0162;                                               //leave				IL_0162
	                    ;}
	                    catch(System::Object^ Ex_023402){
	IL_0239:                                                                        //pop
	IL_023a:            goto IL_0162;                                               //leave				IL_0162
	                    ;}
	IL_023A02:          try{
	IL_023f:            goto IL_025a;                                               //br.s				IL_025a
	IL_0241:                                                                        //ldloc				V_5
	IL_0245:            switch(V_5){case 0:goto IL_0279;case 1:goto IL_0291;case 2:goto IL_026b;case 3:goto IL_029e;};//switch				(IL_0279,IL_0291,IL_026b,IL_029e)
	IL_025a:            Temp_18=System::Net::WebProxy::GetDefaultProxy();           //call				System::Net::WebProxy^ System::Net::WebProxy::GetDefaultProxy()
	IL_025f:            V_0=safe_cast<System::Net::IWebProxy^>(Temp_18);            //stloc.0
	IL_0260:                                                                        //ldc.i4				0x2
	IL_0265:            V_5=2;                                                      //stloc				V_5
	IL_0269:            /*goto IL_0241;*/goto IL_026b;                              //br.s				IL_0241
	IL_026b:                                                                        //ldloc.0
	IL_026c:            if(V_0==nullptr)goto IL_0293;                               //brfalse.s				IL_0293
	IL_026e:                                                                        //ldc.i4				0x0
	IL_0273:            V_5=0;                                                      //stloc				V_5
	IL_0277:            /*goto IL_0241;*/goto IL_0279;                              //br.s				IL_0241
	IL_0279:            goto IL_027b;                                               //br.s				IL_027b
	IL_027b:                                                                        //ldloc.0
	IL_027c:            Temp_19=System::Net::CredentialCache::DefaultCredentials;   //call				System::Net::ICredentials^ System::Net::CredentialCache::get_DefaultCredentials()
	IL_0281:            V_0->Credentials=Temp_19;                                   //callvirt				void System::Net::IWebProxy::set_Credentials(System::Net::ICredentials^)
	IL_0286:                                                                        //ldc.i4				0x1
	IL_028b:            V_5=1;                                                      //stloc				V_5
	IL_028f:            /*goto IL_0241;*/goto IL_0291;                              //br.s				IL_0241
	IL_0291:            goto IL_0293;                                               //br.s				IL_0293
	IL_0293:                                                                        //ldc.i4				0x3
	IL_0298:            V_5=3;                                                      //stloc				V_5
	IL_029c:            /*goto IL_0241;*/goto IL_029e;                              //br.s				IL_0241
	IL_029e:            goto IL_00cc;                                               //leave				IL_00cc
	                    ;}
	                    catch(System::Object^ Ex_029E02){
	IL_02a3:                                                                        //pop
	IL_02a4:            goto IL_00cc;                                               //leave				IL_00cc
	                    ;}
	IL_02a9:                                                                        //ldloc.0
	IL_02aa:            return V_0;                                                 //ret

}
inline System::Uri^ Root::T_x4::T_x1::M_x12(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Uri^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_1=13;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldc.i4				0x2
	IL_0019:            V_0=2;                                                      //stloc				V_0
	IL_001d:            /*goto IL_0021;*/goto IL_001f;                              //br.s				IL_0021
	IL_001f:            goto IL_003e;                                               //br.s				IL_003e
	IL_0021:                                                                        //ldloc				V_0
	IL_0025:            switch(V_0){case 0:goto IL_009e;case 1:goto IL_007c;case 2:goto IL_001f;case 3:goto IL_004c;case 4:goto IL_006f;};//switch				(IL_009e,IL_007c,IL_001f,IL_004c,IL_006f)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            if(A_0!=nullptr)goto IL_0071;                               //brtrue.s				IL_0071
	IL_0041:                                                                        //ldc.i4				0x3
	IL_0046:            V_0=3;                                                      //stloc				V_0
	IL_004a:            /*goto IL_0021;*/goto IL_004c;                              //br.s				IL_0021
	IL_004c:            goto IL_00a0;                                               //br.s				IL_00a0
	IL_004e:                                                                        //ldstr				L"\x432A\x592C\x5B2E\x4130\x0932\x1A34\x1836"
	IL_0053:                                                                        //ldloc				V_1
	IL_0057:            Temp_0=a(L"\x432A\x592C\x5B2E\x4130\x0932\x1A34\x1836",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_1=System::String::Concat(Temp_0,A_0);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0062:            A_0=Temp_1;                                                 //starg.s				A_0
	IL_0064:                                                                        //ldc.i4				0x4
	IL_0069:            V_0=4;                                                      //stloc				V_0
	IL_006d:            /*goto IL_0021;*/goto IL_006f;                              //br.s				IL_0021
	IL_006f:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_0071:                                                                        //ldc.i4				0x1
	IL_0076:            V_0=1;                                                      //stloc				V_0
	IL_007a:            /*goto IL_0021;*/goto IL_007c;                              //br.s				IL_0021
	IL_007c:                                                                        //ldarg.0
	IL_007d:                                                                        //ldstr				L"\x112A\x022C\x002E"
	IL_0082:                                                                        //ldloc				V_1
	IL_0086:            Temp_2=a(L"\x112A\x022C\x002E",V_1);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008b:            Temp_3=A_0->IndexOf(Temp_2);                                //callvirt				System::Int32 System::String::IndexOf(System::String^)
	IL_0090:                                                                        //ldc.i4.m1
	IL_0091:            if(Temp_3!=-1)goto IL_00a2;                                 //bne.un.s				IL_00a2
	IL_0093:                                                                        //ldc.i4				0x0
	IL_0098:            V_0=0;                                                      //stloc				V_0
	IL_009c:            /*goto IL_0021;*/goto IL_009e;                              //br.s				IL_0021
	IL_009e:            goto IL_004e;                                               //br.s				IL_004e
	IL_00a0:                                                                        //ldnull
	IL_00a1:            return nullptr;                                             //ret
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:            Temp_4=gcnew System::Uri(A_0);                              //newobj				void System::Uri::.ctor(System::String^)
	IL_00a8:            return Temp_4;                                              //ret

}
inline System::Uri^ Root::T_x4::T_x1::M_x12(System::Uri^ A_0)
//System::Net::IWebProxy^::GetProxy by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Uri^ Temp_1 = nullptr;
	System::Uri^ Temp_2 = nullptr;
	System::Net::IWebProxy^ Temp_3 = nullptr;
	System::Uri^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Net::IWebProxy^ Temp_6 = nullptr;
	System::Uri^ Temp_7 = nullptr;
	//local variables.
	System::Uri^ V_0 = nullptr;
	System::Uri^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0034;case 1:goto IL_0056;case 2:goto IL_0049;case 3:goto IL_008c;case 4:goto IL_0076;case 5:goto IL_0069;};//switch				(IL_0034,IL_0056,IL_0049,IL_008c,IL_0076,IL_0069)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            this->M_x2();                                               //call				void Root::T_x4::T_x1::M_x2()
	IL_0029:                                                                        //ldc.i4				0x0
	IL_002e:            V_2=0;                                                      //stloc				V_2
	IL_0032:            /*goto IL_0002;*/goto IL_0034;                              //br.s				IL_0002
	IL_0034:            goto IL_0037;                                               //br.s				IL_0037
	IL_0036:                                                                        //break
	IL_0037:            Temp_0=Root::T_x4::T_x1::M_x1();                            //call				System::Boolean Root::T_x4::T_x1::M_x1()
	IL_003c:            if(Temp_0)goto IL_006b;                                     //brtrue.s				IL_006b
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_2=2;                                                      //stloc				V_2
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_008e;                                               //br.s				IL_008e
	IL_004b:                                                                        //ldc.i4				0x1
	IL_0050:            V_2=1;                                                      //stloc				V_2
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_1=this->F_x13;                                         //ldfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_005c:            if(Temp_1!=nullptr)goto IL_00ac;                            //brtrue.s				IL_00ac
	IL_005e:                                                                        //ldc.i4				0x5
	IL_0063:            V_2=5;                                                      //stloc				V_2
	IL_0067:            /*goto IL_0002;*/goto IL_0069;                              //br.s				IL_0002
	IL_0069:            goto IL_009d;                                               //br.s				IL_009d
	IL_006b:                                                                        //ldc.i4				0x4
	IL_0070:            V_2=4;                                                      //stloc				V_2
	IL_0074:            /*goto IL_0002;*/goto IL_0076;                              //br.s				IL_0002
	IL_0076:                                                                        //ldarg.0
	IL_0077:            Temp_5=this->F_x12;                                         //ldfld				System::Boolean Root::T_x4::T_x1 F_x12
	IL_007c:            if(Temp_5)goto IL_00ac;                                     //brtrue.s				IL_00ac
	IL_007e:                                                                        //ldc.i4				0x3
	IL_0083:            V_2=3;                                                      //stloc				V_2
	IL_0087:            /*goto IL_0002;*/goto IL_008c;                              //br				IL_0002
	IL_008c:            goto IL_004b;                                               //br.s				IL_004b
	IL_008e:                                                                        //ldarg.0
	IL_008f:            Temp_3=this->F_x8;                                          //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_0094:                                                                        //ldarg.1
	IL_0095:            Temp_4=Temp_3->GetProxy(A_0);                               //callvirt				System::Uri^ System::Net::IWebProxy::GetProxy(System::Uri^)
	IL_009a:            V_0=Temp_4;                                                 //stloc.0
	IL_009b:                                                                        //ldloc.0
	IL_009c:            return V_0;                                                 //ret
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_6=this->F_x8;                                          //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_00a3:                                                                        //ldarg.1
	IL_00a4:            Temp_7=Temp_6->GetProxy(A_0);                               //callvirt				System::Uri^ System::Net::IWebProxy::GetProxy(System::Uri^)
	IL_00a9:            V_1=Temp_7;                                                 //stloc.1
	IL_00aa:                                                                        //ldloc.1
	IL_00ab:            return V_1;                                                 //ret
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:                                                                        //ldarg.1
	IL_00ae:            Temp_2=this->M_x1(A_0);                                     //call				System::Uri^ Root::T_x4::T_x1::M_x1(System::Uri^)
	IL_00b3:            return Temp_2;                                              //ret

}
inline System::Net::ICredentials^ Root::T_x4::T_x1::M_x13()
//System::Net::IWebProxy^::get_Credentials by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Net::IWebProxy^ Temp_0 = nullptr;
	System::Net::ICredentials^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_0006:            Temp_1=Temp_0->Credentials;                                 //callvirt				System::Net::ICredentials^ System::Net::IWebProxy::get_Credentials()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x4::T_x1::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::TimeSpan Temp_0;
	System::Boolean Temp_1 = false;
	System::DateTime Temp_2;
	System::DateTime Temp_3;
	System::TimeSpan Temp_4;
	System::Net::IWebProxy^ Temp_5 = nullptr;
	System::Net::ICredentials^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Uri^ Temp_8 = nullptr;
	System::Net::IWebProxy^ Temp_9 = nullptr;
	System::DateTime Temp_10;
	System::DateTime Temp_11;
	System::Boolean Temp_12 = false;
	System::DateTime Temp_13;
	//local variables.
	System::TimeSpan V_0;
	Root::T_x4::T_x1^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_2=0;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_000b;case 1:goto IL_0102;case 2:goto IL_004a;case 3:goto IL_011e;case 4:goto IL_013c;};//switch				(IL_000b,IL_0102,IL_004a,IL_011e,IL_013c)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_10=this->F_x1;                                         //ldfld				System::DateTime Root::T_x4::T_x1 F_x1
	IL_0030:            Temp_11=System::DateTime::MaxValue;                         //ldsfld				System::DateTime System::DateTime MaxValue
	IL_0035:            Temp_12=(Temp_10 != Temp_11);                               //call				System::Boolean System::DateTime::op_Inequality(System::DateTime,System::DateTime)
	IL_003a:            if(!Temp_12)goto IL_013e;                                   //brfalse				IL_013e
	IL_003f:                                                                        //ldc.i4				0x2
	IL_0044:            V_2=2;                                                      //stloc				V_2
	IL_0048:            /*goto IL_000d;*/goto IL_004a;                              //br.s				IL_000d
	IL_004a:            goto IL_004d;                                               //br.s				IL_004d
	IL_004c:                                                                        //break
	IL_004d:            goto IL_00e3;                                               //br				IL_00e3
	IL_004D01:          try{
	IL_0052:            goto IL_006d;                                               //br.s				IL_006d
	IL_0054:                                                                        //ldloc				V_2
	IL_0058:            switch(V_2){case 0:goto IL_0083;case 1:goto IL_00de;case 2:goto IL_00ce;case 3:goto IL_0091;};//switch				(IL_0083,IL_00de,IL_00ce,IL_0091)
	IL_006d:            Temp_5=Root::T_x4::T_x1::M_x12();                           //call				System::Net::IWebProxy^ Root::T_x4::T_x1::M_x12()
	IL_0072:                                                                        //castclass				Root::T_x4::T_x1
	IL_0077:            V_1=safe_cast<Root::T_x4::T_x1^>(Temp_5);                   //stloc.1
	IL_0078:                                                                        //ldc.i4				0x0
	IL_007d:            V_2=0;                                                      //stloc				V_2
	IL_0081:            /*goto IL_0054;*/goto IL_0083;                              //br.s				IL_0054
	IL_0083:                                                                        //ldloc.1
	IL_0084:            if(V_1==nullptr)goto IL_00d0;                               //brfalse.s				IL_00d0
	IL_0086:                                                                        //ldc.i4				0x3
	IL_008b:            V_2=3;                                                      //stloc				V_2
	IL_008f:            /*goto IL_0054;*/goto IL_0091;                              //br.s				IL_0054
	IL_0091:            goto IL_0093;                                               //br.s				IL_0093
	IL_0093:                                                                        //ldloc.1
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_6=this->M_x13();                                       //call				System::Net::ICredentials^ Root::T_x4::T_x1::M_x13()
	IL_009a:            V_1->M_x1(Temp_6);                                          //callvirt				void Root::T_x4::T_x1::M_x1(System::Net::ICredentials^)
	IL_009f:                                                                        //ldarg.0
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            Temp_7=V_1->F_x12;                                          //ldfld				System::Boolean Root::T_x4::T_x1 F_x12
	IL_00a6:            this->F_x12=Temp_7;                                         //stfld				System::Boolean Root::T_x4::T_x1 F_x12
	IL_00ab:                                                                        //ldarg.0
	IL_00ac:                                                                        //ldloc.1
	IL_00ad:            Temp_8=V_1->F_x13;                                          //ldfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_00b2:            this->F_x13=Temp_8;                                         //stfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:                                                                        //ldloc.1
	IL_00b9:            Temp_9=V_1->F_x8;                                           //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_00be:            this->F_x8=Temp_9;                                          //stfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_00c3:                                                                        //ldc.i4				0x2
	IL_00c8:            V_2=2;                                                      //stloc				V_2
	IL_00cc:            /*goto IL_0054;*/goto IL_00ce;                              //br.s				IL_0054
	IL_00ce:            goto IL_00d0;                                               //br.s				IL_00d0
	IL_00d0:                                                                        //ldc.i4				0x1
	IL_00d5:            V_2=1;                                                      //stloc				V_2
	IL_00d9:            /*goto IL_0054;*/goto IL_00de;                              //br				IL_0054
	IL_00de:            goto IL_0123;                                               //leave.s				IL_0123
	                    ;}
	                    catch(System::Exception^ Ex_00DE02){
	IL_00e0:                                                                        //pop
	IL_00e1:            goto IL_0123;                                               //leave.s				IL_0123
	                    ;}
	IL_00e3:            Temp_2=System::DateTime::Now;                               //call				System::DateTime System::DateTime::get_Now()
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:            Temp_3=this->F_x1;                                          //ldfld				System::DateTime Root::T_x4::T_x1 F_x1
	IL_00ee:            Temp_4=(Temp_2 - Temp_3);                                   //call				System::TimeSpan System::DateTime::op_Subtraction(System::DateTime,System::DateTime)
	IL_00f3:            V_0=Temp_4;                                                 //stloc.0
	IL_00f4:                                                                        //ldc.i4				0x1
	IL_00f9:            V_2=1;                                                      //stloc				V_2
	IL_00fd:            /*goto IL_000d;*/goto IL_0102;                              //br				IL_000d
	IL_0102:                                                                        //ldloc.0
	IL_0103:                                                                        //ldarg.0
	IL_0104:            Temp_0=this->F_x2;                                          //ldfld				System::TimeSpan Root::T_x4::T_x1 F_x2
	IL_0109:            Temp_1=(V_0 > Temp_0);                                      //call				System::Boolean System::TimeSpan::op_GreaterThan(System::TimeSpan,System::TimeSpan)
	IL_010e:            if(!Temp_1)goto IL_013e;                                    //brfalse.s				IL_013e
	IL_0110:                                                                        //ldc.i4				0x3
	IL_0115:            V_2=3;                                                      //stloc				V_2
	IL_0119:            /*goto IL_000d;*/goto IL_011e;                              //br				IL_000d
	IL_011e:            /*goto IL_0052;*/goto IL_004D01;                            //br				IL_0052
	IL_0123:                                                                        //ldarg.0
	IL_0124:            Temp_13=System::DateTime::Now;                              //call				System::DateTime System::DateTime::get_Now()
	IL_0129:            this->F_x1=Temp_13;                                         //stfld				System::DateTime Root::T_x4::T_x1 F_x1
	IL_012e:                                                                        //ldc.i4				0x4
	IL_0133:            V_2=4;                                                      //stloc				V_2
	IL_0137:            /*goto IL_000d;*/goto IL_013c;                              //br				IL_000d
	IL_013c:            goto IL_013e;                                               //br.s				IL_013e
	IL_013e:            return;                                                     //ret

}
inline System::String^ Root::T_x4::T_x1::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_1=14;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x4
	IL_000e:            V_0=4;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //sub
	IL_0019:                                                                        //blt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_0042;                                               //br.s				IL_0042
	IL_0021:                                                                        //ldloc				V_0
	IL_0025:            switch(V_0){case 0:goto IL_0070;case 1:goto IL_00cf;case 2:goto IL_00bf;case 3:goto IL_00f3;case 4:goto IL_0014;case 5:goto IL_0093;};//switch				(IL_0070,IL_00cf,IL_00bf,IL_00f3,IL_0014,IL_0093)
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0048:            Temp_8=A_0->ToLower(Temp_7);                                //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_004d:                                                                        //ldstr				L"\x442B\x5A2D\x442F\x4231"
	IL_0052:                                                                        //ldloc				V_1
	IL_0056:            Temp_9=a(L"\x442B\x5A2D\x442F\x4231",V_1);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005b:            Temp_10=Temp_8->StartsWith(Temp_9);                         //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_0060:            if(Temp_10)goto IL_00f5;                                    //brtrue				IL_00f5
	IL_0065:                                                                        //ldc.i4				0x0
	IL_006a:            V_0=0;                                                      //stloc				V_0
	IL_006e:            /*goto IL_0021;*/goto IL_0070;                              //br.s				IL_0021
	IL_0070:            goto IL_00c1;                                               //br.s				IL_00c1
	IL_0072:                                                                        //ldstr				L"\x442B\x5A2D\x442F\x4231\x0E33\x1935\x1737"
	IL_0077:                                                                        //ldloc				V_1
	IL_007b:            Temp_2=a(L"\x442B\x5A2D\x442F\x4231\x0E33\x1935\x1737",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0080:                                                                        //ldarg.0
	IL_0081:            Temp_3=System::String::Concat(Temp_2,A_0);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0086:            A_0=Temp_3;                                                 //starg.s				A_0
	IL_0088:                                                                        //ldc.i4				0x5
	IL_008d:            V_0=5;                                                      //stloc				V_0
	IL_0091:            /*goto IL_0021;*/goto IL_0093;                              //br.s				IL_0021
	IL_0093:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_0095:                                                                        //ldstr				L"\x442B\x5A2D\x442F\x4231\x0E33\x1935\x1737"
	IL_009a:                                                                        //ldloc				V_1
	IL_009e:            Temp_4=a(L"\x442B\x5A2D\x442F\x4231\x0E33\x1935\x1737",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:                                                                        //ldc.i4.1
	IL_00a5:            Temp_5=A_0->Substring(safe_cast<System::Int32>(1));         //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_00aa:            Temp_6=System::String::Concat(Temp_4,Temp_5);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00af:            A_0=Temp_6;                                                 //starg.s				A_0
	IL_00b1:                                                                        //ldc.i4				0x2
	IL_00b6:            V_0=2;                                                      //stloc				V_0
	IL_00ba:            /*goto IL_0021;*/goto IL_00bf;                              //br				IL_0021
	IL_00bf:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_00c1:                                                                        //ldc.i4				0x1
	IL_00c6:            V_0=1;                                                      //stloc				V_0
	IL_00ca:            /*goto IL_0021;*/goto IL_00cf;                              //br				IL_0021
	IL_00cf:                                                                        //ldarg.0
	IL_00d0:                                                                        //ldstr				L"\x032B"
	IL_00d5:                                                                        //ldloc				V_1
	IL_00d9:            Temp_0=a(L"\x032B",V_1);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00de:            Temp_1=A_0->StartsWith(Temp_0);                             //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_00e3:            if(!Temp_1)goto IL_0072;                                    //brfalse.s				IL_0072
	IL_00e5:                                                                        //ldc.i4				0x3
	IL_00ea:            V_0=3;                                                      //stloc				V_0
	IL_00ee:            /*goto IL_0021;*/goto IL_00f3;                              //br				IL_0021
	IL_00f3:            goto IL_0095;                                               //br.s				IL_0095
	IL_00f5:                                                                        //ldarg.0
	IL_00f6:            return A_0;                                                 //ret

}
inline System::Boolean Root::T_x4::T_x1::M_x2(System::Uri^ A_0)
//System::Net::IWebProxy^::IsBypassed by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Net::IWebProxy^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Uri^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0077;case 1:goto IL_002c;case 2:goto IL_0059;case 3:goto IL_003f;};//switch				(IL_0077,IL_002c,IL_0059,IL_003f)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            this->M_x2();                                               //call				void Root::T_x4::T_x1::M_x2()
	IL_0021:                                                                        //ldc.i4				0x1
	IL_0026:            V_0=1;                                                      //stloc				V_0
	IL_002a:            /*goto IL_0002;*/goto IL_002c;                              //br.s				IL_0002
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_2=this->F_x12;                                         //ldfld				System::Boolean Root::T_x4::T_x1 F_x12
	IL_0032:            if(Temp_2)goto IL_0079;                                     //brtrue.s				IL_0079
	IL_0034:                                                                        //ldc.i4				0x3
	IL_0039:            V_0=3;                                                      //stloc				V_0
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_004e;                                               //br.s				IL_004e
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_0=this->F_x8;                                          //ldfld				System::Net::IWebProxy^ Root::T_x4::T_x1 F_x8
	IL_0047:                                                                        //ldarg.1
	IL_0048:            Temp_1=Temp_0->IsBypassed(A_0);                             //callvirt				System::Boolean System::Net::IWebProxy::IsBypassed(System::Uri^)
	IL_004d:            return Temp_1;                                              //ret
	IL_004e:                                                                        //ldc.i4				0x2
	IL_0053:            V_0=2;                                                      //stloc				V_0
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_3=this->F_x13;                                         //ldfld				System::Uri^ Root::T_x4::T_x1 F_x13
	IL_005f:            if(Temp_3!=nullptr)goto IL_0079;                            //brtrue.s				IL_0079
	IL_0061:                                                                        //ldc.i4.4
	IL_0062:                                                                        //dup
	IL_0063:                                                                        //dup
	IL_0064:                                                                        //ldc.i4.2
	IL_0065:                                                                        //sub
	IL_0066:                                                                        //blt				IL_0062
	IL_006b:                                                                        //pop
	IL_006c:                                                                        //ldc.i4				0x0
	IL_0071:            V_0=0;                                                      //stloc				V_0
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:            goto IL_0041;                                               //br.s				IL_0041
	IL_0079:                                                                        //ldc.i4.0
	IL_007a:            return false;                                               //ret

}
inline Root::T_x4::T_x1::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Net::ICredentials^ Root::T_x4::T_x1::T_x2::M_x1()
//System::Net::IWebProxy^::get_Credentials by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Net::ICredentials^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Net::ICredentials^ Root::T_x4::T_x1::T_x2 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x4::T_x1::T_x2::M_x1(System::Net::ICredentials^ A_0)
//System::Net::IWebProxy^::set_Credentials by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::Net::ICredentials^ Root::T_x4::T_x1::T_x2 F_x1
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x4::T_x1::T_x2::M_x1(System::Uri^ A_0)
//System::Net::IWebProxy^::IsBypassed by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:            return true;                                                //ret

}
inline System::Uri^ Root::T_x4::T_x1::T_x2::M_x2(System::Uri^ A_0)
//System::Net::IWebProxy^::GetProxy by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Root::T_x4::T_x1::T_x1_11::T_x1_11()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
