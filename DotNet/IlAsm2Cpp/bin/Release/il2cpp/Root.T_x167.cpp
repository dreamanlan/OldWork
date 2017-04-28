#include "global_xref.h"

inline Root::T_x167::T_x167()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            Temp_0=gcnew array<Root::T_x166^>(0);                       //newarr				Root::T_x166
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0012:            return;                                                     //ret

}
inline Root::T_x167::T_x167(System::IO::BinaryReader^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	Root::T_x166^ Temp_1 = nullptr;
	array<Root::T_x166^>^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x166^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.2
	IL_0008:                                                                        //conv.ovf.u4
	IL_0009:            Temp_0=gcnew array<Root::T_x166^>(safe_cast<System::UInt32>(A_1));//newarr				Root::T_x166
	IL_000e:            this->F_x1=Temp_0;                                          //stfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0013:                                                                        //ldc.i4.0
	IL_0014:            V_0=0;                                                      //stloc.0
	IL_0015:            goto IL_0017;                                               //br.s				IL_0017
	IL_0017:                                                                        //ldloc.0
	IL_0018:                                                                        //ldarg.2
	IL_0019:            if(V_0<A_1)goto IL_001d;                                    //blt.s				IL_001d
	IL_001b:            goto IL_0033;                                               //br.s				IL_0033
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_1=gcnew Root::T_x166(A_0);                             //newobj				void Root::T_x166::.ctor(System::IO::BinaryReader^)
	IL_0023:            V_1=Temp_1;                                                 //stloc.1
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_2=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_002a:                                                                        //ldloc.0
	IL_002b:                                                                        //ldloc.1
	IL_002c:            Temp_2[V_0]=V_1;                                            //stelem.ref
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldc.i4.1
	IL_002f:                                                                        //add
	IL_0030:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0031:            goto IL_0017;                                               //br.s				IL_0017
	IL_0033:            return;                                                     //ret

}
inline System::Int32 Root::T_x167::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0006:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0007:                                                                        //conv.i4
	IL_0008:            return Temp_1;                                              //ret

}
inline Root::T_x166^ Root::T_x167::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x167::M_x1(System::IO::BinaryWriter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Root::T_x166^>^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_004e;case 1:goto IL_006d;case 2:goto IL_0038;case 3:goto IL_002b;};//switch				(IL_004e,IL_006d,IL_0038,IL_002b)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:            goto IL_0020;                                               //br.s				IL_0020
	IL_001f:                                                                        //break
	IL_0020:                                                                        //ldc.i4				0x3
	IL_0025:            V_1=3;                                                      //stloc				V_1
	IL_0029:            /*goto IL_0002;*/goto IL_002b;                              //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_1=2;                                                      //stloc				V_1
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_003f:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0040:                                                                        //conv.i4
	IL_0041:            if(V_0<Temp_1)goto IL_0050;                                 //blt.s				IL_0050
	IL_0043:                                                                        //ldc.i4				0x0
	IL_0048:            V_1=0;                                                      //stloc				V_1
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_006f;                                               //br.s				IL_006f
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_2=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0056:                                                                        //ldloc.0
	IL_0057:                                                                        //ldelem.ref
	IL_0058:                                                                        //ldarg.1
	IL_0059:            Temp_2[V_0]->M_x1(A_0);                                     //callvirt				void Root::T_x166::M_x1(System::IO::BinaryWriter^)
	IL_005e:                                                                        //ldloc.0
	IL_005f:                                                                        //ldc.i4.1
	IL_0060:                                                                        //add
	IL_0061:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0062:                                                                        //ldc.i4				0x1
	IL_0067:            V_1=1;                                                      //stloc				V_1
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:            goto IL_002d;                                               //br.s				IL_002d
	IL_006f:            return;                                                     //ret

}
inline Root::T_x166^ Root::T_x167::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Root::T_x166^>^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	array<Root::T_x166^>^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_008a;case 1:goto IL_0044;case 2:goto IL_00a3;case 3:goto IL_0030;case 4:goto IL_005a;case 5:goto IL_007a;};//switch				(IL_008a,IL_0044,IL_00a3,IL_0030,IL_005a,IL_007a)
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:            V_0=0;                                                      //stloc.0
	IL_0025:                                                                        //ldc.i4				0x3
	IL_002a:            V_1=3;                                                      //stloc				V_1
	IL_002e:            /*goto IL_0002;*/goto IL_0030;                              //br.s				IL_0002
	IL_0030:            goto IL_007c;                                               //br.s				IL_007c
	IL_0032:            goto IL_0035;                                               //br.s				IL_0035
	IL_0034:                                                                        //break
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0039:                                                                        //ldc.i4				0x1
	IL_003e:            V_1=1;                                                      //stloc				V_1
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:            goto IL_007c;                                               //br.s				IL_007c
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_5=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldelem.ref
	IL_004e:            return Temp_5[V_0];                                         //ret
	IL_004f:                                                                        //ldc.i4				0x4
	IL_0054:            V_1=4;                                                      //stloc				V_1
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_2=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0060:                                                                        //ldloc.0
	IL_0061:                                                                        //ldelem.ref
	IL_0062:            Temp_3=Temp_2[V_0]->M_x12();                                //callvirt				System::String^ Root::T_x166::M_x12()
	IL_0067:                                                                        //ldarg.1
	IL_0068:            Temp_4=(Temp_3 == A_0);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_006d:            if(!Temp_4)goto IL_0032;                                    //brfalse.s				IL_0032
	IL_006f:                                                                        //ldc.i4				0x5
	IL_0074:            V_1=5;                                                      //stloc				V_1
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_0046;                                               //br.s				IL_0046
	IL_007c:                                                                        //ldc.i4				0x0
	IL_0081:            V_1=0;                                                      //stloc				V_1
	IL_0085:            /*goto IL_0002;*/goto IL_008a;                              //br				IL_0002
	IL_008a:                                                                        //ldloc.0
	IL_008b:                                                                        //ldarg.0
	IL_008c:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0091:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0092:                                                                        //conv.i4
	IL_0093:            if(V_0<Temp_1)goto IL_004f;                                 //blt.s				IL_004f
	IL_0095:                                                                        //ldc.i4				0x2
	IL_009a:            V_1=2;                                                      //stloc				V_1
	IL_009e:            /*goto IL_0002;*/goto IL_00a3;                              //br				IL_0002
	IL_00a3:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_00a5:                                                                        //ldnull
	IL_00a6:            return nullptr;                                             //ret

}
inline System::Int32 Root::T_x167::M_x1(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	array<Root::T_x166^>^ Temp_1 = nullptr;
	array<Root::T_x166^>^ Temp_2 = nullptr;
	array<Root::T_x166^>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	array<Root::T_x166^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	array<System::Object^>^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::InvalidOperationException^ Temp_14 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x166^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	array<System::Object^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_5=6;                                                      //stloc				V_5
	IL_0009:            goto IL_0038;                                               //br.s				IL_0038
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_007f;case 1:goto IL_00ff;case 2:goto IL_00a3;case 3:goto IL_00c5;case 4:goto IL_00de;case 5:goto IL_00b5;case 6:goto IL_0045;case 7:goto IL_0056;case 8:goto IL_00ee;};//switch				(IL_007f,IL_00ff,IL_00a3,IL_00c5,IL_00de,IL_00b5,IL_0045,IL_0056,IL_00ee)
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:            V_0=0;                                                      //stloc.0
	IL_003a:                                                                        //ldc.i4				0x6
	IL_003f:            V_4=6;                                                      //stloc				V_4
	IL_0043:            /*goto IL_000b;*/goto IL_0045;                              //br.s				IL_000b
	IL_0045:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_0047:                                                                        //ldloc.0
	IL_0048:                                                                        //ldc.i4.1
	IL_0049:                                                                        //add
	IL_004a:            V_0=(V_0 + 1);                                              //stloc.0
	IL_004b:                                                                        //ldc.i4				0x7
	IL_0050:            V_4=7;                                                      //stloc				V_4
	IL_0054:            /*goto IL_000b;*/goto IL_0056;                              //br.s				IL_000b
	IL_0056:            goto IL_0059;                                               //br.s				IL_0059
	IL_0058:                                                                        //break
	IL_0059:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0061:                                                                        //ldloc.0
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_1=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0068:                                                                        //ldc.i4.0
	IL_0069:                                                                        //ldelem.ref
	IL_006a:            Temp_0[V_0]=Temp_1[0];                                      //stelem.ref
	IL_006b:                                                                        //ldarg.0
	IL_006c:            Temp_2=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0071:                                                                        //ldc.i4.0
	IL_0072:                                                                        //ldloc.1
	IL_0073:            Temp_2[0]=V_1;                                              //stelem.ref
	IL_0074:                                                                        //ldc.i4				0x0
	IL_0079:            V_4=0;                                                      //stloc				V_4
	IL_007d:            /*goto IL_000b;*/goto IL_007f;                              //br.s				IL_000b
	IL_007f:            goto IL_0104;                                               //br				IL_0104
	IL_0084:                                                                        //ldarg.0
	IL_0085:            Temp_5=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_008a:                                                                        //ldloc.0
	IL_008b:                                                                        //ldelem.ref
	IL_008c:            V_1=Temp_5[V_0];                                            //stloc.1
	IL_008d:                                                                        //ldloc.1
	IL_008e:                                                                        //ldarg.1
	IL_008f:            Temp_6=V_1->M_x2(A_0);                                      //callvirt				System::Int32 Root::T_x166::M_x2(System::UInt32)
	IL_0094:            V_2=Temp_6;                                                 //stloc.2
	IL_0095:                                                                        //ldc.i4				0x2
	IL_009a:            V_4=2;                                                      //stloc				V_4
	IL_009e:            /*goto IL_000b;*/goto IL_00a3;                              //br				IL_000b
	IL_00a3:                                                                        //ldloc.2
	IL_00a4:                                                                        //ldc.i4.m1
	IL_00a5:            if(V_2==-1)goto IL_0047;                                    //beq.s				IL_0047
	IL_00a7:                                                                        //ldc.i4				0x5
	IL_00ac:            V_4=5;                                                      //stloc				V_4
	IL_00b0:            /*goto IL_000b;*/goto IL_00b5;                              //br				IL_000b
	IL_00b5:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_00b7:                                                                        //ldc.i4				0x3
	IL_00bc:            V_4=3;                                                      //stloc				V_4
	IL_00c0:            /*goto IL_000b;*/goto IL_00c5;                              //br				IL_000b
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldarg.0
	IL_00c7:            Temp_3=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_00cc:            Temp_4=Temp_3->Length;                                      //ldlen
	IL_00cd:                                                                        //conv.i4
	IL_00ce:            if(V_0<Temp_4)goto IL_0084;                                 //blt.s				IL_0084
	IL_00d0:                                                                        //ldc.i4				0x4
	IL_00d5:            V_4=4;                                                      //stloc				V_4
	IL_00d9:            /*goto IL_000b;*/goto IL_00de;                              //br				IL_000b
	IL_00de:            goto IL_0106;                                               //br.s				IL_0106
	IL_00e0:                                                                        //ldc.i4				0x8
	IL_00e5:            V_4=8;                                                      //stloc				V_4
	IL_00e9:            /*goto IL_000b;*/goto IL_00ee;                              //br				IL_000b
	IL_00ee:                                                                        //ldloc.0
	IL_00ef:            if(V_0==0)goto IL_0104;                                     //brfalse.s				IL_0104
	IL_00f1:                                                                        //ldc.i4				0x1
	IL_00f6:            V_4=1;                                                      //stloc				V_4
	IL_00fa:            /*goto IL_000b;*/goto IL_00ff;                              //br				IL_000b
	IL_00ff:            goto IL_005b;                                               //br				IL_005b
	IL_0104:                                                                        //ldloc.2
	IL_0105:            return V_2;                                                 //ret
	IL_0106:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_010b:                                                                        //ldstr				L"\x6D23\x4825\x5E27\x4B29\x402B\x472D\x542F\x1231\x6633\x6035\x7937\x1A39\x5D3B\x5A3D\x243F\x3041\x2143\x3545\x3B47\x6A49\x6B4B\x354D\x604F\x2F51\x7353\x7855"
	IL_0110:                                                                        //ldloc				V_5
	IL_0114:            Temp_8=a(L"\x6D23\x4825\x5E27\x4B29\x402B\x472D\x542F\x1231\x6633\x6035\x7937\x1A39\x5D3B\x5A3D\x243F\x3041\x2143\x3545\x3B47\x6A49\x6B4B\x354D\x604F\x2F51\x7353\x7855",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0119:                                                                        //ldc.i4.1
	IL_011a:            Temp_9=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_011f:            V_3=Temp_9;                                                 //stloc.3
	IL_0120:                                                                        //ldloc.3
	IL_0121:                                                                        //ldc.i4.0
	IL_0122:                                                                        //ldarga.s				A_0
	IL_0124:                                                                        //ldstr				L"\x5C23\x1E25"
	IL_0129:                                                                        //ldloc				V_5
	IL_012d:            Temp_10=a(L"\x5C23\x1E25",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0132:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0137:            Temp_12=A_0.ToString(Temp_10,safe_cast<System::IFormatProvider^>(Temp_11));//call				System::String^ System::UInt32::ToString(System::String^,System::IFormatProvider^)
	IL_013c:            V_3[0]=safe_cast<System::Object^>(Temp_12);                 //stelem.ref
	IL_013d:                                                                        //ldloc.3
	IL_013e:            Temp_13=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_7),Temp_8,V_3);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0143:            Temp_14=gcnew System::InvalidOperationException(Temp_13);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0148:            throw Temp_14;                                              //throw

}
inline void Root::T_x167::M_x1(Root::T_x166^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Root::T_x166^>^ Temp_2 = nullptr;
	array<Root::T_x166^>^ Temp_3 = nullptr;
	array<Root::T_x166^>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	array<Root::T_x166^>^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	//local variables.
	array<Root::T_x166^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0011:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4.1
	IL_0014:                                                                        //add
	IL_0015:                                                                        //conv.ovf.u4
	IL_0016:            Temp_2=gcnew array<Root::T_x166^>(safe_cast<System::UInt32>((Temp_1 + 1)));//newarr				Root::T_x166
	IL_001b:            V_0=Temp_2;                                                 //stloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_3=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0022:                                                                        //ldloc.0
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_4=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0029:            Temp_5=Temp_4->Length;                                      //ldlen
	IL_002a:                                                                        //conv.i4
	IL_002b:            System::Array::Copy(safe_cast<System::Array^>(Temp_3),safe_cast<System::Array^>(V_0),Temp_5);//call				void System::Array::Copy(System::Array^,System::Array^,System::Int32)
	IL_0030:                                                                        //ldloc.0
	IL_0031:                                                                        //ldarg.0
	IL_0032:            Temp_6=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0037:            Temp_7=Temp_6->Length;                                      //ldlen
	IL_0038:                                                                        //conv.i4
	IL_0039:                                                                        //ldarg.1
	IL_003a:            V_0[Temp_7]=A_0;                                            //stelem.ref
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //ldloc.0
	IL_003d:            this->F_x1=V_0;                                             //stfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0042:            return;                                                     //ret

}
inline System::Int32 Root::T_x167::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x166^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Root::T_x166^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0037;case 1:goto IL_0071;case 2:goto IL_002a;case 3:goto IL_004d;};//switch				(IL_0037,IL_0071,IL_002a,IL_004d)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            V_1=0;                                                      //stloc.1
	IL_001f:                                                                        //ldc.i4				0x2
	IL_0024:            V_2=2;                                                      //stloc				V_2
	IL_0028:            /*goto IL_0002;*/goto IL_002a;                              //br.s				IL_0002
	IL_002a:            goto IL_002c;                                               //br.s				IL_002c
	IL_002c:                                                                        //ldc.i4				0x0
	IL_0031:            V_2=0;                                                      //stloc				V_2
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:                                                                        //ldloc.1
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_0=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_003e:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_003f:                                                                        //conv.i4
	IL_0040:            if(V_1<Temp_1)goto IL_004f;                                 //blt.s				IL_004f
	IL_0042:                                                                        //ldc.i4				0x3
	IL_0047:            V_2=3;                                                      //stloc				V_2
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:            goto IL_0073;                                               //br.s				IL_0073
	IL_004f:                                                                        //ldloc.0
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_2=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0056:                                                                        //ldloc.1
	IL_0057:                                                                        //ldelem.ref
	IL_0058:            Temp_3=Temp_2[V_1]->M_x9();                                 //callvirt				System::Int32 Root::T_x166::M_x9()
	IL_005d:                                                                        //add
	IL_005e:            V_0=(V_0 + Temp_3);                                         //stloc.0
	IL_005f:                                                                        //ldloc.1
	IL_0060:                                                                        //ldc.i4.1
	IL_0061:                                                                        //add
	IL_0062:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0063:            goto IL_0066;                                               //br.s				IL_0066
	IL_0065:                                                                        //break
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_2=1;                                                      //stloc				V_2
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_002c;                                               //br.s				IL_002c
	IL_0073:                                                                        //ldloc.0
	IL_0074:            return V_0;                                                 //ret

}
inline System::Boolean Root::T_x167::M_x2(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Root::T_x166^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Root::T_x166^>^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x166^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_002e;                                               //br.s				IL_002e
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_003b;case 1:goto IL_00a2;case 2:goto IL_0064;case 3:goto IL_0089;case 4:goto IL_004c;case 5:goto IL_0079;};//switch				(IL_003b,IL_00a2,IL_0064,IL_0089,IL_004c,IL_0079)
	IL_002e:                                                                        //ldc.i4.0
	IL_002f:            V_0=0;                                                      //stloc.0
	IL_0030:                                                                        //ldc.i4				0x0
	IL_0035:            V_2=0;                                                      //stloc				V_2
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_007b;                                               //br.s				IL_007b
	IL_003d:                                                                        //ldloc.0
	IL_003e:                                                                        //ldc.i4.1
	IL_003f:                                                                        //add
	IL_0040:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0041:                                                                        //ldc.i4				0x4
	IL_0046:            V_2=4;                                                      //stloc				V_2
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_007b;                                               //br.s				IL_007b
	IL_004e:                                                                        //ldc.i4.1
	IL_004f:            return true;                                                //ret
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_3=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0056:                                                                        //ldloc.0
	IL_0057:                                                                        //ldelem.ref
	IL_0058:            V_1=Temp_3[V_0];                                            //stloc.1
	IL_0059:                                                                        //ldc.i4				0x2
	IL_005e:            V_2=2;                                                      //stloc				V_2
	IL_0062:            /*goto IL_0002;*/goto IL_0064;                              //br.s				IL_0002
	IL_0064:                                                                        //ldloc.1
	IL_0065:                                                                        //ldarg.1
	IL_0066:            Temp_0=V_1->M_x2(A_0);                                      //callvirt				System::Int32 Root::T_x166::M_x2(System::UInt32)
	IL_006b:                                                                        //ldc.i4.m1
	IL_006c:            if(Temp_0==-1)goto IL_003d;                                 //beq.s				IL_003d
	IL_006e:                                                                        //ldc.i4				0x5
	IL_0073:            V_2=5;                                                      //stloc				V_2
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_004e;                                               //br.s				IL_004e
	IL_007b:                                                                        //ldc.i4				0x3
	IL_0080:            V_2=3;                                                      //stloc				V_2
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:                                                                        //ldloc.0
	IL_008a:                                                                        //ldarg.0
	IL_008b:            Temp_1=this->F_x1;                                          //ldfld				array<Root::T_x166^>^ Root::T_x167 F_x1
	IL_0090:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0091:                                                                        //conv.i4
	IL_0092:            if(V_0<Temp_2)goto IL_0050;                                 //blt.s				IL_0050
	IL_0094:                                                                        //ldc.i4				0x1
	IL_0099:            V_2=1;                                                      //stloc				V_2
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:            return false;                                               //ret

}
