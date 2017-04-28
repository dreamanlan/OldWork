#include "global_xref.h"

inline Root::T_x139::T_x139(array<System::Byte>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x139^ Temp_1 = nullptr;
	Root::T_x139^ Temp_2 = nullptr;
	Root::T_x139^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Root::T_x139^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x139 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x2=A_0;                                             //stfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.1
	IL_0016:            Temp_2=this;if(A_0==nullptr)goto IL_001a;                   //brfalse.s				IL_001a
	IL_0018:            Temp_3=Temp_2;goto IL_001d;                                 //br.s				IL_001d
	IL_001a:                                                                        //ldc.i4.0
	IL_001b:            Temp_5=Temp_2;Temp_4=0;goto IL_0022;                        //br.s				IL_0022
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_0=A_0->Length;                                         //ldlen
	IL_001f:                                                                        //conv.i4
	IL_0020:            Temp_5=Temp_3;Temp_4=Temp_0;goto IL_0022;                   //br.s				IL_0022
	IL_0022:            Temp_5->F_x12=Temp_4;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::Int32 Root::T_x139 F_x12
	IL_0027:            return;                                                     //ret

}
inline Root::T_x139::T_x139(System::IO::BinaryReader^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:                                                                        //ldarg.2
	IL_0009:            Temp_0=A_0->ReadBytes(A_1);                                 //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_000e:            this->F_x2=Temp_0;                                          //stfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x139 F_x1
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.2
	IL_001c:            this->F_x12=A_1;                                            //stfld				System::Int32 Root::T_x139 F_x12
	IL_0021:            return;                                                     //ret

}
inline Root::T_x139::T_x139(System::IO::Stream^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int64 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	array<System::Byte>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=A_0->Length;                                         //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_000d:                                                                        //conv.i4
	IL_000e:            this->F_x12=safe_cast<System::Int32>(Temp_0);               //stfld				System::Int32 Root::T_x139 F_x12
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x139 F_x1
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_1=this->F_x12;                                         //ldfld				System::Int32 Root::T_x139 F_x12
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_2=gcnew array<System::Byte>(safe_cast<System::UInt32>(Temp_1));//newarr				System::Byte
	IL_0027:            this->F_x2=Temp_2;                                          //stfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_002c:                                                                        //ldarg.1
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_3=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0033:                                                                        //ldc.i4.0
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_4=this->F_x12;                                         //ldfld				System::Int32 Root::T_x139 F_x12
	IL_003a:            Temp_5=A_0->Read(Temp_3,safe_cast<System::Int32>(0),Temp_4);//callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_003f:                                                                        //pop
	IL_0040:            return;                                                     //ret

}
inline Root::T_x139::T_x139(Root::T_x139^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=A_0->F_x2;                                           //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_000d:            this->F_x2=Temp_0;                                          //stfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.2
	IL_0014:            this->F_x1=A_1;                                             //stfld				System::Int32 Root::T_x139 F_x1
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_1=this->M_x6();                                        //call				System::Int32 Root::T_x139::M_x6()
	IL_0020:            this->F_x12=Temp_1;                                         //stfld				System::Int32 Root::T_x139 F_x12
	IL_0025:            return;                                                     //ret

}
inline System::String^ Root::T_x139::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<System::Byte>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	array<System::Byte>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<System::Byte>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Byte V_1 = 0;
	System::Byte V_2 = 0;
	System::Byte V_3 = 0;
	System::Byte V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_0047;                                               //br.s				IL_0047
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0185;case 1:goto IL_0199;case 2:goto IL_01d8;case 3:goto IL_01c7;case 4:goto IL_00d8;case 5:goto IL_00c8;case 6:goto IL_0133;case 7:goto IL_011e;case 8:goto IL_00b1;case 9:goto IL_0161;case 10:goto IL_008a;case 11:goto IL_0059;case 12:goto IL_009e;case 13:goto IL_0172;case 14:goto IL_00ef;};//switch				(IL_0185,IL_0199,IL_01d8,IL_01c7,IL_00d8,IL_00c8,IL_0133,IL_011e,IL_00b1,IL_0161,IL_008a,IL_0059,IL_009e,IL_0172,IL_00ef)
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_004d:            V_0=Temp_0;                                                 //stloc.0
	IL_004e:                                                                        //ldc.i4				0xb
	IL_0053:            V_7=11;                                                     //stloc				V_7
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_0138;                                               //br				IL_0138
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_7=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0064:                                                                        //ldarg.0
	IL_0065:                                                                        //dup
	IL_0066:            Temp_8=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_006b:                                                                        //dup
	IL_006c:            V_6=Temp_8;                                                 //stloc.s				V_6
	IL_006e:                                                                        //ldc.i4.1
	IL_006f:                                                                        //add
	IL_0070:            this->F_x1=(V_6 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0075:                                                                        //ldloc.s				V_6
	IL_0077:                                                                        //ldelem.u1
	IL_0078:            V_3=Temp_7[V_6];                                            //stloc.3
	IL_0079:            goto IL_007c;                                               //br.s				IL_007c
	IL_007b:                                                                        //break
	IL_007c:                                                                        //ldc.i4				0xa
	IL_0081:            V_7=10;                                                     //stloc				V_7
	IL_0085:            /*goto IL_0002;*/goto IL_008a;                              //br				IL_0002
	IL_008a:                                                                        //ldloc.3
	IL_008b:            if(safe_cast<System::Int32>(V_3)==0)goto IL_01dd;           //brfalse				IL_01dd
	IL_0090:                                                                        //ldc.i4				0xc
	IL_0095:            V_7=12;                                                     //stloc				V_7
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:            goto IL_0177;                                               //br				IL_0177
	IL_00a3:                                                                        //ldc.i4				0x8
	IL_00a8:            V_7=8;                                                      //stloc				V_7
	IL_00ac:            /*goto IL_0002;*/goto IL_00b1;                              //br				IL_0002
	IL_00b1:                                                                        //ldloc.1
	IL_00b2:                                                                        //ldc.i4.s				32
	IL_00b4:                                                                        //and
	IL_00b5:            if((V_1 & 32)==0)goto IL_0138;                              //brfalse				IL_0138
	IL_00ba:                                                                        //ldc.i4				0x5
	IL_00bf:            V_7=5;                                                      //stloc				V_7
	IL_00c3:            /*goto IL_0002;*/goto IL_00c8;                              //br				IL_0002
	IL_00c8:            goto IL_005e;                                               //br.s				IL_005e
	IL_00ca:                                                                        //ldc.i4				0x4
	IL_00cf:            V_7=4;                                                      //stloc				V_7
	IL_00d3:            /*goto IL_0002;*/goto IL_00d8;                              //br				IL_0002
	IL_00d8:                                                                        //ldloc.1
	IL_00d9:                                                                        //ldc.i4				0x80
	IL_00de:                                                                        //and
	IL_00df:            if((V_1 & 128)==0)goto IL_0138;                             //brfalse.s				IL_0138
	IL_00e1:                                                                        //ldc.i4				0xe
	IL_00e6:            V_7=14;                                                     //stloc				V_7
	IL_00ea:            /*goto IL_0002;*/goto IL_00ef;                              //br				IL_0002
	IL_00ef:            goto IL_019e;                                               //br				IL_019e
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            Temp_3=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_00fa:                                                                        //ldarg.0
	IL_00fb:                                                                        //dup
	IL_00fc:            Temp_4=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0101:                                                                        //dup
	IL_0102:            V_6=Temp_4;                                                 //stloc.s				V_6
	IL_0104:                                                                        //ldc.i4.1
	IL_0105:                                                                        //add
	IL_0106:            this->F_x1=(V_6 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_010b:                                                                        //ldloc.s				V_6
	IL_010d:                                                                        //ldelem.u1
	IL_010e:            V_4=Temp_3[V_6];                                            //stloc.s				V_4
	IL_0110:                                                                        //ldc.i4				0x7
	IL_0115:            V_7=7;                                                      //stloc				V_7
	IL_0119:            /*goto IL_0002;*/goto IL_011e;                              //br				IL_0002
	IL_011e:                                                                        //ldloc.s				V_4
	IL_0120:            if(safe_cast<System::Int32>(V_4)!=0)goto IL_0138;           //brtrue				IL_0138
	IL_0125:                                                                        //ldc.i4				0x6
	IL_012a:            V_7=6;                                                      //stloc				V_7
	IL_012e:            /*goto IL_0002;*/goto IL_0133;                              //br				IL_0002
	IL_0133:            goto IL_01dd;                                               //br				IL_01dd
	IL_0138:                                                                        //ldarg.0
	IL_0139:            Temp_1=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_013e:                                                                        //ldarg.0
	IL_013f:                                                                        //dup
	IL_0140:            Temp_2=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0145:                                                                        //dup
	IL_0146:            V_6=Temp_2;                                                 //stloc.s				V_6
	IL_0148:                                                                        //ldc.i4.1
	IL_0149:                                                                        //add
	IL_014a:            this->F_x1=(V_6 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_014f:                                                                        //ldloc.s				V_6
	IL_0151:                                                                        //ldelem.u1
	IL_0152:            V_1=Temp_1[V_6];                                            //stloc.1
	IL_0153:                                                                        //ldc.i4				0x9
	IL_0158:            V_7=9;                                                      //stloc				V_7
	IL_015c:            /*goto IL_0002;*/goto IL_0161;                              //br				IL_0002
	IL_0161:                                                                        //ldloc.1
	IL_0162:            if(safe_cast<System::Int32>(V_1)==0)goto IL_01dd;           //brfalse.s				IL_01dd
	IL_0164:                                                                        //ldc.i4				0xd
	IL_0169:            V_7=13;                                                     //stloc				V_7
	IL_016d:            /*goto IL_0002;*/goto IL_0172;                              //br				IL_0002
	IL_0172:            goto IL_00ca;                                               //br				IL_00ca
	IL_0177:                                                                        //ldc.i4				0x0
	IL_017c:            V_7=0;                                                      //stloc				V_7
	IL_0180:            /*goto IL_0002;*/goto IL_0185;                              //br				IL_0002
	IL_0185:                                                                        //ldloc.1
	IL_0186:                                                                        //ldc.i4.s				16
	IL_0188:                                                                        //and
	IL_0189:            if((V_1 & 16)==0)goto IL_0138;                              //brfalse.s				IL_0138
	IL_018b:                                                                        //ldc.i4				0x1
	IL_0190:            V_7=1;                                                      //stloc				V_7
	IL_0194:            /*goto IL_0002;*/goto IL_0199;                              //br				IL_0002
	IL_0199:            goto IL_00f4;                                               //br				IL_00f4
	IL_019e:                                                                        //ldarg.0
	IL_019f:            Temp_9=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_01a4:                                                                        //ldarg.0
	IL_01a5:                                                                        //dup
	IL_01a6:            Temp_10=this->F_x1;                                         //ldfld				System::Int32 Root::T_x139 F_x1
	IL_01ab:                                                                        //dup
	IL_01ac:            V_6=Temp_10;                                                //stloc.s				V_6
	IL_01ae:                                                                        //ldc.i4.1
	IL_01af:                                                                        //add
	IL_01b0:            this->F_x1=(V_6 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_01b5:                                                                        //ldloc.s				V_6
	IL_01b7:                                                                        //ldelem.u1
	IL_01b8:            V_2=Temp_9[V_6];                                            //stloc.2
	IL_01b9:                                                                        //ldc.i4				0x3
	IL_01be:            V_7=3;                                                      //stloc				V_7
	IL_01c2:            /*goto IL_0002;*/goto IL_01c7;                              //br				IL_0002
	IL_01c7:                                                                        //ldloc.2
	IL_01c8:            if(safe_cast<System::Int32>(V_2)==0)goto IL_01dd;           //brfalse.s				IL_01dd
	IL_01ca:                                                                        //ldc.i4				0x2
	IL_01cf:            V_7=2;                                                      //stloc				V_7
	IL_01d3:            /*goto IL_0002;*/goto IL_01d8;                              //br				IL_0002
	IL_01d8:            goto IL_00a3;                                               //br				IL_00a3
	IL_01dd:                                                                        //ldarg.0
	IL_01de:            Temp_5=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_01e3:                                                                        //ldloc.0
	IL_01e4:                                                                        //sub
	IL_01e5:                                                                        //ldc.i4.1
	IL_01e6:                                                                        //sub
	IL_01e7:            V_5=((Temp_5 - V_0) - 1);                                   //stloc.s				V_5
	IL_01e9:                                                                        //ldarg.0
	IL_01ea:                                                                        //ldloc.0
	IL_01eb:            this->F_x1=V_0;                                             //stfld				System::Int32 Root::T_x139 F_x1
	IL_01f0:                                                                        //ldarg.0
	IL_01f1:                                                                        //ldloc.s				V_5
	IL_01f3:            Temp_6=this->M_x2(V_5);                                     //call				System::String^ Root::T_x139::M_x2(System::Int32)
	IL_01f8:            return Temp_6;                                              //ret

}
inline void Root::T_x139::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::Int32 Root::T_x139 F_x12
	IL_0007:            return;                                                     //ret

}
inline System::Int32 Root::T_x139::M_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x139 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt16 Root::T_x139::M_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //dup
	IL_0013:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0018:                                                                        //dup
	IL_0019:            Temp_4=Temp_1;                                              //stloc.0
	IL_001a:                                                                        //ldc.i4.1
	IL_001b:                                                                        //add
	IL_001c:            this->F_x1=(Temp_4 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldelem.u1
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_2=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //dup
	IL_002b:            Temp_3=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0030:                                                                        //dup
	IL_0031:            V_0=Temp_3;                                                 //stloc.0
	IL_0032:                                                                        //ldc.i4.1
	IL_0033:                                                                        //add
	IL_0034:            this->F_x1=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0039:                                                                        //ldloc.0
	IL_003a:                                                                        //ldelem.u1
	IL_003b:                                                                        //ldc.i4.8
	IL_003c:                                                                        //shl
	IL_003d:                                                                        //or
	IL_003e:                                                                        //conv.u2
	IL_003f:            return safe_cast<System::UInt16>((Temp_0[Temp_4] | (Temp_2[V_0] << 8)));//ret

}
inline System::Int64 Root::T_x139::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt64 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x9();                                        //call				System::UInt64 Root::T_x139::M_x9()
	IL_0006:            return safe_cast<System::Int64>(Temp_0);                    //ret

}
inline void Root::T_x139::M_x12(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:                                                                        //add
	IL_0009:            this->F_x1=(Temp_0 + A_0);                                  //stfld				System::Int32 Root::T_x139 F_x1
	IL_000e:            return;                                                     //ret

}
inline System::Boolean Root::T_x139::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //dup
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0010:                                                                        //dup
	IL_0011:            V_0=Temp_1;                                                 //stloc.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:                                                                        //add
	IL_0014:            this->F_x1=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldelem.u1
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:                                                                        //ceq
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ceq
	IL_0021:            return ((Temp_0[V_0] == 0) == false);                       //ret

}
inline void Root::T_x139::M_x13(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x139 F_x1
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x139::M_x14()
//System::Object^::ToString by M_x14
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_2=17;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.3
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:            Temp_0=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_001a:            V_0=Temp_0;                                                 //stloc.0
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:                                                                        //ldstr				L"\x742E"
	IL_0022:                                                                        //ldloc				V_2
	IL_0026:            Temp_1=a(L"\x742E",V_2);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002b:            V_0[0]=Temp_1;                                              //stelem.ref
	IL_002c:                                                                        //ldloc.0
	IL_002d:                                                                        //ldc.i4.1
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_2=this->M_x19();                                       //call				System::Int32 Root::T_x139::M_x19()
	IL_0034:            V_1=Temp_2;                                                 //stloc.1
	IL_0035:                                                                        //ldloca.s				V_1
	IL_0037:                                                                        //ldstr				L"\x772E\x0930"
	IL_003c:                                                                        //ldloc				V_2
	IL_0040:            Temp_3=a(L"\x772E\x0930",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0045:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_004a:            Temp_5=V_1.ToString(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_004f:            V_0[1]=Temp_5;                                              //stelem.ref
	IL_0050:                                                                        //ldloc.0
	IL_0051:                                                                        //ldc.i4.2
	IL_0052:                                                                        //ldstr				L"\x032E"
	IL_0057:                                                                        //ldloc				V_2
	IL_005b:            Temp_6=a(L"\x032E",V_2);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0060:            V_0[2]=Temp_6;                                              //stelem.ref
	IL_0061:                                                                        //ldloc.0
	IL_0062:                                                                        //ldc.i4.3
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_7=this->M_x10();                                       //call				System::Int32 Root::T_x139::M_x10()
	IL_0069:            V_1=Temp_7;                                                 //stloc.1
	IL_006a:                                                                        //ldloca.s				V_1
	IL_006c:                                                                        //ldstr				L"\x772E\x0930"
	IL_0071:                                                                        //ldloc				V_2
	IL_0075:            Temp_8=a(L"\x772E\x0930",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007a:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_007f:            Temp_10=V_1.ToString(Temp_8,safe_cast<System::IFormatProvider^>(Temp_9));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_0084:            V_0[3]=Temp_10;                                             //stelem.ref
	IL_0085:                                                                        //ldloc.0
	IL_0086:                                                                        //ldc.i4.4
	IL_0087:                                                                        //ldstr				L"\x722E"
	IL_008c:                                                                        //ldloc				V_2
	IL_0090:            Temp_11=a(L"\x722E",V_2);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0095:            V_0[4]=Temp_11;                                             //stelem.ref
	IL_0096:                                                                        //ldloc.0
	IL_0097:            Temp_12=System::String::Concat(V_0);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_009c:            return Temp_12;                                             //ret

}
inline System::Byte Root::T_x139::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //dup
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0010:                                                                        //dup
	IL_0011:            V_0=Temp_1;                                                 //stloc.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:                                                                        //add
	IL_0014:            this->F_x1=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldelem.u1
	IL_001b:            return Temp_0[V_0];                                         //ret

}
inline System::Int16 Root::T_x139::M_x16()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //dup
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0010:                                                                        //dup
	IL_0011:            Temp_4=Temp_1;                                              //stloc.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:                                                                        //add
	IL_0014:            this->F_x1=(Temp_4 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldelem.u1
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_2=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //dup
	IL_0023:            Temp_3=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0028:                                                                        //dup
	IL_0029:            V_0=Temp_3;                                                 //stloc.0
	IL_002a:                                                                        //ldc.i4.1
	IL_002b:                                                                        //add
	IL_002c:            this->F_x1=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0031:                                                                        //ldloc.0
	IL_0032:                                                                        //ldelem.u1
	IL_0033:                                                                        //ldc.i4.8
	IL_0034:                                                                        //shl
	IL_0035:                                                                        //or
	IL_0036:                                                                        //conv.i2
	IL_0037:            return safe_cast<System::Int16>((Temp_0[Temp_4] | (Temp_2[V_0] << 8)));//ret

}
inline System::Single Root::T_x139::M_x18()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Single Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.4
	IL_0002:            Temp_0=this->M_x8(safe_cast<System::Int32>(4));             //call				array<System::Byte>^ Root::T_x139::M_x8(System::Int32)
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            Temp_1=System::BitConverter::ToSingle(Temp_0,safe_cast<System::Int32>(0));//call				System::Single System::BitConverter::ToSingle(array<System::Byte>^,System::Int32)
	IL_000d:            return Temp_1;                                              //ret

}
inline System::Int32 Root::T_x139::M_x19()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt32 Root::T_x139::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	array<System::Byte>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	array<System::Byte>^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //dup
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0010:                                                                        //dup
	IL_0011:            Temp_4=Temp_1;                                              //stloc.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:                                                                        //add
	IL_0014:            this->F_x1=(Temp_4 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldelem.u1
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_2=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //dup
	IL_0023:            Temp_3=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0028:                                                                        //dup
	IL_0029:            Temp_7=Temp_3;                                              //stloc.0
	IL_002a:                                                                        //ldc.i4.1
	IL_002b:                                                                        //add
	IL_002c:            this->F_x1=(Temp_7 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_0031:                                                                        //ldloc.0
	IL_0032:                                                                        //ldelem.u1
	IL_0033:                                                                        //ldc.i4.8
	IL_0034:                                                                        //shl
	IL_0035:                                                                        //or
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_5=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //dup
	IL_003e:            Temp_6=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0043:                                                                        //dup
	IL_0044:            Temp_10=Temp_6;                                             //stloc.0
	IL_0045:                                                                        //ldc.i4.1
	IL_0046:                                                                        //add
	IL_0047:            this->F_x1=(Temp_10 + 1);                                   //stfld				System::Int32 Root::T_x139 F_x1
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldelem.u1
	IL_004e:                                                                        //ldc.i4.s				16
	IL_0050:                                                                        //shl
	IL_0051:                                                                        //or
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_8=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //dup
	IL_005a:            Temp_9=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_005f:                                                                        //dup
	IL_0060:            V_0=Temp_9;                                                 //stloc.0
	IL_0061:                                                                        //ldc.i4.1
	IL_0062:                                                                        //add
	IL_0063:            this->F_x1=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0068:                                                                        //ldloc.0
	IL_0069:                                                                        //ldelem.u1
	IL_006a:                                                                        //ldc.i4.s				24
	IL_006c:                                                                        //shl
	IL_006d:                                                                        //or
	IL_006e:            return safe_cast<System::UInt32>((((Temp_0[Temp_4] | (Temp_2[Temp_7] << 8)) | (Temp_5[Temp_10] << 16)) | (Temp_8[V_0] << 24)));//ret

}
inline System::String^ Root::T_x139::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Char>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	array<System::Byte>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	array<System::Byte>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	array<System::Byte>^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	array<System::Byte>^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Char>^ V_1 = nullptr;
	System::Byte V_2 = 0;
	System::Char V_3 = (System::Char)0;
	System::Byte V_4 = 0;
	System::Byte V_5 = 0;
	System::UInt32 V_6 = 0;
	System::Byte V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:            goto IL_008a;                                               //br				IL_008a
	IL_0005:                                                                        //ldloc				V_9
	IL_0009:            switch(V_9){case 0:goto IL_0180;case 1:goto IL_00d8;case 2:goto IL_0262;case 3:goto IL_02fa;case 4:goto IL_019c;case 5:goto IL_024b;case 6:goto IL_01ee;case 7:goto IL_03b5;case 8:goto IL_0202;case 9:goto IL_0236;case 10:goto IL_0223;case 11:goto IL_030a;case 12:goto IL_0159;case 13:goto IL_0142;case 14:goto IL_02e0;case 15:goto IL_016c;case 16:goto IL_031e;case 17:goto IL_01c6;case 18:goto IL_0429;case 19:goto IL_00a2;case 20:goto IL_01de;case 21:goto IL_03d6;case 22:goto IL_0103;case 23:goto IL_01b3;case 24:goto IL_0331;case 25:goto IL_039a;case 26:goto IL_0387;case 27:goto IL_0296;case 28:goto IL_02ad;case 29:goto IL_0345;case 30:goto IL_036f;};//switch				(IL_0180,IL_00d8,IL_0262,IL_02fa,IL_019c,IL_024b,IL_01ee,IL_03b5,IL_0202,IL_0236,IL_0223,IL_030a,IL_0159,IL_0142,IL_02e0,IL_016c,IL_031e,IL_01c6,IL_0429,IL_00a2,IL_01de,IL_03d6,IL_0103,IL_01b3,IL_0331,IL_039a,IL_0387,IL_0296,IL_02ad,IL_0345,IL_036f)
	IL_008a:                                                                        //ldc.i4.0
	IL_008b:            V_0=0;                                                      //stloc.0
	IL_008c:                                                                        //ldarg.1
	IL_008d:                                                                        //conv.ovf.u4
	IL_008e:            Temp_0=gcnew array<System::Char>(safe_cast<System::UInt32>(A_0));//newarr				System::Char
	IL_0093:            V_1=Temp_0;                                                 //stloc.1
	IL_0094:                                                                        //ldc.i4				0x13
	IL_0099:            V_9=19;                                                     //stloc				V_9
	IL_009d:            /*goto IL_0005;*/goto IL_00a2;                              //br				IL_0005
	IL_00a2:            goto IL_015e;                                               //br				IL_015e
	IL_00a7:                                                                        //ldloc.1
	IL_00a8:            Temp_15=V_0;                                                //ldloc.0
	IL_00a9:                                                                        //dup
	IL_00aa:                                                                        //ldc.i4.1
	IL_00ab:                                                                        //add
	IL_00ac:            V_0=(Temp_15 + 1);                                          //stloc.0
	IL_00ad:                                                                        //ldloc.s				V_6
	IL_00af:                                                                        //ldc.i4.s				10
	IL_00b1:                                                                        //shr.un
	IL_00b2:                                                                        //ldc.i4				0xd800
	IL_00b7:                                                                        //or
	IL_00b8:                                                                        //conv.u2
	IL_00b9:            V_1[Temp_15]=safe_cast<System::Char>(safe_cast<System::UInt16>(((V_6 >> 10) | 55296)));//stelem.i2
	IL_00ba:                                                                        //ldloc.s				V_6
	IL_00bc:                                                                        //ldc.i4				0x3ff
	IL_00c1:                                                                        //and
	IL_00c2:                                                                        //ldc.i4				0xdc00
	IL_00c7:                                                                        //or
	IL_00c8:                                                                        //conv.u2
	IL_00c9:            V_3=safe_cast<System::Char>(safe_cast<System::UInt16>(((V_6 & 1023) | 56320)));//stloc.3
	IL_00ca:                                                                        //ldc.i4				0x1
	IL_00cf:            V_9=1;                                                      //stloc				V_9
	IL_00d3:            /*goto IL_0005;*/goto IL_00d8;                              //br				IL_0005
	IL_00d8:            goto IL_0371;                                               //br				IL_0371
	IL_00dd:                                                                        //ldloc.1
	IL_00de:            Temp_5=V_0;                                                 //ldloc.0
	IL_00df:                                                                        //dup
	IL_00e0:                                                                        //ldc.i4.1
	IL_00e1:                                                                        //add
	IL_00e2:            Temp_6=(Temp_5 + 1);                                        //stloc.0
	IL_00e3:                                                                        //ldloc.2
	IL_00e4:                                                                        //ldc.i4.8
	IL_00e5:                                                                        //shl
	IL_00e6:                                                                        //ldloc.s				V_4
	IL_00e8:                                                                        //or
	IL_00e9:                                                                        //conv.u2
	IL_00ea:            V_1[Temp_5]=safe_cast<System::Char>(safe_cast<System::UInt16>(((V_2 << 8) | V_4)));//stelem.i2
	IL_00eb:                                                                        //ldloc.1
	IL_00ec:                                                                        //ldloc.0
	IL_00ed:                                                                        //dup
	IL_00ee:                                                                        //ldc.i4.1
	IL_00ef:                                                                        //add
	IL_00f0:            V_0=(Temp_6 + 1);                                           //stloc.0
	IL_00f1:                                                                        //ldloc.s				V_5
	IL_00f3:                                                                        //conv.u2
	IL_00f4:            V_1[Temp_6]=safe_cast<System::Char>(safe_cast<System::UInt16>(V_5));//stelem.i2
	IL_00f5:                                                                        //ldc.i4				0x16
	IL_00fa:            V_9=22;                                                     //stloc				V_9
	IL_00fe:            /*goto IL_0005;*/goto IL_0103;                              //br				IL_0005
	IL_0103:            goto IL_0228;                                               //br				IL_0228
	IL_0108:                                                                        //ldc.i4.3
	IL_0109:                                                                        //dup
	IL_010a:                                                                        //dup
	IL_010b:                                                                        //ldc.i4.3
	IL_010c:                                                                        //sub
	IL_010d:                                                                        //blt				IL_0109
	IL_0112:                                                                        //pop
	IL_0113:                                                                        //ldarg.0
	IL_0114:            Temp_13=this->F_x2;                                         //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0119:                                                                        //ldarg.0
	IL_011a:                                                                        //dup
	IL_011b:            Temp_14=this->F_x1;                                         //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0120:                                                                        //dup
	IL_0121:            V_8=Temp_14;                                                //stloc.s				V_8
	IL_0123:                                                                        //ldc.i4.1
	IL_0124:                                                                        //add
	IL_0125:            this->F_x1=(V_8 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_012a:                                                                        //ldloc.s				V_8
	IL_012c:                                                                        //ldelem.u1
	IL_012d:            V_4=Temp_13[V_8];                                           //stloc.s				V_4
	IL_012f:                                                                        //ldarg.1
	IL_0130:                                                                        //ldc.i4.1
	IL_0131:                                                                        //sub
	IL_0132:            A_0=(A_0 - 1);                                              //starg.s				A_0
	IL_0134:                                                                        //ldc.i4				0xd
	IL_0139:            V_9=13;                                                     //stloc				V_9
	IL_013d:            /*goto IL_0005;*/goto IL_0142;                              //br				IL_0005
	IL_0142:                                                                        //ldloc.2
	IL_0143:                                                                        //ldc.i4.s				32
	IL_0145:                                                                        //and
	IL_0146:            if((V_2 & 32)!=0)goto IL_02fc;                              //brtrue				IL_02fc
	IL_014b:                                                                        //ldc.i4				0xc
	IL_0150:            V_9=12;                                                     //stloc				V_9
	IL_0154:            /*goto IL_0005;*/goto IL_0159;                              //br				IL_0005
	IL_0159:            goto IL_0207;                                               //br				IL_0207
	IL_015e:                                                                        //ldc.i4				0xf
	IL_0163:            V_9=15;                                                     //stloc				V_9
	IL_0167:            /*goto IL_0005;*/goto IL_016c;                              //br				IL_0005
	IL_016c:                                                                        //ldarg.1
	IL_016d:            if(A_0!=0)goto IL_02b2;                                     //brtrue				IL_02b2
	IL_0172:                                                                        //ldc.i4				0x0
	IL_0177:            V_9=0;                                                      //stloc				V_9
	IL_017b:            /*goto IL_0005;*/goto IL_0180;                              //br				IL_0005
	IL_0180:            goto IL_0228;                                               //br				IL_0228
	IL_0185:                                                                        //ldloc.1
	IL_0186:            Temp_9=V_0;                                                 //ldloc.0
	IL_0187:                                                                        //dup
	IL_0188:                                                                        //ldc.i4.1
	IL_0189:                                                                        //add
	IL_018a:            V_0=(Temp_9 + 1);                                           //stloc.0
	IL_018b:                                                                        //ldloc.2
	IL_018c:                                                                        //conv.u2
	IL_018d:            V_1[Temp_9]=safe_cast<System::Char>(safe_cast<System::UInt16>(V_2));//stelem.i2
	IL_018e:                                                                        //ldc.i4				0x4
	IL_0193:            V_9=4;                                                      //stloc				V_9
	IL_0197:            /*goto IL_0005;*/goto IL_019c;                              //br				IL_0005
	IL_019c:            goto IL_015e;                                               //br				IL_015e
	IL_01a1:                                                                        //ldloc.s				V_6
	IL_01a3:                                                                        //conv.u2
	IL_01a4:            V_3=safe_cast<System::Char>(safe_cast<System::UInt16>(V_6));//stloc.3
	IL_01a5:                                                                        //ldc.i4				0x17
	IL_01aa:            V_9=23;                                                     //stloc				V_9
	IL_01ae:            /*goto IL_0005;*/goto IL_01b3;                              //br				IL_0005
	IL_01b3:            goto IL_0371;                                               //br				IL_0371
	IL_01b8:                                                                        //ldc.i4				0x11
	IL_01bd:            V_9=17;                                                     //stloc				V_9
	IL_01c1:            /*goto IL_0005;*/goto IL_01c6;                              //br				IL_0005
	IL_01c6:                                                                        //ldloc.1
	IL_01c7:                                                                        //ldloc.0
	IL_01c8:                                                                        //ldc.i4.1
	IL_01c9:                                                                        //sub
	IL_01ca:                                                                        //ldelem.u2
	IL_01cb:            if(safe_cast<System::Int32>(V_1[(V_0 - 1)])!=0)goto IL_042e;//brtrue				IL_042e
	IL_01d0:                                                                        //ldc.i4				0x14
	IL_01d5:            V_9=20;                                                     //stloc				V_9
	IL_01d9:            /*goto IL_0005;*/goto IL_01de;                              //br				IL_0005
	IL_01de:            goto IL_0250;                                               //br.s				IL_0250
	IL_01e0:                                                                        //ldc.i4				0x6
	IL_01e5:            V_9=6;                                                      //stloc				V_9
	IL_01e9:            /*goto IL_0005;*/goto IL_01ee;                              //br				IL_0005
	IL_01ee:                                                                        //ldarg.1
	IL_01ef:            if(A_0!=0)goto IL_03db;                                     //brtrue				IL_03db
	IL_01f4:                                                                        //ldc.i4				0x8
	IL_01f9:            V_9=8;                                                      //stloc				V_9
	IL_01fd:            /*goto IL_0005;*/goto IL_0202;                              //br				IL_0005
	IL_0202:            goto IL_00dd;                                               //br				IL_00dd
	IL_0207:                                                                        //ldloc.2
	IL_0208:                                                                        //ldc.i4.s				31
	IL_020a:                                                                        //and
	IL_020b:                                                                        //ldc.i4.6
	IL_020c:                                                                        //shl
	IL_020d:                                                                        //ldloc.s				V_4
	IL_020f:                                                                        //ldc.i4.s				63
	IL_0211:                                                                        //and
	IL_0212:                                                                        //or
	IL_0213:                                                                        //conv.u2
	IL_0214:            V_3=safe_cast<System::Char>(safe_cast<System::UInt16>((((V_2 & 31) << 6) | (V_4 & 63))));//stloc.3
	IL_0215:                                                                        //ldc.i4				0xa
	IL_021a:            V_9=10;                                                     //stloc				V_9
	IL_021e:            /*goto IL_0005;*/goto IL_0223;                              //br				IL_0005
	IL_0223:            goto IL_0371;                                               //br				IL_0371
	IL_0228:                                                                        //ldc.i4				0x9
	IL_022d:            V_9=9;                                                      //stloc				V_9
	IL_0231:            /*goto IL_0005;*/goto IL_0236;                              //br				IL_0005
	IL_0236:                                                                        //ldloc.0
	IL_0237:                                                                        //ldc.i4.0
	IL_0238:            if(V_0<=0)goto IL_042e;                                     //ble				IL_042e
	IL_023d:                                                                        //ldc.i4				0x5
	IL_0242:            V_9=5;                                                      //stloc				V_9
	IL_0246:            /*goto IL_0005;*/goto IL_024b;                              //br				IL_0005
	IL_024b:            goto IL_01b8;                                               //br				IL_01b8
	IL_0250:                                                                        //ldloc.0
	IL_0251:                                                                        //ldc.i4.1
	IL_0252:                                                                        //sub
	IL_0253:            V_0=(V_0 - 1);                                              //stloc.0
	IL_0254:                                                                        //ldc.i4				0x2
	IL_0259:            V_9=2;                                                      //stloc				V_9
	IL_025d:            /*goto IL_0005;*/goto IL_0262;                              //br				IL_0005
	IL_0262:            goto IL_042e;                                               //br				IL_042e
	IL_0267:                                                                        //ldarg.0
	IL_0268:            Temp_7=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_026d:                                                                        //ldarg.0
	IL_026e:                                                                        //dup
	IL_026f:            Temp_8=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0274:                                                                        //dup
	IL_0275:            V_8=Temp_8;                                                 //stloc.s				V_8
	IL_0277:                                                                        //ldc.i4.1
	IL_0278:                                                                        //add
	IL_0279:            this->F_x1=(V_8 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_027e:                                                                        //ldloc.s				V_8
	IL_0280:                                                                        //ldelem.u1
	IL_0281:            V_5=Temp_7[V_8];                                            //stloc.s				V_5
	IL_0283:                                                                        //ldarg.1
	IL_0284:                                                                        //ldc.i4.1
	IL_0285:                                                                        //sub
	IL_0286:            A_0=(A_0 - 1);                                              //starg.s				A_0
	IL_0288:                                                                        //ldc.i4				0x1b
	IL_028d:            V_9=27;                                                     //stloc				V_9
	IL_0291:            /*goto IL_0005;*/goto IL_0296;                              //br				IL_0005
	IL_0296:                                                                        //ldloc.2
	IL_0297:                                                                        //ldc.i4.s				16
	IL_0299:                                                                        //and
	IL_029a:            if((V_2 & 16)!=0)goto IL_01e0;                              //brtrue				IL_01e0
	IL_029f:                                                                        //ldc.i4				0x1c
	IL_02a4:            V_9=28;                                                     //stloc				V_9
	IL_02a8:            /*goto IL_0005;*/goto IL_02ad;                              //br				IL_0005
	IL_02ad:            goto IL_034a;                                               //br				IL_034a
	IL_02b2:                                                                        //ldarg.0
	IL_02b3:            Temp_10=this->F_x2;                                         //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_02b8:                                                                        //ldarg.0
	IL_02b9:                                                                        //dup
	IL_02ba:            Temp_11=this->F_x1;                                         //ldfld				System::Int32 Root::T_x139 F_x1
	IL_02bf:                                                                        //dup
	IL_02c0:            V_8=Temp_11;                                                //stloc.s				V_8
	IL_02c2:                                                                        //ldc.i4.1
	IL_02c3:                                                                        //add
	IL_02c4:            this->F_x1=(V_8 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_02c9:                                                                        //ldloc.s				V_8
	IL_02cb:                                                                        //ldelem.u1
	IL_02cc:            V_2=Temp_10[V_8];                                           //stloc.2
	IL_02cd:                                                                        //ldarg.1
	IL_02ce:                                                                        //ldc.i4.1
	IL_02cf:                                                                        //sub
	IL_02d0:            A_0=(A_0 - 1);                                              //starg.s				A_0
	IL_02d2:                                                                        //ldc.i4				0xe
	IL_02d7:            V_9=14;                                                     //stloc				V_9
	IL_02db:            /*goto IL_0005;*/goto IL_02e0;                              //br				IL_0005
	IL_02e0:                                                                        //ldloc.2
	IL_02e1:                                                                        //ldc.i4				0x80
	IL_02e6:                                                                        //and
	IL_02e7:            if((V_2 & 128)==0)goto IL_0185;                             //brfalse				IL_0185
	IL_02ec:                                                                        //ldc.i4				0x3
	IL_02f1:            V_9=3;                                                      //stloc				V_9
	IL_02f5:            /*goto IL_0005;*/goto IL_02fa;                              //br				IL_0005
	IL_02fa:            goto IL_0323;                                               //br.s				IL_0323
	IL_02fc:                                                                        //ldc.i4				0xb
	IL_0301:            V_9=11;                                                     //stloc				V_9
	IL_0305:            /*goto IL_0005;*/goto IL_030a;                              //br				IL_0005
	IL_030a:                                                                        //ldarg.1
	IL_030b:            if(A_0!=0)goto IL_0267;                                     //brtrue				IL_0267
	IL_0310:                                                                        //ldc.i4				0x10
	IL_0315:            V_9=16;                                                     //stloc				V_9
	IL_0319:            /*goto IL_0005;*/goto IL_031e;                              //br				IL_0005
	IL_031e:            goto IL_03ba;                                               //br				IL_03ba
	IL_0323:                                                                        //ldc.i4				0x18
	IL_0328:            V_9=24;                                                     //stloc				V_9
	IL_032c:            /*goto IL_0005;*/goto IL_0331;                              //br				IL_0005
	IL_0331:                                                                        //ldarg.1
	IL_0332:            if(A_0!=0)goto IL_0108;                                     //brtrue				IL_0108
	IL_0337:                                                                        //ldc.i4				0x1d
	IL_033c:            V_9=29;                                                     //stloc				V_9
	IL_0340:            /*goto IL_0005;*/goto IL_0345;                              //br				IL_0005
	IL_0345:            goto IL_0185;                                               //br				IL_0185
	IL_034a:                                                                        //ldloc.2
	IL_034b:                                                                        //ldc.i4.s				15
	IL_034d:                                                                        //and
	IL_034e:                                                                        //ldc.i4.s				12
	IL_0350:                                                                        //shl
	IL_0351:                                                                        //ldloc.s				V_4
	IL_0353:                                                                        //ldc.i4.s				63
	IL_0355:                                                                        //and
	IL_0356:                                                                        //ldc.i4.6
	IL_0357:                                                                        //shl
	IL_0358:                                                                        //or
	IL_0359:                                                                        //ldloc.s				V_5
	IL_035b:                                                                        //ldc.i4.s				63
	IL_035d:                                                                        //and
	IL_035e:                                                                        //or
	IL_035f:            V_6=safe_cast<System::UInt32>(((((V_2 & 15) << 12) | ((V_4 & 63) << 6)) | (V_5 & 63)));//stloc.s				V_6
	IL_0361:                                                                        //ldc.i4				0x1e
	IL_0366:            V_9=30;                                                     //stloc				V_9
	IL_036a:            /*goto IL_0005;*/goto IL_036f;                              //br				IL_0005
	IL_036f:            goto IL_038c;                                               //br.s				IL_038c
	IL_0371:                                                                        //ldloc.1
	IL_0372:            Temp_1=V_0;                                                 //ldloc.0
	IL_0373:                                                                        //dup
	IL_0374:                                                                        //ldc.i4.1
	IL_0375:                                                                        //add
	IL_0376:            V_0=(Temp_1 + 1);                                           //stloc.0
	IL_0377:                                                                        //ldloc.3
	IL_0378:            V_1[Temp_1]=V_3;                                            //stelem.i2
	IL_0379:                                                                        //ldc.i4				0x1a
	IL_037e:            V_9=26;                                                     //stloc				V_9
	IL_0382:            /*goto IL_0005;*/goto IL_0387;                              //br				IL_0005
	IL_0387:            goto IL_015e;                                               //br				IL_015e
	IL_038c:                                                                        //ldc.i4				0x19
	IL_0391:            V_9=25;                                                     //stloc				V_9
	IL_0395:            /*goto IL_0005;*/goto IL_039a;                              //br				IL_0005
	IL_039a:                                                                        //ldloc.s				V_6
	IL_039c:                                                                        //ldc.i4				0xffff0000
	IL_03a1:                                                                        //and
	IL_03a2:            if((V_6 & 4294901760)!=0)goto IL_00a7;                      //brtrue				IL_00a7
	IL_03a7:                                                                        //ldc.i4				0x7
	IL_03ac:            V_9=7;                                                      //stloc				V_9
	IL_03b0:            /*goto IL_0005;*/goto IL_03b5;                              //br				IL_0005
	IL_03b5:            goto IL_01a1;                                               //br				IL_01a1
	IL_03ba:                                                                        //ldloc.1
	IL_03bb:            Temp_12=V_0;                                                //ldloc.0
	IL_03bc:                                                                        //dup
	IL_03bd:                                                                        //ldc.i4.1
	IL_03be:                                                                        //add
	IL_03bf:            V_0=(Temp_12 + 1);                                          //stloc.0
	IL_03c0:                                                                        //ldloc.2
	IL_03c1:                                                                        //ldc.i4.8
	IL_03c2:                                                                        //shl
	IL_03c3:                                                                        //ldloc.s				V_4
	IL_03c5:                                                                        //or
	IL_03c6:                                                                        //conv.u2
	IL_03c7:            V_1[Temp_12]=safe_cast<System::Char>(safe_cast<System::UInt16>(((V_2 << 8) | V_4)));//stelem.i2
	IL_03c8:                                                                        //ldc.i4				0x15
	IL_03cd:            V_9=21;                                                     //stloc				V_9
	IL_03d1:            /*goto IL_0005;*/goto IL_03d6;                              //br				IL_0005
	IL_03d6:            goto IL_0228;                                               //br				IL_0228
	IL_03db:                                                                        //ldarg.0
	IL_03dc:            Temp_3=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_03e1:                                                                        //ldarg.0
	IL_03e2:                                                                        //dup
	IL_03e3:            Temp_4=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_03e8:                                                                        //dup
	IL_03e9:            V_8=Temp_4;                                                 //stloc.s				V_8
	IL_03eb:                                                                        //ldc.i4.1
	IL_03ec:                                                                        //add
	IL_03ed:            this->F_x1=(V_8 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_03f2:                                                                        //ldloc.s				V_8
	IL_03f4:                                                                        //ldelem.u1
	IL_03f5:            V_7=Temp_3[V_8];                                            //stloc.s				V_7
	IL_03f7:                                                                        //ldarg.1
	IL_03f8:                                                                        //ldc.i4.1
	IL_03f9:                                                                        //sub
	IL_03fa:            A_0=(A_0 - 1);                                              //starg.s				A_0
	IL_03fc:                                                                        //ldloc.2
	IL_03fd:                                                                        //ldc.i4.7
	IL_03fe:                                                                        //and
	IL_03ff:                                                                        //ldc.i4.s				18
	IL_0401:                                                                        //shl
	IL_0402:                                                                        //ldloc.s				V_4
	IL_0404:                                                                        //ldc.i4.s				63
	IL_0406:                                                                        //and
	IL_0407:                                                                        //ldc.i4.s				12
	IL_0409:                                                                        //shl
	IL_040a:                                                                        //or
	IL_040b:                                                                        //ldloc.s				V_5
	IL_040d:                                                                        //ldc.i4.s				63
	IL_040f:                                                                        //and
	IL_0410:                                                                        //ldc.i4.6
	IL_0411:                                                                        //shl
	IL_0412:                                                                        //or
	IL_0413:                                                                        //ldloc.s				V_7
	IL_0415:                                                                        //ldc.i4.s				63
	IL_0417:                                                                        //and
	IL_0418:                                                                        //or
	IL_0419:            V_6=safe_cast<System::UInt32>((((((V_2 & 7) << 18) | ((V_4 & 63) << 12)) | ((V_5 & 63) << 6)) | (V_7 & 63)));//stloc.s				V_6
	IL_041b:                                                                        //ldc.i4				0x12
	IL_0420:            V_9=18;                                                     //stloc				V_9
	IL_0424:            /*goto IL_0005;*/goto IL_0429;                              //br				IL_0005
	IL_0429:            goto IL_038c;                                               //br				IL_038c
	IL_042e:                                                                        //ldloc.1
	IL_042f:                                                                        //ldc.i4.0
	IL_0430:                                                                        //ldloc.0
	IL_0431:            Temp_2=gcnew System::String(V_1,safe_cast<System::Int32>(0),V_0);//newobj				void System::String::.ctor(array<System::Char>^,System::Int32,System::Int32)
	IL_0436:            return Temp_2;                                              //ret

}
inline System::SByte Root::T_x139::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //dup
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0010:                                                                        //dup
	IL_0011:            V_0=Temp_1;                                                 //stloc.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:                                                                        //add
	IL_0014:            this->F_x1=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldelem.u1
	IL_001b:                                                                        //conv.i1
	IL_001c:            return safe_cast<System::SByte>(Temp_0[V_0]);               //ret

}
inline System::Int32 Root::T_x139::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	array<System::Byte>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	array<System::Byte>^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //dup
	IL_0013:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0018:                                                                        //dup
	IL_0019:            Temp_4=Temp_1;                                              //stloc.0
	IL_001a:                                                                        //ldc.i4.1
	IL_001b:                                                                        //add
	IL_001c:            this->F_x1=(Temp_4 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldelem.u1
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_2=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //dup
	IL_002b:            Temp_3=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0030:                                                                        //dup
	IL_0031:            Temp_7=Temp_3;                                              //stloc.0
	IL_0032:                                                                        //ldc.i4.1
	IL_0033:                                                                        //add
	IL_0034:            this->F_x1=(Temp_7 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_0039:                                                                        //ldloc.0
	IL_003a:                                                                        //ldelem.u1
	IL_003b:                                                                        //ldc.i4.8
	IL_003c:                                                                        //shl
	IL_003d:                                                                        //or
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_5=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //dup
	IL_0046:            Temp_6=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_004b:                                                                        //dup
	IL_004c:            Temp_10=Temp_6;                                             //stloc.0
	IL_004d:                                                                        //ldc.i4.1
	IL_004e:                                                                        //add
	IL_004f:            this->F_x1=(Temp_10 + 1);                                   //stfld				System::Int32 Root::T_x139 F_x1
	IL_0054:                                                                        //ldloc.0
	IL_0055:                                                                        //ldelem.u1
	IL_0056:                                                                        //ldc.i4.s				16
	IL_0058:                                                                        //shl
	IL_0059:                                                                        //or
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_8=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //dup
	IL_0062:            Temp_9=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0067:                                                                        //dup
	IL_0068:            V_0=Temp_9;                                                 //stloc.0
	IL_0069:                                                                        //ldc.i4.1
	IL_006a:                                                                        //add
	IL_006b:            this->F_x1=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0070:                                                                        //ldloc.0
	IL_0071:                                                                        //ldelem.u1
	IL_0072:                                                                        //ldc.i4.s				24
	IL_0074:                                                                        //shl
	IL_0075:                                                                        //or
	IL_0076:            return safe_cast<System::Int32>((((Temp_0[Temp_4] | (Temp_2[Temp_7] << 8)) | (Temp_5[Temp_10] << 16)) | (Temp_8[V_0] << 24)));//ret

}
inline System::Int32 Root::T_x139::M_x6()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	array<System::Byte>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	array<System::Byte>^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0047;case 1:goto IL_00af;case 2:goto IL_005b;case 3:goto IL_007b;case 4:goto IL_0068;case 5:goto IL_00ce;};//switch				(IL_0047,IL_00af,IL_005b,IL_007b,IL_0068,IL_00ce)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //dup
	IL_002b:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0030:                                                                        //dup
	IL_0031:            V_1=Temp_1;                                                 //stloc.1
	IL_0032:                                                                        //ldc.i4.1
	IL_0033:                                                                        //add
	IL_0034:            this->F_x1=(V_1 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0039:                                                                        //ldloc.1
	IL_003a:                                                                        //ldelem.u1
	IL_003b:            V_0=safe_cast<System::Int32>(Temp_0[V_1]);                  //stloc.0
	IL_003c:                                                                        //ldc.i4				0x0
	IL_0041:            V_2=0;                                                      //stloc				V_2
	IL_0045:            /*goto IL_0002;*/goto IL_0047;                              //br.s				IL_0002
	IL_0047:                                                                        //ldloc.0
	IL_0048:                                                                        //ldc.i4				0x80
	IL_004d:                                                                        //and
	IL_004e:            if((V_0 & 128)!=0)goto IL_00a1;                             //brtrue.s				IL_00a1
	IL_0050:                                                                        //ldc.i4				0x2
	IL_0055:            V_2=2;                                                      //stloc				V_2
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_009d;                                               //br.s				IL_009d
	IL_005d:                                                                        //ldc.i4				0x4
	IL_0062:            V_2=4;                                                      //stloc				V_2
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:                                                                        //ldloc.0
	IL_0069:                                                                        //ldc.i4				0xff
	IL_006e:            if(V_0!=255)goto IL_00d0;                                   //bne.un.s				IL_00d0
	IL_0070:                                                                        //ldc.i4				0x3
	IL_0075:            V_2=3;                                                      //stloc				V_2
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_009f;                                               //br.s				IL_009f
	IL_007d:                                                                        //ldloc.0
	IL_007e:                                                                        //ldc.i4.s				63
	IL_0080:                                                                        //and
	IL_0081:                                                                        //ldc.i4.8
	IL_0082:                                                                        //shl
	IL_0083:                                                                        //ldarg.0
	IL_0084:            Temp_10=this->F_x2;                                         //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0089:                                                                        //ldarg.0
	IL_008a:                                                                        //dup
	IL_008b:            Temp_11=this->F_x1;                                         //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0090:                                                                        //dup
	IL_0091:            V_1=Temp_11;                                                //stloc.1
	IL_0092:                                                                        //ldc.i4.1
	IL_0093:                                                                        //add
	IL_0094:            this->F_x1=(V_1 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0099:                                                                        //ldloc.1
	IL_009a:                                                                        //ldelem.u1
	IL_009b:                                                                        //or
	IL_009c:            return (((V_0 & 63) << 8) | safe_cast<System::Int32>(Temp_10[V_1]));//ret
	IL_009d:                                                                        //ldloc.0
	IL_009e:            return V_0;                                                 //ret
	IL_009f:                                                                        //ldc.i4.m1
	IL_00a0:            return -1;                                                  //ret
	IL_00a1:                                                                        //ldc.i4				0x1
	IL_00a6:            V_2=1;                                                      //stloc				V_2
	IL_00aa:            /*goto IL_0002;*/goto IL_00af;                              //br				IL_0002
	IL_00af:                                                                        //ldc.i4.4
	IL_00b0:                                                                        //dup
	IL_00b1:                                                                        //dup
	IL_00b2:                                                                        //ldc.i4.2
	IL_00b3:                                                                        //sub
	IL_00b4:                                                                        //blt				IL_00b0
	IL_00b9:                                                                        //pop
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:                                                                        //ldc.i4.s				64
	IL_00bd:                                                                        //and
	IL_00be:            if((V_0 & 64)!=0)goto IL_005d;                              //brtrue.s				IL_005d
	IL_00c0:                                                                        //ldc.i4				0x5
	IL_00c5:            V_2=5;                                                      //stloc				V_2
	IL_00c9:            /*goto IL_0002;*/goto IL_00ce;                              //br				IL_0002
	IL_00ce:            goto IL_007d;                                               //br.s				IL_007d
	IL_00d0:                                                                        //ldloc.0
	IL_00d1:                                                                        //ldc.i4.s				63
	IL_00d3:                                                                        //and
	IL_00d4:                                                                        //ldc.i4.s				24
	IL_00d6:                                                                        //shl
	IL_00d7:                                                                        //ldarg.0
	IL_00d8:            Temp_2=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_00dd:                                                                        //ldarg.0
	IL_00de:                                                                        //dup
	IL_00df:            Temp_3=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_00e4:                                                                        //dup
	IL_00e5:            Temp_6=Temp_3;                                              //stloc.1
	IL_00e6:                                                                        //ldc.i4.1
	IL_00e7:                                                                        //add
	IL_00e8:            this->F_x1=(Temp_6 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_00ed:                                                                        //ldloc.1
	IL_00ee:                                                                        //ldelem.u1
	IL_00ef:                                                                        //ldc.i4.s				16
	IL_00f1:                                                                        //shl
	IL_00f2:                                                                        //or
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:            Temp_4=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:                                                                        //dup
	IL_00fb:            Temp_5=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_0100:                                                                        //dup
	IL_0101:            Temp_9=Temp_5;                                              //stloc.1
	IL_0102:                                                                        //ldc.i4.1
	IL_0103:                                                                        //add
	IL_0104:            this->F_x1=(Temp_9 + 1);                                    //stfld				System::Int32 Root::T_x139 F_x1
	IL_0109:                                                                        //ldloc.1
	IL_010a:                                                                        //ldelem.u1
	IL_010b:                                                                        //ldc.i4.8
	IL_010c:                                                                        //shl
	IL_010d:                                                                        //or
	IL_010e:                                                                        //ldarg.0
	IL_010f:            Temp_7=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0114:                                                                        //ldarg.0
	IL_0115:                                                                        //dup
	IL_0116:            Temp_8=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_011b:                                                                        //dup
	IL_011c:            V_1=Temp_8;                                                 //stloc.1
	IL_011d:                                                                        //ldc.i4.1
	IL_011e:                                                                        //add
	IL_011f:            this->F_x1=(V_1 + 1);                                       //stfld				System::Int32 Root::T_x139 F_x1
	IL_0124:                                                                        //ldloc.1
	IL_0125:                                                                        //ldelem.u1
	IL_0126:                                                                        //or
	IL_0127:            return (((((V_0 & 63) << 24) | safe_cast<System::Int32>((Temp_2[Temp_6] << 16))) | safe_cast<System::Int32>((Temp_4[Temp_9] << 8))) | safe_cast<System::Int32>(Temp_7[V_1]));//ret

}
inline System::Double Root::T_x139::M_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Double Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.8
	IL_0002:            Temp_0=this->M_x8(safe_cast<System::Int32>(8));             //call				array<System::Byte>^ Root::T_x139::M_x8(System::Int32)
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            Temp_1=System::BitConverter::ToDouble(Temp_0,safe_cast<System::Int32>(0));//call				System::Double System::BitConverter::ToDouble(array<System::Byte>^,System::Int32)
	IL_000d:            return Temp_1;                                              //ret

}
inline System::Char Root::T_x139::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x11();                                       //call				System::UInt16 Root::T_x139::M_x11()
	IL_0006:            return safe_cast<System::Char>(Temp_0);                     //ret

}
inline array<System::Byte>^ Root::T_x139::M_x8(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //conv.ovf.u4
	IL_000d:            Temp_0=gcnew array<System::Byte>(safe_cast<System::UInt32>(A_0));//newarr				System::Byte
	IL_0012:            V_0=Temp_0;                                                 //stloc.0
	IL_0013:                                                                        //ldarg.0
	IL_0014:            Temp_1=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x139 F_x2
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_2=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_001f:                                                                        //ldloc.0
	IL_0020:                                                                        //ldc.i4.0
	IL_0021:                                                                        //ldarg.1
	IL_0022:            System::Buffer::BlockCopy(safe_cast<System::Array^>(Temp_1),Temp_2,safe_cast<System::Array^>(V_0),safe_cast<System::Int32>(0),A_0);//call				void System::Buffer::BlockCopy(System::Array^,System::Int32,System::Array^,System::Int32,System::Int32)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //dup
	IL_0029:            Temp_3=this->F_x1;                                          //ldfld				System::Int32 Root::T_x139 F_x1
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //add
	IL_0030:            this->F_x1=(Temp_3 + A_0);                                  //stfld				System::Int32 Root::T_x139 F_x1
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return V_0;                                                 //ret

}
inline System::UInt64 Root::T_x139::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::UInt32 Temp_1 = 0;
	//local variables.
	System::UInt64 V_0 = 0;
	System::UInt64 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->M_x2();                                        //call				System::UInt32 Root::T_x139::M_x2()
	IL_0009:                                                                        //conv.u8
	IL_000a:            V_0=safe_cast<System::UInt64>(Temp_0);                      //stloc.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->M_x2();                                        //call				System::UInt32 Root::T_x139::M_x2()
	IL_0011:                                                                        //conv.u8
	IL_0012:            V_1=safe_cast<System::UInt64>(Temp_1);                      //stloc.1
	IL_0013:                                                                        //ldloc.0
	IL_0014:                                                                        //ldloc.1
	IL_0015:                                                                        //ldc.i4.s				32
	IL_0017:                                                                        //shl
	IL_0018:                                                                        //or
	IL_0019:            return (V_0 | (V_1 << 32));                                 //ret

}
