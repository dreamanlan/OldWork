#include "global_xref.h"

inline Root::T_x140::T_x140()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.s				64
	IL_0009:            Temp_0=gcnew array<System::Byte>(64);                       //newarr				System::Byte
	IL_000e:            this->F_x1=Temp_0;                                          //stfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:            this->F_x12=0;                                              //stfld				System::Int32 Root::T_x140 F_x12
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            this->F_x2=0;                                               //stfld				System::Int32 Root::T_x140 F_x2
	IL_0021:            return;                                                     //ret

}
inline array<System::Byte>^ Root::T_x140::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<System::Byte>^ Temp_1 = nullptr;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_0009:                                                                        //conv.ovf.u4
	IL_000a:            Temp_1=gcnew array<System::Byte>(safe_cast<System::UInt32>(Temp_0));//newarr				System::Byte
	IL_000f:            V_0=Temp_1;                                                 //stloc.0
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldloc.0
	IL_0018:                                                                        //ldc.i4.0
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_3=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_001f:            System::Buffer::BlockCopy(safe_cast<System::Array^>(Temp_2),safe_cast<System::Int32>(0),safe_cast<System::Array^>(V_0),safe_cast<System::Int32>(0),Temp_3);//call				void System::Buffer::BlockCopy(System::Array^,System::Int32,System::Array^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldloc.0
	IL_0025:            return V_0;                                                 //ret

}
inline void Root::T_x140::M_x1(array<System::Byte>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_002e;                                               //br.s				IL_002e
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0044;case 1:goto IL_005a;case 2:goto IL_00c9;case 3:goto IL_009b;case 4:goto IL_006e;case 5:goto IL_00b2;};//switch				(IL_0044,IL_005a,IL_00c9,IL_009b,IL_006e,IL_00b2)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_1=A_0->Length;                                         //ldlen
	IL_0036:                                                                        //conv.i4
	IL_0037:                                                                        //add
	IL_0038:            V_0=(Temp_0 + Temp_1);                                      //stloc.0
	IL_0039:                                                                        //ldc.i4				0x0
	IL_003e:            V_1=0;                                                      //stloc				V_1
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_2=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_004b:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_004c:                                                                        //conv.i4
	IL_004d:            if(V_0<=Temp_3)goto IL_0070;                                //ble.s				IL_0070
	IL_004f:                                                                        //ldc.i4				0x1
	IL_0054:            V_1=1;                                                      //stloc				V_1
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:            goto IL_00b4;                                               //br.s				IL_00b4
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //ldloc.0
	IL_005e:            this->F_x2=V_0;                                             //stfld				System::Int32 Root::T_x140 F_x2
	IL_0063:                                                                        //ldc.i4				0x4
	IL_0068:            V_1=4;                                                      //stloc				V_1
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_0070:                                                                        //ldarg.1
	IL_0071:                                                                        //ldc.i4.0
	IL_0072:                                                                        //ldarg.0
	IL_0073:            Temp_4=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_5=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_007e:                                                                        //ldarg.1
	IL_007f:            Temp_6=A_0->Length;                                         //ldlen
	IL_0080:                                                                        //conv.i4
	IL_0081:            System::Buffer::BlockCopy(safe_cast<System::Array^>(A_0),safe_cast<System::Int32>(0),safe_cast<System::Array^>(Temp_4),Temp_5,Temp_6);//call				void System::Buffer::BlockCopy(System::Array^,System::Int32,System::Array^,System::Int32,System::Int32)
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //ldloc.0
	IL_0088:            this->F_x12=V_0;                                            //stfld				System::Int32 Root::T_x140 F_x12
	IL_008d:                                                                        //ldc.i4				0x3
	IL_0092:            V_1=3;                                                      //stloc				V_1
	IL_0096:            /*goto IL_0002;*/goto IL_009b;                              //br				IL_0002
	IL_009b:                                                                        //ldloc.0
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_7=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_00a2:            if(V_0<Temp_7)goto IL_00cb;                                 //blt.s				IL_00cb
	IL_00a4:                                                                        //ldc.i4				0x5
	IL_00a9:            V_1=5;                                                      //stloc				V_1
	IL_00ad:            /*goto IL_0002;*/goto IL_00b2;                              //br				IL_0002
	IL_00b2:            goto IL_005c;                                               //br.s				IL_005c
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:                                                                        //ldloc.0
	IL_00b6:            this->M_x1(V_0);                                            //call				void Root::T_x140::M_x1(System::Int32)
	IL_00bb:                                                                        //ldc.i4				0x2
	IL_00c0:            V_1=2;                                                      //stloc				V_1
	IL_00c4:            /*goto IL_0002;*/goto IL_00c9;                              //br				IL_0002
	IL_00c9:            goto IL_0070;                                               //br.s				IL_0070
	IL_00cb:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x140^ Temp_0 = nullptr;
	Root::T_x140^ Temp_1 = nullptr;
	Root::T_x140^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x140^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_1=this;if(A_0)goto IL_0006;                            //brtrue.s				IL_0006
	IL_0004:            Temp_2=Temp_1;goto IL_0009;                                 //br.s				IL_0009
	IL_0006:                                                                        //ldc.i4.1
	IL_0007:            Temp_4=Temp_1;Temp_3=1;goto IL_000c;                        //br.s				IL_000c
	IL_0009:                                                                        //ldc.i4.0
	IL_000a:            Temp_4=Temp_2;Temp_3=0;goto IL_000c;                        //br.s				IL_000c
	IL_000c:            Temp_4->M_x1(safe_cast<System::Byte>(Temp_3));/*warning ! semantic stack doesn't empty at joint !;*///call				void Root::T_x140::M_x1(System::Byte)
	IL_0011:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Byte A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0050;case 1:goto IL_00a4;case 2:goto IL_008d;case 3:goto IL_0064;case 4:goto IL_0037;case 5:goto IL_00bb;};//switch				(IL_0050,IL_00a4,IL_008d,IL_0064,IL_0037,IL_00bb)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0029:                                                                        //ldc.i4.1
	IL_002a:                                                                        //add
	IL_002b:            V_0=(Temp_0 + 1);                                           //stloc.0
	IL_002c:                                                                        //ldc.i4				0x4
	IL_0031:            V_2=4;                                                      //stloc				V_2
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:            goto IL_003a;                                               //br.s				IL_003a
	IL_0039:                                                                        //break
	IL_003a:                                                                        //ldloc.0
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_2=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0041:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0042:                                                                        //conv.i4
	IL_0043:            if(V_0<=Temp_3)goto IL_0066;                                //ble.s				IL_0066
	IL_0045:                                                                        //ldc.i4				0x0
	IL_004a:            V_2=0;                                                      //stloc				V_2
	IL_004e:            /*goto IL_0002;*/goto IL_0050;                              //br.s				IL_0002
	IL_0050:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_0052:                                                                        //ldarg.0
	IL_0053:                                                                        //ldloc.0
	IL_0054:            this->F_x2=V_0;                                             //stfld				System::Int32 Root::T_x140 F_x2
	IL_0059:                                                                        //ldc.i4				0x3
	IL_005e:            V_2=3;                                                      //stloc				V_2
	IL_0062:            /*goto IL_0002;*/goto IL_0064;                              //br.s				IL_0002
	IL_0064:            goto IL_00bd;                                               //br.s				IL_00bd
	IL_0066:                                                                        //ldarg.0
	IL_0067:            Temp_4=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //dup
	IL_006e:            Temp_5=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0073:                                                                        //dup
	IL_0074:            V_1=Temp_5;                                                 //stloc.1
	IL_0075:                                                                        //ldc.i4.1
	IL_0076:                                                                        //add
	IL_0077:            this->F_x12=(V_1 + 1);                                      //stfld				System::Int32 Root::T_x140 F_x12
	IL_007c:                                                                        //ldloc.1
	IL_007d:                                                                        //ldarg.1
	IL_007e:            Temp_4[V_1]=A_0;                                            //stelem.i1
	IL_007f:                                                                        //ldc.i4				0x2
	IL_0084:            V_2=2;                                                      //stloc				V_2
	IL_0088:            /*goto IL_0002;*/goto IL_008d;                              //br				IL_0002
	IL_008d:                                                                        //ldloc.0
	IL_008e:                                                                        //ldarg.0
	IL_008f:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_0094:            if(V_0<Temp_1)goto IL_00bd;                                 //blt.s				IL_00bd
	IL_0096:                                                                        //ldc.i4				0x1
	IL_009b:            V_2=1;                                                      //stloc				V_2
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:            goto IL_0052;                                               //br.s				IL_0052
	IL_00a6:                                                                        //ldarg.0
	IL_00a7:                                                                        //ldloc.0
	IL_00a8:            this->M_x1(V_0);                                            //call				void Root::T_x140::M_x1(System::Int32)
	IL_00ad:                                                                        //ldc.i4				0x5
	IL_00b2:            V_2=5;                                                      //stloc				V_2
	IL_00b6:            /*goto IL_0002;*/goto IL_00bb;                              //br				IL_0002
	IL_00bb:            goto IL_0066;                                               //br.s				IL_0066
	IL_00bd:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Char A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x1(safe_cast<System::UInt16>(A_0));                 //call				void Root::T_x140::M_x1(System::UInt16)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Double A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=System::BitConverter::GetBytes(A_0);                 //call				array<System::Byte>^ System::BitConverter::GetBytes(System::Double)
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x140::M_x1(array<System::Byte>^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Int16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //conv.u2
	IL_0003:            this->M_x1(safe_cast<System::UInt16>(A_0));                 //call				void Root::T_x140::M_x1(System::UInt16)
	IL_0008:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	array<System::Byte>^ Temp_3 = nullptr;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Byte>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_004e;case 1:goto IL_003c;case 2:goto IL_002d;};//switch				(IL_004e,IL_003c,IL_002d)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_001d:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:                                                                        //ldc.i4.2
	IL_0020:                                                                        //mul
	IL_0021:            V_0=(Temp_1 * 2);                                           //stloc.0
	IL_0022:                                                                        //ldc.i4				0x2
	IL_0027:            V_2=2;                                                      //stloc				V_2
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldarg.1
	IL_002f:            if(V_0>=A_0)goto IL_0050;                                   //bge.s				IL_0050
	IL_0031:                                                                        //ldc.i4				0x1
	IL_0036:            V_2=1;                                                      //stloc				V_2
	IL_003a:            /*goto IL_0002;*/goto IL_003c;                              //br.s				IL_0002
	IL_003c:            goto IL_003f;                                               //br.s				IL_003f
	IL_003e:                                                                        //break
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.1
	IL_0042:            V_0=A_0;                                                    //stloc.0
	IL_0043:                                                                        //ldc.i4				0x0
	IL_0048:            V_2=0;                                                      //stloc				V_2
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_0050;                                               //br.s				IL_0050
	IL_0050:                                                                        //ldloc.0
	IL_0051:                                                                        //conv.ovf.u4
	IL_0052:            Temp_2=gcnew array<System::Byte>(safe_cast<System::UInt32>(V_0));//newarr				System::Byte
	IL_0057:            V_1=Temp_2;                                                 //stloc.1
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_3=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_005e:                                                                        //ldc.i4.0
	IL_005f:                                                                        //ldloc.1
	IL_0060:                                                                        //ldc.i4.0
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_4=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0067:            Temp_5=Temp_4->Length;                                      //ldlen
	IL_0068:                                                                        //conv.i4
	IL_0069:            System::Buffer::BlockCopy(safe_cast<System::Array^>(Temp_3),safe_cast<System::Int32>(0),safe_cast<System::Array^>(V_1),safe_cast<System::Int32>(0),Temp_5);//call				void System::Buffer::BlockCopy(System::Array^,System::Int32,System::Array^,System::Int32,System::Int32)
	IL_006e:                                                                        //ldarg.0
	IL_006f:                                                                        //ldloc.1
	IL_0070:            this->F_x1=V_1;                                             //stfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0075:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Int64 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x1(safe_cast<System::UInt64>(A_0));                 //call				void Root::T_x140::M_x1(System::UInt64)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::IO::Stream^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:                                                                        //ldarg.0
	IL_0009:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_000e:            A_0->Write(Temp_0,safe_cast<System::Int32>(0),Temp_1);      //callvirt				void System::IO::Stream::Write(array<System::Byte>^,System::Int32,System::Int32)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::SByte A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //conv.u1
	IL_0003:            this->M_x1(safe_cast<System::Byte>(A_0));                   //call				void Root::T_x140::M_x1(System::Byte)
	IL_0008:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::Single A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=System::BitConverter::GetBytes(A_0);                 //call				array<System::Byte>^ System::BitConverter::GetBytes(System::Single)
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x140::M_x1(array<System::Byte>^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<System::Byte>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	array<System::Byte>^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_00e4;case 1:goto IL_0037;case 2:goto IL_00c2;case 3:goto IL_004d;case 4:goto IL_0061;case 5:goto IL_00ab;};//switch				(IL_00e4,IL_0037,IL_00c2,IL_004d,IL_0061,IL_00ab)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0029:                                                                        //ldc.i4.2
	IL_002a:                                                                        //add
	IL_002b:            V_0=(Temp_0 + 2);                                           //stloc.0
	IL_002c:                                                                        //ldc.i4				0x1
	IL_0031:            V_2=1;                                                      //stloc				V_2
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:                                                                        //ldloc.0
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_6=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_003e:            Temp_7=Temp_6->Length;                                      //ldlen
	IL_003f:                                                                        //conv.i4
	IL_0040:            if(V_0<=Temp_7)goto IL_0066;                                //ble.s				IL_0066
	IL_0042:                                                                        //ldc.i4				0x3
	IL_0047:            V_2=3;                                                      //stloc				V_2
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_004f:                                                                        //ldarg.0
	IL_0050:                                                                        //ldloc.0
	IL_0051:            this->F_x2=V_0;                                             //stfld				System::Int32 Root::T_x140 F_x2
	IL_0056:                                                                        //ldc.i4				0x4
	IL_005b:            V_2=4;                                                      //stloc				V_2
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_00e6;                                               //br				IL_00e6
	IL_0066:                                                                        //ldarg.0
	IL_0067:            Temp_1=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //dup
	IL_006e:            Temp_2=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0073:                                                                        //dup
	IL_0074:            Temp_5=Temp_2;                                              //stloc.1
	IL_0075:                                                                        //ldc.i4.1
	IL_0076:                                                                        //add
	IL_0077:            this->F_x12=(Temp_5 + 1);                                   //stfld				System::Int32 Root::T_x140 F_x12
	IL_007c:                                                                        //ldloc.1
	IL_007d:                                                                        //ldarg.1
	IL_007e:                                                                        //conv.u1
	IL_007f:            Temp_1[Temp_5]=safe_cast<System::Byte>(A_0);                //stelem.i1
	IL_0080:                                                                        //ldarg.0
	IL_0081:            Temp_3=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //dup
	IL_0088:            Temp_4=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_008d:                                                                        //dup
	IL_008e:            V_1=Temp_4;                                                 //stloc.1
	IL_008f:                                                                        //ldc.i4.1
	IL_0090:                                                                        //add
	IL_0091:            this->F_x12=(V_1 + 1);                                      //stfld				System::Int32 Root::T_x140 F_x12
	IL_0096:                                                                        //ldloc.1
	IL_0097:                                                                        //ldarg.1
	IL_0098:                                                                        //conv.i4
	IL_0099:                                                                        //ldc.i4.8
	IL_009a:                                                                        //shr
	IL_009b:                                                                        //conv.u1
	IL_009c:            Temp_3[V_1]=safe_cast<System::Byte>((safe_cast<System::Int32>(A_0) >> 8));//stelem.i1
	IL_009d:                                                                        //ldc.i4				0x5
	IL_00a2:            V_2=5;                                                      //stloc				V_2
	IL_00a6:            /*goto IL_0002;*/goto IL_00ab;                              //br				IL_0002
	IL_00ab:                                                                        //ldloc.0
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:            Temp_8=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_00b2:            if(V_0<Temp_8)goto IL_00e6;                                 //blt.s				IL_00e6
	IL_00b4:                                                                        //ldc.i4				0x2
	IL_00b9:            V_2=2;                                                      //stloc				V_2
	IL_00bd:            /*goto IL_0002;*/goto IL_00c2;                              //br				IL_0002
	IL_00c2:            goto IL_004f;                                               //br.s				IL_004f
	IL_00c4:                                                                        //ldc.i4.4
	IL_00c5:                                                                        //dup
	IL_00c6:                                                                        //dup
	IL_00c7:                                                                        //ldc.i4.2
	IL_00c8:                                                                        //sub
	IL_00c9:                                                                        //blt				IL_00c5
	IL_00ce:                                                                        //pop
	IL_00cf:                                                                        //ldarg.0
	IL_00d0:                                                                        //ldloc.0
	IL_00d1:            this->M_x1(V_0);                                            //call				void Root::T_x140::M_x1(System::Int32)
	IL_00d6:                                                                        //ldc.i4				0x0
	IL_00db:            V_2=0;                                                      //stloc				V_2
	IL_00df:            /*goto IL_0002;*/goto IL_00e4;                              //br				IL_0002
	IL_00e4:            goto IL_0066;                                               //br.s				IL_0066
	IL_00e6:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	array<System::Byte>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	array<System::Byte>^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	array<System::Byte>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	array<System::Byte>^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_004d;case 1:goto IL_00fe;case 2:goto IL_00e7;case 3:goto IL_0037;case 4:goto IL_0064;case 5:goto IL_011b;};//switch				(IL_004d,IL_00fe,IL_00e7,IL_0037,IL_0064,IL_011b)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0029:                                                                        //ldc.i4.4
	IL_002a:                                                                        //add
	IL_002b:            V_0=(Temp_0 + 4);                                           //stloc.0
	IL_002c:                                                                        //ldc.i4				0x3
	IL_0031:            V_2=3;                                                      //stloc				V_2
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:                                                                        //ldloc.0
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_2=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_003e:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_003f:                                                                        //conv.i4
	IL_0040:            if(V_0<=Temp_3)goto IL_0069;                                //ble.s				IL_0069
	IL_0042:                                                                        //ldc.i4				0x0
	IL_0047:            V_2=0;                                                      //stloc				V_2
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:            goto IL_0103;                                               //br				IL_0103
	IL_0052:                                                                        //ldarg.0
	IL_0053:                                                                        //ldloc.0
	IL_0054:            this->F_x2=V_0;                                             //stfld				System::Int32 Root::T_x140 F_x2
	IL_0059:                                                                        //ldc.i4				0x4
	IL_005e:            V_2=4;                                                      //stloc				V_2
	IL_0062:            /*goto IL_0002;*/goto IL_0064;                              //br.s				IL_0002
	IL_0064:            goto IL_0120;                                               //br				IL_0120
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_4=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_006f:                                                                        //ldarg.0
	IL_0070:                                                                        //dup
	IL_0071:            Temp_5=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0076:                                                                        //dup
	IL_0077:            Temp_8=Temp_5;                                              //stloc.1
	IL_0078:                                                                        //ldc.i4.1
	IL_0079:                                                                        //add
	IL_007a:            this->F_x12=(Temp_8 + 1);                                   //stfld				System::Int32 Root::T_x140 F_x12
	IL_007f:                                                                        //ldloc.1
	IL_0080:                                                                        //ldarg.1
	IL_0081:                                                                        //conv.u1
	IL_0082:            Temp_4[Temp_8]=safe_cast<System::Byte>(A_0);                //stelem.i1
	IL_0083:                                                                        //ldarg.0
	IL_0084:            Temp_6=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0089:                                                                        //ldarg.0
	IL_008a:                                                                        //dup
	IL_008b:            Temp_7=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0090:                                                                        //dup
	IL_0091:            Temp_11=Temp_7;                                             //stloc.1
	IL_0092:                                                                        //ldc.i4.1
	IL_0093:                                                                        //add
	IL_0094:            this->F_x12=(Temp_11 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_0099:                                                                        //ldloc.1
	IL_009a:                                                                        //ldarg.1
	IL_009b:                                                                        //ldc.i4.8
	IL_009c:                                                                        //shr.un
	IL_009d:                                                                        //conv.u1
	IL_009e:            Temp_6[Temp_11]=safe_cast<System::Byte>((A_0 >> 8));        //stelem.i1
	IL_009f:                                                                        //ldarg.0
	IL_00a0:            Temp_9=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:                                                                        //dup
	IL_00a7:            Temp_10=this->F_x12;                                        //ldfld				System::Int32 Root::T_x140 F_x12
	IL_00ac:                                                                        //dup
	IL_00ad:            Temp_14=Temp_10;                                            //stloc.1
	IL_00ae:                                                                        //ldc.i4.1
	IL_00af:                                                                        //add
	IL_00b0:            this->F_x12=(Temp_14 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_00b5:                                                                        //ldloc.1
	IL_00b6:                                                                        //ldarg.1
	IL_00b7:                                                                        //ldc.i4.s				16
	IL_00b9:                                                                        //shr.un
	IL_00ba:                                                                        //conv.u1
	IL_00bb:            Temp_9[Temp_14]=safe_cast<System::Byte>((A_0 >> 16));       //stelem.i1
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:            Temp_12=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:                                                                        //dup
	IL_00c4:            Temp_13=this->F_x12;                                        //ldfld				System::Int32 Root::T_x140 F_x12
	IL_00c9:                                                                        //dup
	IL_00ca:            V_1=Temp_13;                                                //stloc.1
	IL_00cb:                                                                        //ldc.i4.1
	IL_00cc:                                                                        //add
	IL_00cd:            this->F_x12=(V_1 + 1);                                      //stfld				System::Int32 Root::T_x140 F_x12
	IL_00d2:                                                                        //ldloc.1
	IL_00d3:                                                                        //ldarg.1
	IL_00d4:                                                                        //ldc.i4.s				24
	IL_00d6:                                                                        //shr.un
	IL_00d7:                                                                        //conv.u1
	IL_00d8:            Temp_12[V_1]=safe_cast<System::Byte>((A_0 >> 24));          //stelem.i1
	IL_00d9:                                                                        //ldc.i4				0x2
	IL_00de:            V_2=2;                                                      //stloc				V_2
	IL_00e2:            /*goto IL_0002;*/goto IL_00e7;                              //br				IL_0002
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_00ee:            if(V_0<Temp_1)goto IL_0120;                                 //blt.s				IL_0120
	IL_00f0:                                                                        //ldc.i4				0x1
	IL_00f5:            V_2=1;                                                      //stloc				V_2
	IL_00f9:            /*goto IL_0002;*/goto IL_00fe;                              //br				IL_0002
	IL_00fe:            goto IL_0052;                                               //br				IL_0052
	IL_0103:            goto IL_0106;                                               //br.s				IL_0106
	IL_0105:                                                                        //break
	IL_0106:                                                                        //ldarg.0
	IL_0107:                                                                        //ldloc.0
	IL_0108:            this->M_x1(V_0);                                            //call				void Root::T_x140::M_x1(System::Int32)
	IL_010d:                                                                        //ldc.i4				0x5
	IL_0112:            V_2=5;                                                      //stloc				V_2
	IL_0116:            /*goto IL_0002;*/goto IL_011b;                              //br				IL_0002
	IL_011b:            goto IL_0069;                                               //br				IL_0069
	IL_0120:            return;                                                     //ret

}
inline void Root::T_x140::M_x1(System::UInt64 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<System::Byte>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	array<System::Byte>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	array<System::Byte>^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	array<System::Byte>^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	array<System::Byte>^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	array<System::Byte>^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	System::Int32 Temp_19 = 0;
	array<System::Byte>^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	System::Int32 Temp_22 = 0;
	array<System::Byte>^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	System::Int32 Temp_25 = 0;
	System::Int32 Temp_26 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0037;case 1:goto IL_018f;case 2:goto IL_0050;case 3:goto IL_015e;case 4:goto IL_0175;case 5:goto IL_0067;};//switch				(IL_0037,IL_018f,IL_0050,IL_015e,IL_0175,IL_0067)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0029:                                                                        //ldc.i4.8
	IL_002a:                                                                        //add
	IL_002b:            V_0=(Temp_0 + 8);                                           //stloc.0
	IL_002c:                                                                        //ldc.i4				0x0
	IL_0031:            V_2=0;                                                      //stloc				V_2
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:                                                                        //ldloc.0
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_1=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_003e:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_003f:                                                                        //conv.i4
	IL_0040:            if(V_0<=Temp_2)goto IL_006c;                                //ble.s				IL_006c
	IL_0042:            goto IL_0045;                                               //br.s				IL_0045
	IL_0044:                                                                        //break
	IL_0045:                                                                        //ldc.i4				0x2
	IL_004a:            V_2=2;                                                      //stloc				V_2
	IL_004e:            /*goto IL_0002;*/goto IL_0050;                              //br.s				IL_0002
	IL_0050:            goto IL_017a;                                               //br				IL_017a
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldloc.0
	IL_0057:            this->F_x2=V_0;                                             //stfld				System::Int32 Root::T_x140 F_x2
	IL_005c:                                                                        //ldc.i4				0x5
	IL_0061:            V_2=5;                                                      //stloc				V_2
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:            goto IL_0194;                                               //br				IL_0194
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_3=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0072:                                                                        //ldarg.0
	IL_0073:                                                                        //dup
	IL_0074:            Temp_4=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0079:                                                                        //dup
	IL_007a:            Temp_7=Temp_4;                                              //stloc.1
	IL_007b:                                                                        //ldc.i4.1
	IL_007c:                                                                        //add
	IL_007d:            this->F_x12=(Temp_7 + 1);                                   //stfld				System::Int32 Root::T_x140 F_x12
	IL_0082:                                                                        //ldloc.1
	IL_0083:                                                                        //ldarg.1
	IL_0084:                                                                        //conv.u1
	IL_0085:            Temp_3[Temp_7]=safe_cast<System::Byte>(A_0);                //stelem.i1
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_5=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_008c:                                                                        //ldarg.0
	IL_008d:                                                                        //dup
	IL_008e:            Temp_6=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0093:                                                                        //dup
	IL_0094:            Temp_10=Temp_6;                                             //stloc.1
	IL_0095:                                                                        //ldc.i4.1
	IL_0096:                                                                        //add
	IL_0097:            this->F_x12=(Temp_10 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_009c:                                                                        //ldloc.1
	IL_009d:                                                                        //ldarg.1
	IL_009e:                                                                        //ldc.i4.8
	IL_009f:                                                                        //shr.un
	IL_00a0:                                                                        //conv.u1
	IL_00a1:            Temp_5[Temp_10]=safe_cast<System::Byte>((A_0 >> 8));        //stelem.i1
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:            Temp_8=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_00a8:                                                                        //ldarg.0
	IL_00a9:                                                                        //dup
	IL_00aa:            Temp_9=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_00af:                                                                        //dup
	IL_00b0:            Temp_13=Temp_9;                                             //stloc.1
	IL_00b1:                                                                        //ldc.i4.1
	IL_00b2:                                                                        //add
	IL_00b3:            this->F_x12=(Temp_13 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_00b8:                                                                        //ldloc.1
	IL_00b9:                                                                        //ldarg.1
	IL_00ba:                                                                        //ldc.i4.s				16
	IL_00bc:                                                                        //shr.un
	IL_00bd:                                                                        //conv.u1
	IL_00be:            Temp_8[Temp_13]=safe_cast<System::Byte>((A_0 >> 16));       //stelem.i1
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:            Temp_11=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_00c5:                                                                        //ldarg.0
	IL_00c6:                                                                        //dup
	IL_00c7:            Temp_12=this->F_x12;                                        //ldfld				System::Int32 Root::T_x140 F_x12
	IL_00cc:                                                                        //dup
	IL_00cd:            Temp_16=Temp_12;                                            //stloc.1
	IL_00ce:                                                                        //ldc.i4.1
	IL_00cf:                                                                        //add
	IL_00d0:            this->F_x12=(Temp_16 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_00d5:                                                                        //ldloc.1
	IL_00d6:                                                                        //ldarg.1
	IL_00d7:                                                                        //ldc.i4.s				24
	IL_00d9:                                                                        //shr.un
	IL_00da:                                                                        //conv.u1
	IL_00db:            Temp_11[Temp_16]=safe_cast<System::Byte>((A_0 >> 24));      //stelem.i1
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            Temp_14=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:                                                                        //dup
	IL_00e4:            Temp_15=this->F_x12;                                        //ldfld				System::Int32 Root::T_x140 F_x12
	IL_00e9:                                                                        //dup
	IL_00ea:            Temp_19=Temp_15;                                            //stloc.1
	IL_00eb:                                                                        //ldc.i4.1
	IL_00ec:                                                                        //add
	IL_00ed:            this->F_x12=(Temp_19 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_00f2:                                                                        //ldloc.1
	IL_00f3:                                                                        //ldarg.1
	IL_00f4:                                                                        //ldc.i4.s				32
	IL_00f6:                                                                        //shr.un
	IL_00f7:                                                                        //conv.u1
	IL_00f8:            Temp_14[Temp_19]=safe_cast<System::Byte>((A_0 >> 32));      //stelem.i1
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:            Temp_17=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_00ff:                                                                        //ldarg.0
	IL_0100:                                                                        //dup
	IL_0101:            Temp_18=this->F_x12;                                        //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0106:                                                                        //dup
	IL_0107:            Temp_22=Temp_18;                                            //stloc.1
	IL_0108:                                                                        //ldc.i4.1
	IL_0109:                                                                        //add
	IL_010a:            this->F_x12=(Temp_22 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_010f:                                                                        //ldloc.1
	IL_0110:                                                                        //ldarg.1
	IL_0111:                                                                        //ldc.i4.s				40
	IL_0113:                                                                        //shr.un
	IL_0114:                                                                        //conv.u1
	IL_0115:            Temp_17[Temp_22]=safe_cast<System::Byte>((A_0 >> 40));      //stelem.i1
	IL_0116:                                                                        //ldarg.0
	IL_0117:            Temp_20=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_011c:                                                                        //ldarg.0
	IL_011d:                                                                        //dup
	IL_011e:            Temp_21=this->F_x12;                                        //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0123:                                                                        //dup
	IL_0124:            Temp_25=Temp_21;                                            //stloc.1
	IL_0125:                                                                        //ldc.i4.1
	IL_0126:                                                                        //add
	IL_0127:            this->F_x12=(Temp_25 + 1);                                  //stfld				System::Int32 Root::T_x140 F_x12
	IL_012c:                                                                        //ldloc.1
	IL_012d:                                                                        //ldarg.1
	IL_012e:                                                                        //ldc.i4.s				48
	IL_0130:                                                                        //shr.un
	IL_0131:                                                                        //conv.u1
	IL_0132:            Temp_20[Temp_25]=safe_cast<System::Byte>((A_0 >> 48));      //stelem.i1
	IL_0133:                                                                        //ldarg.0
	IL_0134:            Temp_23=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0139:                                                                        //ldarg.0
	IL_013a:                                                                        //dup
	IL_013b:            Temp_24=this->F_x12;                                        //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0140:                                                                        //dup
	IL_0141:            V_1=Temp_24;                                                //stloc.1
	IL_0142:                                                                        //ldc.i4.1
	IL_0143:                                                                        //add
	IL_0144:            this->F_x12=(V_1 + 1);                                      //stfld				System::Int32 Root::T_x140 F_x12
	IL_0149:                                                                        //ldloc.1
	IL_014a:                                                                        //ldarg.1
	IL_014b:                                                                        //ldc.i4.s				56
	IL_014d:                                                                        //shr.un
	IL_014e:                                                                        //conv.u1
	IL_014f:            Temp_23[V_1]=safe_cast<System::Byte>((A_0 >> 56));          //stelem.i1
	IL_0150:                                                                        //ldc.i4				0x3
	IL_0155:            V_2=3;                                                      //stloc				V_2
	IL_0159:            /*goto IL_0002;*/goto IL_015e;                              //br				IL_0002
	IL_015e:                                                                        //ldloc.0
	IL_015f:                                                                        //ldarg.0
	IL_0160:            Temp_26=this->F_x2;                                         //ldfld				System::Int32 Root::T_x140 F_x2
	IL_0165:            if(V_0<Temp_26)goto IL_0194;                                //blt.s				IL_0194
	IL_0167:                                                                        //ldc.i4				0x4
	IL_016c:            V_2=4;                                                      //stloc				V_2
	IL_0170:            /*goto IL_0002;*/goto IL_0175;                              //br				IL_0002
	IL_0175:            goto IL_0055;                                               //br				IL_0055
	IL_017a:                                                                        //ldarg.0
	IL_017b:                                                                        //ldloc.0
	IL_017c:            this->M_x1(V_0);                                            //call				void Root::T_x140::M_x1(System::Int32)
	IL_0181:                                                                        //ldc.i4				0x1
	IL_0186:            V_2=1;                                                      //stloc				V_2
	IL_018a:            /*goto IL_0002;*/goto IL_018f;                              //br				IL_0002
	IL_018f:            goto IL_006c;                                               //br				IL_006c
	IL_0194:            return;                                                     //ret

}
inline System::Int32 Root::T_x140::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x140::M_x12(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x1(safe_cast<System::UInt32>(A_0));                 //call				void Root::T_x140::M_x1(System::UInt32)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x140::M_x13(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:            /*goto IL_0018;*/goto IL_000b;                              //br.s				IL_0018
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //sub
	IL_0010:                                                                        //blt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:            goto IL_0039;                                               //br.s				IL_0039
	IL_0018:                                                                        //ldloc				V_0
	IL_001c:            switch(V_0){case 0:goto IL_0084;case 1:goto IL_0063;case 2:goto IL_0070;case 3:goto IL_004f;case 4:goto IL_0098;case 5:goto IL_000b;};//switch				(IL_0084,IL_0063,IL_0070,IL_004f,IL_0098,IL_000b)
	IL_0039:                                                                        //ldarg.1
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_1=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x140 F_x1
	IL_0040:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0041:                                                                        //conv.i4
	IL_0042:            if(A_0<Temp_2)goto IL_0065;                                 //blt.s				IL_0065
	IL_0044:                                                                        //ldc.i4				0x3
	IL_0049:            V_0=3;                                                      //stloc				V_0
	IL_004d:            /*goto IL_0018;*/goto IL_004f;                              //br.s				IL_0018
	IL_004f:            goto IL_0086;                                               //br.s				IL_0086
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldarg.1
	IL_0053:            this->F_x2=A_0;                                             //stfld				System::Int32 Root::T_x140 F_x2
	IL_0058:                                                                        //ldc.i4				0x1
	IL_005d:            V_0=1;                                                      //stloc				V_0
	IL_0061:            /*goto IL_0018;*/goto IL_0063;                              //br.s				IL_0018
	IL_0063:            goto IL_009a;                                               //br.s				IL_009a
	IL_0065:                                                                        //ldc.i4				0x2
	IL_006a:            V_0=2;                                                      //stloc				V_0
	IL_006e:            /*goto IL_0018;*/goto IL_0070;                              //br.s				IL_0018
	IL_0070:                                                                        //ldarg.1
	IL_0071:                                                                        //ldarg.0
	IL_0072:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x140 F_x2
	IL_0077:            if(A_0<=Temp_0)goto IL_009a;                                //ble.s				IL_009a
	IL_0079:                                                                        //ldc.i4				0x0
	IL_007e:            V_0=0;                                                      //stloc				V_0
	IL_0082:            /*goto IL_0018;*/goto IL_0084;                              //br.s				IL_0018
	IL_0084:            goto IL_0051;                                               //br.s				IL_0051
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //ldarg.1
	IL_0088:            this->M_x1(A_0);                                            //call				void Root::T_x140::M_x1(System::Int32)
	IL_008d:                                                                        //ldc.i4				0x4
	IL_0092:            V_0=4;                                                      //stloc				V_0
	IL_0096:            /*goto IL_0018;*/goto IL_0098;                              //br.s				IL_0018
	IL_0098:            goto IL_0065;                                               //br.s				IL_0065
	IL_009a:                                                                        //ldarg.0
	IL_009b:                                                                        //ldarg.1
	IL_009c:            this->F_x12=A_0;                                            //stfld				System::Int32 Root::T_x140 F_x12
	IL_00a1:            return;                                                     //ret

}
inline System::Int32 Root::T_x140::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Int32 Root::T_x140 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x140::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0045;case 1:goto IL_00f3;case 2:goto IL_0055;case 3:goto IL_00e3;case 4:goto IL_010c;case 5:goto IL_000b;case 6:goto IL_006b;};//switch				(IL_0045,IL_00f3,IL_0055,IL_00e3,IL_010c,IL_000b,IL_006b)
	IL_0032:                                                                        //ldarg.1
	IL_0033:                                                                        //ldc.i4.s				127
	IL_0035:            if(A_0>127)goto IL_00e5;                                    //bgt				IL_00e5
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_0=0;                                                      //stloc				V_0
	IL_0043:            /*goto IL_000d;*/goto IL_0045;                              //br.s				IL_000d
	IL_0045:            goto IL_0048;                                               //br.s				IL_0048
	IL_0047:                                                                        //break
	IL_0048:            goto IL_008c;                                               //br.s				IL_008c
	IL_004a:                                                                        //ldc.i4				0x2
	IL_004f:            V_0=2;                                                      //stloc				V_0
	IL_0053:            /*goto IL_000d;*/goto IL_0055;                              //br.s				IL_000d
	IL_0055:                                                                        //ldarg.1
	IL_0056:                                                                        //ldc.i4				0x1fffffff
	IL_005b:            if(A_0>=536870911)goto IL_0111;                             //bge				IL_0111
	IL_0060:                                                                        //ldc.i4				0x6
	IL_0065:            V_0=6;                                                      //stloc				V_0
	IL_0069:            /*goto IL_000d;*/goto IL_006b;                              //br.s				IL_000d
	IL_006b:            goto IL_0095;                                               //br.s				IL_0095
	IL_006d:                                                                        //ldarg.0
	IL_006e:                                                                        //ldarg.1
	IL_006f:                                                                        //ldc.i4.8
	IL_0070:                                                                        //shr
	IL_0071:                                                                        //ldc.i4				0x80
	IL_0076:                                                                        //or
	IL_0077:                                                                        //conv.u1
	IL_0078:            this->M_x1(safe_cast<System::Byte>(((A_0 >> 8) | 128)));    //call				void Root::T_x140::M_x1(System::Byte)
	IL_007d:                                                                        //ldarg.0
	IL_007e:                                                                        //ldarg.1
	IL_007f:                                                                        //ldc.i4				0xff
	IL_0084:                                                                        //and
	IL_0085:                                                                        //conv.u1
	IL_0086:            this->M_x1(safe_cast<System::Byte>((A_0 & 255)));           //call				void Root::T_x140::M_x1(System::Byte)
	IL_008b:            return;                                                     //ret
	IL_008c:                                                                        //ldarg.0
	IL_008d:                                                                        //ldarg.1
	IL_008e:                                                                        //conv.u1
	IL_008f:            this->M_x1(safe_cast<System::Byte>(A_0));                   //call				void Root::T_x140::M_x1(System::Byte)
	IL_0094:            return;                                                     //ret
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldarg.1
	IL_0097:                                                                        //ldc.i4.s				24
	IL_0099:                                                                        //shr
	IL_009a:                                                                        //ldc.i4				0xc0
	IL_009f:                                                                        //or
	IL_00a0:                                                                        //conv.u1
	IL_00a1:            this->M_x1(safe_cast<System::Byte>(((A_0 >> 24) | 192)));   //call				void Root::T_x140::M_x1(System::Byte)
	IL_00a6:                                                                        //ldarg.0
	IL_00a7:                                                                        //ldarg.1
	IL_00a8:                                                                        //ldc.i4				0xff0000
	IL_00ad:                                                                        //and
	IL_00ae:                                                                        //ldc.i4.s				16
	IL_00b0:                                                                        //shr
	IL_00b1:                                                                        //conv.u1
	IL_00b2:            this->M_x1(safe_cast<System::Byte>(((A_0 & 16711680) >> 16)));//call				void Root::T_x140::M_x1(System::Byte)
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:                                                                        //ldarg.1
	IL_00b9:                                                                        //ldc.i4				0xff00
	IL_00be:                                                                        //and
	IL_00bf:                                                                        //ldc.i4.8
	IL_00c0:                                                                        //shr
	IL_00c1:                                                                        //conv.u1
	IL_00c2:            this->M_x1(safe_cast<System::Byte>(((A_0 & 65280) >> 8)));  //call				void Root::T_x140::M_x1(System::Byte)
	IL_00c7:                                                                        //ldarg.0
	IL_00c8:                                                                        //ldarg.1
	IL_00c9:                                                                        //ldc.i4				0xff
	IL_00ce:                                                                        //and
	IL_00cf:                                                                        //conv.u1
	IL_00d0:            this->M_x1(safe_cast<System::Byte>((A_0 & 255)));           //call				void Root::T_x140::M_x1(System::Byte)
	IL_00d5:                                                                        //ldc.i4				0x3
	IL_00da:            V_0=3;                                                      //stloc				V_0
	IL_00de:            /*goto IL_000d;*/goto IL_00e3;                              //br				IL_000d
	IL_00e3:            goto IL_0111;                                               //br.s				IL_0111
	IL_00e5:                                                                        //ldc.i4				0x1
	IL_00ea:            V_0=1;                                                      //stloc				V_0
	IL_00ee:            /*goto IL_000d;*/goto IL_00f3;                              //br				IL_000d
	IL_00f3:                                                                        //ldarg.1
	IL_00f4:                                                                        //ldc.i4				0x3fff
	IL_00f9:            if(A_0>=16383)goto IL_004a;                                 //bge				IL_004a
	IL_00fe:                                                                        //ldc.i4				0x4
	IL_0103:            V_0=4;                                                      //stloc				V_0
	IL_0107:            /*goto IL_000d;*/goto IL_010c;                              //br				IL_000d
	IL_010c:            goto IL_006d;                                               //br				IL_006d
	IL_0111:            return;                                                     //ret

}
