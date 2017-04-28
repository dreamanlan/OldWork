#include "global_xref.h"

inline static Root::T_x17::T_x17()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Int32>^ Temp_0 = nullptr;
	array<System::Int32>^ Temp_1 = nullptr;
	array<System::Int32>^ Temp_2 = nullptr;
	array<System::Int32>^ Temp_3 = nullptr;
	array<System::Int32>^ Temp_4 = nullptr;
	array<System::Int32>^ Temp_5 = nullptr;
	array<System::Int32>^ Temp_6 = nullptr;
	array<System::Int32>^ Temp_7 = nullptr;
	array<System::Int32>^ Temp_8 = nullptr;
	array<System::Int32>^ Temp_9 = nullptr;
	array<System::Int32>^ Temp_10 = nullptr;
	array<System::Int32>^ Temp_11 = nullptr;
	array<System::Int32>^ Temp_12 = nullptr;
	array<System::Int32>^ Temp_13 = nullptr;
	//local variables.
	array<System::Int32>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldc.i4.3
	IL_000c:            Temp_0=gcnew array<System::Int32>(3);                       //newarr				System::Int32
	IL_0011:                                                                        //dup
	IL_0012:                                                                        //ldtoken				Root::T_x188::T_x9 Root::T_x188 F_x81
	IL_0017:            BytesToInt32s(gcnew array<System::Byte>{0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x1B,0x00,0x00,0x00},Temp_0);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_001c:            Root::T_x17::F_x42=Temp_0;                                  //stsfld				array<System::Int32>^ Root::T_x17 F_x42
	IL_0021:                                                                        //ldc.i4.3
	IL_0022:            Temp_1=gcnew array<System::Int32>(3);                       //newarr				System::Int32
	IL_0027:                                                                        //dup
	IL_0028:                                                                        //ldtoken				Root::T_x188::T_x15 Root::T_x188 F_x33
	IL_002d:            BytesToInt32s(gcnew array<System::Byte>{0x04,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x17,0x00,0x00,0x00},Temp_1);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_0032:            Root::T_x17::F_x136=Temp_1;                                 //stsfld				array<System::Int32>^ Root::T_x17 F_x136
	IL_0037:                                                                        //ldc.i4.5
	IL_0038:            Temp_2=gcnew array<System::Int32>(5);                       //newarr				System::Int32
	IL_003d:                                                                        //dup
	IL_003e:                                                                        //ldtoken				Root::T_x188::T_x4 Root::T_x188 F_x49
	IL_0043:            BytesToInt32s(gcnew array<System::Byte>{0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x70,0x00,0x00,0x00},Temp_2);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_0048:            Root::T_x17::F_x138=Temp_2;                                 //stsfld				array<System::Int32>^ Root::T_x17 F_x138
	IL_004d:                                                                        //ldc.i4.2
	IL_004e:            Temp_3=gcnew array<System::Int32>(2);                       //newarr				System::Int32
	IL_0053:            V_0=Temp_3;                                                 //stloc.0
	IL_0054:                                                                        //ldloc.0
	IL_0055:                                                                        //ldc.i4.0
	IL_0056:                                                                        //ldc.i4.s				20
	IL_0058:            V_0[0]=20;                                                  //stelem.i4
	IL_0059:                                                                        //ldloc.0
	IL_005a:                                                                        //ldc.i4.1
	IL_005b:                                                                        //ldc.i4.s				23
	IL_005d:            V_0[1]=23;                                                  //stelem.i4
	IL_005e:                                                                        //ldloc.0
	IL_005f:            Root::T_x17::F_x141=V_0;                                    //stsfld				array<System::Int32>^ Root::T_x17 F_x141
	IL_0064:                                                                        //ldc.i4.4
	IL_0065:            Temp_4=gcnew array<System::Int32>(4);                       //newarr				System::Int32
	IL_006a:                                                                        //dup
	IL_006b:                                                                        //ldtoken				Root::T_x188::T_x8 Root::T_x188 F_x158
	IL_0070:            BytesToInt32s(gcnew array<System::Byte>{0x00,0x00,0x00,0x00,0x1A,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0x01,0x00,0x00,0x00},Temp_4);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_0075:            Root::T_x17::F_x64=Temp_4;                                  //stsfld				array<System::Int32>^ Root::T_x17 F_x64
	IL_007a:                                                                        //ldc.i4.2
	IL_007b:            Temp_5=gcnew array<System::Int32>(2);                       //newarr				System::Int32
	IL_0080:            V_0=Temp_5;                                                 //stloc.0
	IL_0081:                                                                        //ldloc.0
	IL_0082:                                                                        //ldc.i4.0
	IL_0083:                                                                        //ldc.i4.4
	IL_0084:            V_0[0]=4;                                                   //stelem.i4
	IL_0085:                                                                        //ldloc.0
	IL_0086:                                                                        //ldc.i4.1
	IL_0087:                                                                        //ldc.i4.8
	IL_0088:            V_0[1]=8;                                                   //stelem.i4
	IL_0089:                                                                        //ldloc.0
	IL_008a:            Root::T_x17::F_x122=V_0;                                    //stsfld				array<System::Int32>^ Root::T_x17 F_x122
	IL_008f:                                                                        //ldc.i4.3
	IL_0090:            Temp_6=gcnew array<System::Int32>(3);                       //newarr				System::Int32
	IL_0095:                                                                        //dup
	IL_0096:                                                                        //ldtoken				Root::T_x188::T_x13 Root::T_x188 F_x26
	IL_009b:            BytesToInt32s(gcnew array<System::Byte>{0x02,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x20,0x00,0x00,0x00},Temp_6);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_00a0:            Root::T_x17::F_x167=Temp_6;                                 //stsfld				array<System::Int32>^ Root::T_x17 F_x167
	IL_00a5:                                                                        //ldc.i4.5
	IL_00a6:            Temp_7=gcnew array<System::Int32>(5);                       //newarr				System::Int32
	IL_00ab:                                                                        //dup
	IL_00ac:                                                                        //ldtoken				Root::T_x188::T_x19 Root::T_x188 F_x176
	IL_00b1:            BytesToInt32s(gcnew array<System::Byte>{0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x1A,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x1B,0x00,0x00,0x00},Temp_7);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_00b6:            Root::T_x17::F_x62=Temp_7;                                  //stsfld				array<System::Int32>^ Root::T_x17 F_x62
	IL_00bb:                                                                        //ldc.i4.2
	IL_00bc:            Temp_8=gcnew array<System::Int32>(2);                       //newarr				System::Int32
	IL_00c1:            V_0=Temp_8;                                                 //stloc.0
	IL_00c2:                                                                        //ldloc.0
	IL_00c3:                                                                        //ldc.i4.0
	IL_00c4:                                                                        //ldc.i4.6
	IL_00c5:            V_0[0]=6;                                                   //stelem.i4
	IL_00c6:                                                                        //ldloc.0
	IL_00c7:                                                                        //ldc.i4.1
	IL_00c8:                                                                        //ldc.i4.s				10
	IL_00ca:            V_0[1]=10;                                                  //stelem.i4
	IL_00cb:                                                                        //ldloc.0
	IL_00cc:            Root::T_x17::F_x58=V_0;                                     //stsfld				array<System::Int32>^ Root::T_x17 F_x58
	IL_00d1:                                                                        //ldc.i4.2
	IL_00d2:            Temp_9=gcnew array<System::Int32>(2);                       //newarr				System::Int32
	IL_00d7:            V_0=Temp_9;                                                 //stloc.0
	IL_00d8:                                                                        //ldloc.0
	IL_00d9:                                                                        //ldc.i4.0
	IL_00da:                                                                        //ldc.i4.4
	IL_00db:            V_0[0]=4;                                                   //stelem.i4
	IL_00dc:                                                                        //ldloc.0
	IL_00dd:                                                                        //ldc.i4.1
	IL_00de:                                                                        //ldc.i4.6
	IL_00df:            V_0[1]=6;                                                   //stelem.i4
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:            Root::T_x17::F_x28=V_0;                                     //stsfld				array<System::Int32>^ Root::T_x17 F_x28
	IL_00e6:                                                                        //ldc.i4.3
	IL_00e7:            Temp_10=gcnew array<System::Int32>(3);                      //newarr				System::Int32
	IL_00ec:                                                                        //dup
	IL_00ed:                                                                        //ldtoken				Root::T_x188::T_x56 Root::T_x188 F_x134
	IL_00f2:            BytesToInt32s(gcnew array<System::Byte>{0x26,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0x27,0x00,0x00,0x00},Temp_10);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_00f7:            Root::T_x17::F_x125=Temp_10;                                //stsfld				array<System::Int32>^ Root::T_x17 F_x125
	IL_00fc:                                                                        //ldc.i4.s				20
	IL_00fe:            Temp_11=gcnew array<System::Int32>(20);                     //newarr				System::Int32
	IL_0103:                                                                        //dup
	IL_0104:                                                                        //ldtoken				Root::T_x188::T_x2 Root::T_x188 F_x148
	IL_0109:            BytesToInt32s(gcnew array<System::Byte>{0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x17,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x1A,0x00,0x00,0x00,0x1B,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x27,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x2A,0x00,0x00,0x00},Temp_11);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_010e:            Root::T_x17::F_x187=Temp_11;                                //stsfld				array<System::Int32>^ Root::T_x17 F_x187
	IL_0113:                                                                        //ldc.i4.2
	IL_0114:            Temp_12=gcnew array<System::Int32>(2);                      //newarr				System::Int32
	IL_0119:            V_0=Temp_12;                                                //stloc.0
	IL_011a:                                                                        //ldloc.0
	IL_011b:                                                                        //ldc.i4.0
	IL_011c:                                                                        //ldc.i4.2
	IL_011d:            V_0[0]=2;                                                   //stelem.i4
	IL_011e:                                                                        //ldloc.0
	IL_011f:                                                                        //ldc.i4.1
	IL_0120:                                                                        //ldc.i4.6
	IL_0121:            V_0[1]=6;                                                   //stelem.i4
	IL_0122:                                                                        //ldloc.0
	IL_0123:            Root::T_x17::F_x72=V_0;                                     //stsfld				array<System::Int32>^ Root::T_x17 F_x72
	IL_0128:                                                                        //ldc.i4.s				33
	IL_012a:            Temp_13=gcnew array<System::Int32>(33);                     //newarr				System::Int32
	IL_012f:                                                                        //dup
	IL_0130:                                                                        //ldtoken				Root::T_x188::T_x6 Root::T_x188 F_x173
	IL_0135:            BytesToInt32s(gcnew array<System::Byte>{0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00},Temp_13);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_013a:            Root::T_x17::F_x20=Temp_13;                                 //stsfld				array<System::Int32>^ Root::T_x17 F_x20
	IL_013f:            return;                                                     //ret

}
inline System::Int32 Root::T_x17::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Int32>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x17::F_x20;                                  //ldsfld				array<System::Int32>^ Root::T_x17 F_x20
	IL_0005:                                                                        //ldarg.0
	IL_0006:                                                                        //ldelem.i4
	IL_0007:            return Temp_0[A_0];                                         //ret

}
inline array<System::Int32>^ Root::T_x17::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Int32>^ Temp_0 = nullptr;
	array<System::Int32>^ Temp_1 = nullptr;
	array<System::Int32>^ Temp_2 = nullptr;
	array<System::Int32>^ Temp_3 = nullptr;
	array<System::Int32>^ Temp_4 = nullptr;
	array<System::Int32>^ Temp_5 = nullptr;
	array<System::Int32>^ Temp_6 = nullptr;
	array<System::Int32>^ Temp_7 = nullptr;
	array<System::Int32>^ Temp_8 = nullptr;
	array<System::Int32>^ Temp_9 = nullptr;
	System::Globalization::CultureInfo^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	array<System::Object^>^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Globalization::CultureInfo^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::InvalidOperationException^ Temp_17 = nullptr;
	array<System::Int32>^ Temp_18 = nullptr;
	array<System::Int32>^ Temp_19 = nullptr;
	array<System::Int32>^ Temp_20 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Object^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0090;case 1:goto IL_002d;case 2:goto IL_00eb;};//switch				(IL_0090,IL_002d,IL_00eb)
	IL_0020:                                                                        //ldarg.0
	IL_0021:            V_0=A_0;                                                    //stloc.0
	IL_0022:                                                                        //ldc.i4				0x1
	IL_0027:            V_2=1;                                                      //stloc				V_2
	IL_002b:            /*goto IL_000b;*/goto IL_002d;                              //br.s				IL_000b
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldc.i4.s				64
	IL_0030:                                                                        //sub
	IL_0031:            switch((V_0 - 64)){case 0:goto IL_00ad;case 1:goto IL_00a1;case 2:goto IL_00c5;case 3:goto IL_00d7;case 4:goto IL_00ed;case 5:goto IL_00bf;case 6:goto IL_009b;case 7:goto IL_00d1;case 8:goto IL_0095;case 9:goto IL_00b3;case 10:goto IL_00f3;case 11:goto IL_00f3;case 12:goto IL_00f3;case 13:goto IL_00f3;case 14:goto IL_00f3;case 15:goto IL_00f3;case 16:goto IL_00a7;case 17:goto IL_00cb;case 18:goto IL_00b9;};//switch				(IL_00ad,IL_00a1,IL_00c5,IL_00d7,IL_00ed,IL_00bf,IL_009b,IL_00d1,IL_0095,IL_00b3,IL_00f3,IL_00f3,IL_00f3,IL_00f3,IL_00f3,IL_00f3,IL_00a7,IL_00cb,IL_00b9)
	IL_0082:                                                                        //ldc.i4				0x0
	IL_0087:            V_2=0;                                                      //stloc				V_2
	IL_008b:            /*goto IL_000b;*/goto IL_0090;                              //br				IL_000b
	IL_0090:            goto IL_0093;                                               //br.s				IL_0093
	IL_0092:                                                                        //break
	IL_0093:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_0095:            Temp_8=Root::T_x17::F_x58;                                  //ldsfld				array<System::Int32>^ Root::T_x17 F_x58
	IL_009a:            return Temp_8;                                              //ret
	IL_009b:            Temp_6=Root::T_x17::F_x167;                                 //ldsfld				array<System::Int32>^ Root::T_x17 F_x167
	IL_00a0:            return Temp_6;                                              //ret
	IL_00a1:            Temp_1=Root::T_x17::F_x136;                                 //ldsfld				array<System::Int32>^ Root::T_x17 F_x136
	IL_00a6:            return Temp_1;                                              //ret
	IL_00a7:            Temp_18=Root::T_x17::F_x125;                                //ldsfld				array<System::Int32>^ Root::T_x17 F_x125
	IL_00ac:            return Temp_18;                                             //ret
	IL_00ad:            Temp_0=Root::T_x17::F_x42;                                  //ldsfld				array<System::Int32>^ Root::T_x17 F_x42
	IL_00b2:            return Temp_0;                                              //ret
	IL_00b3:            Temp_9=Root::T_x17::F_x28;                                  //ldsfld				array<System::Int32>^ Root::T_x17 F_x28
	IL_00b8:            return Temp_9;                                              //ret
	IL_00b9:            Temp_20=Root::T_x17::F_x72;                                 //ldsfld				array<System::Int32>^ Root::T_x17 F_x72
	IL_00be:            return Temp_20;                                             //ret
	IL_00bf:            Temp_5=Root::T_x17::F_x122;                                 //ldsfld				array<System::Int32>^ Root::T_x17 F_x122
	IL_00c4:            return Temp_5;                                              //ret
	IL_00c5:            Temp_2=Root::T_x17::F_x138;                                 //ldsfld				array<System::Int32>^ Root::T_x17 F_x138
	IL_00ca:            return Temp_2;                                              //ret
	IL_00cb:            Temp_19=Root::T_x17::F_x187;                                //ldsfld				array<System::Int32>^ Root::T_x17 F_x187
	IL_00d0:            return Temp_19;                                             //ret
	IL_00d1:            Temp_7=Root::T_x17::F_x62;                                  //ldsfld				array<System::Int32>^ Root::T_x17 F_x62
	IL_00d6:            return Temp_7;                                              //ret
	IL_00d7:            Temp_3=Root::T_x17::F_x141;                                 //ldsfld				array<System::Int32>^ Root::T_x17 F_x141
	IL_00dc:            return Temp_3;                                              //ret
	IL_00dd:                                                                        //ldc.i4				0x2
	IL_00e2:            V_2=2;                                                      //stloc				V_2
	IL_00e6:            /*goto IL_000b;*/goto IL_00eb;                              //br				IL_000b
	IL_00eb:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00ed:            Temp_4=Root::T_x17::F_x64;                                  //ldsfld				array<System::Int32>^ Root::T_x17 F_x64
	IL_00f2:            return Temp_4;                                              //ret
	IL_00f3:            Temp_10=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00f8:                                                                        //ldstr				L"\x6C24\x4926\x5F28\x4A2A\x412C\x462E\x5530\x1332\x5634\x5836\x5D38\x5E3A\x593C\x1F3E\x3540\x2C42\x2E44\x2246\x2748\x6B4A\x394C\x364E\x2150\x3652\x7554\x7056\x2258\x6B5A\x205C\x785E\x4F60"
	IL_00fd:                                                                        //ldloc				V_3
	IL_0101:            Temp_11=a(L"\x6C24\x4926\x5F28\x4A2A\x412C\x462E\x5530\x1332\x5634\x5836\x5D38\x5E3A\x593C\x1F3E\x3540\x2C42\x2E44\x2246\x2748\x6B4A\x394C\x364E\x2150\x3652\x7554\x7056\x2258\x6B5A\x205C\x785E\x4F60",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0106:                                                                        //ldc.i4.1
	IL_0107:            Temp_12=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_010c:            V_1=Temp_12;                                                //stloc.1
	IL_010d:                                                                        //ldloc.1
	IL_010e:                                                                        //ldc.i4.0
	IL_010f:                                                                        //ldarga.s				A_0
	IL_0111:                                                                        //ldstr				L"\x7D24\x1526"
	IL_0116:                                                                        //ldloc				V_3
	IL_011a:            Temp_13=a(L"\x7D24\x1526",V_3);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011f:            Temp_14=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0124:            Temp_15=A_0.ToString(Temp_13,safe_cast<System::IFormatProvider^>(Temp_14));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_0129:            V_1[0]=safe_cast<System::Object^>(Temp_15);                 //stelem.ref
	IL_012a:                                                                        //ldloc.1
	IL_012b:            Temp_16=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_10),Temp_11,V_1);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0130:            Temp_17=gcnew System::InvalidOperationException(Temp_16);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0135:            throw Temp_17;                                              //throw

}
