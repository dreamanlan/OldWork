#include "global_xref.h"

inline Root::T_x171::T_x171(System::Int32 A_0,Root::T_x172^ A_1,System::IO::BinaryReader^ A_2,System::Int32 A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x139^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x171 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.s				A_3
	IL_0010:            this->F_x2=A_3;                                             //stfld				System::Int32 Root::T_x171 F_x2
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldarg.2
	IL_0017:            this->F_x12=A_1;                                            //stfld				Root::T_x172^ Root::T_x171 F_x12
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.3
	IL_001e:                                                                        //ldarg.0
	IL_001f:            Temp_0=this->M_x12();                                       //call				System::Int32 Root::T_x171::M_x12()
	IL_0024:                                                                        //ldarg.s				A_3
	IL_0026:                                                                        //mul
	IL_0027:            Temp_1=gcnew Root::T_x139(A_2,(Temp_0 * A_3));              //newobj				void Root::T_x139::.ctor(System::IO::BinaryReader^,System::Int32)
	IL_002c:            this->F_x13=Temp_1;                                         //stfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldarg.2
	IL_0033:            Temp_2=A_1->M_x12();                                        //callvirt				System::Int32 Root::T_x172::M_x12()
	IL_0038:                                                                        //ldc.i4.4
	IL_0039:                                                                        //ceq
	IL_003b:            this->F_x8=(Temp_2 == 4);                                   //stfld				System::Boolean Root::T_x171 F_x8
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldarg.2
	IL_0042:            Temp_3=A_1->M_x2();                                         //callvirt				System::Int32 Root::T_x172::M_x2()
	IL_0047:                                                                        //ldc.i4.4
	IL_0048:                                                                        //ceq
	IL_004a:            this->F_x5=(Temp_3 == 4);                                   //stfld				System::Boolean Root::T_x171 F_x5
	IL_004f:                                                                        //ldarg.0
	IL_0050:                                                                        //ldarg.2
	IL_0051:            Temp_4=A_1->M_x13();                                        //callvirt				System::Int32 Root::T_x172::M_x13()
	IL_0056:                                                                        //ldc.i4.4
	IL_0057:                                                                        //ceq
	IL_0059:            this->F_x9=(Temp_4 == 4);                                   //stfld				System::Boolean Root::T_x171 F_x9
	IL_005e:            return;                                                     //ret

}
inline System::Int32 Root::T_x171::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Root::T_x139^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Root::T_x139^ Temp_3 = nullptr;
	System::UInt16 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				System::Boolean Root::T_x171 F_x9
	IL_0006:            if(Temp_0)goto IL_0017;                                     //brtrue.s				IL_0017
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_3=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0010:            Temp_4=Temp_3->M_x11();                                     //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0015:                                                                        //conv.i4
	IL_0016:            return safe_cast<System::Int32>(Temp_4);                    //ret
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_1=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0020:            Temp_2=Temp_1->M_x5();                                      //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0025:            return Temp_2;                                              //ret

}
inline System::Int32 Root::T_x171::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x172^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Root::T_x139^ Temp_2 = nullptr;
	System::UInt16 Temp_3 = 0;
	Root::T_x139^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldc.i4.s				24
	IL_0006:                                                                        //shl
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x172^ Root::T_x171 F_x12
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=Temp_0->M_x8(A_0);                                   //callvirt				System::Int32 Root::T_x172::M_x8(System::Int32)
	IL_0013:                                                                        //ldc.i4				0xffff
	IL_0018:            Temp_7=(A_0 << 24);if(Temp_1<=65535)goto IL_001c;           //ble.s				IL_001c
	IL_001a:            Temp_8=Temp_7;goto IL_002a;                                 //br.s				IL_002a
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0022:            Temp_3=Temp_2->M_x11();                                     //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0027:                                                                        //conv.i4
	IL_0028:            Temp_10=Temp_7;Temp_9=safe_cast<System::Int32>(Temp_3);goto IL_0037;//br.s				IL_0037
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_4=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0030:            Temp_5=Temp_4->M_x5();                                      //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0035:            Temp_10=Temp_8;Temp_9=Temp_5;goto IL_0037;                  //br.s				IL_0037
	IL_0037:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0038:            return (Temp_10 | Temp_9);                                  //ret

}
inline System::Int32 Root::T_x171::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x172^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x172^ Root::T_x171 F_x12
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x171 F_x1
	IL_000c:            Temp_2=Temp_0->M_x8(Temp_1);                                //callvirt				System::Int32 Root::T_x172::M_x8(System::Int32)
	IL_0011:            return Temp_2;                                              //ret

}
inline System::Int32 Root::T_x171::M_x12(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x139^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::Int32>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	Root::T_x139^ Temp_5 = nullptr;
	System::UInt16 Temp_6 = 0;
	Root::T_x172^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Int32>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_5=5;                                                      //stloc				V_5
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_5
	IL_0011:            switch(V_5){case 0:goto IL_00a1;case 1:goto IL_00c2;case 2:goto IL_00b2;case 3:goto IL_0058;case 4:goto IL_004b;case 5:goto IL_000b;};//switch				(IL_00a1,IL_00c2,IL_00b2,IL_0058,IL_004b,IL_000b)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_7=this->F_x12;                                         //ldfld				Root::T_x172^ Root::T_x171 F_x12
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_8=Temp_7->M_x12(A_0);                                  //callvirt				System::Int32 Root::T_x172::M_x12(System::Int32)
	IL_003a:                                                                        //ldc.i4.4
	IL_003b:            if(Temp_8==4)goto IL_00b4;                                  //beq.s				IL_00b4
	IL_003d:            goto IL_0040;                                               //br.s				IL_0040
	IL_003f:                                                                        //break
	IL_0040:                                                                        //ldc.i4				0x4
	IL_0045:            V_5=4;                                                      //stloc				V_5
	IL_0049:            /*goto IL_000d;*/goto IL_004b;                              //br.s				IL_000d
	IL_004b:            goto IL_004d;                                               //br.s				IL_004d
	IL_004d:                                                                        //ldc.i4				0x3
	IL_0052:            V_5=3;                                                      //stloc				V_5
	IL_0056:            /*goto IL_000d;*/goto IL_0058;                              //br.s				IL_000d
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_5=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_005e:            Temp_6=Temp_5->M_x11();                                     //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0063:                                                                        //conv.i4
	IL_0064:            Temp_9=safe_cast<System::Int32>(Temp_6);goto IL_0092;       //br.s				IL_0092
	IL_0066:                                                                        //ldarg.1
	IL_0067:            Temp_2=Root::T_x17::M_x2(A_0);                              //call				array<System::Int32>^ Root::T_x17::M_x2(System::Int32)
	IL_006c:            V_1=Temp_2;                                                 //stloc.1
	IL_006d:                                                                        //ldloc.1
	IL_006e:            Temp_3=V_1->Length;                                         //ldlen
	IL_006f:                                                                        //conv.i4
	IL_0070:            Temp_4=Root::T_x17::M_x1(Temp_3);                           //call				System::Int32 Root::T_x17::M_x1(System::Int32)
	IL_0075:            V_2=Temp_4;                                                 //stloc.2
	IL_0076:                                                                        //ldloc.0
	IL_0077:                                                                        //ldc.i4.m1
	IL_0078:                                                                        //ldloc.2
	IL_0079:                                                                        //ldc.i4.s				31
	IL_007b:                                                                        //and
	IL_007c:                                                                        //shl
	IL_007d:                                                                        //not
	IL_007e:                                                                        //and
	IL_007f:            V_3=(V_0 & (~ (-1 << (V_2 & 31))));                         //stloc.3
	IL_0080:                                                                        //ldloc.0
	IL_0081:                                                                        //ldloc.2
	IL_0082:                                                                        //ldc.i4.s				31
	IL_0084:                                                                        //and
	IL_0085:                                                                        //shr
	IL_0086:            V_4=(V_0 >> (V_2 & 31));                                    //stloc.s				V_4
	IL_0088:                                                                        //ldloc.1
	IL_0089:                                                                        //ldloc.3
	IL_008a:                                                                        //ldelem.i4
	IL_008b:                                                                        //ldc.i4.s				24
	IL_008d:                                                                        //shl
	IL_008e:                                                                        //ldloc.s				V_4
	IL_0090:                                                                        //or
	IL_0091:            return ((V_1[V_3] << 24) | V_4);                            //ret
	IL_0092:            Temp_9=Temp_1;/*warning ! semantic stack doesn't empty at joint !;*///stloc.0
	IL_0093:                                                                        //ldc.i4				0x0
	IL_0098:            V_5=0;                                                      //stloc				V_5
	IL_009c:            /*goto IL_000d;*/goto IL_00a1;                              //br				IL_000d
	IL_00a1:                                                                        //ldloc.0
	IL_00a2:            if(V_0==0)goto IL_00cf;                                     //brfalse.s				IL_00cf
	IL_00a4:                                                                        //ldc.i4				0x2
	IL_00a9:            V_5=2;                                                      //stloc				V_5
	IL_00ad:            /*goto IL_000d;*/goto IL_00b2;                              //br				IL_000d
	IL_00b2:            goto IL_0066;                                               //br.s				IL_0066
	IL_00b4:                                                                        //ldc.i4				0x1
	IL_00b9:            V_5=1;                                                      //stloc				V_5
	IL_00bd:            /*goto IL_000d;*/goto IL_00c2;                              //br				IL_000d
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_00c8:            Temp_1=Temp_0->M_x5();                                      //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_00cd:            goto IL_0092;                                               //br.s				IL_0092
	IL_00cf:                                                                        //ldc.i4.0
	IL_00d0:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x171::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Root::T_x139^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Root::T_x139^ Temp_3 = nullptr;
	System::UInt16 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				System::Boolean Root::T_x171 F_x5
	IL_0006:            if(Temp_0)goto IL_0017;                                     //brtrue.s				IL_0017
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_3=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0010:            Temp_4=Temp_3->M_x11();                                     //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0015:                                                                        //conv.i4
	IL_0016:            return safe_cast<System::Int32>(Temp_4);                    //ret
	IL_0017:                                                                        //ldc.i4.4
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //dup
	IL_001a:                                                                        //ldc.i4.2
	IL_001b:                                                                        //sub
	IL_001c:                                                                        //blt				IL_0018
	IL_0021:                                                                        //pop
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_1=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0028:            Temp_2=Temp_1->M_x5();                                      //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_002d:            return Temp_2;                                              //ret

}
inline System::Int32 Root::T_x171::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Root::T_x139^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Root::T_x139^ Temp_3 = nullptr;
	System::UInt16 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Boolean Root::T_x171 F_x8
	IL_0006:            if(Temp_0)goto IL_001a;                                     //brtrue.s				IL_001a
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_3=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0013:            Temp_4=Temp_3->M_x11();                                     //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0018:                                                                        //conv.i4
	IL_0019:            return safe_cast<System::Int32>(Temp_4);                    //ret
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_1=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0020:            Temp_2=Temp_1->M_x5();                                      //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0025:            return Temp_2;                                              //ret

}
inline System::UInt32 Root::T_x171::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x139^ Temp_0 = nullptr;
	System::UInt32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0006:            Temp_1=Temp_0->M_x2();                                      //callvirt				System::UInt32 Root::T_x139::M_x2()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x171::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x139^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x171 F_x2
	IL_000d:                                                                        //mul
	IL_000e:            Temp_0->M_x13((A_0 * Temp_1));                              //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0013:            return;                                                     //ret

}
inline System::UInt16 Root::T_x171::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x139^ Temp_0 = nullptr;
	System::UInt16 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0006:            Temp_1=Temp_0->M_x11();                                     //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Int32 Root::T_x171::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x139^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0006:            Temp_1=Temp_0->M_x19();                                     //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=this->F_x2;                                          //ldfld				System::Int32 Root::T_x171 F_x2
	IL_0011:                                                                        //div
	IL_0012:            return (Temp_1 / Temp_2);                                   //ret

}
inline System::Int32 Root::T_x171::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x139^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0006:            Temp_1=Temp_0->M_x5();                                      //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x171::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x139^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x139^ Root::T_x171 F_x13
	IL_0006:                                                                        //ldc.i4.0
	IL_0007:            Temp_0->M_x13(safe_cast<System::Int32>(0));                 //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_000c:            return;                                                     //ret

}
