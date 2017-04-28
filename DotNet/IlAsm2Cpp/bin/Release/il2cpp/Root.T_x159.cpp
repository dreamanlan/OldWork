#include "global_xref.h"

inline Root::T_x159::T_x159(Root::T_x161^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x161^ Root::T_x159 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::Object^ Root::T_x159 F_x2
	IL_0014:            return;                                                     //ret

}
inline Reflector::CodeModel::IInstructionCollection^ Root::T_x159::M_x1()
//Reflector::CodeModel::IMethodBody^::get_Instructions by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	Root::T_x139^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<Reflector::CodeModel::IInstruction^>^ Temp_4 = nullptr;
	Root::T_x159::T_x2^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	Root::T_x139^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Collections::ArrayList^ Temp_9 = nullptr;
	Reflector::CodeModel::IInstructionCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	Reflector::CodeModel::IInstruction^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Object^ Temp_15 = nullptr;
	//local variables.
	Root::T_x139^ V_0 = nullptr;
	Root::T_x160^ V_1 = nullptr;
	System::Collections::ArrayList^ V_2 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_003b;                                               //br.s				IL_003b
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0062;case 1:goto IL_010a;case 2:goto IL_0139;case 3:goto IL_0080;case 4:goto IL_00cf;case 5:goto IL_015a;case 6:goto IL_0149;case 7:goto IL_0054;case 8:goto IL_011a;case 9:goto IL_00a4;case 10:goto IL_017e;case 11:goto IL_00b4;};//switch				(IL_0062,IL_010a,IL_0139,IL_0080,IL_00cf,IL_015a,IL_0149,IL_0054,IL_011a,IL_00a4,IL_017e,IL_00b4)
	IL_003b:                                                                        //ldnull
	IL_003c:            V_0=safe_cast<Root::T_x139^>(nullptr);                      //stloc.0
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_0043:                                                                        //isinst				Root::T_x160
	IL_0048:            V_1=dynamic_cast<Root::T_x160^>(Temp_0);                    //stloc.1
	IL_0049:                                                                        //ldc.i4				0x7
	IL_004e:            V_4=7;                                                      //stloc				V_4
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:                                                                        //ldloc.1
	IL_0055:            if(V_1==nullptr)goto IL_00a6;                               //brfalse.s				IL_00a6
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_4=0;                                                      //stloc				V_4
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:            goto IL_00f0;                                               //br				IL_00f0
	IL_0067:                                                                        //ldloc.2
	IL_0068:                                                                        //ldarg.0
	IL_0069:                                                                        //ldloc.0
	IL_006a:            Temp_13=this->M_x1(V_0);                                    //call				Reflector::CodeModel::IInstruction^ Root::T_x159::M_x1(Root::T_x139^)
	IL_006f:            Temp_14=V_2->Add(safe_cast<System::Object^>(Temp_13));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0074:                                                                        //pop
	IL_0075:                                                                        //ldc.i4				0x3
	IL_007a:            V_4=3;                                                      //stloc				V_4
	IL_007e:            /*goto IL_0002;*/goto IL_0080;                              //br.s				IL_0002
	IL_0080:            goto IL_010c;                                               //br				IL_010c
	IL_0085:            goto IL_0088;                                               //br.s				IL_0088
	IL_0087:                                                                        //break
	IL_0088:                                                                        //ldloc.0
	IL_0089:            Temp_8=V_0->M_x10();                                        //callvirt				System::Int32 Root::T_x139::M_x10()
	IL_008e:                                                                        //ldc.i4.5
	IL_008f:                                                                        //div
	IL_0090:            Temp_9=gcnew System::Collections::ArrayList((Temp_8 / 5));  //newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0095:            V_2=Temp_9;                                                 //stloc.2
	IL_0096:                                                                        //ldc.i4				0x9
	IL_009b:            V_4=9;                                                      //stloc				V_4
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:            goto IL_010c;                                               //br.s				IL_010c
	IL_00a6:                                                                        //ldc.i4				0xb
	IL_00ab:            V_4=11;                                                     //stloc				V_4
	IL_00af:            /*goto IL_0002;*/goto IL_00b4;                              //br				IL_0002
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:            Temp_15=this->F_x2;                                         //ldfld				System::Object^ Root::T_x159 F_x2
	IL_00ba:                                                                        //isinst				array<System::Byte>
	IL_00bf:            if(dynamic_cast<array<System::Byte>^>(Temp_15)==nullptr)goto IL_013b;//brfalse.s				IL_013b
	IL_00c1:                                                                        //ldc.i4				0x4
	IL_00c6:            V_4=4;                                                      //stloc				V_4
	IL_00ca:            /*goto IL_0002;*/goto IL_00cf;                              //br				IL_0002
	IL_00cf:            goto IL_015f;                                               //br				IL_015f
	IL_00d4:                                                                        //ldloc.2
	IL_00d5:            Temp_3=V_2->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00da:                                                                        //conv.ovf.u4
	IL_00db:            Temp_4=gcnew array<Reflector::CodeModel::IInstruction^>(safe_cast<System::UInt32>(Temp_3));//newarr				Reflector::CodeModel::IInstruction
	IL_00e0:            V_3=Temp_4;                                                 //stloc.3
	IL_00e1:                                                                        //ldloc.2
	IL_00e2:                                                                        //ldloc.3
	IL_00e3:                                                                        //ldc.i4.0
	IL_00e4:            V_2->CopyTo(safe_cast<System::Array^>(V_3),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_00e9:                                                                        //ldloc.3
	IL_00ea:            Temp_5=gcnew Root::T_x159::T_x2(V_3);                       //newobj				void Root::T_x159::T_x2::.ctor(array<Reflector::CodeModel::IInstruction^>^)
	IL_00ef:            return safe_cast<Reflector::CodeModel::IInstructionCollection^>(Temp_5);//ret
	IL_00f0:                                                                        //ldloc.1
	IL_00f1:            Temp_1=V_1->M_x13();                                        //callvirt				array<System::Byte>^ Root::T_x160::M_x13()
	IL_00f6:            Temp_2=gcnew Root::T_x139(Temp_1);                          //newobj				void Root::T_x139::.ctor(array<System::Byte>^)
	IL_00fb:            V_0=Temp_2;                                                 //stloc.0
	IL_00fc:                                                                        //ldc.i4				0x1
	IL_0101:            V_4=1;                                                      //stloc				V_4
	IL_0105:            /*goto IL_0002;*/goto IL_010a;                              //br				IL_0002
	IL_010a:            goto IL_013b;                                               //br.s				IL_013b
	IL_010c:                                                                        //ldc.i4				0x8
	IL_0111:            V_4=8;                                                      //stloc				V_4
	IL_0115:            /*goto IL_0002;*/goto IL_011a;                              //br				IL_0002
	IL_011a:                                                                        //ldloc.0
	IL_011b:            Temp_11=V_0->M_x19();                                       //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0120:                                                                        //ldloc.0
	IL_0121:            Temp_12=V_0->M_x10();                                       //callvirt				System::Int32 Root::T_x139::M_x10()
	IL_0126:            if(Temp_11<Temp_12)goto IL_0067;                            //blt				IL_0067
	IL_012b:                                                                        //ldc.i4				0x2
	IL_0130:            V_4=2;                                                      //stloc				V_4
	IL_0134:            /*goto IL_0002;*/goto IL_0139;                              //br				IL_0002
	IL_0139:            goto IL_00d4;                                               //br.s				IL_00d4
	IL_013b:                                                                        //ldc.i4				0x6
	IL_0140:            V_4=6;                                                      //stloc				V_4
	IL_0144:            /*goto IL_0002;*/goto IL_0149;                              //br				IL_0002
	IL_0149:                                                                        //ldloc.0
	IL_014a:            if(V_0==nullptr)goto IL_0180;                               //brfalse.s				IL_0180
	IL_014c:                                                                        //ldc.i4				0x5
	IL_0151:            V_4=5;                                                      //stloc				V_4
	IL_0155:            /*goto IL_0002;*/goto IL_015a;                              //br				IL_0002
	IL_015a:            goto IL_0085;                                               //br				IL_0085
	IL_015f:                                                                        //ldarg.0
	IL_0160:            Temp_6=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_0165:                                                                        //castclass				array<System::Byte>
	IL_016a:            Temp_7=gcnew Root::T_x139(safe_cast<array<System::Byte>^>(Temp_6));//newobj				void Root::T_x139::.ctor(array<System::Byte>^)
	IL_016f:            V_0=Temp_7;                                                 //stloc.0
	IL_0170:                                                                        //ldc.i4				0xa
	IL_0175:            V_4=10;                                                     //stloc				V_4
	IL_0179:            /*goto IL_0002;*/goto IL_017e;                              //br				IL_0002
	IL_017e:            goto IL_013b;                                               //br.s				IL_013b
	IL_0180:            Temp_10=Root::T_x159::T_x2::M_x1();                         //call				Reflector::CodeModel::IInstructionCollection^ Root::T_x159::T_x2::M_x1()
	IL_0185:            return Temp_10;                                             //ret

}
inline void Root::T_x159::M_x1(System::Boolean A_0)
//Reflector::CodeModel::IMethodBody^::set_InitializeLocalVariables by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IMethodBody^::set_MaxStack by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IInstruction^ Root::T_x159::M_x1(Root::T_x139^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Byte Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Int64 Temp_6 = 0;
	Root::T_x161^ Temp_7 = nullptr;
	Root::T_x153^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	array<System::Object^>^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::NotSupportedException^ Temp_14 = nullptr;
	System::Double Temp_15 = 0;
	System::Globalization::CultureInfo^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	array<System::Object^>^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::NotSupportedException^ Temp_22 = nullptr;
	Root::T_x161^ Temp_23 = nullptr;
	Root::T_x2^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	System::String^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	array<System::Int32>^ Temp_28 = nullptr;
	System::UInt16 Temp_29 = 0;
	System::SByte Temp_30 = 0;
	System::Int32 Temp_31 = 0;
	System::SByte Temp_32 = 0;
	System::Single Temp_33 = 0;
	System::Byte Temp_34 = 0;
	System::Int32 Temp_35 = 0;
	System::Int32 Temp_36 = 0;
	array<System::Int32>^ Temp_37 = nullptr;
	System::Byte Temp_38 = 0;
	System::Int32 Temp_39 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Object^ V_1 = nullptr;
	System::UInt16 V_2 = 0;
	System::SByte V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	array<System::Int32>^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	array<System::Int32>^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	array<System::Object^>^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	System::Int32 V_13 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_13=8;                                                     //stloc				V_13
	IL_0009:            goto IL_007c;                                               //br.s				IL_007c
	IL_000b:                                                                        //ldloc				V_12
	IL_000f:            switch(V_12){case 0:goto IL_03e9;case 1:goto IL_0133;case 2:goto IL_02a6;case 3:goto IL_035f;case 4:goto IL_0222;case 5:goto IL_015d;case 6:goto IL_02cf;case 7:goto IL_03ae;case 8:goto IL_020c;case 9:goto IL_00d2;case 10:goto IL_02ee;case 11:goto IL_044a;case 12:goto IL_046a;case 13:goto IL_01ed;case 14:goto IL_00e9;case 15:goto IL_00bf;case 16:goto IL_00a5;case 17:goto IL_03cd;case 18:goto IL_0146;case 19:goto IL_0337;case 20:goto IL_0194;case 21:goto IL_030d;case 22:goto IL_0109;case 23:goto IL_0282;case 24:goto IL_0170;case 25:goto IL_037e;};//switch				(IL_03e9,IL_0133,IL_02a6,IL_035f,IL_0222,IL_015d,IL_02cf,IL_03ae,IL_020c,IL_00d2,IL_02ee,IL_044a,IL_046a,IL_01ed,IL_00e9,IL_00bf,IL_00a5,IL_03cd,IL_0146,IL_0337,IL_0194,IL_030d,IL_0109,IL_0282,IL_0170,IL_037e)
	IL_007c:                                                                        //ldarg.1
	IL_007d:            Temp_0=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0082:            V_0=Temp_0;                                                 //stloc.0
	IL_0083:                                                                        //ldnull
	IL_0084:            V_1=safe_cast<System::Object^>(nullptr);                    //stloc.1
	IL_0085:                                                                        //ldarg.1
	IL_0086:            Temp_1=A_0->M_x15();                                        //callvirt				System::Byte Root::T_x139::M_x15()
	IL_008b:            V_2=safe_cast<System::UInt16>(Temp_1);                      //stloc.2
	IL_008c:                                                                        //ldc.i4.5
	IL_008d:                                                                        //dup
	IL_008e:                                                                        //dup
	IL_008f:                                                                        //ldc.i4.6
	IL_0090:                                                                        //add
	IL_0091:                                                                        //bgt				IL_008d
	IL_0096:                                                                        //pop
	IL_0097:                                                                        //ldc.i4				0x10
	IL_009c:            V_12=16;                                                    //stloc				V_12
	IL_00a0:            /*goto IL_000b;*/goto IL_00a5;                              //br				IL_000b
	IL_00a5:                                                                        //ldloc.2
	IL_00a6:                                                                        //conv.i4
	IL_00a7:                                                                        //ldc.i4				0xfe
	IL_00ac:            if(safe_cast<System::Int32>(V_2)!=254)goto IL_03d2;         //bne.un				IL_03d2
	IL_00b1:                                                                        //ldc.i4				0xf
	IL_00b6:            V_12=15;                                                    //stloc				V_12
	IL_00ba:            /*goto IL_000b;*/goto IL_00bf;                              //br				IL_000b
	IL_00bf:            goto IL_0287;                                               //br				IL_0287
	IL_00c4:                                                                        //ldc.i4				0x9
	IL_00c9:            V_12=9;                                                     //stloc				V_12
	IL_00cd:            /*goto IL_000b;*/goto IL_00d2;                              //br				IL_000b
	IL_00d2:                                                                        //ldloc.s				V_7
	IL_00d4:                                                                        //ldloc.s				V_5
	IL_00d6:            if(V_7<V_5)goto IL_0175;                                    //blt				IL_0175
	IL_00db:                                                                        //ldc.i4				0xe
	IL_00e0:            V_12=14;                                                    //stloc				V_12
	IL_00e4:            /*goto IL_000b;*/goto IL_00e9;                              //br				IL_000b
	IL_00e9:            goto IL_044f;                                               //br				IL_044f
	IL_00ee:                                                                        //ldarg.1
	IL_00ef:            Temp_29=A_0->M_x11();                                       //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_00f4:                                                                        //conv.i4
	IL_00f5:                                                                        //box				System::Int32
	IL_00fa:            V_1=safe_cast<System::Object^>(safe_cast<System::Int32>(Temp_29));//stloc.1
	IL_00fb:                                                                        //ldc.i4				0x16
	IL_0100:            V_12=22;                                                    //stloc				V_12
	IL_0104:            /*goto IL_000b;*/goto IL_0109;                              //br				IL_000b
	IL_0109:            goto IL_046f;                                               //br				IL_046f
	IL_010e:                                                                        //ldarg.1
	IL_010f:            Temp_2=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0114:            V_4=Temp_2;                                                 //stloc.s				V_4
	IL_0116:                                                                        //ldarg.1
	IL_0117:            Temp_3=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_011c:                                                                        //ldloc.s				V_4
	IL_011e:                                                                        //add
	IL_011f:                                                                        //box				System::Int32
	IL_0124:            V_1=safe_cast<System::Object^>((Temp_3 + V_4));             //stloc.1
	IL_0125:                                                                        //ldc.i4				0x1
	IL_012a:            V_12=1;                                                     //stloc				V_12
	IL_012e:            /*goto IL_000b;*/goto IL_0133;                              //br				IL_000b
	IL_0133:            goto IL_046f;                                               //br				IL_046f
	IL_0138:                                                                        //ldc.i4				0x12
	IL_013d:            V_12=18;                                                    //stloc				V_12
	IL_0141:            /*goto IL_000b;*/goto IL_0146;                              //br				IL_000b
	IL_0146:                                                                        //ldloc.s				V_9
	IL_0148:                                                                        //ldloc.s				V_5
	IL_014a:            if(V_9<V_5)goto IL_0312;                                    //blt				IL_0312
	IL_014f:                                                                        //ldc.i4				0x5
	IL_0154:            V_12=5;                                                     //stloc				V_12
	IL_0158:            /*goto IL_000b;*/goto IL_015d;                              //br				IL_000b
	IL_015d:            goto IL_0211;                                               //br				IL_0211
	IL_0162:                                                                        //ldc.i4				0x18
	IL_0167:            V_12=24;                                                    //stloc				V_12
	IL_016b:            /*goto IL_000b;*/goto IL_0170;                              //br				IL_000b
	IL_0170:            goto IL_0227;                                               //br				IL_0227
	IL_0175:                                                                        //ldloc.s				V_6
	IL_0177:                                                                        //ldloc.s				V_7
	IL_0179:                                                                        //ldarg.1
	IL_017a:            Temp_36=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_017f:            V_6[V_7]=Temp_36;                                           //stelem.i4
	IL_0180:                                                                        //ldloc.s				V_7
	IL_0182:                                                                        //ldc.i4.1
	IL_0183:                                                                        //add
	IL_0184:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_0186:                                                                        //ldc.i4				0x14
	IL_018b:            V_12=20;                                                    //stloc				V_12
	IL_018f:            /*goto IL_000b;*/goto IL_0194;                              //br				IL_000b
	IL_0194:            goto IL_00c4;                                               //br				IL_00c4
	IL_0199:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_019e:                                                                        //ldstr				L"\x7325\x4627\x4129\x422B\x412D\x472F\x5C31\x1433\x5935\x4837\x5F39\x4E3B\x5F3D\x2E3F\x2641\x6443\x3245\x3147\x3A49\x294B\x6E4D\x774F\x2951\x6453\x2B55\x7F57\x7459"
	IL_01a3:                                                                        //ldloc				V_13
	IL_01a7:            Temp_10=a(L"\x7325\x4627\x4129\x422B\x412D\x472F\x5C31\x1433\x5935\x4837\x5F39\x4E3B\x5F3D\x2E3F\x2641\x6443\x3245\x3147\x3A49\x294B\x6E4D\x774F\x2951\x6453\x2B55\x7F57\x7459",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ac:                                                                        //ldc.i4.1
	IL_01ad:            Temp_11=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_01b2:            V_11=Temp_11;                                               //stloc.s				V_11
	IL_01b4:                                                                        //ldloc.s				V_11
	IL_01b6:                                                                        //ldc.i4.0
	IL_01b7:                                                                        //ldstr				L"\x6F25\x4627\x4629\x452B\x402D\x552F\x6231\x5C33\x5F35"
	IL_01bc:                                                                        //ldloc				V_13
	IL_01c0:            Temp_12=a(L"\x6F25\x4627\x4629\x452B\x402D\x552F\x6231\x5C33\x5F35",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c5:            V_11[0]=safe_cast<System::Object^>(Temp_12);                //stelem.ref
	IL_01c6:                                                                        //ldloc.s				V_11
	IL_01c8:            Temp_13=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_9),Temp_10,V_11);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_01cd:            Temp_14=gcnew System::NotSupportedException(Temp_13);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_01d2:            throw Temp_14;                                              //throw
	IL_01d3:                                                                        //ldarg.1
	IL_01d4:            Temp_34=A_0->M_x15();                                       //callvirt				System::Byte Root::T_x139::M_x15()
	IL_01d9:                                                                        //box				System::Int32
	IL_01de:            V_1=safe_cast<System::Object^>(safe_cast<System::Int32>(Temp_34));//stloc.1
	IL_01df:                                                                        //ldc.i4				0xd
	IL_01e4:            V_12=13;                                                    //stloc				V_12
	IL_01e8:            /*goto IL_000b;*/goto IL_01ed;                              //br				IL_000b
	IL_01ed:            goto IL_046f;                                               //br				IL_046f
	IL_01f2:                                                                        //ldarg.1
	IL_01f3:            Temp_32=A_0->M_x4();                                        //callvirt				System::SByte Root::T_x139::M_x4()
	IL_01f8:                                                                        //box				System::SByte
	IL_01fd:            V_1=safe_cast<System::Object^>(Temp_32);                    //stloc.1
	IL_01fe:                                                                        //ldc.i4				0x8
	IL_0203:            V_12=8;                                                     //stloc				V_12
	IL_0207:            /*goto IL_000b;*/goto IL_020c;                              //br				IL_000b
	IL_020c:            goto IL_046f;                                               //br				IL_046f
	IL_0211:                                                                        //ldloc.s				V_8
	IL_0213:            V_1=safe_cast<System::Object^>(V_8);                        //stloc.1
	IL_0214:                                                                        //ldc.i4				0x4
	IL_0219:            V_12=4;                                                     //stloc				V_12
	IL_021d:            /*goto IL_000b;*/goto IL_0222;                              //br				IL_000b
	IL_0222:            goto IL_046f;                                               //br				IL_046f
	IL_0227:            Temp_16=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_022c:                                                                        //ldstr				L"\x7325\x4627\x4129\x422B\x412D\x472F\x5C31\x1433\x5935\x4837\x5F39\x4E3B\x5F3D\x2E3F\x2641\x6443\x3245\x3147\x3A49\x294B\x6E4D\x364F\x3D51\x2653\x7655\x3B57\x3559\x385B\x3B5D\x405F\x4561\x1F63\x5665\x1567\x4D69\x426B"
	IL_0231:                                                                        //ldloc				V_13
	IL_0235:            Temp_17=a(L"\x7325\x4627\x4129\x422B\x412D\x472F\x5C31\x1433\x5935\x4837\x5F39\x4E3B\x5F3D\x2E3F\x2641\x6443\x3245\x3147\x3A49\x294B\x6E4D\x364F\x3D51\x2653\x7655\x3B57\x3559\x385B\x3B5D\x405F\x4561\x1F63\x5665\x1567\x4D69\x426B",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023a:                                                                        //ldc.i4.1
	IL_023b:            Temp_18=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_0240:            V_11=Temp_18;                                               //stloc.s				V_11
	IL_0242:                                                                        //ldloc.s				V_11
	IL_0244:                                                                        //ldc.i4.0
	IL_0245:                                                                        //ldloca.s				V_2
	IL_0247:                                                                        //ldstr				L"\x5E25\x1C27"
	IL_024c:                                                                        //ldloc				V_13
	IL_0250:            Temp_19=a(L"\x5E25\x1C27",V_13);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0255:            Temp_20=V_2.ToString(Temp_19);                              //call				System::String^ System::UInt16::ToString(System::String^)
	IL_025a:            V_11[0]=safe_cast<System::Object^>(Temp_20);                //stelem.ref
	IL_025b:                                                                        //ldloc.s				V_11
	IL_025d:            Temp_21=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_16),Temp_17,V_11);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0262:            Temp_22=gcnew System::NotSupportedException(Temp_21);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0267:            throw Temp_22;                                              //throw
	IL_0268:                                                                        //ldarg.1
	IL_0269:            Temp_33=A_0->M_x18();                                       //callvirt				System::Single Root::T_x139::M_x18()
	IL_026e:                                                                        //box				System::Single
	IL_0273:            V_1=safe_cast<System::Object^>(Temp_33);                    //stloc.1
	IL_0274:                                                                        //ldc.i4				0x17
	IL_0279:            V_12=23;                                                    //stloc				V_12
	IL_027d:            /*goto IL_000b;*/goto IL_0282;                              //br				IL_000b
	IL_0282:            goto IL_046f;                                               //br				IL_046f
	IL_0287:                                                                        //ldarg.1
	IL_0288:            Temp_38=A_0->M_x15();                                       //callvirt				System::Byte Root::T_x139::M_x15()
	IL_028d:            V_2=safe_cast<System::UInt16>(Temp_38);                     //stloc.2
	IL_028e:                                                                        //ldloc.2
	IL_028f:                                                                        //conv.i4
	IL_0290:                                                                        //ldc.i4				0xfe00
	IL_0295:                                                                        //or
	IL_0296:                                                                        //conv.u2
	IL_0297:            V_2=safe_cast<System::UInt16>((safe_cast<System::Int32>(V_2) | 65024));//stloc.2
	IL_0298:                                                                        //ldc.i4				0x2
	IL_029d:            V_12=2;                                                     //stloc				V_12
	IL_02a1:            /*goto IL_000b;*/goto IL_02a6;                              //br				IL_000b
	IL_02a6:            goto IL_03d2;                                               //br				IL_03d2
	IL_02ab:                                                                        //ldarg.1
	IL_02ac:            Temp_30=A_0->M_x4();                                        //callvirt				System::SByte Root::T_x139::M_x4()
	IL_02b1:            V_3=Temp_30;                                                //stloc.3
	IL_02b2:                                                                        //ldarg.1
	IL_02b3:            Temp_31=A_0->M_x19();                                       //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_02b8:                                                                        //ldloc.3
	IL_02b9:                                                                        //conv.i4
	IL_02ba:                                                                        //add
	IL_02bb:                                                                        //box				System::Int32
	IL_02c0:            V_1=safe_cast<System::Object^>((Temp_31 + safe_cast<System::Int32>(V_3)));//stloc.1
	IL_02c1:                                                                        //ldc.i4				0x6
	IL_02c6:            V_12=6;                                                     //stloc				V_12
	IL_02ca:            /*goto IL_000b;*/goto IL_02cf;                              //br				IL_000b
	IL_02cf:            goto IL_046f;                                               //br				IL_046f
	IL_02d4:                                                                        //ldarg.1
	IL_02d5:            Temp_5=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_02da:                                                                        //box				System::Int32
	IL_02df:            V_1=safe_cast<System::Object^>(Temp_5);                     //stloc.1
	IL_02e0:                                                                        //ldc.i4				0xa
	IL_02e5:            V_12=10;                                                    //stloc				V_12
	IL_02e9:            /*goto IL_000b;*/goto IL_02ee;                              //br				IL_000b
	IL_02ee:            goto IL_046f;                                               //br				IL_046f
	IL_02f3:                                                                        //ldarg.1
	IL_02f4:            Temp_6=A_0->M_x12();                                        //callvirt				System::Int64 Root::T_x139::M_x12()
	IL_02f9:                                                                        //box				System::Int64
	IL_02fe:            V_1=safe_cast<System::Object^>(Temp_6);                     //stloc.1
	IL_02ff:                                                                        //ldc.i4				0x15
	IL_0304:            V_12=21;                                                    //stloc				V_12
	IL_0308:            /*goto IL_000b;*/goto IL_030d;                              //br				IL_000b
	IL_030d:            goto IL_046f;                                               //br				IL_046f
	IL_0312:                                                                        //ldloc.s				V_8
	IL_0314:                                                                        //ldloc.s				V_9
	IL_0316:                                                                        //ldarg.1
	IL_0317:            Temp_39=A_0->M_x19();                                       //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_031c:                                                                        //ldloc.s				V_6
	IL_031e:                                                                        //ldloc.s				V_9
	IL_0320:                                                                        //ldelem.i4
	IL_0321:                                                                        //add
	IL_0322:            V_8[V_9]=(Temp_39 + V_6[V_9]);                              //stelem.i4
	IL_0323:                                                                        //ldloc.s				V_9
	IL_0325:                                                                        //ldc.i4.1
	IL_0326:                                                                        //add
	IL_0327:            V_9=(V_9 + 1);                                              //stloc.s				V_9
	IL_0329:                                                                        //ldc.i4				0x13
	IL_032e:            V_12=19;                                                    //stloc				V_12
	IL_0332:            /*goto IL_000b;*/goto IL_0337;                              //br				IL_000b
	IL_0337:            goto IL_0138;                                               //br				IL_0138
	IL_033c:                                                                        //ldarg.1
	IL_033d:            Temp_27=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0342:            V_5=Temp_27;                                                //stloc.s				V_5
	IL_0344:                                                                        //ldloc.s				V_5
	IL_0346:                                                                        //conv.ovf.u4
	IL_0347:            Temp_28=gcnew array<System::Int32>(safe_cast<System::UInt32>(V_5));//newarr				System::Int32
	IL_034c:            V_6=Temp_28;                                                //stloc.s				V_6
	IL_034e:                                                                        //ldc.i4.0
	IL_034f:            V_7=0;                                                      //stloc.s				V_7
	IL_0351:                                                                        //ldc.i4				0x3
	IL_0356:            V_12=3;                                                     //stloc				V_12
	IL_035a:            /*goto IL_000b;*/goto IL_035f;                              //br				IL_000b
	IL_035f:            goto IL_00c4;                                               //br				IL_00c4
	IL_0364:                                                                        //ldarg.1
	IL_0365:            Temp_15=A_0->M_x7();                                        //callvirt				System::Double Root::T_x139::M_x7()
	IL_036a:                                                                        //box				System::Double
	IL_036f:            V_1=safe_cast<System::Object^>(Temp_15);                    //stloc.1
	IL_0370:                                                                        //ldc.i4				0x19
	IL_0375:            V_12=25;                                                    //stloc				V_12
	IL_0379:            /*goto IL_000b;*/goto IL_037e;                              //br				IL_000b
	IL_037e:            goto IL_046f;                                               //br				IL_046f
	IL_0383:                                                                        //ldarg.0
	IL_0384:            Temp_23=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0389:            Temp_24=Temp_23->M_x11();                                   //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_038e:                                                                        //ldarg.1
	IL_038f:            Temp_25=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0394:                                                                        //ldc.i4				0xffffff
	IL_0399:                                                                        //and
	IL_039a:            Temp_26=Temp_24->M_x7((Temp_25 & 16777215));                //callvirt				System::String^ Root::T_x2::M_x7(System::Int32)
	IL_039f:            V_1=safe_cast<System::Object^>(Temp_26);                    //stloc.1
	IL_03a0:                                                                        //ldc.i4				0x7
	IL_03a5:            V_12=7;                                                     //stloc				V_12
	IL_03a9:            /*goto IL_000b;*/goto IL_03ae;                              //br				IL_000b
	IL_03ae:            goto IL_046f;                                               //br				IL_046f
	IL_03b3:                                                                        //ldarg.1
	IL_03b4:            Temp_4=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_03b9:                                                                        //box				System::Int32
	IL_03be:            V_1=safe_cast<System::Object^>(Temp_4);                     //stloc.1
	IL_03bf:                                                                        //ldc.i4				0x11
	IL_03c4:            V_12=17;                                                    //stloc				V_12
	IL_03c8:            /*goto IL_000b;*/goto IL_03cd;                              //br				IL_000b
	IL_03cd:            goto IL_046f;                                               //br				IL_046f
	IL_03d2:                                                                        //ldloc.2
	IL_03d3:                                                                        //conv.i4
	IL_03d4:            Temp_35=Root::T_x164::M_x1(safe_cast<System::Int32>(V_2));  //call				System::Int32 Root::T_x164::M_x1(System::Int32)
	IL_03d9:            V_10=Temp_35;                                               //stloc.s				V_10
	IL_03db:                                                                        //ldc.i4				0x0
	IL_03e0:            V_12=0;                                                     //stloc				V_12
	IL_03e4:            /*goto IL_000b;*/goto IL_03e9;                              //br				IL_000b
	IL_03e9:                                                                        //ldloc.s				V_10
	IL_03eb:            switch(V_10){case 0:goto IL_010e;case 1:goto IL_03b3;case 2:goto IL_02d4;case 3:goto IL_02f3;case 4:goto IL_03b3;case 5:goto IL_046f;case 6:goto IL_0199;case 7:goto IL_0364;case 8:goto IL_0227;case 9:goto IL_03b3;case 10:goto IL_0383;case 11:goto IL_033c;case 12:goto IL_03b3;case 13:goto IL_03b3;case 14:goto IL_00ee;case 15:goto IL_02ab;case 16:goto IL_01f2;case 17:goto IL_0268;case 18:goto IL_01d3;};//switch				(IL_010e,IL_03b3,IL_02d4,IL_02f3,IL_03b3,IL_046f,IL_0199,IL_0364,IL_0227,IL_03b3,IL_0383,IL_033c,IL_03b3,IL_03b3,IL_00ee,IL_02ab,IL_01f2,IL_0268,IL_01d3)
	IL_043c:                                                                        //ldc.i4				0xb
	IL_0441:            V_12=11;                                                    //stloc				V_12
	IL_0445:            /*goto IL_000b;*/goto IL_044a;                              //br				IL_000b
	IL_044a:            goto IL_0162;                                               //br				IL_0162
	IL_044f:                                                                        //ldloc.s				V_5
	IL_0451:                                                                        //conv.ovf.u4
	IL_0452:            Temp_37=gcnew array<System::Int32>(safe_cast<System::UInt32>(V_5));//newarr				System::Int32
	IL_0457:            V_8=Temp_37;                                                //stloc.s				V_8
	IL_0459:                                                                        //ldc.i4.0
	IL_045a:            V_9=0;                                                      //stloc.s				V_9
	IL_045c:                                                                        //ldc.i4				0xc
	IL_0461:            V_12=12;                                                    //stloc				V_12
	IL_0465:            /*goto IL_000b;*/goto IL_046a;                              //br				IL_000b
	IL_046a:            goto IL_0138;                                               //br				IL_0138
	IL_046f:                                                                        //ldarg.0
	IL_0470:            Temp_7=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0475:                                                                        //ldloc.0
	IL_0476:                                                                        //ldloc.2
	IL_0477:                                                                        //conv.i4
	IL_0478:                                                                        //ldloc.1
	IL_0479:            Temp_8=gcnew Root::T_x153(Temp_7,V_0,safe_cast<System::Int32>(V_2),V_1);//newobj				void Root::T_x153::.ctor(Root::T_x161^,System::Int32,System::Int32,System::Object^)
	IL_047e:            return safe_cast<Reflector::CodeModel::IInstruction^>(Temp_8);//ret

}
inline Reflector::CodeModel::IVariableDeclarationCollection^ Root::T_x159::M_x12()
//Reflector::CodeModel::IMethodBody^::get_LocalVariables by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclarationCollection^ Temp_1 = nullptr;
	Root::T_x161^ Temp_2 = nullptr;
	Root::T_x2^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Root::T_x161^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	Root::T_x159::T_x13^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	Root::T_x161^ Temp_9 = nullptr;
	Root::T_x2^ Temp_10 = nullptr;
	Root::T_x161^ Temp_11 = nullptr;
	Reflector::CodeModel::IType^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Root::T_x139^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Root::T_x161^ Temp_16 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	array<System::String^>^ Temp_19 = nullptr;
	Root::T_x161^ Temp_20 = nullptr;
	Root::T_x2^ Temp_21 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_22 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_23 = nullptr;
	System::Boolean Temp_24 = false;
	System::Int32 Temp_25 = 0;
	Root::T_x159::T_x12^ Temp_26 = nullptr;
	Root::T_x161^ Temp_27 = nullptr;
	Reflector::CodeModel::IType^ Temp_28 = nullptr;
	Reflector::CodeModel::IType^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	Root::T_x159::T_x8^ Temp_31 = nullptr;
	array<Root::T_x159::T_x12^>^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Globalization::CultureInfo^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::NotSupportedException^ Temp_39 = nullptr;
	System::Int32 Temp_40 = 0;
	System::Int32 Temp_41 = 0;
	Root::T_x161^ Temp_42 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_43 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	//local variables.
	Root::T_x160^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Root::T_x2^ V_2 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	Root::T_x139^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	array<System::String^>^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	Root::T_x159::T_x8^ V_12 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ V_13 = nullptr;
	System::String^ V_14 = nullptr;
	System::Int32 V_15 = 0;
	Root::T_x159::T_x13^ V_16 = nullptr;
	System::Int32 V_17 = 0;
	System::Boolean V_18 = false;
	System::Int32 V_19 = 0;
	System::Int32 V_20 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_20=1;                                                     //stloc				V_20
	IL_0009:            goto IL_0064;                                               //br.s				IL_0064
	IL_000b:                                                                        //ldloc				V_19
	IL_000f:            switch(V_19){case 0:goto IL_0335;case 1:goto IL_0265;case 2:goto IL_0108;case 3:goto IL_039d;case 4:goto IL_02fa;case 5:goto IL_00b2;case 6:goto IL_01be;case 7:goto IL_0363;case 8:goto IL_02c0;case 9:goto IL_00de;case 10:goto IL_015c;case 11:goto IL_028f;case 12:goto IL_007b;case 13:goto IL_02ab;case 14:goto IL_024a;case 15:goto IL_034f;case 16:goto IL_01d4;case 17:goto IL_008f;case 18:goto IL_0172;case 19:goto IL_0278;};//switch				(IL_0335,IL_0265,IL_0108,IL_039d,IL_02fa,IL_00b2,IL_01be,IL_0363,IL_02c0,IL_00de,IL_015c,IL_028f,IL_007b,IL_02ab,IL_024a,IL_034f,IL_01d4,IL_008f,IL_0172,IL_0278)
	IL_0064:                                                                        //ldarg.0
	IL_0065:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_006a:                                                                        //isinst				Root::T_x160
	IL_006f:            V_0=dynamic_cast<Root::T_x160^>(Temp_0);                    //stloc.0
	IL_0070:                                                                        //ldc.i4				0xc
	IL_0075:            V_19=12;                                                    //stloc				V_19
	IL_0079:            /*goto IL_000b;*/goto IL_007b;                              //br.s				IL_000b
	IL_007b:                                                                        //ldloc.0
	IL_007c:            if(V_0==nullptr)goto IL_03a2;                               //brfalse				IL_03a2
	IL_0081:                                                                        //ldc.i4				0x11
	IL_0086:            V_19=17;                                                    //stloc				V_19
	IL_008a:            /*goto IL_000b;*/goto IL_008f;                              //br				IL_000b
	IL_008f:            goto IL_033a;                                               //br				IL_033a
	IL_0094:                                                                        //ldloc.s				V_13
	IL_0096:                                                                        //ldloc.s				V_14
	IL_0098:                                                                        //ldloc.s				V_15
	IL_009a:            Temp_7=gcnew Root::T_x159::T_x13(V_13,V_14,V_15);           //newobj				void Root::T_x159::T_x13::.ctor(array<Reflector::CodeModel::IVariableDeclaration^>^,System::String^,System::Int32)
	IL_009f:            V_16=Temp_7;                                                //stloc.s				V_16
	IL_00a1:                                                                        //ldc.i4.0
	IL_00a2:            V_17=0;                                                     //stloc.s				V_17
	IL_00a4:                                                                        //ldc.i4				0x5
	IL_00a9:            V_19=5;                                                     //stloc				V_19
	IL_00ad:            /*goto IL_000b;*/goto IL_00b2;                              //br				IL_000b
	IL_00b2:            goto IL_014e;                                               //br				IL_014e
	IL_00b7:                                                                        //ldloc.s				V_9
	IL_00b9:            Temp_31=gcnew Root::T_x159::T_x8(V_9);                      //newobj				void Root::T_x159::T_x8::.ctor(array<System::String^>^)
	IL_00be:            V_12=Temp_31;                                               //stloc.s				V_12
	IL_00c0:                                                                        //ldloc.s				V_7
	IL_00c2:                                                                        //conv.ovf.u4
	IL_00c3:            Temp_32=gcnew array<Root::T_x159::T_x12^>(safe_cast<System::UInt32>(V_7));//newarr				Root::T_x159::T_x12
	IL_00c8:            V_13=safe_cast<array<Reflector::CodeModel::IVariableDeclaration^>^>(Temp_32);//stloc.s				V_13
	IL_00ca:                                                                        //ldnull
	IL_00cb:            V_14=safe_cast<System::String^>(nullptr);                   //stloc.s				V_14
	IL_00cd:                                                                        //ldc.i4.m1
	IL_00ce:            V_15=-1;                                                    //stloc.s				V_15
	IL_00d0:                                                                        //ldc.i4				0x9
	IL_00d5:            V_19=9;                                                     //stloc				V_19
	IL_00d9:            /*goto IL_000b;*/goto IL_00de;                              //br				IL_000b
	IL_00de:                                                                        //ldarg.0
	IL_00df:            Temp_20=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_00e4:            Temp_21=Temp_20->M_x11();                                   //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_00e9:            Temp_22=Temp_21->M_x10();                                   //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x2::M_x10()
	IL_00ee:            Temp_23=Temp_22->AssemblyManager;                           //callvirt				Reflector::CodeModel::IAssemblyManager^ Reflector::CodeModel::IAssembly::get_AssemblyManager()
	IL_00f3:            Temp_24=Temp_23->Symbols;                                   //callvirt				System::Boolean Reflector::CodeModel::IAssemblyManager::get_Symbols()
	IL_00f8:            if(!Temp_24)goto IL_0094;                                   //brfalse.s				IL_0094
	IL_00fa:                                                                        //ldc.i4				0x2
	IL_00ff:            V_19=2;                                                     //stloc				V_19
	IL_0103:            /*goto IL_000b;*/goto IL_0108;                              //br				IL_000b
	IL_0108:            goto IL_02cd;                                               //br				IL_02cd
	IL_010d:                                                                        //ldstr				L"\x561E\x4F20\x5522\x4424\x4B26\x4028\x4F2A\x0D2C\x432E\x5E30\x5032\x5434\x5B36\x1938\x4D3A\x5C3C\x4D3E\x2840\x2242\x2744\x2B46\x2C48\x6B4A\x3E4C\x264E\x3650\x3D52\x3454\x2356\x2C58\x295A\x385C\x7F5E"
	IL_0112:                                                                        //ldloc				V_20
	IL_0116:            Temp_33=a(L"\x561E\x4F20\x5522\x4424\x4B26\x4028\x4F2A\x0D2C\x432E\x5E30\x5032\x5434\x5B36\x1938\x4D3A\x5C3C\x4D3E\x2840\x2242\x2744\x2B46\x2C48\x6B4A\x3E4C\x264E\x3650\x3D52\x3454\x2356\x2C58\x295A\x385C\x7F5E",V_20);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011b:                                                                        //ldloca.s				V_6
	IL_011d:                                                                        //ldstr				L"\x471E\x1320"
	IL_0122:                                                                        //ldloc				V_20
	IL_0126:            Temp_34=a(L"\x471E\x1320",V_20);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012b:            Temp_35=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0130:            Temp_36=V_6.ToString(Temp_34,safe_cast<System::IFormatProvider^>(Temp_35));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_0135:                                                                        //ldstr				L"\x311E"
	IL_013a:                                                                        //ldloc				V_20
	IL_013e:            Temp_37=a(L"\x311E",V_20);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0143:            Temp_38=System::String::Concat(Temp_33,Temp_36,Temp_37);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0148:            Temp_39=gcnew System::NotSupportedException(Temp_38);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_014d:            throw Temp_39;                                              //throw
	IL_014e:                                                                        //ldc.i4				0xa
	IL_0153:            V_19=10;                                                    //stloc				V_19
	IL_0157:            /*goto IL_000b;*/goto IL_015c;                              //br				IL_000b
	IL_015c:                                                                        //ldloc.s				V_17
	IL_015e:                                                                        //ldloc.s				V_13
	IL_0160:            Temp_25=V_13->Length;                                       //ldlen
	IL_0161:                                                                        //conv.i4
	IL_0162:            if(V_17<Temp_25)goto IL_01d9;                               //blt.s				IL_01d9
	IL_0164:                                                                        //ldc.i4				0x12
	IL_0169:            V_19=18;                                                    //stloc				V_19
	IL_016d:            /*goto IL_000b;*/goto IL_0172;                              //br				IL_000b
	IL_0172:            goto IL_02c2;                                               //br				IL_02c2
	IL_0177:                                                                        //ldarg.0
	IL_0178:            Temp_9=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_017d:            Temp_10=Temp_9->M_x11();                                    //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_0182:            V_2=Temp_10;                                                //stloc.2
	IL_0183:                                                                        //ldarg.0
	IL_0184:            Temp_11=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0189:            Temp_12=Temp_11->DeclaringType;                             //callvirt				Reflector::CodeModel::IType^ Root::T_x161::get_DeclaringType()
	IL_018e:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0193:            V_3=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_12);//stloc.3
	IL_0194:                                                                        //ldloc.2
	IL_0195:                                                                        //ldloc.1
	IL_0196:            Temp_13=V_2->M_x16(V_1);                                    //callvirt				System::Int32 Root::T_x2::M_x16(System::Int32)
	IL_019b:            V_4=Temp_13;                                                //stloc.s				V_4
	IL_019d:                                                                        //ldloc.2
	IL_019e:                                                                        //ldloc.s				V_4
	IL_01a0:            Temp_14=V_2->M_x14(V_4);                                    //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_01a5:            V_5=Temp_14;                                                //stloc.s				V_5
	IL_01a7:                                                                        //ldloc.s				V_5
	IL_01a9:            Temp_15=V_5->M_x6();                                        //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_01ae:            V_6=Temp_15;                                                //stloc.s				V_6
	IL_01b0:                                                                        //ldc.i4				0x6
	IL_01b5:            V_19=6;                                                     //stloc				V_19
	IL_01b9:            /*goto IL_000b;*/goto IL_01be;                              //br				IL_000b
	IL_01be:                                                                        //ldloc.s				V_6
	IL_01c0:                                                                        //ldc.i4.7
	IL_01c1:            if(V_6==7)goto IL_0294;                                     //beq				IL_0294
	IL_01c6:                                                                        //ldc.i4				0x10
	IL_01cb:            V_19=16;                                                    //stloc				V_19
	IL_01cf:            /*goto IL_000b;*/goto IL_01d4;                              //br				IL_000b
	IL_01d4:            goto IL_010d;                                               //br				IL_010d
	IL_01d9:                                                                        //ldc.i4.0
	IL_01da:            V_18=false;                                                 //stloc.s				V_18
	IL_01dc:                                                                        //ldloc.s				V_13
	IL_01de:                                                                        //ldloc.s				V_17
	IL_01e0:                                                                        //ldloc.s				V_16
	IL_01e2:            Temp_26=gcnew Root::T_x159::T_x12(V_16);                    //newobj				void Root::T_x159::T_x12::.ctor(Root::T_x159::T_x13^)
	IL_01e7:            V_13[V_17]=safe_cast<Reflector::CodeModel::IVariableDeclaration^>(Temp_26);//stelem.ref
	IL_01e8:                                                                        //ldloc.s				V_13
	IL_01ea:                                                                        //ldloc.s				V_17
	IL_01ec:                                                                        //ldelem.ref
	IL_01ed:                                                                        //ldloc.2
	IL_01ee:                                                                        //ldloc.s				V_5
	IL_01f0:                                                                        //ldloc.3
	IL_01f1:                                                                        //ldarg.0
	IL_01f2:            Temp_27=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_01f7:                                                                        //ldloca.s				V_18
	IL_01f9:            Temp_28=V_2->M_x1(V_5,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_3),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_27),safe_cast<System::Boolean%>(V_18));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x1(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^,System::Boolean%)
	IL_01fe:            V_13[V_17]->VariableType=Temp_28;                           //callvirt				void Reflector::CodeModel::IVariableDeclaration::set_VariableType(Reflector::CodeModel::IType^)
	IL_0203:                                                                        //ldloc.s				V_13
	IL_0205:                                                                        //ldloc.s				V_17
	IL_0207:                                                                        //ldelem.ref
	IL_0208:                                                                        //ldloc.s				V_18
	IL_020a:            V_13[V_17]->Pinned=V_18;                                    //callvirt				void Reflector::CodeModel::IVariableDeclaration::set_Pinned(System::Boolean)
	IL_020f:                                                                        //ldloc.s				V_13
	IL_0211:                                                                        //ldloc.s				V_17
	IL_0213:                                                                        //ldelem.ref
	IL_0214:                                                                        //ldloc.s				V_12
	IL_0216:                                                                        //ldloc.s				V_13
	IL_0218:                                                                        //ldloc.s				V_17
	IL_021a:                                                                        //ldelem.ref
	IL_021b:            Temp_29=V_13[V_17]->VariableType;                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_0220:            Temp_30=V_12->M_x2(Temp_29);                                //callvirt				System::String^ Root::T_x159::T_x8::M_x2(Reflector::CodeModel::IType^)
	IL_0225:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_13[V_17])->Name=Temp_30;//callvirt				void Reflector::CodeModel::IVariableReference::set_Name(System::String^)
	IL_022a:                                                                        //ldloc.s				V_13
	IL_022c:                                                                        //ldloc.s				V_17
	IL_022e:                                                                        //ldelem.ref
	IL_022f:                                                                        //ldloc.s				V_17
	IL_0231:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_13[V_17])->Identifier=V_17;//callvirt				void Reflector::CodeModel::IVariableReference::set_Identifier(System::Int32)
	IL_0236:                                                                        //ldloc.s				V_17
	IL_0238:                                                                        //ldc.i4.1
	IL_0239:                                                                        //add
	IL_023a:            V_17=(V_17 + 1);                                            //stloc.s				V_17
	IL_023c:                                                                        //ldc.i4				0xe
	IL_0241:            V_19=14;                                                    //stloc				V_19
	IL_0245:            /*goto IL_000b;*/goto IL_024a;                              //br				IL_000b
	IL_024a:            goto IL_014e;                                               //br				IL_014e
	IL_024f:                                                                        //ldloc.2
	IL_0250:                                                                        //ldloc.s				V_5
	IL_0252:            V_2->M_x12(V_5);                                            //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_0257:                                                                        //ldc.i4				0x1
	IL_025c:            V_19=1;                                                     //stloc				V_19
	IL_0260:            /*goto IL_000b;*/goto IL_0265;                              //br				IL_000b
	IL_0265:            goto IL_03a2;                                               //br				IL_03a2
	IL_026a:                                                                        //ldc.i4				0x13
	IL_026f:            V_19=19;                                                    //stloc				V_19
	IL_0273:            /*goto IL_000b;*/goto IL_0278;                              //br				IL_000b
	IL_0278:                                                                        //ldloc.s				V_11
	IL_027a:                                                                        //ldloc.s				V_8
	IL_027c:            if(V_11<V_8)goto IL_0368;                                   //blt				IL_0368
	IL_0281:                                                                        //ldc.i4				0xb
	IL_0286:            V_19=11;                                                    //stloc				V_19
	IL_028a:            /*goto IL_000b;*/goto IL_028f;                              //br				IL_000b
	IL_028f:            goto IL_00b7;                                               //br				IL_00b7
	IL_0294:                                                                        //ldloc.s				V_5
	IL_0296:            Temp_8=V_5->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_029b:            V_7=Temp_8;                                                 //stloc.s				V_7
	IL_029d:                                                                        //ldc.i4				0xd
	IL_02a2:            V_19=13;                                                    //stloc				V_19
	IL_02a6:            /*goto IL_000b;*/goto IL_02ab;                              //br				IL_000b
	IL_02ab:                                                                        //ldloc.s				V_7
	IL_02ad:            if(V_7==0)goto IL_024f;                                     //brfalse				IL_024f
	IL_02b2:                                                                        //ldc.i4				0x8
	IL_02b7:            V_19=8;                                                     //stloc				V_19
	IL_02bb:            /*goto IL_000b;*/goto IL_02c0;                              //br				IL_000b
	IL_02c0:            goto IL_02ff;                                               //br.s				IL_02ff
	IL_02c2:                                                                        //ldloc.2
	IL_02c3:                                                                        //ldloc.s				V_5
	IL_02c5:            V_2->M_x12(V_5);                                            //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_02ca:                                                                        //ldloc.s				V_16
	IL_02cc:            return safe_cast<Reflector::CodeModel::IVariableDeclarationCollection^>(V_16);//ret
	IL_02cd:                                                                        //ldarg.0
	IL_02ce:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_02d3:            Temp_3=Temp_2->M_x11();                                     //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_02d8:            Temp_4=Temp_3->M_x55();                                     //callvirt				System::String^ Root::T_x2::M_x55()
	IL_02dd:            V_14=Temp_4;                                                //stloc.s				V_14
	IL_02df:                                                                        //ldarg.0
	IL_02e0:            Temp_5=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_02e5:            Temp_6=Temp_5->M_x9();                                      //callvirt				System::Int32 Root::T_x161::M_x9()
	IL_02ea:            V_15=Temp_6;                                                //stloc.s				V_15
	IL_02ec:                                                                        //ldc.i4				0x4
	IL_02f1:            V_19=4;                                                     //stloc				V_19
	IL_02f5:            /*goto IL_000b;*/goto IL_02fa;                              //br				IL_000b
	IL_02fa:            goto IL_0094;                                               //br				IL_0094
	IL_02ff:                                                                        //ldarg.0
	IL_0300:            Temp_16=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0305:            Temp_17=Temp_16->Parameters;                                //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x161::get_Parameters()
	IL_030a:            Temp_18=safe_cast<System::Collections::ICollection^>(Temp_17)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_030f:            V_8=Temp_18;                                                //stloc.s				V_8
	IL_0311:                                                                        //ldloc.s				V_8
	IL_0313:                                                                        //ldloc.s				V_7
	IL_0315:                                                                        //add
	IL_0316:                                                                        //conv.ovf.u4
	IL_0317:            Temp_19=gcnew array<System::String^>(safe_cast<System::UInt32>((V_8 + V_7)));//newarr				System::String
	IL_031c:            V_9=Temp_19;                                                //stloc.s				V_9
	IL_031e:                                                                        //ldc.i4.0
	IL_031f:            V_10=0;                                                     //stloc.s				V_10
	IL_0321:                                                                        //ldc.i4.0
	IL_0322:            V_11=0;                                                     //stloc.s				V_11
	IL_0324:            goto IL_0327;                                               //br.s				IL_0327
	IL_0326:                                                                        //break
	IL_0327:                                                                        //ldc.i4				0x0
	IL_032c:            V_19=0;                                                     //stloc				V_19
	IL_0330:            /*goto IL_000b;*/goto IL_0335;                              //br				IL_000b
	IL_0335:            goto IL_026a;                                               //br				IL_026a
	IL_033a:                                                                        //ldloc.0
	IL_033b:            Temp_40=V_0->M_x2();                                        //callvirt				System::Int32 Root::T_x160::M_x2()
	IL_0340:            V_1=Temp_40;                                                //stloc.1
	IL_0341:                                                                        //ldc.i4				0xf
	IL_0346:            V_19=15;                                                    //stloc				V_19
	IL_034a:            /*goto IL_000b;*/goto IL_034f;                              //br				IL_000b
	IL_034f:                                                                        //ldloc.1
	IL_0350:            if(V_1==0)goto IL_03a2;                                     //brfalse				IL_03a2
	IL_0355:                                                                        //ldc.i4				0x7
	IL_035a:            V_19=7;                                                     //stloc				V_19
	IL_035e:            /*goto IL_000b;*/goto IL_0363;                              //br				IL_000b
	IL_0363:            goto IL_0177;                                               //br				IL_0177
	IL_0368:                                                                        //ldloc.s				V_9
	IL_036a:            Temp_41=V_10;                                               //ldloc.s				V_10
	IL_036c:                                                                        //dup
	IL_036d:                                                                        //ldc.i4.1
	IL_036e:                                                                        //add
	IL_036f:            V_10=(Temp_41 + 1);                                         //stloc.s				V_10
	IL_0371:                                                                        //ldarg.0
	IL_0372:            Temp_42=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0377:            Temp_43=Temp_42->Parameters;                                //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x161::get_Parameters()
	IL_037c:                                                                        //ldloc.s				V_11
	IL_037e:            Temp_44=Temp_43[V_11];                                      //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0383:            Temp_45=safe_cast<Reflector::CodeModel::IParameterReference^>(Temp_44)->Name;//callvirt				System::String^ Reflector::CodeModel::IParameterReference::get_Name()
	IL_0388:            V_9[Temp_41]=Temp_45;                                       //stelem.ref
	IL_0389:                                                                        //ldloc.s				V_11
	IL_038b:                                                                        //ldc.i4.1
	IL_038c:                                                                        //add
	IL_038d:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_038f:                                                                        //ldc.i4				0x3
	IL_0394:            V_19=3;                                                     //stloc				V_19
	IL_0398:            /*goto IL_000b;*/goto IL_039d;                              //br				IL_000b
	IL_039d:            goto IL_026a;                                               //br				IL_026a
	IL_03a2:            Temp_1=Root::T_x159::T_x13::M_x1();                         //call				Reflector::CodeModel::IVariableDeclarationCollection^ Root::T_x159::T_x13::M_x1()
	IL_03a7:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IExceptionHandlerCollection^ Root::T_x159::M_x13()
