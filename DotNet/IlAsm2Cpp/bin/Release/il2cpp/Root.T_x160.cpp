#include "global_xref.h"

inline Root::T_x160::T_x160(Root::T_x139^ A_0,System::Byte A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Byte Temp_0 = 0;
	System::UInt16 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	array<System::Byte>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Byte Temp_8 = 0;
	array<System::Byte>^ Temp_9 = nullptr;
	array<System::Byte>^ Temp_10 = nullptr;
	System::Byte Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	//local variables.
	System::Byte V_0 = 0;
	System::Int32 V_1 = 0;
	System::Byte V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	array<System::Byte>^ V_6 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0=A_0->M_x15();                                        //callvirt				System::Byte Root::T_x139::M_x15()
	IL_000c:            V_0=Temp_0;                                                 //stloc.0
	IL_000d:                                                                        //ldarg.2
	IL_000e:                                                                        //ldc.i4				0xff
	IL_0013:            if(A_1!=255)goto IL_00d1;                                   //bne.un				IL_00d1
	IL_0018:            goto IL_006e;                                               //br.s				IL_006e
	IL_001a:                                                                        //ldarg.1
	IL_001b:            Temp_11=A_0->M_x15();                                       //callvirt				System::Byte Root::T_x139::M_x15()
	IL_0020:            V_5=safe_cast<System::Int32>(Temp_11);                      //stloc.s				V_5
	IL_0022:                                                                        //ldarg.1
	IL_0023:                                                                        //ldc.i4.2
	IL_0024:                                                                        //ldloc.s				V_5
	IL_0026:                                                                        //add
	IL_0027:            A_0->M_x12((2 + V_5));                                      //callvirt				void Root::T_x139::M_x12(System::Int32)
	IL_002c:            goto IL_0057;                                               //br.s				IL_0057
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //dup
	IL_0030:            Temp_5=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0035:                                                                        //ldc.i4.4
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_6=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_003c:                                                                        //ldc.i4.3
	IL_003d:                                                                        //and
	IL_003e:                                                                        //sub
	IL_003f:                                                                        //ldc.i4.3
	IL_0040:                                                                        //and
	IL_0041:                                                                        //add
	IL_0042:            A_0->M_x13((Temp_5 + ((4 - (Temp_6 & 3)) & 3)));            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0047:                                                                        //ldarg.1
	IL_0048:            Temp_7=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_004d:            V_3=Temp_7;                                                 //stloc.3
	IL_004e:                                                                        //ldc.i4.0
	IL_004f:            V_4=0;                                                      //stloc.s				V_4
	IL_0051:            goto IL_00f8;                                               //br				IL_00f8
	IL_0056:            return;                                                     //ret
	IL_0057:                                                                        //ldloc.s				V_4
	IL_0059:                                                                        //ldloc.s				V_5
	IL_005b:                                                                        //add
	IL_005c:                                                                        //ldc.i4.4
	IL_005d:                                                                        //add
	IL_005e:            V_4=((V_4 + V_5) + 4);                                      //stloc.s				V_4
	IL_0060:                                                                        //ldloc.2
	IL_0061:                                                                        //ldc.i4				0x80
	IL_0066:                                                                        //and
	IL_0067:            if((V_2 & 128)!=0)goto IL_00f8;                             //brtrue				IL_00f8
	IL_006c:            goto IL_00a0;                                               //br.s				IL_00a0
	IL_006e:                                                                        //ldloc.0
	IL_006f:                                                                        //ldc.i4				0xff
	IL_0074:            if(V_0!=255)goto IL_00d1;                                   //bne.un.s				IL_00d1
	IL_0076:            goto IL_0056;                                               //br.s				IL_0056
	IL_0078:                                                                        //ldarg.1
	IL_0079:                                                                        //ldc.i4.3
	IL_007a:            Temp_9=A_0->M_x8(safe_cast<System::Int32>(3));              //callvirt				array<System::Byte>^ Root::T_x139::M_x8(System::Int32)
	IL_007f:            V_6=Temp_9;                                                 //stloc.s				V_6
	IL_0081:                                                                        //ldloc.s				V_6
	IL_0083:                                                                        //ldc.i4.2
	IL_0084:                                                                        //ldelem.u1
	IL_0085:                                                                        //ldc.i4.s				12
	IL_0087:                                                                        //shl
	IL_0088:                                                                        //ldloc.s				V_6
	IL_008a:                                                                        //ldc.i4.1
	IL_008b:                                                                        //ldelem.u1
	IL_008c:                                                                        //ldc.i4.8
	IL_008d:                                                                        //shl
	IL_008e:                                                                        //or
	IL_008f:                                                                        //ldloc.s				V_6
	IL_0091:                                                                        //ldc.i4.0
	IL_0092:                                                                        //ldelem.u1
	IL_0093:                                                                        //or
	IL_0094:            V_5=safe_cast<System::Int32>((((V_6[2] << 12) | (V_6[1] << 8)) | V_6[0]));//stloc.s				V_5
	IL_0096:                                                                        //ldarg.1
	IL_0097:                                                                        //ldloc.s				V_5
	IL_0099:            A_0->M_x12(V_5);                                            //callvirt				void Root::T_x139::M_x12(System::Int32)
	IL_009e:            goto IL_0057;                                               //br.s				IL_0057
	IL_00a0:                                                                        //ldarg.1
	IL_00a1:                                                                        //ldloc.3
	IL_00a2:            A_0->M_x13(V_3);                                            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_00a7:                                                                        //ldarg.0
	IL_00a8:                                                                        //ldarg.1
	IL_00a9:                                                                        //ldloc.s				V_4
	IL_00ab:            Temp_10=A_0->M_x8(V_4);                                     //callvirt				array<System::Byte>^ Root::T_x139::M_x8(System::Int32)
	IL_00b0:            this->F_x13=Temp_10;                                        //stfld				array<System::Byte>^ Root::T_x160 F_x13
	IL_00b5:            goto IL_0124;                                               //br.s				IL_0124
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:                                                                        //ldarg.1
	IL_00b9:                                                                        //ldloc.1
	IL_00ba:            Temp_4=A_0->M_x8(V_1);                                      //callvirt				array<System::Byte>^ Root::T_x139::M_x8(System::Int32)
	IL_00bf:            this->F_x12=Temp_4;                                         //stfld				array<System::Byte>^ Root::T_x160 F_x12
	IL_00c4:                                                                        //ldarg.2
	IL_00c5:                                                                        //ldc.i4.8
	IL_00c6:                                                                        //and
	IL_00c7:            if((A_1 & 8)==0)goto IL_0124;                               //brfalse				IL_0124
	IL_00cc:            goto IL_002e;                                               //br				IL_002e
	IL_00d1:                                                                        //ldarg.0
	IL_00d2:                                                                        //ldarg.1
	IL_00d3:            Temp_1=A_0->M_x11();                                        //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_00d8:            this->F_x2=Temp_1;                                          //stfld				System::UInt16 Root::T_x160 F_x2
	IL_00dd:                                                                        //ldarg.1
	IL_00de:            Temp_2=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_00e3:            V_1=Temp_2;                                                 //stloc.1
	IL_00e4:                                                                        //ldarg.0
	IL_00e5:                                                                        //ldarg.1
	IL_00e6:            Temp_3=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_00eb:            this->F_x1=Temp_3;                                          //stfld				System::Int32 Root::T_x160 F_x1
	IL_00f0:                                                                        //ldarg.2
	IL_00f1:                                                                        //ldc.i4.s				16
	IL_00f3:                                                                        //and
	IL_00f4:            if((A_1 & 16)==0)goto IL_00b7;                              //brfalse.s				IL_00b7
	IL_00f6:            goto IL_0110;                                               //br.s				IL_0110
	IL_00f8:                                                                        //ldc.i4.0
	IL_00f9:            V_5=0;                                                      //stloc.s				V_5
	IL_00fb:                                                                        //ldarg.1
	IL_00fc:            Temp_8=A_0->M_x15();                                        //callvirt				System::Byte Root::T_x139::M_x15()
	IL_0101:            V_2=Temp_8;                                                 //stloc.2
	IL_0102:                                                                        //ldloc.2
	IL_0103:                                                                        //ldc.i4.s				64
	IL_0105:                                                                        //and
	IL_0106:            if((V_2 & 64)!=0)goto IL_0078;                              //brtrue				IL_0078
	IL_010b:            goto IL_001a;                                               //br				IL_001a
	IL_0110:                                                                        //ldarg.0
	IL_0111:                                                                        //ldarg.0
	IL_0112:            Temp_12=this->F_x1;                                         //ldfld				System::Int32 Root::T_x160 F_x1
	IL_0117:                                                                        //ldc.i4				0xffffff
	IL_011c:                                                                        //and
	IL_011d:            this->F_x1=(Temp_12 & 16777215);                            //stfld				System::Int32 Root::T_x160 F_x1
	IL_0122:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_0124:            return;                                                     //ret

}
inline array<System::Byte>^ Root::T_x160::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				array<System::Byte>^ Root::T_x160 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt16 Root::T_x160::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::UInt16 Root::T_x160 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline array<System::Byte>^ Root::T_x160::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				array<System::Byte>^ Root::T_x160 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x160::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x160 F_x1
	IL_0006:                                                                        //ldc.i4				0xffffff
	IL_000b:                                                                        //and
	IL_000c:            return (Temp_0 & 16777215);                                 //ret

}
inline System::Boolean Root::T_x160::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x160 F_x1
	IL_0006:                                                                        //conv.i8
	IL_0007:                                                                        //ldc.i4				0xff000000
	IL_000c:                                                                        //conv.u8
	IL_000d:                                                                        //and
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:                                                                        //conv.i8
	IL_0010:                                                                        //ceq
	IL_0012:            return ((safe_cast<System::Int64>(Temp_0) & 4278190080) == 0);//ret

}
