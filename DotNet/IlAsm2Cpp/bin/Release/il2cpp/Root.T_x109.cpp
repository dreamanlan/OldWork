#include "global_xref.h"

inline Root::T_x109::T_x109()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0007:            this->F_x2=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_000c:                                                                        //ldarg.0
	IL_000d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x109::M_x1()
//Reflector::IConfiguration^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x109::T_x1^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0053;case 1:goto IL_0082;case 2:goto IL_0044;case 3:goto IL_0037;};//switch				(IL_0053,IL_0082,IL_0044,IL_0037)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_0021:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0026:                                                                        //ldc.i4.1
	IL_0027:                                                                        //sub
	IL_0028:            V_0=(Temp_1 - 1);                                           //stloc.0
	IL_0029:            goto IL_002c;                                               //br.s				IL_002c
	IL_002b:                                                                        //break
	IL_002c:                                                                        //ldc.i4				0x3
	IL_0031:            V_2=3;                                                      //stloc				V_2
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:            goto IL_0039;                                               //br.s				IL_0039
	IL_0039:                                                                        //ldc.i4				0x2
	IL_003e:            V_2=2;                                                      //stloc				V_2
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //ldc.i4.0
	IL_0046:            if(V_0>=0)goto IL_0055;                                     //bge.s				IL_0055
	IL_0048:                                                                        //ldc.i4				0x0
	IL_004d:            V_2=0;                                                      //stloc				V_2
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_0084;                                               //br.s				IL_0084
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_2=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_005b:                                                                        //ldloc.0
	IL_005c:            Temp_3=Temp_2[V_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0061:                                                                        //castclass				Root::T_x109::T_x1
	IL_0066:            V_1=safe_cast<Root::T_x109::T_x1^>(Temp_3);                 //stloc.1
	IL_0067:                                                                        //ldarg.0
	IL_0068:                                                                        //ldloc.1
	IL_0069:            Temp_4=V_1->F_x1;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_006e:            this->M_x1(Temp_4);                                         //call				void Root::T_x109::M_x1(System::String^)
	IL_0073:                                                                        //ldloc.0
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:                                                                        //sub
	IL_0076:            V_0=(V_0 - 1);                                              //stloc.0
	IL_0077:                                                                        //ldc.i4				0x1
	IL_007c:            V_2=1;                                                      //stloc				V_2
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_0039;                                               //br.s				IL_0039
	IL_0084:            return;                                                     //ret

}
inline void Root::T_x109::M_x1(System::ComponentModel::PropertyChangedEventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x109 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x109 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::ComponentModel::PropertyChangedEventHandler::Invoke(System::Object^,System::ComponentModel::PropertyChangedEventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x109::M_x1(System::IO::StreamReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Int32 Temp_3 = 0;
	System::IO::Stream^ Temp_4 = nullptr;
	System::Int64 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::String^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::IO::Stream^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::Globalization::CultureInfo^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::String^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int64 V_1 = 0;
	System::String^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_8=4;                                                      //stloc				V_8
	IL_0009:            goto IL_0064;                                               //br.s				IL_0064
	IL_000b:                                                                        //ldloc				V_7
	IL_000f:            switch(V_7){case 0:goto IL_01f9;case 1:goto IL_02af;case 2:goto IL_01d4;case 3:goto IL_01a7;case 4:goto IL_00bb;case 5:goto IL_0268;case 6:goto IL_020c;case 7:goto IL_0137;case 8:goto IL_0295;case 9:goto IL_01c1;case 10:goto IL_0220;case 11:goto IL_0082;case 12:goto IL_009e;case 13:goto IL_0194;case 14:goto IL_0240;case 15:goto IL_02d8;case 16:goto IL_0120;case 17:goto IL_016e;case 18:goto IL_0147;case 19:goto IL_010a;};//switch				(IL_01f9,IL_02af,IL_01d4,IL_01a7,IL_00bb,IL_0268,IL_020c,IL_0137,IL_0295,IL_01c1,IL_0220,IL_0082,IL_009e,IL_0194,IL_0240,IL_02d8,IL_0120,IL_016e,IL_0147,IL_010a)
	IL_0064:                                                                        //ldc.i4.5
	IL_0065:                                                                        //dup
	IL_0066:                                                                        //dup
	IL_0067:                                                                        //ldc.i4.6
	IL_0068:                                                                        //add
	IL_0069:                                                                        //bgt				IL_0065
	IL_006e:                                                                        //pop
	IL_006f:                                                                        //ldarg.0
	IL_0070:            this->M_x1();                                               //call				void Root::T_x109::M_x1()
	IL_0075:                                                                        //ldc.i4.0
	IL_0076:            V_0=0;                                                      //stloc.0
	IL_0077:                                                                        //ldc.i4				0xb
	IL_007c:            V_7=11;                                                     //stloc				V_7
	IL_0080:            /*goto IL_000b;*/goto IL_0082;                              //br.s				IL_000b
	IL_0082:            goto IL_0199;                                               //br				IL_0199
	IL_0087:                                                                        //ldarg.0
	IL_0088:                                                                        //ldloc.3
	IL_0089:                                                                        //ldloc.s				V_4
	IL_008b:            this->M_x1(V_3,V_4);                                        //call				void Root::T_x109::M_x1(System::String^,System::String^)
	IL_0090:                                                                        //ldc.i4				0xc
	IL_0095:            V_7=12;                                                     //stloc				V_7
	IL_0099:            /*goto IL_000b;*/goto IL_009e;                              //br				IL_000b
	IL_009e:            goto IL_0125;                                               //br				IL_0125
	IL_00a3:                                                                        //ldloc.s				V_4
	IL_00a5:                                                                        //ldc.i4.1
	IL_00a6:            Temp_0=V_4->Substring(safe_cast<System::Int32>(1));         //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_00ab:            V_4=Temp_0;                                                 //stloc.s				V_4
	IL_00ad:                                                                        //ldc.i4				0x4
	IL_00b2:            V_7=4;                                                      //stloc				V_7
	IL_00b6:            /*goto IL_000b;*/goto IL_00bb;                              //br				IL_000b
	IL_00bb:            goto IL_0232;                                               //br				IL_0232
	IL_00c0:                                                                        //ldloca.s				V_0
	IL_00c2:            Temp_16=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00c7:            Temp_17=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_16));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00cc:            V_3=Temp_17;                                                //stloc.3
	IL_00cd:                                                                        //ldloc.2
	IL_00ce:            V_4=V_2;                                                    //stloc.s				V_4
	IL_00d0:                                                                        //ldloc.2
	IL_00d1:                                                                        //ldstr				L"\x1F21"
	IL_00d6:                                                                        //ldloc				V_8
	IL_00da:            Temp_18=a(L"\x1F21",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00df:            Temp_19=V_2->IndexOf(Temp_18);                              //callvirt				System::Int32 System::String::IndexOf(System::String^)
	IL_00e4:            V_5=Temp_19;                                                //stloc.s				V_5
	IL_00e6:                                                                        //ldloc.2
	IL_00e7:                                                                        //ldstr				"!"
	IL_00ec:                                                                        //ldloc				V_8
	IL_00f0:            Temp_20=a("!",V_8);                                         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f5:            Temp_21=V_2->IndexOf(Temp_20);                              //callvirt				System::Int32 System::String::IndexOf(System::String^)
	IL_00fa:            V_6=Temp_21;                                                //stloc.s				V_6
	IL_00fc:                                                                        //ldc.i4				0x13
	IL_0101:            V_7=19;                                                     //stloc				V_7
	IL_0105:            /*goto IL_000b;*/goto IL_010a;                              //br				IL_000b
	IL_010a:                                                                        //ldloc.s				V_5
	IL_010c:                                                                        //ldc.i4.m1
	IL_010d:            if(V_5==-1)goto IL_01c6;                                    //beq				IL_01c6
	IL_0112:                                                                        //ldc.i4				0x10
	IL_0117:            V_7=16;                                                     //stloc				V_7
	IL_011b:            /*goto IL_000b;*/goto IL_0120;                              //br				IL_000b
	IL_0120:            goto IL_01fe;                                               //br				IL_01fe
	IL_0125:                                                                        //ldloc.0
	IL_0126:                                                                        //ldc.i4.1
	IL_0127:                                                                        //add
	IL_0128:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0129:                                                                        //ldc.i4				0x7
	IL_012e:            V_7=7;                                                      //stloc				V_7
	IL_0132:            /*goto IL_000b;*/goto IL_0137;                              //br				IL_000b
	IL_0137:            goto IL_0199;                                               //br.s				IL_0199
	IL_0139:                                                                        //ldc.i4				0x12
	IL_013e:            V_7=18;                                                     //stloc				V_7
	IL_0142:            /*goto IL_000b;*/goto IL_0147;                              //br				IL_000b
	IL_0147:                                                                        //ldloc.2
	IL_0148:                                                                        //ldstr				L"\x7921"
	IL_014d:                                                                        //ldloc				V_8
	IL_0151:            Temp_22=a(L"\x7921",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0156:            Temp_23=V_2->StartsWith(Temp_22);                           //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_015b:            if(Temp_23)goto IL_0225;                                    //brtrue				IL_0225
	IL_0160:                                                                        //ldc.i4				0x11
	IL_0165:            V_7=17;                                                     //stloc				V_7
	IL_0169:            /*goto IL_000b;*/goto IL_016e;                              //br				IL_000b
	IL_016e:            goto IL_00c0;                                               //br				IL_00c0
	IL_0173:                                                                        //ldloc.s				V_4
	IL_0175:                                                                        //ldc.i4.0
	IL_0176:                                                                        //ldloc.s				V_4
	IL_0178:            Temp_8=V_4->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_017d:                                                                        //ldc.i4.1
	IL_017e:                                                                        //sub
	IL_017f:            Temp_9=V_4->Substring(safe_cast<System::Int32>(0),(Temp_8 - 1));//callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0184:            V_4=Temp_9;                                                 //stloc.s				V_4
	IL_0186:                                                                        //ldc.i4				0xd
	IL_018b:            V_7=13;                                                     //stloc				V_7
	IL_018f:            /*goto IL_000b;*/goto IL_0194;                              //br				IL_000b
	IL_0194:            goto IL_0087;                                               //br				IL_0087
	IL_0199:                                                                        //ldc.i4				0x3
	IL_019e:            V_7=3;                                                      //stloc				V_7
	IL_01a2:            /*goto IL_000b;*/goto IL_01a7;                              //br				IL_000b
	IL_01a7:                                                                        //ldarg.1
	IL_01a8:            Temp_3=A_0->Peek();                                         //callvirt				System::Int32 System::IO::TextReader::Peek()
	IL_01ad:                                                                        //ldc.i4.m1
	IL_01ae:            if(Temp_3!=-1)goto IL_026d;                                 //bne.un				IL_026d
	IL_01b3:                                                                        //ldc.i4				0x9
	IL_01b8:            V_7=9;                                                      //stloc				V_7
	IL_01bc:            /*goto IL_000b;*/goto IL_01c1;                              //br				IL_000b
	IL_01c1:            goto IL_02dd;                                               //br				IL_02dd
	IL_01c6:                                                                        //ldc.i4				0x2
	IL_01cb:            V_7=2;                                                      //stloc				V_7
	IL_01cf:            /*goto IL_000b;*/goto IL_01d4;                              //br				IL_000b
	IL_01d4:                                                                        //ldloc.s				V_4
	IL_01d6:                                                                        //ldstr				"!"
	IL_01db:                                                                        //ldloc				V_8
	IL_01df:            Temp_1=a("!",V_8);                                          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e4:            Temp_2=V_4->StartsWith(Temp_1);                             //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_01e9:            if(!Temp_2)goto IL_0232;                                    //brfalse.s				IL_0232
	IL_01eb:                                                                        //ldc.i4				0x0
	IL_01f0:            V_7=0;                                                      //stloc				V_7
	IL_01f4:            /*goto IL_000b;*/goto IL_01f9;                              //br				IL_000b
	IL_01f9:            goto IL_00a3;                                               //br				IL_00a3
	IL_01fe:                                                                        //ldc.i4				0x6
	IL_0203:            V_7=6;                                                      //stloc				V_7
	IL_0207:            /*goto IL_000b;*/goto IL_020c;                              //br				IL_000b
	IL_020c:                                                                        //ldloc.s				V_5
	IL_020e:                                                                        //ldloc.s				V_6
	IL_0210:            if(V_5>=V_6)goto IL_01c6;                                   //bge.s				IL_01c6
	IL_0212:                                                                        //ldc.i4				0xa
	IL_0217:            V_7=10;                                                     //stloc				V_7
	IL_021b:            /*goto IL_000b;*/goto IL_0220;                              //br				IL_000b
	IL_0220:            goto IL_02b4;                                               //br				IL_02b4
	IL_0225:                                                                        //ldarg.1
	IL_0226:            Temp_11=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::StreamReader::get_BaseStream()
	IL_022b:                                                                        //ldloc.1
	IL_022c:            Temp_11->Position=V_1;                                      //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0231:            return;                                                     //ret
	IL_0232:                                                                        //ldc.i4				0xe
	IL_0237:            V_7=14;                                                     //stloc				V_7
	IL_023b:            /*goto IL_000b;*/goto IL_0240;                              //br				IL_000b
	IL_0240:                                                                        //ldloc.s				V_4
	IL_0242:                                                                        //ldstr				"!"
	IL_0247:                                                                        //ldloc				V_8
	IL_024b:            Temp_14=a("!",V_8);                                         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0250:            Temp_15=V_4->EndsWith(Temp_14);                             //callvirt				System::Boolean System::String::EndsWith(System::String^)
	IL_0255:            if(!Temp_15)goto IL_0087;                                   //brfalse				IL_0087
	IL_025a:                                                                        //ldc.i4				0x5
	IL_025f:            V_7=5;                                                      //stloc				V_7
	IL_0263:            /*goto IL_000b;*/goto IL_0268;                              //br				IL_000b
	IL_0268:            goto IL_0173;                                               //br				IL_0173
	IL_026d:                                                                        //ldarg.1
	IL_026e:            Temp_4=A_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::StreamReader::get_BaseStream()
	IL_0273:            Temp_5=Temp_4->Position;                                    //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0278:            V_1=Temp_5;                                                 //stloc.1
	IL_0279:                                                                        //ldarg.1
	IL_027a:            Temp_6=A_0->ReadLine();                                     //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_027f:            V_2=Temp_6;                                                 //stloc.2
	IL_0280:                                                                        //ldloc.2
	IL_0281:            Temp_7=V_2->Trim();                                         //callvirt				System::String^ System::String::Trim()
	IL_0286:            V_2=Temp_7;                                                 //stloc.2
	IL_0287:                                                                        //ldc.i4				0x8
	IL_028c:            V_7=8;                                                      //stloc				V_7
	IL_0290:            /*goto IL_000b;*/goto IL_0295;                              //br				IL_000b
	IL_0295:                                                                        //ldloc.2
	IL_0296:            Temp_10=V_2->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_029b:                                                                        //ldc.i4.0
	IL_029c:            if(Temp_10<=0)goto IL_0225;                                 //ble				IL_0225
	IL_02a1:                                                                        //ldc.i4				0x1
	IL_02a6:            V_7=1;                                                      //stloc				V_7
	IL_02aa:            /*goto IL_000b;*/goto IL_02af;                              //br				IL_000b
	IL_02af:            goto IL_0139;                                               //br				IL_0139
	IL_02b4:                                                                        //ldloc.2
	IL_02b5:                                                                        //ldc.i4.0
	IL_02b6:                                                                        //ldloc.s				V_5
	IL_02b8:            Temp_12=V_2->Substring(safe_cast<System::Int32>(0),V_5);    //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_02bd:            V_3=Temp_12;                                                //stloc.3
	IL_02be:                                                                        //ldloc.2
	IL_02bf:                                                                        //ldloc.s				V_5
	IL_02c1:                                                                        //ldc.i4.1
	IL_02c2:                                                                        //add
	IL_02c3:            Temp_13=V_2->Substring((V_5 + 1));                          //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_02c8:            V_4=Temp_13;                                                //stloc.s				V_4
	IL_02ca:                                                                        //ldc.i4				0xf
	IL_02cf:            V_7=15;                                                     //stloc				V_7
	IL_02d3:            /*goto IL_000b;*/goto IL_02d8;                              //br				IL_000b
	IL_02d8:            goto IL_01c6;                                               //br				IL_01c6
	IL_02dd:            return;                                                     //ret

}
inline void Root::T_x109::M_x1(System::IO::StreamWriter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Collections::ArrayList^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Collections::ArrayList^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Collections::ArrayList^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Collections::ArrayList^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	//local variables.
	System::Boolean V_0 = false;
	System::Int32 V_1 = 0;
	Root::T_x109::T_x1^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	Root::T_x109::T_x1^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_6=12;                                                     //stloc				V_6
	IL_0009:            goto IL_004c;                                               //br.s				IL_004c
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_00c1;case 1:goto IL_0211;case 2:goto IL_01cb;case 3:goto IL_009a;case 4:goto IL_0188;case 5:goto IL_0162;case 6:goto IL_0113;case 7:goto IL_01db;case 8:goto IL_00ac;case 9:goto IL_0138;case 10:goto IL_0066;case 11:goto IL_01af;case 12:goto IL_01fa;case 13:goto IL_019c;};//switch				(IL_00c1,IL_0211,IL_01cb,IL_009a,IL_0188,IL_0162,IL_0113,IL_01db,IL_00ac,IL_0138,IL_0066,IL_01af,IL_01fa,IL_019c)
	IL_004c:                                                                        //ldc.i4.5
	IL_004d:                                                                        //dup
	IL_004e:                                                                        //dup
	IL_004f:                                                                        //ldc.i4.6
	IL_0050:                                                                        //sub
	IL_0051:                                                                        //blt				IL_004d
	IL_0056:                                                                        //pop
	IL_0057:                                                                        //ldc.i4.1
	IL_0058:            V_0=true;                                                   //stloc.0
	IL_0059:                                                                        //ldc.i4.0
	IL_005a:            V_1=0;                                                      //stloc.1
	IL_005b:                                                                        //ldc.i4				0xa
	IL_0060:            V_5=10;                                                     //stloc				V_5
	IL_0064:            /*goto IL_000b;*/goto IL_0066;                              //br.s				IL_000b
	IL_0066:            goto IL_01cd;                                               //br				IL_01cd
	IL_006b:                                                                        //ldarg.1
	IL_006c:                                                                        //ldloc.s				V_4
	IL_006e:            Temp_15=V_4->F_x1;                                          //ldfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_0073:            A_0->Write(Temp_15);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0078:                                                                        //ldarg.1
	IL_0079:                                                                        //ldstr				L"\x1729"
	IL_007e:                                                                        //ldloc				V_6
	IL_0082:            Temp_16=a(L"\x1729",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0087:            A_0->Write(Temp_16);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_008c:                                                                        //ldc.i4				0x3
	IL_0091:            V_5=3;                                                      //stloc				V_5
	IL_0095:            /*goto IL_000b;*/goto IL_009a;                              //br				IL_000b
	IL_009a:            goto IL_00c6;                                               //br.s				IL_00c6
	IL_009c:                                                                        //ldc.i4.0
	IL_009d:            V_3=0;                                                      //stloc.3
	IL_009e:                                                                        //ldc.i4				0x8
	IL_00a3:            V_5=8;                                                      //stloc				V_5
	IL_00a7:            /*goto IL_000b;*/goto IL_00ac;                              //br				IL_000b
	IL_00ac:            goto IL_01a1;                                               //br				IL_01a1
	IL_00b1:                                                                        //ldc.i4.0
	IL_00b2:            V_0=false;                                                  //stloc.0
	IL_00b3:                                                                        //ldc.i4				0x0
	IL_00b8:            V_5=0;                                                      //stloc				V_5
	IL_00bc:            /*goto IL_000b;*/goto IL_00c1;                              //br				IL_000b
	IL_00c1:            goto IL_01ff;                                               //br				IL_01ff
	IL_00c6:                                                                        //ldarg.1
	IL_00c7:                                                                        //ldstr				L"\x0829"
	IL_00cc:                                                                        //ldloc				V_6
	IL_00d0:            Temp_0=a(L"\x0829",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d5:            A_0->Write(Temp_0);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00da:                                                                        //ldarg.1
	IL_00db:                                                                        //ldloc.s				V_4
	IL_00dd:            Temp_1=V_4->F_x2;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x2
	IL_00e2:            A_0->Write(Temp_1);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e7:                                                                        //ldarg.1
	IL_00e8:                                                                        //ldstr				L"\x0829"
	IL_00ed:                                                                        //ldloc				V_6
	IL_00f1:            Temp_2=a(L"\x0829",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f6:            A_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00fb:                                                                        //ldarg.1
	IL_00fc:            A_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0101:                                                                        //ldloc.3
	IL_0102:                                                                        //ldc.i4.1
	IL_0103:                                                                        //add
	IL_0104:            V_3=(V_3 + 1);                                              //stloc.3
	IL_0105:                                                                        //ldc.i4				0x6
	IL_010a:            V_5=6;                                                      //stloc				V_5
	IL_010e:            /*goto IL_000b;*/goto IL_0113;                              //br				IL_000b
	IL_0113:            goto IL_01a1;                                               //br				IL_01a1
	IL_0118:                                                                        //ldarg.0
	IL_0119:            Temp_5=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_011e:                                                                        //ldloc.1
	IL_011f:            Temp_6=Temp_5[V_1];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0124:                                                                        //castclass				Root::T_x109::T_x1
	IL_0129:            V_2=safe_cast<Root::T_x109::T_x1^>(Temp_6);                 //stloc.2
	IL_012a:                                                                        //ldc.i4				0x9
	IL_012f:            V_5=9;                                                      //stloc				V_5
	IL_0133:            /*goto IL_000b;*/goto IL_0138;                              //br				IL_000b
	IL_0138:                                                                        //ldloca.s				V_1
	IL_013a:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_013f:            Temp_8=V_1.ToString(safe_cast<System::IFormatProvider^>(Temp_7));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0144:                                                                        //ldloc.2
	IL_0145:            Temp_9=V_2->F_x1;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_014a:            Temp_10=(Temp_8 != Temp_9);                                 //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_014f:            if(!Temp_10)goto IL_01ff;                                   //brfalse				IL_01ff
	IL_0154:                                                                        //ldc.i4				0x5
	IL_0159:            V_5=5;                                                      //stloc				V_5
	IL_015d:            /*goto IL_000b;*/goto IL_0162;                              //br				IL_000b
	IL_0162:            goto IL_00b1;                                               //br				IL_00b1
	IL_0167:                                                                        //ldarg.0
	IL_0168:            Temp_13=this->F_x2;                                         //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_016d:                                                                        //ldloc.3
	IL_016e:            Temp_14=Temp_13[V_3];                                       //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0173:                                                                        //castclass				Root::T_x109::T_x1
	IL_0178:            V_4=safe_cast<Root::T_x109::T_x1^>(Temp_14);                //stloc.s				V_4
	IL_017a:                                                                        //ldc.i4				0x4
	IL_017f:            V_5=4;                                                      //stloc				V_5
	IL_0183:            /*goto IL_000b;*/goto IL_0188;                              //br				IL_000b
	IL_0188:                                                                        //ldloc.0
	IL_0189:            if(V_0)goto IL_00c6;                                        //brtrue				IL_00c6
	IL_018e:                                                                        //ldc.i4				0xd
	IL_0193:            V_5=13;                                                     //stloc				V_5
	IL_0197:            /*goto IL_000b;*/goto IL_019c;                              //br				IL_000b
	IL_019c:            goto IL_006b;                                               //br				IL_006b
	IL_01a1:                                                                        //ldc.i4				0xb
	IL_01a6:            V_5=11;                                                     //stloc				V_5
	IL_01aa:            /*goto IL_000b;*/goto IL_01af;                              //br				IL_000b
	IL_01af:                                                                        //ldloc.3
	IL_01b0:                                                                        //ldarg.0
	IL_01b1:            Temp_11=this->F_x2;                                         //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_01b6:            Temp_12=Temp_11->Count;                                     //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_01bb:            if(V_3<Temp_12)goto IL_0167;                                //blt.s				IL_0167
	IL_01bd:                                                                        //ldc.i4				0x2
	IL_01c2:            V_5=2;                                                      //stloc				V_5
	IL_01c6:            /*goto IL_000b;*/goto IL_01cb;                              //br				IL_000b
	IL_01cb:            goto IL_0213;                                               //br.s				IL_0213
	IL_01cd:                                                                        //ldc.i4				0x7
	IL_01d2:            V_5=7;                                                      //stloc				V_5
	IL_01d6:            /*goto IL_000b;*/goto IL_01db;                              //br				IL_000b
	IL_01db:                                                                        //ldloc.1
	IL_01dc:                                                                        //ldarg.0
	IL_01dd:            Temp_3=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_01e2:            Temp_4=Temp_3->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_01e7:            if(V_1<Temp_4)goto IL_0118;                                 //blt				IL_0118
	IL_01ec:                                                                        //ldc.i4				0xc
	IL_01f1:            V_5=12;                                                     //stloc				V_5
	IL_01f5:            /*goto IL_000b;*/goto IL_01fa;                              //br				IL_000b
	IL_01fa:            goto IL_009c;                                               //br				IL_009c
	IL_01ff:                                                                        //ldloc.1
	IL_0200:                                                                        //ldc.i4.1
	IL_0201:                                                                        //add
	IL_0202:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0203:                                                                        //ldc.i4				0x1
	IL_0208:            V_5=1;                                                      //stloc				V_5
	IL_020c:            /*goto IL_000b;*/goto IL_0211;                              //br				IL_000b
	IL_0211:            goto IL_01cd;                                               //br.s				IL_01cd
	IL_0213:            return;                                                     //ret

}
inline void Root::T_x109::M_x1(System::String^ A_0)
//Reflector::IConfiguration^::ClearProperty by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Collections::ArrayList^ Temp_4 = nullptr;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x109::T_x1^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_00d9;case 1:goto IL_0076;case 2:goto IL_00c7;case 3:goto IL_0040;case 4:goto IL_0051;case 5:goto IL_00b4;case 6:goto IL_0098;};//switch				(IL_00d9,IL_0076,IL_00c7,IL_0040,IL_0051,IL_00b4,IL_0098)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_002d:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0032:                                                                        //ldc.i4.1
	IL_0033:                                                                        //sub
	IL_0034:            V_0=(Temp_1 - 1);                                           //stloc.0
	IL_0035:                                                                        //ldc.i4				0x3
	IL_003a:            V_2=3;                                                      //stloc				V_2
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_0042:                                                                        //ldloc.0
	IL_0043:                                                                        //ldc.i4.1
	IL_0044:                                                                        //sub
	IL_0045:            V_0=(V_0 - 1);                                              //stloc.0
	IL_0046:                                                                        //ldc.i4				0x4
	IL_004b:            V_2=4;                                                      //stloc				V_2
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_0053:                                                                        //ldarg.0
	IL_0054:            Temp_4=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_4->RemoveAt(V_0);                                      //callvirt				void System::Collections::ArrayList::RemoveAt(System::Int32)
	IL_005f:                                                                        //ldarg.0
	IL_0060:                                                                        //ldarg.1
	IL_0061:            Temp_5=gcnew System::ComponentModel::PropertyChangedEventArgs(A_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_0066:            this->M_x1(Temp_5);                                         //callvirt				void Root::T_x109::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_006b:                                                                        //ldc.i4				0x1
	IL_0070:            V_2=1;                                                      //stloc				V_2
	IL_0074:            /*goto IL_0002;*/goto IL_0076;                              //br.s				IL_0002
	IL_0076:            goto IL_0042;                                               //br.s				IL_0042
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_2=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_007e:                                                                        //ldloc.0
	IL_007f:            Temp_3=Temp_2[V_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0084:                                                                        //castclass				Root::T_x109::T_x1
	IL_0089:            V_1=safe_cast<Root::T_x109::T_x1^>(Temp_3);                 //stloc.1
	IL_008a:                                                                        //ldc.i4				0x6
	IL_008f:            V_2=6;                                                      //stloc				V_2
	IL_0093:            /*goto IL_0002;*/goto IL_0098;                              //br				IL_0002
	IL_0098:                                                                        //ldarg.1
	IL_0099:                                                                        //ldloc.1
	IL_009a:            Temp_6=V_1->F_x1;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_009f:            Temp_7=(A_0 == Temp_6);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00a4:            if(!Temp_7)goto IL_0042;                                    //brfalse.s				IL_0042
	IL_00a6:                                                                        //ldc.i4				0x5
	IL_00ab:            V_2=5;                                                      //stloc				V_2
	IL_00af:            /*goto IL_0002;*/goto IL_00b4;                              //br				IL_0002
	IL_00b4:            goto IL_0053;                                               //br.s				IL_0053
	IL_00b6:            goto IL_00b9;                                               //br.s				IL_00b9
	IL_00b8:                                                                        //break
	IL_00b9:                                                                        //ldc.i4				0x2
	IL_00be:            V_2=2;                                                      //stloc				V_2
	IL_00c2:            /*goto IL_0002;*/goto IL_00c7;                              //br				IL_0002
	IL_00c7:                                                                        //ldloc.0
	IL_00c8:                                                                        //ldc.i4.0
	IL_00c9:            if(V_0>=0)goto IL_0078;                                     //bge.s				IL_0078
	IL_00cb:                                                                        //ldc.i4				0x0
	IL_00d0:            V_2=0;                                                      //stloc				V_2
	IL_00d4:            /*goto IL_0002;*/goto IL_00d9;                              //br				IL_0002
	IL_00d9:            goto IL_00db;                                               //br.s				IL_00db
	IL_00db:            return;                                                     //ret

}
inline void Root::T_x109::M_x1(System::String^ A_0,System::String^ A_1)
//Reflector::IConfiguration^::SetProperty by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldarg.2
	IL_0003:                                                                        //ldnull
	IL_0004:            this->M_x1(A_0,A_1,safe_cast<System::String^>(nullptr));    //call				void Root::T_x109::M_x1(System::String^,System::String^,System::String^)
	IL_0009:            return;                                                     //ret

}
inline void Root::T_x109::M_x1(System::String^ A_0,System::String^ A_1,System::String^ A_2)
//Reflector::IConfiguration^::SetProperty by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Collections::ArrayList^ Temp_5 = nullptr;
	Root::T_x109::T_x1^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_8 = nullptr;
	System::Collections::ArrayList^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Collections::ArrayList^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x109::T_x1^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_2=10;                                                     //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0042;                                               //br.s				IL_0042
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0128;case 1:goto IL_0103;case 2:goto IL_0089;case 3:goto IL_00e4;case 4:goto IL_00b5;case 5:goto IL_00d4;case 6:goto IL_0144;case 7:goto IL_0077;case 8:goto IL_0099;case 9:goto IL_0056;case 10:goto IL_000b;};//switch				(IL_0128,IL_0103,IL_0089,IL_00e4,IL_00b5,IL_00d4,IL_0144,IL_0077,IL_0099,IL_0056,IL_000b)
	IL_0042:                                                                        //ldarg.2
	IL_0043:                                                                        //ldarg.3
	IL_0044:            Temp_13=(A_1 == A_2);                                       //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0049:            if(!Temp_13)goto IL_007c;                                   //brfalse.s				IL_007c
	IL_004b:                                                                        //ldc.i4				0x9
	IL_0050:            V_2=9;                                                      //stloc				V_2
	IL_0054:            /*goto IL_000d;*/goto IL_0056;                              //br.s				IL_000d
	IL_0056:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0058:            return;                                                     //ret
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldarg.2
	IL_005b:            V_1->F_x2=A_1;                                              //stfld				System::String^ Root::T_x109::T_x1 F_x2
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //ldarg.1
	IL_0062:            Temp_2=gcnew System::ComponentModel::PropertyChangedEventArgs(A_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_0067:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x109::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_006c:                                                                        //ldc.i4				0x7
	IL_0071:            V_2=7;                                                      //stloc				V_2
	IL_0075:            /*goto IL_000d;*/goto IL_0077;                              //br.s				IL_000d
	IL_0077:            goto IL_007a;                                               //br.s				IL_007a
	IL_0079:                                                                        //break
	IL_007a:            goto IL_0058;                                               //br.s				IL_0058
	IL_007c:                                                                        //ldc.i4.0
	IL_007d:            V_0=0;                                                      //stloc.0
	IL_007e:                                                                        //ldc.i4				0x2
	IL_0083:            V_2=2;                                                      //stloc				V_2
	IL_0087:            /*goto IL_000d;*/goto IL_0089;                              //br.s				IL_000d
	IL_0089:            goto IL_008b;                                               //br.s				IL_008b
	IL_008b:                                                                        //ldc.i4				0x8
	IL_0090:            V_2=8;                                                      //stloc				V_2
	IL_0094:            /*goto IL_000d;*/goto IL_0099;                              //br				IL_000d
	IL_0099:                                                                        //ldloc.0
	IL_009a:                                                                        //ldarg.0
	IL_009b:            Temp_9=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_00a0:            Temp_10=Temp_9->Count;                                      //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00a5:            if(V_0<Temp_10)goto IL_0108;                                //blt.s				IL_0108
	IL_00a7:                                                                        //ldc.i4				0x4
	IL_00ac:            V_2=4;                                                      //stloc				V_2
	IL_00b0:            /*goto IL_000d;*/goto IL_00b5;                              //br				IL_000d
	IL_00b5:            goto IL_0146;                                               //br				IL_0146
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:                                                                        //ldarg.1
	IL_00bc:            this->M_x1(A_0);                                            //call				void Root::T_x109::M_x1(System::String^)
	IL_00c1:            return;                                                     //ret
	IL_00c2:                                                                        //ldloc.0
	IL_00c3:                                                                        //ldc.i4.1
	IL_00c4:                                                                        //add
	IL_00c5:            V_0=(V_0 + 1);                                              //stloc.0
	IL_00c6:                                                                        //ldc.i4				0x5
	IL_00cb:            V_2=5;                                                      //stloc				V_2
	IL_00cf:            /*goto IL_000d;*/goto IL_00d4;                              //br				IL_000d
	IL_00d4:            goto IL_008b;                                               //br.s				IL_008b
	IL_00d6:                                                                        //ldc.i4				0x3
	IL_00db:            V_2=3;                                                      //stloc				V_2
	IL_00df:            /*goto IL_000d;*/goto IL_00e4;                              //br				IL_000d
	IL_00e4:                                                                        //ldarg.2
	IL_00e5:                                                                        //ldloc.1
	IL_00e6:            Temp_3=V_1->F_x2;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x2
	IL_00eb:            Temp_4=(A_1 != Temp_3);                                     //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_00f0:            if(!Temp_4)goto IL_0058;                                    //brfalse				IL_0058
	IL_00f5:                                                                        //ldc.i4				0x1
	IL_00fa:            V_2=1;                                                      //stloc				V_2
	IL_00fe:            /*goto IL_000d;*/goto IL_0103;                              //br				IL_000d
	IL_0103:            goto IL_0059;                                               //br				IL_0059
	IL_0108:                                                                        //ldarg.0
	IL_0109:            Temp_11=this->F_x2;                                         //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_010e:                                                                        //ldloc.0
	IL_010f:            Temp_12=Temp_11[V_0];                                       //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0114:                                                                        //castclass				Root::T_x109::T_x1
	IL_0119:            V_1=safe_cast<Root::T_x109::T_x1^>(Temp_12);                //stloc.1
	IL_011a:                                                                        //ldc.i4				0x0
	IL_011f:            V_2=0;                                                      //stloc				V_2
	IL_0123:            /*goto IL_000d;*/goto IL_0128;                              //br				IL_000d
	IL_0128:                                                                        //ldarg.1
	IL_0129:                                                                        //ldloc.1
	IL_012a:            Temp_0=V_1->F_x1;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_012f:            Temp_1=(A_0 == Temp_0);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0134:            if(!Temp_1)goto IL_00c2;                                    //brfalse.s				IL_00c2
	IL_0136:                                                                        //ldc.i4				0x6
	IL_013b:            V_2=6;                                                      //stloc				V_2
	IL_013f:            /*goto IL_000d;*/goto IL_0144;                              //br				IL_000d
	IL_0144:            goto IL_00d6;                                               //br.s				IL_00d6
	IL_0146:                                                                        //ldarg.0
	IL_0147:            Temp_5=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_014c:                                                                        //ldarg.1
	IL_014d:                                                                        //ldarg.2
	IL_014e:            Temp_6=gcnew Root::T_x109::T_x1(A_0,A_1);                   //newobj				void Root::T_x109::T_x1::.ctor(System::String^,System::String^)
	IL_0153:            Temp_7=Temp_5->Add(safe_cast<System::Object^>(Temp_6));     //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0158:                                                                        //pop
	IL_0159:                                                                        //ldarg.0
	IL_015a:                                                                        //ldarg.1
	IL_015b:            Temp_8=gcnew System::ComponentModel::PropertyChangedEventArgs(A_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_0160:            this->M_x1(Temp_8);                                         //callvirt				void Root::T_x109::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_0165:            return;                                                     //ret

}
inline System::String^ Root::T_x109::M_x12(System::String^ A_0)
//Reflector::IConfiguration^::GetProperty by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldnull
	IL_0003:            Temp_0=this->M_x2(A_0,safe_cast<System::String^>(nullptr)); //call				System::String^ Root::T_x109::M_x2(System::String^,System::String^)
	IL_0008:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x109::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:                                                                        //ldc.i4.0
	IL_000c:                                                                        //ceq
	IL_000e:            return (Temp_1 == 0);                                       //ret

}
inline System::Boolean Root::T_x109::M_x2(System::String^ A_0)
//Reflector::IConfiguration^::HasProperty by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x109::T_x1^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_008b;case 1:goto IL_00b2;case 2:goto IL_0062;case 3:goto IL_0041;case 4:goto IL_0030;case 5:goto IL_007b;};//switch				(IL_008b,IL_00b2,IL_0062,IL_0041,IL_0030,IL_007b)
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:            V_0=0;                                                      //stloc.0
	IL_0025:                                                                        //ldc.i4				0x4
	IL_002a:            V_2=4;                                                      //stloc				V_2
	IL_002e:            /*goto IL_0002;*/goto IL_0030;                              //br.s				IL_0002
	IL_0030:            goto IL_007d;                                               //br.s				IL_007d
	IL_0032:                                                                        //ldloc.0
	IL_0033:                                                                        //ldc.i4.1
	IL_0034:                                                                        //add
	IL_0035:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0036:                                                                        //ldc.i4				0x3
	IL_003b:            V_2=3;                                                      //stloc				V_2
	IL_003f:            /*goto IL_0002;*/goto IL_0041;                              //br.s				IL_0002
	IL_0041:            goto IL_007d;                                               //br.s				IL_007d
	IL_0043:                                                                        //ldc.i4.1
	IL_0044:            return true;                                                //ret
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_2=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_004b:                                                                        //ldloc.0
	IL_004c:            Temp_3=Temp_2[V_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0051:                                                                        //castclass				Root::T_x109::T_x1
	IL_0056:            V_1=safe_cast<Root::T_x109::T_x1^>(Temp_3);                 //stloc.1
	IL_0057:                                                                        //ldc.i4				0x2
	IL_005c:            V_2=2;                                                      //stloc				V_2
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:                                                                        //ldarg.1
	IL_0063:                                                                        //ldloc.1
	IL_0064:            Temp_4=V_1->F_x1;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_0069:            Temp_5=(A_0 == Temp_4);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_006e:            if(!Temp_5)goto IL_0032;                                    //brfalse.s				IL_0032
	IL_0070:                                                                        //ldc.i4				0x5
	IL_0075:            V_2=5;                                                      //stloc				V_2
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_0043;                                               //br.s				IL_0043
	IL_007d:                                                                        //ldc.i4				0x0
	IL_0082:            V_2=0;                                                      //stloc				V_2
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:                                                                        //ldc.i4.4
	IL_008c:                                                                        //dup
	IL_008d:                                                                        //dup
	IL_008e:                                                                        //ldc.i4.2
	IL_008f:                                                                        //sub
	IL_0090:                                                                        //blt				IL_008c
	IL_0095:                                                                        //pop
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_009d:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00a2:            if(V_0<Temp_1)goto IL_0045;                                 //blt.s				IL_0045
	IL_00a4:                                                                        //ldc.i4				0x1
	IL_00a9:            V_2=1;                                                      //stloc				V_2
	IL_00ad:            /*goto IL_0002;*/goto IL_00b2;                              //br				IL_0002
	IL_00b2:            goto IL_00b4;                                               //br.s				IL_00b4
	IL_00b4:                                                                        //ldc.i4.0
	IL_00b5:            return false;                                               //ret

}
inline System::String^ Root::T_x109::M_x2(System::String^ A_0,System::String^ A_1)
//Reflector::IConfiguration^::GetProperty by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x109::T_x1^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0096;case 1:goto IL_006a;case 2:goto IL_00b2;case 3:goto IL_0044;case 4:goto IL_0030;case 5:goto IL_0086;};//switch				(IL_0096,IL_006a,IL_00b2,IL_0044,IL_0030,IL_0086)
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:            V_0=0;                                                      //stloc.0
	IL_0025:                                                                        //ldc.i4				0x4
	IL_002a:            V_2=4;                                                      //stloc				V_2
	IL_002e:            /*goto IL_0002;*/goto IL_0030;                              //br.s				IL_0002
	IL_0030:            goto IL_0088;                                               //br.s				IL_0088
	IL_0032:            goto IL_0035;                                               //br.s				IL_0035
	IL_0034:                                                                        //break
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0039:                                                                        //ldc.i4				0x3
	IL_003e:            V_2=3;                                                      //stloc				V_2
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:            goto IL_0088;                                               //br.s				IL_0088
	IL_0046:                                                                        //ldloc.1
	IL_0047:            Temp_6=V_1->F_x2;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x2
	IL_004c:            return Temp_6;                                              //ret
	IL_004d:                                                                        //ldarg.0
	IL_004e:            Temp_2=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_0053:                                                                        //ldloc.0
	IL_0054:            Temp_3=Temp_2[V_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0059:                                                                        //castclass				Root::T_x109::T_x1
	IL_005e:            V_1=safe_cast<Root::T_x109::T_x1^>(Temp_3);                 //stloc.1
	IL_005f:                                                                        //ldc.i4				0x1
	IL_0064:            V_2=1;                                                      //stloc				V_2
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:                                                                        //ldarg.1
	IL_006b:                                                                        //ldloc.1
	IL_006c:            Temp_4=V_1->F_x1;                                           //ldfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_0071:            Temp_5=(A_0 == Temp_4);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0076:            if(!Temp_5)goto IL_0032;                                    //brfalse.s				IL_0032
	IL_0078:                                                                        //ldc.i4				0x5
	IL_007d:            V_2=5;                                                      //stloc				V_2
	IL_0081:            /*goto IL_0002;*/goto IL_0086;                              //br				IL_0002
	IL_0086:            goto IL_0046;                                               //br.s				IL_0046
	IL_0088:                                                                        //ldc.i4				0x0
	IL_008d:            V_2=0;                                                      //stloc				V_2
	IL_0091:            /*goto IL_0002;*/goto IL_0096;                              //br				IL_0002
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x109 F_x2
	IL_009d:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00a2:            if(V_0<Temp_1)goto IL_004d;                                 //blt.s				IL_004d
	IL_00a4:                                                                        //ldc.i4				0x2
	IL_00a9:            V_2=2;                                                      //stloc				V_2
	IL_00ad:            /*goto IL_0002;*/goto IL_00b2;                              //br				IL_0002
	IL_00b2:            goto IL_00b4;                                               //br.s				IL_00b4
	IL_00b4:                                                                        //ldarg.2
	IL_00b5:            return A_1;                                                 //ret

}
inline void Root::T_x109::PropertyChanged::add(System::ComponentModel::PropertyChangedEventHandler^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x109 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(value));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::PropertyChangedEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::PropertyChangedEventHandler^>(Temp_1);//stfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x109 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x109::PropertyChanged::remove(System::ComponentModel::PropertyChangedEventHandler^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x109 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(value));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::PropertyChangedEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::PropertyChangedEventHandler^>(Temp_1);//stfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x109 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x109::T_x1::T_x1(System::String^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x109::T_x1 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::String^ Root::T_x109::T_x1 F_x2
	IL_0014:            return;                                                     //ret

}
