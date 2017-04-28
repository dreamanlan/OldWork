#include "global_xref.h"

inline Root::T_x142::T_x142()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::DateTime Temp_1;
	System::DateTime Temp_2;
	System::DateTime Temp_3;
	System::TimeSpan Temp_4;
	System::Double Temp_5 = 0;
	array<Root::T_x144^>^ Temp_6 = nullptr;
	array<Root::T_x144^>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<Root::T_x144^>^ Temp_9 = nullptr;
	Root::T_x144^ Temp_10 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::DateTime V_1;
	System::TimeSpan V_2;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4				0x80
	IL_0006:            Temp_0=gcnew array<System::Byte>(128);                      //newarr				System::Byte
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldtoken				Root::T_x188::T_x12 Root::T_x188 F_x18
	IL_0011:            BytesToBytes(gcnew array<System::Byte>{0x4D,0x5A,0x90,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x0E,0x1F,0xBA,0x0E,0x00,0xB4,0x09,0xCD,0x21,0xB8,0x01,0x4C,0xCD,0x21,0x54,0x68,0x69,0x73,0x20,0x70,0x72,0x6F,0x67,0x72,0x61,0x6D,0x20,0x63,0x61,0x6E,0x6E,0x6F,0x74,0x20,0x62,0x65,0x20,0x72,0x75,0x6E,0x20,0x69,0x6E,0x20,0x44,0x4F,0x53,0x20,0x6D,0x6F,0x64,0x65,0x2E,0x0D,0x0D,0x0A,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00},Temp_0);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_0016:            this->F_x1=Temp_0;                                          //stfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4				0x4550
	IL_0021:            this->F_x2=17744;                                           //stfld				System::UInt32 Root::T_x142 F_x2
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:            this->F_x12=0;                                              //stfld				System::UInt16 Root::T_x142 F_x12
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldc.i4.0
	IL_002f:            this->F_x13=0;                                              //stfld				System::UInt32 Root::T_x142 F_x13
	IL_0034:                                                                        //ldarg.0
	IL_0035:                                                                        //ldc.i4.0
	IL_0036:            this->F_x8=0;                                               //stfld				System::UInt32 Root::T_x142 F_x8
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //ldc.i4.0
	IL_003d:            this->F_x5=0;                                               //stfld				System::UInt32 Root::T_x142 F_x5
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldc.i4				0xe0
	IL_0048:            this->F_x9=224;                                             //stfld				System::UInt16 Root::T_x142 F_x9
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldc.i4				0x10e
	IL_0053:            this->F_x4=270;                                             //stfld				System::UInt16 Root::T_x142 F_x4
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldc.i4				0x10b
	IL_005e:            this->F_x15=267;                                            //stfld				System::UInt16 Root::T_x142 F_x15
	IL_0063:                                                                        //ldarg.0
	IL_0064:                                                                        //ldc.i4.6
	IL_0065:            this->F_x11=6;                                              //stfld				System::Byte Root::T_x142 F_x11
	IL_006a:                                                                        //ldarg.0
	IL_006b:                                                                        //ldc.i4.0
	IL_006c:            this->F_x10=0;                                              //stfld				System::Byte Root::T_x142 F_x10
	IL_0071:                                                                        //ldarg.0
	IL_0072:                                                                        //ldc.i4.0
	IL_0073:            this->F_x7=0;                                               //stfld				System::Int32 Root::T_x142 F_x7
	IL_0078:                                                                        //ldarg.0
	IL_0079:                                                                        //ldc.i4.0
	IL_007a:            this->F_x16=0;                                              //stfld				System::Int32 Root::T_x142 F_x16
	IL_007f:                                                                        //ldarg.0
	IL_0080:                                                                        //ldc.i4.0
	IL_0081:            this->F_x6=0;                                               //stfld				System::Int32 Root::T_x142 F_x6
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //ldc.i4.0
	IL_0088:            this->F_x14=0;                                              //stfld				System::UInt32 Root::T_x142 F_x14
	IL_008d:                                                                        //ldarg.0
	IL_008e:                                                                        //ldc.i4				0x2000
	IL_0093:            this->F_x18=8192;                                           //stfld				System::UInt32 Root::T_x142 F_x18
	IL_0098:                                                                        //ldarg.0
	IL_0099:                                                                        //ldc.i4.0
	IL_009a:            this->F_x19=0;                                              //stfld				System::UInt32 Root::T_x142 F_x19
	IL_009f:                                                                        //ldarg.0
	IL_00a0:                                                                        //ldc.i4				0x400000
	IL_00a5:                                                                        //conv.i8
	IL_00a6:            this->F_x17=4194304;                                        //stfld				System::UInt64 Root::T_x142 F_x17
	IL_00ab:                                                                        //ldarg.0
	IL_00ac:                                                                        //ldc.i4				0x2000
	IL_00b1:            this->F_x56=8192;                                           //stfld				System::Int32 Root::T_x142 F_x56
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:                                                                        //ldc.i4				0x200
	IL_00bc:            this->F_x48=512;                                            //stfld				System::Int32 Root::T_x142 F_x48
	IL_00c1:                                                                        //ldarg.0
	IL_00c2:                                                                        //ldc.i4.4
	IL_00c3:            this->F_x55=4;                                              //stfld				System::UInt16 Root::T_x142 F_x55
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:                                                                        //ldc.i4.0
	IL_00ca:            this->F_x57=0;                                              //stfld				System::UInt16 Root::T_x142 F_x57
	IL_00cf:                                                                        //ldarg.0
	IL_00d0:                                                                        //ldc.i4.0
	IL_00d1:            this->F_x81=0;                                              //stfld				System::UInt16 Root::T_x142 F_x81
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:                                                                        //ldc.i4.0
	IL_00d8:            this->F_x33=0;                                              //stfld				System::UInt16 Root::T_x142 F_x33
	IL_00dd:                                                                        //ldarg.0
	IL_00de:                                                                        //ldc.i4.4
	IL_00df:            this->F_x49=4;                                              //stfld				System::UInt16 Root::T_x142 F_x49
	IL_00e4:                                                                        //ldarg.0
	IL_00e5:                                                                        //ldc.i4.0
	IL_00e6:            this->F_x158=0;                                             //stfld				System::UInt16 Root::T_x142 F_x158
	IL_00eb:                                                                        //ldarg.0
	IL_00ec:                                                                        //ldc.i4.0
	IL_00ed:            this->F_x176=0;                                             //stfld				System::UInt32 Root::T_x142 F_x176
	IL_00f2:                                                                        //ldarg.0
	IL_00f3:                                                                        //ldc.i4.0
	IL_00f4:            this->F_x134=0;                                             //stfld				System::UInt32 Root::T_x142 F_x134
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:                                                                        //ldc.i4.0
	IL_00fb:            this->F_x148=0;                                             //stfld				System::UInt32 Root::T_x142 F_x148
	IL_0100:                                                                        //ldarg.0
	IL_0101:                                                                        //ldc.i4.0
	IL_0102:            this->F_x173=0;                                             //stfld				System::UInt16 Root::T_x142 F_x173
	IL_0107:                                                                        //ldarg.0
	IL_0108:                                                                        //ldc.i4.0
	IL_0109:            this->F_x113=0;                                             //stfld				System::UInt16 Root::T_x142 F_x113
	IL_010e:                                                                        //ldarg.0
	IL_010f:                                                                        //ldc.i4				0x100000
	IL_0114:                                                                        //conv.i8
	IL_0115:            this->F_x3=1048576;                                         //stfld				System::UInt64 Root::T_x142 F_x3
	IL_011a:                                                                        //ldarg.0
	IL_011b:                                                                        //ldc.i4				0x1000
	IL_0120:                                                                        //conv.i8
	IL_0121:            this->F_x47=4096;                                           //stfld				System::UInt64 Root::T_x142 F_x47
	IL_0126:                                                                        //ldarg.0
	IL_0127:                                                                        //ldc.i4				0x100000
	IL_012c:                                                                        //conv.i8
	IL_012d:            this->F_x43=1048576;                                        //stfld				System::UInt64 Root::T_x142 F_x43
	IL_0132:                                                                        //ldarg.0
	IL_0133:                                                                        //ldc.i4				0x1000
	IL_0138:                                                                        //conv.i8
	IL_0139:            this->F_x35=4096;                                           //stfld				System::UInt64 Root::T_x142 F_x35
	IL_013e:                                                                        //ldarg.0
	IL_013f:                                                                        //ldc.i4.0
	IL_0140:            this->F_x93=0;                                              //stfld				System::UInt32 Root::T_x142 F_x93
	IL_0145:                                                                        //ldarg.0
	IL_0146:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_014b:                                                                        //ldarg.0
	IL_014c:            Temp_1=System::DateTime::Now;                               //call				System::DateTime System::DateTime::get_Now()
	IL_0151:            V_1=Temp_1;                                                 //stloc.1
	IL_0152:                                                                        //ldloca.s				V_1
	IL_0154:            Temp_2=V_1.ToUniversalTime();                               //call				System::DateTime System::DateTime::ToUniversalTime()
	IL_0159:                                                                        //ldc.i4				0x7b2
	IL_015e:                                                                        //ldc.i4.1
	IL_015f:                                                                        //ldc.i4.1
	IL_0160:            Temp_3=System::DateTime(safe_cast<System::Int32>(1970),safe_cast<System::Int32>(1),safe_cast<System::Int32>(1));//newobj				void System::DateTime::.ctor(System::Int32,System::Int32,System::Int32)
	IL_0165:            Temp_4=(Temp_2 - Temp_3);                                   //call				System::TimeSpan System::DateTime::op_Subtraction(System::DateTime,System::DateTime)
	IL_016a:            V_2=Temp_4;                                                 //stloc.2
	IL_016b:                                                                        //ldloca.s				V_2
	IL_016d:            Temp_5=V_2.TotalSeconds;                                    //call				System::Double System::TimeSpan::get_TotalSeconds()
	IL_0172:                                                                        //conv.u4
	IL_0173:            this->F_x13=safe_cast<System::UInt32>(Temp_5);              //stfld				System::UInt32 Root::T_x142 F_x13
	IL_0178:                                                                        //ldarg.0
	IL_0179:                                                                        //ldc.i4.s				16
	IL_017b:            Temp_6=gcnew array<Root::T_x144^>(16);                      //newarr				Root::T_x144
	IL_0180:            this->F_x139=Temp_6;                                        //stfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0185:                                                                        //ldc.i4.0
	IL_0186:            V_0=0;                                                      //stloc.0
	IL_0187:            goto IL_0189;                                               //br.s				IL_0189
	IL_0189:                                                                        //ldloc.0
	IL_018a:                                                                        //ldarg.0
	IL_018b:            Temp_7=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0190:            Temp_8=Temp_7->Length;                                      //ldlen
	IL_0191:                                                                        //conv.i4
	IL_0192:            if(V_0<Temp_8)goto IL_0196;                                 //blt.s				IL_0196
	IL_0194:            goto IL_01ab;                                               //br.s				IL_01ab
	IL_0196:                                                                        //ldarg.0
	IL_0197:            Temp_9=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_019c:                                                                        //ldloc.0
	IL_019d:                                                                        //ldc.i4.0
	IL_019e:                                                                        //ldc.i4.0
	IL_019f:            Temp_10=gcnew Root::T_x144(safe_cast<System::UInt32>(0),safe_cast<System::Int32>(0));//newobj				void Root::T_x144::.ctor(System::UInt32,System::Int32)
	IL_01a4:            Temp_9[V_0]=Temp_10;                                        //stelem.ref
	IL_01a5:                                                                        //ldloc.0
	IL_01a6:                                                                        //ldc.i4.1
	IL_01a7:                                                                        //add
	IL_01a8:            V_0=(V_0 + 1);                                              //stloc.0
	IL_01a9:            goto IL_0189;                                               //br.s				IL_0189
	IL_01ab:            return;                                                     //ret

}
inline Root::T_x142::T_x142(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::IO::Stream^ Temp_1 = nullptr;
	System::Int64 Temp_2 = 0;
	array<System::Byte>^ Temp_3 = nullptr;
	array<System::Byte>^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::InvalidOperationException^ Temp_6 = nullptr;
	array<System::Byte>^ Temp_7 = nullptr;
	array<System::Byte>^ Temp_8 = nullptr;
	array<System::Byte>^ Temp_9 = nullptr;
	array<System::Byte>^ Temp_10 = nullptr;
	array<System::Byte>^ Temp_11 = nullptr;
	System::IO::Stream^ Temp_12 = nullptr;
	System::UInt32 Temp_13 = 0;
	System::UInt16 Temp_14 = 0;
	System::UInt16 Temp_15 = 0;
	System::UInt32 Temp_16 = 0;
	System::UInt32 Temp_17 = 0;
	System::UInt32 Temp_18 = 0;
	System::UInt16 Temp_19 = 0;
	System::UInt16 Temp_20 = 0;
	System::UInt32 Temp_21 = 0;
	System::UInt16 Temp_22 = 0;
	System::UInt16 Temp_23 = 0;
	System::UInt16 Temp_24 = 0;
	System::UInt16 Temp_25 = 0;
	System::Byte Temp_26 = 0;
	System::Byte Temp_27 = 0;
	System::Int32 Temp_28 = 0;
	System::Int32 Temp_29 = 0;
	System::Int32 Temp_30 = 0;
	System::UInt32 Temp_31 = 0;
	System::UInt32 Temp_32 = 0;
	System::UInt16 Temp_33 = 0;
	System::UInt16 Temp_34 = 0;
	System::UInt32 Temp_35 = 0;
	System::Int32 Temp_36 = 0;
	System::Int32 Temp_37 = 0;
	System::UInt16 Temp_38 = 0;
	System::UInt16 Temp_39 = 0;
	System::UInt16 Temp_40 = 0;
	System::UInt16 Temp_41 = 0;
	System::UInt16 Temp_42 = 0;
	System::UInt16 Temp_43 = 0;
	System::UInt32 Temp_44 = 0;
	System::UInt32 Temp_45 = 0;
	System::UInt32 Temp_46 = 0;
	System::UInt32 Temp_47 = 0;
	System::UInt16 Temp_48 = 0;
	System::UInt16 Temp_49 = 0;
	System::UInt16 Temp_50 = 0;
	System::UInt32 Temp_51 = 0;
	System::UInt16 Temp_52 = 0;
	System::UInt32 Temp_53 = 0;
	System::UInt16 Temp_54 = 0;
	System::UInt32 Temp_55 = 0;
	System::UInt16 Temp_56 = 0;
	System::UInt32 Temp_57 = 0;
	System::UInt32 Temp_58 = 0;
	System::UInt32 Temp_59 = 0;
	array<Root::T_x144^>^ Temp_60 = nullptr;
	array<Root::T_x144^>^ Temp_61 = nullptr;
	System::Int32 Temp_62 = 0;
	array<Root::T_x144^>^ Temp_63 = nullptr;
	Root::T_x144^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	System::InvalidOperationException^ Temp_66 = nullptr;
	System::UInt64 Temp_67 = 0;
	System::UInt64 Temp_68 = 0;
	System::UInt64 Temp_69 = 0;
	System::UInt64 Temp_70 = 0;
	System::UInt64 Temp_71 = 0;
	System::UInt32 Temp_72 = 0;
	System::String^ Temp_73 = nullptr;
	System::InvalidOperationException^ Temp_74 = nullptr;
	System::String^ Temp_75 = nullptr;
	System::InvalidOperationException^ Temp_76 = nullptr;
	Root::T_x142^ Temp_77 = nullptr;
	Root::T_x142^ Temp_78 = nullptr;
	System::UInt64 Temp_79 = 0;
	Root::T_x142^ Temp_80 = nullptr;
	Root::T_x142^ Temp_81 = nullptr;
	Root::T_x142^ Temp_82 = nullptr;
	System::UInt64 Temp_83 = 0;
	Root::T_x142^ Temp_84 = nullptr;
	Root::T_x142^ Temp_85 = nullptr;
	Root::T_x142^ Temp_86 = nullptr;
	System::UInt64 Temp_87 = 0;
	Root::T_x142^ Temp_88 = nullptr;
	Root::T_x142^ Temp_89 = nullptr;
	Root::T_x142^ Temp_90 = nullptr;
	System::UInt64 Temp_91 = 0;
	Root::T_x142^ Temp_92 = nullptr;
	Root::T_x142^ Temp_93 = nullptr;
	Root::T_x142^ Temp_94 = nullptr;
	System::UInt64 Temp_95 = 0;
	Root::T_x142^ Temp_96 = nullptr;
	//local variables.
	System::Int64 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_4=17;                                                     //stloc				V_4
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldc.i4				0x80
	IL_000f:            Temp_0=gcnew array<System::Byte>(128);                      //newarr				System::Byte
	IL_0014:                                                                        //dup
	IL_0015:                                                                        //ldtoken				Root::T_x188::T_x17 Root::T_x188 F_x19
	IL_001a:            BytesToBytes(gcnew array<System::Byte>{0x4D,0x5A,0x90,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x0E,0x1F,0xBA,0x0E,0x00,0xB4,0x09,0xCD,0x21,0xB8,0x01,0x4C,0xCD,0x21,0x54,0x68,0x69,0x73,0x20,0x70,0x72,0x6F,0x67,0x72,0x61,0x6D,0x20,0x63,0x61,0x6E,0x6E,0x6F,0x74,0x20,0x62,0x65,0x20,0x72,0x75,0x6E,0x20,0x69,0x6E,0x20,0x44,0x4F,0x53,0x20,0x6D,0x6F,0x64,0x65,0x2E,0x0D,0x0D,0x0A,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00},Temp_0);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_001f:            this->F_x1=Temp_0;                                          //stfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldc.i4				0x4550
	IL_002a:            this->F_x2=17744;                                           //stfld				System::UInt32 Root::T_x142 F_x2
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldc.i4.0
	IL_0031:            this->F_x12=0;                                              //stfld				System::UInt16 Root::T_x142 F_x12
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldc.i4.0
	IL_0038:            this->F_x13=0;                                              //stfld				System::UInt32 Root::T_x142 F_x13
	IL_003d:                                                                        //ldarg.0
	IL_003e:                                                                        //ldc.i4.0
	IL_003f:            this->F_x8=0;                                               //stfld				System::UInt32 Root::T_x142 F_x8
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldc.i4.0
	IL_0046:            this->F_x5=0;                                               //stfld				System::UInt32 Root::T_x142 F_x5
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldc.i4				0xe0
	IL_0051:            this->F_x9=224;                                             //stfld				System::UInt16 Root::T_x142 F_x9
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldc.i4				0x10e
	IL_005c:            this->F_x4=270;                                             //stfld				System::UInt16 Root::T_x142 F_x4
	IL_0061:                                                                        //ldarg.0
	IL_0062:                                                                        //ldc.i4				0x10b
	IL_0067:            this->F_x15=267;                                            //stfld				System::UInt16 Root::T_x142 F_x15
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //ldc.i4.6
	IL_006e:            this->F_x11=6;                                              //stfld				System::Byte Root::T_x142 F_x11
	IL_0073:                                                                        //ldarg.0
	IL_0074:                                                                        //ldc.i4.0
	IL_0075:            this->F_x10=0;                                              //stfld				System::Byte Root::T_x142 F_x10
	IL_007a:                                                                        //ldarg.0
	IL_007b:                                                                        //ldc.i4.0
	IL_007c:            this->F_x7=0;                                               //stfld				System::Int32 Root::T_x142 F_x7
	IL_0081:                                                                        //ldarg.0
	IL_0082:                                                                        //ldc.i4.0
	IL_0083:            this->F_x16=0;                                              //stfld				System::Int32 Root::T_x142 F_x16
	IL_0088:                                                                        //ldarg.0
	IL_0089:                                                                        //ldc.i4.0
	IL_008a:            this->F_x6=0;                                               //stfld				System::Int32 Root::T_x142 F_x6
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //ldc.i4.0
	IL_0091:            this->F_x14=0;                                              //stfld				System::UInt32 Root::T_x142 F_x14
	IL_0096:                                                                        //ldarg.0
	IL_0097:                                                                        //ldc.i4				0x2000
	IL_009c:            this->F_x18=8192;                                           //stfld				System::UInt32 Root::T_x142 F_x18
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:                                                                        //ldc.i4.0
	IL_00a3:            this->F_x19=0;                                              //stfld				System::UInt32 Root::T_x142 F_x19
	IL_00a8:                                                                        //ldarg.0
	IL_00a9:                                                                        //ldc.i4				0x400000
	IL_00ae:                                                                        //conv.i8
	IL_00af:            this->F_x17=4194304;                                        //stfld				System::UInt64 Root::T_x142 F_x17
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:                                                                        //ldc.i4				0x2000
	IL_00ba:            this->F_x56=8192;                                           //stfld				System::Int32 Root::T_x142 F_x56
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:                                                                        //ldc.i4				0x200
	IL_00c5:            this->F_x48=512;                                            //stfld				System::Int32 Root::T_x142 F_x48
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:                                                                        //ldc.i4.4
	IL_00cc:            this->F_x55=4;                                              //stfld				System::UInt16 Root::T_x142 F_x55
	IL_00d1:                                                                        //ldarg.0
	IL_00d2:                                                                        //ldc.i4.0
	IL_00d3:            this->F_x57=0;                                              //stfld				System::UInt16 Root::T_x142 F_x57
	IL_00d8:                                                                        //ldarg.0
	IL_00d9:                                                                        //ldc.i4.0
	IL_00da:            this->F_x81=0;                                              //stfld				System::UInt16 Root::T_x142 F_x81
	IL_00df:                                                                        //ldarg.0
	IL_00e0:                                                                        //ldc.i4.0
	IL_00e1:            this->F_x33=0;                                              //stfld				System::UInt16 Root::T_x142 F_x33
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:                                                                        //ldc.i4.4
	IL_00e8:            this->F_x49=4;                                              //stfld				System::UInt16 Root::T_x142 F_x49
	IL_00ed:                                                                        //ldarg.0
	IL_00ee:                                                                        //ldc.i4.0
	IL_00ef:            this->F_x158=0;                                             //stfld				System::UInt16 Root::T_x142 F_x158
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:                                                                        //ldc.i4.0
	IL_00f6:            this->F_x176=0;                                             //stfld				System::UInt32 Root::T_x142 F_x176
	IL_00fb:                                                                        //ldarg.0
	IL_00fc:                                                                        //ldc.i4.0
	IL_00fd:            this->F_x134=0;                                             //stfld				System::UInt32 Root::T_x142 F_x134
	IL_0102:                                                                        //ldarg.0
	IL_0103:                                                                        //ldc.i4.0
	IL_0104:            this->F_x148=0;                                             //stfld				System::UInt32 Root::T_x142 F_x148
	IL_0109:                                                                        //ldarg.0
	IL_010a:                                                                        //ldc.i4.0
	IL_010b:            this->F_x173=0;                                             //stfld				System::UInt16 Root::T_x142 F_x173
	IL_0110:                                                                        //ldarg.0
	IL_0111:                                                                        //ldc.i4.0
	IL_0112:            this->F_x113=0;                                             //stfld				System::UInt16 Root::T_x142 F_x113
	IL_0117:                                                                        //ldarg.0
	IL_0118:                                                                        //ldc.i4				0x100000
	IL_011d:                                                                        //conv.i8
	IL_011e:            this->F_x3=1048576;                                         //stfld				System::UInt64 Root::T_x142 F_x3
	IL_0123:                                                                        //ldarg.0
	IL_0124:                                                                        //ldc.i4				0x1000
	IL_0129:                                                                        //conv.i8
	IL_012a:            this->F_x47=4096;                                           //stfld				System::UInt64 Root::T_x142 F_x47
	IL_012f:                                                                        //ldarg.0
	IL_0130:                                                                        //ldc.i4				0x100000
	IL_0135:                                                                        //conv.i8
	IL_0136:            this->F_x43=1048576;                                        //stfld				System::UInt64 Root::T_x142 F_x43
	IL_013b:                                                                        //ldarg.0
	IL_013c:                                                                        //ldc.i4				0x1000
	IL_0141:                                                                        //conv.i8
	IL_0142:            this->F_x35=4096;                                           //stfld				System::UInt64 Root::T_x142 F_x35
	IL_0147:                                                                        //ldarg.0
	IL_0148:                                                                        //ldc.i4.0
	IL_0149:            this->F_x93=0;                                              //stfld				System::UInt32 Root::T_x142 F_x93
	IL_014e:                                                                        //ldarg.0
	IL_014f:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0154:                                                                        //ldarg.1
	IL_0155:            Temp_1=A_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_015a:            Temp_2=Temp_1->Position;                                    //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_015f:            V_0=Temp_2;                                                 //stloc.0
	IL_0160:                                                                        //ldarg.0
	IL_0161:                                                                        //ldarg.1
	IL_0162:                                                                        //ldc.i4				0x80
	IL_0167:            Temp_3=A_0->ReadBytes(safe_cast<System::Int32>(128));       //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_016c:            this->F_x1=Temp_3;                                          //stfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_0171:                                                                        //ldarg.0
	IL_0172:            Temp_4=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_0177:                                                                        //ldc.i4.0
	IL_0178:                                                                        //ldelem.u1
	IL_0179:                                                                        //ldc.i4.s				77
	IL_017b:            if(Temp_4[0]!=77)goto IL_018d;                              //bne.un.s				IL_018d
	IL_017d:            goto IL_017f;                                               //br.s				IL_017f
	IL_017f:                                                                        //ldarg.0
	IL_0180:            Temp_7=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_0185:                                                                        //ldc.i4.1
	IL_0186:                                                                        //ldelem.u1
	IL_0187:                                                                        //ldc.i4.s				90
	IL_0189:            if(Temp_7[1]==90)goto IL_01a1;                              //beq.s				IL_01a1
	IL_018b:            goto IL_018d;                                               //br.s				IL_018d
	IL_018d:                                                                        //ldstr				L"\x692E\x5830\x5F32\x5034\x1736\x5038\x483A\x1D3C\x513E\x2E40\x3742\x6544\x2646\x6948\x3B4A\x224C\x3D4E\x2550\x3252\x3754\x3B56\x3C58\x7B5A\x385C\x275E\x0460\x0062\x1064\x1366\x0868\x096A\x016C\x0A6E\x5F70\x5372\x3174\x3876\x2A78\x5B7A\x157C\x1A7E\xE080\xE782\xE084\xF586\xA988\xEF8A\xE28C\xEA8E\xE290\xB392\xFB94\xF896\xED98\xBB9A\xFE9C\xF09E\xCFA0\xD7A2\xC4A4\xCEA6\xC7A8\x8BAA\x8AAC\xE2AE\xEBB0\x94B2\x95B4\xC4B6\xD0B8\xDCBA\xD3BC\xDEBE\xB5C0\xB6C2\xB7C4\xA2C6\xE7C8"
	IL_0192:                                                                        //ldloc				V_4
	IL_0196:            Temp_5=a(L"\x692E\x5830\x5F32\x5034\x1736\x5038\x483A\x1D3C\x513E\x2E40\x3742\x6544\x2646\x6948\x3B4A\x224C\x3D4E\x2550\x3252\x3754\x3B56\x3C58\x7B5A\x385C\x275E\x0460\x0062\x1064\x1366\x0868\x096A\x016C\x0A6E\x5F70\x5372\x3174\x3876\x2A78\x5B7A\x157C\x1A7E\xE080\xE782\xE084\xF586\xA988\xEF8A\xE28C\xEA8E\xE290\xB392\xFB94\xF896\xED98\xBB9A\xFE9C\xF09E\xCFA0\xD7A2\xC4A4\xCEA6\xC7A8\x8BAA\x8AAC\xE2AE\xEBB0\x94B2\x95B4\xC4B6\xD0B8\xDCBA\xD3BC\xDEBE\xB5C0\xB6C2\xB7C4\xA2C6\xE7C8",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019b:            Temp_6=gcnew System::InvalidOperationException(Temp_5);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_01a0:            throw Temp_6;                                               //throw
	IL_01a1:                                                                        //ldarg.0
	IL_01a2:            Temp_8=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_01a7:                                                                        //ldc.i4.s				60
	IL_01a9:                                                                        //ldelem.u1
	IL_01aa:                                                                        //ldarg.0
	IL_01ab:            Temp_9=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_01b0:                                                                        //ldc.i4.s				61
	IL_01b2:                                                                        //ldelem.u1
	IL_01b3:                                                                        //ldc.i4.8
	IL_01b4:                                                                        //shl
	IL_01b5:                                                                        //or
	IL_01b6:                                                                        //ldarg.0
	IL_01b7:            Temp_10=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_01bc:                                                                        //ldc.i4.s				62
	IL_01be:                                                                        //ldelem.u1
	IL_01bf:                                                                        //ldc.i4.s				16
	IL_01c1:                                                                        //shl
	IL_01c2:                                                                        //or
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:            Temp_11=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_01c9:                                                                        //ldc.i4.s				63
	IL_01cb:                                                                        //ldelem.u1
	IL_01cc:                                                                        //ldc.i4.s				24
	IL_01ce:                                                                        //shl
	IL_01cf:                                                                        //or
	IL_01d0:            V_1=safe_cast<System::Int32>((((Temp_8[60] | (Temp_9[61] << 8)) | (Temp_10[62] << 16)) | (Temp_11[63] << 24)));//stloc.1
	IL_01d1:                                                                        //ldarg.1
	IL_01d2:            Temp_12=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_01d7:                                                                        //ldloc.0
	IL_01d8:                                                                        //ldloc.1
	IL_01d9:                                                                        //conv.i8
	IL_01da:                                                                        //add
	IL_01db:            Temp_12->Position=(V_0 + safe_cast<System::Int64>(V_1));    //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_01e0:                                                                        //ldarg.0
	IL_01e1:                                                                        //ldarg.1
	IL_01e2:            Temp_13=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_01e7:            this->F_x2=Temp_13;                                         //stfld				System::UInt32 Root::T_x142 F_x2
	IL_01ec:                                                                        //ldarg.1
	IL_01ed:            Temp_14=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_01f2:                                                                        //pop
	IL_01f3:                                                                        //ldarg.0
	IL_01f4:                                                                        //ldarg.1
	IL_01f5:            Temp_15=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_01fa:            this->F_x12=Temp_15;                                        //stfld				System::UInt16 Root::T_x142 F_x12
	IL_01ff:                                                                        //ldarg.0
	IL_0200:                                                                        //ldarg.1
	IL_0201:            Temp_16=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0206:            this->F_x13=Temp_16;                                        //stfld				System::UInt32 Root::T_x142 F_x13
	IL_020b:                                                                        //ldarg.0
	IL_020c:                                                                        //ldarg.1
	IL_020d:            Temp_17=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0212:            this->F_x8=Temp_17;                                         //stfld				System::UInt32 Root::T_x142 F_x8
	IL_0217:                                                                        //ldarg.0
	IL_0218:                                                                        //ldarg.1
	IL_0219:            Temp_18=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_021e:            this->F_x5=Temp_18;                                         //stfld				System::UInt32 Root::T_x142 F_x5
	IL_0223:                                                                        //ldarg.0
	IL_0224:                                                                        //ldarg.1
	IL_0225:            Temp_19=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_022a:            this->F_x9=Temp_19;                                         //stfld				System::UInt16 Root::T_x142 F_x9
	IL_022f:                                                                        //ldarg.0
	IL_0230:                                                                        //ldarg.1
	IL_0231:            Temp_20=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0236:            this->F_x4=Temp_20;                                         //stfld				System::UInt16 Root::T_x142 F_x4
	IL_023b:                                                                        //ldarg.0
	IL_023c:            Temp_21=this->F_x2;                                         //ldfld				System::UInt32 Root::T_x142 F_x2
	IL_0241:                                                                        //ldc.i4				0x4550
	IL_0246:            if(Temp_21==17744)goto IL_025e;                             //beq.s				IL_025e
	IL_0248:            goto IL_024a;                                               //br.s				IL_024a
	IL_024a:                                                                        //ldstr				L"\x662E\x5F30\x4532\x5434\x5B36\x5038\x5F3A\x1D3C\x7C3E\x0E40\x0542\x0344\x6746\x2148\x2E4A\x2C4C\x2B4E\x3450\x2152\x7B54"
	IL_024f:                                                                        //ldloc				V_4
	IL_0253:            Temp_75=a(L"\x662E\x5F30\x4532\x5434\x5B36\x5038\x5F3A\x1D3C\x7C3E\x0E40\x0542\x0344\x6746\x2148\x2E4A\x2C4C\x2B4E\x3450\x2152\x7B54",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0258:            Temp_76=gcnew System::InvalidOperationException(Temp_75);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_025d:            throw Temp_76;                                              //throw
	IL_025e:                                                                        //ldarg.0
	IL_025f:                                                                        //ldarg.1
	IL_0260:            Temp_22=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0265:            this->F_x15=Temp_22;                                        //stfld				System::UInt16 Root::T_x142 F_x15
	IL_026a:                                                                        //ldarg.0
	IL_026b:            Temp_23=this->F_x9;                                         //ldfld				System::UInt16 Root::T_x142 F_x9
	IL_0270:                                                                        //conv.i4
	IL_0271:                                                                        //ldarg.0
	IL_0272:            Temp_24=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_0277:            Temp_25=Root::T_x142::M_x2(Temp_24);                        //call				System::UInt16 Root::T_x142::M_x2(System::UInt16)
	IL_027c:                                                                        //conv.i4
	IL_027d:            if(safe_cast<System::Int32>(Temp_23)==safe_cast<System::Int32>(Temp_25))goto IL_0295;//beq.s				IL_0295
	IL_027f:            goto IL_0281;                                               //br.s				IL_0281
	IL_0281:                                                                        //ldstr				L"\x662E\x5F30\x4532\x5434\x5B36\x5038\x5F3A\x1D3C\x503E\x3140\x3742\x2C44\x2846\x2748\x2A4A\x214C\x6F4E\x3950\x3652\x3454\x3356\x3C58\x295A\x7D5C\x2C5E\x0860\x1962\x0064\x4766\x0068\x056A\x4D6C\x2C6E\x3E70\x3572\x3374\x5776\x1178\x1E7A\x1C7C\x1B7E\xE480\xF182\xAB84"
	IL_0286:                                                                        //ldloc				V_4
	IL_028a:            Temp_73=a(L"\x662E\x5F30\x4532\x5434\x5B36\x5038\x5F3A\x1D3C\x503E\x3140\x3742\x2C44\x2846\x2748\x2A4A\x214C\x6F4E\x3950\x3652\x3454\x3356\x3C58\x295A\x7D5C\x2C5E\x0860\x1962\x0064\x4766\x0068\x056A\x4D6C\x2C6E\x3E70\x3572\x3374\x5776\x1178\x1E7A\x1C7C\x1B7E\xE480\xF182\xAB84",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028f:            Temp_74=gcnew System::InvalidOperationException(Temp_73);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0294:            throw Temp_74;                                              //throw
	IL_0295:                                                                        //ldarg.0
	IL_0296:                                                                        //ldarg.1
	IL_0297:            Temp_26=A_0->ReadByte();                                    //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_029c:            this->F_x11=Temp_26;                                        //stfld				System::Byte Root::T_x142 F_x11
	IL_02a1:                                                                        //ldarg.0
	IL_02a2:                                                                        //ldarg.1
	IL_02a3:            Temp_27=A_0->ReadByte();                                    //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_02a8:            this->F_x10=Temp_27;                                        //stfld				System::Byte Root::T_x142 F_x10
	IL_02ad:                                                                        //ldarg.0
	IL_02ae:                                                                        //ldarg.1
	IL_02af:            Temp_28=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02b4:            this->F_x7=Temp_28;                                         //stfld				System::Int32 Root::T_x142 F_x7
	IL_02b9:                                                                        //ldarg.0
	IL_02ba:                                                                        //ldarg.1
	IL_02bb:            Temp_29=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02c0:            this->F_x16=Temp_29;                                        //stfld				System::Int32 Root::T_x142 F_x16
	IL_02c5:                                                                        //ldarg.0
	IL_02c6:                                                                        //ldarg.1
	IL_02c7:            Temp_30=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02cc:            this->F_x6=Temp_30;                                         //stfld				System::Int32 Root::T_x142 F_x6
	IL_02d1:                                                                        //ldarg.0
	IL_02d2:                                                                        //ldarg.1
	IL_02d3:            Temp_31=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_02d8:            this->F_x14=Temp_31;                                        //stfld				System::UInt32 Root::T_x142 F_x14
	IL_02dd:                                                                        //ldarg.0
	IL_02de:                                                                        //ldarg.1
	IL_02df:            Temp_32=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_02e4:            this->F_x18=Temp_32;                                        //stfld				System::UInt32 Root::T_x142 F_x18
	IL_02e9:                                                                        //ldarg.0
	IL_02ea:            Temp_33=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_02ef:                                                                        //conv.i4
	IL_02f0:                                                                        //ldc.i4				0x10b
	IL_02f5:            if(safe_cast<System::Int32>(Temp_33)!=267)goto IL_0307;     //bne.un.s				IL_0307
	IL_02f7:            goto IL_02f9;                                               //br.s				IL_02f9
	IL_02f9:                                                                        //ldarg.0
	IL_02fa:                                                                        //ldarg.1
	IL_02fb:            Temp_72=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0300:            this->F_x19=Temp_72;                                        //stfld				System::UInt32 Root::T_x142 F_x19
	IL_0305:            goto IL_0307;                                               //br.s				IL_0307
	IL_0307:                                                                        //ldarg.0
	IL_0308:                                                                        //ldarg.0
	IL_0309:            Temp_34=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_030e:                                                                        //conv.i4
	IL_030f:                                                                        //ldc.i4				0x10b
	IL_0314:            Temp_78=this;if(safe_cast<System::Int32>(Temp_34)==267)goto IL_0320;//beq.s				IL_0320
	IL_0316:            goto IL_0318;                                               //br.s				IL_0318
	IL_0318:                                                                        //ldarg.1
	IL_0319:            Temp_71=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_031e:            Temp_80=Temp_78;Temp_79=Temp_71;goto IL_0329;               //br.s				IL_0329
	IL_0320:                                                                        //ldarg.1
	IL_0321:            Temp_35=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0326:                                                                        //conv.u8
	IL_0327:            Temp_80=Temp_78;Temp_79=safe_cast<System::UInt64>(Temp_35);goto IL_0329;//br.s				IL_0329
	IL_0329:            Temp_80->F_x17=Temp_79;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x142 F_x17
	IL_032e:                                                                        //ldarg.0
	IL_032f:                                                                        //ldarg.1
	IL_0330:            Temp_36=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0335:            this->F_x56=Temp_36;                                        //stfld				System::Int32 Root::T_x142 F_x56
	IL_033a:                                                                        //ldarg.0
	IL_033b:                                                                        //ldarg.1
	IL_033c:            Temp_37=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0341:            this->F_x48=Temp_37;                                        //stfld				System::Int32 Root::T_x142 F_x48
	IL_0346:                                                                        //ldarg.0
	IL_0347:                                                                        //ldarg.1
	IL_0348:            Temp_38=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_034d:            this->F_x55=Temp_38;                                        //stfld				System::UInt16 Root::T_x142 F_x55
	IL_0352:                                                                        //ldarg.0
	IL_0353:                                                                        //ldarg.1
	IL_0354:            Temp_39=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0359:            this->F_x57=Temp_39;                                        //stfld				System::UInt16 Root::T_x142 F_x57
	IL_035e:                                                                        //ldarg.0
	IL_035f:                                                                        //ldarg.1
	IL_0360:            Temp_40=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0365:            this->F_x81=Temp_40;                                        //stfld				System::UInt16 Root::T_x142 F_x81
	IL_036a:                                                                        //ldarg.0
	IL_036b:                                                                        //ldarg.1
	IL_036c:            Temp_41=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0371:            this->F_x33=Temp_41;                                        //stfld				System::UInt16 Root::T_x142 F_x33
	IL_0376:                                                                        //ldarg.0
	IL_0377:                                                                        //ldarg.1
	IL_0378:            Temp_42=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_037d:            this->F_x49=Temp_42;                                        //stfld				System::UInt16 Root::T_x142 F_x49
	IL_0382:                                                                        //ldarg.0
	IL_0383:                                                                        //ldarg.1
	IL_0384:            Temp_43=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0389:            this->F_x158=Temp_43;                                       //stfld				System::UInt16 Root::T_x142 F_x158
	IL_038e:                                                                        //ldarg.0
	IL_038f:                                                                        //ldarg.1
	IL_0390:            Temp_44=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0395:            this->F_x26=Temp_44;                                        //stfld				System::UInt32 Root::T_x142 F_x26
	IL_039a:                                                                        //ldarg.0
	IL_039b:                                                                        //ldarg.1
	IL_039c:            Temp_45=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03a1:            this->F_x176=Temp_45;                                       //stfld				System::UInt32 Root::T_x142 F_x176
	IL_03a6:                                                                        //ldarg.0
	IL_03a7:                                                                        //ldarg.1
	IL_03a8:            Temp_46=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03ad:            this->F_x134=Temp_46;                                       //stfld				System::UInt32 Root::T_x142 F_x134
	IL_03b2:                                                                        //ldarg.0
	IL_03b3:                                                                        //ldarg.1
	IL_03b4:            Temp_47=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03b9:            this->F_x148=Temp_47;                                       //stfld				System::UInt32 Root::T_x142 F_x148
	IL_03be:                                                                        //ldarg.0
	IL_03bf:                                                                        //ldarg.1
	IL_03c0:            Temp_48=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_03c5:            this->F_x173=Temp_48;                                       //stfld				System::UInt16 Root::T_x142 F_x173
	IL_03ca:                                                                        //ldarg.0
	IL_03cb:                                                                        //ldarg.1
	IL_03cc:            Temp_49=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_03d1:            this->F_x113=Temp_49;                                       //stfld				System::UInt16 Root::T_x142 F_x113
	IL_03d6:                                                                        //ldarg.0
	IL_03d7:                                                                        //ldarg.0
	IL_03d8:            Temp_50=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_03dd:                                                                        //conv.i4
	IL_03de:                                                                        //ldc.i4				0x10b
	IL_03e3:            Temp_82=this;if(safe_cast<System::Int32>(Temp_50)==267)goto IL_03ef;//beq.s				IL_03ef
	IL_03e5:            goto IL_03e7;                                               //br.s				IL_03e7
	IL_03e7:                                                                        //ldarg.1
	IL_03e8:            Temp_70=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_03ed:            Temp_84=Temp_82;Temp_83=Temp_70;goto IL_03f8;               //br.s				IL_03f8
	IL_03ef:                                                                        //ldarg.1
	IL_03f0:            Temp_51=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03f5:                                                                        //conv.u8
	IL_03f6:            Temp_84=Temp_82;Temp_83=safe_cast<System::UInt64>(Temp_51);goto IL_03f8;//br.s				IL_03f8
	IL_03f8:            Temp_84->F_x3=Temp_83;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x142 F_x3
	IL_03fd:                                                                        //ldarg.0
	IL_03fe:                                                                        //ldarg.0
	IL_03ff:            Temp_52=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_0404:                                                                        //conv.i4
	IL_0405:                                                                        //ldc.i4				0x10b
	IL_040a:            Temp_86=this;if(safe_cast<System::Int32>(Temp_52)==267)goto IL_0416;//beq.s				IL_0416
	IL_040c:            goto IL_040e;                                               //br.s				IL_040e
	IL_040e:                                                                        //ldarg.1
	IL_040f:            Temp_69=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_0414:            Temp_88=Temp_86;Temp_87=Temp_69;goto IL_041f;               //br.s				IL_041f
	IL_0416:                                                                        //ldarg.1
	IL_0417:            Temp_53=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_041c:                                                                        //conv.u8
	IL_041d:            Temp_88=Temp_86;Temp_87=safe_cast<System::UInt64>(Temp_53);goto IL_041f;//br.s				IL_041f
	IL_041f:            Temp_88->F_x47=Temp_87;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x142 F_x47
	IL_0424:                                                                        //ldarg.0
	IL_0425:                                                                        //ldarg.0
	IL_0426:            Temp_54=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_042b:                                                                        //conv.i4
	IL_042c:                                                                        //ldc.i4				0x10b
	IL_0431:            Temp_90=this;if(safe_cast<System::Int32>(Temp_54)==267)goto IL_043d;//beq.s				IL_043d
	IL_0433:            goto IL_0435;                                               //br.s				IL_0435
	IL_0435:                                                                        //ldarg.1
	IL_0436:            Temp_68=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_043b:            Temp_92=Temp_90;Temp_91=Temp_68;goto IL_0446;               //br.s				IL_0446
	IL_043d:                                                                        //ldarg.1
	IL_043e:            Temp_55=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0443:                                                                        //conv.u8
	IL_0444:            Temp_92=Temp_90;Temp_91=safe_cast<System::UInt64>(Temp_55);goto IL_0446;//br.s				IL_0446
	IL_0446:            Temp_92->F_x43=Temp_91;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x142 F_x43
	IL_044b:                                                                        //ldarg.0
	IL_044c:                                                                        //ldarg.0
	IL_044d:            Temp_56=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_0452:                                                                        //conv.i4
	IL_0453:                                                                        //ldc.i4				0x10b
	IL_0458:            Temp_94=this;if(safe_cast<System::Int32>(Temp_56)==267)goto IL_0464;//beq.s				IL_0464
	IL_045a:            goto IL_045c;                                               //br.s				IL_045c
	IL_045c:                                                                        //ldarg.1
	IL_045d:            Temp_67=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_0462:            Temp_96=Temp_94;Temp_95=Temp_67;goto IL_046d;               //br.s				IL_046d
	IL_0464:                                                                        //ldarg.1
	IL_0465:            Temp_57=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_046a:                                                                        //conv.u8
	IL_046b:            Temp_96=Temp_94;Temp_95=safe_cast<System::UInt64>(Temp_57);goto IL_046d;//br.s				IL_046d
	IL_046d:            Temp_96->F_x35=Temp_95;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x142 F_x35
	IL_0472:                                                                        //ldarg.0
	IL_0473:                                                                        //ldarg.1
	IL_0474:            Temp_58=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0479:            this->F_x93=Temp_58;                                        //stfld				System::UInt32 Root::T_x142 F_x93
	IL_047e:                                                                        //ldarg.1
	IL_047f:            Temp_59=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0484:            V_2=safe_cast<System::Int32>(Temp_59);                      //stloc.2
	IL_0485:                                                                        //ldloc.2
	IL_0486:                                                                        //ldc.i4.s				16
	IL_0488:            if(V_2>=16)goto IL_04a0;                                    //bge.s				IL_04a0
	IL_048a:            goto IL_048c;                                               //br.s				IL_048c
	IL_048c:                                                                        //ldstr				L"\x662E\x5F30\x4532\x5434\x5B36\x5038\x5F3A\x1D3C\x513E\x3440\x2E42\x2744\x2246\x3B48\x6B4A\x224C\x294E\x7150\x3752\x3454\x2356\x3858\x7B5A\x395C\x365E\x1360\x0662\x0664\x1366\x0668\x196A\x046C\x0A6E\x0270\x5372\x1C74\x1976\x5978\x357A\x297C\x5F7E\xE980\xE682\xE484\xE386\xEC88\xF98A\xA38C"
	IL_0491:                                                                        //ldloc				V_4
	IL_0495:            Temp_65=a(L"\x662E\x5F30\x4532\x5434\x5B36\x5038\x5F3A\x1D3C\x513E\x3440\x2E42\x2744\x2246\x3B48\x6B4A\x224C\x294E\x7150\x3752\x3454\x2356\x3858\x7B5A\x395C\x365E\x1360\x0662\x0664\x1366\x0668\x196A\x046C\x0A6E\x0270\x5372\x1C74\x1976\x5978\x357A\x297C\x5F7E\xE980\xE682\xE484\xE386\xEC88\xF98A\xA38C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_049a:            Temp_66=gcnew System::InvalidOperationException(Temp_65);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_049f:            throw Temp_66;                                              //throw
	IL_04a0:                                                                        //ldarg.0
	IL_04a1:                                                                        //ldloc.2
	IL_04a2:                                                                        //conv.ovf.u4
	IL_04a3:            Temp_60=gcnew array<Root::T_x144^>(safe_cast<System::UInt32>(V_2));//newarr				Root::T_x144
	IL_04a8:            this->F_x139=Temp_60;                                       //stfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_04ad:                                                                        //ldc.i4.0
	IL_04ae:            V_3=0;                                                      //stloc.3
	IL_04af:            goto IL_04c5;                                               //br.s				IL_04c5
	IL_04b1:                                                                        //ldarg.0
	IL_04b2:            Temp_63=this->F_x139;                                       //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_04b7:                                                                        //ldloc.3
	IL_04b8:                                                                        //ldarg.1
	IL_04b9:            Temp_64=gcnew Root::T_x144(A_0);                            //newobj				void Root::T_x144::.ctor(System::IO::BinaryReader^)
	IL_04be:            Temp_63[V_3]=Temp_64;                                       //stelem.ref
	IL_04bf:                                                                        //ldloc.3
	IL_04c0:                                                                        //ldc.i4.1
	IL_04c1:                                                                        //add
	IL_04c2:            V_3=(V_3 + 1);                                              //stloc.3
	IL_04c3:            goto IL_04c5;                                               //br.s				IL_04c5
	IL_04c5:                                                                        //ldloc.3
	IL_04c6:                                                                        //ldarg.0
	IL_04c7:            Temp_61=this->F_x139;                                       //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_04cc:            Temp_62=Temp_61->Length;                                    //ldlen
	IL_04cd:                                                                        //conv.i4
	IL_04ce:            if(V_3<Temp_62)goto IL_04b1;                                //blt.s				IL_04b1
	IL_04d0:            goto IL_04d2;                                               //br.s				IL_04d2
	IL_04d2:            return;                                                     //ret

}
inline System::UInt32 Root::T_x142::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x14;                                         //ldfld				System::UInt32 Root::T_x142 F_x14
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x142::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x7=A_0;                                             //stfld				System::Int32 Root::T_x142 F_x7
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x142::M_x1(System::IO::BinaryWriter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::UInt32 Temp_1 = 0;
	System::UInt16 Temp_2 = 0;
	System::UInt16 Temp_3 = 0;
	System::UInt16 Temp_4 = 0;
	System::UInt32 Temp_5 = 0;
	System::UInt32 Temp_6 = 0;
	System::UInt32 Temp_7 = 0;
	System::UInt16 Temp_8 = 0;
	System::UInt16 Temp_9 = 0;
	System::UInt16 Temp_10 = 0;
	System::UInt16 Temp_11 = 0;
	System::Byte Temp_12 = 0;
	System::Byte Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::UInt32 Temp_17 = 0;
	System::UInt32 Temp_18 = 0;
	System::UInt64 Temp_19 = 0;
	System::UInt64 Temp_20 = 0;
	System::UInt64 Temp_21 = 0;
	System::UInt64 Temp_22 = 0;
	System::UInt32 Temp_23 = 0;
	array<Root::T_x144^>^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	System::UInt16 Temp_26 = 0;
	System::UInt64 Temp_27 = 0;
	System::UInt64 Temp_28 = 0;
	System::UInt64 Temp_29 = 0;
	System::UInt64 Temp_30 = 0;
	System::UInt64 Temp_31 = 0;
	System::UInt16 Temp_32 = 0;
	System::UInt64 Temp_33 = 0;
	System::Int32 Temp_34 = 0;
	System::Int32 Temp_35 = 0;
	System::UInt16 Temp_36 = 0;
	System::UInt16 Temp_37 = 0;
	System::UInt16 Temp_38 = 0;
	System::UInt16 Temp_39 = 0;
	System::UInt16 Temp_40 = 0;
	System::UInt16 Temp_41 = 0;
	System::UInt32 Temp_42 = 0;
	System::UInt32 Temp_43 = 0;
	System::UInt32 Temp_44 = 0;
	System::UInt32 Temp_45 = 0;
	System::UInt16 Temp_46 = 0;
	System::UInt16 Temp_47 = 0;
	System::UInt16 Temp_48 = 0;
	array<Root::T_x144^>^ Temp_49 = nullptr;
	System::Int32 Temp_50 = 0;
	array<Root::T_x144^>^ Temp_51 = nullptr;
	System::UInt32 Temp_52 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0047;                                               //br.s				IL_0047
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_03b5;case 1:goto IL_01c3;case 2:goto IL_0396;case 3:goto IL_01f2;case 4:goto IL_01d3;case 5:goto IL_02c1;case 6:goto IL_012b;case 7:goto IL_0286;case 8:goto IL_02a2;case 9:goto IL_0217;case 10:goto IL_02de;case 11:goto IL_014a;case 12:goto IL_0273;case 13:goto IL_0233;case 14:goto IL_0179;};//switch				(IL_03b5,IL_01c3,IL_0396,IL_01f2,IL_01d3,IL_02c1,IL_012b,IL_0286,IL_02a2,IL_0217,IL_02de,IL_014a,IL_0273,IL_0233,IL_0179)
	IL_0047:                                                                        //ldarg.1
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_0=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_004e:            A_0->Write(Temp_0);                                         //callvirt				void System::IO::BinaryWriter::Write(array<System::Byte>^)
	IL_0053:                                                                        //ldarg.1
	IL_0054:                                                                        //ldarg.0
	IL_0055:            Temp_1=this->F_x2;                                          //ldfld				System::UInt32 Root::T_x142 F_x2
	IL_005a:            A_0->Write(Temp_1);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_005f:                                                                        //ldarg.1
	IL_0060:                                                                        //ldarg.0
	IL_0061:            Temp_2=this->F_x15;                                         //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_0066:            Temp_3=Root::T_x142::M_x1(Temp_2);                          //call				System::UInt16 Root::T_x142::M_x1(System::UInt16)
	IL_006b:            A_0->Write(Temp_3);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0070:                                                                        //ldarg.1
	IL_0071:                                                                        //ldarg.0
	IL_0072:            Temp_4=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x142 F_x12
	IL_0077:            A_0->Write(Temp_4);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_007c:                                                                        //ldarg.1
	IL_007d:                                                                        //ldarg.0
	IL_007e:            Temp_5=this->F_x13;                                         //ldfld				System::UInt32 Root::T_x142 F_x13
	IL_0083:            A_0->Write(Temp_5);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0088:                                                                        //ldarg.1
	IL_0089:                                                                        //ldarg.0
	IL_008a:            Temp_6=this->F_x8;                                          //ldfld				System::UInt32 Root::T_x142 F_x8
	IL_008f:            A_0->Write(Temp_6);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0094:                                                                        //ldarg.1
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_7=this->F_x5;                                          //ldfld				System::UInt32 Root::T_x142 F_x5
	IL_009b:            A_0->Write(Temp_7);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_00a0:                                                                        //ldarg.1
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            Temp_8=this->F_x15;                                         //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_00a7:            Temp_9=Root::T_x142::M_x2(Temp_8);                          //call				System::UInt16 Root::T_x142::M_x2(System::UInt16)
	IL_00ac:            A_0->Write(Temp_9);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_00b1:                                                                        //ldarg.1
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:            Temp_10=this->F_x4;                                         //ldfld				System::UInt16 Root::T_x142 F_x4
	IL_00b8:            A_0->Write(Temp_10);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_00bd:                                                                        //ldarg.1
	IL_00be:                                                                        //ldarg.0
	IL_00bf:            Temp_11=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_00c4:            A_0->Write(Temp_11);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_00c9:                                                                        //ldarg.1
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:            Temp_12=this->F_x11;                                        //ldfld				System::Byte Root::T_x142 F_x11
	IL_00d0:            A_0->Write(Temp_12);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_00d5:                                                                        //ldarg.1
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:            Temp_13=this->F_x10;                                        //ldfld				System::Byte Root::T_x142 F_x10
	IL_00dc:            A_0->Write(Temp_13);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_00e1:                                                                        //ldarg.1
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:            Temp_14=this->F_x7;                                         //ldfld				System::Int32 Root::T_x142 F_x7
	IL_00e8:            A_0->Write(Temp_14);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_00ed:                                                                        //ldarg.1
	IL_00ee:                                                                        //ldarg.0
	IL_00ef:            Temp_15=this->F_x16;                                        //ldfld				System::Int32 Root::T_x142 F_x16
	IL_00f4:            A_0->Write(Temp_15);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_00f9:                                                                        //ldarg.1
	IL_00fa:                                                                        //ldarg.0
	IL_00fb:            Temp_16=this->F_x6;                                         //ldfld				System::Int32 Root::T_x142 F_x6
	IL_0100:            A_0->Write(Temp_16);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0105:                                                                        //ldarg.1
	IL_0106:                                                                        //ldarg.0
	IL_0107:            Temp_17=this->F_x14;                                        //ldfld				System::UInt32 Root::T_x142 F_x14
	IL_010c:            A_0->Write(Temp_17);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0111:                                                                        //ldarg.1
	IL_0112:                                                                        //ldarg.0
	IL_0113:            Temp_18=this->F_x18;                                        //ldfld				System::UInt32 Root::T_x142 F_x18
	IL_0118:            A_0->Write(Temp_18);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_011d:                                                                        //ldc.i4				0x6
	IL_0122:            V_1=6;                                                      //stloc				V_1
	IL_0126:            /*goto IL_0002;*/goto IL_012b;                              //br				IL_0002
	IL_012b:                                                                        //ldarg.0
	IL_012c:            Temp_48=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_0131:                                                                        //conv.i4
	IL_0132:                                                                        //ldc.i4				0x10b
	IL_0137:            if(safe_cast<System::Int32>(Temp_48)!=267)goto IL_01c5;     //bne.un				IL_01c5
	IL_013c:                                                                        //ldc.i4				0xb
	IL_0141:            V_1=11;                                                     //stloc				V_1
	IL_0145:            /*goto IL_0002;*/goto IL_014a;                              //br				IL_0002
	IL_014a:            goto IL_0219;                                               //br				IL_0219
	IL_014f:                                                                        //ldarg.1
	IL_0150:                                                                        //ldarg.0
	IL_0151:            Temp_23=this->F_x93;                                        //ldfld				System::UInt32 Root::T_x142 F_x93
	IL_0156:            A_0->Write(Temp_23);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_015b:                                                                        //ldarg.1
	IL_015c:                                                                        //ldarg.0
	IL_015d:            Temp_24=this->F_x139;                                       //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0162:            Temp_25=Temp_24->Length;                                    //ldlen
	IL_0163:                                                                        //conv.i4
	IL_0164:            A_0->Write(Temp_25);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0169:                                                                        //ldc.i4.0
	IL_016a:            V_0=0;                                                      //stloc.0
	IL_016b:                                                                        //ldc.i4				0xe
	IL_0170:            V_1=14;                                                     //stloc				V_1
	IL_0174:            /*goto IL_0002;*/goto IL_0179;                              //br				IL_0002
	IL_0179:            goto IL_0278;                                               //br				IL_0278
	IL_017e:                                                                        //ldarg.1
	IL_017f:                                                                        //ldarg.0
	IL_0180:            Temp_19=this->F_x3;                                         //ldfld				System::UInt64 Root::T_x142 F_x3
	IL_0185:                                                                        //conv.u4
	IL_0186:            A_0->Write(safe_cast<System::UInt32>(Temp_19));             //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_018b:                                                                        //ldarg.1
	IL_018c:                                                                        //ldarg.0
	IL_018d:            Temp_20=this->F_x47;                                        //ldfld				System::UInt64 Root::T_x142 F_x47
	IL_0192:                                                                        //conv.u4
	IL_0193:            A_0->Write(safe_cast<System::UInt32>(Temp_20));             //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0198:                                                                        //ldarg.1
	IL_0199:                                                                        //ldarg.0
	IL_019a:            Temp_21=this->F_x43;                                        //ldfld				System::UInt64 Root::T_x142 F_x43
	IL_019f:                                                                        //conv.u4
	IL_01a0:            A_0->Write(safe_cast<System::UInt32>(Temp_21));             //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_01a5:                                                                        //ldarg.1
	IL_01a6:                                                                        //ldarg.0
	IL_01a7:            Temp_22=this->F_x35;                                        //ldfld				System::UInt64 Root::T_x142 F_x35
	IL_01ac:                                                                        //conv.u4
	IL_01ad:            A_0->Write(safe_cast<System::UInt32>(Temp_22));             //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_01b2:            goto IL_01b5;                                               //br.s				IL_01b5
	IL_01b4:                                                                        //break
	IL_01b5:                                                                        //ldc.i4				0x1
	IL_01ba:            V_1=1;                                                      //stloc				V_1
	IL_01be:            /*goto IL_0002;*/goto IL_01c3;                              //br				IL_0002
	IL_01c3:            goto IL_014f;                                               //br.s				IL_014f
	IL_01c5:                                                                        //ldc.i4				0x4
	IL_01ca:            V_1=4;                                                      //stloc				V_1
	IL_01ce:            /*goto IL_0002;*/goto IL_01d3;                              //br				IL_0002
	IL_01d3:                                                                        //ldarg.0
	IL_01d4:            Temp_32=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_01d9:                                                                        //conv.i4
	IL_01da:                                                                        //ldc.i4				0x10b
	IL_01df:            if(safe_cast<System::Int32>(Temp_32)!=267)goto IL_02a7;     //bne.un				IL_02a7
	IL_01e4:                                                                        //ldc.i4				0x3
	IL_01e9:            V_1=3;                                                      //stloc				V_1
	IL_01ed:            /*goto IL_0002;*/goto IL_01f2;                              //br				IL_0002
	IL_01f2:            goto IL_02c3;                                               //br				IL_02c3
	IL_01f7:                                                                        //ldarg.0
	IL_01f8:            Temp_51=this->F_x139;                                       //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_01fd:                                                                        //ldloc.0
	IL_01fe:                                                                        //ldelem.ref
	IL_01ff:                                                                        //ldarg.1
	IL_0200:            Temp_51[V_0]->M_x1(A_0);                                    //callvirt				void Root::T_x144::M_x1(System::IO::BinaryWriter^)
	IL_0205:                                                                        //ldloc.0
	IL_0206:                                                                        //ldc.i4.1
	IL_0207:                                                                        //add
	IL_0208:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0209:                                                                        //ldc.i4				0x9
	IL_020e:            V_1=9;                                                      //stloc				V_1
	IL_0212:            /*goto IL_0002;*/goto IL_0217;                              //br				IL_0002
	IL_0217:            goto IL_0278;                                               //br.s				IL_0278
	IL_0219:                                                                        //ldarg.1
	IL_021a:                                                                        //ldarg.0
	IL_021b:            Temp_52=this->F_x19;                                        //ldfld				System::UInt32 Root::T_x142 F_x19
	IL_0220:            A_0->Write(Temp_52);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0225:                                                                        //ldc.i4				0xd
	IL_022a:            V_1=13;                                                     //stloc				V_1
	IL_022e:            /*goto IL_0002;*/goto IL_0233;                              //br				IL_0002
	IL_0233:            goto IL_01c5;                                               //br.s				IL_01c5
	IL_0235:                                                                        //ldarg.1
	IL_0236:                                                                        //ldarg.0
	IL_0237:            Temp_27=this->F_x3;                                         //ldfld				System::UInt64 Root::T_x142 F_x3
	IL_023c:            A_0->Write(Temp_27);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt64)
	IL_0241:                                                                        //ldarg.1
	IL_0242:                                                                        //ldarg.0
	IL_0243:            Temp_28=this->F_x47;                                        //ldfld				System::UInt64 Root::T_x142 F_x47
	IL_0248:            A_0->Write(Temp_28);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt64)
	IL_024d:                                                                        //ldarg.1
	IL_024e:                                                                        //ldarg.0
	IL_024f:            Temp_29=this->F_x43;                                        //ldfld				System::UInt64 Root::T_x142 F_x43
	IL_0254:            A_0->Write(Temp_29);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt64)
	IL_0259:                                                                        //ldarg.1
	IL_025a:                                                                        //ldarg.0
	IL_025b:            Temp_30=this->F_x35;                                        //ldfld				System::UInt64 Root::T_x142 F_x35
	IL_0260:            A_0->Write(Temp_30);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt64)
	IL_0265:                                                                        //ldc.i4				0xc
	IL_026a:            V_1=12;                                                     //stloc				V_1
	IL_026e:            /*goto IL_0002;*/goto IL_0273;                              //br				IL_0002
	IL_0273:            goto IL_014f;                                               //br				IL_014f
	IL_0278:                                                                        //ldc.i4				0x7
	IL_027d:            V_1=7;                                                      //stloc				V_1
	IL_0281:            /*goto IL_0002;*/goto IL_0286;                              //br				IL_0002
	IL_0286:                                                                        //ldloc.0
	IL_0287:                                                                        //ldarg.0
	IL_0288:            Temp_49=this->F_x139;                                       //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_028d:            Temp_50=Temp_49->Length;                                    //ldlen
	IL_028e:                                                                        //conv.i4
	IL_028f:            if(V_0<Temp_50)goto IL_01f7;                                //blt				IL_01f7
	IL_0294:                                                                        //ldc.i4				0x8
	IL_0299:            V_1=8;                                                      //stloc				V_1
	IL_029d:            /*goto IL_0002;*/goto IL_02a2;                              //br				IL_0002
	IL_02a2:            goto IL_03ba;                                               //br				IL_03ba
	IL_02a7:                                                                        //ldarg.1
	IL_02a8:                                                                        //ldarg.0
	IL_02a9:            Temp_33=this->F_x17;                                        //ldfld				System::UInt64 Root::T_x142 F_x17
	IL_02ae:            A_0->Write(Temp_33);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt64)
	IL_02b3:                                                                        //ldc.i4				0x5
	IL_02b8:            V_1=5;                                                      //stloc				V_1
	IL_02bc:            /*goto IL_0002;*/goto IL_02c1;                              //br				IL_0002
	IL_02c1:            goto IL_02e0;                                               //br.s				IL_02e0
	IL_02c3:                                                                        //ldarg.1
	IL_02c4:                                                                        //ldarg.0
	IL_02c5:            Temp_31=this->F_x17;                                        //ldfld				System::UInt64 Root::T_x142 F_x17
	IL_02ca:                                                                        //conv.u4
	IL_02cb:            A_0->Write(safe_cast<System::UInt32>(Temp_31));             //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_02d0:                                                                        //ldc.i4				0xa
	IL_02d5:            V_1=10;                                                     //stloc				V_1
	IL_02d9:            /*goto IL_0002;*/goto IL_02de;                              //br				IL_0002
	IL_02de:            goto IL_02e0;                                               //br.s				IL_02e0
	IL_02e0:                                                                        //ldarg.1
	IL_02e1:                                                                        //ldarg.0
	IL_02e2:            Temp_34=this->F_x56;                                        //ldfld				System::Int32 Root::T_x142 F_x56
	IL_02e7:            A_0->Write(Temp_34);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_02ec:                                                                        //ldarg.1
	IL_02ed:                                                                        //ldarg.0
	IL_02ee:            Temp_35=this->F_x48;                                        //ldfld				System::Int32 Root::T_x142 F_x48
	IL_02f3:            A_0->Write(Temp_35);                                        //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_02f8:                                                                        //ldarg.1
	IL_02f9:                                                                        //ldarg.0
	IL_02fa:            Temp_36=this->F_x55;                                        //ldfld				System::UInt16 Root::T_x142 F_x55
	IL_02ff:            A_0->Write(Temp_36);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0304:                                                                        //ldarg.1
	IL_0305:                                                                        //ldarg.0
	IL_0306:            Temp_37=this->F_x57;                                        //ldfld				System::UInt16 Root::T_x142 F_x57
	IL_030b:            A_0->Write(Temp_37);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0310:                                                                        //ldarg.1
	IL_0311:                                                                        //ldarg.0
	IL_0312:            Temp_38=this->F_x81;                                        //ldfld				System::UInt16 Root::T_x142 F_x81
	IL_0317:            A_0->Write(Temp_38);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_031c:                                                                        //ldarg.1
	IL_031d:                                                                        //ldarg.0
	IL_031e:            Temp_39=this->F_x33;                                        //ldfld				System::UInt16 Root::T_x142 F_x33
	IL_0323:            A_0->Write(Temp_39);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0328:                                                                        //ldarg.1
	IL_0329:                                                                        //ldarg.0
	IL_032a:            Temp_40=this->F_x49;                                        //ldfld				System::UInt16 Root::T_x142 F_x49
	IL_032f:            A_0->Write(Temp_40);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0334:                                                                        //ldarg.1
	IL_0335:                                                                        //ldarg.0
	IL_0336:            Temp_41=this->F_x158;                                       //ldfld				System::UInt16 Root::T_x142 F_x158
	IL_033b:            A_0->Write(Temp_41);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0340:                                                                        //ldarg.1
	IL_0341:                                                                        //ldarg.0
	IL_0342:            Temp_42=this->F_x26;                                        //ldfld				System::UInt32 Root::T_x142 F_x26
	IL_0347:            A_0->Write(Temp_42);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_034c:                                                                        //ldarg.1
	IL_034d:                                                                        //ldarg.0
	IL_034e:            Temp_43=this->F_x176;                                       //ldfld				System::UInt32 Root::T_x142 F_x176
	IL_0353:            A_0->Write(Temp_43);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0358:                                                                        //ldarg.1
	IL_0359:                                                                        //ldarg.0
	IL_035a:            Temp_44=this->F_x134;                                       //ldfld				System::UInt32 Root::T_x142 F_x134
	IL_035f:            A_0->Write(Temp_44);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0364:                                                                        //ldarg.1
	IL_0365:                                                                        //ldarg.0
	IL_0366:            Temp_45=this->F_x148;                                       //ldfld				System::UInt32 Root::T_x142 F_x148
	IL_036b:            A_0->Write(Temp_45);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0370:                                                                        //ldarg.1
	IL_0371:                                                                        //ldarg.0
	IL_0372:            Temp_46=this->F_x173;                                       //ldfld				System::UInt16 Root::T_x142 F_x173
	IL_0377:            A_0->Write(Temp_46);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_037c:                                                                        //ldarg.1
	IL_037d:                                                                        //ldarg.0
	IL_037e:            Temp_47=this->F_x113;                                       //ldfld				System::UInt16 Root::T_x142 F_x113
	IL_0383:            A_0->Write(Temp_47);                                        //callvirt				void System::IO::BinaryWriter::Write(System::UInt16)
	IL_0388:                                                                        //ldc.i4				0x2
	IL_038d:            V_1=2;                                                      //stloc				V_1
	IL_0391:            /*goto IL_0002;*/goto IL_0396;                              //br				IL_0002
	IL_0396:                                                                        //ldarg.0
	IL_0397:            Temp_26=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_039c:                                                                        //conv.i4
	IL_039d:                                                                        //ldc.i4				0x10b
	IL_03a2:            if(safe_cast<System::Int32>(Temp_26)!=267)goto IL_0235;     //bne.un				IL_0235
	IL_03a7:                                                                        //ldc.i4				0x0
	IL_03ac:            V_1=0;                                                      //stloc				V_1
	IL_03b0:            /*goto IL_0002;*/goto IL_03b5;                              //br				IL_0002
	IL_03b5:            goto IL_017e;                                               //br				IL_017e
	IL_03ba:            return;                                                     //ret

}
inline System::UInt16 Root::T_x142::M_x1(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_1=4;                                                      //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_0=2;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0056;case 1:goto IL_006a;case 2:goto IL_0014;case 3:goto IL_0043;};//switch				(IL_0056,IL_006a,IL_0014,IL_0043)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //conv.i4
	IL_0031:                                                                        //ldc.i4				0x10b
	IL_0036:            if(safe_cast<System::Int32>(A_0)!=267)goto IL_004b;         //bne.un.s				IL_004b
	IL_0038:                                                                        //ldc.i4				0x3
	IL_003d:            V_0=3;                                                      //stloc				V_0
	IL_0041:            /*goto IL_0016;*/goto IL_0043;                              //br.s				IL_0016
	IL_0043:            goto IL_006f;                                               //br.s				IL_006f
	IL_0045:                                                                        //ldc.i4				0x200
	IL_004a:            return 512;                                                 //ret
	IL_004b:                                                                        //ldc.i4				0x0
	IL_0050:            V_0=0;                                                      //stloc				V_0
	IL_0054:            /*goto IL_0016;*/goto IL_0056;                              //br.s				IL_0016
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //conv.i4
	IL_0058:                                                                        //ldc.i4				0x20b
	IL_005d:            if(safe_cast<System::Int32>(A_0)!=523)goto IL_0075;         //bne.un.s				IL_0075
	IL_005f:                                                                        //ldc.i4				0x1
	IL_0064:            V_0=1;                                                      //stloc				V_0
	IL_0068:            /*goto IL_0016;*/goto IL_006a;                              //br.s				IL_0016
	IL_006a:            goto IL_006d;                                               //br.s				IL_006d
	IL_006c:                                                                        //break
	IL_006d:            goto IL_0045;                                               //br.s				IL_0045
	IL_006f:                                                                        //ldc.i4				0x14c
	IL_0074:            return 332;                                                 //ret
	IL_0075:                                                                        //ldstr				L"\x6B21\x4A23\x5025\x4927\x4629\x452B\x4A2D\x102F\x6231\x5B33\x4435\x4C37\x5B39\x5E3B\x523D\x253F\x6241\x0143\x3E45\x2D47\x2949\x394B\x3A4D\x314F\x3051\x3853\x3355\x7857\x3259\x395B\x3F5D\x045F\x0761\x1663\x4665\x1B67\x0369\x0B6B\x006D\x116F\x0671\x0173\x0475\x1D77\x5479"
	IL_007a:                                                                        //ldloc				V_1
	IL_007e:            Temp_0=a(L"\x6B21\x4A23\x5025\x4927\x4629\x452B\x4A2D\x102F\x6231\x5B33\x4435\x4C37\x5B39\x5E3B\x523D\x253F\x6241\x0143\x3E45\x2D47\x2949\x394B\x3A4D\x314F\x3051\x3853\x3355\x7857\x3259\x395B\x3F5D\x045F\x0761\x1663\x4665\x1B67\x0369\x0B6B\x006D\x116F\x0671\x0173\x0475\x1D77\x5479",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0083:            Temp_1=gcnew System::InvalidOperationException(Temp_0);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0088:            throw Temp_1;                                               //throw

}
inline void Root::T_x142::M_x1(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x176=A_0;                                           //stfld				System::UInt32 Root::T_x142 F_x176
	IL_0007:            return;                                                     //ret

}
inline System::UInt64 Root::T_x142::M_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt64 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x17;                                         //ldfld				System::UInt64 Root::T_x142 F_x17
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x142::M_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x48;                                         //ldfld				System::Int32 Root::T_x142 F_x48
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x142::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x7;                                          //ldfld				System::Int32 Root::T_x142 F_x7
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x142::M_x12(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x4=A_0;                                             //stfld				System::UInt16 Root::T_x142 F_x4
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x142::M_x12(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x19=A_0;                                            //stfld				System::UInt32 Root::T_x142 F_x19
	IL_0007:            return;                                                     //ret

}
inline System::UInt16 Root::T_x142::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x173;                                        //ldfld				System::UInt16 Root::T_x142 F_x173
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x142::M_x13(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x173=A_0;                                           //stfld				System::UInt16 Root::T_x142 F_x173
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x142::M_x13(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x134=A_0;                                           //stfld				System::UInt32 Root::T_x142 F_x134
	IL_0007:            return;                                                     //ret

}
inline Root::T_x144^ Root::T_x142::M_x14()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x144^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0006:                                                                        //ldc.i4.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[1];                                           //ret

}
inline System::Int32 Root::T_x142::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x56;                                         //ldfld				System::Int32 Root::T_x142 F_x56
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x144^ Root::T_x142::M_x16()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x144^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0006:                                                                        //ldc.i4.5
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[5];                                           //ret

}
inline System::Int32 Root::T_x142::M_x17()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::UInt16 Temp_2 = 0;
	System::UInt16 Temp_3 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x142 F_x1
	IL_0009:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4.s				24
	IL_000d:                                                                        //add
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_2=this->F_x15;                                         //ldfld				System::UInt16 Root::T_x142 F_x15
	IL_0014:            Temp_3=Root::T_x142::M_x2(Temp_2);                          //call				System::UInt16 Root::T_x142::M_x2(System::UInt16)
	IL_0019:                                                                        //conv.i4
	IL_001a:                                                                        //add
	IL_001b:            return ((Temp_1 + 24) + safe_cast<System::Int32>(Temp_3));  //ret

}
inline System::Int32 Root::T_x142::M_x18()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x16;                                         //ldfld				System::Int32 Root::T_x142 F_x16
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x144^ Root::T_x142::M_x19()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x144^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0006:                                                                        //ldc.i4.s				12
	IL_0008:                                                                        //ldelem.ref
	IL_0009:            return Temp_0[12];                                          //ret

}
inline Root::T_x144^ Root::T_x142::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x144^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0006:                                                                        //ldc.i4.s				14
	IL_0008:                                                                        //ldelem.ref
	IL_0009:            return Temp_0[14];                                          //ret

}
inline void Root::T_x142::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x16=A_0;                                            //stfld				System::Int32 Root::T_x142 F_x16
	IL_0007:            return;                                                     //ret

}
inline System::UInt16 Root::T_x142::M_x2(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_1=11;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_006a;case 1:goto IL_0014;case 2:goto IL_0056;case 3:goto IL_0043;};//switch				(IL_006a,IL_0014,IL_0056,IL_0043)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //conv.i4
	IL_0031:                                                                        //ldc.i4				0x10b
	IL_0036:            if(safe_cast<System::Int32>(A_0)!=267)goto IL_004b;         //bne.un.s				IL_004b
	IL_0038:                                                                        //ldc.i4				0x3
	IL_003d:            V_0=3;                                                      //stloc				V_0
	IL_0041:            /*goto IL_0016;*/goto IL_0043;                              //br.s				IL_0016
	IL_0043:            goto IL_0077;                                               //br.s				IL_0077
	IL_0045:                                                                        //ldc.i4				0xf0
	IL_004a:            return 240;                                                 //ret
	IL_004b:                                                                        //ldc.i4				0x2
	IL_0050:            V_0=2;                                                      //stloc				V_0
	IL_0054:            /*goto IL_0016;*/goto IL_0056;                              //br.s				IL_0016
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //conv.i4
	IL_0058:                                                                        //ldc.i4				0x20b
	IL_005d:            if(safe_cast<System::Int32>(A_0)!=523)goto IL_007d;         //bne.un.s				IL_007d
	IL_005f:                                                                        //ldc.i4				0x0
	IL_0064:            V_0=0;                                                      //stloc				V_0
	IL_0068:            /*goto IL_0016;*/goto IL_006a;                              //br.s				IL_0016
	IL_006a:                                                                        //ldc.i4.4
	IL_006b:                                                                        //dup
	IL_006c:                                                                        //dup
	IL_006d:                                                                        //ldc.i4.2
	IL_006e:                                                                        //sub
	IL_006f:                                                                        //blt				IL_006b
	IL_0074:                                                                        //pop
	IL_0075:            goto IL_0045;                                               //br.s				IL_0045
	IL_0077:                                                                        //ldc.i4				0xe0
	IL_007c:            return 224;                                                 //ret
	IL_007d:                                                                        //ldstr				L"\x6028\x452A\x5B2C\x4E2E\x5D30\x5A32\x5134\x1736\x6938\x543A\x4F3C\x4B3E\x2040\x2142\x2944\x2246\x6948\x0E4A\x354C\x2A4E\x3250\x2652\x2154\x3656\x3B58\x375A\x385C\x7F5E\x0960\x0662\x0464\x0366\x0C68\x196A\x4D6C\x1C6E\x1870\x1472\x1B74\x1676\x0D78\x0E7A\x0F7C\x1A7E\xAF80"
	IL_0082:                                                                        //ldloc				V_1
	IL_0086:            Temp_0=a(L"\x6028\x452A\x5B2C\x4E2E\x5D30\x5A32\x5134\x1736\x6938\x543A\x4F3C\x4B3E\x2040\x2142\x2944\x2246\x6948\x0E4A\x354C\x2A4E\x3250\x2652\x2154\x3656\x3B58\x375A\x385C\x7F5E\x0960\x0662\x0464\x0366\x0C68\x196A\x4D6C\x1C6E\x1870\x1472\x1B74\x1676\x0D78\x0E7A\x0F7C\x1A7E\xAF80",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008b:            Temp_1=gcnew System::InvalidOperationException(Temp_0);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0090:            throw Temp_1;                                               //throw

}
inline void Root::T_x142::M_x2(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x14=A_0;                                            //stfld				System::UInt32 Root::T_x142 F_x14
	IL_0007:            return;                                                     //ret

}
inline System::UInt32 Root::T_x142::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x19;                                         //ldfld				System::UInt32 Root::T_x142 F_x19
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt16 Root::T_x142::M_x48()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x142 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt16 Root::T_x142::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x4;                                          //ldfld				System::UInt16 Root::T_x142 F_x4
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt32 Root::T_x142::M_x56()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x18;                                         //ldfld				System::UInt32 Root::T_x142 F_x18
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt32 Root::T_x142::M_x6()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x134;                                        //ldfld				System::UInt32 Root::T_x142 F_x134
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt32 Root::T_x142::M_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x176;                                        //ldfld				System::UInt32 Root::T_x142 F_x176
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x144^ Root::T_x142::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x144^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0006:                                                                        //ldc.i4.2
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[2];                                           //ret

}
inline void Root::T_x142::M_x8(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::UInt16 Root::T_x142 F_x12
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x142::M_x8(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x18=A_0;                                            //stfld				System::UInt32 Root::T_x142 F_x18
	IL_0007:            return;                                                     //ret

}
inline Root::T_x144^ Root::T_x142::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x144^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x139;                                        //ldfld				array<Root::T_x144^>^ Root::T_x142 F_x139
	IL_0006:                                                                        //ldc.i4.6
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[6];                                           //ret

}
