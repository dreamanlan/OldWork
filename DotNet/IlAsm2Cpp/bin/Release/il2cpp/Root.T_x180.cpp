#include "global_xref.h"

inline Root::T_x180::T_x180(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x180 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            this->F_x2=0;                                               //stfld				System::Int32 Root::T_x180 F_x2
	IL_000e:                                                                        //ldarg.0
	IL_000f:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.1
	IL_0016:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x180 F_x1
	IL_001b:            return;                                                     //ret

}
inline System::Char Root::T_x180::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Char Temp_0 = (System::Char)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=this->M_x1(safe_cast<System::Int32>(0));             //call				System::Char Root::T_x180::M_x1(System::Int32)
	IL_0007:            return Temp_0;                                              //ret

}
inline System::Char Root::T_x180::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Char Temp_5 = (System::Char)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x180 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //add
	IL_0008:                                                                        //ldarg.0
	IL_0009:            Temp_1=this->F_x1;                                          //ldfld				System::String^ Root::T_x180 F_x1
	IL_000e:            Temp_2=Temp_1->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_0013:            if((Temp_0 + A_0)>=Temp_2)goto IL_0036;                     //bge.s				IL_0036
	IL_0015:            goto IL_0017;                                               //br.s				IL_0017
	IL_0017:                                                                        //ldc.i4.2
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //dup
	IL_001a:                                                                        //ldc.i4.7
	IL_001b:                                                                        //add
	IL_001c:                                                                        //bgt				IL_0018
	IL_0021:                                                                        //pop
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_3=this->F_x1;                                          //ldfld				System::String^ Root::T_x180 F_x1
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_4=this->F_x2;                                          //ldfld				System::Int32 Root::T_x180 F_x2
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //add
	IL_0030:            Temp_5=Temp_3[(Temp_4 + A_0)];                              //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_0035:            return Temp_5;                                              //ret
	IL_0036:                                                                        //ldc.i4.0
	IL_0037:            return (System::Char)0;                                     //ret

}
inline Root::T_x8^ Root::T_x180::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x180^ Temp_0 = nullptr;
	Root::T_x8^ Temp_1 = nullptr;
	//local variables.
	Root::T_x180^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew Root::T_x180(A_0);                             //newobj				void Root::T_x180::.ctor(System::String^)
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            Temp_1=V_0->M_x9();                                         //callvirt				Root::T_x8^ Root::T_x180::M_x9()
	IL_000d:            return Temp_1;                                              //ret

}
inline void Root::T_x180::M_x1(Root::T_x8^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Char Temp_0 = (System::Char)0;
	Root::T_x177^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Char Temp_3 = (System::Char)0;
	System::NotSupportedException^ Temp_4 = nullptr;
	System::Char Temp_5 = (System::Char)0;
	System::String^ Temp_6 = nullptr;
	Root::T_x178^ Temp_7 = nullptr;
	//local variables.
	System::Char V_0 = (System::Char)0;
	Root::T_x177^ V_1 = nullptr;
	System::Char V_2 = (System::Char)0;
	System::Char V_3 = (System::Char)0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_002f;                                               //br.s				IL_002f
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_00b1;case 1:goto IL_0049;case 2:goto IL_00da;case 3:goto IL_00a0;case 4:goto IL_00c4;case 5:goto IL_0126;case 6:goto IL_00f0;case 7:goto IL_005b;case 8:goto IL_008d;};//switch				(IL_00b1,IL_0049,IL_00da,IL_00a0,IL_00c4,IL_0126,IL_00f0,IL_005b,IL_008d)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_0035:                                                                        //ldarg.0
	IL_0036:            Temp_0=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_003b:            V_0=Temp_0;                                                 //stloc.0
	IL_003c:                                                                        //ldloc.0
	IL_003d:            V_3=V_0;                                                    //stloc.3
	IL_003e:                                                                        //ldc.i4				0x1
	IL_0043:            V_4=1;                                                      //stloc				V_4
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:                                                                        //ldloc.3
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            if(V_3==(System::Char)0)goto IL_00f2;                       //beq				IL_00f2
	IL_0050:                                                                        //ldc.i4				0x7
	IL_0055:            V_4=7;                                                      //stloc				V_4
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_005d:            goto IL_0060;                                               //br.s				IL_0060
	IL_005f:                                                                        //break
	IL_0060:            Temp_1=gcnew Root::T_x177();                                //newobj				void Root::T_x177::.ctor()
	IL_0065:            V_1=Temp_1;                                                 //stloc.1
	IL_0066:                                                                        //ldloc.1
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_2=this->M_x5();                                        //call				System::String^ Root::T_x180::M_x5()
	IL_006d:            V_1->M_x2(Temp_2);                                          //callvirt				void Root::T_x177::M_x2(System::String^)
	IL_0072:                                                                        //ldarg.0
	IL_0073:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_3=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_007e:            V_2=Temp_3;                                                 //stloc.2
	IL_007f:                                                                        //ldc.i4				0x8
	IL_0084:            V_4=8;                                                      //stloc				V_4
	IL_0088:            /*goto IL_0002;*/goto IL_008d;                              //br				IL_0002
	IL_008d:                                                                        //ldloc.2
	IL_008e:                                                                        //ldc.i4.s				61
	IL_0090:            if(V_2==(System::Char)61)goto IL_00f3;                      //beq.s				IL_00f3
	IL_0092:                                                                        //ldc.i4				0x3
	IL_0097:            V_4=3;                                                      //stloc				V_4
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:            goto IL_00c6;                                               //br.s				IL_00c6
	IL_00a2:            return;                                                     //ret
	IL_00a3:                                                                        //ldc.i4				0x0
	IL_00a8:            V_4=0;                                                      //stloc				V_4
	IL_00ac:            /*goto IL_0002;*/goto IL_00b1;                              //br				IL_0002
	IL_00b1:                                                                        //ldloc.3
	IL_00b2:                                                                        //ldc.i4.s				47
	IL_00b4:            if(V_3==(System::Char)47)goto IL_00a2;                      //beq.s				IL_00a2
	IL_00b6:                                                                        //ldc.i4				0x4
	IL_00bb:            V_4=4;                                                      //stloc				V_4
	IL_00bf:            /*goto IL_0002;*/goto IL_00c4;                              //br				IL_0002
	IL_00c4:            goto IL_00cc;                                               //br.s				IL_00cc
	IL_00c6:            Temp_4=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00cb:            throw Temp_4;                                               //throw
	IL_00cc:                                                                        //ldc.i4				0x2
	IL_00d1:            V_4=2;                                                      //stloc				V_4
	IL_00d5:            /*goto IL_0002;*/goto IL_00da;                              //br				IL_0002
	IL_00da:                                                                        //ldloc.3
	IL_00db:                                                                        //ldc.i4.s				62
	IL_00dd:            if(V_3!=(System::Char)62)goto IL_005d;                      //bne.un				IL_005d
	IL_00e2:                                                                        //ldc.i4				0x6
	IL_00e7:            V_4=6;                                                      //stloc				V_4
	IL_00eb:            /*goto IL_0002;*/goto IL_00f0;                              //br				IL_0002
	IL_00f0:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00f2:            return;                                                     //ret
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:            Temp_5=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_00f9:                                                                        //pop
	IL_00fa:                                                                        //ldarg.0
	IL_00fb:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_0100:                                                                        //ldloc.1
	IL_0101:                                                                        //ldarg.0
	IL_0102:            Temp_6=this->M_x12();                                       //call				System::String^ Root::T_x180::M_x12()
	IL_0107:            V_1->M_x1(Temp_6);                                          //callvirt				void Root::T_x177::M_x1(System::String^)
	IL_010c:                                                                        //ldarg.1
	IL_010d:            Temp_7=A_0->M_x1();                                         //callvirt				Root::T_x178^ Root::T_x8::M_x1()
	IL_0112:                                                                        //ldloc.1
	IL_0113:            Temp_7->M_x1(V_1);                                          //callvirt				void Root::T_x178::M_x1(Root::T_x177^)
	IL_0118:                                                                        //ldc.i4				0x5
	IL_011d:            V_4=5;                                                      //stloc				V_4
	IL_0121:            /*goto IL_0002;*/goto IL_0126;                              //br				IL_0002
	IL_0126:            goto IL_0000;                                               //br				IL_0000

}
inline System::String^ Root::T_x180::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Char Temp_0 = (System::Char)0;
	System::Char Temp_1 = (System::Char)0;
	System::Char Temp_2 = (System::Char)0;
	System::String^ Temp_3 = nullptr;
	System::Char Temp_4 = (System::Char)0;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::IO::StringWriter^ Temp_6 = nullptr;
	System::Char Temp_7 = (System::Char)0;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Char V_2 = (System::Char)0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_3=1;                                                      //stloc				V_3
	IL_0009:            goto IL_000d;                                               //br.s				IL_000d
	IL_000b:            goto IL_0025;                                               //br.s				IL_0025
	IL_000d:            goto IL_0010;                                               //br.s				IL_0010
	IL_000f:                                                                        //break
	IL_0010:                                                                        //ldloc				V_3
	IL_0014:            switch(V_3){case 0:goto IL_0161;case 1:goto IL_000b;case 2:goto IL_003d;};//switch				(IL_0161,IL_000b,IL_003d)
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_7=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_002b:                                                                        //ldc.i4.s				34
	IL_002d:            if(Temp_7!=(System::Char)34)goto IL_0166;                   //bne.un				IL_0166
	IL_0032:                                                                        //ldc.i4				0x2
	IL_0037:            V_3=2;                                                      //stloc				V_3
	IL_003b:            goto IL_000d;                                               //br.s				IL_000d
	IL_003d:            goto IL_0141;                                               //br				IL_0141
	IL_003D01:          try{
	IL_0042:            goto IL_0069;                                               //br.s				IL_0069
	IL_0044:                                                                        //ldloc				V_3
	IL_0048:            switch(V_3){case 0:goto IL_007b;case 1:goto IL_00f6;case 2:goto IL_00d7;case 3:goto IL_008a;case 4:goto IL_0097;case 5:goto IL_00b6;case 6:goto IL_00a7;};//switch				(IL_007b,IL_00f6,IL_00d7,IL_008a,IL_0097,IL_00b6,IL_00a7)
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_0=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_006f:            V_2=Temp_0;                                                 //stloc.2
	IL_0070:                                                                        //ldc.i4				0x0
	IL_0075:            V_3=0;                                                      //stloc				V_3
	IL_0079:            /*goto IL_0044;*/goto IL_007b;                              //br.s				IL_0044
	IL_007b:                                                                        //ldloc.2
	IL_007c:                                                                        //ldc.i4.0
	IL_007d:            if(V_2==(System::Char)0)goto IL_00a9;                       //beq.s				IL_00a9
	IL_007f:                                                                        //ldc.i4				0x3
	IL_0084:            V_3=3;                                                      //stloc				V_3
	IL_0088:            /*goto IL_0044;*/goto IL_008a;                              //br.s				IL_0044
	IL_008a:            goto IL_008c;                                               //br.s				IL_008c
	IL_008c:                                                                        //ldc.i4				0x4
	IL_0091:            V_3=4;                                                      //stloc				V_3
	IL_0095:            /*goto IL_0044;*/goto IL_0097;                              //br.s				IL_0044
	IL_0097:                                                                        //ldloc.2
	IL_0098:                                                                        //ldc.i4.s				34
	IL_009a:            if(V_2!=(System::Char)34)goto IL_00dc;                      //bne.un.s				IL_00dc
	IL_009c:                                                                        //ldc.i4				0x6
	IL_00a1:            V_3=6;                                                      //stloc				V_3
	IL_00a5:            /*goto IL_0044;*/goto IL_00a7;                              //br.s				IL_0044
	IL_00a7:            goto IL_00bb;                                               //br.s				IL_00bb
	IL_00a9:                                                                        //ldnull
	IL_00aa:            V_1=safe_cast<System::String^>(nullptr);                    //stloc.1
	IL_00ab:                                                                        //ldc.i4				0x5
	IL_00b0:            V_3=5;                                                      //stloc				V_3
	IL_00b4:            /*goto IL_0044;*/goto IL_00b6;                              //br.s				IL_0044
	IL_00b6:            goto IL_0168;                                               //leave				IL_0168
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_2=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_00c1:                                                                        //pop
	IL_00c2:                                                                        //ldloc.0
	IL_00c3:            Temp_3=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_00c8:            V_1=Temp_3;                                                 //stloc.1
	IL_00c9:                                                                        //ldc.i4				0x2
	IL_00ce:            V_3=2;                                                      //stloc				V_3
	IL_00d2:            /*goto IL_0044;*/goto IL_00d7;                              //br				IL_0044
	IL_00d7:            goto IL_0168;                                               //leave				IL_0168
	IL_00dc:                                                                        //ldloc.0
	IL_00dd:                                                                        //ldarg.0
	IL_00de:            Temp_1=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_00e3:            V_0->Write(Temp_1);                                         //callvirt				void System::IO::TextWriter::Write(System::Char)
	IL_00e8:                                                                        //ldc.i4				0x1
	IL_00ed:            V_3=1;                                                      //stloc				V_3
	IL_00f1:            /*goto IL_0044;*/goto IL_00f6;                              //br				IL_0044
	IL_00f6:            goto IL_0042;                                               //br				IL_0042
	                    ;}
	                    finally{
	IL_00fb:                                                                        //ldc.i4				0x2
	IL_0100:            V_3=2;                                                      //stloc				V_3
	IL_0104:            /*goto IL_0108;*/goto IL_0106;                              //br.s				IL_0108
	IL_0106:            goto IL_011d;                                               //br.s				IL_011d
	IL_0108:                                                                        //ldloc				V_3
	IL_010c:            switch(V_3){case 0:goto IL_013e;case 1:goto IL_012b;case 2:goto IL_0106;};//switch				(IL_013e,IL_012b,IL_0106)
	IL_011d:                                                                        //ldloc.0
	IL_011e:            if(V_0==nullptr)goto IL_0140;                               //brfalse.s				IL_0140
	IL_0120:                                                                        //ldc.i4				0x1
	IL_0125:            V_3=1;                                                      //stloc				V_3
	IL_0129:            /*goto IL_0108;*/goto IL_012b;                              //br.s				IL_0108
	IL_012b:            goto IL_012d;                                               //br.s				IL_012d
	IL_012d:                                                                        //ldloc.0
	IL_012e:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0133:                                                                        //ldc.i4				0x0
	IL_0138:            V_3=0;                                                      //stloc				V_3
	IL_013c:            /*goto IL_0108;*/goto IL_013e;                              //br.s				IL_0108
	IL_013e:            goto IL_0140;                                               //br.s				IL_0140
	IL_0140:                                                                        //endfinally
	                    ;}
	IL_0141:                                                                        //ldarg.0
	IL_0142:            Temp_4=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_0147:                                                                        //pop
	IL_0148:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_014d:            Temp_6=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_5));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0152:            V_0=Temp_6;                                                 //stloc.0
	IL_0153:                                                                        //ldc.i4				0x0
	IL_0158:            V_3=0;                                                      //stloc				V_3
	IL_015c:            goto IL_000d;                                               //br				IL_000d
	IL_0161:            /*goto IL_0042;*/goto IL_003D01;                            //br				IL_0042
	IL_0166:                                                                        //ldnull
	IL_0167:            return nullptr;                                             //ret
	IL_0168:                                                                        //ldloc.1
	IL_0169:            return V_1;                                                 //ret

}
inline System::String^ Root::T_x180::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::Char Temp_2 = (System::Char)0;
	System::Char Temp_3 = (System::Char)0;
	System::String^ Temp_4 = nullptr;
	System::Char Temp_5 = (System::Char)0;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Char V_2 = (System::Char)0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0010:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0015:            V_0=Temp_1;                                                 //stloc.0
	IL_0016:            /*goto IL_0018;*/goto IL_001601;                            //br.s				IL_0018
	IL_001601:          try{
	IL_0018:            goto IL_003f;                                               //br.s				IL_003f
	IL_001a:                                                                        //ldloc				V_3
	IL_001e:            switch(V_3){case 0:goto IL_008c;case 1:goto IL_0060;case 2:goto IL_00c9;case 3:goto IL_007d;case 4:goto IL_0051;case 5:goto IL_00ad;case 6:goto IL_006d;};//switch				(IL_008c,IL_0060,IL_00c9,IL_007d,IL_0051,IL_00ad,IL_006d)
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_2=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_0045:            V_2=Temp_2;                                                 //stloc.2
	IL_0046:                                                                        //ldc.i4				0x4
	IL_004b:            V_3=4;                                                      //stloc				V_3
	IL_004f:            /*goto IL_001a;*/goto IL_0051;                              //br.s				IL_001a
	IL_0051:                                                                        //ldloc.2
	IL_0052:                                                                        //ldc.i4.0
	IL_0053:            if(V_2==(System::Char)0)goto IL_007f;                       //beq.s				IL_007f
	IL_0055:                                                                        //ldc.i4				0x1
	IL_005a:            V_3=1;                                                      //stloc				V_3
	IL_005e:            /*goto IL_001a;*/goto IL_0060;                              //br.s				IL_001a
	IL_0060:            goto IL_0062;                                               //br.s				IL_0062
	IL_0062:                                                                        //ldc.i4				0x6
	IL_0067:            V_3=6;                                                      //stloc				V_3
	IL_006b:            /*goto IL_001a;*/goto IL_006d;                              //br.s				IL_001a
	IL_006d:                                                                        //ldloc.2
	IL_006e:                                                                        //ldc.i4.s				60
	IL_0070:            if(V_2!=(System::Char)60)goto IL_00af;                      //bne.un.s				IL_00af
	IL_0072:                                                                        //ldc.i4				0x3
	IL_0077:            V_3=3;                                                      //stloc				V_3
	IL_007b:            /*goto IL_001a;*/goto IL_007d;                              //br.s				IL_001a
	IL_007d:            goto IL_0091;                                               //br.s				IL_0091
	IL_007f:                                                                        //ldnull
	IL_0080:            V_1=safe_cast<System::String^>(nullptr);                    //stloc.1
	IL_0081:                                                                        //ldc.i4				0x0
	IL_0086:            V_3=0;                                                      //stloc				V_3
	IL_008a:            /*goto IL_001a;*/goto IL_008c;                              //br.s				IL_001a
	IL_008c:            goto IL_0114;                                               //leave				IL_0114
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_3=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_0097:                                                                        //pop
	IL_0098:                                                                        //ldloc.0
	IL_0099:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_009e:            V_1=Temp_4;                                                 //stloc.1
	IL_009f:                                                                        //ldc.i4				0x5
	IL_00a4:            V_3=5;                                                      //stloc				V_3
	IL_00a8:            /*goto IL_001a;*/goto IL_00ad;                              //br				IL_001a
	IL_00ad:            goto IL_0114;                                               //leave.s				IL_0114
	IL_00af:                                                                        //ldloc.0
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:            Temp_5=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_00b6:            V_0->Write(Temp_5);                                         //callvirt				void System::IO::TextWriter::Write(System::Char)
	IL_00bb:                                                                        //ldc.i4				0x2
	IL_00c0:            V_3=2;                                                      //stloc				V_3
	IL_00c4:            /*goto IL_001a;*/goto IL_00c9;                              //br				IL_001a
	IL_00c9:            goto IL_0018;                                               //br				IL_0018
	                    ;}
	                    finally{
	IL_00ce:                                                                        //ldc.i4				0x0
	IL_00d3:            V_4=0;                                                      //stloc				V_4
	IL_00d7:            /*goto IL_00db;*/goto IL_00d9;                              //br.s				IL_00db
	IL_00d9:            goto IL_00f0;                                               //br.s				IL_00f0
	IL_00db:                                                                        //ldloc				V_4
	IL_00df:            switch(V_4){case 0:goto IL_00d9;case 1:goto IL_00fe;case 2:goto IL_0111;};//switch				(IL_00d9,IL_00fe,IL_0111)
	IL_00f0:                                                                        //ldloc.0
	IL_00f1:            if(V_0==nullptr)goto IL_0113;                               //brfalse.s				IL_0113
	IL_00f3:                                                                        //ldc.i4				0x1
	IL_00f8:            V_4=1;                                                      //stloc				V_4
	IL_00fc:            /*goto IL_00db;*/goto IL_00fe;                              //br.s				IL_00db
	IL_00fe:            goto IL_0100;                                               //br.s				IL_0100
	IL_0100:                                                                        //ldloc.0
	IL_0101:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0106:                                                                        //ldc.i4				0x2
	IL_010b:            V_4=2;                                                      //stloc				V_4
	IL_010f:            /*goto IL_00db;*/goto IL_0111;                              //br.s				IL_00db
	IL_0111:            goto IL_0113;                                               //br.s				IL_0113
	IL_0113:                                                                        //endfinally
	                    ;}
	IL_0114:                                                                        //ldloc.1
	IL_0115:            return V_1;                                                 //ret

}
inline System::Char Root::T_x180::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Char Temp_2 = (System::Char)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x180 F_x1
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //dup
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x180 F_x2
	IL_0010:                                                                        //dup
	IL_0011:            V_0=Temp_1;                                                 //stloc.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:                                                                        //add
	IL_0014:            this->F_x2=(V_0 + 1);                                       //stfld				System::Int32 Root::T_x180 F_x2
	IL_0019:                                                                        //ldloc.0
	IL_001a:            Temp_2=Temp_0[V_0];                                         //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_001f:            return Temp_2;                                              //ret

}
inline void Root::T_x180::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Char Temp_0 = (System::Char)0;
	System::Char Temp_1 = (System::Char)0;
	System::NotSupportedException^ Temp_2 = nullptr;
	System::NotSupportedException^ Temp_3 = nullptr;
	System::NotSupportedException^ Temp_4 = nullptr;
	System::Char Temp_5 = (System::Char)0;
	System::Char Temp_6 = (System::Char)0;
	System::Char Temp_7 = (System::Char)0;
	System::Char Temp_8 = (System::Char)0;
	System::NotSupportedException^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_009e;case 1:goto IL_00b6;case 2:goto IL_0087;case 3:goto IL_0051;case 4:goto IL_003c;case 5:goto IL_00d5;case 6:goto IL_00ed;case 7:goto IL_006b;};//switch				(IL_009e,IL_00b6,IL_0087,IL_0051,IL_003c,IL_00d5,IL_00ed,IL_006b)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_0031:                                                                        //ldc.i4				0x4
	IL_0036:            V_0=4;                                                      //stloc				V_0
	IL_003a:            /*goto IL_0002;*/goto IL_003c;                              //br.s				IL_0002
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_5=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_0042:                                                                        //ldc.i4.s				60
	IL_0044:            if(Temp_5==(System::Char)60)goto IL_0089;                   //beq.s				IL_0089
	IL_0046:                                                                        //ldc.i4				0x3
	IL_004b:            V_0=3;                                                      //stloc				V_0
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_00be;                                               //br.s				IL_00be
	IL_0053:            Temp_3=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0058:            throw Temp_3;                                               //throw
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_1=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_005f:                                                                        //pop
	IL_0060:                                                                        //ldc.i4				0x7
	IL_0065:            V_0=7;                                                      //stloc				V_0
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:                                                                        //ldarg.1
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_10=this->M_x5();                                       //call				System::String^ Root::T_x180::M_x5()
	IL_0072:            Temp_11=(A_0 != Temp_10);                                   //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0077:            if(!Temp_11)goto IL_00c4;                                   //brfalse.s				IL_00c4
	IL_0079:                                                                        //ldc.i4				0x2
	IL_007e:            V_0=2;                                                      //stloc				V_0
	IL_0082:            /*goto IL_0002;*/goto IL_0087;                              //br				IL_0002
	IL_0087:            goto IL_0053;                                               //br.s				IL_0053
	IL_0089:                                                                        //ldarg.0
	IL_008a:            Temp_6=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_008f:                                                                        //pop
	IL_0090:                                                                        //ldc.i4				0x0
	IL_0095:            V_0=0;                                                      //stloc				V_0
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_0=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_00a4:                                                                        //ldc.i4.s				47
	IL_00a6:            if(Temp_0==(System::Char)47)goto IL_0059;                   //beq.s				IL_0059
	IL_00a8:                                                                        //ldc.i4				0x1
	IL_00ad:            V_0=1;                                                      //stloc				V_0
	IL_00b1:            /*goto IL_0002;*/goto IL_00b6;                              //br				IL_0002
	IL_00b6:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_00b8:            Temp_9=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00bd:            throw Temp_9;                                               //throw
	IL_00be:            Temp_4=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00c3:            throw Temp_4;                                               //throw
	IL_00c4:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_00c6:                                                                        //break
	IL_00c7:                                                                        //ldc.i4				0x5
	IL_00cc:            V_0=5;                                                      //stloc				V_0
	IL_00d0:            /*goto IL_0002;*/goto IL_00d5;                              //br				IL_0002
	IL_00d5:                                                                        //ldarg.0
	IL_00d6:            Temp_7=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_00db:                                                                        //ldc.i4.s				62
	IL_00dd:            if(Temp_7==(System::Char)62)goto IL_00f5;                   //beq.s				IL_00f5
	IL_00df:                                                                        //ldc.i4				0x6
	IL_00e4:            V_0=6;                                                      //stloc				V_0
	IL_00e8:            /*goto IL_0002;*/goto IL_00ed;                              //br				IL_0002
	IL_00ed:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_00ef:            Temp_2=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00f4:            throw Temp_2;                                               //throw
	IL_00f5:                                                                        //ldarg.0
	IL_00f6:            Temp_8=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_00fb:                                                                        //pop
	IL_00fc:            return;                                                     //ret

}
inline void Root::T_x180::M_x2(Root::T_x8^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Char Temp_0 = (System::Char)0;
	Root::T_x8^ Temp_1 = nullptr;
	Root::T_x179^ Temp_2 = nullptr;
	System::Char Temp_3 = (System::Char)0;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	//local variables.
	Root::T_x8^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0036;                                               //br.s				IL_0036
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00df;case 1:goto IL_0056;case 2:goto IL_000b;case 3:goto IL_00c3;case 4:goto IL_00b3;case 5:goto IL_0082;case 6:goto IL_006d;case 7:goto IL_0092;};//switch				(IL_00df,IL_0056,IL_000b,IL_00c3,IL_00b3,IL_0082,IL_006d,IL_0092)
	IL_0036:            goto IL_0084;                                               //br.s				IL_0084
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_1=this->M_x9();                                        //call				Root::T_x8^ Root::T_x180::M_x9()
	IL_003e:            V_0=Temp_1;                                                 //stloc.0
	IL_003f:                                                                        //ldarg.1
	IL_0040:            Temp_2=A_0->M_x12();                                        //callvirt				Root::T_x179^ Root::T_x8::M_x12()
	IL_0045:                                                                        //ldloc.0
	IL_0046:            Temp_2->M_x1(V_0);                                          //callvirt				void Root::T_x179::M_x1(Root::T_x8^)
	IL_004b:                                                                        //ldc.i4				0x1
	IL_0050:            V_1=1;                                                      //stloc				V_1
	IL_0054:            /*goto IL_000d;*/goto IL_0056;                              //br.s				IL_000d
	IL_0056:            goto IL_0059;                                               //br.s				IL_0059
	IL_0058:                                                                        //break
	IL_0059:            goto IL_0084;                                               //br.s				IL_0084
	IL_005b:            return;                                                     //ret
	IL_005c:                                                                        //ldarg.0
	IL_005d:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_0062:                                                                        //ldc.i4				0x6
	IL_0067:            V_1=6;                                                      //stloc				V_1
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_3=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_0073:                                                                        //ldc.i4.s				60
	IL_0075:            if(Temp_3!=(System::Char)60)goto IL_0038;                   //bne.un.s				IL_0038
	IL_0077:                                                                        //ldc.i4				0x5
	IL_007c:            V_1=5;                                                      //stloc				V_1
	IL_0080:            /*goto IL_000d;*/goto IL_0082;                              //br.s				IL_000d
	IL_0082:            goto IL_00b5;                                               //br.s				IL_00b5
	IL_0084:                                                                        //ldc.i4				0x7
	IL_0089:            V_1=7;                                                      //stloc				V_1
	IL_008d:            /*goto IL_000d;*/goto IL_0092;                              //br				IL_000d
	IL_0092:                                                                        //ldarg.0
	IL_0093:            Temp_4=this->F_x2;                                          //ldfld				System::Int32 Root::T_x180 F_x2
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_5=this->F_x1;                                          //ldfld				System::String^ Root::T_x180 F_x1
	IL_009e:            Temp_6=Temp_5->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_00a3:            if(Temp_4<Temp_6)goto IL_005c;                              //blt.s				IL_005c
	IL_00a5:                                                                        //ldc.i4				0x4
	IL_00aa:            V_1=4;                                                      //stloc				V_1
	IL_00ae:            /*goto IL_000d;*/goto IL_00b3;                              //br				IL_000d
	IL_00b3:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00b5:                                                                        //ldc.i4				0x3
	IL_00ba:            V_1=3;                                                      //stloc				V_1
	IL_00be:            /*goto IL_000d;*/goto IL_00c3;                              //br				IL_000d
	IL_00c3:                                                                        //ldarg.0
	IL_00c4:                                                                        //ldc.i4.1
	IL_00c5:            Temp_0=this->M_x1(safe_cast<System::Int32>(1));             //call				System::Char Root::T_x180::M_x1(System::Int32)
	IL_00ca:                                                                        //ldc.i4.s				47
	IL_00cc:            if(Temp_0!=(System::Char)47)goto IL_0038;                   //bne.un				IL_0038
	IL_00d1:                                                                        //ldc.i4				0x0
	IL_00d6:            V_1=0;                                                      //stloc				V_1
	IL_00da:            /*goto IL_000d;*/goto IL_00df;                              //br				IL_000d
	IL_00df:            goto IL_005b;                                               //br				IL_005b
	IL_00e4:            return;                                                     //ret

}
inline System::String^ Root::T_x180::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::Char Temp_2 = (System::Char)0;
	System::Char Temp_3 = (System::Char)0;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Char V_1 = (System::Char)0;
	System::String^ V_2 = nullptr;
	System::Char V_3 = (System::Char)0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0005:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000a:            V_0=Temp_1;                                                 //stloc.0
	IL_000b:            /*goto IL_000d;*/goto IL_000B01;                            //br.s				IL_000d
	IL_000B01:          try{
	IL_000d:            goto IL_0058;                                               //br.s				IL_0058
	IL_000f:                                                                        //ldloc				V_4
	IL_0013:            switch(V_4){case 0:goto IL_016f;case 1:goto IL_00b7;case 2:goto IL_00ef;case 3:goto IL_014c;case 4:goto IL_01b1;case 5:goto IL_00ff;case 6:goto IL_008c;case 7:goto IL_006c;case 8:goto IL_017f;case 9:goto IL_015f;case 10:goto IL_0192;case 11:goto IL_0139;case 12:goto IL_00ca;case 13:goto IL_0122;case 14:goto IL_00dd;case 15:goto IL_007f;};//switch				(IL_016f,IL_00b7,IL_00ef,IL_014c,IL_01b1,IL_00ff,IL_008c,IL_006c,IL_017f,IL_015f,IL_0192,IL_0139,IL_00ca,IL_0122,IL_00dd,IL_007f)
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_2=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_005e:            V_1=Temp_2;                                                 //stloc.1
	IL_005f:                                                                        //ldloc.1
	IL_0060:            V_3=V_1;                                                    //stloc.3
	IL_0061:                                                                        //ldc.i4				0x7
	IL_0066:            V_4=7;                                                      //stloc				V_4
	IL_006a:            /*goto IL_000f;*/goto IL_006c;                              //br.s				IL_000f
	IL_006c:                                                                        //ldloc.3
	IL_006d:                                                                        //ldc.i4.s				13
	IL_006f:            if(V_3>(System::Char)13)goto IL_013e;                       //bgt				IL_013e
	IL_0074:                                                                        //ldc.i4				0xf
	IL_0079:            V_4=15;                                                     //stloc				V_4
	IL_007d:            /*goto IL_000f;*/goto IL_007f;                              //br.s				IL_000f
	IL_007f:            goto IL_00cf;                                               //br.s				IL_00cf
	IL_0081:                                                                        //ldc.i4				0x6
	IL_0086:            V_4=6;                                                      //stloc				V_4
	IL_008a:            /*goto IL_000f;*/goto IL_008c;                              //br.s				IL_000f
	IL_008c:                                                                        //ldloc.3
	IL_008d:                                                                        //ldc.i4.s				9
	IL_008f:                                                                        //sub
	IL_0090:            switch((V_3 - (System::Char)9)){case 0:goto IL_0124;case 1:goto IL_0124;case 2:goto IL_0197;case 3:goto IL_0197;case 4:goto IL_0124;};//switch				(IL_0124,IL_0124,IL_0197,IL_0197,IL_0124)
	IL_00a9:                                                                        //ldc.i4				0x1
	IL_00ae:            V_4=1;                                                      //stloc				V_4
	IL_00b2:            /*goto IL_000f;*/goto IL_00b7;                              //br				IL_000f
	IL_00b7:            goto IL_0161;                                               //br				IL_0161
	IL_00bc:                                                                        //ldc.i4				0xc
	IL_00c1:            V_4=12;                                                     //stloc				V_4
	IL_00c5:            /*goto IL_000f;*/goto IL_00ca;                              //br				IL_000f
	IL_00ca:            goto IL_0197;                                               //br				IL_0197
	IL_00cf:                                                                        //ldc.i4				0xe
	IL_00d4:            V_4=14;                                                     //stloc				V_4
	IL_00d8:            /*goto IL_000f;*/goto IL_00dd;                              //br				IL_000f
	IL_00dd:                                                                        //ldloc.3
	IL_00de:                                                                        //ldc.i4.0
	IL_00df:            if(V_3==(System::Char)0)goto IL_0124;                       //beq.s				IL_0124
	IL_00e1:                                                                        //ldc.i4				0x2
	IL_00e6:            V_4=2;                                                      //stloc				V_4
	IL_00ea:            /*goto IL_000f;*/goto IL_00ef;                              //br				IL_000f
	IL_00ef:            goto IL_0081;                                               //br.s				IL_0081
	IL_00f1:                                                                        //ldc.i4				0x5
	IL_00f6:            V_4=5;                                                      //stloc				V_4
	IL_00fa:            /*goto IL_000f;*/goto IL_00ff;                              //br				IL_000f
	IL_00ff:                                                                        //ldloc.3
	IL_0100:                                                                        //ldc.i4.s				60
	IL_0102:                                                                        //sub
	IL_0103:            switch((V_3 - (System::Char)60)){case 0:goto IL_0124;case 1:goto IL_0124;case 2:goto IL_0124;};//switch				(IL_0124,IL_0124,IL_0124)
	IL_0114:                                                                        //ldc.i4				0xd
	IL_0119:            V_4=13;                                                     //stloc				V_4
	IL_011d:            /*goto IL_000f;*/goto IL_0122;                              //br				IL_000f
	IL_0122:            goto IL_00bc;                                               //br.s				IL_00bc
	IL_0124:                                                                        //ldloc.0
	IL_0125:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_012a:            V_2=Temp_4;                                                 //stloc.2
	IL_012b:                                                                        //ldc.i4				0xb
	IL_0130:            V_4=11;                                                     //stloc				V_4
	IL_0134:            /*goto IL_000f;*/goto IL_0139;                              //br				IL_000f
	IL_0139:            goto IL_01fc;                                               //leave				IL_01fc
	IL_013e:                                                                        //ldc.i4				0x3
	IL_0143:            V_4=3;                                                      //stloc				V_4
	IL_0147:            /*goto IL_000f;*/goto IL_014c;                              //br				IL_000f
	IL_014c:                                                                        //ldloc.3
	IL_014d:                                                                        //ldc.i4.s				32
	IL_014f:            if(V_3==(System::Char)32)goto IL_0124;                      //beq.s				IL_0124
	IL_0151:                                                                        //ldc.i4				0x9
	IL_0156:            V_4=9;                                                      //stloc				V_4
	IL_015a:            /*goto IL_000f;*/goto IL_015f;                              //br				IL_000f
	IL_015f:            goto IL_0171;                                               //br.s				IL_0171
	IL_0161:                                                                        //ldc.i4				0x0
	IL_0166:            V_4=0;                                                      //stloc				V_4
	IL_016a:            /*goto IL_000f;*/goto IL_016f;                              //br				IL_000f
	IL_016f:            goto IL_0197;                                               //br.s				IL_0197
	IL_0171:                                                                        //ldc.i4				0x8
	IL_0176:            V_4=8;                                                      //stloc				V_4
	IL_017a:            /*goto IL_000f;*/goto IL_017f;                              //br				IL_000f
	IL_017f:                                                                        //ldloc.3
	IL_0180:                                                                        //ldc.i4.s				47
	IL_0182:            if(V_3==(System::Char)47)goto IL_0124;                      //beq.s				IL_0124
	IL_0184:                                                                        //ldc.i4				0xa
	IL_0189:            V_4=10;                                                     //stloc				V_4
	IL_018d:            /*goto IL_000f;*/goto IL_0192;                              //br				IL_000f
	IL_0192:            goto IL_00f1;                                               //br				IL_00f1
	IL_0197:                                                                        //ldloc.0
	IL_0198:                                                                        //ldarg.0
	IL_0199:            Temp_3=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_019e:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::Char)
	IL_01a3:                                                                        //ldc.i4				0x4
	IL_01a8:            V_4=4;                                                      //stloc				V_4
	IL_01ac:            /*goto IL_000f;*/goto IL_01b1;                              //br				IL_000f
	IL_01b1:            goto IL_000d;                                               //br				IL_000d
	                    ;}
	                    finally{
	IL_01b6:                                                                        //ldc.i4				0x1
	IL_01bb:            V_5=1;                                                      //stloc				V_5
	IL_01bf:            /*goto IL_01c3;*/goto IL_01c1;                              //br.s				IL_01c3
	IL_01c1:            goto IL_01d8;                                               //br.s				IL_01d8
	IL_01c3:                                                                        //ldloc				V_5
	IL_01c7:            switch(V_5){case 0:goto IL_01e6;case 1:goto IL_01c1;case 2:goto IL_01f9;};//switch				(IL_01e6,IL_01c1,IL_01f9)
	IL_01d8:                                                                        //ldloc.0
	IL_01d9:            if(V_0==nullptr)goto IL_01fb;                               //brfalse.s				IL_01fb
	IL_01db:                                                                        //ldc.i4				0x0
	IL_01e0:            V_5=0;                                                      //stloc				V_5
	IL_01e4:            /*goto IL_01c3;*/goto IL_01e6;                              //br.s				IL_01c3
	IL_01e6:            goto IL_01e8;                                               //br.s				IL_01e8
	IL_01e8:                                                                        //ldloc.0
	IL_01e9:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01ee:                                                                        //ldc.i4				0x2
	IL_01f3:            V_5=2;                                                      //stloc				V_5
	IL_01f7:            /*goto IL_01c3;*/goto IL_01f9;                              //br.s				IL_01c3
	IL_01f9:            goto IL_01fb;                                               //br.s				IL_01fb
	IL_01fb:                                                                        //endfinally
	                    ;}
	IL_01fc:                                                                        //ldc.i4.4
	IL_01fd:                                                                        //dup
	IL_01fe:                                                                        //dup
	IL_01ff:                                                                        //ldc.i4.2
	IL_0200:                                                                        //sub
	IL_0201:                                                                        //blt				IL_01fd
	IL_0206:                                                                        //pop
	IL_0207:                                                                        //ldloc.2
	IL_0208:            return V_2;                                                 //ret

}
inline void Root::T_x180::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Char Temp_0 = (System::Char)0;
	System::Char Temp_1 = (System::Char)0;
	//local variables.
	System::Char V_0 = (System::Char)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0032;                                               //br.s				IL_0032
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_007e;case 1:goto IL_00a9;case 2:goto IL_0071;case 3:goto IL_00c0;case 4:goto IL_0053;case 5:goto IL_0061;case 6:goto IL_0044;};//switch				(IL_007e,IL_00a9,IL_0071,IL_00c0,IL_0053,IL_0061,IL_0044)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_0=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_0038:            V_0=Temp_0;                                                 //stloc.0
	IL_0039:                                                                        //ldc.i4				0x6
	IL_003e:            V_1=6;                                                      //stloc				V_1
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //ldc.i4.0
	IL_0046:            if(V_0==(System::Char)0)goto IL_0000;                       //beq.s				IL_0000
	IL_0048:                                                                        //ldc.i4				0x4
	IL_004d:            V_1=4;                                                      //stloc				V_1
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_0073;                                               //br.s				IL_0073
	IL_0055:            return;                                                     //ret
	IL_0056:                                                                        //ldc.i4				0x5
	IL_005b:            V_1=5;                                                      //stloc				V_1
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:                                                                        //ldloc.0
	IL_0062:                                                                        //ldc.i4.s				32
	IL_0064:            if(V_0==(System::Char)32)goto IL_00ab;                      //beq.s				IL_00ab
	IL_0066:                                                                        //ldc.i4				0x2
	IL_006b:            V_1=2;                                                      //stloc				V_1
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_0055;                                               //br.s				IL_0055
	IL_0073:                                                                        //ldc.i4				0x0
	IL_0078:            V_1=0;                                                      //stloc				V_1
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:                                                                        //ldloc.0
	IL_007f:                                                                        //ldc.i4.s				9
	IL_0081:                                                                        //sub
	IL_0082:            switch((V_0 - (System::Char)9)){case 0:goto IL_00ab;case 1:goto IL_00ab;case 2:goto IL_00c5;case 3:goto IL_00c5;case 4:goto IL_00ab;};//switch				(IL_00ab,IL_00ab,IL_00c5,IL_00c5,IL_00ab)
	IL_009b:                                                                        //ldc.i4				0x1
	IL_00a0:            V_1=1;                                                      //stloc				V_1
	IL_00a4:            /*goto IL_0002;*/goto IL_00a9;                              //br				IL_0002
	IL_00a9:            goto IL_0056;                                               //br.s				IL_0056
	IL_00ab:                                                                        //ldarg.0
	IL_00ac:            Temp_1=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_00b1:                                                                        //pop
	IL_00b2:                                                                        //ldc.i4				0x3
	IL_00b7:            V_1=3;                                                      //stloc				V_1
	IL_00bb:            /*goto IL_0002;*/goto IL_00c0;                              //br				IL_0002
	IL_00c0:            goto IL_0000;                                               //br				IL_0000
	IL_00c5:            return;                                                     //ret

}
inline Root::T_x8^ Root::T_x180::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Char Temp_0 = (System::Char)0;
	Root::T_x8^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Char Temp_3 = (System::Char)0;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::NotSupportedException^ Temp_7 = nullptr;
	System::NotSupportedException^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Char Temp_10 = (System::Char)0;
	System::Char Temp_11 = (System::Char)0;
	System::String^ Temp_12 = nullptr;
	System::Char Temp_13 = (System::Char)0;
	System::Char Temp_14 = (System::Char)0;
	System::Char Temp_15 = (System::Char)0;
	System::NotSupportedException^ Temp_16 = nullptr;
	System::Char Temp_17 = (System::Char)0;
	System::NotSupportedException^ Temp_18 = nullptr;
	System::Char Temp_19 = (System::Char)0;
	System::Char Temp_20 = (System::Char)0;
	//local variables.
	Root::T_x8^ V_0 = nullptr;
	System::Char V_1 = (System::Char)0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_2=12;                                                     //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0076;                                               //br.s				IL_0076
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_01f1;case 1:goto IL_017b;case 2:goto IL_00d4;case 3:goto IL_019a;case 4:goto IL_02c8;case 5:goto IL_024b;case 6:goto IL_02e2;case 7:goto IL_0095;case 8:goto IL_0141;case 9:goto IL_028d;case 10:goto IL_0163;case 11:goto IL_0238;case 12:goto IL_000b;case 13:goto IL_00a8;case 14:goto IL_0207;case 15:goto IL_010c;case 16:goto IL_025e;case 17:goto IL_0277;case 18:goto IL_00c1;case 19:goto IL_00ee;case 20:goto IL_021d;case 21:goto IL_01be;case 22:goto IL_02ad;case 23:goto IL_0122;};//switch				(IL_01f1,IL_017b,IL_00d4,IL_019a,IL_02c8,IL_024b,IL_02e2,IL_0095,IL_0141,IL_028d,IL_0163,IL_0238,IL_000b,IL_00a8,IL_0207,IL_010c,IL_025e,IL_0277,IL_00c1,IL_00ee,IL_021d,IL_01be,IL_02ad,IL_0122)
	IL_0076:            goto IL_018c;                                               //br				IL_018c
	IL_007b:                                                                        //ldarg.0
	IL_007c:                                                                        //ldloc.0
	IL_007d:            Temp_9=V_0->M_x8();                                         //callvirt				System::String^ Root::T_x8::M_x8()
	IL_0082:            this->M_x2(Temp_9);                                         //call				void Root::T_x180::M_x2(System::String^)
	IL_0087:                                                                        //ldc.i4				0x7
	IL_008c:            V_2=7;                                                      //stloc				V_2
	IL_0090:            /*goto IL_000d;*/goto IL_0095;                              //br				IL_000d
	IL_0095:            goto IL_0146;                                               //br				IL_0146
	IL_009a:                                                                        //ldc.i4				0xd
	IL_009f:            V_2=13;                                                     //stloc				V_2
	IL_00a3:            /*goto IL_000d;*/goto IL_00a8;                              //br				IL_000d
	IL_00a8:                                                                        //ldarg.0
	IL_00a9:                                                                        //ldc.i4.1
	IL_00aa:            Temp_15=this->M_x1(safe_cast<System::Int32>(1));            //call				System::Char Root::T_x180::M_x1(System::Int32)
	IL_00af:                                                                        //ldc.i4.s				47
	IL_00b1:            if(Temp_15==(System::Char)47)goto IL_0127;                  //beq.s				IL_0127
	IL_00b3:                                                                        //ldc.i4				0x12
	IL_00b8:            V_2=18;                                                     //stloc				V_2
	IL_00bc:            /*goto IL_000d;*/goto IL_00c1;                              //br				IL_000d
	IL_00c1:            goto IL_02cd;                                               //br				IL_02cd
	IL_00c6:                                                                        //ldc.i4				0x2
	IL_00cb:            V_2=2;                                                      //stloc				V_2
	IL_00cf:            /*goto IL_000d;*/goto IL_00d4;                              //br				IL_000d
	IL_00d4:            goto IL_01c3;                                               //br				IL_01c3
	IL_00d9:                                                                        //ldarg.0
	IL_00da:            Temp_20=this->M_x2();                                       //call				System::Char Root::T_x180::M_x2()
	IL_00df:                                                                        //pop
	IL_00e0:                                                                        //ldc.i4				0x13
	IL_00e5:            V_2=19;                                                     //stloc				V_2
	IL_00e9:            /*goto IL_000d;*/goto IL_00ee;                              //br				IL_000d
	IL_00ee:            goto IL_0146;                                               //br.s				IL_0146
	IL_00f0:                                                                        //ldarg.0
	IL_00f1:            Temp_13=this->M_x2();                                       //call				System::Char Root::T_x180::M_x2()
	IL_00f6:                                                                        //pop
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:            Temp_14=this->M_x1();                                       //call				System::Char Root::T_x180::M_x1()
	IL_00fd:            V_1=Temp_14;                                                //stloc.1
	IL_00fe:                                                                        //ldc.i4				0xf
	IL_0103:            V_2=15;                                                     //stloc				V_2
	IL_0107:            /*goto IL_000d;*/goto IL_010c;                              //br				IL_000d
	IL_010c:            goto IL_010f;                                               //br.s				IL_010f
	IL_010e:                                                                        //break
	IL_010f:                                                                        //ldloc.1
	IL_0110:                                                                        //ldc.i4.s				33
	IL_0112:            if(V_1==(System::Char)33)goto IL_0180;                      //beq.s				IL_0180
	IL_0114:                                                                        //ldc.i4				0x17
	IL_0119:            V_2=23;                                                     //stloc				V_2
	IL_011d:            /*goto IL_000d;*/goto IL_0122;                              //br				IL_000d
	IL_0122:            goto IL_023d;                                               //br				IL_023d
	IL_0127:                                                                        //ldloc.0
	IL_0128:                                                                        //ldarg.0
	IL_0129:            Temp_12=this->M_x13();                                      //call				System::String^ Root::T_x180::M_x13()
	IL_012e:            V_0->M_x1(Temp_12);                                         //callvirt				void Root::T_x8::M_x1(System::String^)
	IL_0133:                                                                        //ldc.i4				0x8
	IL_0138:            V_2=8;                                                      //stloc				V_2
	IL_013c:            /*goto IL_000d;*/goto IL_0141;                              //br				IL_000d
	IL_0141:            goto IL_007b;                                               //br				IL_007b
	IL_0146:                                                                        //ldloc.0
	IL_0147:            return V_0;                                                 //ret
	IL_0148:                                                                        //ldarg.0
	IL_0149:            Temp_10=this->M_x2();                                       //call				System::Char Root::T_x180::M_x2()
	IL_014e:                                                                        //pop
	IL_014f:                                                                        //ldarg.0
	IL_0150:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_0155:                                                                        //ldc.i4				0xa
	IL_015a:            V_2=10;                                                     //stloc				V_2
	IL_015e:            /*goto IL_000d;*/goto IL_0163;                              //br				IL_000d
	IL_0163:                                                                        //ldarg.0
	IL_0164:            Temp_11=this->M_x1();                                       //call				System::Char Root::T_x180::M_x1()
	IL_0169:                                                                        //ldc.i4.s				60
	IL_016b:            if(Temp_11!=(System::Char)60)goto IL_0127;                  //bne.un.s				IL_0127
	IL_016d:                                                                        //ldc.i4				0x1
	IL_0172:            V_2=1;                                                      //stloc				V_2
	IL_0176:            /*goto IL_000d;*/goto IL_017b;                              //br				IL_000d
	IL_017b:            goto IL_009a;                                               //br				IL_009a
	IL_0180:            Temp_16=gcnew System::NotSupportedException();              //newobj				void System::NotSupportedException::.ctor()
	IL_0185:            throw Temp_16;                                              //throw
	IL_0186:            Temp_7=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_018b:            throw Temp_7;                                               //throw
	IL_018c:                                                                        //ldc.i4				0x3
	IL_0191:            V_2=3;                                                      //stloc				V_2
	IL_0195:            /*goto IL_000d;*/goto IL_019a;                              //br				IL_000d
	IL_019a:                                                                        //ldarg.0
	IL_019b:            Temp_4=this->F_x2;                                          //ldfld				System::Int32 Root::T_x180 F_x2
	IL_01a0:                                                                        //ldarg.0
	IL_01a1:            Temp_5=this->F_x1;                                          //ldfld				System::String^ Root::T_x180 F_x1
	IL_01a6:            Temp_6=Temp_5->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_01ab:            if(Temp_4<Temp_6)goto IL_0209;                              //blt				IL_0209
	IL_01b0:                                                                        //ldc.i4				0x15
	IL_01b5:            V_2=21;                                                     //stloc				V_2
	IL_01b9:            /*goto IL_000d;*/goto IL_01be;                              //br				IL_000d
	IL_01be:            goto IL_02e7;                                               //br				IL_02e7
	IL_01c3:            Temp_1=gcnew Root::T_x8();                                  //newobj				void Root::T_x8::.ctor()
	IL_01c8:            V_0=Temp_1;                                                 //stloc.0
	IL_01c9:                                                                        //ldloc.0
	IL_01ca:                                                                        //ldarg.0
	IL_01cb:            Temp_2=this->M_x5();                                        //call				System::String^ Root::T_x180::M_x5()
	IL_01d0:            V_0->M_x2(Temp_2);                                          //callvirt				void Root::T_x8::M_x2(System::String^)
	IL_01d5:                                                                        //ldarg.0
	IL_01d6:                                                                        //ldloc.0
	IL_01d7:            this->M_x1(V_0);                                            //call				void Root::T_x180::M_x1(Root::T_x8^)
	IL_01dc:                                                                        //ldarg.0
	IL_01dd:            Temp_3=this->M_x1();                                        //call				System::Char Root::T_x180::M_x1()
	IL_01e2:            V_1=Temp_3;                                                 //stloc.1
	IL_01e3:                                                                        //ldc.i4				0x0
	IL_01e8:            V_2=0;                                                      //stloc				V_2
	IL_01ec:            /*goto IL_000d;*/goto IL_01f1;                              //br				IL_000d
	IL_01f1:                                                                        //ldloc.1
	IL_01f2:                                                                        //ldc.i4.s				47
	IL_01f4:            if(V_1==(System::Char)47)goto IL_0292;                      //beq				IL_0292
	IL_01f9:                                                                        //ldc.i4				0xe
	IL_01fe:            V_2=14;                                                     //stloc				V_2
	IL_0202:            /*goto IL_000d;*/goto IL_0207;                              //br				IL_000d
	IL_0207:            goto IL_0269;                                               //br.s				IL_0269
	IL_0209:                                                                        //ldarg.0
	IL_020a:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_020f:                                                                        //ldc.i4				0x14
	IL_0214:            V_2=20;                                                     //stloc				V_2
	IL_0218:            /*goto IL_000d;*/goto IL_021d;                              //br				IL_000d
	IL_021d:                                                                        //ldarg.0
	IL_021e:            Temp_17=this->M_x1();                                       //call				System::Char Root::T_x180::M_x1()
	IL_0223:                                                                        //ldc.i4.s				60
	IL_0225:            if(Temp_17!=(System::Char)60)goto IL_018c;                  //bne.un				IL_018c
	IL_022a:                                                                        //ldc.i4				0xb
	IL_022f:            V_2=11;                                                     //stloc				V_2
	IL_0233:            /*goto IL_000d;*/goto IL_0238;                              //br				IL_000d
	IL_0238:            goto IL_00f0;                                               //br				IL_00f0
	IL_023d:                                                                        //ldc.i4				0x5
	IL_0242:            V_2=5;                                                      //stloc				V_2
	IL_0246:            /*goto IL_000d;*/goto IL_024b;                              //br				IL_000d
	IL_024b:                                                                        //ldloc.1
	IL_024c:                                                                        //ldc.i4.s				63
	IL_024e:            if(V_1==(System::Char)63)goto IL_0263;                      //beq.s				IL_0263
	IL_0250:                                                                        //ldc.i4				0x10
	IL_0255:            V_2=16;                                                     //stloc				V_2
	IL_0259:            /*goto IL_000d;*/goto IL_025e;                              //br				IL_000d
	IL_025e:            goto IL_00c6;                                               //br				IL_00c6
	IL_0263:            Temp_8=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0268:            throw Temp_8;                                               //throw
	IL_0269:                                                                        //ldc.i4				0x11
	IL_026e:            V_2=17;                                                     //stloc				V_2
	IL_0272:            /*goto IL_000d;*/goto IL_0277;                              //br				IL_000d
	IL_0277:                                                                        //ldloc.1
	IL_0278:                                                                        //ldc.i4.s				62
	IL_027a:            if(V_1!=(System::Char)62)goto IL_0146;                      //bne.un				IL_0146
	IL_027f:                                                                        //ldc.i4				0x9
	IL_0284:            V_2=9;                                                      //stloc				V_2
	IL_0288:            /*goto IL_000d;*/goto IL_028d;                              //br				IL_000d
	IL_028d:            goto IL_0148;                                               //br				IL_0148
	IL_0292:                                                                        //ldarg.0
	IL_0293:            Temp_0=this->M_x2();                                        //call				System::Char Root::T_x180::M_x2()
	IL_0298:                                                                        //pop
	IL_0299:                                                                        //ldarg.0
	IL_029a:            this->M_x8();                                               //call				void Root::T_x180::M_x8()
	IL_029f:                                                                        //ldc.i4				0x16
	IL_02a4:            V_2=22;                                                     //stloc				V_2
	IL_02a8:            /*goto IL_000d;*/goto IL_02ad;                              //br				IL_000d
	IL_02ad:                                                                        //ldarg.0
	IL_02ae:            Temp_19=this->M_x1();                                       //call				System::Char Root::T_x180::M_x1()
	IL_02b3:                                                                        //ldc.i4.s				62
	IL_02b5:            if(Temp_19==(System::Char)62)goto IL_00d9;                  //beq				IL_00d9
	IL_02ba:                                                                        //ldc.i4				0x4
	IL_02bf:            V_2=4;                                                      //stloc				V_2
	IL_02c3:            /*goto IL_000d;*/goto IL_02c8;                              //br				IL_000d
	IL_02c8:            goto IL_0186;                                               //br				IL_0186
	IL_02cd:                                                                        //ldarg.0
	IL_02ce:                                                                        //ldloc.0
	IL_02cf:            this->M_x2(V_0);                                            //call				void Root::T_x180::M_x2(Root::T_x8^)
	IL_02d4:                                                                        //ldc.i4				0x6
	IL_02d9:            V_2=6;                                                      //stloc				V_2
	IL_02dd:            /*goto IL_000d;*/goto IL_02e2;                              //br				IL_000d
	IL_02e2:            goto IL_007b;                                               //br				IL_007b
	IL_02e7:            Temp_18=gcnew System::NotSupportedException();              //newobj				void System::NotSupportedException::.ctor()
	IL_02ec:            throw Temp_18;                                              //throw

}