//Reflector::CodeModel::IMethodBody^::get_ExceptionHandlers by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	Root::T_x159::T_x1^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_3 = nullptr;
	Reflector::CodeModel::IExceptionHandlerCollection^ Temp_4 = nullptr;
	System::Byte Temp_5 = 0;
	array<System::Byte>^ Temp_6 = nullptr;
	Root::T_x139^ Temp_7 = nullptr;
	Root::T_x161^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	Root::T_x161^ Temp_10 = nullptr;
	Root::T_x2^ Temp_11 = nullptr;
	Root::T_x161^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	Reflector::CodeModel::Memory::ExceptionHandler^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Reflector::CodeModel::Memory::ExceptionHandler^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	Reflector::CodeModel::Memory::ExceptionHandler^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::String^ Temp_20 = nullptr;
	System::NotSupportedException^ Temp_21 = nullptr;
	Reflector::CodeModel::Memory::ExceptionHandler^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	System::Byte Temp_24 = 0;
	System::Int16 Temp_25 = 0;
	System::Int16 Temp_26 = 0;
	System::Byte Temp_27 = 0;
	System::Int16 Temp_28 = 0;
	System::Byte Temp_29 = 0;
	System::Int32 Temp_30 = 0;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_31 = nullptr;
	array<System::Byte>^ Temp_32 = nullptr;
	array<System::Byte>^ Temp_33 = nullptr;
	System::Int32 Temp_34 = 0;
	System::Int32 Temp_35 = 0;
	System::Int32 Temp_36 = 0;
	System::Int32 Temp_37 = 0;
	System::Int32 Temp_38 = 0;
	System::Int32 Temp_39 = 0;
	System::Int32 Temp_40 = 0;
	//local variables.
	Root::T_x160^ V_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ V_1 = nullptr;
	Root::T_x139^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Byte V_4 = 0;
	System::Boolean V_5 = false;
	System::Int32 V_6 = 0;
	array<System::Byte>^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	array<Reflector::CodeModel::IExceptionHandler^>^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	System::Int32 V_13 = 0;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	System::Int32 V_16 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_17 = nullptr;
	Reflector::CodeModel::IType^ V_18 = nullptr;
	Reflector::CodeModel::IExceptionHandler^ V_19 = nullptr;
	Reflector::CodeModel::IExceptionHandler^ V_20 = nullptr;
	Reflector::CodeModel::IExceptionHandler^ V_21 = nullptr;
	Reflector::CodeModel::IExceptionHandler^ V_22 = nullptr;
	System::Int32 V_23 = 0;
	System::Int32 V_24 = 0;
	System::Int32 V_25 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_25=5;                                                     //stloc				V_25
	IL_0009:            goto IL_00b7;                                               //br				IL_00b7
	IL_000e:                                                                        //ldloc				V_24
	IL_0012:            switch(V_24){case 0:goto IL_02f7;case 1:goto IL_062b;case 2:goto IL_034b;case 3:goto IL_03bb;case 4:goto IL_0296;case 5:goto IL_02c1;case 6:goto IL_037c;case 7:goto IL_0187;case 8:goto IL_04ea;case 9:goto IL_05fd;case 10:goto IL_05bb;case 11:goto IL_0231;case 12:goto IL_01b7;case 13:goto IL_00d1;case 14:goto IL_019e;case 15:goto IL_04ad;case 16:goto IL_0323;case 17:goto IL_05d4;case 18:goto IL_0435;case 19:goto IL_0535;case 20:goto IL_0512;case 21:goto IL_03a4;case 22:goto IL_0448;case 23:goto IL_02a9;case 24:goto IL_04d6;case 25:goto IL_0498;case 26:goto IL_0253;case 27:goto IL_0610;case 28:goto IL_045b;case 29:goto IL_0174;case 30:goto IL_02d4;case 31:goto IL_01d9;case 32:goto IL_040a;case 33:goto IL_046e;case 34:goto IL_0134;case 35:goto IL_00e5;case 36:goto IL_038c;case 37:goto IL_030a;case 38:goto IL_04fd;case 39:goto IL_0336;};//switch				(IL_02f7,IL_062b,IL_034b,IL_03bb,IL_0296,IL_02c1,IL_037c,IL_0187,IL_04ea,IL_05fd,IL_05bb,IL_0231,IL_01b7,IL_00d1,IL_019e,IL_04ad,IL_0323,IL_05d4,IL_0435,IL_0535,IL_0512,IL_03a4,IL_0448,IL_02a9,IL_04d6,IL_0498,IL_0253,IL_0610,IL_045b,IL_0174,IL_02d4,IL_01d9,IL_040a,IL_046e,IL_0134,IL_00e5,IL_038c,IL_030a,IL_04fd,IL_0336)
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_00bd:                                                                        //isinst				Root::T_x160
	IL_00c2:            V_0=dynamic_cast<Root::T_x160^>(Temp_0);                    //stloc.0
	IL_00c3:                                                                        //ldc.i4				0xd
	IL_00c8:            V_24=13;                                                    //stloc				V_24
	IL_00cc:            /*goto IL_000e;*/goto IL_00d1;                              //br				IL_000e
	IL_00d1:                                                                        //ldloc.0
	IL_00d2:            if(V_0==nullptr)goto IL_0630;                               //brfalse				IL_0630
	IL_00d7:                                                                        //ldc.i4				0x23
	IL_00dc:            V_24=35;                                                    //stloc				V_24
	IL_00e0:            /*goto IL_000e;*/goto IL_00e5;                              //br				IL_000e
	IL_00e5:            goto IL_02fc;                                               //br				IL_02fc
	IL_00ea:            Temp_18=gcnew Reflector::CodeModel::Memory::ExceptionHandler();//newobj				void Reflector::CodeModel::Memory::ExceptionHandler::.ctor()
	IL_00ef:            V_21=safe_cast<Reflector::CodeModel::IExceptionHandler^>(Temp_18);//stloc.s				V_21
	IL_00f1:                                                                        //ldloc.s				V_21
	IL_00f3:                                                                        //ldc.i4.0
	IL_00f4:            V_21->Type=safe_cast<Reflector::CodeModel::ExceptionHandlerType>(0);//callvirt				void Reflector::CodeModel::IExceptionHandler::set_Type(Reflector::CodeModel::ExceptionHandlerType)
	IL_00f9:                                                                        //ldloc.s				V_21
	IL_00fb:                                                                        //ldloc.s				V_12
	IL_00fd:            V_21->TryOffset=V_12;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryOffset(System::Int32)
	IL_0102:                                                                        //ldloc.s				V_21
	IL_0104:                                                                        //ldloc.s				V_13
	IL_0106:            V_21->TryLength=V_13;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryLength(System::Int32)
	IL_010b:                                                                        //ldloc.s				V_21
	IL_010d:                                                                        //ldloc.s				V_14
	IL_010f:            V_21->HandlerOffset=V_14;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerOffset(System::Int32)
	IL_0114:                                                                        //ldloc.s				V_21
	IL_0116:                                                                        //ldloc.s				V_15
	IL_0118:            V_21->HandlerLength=V_15;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerLength(System::Int32)
	IL_011d:                                                                        //ldloc.1
	IL_011e:            Temp_19=V_3;                                                //ldloc.3
	IL_011f:                                                                        //dup
	IL_0120:                                                                        //ldc.i4.1
	IL_0121:                                                                        //add
	IL_0122:            V_3=(Temp_19 + 1);                                          //stloc.3
	IL_0123:                                                                        //ldloc.s				V_21
	IL_0125:            V_1[Temp_19]=V_21;                                          //stelem.ref
	IL_0126:                                                                        //ldc.i4				0x22
	IL_012b:            V_24=34;                                                    //stloc				V_24
	IL_012f:            /*goto IL_000e;*/goto IL_0134;                              //br				IL_000e
	IL_0134:            goto IL_01a3;                                               //br.s				IL_01a3
	IL_0136:                                                                        //ldloc.2
	IL_0137:            Temp_34=V_2->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_013c:            V_11=Temp_34;                                               //stloc.s				V_11
	IL_013e:                                                                        //ldloc.2
	IL_013f:            Temp_35=V_2->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0144:            V_12=Temp_35;                                               //stloc.s				V_12
	IL_0146:                                                                        //ldloc.2
	IL_0147:            Temp_36=V_2->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_014c:            V_13=Temp_36;                                               //stloc.s				V_13
	IL_014e:                                                                        //ldloc.2
	IL_014f:            Temp_37=V_2->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0154:            V_14=Temp_37;                                               //stloc.s				V_14
	IL_0156:                                                                        //ldloc.2
	IL_0157:            Temp_38=V_2->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_015c:            V_15=Temp_38;                                               //stloc.s				V_15
	IL_015e:                                                                        //ldloc.2
	IL_015f:            Temp_39=V_2->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0164:            V_16=Temp_39;                                               //stloc.s				V_16
	IL_0166:                                                                        //ldc.i4				0x1d
	IL_016b:            V_24=29;                                                    //stloc				V_24
	IL_016f:            /*goto IL_000e;*/goto IL_0174;                              //br				IL_000e
	IL_0174:            goto IL_05c0;                                               //br				IL_05c0
	IL_0179:                                                                        //ldc.i4				0x7
	IL_017e:            V_24=7;                                                     //stloc				V_24
	IL_0182:            /*goto IL_000e;*/goto IL_0187;                              //br				IL_000e
	IL_0187:                                                                        //ldloc.s				V_4
	IL_0189:                                                                        //ldc.i4.1
	IL_018a:                                                                        //and
	IL_018b:            if((V_4 & 1)==0)goto IL_0236;                               //brfalse				IL_0236
	IL_0190:                                                                        //ldc.i4				0xe
	IL_0195:            V_24=14;                                                    //stloc				V_24
	IL_0199:            /*goto IL_000e;*/goto IL_019e;                              //br				IL_000e
	IL_019e:            goto IL_029b;                                               //br				IL_029b
	IL_01a3:                                                                        //ldloc.s				V_10
	IL_01a5:                                                                        //ldc.i4.1
	IL_01a6:                                                                        //add
	IL_01a7:            V_10=(V_10 + 1);                                            //stloc.s				V_10
	IL_01a9:                                                                        //ldc.i4				0xc
	IL_01ae:            V_24=12;                                                    //stloc				V_24
	IL_01b2:            /*goto IL_000e;*/goto IL_01b7;                              //br				IL_000e
	IL_01b7:            goto IL_0396;                                               //br				IL_0396
	IL_01bc:                                                                        //ldloc.2
	IL_01bd:            Temp_5=V_2->M_x15();                                        //callvirt				System::Byte Root::T_x139::M_x15()
	IL_01c2:            V_6=safe_cast<System::Int32>(Temp_5);                       //stloc.s				V_6
	IL_01c4:                                                                        //ldloc.2
	IL_01c5:                                                                        //ldc.i4.2
	IL_01c6:            V_2->M_x12(safe_cast<System::Int32>(2));                    //callvirt				void Root::T_x139::M_x12(System::Int32)
	IL_01cb:                                                                        //ldc.i4				0x1f
	IL_01d0:            V_24=31;                                                    //stloc				V_24
	IL_01d4:            /*goto IL_000e;*/goto IL_01d9;                              //br				IL_000e
	IL_01d9:            goto IL_0328;                                               //br				IL_0328
	IL_01de:            Temp_16=gcnew Reflector::CodeModel::Memory::ExceptionHandler();//newobj				void Reflector::CodeModel::Memory::ExceptionHandler::.ctor()
	IL_01e3:            V_20=safe_cast<Reflector::CodeModel::IExceptionHandler^>(Temp_16);//stloc.s				V_20
	IL_01e5:                                                                        //ldloc.s				V_20
	IL_01e7:                                                                        //ldc.i4.2
	IL_01e8:            V_20->Type=safe_cast<Reflector::CodeModel::ExceptionHandlerType>(2);//callvirt				void Reflector::CodeModel::IExceptionHandler::set_Type(Reflector::CodeModel::ExceptionHandlerType)
	IL_01ed:                                                                        //ldloc.s				V_20
	IL_01ef:                                                                        //ldloc.s				V_12
	IL_01f1:            V_20->TryOffset=V_12;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryOffset(System::Int32)
	IL_01f6:                                                                        //ldloc.s				V_20
	IL_01f8:                                                                        //ldloc.s				V_13
	IL_01fa:            V_20->TryLength=V_13;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryLength(System::Int32)
	IL_01ff:                                                                        //ldloc.s				V_20
	IL_0201:                                                                        //ldloc.s				V_14
	IL_0203:            V_20->HandlerOffset=V_14;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerOffset(System::Int32)
	IL_0208:                                                                        //ldloc.s				V_20
	IL_020a:                                                                        //ldloc.s				V_15
	IL_020c:            V_20->HandlerLength=V_15;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerLength(System::Int32)
	IL_0211:                                                                        //ldloc.s				V_20
	IL_0213:                                                                        //ldloc.s				V_16
	IL_0215:            V_20->FilterOffset=V_16;                                    //callvirt				void Reflector::CodeModel::IExceptionHandler::set_FilterOffset(System::Int32)
	IL_021a:                                                                        //ldloc.1
	IL_021b:            Temp_17=V_3;                                                //ldloc.3
	IL_021c:                                                                        //dup
	IL_021d:                                                                        //ldc.i4.1
	IL_021e:                                                                        //add
	IL_021f:            V_3=(Temp_17 + 1);                                          //stloc.3
	IL_0220:                                                                        //ldloc.s				V_20
	IL_0222:            V_1[Temp_17]=V_20;                                          //stelem.ref
	IL_0223:                                                                        //ldc.i4				0xb
	IL_0228:            V_24=11;                                                    //stloc				V_24
	IL_022c:            /*goto IL_000e;*/goto IL_0231;                              //br				IL_000e
	IL_0231:            goto IL_01a3;                                               //br				IL_01a3
	IL_0236:                                                                        //ldloc.2
	IL_0237:                                                                        //dup
	IL_0238:            Temp_2=V_2->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_023d:                                                                        //ldloc.s				V_6
	IL_023f:                                                                        //add
	IL_0240:            V_2->M_x13((Temp_2 + V_6));                                 //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0245:                                                                        //ldc.i4				0x1a
	IL_024a:            V_24=26;                                                    //stloc				V_24
	IL_024e:            /*goto IL_000e;*/goto IL_0253;                              //br				IL_000e
	IL_0253:            goto IL_0602;                                               //br				IL_0602
	IL_0258:                                                                        //ldloc.2
	IL_0259:            Temp_25=V_2->M_x16();                                       //callvirt				System::Int16 Root::T_x139::M_x16()
	IL_025e:            V_11=safe_cast<System::Int32>(Temp_25);                     //stloc.s				V_11
	IL_0260:                                                                        //ldloc.2
	IL_0261:            Temp_26=V_2->M_x16();                                       //callvirt				System::Int16 Root::T_x139::M_x16()
	IL_0266:            V_12=safe_cast<System::Int32>(Temp_26);                     //stloc.s				V_12
	IL_0268:                                                                        //ldloc.2
	IL_0269:            Temp_27=V_2->M_x15();                                       //callvirt				System::Byte Root::T_x139::M_x15()
	IL_026e:            V_13=safe_cast<System::Int32>(Temp_27);                     //stloc.s				V_13
	IL_0270:                                                                        //ldloc.2
	IL_0271:            Temp_28=V_2->M_x16();                                       //callvirt				System::Int16 Root::T_x139::M_x16()
	IL_0276:            V_14=safe_cast<System::Int32>(Temp_28);                     //stloc.s				V_14
	IL_0278:                                                                        //ldloc.2
	IL_0279:            Temp_29=V_2->M_x15();                                       //callvirt				System::Byte Root::T_x139::M_x15()
	IL_027e:            V_15=safe_cast<System::Int32>(Temp_29);                     //stloc.s				V_15
	IL_0280:                                                                        //ldloc.2
	IL_0281:            Temp_30=V_2->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0286:            V_16=Temp_30;                                               //stloc.s				V_16
	IL_0288:                                                                        //ldc.i4				0x4
	IL_028d:            V_24=4;                                                     //stloc				V_24
	IL_0291:            /*goto IL_000e;*/goto IL_0296;                              //br				IL_000e
	IL_0296:            goto IL_05c0;                                               //br				IL_05c0
	IL_029b:                                                                        //ldc.i4				0x17
	IL_02a0:            V_24=23;                                                    //stloc				V_24
	IL_02a4:            /*goto IL_000e;*/goto IL_02a9;                              //br				IL_000e
	IL_02a9:            goto IL_02ac;                                               //br.s				IL_02ac
	IL_02ab:                                                                        //break
	IL_02ac:                                                                        //ldloc.s				V_5
	IL_02ae:            if(V_5)goto IL_037e;                                        //brtrue				IL_037e
	IL_02b3:                                                                        //ldc.i4				0x5
	IL_02b8:            V_24=5;                                                     //stloc				V_24
	IL_02bc:            /*goto IL_000e;*/goto IL_02c1;                              //br				IL_000e
	IL_02c1:            goto IL_0460;                                               //br				IL_0460
	IL_02c6:                                                                        //ldc.i4				0x1e
	IL_02cb:            V_24=30;                                                    //stloc				V_24
	IL_02cf:            /*goto IL_000e;*/goto IL_02d4;                              //br				IL_000e
	IL_02d4:            goto IL_0602;                                               //br				IL_0602
	IL_02d9:                                                                        //ldloc.1
	IL_02da:            Temp_1=gcnew Root::T_x159::T_x1(V_1);                       //newobj				void Root::T_x159::T_x1::.ctor(array<Reflector::CodeModel::IExceptionHandler^>^)
	IL_02df:            return safe_cast<Reflector::CodeModel::IExceptionHandlerCollection^>(Temp_1);//ret
	IL_02e0:                                                                        //ldloc.s				V_8
	IL_02e2:                                                                        //conv.ovf.u4
	IL_02e3:            Temp_3=gcnew array<Reflector::CodeModel::IExceptionHandler^>(safe_cast<System::UInt32>(V_8));//newarr				Reflector::CodeModel::IExceptionHandler
	IL_02e8:            V_1=Temp_3;                                                 //stloc.1
	IL_02e9:                                                                        //ldc.i4				0x0
	IL_02ee:            V_24=0;                                                     //stloc				V_24
	IL_02f2:            /*goto IL_000e;*/goto IL_02f7;                              //br				IL_000e
	IL_02f7:            goto IL_0437;                                               //br				IL_0437
	IL_02fc:                                                                        //ldc.i4				0x25
	IL_0301:            V_24=37;                                                    //stloc				V_24
	IL_0305:            /*goto IL_000e;*/goto IL_030a;                              //br				IL_000e
	IL_030a:                                                                        //ldloc.0
	IL_030b:            Temp_33=V_0->M_x1();                                        //callvirt				array<System::Byte>^ Root::T_x160::M_x1()
	IL_0310:            if(Temp_33==nullptr)goto IL_0630;                           //brfalse				IL_0630
	IL_0315:                                                                        //ldc.i4				0x10
	IL_031a:            V_24=16;                                                    //stloc				V_24
	IL_031e:            /*goto IL_000e;*/goto IL_0323;                              //br				IL_000e
	IL_0323:            goto IL_0517;                                               //br				IL_0517
	IL_0328:                                                                        //ldc.i4				0x27
	IL_032d:            V_24=39;                                                    //stloc				V_24
	IL_0331:            /*goto IL_000e;*/goto IL_0336;                              //br				IL_000e
	IL_0336:                                                                        //ldloc.s				V_5
	IL_0338:            if(V_5)goto IL_029b;                                        //brtrue				IL_029b
	IL_033d:                                                                        //ldc.i4				0x2
	IL_0342:            V_24=2;                                                     //stloc				V_24
	IL_0346:            /*goto IL_000e;*/goto IL_034b;                              //br				IL_000e
	IL_034b:            goto IL_0179;                                               //br				IL_0179
	IL_0350:                                                                        //ldloc.2
	IL_0351:                                                                        //ldc.i4.3
	IL_0352:            Temp_32=V_2->M_x8(safe_cast<System::Int32>(3));             //callvirt				array<System::Byte>^ Root::T_x139::M_x8(System::Int32)
	IL_0357:            V_7=Temp_32;                                                //stloc.s				V_7
	IL_0359:                                                                        //ldloc.s				V_7
	IL_035b:                                                                        //ldc.i4.2
	IL_035c:                                                                        //ldelem.u1
	IL_035d:                                                                        //ldc.i4.s				12
	IL_035f:                                                                        //shl
	IL_0360:                                                                        //ldloc.s				V_7
	IL_0362:                                                                        //ldc.i4.1
	IL_0363:                                                                        //ldelem.u1
	IL_0364:                                                                        //ldc.i4.8
	IL_0365:                                                                        //shl
	IL_0366:                                                                        //or
	IL_0367:                                                                        //ldloc.s				V_7
	IL_0369:                                                                        //ldc.i4.0
	IL_036a:                                                                        //ldelem.u1
	IL_036b:                                                                        //or
	IL_036c:            V_6=safe_cast<System::Int32>((((V_7[2] << 12) | (V_7[1] << 8)) | V_7[0]));//stloc.s				V_6
	IL_036e:                                                                        //ldc.i4				0x6
	IL_0373:            V_24=6;                                                     //stloc				V_24
	IL_0377:            /*goto IL_000e;*/goto IL_037c;                              //br				IL_000e
	IL_037c:            goto IL_0328;                                               //br.s				IL_0328
	IL_037e:                                                                        //ldc.i4				0x24
	IL_0383:            V_24=36;                                                    //stloc				V_24
	IL_0387:            /*goto IL_000e;*/goto IL_038c;                              //br				IL_000e
	IL_038c:                                                                        //ldloc.s				V_6
	IL_038e:                                                                        //ldc.i4.s				12
	IL_0390:                                                                        //div
	IL_0391:            Temp_40=(V_6 / 12);goto IL_04c6;                            //br				IL_04c6
	IL_0396:                                                                        //ldc.i4				0x15
	IL_039b:            V_24=21;                                                    //stloc				V_24
	IL_039f:            /*goto IL_000e;*/goto IL_03a4;                              //br				IL_000e
	IL_03a4:                                                                        //ldloc.s				V_10
	IL_03a6:                                                                        //ldloc.s				V_8
	IL_03a8:            if(V_10<V_8)goto IL_04ef;                                   //blt				IL_04ef
	IL_03ad:                                                                        //ldc.i4				0x3
	IL_03b2:            V_24=3;                                                     //stloc				V_24
	IL_03b6:            /*goto IL_000e;*/goto IL_03bb;                              //br				IL_000e
	IL_03bb:            goto IL_02c6;                                               //br				IL_02c6
	IL_03c0:            Temp_22=gcnew Reflector::CodeModel::Memory::ExceptionHandler();//newobj				void Reflector::CodeModel::Memory::ExceptionHandler::.ctor()
	IL_03c5:            V_22=safe_cast<Reflector::CodeModel::IExceptionHandler^>(Temp_22);//stloc.s				V_22
	IL_03c7:                                                                        //ldloc.s				V_22
	IL_03c9:                                                                        //ldc.i4.3
	IL_03ca:            V_22->Type=safe_cast<Reflector::CodeModel::ExceptionHandlerType>(3);//callvirt				void Reflector::CodeModel::IExceptionHandler::set_Type(Reflector::CodeModel::ExceptionHandlerType)
	IL_03cf:                                                                        //ldloc.s				V_22
	IL_03d1:                                                                        //ldloc.s				V_12
	IL_03d3:            V_22->TryOffset=V_12;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryOffset(System::Int32)
	IL_03d8:                                                                        //ldloc.s				V_22
	IL_03da:                                                                        //ldloc.s				V_13
	IL_03dc:            V_22->TryLength=V_13;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryLength(System::Int32)
	IL_03e1:                                                                        //ldloc.s				V_22
	IL_03e3:                                                                        //ldloc.s				V_14
	IL_03e5:            V_22->HandlerOffset=V_14;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerOffset(System::Int32)
	IL_03ea:                                                                        //ldloc.s				V_22
	IL_03ec:                                                                        //ldloc.s				V_15
	IL_03ee:            V_22->HandlerLength=V_15;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerLength(System::Int32)
	IL_03f3:                                                                        //ldloc.1
	IL_03f4:            Temp_23=V_3;                                                //ldloc.3
	IL_03f5:                                                                        //dup
	IL_03f6:                                                                        //ldc.i4.1
	IL_03f7:                                                                        //add
	IL_03f8:            V_3=(Temp_23 + 1);                                          //stloc.3
	IL_03f9:                                                                        //ldloc.s				V_22
	IL_03fb:            V_1[Temp_23]=V_22;                                          //stelem.ref
	IL_03fc:                                                                        //ldc.i4				0x20
	IL_0401:            V_24=32;                                                    //stloc				V_24
	IL_0405:            /*goto IL_000e;*/goto IL_040a;                              //br				IL_000e
	IL_040a:            goto IL_01a3;                                               //br				IL_01a3
	IL_040f:                                                                        //ldloc.3
	IL_0410:                                                                        //ldloc.s				V_8
	IL_0412:                                                                        //add
	IL_0413:                                                                        //conv.ovf.u4
	IL_0414:            Temp_31=gcnew array<Reflector::CodeModel::IExceptionHandler^>(safe_cast<System::UInt32>((V_3 + V_8)));//newarr				Reflector::CodeModel::IExceptionHandler
	IL_0419:            V_9=Temp_31;                                                //stloc.s				V_9
	IL_041b:                                                                        //ldloc.1
	IL_041c:                                                                        //ldloc.s				V_9
	IL_041e:                                                                        //ldloc.3
	IL_041f:            System::Array::Copy(safe_cast<System::Array^>(V_1),safe_cast<System::Array^>(V_9),V_3);//call				void System::Array::Copy(System::Array^,System::Array^,System::Int32)
	IL_0424:                                                                        //ldloc.s				V_9
	IL_0426:            V_1=V_9;                                                    //stloc.1
	IL_0427:                                                                        //ldc.i4				0x12
	IL_042c:            V_24=18;                                                    //stloc				V_24
	IL_0430:            /*goto IL_000e;*/goto IL_0435;                              //br				IL_000e
	IL_0435:            goto IL_0437;                                               //br.s				IL_0437
	IL_0437:                                                                        //ldc.i4.0
	IL_0438:            V_10=0;                                                     //stloc.s				V_10
	IL_043a:                                                                        //ldc.i4				0x16
	IL_043f:            V_24=22;                                                    //stloc				V_24
	IL_0443:            /*goto IL_000e;*/goto IL_0448;                              //br				IL_000e
	IL_0448:            goto IL_0396;                                               //br				IL_0396
	IL_044d:                                                                        //ldc.i4				0x1c
	IL_0452:            V_24=28;                                                    //stloc				V_24
	IL_0456:            /*goto IL_000e;*/goto IL_045b;                              //br				IL_000e
	IL_045b:            goto IL_04b2;                                               //br				IL_04b2
	IL_0460:                                                                        //ldc.i4				0x21
	IL_0465:            V_24=33;                                                    //stloc				V_24
	IL_0469:            /*goto IL_000e;*/goto IL_046e;                              //br				IL_000e
	IL_046e:                                                                        //ldloc.s				V_6
	IL_0470:                                                                        //ldc.i4.s				24
	IL_0472:                                                                        //div
	IL_0473:            Temp_40=(V_6 / 24);goto IL_04c6;                            //br.s				IL_04c6
	IL_0475:                                                                        //ldloc.2
	IL_0476:            Temp_24=V_2->M_x15();                                       //callvirt				System::Byte Root::T_x139::M_x15()
	IL_047b:            V_4=Temp_24;                                                //stloc.s				V_4
	IL_047d:                                                                        //ldloc.s				V_4
	IL_047f:                                                                        //ldc.i4.s				64
	IL_0481:                                                                        //and
	IL_0482:                                                                        //ldc.i4.0
	IL_0483:                                                                        //ceq
	IL_0485:            V_5=((V_4 & 64) == 0);                                      //stloc.s				V_5
	IL_0487:                                                                        //ldc.i4.0
	IL_0488:            V_6=0;                                                      //stloc.s				V_6
	IL_048a:                                                                        //ldc.i4				0x19
	IL_048f:            V_24=25;                                                    //stloc				V_24
	IL_0493:            /*goto IL_000e;*/goto IL_0498;                              //br				IL_000e
	IL_0498:                                                                        //ldloc.s				V_5
	IL_049a:            if(!V_5)goto IL_0350;                                       //brfalse				IL_0350
	IL_049f:                                                                        //ldc.i4				0xf
	IL_04a4:            V_24=15;                                                    //stloc				V_24
	IL_04a8:            /*goto IL_000e;*/goto IL_04ad;                              //br				IL_000e
	IL_04ad:            goto IL_01bc;                                               //br				IL_01bc
	IL_04b2:                                                                        //ldstr				L"\x7622\x4B24\x4C26\x4728\x442A\x5A2C\x412E\x1130\x5632\x4D34\x5436\x5C38\x4B3A\x493C\x563E\x2E40\x2D42\x6544\x2F46\x2848\x254A\x294C\x234E\x3450\x2152\x7554\x2356\x2058\x2B5A\x385C\x715E"
	IL_04b7:                                                                        //ldloc				V_25
	IL_04bb:            Temp_20=a(L"\x7622\x4B24\x4C26\x4728\x442A\x5A2C\x412E\x1130\x5632\x4D34\x5436\x5C38\x4B3A\x493C\x563E\x2E40\x2D42\x6544\x2F46\x2848\x254A\x294C\x234E\x3450\x2152\x7554\x2356\x2058\x2B5A\x385C\x715E",V_25);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04c0:            Temp_21=gcnew System::NotSupportedException(Temp_20);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_04c5:            throw Temp_21;                                              //throw
	IL_04c6:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_8
	IL_04c8:                                                                        //ldc.i4				0x18
	IL_04cd:            V_24=24;                                                    //stloc				V_24
	IL_04d1:            /*goto IL_000e;*/goto IL_04d6;                              //br				IL_000e
	IL_04d6:                                                                        //ldloc.1
	IL_04d7:            if(V_1!=nullptr)goto IL_040f;                               //brtrue				IL_040f
	IL_04dc:                                                                        //ldc.i4				0x8
	IL_04e1:            V_24=8;                                                     //stloc				V_24
	IL_04e5:            /*goto IL_000e;*/goto IL_04ea;                              //br				IL_000e
	IL_04ea:            goto IL_02e0;                                               //br				IL_02e0
	IL_04ef:                                                                        //ldc.i4				0x26
	IL_04f4:            V_24=38;                                                    //stloc				V_24
	IL_04f8:            /*goto IL_000e;*/goto IL_04fd;                              //br				IL_000e
	IL_04fd:                                                                        //ldloc.s				V_5
	IL_04ff:            if(!V_5)goto IL_0136;                                       //brfalse				IL_0136
	IL_0504:                                                                        //ldc.i4				0x14
	IL_0509:            V_24=20;                                                    //stloc				V_24
	IL_050d:            /*goto IL_000e;*/goto IL_0512;                              //br				IL_000e
	IL_0512:            goto IL_0258;                                               //br				IL_0258
	IL_0517:                                                                        //ldnull
	IL_0518:            V_1=safe_cast<array<Reflector::CodeModel::IExceptionHandler^>^>(nullptr);//stloc.1
	IL_0519:                                                                        //ldloc.0
	IL_051a:            Temp_6=V_0->M_x1();                                         //callvirt				array<System::Byte>^ Root::T_x160::M_x1()
	IL_051f:            Temp_7=gcnew Root::T_x139(Temp_6);                          //newobj				void Root::T_x139::.ctor(array<System::Byte>^)
	IL_0524:            V_2=Temp_7;                                                 //stloc.2
	IL_0525:                                                                        //ldc.i4.0
	IL_0526:            V_3=0;                                                      //stloc.3
	IL_0527:                                                                        //ldc.i4				0x13
	IL_052c:            V_24=19;                                                    //stloc				V_24
	IL_0530:            /*goto IL_000e;*/goto IL_0535;                              //br				IL_000e
	IL_0535:            goto IL_0475;                                               //br				IL_0475
	IL_053a:                                                                        //ldarg.0
	IL_053b:            Temp_8=this->F_x1;                                          //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0540:            Temp_9=Temp_8->DeclaringType;                               //callvirt				Reflector::CodeModel::IType^ Root::T_x161::get_DeclaringType()
	IL_0545:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_054a:            V_17=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_9);//stloc.s				V_17
	IL_054c:                                                                        //ldarg.0
	IL_054d:            Temp_10=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0552:            Temp_11=Temp_10->M_x11();                                   //callvirt				Root::T_x2^ Root::T_x161::M_x11()
	IL_0557:                                                                        //ldloc.s				V_16
	IL_0559:                                                                        //ldloc.s				V_17
	IL_055b:                                                                        //ldarg.0
	IL_055c:            Temp_12=this->F_x1;                                         //ldfld				Root::T_x161^ Root::T_x159 F_x1
	IL_0561:            Temp_13=Temp_11->M_x5(V_16,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_17),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_12));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(System::Int32,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0566:            V_18=Temp_13;                                               //stloc.s				V_18
	IL_0568:            Temp_14=gcnew Reflector::CodeModel::Memory::ExceptionHandler();//newobj				void Reflector::CodeModel::Memory::ExceptionHandler::.ctor()
	IL_056d:            V_19=safe_cast<Reflector::CodeModel::IExceptionHandler^>(Temp_14);//stloc.s				V_19
	IL_056f:                                                                        //ldloc.s				V_19
	IL_0571:                                                                        //ldc.i4.1
	IL_0572:            V_19->Type=safe_cast<Reflector::CodeModel::ExceptionHandlerType>(1);//callvirt				void Reflector::CodeModel::IExceptionHandler::set_Type(Reflector::CodeModel::ExceptionHandlerType)
	IL_0577:                                                                        //ldloc.s				V_19
	IL_0579:                                                                        //ldloc.s				V_12
	IL_057b:            V_19->TryOffset=V_12;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryOffset(System::Int32)
	IL_0580:                                                                        //ldloc.s				V_19
	IL_0582:                                                                        //ldloc.s				V_13
	IL_0584:            V_19->TryLength=V_13;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_TryLength(System::Int32)
	IL_0589:                                                                        //ldloc.s				V_19
	IL_058b:                                                                        //ldloc.s				V_14
	IL_058d:            V_19->HandlerOffset=V_14;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerOffset(System::Int32)
	IL_0592:                                                                        //ldloc.s				V_19
	IL_0594:                                                                        //ldloc.s				V_15
	IL_0596:            V_19->HandlerLength=V_15;                                   //callvirt				void Reflector::CodeModel::IExceptionHandler::set_HandlerLength(System::Int32)
	IL_059b:                                                                        //ldloc.s				V_19
	IL_059d:                                                                        //ldloc.s				V_18
	IL_059f:            V_19->CatchType=V_18;                                       //callvirt				void Reflector::CodeModel::IExceptionHandler::set_CatchType(Reflector::CodeModel::IType^)
	IL_05a4:                                                                        //ldloc.1
	IL_05a5:            Temp_15=V_3;                                                //ldloc.3
	IL_05a6:                                                                        //dup
	IL_05a7:                                                                        //ldc.i4.1
	IL_05a8:                                                                        //add
	IL_05a9:            V_3=(Temp_15 + 1);                                          //stloc.3
	IL_05aa:                                                                        //ldloc.s				V_19
	IL_05ac:            V_1[Temp_15]=V_19;                                          //stelem.ref
	IL_05ad:                                                                        //ldc.i4				0xa
	IL_05b2:            V_24=10;                                                    //stloc				V_24
	IL_05b6:            /*goto IL_000e;*/goto IL_05bb;                              //br				IL_000e
	IL_05bb:            goto IL_01a3;                                               //br				IL_01a3
	IL_05c0:                                                                        //ldloc.s				V_11
	IL_05c2:                                                                        //ldc.i4.7
	IL_05c3:                                                                        //and
	IL_05c4:            V_23=(V_11 & 7);                                            //stloc.s				V_23
	IL_05c6:                                                                        //ldc.i4				0x11
	IL_05cb:            V_24=17;                                                    //stloc				V_24
	IL_05cf:            /*goto IL_000e;*/goto IL_05d4;                              //br				IL_000e
	IL_05d4:                                                                        //ldloc.s				V_23
	IL_05d6:            switch(V_23){case 0:goto IL_053a;case 1:goto IL_01de;case 2:goto IL_00ea;case 3:goto IL_04b2;case 4:goto IL_03c0;};//switch				(IL_053a,IL_01de,IL_00ea,IL_04b2,IL_03c0)
	IL_05ef:                                                                        //ldc.i4				0x9
	IL_05f4:            V_24=9;                                                     //stloc				V_24
	IL_05f8:            /*goto IL_000e;*/goto IL_05fd;                              //br				IL_000e
	IL_05fd:            goto IL_044d;                                               //br				IL_044d
	IL_0602:                                                                        //ldc.i4				0x1b
	IL_0607:            V_24=27;                                                    //stloc				V_24
	IL_060b:            /*goto IL_000e;*/goto IL_0610;                              //br				IL_000e
	IL_0610:                                                                        //ldloc.s				V_4
	IL_0612:                                                                        //ldc.i4				0x80
	IL_0617:                                                                        //and
	IL_0618:            if((V_4 & 128)!=0)goto IL_0475;                             //brtrue				IL_0475
	IL_061d:                                                                        //ldc.i4				0x1
	IL_0622:            V_24=1;                                                     //stloc				V_24
	IL_0626:            /*goto IL_000e;*/goto IL_062b;                              //br				IL_000e
	IL_062b:            goto IL_02d9;                                               //br				IL_02d9
	IL_0630:            Temp_4=Root::T_x159::T_x1::M_x1();                          //call				Reflector::CodeModel::IExceptionHandlerCollection^ Root::T_x159::T_x1::M_x1()
	IL_0635:            return Temp_4;                                              //ret

}
inline System::Int32 Root::T_x159::M_x2()
//Reflector::CodeModel::IMethodBody^::get_MaxStack by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::UInt16 Temp_2 = 0;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_003c;case 1:goto IL_0063;case 2:goto IL_004b;case 3:goto IL_000b;};//switch				(IL_003c,IL_0063,IL_004b,IL_000b)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.0
	IL_002a:            Temp_3=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_002f:            if(Temp_3!=nullptr)goto IL_0040;                            //brtrue.s				IL_0040
	IL_0031:                                                                        //ldc.i4				0x0
	IL_0036:            V_0=0;                                                      //stloc				V_0
	IL_003a:            /*goto IL_000d;*/goto IL_003c;                              //br.s				IL_000d
	IL_003c:            goto IL_0065;                                               //br.s				IL_0065
	IL_003e:                                                                        //ldc.i4.8
	IL_003f:            return 8;                                                   //ret
	IL_0040:                                                                        //ldc.i4				0x2
	IL_0045:            V_0=2;                                                      //stloc				V_0
	IL_0049:            /*goto IL_000d;*/goto IL_004b;                              //br.s				IL_000d
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_0051:                                                                        //isinst				array<System::Byte>
	IL_0056:            if(dynamic_cast<array<System::Byte>^>(Temp_0)==nullptr)goto IL_0067;//brfalse.s				IL_0067
	IL_0058:                                                                        //ldc.i4				0x1
	IL_005d:            V_0=1;                                                      //stloc				V_0
	IL_0061:            /*goto IL_000d;*/goto IL_0063;                              //br.s				IL_000d
	IL_0063:            goto IL_003e;                                               //br.s				IL_003e
	IL_0065:                                                                        //ldc.i4.0
	IL_0066:            return 0;                                                   //ret
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_1=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_006d:                                                                        //isinst				Root::T_x160
	IL_0072:            Temp_2=dynamic_cast<Root::T_x160^>(Temp_1)->M_x12();        //callvirt				System::UInt16 Root::T_x160::M_x12()
	IL_0077:                                                                        //conv.i4
	IL_0078:            return safe_cast<System::Int32>(Temp_2);                    //ret

}
inline System::Boolean Root::T_x159::M_x8()
//Reflector::CodeModel::IMethodBody^::get_InitializeLocalVariables by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0039;case 1:goto IL_006b;case 2:goto IL_000b;case 3:goto IL_0048;};//switch				(IL_0039,IL_006b,IL_000b,IL_0048)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_3=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_002c:            if(Temp_3==nullptr)goto IL_003b;                            //brfalse.s				IL_003b
	IL_002e:                                                                        //ldc.i4				0x0
	IL_0033:            V_0=0;                                                      //stloc				V_0
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_003d;                                               //br.s				IL_003d
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:            return true;                                                //ret
	IL_003d:                                                                        //ldc.i4				0x3
	IL_0042:            V_0=3;                                                      //stloc				V_0
	IL_0046:            /*goto IL_000d;*/goto IL_0048;                              //br.s				IL_000d
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_004e:                                                                        //isinst				array<System::Byte>
	IL_0053:            if(dynamic_cast<array<System::Byte>^>(Temp_0)==nullptr)goto IL_006d;//brfalse.s				IL_006d
	IL_0055:                                                                        //ldc.i4.4
	IL_0056:                                                                        //dup
	IL_0057:                                                                        //dup
	IL_0058:                                                                        //ldc.i4.2
	IL_0059:                                                                        //sub
	IL_005a:                                                                        //blt				IL_0056
	IL_005f:                                                                        //pop
	IL_0060:                                                                        //ldc.i4				0x1
	IL_0065:            V_0=1;                                                      //stloc				V_0
	IL_0069:            /*goto IL_000d;*/goto IL_006b;                              //br.s				IL_000d
	IL_006b:            goto IL_003b;                                               //br.s				IL_003b
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_1=this->F_x2;                                          //ldfld				System::Object^ Root::T_x159 F_x2
	IL_0073:                                                                        //isinst				Root::T_x160
	IL_0078:            Temp_2=dynamic_cast<Root::T_x160^>(Temp_1)->M_x8();         //callvirt				System::Boolean Root::T_x160::M_x8()
	IL_007d:            return Temp_2;                                              //ret

}
inline Root::T_x159::T_x12::T_x12(Root::T_x159::T_x13^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x159::T_x13^ Root::T_x159::T_x12 F_x1
	IL_000d:            return;                                                     //ret

}
inline Reflector::CodeModel::IType^ Root::T_x159::T_x12::M_x1()
//Reflector::CodeModel::IVariableDeclaration^::get_VariableType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IType^ Root::T_x159::T_x12 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x159::T_x12::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::IVariableDeclaration^::set_VariableType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x13=A_0;                                            //stfld				Reflector::CodeModel::IType^ Root::T_x159::T_x12 F_x13
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x159::T_x12::M_x1(System::Boolean A_0)
//Reflector::CodeModel::IVariableDeclaration^::set_Pinned by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Boolean Root::T_x159::T_x12 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x159::T_x12::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	System::Int32 Temp_6 = 0;
	System::Boolean Temp_7 = false;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Int32 Temp_11 = 0;
	//local variables.
	Reflector::CodeModel::IVariableDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Boolean V_2 = false;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_3=2;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_004e;                                               //br.s				IL_004e
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_0133;case 1:goto IL_0155;case 2:goto IL_000b;case 3:goto IL_0113;case 4:goto IL_00f2;case 5:goto IL_00ce;case 6:goto IL_017e;case 7:goto IL_008d;case 8:goto IL_005d;case 9:goto IL_00e2;case 10:goto IL_006f;case 11:goto IL_00b5;case 12:goto IL_00a0;case 13:goto IL_01a3;};//switch				(IL_0133,IL_0155,IL_000b,IL_0113,IL_00f2,IL_00ce,IL_017e,IL_008d,IL_005d,IL_00e2,IL_006f,IL_00b5,IL_00a0,IL_01a3)
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:            if(this!=safe_cast<Root::T_x159::T_x12^>(A_0))goto IL_00b9; //bne.un.s				IL_00b9
	IL_0052:                                                                        //ldc.i4				0x8
	IL_0057:            V_3=8;                                                      //stloc				V_3
	IL_005b:            /*goto IL_000d;*/goto IL_005d;                              //br.s				IL_000d
	IL_005d:            goto IL_0167;                                               //br				IL_0167
	IL_0062:                                                                        //ldc.i4.0
	IL_0063:            return false;                                               //ret
	IL_0064:                                                                        //ldc.i4				0xa
	IL_0069:            V_3=10;                                                     //stloc				V_3
	IL_006d:            /*goto IL_000d;*/goto IL_006f;                              //br.s				IL_000d
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_8=this->Name;                                          //call				System::String^ Root::T_x159::T_x12::get_Name()
	IL_0075:                                                                        //ldloc.0
	IL_0076:            Temp_9=safe_cast<Reflector::CodeModel::IVariableReference^>(V_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IVariableReference::get_Name()
	IL_007b:            Temp_10=Temp_8->Equals(Temp_9);                             //callvirt				System::Boolean System::String::Equals(System::String^)
	IL_0080:            if(Temp_10)goto IL_00e4;                                    //brtrue.s				IL_00e4
	IL_0082:                                                                        //ldc.i4				0x7
	IL_0087:            V_3=7;                                                      //stloc				V_3
	IL_008b:            /*goto IL_000d;*/goto IL_008d;                              //br.s				IL_000d
	IL_008d:            goto IL_015a;                                               //br				IL_015a
	IL_0092:                                                                        //ldc.i4				0xc
	IL_0097:            V_3=12;                                                     //stloc				V_3
	IL_009b:            /*goto IL_000d;*/goto IL_00a0;                              //br				IL_000d
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:                                                                        //ldloc.0
	IL_00a2:            if(this!=safe_cast<Root::T_x159::T_x12^>(V_0))goto IL_0169; //bne.un				IL_0169
	IL_00a7:                                                                        //ldc.i4				0xb
	IL_00ac:            V_3=11;                                                     //stloc				V_3
	IL_00b0:            /*goto IL_000d;*/goto IL_00b5;                              //br				IL_000d
	IL_00b5:            goto IL_011c;                                               //br.s				IL_011c
	IL_00b7:                                                                        //ldc.i4.0
	IL_00b8:            return false;                                               //ret
	IL_00b9:                                                                        //ldarg.1
	IL_00ba:                                                                        //isinst				Reflector::CodeModel::IVariableDeclaration
	IL_00bf:            V_0=dynamic_cast<Reflector::CodeModel::IVariableDeclaration^>(A_0);//stloc.0
	IL_00c0:                                                                        //ldc.i4				0x5
	IL_00c5:            V_3=5;                                                      //stloc				V_3
	IL_00c9:            /*goto IL_000d;*/goto IL_00ce;                              //br				IL_000d
	IL_00ce:                                                                        //ldloc.0
	IL_00cf:            if(V_0==nullptr)goto IL_01a8;                               //brfalse				IL_01a8
	IL_00d4:                                                                        //ldc.i4				0x9
	IL_00d9:            V_3=9;                                                      //stloc				V_3
	IL_00dd:            /*goto IL_000d;*/goto IL_00e2;                              //br				IL_000d
	IL_00e2:            goto IL_0092;                                               //br.s				IL_0092
	IL_00e4:                                                                        //ldc.i4				0x4
	IL_00e9:            V_3=4;                                                      //stloc				V_3
	IL_00ed:            /*goto IL_000d;*/goto IL_00f2;                              //br				IL_000d
	IL_00f2:                                                                        //ldarg.0
	IL_00f3:            Temp_2=this->M_x1();                                        //call				Reflector::CodeModel::IType^ Root::T_x159::T_x12::M_x1()
	IL_00f8:                                                                        //ldloc.0
	IL_00f9:            Temp_3=V_0->VariableType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_00fe:            Temp_4=Temp_2->Equals(safe_cast<System::Object^>(Temp_3));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0103:            if(Temp_4)goto IL_011e;                                     //brtrue.s				IL_011e
	IL_0105:                                                                        //ldc.i4				0x3
	IL_010a:            V_3=3;                                                      //stloc				V_3
	IL_010e:            /*goto IL_000d;*/goto IL_0113;                              //br				IL_000d
	IL_0113:            goto IL_0062;                                               //br				IL_0062
	IL_0118:                                                                        //ldc.i4.1
	IL_0119:            return true;                                                //ret
	IL_011a:                                                                        //ldc.i4.0
	IL_011b:            return false;                                               //ret
	IL_011c:                                                                        //ldc.i4.1
	IL_011d:            return true;                                                //ret
	IL_011e:                                                                        //ldarg.0
	IL_011f:            Temp_5=this->M_x13();                                       //call				System::Boolean Root::T_x159::T_x12::M_x13()
	IL_0124:            V_2=Temp_5;                                                 //stloc.2
	IL_0125:                                                                        //ldc.i4				0x0
	IL_012a:            V_3=0;                                                      //stloc				V_3
	IL_012e:            /*goto IL_000d;*/goto IL_0133;                              //br				IL_000d
	IL_0133:                                                                        //ldloca.s				V_2
	IL_0135:                                                                        //ldloc.0
	IL_0136:            Temp_0=V_0->Pinned;                                         //callvirt				System::Boolean Reflector::CodeModel::IVariableDeclaration::get_Pinned()
	IL_013b:                                                                        //box				System::Boolean
	IL_0140:            Temp_1=V_2.Equals(safe_cast<System::Object^>(Temp_0));      //call				System::Boolean System::Boolean::Equals(System::Object^)
	IL_0145:            if(Temp_1)goto IL_0118;                                     //brtrue.s				IL_0118
	IL_0147:                                                                        //ldc.i4				0x1
	IL_014c:            V_3=1;                                                      //stloc				V_3
	IL_0150:            /*goto IL_000d;*/goto IL_0155;                              //br				IL_000d
	IL_0155:            goto IL_00b7;                                               //br				IL_00b7
	IL_015a:                                                                        //ldc.i4.4
	IL_015b:                                                                        //dup
	IL_015c:                                                                        //dup
	IL_015d:                                                                        //ldc.i4.2
	IL_015e:                                                                        //sub
	IL_015f:                                                                        //blt				IL_015b
	IL_0164:                                                                        //pop
	IL_0165:                                                                        //ldc.i4.0
	IL_0166:            return false;                                               //ret
	IL_0167:                                                                        //ldc.i4.1
	IL_0168:            return true;                                                //ret
	IL_0169:                                                                        //ldarg.0
	IL_016a:            Temp_11=this->Identifier;                                   //call				System::Int32 Root::T_x159::T_x12::get_Identifier()
	IL_016f:            V_1=Temp_11;                                                //stloc.1
	IL_0170:                                                                        //ldc.i4				0x6
	IL_0175:            V_3=6;                                                      //stloc				V_3
	IL_0179:            /*goto IL_000d;*/goto IL_017e;                              //br				IL_000d
	IL_017e:                                                                        //ldloca.s				V_1
	IL_0180:                                                                        //ldloc.0
	IL_0181:            Temp_6=safe_cast<Reflector::CodeModel::IVariableReference^>(V_0)->Identifier;//callvirt				System::Int32 Reflector::CodeModel::IVariableReference::get_Identifier()
	IL_0186:                                                                        //box				System::Int32
	IL_018b:            Temp_7=V_1.Equals(safe_cast<System::Object^>(Temp_6));      //call				System::Boolean System::Int32::Equals(System::Object^)
	IL_0190:            if(Temp_7)goto IL_0064;                                     //brtrue				IL_0064
	IL_0195:                                                                        //ldc.i4				0xd
	IL_019a:            V_3=13;                                                     //stloc				V_3
	IL_019e:            /*goto IL_000d;*/goto IL_01a3;                              //br				IL_000d
	IL_01a3:            goto IL_011a;                                               //br				IL_011a
	IL_01a8:                                                                        //ldc.i4.0
	IL_01a9:            return false;                                               //ret

}
inline System::Int32 Root::T_x159::T_x12::M_x12()
//System::Object^::GetHashCode by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Name;                                          //call				System::String^ Root::T_x159::T_x12::get_Name()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x159::T_x12::M_x13()
//Reflector::CodeModel::IVariableDeclaration^::get_Pinned by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Boolean Root::T_x159::T_x12 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IVariableDeclaration^ Root::T_x159::T_x12::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IVariableDeclaration^>(this);//ret

}
inline System::String^ Root::T_x159::T_x12::M_x8()
//System::Object^::ToString by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_0=14;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->M_x1();                                        //call				Reflector::CodeModel::IType^ Root::T_x159::T_x12::M_x1()
	IL_000f:            Temp_1=Temp_0->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0014:                                                                        //ldstr				L"\x0C2B"
	IL_0019:                                                                        //ldloc				V_0
	IL_001d:            Temp_2=a(L"\x0C2B",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_3=this->Name;                                          //call				System::String^ Root::T_x159::T_x12::get_Name()
	IL_0028:            Temp_4=System::String::Concat(Temp_1,Temp_2,Temp_3);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_002d:            return Temp_4;                                              //ret

}
inline System::Int32 Root::T_x159::T_x12::Identifier::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Int32 Root::T_x159::T_x12 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x159::T_x12::Identifier::set(System::Int32 value)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x8=value;                                           //stfld				System::Int32 Root::T_x159::T_x12 F_x8
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x159::T_x12::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x159::T_x13^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Root::T_x159::T_x13^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0038;case 1:goto IL_0057;case 2:goto IL_000b;};//switch				(IL_0038,IL_0057,IL_000b)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x159::T_x13^ Root::T_x159::T_x12 F_x1
	IL_002b:            if(Temp_2==nullptr)goto IL_0059;                            //brfalse.s				IL_0059
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_0=0;                                                      //stloc				V_0
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x159::T_x13^ Root::T_x159::T_x12 F_x1
	IL_0040:            Temp_0->M_x12();                                            //callvirt				void Root::T_x159::T_x13::M_x12()
	IL_0045:                                                                        //ldarg.0
	IL_0046:                                                                        //ldnull
	IL_0047:            this->F_x1=safe_cast<Root::T_x159::T_x13^>(nullptr);        //stfld				Root::T_x159::T_x13^ Root::T_x159::T_x12 F_x1
	IL_004c:                                                                        //ldc.i4				0x1
	IL_0051:            V_0=1;                                                      //stloc				V_0
	IL_0055:            /*goto IL_000d;*/goto IL_0057;                              //br.s				IL_000d
	IL_0057:            goto IL_0059;                                               //br.s				IL_0059
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_1=this->F_x12;                                         //ldfld				System::String^ Root::T_x159::T_x12 F_x12
	IL_005f:            return Temp_1;                                              //ret

}
inline void Root::T_x159::T_x12::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=value;                                          //stfld				System::String^ Root::T_x159::T_x12 F_x12
	IL_0007:            return;                                                     //ret

}
inline Reflector::CodeModel::IVariableDeclaration^ Root::T_x159::T_x12::Variable::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IVariableDeclaration^>(this);//ret

}
inline void Root::T_x159::T_x12::Variable::set(Reflector::CodeModel::IVariableDeclaration^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline static Root::T_x159::T_x13::T_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x159::T_x13^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:                                                                        //ldnull
	IL_0002:                                                                        //ldc.i4.m1
	IL_0003:            Temp_0=gcnew Root::T_x159::T_x13(safe_cast<array<Reflector::CodeModel::IVariableDeclaration^>^>(nullptr),safe_cast<System::String^>(nullptr),safe_cast<System::Int32>(-1));//newobj				void Root::T_x159::T_x13::.ctor(array<Reflector::CodeModel::IVariableDeclaration^>^,System::String^,System::Int32)
	IL_0008:            Root::T_x159::T_x13::F_x1=safe_cast<Reflector::CodeModel::IVariableDeclarationCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IVariableDeclarationCollection^ Root::T_x159::T_x13 F_x1
	IL_000d:            return;                                                     //ret

}
inline Root::T_x159::T_x13::T_x13(array<Reflector::CodeModel::IVariableDeclaration^>^ A_0,System::String^ A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.3
	IL_000f:            this->F_x12=A_2;                                            //stfld				System::Int32 Root::T_x159::T_x13 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.2
	IL_0016:            this->F_x13=A_1;                                            //stfld				System::String^ Root::T_x159::T_x13 F_x13
	IL_001b:            return;                                                     //ret

}
inline void Root::T_x159::T_x13::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x159::T_x13::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0016:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_001b:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::IVariableDeclarationCollection^ Root::T_x159::T_x13::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclarationCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x159::T_x13::F_x1;                           //ldsfld				Reflector::CodeModel::IVariableDeclarationCollection^ Root::T_x159::T_x13 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x159::T_x13::M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0)
//Reflector::CodeModel::IVariableDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.m1
	IL_000b:            return -1;                                                  //ret
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:                                                                        //sub
	IL_0011:                                                                        //blt				IL_000d
	IL_0016:                                                                        //pop
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0025:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0026:                                                                        //conv.i4
	IL_0027:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_002c:            return Temp_4;                                              //ret

}
inline void Root::T_x159::T_x13::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IVariableDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IVariableDeclaration^ Root::T_x159::T_x13::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IVariableDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x159::T_x13::M_x1(System::Int32 A_0,Reflector::CodeModel::IVariableDeclaration^ A_1)
//Reflector::CodeModel::IVariableDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x13::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	array<System::String^>^ Temp_5 = nullptr;
	System::Collections::ICollection^ Temp_6 = nullptr;
	Root::T_x159::T_x8^ Temp_7 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Collections::IDictionary^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::Int32 Temp_16 = 0;
	//local variables.
	Root::T_x159::T_x8^ V_0 = nullptr;
	System::Collections::IDictionary^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IVariableDeclaration^ V_3 = nullptr;
	array<System::String^>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_5=11;                                                     //stloc				V_5
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_005e;                                               //br.s				IL_005e
	IL_000d:                                                                        //ldloc				V_5
	IL_0011:            switch(V_5){case 0:goto IL_00b4;case 1:goto IL_01c9;case 2:goto IL_00ec;case 3:goto IL_01b7;case 4:goto IL_0208;case 5:goto IL_013f;case 6:goto IL_0100;case 7:goto IL_00c5;case 8:goto IL_0113;case 9:goto IL_016f;case 10:goto IL_0158;case 11:goto IL_000b;case 12:goto IL_0243;case 13:goto IL_012f;case 14:goto IL_00a1;case 15:goto IL_0186;case 16:goto IL_0224;case 17:goto IL_0075;};//switch				(IL_00b4,IL_01c9,IL_00ec,IL_01b7,IL_0208,IL_013f,IL_0100,IL_00c5,IL_0113,IL_016f,IL_0158,IL_000b,IL_0243,IL_012f,IL_00a1,IL_0186,IL_0224,IL_0075)
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_16=this->F_x12;                                        //ldfld				System::Int32 Root::T_x159::T_x13 F_x12
	IL_0064:                                                                        //ldc.i4.m1
	IL_0065:            if(Temp_16==-1)goto IL_0248;                                //beq				IL_0248
	IL_006a:                                                                        //ldc.i4				0x11
	IL_006f:            V_5=17;                                                     //stloc				V_5
	IL_0073:            /*goto IL_000d;*/goto IL_0075;                              //br.s				IL_000d
	IL_0075:            goto IL_0131;                                               //br				IL_0131
	IL_007a:                                                                        //ldloc.3
	IL_007b:                                                                        //ldloc.0
	IL_007c:                                                                        //ldloc.3
	IL_007d:            Temp_0=V_3->VariableType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_0082:            Temp_1=V_0->M_x2(Temp_0);                                   //callvirt				System::String^ Root::T_x159::T_x8::M_x2(Reflector::CodeModel::IType^)
	IL_0087:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_3)->Name=Temp_1;//callvirt				void Reflector::CodeModel::IVariableReference::set_Name(System::String^)
	IL_008c:                                                                        //ldloc.3
	IL_008d:                                                                        //ldloc.2
	IL_008e:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_3)->Identifier=V_2;//callvirt				void Reflector::CodeModel::IVariableReference::set_Identifier(System::Int32)
	IL_0093:                                                                        //ldc.i4				0xe
	IL_0098:            V_5=14;                                                     //stloc				V_5
	IL_009c:            /*goto IL_000d;*/goto IL_00a1;                              //br				IL_000d
	IL_00a1:            goto IL_015d;                                               //br				IL_015d
	IL_00a6:                                                                        //ldc.i4				0x0
	IL_00ab:            V_5=0;                                                      //stloc				V_5
	IL_00af:            /*goto IL_000d;*/goto IL_00b4;                              //br				IL_000d
	IL_00b4:                                                                        //ldloc.0
	IL_00b5:            if(V_0!=nullptr)goto IL_007a;                               //brtrue.s				IL_007a
	IL_00b7:                                                                        //ldc.i4				0x7
	IL_00bc:            V_5=7;                                                      //stloc				V_5
	IL_00c0:            /*goto IL_000d;*/goto IL_00c5;                              //br				IL_000d
	IL_00c5:            goto IL_01d1;                                               //br				IL_01d1
	IL_00ca:                                                                        //ldnull
	IL_00cb:            V_0=safe_cast<Root::T_x159::T_x8^>(nullptr);                //stloc.0
	IL_00cc:                                                                        //ldarg.0
	IL_00cd:            Temp_11=this->F_x13;                                        //ldfld				System::String^ Root::T_x159::T_x13 F_x13
	IL_00d2:                                                                        //ldarg.0
	IL_00d3:            Temp_12=this->F_x12;                                        //ldfld				System::Int32 Root::T_x159::T_x13 F_x12
	IL_00d8:            Temp_13=Root::T_x169::M_x1(Temp_11,Temp_12);                //call				System::Collections::IDictionary^ Root::T_x169::M_x1(System::String^,System::Int32)
	IL_00dd:            V_1=Temp_13;                                                //stloc.1
	IL_00de:                                                                        //ldc.i4				0x2
	IL_00e3:            V_5=2;                                                      //stloc				V_5
	IL_00e7:            /*goto IL_000d;*/goto IL_00ec;                              //br				IL_000d
	IL_00ec:                                                                        //ldloc.1
	IL_00ed:            if(V_1==nullptr)goto IL_0171;                               //brfalse				IL_0171
	IL_00f2:                                                                        //ldc.i4				0x6
	IL_00f7:            V_5=6;                                                      //stloc				V_5
	IL_00fb:            /*goto IL_000d;*/goto IL_0100;                              //br				IL_000d
	IL_0100:            goto IL_01b9;                                               //br				IL_01b9
	IL_0105:                                                                        //ldc.i4				0x8
	IL_010a:            V_5=8;                                                      //stloc				V_5
	IL_010e:            /*goto IL_000d;*/goto IL_0113;                              //br				IL_000d
	IL_0113:                                                                        //ldloc.2
	IL_0114:                                                                        //ldarg.0
	IL_0115:            Temp_8=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_011a:            Temp_9=Temp_8->Length;                                      //ldlen
	IL_011b:                                                                        //conv.i4
	IL_011c:            if(V_2<Temp_9)goto IL_020d;                                 //blt				IL_020d
	IL_0121:                                                                        //ldc.i4				0xd
	IL_0126:            V_5=13;                                                     //stloc				V_5
	IL_012a:            /*goto IL_000d;*/goto IL_012f;                              //br				IL_000d
	IL_012f:            goto IL_0171;                                               //br.s				IL_0171
	IL_0131:                                                                        //ldc.i4				0x5
	IL_0136:            V_5=5;                                                      //stloc				V_5
	IL_013a:            /*goto IL_000d;*/goto IL_013f;                              //br				IL_000d
	IL_013f:                                                                        //ldarg.0
	IL_0140:            Temp_2=this->F_x13;                                         //ldfld				System::String^ Root::T_x159::T_x13 F_x13
	IL_0145:            if(Temp_2==nullptr)goto IL_0248;                            //brfalse				IL_0248
	IL_014a:                                                                        //ldc.i4				0xa
	IL_014f:            V_5=10;                                                     //stloc				V_5
	IL_0153:            /*goto IL_000d;*/goto IL_0158;                              //br				IL_000d
	IL_0158:            goto IL_00ca;                                               //br				IL_00ca
	IL_015d:                                                                        //ldloc.2
	IL_015e:                                                                        //ldc.i4.1
	IL_015f:                                                                        //add
	IL_0160:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0161:                                                                        //ldc.i4				0x9
	IL_0166:            V_5=9;                                                      //stloc				V_5
	IL_016a:            /*goto IL_000d;*/goto IL_016f;                              //br				IL_000d
	IL_016f:            goto IL_0105;                                               //br.s				IL_0105
	IL_0171:                                                                        //ldarg.0
	IL_0172:                                                                        //ldc.i4.m1
	IL_0173:            this->F_x12=-1;                                             //stfld				System::Int32 Root::T_x159::T_x13 F_x12
	IL_0178:                                                                        //ldc.i4				0xf
	IL_017d:            V_5=15;                                                     //stloc				V_5
	IL_0181:            /*goto IL_000d;*/goto IL_0186;                              //br				IL_000d
	IL_0186:            goto IL_0248;                                               //br				IL_0248
	IL_018b:                                                                        //ldloc.3
	IL_018c:                                                                        //ldloc.1
	IL_018d:                                                                        //ldloc.2
	IL_018e:                                                                        //box				System::Int32
	IL_0193:            Temp_14=V_1[safe_cast<System::Object^>(V_2)];               //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_0198:                                                                        //castclass				System::String
	IL_019d:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_3)->Name=safe_cast<System::String^>(Temp_14);//callvirt				void Reflector::CodeModel::IVariableReference::set_Name(System::String^)
	IL_01a2:                                                                        //ldloc.3
	IL_01a3:                                                                        //ldloc.2
	IL_01a4:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_3)->Identifier=V_2;//callvirt				void Reflector::CodeModel::IVariableReference::set_Identifier(System::Int32)
	IL_01a9:                                                                        //ldc.i4				0x3
	IL_01ae:            V_5=3;                                                      //stloc				V_5
	IL_01b2:            /*goto IL_000d;*/goto IL_01b7;                              //br				IL_000d
	IL_01b7:            goto IL_015d;                                               //br.s				IL_015d
	IL_01b9:                                                                        //ldc.i4.0
	IL_01ba:            V_2=0;                                                      //stloc.2
	IL_01bb:                                                                        //ldc.i4				0x1
	IL_01c0:            V_5=1;                                                      //stloc				V_5
	IL_01c4:            /*goto IL_000d;*/goto IL_01c9;                              //br				IL_000d
	IL_01c9:            goto IL_01cc;                                               //br.s				IL_01cc
	IL_01cb:                                                                        //break
	IL_01cc:            goto IL_0105;                                               //br				IL_0105
	IL_01d1:                                                                        //ldloc.1
	IL_01d2:            Temp_3=V_1->Values;                                         //callvirt				System::Collections::ICollection^ System::Collections::IDictionary::get_Values()
	IL_01d7:            Temp_4=Temp_3->Count;                                       //callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01dc:                                                                        //conv.ovf.u4
	IL_01dd:            Temp_5=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_4));//newarr				System::String
	IL_01e2:            V_4=Temp_5;                                                 //stloc.s				V_4
	IL_01e4:                                                                        //ldloc.1
	IL_01e5:            Temp_6=V_1->Values;                                         //callvirt				System::Collections::ICollection^ System::Collections::IDictionary::get_Values()
	IL_01ea:                                                                        //ldloc.s				V_4
	IL_01ec:                                                                        //ldc.i4.0
	IL_01ed:            Temp_6->CopyTo(safe_cast<System::Array^>(V_4),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_01f2:                                                                        //ldloc.s				V_4
	IL_01f4:            Temp_7=gcnew Root::T_x159::T_x8(V_4);                       //newobj				void Root::T_x159::T_x8::.ctor(array<System::String^>^)
	IL_01f9:            V_0=Temp_7;                                                 //stloc.0
	IL_01fa:                                                                        //ldc.i4				0x4
	IL_01ff:            V_5=4;                                                      //stloc				V_5
	IL_0203:            /*goto IL_000d;*/goto IL_0208;                              //br				IL_000d
	IL_0208:            goto IL_007a;                                               //br				IL_007a
	IL_020d:                                                                        //ldarg.0
	IL_020e:            Temp_10=this->F_x2;                                         //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0213:                                                                        //ldloc.2
	IL_0214:                                                                        //ldelem.ref
	IL_0215:            V_3=Temp_10[V_2];                                           //stloc.3
	IL_0216:                                                                        //ldc.i4				0x10
	IL_021b:            V_5=16;                                                     //stloc				V_5
	IL_021f:            /*goto IL_000d;*/goto IL_0224;                              //br				IL_000d
	IL_0224:                                                                        //ldloc.1
	IL_0225:                                                                        //ldloc.2
	IL_0226:                                                                        //box				System::Int32
	IL_022b:            Temp_15=V_1->Contains(safe_cast<System::Object^>(V_2));     //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_0230:            if(!Temp_15)goto IL_00a6;                                   //brfalse				IL_00a6
	IL_0235:                                                                        //ldc.i4				0xc
	IL_023a:            V_5=12;                                                     //stloc				V_5
	IL_023e:            /*goto IL_000d;*/goto IL_0243;                              //br				IL_000d
	IL_0243:            goto IL_018b;                                               //br				IL_018b
	IL_0248:            return;                                                     //ret

}
inline void Root::T_x159::T_x13::M_x12(Reflector::CodeModel::IVariableDeclaration^ A_0)
//Reflector::CodeModel::IVariableDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x13::M_x13(Reflector::CodeModel::IVariableDeclaration^ A_0)
//Reflector::CodeModel::IVariableDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x13::M_x2()
//Reflector::CodeModel::IVariableDeclarationCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x159::T_x13::M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0)
//Reflector::CodeModel::IVariableDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000f;                            //brtrue.s				IL_000f
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:            return false;                                               //ret
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_001d:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldc.i4.m1
	IL_0025:                                                                        //ceq
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ceq
	IL_002a:            return ((Temp_4 == -1) == false);                           //ret

}
inline void Root::T_x159::T_x13::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IVariableDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x13::M_x2(System::Int32 A_0,Reflector::CodeModel::IVariableDeclaration^ A_1)
//Reflector::CodeModel::IVariableDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x159::T_x13::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x159::T_x13::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x159::T_x13::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IVariableDeclaration^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IVariableDeclaration^>^ Root::T_x159::T_x13 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline Root::T_x159::T_x8::T_x8(array<System::String^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::Hashtable^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x159::T_x8 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0011:            this->F_x2=Temp_1;                                          //stfld				System::Collections::Hashtable^ Root::T_x159::T_x8 F_x2
	IL_0016:                                                                        //ldarg.0
	IL_0017:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x159::T_x8 F_x1
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_2->AddRange(safe_cast<System::Collections::ICollection^>(A_0));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0028:            return;                                                     //ret

}
inline System::String^ Root::T_x159::T_x8::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::Char Temp_1 = (System::Char)0;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Char Temp_14 = (System::Char)0;
	System::Boolean Temp_15 = false;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::Collections::Hashtable^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Int32 Temp_32 = 0;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Int32 Temp_35 = 0;
	System::Char Temp_36 = (System::Char)0;
	System::Char Temp_37 = (System::Char)0;
	System::Boolean Temp_38 = false;
	System::Char Temp_39 = (System::Char)0;
	System::Boolean Temp_40 = false;
	Reflector::CodeModel::IType^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	Reflector::CodeModel::IType^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::Collections::Hashtable^ Temp_49 = nullptr;
	System::Object^ Temp_50 = nullptr;
	System::Object^ Temp_51 = nullptr;
	System::Int32 Temp_52 = 0;
	System::Collections::Hashtable^ Temp_53 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	Reflector::CodeModel::IArrayType^ V_1 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_2 = nullptr;
	Reflector::CodeModel::IPointerType^ V_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Char V_7 = (System::Char)0;
	System::Object^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_10=6;                                                     //stloc				V_10
	IL_0009:                                                                        //ldc.i4				0x1c
	IL_000e:            V_9=28;                                                     //stloc				V_9
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_00ce;                                               //br				IL_00ce
	IL_0019:                                                                        //ldloc				V_9
	IL_001d:            switch(V_9){case 0:goto IL_05fa;case 1:goto IL_045b;case 2:goto IL_0273;case 3:goto IL_0539;case 4:goto IL_0210;case 5:goto IL_0507;case 6:goto IL_01ee;case 7:goto IL_02e4;case 8:goto IL_0176;case 9:goto IL_046f;case 10:goto IL_04b1;case 11:goto IL_049e;case 12:goto IL_06bd;case 13:goto IL_063c;case 14:goto IL_0592;case 15:goto IL_02b7;case 16:goto IL_040f;case 17:goto IL_0112;case 18:goto IL_05df;case 19:goto IL_0522;case 20:goto IL_0441;case 21:goto IL_0295;case 22:goto IL_0125;case 23:goto IL_0241;case 24:goto IL_04c4;case 25:goto IL_0148;case 26:goto IL_00fb;case 27:goto IL_0162;case 28:goto IL_0014;case 29:goto IL_01ba;case 30:goto IL_0579;case 31:goto IL_00e8;case 32:goto IL_0561;case 33:goto IL_06e6;case 34:goto IL_061a;case 35:goto IL_06d0;case 36:goto IL_068c;case 37:goto IL_0198;case 38:goto IL_05a5;case 39:goto IL_01ca;case 40:goto IL_0679;case 41:goto IL_0665;case 42:goto IL_0223;};//switch				(IL_05fa,IL_045b,IL_0273,IL_0539,IL_0210,IL_0507,IL_01ee,IL_02e4,IL_0176,IL_046f,IL_04b1,IL_049e,IL_06bd,IL_063c,IL_0592,IL_02b7,IL_040f,IL_0112,IL_05df,IL_0522,IL_0441,IL_0295,IL_0125,IL_0241,IL_04c4,IL_0148,IL_00fb,IL_0162,IL_0014,IL_01ba,IL_0579,IL_00e8,IL_0561,IL_06e6,IL_061a,IL_06d0,IL_068c,IL_0198,IL_05a5,IL_01ca,IL_0679,IL_0665,IL_0223)
	IL_00ce:                                                                        //volatile.
	IL_00d0:            Temp_53=Root::T_x188::F_x55;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x55
	IL_00d5:            if(Temp_53!=nullptr)goto IL_0641;                           //brtrue				IL_0641
	IL_00da:                                                                        //ldc.i4				0x1f
	IL_00df:            V_9=31;                                                     //stloc				V_9
	IL_00e3:            /*goto IL_0019;*/goto IL_00e8;                              //br				IL_0019
	IL_00e8:            goto IL_02e9;                                               //br				IL_02e9
	IL_00ed:                                                                        //ldc.i4				0x1a
	IL_00f2:            V_9=26;                                                     //stloc				V_9
	IL_00f6:            /*goto IL_0019;*/goto IL_00fb;                              //br				IL_0019
	IL_00fb:                                                                        //ldloc.0
	IL_00fc:                                                                        //dup
	IL_00fd:            V_8=safe_cast<System::Object^>(V_0);                        //stloc.s				V_8
	IL_00ff:            if(V_0==nullptr)goto IL_06eb;                               //brfalse				IL_06eb
	IL_0104:                                                                        //ldc.i4				0x11
	IL_0109:            V_9=17;                                                     //stloc				V_9
	IL_010d:            /*goto IL_0019;*/goto IL_0112;                              //br				IL_0019
	IL_0112:            goto IL_01bc;                                               //br				IL_01bc
	IL_0117:                                                                        //ldc.i4				0x16
	IL_011c:            V_9=22;                                                     //stloc				V_9
	IL_0120:            /*goto IL_0019;*/goto IL_0125;                              //br				IL_0019
	IL_0125:                                                                        //ldloc.s				V_5
	IL_0127:                                                                        //ldloc.s				V_6
	IL_0129:                                                                        //ldc.i4.1
	IL_012a:                                                                        //add
	IL_012b:            Temp_14=V_5[(V_6 + 1)];                                     //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_0130:            Temp_15=System::Char::IsDigit(Temp_14);                     //call				System::Boolean System::Char::IsDigit(System::Char)
	IL_0135:            if(Temp_15)goto IL_057e;                                    //brtrue				IL_057e
	IL_013a:                                                                        //ldc.i4				0x19
	IL_013f:            V_9=25;                                                     //stloc				V_9
	IL_0143:            /*goto IL_0019;*/goto IL_0148;                              //br				IL_0019
	IL_0148:            goto IL_067e;                                               //br				IL_067e
	IL_014d:                                                                        //ldarg.0
	IL_014e:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_0153:            V_2=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.2
	IL_0154:                                                                        //ldc.i4				0x1b
	IL_0159:            V_9=27;                                                     //stloc				V_9
	IL_015d:            /*goto IL_0019;*/goto IL_0162;                              //br				IL_0019
	IL_0162:                                                                        //ldloc.2
	IL_0163:            if(V_2==nullptr)goto IL_0446;                               //brfalse				IL_0446
	IL_0168:                                                                        //ldc.i4				0x8
	IL_016d:            V_9=8;                                                      //stloc				V_9
	IL_0171:            /*goto IL_0019;*/goto IL_0176;                              //br				IL_0019
	IL_0176:            goto IL_0246;                                               //br				IL_0246
	IL_017b:                                                                        //ldstr				L"\x4A23\x5325\x4527"
	IL_0180:                                                                        //ldloc				V_10
	IL_0184:            Temp_16=a(L"\x4A23\x5325\x4527",V_10);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0189:            V_0=Temp_16;                                                //stloc.0
	IL_018a:                                                                        //ldc.i4				0x25
	IL_018f:            V_9=37;                                                     //stloc				V_9
	IL_0193:            /*goto IL_0019;*/goto IL_0198;                              //br				IL_0019
	IL_0198:            goto IL_06eb;                                               //br				IL_06eb
	IL_019d:                                                                        //ldstr				L"\x4623\x5325\x4E27\x4C29\x492B\x5C2D"
	IL_01a2:                                                                        //ldloc				V_10
	IL_01a6:            Temp_12=a(L"\x4623\x5325\x4E27\x4C29\x492B\x5C2D",V_10);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ab:            V_0=Temp_12;                                                //stloc.0
	IL_01ac:                                                                        //ldc.i4				0x1d
	IL_01b1:            V_9=29;                                                     //stloc				V_9
	IL_01b5:            /*goto IL_0019;*/goto IL_01ba;                              //br				IL_0019
	IL_01ba:            goto IL_014d;                                               //br.s				IL_014d
	IL_01bc:                                                                        //ldc.i4				0x27
	IL_01c1:            V_9=39;                                                     //stloc				V_9
	IL_01c5:            /*goto IL_0019;*/goto IL_01ca;                              //br				IL_0019
	IL_01ca:                                                                        //volatile.
	IL_01cc:            Temp_49=Root::T_x188::F_x55;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x55
	IL_01d1:            Temp_51=V_8;                                                //ldloc.s				V_8
	IL_01d3:            Temp_50=Temp_49[Temp_51];                                   //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_01d8:                                                                        //dup
	IL_01d9:            V_8=Temp_50;                                                //stloc.s				V_8
	IL_01db:            if(V_8==nullptr)goto IL_06eb;                               //brfalse				IL_06eb
	IL_01e0:                                                                        //ldc.i4				0x6
	IL_01e5:            V_9=6;                                                      //stloc				V_9
	IL_01e9:            /*goto IL_0019;*/goto IL_01ee;                              //br				IL_0019
	IL_01ee:            goto IL_04b6;                                               //br				IL_04b6
	IL_01f3:                                                                        //ldstr				L"\x4723\x4E25"
	IL_01f8:                                                                        //ldloc				V_10
	IL_01fc:            Temp_18=a(L"\x4723\x4E25",V_10);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0201:            V_0=Temp_18;                                                //stloc.0
	IL_0202:                                                                        //ldc.i4				0x4
	IL_0207:            V_9=4;                                                      //stloc				V_9
	IL_020b:            /*goto IL_0019;*/goto IL_0210;                              //br				IL_0019
	IL_0210:            goto IL_06eb;                                               //br				IL_06eb
	IL_0215:                                                                        //ldc.i4				0x2a
	IL_021a:            V_9=42;                                                     //stloc				V_9
	IL_021e:            /*goto IL_0019;*/goto IL_0223;                              //br				IL_0019
	IL_0223:                                                                        //ldloc.s				V_6
	IL_0225:                                                                        //ldc.i4.1
	IL_0226:                                                                        //add
	IL_0227:                                                                        //ldloc.s				V_5
	IL_0229:            Temp_52=V_5->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_022e:            if((V_6 + 1)>=Temp_52)goto IL_057e;                         //bge				IL_057e
	IL_0233:                                                                        //ldc.i4				0x17
	IL_0238:            V_9=23;                                                     //stloc				V_9
	IL_023c:            /*goto IL_0019;*/goto IL_0241;                              //br				IL_0019
	IL_0241:            goto IL_0117;                                               //br				IL_0117
	IL_0246:                                                                        //ldloc.2
	IL_0247:            Temp_3=V_2->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_024c:            Temp_4=Root::T_x159::T_x8::M_x1(Temp_3);                    //call				System::String^ Root::T_x159::T_x8::M_x1(Reflector::CodeModel::IType^)
	IL_0251:                                                                        //ldstr				L"\x7623\x4325\x4E27"
	IL_0256:                                                                        //ldloc				V_10
	IL_025a:            Temp_5=a(L"\x7623\x4325\x4E27",V_10);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025f:            Temp_6=System::String::Concat(Temp_4,Temp_5);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0264:            V_0=Temp_6;                                                 //stloc.0
	IL_0265:                                                                        //ldc.i4				0x2
	IL_026a:            V_9=2;                                                      //stloc				V_9
	IL_026e:            /*goto IL_0019;*/goto IL_0273;                              //br				IL_0019
	IL_0273:            goto IL_0446;                                               //br				IL_0446
	IL_0278:                                                                        //ldstr				L"\x4223\x4A25\x4927\x4D29"
	IL_027d:                                                                        //ldloc				V_10
	IL_0281:            Temp_17=a(L"\x4223\x4A25\x4927\x4D29",V_10);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0286:            V_0=Temp_17;                                                //stloc.0
	IL_0287:                                                                        //ldc.i4				0x15
	IL_028c:            V_9=21;                                                     //stloc				V_9
	IL_0290:            /*goto IL_0019;*/goto IL_0295;                              //br				IL_0019
	IL_0295:            goto IL_06eb;                                               //br				IL_06eb
	IL_029a:                                                                        //ldstr				L"\x4B23\x4425\x4227"
	IL_029f:                                                                        //ldloc				V_10
	IL_02a3:            Temp_20=a(L"\x4B23\x4425\x4227",V_10);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a8:            V_0=Temp_20;                                                //stloc.0
	IL_02a9:                                                                        //ldc.i4				0xf
	IL_02ae:            V_9=15;                                                     //stloc				V_9
	IL_02b2:            /*goto IL_0019;*/goto IL_02b7;                              //br				IL_0019
	IL_02b7:            goto IL_06eb;                                               //br				IL_06eb
	IL_02bc:                                                                        //ldloc.s				V_4
	IL_02be:            Temp_33=V_4->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_02c3:            V_5=Temp_33;                                                //stloc.s				V_5
	IL_02c5:            Temp_34=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_02ca:            V_0=Temp_34;                                                //stloc.0
	IL_02cb:                                                                        //ldloc.s				V_5
	IL_02cd:            Temp_35=V_5->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_02d2:                                                                        //ldc.i4.1
	IL_02d3:                                                                        //sub
	IL_02d4:            V_6=(Temp_35 - 1);                                          //stloc.s				V_6
	IL_02d6:                                                                        //ldc.i4				0x7
	IL_02db:            V_9=7;                                                      //stloc				V_9
	IL_02df:            /*goto IL_0019;*/goto IL_02e4;                              //br				IL_0019
	IL_02e4:            goto IL_06c2;                                               //br				IL_06c2
	IL_02e9:                                                                        //ldc.i4.s				20
	IL_02eb:                                                                        //ldc.r4				0.5
	IL_02f0:            Temp_21=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(20),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_02f5:                                                                        //dup
	IL_02f6:                                                                        //ldstr				L"\x4D23\x4825\x5C27"
	IL_02fb:                                                                        //ldloc				V_10
	IL_02ff:            Temp_22=a(L"\x4D23\x4825\x5C27",V_10);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0304:                                                                        //ldc.i4.0
	IL_0305:                                                                        //box				System::Int32
	IL_030a:            Temp_21->Add(safe_cast<System::Object^>(Temp_22),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_030f:                                                                        //dup
	IL_0310:                                                                        //ldstr				L"\x5123\x4F25\x4627\x5E29"
	IL_0315:                                                                        //ldloc				V_10
	IL_0319:            Temp_23=a(L"\x5123\x4F25\x4627\x5E29",V_10);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_031e:                                                                        //ldc.i4.1
	IL_031f:                                                                        //box				System::Int32
	IL_0324:            Temp_21->Add(safe_cast<System::Object^>(Temp_23),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0329:                                                                        //dup
	IL_032a:                                                                        //ldstr				L"\x4623\x5F25\x5C27\x4F29"
	IL_032f:                                                                        //ldloc				V_10
	IL_0333:            Temp_24=a(L"\x4623\x5F25\x5C27\x4F29",V_10);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0338:                                                                        //ldc.i4.2
	IL_0339:                                                                        //box				System::Int32
	IL_033e:            Temp_21->Add(safe_cast<System::Object^>(Temp_24),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0343:                                                                        //dup
	IL_0344:                                                                        //ldstr				L"\x4223\x4A25\x4727\x4B29\x582B"
	IL_0349:                                                                        //ldloc				V_10
	IL_034d:            Temp_25=a(L"\x4223\x4A25\x4727\x4B29\x582B",V_10);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0352:                                                                        //ldc.i4.3
	IL_0353:                                                                        //box				System::Int32
	IL_0358:            Temp_21->Add(safe_cast<System::Object^>(Temp_25),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_035d:                                                                        //dup
	IL_035e:                                                                        //ldstr				L"\x4023\x4925\x5D27\x4829\x402B\x4B2D"
	IL_0363:                                                                        //ldloc				V_10
	IL_0367:            Temp_26=a(L"\x4023\x4925\x5D27\x4829\x402B\x4B2D",V_10);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_036c:                                                                        //ldc.i4.4
	IL_036d:                                                                        //box				System::Int32
	IL_0372:            Temp_21->Add(safe_cast<System::Object^>(Temp_26),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0377:                                                                        //dup
	IL_0378:                                                                        //ldstr				L"\x4023\x4325\x4B27\x4329\x412B\x4F2D\x5C2F"
	IL_037d:                                                                        //ldloc				V_10
	IL_0381:            Temp_27=a(L"\x4023\x4325\x4B27\x4329\x412B\x4F2D\x5C2F",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0386:                                                                        //ldc.i4.5
	IL_0387:                                                                        //box				System::Int32
	IL_038c:            Temp_21->Add(safe_cast<System::Object^>(Temp_27),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0391:                                                                        //dup
	IL_0392:                                                                        //ldstr				L"\x4623\x4925\x4727\x4629\x492B\x4F2D\x5E2F"
	IL_0397:                                                                        //ldloc				V_10
	IL_039b:            Temp_28=a(L"\x4623\x4925\x4727\x4629\x492B\x4F2D\x5E2F",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a0:                                                                        //ldc.i4.6
	IL_03a1:                                                                        //box				System::Int32
	IL_03a6:            Temp_21->Add(safe_cast<System::Object^>(Temp_28),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03ab:                                                                        //dup
	IL_03ac:                                                                        //ldstr				L"\x4723\x4E25\x4927\x5829"
	IL_03b1:                                                                        //ldloc				V_10
	IL_03b5:            Temp_29=a(L"\x4723\x4E25\x4927\x5829",V_10);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03ba:                                                                        //ldc.i4.7
	IL_03bb:                                                                        //box				System::Int32
	IL_03c0:            Temp_21->Add(safe_cast<System::Object^>(Temp_29),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03c5:                                                                        //dup
	IL_03c6:                                                                        //ldstr				L"\x5723\x5225\x5A27\x4329\x422B\x492D"
	IL_03cb:                                                                        //ldloc				V_10
	IL_03cf:            Temp_30=a(L"\x5723\x5225\x5A27\x4329\x422B\x492D",V_10);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d4:                                                                        //ldc.i4.8
	IL_03d5:                                                                        //box				System::Int32
	IL_03da:            Temp_21->Add(safe_cast<System::Object^>(Temp_30),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03df:                                                                        //dup
	IL_03e0:                                                                        //ldstr				L"\x4B23\x4425\x4227\x4F29\x4F2B\x5A2D"
	IL_03e5:                                                                        //ldloc				V_10
	IL_03e9:            Temp_31=a(L"\x4B23\x4425\x4227\x4F29\x4F2B\x5A2D",V_10);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03ee:                                                                        //ldc.i4.s				9
	IL_03f0:                                                                        //box				System::Int32
	IL_03f5:            Temp_21->Add(safe_cast<System::Object^>(Temp_31),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03fa:                                                                        //volatile.
	IL_03fc:            Root::T_x188::F_x55=Temp_21;                                //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x55
	IL_0401:                                                                        //ldc.i4				0x10
	IL_0406:            V_9=16;                                                     //stloc				V_9
	IL_040a:            /*goto IL_0019;*/goto IL_040f;                              //br				IL_0019
	IL_040f:            goto IL_0641;                                               //br				IL_0641
	IL_0414:                                                                        //ldloc.1
	IL_0415:            Temp_45=V_1->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_041a:            Temp_46=Root::T_x159::T_x8::M_x1(Temp_45);                  //call				System::String^ Root::T_x159::T_x8::M_x1(Reflector::CodeModel::IType^)
	IL_041f:                                                                        //ldstr				L"\x6523\x5425\x5A27\x4B29\x552B"
	IL_0424:                                                                        //ldloc				V_10
	IL_0428:            Temp_47=a(L"\x6523\x5425\x5A27\x4B29\x552B",V_10);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_042d:            Temp_48=System::String::Concat(Temp_46,Temp_47);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0432:            V_0=Temp_48;                                                //stloc.0
	IL_0433:                                                                        //ldc.i4				0x14
	IL_0438:            V_9=20;                                                     //stloc				V_9
	IL_043c:            /*goto IL_0019;*/goto IL_0441;                              //br				IL_0019
	IL_0441:            goto IL_014d;                                               //br				IL_014d
	IL_0446:                                                                        //ldarg.0
	IL_0447:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_044c:            V_3=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.3
	IL_044d:                                                                        //ldc.i4				0x1
	IL_0452:            V_9=1;                                                      //stloc				V_9
	IL_0456:            /*goto IL_0019;*/goto IL_045b;                              //br				IL_0019
	IL_045b:                                                                        //ldloc.3
	IL_045c:            if(V_3==nullptr)goto IL_05e4;                               //brfalse				IL_05e4
	IL_0461:                                                                        //ldc.i4				0x9
	IL_0466:            V_9=9;                                                      //stloc				V_9
	IL_046a:            /*goto IL_0019;*/goto IL_046f;                              //br				IL_0019
	IL_046f:            goto IL_0471;                                               //br.s				IL_0471
	IL_0471:                                                                        //ldloc.3
	IL_0472:            Temp_7=V_3->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0477:            Temp_8=Root::T_x159::T_x8::M_x1(Temp_7);                    //call				System::String^ Root::T_x159::T_x8::M_x1(Reflector::CodeModel::IType^)
	IL_047c:                                                                        //ldstr				L"\x7423\x5225\x5A27"
	IL_0481:                                                                        //ldloc				V_10
	IL_0485:            Temp_9=a(L"\x7423\x5225\x5A27",V_10);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_048a:            Temp_10=System::String::Concat(Temp_8,Temp_9);              //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_048f:            V_0=Temp_10;                                                //stloc.0
	IL_0490:                                                                        //ldc.i4				0xb
	IL_0495:            V_9=11;                                                     //stloc				V_9
	IL_0499:            /*goto IL_0019;*/goto IL_049e;                              //br				IL_0019
	IL_049e:            goto IL_05e4;                                               //br				IL_05e4
	IL_04a3:                                                                        //ldc.i4				0xa
	IL_04a8:            V_9=10;                                                     //stloc				V_9
	IL_04ac:            /*goto IL_0019;*/goto IL_04b1;                              //br				IL_0019
	IL_04b1:            goto IL_06eb;                                               //br				IL_06eb
	IL_04b6:                                                                        //ldc.i4				0x18
	IL_04bb:            V_9=24;                                                     //stloc				V_9
	IL_04bf:            /*goto IL_0019;*/goto IL_04c4;                              //br				IL_0019
	IL_04c4:                                                                        //ldloc.s				V_8
	IL_04c6:                                                                        //unbox				System::Int32
	IL_04cb:                                                                        //ldind.i4
	IL_04cc:            switch(safe_cast<System::Int32>(V_8)){case 0:goto IL_017b;case 1:goto IL_017b;case 2:goto IL_017b;case 3:goto IL_017b;case 4:goto IL_017b;case 5:goto IL_017b;case 6:goto IL_0278;case 7:goto IL_01f3;case 8:goto IL_061f;case 9:goto IL_029a;};//switch				(IL_017b,IL_017b,IL_017b,IL_017b,IL_017b,IL_017b,IL_0278,IL_01f3,IL_061f,IL_029a)
	IL_04f9:                                                                        //ldc.i4				0x5
	IL_04fe:            V_9=5;                                                      //stloc				V_9
	IL_0502:            /*goto IL_0019;*/goto IL_0507;                              //br				IL_0019
	IL_0507:            goto IL_04a3;                                               //br.s				IL_04a3
	IL_0509:                                                                        //ldloc.s				V_5
	IL_050b:                                                                        //ldloc.s				V_6
	IL_050d:            Temp_36=V_5[V_6];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_0512:            V_7=Temp_36;                                                //stloc.s				V_7
	IL_0514:                                                                        //ldc.i4				0x13
	IL_0519:            V_9=19;                                                     //stloc				V_9
	IL_051d:            /*goto IL_0019;*/goto IL_0522;                              //br				IL_0019
	IL_0522:                                                                        //ldloc.s				V_7
	IL_0524:            Temp_13=System::Char::IsDigit(V_7);                         //call				System::Boolean System::Char::IsDigit(System::Char)
	IL_0529:            if(Temp_13)goto IL_057e;                                    //brtrue.s				IL_057e
	IL_052b:                                                                        //ldc.i4				0x3
	IL_0530:            V_9=3;                                                      //stloc				V_9
	IL_0534:            /*goto IL_0019;*/goto IL_0539;                              //br				IL_0019
	IL_0539:            goto IL_053b;                                               //br.s				IL_053b
	IL_053b:                                                                        //ldloc.s				V_7
	IL_053d:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0542:            Temp_1=System::Char::ToLower(V_7,Temp_0);                   //call				System::Char System::Char::ToLower(System::Char,System::Globalization::CultureInfo^)
	IL_0547:                                                                        //box				System::Char
	IL_054c:                                                                        //ldloc.0
	IL_054d:            Temp_2=System::String::Concat(safe_cast<System::Object^>(Temp_1),safe_cast<System::Object^>(V_0));//call				System::String^ System::String::Concat(System::Object^,System::Object^)
	IL_0552:            V_0=Temp_2;                                                 //stloc.0
	IL_0553:                                                                        //ldc.i4				0x20
	IL_0558:            V_9=32;                                                     //stloc				V_9
	IL_055c:            /*goto IL_0019;*/goto IL_0561;                              //br				IL_0019
	IL_0561:                                                                        //ldloc.s				V_5
	IL_0563:            Temp_32=V_5->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_0568:                                                                        //ldc.i4.1
	IL_0569:            if(Temp_32<=1)goto IL_057e;                                 //ble.s				IL_057e
	IL_056b:                                                                        //ldc.i4				0x1e
	IL_0570:            V_9=30;                                                     //stloc				V_9
	IL_0574:            /*goto IL_0019;*/goto IL_0579;                              //br				IL_0019
	IL_0579:            goto IL_0215;                                               //br				IL_0215
	IL_057e:                                                                        //ldloc.s				V_6
	IL_0580:                                                                        //ldc.i4.1
	IL_0581:                                                                        //sub
	IL_0582:            V_6=(V_6 - 1);                                              //stloc.s				V_6
	IL_0584:                                                                        //ldc.i4				0xe
	IL_0589:            V_9=14;                                                     //stloc				V_9
	IL_058d:            /*goto IL_0019;*/goto IL_0592;                              //br				IL_0019
	IL_0592:            goto IL_06c2;                                               //br				IL_06c2
	IL_0597:                                                                        //ldc.i4				0x26
	IL_059c:            V_9=38;                                                     //stloc				V_9
	IL_05a0:            /*goto IL_0019;*/goto IL_05a5;                              //br				IL_0019
	IL_05a5:                                                                        //ldloc.1
	IL_05a6:            Temp_41=V_1->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_05ab:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D"
	IL_05b0:                                                                        //ldloc				V_10
	IL_05b4:            Temp_42=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D",V_10);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b9:                                                                        //ldstr				L"\x6623\x5F25\x5C27\x4F29"
	IL_05be:                                                                        //ldloc				V_10
	IL_05c2:            Temp_43=a(L"\x6623\x5F25\x5C27\x4F29",V_10);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05c7:            Temp_44=Root::T_x159::T_x8::M_x1(Temp_41,Temp_42,Temp_43);  //call				System::Boolean Root::T_x159::T_x8::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_05cc:            if(!Temp_44)goto IL_0414;                                   //brfalse				IL_0414
	IL_05d1:                                                                        //ldc.i4				0x12
	IL_05d6:            V_9=18;                                                     //stloc				V_9
	IL_05da:            /*goto IL_0019;*/goto IL_05df;                              //br				IL_0019
	IL_05df:            goto IL_019d;                                               //br				IL_019d
	IL_05e4:                                                                        //ldarg.0
	IL_05e5:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_05ea:            V_4=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.s				V_4
	IL_05ec:                                                                        //ldc.i4				0x0
	IL_05f1:            V_9=0;                                                      //stloc				V_9
	IL_05f5:            /*goto IL_0019;*/goto IL_05fa;                              //br				IL_0019
	IL_05fa:                                                                        //ldc.i4.4
	IL_05fb:                                                                        //dup
	IL_05fc:                                                                        //dup
	IL_05fd:                                                                        //ldc.i4.2
	IL_05fe:                                                                        //sub
	IL_05ff:                                                                        //blt				IL_05fb
	IL_0604:                                                                        //pop
	IL_0605:                                                                        //ldloc.s				V_4
	IL_0607:            if(V_4==nullptr)goto IL_00ed;                               //brfalse				IL_00ed
	IL_060c:                                                                        //ldc.i4				0x22
	IL_0611:            V_9=34;                                                     //stloc				V_9
	IL_0615:            /*goto IL_0019;*/goto IL_061a;                              //br				IL_0019
	IL_061a:            goto IL_02bc;                                               //br				IL_02bc
	IL_061f:                                                                        //ldstr				L"\x5023\x4325\x5027\x5E29"
	IL_0624:                                                                        //ldloc				V_10
	IL_0628:            Temp_19=a(L"\x5023\x4325\x5027\x5E29",V_10);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_062d:            V_0=Temp_19;                                                //stloc.0
	IL_062e:                                                                        //ldc.i4				0xd
	IL_0633:            V_9=13;                                                     //stloc				V_9
	IL_0637:            /*goto IL_0019;*/goto IL_063c;                              //br				IL_0019
	IL_063c:            goto IL_06eb;                                               //br				IL_06eb
	IL_0641:                                                                        //ldstr				L"\x4823\x4925\x4B27\x4B29\x402B"
	IL_0646:                                                                        //ldloc				V_10
	IL_064a:            Temp_11=a(L"\x4823\x4925\x4B27\x4B29\x402B",V_10);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_064f:            V_0=Temp_11;                                                //stloc.0
	IL_0650:                                                                        //ldarg.0
	IL_0651:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_0656:            V_1=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.1
	IL_0657:                                                                        //ldc.i4				0x29
	IL_065c:            V_9=41;                                                     //stloc				V_9
	IL_0660:            /*goto IL_0019;*/goto IL_0665;                              //br				IL_0019
	IL_0665:                                                                        //ldloc.1
	IL_0666:            if(V_1==nullptr)goto IL_014d;                               //brfalse				IL_014d
	IL_066b:                                                                        //ldc.i4				0x28
	IL_0670:            V_9=40;                                                     //stloc				V_9
	IL_0674:            /*goto IL_0019;*/goto IL_0679;                              //br				IL_0019
	IL_0679:            goto IL_0597;                                               //br				IL_0597
	IL_067e:                                                                        //ldc.i4				0x24
	IL_0683:            V_9=36;                                                     //stloc				V_9
	IL_0687:            /*goto IL_0019;*/goto IL_068c;                              //br				IL_0019
	IL_068c:                                                                        //ldloc.s				V_5
	IL_068e:                                                                        //ldloc.s				V_6
	IL_0690:            Temp_37=V_5[V_6];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_0695:            Temp_38=System::Char::IsLower(Temp_37);                     //call				System::Boolean System::Char::IsLower(System::Char)
	IL_069a:                                                                        //ldloc.s				V_5
	IL_069c:                                                                        //ldloc.s				V_6
	IL_069e:                                                                        //ldc.i4.1
	IL_069f:                                                                        //add
	IL_06a0:            Temp_39=V_5[(V_6 + 1)];                                     //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_06a5:            Temp_40=System::Char::IsLower(Temp_39);                     //call				System::Boolean System::Char::IsLower(System::Char)
	IL_06aa:            if(Temp_38!=Temp_40)goto IL_00ed;                           //bne.un				IL_00ed
	IL_06af:                                                                        //ldc.i4				0xc
	IL_06b4:            V_9=12;                                                     //stloc				V_9
	IL_06b8:            /*goto IL_0019;*/goto IL_06bd;                              //br				IL_0019
	IL_06bd:            goto IL_057e;                                               //br				IL_057e
	IL_06c2:                                                                        //ldc.i4				0x23
	IL_06c7:            V_9=35;                                                     //stloc				V_9
	IL_06cb:            /*goto IL_0019;*/goto IL_06d0;                              //br				IL_0019
	IL_06d0:                                                                        //ldloc.s				V_6
	IL_06d2:                                                                        //ldc.i4.0
	IL_06d3:            if(V_6>=0)goto IL_0509;                                     //bge				IL_0509
	IL_06d8:                                                                        //ldc.i4				0x21
	IL_06dd:            V_9=33;                                                     //stloc				V_9
	IL_06e1:            /*goto IL_0019;*/goto IL_06e6;                              //br				IL_0019
	IL_06e6:            goto IL_00ed;                                               //br				IL_00ed
	IL_06eb:                                                                        //ldloc.0
	IL_06ec:            return V_0;                                                 //ret

}
inline System::Boolean Root::T_x159::T_x8::M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003b;case 1:goto IL_0073;case 2:goto IL_002d;case 3:goto IL_0057;};//switch				(IL_003b,IL_0073,IL_002d,IL_0057)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0021:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0022:                                                                        //ldc.i4				0x2
	IL_0027:            V_1=2;                                                      //stloc				V_1
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:                                                                        //ldloc.0
	IL_002e:            if(V_0==nullptr)goto IL_0075;                               //brfalse.s				IL_0075
	IL_0030:                                                                        //ldc.i4				0x0
	IL_0035:            V_1=0;                                                      //stloc				V_1
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_004c;                                               //br.s				IL_004c
	IL_003d:                                                                        //ldc.i4.0
	IL_003e:            return false;                                               //ret
	IL_003f:                                                                        //ldloc.0
	IL_0040:            Temp_0=V_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0045:                                                                        //ldarg.2
	IL_0046:            Temp_1=(Temp_0 == A_2);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_004b:            return Temp_1;                                              //ret
	IL_004c:                                                                        //ldc.i4				0x3
	IL_0051:            V_1=3;                                                      //stloc				V_1
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:                                                                        //ldloc.0
	IL_0058:            Temp_2=V_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_3=(Temp_2 == A_1);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0063:            if(!Temp_3)goto IL_003d;                                    //brfalse.s				IL_003d
	IL_0065:            goto IL_0068;                                               //br.s				IL_0068
	IL_0067:                                                                        //break
	IL_0068:                                                                        //ldc.i4				0x1
	IL_006d:            V_1=1;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0002;*/goto IL_0073;                              //br.s				IL_0002
	IL_0073:            goto IL_003f;                                               //br.s				IL_003f
	IL_0075:                                                                        //ldc.i4.0
	IL_0076:            return false;                                               //ret

}
inline System::String^ Root::T_x159::T_x8::M_x2(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Collections::Hashtable^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Collections::Hashtable^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Collections::Hashtable^ Temp_8 = nullptr;
	System::Collections::Hashtable^ Temp_9 = nullptr;
	System::Collections::ArrayList^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::Collections::Hashtable^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0082;case 1:goto IL_011f;case 2:goto IL_010b;case 3:goto IL_0047;case 4:goto IL_0132;case 5:goto IL_00e9;case 6:goto IL_014e;case 7:goto IL_00c2;case 8:goto IL_0095;case 9:goto IL_0060;};//switch				(IL_0082,IL_011f,IL_010b,IL_0047,IL_0132,IL_00e9,IL_014e,IL_00c2,IL_0095,IL_0060)
	IL_0033:                                                                        //ldarg.1
	IL_0034:            Temp_0=Root::T_x159::T_x8::M_x1(A_0);                       //call				System::String^ Root::T_x159::T_x8::M_x1(Reflector::CodeModel::IType^)
	IL_0039:            V_0=Temp_0;                                                 //stloc.0
	IL_003a:                                                                        //ldc.i4.1
	IL_003b:            V_1=1;                                                      //stloc.1
	IL_003c:                                                                        //ldc.i4				0x3
	IL_0041:            V_2=3;                                                      //stloc				V_2
	IL_0045:            /*goto IL_0002;*/goto IL_0047;                              //br.s				IL_0002
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_4=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x159::T_x8 F_x2
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_5=Temp_4->Contains(safe_cast<System::Object^>(V_0));   //callvirt				System::Boolean System::Collections::Hashtable::Contains(System::Object^)
	IL_0053:            if(!Temp_5)goto IL_0087;                                    //brfalse.s				IL_0087
	IL_0055:                                                                        //ldc.i4				0x9
	IL_005a:            V_2=9;                                                      //stloc				V_2
	IL_005e:            /*goto IL_0002;*/goto IL_0060;                              //br.s				IL_0002
	IL_0060:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_0062:            goto IL_0065;                                               //br.s				IL_0065
	IL_0064:                                                                        //break
	IL_0065:                                                                        //ldarg.0
	IL_0066:            Temp_9=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x159::T_x8 F_x2
	IL_006b:                                                                        //ldloc.0
	IL_006c:                                                                        //ldloc.1
	IL_006d:                                                                        //box				System::Int32
	IL_0072:            Temp_9[safe_cast<System::Object^>(V_0)]=safe_cast<System::Object^>(V_1);//callvirt				void System::Collections::Hashtable::set_Item(System::Object^,System::Object^)
	IL_0077:                                                                        //ldc.i4				0x0
	IL_007c:            V_2=0;                                                      //stloc				V_2
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_0153;                                               //br				IL_0153
	IL_0087:                                                                        //ldc.i4				0x8
	IL_008c:            V_2=8;                                                      //stloc				V_2
	IL_0090:            /*goto IL_0002;*/goto IL_0095;                              //br				IL_0002
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_10=this->F_x1;                                         //ldfld				System::Collections::ArrayList^ Root::T_x159::T_x8 F_x1
	IL_009b:                                                                        //ldloc.0
	IL_009c:                                                                        //ldloca.s				V_1
	IL_009e:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a3:            Temp_12=V_1.ToString(safe_cast<System::IFormatProvider^>(Temp_11));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00a8:            Temp_13=System::String::Concat(V_0,Temp_12);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00ad:            Temp_14=Temp_10->Contains(safe_cast<System::Object^>(Temp_13));//callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_00b2:            if(Temp_14)goto IL_010d;                                    //brtrue.s				IL_010d
	IL_00b4:                                                                        //ldc.i4				0x7
	IL_00b9:            V_2=7;                                                      //stloc				V_2
	IL_00bd:            /*goto IL_0002;*/goto IL_00c2;                              //br				IL_0002
	IL_00c2:            goto IL_0124;                                               //br.s				IL_0124
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:            Temp_15=this->F_x2;                                         //ldfld				System::Collections::Hashtable^ Root::T_x159::T_x8 F_x2
	IL_00ca:                                                                        //ldloc.0
	IL_00cb:            Temp_16=Temp_15[safe_cast<System::Object^>(V_0)];           //callvirt				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_00d0:                                                                        //unbox				System::Int32
	IL_00d5:                                                                        //ldind.i4
	IL_00d6:            V_1=safe_cast<System::Int32>(Temp_16);                      //stloc.1
	IL_00d7:                                                                        //ldloc.1
	IL_00d8:                                                                        //ldc.i4.1
	IL_00d9:                                                                        //add
	IL_00da:            V_1=(V_1 + 1);                                              //stloc.1
	IL_00db:                                                                        //ldc.i4				0x5
	IL_00e0:            V_2=5;                                                      //stloc				V_2
	IL_00e4:            /*goto IL_0002;*/goto IL_00e9;                              //br				IL_0002
	IL_00e9:            goto IL_0087;                                               //br.s				IL_0087
	IL_00eb:                                                                        //ldarg.0
	IL_00ec:            Temp_8=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x159::T_x8 F_x2
	IL_00f1:                                                                        //ldloc.0
	IL_00f2:                                                                        //ldloc.1
	IL_00f3:                                                                        //box				System::Int32
	IL_00f8:            Temp_8->Add(safe_cast<System::Object^>(V_0),safe_cast<System::Object^>(V_1));//callvirt				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_00fd:                                                                        //ldc.i4				0x2
	IL_0102:            V_2=2;                                                      //stloc				V_2
	IL_0106:            /*goto IL_0002;*/goto IL_010b;                              //br				IL_0002
	IL_010b:            goto IL_0153;                                               //br.s				IL_0153
	IL_010d:                                                                        //ldloc.1
	IL_010e:                                                                        //ldc.i4.1
	IL_010f:                                                                        //add
	IL_0110:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0111:                                                                        //ldc.i4				0x1
	IL_0116:            V_2=1;                                                      //stloc				V_2
	IL_011a:            /*goto IL_0002;*/goto IL_011f;                              //br				IL_0002
	IL_011f:            goto IL_0087;                                               //br				IL_0087
	IL_0124:                                                                        //ldc.i4				0x4
	IL_0129:            V_2=4;                                                      //stloc				V_2
	IL_012d:            /*goto IL_0002;*/goto IL_0132;                              //br				IL_0002
	IL_0132:                                                                        //ldarg.0
	IL_0133:            Temp_6=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x159::T_x8 F_x2
	IL_0138:                                                                        //ldloc.0
	IL_0139:            Temp_7=Temp_6->Contains(safe_cast<System::Object^>(V_0));   //callvirt				System::Boolean System::Collections::Hashtable::Contains(System::Object^)
	IL_013e:            if(!Temp_7)goto IL_00eb;                                    //brfalse.s				IL_00eb
	IL_0140:                                                                        //ldc.i4				0x6
	IL_0145:            V_2=6;                                                      //stloc				V_2
	IL_0149:            /*goto IL_0002;*/goto IL_014e;                              //br				IL_0002
	IL_014e:            goto IL_0062;                                               //br				IL_0062
	IL_0153:                                                                        //ldloc.0
	IL_0154:                                                                        //ldloca.s				V_1
	IL_0156:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_015b:            Temp_2=V_1.ToString(safe_cast<System::IFormatProvider^>(Temp_1));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0160:            Temp_3=System::String::Concat(V_0,Temp_2);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0165:            return Temp_3;                                              //ret

}
inline static Root::T_x159::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x159::T_x2^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x159::T_x2(safe_cast<array<Reflector::CodeModel::IInstruction^>^>(nullptr));//newobj				void Root::T_x159::T_x2::.ctor(array<Reflector::CodeModel::IInstruction^>^)
	IL_0006:            Root::T_x159::T_x2::F_x1=safe_cast<Reflector::CodeModel::IInstructionCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IInstructionCollection^ Root::T_x159::T_x2 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x159::T_x2::T_x2(array<Reflector::CodeModel::IInstruction^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x159::T_x2::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x159::T_x2::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0016:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_001b:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::IInstructionCollection^ Root::T_x159::T_x2::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IInstructionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x159::T_x2::F_x1;                            //ldsfld				Reflector::CodeModel::IInstructionCollection^ Root::T_x159::T_x2 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x159::T_x2::M_x1(Reflector::CodeModel::IInstruction^ A_0)
//Reflector::CodeModel::IInstructionCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.m1
	IL_000b:            return -1;                                                  //ret
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:                                                                        //sub
	IL_0011:                                                                        //blt				IL_000d
	IL_0016:                                                                        //pop
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0025:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0026:                                                                        //conv.i4
	IL_0027:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_002c:            return Temp_4;                                              //ret

}
inline void Root::T_x159::T_x2::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IInstructionCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IInstruction^ Root::T_x159::T_x2::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IInstructionCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x159::T_x2::M_x1(System::Int32 A_0,Reflector::CodeModel::IInstruction^ A_1)
//Reflector::CodeModel::IInstructionCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x2::M_x12(Reflector::CodeModel::IInstruction^ A_0)
//Reflector::CodeModel::IInstructionCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x2::M_x13(Reflector::CodeModel::IInstruction^ A_0)
//Reflector::CodeModel::IInstructionCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x2::M_x2()
//Reflector::CodeModel::IInstructionCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x159::T_x2::M_x2(Reflector::CodeModel::IInstruction^ A_0)
//Reflector::CodeModel::IInstructionCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000f;                            //brtrue.s				IL_000f
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:            return false;                                               //ret
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_001d:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldc.i4.m1
	IL_0025:                                                                        //ceq
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ceq
	IL_002a:            return ((Temp_4 == -1) == false);                           //ret

}
inline void Root::T_x159::T_x2::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IInstructionCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x2::M_x2(System::Int32 A_0,Reflector::CodeModel::IInstruction^ A_1)
//Reflector::CodeModel::IInstructionCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x159::T_x2::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x159::T_x2::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x159::T_x2::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IInstruction^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IInstruction^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IInstruction^>^ Root::T_x159::T_x2 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline static Root::T_x159::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x159::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x159::T_x1(safe_cast<array<Reflector::CodeModel::IExceptionHandler^>^>(nullptr));//newobj				void Root::T_x159::T_x1::.ctor(array<Reflector::CodeModel::IExceptionHandler^>^)
	IL_0006:            Root::T_x159::T_x1::F_x1=safe_cast<Reflector::CodeModel::IExceptionHandlerCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IExceptionHandlerCollection^ Root::T_x159::T_x1 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x159::T_x1::T_x1(array<Reflector::CodeModel::IExceptionHandler^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x159::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x159::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0016:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_001b:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::IExceptionHandlerCollection^ Root::T_x159::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExceptionHandlerCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x159::T_x1::F_x1;                            //ldsfld				Reflector::CodeModel::IExceptionHandlerCollection^ Root::T_x159::T_x1 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x159::T_x1::M_x1(Reflector::CodeModel::IExceptionHandler^ A_0)
//Reflector::CodeModel::IExceptionHandlerCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.m1
	IL_000b:            return -1;                                                  //ret
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:                                                                        //sub
	IL_0011:                                                                        //blt				IL_000d
	IL_0016:                                                                        //pop
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0025:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0026:                                                                        //conv.i4
	IL_0027:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_002c:            return Temp_4;                                              //ret

}
inline void Root::T_x159::T_x1::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IExceptionHandlerCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IExceptionHandler^ Root::T_x159::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IExceptionHandlerCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x159::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IExceptionHandler^ A_1)
//Reflector::CodeModel::IExceptionHandlerCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x1::M_x12(Reflector::CodeModel::IExceptionHandler^ A_0)
//Reflector::CodeModel::IExceptionHandlerCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x1::M_x13(Reflector::CodeModel::IExceptionHandler^ A_0)
//Reflector::CodeModel::IExceptionHandlerCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x1::M_x2()
//Reflector::CodeModel::IExceptionHandlerCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x159::T_x1::M_x2(Reflector::CodeModel::IExceptionHandler^ A_0)
//Reflector::CodeModel::IExceptionHandlerCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000f;                            //brtrue.s				IL_000f
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:            return false;                                               //ret
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_001d:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldc.i4.m1
	IL_0025:                                                                        //ceq
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ceq
	IL_002a:            return ((Temp_4 == -1) == false);                           //ret

}
inline void Root::T_x159::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IExceptionHandlerCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x159::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IExceptionHandler^ A_1)
//Reflector::CodeModel::IExceptionHandlerCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x159::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x159::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x159::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IExceptionHandler^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IExceptionHandler^>^ Root::T_x159::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
