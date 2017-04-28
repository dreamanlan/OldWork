#include "global_xref.h"

inline Root::T_x169::T_x169()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Collections::IDictionary^ Root::T_x169::M_x1(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Int32 Temp_7 = 0;
	Root::T_x169::T_x8^ Temp_8 = nullptr;
	Root::T_x169::T_x4^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	Root::T_x169::T_x11^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Globalization::CultureInfo^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	array<System::Object^>^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::InvalidOperationException^ Temp_19 = nullptr;
	System::Globalization::CultureInfo^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	array<System::Object^>^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Globalization::CultureInfo^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Runtime::InteropServices::COMException^ Temp_27 = nullptr;
	System::Int32 Temp_28 = 0;
	System::Int32 Temp_29 = 0;
	Root::T_x169::T_x10^ Temp_30 = nullptr;
	System::Int32 Temp_31 = 0;
	System::Int32 Temp_32 = 0;
	System::Int32 Temp_33 = 0;
	//local variables.
	System::Collections::IDictionary^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	Root::T_x169::T_x2^ V_2 = nullptr;
	Root::T_x169::T_x10^ V_3 = nullptr;
	Root::T_x169::T_x11^ V_4 = nullptr;
	System::Object^ V_5 = nullptr;
	System::UInt32 V_6 = 0;
	Root::T_x169::T_x15^ V_7 = nullptr;
	System::Runtime::InteropServices::COMException^ V_8 = nullptr;
	System::UInt32 V_9 = 0;
	Root::T_x169::T_x5^ V_10 = nullptr;
	Root::T_x169::T_x9^ V_11 = nullptr;
	Root::T_x169::T_x8^ V_12 = nullptr;
	array<System::Object^>^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_15=11;                                                    //stloc				V_15
	IL_0009:            goto IL_004c;                                               //br.s				IL_004c
	IL_000b:                                                                        //ldloc				V_14
	IL_000f:            switch(V_14){case 0:goto IL_016b;case 1:goto IL_00b3;case 2:goto IL_006a;case 3:goto IL_0127;case 4:goto IL_0093;case 5:goto IL_00c8;case 6:goto IL_0059;case 7:goto IL_0403;case 8:goto IL_00fa;case 9:goto IL_0187;case 10:goto IL_00df;case 11:goto IL_0414;case 12:goto IL_0140;case 13:goto IL_0159;};//switch				(IL_016b,IL_00b3,IL_006a,IL_0127,IL_0093,IL_00c8,IL_0059,IL_0403,IL_00fa,IL_0187,IL_00df,IL_0414,IL_0140,IL_0159)
	IL_004c:                                                                        //ldnull
	IL_004d:            V_0=safe_cast<System::Collections::IDictionary^>(nullptr);  //stloc.0
	IL_004e:                                                                        //ldc.i4				0x6
	IL_0053:            V_14=6;                                                     //stloc				V_14
	IL_0057:            /*goto IL_000b;*/goto IL_0059;                              //br.s				IL_000b
	IL_0059:                                                                        //ldarg.0
	IL_005a:            if(A_0==nullptr)goto IL_0419;                               //brfalse				IL_0419
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_14=2;                                                     //stloc				V_14
	IL_0068:            /*goto IL_000b;*/goto IL_006a;                              //br.s				IL_000b
	IL_006a:            goto IL_00fc;                                               //br				IL_00fc
	IL_006f:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0074:            V_0=safe_cast<System::Collections::IDictionary^>(Temp_0);   //stloc.0
	IL_0075:                                                                        //ldloc.s				V_12
	IL_0077:                                                                        //ldloc.0
	IL_0078:            Root::T_x169::M_x1(V_12,V_0);                               //call				void Root::T_x169::M_x1(Root::T_x169::T_x8^,System::Collections::IDictionary^)
	IL_007d:                                                                        //ldloc.s				V_12
	IL_007f:            Temp_1=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(V_12));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_0084:                                                                        //pop
	IL_0085:                                                                        //ldc.i4				0x4
	IL_008a:            V_14=4;                                                     //stloc				V_14
	IL_008e:            /*goto IL_000b;*/goto IL_0093;                              //br				IL_000b
	IL_0093:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_0095:                                                                        //ldnull
	IL_0096:            V_11=safe_cast<Root::T_x169::T_x9^>(nullptr);               //stloc.s				V_11
	IL_0098:                                                                        //ldloc.2
	IL_0099:                                                                        //ldarg.1
	IL_009a:                                                                        //ldloca.s				V_11
	IL_009c:            Temp_28=V_2->M_x1(safe_cast<System::UInt32>(A_1),safe_cast<Root::T_x169::T_x9^%>(V_11));//callvirt				System::Int32 Root::T_x169::T_x2::M_x1(System::UInt32,Root::T_x169::T_x9^%)
	IL_00a1:                                                                        //pop
	IL_00a2:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_00a4:                                                                        //break
	IL_00a5:                                                                        //ldc.i4				0x1
	IL_00aa:            V_14=1;                                                     //stloc				V_14
	IL_00ae:            /*goto IL_000b;*/goto IL_00b3;                              //br				IL_000b
	IL_00b3:                                                                        //ldloc.s				V_11
	IL_00b5:            if(V_11==nullptr)goto IL_0170;                              //brfalse				IL_0170
	IL_00ba:                                                                        //ldc.i4				0x5
	IL_00bf:            V_14=5;                                                     //stloc				V_14
	IL_00c3:            /*goto IL_000b;*/goto IL_00c8;                              //br				IL_000b
	IL_00c8:            goto IL_0142;                                               //br.s				IL_0142
	IL_00ca:                                                                        //ldnull
	IL_00cb:            V_2=safe_cast<Root::T_x169::T_x2^>(nullptr);                //stloc.2
	IL_00cc:                                                                        //ldnull
	IL_00cd:            V_3=safe_cast<Root::T_x169::T_x10^>(nullptr);               //stloc.3
	IL_00ce:                                                                        //ldnull
	IL_00cf:            V_4=safe_cast<Root::T_x169::T_x11^>(nullptr);               //stloc.s				V_4
	IL_00d1:                                                                        //ldc.i4				0xa
	IL_00d6:            V_14=10;                                                    //stloc				V_14
	IL_00da:            /*goto IL_000b;*/goto IL_00df;                              //br				IL_000b
	IL_00df:            /*goto IL_018c;*/goto IL_018701;                            //br				IL_018c
	IL_00e4:                                                                        //ldloc.s				V_11
	IL_00e6:            Temp_7=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(V_11));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_00eb:                                                                        //pop
	IL_00ec:                                                                        //ldc.i4				0x8
	IL_00f1:            V_14=8;                                                     //stloc				V_14
	IL_00f5:            /*goto IL_000b;*/goto IL_00fa;                              //br				IL_000b
	IL_00fa:            goto IL_0170;                                               //br.s				IL_0170
	IL_00fc:                                                                        //ldarg.0
	IL_00fd:            Temp_3=Root::T_x148::M_x1(A_0);                             //call				System::String^ Root::T_x148::M_x1(System::String^)
	IL_0102:            A_0=Temp_3;                                                 //starg.s				A_0
	IL_0104:                                                                        //ldarg.0
	IL_0105:                                                                        //ldstr				L"\x0728\x5B2A\x492C\x4D2E"
	IL_010a:                                                                        //ldloc				V_15
	IL_010e:            Temp_4=a(L"\x0728\x5B2A\x492C\x4D2E",V_15);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0113:            Temp_5=System::IO::Path::ChangeExtension(A_0,Temp_4);       //call				System::String^ System::IO::Path::ChangeExtension(System::String^,System::String^)
	IL_0118:            V_1=Temp_5;                                                 //stloc.1
	IL_0119:                                                                        //ldc.i4				0x3
	IL_011e:            V_14=3;                                                     //stloc				V_14
	IL_0122:            /*goto IL_000b;*/goto IL_0127;                              //br				IL_000b
	IL_0127:                                                                        //ldloc.1
	IL_0128:            Temp_6=System::IO::File::Exists(V_1);                       //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_012d:            if(!Temp_6)goto IL_0419;                                    //brfalse				IL_0419
	IL_0132:                                                                        //ldc.i4				0xc
	IL_0137:            V_14=12;                                                    //stloc				V_14
	IL_013b:            /*goto IL_000b;*/goto IL_0140;                              //br				IL_000b
	IL_0140:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_0142:                                                                        //ldloc.s				V_11
	IL_0144:            Temp_8=V_11->M_x12();                                       //callvirt				Root::T_x169::T_x8^ Root::T_x169::T_x9::M_x12()
	IL_0149:            V_12=Temp_8;                                                //stloc.s				V_12
	IL_014b:                                                                        //ldc.i4				0xd
	IL_0150:            V_14=13;                                                    //stloc				V_14
	IL_0154:            /*goto IL_000b;*/goto IL_0159;                              //br				IL_000b
	IL_0159:                                                                        //ldloc.s				V_12
	IL_015b:            if(V_12==nullptr)goto IL_00e4;                              //brfalse.s				IL_00e4
	IL_015d:                                                                        //ldc.i4				0x0
	IL_0162:            V_14=0;                                                     //stloc				V_14
	IL_0166:            /*goto IL_000b;*/goto IL_016b;                              //br				IL_000b
	IL_016b:            goto IL_006f;                                               //br				IL_006f
	IL_0170:                                                                        //ldloc.2
	IL_0171:            Temp_2=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(V_2));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_0176:                                                                        //pop
	IL_0177:                                                                        //ldnull
	IL_0178:            V_2=safe_cast<Root::T_x169::T_x2^>(nullptr);                //stloc.2
	IL_0179:                                                                        //ldc.i4				0x9
	IL_017e:            V_14=9;                                                     //stloc				V_14
	IL_0182:            /*goto IL_000b;*/goto IL_0187;                              //br				IL_000b
	IL_0187:            goto IL_0419;                                               //br				IL_0419
	IL_018701:          try{
	IL_018c:            goto IL_01bf;                                               //br.s				IL_01bf
	IL_018e:                                                                        //ldloc				V_14
	IL_0192:            switch(V_14){case 0:goto IL_0357;case 1:goto IL_022d;case 2:goto IL_031b;case 3:goto IL_0345;case 4:goto IL_01d4;case 5:goto IL_02db;case 6:goto IL_02c4;case 7:goto IL_0367;case 8:goto IL_0259;case 9:goto IL_0332;};//switch				(IL_0357,IL_022d,IL_031b,IL_0345,IL_01d4,IL_02db,IL_02c4,IL_0367,IL_0259,IL_0332)
	IL_01bf:            Temp_9=gcnew Root::T_x169::T_x4();                          //newobj				void Root::T_x169::T_x4::.ctor()
	IL_01c4:            V_5=safe_cast<System::Object^>(Temp_9);                     //stloc.s				V_5
	IL_01c6:                                                                        //ldc.i4.0
	IL_01c7:            V_6=0;                                                      //stloc.s				V_6
	IL_01c9:                                                                        //ldc.i4				0x4
	IL_01ce:            V_14=4;                                                     //stloc				V_14
	IL_01d2:            /*goto IL_018e;*/goto IL_01d4;                              //br.s				IL_018e
	IL_01d4:            /*goto IL_025e;*/goto IL_025901;                            //br				IL_025e
	IL_01d9:            Temp_20=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01de:                                                                        //ldstr				L"\x7A28\x522A\x402C\x4D2E\x5E30\x5F32\x1534\x6536\x5C38\x5A3A\x593C\x5A3E\x3340\x6342\x0644\x0846\x0448\x6B4A\x284C\x3D4E\x2350\x3C52\x2754\x7756\x7E58\x205A\x6D5C\x225E\x4660"
	IL_01e3:                                                                        //ldloc				V_15
	IL_01e7:            Temp_21=a(L"\x7A28\x522A\x402C\x4D2E\x5E30\x5F32\x1534\x6536\x5C38\x5A3A\x593C\x5A3E\x3340\x6342\x0644\x0846\x0448\x6B4A\x284C\x3D4E\x2350\x3C52\x2754\x7756\x7E58\x205A\x6D5C\x225E\x4660",V_15);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ec:                                                                        //ldc.i4.1
	IL_01ed:            Temp_22=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_01f2:            V_13=Temp_22;                                               //stloc.s				V_13
	IL_01f4:                                                                        //ldloc.s				V_13
	IL_01f6:                                                                        //ldc.i4.0
	IL_01f7:                                                                        //ldloca.s				V_6
	IL_01f9:                                                                        //ldstr				L"\x7128\x132A"
	IL_01fe:                                                                        //ldloc				V_15
	IL_0202:            Temp_23=a(L"\x7128\x132A",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0207:            Temp_24=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_020c:            Temp_25=V_6.ToString(Temp_23,safe_cast<System::IFormatProvider^>(Temp_24));//call				System::String^ System::UInt32::ToString(System::String^,System::IFormatProvider^)
	IL_0211:            V_13[0]=safe_cast<System::Object^>(Temp_25);                //stelem.ref
	IL_0212:                                                                        //ldloc.s				V_13
	IL_0214:            Temp_26=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_20),Temp_21,V_13);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0219:            Temp_27=gcnew System::Runtime::InteropServices::COMException(Temp_26);//newobj				void System::Runtime::InteropServices::COMException::.ctor(System::String^)
	IL_021e:            throw Temp_27;                                              //throw
	IL_021f:                                                                        //ldc.i4				0x1
	IL_0224:            V_14=1;                                                     //stloc				V_14
	IL_0228:            /*goto IL_018e;*/goto IL_022d;                              //br				IL_018e
	IL_022d:                                                                        //ldarg.0
	IL_022e:                                                                        //ldstr				L"\x0728\x5B2A\x492C\x4D2E"
	IL_0233:                                                                        //ldloc				V_15
	IL_0237:            Temp_10=a(L"\x0728\x5B2A\x492C\x4D2E",V_15);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023c:            Temp_11=System::IO::Path::ChangeExtension(A_0,Temp_10);     //call				System::String^ System::IO::Path::ChangeExtension(System::String^,System::String^)
	IL_0241:            Temp_12=System::IO::File::Exists(Temp_11);                  //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_0246:            if(!Temp_12)goto IL_0337;                                   //brfalse				IL_0337
	IL_024b:                                                                        //ldc.i4				0x8
	IL_0250:            V_14=8;                                                     //stloc				V_14
	IL_0254:            /*goto IL_018e;*/goto IL_0259;                              //br				IL_018e
	IL_0259:            goto IL_02e0;                                               //br				IL_02e0
	IL_025901:          try{
	IL_025e:            Temp_13=gcnew Root::T_x169::T_x11();                        //newobj				void Root::T_x169::T_x11::.ctor()
	IL_0263:            V_4=Temp_13;                                                //stloc.s				V_4
	IL_0265:                                                                        //ldloc.s				V_4
	IL_0267:                                                                        //castclass				Root::T_x169::T_x15
	IL_026c:            V_7=safe_cast<Root::T_x169::T_x15^>(V_4);                   //stloc.s				V_7
	IL_026e:                                                                        //ldloc.s				V_7
	IL_0270:                                                                        //ldloc.s				V_5
	IL_0272:                                                                        //ldarg.0
	IL_0273:                                                                        //ldnull
	IL_0274:                                                                        //ldloca.s				V_2
	IL_0276:            Temp_14=safe_cast<Root::T_x169::T_x5^>(V_7)->M_x1(V_5,A_0,safe_cast<System::String^>(nullptr),safe_cast<Root::T_x169::T_x2^%>(V_2));//callvirt				System::Int32 Root::T_x169::T_x5::M_x1(System::Object^,System::String^,System::String^,Root::T_x169::T_x2^%)
	IL_027b:            V_6=safe_cast<System::UInt32>(Temp_14);                     //stloc.s				V_6
	IL_027d:            goto IL_02b6;                                               //leave.s				IL_02b6
	                    ;}
	                    catch(System::Runtime::InteropServices::COMException^ Ex_027D02){
	IL_027f:            V_8=Ex_027D02;                                              //stloc.s				V_8
	IL_0281:                                                                        //ldloc.s				V_8
	IL_0283:            Temp_29=V_8->ErrorCode;                                     //callvirt				System::Int32 System::Runtime::InteropServices::ExternalException::get_ErrorCode()
	IL_0288:            V_9=safe_cast<System::UInt32>(Temp_29);                     //stloc.s				V_9
	IL_028a:                                                                        //ldloc.s				V_9
	IL_028c:                                                                        //ldc.i4				0x80040111
	IL_0291:            if(V_9!=2147746065)goto IL_02b4;                            //bne.un.s				IL_02b4
	IL_0293:            goto IL_0295;                                               //br.s				IL_0295
	IL_0295:            Temp_30=gcnew Root::T_x169::T_x10();                        //newobj				void Root::T_x169::T_x10::.ctor()
	IL_029a:            V_3=Temp_30;                                                //stloc.3
	IL_029b:                                                                        //ldloc.3
	IL_029c:                                                                        //castclass				Root::T_x169::T_x5
	IL_02a1:            V_10=safe_cast<Root::T_x169::T_x5^>(V_3);                   //stloc.s				V_10
	IL_02a3:                                                                        //ldloc.s				V_10
	IL_02a5:                                                                        //ldloc.s				V_5
	IL_02a7:                                                                        //ldarg.0
	IL_02a8:                                                                        //ldnull
	IL_02a9:                                                                        //ldloca.s				V_2
	IL_02ab:            Temp_31=V_10->M_x1(V_5,A_0,safe_cast<System::String^>(nullptr),safe_cast<Root::T_x169::T_x2^%>(V_2));//callvirt				System::Int32 Root::T_x169::T_x5::M_x1(System::Object^,System::String^,System::String^,Root::T_x169::T_x2^%)
	IL_02b0:            V_6=safe_cast<System::UInt32>(Temp_31);                     //stloc.s				V_6
	IL_02b2:            goto IL_02b4;                                               //br.s				IL_02b4
	IL_02b4:            goto IL_02b6;                                               //leave.s				IL_02b6
	                    ;}
	IL_02b6:                                                                        //ldc.i4				0x6
	IL_02bb:            V_14=6;                                                     //stloc				V_14
	IL_02bf:            /*goto IL_018e;*/goto IL_02c4;                              //br				IL_018e
	IL_02c4:                                                                        //ldloc.s				V_6
	IL_02c6:                                                                        //ldc.i4				0x806d0014
	IL_02cb:            if(V_6!=2154627092)goto IL_0337;                            //bne.un.s				IL_0337
	IL_02cd:                                                                        //ldc.i4				0x5
	IL_02d2:            V_14=5;                                                     //stloc				V_14
	IL_02d6:            /*goto IL_018e;*/goto IL_02db;                              //br				IL_018e
	IL_02db:            goto IL_021f;                                               //br				IL_021f
	IL_02e0:            Temp_15=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_02e5:                                                                        //ldstr				L"\x7D28\x432A\x482C\x0F2E\x6130\x7732\x7734\x1736\x5F38\x523A\x513C\x5A3E\x6140\x2242\x3644\x3446\x2648\x284A\x244C\x2E4E\x2550\x3652\x3154\x7756\x2E58\x325A\x295C\x375E\x4160\x4462\x1E64\x5766\x1468\x4C6A\x4D6C\x066E\x0270\x5372\x1A74\x0276\x0D78\x5B7A\x127C\x197E\xA180\xE782\xE484\xF386\xEC88\xA58A"
	IL_02ea:                                                                        //ldloc				V_15
	IL_02ee:            Temp_16=a(L"\x7D28\x432A\x482C\x0F2E\x6130\x7732\x7734\x1736\x5F38\x523A\x513C\x5A3E\x6140\x2242\x3644\x3446\x2648\x284A\x244C\x2E4E\x2550\x3652\x3154\x7756\x2E58\x325A\x295C\x375E\x4160\x4462\x1E64\x5766\x1468\x4C6A\x4D6C\x066E\x0270\x5372\x1A74\x0276\x0D78\x5B7A\x127C\x197E\xA180\xE782\xE484\xF386\xEC88\xA58A",V_15);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02f3:                                                                        //ldc.i4.1
	IL_02f4:            Temp_17=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_02f9:            V_13=Temp_17;                                               //stloc.s				V_13
	IL_02fb:                                                                        //ldloc.s				V_13
	IL_02fd:                                                                        //ldc.i4.0
	IL_02fe:                                                                        //ldarg.0
	IL_02ff:            V_13[0]=safe_cast<System::Object^>(A_0);                    //stelem.ref
	IL_0300:                                                                        //ldloc.s				V_13
	IL_0302:            Temp_18=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_15),Temp_16,V_13);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0307:            Temp_19=gcnew System::InvalidOperationException(Temp_18);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_030c:            throw Temp_19;                                              //throw
	IL_030d:                                                                        //ldc.i4				0x2
	IL_0312:            V_14=2;                                                     //stloc				V_14
	IL_0316:            /*goto IL_018e;*/goto IL_031b;                              //br				IL_018e
	IL_031b:                                                                        //ldloc.s				V_6
	IL_031d:                                                                        //ldc.i4				0x806d0005
	IL_0322:            if(V_6==2154627077)goto IL_0359;                            //beq.s				IL_0359
	IL_0324:                                                                        //ldc.i4				0x9
	IL_0329:            V_14=9;                                                     //stloc				V_14
	IL_032d:            /*goto IL_018e;*/goto IL_0332;                              //br				IL_018e
	IL_0332:            goto IL_01d9;                                               //br				IL_01d9
	IL_0337:                                                                        //ldc.i4				0x3
	IL_033c:            V_14=3;                                                     //stloc				V_14
	IL_0340:            /*goto IL_018e;*/goto IL_0345;                              //br				IL_018e
	IL_0345:                                                                        //ldloc.s				V_6
	IL_0347:            if(safe_cast<System::Int32>(V_6)==0)goto IL_0359;           //brfalse.s				IL_0359
	IL_0349:                                                                        //ldc.i4				0x0
	IL_034e:            V_14=0;                                                     //stloc				V_14
	IL_0352:            /*goto IL_018e;*/goto IL_0357;                              //br				IL_018e
	IL_0357:            goto IL_030d;                                               //br.s				IL_030d
	IL_0359:                                                                        //ldc.i4				0x7
	IL_035e:            V_14=7;                                                     //stloc				V_14
	IL_0362:            /*goto IL_018e;*/goto IL_0367;                              //br				IL_018e
	IL_0367:            goto IL_03f5;                                               //leave				IL_03f5
	                    ;}
	                    finally{
	IL_036c:                                                                        //ldc.i4				0x0
	IL_0371:            V_14=0;                                                     //stloc				V_14
	IL_0375:            /*goto IL_0379;*/goto IL_0377;                              //br.s				IL_0379
	IL_0377:            goto IL_039a;                                               //br.s				IL_039a
	IL_0379:                                                                        //ldloc				V_14
	IL_037d:            switch(V_14){case 0:goto IL_0377;case 1:goto IL_03c4;case 2:goto IL_03da;case 3:goto IL_03a8;case 4:goto IL_03f2;case 5:goto IL_03b5;};//switch				(IL_0377,IL_03c4,IL_03da,IL_03a8,IL_03f2,IL_03b5)
	IL_039a:                                                                        //ldloc.3
	IL_039b:            if(V_3==nullptr)goto IL_03aa;                               //brfalse.s				IL_03aa
	IL_039d:                                                                        //ldc.i4				0x3
	IL_03a2:            V_14=3;                                                     //stloc				V_14
	IL_03a6:            /*goto IL_0379;*/goto IL_03a8;                              //br.s				IL_0379
	IL_03a8:            goto IL_03c6;                                               //br.s				IL_03c6
	IL_03aa:                                                                        //ldc.i4				0x5
	IL_03af:            V_14=5;                                                     //stloc				V_14
	IL_03b3:            /*goto IL_0379;*/goto IL_03b5;                              //br.s				IL_0379
	IL_03b5:                                                                        //ldloc.s				V_4
	IL_03b7:            if(V_4==nullptr)goto IL_03f4;                               //brfalse.s				IL_03f4
	IL_03b9:                                                                        //ldc.i4				0x1
	IL_03be:            V_14=1;                                                     //stloc				V_14
	IL_03c2:            /*goto IL_0379;*/goto IL_03c4;                              //br.s				IL_0379
	IL_03c4:            goto IL_03dc;                                               //br.s				IL_03dc
	IL_03c6:                                                                        //ldloc.3
	IL_03c7:            Temp_33=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(V_3));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_03cc:                                                                        //pop
	IL_03cd:                                                                        //ldnull
	IL_03ce:            V_3=safe_cast<Root::T_x169::T_x10^>(nullptr);               //stloc.3
	IL_03cf:                                                                        //ldc.i4				0x2
	IL_03d4:            V_14=2;                                                     //stloc				V_14
	IL_03d8:            /*goto IL_0379;*/goto IL_03da;                              //br.s				IL_0379
	IL_03da:            goto IL_03aa;                                               //br.s				IL_03aa
	IL_03dc:                                                                        //ldloc.s				V_4
	IL_03de:            Temp_32=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(V_4));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_03e3:                                                                        //pop
	IL_03e4:                                                                        //ldnull
	IL_03e5:            V_4=safe_cast<Root::T_x169::T_x11^>(nullptr);               //stloc.s				V_4
	IL_03e7:                                                                        //ldc.i4				0x4
	IL_03ec:            V_14=4;                                                     //stloc				V_14
	IL_03f0:            /*goto IL_0379;*/goto IL_03f2;                              //br.s				IL_0379
	IL_03f2:            goto IL_03f4;                                               //br.s				IL_03f4
	IL_03f4:                                                                        //endfinally
	                    ;}
	IL_03f5:                                                                        //ldc.i4				0x7
	IL_03fa:            V_14=7;                                                     //stloc				V_14
	IL_03fe:            /*goto IL_000b;*/goto IL_0403;                              //br				IL_000b
	IL_0403:                                                                        //ldloc.2
	IL_0404:            if(V_2==nullptr)goto IL_0419;                               //brfalse.s				IL_0419
	IL_0406:                                                                        //ldc.i4				0xb
	IL_040b:            V_14=11;                                                    //stloc				V_14
	IL_040f:            /*goto IL_000b;*/goto IL_0414;                              //br				IL_000b
	IL_0414:            goto IL_0095;                                               //br				IL_0095
	IL_0419:                                                                        //ldloc.0
	IL_041a:            return V_0;                                                 //ret

}
inline void Root::T_x169::M_x1(Root::T_x169::T_x8^ A_0,System::Collections::IDictionary^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	array<System::IntPtr>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Type^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	array<System::Char>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::String^ Temp_9 = nullptr;
	array<System::Char>^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::UInt32 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	array<System::IntPtr>^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Type^ Temp_16 = nullptr;
	System::Object^ Temp_17 = nullptr;
	//local variables.
	System::UInt32 V_0 = 0;
	array<System::IntPtr>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Root::T_x169::T_x12^ V_3 = nullptr;
	System::UInt32 V_4 = 0;
	array<System::Char>^ V_5 = nullptr;
	System::String^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::UInt32 V_8 = 0;
	array<System::IntPtr>^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	Root::T_x169::T_x8^ V_11 = nullptr;
	array<System::Char>^ V_12 = nullptr;
	System::Int32 V_13 = 0;
	//method body ------- 
	IL_0000:            goto IL_0043;                                               //br.s				IL_0043
	IL_0002:                                                                        //ldloc				V_13
	IL_0006:            switch(V_13){case 0:goto IL_0237;case 1:goto IL_01f3;case 2:goto IL_01de;case 3:goto IL_006a;case 4:goto IL_021c;case 5:goto IL_01a7;case 6:goto IL_024e;case 7:goto IL_008d;case 8:goto IL_0193;case 9:goto IL_015f;case 10:goto IL_0277;case 11:goto IL_0132;case 12:goto IL_0206;case 13:goto IL_00c5;};//switch				(IL_0237,IL_01f3,IL_01de,IL_006a,IL_021c,IL_01a7,IL_024e,IL_008d,IL_0193,IL_015f,IL_0277,IL_0132,IL_0206,IL_00c5)
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_0=A_0->M_x8();                                         //callvirt				System::UInt32 Root::T_x169::T_x8::M_x8()
	IL_0049:            V_0=Temp_0;                                                 //stloc.0
	IL_004a:                                                                        //ldloc.0
	IL_004b:            Temp_1=gcnew array<System::IntPtr>(V_0);                    //newarr				System::IntPtr
	IL_0050:            V_1=Temp_1;                                                 //stloc.1
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldloc.1
	IL_0053:            Temp_2=V_1->Length;                                         //ldlen
	IL_0054:                                                                        //conv.i4
	IL_0055:                                                                        //ldloca.s				V_0
	IL_0057:                                                                        //ldloc.1
	IL_0058:            A_0->M_x2(safe_cast<System::UInt32>(Temp_2),safe_cast<System::UInt32%>(V_0),V_1);//callvirt				void Root::T_x169::T_x8::M_x2(System::UInt32,System::UInt32%,array<System::IntPtr>^)
	IL_005d:                                                                        //ldc.i4.0
	IL_005e:            V_2=0;                                                      //stloc.2
	IL_005f:                                                                        //ldc.i4				0x3
	IL_0064:            V_13=3;                                                     //stloc				V_13
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_021e;                                               //br				IL_021e
	IL_006f:                                                                        //ldloc.s				V_11
	IL_0071:                                                                        //ldarg.1
	IL_0072:            Root::T_x169::M_x1(V_11,A_1);                               //call				void Root::T_x169::M_x1(Root::T_x169::T_x8^,System::Collections::IDictionary^)
	IL_0077:                                                                        //ldloc.s				V_11
	IL_0079:            Temp_5=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(V_11));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_007e:                                                                        //pop
	IL_007f:                                                                        //ldc.i4				0x7
	IL_0084:            V_13=7;                                                     //stloc				V_13
	IL_0088:            /*goto IL_0002;*/goto IL_008d;                              //br				IL_0002
	IL_008d:            goto IL_0137;                                               //br				IL_0137
	IL_0092:                                                                        //ldc.i4.0
	IL_0093:            V_8=0;                                                      //stloc.s				V_8
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldc.i4.0
	IL_0097:                                                                        //ldloca.s				V_8
	IL_0099:                                                                        //ldnull
	IL_009a:            A_0->M_x1(safe_cast<System::UInt32>(0),safe_cast<System::UInt32%>(V_8),safe_cast<array<System::IntPtr>^>(nullptr));//callvirt				void Root::T_x169::T_x8::M_x1(System::UInt32,System::UInt32%,array<System::IntPtr>^)
	IL_009f:                                                                        //ldloc.s				V_8
	IL_00a1:            Temp_14=gcnew array<System::IntPtr>(V_8);                   //newarr				System::IntPtr
	IL_00a6:            V_9=Temp_14;                                                //stloc.s				V_9
	IL_00a8:                                                                        //ldarg.0
	IL_00a9:                                                                        //ldloc.s				V_8
	IL_00ab:                                                                        //ldloca.s				V_8
	IL_00ad:                                                                        //ldloc.s				V_9
	IL_00af:            A_0->M_x1(V_8,safe_cast<System::UInt32%>(V_8),V_9);         //callvirt				void Root::T_x169::T_x8::M_x1(System::UInt32,System::UInt32%,array<System::IntPtr>^)
	IL_00b4:                                                                        //ldc.i4.0
	IL_00b5:            V_10=0;                                                     //stloc.s				V_10
	IL_00b7:                                                                        //ldc.i4				0xd
	IL_00bc:            V_13=13;                                                    //stloc				V_13
	IL_00c0:            /*goto IL_0002;*/goto IL_00c5;                              //br				IL_0002
	IL_00c5:            goto IL_01f8;                                               //br				IL_01f8
	IL_00ca:                                                                        //ldc.i4.0
	IL_00cb:            V_4=0;                                                      //stloc.s				V_4
	IL_00cd:                                                                        //ldloc.3
	IL_00ce:                                                                        //ldc.i4.0
	IL_00cf:                                                                        //ldloca.s				V_4
	IL_00d1:                                                                        //ldnull
	IL_00d2:            V_3->M_x1(safe_cast<System::UInt32>(0),safe_cast<System::UInt32%>(V_4),safe_cast<array<System::Char>^>(nullptr));//callvirt				void Root::T_x169::T_x12::M_x1(System::UInt32,System::UInt32%,array<System::Char>^)
	IL_00d7:                                                                        //ldloc.s				V_4
	IL_00d9:            Temp_7=gcnew array<System::Char>(V_4);                      //newarr				System::Char
	IL_00de:            V_5=Temp_7;                                                 //stloc.s				V_5
	IL_00e0:                                                                        //ldloc.3
	IL_00e1:                                                                        //ldloc.s				V_5
	IL_00e3:            Temp_8=V_5->Length;                                         //ldlen
	IL_00e4:                                                                        //conv.i4
	IL_00e5:                                                                        //ldloca.s				V_4
	IL_00e7:                                                                        //ldloc.s				V_5
	IL_00e9:            V_3->M_x1(safe_cast<System::UInt32>(Temp_8),safe_cast<System::UInt32%>(V_4),V_5);//callvirt				void Root::T_x169::T_x12::M_x1(System::UInt32,System::UInt32%,array<System::Char>^)
	IL_00ee:                                                                        //ldloc.s				V_5
	IL_00f0:            Temp_9=gcnew System::String(V_5);                           //newobj				void System::String::.ctor(array<System::Char>^)
	IL_00f5:                                                                        //ldc.i4.1
	IL_00f6:            Temp_10=gcnew array<System::Char>(1);                       //newarr				System::Char
	IL_00fb:            V_12=Temp_10;                                               //stloc.s				V_12
	IL_00fd:                                                                        //ldloc.s				V_12
	IL_00ff:            Temp_11=Temp_9->Trim(V_12);                                 //call				System::String^ System::String::Trim(array<System::Char>^)
	IL_0104:            V_6=Temp_11;                                                //stloc.s				V_6
	IL_0106:                                                                        //ldloc.3
	IL_0107:            Temp_12=V_3->M_x12();                                       //callvirt				System::UInt32 Root::T_x169::T_x12::M_x12()
	IL_010c:            V_7=safe_cast<System::Int32>(Temp_12);                      //stloc.s				V_7
	IL_010e:                                                                        //ldarg.1
	IL_010f:                                                                        //ldloc.s				V_7
	IL_0111:                                                                        //box				System::Int32
	IL_0116:                                                                        //ldloc.s				V_6
	IL_0118:            A_1[safe_cast<System::Object^>(V_7)]=safe_cast<System::Object^>(V_6);//callvirt				void System::Collections::IDictionary::set_Item(System::Object^,System::Object^)
	IL_011d:                                                                        //ldloc.3
	IL_011e:            Temp_13=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(V_3));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_0123:                                                                        //pop
	IL_0124:                                                                        //ldc.i4				0xb
	IL_0129:            V_13=11;                                                    //stloc				V_13
	IL_012d:            /*goto IL_0002;*/goto IL_0132;                              //br				IL_0002
	IL_0132:            goto IL_0253;                                               //br				IL_0253
	IL_0137:                                                                        //ldloc.s				V_9
	IL_0139:                                                                        //ldloc.s				V_10
	IL_013b:                                                                        //ldelema				System::IntPtr
	IL_0140:                                                                        //ldobj				System::IntPtr
	IL_0145:            Temp_6=System::Runtime::InteropServices::Marshal::Release(V_9[V_10]);//call				System::Int32 System::Runtime::InteropServices::Marshal::Release(System::IntPtr)
	IL_014a:                                                                        //pop
	IL_014b:                                                                        //ldloc.s				V_10
	IL_014d:                                                                        //ldc.i4.1
	IL_014e:                                                                        //add
	IL_014f:            V_10=(V_10 + 1);                                            //stloc.s				V_10
	IL_0151:                                                                        //ldc.i4				0x9
	IL_0156:            V_13=9;                                                     //stloc				V_13
	IL_015a:            /*goto IL_0002;*/goto IL_015f;                              //br				IL_0002
	IL_015f:            goto IL_01f8;                                               //br				IL_01f8
	IL_0164:                                                                        //ldloc.1
	IL_0165:                                                                        //ldloc.2
	IL_0166:                                                                        //ldelema				System::IntPtr
	IL_016b:                                                                        //ldobj				System::IntPtr
	IL_0170:                                                                        //ldtoken				Root::T_x169::T_x12
	IL_0175:            Temp_3=Root::T_x169::T_x12::typeid;                         //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_017a:            Temp_4=System::Runtime::InteropServices::Marshal::GetTypedObjectForIUnknown(V_1[V_2],Temp_3);//call				System::Object^ System::Runtime::InteropServices::Marshal::GetTypedObjectForIUnknown(System::IntPtr,System::Type^)
	IL_017f:                                                                        //castclass				Root::T_x169::T_x12
	IL_0184:            V_3=safe_cast<Root::T_x169::T_x12^>(Temp_4);                //stloc.3
	IL_0185:                                                                        //ldc.i4				0x8
	IL_018a:            V_13=8;                                                     //stloc				V_13
	IL_018e:            /*goto IL_0002;*/goto IL_0193;                              //br				IL_0002
	IL_0193:                                                                        //ldloc.3
	IL_0194:            if(V_3==nullptr)goto IL_0253;                               //brfalse				IL_0253
	IL_0199:                                                                        //ldc.i4				0x5
	IL_019e:            V_13=5;                                                     //stloc				V_13
	IL_01a2:            /*goto IL_0002;*/goto IL_01a7;                              //br				IL_0002
	IL_01a7:            goto IL_00ca;                                               //br				IL_00ca
	IL_01ac:                                                                        //ldloc.s				V_9
	IL_01ae:                                                                        //ldloc.s				V_10
	IL_01b0:                                                                        //ldelema				System::IntPtr
	IL_01b5:                                                                        //ldobj				System::IntPtr
	IL_01ba:                                                                        //ldtoken				Root::T_x169::T_x8
	IL_01bf:            Temp_16=Root::T_x169::T_x8::typeid;                         //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_01c4:            Temp_17=System::Runtime::InteropServices::Marshal::GetTypedObjectForIUnknown(V_9[V_10],Temp_16);//call				System::Object^ System::Runtime::InteropServices::Marshal::GetTypedObjectForIUnknown(System::IntPtr,System::Type^)
	IL_01c9:                                                                        //castclass				Root::T_x169::T_x8
	IL_01ce:            V_11=safe_cast<Root::T_x169::T_x8^>(Temp_17);               //stloc.s				V_11
	IL_01d0:                                                                        //ldc.i4				0x2
	IL_01d5:            V_13=2;                                                     //stloc				V_13
	IL_01d9:            /*goto IL_0002;*/goto IL_01de;                              //br				IL_0002
	IL_01de:                                                                        //ldloc.s				V_11
	IL_01e0:            if(V_11==nullptr)goto IL_0137;                              //brfalse				IL_0137
	IL_01e5:                                                                        //ldc.i4				0x1
	IL_01ea:            V_13=1;                                                     //stloc				V_13
	IL_01ee:            /*goto IL_0002;*/goto IL_01f3;                              //br				IL_0002
	IL_01f3:            goto IL_006f;                                               //br				IL_006f
	IL_01f8:                                                                        //ldc.i4				0xc
	IL_01fd:            V_13=12;                                                    //stloc				V_13
	IL_0201:            /*goto IL_0002;*/goto IL_0206;                              //br				IL_0002
	IL_0206:                                                                        //ldloc.s				V_10
	IL_0208:                                                                        //conv.i8
	IL_0209:                                                                        //ldloc.s				V_8
	IL_020b:                                                                        //conv.u8
	IL_020c:            if(safe_cast<System::Int64>(V_10)<safe_cast<System::Int64>(safe_cast<System::UInt64>(V_8)))goto IL_01ac;//blt.s				IL_01ac
	IL_020e:                                                                        //ldc.i4				0x4
	IL_0213:            V_13=4;                                                     //stloc				V_13
	IL_0217:            /*goto IL_0002;*/goto IL_021c;                              //br				IL_0002
	IL_021c:            goto IL_0279;                                               //br.s				IL_0279
	IL_021e:                                                                        //ldc.i4.4
	IL_021f:                                                                        //dup
	IL_0220:                                                                        //dup
	IL_0221:                                                                        //ldc.i4.2
	IL_0222:                                                                        //sub
	IL_0223:                                                                        //blt				IL_021f
	IL_0228:                                                                        //pop
	IL_0229:                                                                        //ldc.i4				0x0
	IL_022e:            V_13=0;                                                     //stloc				V_13
	IL_0232:            /*goto IL_0002;*/goto IL_0237;                              //br				IL_0002
	IL_0237:                                                                        //ldloc.2
	IL_0238:                                                                        //conv.i8
	IL_0239:                                                                        //ldloc.0
	IL_023a:                                                                        //conv.u8
	IL_023b:            if(safe_cast<System::Int64>(V_2)<safe_cast<System::Int64>(safe_cast<System::UInt64>(V_0)))goto IL_0164;//blt				IL_0164
	IL_0240:                                                                        //ldc.i4				0x6
	IL_0245:            V_13=6;                                                     //stloc				V_13
	IL_0249:            /*goto IL_0002;*/goto IL_024e;                              //br				IL_0002
	IL_024e:            goto IL_0092;                                               //br				IL_0092
	IL_0253:                                                                        //ldloc.1
	IL_0254:                                                                        //ldloc.2
	IL_0255:                                                                        //ldelema				System::IntPtr
	IL_025a:                                                                        //ldobj				System::IntPtr
	IL_025f:            Temp_15=System::Runtime::InteropServices::Marshal::Release(V_1[V_2]);//call				System::Int32 System::Runtime::InteropServices::Marshal::Release(System::IntPtr)
	IL_0264:                                                                        //pop
	IL_0265:                                                                        //ldloc.2
	IL_0266:                                                                        //ldc.i4.1
	IL_0267:                                                                        //add
	IL_0268:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0269:                                                                        //ldc.i4				0xa
	IL_026e:            V_13=10;                                                    //stloc				V_13
	IL_0272:            /*goto IL_0002;*/goto IL_0277;                              //br				IL_0002
	IL_0277:            goto IL_021e;                                               //br.s				IL_021e
	IL_0279:            return;                                                     //ret

}
inline Root::T_x169::T_x4::T_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
