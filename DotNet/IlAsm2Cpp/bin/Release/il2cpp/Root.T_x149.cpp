#include "global_xref.h"

inline Root::T_x149::T_x149()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x149::M_x1(array<System::Byte>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<System::String^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_3=8;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x5
	IL_000e:            V_2=5;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003f;                                               //br.s				IL_003f
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_00f5;case 1:goto IL_00af;case 2:goto IL_0079;case 3:goto IL_00d2;case 4:goto IL_00bf;case 5:goto IL_0014;case 6:goto IL_0068;case 7:goto IL_0050;};//switch				(IL_00f5,IL_00af,IL_0079,IL_00d2,IL_00bf,IL_0014,IL_0068,IL_0050)
	IL_003f:                                                                        //ldarg.0
	IL_0040:            if(A_0==nullptr)goto IL_00fa;                               //brfalse				IL_00fa
	IL_0045:                                                                        //ldc.i4				0x7
	IL_004a:            V_2=7;                                                      //stloc				V_2
	IL_004e:            /*goto IL_0016;*/goto IL_0050;                              //br.s				IL_0016
	IL_0050:                                                                        //ldc.i4.0
	IL_0051:                                                                        //dup
	IL_0052:                                                                        //dup
	IL_0053:                                                                        //ldc.i4.2
	IL_0054:                                                                        //add
	IL_0055:                                                                        //bgt				IL_0051
	IL_005a:                                                                        //pop
	IL_005b:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_005d:                                                                        //ldc.i4				0x6
	IL_0062:            V_2=6;                                                      //stloc				V_2
	IL_0066:            /*goto IL_0016;*/goto IL_0068;                              //br.s				IL_0016
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_5=A_0->Length;                                         //ldlen
	IL_006b:                                                                        //conv.i4
	IL_006c:            if(V_1<Temp_5)goto IL_007b;                                 //blt.s				IL_007b
	IL_006e:                                                                        //ldc.i4				0x2
	IL_0073:            V_2=2;                                                      //stloc				V_2
	IL_0077:            /*goto IL_0016;*/goto IL_0079;                              //br.s				IL_0016
	IL_0079:            goto IL_00d4;                                               //br.s				IL_00d4
	IL_007b:                                                                        //ldloc.0
	IL_007c:                                                                        //ldloc.1
	IL_007d:                                                                        //ldarg.0
	IL_007e:                                                                        //ldloc.1
	IL_007f:                                                                        //ldelema				System::Byte
	IL_0084:                                                                        //ldstr				L"\x5E25\x1A27"
	IL_0089:                                                                        //ldloc				V_3
	IL_008d:            Temp_6=a(L"\x5E25\x1A27",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0092:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0097:            Temp_8=A_0[V_1].ToString(Temp_6,safe_cast<System::IFormatProvider^>(Temp_7));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_009c:            V_0[V_1]=Temp_8;                                            //stelem.ref
	IL_009d:                                                                        //ldloc.1
	IL_009e:                                                                        //ldc.i4.1
	IL_009f:                                                                        //add
	IL_00a0:            V_1=(V_1 + 1);                                              //stloc.1
	IL_00a1:                                                                        //ldc.i4				0x1
	IL_00a6:            V_2=1;                                                      //stloc				V_2
	IL_00aa:            /*goto IL_0016;*/goto IL_00af;                              //br				IL_0016
	IL_00af:            goto IL_005d;                                               //br.s				IL_005d
	IL_00b1:                                                                        //ldc.i4				0x4
	IL_00b6:            V_2=4;                                                      //stloc				V_2
	IL_00ba:            /*goto IL_0016;*/goto IL_00bf;                              //br				IL_0016
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:            Temp_3=A_0->Length;                                         //ldlen
	IL_00c1:                                                                        //conv.i4
	IL_00c2:            if(Temp_3==0)goto IL_00fa;                                  //brfalse.s				IL_00fa
	IL_00c4:                                                                        //ldc.i4				0x3
	IL_00c9:            V_2=3;                                                      //stloc				V_2
	IL_00cd:            /*goto IL_0016;*/goto IL_00d2;                              //br				IL_0016
	IL_00d2:            goto IL_00db;                                               //br.s				IL_00db
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:            Temp_0=System::String::Concat(V_0);                         //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_00da:            return Temp_0;                                              //ret
	IL_00db:                                                                        //ldarg.0
	IL_00dc:            Temp_1=A_0->Length;                                         //ldlen
	IL_00dd:                                                                        //conv.i4
	IL_00de:                                                                        //conv.ovf.u4
	IL_00df:            Temp_2=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_1));//newarr				System::String
	IL_00e4:            V_0=Temp_2;                                                 //stloc.0
	IL_00e5:                                                                        //ldc.i4.0
	IL_00e6:            V_1=0;                                                      //stloc.1
	IL_00e7:                                                                        //ldc.i4				0x0
	IL_00ec:            V_2=0;                                                      //stloc				V_2
	IL_00f0:            /*goto IL_0016;*/goto IL_00f5;                              //br				IL_0016
	IL_00f5:            goto IL_005d;                                               //br				IL_005d
	IL_00fa:                                                                        //ldstr				L"\x4825\x5D27\x4629\x402B"
	IL_00ff:                                                                        //ldloc				V_3
	IL_0103:            Temp_4=a(L"\x4825\x5D27\x4629\x402B",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0108:            return Temp_4;                                              //ret

}
inline System::String^ Root::T_x149::M_x1(Reflector::CodeModel::IArrayType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Globalization::CultureInfo^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::String^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	System::Globalization::CultureInfo^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_31 = nullptr;
	System::Int32 Temp_32 = 0;
	System::IO::StringWriter^ Temp_33 = nullptr;
	System::IO::StringWriter^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::IO::StringWriter^ Temp_36 = nullptr;
	System::IO::StringWriter^ Temp_37 = nullptr;
	System::IO::StringWriter^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::IO::StringWriter^ Temp_40 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_7=4;                                                      //stloc				V_7
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:            goto IL_006d;                                               //br.s				IL_006d
	IL_0018:                                                                        //ldloc				V_5
	IL_001c:            switch(V_5){case 0:goto IL_01ad;case 1:goto IL_0101;case 2:goto IL_02df;case 3:goto IL_0222;case 4:goto IL_00f1;case 5:goto IL_018d;case 6:goto IL_00cd;case 7:goto IL_0150;case 8:goto IL_029a;case 9:goto IL_017d;case 10:goto IL_0120;case 11:goto IL_0287;case 12:goto IL_0130;case 13:goto IL_0273;case 14:goto IL_02b4;case 15:goto IL_00bc;case 16:goto IL_01bd;case 17:goto IL_0160;case 18:goto IL_00a9;};//switch				(IL_01ad,IL_0101,IL_02df,IL_0222,IL_00f1,IL_018d,IL_00cd,IL_0150,IL_029a,IL_017d,IL_0120,IL_0287,IL_0130,IL_0273,IL_02b4,IL_00bc,IL_01bd,IL_0160,IL_00a9)
	IL_006d:                                                                        //ldloc.0
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_2=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0074:            Temp_3=Temp_2->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0079:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_007e:                                                                        //ldloc.0
	IL_007f:                                                                        //ldstr				L"\x7921"
	IL_0084:                                                                        //ldloc				V_7
	IL_0088:            Temp_4=a(L"\x7921",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008d:            V_0->Write(Temp_4);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0092:                                                                        //ldarg.0
	IL_0093:            Temp_5=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0098:            V_1=Temp_5;                                                 //stloc.1
	IL_0099:                                                                        //ldc.i4.0
	IL_009a:            V_2=0;                                                      //stloc.2
	IL_009b:                                                                        //ldc.i4				0x12
	IL_00a0:            V_5=18;                                                     //stloc				V_5
	IL_00a4:            /*goto IL_0018;*/goto IL_00a9;                              //br				IL_0018
	IL_00a9:            goto IL_0289;                                               //br				IL_0289
	IL_00ae:                                                                        //ldc.i4				0xf
	IL_00b3:            V_5=15;                                                     //stloc				V_5
	IL_00b7:            /*goto IL_0018;*/goto IL_00bc;                              //br				IL_0018
	IL_00bc:                                                                        //ldloc.2
	IL_00bd:            if(V_2==0)goto IL_00f3;                                     //brfalse.s				IL_00f3
	IL_00bf:                                                                        //ldc.i4				0x6
	IL_00c4:            V_5=6;                                                      //stloc				V_5
	IL_00c8:            /*goto IL_0018;*/goto IL_00cd;                              //br				IL_0018
	IL_00cd:            goto IL_00cf;                                               //br.s				IL_00cf
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:                                                                        //ldstr				L"\x0E21"
	IL_00d5:                                                                        //ldloc				V_7
	IL_00d9:            Temp_17=a(L"\x0E21",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00de:            V_0->Write(Temp_17);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e3:                                                                        //ldc.i4				0x4
	IL_00e8:            V_5=4;                                                      //stloc				V_5
	IL_00ec:            /*goto IL_0018;*/goto IL_00f1;                              //br				IL_0018
	IL_00f1:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00f3:                                                                        //ldc.i4				0x1
	IL_00f8:            V_5=1;                                                      //stloc				V_5
	IL_00fc:            /*goto IL_0018;*/goto IL_0101;                              //br				IL_0018
	IL_0101:                                                                        //ldloc.1
	IL_0102:                                                                        //ldloc.2
	IL_0103:            Temp_6=V_1[V_2];                                            //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0108:            Temp_7=Temp_6->LowerBound;                                  //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_010d:            if(Temp_7==0)goto IL_0275;                                  //brfalse				IL_0275
	IL_0112:                                                                        //ldc.i4				0xa
	IL_0117:            V_5=10;                                                     //stloc				V_5
	IL_011b:            /*goto IL_0018;*/goto IL_0120;                              //br				IL_0018
	IL_0120:            goto IL_0122;                                               //br.s				IL_0122
	IL_0122:                                                                        //ldc.i4				0xc
	IL_0127:            V_5=12;                                                     //stloc				V_5
	IL_012b:            /*goto IL_0018;*/goto IL_0130;                              //br				IL_0018
	IL_0130:                                                                        //ldloc.1
	IL_0131:                                                                        //ldloc.2
	IL_0132:            Temp_19=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0137:            Temp_20=Temp_19->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_013c:                                                                        //ldc.i4.m1
	IL_013d:            if(Temp_20==-1)goto IL_0275;                                //beq				IL_0275
	IL_0142:                                                                        //ldc.i4				0x7
	IL_0147:            V_5=7;                                                      //stloc				V_5
	IL_014b:            /*goto IL_0018;*/goto IL_0150;                              //br				IL_0018
	IL_0150:            goto IL_0152;                                               //br.s				IL_0152
	IL_0152:                                                                        //ldc.i4				0x11
	IL_0157:            V_5=17;                                                     //stloc				V_5
	IL_015b:            /*goto IL_0018;*/goto IL_0160;                              //br				IL_0018
	IL_0160:                                                                        //ldloc.1
	IL_0161:                                                                        //ldloc.2
	IL_0162:            Temp_31=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0167:            Temp_32=Temp_31->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_016c:                                                                        //ldc.i4.m1
	IL_016d:            if(Temp_32!=-1)goto IL_01af;                                //bne.un.s				IL_01af
	IL_016f:                                                                        //ldc.i4				0x9
	IL_0174:            V_5=9;                                                      //stloc				V_5
	IL_0178:            /*goto IL_0018;*/goto IL_017d;                              //br				IL_0018
	IL_017d:            goto IL_017f;                                               //br.s				IL_017f
	IL_017f:                                                                        //ldc.i4				0x5
	IL_0184:            V_5=5;                                                      //stloc				V_5
	IL_0188:            /*goto IL_0018;*/goto IL_018d;                              //br				IL_0018
	IL_018d:                                                                        //ldloc.1
	IL_018e:                                                                        //ldloc.2
	IL_018f:            Temp_15=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0194:            Temp_16=Temp_15->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_0199:                                                                        //ldc.i4.m1
	IL_019a:            if(Temp_16==-1)goto IL_0275;                                //beq				IL_0275
	IL_019f:                                                                        //ldc.i4				0x0
	IL_01a4:            V_5=0;                                                      //stloc				V_5
	IL_01a8:            /*goto IL_0018;*/goto IL_01ad;                              //br				IL_0018
	IL_01ad:            goto IL_01af;                                               //br.s				IL_01af
	IL_01af:                                                                        //ldc.i4				0x10
	IL_01b4:            V_5=16;                                                     //stloc				V_5
	IL_01b8:            /*goto IL_0018;*/goto IL_01bd;                              //br				IL_0018
	IL_01bd:                                                                        //ldloc.0
	IL_01be:                                                                        //ldloc.1
	IL_01bf:                                                                        //ldloc.2
	IL_01c0:            Temp_23=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_01c5:            Temp_24=Temp_23->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_01ca:                                                                        //ldc.i4.m1
	IL_01cb:            Temp_34=V_0;if(Temp_24!=-1)goto IL_01df;                    //bne.un.s				IL_01df
	IL_01cd:            goto IL_01cf;                                               //br.s				IL_01cf
	IL_01cf:                                                                        //ldstr				L"\x0C21"
	IL_01d4:                                                                        //ldloc				V_7
	IL_01d8:            Temp_30=a(L"\x0C21",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01dd:            Temp_36=Temp_34;Temp_35=Temp_30;goto IL_01fb;               //br.s				IL_01fb
	IL_01df:                                                                        //ldloc.1
	IL_01e0:                                                                        //ldloc.2
	IL_01e1:            Temp_25=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_01e6:            Temp_26=Temp_25->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_01eb:            V_4=Temp_26;                                                //stloc.s				V_4
	IL_01ed:                                                                        //ldloca.s				V_4
	IL_01ef:            Temp_27=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01f4:            Temp_28=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_27));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_01f9:            Temp_36=Temp_34;Temp_35=Temp_28;goto IL_01fb;               //br.s				IL_01fb
	IL_01fb:            Temp_36->Write(Temp_35);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0200:                                                                        //ldloc.0
	IL_0201:                                                                        //ldstr				L"\x0C21\x0A23"
	IL_0206:                                                                        //ldloc				V_7
	IL_020a:            Temp_29=a(L"\x0C21\x0A23",V_7);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_020f:            V_0->Write(Temp_29);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0214:                                                                        //ldc.i4				0x3
	IL_0219:            V_5=3;                                                      //stloc				V_5
	IL_021d:            /*goto IL_0018;*/goto IL_0222;                              //br				IL_0018
	IL_0222:                                                                        //ldloc.0
	IL_0223:                                                                        //ldloc.1
	IL_0224:                                                                        //ldloc.2
	IL_0225:            Temp_8=V_1[V_2];                                            //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_022a:            Temp_9=Temp_8->UpperBound;                                  //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_022f:                                                                        //ldc.i4.m1
	IL_0230:            Temp_38=V_0;if(Temp_9!=-1)goto IL_0244;                     //bne.un.s				IL_0244
	IL_0232:            goto IL_0234;                                               //br.s				IL_0234
	IL_0234:                                                                        //ldstr				L"\x0C21"
	IL_0239:                                                                        //ldloc				V_7
	IL_023d:            Temp_14=a(L"\x0C21",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0242:            Temp_40=Temp_38;Temp_39=Temp_14;goto IL_0260;               //br.s				IL_0260
	IL_0244:                                                                        //ldloc.1
	IL_0245:                                                                        //ldloc.2
	IL_0246:            Temp_10=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_024b:            Temp_11=Temp_10->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_0250:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_0252:                                                                        //ldloca.s				V_4
	IL_0254:            Temp_12=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0259:            Temp_13=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_12));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_025e:            Temp_40=Temp_38;Temp_39=Temp_13;goto IL_0260;               //br.s				IL_0260
	IL_0260:            Temp_40->Write(Temp_39);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0265:                                                                        //ldc.i4				0xd
	IL_026a:            V_5=13;                                                     //stloc				V_5
	IL_026e:            /*goto IL_0018;*/goto IL_0273;                              //br				IL_0018
	IL_0273:            goto IL_0275;                                               //br.s				IL_0275
	IL_0275:                                                                        //ldloc.2
	IL_0276:                                                                        //ldc.i4.1
	IL_0277:                                                                        //add
	IL_0278:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0279:                                                                        //ldc.i4				0xb
	IL_027e:            V_5=11;                                                     //stloc				V_5
	IL_0282:            /*goto IL_0018;*/goto IL_0287;                              //br				IL_0018
	IL_0287:            goto IL_0289;                                               //br.s				IL_0289
	IL_0289:            goto IL_028c;                                               //br.s				IL_028c
	IL_028b:                                                                        //break
	IL_028c:                                                                        //ldc.i4				0x8
	IL_0291:            V_5=8;                                                      //stloc				V_5
	IL_0295:            /*goto IL_0018;*/goto IL_029a;                              //br				IL_0018
	IL_029a:                                                                        //ldloc.2
	IL_029b:                                                                        //ldloc.1
	IL_029c:            Temp_18=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02a1:            if(V_2<Temp_18)goto IL_00ae;                                //blt				IL_00ae
	IL_02a6:                                                                        //ldc.i4				0xe
	IL_02ab:            V_5=14;                                                     //stloc				V_5
	IL_02af:            /*goto IL_0018;*/goto IL_02b4;                              //br				IL_0018
	IL_02b4:            goto IL_02b6;                                               //br.s				IL_02b6
	IL_02b6:                                                                        //ldloc.0
	IL_02b7:                                                                        //ldstr				L"\x7F21"
	IL_02bc:                                                                        //ldloc				V_7
	IL_02c0:            Temp_21=a(L"\x7F21",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c5:            V_0->Write(Temp_21);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02ca:                                                                        //ldloc.0
	IL_02cb:            Temp_22=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_02d0:            V_3=Temp_22;                                                //stloc.3
	IL_02d1:                                                                        //ldc.i4				0x2
	IL_02d6:            V_5=2;                                                      //stloc				V_5
	IL_02da:            /*goto IL_0018;*/goto IL_02df;                              //br				IL_0018
	IL_02df:            goto IL_0327;                                               //leave.s				IL_0327
	                    ;}
	                    finally{
	IL_02e1:                                                                        //ldc.i4				0x0
	IL_02e6:            V_6=0;                                                      //stloc				V_6
	IL_02ea:            /*goto IL_02ee;*/goto IL_02ec;                              //br.s				IL_02ee
	IL_02ec:            goto IL_0303;                                               //br.s				IL_0303
	IL_02ee:                                                                        //ldloc				V_6
	IL_02f2:            switch(V_6){case 0:goto IL_02ec;case 1:goto IL_0311;case 2:goto IL_0324;};//switch				(IL_02ec,IL_0311,IL_0324)
	IL_0303:                                                                        //ldloc.0
	IL_0304:            if(V_0==nullptr)goto IL_0326;                               //brfalse.s				IL_0326
	IL_0306:                                                                        //ldc.i4				0x1
	IL_030b:            V_6=1;                                                      //stloc				V_6
	IL_030f:            /*goto IL_02ee;*/goto IL_0311;                              //br.s				IL_02ee
	IL_0311:            goto IL_0313;                                               //br.s				IL_0313
	IL_0313:                                                                        //ldloc.0
	IL_0314:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0319:                                                                        //ldc.i4				0x2
	IL_031e:            V_6=2;                                                      //stloc				V_6
	IL_0322:            /*goto IL_02ee;*/goto IL_0324;                              //br.s				IL_02ee
	IL_0324:            goto IL_0326;                                               //br.s				IL_0326
	IL_0326:                                                                        //endfinally
	                    ;}
	IL_0327:                                                                        //ldloc.3
	IL_0328:            return V_3;                                                 //ret

}
inline System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IArrayType^ A_0,Reflector::CodeModel::IArrayType^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_11 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_14 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_19 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_22 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_25 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_28 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_29 = nullptr;
	System::Int32 Temp_30 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_31 = nullptr;
	System::Int32 Temp_32 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_004b;                                               //br.s				IL_004b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_007b;case 1:goto IL_00fa;case 2:goto IL_011f;case 3:goto IL_00b5;case 4:goto IL_0223;case 5:goto IL_01ee;case 6:goto IL_0135;case 7:goto IL_010a;case 8:goto IL_0062;case 9:goto IL_0167;case 10:goto IL_00c5;case 11:goto IL_01a6;case 12:goto IL_017c;case 13:goto IL_0096;case 14:goto IL_0193;case 15:goto IL_01db;};//switch				(IL_007b,IL_00fa,IL_011f,IL_00b5,IL_0223,IL_01ee,IL_0135,IL_010a,IL_0062,IL_0167,IL_00c5,IL_01a6,IL_017c,IL_0096,IL_0193,IL_01db)
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_0=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0051:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0056:            V_0=Temp_1;                                                 //stloc.0
	IL_0057:                                                                        //ldc.i4				0x8
	IL_005c:            V_2=8;                                                      //stloc				V_2
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_17=A_0->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0069:            Temp_18=safe_cast<System::Collections::ICollection^>(Temp_17)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_006e:            if(V_0>=Temp_18)goto IL_0088;                               //bge.s				IL_0088
	IL_0070:                                                                        //ldc.i4				0x0
	IL_0075:            V_2=0;                                                      //stloc				V_2
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_0225;                                               //br				IL_0225
	IL_0080:                                                                        //ldc.i4.m1
	IL_0081:            return -1;                                                  //ret
	IL_0082:                                                                        //ldc.i4.1
	IL_0083:            return 1;                                                   //ret
	IL_0084:                                                                        //ldc.i4.1
	IL_0085:            return 1;                                                   //ret
	IL_0086:                                                                        //ldc.i4.1
	IL_0087:            return 1;                                                   //ret
	IL_0088:                                                                        //ldc.i4				0xd
	IL_008d:            V_2=13;                                                     //stloc				V_2
	IL_0091:            /*goto IL_0002;*/goto IL_0096;                              //br				IL_0002
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldarg.1
	IL_0098:            Temp_31=A_1->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_009d:            Temp_32=safe_cast<System::Collections::ICollection^>(Temp_31)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00a2:            if(V_0<=Temp_32)goto IL_016c;                               //ble				IL_016c
	IL_00a7:                                                                        //ldc.i4				0x3
	IL_00ac:            V_2=3;                                                      //stloc				V_2
	IL_00b0:            /*goto IL_0002;*/goto IL_00b5;                              //br				IL_0002
	IL_00b5:            goto IL_0084;                                               //br.s				IL_0084
	IL_00b7:                                                                        //ldc.i4				0xa
	IL_00bc:            V_2=10;                                                     //stloc				V_2
	IL_00c0:            /*goto IL_0002;*/goto IL_00c5;                              //br				IL_0002
	IL_00c5:                                                                        //ldarg.0
	IL_00c6:            Temp_19=A_0->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_00cb:                                                                        //ldloc.1
	IL_00cc:            Temp_20=Temp_19[V_1];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_00d1:            Temp_21=Temp_20->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_00d6:                                                                        //ldarg.1
	IL_00d7:            Temp_22=A_1->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_00dc:                                                                        //ldloc.1
	IL_00dd:            Temp_23=Temp_22[V_1];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_00e2:            Temp_24=Temp_23->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_00e7:            if(Temp_21<=Temp_24)goto IL_0181;                           //ble				IL_0181
	IL_00ec:                                                                        //ldc.i4				0x1
	IL_00f1:            V_2=1;                                                      //stloc				V_2
	IL_00f5:            /*goto IL_0002;*/goto IL_00fa;                              //br				IL_0002
	IL_00fa:            goto IL_0086;                                               //br.s				IL_0086
	IL_00fc:                                                                        //ldc.i4				0x7
	IL_0101:            V_2=7;                                                      //stloc				V_2
	IL_0105:            /*goto IL_0002;*/goto IL_010a;                              //br				IL_0002
	IL_010a:                                                                        //ldloc.1
	IL_010b:                                                                        //ldloc.0
	IL_010c:            if(V_1<V_0)goto IL_01e0;                                    //blt				IL_01e0
	IL_0111:                                                                        //ldc.i4				0x2
	IL_0116:            V_2=2;                                                      //stloc				V_2
	IL_011a:            /*goto IL_0002;*/goto IL_011f;                              //br				IL_0002
	IL_011f:            goto IL_0229;                                               //br				IL_0229
	IL_0124:            goto IL_0127;                                               //br.s				IL_0127
	IL_0126:                                                                        //break
	IL_0127:                                                                        //ldc.i4				0x6
	IL_012c:            V_2=6;                                                      //stloc				V_2
	IL_0130:            /*goto IL_0002;*/goto IL_0135;                              //br				IL_0002
	IL_0135:                                                                        //ldarg.0
	IL_0136:            Temp_11=A_0->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_013b:                                                                        //ldloc.1
	IL_013c:            Temp_12=Temp_11[V_1];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0141:            Temp_13=Temp_12->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_0146:                                                                        //ldarg.1
	IL_0147:            Temp_14=A_1->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_014c:                                                                        //ldloc.1
	IL_014d:            Temp_15=Temp_14[V_1];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0152:            Temp_16=Temp_15->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_0157:            if(Temp_13<=Temp_16)goto IL_0198;                           //ble.s				IL_0198
	IL_0159:                                                                        //ldc.i4				0x9
	IL_015e:            V_2=9;                                                      //stloc				V_2
	IL_0162:            /*goto IL_0002;*/goto IL_0167;                              //br				IL_0002
	IL_0167:            goto IL_0082;                                               //br				IL_0082
	IL_016c:                                                                        //ldc.i4.0
	IL_016d:            V_1=0;                                                      //stloc.1
	IL_016e:                                                                        //ldc.i4				0xc
	IL_0173:            V_2=12;                                                     //stloc				V_2
	IL_0177:            /*goto IL_0002;*/goto IL_017c;                              //br				IL_0002
	IL_017c:            goto IL_00fc;                                               //br				IL_00fc
	IL_0181:                                                                        //ldloc.1
	IL_0182:                                                                        //ldc.i4.1
	IL_0183:                                                                        //add
	IL_0184:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0185:                                                                        //ldc.i4				0xe
	IL_018a:            V_2=14;                                                     //stloc				V_2
	IL_018e:            /*goto IL_0002;*/goto IL_0193;                              //br				IL_0002
	IL_0193:            goto IL_00fc;                                               //br				IL_00fc
	IL_0198:                                                                        //ldc.i4				0xb
	IL_019d:            V_2=11;                                                     //stloc				V_2
	IL_01a1:            /*goto IL_0002;*/goto IL_01a6;                              //br				IL_0002
	IL_01a6:                                                                        //ldarg.0
	IL_01a7:            Temp_25=A_0->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_01ac:                                                                        //ldloc.1
	IL_01ad:            Temp_26=Temp_25[V_1];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_01b2:            Temp_27=Temp_26->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_01b7:                                                                        //ldarg.1
	IL_01b8:            Temp_28=A_1->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_01bd:                                                                        //ldloc.1
	IL_01be:            Temp_29=Temp_28[V_1];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_01c3:            Temp_30=Temp_29->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_01c8:            if(Temp_27>=Temp_30)goto IL_00b7;                           //bge				IL_00b7
	IL_01cd:                                                                        //ldc.i4				0xf
	IL_01d2:            V_2=15;                                                     //stloc				V_2
	IL_01d6:            /*goto IL_0002;*/goto IL_01db;                              //br				IL_0002
	IL_01db:            goto IL_0080;                                               //br				IL_0080
	IL_01e0:                                                                        //ldc.i4				0x5
	IL_01e5:            V_2=5;                                                      //stloc				V_2
	IL_01e9:            /*goto IL_0002;*/goto IL_01ee;                              //br				IL_0002
	IL_01ee:                                                                        //ldarg.0
	IL_01ef:            Temp_5=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_01f4:                                                                        //ldloc.1
	IL_01f5:            Temp_6=Temp_5[V_1];                                         //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_01fa:            Temp_7=Temp_6->LowerBound;                                  //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_01ff:                                                                        //ldarg.1
	IL_0200:            Temp_8=A_1->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0205:                                                                        //ldloc.1
	IL_0206:            Temp_9=Temp_8[V_1];                                         //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_020b:            Temp_10=Temp_9->LowerBound;                                 //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_0210:            if(Temp_7>=Temp_10)goto IL_0124;                            //bge				IL_0124
	IL_0215:                                                                        //ldc.i4				0x4
	IL_021a:            V_2=4;                                                      //stloc				V_2
	IL_021e:            /*goto IL_0002;*/goto IL_0223;                              //br				IL_0002
	IL_0223:            goto IL_0227;                                               //br.s				IL_0227
	IL_0225:                                                                        //ldc.i4.m1
	IL_0226:            return -1;                                                  //ret
	IL_0227:                                                                        //ldc.i4.m1
	IL_0228:            return -1;                                                  //ret
	IL_0229:                                                                        //ldarg.0
	IL_022a:            Temp_2=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_022f:                                                                        //ldarg.1
	IL_0230:            Temp_3=A_1->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0235:            Temp_4=safe_cast<System::IComparable^>(Temp_2)->CompareTo(safe_cast<System::Object^>(Temp_3));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_023a:            return Temp_4;                                              //ret

}
inline System::String^ Root::T_x149::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Version^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	array<System::Byte>^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::String^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	array<System::String^>^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	array<System::String^>^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	array<System::String^>^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	array<System::String^>^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	array<System::String^>^ Temp_28 = nullptr;
	System::Int32 Temp_29 = 0;
	array<System::String^>^ Temp_30 = nullptr;
	System::Int32 Temp_31 = 0;
	array<System::String^>^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::Int32 Temp_34 = 0;
	array<System::String^>^ Temp_35 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_2=16;                                                     //stloc				V_2
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldc.i4.8
	IL_000d:            Temp_0=gcnew array<System::String^>(8);                     //newarr				System::String
	IL_0012:            V_0=Temp_0;                                                 //stloc.0
	IL_0013:                                                                        //ldloc.0
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_1=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_001b:            V_0[0]=Temp_1;                                              //stelem.ref
	IL_001c:                                                                        //ldloc.0
	IL_001d:                                                                        //ldc.i4.1
	IL_001e:                                                                        //ldstr				L"\x022D\x102F\x6431\x5133\x4435\x4B37\x5339\x533B\x503D\x7D3F"
	IL_0023:                                                                        //ldloc				V_2
	IL_0027:            Temp_2=a(L"\x022D\x102F\x6431\x5133\x4435\x4B37\x5339\x533B\x503D\x7D3F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002c:            V_0[1]=Temp_2;                                              //stelem.ref
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldc.i4.2
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_3=A_0->Version;                                        //callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_0035:            Temp_4=Temp_3->ToString();                                  //callvirt				System::String^ System::Version::ToString()
	IL_003a:            V_0[2]=Temp_4;                                              //stelem.ref
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldc.i4.3
	IL_003d:                                                                        //ldstr				L"\x022D\x102F\x7131\x4133\x5A35\x4C37\x4F39\x4E3B\x5B3D\x7D3F"
	IL_0042:                                                                        //ldloc				V_2
	IL_0046:            Temp_5=a(L"\x022D\x102F\x7131\x4133\x5A35\x4C37\x4F39\x4E3B\x5B3D\x7D3F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004b:            V_0[3]=Temp_5;                                              //stelem.ref
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldc.i4.4
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_6=A_0->Culture;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0054:            Temp_23=V_0;Temp_22=4;if(Temp_6==nullptr)goto IL_006f;      //brfalse.s				IL_006f
	IL_0056:            goto IL_0058;                                               //br.s				IL_0058
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_15=A_0->Culture;                                       //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_005e:            Temp_16=Temp_15->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_0063:            if(Temp_16==0)goto IL_006f;                                 //brfalse.s				IL_006f
	IL_0065:            goto IL_0067;                                               //br.s				IL_0067
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_17=A_0->Culture;                                       //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_006d:            Temp_26=Temp_23;Temp_25=Temp_22;Temp_24=Temp_17;goto IL_007f;//br.s				IL_007f
	IL_006f:            /*warning ! semantic stack doesn't empty at joint !;*/      //ldstr				L"\x402D\x552F\x4731\x4033\x4435\x5937\x5639"
	IL_0074:                                                                        //ldloc				V_2
	IL_0078:            Temp_7=a(L"\x402D\x552F\x4731\x4033\x4435\x5937\x5639",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007d:            Temp_26=Temp_23;Temp_25=Temp_22;Temp_24=Temp_7;goto IL_007f;//br.s				IL_007f
	IL_007f:            Temp_26[Temp_25]=Temp_24;/*warning ! semantic stack doesn't empty at joint !;*///stelem.ref
	IL_0080:                                                                        //ldloc.0
	IL_0081:                                                                        //ldc.i4.5
	IL_0082:                                                                        //ldstr				L"\x022D\x102F\x6231\x4133\x5435\x5437\x5339\x5F3B\x753D\x253F\x3B41\x1043\x2945\x2347\x2F49\x224B\x734D"
	IL_0087:                                                                        //ldloc				V_2
	IL_008b:            Temp_8=a(L"\x022D\x102F\x6231\x4133\x5435\x5437\x5339\x5F3B\x753D\x253F\x3B41\x1043\x2945\x2347\x2F49\x224B\x734D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0090:            V_0[5]=Temp_8;                                              //stelem.ref
	IL_0091:                                                                        //ldloc.0
	IL_0092:                                                                        //ldc.i4.6
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_9=A_0->PublicKeyToken;                                 //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_0099:            Temp_10=Root::T_x149::M_x1(Temp_9);                         //call				System::String^ Root::T_x149::M_x1(array<System::Byte>^)
	IL_009e:            V_0[6]=Temp_10;                                             //stelem.ref
	IL_009f:                                                                        //ldloc.0
	IL_00a0:                                                                        //ldc.i4.7
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            Temp_11=A_0->Retargetable;                                  //callvirt				System::Boolean Reflector::CodeModel::IAssemblyReference::get_Retargetable()
	IL_00a7:            Temp_30=V_0;Temp_29=7;if(Temp_11)goto IL_00ab;              //brtrue.s				IL_00ab
	IL_00a9:            Temp_32=Temp_30;Temp_31=Temp_29;goto IL_00bb;               //br.s				IL_00bb
	IL_00ab:                                                                        //ldstr				L"\x022D\x102F\x6031\x5133\x4235\x5937\x4839\x5B3B\x5B3D\x343F\x2341\x2643\x2A45\x2D47\x7749\x154B\x2B4D\x234F"
	IL_00b0:                                                                        //ldloc				V_2
	IL_00b4:            Temp_12=a(L"\x022D\x102F\x6031\x5133\x4235\x5937\x4839\x5B3B\x5B3D\x343F\x2341\x2643\x2A45\x2D47\x7749\x154B\x2B4D\x234F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b9:            Temp_35=Temp_30;Temp_34=Temp_29;Temp_33=Temp_12;goto IL_00c2;//br.s				IL_00c2
	IL_00bb:            Temp_14=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_00c0:            Temp_35=Temp_32;Temp_34=Temp_31;Temp_33=Temp_14;goto IL_00c2;//br.s				IL_00c2
	IL_00c2:            Temp_35[Temp_34]=Temp_33;/*warning ! semantic stack doesn't empty at joint !;*///stelem.ref
	IL_00c3:                                                                        //ldloc.0
	IL_00c4:            Temp_13=System::String::Concat(V_0);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_00c9:            return Temp_13;                                             //ret

}
inline System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::Version^ Temp_4 = nullptr;
	System::Version^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::String^ Temp_7 = nullptr;
	array<System::Byte>^ Temp_8 = nullptr;
	array<System::Byte>^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::String^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	array<System::Byte>^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	array<System::Byte>^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	System::String^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	System::Int32 Temp_24 = 0;
	System::String^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	System::Boolean Temp_30 = false;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::String^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	array<System::Byte>^ V_5 = nullptr;
	array<System::Byte>^ V_6 = nullptr;
	System::Boolean V_7 = false;
	System::Boolean V_8 = false;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_12=2;                                                     //stloc				V_12
	IL_0009:            goto IL_00e3;                                               //br				IL_00e3
	IL_000e:                                                                        //ldloc				V_11
	IL_0012:            switch(V_11){case 0:goto IL_0144;case 1:goto IL_0390;case 2:goto IL_0103;case 3:goto IL_0435;case 4:goto IL_03dc;case 5:goto IL_01d0;case 6:goto IL_0200;case 7:goto IL_028c;case 8:goto IL_0216;case 9:goto IL_04ee;case 10:goto IL_0516;case 11:goto IL_03b9;case 12:goto IL_0595;case 13:goto IL_0541;case 14:goto IL_015c;case 15:goto IL_0127;case 16:goto IL_0277;case 17:goto IL_02fd;case 18:goto IL_0312;case 19:goto IL_0478;case 20:goto IL_02a1;case 21:goto IL_0117;case 22:goto IL_02eb;case 23:goto IL_0251;case 24:goto IL_02d2;case 25:goto IL_0420;case 26:goto IL_0503;case 27:goto IL_023f;case 28:goto IL_0325;case 29:goto IL_03f1;case 30:goto IL_0465;case 31:goto IL_04a6;case 32:goto IL_0343;case 33:goto IL_01bd;case 34:goto IL_04d1;case 35:goto IL_0556;case 36:goto IL_03a6;case 37:goto IL_0448;case 38:goto IL_0176;case 39:goto IL_0369;case 40:goto IL_01a9;case 41:goto IL_0264;case 42:goto IL_0356;case 43:goto IL_0568;case 44:goto IL_057c;case 45:goto IL_052c;case 46:goto IL_0493;case 47:goto IL_037e;case 48:goto IL_02bf;case 49:goto IL_04b8;case 50:goto IL_01ed;};//switch				(IL_0144,IL_0390,IL_0103,IL_0435,IL_03dc,IL_01d0,IL_0200,IL_028c,IL_0216,IL_04ee,IL_0516,IL_03b9,IL_0595,IL_0541,IL_015c,IL_0127,IL_0277,IL_02fd,IL_0312,IL_0478,IL_02a1,IL_0117,IL_02eb,IL_0251,IL_02d2,IL_0420,IL_0503,IL_023f,IL_0325,IL_03f1,IL_0465,IL_04a6,IL_0343,IL_01bd,IL_04d1,IL_0556,IL_03a6,IL_0448,IL_0176,IL_0369,IL_01a9,IL_0264,IL_0356,IL_0568,IL_057c,IL_052c,IL_0493,IL_037e,IL_02bf,IL_04b8,IL_01ed)
	IL_00e3:                                                                        //ldarg.0
	IL_00e4:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_00e9:                                                                        //ldarg.1
	IL_00ea:            Temp_1=A_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_00ef:            Temp_2=Temp_0->CompareTo(Temp_1);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_00f4:            V_0=Temp_2;                                                 //stloc.0
	IL_00f5:                                                                        //ldc.i4				0x2
	IL_00fa:            V_11=2;                                                     //stloc				V_11
	IL_00fe:            /*goto IL_000e;*/goto IL_0103;                              //br				IL_000e
	IL_0103:                                                                        //ldloc.0
	IL_0104:            if(V_0==0)goto IL_0189;                                     //brfalse				IL_0189
	IL_0109:                                                                        //ldc.i4				0x15
	IL_010e:            V_11=21;                                                    //stloc				V_11
	IL_0112:            /*goto IL_000e;*/goto IL_0117;                              //br				IL_000e
	IL_0117:            goto IL_014c;                                               //br.s				IL_014c
	IL_0119:                                                                        //ldc.i4				0xf
	IL_011e:            V_11=15;                                                    //stloc				V_11
	IL_0122:            /*goto IL_000e;*/goto IL_0127;                              //br				IL_000e
	IL_0127:                                                                        //ldloc.s				V_6
	IL_0129:            Temp_14=V_6->Length;                                        //ldlen
	IL_012a:                                                                        //conv.i4
	IL_012b:                                                                        //ldc.i4.0
	IL_012c:                                                                        //ceq
	IL_012e:            Temp_29=(Temp_14 == 0);goto IL_0267;                        //br				IL_0267
	IL_0133:                                                                        //ldc.i4.0
	IL_0134:            V_9=0;                                                      //stloc.s				V_9
	IL_0136:                                                                        //ldc.i4				0x0
	IL_013b:            V_11=0;                                                     //stloc				V_11
	IL_013f:            /*goto IL_000e;*/goto IL_0144;                              //br				IL_000e
	IL_0144:            goto IL_02c4;                                               //br				IL_02c4
	IL_0149:                                                                        //ldloc.s				V_4
	IL_014b:            return V_4;                                                 //ret
	IL_014c:                                                                        //ldloc.0
	IL_014d:            return V_0;                                                 //ret
	IL_014e:                                                                        //ldc.i4				0xe
	IL_0153:            V_11=14;                                                    //stloc				V_11
	IL_0157:            /*goto IL_000e;*/goto IL_015c;                              //br				IL_000e
	IL_015c:                                                                        //ldloc.s				V_5
	IL_015e:            Temp_13=V_5->Length;                                        //ldlen
	IL_015f:                                                                        //conv.i4
	IL_0160:                                                                        //ldc.i4.0
	IL_0161:                                                                        //ceq
	IL_0163:            Temp_30=(Temp_13 == 0);goto IL_02ed;                        //br				IL_02ed
	IL_0168:                                                                        //ldc.i4				0x26
	IL_016d:            V_11=38;                                                    //stloc				V_11
	IL_0171:            /*goto IL_000e;*/goto IL_0176;                              //br				IL_000e
	IL_0176:                                                                        //ldstr				L"\x4E1F\x4721\x5123\x5225\x5A27\x4B29\x402B"
	IL_017b:                                                                        //ldloc				V_12
	IL_017f:            Temp_27=a(L"\x4E1F\x4721\x5123\x5225\x5A27\x4B29\x402B",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0184:            Temp_31=Temp_27;goto IL_04d6;                               //br				IL_04d6
	IL_0189:                                                                        //ldarg.0
	IL_018a:            Temp_4=A_0->Version;                                        //callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_018f:                                                                        //ldarg.1
	IL_0190:            Temp_5=A_1->Version;                                        //callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_0195:            Temp_6=Temp_4->CompareTo(safe_cast<System::Object^>(Temp_5));//callvirt				System::Int32 System::Version::CompareTo(System::Object^)
	IL_019a:            V_1=Temp_6;                                                 //stloc.1
	IL_019b:                                                                        //ldc.i4				0x28
	IL_01a0:            V_11=40;                                                    //stloc				V_11
	IL_01a4:            /*goto IL_000e;*/goto IL_01a9;                              //br				IL_000e
	IL_01a9:                                                                        //ldloc.1
	IL_01aa:            if(V_1==0)goto IL_0382;                                     //brfalse				IL_0382
	IL_01af:                                                                        //ldc.i4				0x21
	IL_01b4:            V_11=33;                                                    //stloc				V_11
	IL_01b8:            /*goto IL_000e;*/goto IL_01bd;                              //br				IL_000e
	IL_01bd:            goto IL_0206;                                               //br.s				IL_0206
	IL_01bf:                                                                        //ldloc.s				V_10
	IL_01c1:            return V_10;                                                //ret
	IL_01c2:                                                                        //ldc.i4				0x5
	IL_01c7:            V_11=5;                                                     //stloc				V_11
	IL_01cb:            /*goto IL_000e;*/goto IL_01d0;                              //br				IL_000e
	IL_01d0:                                                                        //ldloc.s				V_5
	IL_01d2:                                                                        //ldloc.s				V_9
	IL_01d4:                                                                        //ldelem.u1
	IL_01d5:                                                                        //ldloc.s				V_6
	IL_01d7:                                                                        //ldloc.s				V_9
	IL_01d9:                                                                        //ldelem.u1
	IL_01da:            if(V_5[V_9]==V_6[V_9])goto IL_04bd;                         //beq				IL_04bd
	IL_01df:                                                                        //ldc.i4				0x32
	IL_01e4:            V_11=50;                                                    //stloc				V_11
	IL_01e8:            /*goto IL_000e;*/goto IL_01ed;                              //br				IL_000e
	IL_01ed:            goto IL_043a;                                               //br				IL_043a
	IL_01f2:                                                                        //ldc.i4				0x6
	IL_01f7:            V_11=6;                                                     //stloc				V_11
	IL_01fb:            /*goto IL_000e;*/goto IL_0200;                              //br				IL_000e
	IL_0200:                                                                        //ldc.i4.1
	IL_0201:            Temp_30=true;goto IL_02ed;                                  //br				IL_02ed
	IL_0206:                                                                        //ldloc.1
	IL_0207:            return V_1;                                                 //ret
	IL_0208:                                                                        //ldc.i4				0x8
	IL_020d:            V_11=8;                                                     //stloc				V_11
	IL_0211:            /*goto IL_000e;*/goto IL_0216;                              //br				IL_000e
	IL_0216:                                                                        //ldarg.0
	IL_0217:            Temp_7=A_0->Culture;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_021c:            Temp_32=Temp_7;goto IL_056d;                                //br				IL_056d
	IL_0221:                                                                        //ldarg.0
	IL_0222:            Temp_8=A_0->PublicKeyToken;                                 //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_0227:            V_5=Temp_8;                                                 //stloc.s				V_5
	IL_0229:                                                                        //ldarg.1
	IL_022a:            Temp_9=A_1->PublicKeyToken;                                 //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_022f:            V_6=Temp_9;                                                 //stloc.s				V_6
	IL_0231:                                                                        //ldc.i4				0x1b
	IL_0236:            V_11=27;                                                    //stloc				V_11
	IL_023a:            /*goto IL_000e;*/goto IL_023f;                              //br				IL_000e
	IL_023f:                                                                        //ldloc.s				V_5
	IL_0241:            if(V_5==nullptr)goto IL_01f2;                               //brfalse.s				IL_01f2
	IL_0243:                                                                        //ldc.i4				0x17
	IL_0248:            V_11=23;                                                    //stloc				V_11
	IL_024c:            /*goto IL_000e;*/goto IL_0251;                              //br				IL_000e
	IL_0251:            goto IL_014e;                                               //br				IL_014e
	IL_0256:                                                                        //ldc.i4				0x29
	IL_025b:            V_11=41;                                                    //stloc				V_11
	IL_025f:            /*goto IL_000e;*/goto IL_0264;                              //br				IL_000e
	IL_0264:                                                                        //ldc.i4.1
	IL_0265:            Temp_29=true;goto IL_0267;                                  //br.s				IL_0267
	IL_0267:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_8
	IL_0269:                                                                        //ldc.i4				0x10
	IL_026e:            V_11=16;                                                    //stloc				V_11
	IL_0272:            /*goto IL_000e;*/goto IL_0277;                              //br				IL_000e
	IL_0277:                                                                        //ldloc.s				V_7
	IL_0279:            if(!V_7)goto IL_0498;                                       //brfalse				IL_0498
	IL_027e:                                                                        //ldc.i4				0x7
	IL_0283:            V_11=7;                                                     //stloc				V_11
	IL_0287:            /*goto IL_000e;*/goto IL_028c;                              //br				IL_000e
	IL_028c:            goto IL_03ce;                                               //br				IL_03ce
	IL_0291:                                                                        //ldc.i4.m1
	IL_0292:            return -1;                                                  //ret
	IL_0293:                                                                        //ldc.i4				0x14
	IL_0298:            V_11=20;                                                    //stloc				V_11
	IL_029c:            /*goto IL_000e;*/goto IL_02a1;                              //br				IL_000e
	IL_02a1:                                                                        //ldarg.0
	IL_02a2:            Temp_22=A_0->Culture;                                       //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_02a7:            Temp_23=Temp_22->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_02ac:            if(Temp_23==0)goto IL_03ab;                                 //brfalse				IL_03ab
	IL_02b1:                                                                        //ldc.i4				0x30
	IL_02b6:            V_11=48;                                                    //stloc				V_11
	IL_02ba:            /*goto IL_000e;*/goto IL_02bf;                              //br				IL_000e
	IL_02bf:            goto IL_0208;                                               //br				IL_0208
	IL_02c4:                                                                        //ldc.i4				0x18
	IL_02c9:            V_11=24;                                                    //stloc				V_11
	IL_02cd:            /*goto IL_000e;*/goto IL_02d2;                              //br				IL_000e
	IL_02d2:                                                                        //ldloc.s				V_9
	IL_02d4:                                                                        //ldloc.s				V_5
	IL_02d6:            Temp_24=V_5->Length;                                        //ldlen
	IL_02d7:                                                                        //conv.i4
	IL_02d8:            if(V_9<Temp_24)goto IL_01c2;                                //blt				IL_01c2
	IL_02dd:                                                                        //ldc.i4				0x16
	IL_02e2:            V_11=22;                                                    //stloc				V_11
	IL_02e6:            /*goto IL_000e;*/goto IL_02eb;                              //br				IL_000e
	IL_02eb:            goto IL_0348;                                               //br.s				IL_0348
	IL_02ed:            V_7=safe_cast<System::Boolean>(Temp_30);/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_7
	IL_02ef:                                                                        //ldc.i4				0x11
	IL_02f4:            V_11=17;                                                    //stloc				V_11
	IL_02f8:            /*goto IL_000e;*/goto IL_02fd;                              //br				IL_000e
	IL_02fd:                                                                        //ldloc.s				V_6
	IL_02ff:            if(V_6==nullptr)goto IL_0256;                               //brfalse				IL_0256
	IL_0304:                                                                        //ldc.i4				0x12
	IL_0309:            V_11=18;                                                    //stloc				V_11
	IL_030d:            /*goto IL_000e;*/goto IL_0312;                              //br				IL_000e
	IL_0312:            goto IL_0119;                                               //br				IL_0119
	IL_0317:                                                                        //ldc.i4				0x1c
	IL_031c:            V_11=28;                                                    //stloc				V_11
	IL_0320:            /*goto IL_000e;*/goto IL_0325;                              //br				IL_000e
	IL_0325:                                                                        //ldarg.1
	IL_0326:            Temp_25=A_1->Culture;                                       //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_032b:            Temp_26=Temp_25->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_0330:            if(Temp_26==0)goto IL_0168;                                 //brfalse				IL_0168
	IL_0335:                                                                        //ldc.i4				0x20
	IL_033a:            V_11=32;                                                    //stloc				V_11
	IL_033e:            /*goto IL_000e;*/goto IL_0343;                              //br				IL_000e
	IL_0343:            goto IL_0508;                                               //br				IL_0508
	IL_0348:                                                                        //ldc.i4				0x2a
	IL_034d:            V_11=42;                                                    //stloc				V_11
	IL_0351:            /*goto IL_000e;*/goto IL_0356;                              //br				IL_000e
	IL_0356:            goto IL_059a;                                               //br				IL_059a
	IL_035b:                                                                        //ldc.i4				0x27
	IL_0360:            V_11=39;                                                    //stloc				V_11
	IL_0364:            /*goto IL_000e;*/goto IL_0369;                              //br				IL_000e
	IL_0369:                                                                        //ldloc.s				V_8
	IL_036b:            if(!V_8)goto IL_046a;                                       //brfalse				IL_046a
	IL_0370:                                                                        //ldc.i4				0x2f
	IL_0375:            V_11=47;                                                    //stloc				V_11
	IL_0379:            /*goto IL_000e;*/goto IL_037e;                              //br				IL_000e
	IL_037e:            goto IL_03cc;                                               //br.s				IL_03cc
	IL_0380:                                                                        //ldc.i4.m1
	IL_0381:            return -1;                                                  //ret
	IL_0382:                                                                        //ldc.i4				0x1
	IL_0387:            V_11=1;                                                     //stloc				V_11
	IL_038b:            /*goto IL_000e;*/goto IL_0390;                              //br				IL_000e
	IL_0390:                                                                        //ldarg.0
	IL_0391:            Temp_3=A_0->Culture;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0396:            if(Temp_3==nullptr)goto IL_03ab;                            //brfalse.s				IL_03ab
	IL_0398:                                                                        //ldc.i4				0x24
	IL_039d:            V_11=36;                                                    //stloc				V_11
	IL_03a1:            /*goto IL_000e;*/goto IL_03a6;                              //br				IL_000e
	IL_03a6:            goto IL_0293;                                               //br				IL_0293
	IL_03ab:                                                                        //ldc.i4				0xb
	IL_03b0:            V_11=11;                                                    //stloc				V_11
	IL_03b4:            /*goto IL_000e;*/goto IL_03b9;                              //br				IL_000e
	IL_03b9:                                                                        //ldstr				L"\x4E1F\x4721\x5123\x5225\x5A27\x4B29\x402B"
	IL_03be:                                                                        //ldloc				V_12
	IL_03c2:            Temp_12=a(L"\x4E1F\x4721\x5123\x5225\x5A27\x4B29\x402B",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c7:            Temp_32=Temp_12;goto IL_056d;                               //br				IL_056d
	IL_03cc:                                                                        //ldc.i4.1
	IL_03cd:            return 1;                                                   //ret
	IL_03ce:                                                                        //ldc.i4				0x4
	IL_03d3:            V_11=4;                                                     //stloc				V_11
	IL_03d7:            /*goto IL_000e;*/goto IL_03dc;                              //br				IL_000e
	IL_03dc:                                                                        //ldloc.s				V_8
	IL_03de:            if(!V_8)goto IL_0498;                                       //brfalse				IL_0498
	IL_03e3:                                                                        //ldc.i4				0x1d
	IL_03e8:            V_11=29;                                                    //stloc				V_11
	IL_03ec:            /*goto IL_000e;*/goto IL_03f1;                              //br				IL_000e
	IL_03f1:            goto IL_03f3;                                               //br.s				IL_03f3
	IL_03f3:                                                                        //ldc.i4.0
	IL_03f4:            return 0;                                                   //ret
	IL_03f5:                                                                        //ldarg.0
	IL_03f6:            Temp_17=A_0->PublicKeyToken;                                //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_03fb:            Temp_18=Root::T_x149::M_x1(Temp_17);                        //call				System::String^ Root::T_x149::M_x1(array<System::Byte>^)
	IL_0400:                                                                        //ldarg.1
	IL_0401:            Temp_19=A_1->PublicKeyToken;                                //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_0406:            Temp_20=Root::T_x149::M_x1(Temp_19);                        //call				System::String^ Root::T_x149::M_x1(array<System::Byte>^)
	IL_040b:            Temp_21=Temp_18->CompareTo(Temp_20);                        //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0410:            V_10=Temp_21;                                               //stloc.s				V_10
	IL_0412:                                                                        //ldc.i4				0x19
	IL_0417:            V_11=25;                                                    //stloc				V_11
	IL_041b:            /*goto IL_000e;*/goto IL_0420;                              //br				IL_000e
	IL_0420:                                                                        //ldloc.s				V_10
	IL_0422:            if(V_10==0)goto IL_059a;                                    //brfalse				IL_059a
	IL_0427:                                                                        //ldc.i4				0x3
	IL_042c:            V_11=3;                                                     //stloc				V_11
	IL_0430:            /*goto IL_000e;*/goto IL_0435;                              //br				IL_000e
	IL_0435:            goto IL_01bf;                                               //br				IL_01bf
	IL_043a:                                                                        //ldc.i4				0x25
	IL_043f:            V_11=37;                                                    //stloc				V_11
	IL_0443:            /*goto IL_000e;*/goto IL_0448;                              //br				IL_000e
	IL_0448:                                                                        //ldloc.s				V_5
	IL_044a:                                                                        //ldloc.s				V_9
	IL_044c:                                                                        //ldelem.u1
	IL_044d:                                                                        //ldloc.s				V_6
	IL_044f:                                                                        //ldloc.s				V_9
	IL_0451:                                                                        //ldelem.u1
	IL_0452:            if(V_5[V_9]<V_6[V_9])goto IL_0380;                          //blt				IL_0380
	IL_0457:                                                                        //ldc.i4				0x1e
	IL_045c:            V_11=30;                                                    //stloc				V_11
	IL_0460:            /*goto IL_000e;*/goto IL_0465;                              //br				IL_000e
	IL_0465:            goto IL_0546;                                               //br				IL_0546
	IL_046a:                                                                        //ldc.i4				0x13
	IL_046f:            V_11=19;                                                    //stloc				V_11
	IL_0473:            /*goto IL_000e;*/goto IL_0478;                              //br				IL_000e
	IL_0478:                                                                        //ldloc.s				V_5
	IL_047a:            Temp_15=V_5->Length;                                        //ldlen
	IL_047b:                                                                        //conv.i4
	IL_047c:                                                                        //ldloc.s				V_6
	IL_047e:            Temp_16=V_6->Length;                                        //ldlen
	IL_047f:                                                                        //conv.i4
	IL_0480:            if(Temp_15!=Temp_16)goto IL_03f5;                           //bne.un				IL_03f5
	IL_0485:                                                                        //ldc.i4				0x2e
	IL_048a:            V_11=46;                                                    //stloc				V_11
	IL_048e:            /*goto IL_000e;*/goto IL_0493;                              //br				IL_000e
	IL_0493:            goto IL_0133;                                               //br				IL_0133
	IL_0498:                                                                        //ldc.i4				0x1f
	IL_049d:            V_11=31;                                                    //stloc				V_11
	IL_04a1:            /*goto IL_000e;*/goto IL_04a6;                              //br				IL_000e
	IL_04a6:                                                                        //ldloc.s				V_7
	IL_04a8:            if(!V_7)goto IL_051e;                                       //brfalse.s				IL_051e
	IL_04aa:                                                                        //ldc.i4				0x31
	IL_04af:            V_11=49;                                                    //stloc				V_11
	IL_04b3:            /*goto IL_000e;*/goto IL_04b8;                              //br				IL_000e
	IL_04b8:            goto IL_0548;                                               //br				IL_0548
	IL_04bd:                                                                        //ldloc.s				V_9
	IL_04bf:                                                                        //ldc.i4.1
	IL_04c0:                                                                        //add
	IL_04c1:            V_9=(V_9 + 1);                                              //stloc.s				V_9
	IL_04c3:                                                                        //ldc.i4				0x22
	IL_04c8:            V_11=34;                                                    //stloc				V_11
	IL_04cc:            /*goto IL_000e;*/goto IL_04d1;                              //br				IL_000e
	IL_04d1:            goto IL_02c4;                                               //br				IL_02c4
	IL_04d6:            Temp_31=Temp_10;/*warning ! semantic stack doesn't empty at joint !;*///stloc.3
	IL_04d7:                                                                        //ldloc.2
	IL_04d8:                                                                        //ldloc.3
	IL_04d9:            Temp_11=V_2->CompareTo(Temp_31);                            //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_04de:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_04e0:                                                                        //ldc.i4				0x9
	IL_04e5:            V_11=9;                                                     //stloc				V_11
	IL_04e9:            /*goto IL_000e;*/goto IL_04ee;                              //br				IL_000e
	IL_04ee:                                                                        //ldloc.s				V_4
	IL_04f0:            if(V_4==0)goto IL_0221;                                     //brfalse				IL_0221
	IL_04f5:                                                                        //ldc.i4				0x1a
	IL_04fa:            V_11=26;                                                    //stloc				V_11
	IL_04fe:            /*goto IL_000e;*/goto IL_0503;                              //br				IL_000e
	IL_0503:            goto IL_0149;                                               //br				IL_0149
	IL_0508:                                                                        //ldc.i4				0xa
	IL_050d:            V_11=10;                                                    //stloc				V_11
	IL_0511:            /*goto IL_000e;*/goto IL_0516;                              //br				IL_000e
	IL_0516:                                                                        //ldarg.1
	IL_0517:            Temp_10=A_1->Culture;                                       //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_051c:            goto IL_04d6;                                               //br.s				IL_04d6
	IL_051e:                                                                        //ldc.i4				0x2d
	IL_0523:            V_11=45;                                                    //stloc				V_11
	IL_0527:            /*goto IL_000e;*/goto IL_052c;                              //br				IL_000e
	IL_052c:                                                                        //ldloc.s				V_7
	IL_052e:            if(V_7)goto IL_046a;                                        //brtrue				IL_046a
	IL_0533:                                                                        //ldc.i4				0xd
	IL_0538:            V_11=13;                                                    //stloc				V_11
	IL_053c:            /*goto IL_000e;*/goto IL_0541;                              //br				IL_000e
	IL_0541:            goto IL_035b;                                               //br				IL_035b
	IL_0546:                                                                        //ldc.i4.1
	IL_0547:            return 1;                                                   //ret
	IL_0548:                                                                        //ldc.i4				0x23
	IL_054d:            V_11=35;                                                    //stloc				V_11
	IL_0551:            /*goto IL_000e;*/goto IL_0556;                              //br				IL_000e
	IL_0556:                                                                        //ldloc.s				V_8
	IL_0558:            if(V_8)goto IL_051e;                                        //brtrue.s				IL_051e
	IL_055a:                                                                        //ldc.i4				0x2b
	IL_055f:            V_11=43;                                                    //stloc				V_11
	IL_0563:            /*goto IL_000e;*/goto IL_0568;                              //br				IL_000e
	IL_0568:            goto IL_0291;                                               //br				IL_0291
	IL_056d:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.2
	IL_056e:                                                                        //ldc.i4				0x2c
	IL_0573:            V_11=44;                                                    //stloc				V_11
	IL_0577:            /*goto IL_000e;*/goto IL_057c;                              //br				IL_000e
	IL_057c:                                                                        //ldarg.1
	IL_057d:            Temp_28=A_1->Culture;                                       //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0582:            if(Temp_28==nullptr)goto IL_0168;                           //brfalse				IL_0168
	IL_0587:                                                                        //ldc.i4				0xc
	IL_058c:            V_11=12;                                                    //stloc				V_11
	IL_0590:            /*goto IL_000e;*/goto IL_0595;                              //br				IL_000e
	IL_0595:            goto IL_0317;                                               //br				IL_0317
	IL_059a:            goto IL_059d;                                               //br.s				IL_059d
	IL_059c:                                                                        //break
	IL_059d:                                                                        //ldc.i4.0
	IL_059e:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IEventReference^ A_0,Reflector::CodeModel::IEventReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_00a6;case 1:goto IL_007e;case 2:goto IL_0070;case 3:goto IL_00b7;case 4:goto IL_0051;case 5:goto IL_0040;};//switch				(IL_00a6,IL_007e,IL_0070,IL_00b7,IL_0051,IL_0040)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_002f:            Temp_2=safe_cast<System::IComparable^>(Temp_0)->CompareTo(safe_cast<System::Object^>(Temp_1));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_0034:            V_0=Temp_2;                                                 //stloc.0
	IL_0035:                                                                        //ldc.i4				0x5
	IL_003a:            V_3=5;                                                      //stloc				V_3
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:            goto IL_0043;                                               //br.s				IL_0043
	IL_0042:                                                                        //break
	IL_0043:                                                                        //ldloc.0
	IL_0044:            if(V_0==0)goto IL_0086;                                     //brfalse.s				IL_0086
	IL_0046:                                                                        //ldc.i4				0x4
	IL_004b:            V_3=4;                                                      //stloc				V_3
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_0082;                                               //br.s				IL_0082
	IL_0053:                                                                        //ldarg.0
	IL_0054:            Temp_3=A_0->EventType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_4=A_1->EventType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_005f:            Temp_5=safe_cast<System::IComparable^>(Temp_3)->CompareTo(safe_cast<System::Object^>(Temp_4));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_0064:            V_2=Temp_5;                                                 //stloc.2
	IL_0065:                                                                        //ldc.i4				0x2
	IL_006a:            V_3=2;                                                      //stloc				V_3
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:                                                                        //ldloc.2
	IL_0071:            if(V_2==0)goto IL_00b9;                                     //brfalse.s				IL_00b9
	IL_0073:                                                                        //ldc.i4				0x1
	IL_0078:            V_3=1;                                                      //stloc				V_3
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_0084;                                               //br.s				IL_0084
	IL_0080:                                                                        //ldloc.1
	IL_0081:            return V_1;                                                 //ret
	IL_0082:                                                                        //ldloc.0
	IL_0083:            return V_0;                                                 //ret
	IL_0084:                                                                        //ldloc.2
	IL_0085:            return V_2;                                                 //ret
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_008c:                                                                        //ldarg.1
	IL_008d:            Temp_7=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0092:            Temp_8=Temp_6->CompareTo(Temp_7);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0097:            V_1=Temp_8;                                                 //stloc.1
	IL_0098:                                                                        //ldc.i4				0x0
	IL_009d:            V_3=0;                                                      //stloc				V_3
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:            if(V_1==0)goto IL_0053;                                     //brfalse.s				IL_0053
	IL_00a9:                                                                        //ldc.i4				0x3
	IL_00ae:            V_3=3;                                                      //stloc				V_3
	IL_00b2:            /*goto IL_0002;*/goto IL_00b7;                              //br				IL_0002
	IL_00b7:            goto IL_0080;                                               //br.s				IL_0080
	IL_00b9:                                                                        //ldc.i4.0
	IL_00ba:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IFieldReference^ A_0,Reflector::CodeModel::IFieldReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_002e;                                               //br.s				IL_002e
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_0078;case 1:goto IL_004b;case 2:goto IL_00b1;case 3:goto IL_0089;case 4:goto IL_00c2;case 5:goto IL_0059;};//switch				(IL_0078,IL_004b,IL_00b1,IL_0089,IL_00c2,IL_0059)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_003a:            Temp_2=safe_cast<System::IComparable^>(Temp_0)->CompareTo(safe_cast<System::Object^>(Temp_1));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_003f:            V_0=Temp_2;                                                 //stloc.0
	IL_0040:                                                                        //ldc.i4				0x1
	IL_0045:            V_3=1;                                                      //stloc				V_3
	IL_0049:            /*goto IL_0002;*/goto IL_004b;                              //br.s				IL_0002
	IL_004b:                                                                        //ldloc.0
	IL_004c:            if(V_0==0)goto IL_0091;                                     //brfalse.s				IL_0091
	IL_004e:                                                                        //ldc.i4				0x5
	IL_0053:            V_3=5;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_008d;                                               //br.s				IL_008d
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_6=A_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0061:                                                                        //ldarg.1
	IL_0062:            Temp_7=A_1->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0067:            Temp_8=safe_cast<System::IComparable^>(Temp_6)->CompareTo(safe_cast<System::Object^>(Temp_7));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_006c:            V_2=Temp_8;                                                 //stloc.2
	IL_006d:                                                                        //ldc.i4				0x0
	IL_0072:            V_3=0;                                                      //stloc				V_3
	IL_0076:            /*goto IL_0002;*/goto IL_0078;                              //br.s				IL_0002
	IL_0078:                                                                        //ldloc.2
	IL_0079:            if(V_2==0)goto IL_00c4;                                     //brfalse.s				IL_00c4
	IL_007b:                                                                        //ldc.i4				0x3
	IL_0080:            V_3=3;                                                      //stloc				V_3
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:            goto IL_008f;                                               //br.s				IL_008f
	IL_008b:                                                                        //ldloc.1
	IL_008c:            return V_1;                                                 //ret
	IL_008d:                                                                        //ldloc.0
	IL_008e:            return V_0;                                                 //ret
	IL_008f:                                                                        //ldloc.2
	IL_0090:            return V_2;                                                 //ret
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0097:                                                                        //ldarg.1
	IL_0098:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_009d:            Temp_5=Temp_3->CompareTo(Temp_4);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_00a2:            V_1=Temp_5;                                                 //stloc.1
	IL_00a3:                                                                        //ldc.i4				0x2
	IL_00a8:            V_3=2;                                                      //stloc				V_3
	IL_00ac:            /*goto IL_0002;*/goto IL_00b1;                              //br				IL_0002
	IL_00b1:                                                                        //ldloc.1
	IL_00b2:            if(V_1==0)goto IL_005b;                                     //brfalse.s				IL_005b
	IL_00b4:                                                                        //ldc.i4				0x4
	IL_00b9:            V_3=4;                                                      //stloc				V_3
	IL_00bd:            /*goto IL_0002;*/goto IL_00c2;                              //br				IL_0002
	IL_00c2:            goto IL_008b;                                               //br.s				IL_008b
	IL_00c4:                                                                        //ldc.i4.0
	IL_00c5:            return 0;                                                   //ret

}
inline System::String^ Root::T_x149::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	Reflector::CodeModel::IType^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_17 = nullptr;
	Reflector::CodeModel::IType^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	System::String^ Temp_23 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	System::String^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	Reflector::CodeModel::MethodCallingConvention Temp_31 = (Reflector::CodeModel::MethodCallingConvention)0;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	Reflector::CodeModel::ITypeCollection^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::String^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_8=19;                                                     //stloc				V_8
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0011:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0016:            V_0=Temp_1;                                                 //stloc.0
	IL_0017:            /*goto IL_0019;*/goto IL_001701;                            //br.s				IL_0019
	IL_001701:          try{
	IL_0019:            goto IL_0084;                                               //br.s				IL_0084
	IL_001b:                                                                        //ldloc				V_6
	IL_001f:            switch(V_6){case 0:goto IL_014d;case 1:goto IL_022f;case 2:goto IL_00e7;case 3:goto IL_02d4;case 4:goto IL_01de;case 5:goto IL_0129;case 6:goto IL_0329;case 7:goto IL_019c;case 8:goto IL_0256;case 9:goto IL_00a5;case 10:goto IL_013a;case 11:goto IL_00fa;case 12:goto IL_01c4;case 13:goto IL_0165;case 14:goto IL_039b;case 15:goto IL_0119;case 16:goto IL_01b1;case 17:goto IL_00be;case 18:goto IL_01ee;case 19:goto IL_027c;case 20:goto IL_02fb;case 21:goto IL_0189;case 22:goto IL_02a3;case 23:goto IL_0208;};//switch				(IL_014d,IL_022f,IL_00e7,IL_02d4,IL_01de,IL_0129,IL_0329,IL_019c,IL_0256,IL_00a5,IL_013a,IL_00fa,IL_01c4,IL_0165,IL_039b,IL_0119,IL_01b1,IL_00be,IL_01ee,IL_027c,IL_02fb,IL_0189,IL_02a3,IL_0208)
	IL_0084:                                                                        //ldloc.0
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_008b:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0090:                                                                        //ldarg.0
	IL_0091:            Temp_3=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0096:            V_1=Temp_3;                                                 //stloc.1
	IL_0097:                                                                        //ldc.i4				0x9
	IL_009c:            V_6=9;                                                      //stloc				V_6
	IL_00a0:            /*goto IL_001b;*/goto IL_00a5;                              //br				IL_001b
	IL_00a5:                                                                        //ldloc.1
	IL_00a6:            Temp_22=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00ab:            if(Temp_22==0)goto IL_02a8;                                 //brfalse				IL_02a8
	IL_00b0:                                                                        //ldc.i4				0x11
	IL_00b5:            V_6=17;                                                     //stloc				V_6
	IL_00b9:            /*goto IL_001b;*/goto IL_00be;                              //br				IL_001b
	IL_00be:            goto IL_0258;                                               //br				IL_0258
	IL_00c3:                                                                        //ldloc.0
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:                                                                        //ldloc.2
	IL_00c6:            Temp_15=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_00cb:            Temp_16=Temp_15->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_00d0:            V_0->Write(Temp_16);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00d5:                                                                        //ldloc.2
	IL_00d6:                                                                        //ldc.i4.1
	IL_00d7:                                                                        //add
	IL_00d8:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00d9:                                                                        //ldc.i4				0x2
	IL_00de:            V_6=2;                                                      //stloc				V_6
	IL_00e2:            /*goto IL_001b;*/goto IL_00e7;                              //br				IL_001b
	IL_00e7:            goto IL_01b6;                                               //br				IL_01b6
	IL_00ec:                                                                        //ldc.i4				0xb
	IL_00f1:            V_6=11;                                                     //stloc				V_6
	IL_00f5:            /*goto IL_001b;*/goto IL_00fa;                              //br				IL_001b
	IL_00fa:                                                                        //ldarg.0
	IL_00fb:            Temp_24=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0100:            Temp_25=safe_cast<System::Collections::ICollection^>(Temp_24)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0105:                                                                        //ldc.i4.0
	IL_0106:            if(Temp_25<=0)goto IL_020d;                                 //ble				IL_020d
	IL_010b:                                                                        //ldc.i4				0xf
	IL_0110:            V_6=15;                                                     //stloc				V_6
	IL_0114:            /*goto IL_001b;*/goto IL_0119;                              //br				IL_001b
	IL_0119:            goto IL_0167;                                               //br.s				IL_0167
	IL_011b:                                                                        //ldc.i4				0x5
	IL_0120:            V_6=5;                                                      //stloc				V_6
	IL_0124:            /*goto IL_001b;*/goto IL_0129;                              //br				IL_001b
	IL_0129:                                                                        //ldloc.2
	IL_012a:            if(V_2==0)goto IL_00c3;                                     //brfalse.s				IL_00c3
	IL_012c:                                                                        //ldc.i4				0xa
	IL_0131:            V_6=10;                                                     //stloc				V_6
	IL_0135:            /*goto IL_001b;*/goto IL_013a;                              //br				IL_001b
	IL_013a:            goto IL_0281;                                               //br				IL_0281
	IL_013f:                                                                        //ldc.i4				0x0
	IL_0144:            V_6=0;                                                      //stloc				V_6
	IL_0148:            /*goto IL_001b;*/goto IL_014d;                              //br				IL_001b
	IL_014d:                                                                        //ldloc.s				V_4
	IL_014f:                                                                        //ldloc.3
	IL_0150:            Temp_4=safe_cast<System::Collections::ICollection^>(V_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0155:            if(V_4<Temp_4)goto IL_018e;                                 //blt.s				IL_018e
	IL_0157:                                                                        //ldc.i4				0xd
	IL_015c:            V_6=13;                                                     //stloc				V_6
	IL_0160:            /*goto IL_001b;*/goto IL_0165;                              //br				IL_001b
	IL_0165:            goto IL_01e0;                                               //br.s				IL_01e0
	IL_0167:                                                                        //ldloc.0
	IL_0168:                                                                        //ldstr				L"\x1D30\x1332"
	IL_016d:                                                                        //ldloc				V_8
	IL_0171:            Temp_28=a(L"\x1D30\x1332",V_8);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0176:            V_0->Write(Temp_28);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_017b:                                                                        //ldc.i4				0x15
	IL_0180:            V_6=21;                                                     //stloc				V_6
	IL_0184:            /*goto IL_001b;*/goto IL_0189;                              //br				IL_001b
	IL_0189:            goto IL_020d;                                               //br				IL_020d
	IL_018e:                                                                        //ldc.i4				0x7
	IL_0193:            V_6=7;                                                      //stloc				V_6
	IL_0197:            /*goto IL_001b;*/goto IL_019c;                              //br				IL_001b
	IL_019c:                                                                        //ldloc.s				V_4
	IL_019e:            if(V_4==0)goto IL_02fd;                                     //brfalse				IL_02fd
	IL_01a3:                                                                        //ldc.i4				0x10
	IL_01a8:            V_6=16;                                                     //stloc				V_6
	IL_01ac:            /*goto IL_001b;*/goto IL_01b1;                              //br				IL_001b
	IL_01b1:            goto IL_02d9;                                               //br				IL_02d9
	IL_01b6:                                                                        //ldc.i4				0xc
	IL_01bb:            V_6=12;                                                     //stloc				V_6
	IL_01bf:            /*goto IL_001b;*/goto IL_01c4;                              //br				IL_001b
	IL_01c4:                                                                        //ldloc.2
	IL_01c5:                                                                        //ldloc.1
	IL_01c6:            Temp_27=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01cb:            if(V_2<Temp_27)goto IL_011b;                                //blt				IL_011b
	IL_01d0:                                                                        //ldc.i4				0x4
	IL_01d5:            V_6=4;                                                      //stloc				V_6
	IL_01d9:            /*goto IL_001b;*/goto IL_01de;                              //br				IL_001b
	IL_01de:            goto IL_0234;                                               //br.s				IL_0234
	IL_01e0:                                                                        //ldc.i4				0x12
	IL_01e5:            V_6=18;                                                     //stloc				V_6
	IL_01e9:            /*goto IL_001b;*/goto IL_01ee;                              //br				IL_001b
	IL_01ee:                                                                        //ldarg.0
	IL_01ef:            Temp_31=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->CallingConvention;//callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_01f4:                                                                        //ldc.i4.5
	IL_01f5:            if(safe_cast<System::Int32>(Temp_31)!=5)goto IL_032e;       //bne.un				IL_032e
	IL_01fa:                                                                        //ldc.i4				0x17
	IL_01ff:            V_6=23;                                                     //stloc				V_6
	IL_0203:            /*goto IL_001b;*/goto IL_0208;                              //br				IL_001b
	IL_0208:            goto IL_00ec;                                               //br				IL_00ec
	IL_020d:                                                                        //ldloc.0
	IL_020e:                                                                        //ldstr				L"\x1F30\x1D32\x1B34"
	IL_0213:                                                                        //ldloc				V_8
	IL_0217:            Temp_26=a(L"\x1F30\x1D32\x1B34",V_8);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_021c:            V_0->Write(Temp_26);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0221:                                                                        //ldc.i4				0x1
	IL_0226:            V_6=1;                                                      //stloc				V_6
	IL_022a:            /*goto IL_001b;*/goto IL_022f;                              //br				IL_001b
	IL_022f:            goto IL_032e;                                               //br				IL_032e
	IL_0234:                                                                        //ldloc.0
	IL_0235:                                                                        //ldstr				L"\x0F30"
	IL_023a:                                                                        //ldloc				V_8
	IL_023e:            Temp_14=a(L"\x0F30",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0243:            V_0->Write(Temp_14);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0248:                                                                        //ldc.i4				0x8
	IL_024d:            V_6=8;                                                      //stloc				V_6
	IL_0251:            /*goto IL_001b;*/goto IL_0256;                              //br				IL_001b
	IL_0256:            goto IL_02a8;                                               //br.s				IL_02a8
	IL_0258:                                                                        //ldloc.0
	IL_0259:                                                                        //ldstr				L"\x0D30"
	IL_025e:                                                                        //ldloc				V_8
	IL_0262:            Temp_30=a(L"\x0D30",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0267:            V_0->Write(Temp_30);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_026c:                                                                        //ldc.i4.0
	IL_026d:            V_2=0;                                                      //stloc.2
	IL_026e:                                                                        //ldc.i4				0x13
	IL_0273:            V_6=19;                                                     //stloc				V_6
	IL_0277:            /*goto IL_001b;*/goto IL_027c;                              //br				IL_001b
	IL_027c:            goto IL_01b6;                                               //br				IL_01b6
	IL_0281:                                                                        //ldloc.0
	IL_0282:                                                                        //ldstr				L"\x1D30"
	IL_0287:                                                                        //ldloc				V_8
	IL_028b:            Temp_23=a(L"\x1D30",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0290:            V_0->Write(Temp_23);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0295:                                                                        //ldc.i4				0x16
	IL_029a:            V_6=22;                                                     //stloc				V_6
	IL_029e:            /*goto IL_001b;*/goto IL_02a3;                              //br				IL_001b
	IL_02a3:            goto IL_00c3;                                               //br				IL_00c3
	IL_02a8:                                                                        //ldloc.0
	IL_02a9:                                                                        //ldstr				L"\x1930"
	IL_02ae:                                                                        //ldloc				V_8
	IL_02b2:            Temp_20=a(L"\x1930",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b7:            V_0->Write(Temp_20);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02bc:                                                                        //ldarg.0
	IL_02bd:            Temp_21=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_02c2:            V_3=Temp_21;                                                //stloc.3
	IL_02c3:                                                                        //ldc.i4.0
	IL_02c4:            V_4=0;                                                      //stloc.s				V_4
	IL_02c6:                                                                        //ldc.i4				0x3
	IL_02cb:            V_6=3;                                                      //stloc				V_6
	IL_02cf:            /*goto IL_001b;*/goto IL_02d4;                              //br				IL_001b
	IL_02d4:            goto IL_013f;                                               //br				IL_013f
	IL_02d9:                                                                        //ldloc.0
	IL_02da:                                                                        //ldstr				L"\x1D30\x1332"
	IL_02df:                                                                        //ldloc				V_8
	IL_02e3:            Temp_29=a(L"\x1D30\x1332",V_8);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e8:            V_0->Write(Temp_29);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02ed:                                                                        //ldc.i4				0x14
	IL_02f2:            V_6=20;                                                     //stloc				V_6
	IL_02f6:            /*goto IL_001b;*/goto IL_02fb;                              //br				IL_001b
	IL_02fb:            goto IL_02fd;                                               //br.s				IL_02fd
	IL_02fd:                                                                        //ldloc.0
	IL_02fe:                                                                        //ldloc.3
	IL_02ff:                                                                        //ldloc.s				V_4
	IL_0301:            Temp_17=V_3[V_4];                                           //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0306:            Temp_18=Temp_17->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_030b:            Temp_19=Temp_18->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_0310:            V_0->Write(Temp_19);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0315:                                                                        //ldloc.s				V_4
	IL_0317:                                                                        //ldc.i4.1
	IL_0318:                                                                        //add
	IL_0319:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_031b:                                                                        //ldc.i4				0x6
	IL_0320:            V_6=6;                                                      //stloc				V_6
	IL_0324:            /*goto IL_001b;*/goto IL_0329;                              //br				IL_001b
	IL_0329:            goto IL_013f;                                               //br				IL_013f
	IL_032e:                                                                        //ldloc.0
	IL_032f:                                                                        //ldstr				L"\x1830"
	IL_0334:                                                                        //ldloc				V_8
	IL_0338:            Temp_5=a(L"\x1830",V_8);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033d:            V_0->Write(Temp_5);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0342:                                                                        //ldloc.0
	IL_0343:                                                                        //ldstr				L"\x1130\x0932\x1534"
	IL_0348:                                                                        //ldloc				V_8
	IL_034c:            Temp_6=a(L"\x1130\x0932\x1534",V_8);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0351:            V_0->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0356:                                                                        //ldloc.0
	IL_0357:                                                                        //ldarg.0
	IL_0358:            Temp_7=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_035d:            Temp_8=Temp_7->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0362:            V_0->Write(safe_cast<System::Object^>(Temp_8));             //callvirt				void System::IO::TextWriter::Write(System::Object^)
	IL_0367:                                                                        //ldarg.0
	IL_0368:            Temp_9=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_036d:            Temp_10=Temp_9->ToString();                                 //callvirt				System::String^ System::Object::ToString()
	IL_0372:                                                                        //ldstr				L"\x1F30"
	IL_0377:                                                                        //ldloc				V_8
	IL_037b:            Temp_11=a(L"\x1F30",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0380:                                                                        //ldloc.0
	IL_0381:            Temp_12=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0386:            Temp_13=System::String::Concat(Temp_10,Temp_11,Temp_12);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_038b:            V_5=Temp_13;                                                //stloc.s				V_5
	IL_038d:                                                                        //ldc.i4				0xe
	IL_0392:            V_6=14;                                                     //stloc				V_6
	IL_0396:            /*goto IL_001b;*/goto IL_039b;                              //br				IL_001b
	IL_039b:            goto IL_03e3;                                               //leave.s				IL_03e3
	                    ;}
	                    finally{
	IL_039d:                                                                        //ldc.i4				0x1
	IL_03a2:            V_7=1;                                                      //stloc				V_7
	IL_03a6:            /*goto IL_03aa;*/goto IL_03a8;                              //br.s				IL_03aa
	IL_03a8:            goto IL_03bf;                                               //br.s				IL_03bf
	IL_03aa:                                                                        //ldloc				V_7
	IL_03ae:            switch(V_7){case 0:goto IL_03e0;case 1:goto IL_03a8;case 2:goto IL_03cd;};//switch				(IL_03e0,IL_03a8,IL_03cd)
	IL_03bf:                                                                        //ldloc.0
	IL_03c0:            if(V_0==nullptr)goto IL_03e2;                               //brfalse.s				IL_03e2
	IL_03c2:                                                                        //ldc.i4				0x2
	IL_03c7:            V_7=2;                                                      //stloc				V_7
	IL_03cb:            /*goto IL_03aa;*/goto IL_03cd;                              //br.s				IL_03aa
	IL_03cd:            goto IL_03cf;                                               //br.s				IL_03cf
	IL_03cf:                                                                        //ldloc.0
	IL_03d0:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_03d5:                                                                        //ldc.i4				0x0
	IL_03da:            V_7=0;                                                      //stloc				V_7
	IL_03de:            /*goto IL_03aa;*/goto IL_03e0;                              //br.s				IL_03aa
	IL_03e0:            goto IL_03e2;                                               //br.s				IL_03e2
	IL_03e2:                                                                        //endfinally
	                    ;}
	IL_03e3:                                                                        //ldloc.s				V_5
	IL_03e5:            return V_5;                                                 //ret

}
inline System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IMethodReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_6 = nullptr;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	Reflector::CodeModel::IMethodReturnType^ Temp_15 = nullptr;
	Reflector::CodeModel::IType^ Temp_16 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_17 = nullptr;
	Reflector::CodeModel::IType^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	System::Int32 Temp_24 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_0043;                                               //br.s				IL_0043
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0172;case 1:goto IL_0158;case 2:goto IL_0060;case 3:goto IL_0093;case 4:goto IL_01db;case 5:goto IL_00cf;case 6:goto IL_0125;case 7:goto IL_01a6;case 8:goto IL_0110;case 9:goto IL_007c;case 10:goto IL_01ec;case 11:goto IL_0191;case 12:goto IL_00e1;case 13:goto IL_0147;};//switch				(IL_0172,IL_0158,IL_0060,IL_0093,IL_01db,IL_00cf,IL_0125,IL_01a6,IL_0110,IL_007c,IL_01ec,IL_0191,IL_00e1,IL_0147)
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0049:                                                                        //ldarg.1
	IL_004a:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_004f:            Temp_2=safe_cast<System::IComparable^>(Temp_0)->CompareTo(safe_cast<System::Object^>(Temp_1));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_0054:            V_0=Temp_2;                                                 //stloc.0
	IL_0055:                                                                        //ldc.i4				0x2
	IL_005a:            V_7=2;                                                      //stloc				V_7
	IL_005e:            /*goto IL_0002;*/goto IL_0060;                              //br.s				IL_0002
	IL_0060:                                                                        //ldloc.0
	IL_0061:            if(V_0==0)goto IL_0127;                                     //brfalse				IL_0127
	IL_0066:                                                                        //ldc.i4.3
	IL_0067:                                                                        //dup
	IL_0068:                                                                        //dup
	IL_0069:                                                                        //ldc.i4.3
	IL_006a:                                                                        //sub
	IL_006b:                                                                        //blt				IL_0067
	IL_0070:                                                                        //pop
	IL_0071:                                                                        //ldc.i4				0x9
	IL_0076:            V_7=9;                                                      //stloc				V_7
	IL_007a:            /*goto IL_0002;*/goto IL_007c;                              //br.s				IL_0002
	IL_007c:            goto IL_0162;                                               //br				IL_0162
	IL_0081:                                                                        //ldloc.3
	IL_0082:                                                                        //ldc.i4.1
	IL_0083:                                                                        //add
	IL_0084:            V_3=(V_3 + 1);                                              //stloc.3
	IL_0085:                                                                        //ldc.i4				0x3
	IL_008a:            V_7=3;                                                      //stloc				V_7
	IL_008e:            /*goto IL_0002;*/goto IL_0093;                              //br				IL_0002
	IL_0093:            goto IL_0164;                                               //br				IL_0164
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_5=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_009e:                                                                        //ldloc.3
	IL_009f:            Temp_6=Temp_5[V_3];                                         //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_00a4:            Temp_7=Temp_6->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00a9:                                                                        //ldarg.1
	IL_00aa:            Temp_8=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_1)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_00af:                                                                        //ldloc.3
	IL_00b0:            Temp_9=Temp_8[V_3];                                         //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_00b5:            Temp_10=Temp_9->ParameterType;                              //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00ba:            Temp_11=safe_cast<System::IComparable^>(Temp_7)->CompareTo(safe_cast<System::Object^>(Temp_10));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_00bf:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_00c1:                                                                        //ldc.i4				0x5
	IL_00c6:            V_7=5;                                                      //stloc				V_7
	IL_00ca:            /*goto IL_0002;*/goto IL_00cf;                              //br				IL_0002
	IL_00cf:                                                                        //ldloc.s				V_4
	IL_00d1:            if(V_4==0)goto IL_0081;                                     //brfalse.s				IL_0081
	IL_00d3:                                                                        //ldc.i4				0xc
	IL_00d8:            V_7=12;                                                     //stloc				V_7
	IL_00dc:            /*goto IL_0002;*/goto IL_00e1;                              //br				IL_0002
	IL_00e1:            goto IL_015a;                                               //br.s				IL_015a
	IL_00e3:                                                                        //ldloc.1
	IL_00e4:            return V_1;                                                 //ret
	IL_00e5:                                                                        //ldarg.0
	IL_00e6:            Temp_15=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_00eb:            Temp_16=Temp_15->Type;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_00f0:                                                                        //ldarg.1
	IL_00f1:            Temp_17=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_1)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_00f6:            Temp_18=Temp_17->Type;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_00fb:            Temp_19=safe_cast<System::IComparable^>(Temp_16)->CompareTo(safe_cast<System::Object^>(Temp_18));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_0100:            V_5=Temp_19;                                                //stloc.s				V_5
	IL_0102:                                                                        //ldc.i4				0x8
	IL_0107:            V_7=8;                                                      //stloc				V_7
	IL_010b:            /*goto IL_0002;*/goto IL_0110;                              //br				IL_0002
	IL_0110:                                                                        //ldloc.s				V_5
	IL_0112:            if(V_5==0)goto IL_01f1;                                     //brfalse				IL_01f1
	IL_0117:                                                                        //ldc.i4				0x6
	IL_011c:            V_7=6;                                                      //stloc				V_7
	IL_0120:            /*goto IL_0002;*/goto IL_0125;                              //br				IL_0002
	IL_0125:            goto IL_015d;                                               //br.s				IL_015d
	IL_0127:                                                                        //ldarg.0
	IL_0128:            Temp_12=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_012d:                                                                        //ldarg.1
	IL_012e:            Temp_13=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0133:            Temp_14=Temp_12->CompareTo(Temp_13);                        //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0138:            V_1=Temp_14;                                                //stloc.1
	IL_0139:                                                                        //ldc.i4				0xd
	IL_013e:            V_7=13;                                                     //stloc				V_7
	IL_0142:            /*goto IL_0002;*/goto IL_0147;                              //br				IL_0002
	IL_0147:                                                                        //ldloc.1
	IL_0148:            if(V_1==0)goto IL_01a8;                                     //brfalse.s				IL_01a8
	IL_014a:                                                                        //ldc.i4				0x1
	IL_014f:            V_7=1;                                                      //stloc				V_7
	IL_0153:            /*goto IL_0002;*/goto IL_0158;                              //br				IL_0002
	IL_0158:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_015a:                                                                        //ldloc.s				V_4
	IL_015c:            return V_4;                                                 //ret
	IL_015d:                                                                        //ldloc.s				V_5
	IL_015f:            return V_5;                                                 //ret
	IL_0160:                                                                        //ldloc.2
	IL_0161:            return V_2;                                                 //ret
	IL_0162:                                                                        //ldloc.0
	IL_0163:            return V_0;                                                 //ret
	IL_0164:                                                                        //ldc.i4				0x0
	IL_0169:            V_7=0;                                                      //stloc				V_7
	IL_016d:            /*goto IL_0002;*/goto IL_0172;                              //br				IL_0002
	IL_0172:                                                                        //ldloc.3
	IL_0173:                                                                        //ldarg.0
	IL_0174:            Temp_3=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0179:            Temp_4=safe_cast<System::Collections::ICollection^>(Temp_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_017e:            if(V_3<Temp_4)goto IL_0098;                                 //blt				IL_0098
	IL_0183:                                                                        //ldc.i4				0xb
	IL_0188:            V_7=11;                                                     //stloc				V_7
	IL_018c:            /*goto IL_0002;*/goto IL_0191;                              //br				IL_0002
	IL_0191:            goto IL_00e5;                                               //br				IL_00e5
	IL_0196:                                                                        //ldc.i4.0
	IL_0197:            V_3=0;                                                      //stloc.3
	IL_0198:                                                                        //ldc.i4				0x7
	IL_019d:            V_7=7;                                                      //stloc				V_7
	IL_01a1:            /*goto IL_0002;*/goto IL_01a6;                              //br				IL_0002
	IL_01a6:            goto IL_0164;                                               //br.s				IL_0164
	IL_01a8:                                                                        //ldarg.0
	IL_01a9:            Temp_20=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_01ae:            Temp_21=safe_cast<System::Collections::ICollection^>(Temp_20)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01b3:            V_6=Temp_21;                                                //stloc.s				V_6
	IL_01b5:                                                                        //ldloca.s				V_6
	IL_01b7:                                                                        //ldarg.1
	IL_01b8:            Temp_22=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_1)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_01bd:            Temp_23=safe_cast<System::Collections::ICollection^>(Temp_22)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01c2:                                                                        //box				System::Int32
	IL_01c7:            Temp_24=V_6.CompareTo(safe_cast<System::Object^>(Temp_23)); //call				System::Int32 System::Int32::CompareTo(System::Object^)
	IL_01cc:            V_2=Temp_24;                                                //stloc.2
	IL_01cd:                                                                        //ldc.i4				0x4
	IL_01d2:            V_7=4;                                                      //stloc				V_7
	IL_01d6:            /*goto IL_0002;*/goto IL_01db;                              //br				IL_0002
	IL_01db:                                                                        //ldloc.2
	IL_01dc:            if(V_2==0)goto IL_0196;                                     //brfalse.s				IL_0196
	IL_01de:                                                                        //ldc.i4				0xa
	IL_01e3:            V_7=10;                                                     //stloc				V_7
	IL_01e7:            /*goto IL_0002;*/goto IL_01ec;                              //br				IL_0002
	IL_01ec:            goto IL_0160;                                               //br				IL_0160
	IL_01f1:                                                                        //ldc.i4.0
	IL_01f2:            return 0;                                                   //ret

}
inline System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IMethodSignature^ A_0,Reflector::CodeModel::IMethodSignature^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReturnType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	System::Boolean Temp_7 = false;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_9 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_10 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_11 = nullptr;
	Reflector::CodeModel::IType^ Temp_12 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_13 = nullptr;
	Reflector::CodeModel::IType^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	System::Int32 Temp_18 = 0;
	Reflector::CodeModel::MethodCallingConvention Temp_19 = (Reflector::CodeModel::MethodCallingConvention)0;
	Reflector::CodeModel::MethodCallingConvention Temp_20 = (Reflector::CodeModel::MethodCallingConvention)0;
	//local variables.
	Reflector::CodeModel::IParameterDeclarationCollection^ V_0 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_3=9;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0056;                                               //br.s				IL_0056
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_00e0;case 1:goto IL_009b;case 2:goto IL_011e;case 3:goto IL_0145;case 4:goto IL_00cd;case 5:goto IL_0072;case 6:goto IL_0177;case 7:goto IL_00ae;case 8:goto IL_010e;case 9:goto IL_000b;case 10:goto IL_018a;case 11:goto IL_01ba;case 12:goto IL_01da;case 13:goto IL_01f9;case 14:goto IL_0086;case 15:goto IL_0160;};//switch				(IL_00e0,IL_009b,IL_011e,IL_0145,IL_00cd,IL_0072,IL_0177,IL_00ae,IL_010e,IL_000b,IL_018a,IL_01ba,IL_01da,IL_01f9,IL_0086,IL_0160)
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_19=A_0->CallingConvention;                             //callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_005c:                                                                        //ldarg.1
	IL_005d:            Temp_20=A_1->CallingConvention;                             //callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_0062:            if(Temp_19==Temp_20)goto IL_0110;                           //beq				IL_0110
	IL_0067:                                                                        //ldc.i4				0x5
	IL_006c:            V_3=5;                                                      //stloc				V_3
	IL_0070:            /*goto IL_000d;*/goto IL_0072;                              //br.s				IL_000d
	IL_0072:            goto IL_01bc;                                               //br				IL_01bc
	IL_0077:                                                                        //ldloc.2
	IL_0078:                                                                        //ldc.i4.1
	IL_0079:                                                                        //add
	IL_007a:            V_2=(V_2 + 1);                                              //stloc.2
	IL_007b:                                                                        //ldc.i4				0xe
	IL_0080:            V_3=14;                                                     //stloc				V_3
	IL_0084:            /*goto IL_000d;*/goto IL_0086;                              //br.s				IL_000d
	IL_0086:            goto IL_0152;                                               //br				IL_0152
	IL_008b:                                                                        //ldc.i4.0
	IL_008c:            V_2=0;                                                      //stloc.2
	IL_008d:                                                                        //ldc.i4				0x1
	IL_0092:            V_3=1;                                                      //stloc				V_3
	IL_0096:            /*goto IL_000d;*/goto IL_009b;                              //br				IL_000d
	IL_009b:            goto IL_0152;                                               //br				IL_0152
	IL_00a0:                                                                        //ldc.i4				0x7
	IL_00a5:            V_3=7;                                                      //stloc				V_3
	IL_00a9:            /*goto IL_000d;*/goto IL_00ae;                              //br				IL_000d
	IL_00ae:                                                                        //ldarg.0
	IL_00af:            Temp_7=A_0->ExplicitThis;                                   //callvirt				System::Boolean Reflector::CodeModel::IMethodSignature::get_ExplicitThis()
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:            Temp_8=A_1->ExplicitThis;                                   //callvirt				System::Boolean Reflector::CodeModel::IMethodSignature::get_ExplicitThis()
	IL_00ba:            if(Temp_7==Temp_8)goto IL_01be;                             //beq				IL_01be
	IL_00bf:                                                                        //ldc.i4				0x4
	IL_00c4:            V_3=4;                                                      //stloc				V_3
	IL_00c8:            /*goto IL_000d;*/goto IL_00cd;                              //br				IL_000d
	IL_00cd:            goto IL_0150;                                               //br				IL_0150
	IL_00d2:                                                                        //ldc.i4				0x0
	IL_00d7:            V_3=0;                                                      //stloc				V_3
	IL_00db:            /*goto IL_000d;*/goto IL_00e0;                              //br				IL_000d
	IL_00e0:                                                                        //ldarg.0
	IL_00e1:            Temp_0=A_0->ReturnType;                                     //callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_00e6:            Temp_1=Temp_0->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_00eb:                                                                        //ldarg.1
	IL_00ec:            Temp_2=A_1->ReturnType;                                     //callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_00f1:            Temp_3=Temp_2->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_00f6:            Temp_4=Temp_1->Equals(safe_cast<System::Object^>(Temp_3));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00fb:            if(Temp_4)goto IL_01fe;                                     //brtrue				IL_01fe
	IL_0100:                                                                        //ldc.i4				0x8
	IL_0105:            V_3=8;                                                      //stloc				V_3
	IL_0109:            /*goto IL_000d;*/goto IL_010e;                              //br				IL_000d
	IL_010e:            goto IL_014c;                                               //br.s				IL_014c
	IL_0110:                                                                        //ldc.i4				0x2
	IL_0115:            V_3=2;                                                      //stloc				V_3
	IL_0119:            /*goto IL_000d;*/goto IL_011e;                              //br				IL_000d
	IL_011e:                                                                        //ldc.i4.2
	IL_011f:                                                                        //dup
	IL_0120:                                                                        //dup
	IL_0121:                                                                        //ldc.i4.7
	IL_0122:                                                                        //add
	IL_0123:                                                                        //bgt				IL_011f
	IL_0128:                                                                        //pop
	IL_0129:                                                                        //ldarg.0
	IL_012a:            Temp_5=A_0->HasThis;                                        //callvirt				System::Boolean Reflector::CodeModel::IMethodSignature::get_HasThis()
	IL_012f:                                                                        //ldarg.1
	IL_0130:            Temp_6=A_1->HasThis;                                        //callvirt				System::Boolean Reflector::CodeModel::IMethodSignature::get_HasThis()
	IL_0135:            if(Temp_5!=Temp_6)goto IL_0150;                             //bne.un.s				IL_0150
	IL_0137:                                                                        //ldc.i4				0x3
	IL_013c:            V_3=3;                                                      //stloc				V_3
	IL_0140:            /*goto IL_000d;*/goto IL_0145;                              //br				IL_000d
	IL_0145:            goto IL_00a0;                                               //br				IL_00a0
	IL_014a:                                                                        //ldc.i4.0
	IL_014b:            return false;                                               //ret
	IL_014c:                                                                        //ldc.i4.0
	IL_014d:            return false;                                               //ret
	IL_014e:                                                                        //ldc.i4.0
	IL_014f:            return false;                                               //ret
	IL_0150:                                                                        //ldc.i4.0
	IL_0151:            return false;                                               //ret
	IL_0152:                                                                        //ldc.i4				0xf
	IL_0157:            V_3=15;                                                     //stloc				V_3
	IL_015b:            /*goto IL_000d;*/goto IL_0160;                              //br				IL_000d
	IL_0160:                                                                        //ldloc.2
	IL_0161:                                                                        //ldloc.0
	IL_0162:            Temp_18=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0167:            if(V_2<Temp_18)goto IL_017c;                                //blt.s				IL_017c
	IL_0169:                                                                        //ldc.i4				0x6
	IL_016e:            V_3=6;                                                      //stloc				V_3
	IL_0172:            /*goto IL_000d;*/goto IL_0177;                              //br				IL_000d
	IL_0177:            goto IL_00d2;                                               //br				IL_00d2
	IL_017c:                                                                        //ldc.i4				0xa
	IL_0181:            V_3=10;                                                     //stloc				V_3
	IL_0185:            /*goto IL_000d;*/goto IL_018a;                              //br				IL_000d
	IL_018a:                                                                        //ldloc.0
	IL_018b:                                                                        //ldloc.2
	IL_018c:            Temp_11=V_0[V_2];                                           //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0191:            Temp_12=Temp_11->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0196:                                                                        //ldloc.1
	IL_0197:                                                                        //ldloc.2
	IL_0198:            Temp_13=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_019d:            Temp_14=Temp_13->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_01a2:            Temp_15=Temp_12->Equals(safe_cast<System::Object^>(Temp_14));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_01a7:            if(Temp_15)goto IL_0077;                                    //brtrue				IL_0077
	IL_01ac:                                                                        //ldc.i4				0xb
	IL_01b1:            V_3=11;                                                     //stloc				V_3
	IL_01b5:            /*goto IL_000d;*/goto IL_01ba;                              //br				IL_000d
	IL_01ba:            goto IL_014a;                                               //br.s				IL_014a
	IL_01bc:                                                                        //ldc.i4.0
	IL_01bd:            return false;                                               //ret
	IL_01be:                                                                        //ldarg.0
	IL_01bf:            Temp_9=A_0->Parameters;                                     //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_01c4:            V_0=Temp_9;                                                 //stloc.0
	IL_01c5:                                                                        //ldarg.1
	IL_01c6:            Temp_10=A_1->Parameters;                                    //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_01cb:            V_1=Temp_10;                                                //stloc.1
	IL_01cc:                                                                        //ldc.i4				0xc
	IL_01d1:            V_3=12;                                                     //stloc				V_3
	IL_01d5:            /*goto IL_000d;*/goto IL_01da;                              //br				IL_000d
	IL_01da:                                                                        //ldloc.0
	IL_01db:            Temp_16=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01e0:                                                                        //ldloc.1
	IL_01e1:            Temp_17=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01e6:            if(Temp_16==Temp_17)goto IL_008b;                           //beq				IL_008b
	IL_01eb:                                                                        //ldc.i4				0xd
	IL_01f0:            V_3=13;                                                     //stloc				V_3
	IL_01f4:            /*goto IL_000d;*/goto IL_01f9;                              //br				IL_000d
	IL_01f9:            goto IL_014e;                                               //br				IL_014e
	IL_01fe:                                                                        //ldc.i4.1
	IL_01ff:            return true;                                                //ret

}
inline System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IPropertyReference^ A_0,Reflector::CodeModel::IPropertyReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0070;case 1:goto IL_00a6;case 2:goto IL_00b7;case 3:goto IL_004e;case 4:goto IL_0040;case 5:goto IL_007e;};//switch				(IL_0070,IL_00a6,IL_00b7,IL_004e,IL_0040,IL_007e)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_002f:            Temp_2=safe_cast<System::IComparable^>(Temp_0)->CompareTo(safe_cast<System::Object^>(Temp_1));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_0034:            V_0=Temp_2;                                                 //stloc.0
	IL_0035:                                                                        //ldc.i4				0x4
	IL_003a:            V_3=4;                                                      //stloc				V_3
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:            if(V_0==0)goto IL_0086;                                     //brfalse.s				IL_0086
	IL_0043:                                                                        //ldc.i4				0x3
	IL_0048:            V_3=3;                                                      //stloc				V_3
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_0082;                                               //br.s				IL_0082
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_3=A_0->PropertyType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0056:                                                                        //ldarg.1
	IL_0057:            Temp_4=A_1->PropertyType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_005c:            Temp_5=safe_cast<System::IComparable^>(Temp_3)->CompareTo(safe_cast<System::Object^>(Temp_4));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_0061:            V_2=Temp_5;                                                 //stloc.2
	IL_0062:            goto IL_0065;                                               //br.s				IL_0065
	IL_0064:                                                                        //break
	IL_0065:                                                                        //ldc.i4				0x0
	IL_006a:            V_3=0;                                                      //stloc				V_3
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:                                                                        //ldloc.2
	IL_0071:            if(V_2==0)goto IL_00b9;                                     //brfalse.s				IL_00b9
	IL_0073:                                                                        //ldc.i4				0x5
	IL_0078:            V_3=5;                                                      //stloc				V_3
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_0084;                                               //br.s				IL_0084
	IL_0080:                                                                        //ldloc.1
	IL_0081:            return V_1;                                                 //ret
	IL_0082:                                                                        //ldloc.0
	IL_0083:            return V_0;                                                 //ret
	IL_0084:                                                                        //ldloc.2
	IL_0085:            return V_2;                                                 //ret
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_008c:                                                                        //ldarg.1
	IL_008d:            Temp_7=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0092:            Temp_8=Temp_6->CompareTo(Temp_7);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0097:            V_1=Temp_8;                                                 //stloc.1
	IL_0098:                                                                        //ldc.i4				0x1
	IL_009d:            V_3=1;                                                      //stloc				V_3
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:            if(V_1==0)goto IL_0050;                                     //brfalse.s				IL_0050
	IL_00a9:                                                                        //ldc.i4				0x2
	IL_00ae:            V_3=2;                                                      //stloc				V_3
	IL_00b2:            /*goto IL_0002;*/goto IL_00b7;                              //br				IL_0002
	IL_00b7:            goto IL_0080;                                               //br.s				IL_0080
	IL_00b9:                                                                        //ldc.i4.0
	IL_00ba:            return 0;                                                   //ret

}
inline System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IType^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_8 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_9 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Boolean Temp_12 = false;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_13 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_16 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_19 = nullptr;
	Reflector::CodeModel::IType^ Temp_20 = nullptr;
	Reflector::CodeModel::IType^ Temp_21 = nullptr;
	Reflector::CodeModel::IType^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Boolean Temp_26 = false;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_27 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_28 = nullptr;
	System::Int32 Temp_29 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_30 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_31 = nullptr;
	System::Int32 Temp_32 = 0;
	Reflector::CodeModel::IType^ Temp_33 = nullptr;
	Reflector::CodeModel::IType^ Temp_34 = nullptr;
	System::Boolean Temp_35 = false;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_36 = nullptr;
	System::Int32 Temp_37 = 0;
	System::Int32 Temp_38 = 0;
	System::Int32 Temp_39 = 0;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_40 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_41 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_42 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_45 = nullptr;
	Reflector::CodeModel::IType^ Temp_46 = nullptr;
	Reflector::CodeModel::IType^ Temp_47 = nullptr;
	System::Boolean Temp_48 = false;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_49 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_50 = nullptr;
	System::Boolean Temp_51 = false;
	Reflector::CodeModel::IType^ Temp_52 = nullptr;
	Reflector::CodeModel::IType^ Temp_53 = nullptr;
	System::Boolean Temp_54 = false;
	Reflector::CodeModel::IMethodReference^ Temp_55 = nullptr;
	Reflector::CodeModel::IType^ Temp_56 = nullptr;
	System::Boolean Temp_57 = false;
	System::Boolean Temp_58 = false;
	System::Boolean Temp_59 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::IArrayType^ V_2 = nullptr;
	Reflector::CodeModel::IArrayType^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	Reflector::CodeModel::IPointerType^ V_6 = nullptr;
	Reflector::CodeModel::IPointerType^ V_7 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_8 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_9 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_10 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_11 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_12 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_13 = nullptr;
	Reflector::CodeModel::IFunctionPointer^ V_14 = nullptr;
	Reflector::CodeModel::IFunctionPointer^ V_15 = nullptr;
	Reflector::CodeModel::IGenericArgument^ V_16 = nullptr;
	Reflector::CodeModel::IGenericArgument^ V_17 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_18 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_19 = nullptr;
	System::Boolean V_20 = false;
	Reflector::CodeModel::ITypeReference^ V_21 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_22 = nullptr;
	System::Boolean V_23 = false;
	Reflector::CodeModel::IGenericParameter^ V_24 = nullptr;
	Reflector::CodeModel::IGenericParameter^ V_25 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_26 = nullptr;
	Reflector::CodeModel::IType^ V_27 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_28 = nullptr;
	Reflector::CodeModel::IType^ V_29 = nullptr;
	System::Int32 V_30 = 0;
	//method body ------- 
	IL_0000:            goto IL_0166;                                               //br				IL_0166
	IL_0005:                                                                        //ldloc				V_30
	IL_0009:            switch(V_30){case 0:goto IL_01a9;case 1:goto IL_0521;case 2:goto IL_02d9;case 3:goto IL_05cc;case 4:goto IL_0a14;case 5:goto IL_0217;case 6:goto IL_08de;case 7:goto IL_0748;case 8:goto IL_09c6;case 9:goto IL_055f;case 10:goto IL_0789;case 11:goto IL_040e;case 12:goto IL_03f9;case 13:goto IL_038b;case 14:goto IL_08b6;case 15:goto IL_0202;case 16:goto IL_05e0;case 17:goto IL_0182;case 18:goto IL_02f5;case 19:goto IL_0496;case 20:goto IL_0834;case 21:goto IL_0620;case 22:goto IL_09db;case 23:goto IL_0436;case 24:goto IL_036b;case 25:goto IL_098e;case 26:goto IL_06b4;case 27:goto IL_01d1;case 28:goto IL_0919;case 29:goto IL_023f;case 30:goto IL_04ab;case 31:goto IL_044b;case 32:goto IL_07ba;case 33:goto IL_022a;case 34:goto IL_0536;case 35:goto IL_0933;case 36:goto IL_07f2;case 37:goto IL_08a1;case 38:goto IL_0861;case 39:goto IL_0252;case 40:goto IL_07cf;case 41:goto IL_0670;case 42:goto IL_0a51;case 43:goto IL_03a8;case 44:goto IL_05bc;case 45:goto IL_0807;case 46:goto IL_0633;case 47:goto IL_033f;case 48:goto IL_0a65;case 49:goto IL_03cb;case 50:goto IL_045e;case 51:goto IL_027a;case 52:goto IL_05fc;case 53:goto IL_0700;case 54:goto IL_0721;case 55:goto IL_0354;case 56:goto IL_02c4;case 57:goto IL_088c;case 58:goto IL_065b;case 59:goto IL_0904;case 60:goto IL_0196;case 61:goto IL_04ec;case 62:goto IL_068c;case 63:goto IL_01e6;case 64:goto IL_0a27;case 65:goto IL_0969;case 66:goto IL_0267;case 67:goto IL_09a3;case 68:goto IL_032b;case 69:goto IL_04c4;case 70:goto IL_0423;case 71:goto IL_081a;case 72:goto IL_06a1;case 73:goto IL_09ee;case 74:goto IL_05a7;case 75:goto IL_03e0;case 76:goto IL_0473;case 77:goto IL_04d7;case 78:goto IL_06eb;case 79:goto IL_08cb;case 80:goto IL_0847;case 81:goto IL_01be;case 82:goto IL_0777;case 83:goto IL_0954;case 84:goto IL_030a;case 85:goto IL_02b1;};//switch				(IL_01a9,IL_0521,IL_02d9,IL_05cc,IL_0a14,IL_0217,IL_08de,IL_0748,IL_09c6,IL_055f,IL_0789,IL_040e,IL_03f9,IL_038b,IL_08b6,IL_0202,IL_05e0,IL_0182,IL_02f5,IL_0496,IL_0834,IL_0620,IL_09db,IL_0436,IL_036b,IL_098e,IL_06b4,IL_01d1,IL_0919,IL_023f,IL_04ab,IL_044b,IL_07ba,IL_022a,IL_0536,IL_0933,IL_07f2,IL_08a1,IL_0861,IL_0252,IL_07cf,IL_0670,IL_0a51,IL_03a8,IL_05bc,IL_0807,IL_0633,IL_033f,IL_0a65,IL_03cb,IL_045e,IL_027a,IL_05fc,IL_0700,IL_0721,IL_0354,IL_02c4,IL_088c,IL_065b,IL_0904,IL_0196,IL_04ec,IL_068c,IL_01e6,IL_0a27,IL_0969,IL_0267,IL_09a3,IL_032b,IL_04c4,IL_0423,IL_081a,IL_06a1,IL_09ee,IL_05a7,IL_03e0,IL_0473,IL_04d7,IL_06eb,IL_08cb,IL_0847,IL_01be,IL_0777,IL_0954,IL_030a,IL_02b1)
	IL_0166:                                                                        //ldarg.0
	IL_0167:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_016c:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_016d:                                                                        //ldarg.1
	IL_016e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0173:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_1);//stloc.1
	IL_0174:                                                                        //ldc.i4				0x11
	IL_0179:            V_30=17;                                                    //stloc				V_30
	IL_017d:            /*goto IL_0005;*/goto IL_0182;                              //br				IL_0005
	IL_0182:                                                                        //ldloc.0
	IL_0183:            if(V_0==nullptr)goto IL_030f;                               //brfalse				IL_030f
	IL_0188:                                                                        //ldc.i4				0x3c
	IL_018d:            V_30=60;                                                    //stloc				V_30
	IL_0191:            /*goto IL_0005;*/goto IL_0196;                              //br				IL_0005
	IL_0196:            goto IL_05be;                                               //br				IL_05be
	IL_019b:                                                                        //ldc.i4				0x0
	IL_01a0:            V_30=0;                                                     //stloc				V_30
	IL_01a4:            /*goto IL_0005;*/goto IL_01a9;                              //br				IL_0005
	IL_01a9:                                                                        //ldloc.s				V_11
	IL_01ab:            if(V_11==nullptr)goto IL_086e;                              //brfalse				IL_086e
	IL_01b0:                                                                        //ldc.i4				0x51
	IL_01b5:            V_30=81;                                                    //stloc				V_30
	IL_01b9:            /*goto IL_0005;*/goto IL_01be;                              //br				IL_0005
	IL_01be:            goto IL_09e0;                                               //br				IL_09e0
	IL_01c3:                                                                        //ldc.i4				0x1b
	IL_01c8:            V_30=27;                                                    //stloc				V_30
	IL_01cc:            /*goto IL_0005;*/goto IL_01d1;                              //br				IL_0005
	IL_01d1:                                                                        //ldloc.s				V_13
	IL_01d3:            if(V_13==nullptr)goto IL_0478;                              //brfalse				IL_0478
	IL_01d8:                                                                        //ldc.i4				0x3f
	IL_01dd:            V_30=63;                                                    //stloc				V_30
	IL_01e1:            /*goto IL_0005;*/goto IL_01e6;                              //br				IL_0005
	IL_01e6:            goto IL_08d0;                                               //br				IL_08d0
	IL_01eb:                                                                        //ldloc.s				V_27
	IL_01ed:                                                                        //ldarg.1
	IL_01ee:            Temp_57=Root::T_x149::M_x1(V_27,A_1);                       //call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_01f3:            return Temp_57;                                             //ret
	IL_01f4:                                                                        //ldc.i4				0xf
	IL_01f9:            V_30=15;                                                    //stloc				V_30
	IL_01fd:            /*goto IL_0005;*/goto IL_0202;                              //br				IL_0005
	IL_0202:                                                                        //ldloc.s				V_23
	IL_0204:            if(V_23)goto IL_096e;                                       //brtrue				IL_096e
	IL_0209:                                                                        //ldc.i4				0x5
	IL_020e:            V_30=5;                                                     //stloc				V_30
	IL_0212:            /*goto IL_0005;*/goto IL_0217;                              //br				IL_0005
	IL_0217:            goto IL_03fe;                                               //br				IL_03fe
	IL_021c:                                                                        //ldc.i4				0x21
	IL_0221:            V_30=33;                                                    //stloc				V_30
	IL_0225:            /*goto IL_0005;*/goto IL_022a;                              //br				IL_0005
	IL_022a:                                                                        //ldloc.s				V_17
	IL_022c:            if(V_17==nullptr)goto IL_0400;                              //brfalse				IL_0400
	IL_0231:                                                                        //ldc.i4				0x1d
	IL_0236:            V_30=29;                                                    //stloc				V_30
	IL_023a:            /*goto IL_0005;*/goto IL_023f;                              //br				IL_0005
	IL_023f:            goto IL_06f2;                                               //br				IL_06f2
	IL_0244:                                                                        //ldc.i4				0x27
	IL_0249:            V_30=39;                                                    //stloc				V_30
	IL_024d:            /*goto IL_0005;*/goto IL_0252;                              //br				IL_0005
	IL_0252:                                                                        //ldloc.s				V_7
	IL_0254:            if(V_7==nullptr)goto IL_07d4;                               //brfalse				IL_07d4
	IL_0259:                                                                        //ldc.i4				0x42
	IL_025e:            V_30=66;                                                    //stloc				V_30
	IL_0262:            /*goto IL_0005;*/goto IL_0267;                              //br				IL_0005
	IL_0267:            goto IL_056f;                                               //br				IL_056f
	IL_026c:                                                                        //ldc.i4				0x33
	IL_0271:            V_30=51;                                                    //stloc				V_30
	IL_0275:            /*goto IL_0005;*/goto IL_027a;                              //br				IL_0005
	IL_027a:                                                                        //ldloc.2
	IL_027b:            Temp_27=V_2->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0280:                                                                        //ldloc.s				V_5
	IL_0282:            Temp_28=Temp_27[V_5];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0287:            Temp_29=Temp_28->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_028c:                                                                        //ldloc.3
	IL_028d:            Temp_30=V_3->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0292:                                                                        //ldloc.s				V_5
	IL_0294:            Temp_31=Temp_30[V_5];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0299:            Temp_32=Temp_31->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_029e:            if(Temp_29==Temp_32)goto IL_06a6;                           //beq				IL_06a6
	IL_02a3:                                                                        //ldc.i4				0x55
	IL_02a8:            V_30=85;                                                    //stloc				V_30
	IL_02ac:            /*goto IL_0005;*/goto IL_02b1;                              //br				IL_0005
	IL_02b1:            goto IL_0344;                                               //br				IL_0344
	IL_02b6:                                                                        //ldc.i4				0x38
	IL_02bb:            V_30=56;                                                    //stloc				V_30
	IL_02bf:            /*goto IL_0005;*/goto IL_02c4;                              //br				IL_0005
	IL_02c4:                                                                        //ldloc.s				V_15
	IL_02c6:            if(V_15==nullptr)goto IL_09a8;                              //brfalse				IL_09a8
	IL_02cb:                                                                        //ldc.i4				0x2
	IL_02d0:            V_30=2;                                                     //stloc				V_30
	IL_02d4:            /*goto IL_0005;*/goto IL_02d9;                              //br				IL_0005
	IL_02d9:            goto IL_0565;                                               //br				IL_0565
	IL_02de:                                                                        //ldloc.s				V_16
	IL_02e0:            Temp_20=V_16->Resolve();                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IGenericArgument::Resolve()
	IL_02e5:            V_27=Temp_20;                                               //stloc.s				V_27
	IL_02e7:                                                                        //ldc.i4				0x12
	IL_02ec:            V_30=18;                                                    //stloc				V_30
	IL_02f0:            /*goto IL_0005;*/goto IL_02f5;                              //br				IL_0005
	IL_02f5:                                                                        //ldloc.s				V_27
	IL_02f7:            if(V_27==nullptr)goto IL_04c9;                              //brfalse				IL_04c9
	IL_02fc:                                                                        //ldc.i4				0x54
	IL_0301:            V_30=84;                                                    //stloc				V_30
	IL_0305:            /*goto IL_0005;*/goto IL_030a;                              //br				IL_0005
	IL_030a:            goto IL_01eb;                                               //br				IL_01eb
	IL_030f:                                                                        //ldarg.0
	IL_0310:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_0315:            V_2=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.2
	IL_0316:                                                                        //ldarg.1
	IL_0317:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_031c:            V_3=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_1);   //stloc.3
	IL_031d:                                                                        //ldc.i4				0x44
	IL_0322:            V_30=68;                                                    //stloc				V_30
	IL_0326:            /*goto IL_0005;*/goto IL_032b;                              //br				IL_0005
	IL_032b:                                                                        //ldloc.2
	IL_032c:            if(V_2==nullptr)goto IL_0759;                               //brfalse				IL_0759
	IL_0331:                                                                        //ldc.i4				0x2f
	IL_0336:            V_30=47;                                                    //stloc				V_30
	IL_033a:            /*goto IL_0005;*/goto IL_033f;                              //br				IL_0005
	IL_033f:            goto IL_0a43;                                               //br				IL_0a43
	IL_0344:                                                                        //ldc.i4.0
	IL_0345:            return false;                                               //ret
	IL_0346:                                                                        //ldc.i4				0x37
	IL_034b:            V_30=55;                                                    //stloc				V_30
	IL_034f:            /*goto IL_0005;*/goto IL_0354;                              //br				IL_0005
	IL_0354:                                                                        //ldloc.s				V_5
	IL_0356:                                                                        //ldloc.s				V_4
	IL_0358:            if(V_5<V_4)goto IL_026c;                                    //blt				IL_026c
	IL_035d:                                                                        //ldc.i4				0x18
	IL_0362:            V_30=24;                                                    //stloc				V_30
	IL_0366:            /*goto IL_0005;*/goto IL_036b;                              //br				IL_0005
	IL_036b:            goto IL_0a2d;                                               //br				IL_0a2d
	IL_0370:                                                                        //ldloc.2
	IL_0371:            Temp_36=V_2->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0376:            Temp_37=safe_cast<System::Collections::ICollection^>(Temp_36)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_037b:            V_4=Temp_37;                                                //stloc.s				V_4
	IL_037d:                                                                        //ldc.i4				0xd
	IL_0382:            V_30=13;                                                    //stloc				V_30
	IL_0386:            /*goto IL_0005;*/goto IL_038b;                              //br				IL_0005
	IL_038b:                                                                        //ldloc.s				V_4
	IL_038d:                                                                        //ldloc.3
	IL_038e:            Temp_10=V_3->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0393:            Temp_11=safe_cast<System::Collections::ICollection^>(Temp_10)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0398:            if(V_4==Temp_11)goto IL_03e5;                               //beq.s				IL_03e5
	IL_039a:                                                                        //ldc.i4				0x2b
	IL_039f:            V_30=43;                                                    //stloc				V_30
	IL_03a3:            /*goto IL_0005;*/goto IL_03a8;                              //br				IL_0005
	IL_03a8:            goto IL_0757;                                               //br				IL_0757
	IL_03ad:                                                                        //ldarg.0
	IL_03ae:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_03b3:            V_10=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_10
	IL_03b5:                                                                        //ldarg.1
	IL_03b6:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_03bb:            V_11=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_1);//stloc.s				V_11
	IL_03bd:                                                                        //ldc.i4				0x31
	IL_03c2:            V_30=49;                                                    //stloc				V_30
	IL_03c6:            /*goto IL_0005;*/goto IL_03cb;                              //br				IL_0005
	IL_03cb:                                                                        //ldloc.s				V_10
	IL_03cd:            if(V_10==nullptr)goto IL_086e;                              //brfalse				IL_086e
	IL_03d2:                                                                        //ldc.i4				0x4b
	IL_03d7:            V_30=75;                                                    //stloc				V_30
	IL_03db:            /*goto IL_0005;*/goto IL_03e0;                              //br				IL_0005
	IL_03e0:            goto IL_019b;                                               //br				IL_019b
	IL_03e5:                                                                        //ldc.i4.0
	IL_03e6:            V_5=0;                                                      //stloc.s				V_5
	IL_03e8:            goto IL_03eb;                                               //br.s				IL_03eb
	IL_03ea:                                                                        //break
	IL_03eb:                                                                        //ldc.i4				0xc
	IL_03f0:            V_30=12;                                                    //stloc				V_30
	IL_03f4:            /*goto IL_0005;*/goto IL_03f9;                              //br				IL_0005
	IL_03f9:            goto IL_0346;                                               //br				IL_0346
	IL_03fe:                                                                        //ldc.i4.0
	IL_03ff:            return false;                                               //ret
	IL_0400:                                                                        //ldc.i4				0xb
	IL_0405:            V_30=11;                                                    //stloc				V_30
	IL_0409:            /*goto IL_0005;*/goto IL_040e;                              //br				IL_0005
	IL_040e:                                                                        //ldloc.s				V_16
	IL_0410:            if(V_16==nullptr)goto IL_04c9;                              //brfalse				IL_04c9
	IL_0415:                                                                        //ldc.i4				0x46
	IL_041a:            V_30=70;                                                    //stloc				V_30
	IL_041e:            /*goto IL_0005;*/goto IL_0423;                              //br				IL_0005
	IL_0423:            goto IL_063f;                                               //br				IL_063f
	IL_0428:                                                                        //ldc.i4				0x17
	IL_042d:            V_30=23;                                                    //stloc				V_30
	IL_0431:            /*goto IL_0005;*/goto IL_0436;                              //br				IL_0005
	IL_0436:                                                                        //ldloc.s				V_9
	IL_0438:            if(V_9==nullptr)goto IL_03ad;                               //brfalse				IL_03ad
	IL_043d:                                                                        //ldc.i4				0x1f
	IL_0442:            V_30=31;                                                    //stloc				V_30
	IL_0446:            /*goto IL_0005;*/goto IL_044b;                              //br				IL_0005
	IL_044b:            goto IL_0a2f;                                               //br				IL_0a2f
	IL_0450:                                                                        //ldc.i4				0x32
	IL_0455:            V_30=50;                                                    //stloc				V_30
	IL_0459:            /*goto IL_0005;*/goto IL_045e;                              //br				IL_0005
	IL_045e:                                                                        //ldloc.s				V_19
	IL_0460:            if(V_19==nullptr)goto IL_0a19;                              //brfalse				IL_0a19
	IL_0465:                                                                        //ldc.i4				0x4c
	IL_046a:            V_30=76;                                                    //stloc				V_30
	IL_046e:            /*goto IL_0005;*/goto IL_0473;                              //br				IL_0005
	IL_0473:            goto IL_073a;                                               //br				IL_073a
	IL_0478:                                                                        //ldarg.0
	IL_0479:                                                                        //isinst				Reflector::CodeModel::IFunctionPointer
	IL_047e:            V_14=dynamic_cast<Reflector::CodeModel::IFunctionPointer^>(A_0);//stloc.s				V_14
	IL_0480:                                                                        //ldarg.1
	IL_0481:                                                                        //isinst				Reflector::CodeModel::IFunctionPointer
	IL_0486:            V_15=dynamic_cast<Reflector::CodeModel::IFunctionPointer^>(A_1);//stloc.s				V_15
	IL_0488:                                                                        //ldc.i4				0x13
	IL_048d:            V_30=19;                                                    //stloc				V_30
	IL_0491:            /*goto IL_0005;*/goto IL_0496;                              //br				IL_0005
	IL_0496:                                                                        //ldloc.s				V_14
	IL_0498:            if(V_14==nullptr)goto IL_09a8;                              //brfalse				IL_09a8
	IL_049d:                                                                        //ldc.i4				0x1e
	IL_04a2:            V_30=30;                                                    //stloc				V_30
	IL_04a6:            /*goto IL_0005;*/goto IL_04ab;                              //br				IL_0005
	IL_04ab:            goto IL_02b6;                                               //br				IL_02b6
	IL_04b0:                                                                        //ldloc.s				V_5
	IL_04b2:                                                                        //ldc.i4.1
	IL_04b3:                                                                        //add
	IL_04b4:            V_5=(V_5 + 1);                                              //stloc.s				V_5
	IL_04b6:                                                                        //ldc.i4				0x45
	IL_04bb:            V_30=69;                                                    //stloc				V_30
	IL_04bf:            /*goto IL_0005;*/goto IL_04c4;                              //br				IL_0005
	IL_04c4:            goto IL_0346;                                               //br				IL_0346
	IL_04c9:                                                                        //ldc.i4				0x4d
	IL_04ce:            V_30=77;                                                    //stloc				V_30
	IL_04d2:            /*goto IL_0005;*/goto IL_04d7;                              //br				IL_0005
	IL_04d7:                                                                        //ldloc.s				V_17
	IL_04d9:            if(V_17==nullptr)goto IL_0a6a;                              //brfalse				IL_0a6a
	IL_04de:                                                                        //ldc.i4				0x3d
	IL_04e3:            V_30=61;                                                    //stloc				V_30
	IL_04e7:            /*goto IL_0005;*/goto IL_04ec;                              //br				IL_0005
	IL_04ec:            goto IL_0938;                                               //br				IL_0938
	IL_04f1:                                                                        //ldc.i4.0
	IL_04f2:            return false;                                               //ret
	IL_04f3:                                                                        //ldc.i4.0
	IL_04f4:            return false;                                               //ret
	IL_04f5:                                                                        //ldc.i4.1
	IL_04f6:            return true;                                                //ret
	IL_04f7:                                                                        //ldloc.s				V_16
	IL_04f9:            Temp_40=V_16->Owner;                                        //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_04fe:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0503:            V_18=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_40);//stloc.s				V_18
	IL_0505:                                                                        //ldloc.s				V_17
	IL_0507:            Temp_41=V_17->Owner;                                        //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_050c:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0511:            V_19=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_41);//stloc.s				V_19
	IL_0513:                                                                        //ldc.i4				0x1
	IL_0518:            V_30=1;                                                     //stloc				V_30
	IL_051c:            /*goto IL_0005;*/goto IL_0521;                              //br				IL_0005
	IL_0521:                                                                        //ldloc.s				V_18
	IL_0523:            if(V_18==nullptr)goto IL_0a19;                              //brfalse				IL_0a19
	IL_0528:                                                                        //ldc.i4				0x22
	IL_052d:            V_30=34;                                                    //stloc				V_30
	IL_0531:            /*goto IL_0005;*/goto IL_0536;                              //br				IL_0005
	IL_0536:            goto IL_080c;                                               //br				IL_080c
	IL_053b:                                                                        //ldc.i4.0
	IL_053c:            return false;                                               //ret
	IL_053d:                                                                        //ldloc.s				V_12
	IL_053f:            Temp_42=V_12->Modifier;                                     //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_0544:                                                                        //ldloc.s				V_13
	IL_0546:            Temp_43=V_13->Modifier;                                     //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_054b:            Temp_44=Temp_42->Equals(safe_cast<System::Object^>(Temp_43));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0550:            return Temp_44;                                             //ret
	IL_0551:                                                                        //ldc.i4				0x9
	IL_0556:            V_30=9;                                                     //stloc				V_30
	IL_055a:            /*goto IL_0005;*/goto IL_055f;                              //br				IL_0005
	IL_055f:                                                                        //ldc.i4.1
	IL_0560:            Temp_59=true;goto IL_08a6;                                  //br				IL_08a6
	IL_0565:                                                                        //ldloc.s				V_14
	IL_0567:                                                                        //ldloc.s				V_15
	IL_0569:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IMethodSignature^>(V_14),safe_cast<Reflector::CodeModel::IMethodSignature^>(V_15));//call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IMethodSignature^,Reflector::CodeModel::IMethodSignature^)
	IL_056e:            return Temp_0;                                              //ret
	IL_056f:                                                                        //ldloc.s				V_6
	IL_0571:            Temp_46=V_6->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0576:                                                                        //ldloc.s				V_7
	IL_0578:            Temp_47=V_7->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_057d:            Temp_48=Temp_46->Equals(safe_cast<System::Object^>(Temp_47));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0582:            return Temp_48;                                             //ret
	IL_0583:                                                                        //ldloc.s				V_24
	IL_0585:            Temp_24=V_24->Name;                                         //callvirt				System::String^ Reflector::CodeModel::IGenericParameter::get_Name()
	IL_058a:                                                                        //ldloc.s				V_25
	IL_058c:            Temp_25=V_25->Name;                                         //callvirt				System::String^ Reflector::CodeModel::IGenericParameter::get_Name()
	IL_0591:            Temp_26=Temp_24->Equals(Temp_25);                           //callvirt				System::Boolean System::String::Equals(System::String^)
	IL_0596:            return Temp_26;                                             //ret
	IL_0597:                                                                        //ldc.i4.0
	IL_0598:            return false;                                               //ret
	IL_0599:                                                                        //ldc.i4				0x4a
	IL_059e:            V_30=74;                                                    //stloc				V_30
	IL_05a2:            /*goto IL_0005;*/goto IL_05a7;                              //br				IL_0005
	IL_05a7:                                                                        //ldloc.s				V_25
	IL_05a9:            if(V_25==nullptr)goto IL_04f5;                              //brfalse				IL_04f5
	IL_05ae:                                                                        //ldc.i4				0x2c
	IL_05b3:            V_30=44;                                                    //stloc				V_30
	IL_05b7:            /*goto IL_0005;*/goto IL_05bc;                              //br				IL_0005
	IL_05bc:            goto IL_0583;                                               //br.s				IL_0583
	IL_05be:                                                                        //ldc.i4				0x3
	IL_05c3:            V_30=3;                                                     //stloc				V_30
	IL_05c7:            /*goto IL_0005;*/goto IL_05cc;                              //br				IL_0005
	IL_05cc:                                                                        //ldloc.1
	IL_05cd:            if(V_1==nullptr)goto IL_030f;                               //brfalse				IL_030f
	IL_05d2:                                                                        //ldc.i4				0x10
	IL_05d7:            V_30=16;                                                    //stloc				V_30
	IL_05db:            /*goto IL_0005;*/goto IL_05e0;                              //br				IL_0005
	IL_05e0:            goto IL_0866;                                               //br				IL_0866
	IL_05e5:                                                                        //ldarg.0
	IL_05e6:                                                                        //ldloc.s				V_29
	IL_05e8:            Temp_51=Root::T_x149::M_x1(A_0,V_29);                       //call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_05ed:            return Temp_51;                                             //ret
	IL_05ee:                                                                        //ldc.i4				0x34
	IL_05f3:            V_30=52;                                                    //stloc				V_30
	IL_05f7:            /*goto IL_0005;*/goto IL_05fc;                              //br				IL_0005
	IL_05fc:                                                                        //ldloc.2
	IL_05fd:            Temp_33=V_2->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0602:                                                                        //ldloc.3
	IL_0603:            Temp_34=V_3->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0608:            Temp_35=Temp_33->Equals(safe_cast<System::Object^>(Temp_34));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_060d:            if(Temp_35)goto IL_0370;                                    //brtrue				IL_0370
	IL_0612:                                                                        //ldc.i4				0x15
	IL_0617:            V_30=21;                                                    //stloc				V_30
	IL_061b:            /*goto IL_0005;*/goto IL_0620;                              //br				IL_0005
	IL_0620:            goto IL_04f3;                                               //br				IL_04f3
	IL_0625:                                                                        //ldc.i4				0x2e
	IL_062a:            V_30=46;                                                    //stloc				V_30
	IL_062e:            /*goto IL_0005;*/goto IL_0633;                              //br				IL_0005
	IL_0633:                                                                        //ldloc.s				V_22
	IL_0635:                                                                        //ldnull
	IL_0636:                                                                        //ceq
	IL_0638:            Temp_59=(V_22 == safe_cast<Reflector::CodeModel::ITypeReference^>(nullptr));goto IL_08a6;//br				IL_08a6
	IL_063d:                                                                        //ldc.i4.0
	IL_063e:            return false;                                               //ret
	IL_063f:                                                                        //ldloc.s				V_16
	IL_0641:            Temp_49=V_16->Owner;                                        //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_0646:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_064b:            V_26=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_49);//stloc.s				V_26
	IL_064d:                                                                        //ldc.i4				0x3a
	IL_0652:            V_30=58;                                                    //stloc				V_30
	IL_0656:            /*goto IL_0005;*/goto IL_065b;                              //br				IL_0005
	IL_065b:                                                                        //ldloc.s				V_26
	IL_065d:            if(V_26==nullptr)goto IL_02de;                              //brfalse				IL_02de
	IL_0662:                                                                        //ldc.i4				0x29
	IL_0667:            V_30=41;                                                    //stloc				V_30
	IL_066b:            /*goto IL_0005;*/goto IL_0670;                              //br				IL_0005
	IL_0670:            goto IL_090b;                                               //br				IL_090b
	IL_0675:                                                                        //ldloc.s				V_17
	IL_0677:            Temp_56=V_17->Resolve();                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IGenericArgument::Resolve()
	IL_067c:            V_29=Temp_56;                                               //stloc.s				V_29
	IL_067e:                                                                        //ldc.i4				0x3e
	IL_0683:            V_30=62;                                                    //stloc				V_30
	IL_0687:            /*goto IL_0005;*/goto IL_068c;                              //br				IL_0005
	IL_068c:                                                                        //ldloc.s				V_29
	IL_068e:            if(V_29==nullptr)goto IL_0a6a;                              //brfalse				IL_0a6a
	IL_0693:                                                                        //ldc.i4				0x48
	IL_0698:            V_30=72;                                                    //stloc				V_30
	IL_069c:            /*goto IL_0005;*/goto IL_06a1;                              //br				IL_0005
	IL_06a1:            goto IL_05e5;                                               //br				IL_05e5
	IL_06a6:                                                                        //ldc.i4				0x1a
	IL_06ab:            V_30=26;                                                    //stloc				V_30
	IL_06af:            /*goto IL_0005;*/goto IL_06b4;                              //br				IL_0005
	IL_06b4:                                                                        //ldloc.2
	IL_06b5:            Temp_13=V_2->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_06ba:                                                                        //ldloc.s				V_5
	IL_06bc:            Temp_14=Temp_13[V_5];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_06c1:            Temp_15=Temp_14->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_06c6:                                                                        //ldloc.3
	IL_06c7:            Temp_16=V_3->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_06cc:                                                                        //ldloc.s				V_5
	IL_06ce:            Temp_17=Temp_16[V_5];                                       //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_06d3:            Temp_18=Temp_17->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_06d8:            if(Temp_15>=Temp_18)goto IL_04b0;                           //bge				IL_04b0
	IL_06dd:                                                                        //ldc.i4				0x4e
	IL_06e2:            V_30=78;                                                    //stloc				V_30
	IL_06e6:            /*goto IL_0005;*/goto IL_06eb;                              //br				IL_0005
	IL_06eb:            goto IL_0597;                                               //br				IL_0597
	IL_06f0:                                                                        //ldc.i4.0
	IL_06f1:            return false;                                               //ret
	IL_06f2:                                                                        //ldc.i4				0x35
	IL_06f7:            V_30=53;                                                    //stloc				V_30
	IL_06fb:            /*goto IL_0005;*/goto IL_0700;                              //br				IL_0005
	IL_0700:                                                                        //ldloc.s				V_16
	IL_0702:            Temp_38=V_16->Position;                                     //callvirt				System::Int32 Reflector::CodeModel::IGenericArgument::get_Position()
	IL_0707:                                                                        //ldloc.s				V_17
	IL_0709:            Temp_39=V_17->Position;                                     //callvirt				System::Int32 Reflector::CodeModel::IGenericArgument::get_Position()
	IL_070e:            if(Temp_38==Temp_39)goto IL_04f7;                           //beq				IL_04f7
	IL_0713:                                                                        //ldc.i4				0x36
	IL_0718:            V_30=54;                                                    //stloc				V_30
	IL_071c:            /*goto IL_0005;*/goto IL_0721;                              //br				IL_0005
	IL_0721:            goto IL_053b;                                               //br				IL_053b
	IL_0726:                                                                        //ldloc.s				V_10
	IL_0728:            Temp_1=V_10->Modifier;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_072d:                                                                        //ldloc.s				V_11
	IL_072f:            Temp_2=V_11->Modifier;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_0734:            Temp_3=Temp_1->Equals(safe_cast<System::Object^>(Temp_2));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0739:            return Temp_3;                                              //ret
	IL_073a:                                                                        //ldc.i4				0x7
	IL_073f:            V_30=7;                                                     //stloc				V_30
	IL_0743:            /*goto IL_0005;*/goto IL_0748;                              //br				IL_0005
	IL_0748:                                                                        //ldloc.s				V_19
	IL_074a:            Temp_7=V_19->GenericMethod;                                 //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_074f:                                                                        //ldnull
	IL_0750:                                                                        //ceq
	IL_0752:                                                                        //ldc.i4.0
	IL_0753:                                                                        //ceq
	IL_0755:            Temp_58=((Temp_7 == safe_cast<Reflector::CodeModel::IMethodReference^>(nullptr)) == false);goto IL_078e;//br.s				IL_078e
	IL_0757:                                                                        //ldc.i4.0
	IL_0758:            return false;                                               //ret
	IL_0759:                                                                        //ldarg.0
	IL_075a:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_075f:            V_6=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.s				V_6
	IL_0761:                                                                        //ldarg.1
	IL_0762:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_0767:            V_7=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_1); //stloc.s				V_7
	IL_0769:                                                                        //ldc.i4				0x52
	IL_076e:            V_30=82;                                                    //stloc				V_30
	IL_0772:            /*goto IL_0005;*/goto IL_0777;                              //br				IL_0005
	IL_0777:                                                                        //ldloc.s				V_6
	IL_0779:            if(V_6==nullptr)goto IL_07d4;                               //brfalse.s				IL_07d4
	IL_077b:                                                                        //ldc.i4				0xa
	IL_0780:            V_30=10;                                                    //stloc				V_30
	IL_0784:            /*goto IL_0005;*/goto IL_0789;                              //br				IL_0005
	IL_0789:            goto IL_0244;                                               //br				IL_0244
	IL_078e:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_20
	IL_0790:                                                                        //ldloc.s				V_16
	IL_0792:            Temp_8=V_16->Owner;                                         //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_0797:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_079c:            V_21=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_8);//stloc.s				V_21
	IL_079e:                                                                        //ldloc.s				V_17
	IL_07a0:            Temp_9=V_17->Owner;                                         //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_07a5:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_07aa:            V_22=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_9);//stloc.s				V_22
	IL_07ac:                                                                        //ldc.i4				0x20
	IL_07b1:            V_30=32;                                                    //stloc				V_30
	IL_07b5:            /*goto IL_0005;*/goto IL_07ba;                              //br				IL_0005
	IL_07ba:                                                                        //ldloc.s				V_21
	IL_07bc:            if(V_21==nullptr)goto IL_0551;                              //brfalse				IL_0551
	IL_07c1:                                                                        //ldc.i4				0x28
	IL_07c6:            V_30=40;                                                    //stloc				V_30
	IL_07ca:            /*goto IL_0005;*/goto IL_07cf;                              //br				IL_0005
	IL_07cf:            goto IL_0625;                                               //br				IL_0625
	IL_07d4:                                                                        //ldarg.0
	IL_07d5:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_07da:            V_8=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.s				V_8
	IL_07dc:                                                                        //ldarg.1
	IL_07dd:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_07e2:            V_9=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_1);//stloc.s				V_9
	IL_07e4:                                                                        //ldc.i4				0x24
	IL_07e9:            V_30=36;                                                    //stloc				V_30
	IL_07ed:            /*goto IL_0005;*/goto IL_07f2;                              //br				IL_0005
	IL_07f2:                                                                        //ldloc.s				V_8
	IL_07f4:            if(V_8==nullptr)goto IL_03ad;                               //brfalse				IL_03ad
	IL_07f9:                                                                        //ldc.i4				0x2d
	IL_07fe:            V_30=45;                                                    //stloc				V_30
	IL_0802:            /*goto IL_0005;*/goto IL_0807;                              //br				IL_0005
	IL_0807:            goto IL_0428;                                               //br				IL_0428
	IL_080c:                                                                        //ldc.i4				0x47
	IL_0811:            V_30=71;                                                    //stloc				V_30
	IL_0815:            /*goto IL_0005;*/goto IL_081a;                              //br				IL_0005
	IL_081a:                                                                        //ldloc.s				V_18
	IL_081c:            Temp_50=V_18->GenericMethod;                                //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_0821:            if(Temp_50!=nullptr)goto IL_0a19;                           //brtrue				IL_0a19
	IL_0826:                                                                        //ldc.i4				0x14
	IL_082b:            V_30=20;                                                    //stloc				V_30
	IL_082f:            /*goto IL_0005;*/goto IL_0834;                              //br				IL_0005
	IL_0834:            goto IL_0450;                                               //br				IL_0450
	IL_0839:                                                                        //ldc.i4				0x50
	IL_083e:            V_30=80;                                                    //stloc				V_30
	IL_0842:            /*goto IL_0005;*/goto IL_0847;                              //br				IL_0005
	IL_0847:                                                                        //ldloc.s				V_28
	IL_0849:            Temp_55=V_28->GenericMethod;                                //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_084e:            if(Temp_55!=nullptr)goto IL_0675;                           //brtrue				IL_0675
	IL_0853:                                                                        //ldc.i4				0x26
	IL_0858:            V_30=38;                                                    //stloc				V_30
	IL_085c:            /*goto IL_0005;*/goto IL_0861;                              //br				IL_0005
	IL_0861:            goto IL_04f1;                                               //br				IL_04f1
	IL_0866:                                                                        //ldloc.0
	IL_0867:                                                                        //ldloc.1
	IL_0868:            Temp_12=Root::T_x149::M_x2(V_0,V_1);                        //call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::ITypeReference^,Reflector::CodeModel::ITypeReference^)
	IL_086d:            return Temp_12;                                             //ret
	IL_086e:                                                                        //ldarg.0
	IL_086f:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_0874:            V_12=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_12
	IL_0876:                                                                        //ldarg.1
	IL_0877:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_087c:            V_13=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_1);//stloc.s				V_13
	IL_087e:                                                                        //ldc.i4				0x39
	IL_0883:            V_30=57;                                                    //stloc				V_30
	IL_0887:            /*goto IL_0005;*/goto IL_088c;                              //br				IL_0005
	IL_088c:                                                                        //ldloc.s				V_12
	IL_088e:            if(V_12==nullptr)goto IL_0478;                              //brfalse				IL_0478
	IL_0893:                                                                        //ldc.i4				0x25
	IL_0898:            V_30=37;                                                    //stloc				V_30
	IL_089c:            /*goto IL_0005;*/goto IL_08a1;                              //br				IL_0005
	IL_08a1:            goto IL_01c3;                                               //br				IL_01c3
	IL_08a6:            V_23=safe_cast<System::Boolean>(Temp_59);/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_23
	IL_08a8:                                                                        //ldc.i4				0xe
	IL_08ad:            V_30=14;                                                    //stloc				V_30
	IL_08b1:            /*goto IL_0005;*/goto IL_08b6;                              //br				IL_0005
	IL_08b6:                                                                        //ldloc.s				V_20
	IL_08b8:            if(V_20)goto IL_096e;                                       //brtrue				IL_096e
	IL_08bd:                                                                        //ldc.i4				0x4f
	IL_08c2:            V_30=79;                                                    //stloc				V_30
	IL_08c6:            /*goto IL_0005;*/goto IL_08cb;                              //br				IL_0005
	IL_08cb:            goto IL_01f4;                                               //br				IL_01f4
	IL_08d0:                                                                        //ldc.i4				0x6
	IL_08d5:            V_30=6;                                                     //stloc				V_30
	IL_08d9:            /*goto IL_0005;*/goto IL_08de;                              //br				IL_0005
	IL_08de:                                                                        //ldloc.s				V_12
	IL_08e0:            Temp_4=V_12->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_08e5:                                                                        //ldloc.s				V_13
	IL_08e7:            Temp_5=V_13->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_08ec:            Temp_6=Temp_4->Equals(safe_cast<System::Object^>(Temp_5));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_08f1:            if(!Temp_6)goto IL_063d;                                    //brfalse				IL_063d
	IL_08f6:                                                                        //ldc.i4				0x3b
	IL_08fb:            V_30=59;                                                    //stloc				V_30
	IL_08ff:            /*goto IL_0005;*/goto IL_0904;                              //br				IL_0005
	IL_0904:            goto IL_053d;                                               //br				IL_053d
	IL_0909:                                                                        //ldc.i4.0
	IL_090a:            return false;                                               //ret
	IL_090b:                                                                        //ldc.i4				0x1c
	IL_0910:            V_30=28;                                                    //stloc				V_30
	IL_0914:            /*goto IL_0005;*/goto IL_0919;                              //br				IL_0005
	IL_0919:                                                                        //ldloc.s				V_26
	IL_091b:            Temp_19=V_26->GenericMethod;                                //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_0920:            if(Temp_19!=nullptr)goto IL_02de;                           //brtrue				IL_02de
	IL_0925:                                                                        //ldc.i4				0x23
	IL_092a:            V_30=35;                                                    //stloc				V_30
	IL_092e:            /*goto IL_0005;*/goto IL_0933;                              //br				IL_0005
	IL_0933:            goto IL_06f0;                                               //br				IL_06f0
	IL_0938:                                                                        //ldloc.s				V_17
	IL_093a:            Temp_45=V_17->Owner;                                        //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_093f:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0944:            V_28=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_45);//stloc.s				V_28
	IL_0946:                                                                        //ldc.i4				0x53
	IL_094b:            V_30=83;                                                    //stloc				V_30
	IL_094f:            /*goto IL_0005;*/goto IL_0954;                              //br				IL_0005
	IL_0954:                                                                        //ldloc.s				V_28
	IL_0956:            if(V_28==nullptr)goto IL_0675;                              //brfalse				IL_0675
	IL_095b:                                                                        //ldc.i4				0x41
	IL_0960:            V_30=65;                                                    //stloc				V_30
	IL_0964:            /*goto IL_0005;*/goto IL_0969;                              //br				IL_0005
	IL_0969:            goto IL_0839;                                               //br				IL_0839
	IL_096e:                                                                        //ldloc.s				V_16
	IL_0970:                                                                        //isinst				Reflector::CodeModel::IGenericParameter
	IL_0975:            V_24=dynamic_cast<Reflector::CodeModel::IGenericParameter^>(V_16);//stloc.s				V_24
	IL_0977:                                                                        //ldloc.s				V_17
	IL_0979:                                                                        //isinst				Reflector::CodeModel::IGenericParameter
	IL_097e:            V_25=dynamic_cast<Reflector::CodeModel::IGenericParameter^>(V_17);//stloc.s				V_25
	IL_0980:                                                                        //ldc.i4				0x19
	IL_0985:            V_30=25;                                                    //stloc				V_30
	IL_0989:            /*goto IL_0005;*/goto IL_098e;                              //br				IL_0005
	IL_098e:                                                                        //ldloc.s				V_24
	IL_0990:            if(V_24==nullptr)goto IL_04f5;                              //brfalse				IL_04f5
	IL_0995:                                                                        //ldc.i4				0x43
	IL_099a:            V_30=67;                                                    //stloc				V_30
	IL_099e:            /*goto IL_0005;*/goto IL_09a3;                              //br				IL_0005
	IL_09a3:            goto IL_0599;                                               //br				IL_0599
	IL_09a8:                                                                        //ldarg.0
	IL_09a9:                                                                        //isinst				Reflector::CodeModel::IGenericArgument
	IL_09ae:            V_16=dynamic_cast<Reflector::CodeModel::IGenericArgument^>(A_0);//stloc.s				V_16
	IL_09b0:                                                                        //ldarg.1
	IL_09b1:                                                                        //isinst				Reflector::CodeModel::IGenericArgument
	IL_09b6:            V_17=dynamic_cast<Reflector::CodeModel::IGenericArgument^>(A_1);//stloc.s				V_17
	IL_09b8:                                                                        //ldc.i4				0x8
	IL_09bd:            V_30=8;                                                     //stloc				V_30
	IL_09c1:            /*goto IL_0005;*/goto IL_09c6;                              //br				IL_0005
	IL_09c6:                                                                        //ldloc.s				V_16
	IL_09c8:            if(V_16==nullptr)goto IL_0400;                              //brfalse				IL_0400
	IL_09cd:                                                                        //ldc.i4				0x16
	IL_09d2:            V_30=22;                                                    //stloc				V_30
	IL_09d6:            /*goto IL_0005;*/goto IL_09db;                              //br				IL_0005
	IL_09db:            goto IL_021c;                                               //br				IL_021c
	IL_09e0:                                                                        //ldc.i4				0x49
	IL_09e5:            V_30=73;                                                    //stloc				V_30
	IL_09e9:            /*goto IL_0005;*/goto IL_09ee;                              //br				IL_0005
	IL_09ee:                                                                        //ldloc.s				V_10
	IL_09f0:            Temp_52=V_10->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_09f5:                                                                        //ldloc.s				V_11
	IL_09f7:            Temp_53=V_11->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_09fc:            Temp_54=Temp_52->Equals(safe_cast<System::Object^>(Temp_53));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0a01:            if(!Temp_54)goto IL_0909;                                   //brfalse				IL_0909
	IL_0a06:                                                                        //ldc.i4				0x4
	IL_0a0b:            V_30=4;                                                     //stloc				V_30
	IL_0a0f:            /*goto IL_0005;*/goto IL_0a14;                              //br				IL_0005
	IL_0a14:            goto IL_0726;                                               //br				IL_0726
	IL_0a19:                                                                        //ldc.i4				0x40
	IL_0a1e:            V_30=64;                                                    //stloc				V_30
	IL_0a22:            /*goto IL_0005;*/goto IL_0a27;                              //br				IL_0005
	IL_0a27:                                                                        //ldc.i4.1
	IL_0a28:            Temp_58=true;goto IL_078e;                                  //br				IL_078e
	IL_0a2d:                                                                        //ldc.i4.1
	IL_0a2e:            return true;                                                //ret
	IL_0a2f:                                                                        //ldloc.s				V_8
	IL_0a31:            Temp_21=V_8->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_0a36:                                                                        //ldloc.s				V_9
	IL_0a38:            Temp_22=V_9->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_0a3d:            Temp_23=Temp_21->Equals(safe_cast<System::Object^>(Temp_22));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0a42:            return Temp_23;                                             //ret
	IL_0a43:                                                                        //ldc.i4				0x2a
	IL_0a48:            V_30=42;                                                    //stloc				V_30
	IL_0a4c:            /*goto IL_0005;*/goto IL_0a51;                              //br				IL_0005
	IL_0a51:                                                                        //ldloc.3
	IL_0a52:            if(V_3==nullptr)goto IL_0759;                               //brfalse				IL_0759
	IL_0a57:                                                                        //ldc.i4				0x30
	IL_0a5c:            V_30=48;                                                    //stloc				V_30
	IL_0a60:            /*goto IL_0005;*/goto IL_0a65;                              //br				IL_0005
	IL_0a65:            goto IL_05ee;                                               //br				IL_05ee
	IL_0a6a:                                                                        //ldc.i4.0
	IL_0a6b:            return false;                                               //ret

}
inline System::String^ Root::T_x149::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_3=11;                                                     //stloc				V_3
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_007a;case 1:goto IL_0067;case 2:goto IL_004c;case 3:goto IL_003b;};//switch				(IL_007a,IL_0067,IL_004c,IL_003b)
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_0=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_002a:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_002f:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_0030:                                                                        //ldc.i4				0x3
	IL_0035:            V_2=3;                                                      //stloc				V_2
	IL_0039:            /*goto IL_000b;*/goto IL_003b;                              //br.s				IL_000b
	IL_003b:            goto IL_003e;                                               //br.s				IL_003e
	IL_003d:                                                                        //break
	IL_003e:                                                                        //ldloc.0
	IL_003f:            if(V_0==nullptr)goto IL_0055;                               //brfalse.s				IL_0055
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_2=2;                                                      //stloc				V_2
	IL_004a:            /*goto IL_000b;*/goto IL_004c;                              //br.s				IL_000b
	IL_004c:            goto IL_007c;                                               //br.s				IL_007c
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_1=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0054:            return Temp_1;                                              //ret
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_10=A_0->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_005b:            V_1=Temp_10;                                                //stloc.1
	IL_005c:                                                                        //ldc.i4				0x1
	IL_0061:            V_2=1;                                                      //stloc				V_2
	IL_0065:            /*goto IL_000b;*/goto IL_0067;                              //br.s				IL_000b
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_2=V_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_006d:            if(Temp_2!=0)goto IL_009c;                                  //brtrue.s				IL_009c
	IL_006f:                                                                        //ldc.i4				0x0
	IL_0074:            V_2=0;                                                      //stloc				V_2
	IL_0078:            /*goto IL_000b;*/goto IL_007a;                              //br.s				IL_000b
	IL_007a:            goto IL_004e;                                               //br.s				IL_004e
	IL_007c:                                                                        //ldloc.0
	IL_007d:            Temp_6=Root::T_x149::M_x1(V_0);                             //call				System::String^ Root::T_x149::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0082:                                                                        //ldstr				L"\x0228"
	IL_0087:                                                                        //ldloc				V_3
	IL_008b:            Temp_7=a(L"\x0228",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0090:                                                                        //ldarg.0
	IL_0091:            Temp_8=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0096:            Temp_9=System::String::Concat(Temp_6,Temp_7,Temp_8);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_009b:            return Temp_9;                                              //ret
	IL_009c:                                                                        //ldloc.1
	IL_009d:                                                                        //ldstr				L"\x0728"
	IL_00a2:                                                                        //ldloc				V_3
	IL_00a6:            Temp_3=a(L"\x0728",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ab:                                                                        //ldarg.0
	IL_00ac:            Temp_4=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00b1:            Temp_5=System::String::Concat(V_1,Temp_3,Temp_4);           //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00b6:            return Temp_5;                                              //ret

}
inline System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::ITypeReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::ITypeCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::ITypeCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Object^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Object^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Reflector::CodeModel::IModule^ Temp_16 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	System::NotSupportedException^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	Reflector::CodeModel::IModule^ Temp_21 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_22 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	Reflector::CodeModel::ITypeCollection^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	System::Int32 Temp_27 = 0;
	System::Object^ Temp_28 = nullptr;
	System::Object^ Temp_29 = nullptr;
	System::Object^ Temp_30 = nullptr;
	System::Object^ Temp_31 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	Reflector::CodeModel::IAssemblyReference^ V_8 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_9 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_10 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	System::Int32 V_13 = 0;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	System::Int32 V_16 = 0;
	//method body ------- 
	IL_0000:            goto IL_009e;                                               //br				IL_009e
	IL_0005:                                                                        //ldloc				V_16
	IL_0009:            switch(V_16){case 0:goto IL_0159;case 1:goto IL_03ce;case 2:goto IL_016e;case 3:goto IL_0414;case 4:goto IL_03b8;case 5:goto IL_01c3;case 6:goto IL_035d;case 7:goto IL_032b;case 8:goto IL_0428;case 9:goto IL_0340;case 10:goto IL_0133;case 11:goto IL_0390;case 12:goto IL_00e9;case 13:goto IL_03e3;case 14:goto IL_0236;case 15:goto IL_01eb;case 16:goto IL_0459;case 17:goto IL_030a;case 18:goto IL_01fd;case 19:goto IL_0372;case 20:goto IL_0194;case 21:goto IL_00d6;case 22:goto IL_00c2;case 23:goto IL_0446;case 24:goto IL_01d8;case 25:goto IL_0248;case 26:goto IL_0268;case 27:goto IL_00fe;case 28:goto IL_01a6;case 29:goto IL_02b7;case 30:goto IL_02f5;case 31:goto IL_011e;case 32:goto IL_046b;case 33:goto IL_03a3;case 34:goto IL_027d;case 35:goto IL_02a5;};//switch				(IL_0159,IL_03ce,IL_016e,IL_0414,IL_03b8,IL_01c3,IL_035d,IL_032b,IL_0428,IL_0340,IL_0133,IL_0390,IL_00e9,IL_03e3,IL_0236,IL_01eb,IL_0459,IL_030a,IL_01fd,IL_0372,IL_0194,IL_00d6,IL_00c2,IL_0446,IL_01d8,IL_0248,IL_0268,IL_00fe,IL_01a6,IL_02b7,IL_02f5,IL_011e,IL_046b,IL_03a3,IL_027d,IL_02a5)
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_0=Root::T_x149::M_x1(A_0);                             //call				System::String^ Root::T_x149::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_00a4:            V_0=Temp_0;                                                 //stloc.0
	IL_00a5:                                                                        //ldarg.1
	IL_00a6:            Temp_1=Root::T_x149::M_x1(A_1);                             //call				System::String^ Root::T_x149::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_00ab:            V_1=Temp_1;                                                 //stloc.1
	IL_00ac:                                                                        //ldloc.0
	IL_00ad:                                                                        //ldloc.1
	IL_00ae:            Temp_2=V_0->CompareTo(V_1);                                 //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_00b3:            V_2=Temp_2;                                                 //stloc.2
	IL_00b4:                                                                        //ldc.i4				0x16
	IL_00b9:            V_16=22;                                                    //stloc				V_16
	IL_00bd:            /*goto IL_0005;*/goto IL_00c2;                              //br				IL_0005
	IL_00c2:                                                                        //ldloc.2
	IL_00c3:            if(V_2==0)goto IL_03ed;                                     //brfalse				IL_03ed
	IL_00c8:                                                                        //ldc.i4				0x15
	IL_00cd:            V_16=21;                                                    //stloc				V_16
	IL_00d1:            /*goto IL_0005;*/goto IL_00d6;                              //br				IL_0005
	IL_00d6:            goto IL_02bc;                                               //br				IL_02bc
	IL_00db:                                                                        //ldc.i4				0xc
	IL_00e0:            V_16=12;                                                    //stloc				V_16
	IL_00e4:            /*goto IL_0005;*/goto IL_00e9;                              //br				IL_0005
	IL_00e9:                                                                        //ldloc.s				V_8
	IL_00eb:            if(V_8==nullptr)goto IL_0173;                               //brfalse				IL_0173
	IL_00f0:                                                                        //ldc.i4				0x1b
	IL_00f5:            V_16=27;                                                    //stloc				V_16
	IL_00f9:            /*goto IL_0005;*/goto IL_00fe;                              //br				IL_0005
	IL_00fe:            goto IL_01dd;                                               //br				IL_01dd
	IL_0103:                                                                        //ldarg.1
	IL_0104:            Temp_31=A_1->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0109:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_010e:            V_11=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_31);//stloc.s				V_11
	IL_0110:                                                                        //ldc.i4				0x1f
	IL_0115:            V_16=31;                                                    //stloc				V_16
	IL_0119:            /*goto IL_0005;*/goto IL_011e;                              //br				IL_0005
	IL_011e:                                                                        //ldloc.s				V_11
	IL_0120:            if(V_11==nullptr)goto IL_0395;                              //brfalse				IL_0395
	IL_0125:                                                                        //ldc.i4				0xa
	IL_012a:            V_16=10;                                                    //stloc				V_16
	IL_012e:            /*goto IL_0005;*/goto IL_0133;                              //br				IL_0005
	IL_0133:            goto IL_042a;                                               //br				IL_042a
	IL_0138:                                                                        //ldarg.0
	IL_0139:            Temp_9=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_013e:                                                                        //ldarg.1
	IL_013f:            Temp_10=A_1->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0144:            Temp_11=Temp_9->CompareTo(Temp_10);                         //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0149:            V_6=Temp_11;                                                //stloc.s				V_6
	IL_014b:                                                                        //ldc.i4				0x0
	IL_0150:            V_16=0;                                                     //stloc				V_16
	IL_0154:            /*goto IL_0005;*/goto IL_0159;                              //br				IL_0005
	IL_0159:                                                                        //ldloc.s				V_6
	IL_015b:            if(V_6==0)goto IL_02c1;                                     //brfalse				IL_02c1
	IL_0160:                                                                        //ldc.i4				0x2
	IL_0165:            V_16=2;                                                     //stloc				V_16
	IL_0169:            /*goto IL_0005;*/goto IL_016e;                              //br				IL_0005
	IL_016e:            goto IL_0282;                                               //br				IL_0282
	IL_0173:                                                                        //ldarg.0
	IL_0174:            Temp_13=A_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0179:                                                                        //ldarg.1
	IL_017a:            Temp_14=A_1->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_017f:            Temp_15=Temp_13->CompareTo(Temp_14);                        //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0184:            V_13=Temp_15;                                               //stloc.s				V_13
	IL_0186:                                                                        //ldc.i4				0x14
	IL_018b:            V_16=20;                                                    //stloc				V_16
	IL_018f:            /*goto IL_0005;*/goto IL_0194;                              //br				IL_0005
	IL_0194:                                                                        //ldloc.s				V_13
	IL_0196:            if(V_13==0)goto IL_0202;                                    //brfalse.s				IL_0202
	IL_0198:                                                                        //ldc.i4				0x1c
	IL_019d:            V_16=28;                                                    //stloc				V_16
	IL_01a1:            /*goto IL_0005;*/goto IL_01a6;                              //br				IL_0005
	IL_01a6:            goto IL_0285;                                               //br				IL_0285
	IL_01ab:                                                                        //ldloc.3
	IL_01ac:                                                                        //ldloc.s				V_4
	IL_01ae:            Temp_18=safe_cast<System::IComparable^>(V_3)->CompareTo(safe_cast<System::Object^>(V_4));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_01b3:            V_5=Temp_18;                                                //stloc.s				V_5
	IL_01b5:                                                                        //ldc.i4				0x5
	IL_01ba:            V_16=5;                                                     //stloc				V_16
	IL_01be:            /*goto IL_0005;*/goto IL_01c3;                              //br				IL_0005
	IL_01c3:                                                                        //ldloc.s				V_5
	IL_01c5:            if(V_5==0)goto IL_0138;                                     //brfalse				IL_0138
	IL_01ca:                                                                        //ldc.i4				0x18
	IL_01cf:            V_16=24;                                                    //stloc				V_16
	IL_01d3:            /*goto IL_0005;*/goto IL_01d8;                              //br				IL_0005
	IL_01d8:            goto IL_02be;                                               //br				IL_02be
	IL_01dd:                                                                        //ldc.i4				0xf
	IL_01e2:            V_16=15;                                                    //stloc				V_16
	IL_01e6:            /*goto IL_0005;*/goto IL_01eb;                              //br				IL_0005
	IL_01eb:                                                                        //ldloc.s				V_10
	IL_01ed:            if(V_10==nullptr)goto IL_0173;                              //brfalse.s				IL_0173
	IL_01ef:                                                                        //ldc.i4				0x12
	IL_01f4:            V_16=18;                                                    //stloc				V_16
	IL_01f8:            /*goto IL_0005;*/goto IL_01fd;                              //br				IL_0005
	IL_01fd:            goto IL_0312;                                               //br				IL_0312
	IL_0202:                                                                        //ldarg.0
	IL_0203:            Temp_23=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0208:            Temp_24=safe_cast<System::Collections::ICollection^>(Temp_23)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_020d:            V_15=Temp_24;                                               //stloc.s				V_15
	IL_020f:                                                                        //ldloca.s				V_15
	IL_0211:                                                                        //ldarg.1
	IL_0212:            Temp_25=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0217:            Temp_26=safe_cast<System::Collections::ICollection^>(Temp_25)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_021c:                                                                        //box				System::Int32
	IL_0221:            Temp_27=V_15.CompareTo(safe_cast<System::Object^>(Temp_26));//call				System::Int32 System::Int32::CompareTo(System::Object^)
	IL_0226:            V_14=Temp_27;                                               //stloc.s				V_14
	IL_0228:                                                                        //ldc.i4				0xe
	IL_022d:            V_16=14;                                                    //stloc				V_16
	IL_0231:            /*goto IL_0005;*/goto IL_0236;                              //br				IL_0005
	IL_0236:                                                                        //ldloc.s				V_14
	IL_0238:            if(V_14==0)goto IL_0288;                                    //brfalse.s				IL_0288
	IL_023a:                                                                        //ldc.i4				0x19
	IL_023f:            V_16=25;                                                    //stloc				V_16
	IL_0243:            /*goto IL_0005;*/goto IL_0248;                              //br				IL_0005
	IL_0248:            goto IL_03ea;                                               //br				IL_03ea
	IL_024d:                                                                        //ldarg.1
	IL_024e:            Temp_12=A_1->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0253:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_0258:            V_10=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_12);//stloc.s				V_10
	IL_025a:                                                                        //ldc.i4				0x1a
	IL_025f:            V_16=26;                                                    //stloc				V_16
	IL_0263:            /*goto IL_0005;*/goto IL_0268;                              //br				IL_0005
	IL_0268:                                                                        //ldloc.s				V_10
	IL_026a:            if(V_10!=nullptr)goto IL_0395;                              //brtrue				IL_0395
	IL_026f:                                                                        //ldc.i4				0x22
	IL_0274:            V_16=34;                                                    //stloc				V_16
	IL_0278:            /*goto IL_0005;*/goto IL_027d;                              //br				IL_0005
	IL_027d:            goto IL_0103;                                               //br				IL_0103
	IL_0282:                                                                        //ldloc.s				V_6
	IL_0284:            return V_6;                                                 //ret
	IL_0285:                                                                        //ldloc.s				V_13
	IL_0287:            return V_13;                                                //ret
	IL_0288:                                                                        //ldc.i4.0
	IL_0289:            return 0;                                                   //ret
	IL_028a:                                                                        //ldarg.0
	IL_028b:            Temp_8=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0290:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_0295:            V_8=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_8);//stloc.s				V_8
	IL_0297:                                                                        //ldc.i4				0x23
	IL_029c:            V_16=35;                                                    //stloc				V_16
	IL_02a0:            /*goto IL_0005;*/goto IL_02a5;                              //br				IL_0005
	IL_02a5:                                                                        //ldloc.s				V_8
	IL_02a7:            if(V_8!=nullptr)goto IL_024d;                               //brtrue.s				IL_024d
	IL_02a9:                                                                        //ldc.i4				0x1d
	IL_02ae:            V_16=29;                                                    //stloc				V_16
	IL_02b2:            /*goto IL_0005;*/goto IL_02b7;                              //br				IL_0005
	IL_02b7:            goto IL_0342;                                               //br				IL_0342
	IL_02bc:                                                                        //ldloc.2
	IL_02bd:            return V_2;                                                 //ret
	IL_02be:                                                                        //ldloc.s				V_5
	IL_02c0:            return V_5;                                                 //ret
	IL_02c1:                                                                        //ldarg.0
	IL_02c2:            Temp_3=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_02c7:            Temp_4=safe_cast<System::Collections::ICollection^>(Temp_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02cc:            V_15=Temp_4;                                                //stloc.s				V_15
	IL_02ce:                                                                        //ldloca.s				V_15
	IL_02d0:                                                                        //ldarg.1
	IL_02d1:            Temp_5=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_02d6:            Temp_6=safe_cast<System::Collections::ICollection^>(Temp_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02db:                                                                        //box				System::Int32
	IL_02e0:            Temp_7=V_15.CompareTo(safe_cast<System::Object^>(Temp_6));  //call				System::Int32 System::Int32::CompareTo(System::Object^)
	IL_02e5:            V_7=Temp_7;                                                 //stloc.s				V_7
	IL_02e7:                                                                        //ldc.i4				0x1e
	IL_02ec:            V_16=30;                                                    //stloc				V_16
	IL_02f0:            /*goto IL_0005;*/goto IL_02f5;                              //br				IL_0005
	IL_02f5:                                                                        //ldloc.s				V_7
	IL_02f7:            if(V_7==0)goto IL_03e8;                                     //brfalse				IL_03e8
	IL_02fc:                                                                        //ldc.i4				0x11
	IL_0301:            V_16=17;                                                    //stloc				V_16
	IL_0305:            /*goto IL_0005;*/goto IL_030a;                              //br				IL_0005
	IL_030a:            goto IL_030c;                                               //br.s				IL_030c
	IL_030c:                                                                        //ldloc.s				V_7
	IL_030e:            return V_7;                                                 //ret
	IL_030f:                                                                        //ldloc.s				V_12
	IL_0311:            return V_12;                                                //ret
	IL_0312:                                                                        //ldloc.s				V_8
	IL_0314:                                                                        //ldloc.s				V_10
	IL_0316:            Temp_20=safe_cast<System::IComparable^>(V_8)->CompareTo(safe_cast<System::Object^>(V_10));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_031b:            V_12=Temp_20;                                               //stloc.s				V_12
	IL_031d:                                                                        //ldc.i4				0x7
	IL_0322:            V_16=7;                                                     //stloc				V_16
	IL_0326:            /*goto IL_0005;*/goto IL_032b;                              //br				IL_0005
	IL_032b:                                                                        //ldloc.s				V_12
	IL_032d:            if(V_12==0)goto IL_0173;                                    //brfalse				IL_0173
	IL_0332:                                                                        //ldc.i4				0x9
	IL_0337:            V_16=9;                                                     //stloc				V_16
	IL_033b:            /*goto IL_0005;*/goto IL_0340;                              //br				IL_0005
	IL_0340:            goto IL_030f;                                               //br.s				IL_030f
	IL_0342:                                                                        //ldarg.1
	IL_0343:            Temp_30=A_1->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0348:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_034d:            V_9=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_30);//stloc.s				V_9
	IL_034f:                                                                        //ldc.i4				0x6
	IL_0354:            V_16=6;                                                     //stloc				V_16
	IL_0358:            /*goto IL_0005;*/goto IL_035d;                              //br				IL_0005
	IL_035d:                                                                        //ldloc.s				V_9
	IL_035f:            if(V_9==nullptr)goto IL_024d;                               //brfalse				IL_024d
	IL_0364:                                                                        //ldc.i4				0x13
	IL_0369:            V_16=19;                                                    //stloc				V_16
	IL_036d:            /*goto IL_0005;*/goto IL_0372;                              //br				IL_0005
	IL_0372:            goto IL_0374;                                               //br.s				IL_0374
	IL_0374:                                                                        //ldloc.s				V_9
	IL_0376:            Temp_21=V_9->Resolve();                                     //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleReference::Resolve()
	IL_037b:            Temp_22=Temp_21->Assembly;                                  //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_0380:            V_8=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_22);//stloc.s				V_8
	IL_0382:                                                                        //ldc.i4				0xb
	IL_0387:            V_16=11;                                                    //stloc				V_16
	IL_038b:            /*goto IL_0005;*/goto IL_0390;                              //br				IL_0005
	IL_0390:            goto IL_024d;                                               //br				IL_024d
	IL_0395:                                                                        //ldc.i4				0x21
	IL_039a:            V_16=33;                                                    //stloc				V_16
	IL_039e:            /*goto IL_0005;*/goto IL_03a3;                              //br				IL_0005
	IL_03a3:                                                                        //ldloc.s				V_8
	IL_03a5:            if(V_8!=nullptr)goto IL_00db;                               //brtrue				IL_00db
	IL_03aa:                                                                        //ldc.i4				0x4
	IL_03af:            V_16=4;                                                     //stloc				V_16
	IL_03b3:            /*goto IL_0005;*/goto IL_03b8;                              //br				IL_0005
	IL_03b8:            goto IL_044b;                                               //br				IL_044b
	IL_03bd:            goto IL_03c0;                                               //br.s				IL_03c0
	IL_03bf:                                                                        //break
	IL_03c0:                                                                        //ldc.i4				0x1
	IL_03c5:            V_16=1;                                                     //stloc				V_16
	IL_03c9:            /*goto IL_0005;*/goto IL_03ce;                              //br				IL_0005
	IL_03ce:                                                                        //ldloc.s				V_4
	IL_03d0:            if(V_4==nullptr)goto IL_028a;                               //brfalse				IL_028a
	IL_03d5:                                                                        //ldc.i4				0xd
	IL_03da:            V_16=13;                                                    //stloc				V_16
	IL_03de:            /*goto IL_0005;*/goto IL_03e3;                              //br				IL_0005
	IL_03e3:            goto IL_01ab;                                               //br				IL_01ab
	IL_03e8:                                                                        //ldc.i4.0
	IL_03e9:            return 0;                                                   //ret
	IL_03ea:                                                                        //ldloc.s				V_14
	IL_03ec:            return V_14;                                                //ret
	IL_03ed:                                                                        //ldarg.0
	IL_03ee:            Temp_28=A_0->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_03f3:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_03f8:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_28);//stloc.3
	IL_03f9:                                                                        //ldarg.1
	IL_03fa:            Temp_29=A_1->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_03ff:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0404:            V_4=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_29);//stloc.s				V_4
	IL_0406:                                                                        //ldc.i4				0x3
	IL_040b:            V_16=3;                                                     //stloc				V_16
	IL_040f:            /*goto IL_0005;*/goto IL_0414;                              //br				IL_0005
	IL_0414:                                                                        //ldloc.3
	IL_0415:            if(V_3==nullptr)goto IL_028a;                               //brfalse				IL_028a
	IL_041a:                                                                        //ldc.i4				0x8
	IL_041f:            V_16=8;                                                     //stloc				V_16
	IL_0423:            /*goto IL_0005;*/goto IL_0428;                              //br				IL_0005
	IL_0428:            goto IL_03bd;                                               //br.s				IL_03bd
	IL_042a:                                                                        //ldloc.s				V_11
	IL_042c:            Temp_16=V_11->Resolve();                                    //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleReference::Resolve()
	IL_0431:            Temp_17=Temp_16->Assembly;                                  //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_0436:            V_10=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_17);//stloc.s				V_10
	IL_0438:                                                                        //ldc.i4				0x17
	IL_043d:            V_16=23;                                                    //stloc				V_16
	IL_0441:            /*goto IL_0005;*/goto IL_0446;                              //br				IL_0005
	IL_0446:            goto IL_0395;                                               //br				IL_0395
	IL_044b:                                                                        //ldc.i4				0x10
	IL_0450:            V_16=16;                                                    //stloc				V_16
	IL_0454:            /*goto IL_0005;*/goto IL_0459;                              //br				IL_0005
	IL_0459:                                                                        //ldloc.s				V_10
	IL_045b:            if(V_10==nullptr)goto IL_0470;                              //brfalse.s				IL_0470
	IL_045d:                                                                        //ldc.i4				0x20
	IL_0462:            V_16=32;                                                    //stloc				V_16
	IL_0466:            /*goto IL_0005;*/goto IL_046b;                              //br				IL_0005
	IL_046b:            goto IL_00db;                                               //br				IL_00db
	IL_0470:            Temp_19=gcnew System::NotSupportedException();              //newobj				void System::NotSupportedException::.ctor()
	IL_0475:            throw Temp_19;                                              //throw

}
inline System::Boolean Root::T_x149::M_x12(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IMethodReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_007a;case 1:goto IL_0091;case 2:goto IL_004d;case 3:goto IL_000b;case 4:goto IL_0040;case 5:goto IL_006b;};//switch				(IL_007a,IL_0091,IL_004d,IL_000b,IL_0040,IL_006b)
	IL_002e:            goto IL_0031;                                               //br.s				IL_0031
	IL_0030:                                                                        //break
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldarg.1
	IL_0033:            if(A_0==A_1)goto IL_0095;                                   //beq.s				IL_0095
	IL_0035:                                                                        //ldc.i4				0x4
	IL_003a:            V_0=4;                                                      //stloc				V_0
	IL_003e:            /*goto IL_000d;*/goto IL_0040;                              //br.s				IL_000d
	IL_0040:            goto IL_006f;                                               //br.s				IL_006f
	IL_0042:                                                                        //ldc.i4				0x2
	IL_0047:            V_0=2;                                                      //stloc				V_0
	IL_004b:            /*goto IL_000d;*/goto IL_004d;                              //br.s				IL_000d
	IL_004d:                                                                        //ldarg.0
	IL_004e:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0053:                                                                        //ldarg.1
	IL_0054:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0059:            Temp_3=Temp_1->Equals(safe_cast<System::Object^>(Temp_2));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_005e:            if(Temp_3)goto IL_0095;                                     //brtrue.s				IL_0095
	IL_0060:                                                                        //ldc.i4				0x5
	IL_0065:            V_0=5;                                                      //stloc				V_0
	IL_0069:            /*goto IL_000d;*/goto IL_006b;                              //br.s				IL_000d
	IL_006b:            goto IL_0093;                                               //br.s				IL_0093
	IL_006d:                                                                        //ldc.i4.0
	IL_006e:            return false;                                               //ret
	IL_006f:                                                                        //ldc.i4				0x0
	IL_0074:            V_0=0;                                                      //stloc				V_0
	IL_0078:            /*goto IL_000d;*/goto IL_007a;                              //br.s				IL_000d
	IL_007a:                                                                        //ldarg.0
	IL_007b:                                                                        //ldarg.1
	IL_007c:            Temp_0=Root::T_x149::M_x2(A_0,A_1);                         //call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IMethodReference^)
	IL_0081:            if(Temp_0)goto IL_0042;                                     //brtrue.s				IL_0042
	IL_0083:                                                                        //ldc.i4				0x1
	IL_0088:            V_0=1;                                                      //stloc				V_0
	IL_008c:            /*goto IL_000d;*/goto IL_0091;                              //br				IL_000d
	IL_0091:            goto IL_006d;                                               //br.s				IL_006d
	IL_0093:                                                                        //ldc.i4.0
	IL_0094:            return false;                                               //ret
	IL_0095:                                                                        //ldc.i4.1
	IL_0096:            return true;                                                //ret

}
inline System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IAssemblyReference^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Version^ Temp_9 = nullptr;
	System::Version^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::Int32 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	System::String^ Temp_14 = nullptr;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	array<System::Byte>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0076;                                               //br.s				IL_0076
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_022b;case 1:goto IL_020c;case 2:goto IL_012f;case 3:goto IL_0166;case 4:goto IL_0118;case 5:goto IL_018d;case 6:goto IL_017b;case 7:goto IL_000b;case 8:goto IL_009f;case 9:goto IL_00b5;case 10:goto IL_01a1;case 11:goto IL_0271;case 12:goto IL_01e3;case 13:goto IL_008c;case 14:goto IL_023b;case 15:goto IL_00f4;case 16:goto IL_01fa;case 17:goto IL_01c2;case 18:goto IL_0142;case 19:goto IL_025c;case 20:goto IL_01d3;case 21:goto IL_00c8;case 22:goto IL_00e1;case 23:goto IL_0282;};//switch				(IL_022b,IL_020c,IL_012f,IL_0166,IL_0118,IL_018d,IL_017b,IL_000b,IL_009f,IL_00b5,IL_01a1,IL_0271,IL_01e3,IL_008c,IL_023b,IL_00f4,IL_01fa,IL_01c2,IL_0142,IL_025c,IL_01d3,IL_00c8,IL_00e1,IL_0282)
	IL_0076:                                                                        //ldarg.0
	IL_0077:            Temp_14=A_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_007c:            if(Temp_14==nullptr)goto IL_0287;                           //brfalse				IL_0287
	IL_0081:                                                                        //ldc.i4				0xd
	IL_0086:            V_3=13;                                                     //stloc				V_3
	IL_008a:            /*goto IL_000d;*/goto IL_008c;                              //br.s				IL_000d
	IL_008c:            goto IL_022d;                                               //br				IL_022d
	IL_0091:                                                                        //ldc.i4				0x8
	IL_0096:            V_3=8;                                                      //stloc				V_3
	IL_009a:            /*goto IL_000d;*/goto IL_009f;                              //br				IL_000d
	IL_009f:                                                                        //ldloc.0
	IL_00a0:                                                                        //ldloc.2
	IL_00a1:                                                                        //ldelem.u1
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:                                                                        //ldloc.2
	IL_00a4:                                                                        //ldelem.u1
	IL_00a5:            if(V_0[V_2]==V_1[V_2])goto IL_011d;                         //beq.s				IL_011d
	IL_00a7:                                                                        //ldc.i4				0x9
	IL_00ac:            V_3=9;                                                      //stloc				V_3
	IL_00b0:            /*goto IL_000d;*/goto IL_00b5;                              //br				IL_000d
	IL_00b5:            goto IL_01fc;                                               //br				IL_01fc
	IL_00ba:                                                                        //ldc.i4				0x15
	IL_00bf:            V_3=21;                                                     //stloc				V_3
	IL_00c3:            /*goto IL_000d;*/goto IL_00c8;                              //br				IL_000d
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:            Temp_12=V_0->Length;                                        //ldlen
	IL_00ca:                                                                        //conv.i4
	IL_00cb:                                                                        //ldloc.1
	IL_00cc:            Temp_13=V_1->Length;                                        //ldlen
	IL_00cd:                                                                        //conv.i4
	IL_00ce:            if(Temp_12!=Temp_13)goto IL_0287;                           //bne.un				IL_0287
	IL_00d3:                                                                        //ldc.i4				0x16
	IL_00d8:            V_3=22;                                                     //stloc				V_3
	IL_00dc:            /*goto IL_000d;*/goto IL_00e1;                              //br				IL_000d
	IL_00e1:            goto IL_016b;                                               //br				IL_016b
	IL_00e6:                                                                        //ldc.i4				0xf
	IL_00eb:            V_3=15;                                                     //stloc				V_3
	IL_00ef:            /*goto IL_000d;*/goto IL_00f4;                              //br				IL_000d
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            Temp_6=A_0->Culture;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_00fa:                                                                        //ldarg.1
	IL_00fb:            Temp_7=A_1->Culture;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0100:            Temp_8=(Temp_6 == Temp_7);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0105:            if(!Temp_8)goto IL_0287;                                    //brfalse				IL_0287
	IL_010a:                                                                        //ldc.i4				0x4
	IL_010f:            V_3=4;                                                      //stloc				V_3
	IL_0113:            /*goto IL_000d;*/goto IL_0118;                              //br				IL_000d
	IL_0118:            goto IL_01a6;                                               //br				IL_01a6
	IL_011d:                                                                        //ldloc.2
	IL_011e:                                                                        //ldc.i4.1
	IL_011f:                                                                        //add
	IL_0120:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0121:                                                                        //ldc.i4				0x2
	IL_0126:            V_3=2;                                                      //stloc				V_3
	IL_012a:            /*goto IL_000d;*/goto IL_012f;                              //br				IL_000d
	IL_012f:            goto IL_01d5;                                               //br				IL_01d5
	IL_0134:                                                                        //ldc.i4				0x12
	IL_0139:            V_3=18;                                                     //stloc				V_3
	IL_013d:            /*goto IL_000d;*/goto IL_0142;                              //br				IL_000d
	IL_0142:                                                                        //ldarg.0
	IL_0143:            Temp_9=A_0->Version;                                        //callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_0148:                                                                        //ldarg.1
	IL_0149:            Temp_10=A_1->Version;                                       //callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_014e:            Temp_11=(Temp_9 == Temp_10);                                //call				System::Boolean System::Version::op_Equality(System::Version^,System::Version^)
	IL_0153:            if(!Temp_11)goto IL_0287;                                   //brfalse				IL_0287
	IL_0158:                                                                        //ldc.i4				0x3
	IL_015d:            V_3=3;                                                      //stloc				V_3
	IL_0161:            /*goto IL_000d;*/goto IL_0166;                              //br				IL_000d
	IL_0166:            goto IL_00e6;                                               //br				IL_00e6
	IL_016b:                                                                        //ldc.i4.0
	IL_016c:            V_2=0;                                                      //stloc.2
	IL_016d:                                                                        //ldc.i4				0x6
	IL_0172:            V_3=6;                                                      //stloc				V_3
	IL_0176:            /*goto IL_000d;*/goto IL_017b;                              //br				IL_000d
	IL_017b:            goto IL_01d5;                                               //br.s				IL_01d5
	IL_017d:                                                                        //ldc.i4.1
	IL_017e:            return true;                                                //ret
	IL_017f:                                                                        //ldc.i4				0x5
	IL_0184:            V_3=5;                                                      //stloc				V_3
	IL_0188:            /*goto IL_000d;*/goto IL_018d;                              //br				IL_000d
	IL_018d:                                                                        //ldloc.0
	IL_018e:            if(V_0==nullptr)goto IL_0287;                               //brfalse				IL_0287
	IL_0193:                                                                        //ldc.i4				0xa
	IL_0198:            V_3=10;                                                     //stloc				V_3
	IL_019c:            /*goto IL_000d;*/goto IL_01a1;                              //br				IL_000d
	IL_01a1:            goto IL_0263;                                               //br				IL_0263
	IL_01a6:                                                                        //ldarg.0
	IL_01a7:            Temp_0=A_0->PublicKeyToken;                                 //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_01ac:            V_0=Temp_0;                                                 //stloc.0
	IL_01ad:                                                                        //ldarg.1
	IL_01ae:            Temp_1=A_1->PublicKeyToken;                                 //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_01b3:            V_1=Temp_1;                                                 //stloc.1
	IL_01b4:                                                                        //ldc.i4				0x11
	IL_01b9:            V_3=17;                                                     //stloc				V_3
	IL_01bd:            /*goto IL_000d;*/goto IL_01c2;                              //br				IL_000d
	IL_01c2:                                                                        //ldloc.0
	IL_01c3:            if(V_0!=nullptr)goto IL_017f;                               //brtrue.s				IL_017f
	IL_01c5:                                                                        //ldc.i4				0x14
	IL_01ca:            V_3=20;                                                     //stloc				V_3
	IL_01ce:            /*goto IL_000d;*/goto IL_01d3;                              //br				IL_000d
	IL_01d3:            goto IL_01fe;                                               //br.s				IL_01fe
	IL_01d5:                                                                        //ldc.i4				0xc
	IL_01da:            V_3=12;                                                     //stloc				V_3
	IL_01de:            /*goto IL_000d;*/goto IL_01e3;                              //br				IL_000d
	IL_01e3:                                                                        //ldloc.2
	IL_01e4:                                                                        //ldloc.0
	IL_01e5:            Temp_2=V_0->Length;                                         //ldlen
	IL_01e6:                                                                        //conv.i4
	IL_01e7:            if(V_2<Temp_2)goto IL_0091;                                 //blt				IL_0091
	IL_01ec:                                                                        //ldc.i4				0x10
	IL_01f1:            V_3=16;                                                     //stloc				V_3
	IL_01f5:            /*goto IL_000d;*/goto IL_01fa;                              //br				IL_000d
	IL_01fa:            goto IL_017d;                                               //br.s				IL_017d
	IL_01fc:                                                                        //ldc.i4.0
	IL_01fd:            return false;                                               //ret
	IL_01fe:                                                                        //ldc.i4				0x1
	IL_0203:            V_3=1;                                                      //stloc				V_3
	IL_0207:            /*goto IL_000d;*/goto IL_020c;                              //br				IL_000d
	IL_020c:                                                                        //ldc.i4.0
	IL_020d:                                                                        //dup
	IL_020e:                                                                        //dup
	IL_020f:                                                                        //ldc.i4.0
	IL_0210:                                                                        //add
	IL_0211:                                                                        //bgt				IL_020d
	IL_0216:                                                                        //pop
	IL_0217:                                                                        //ldloc.1
	IL_0218:            if(V_1!=nullptr)goto IL_017f;                               //brtrue				IL_017f
	IL_021d:                                                                        //ldc.i4				0x0
	IL_0222:            V_3=0;                                                      //stloc				V_3
	IL_0226:            /*goto IL_000d;*/goto IL_022b;                              //br				IL_000d
	IL_022b:            goto IL_0261;                                               //br.s				IL_0261
	IL_022d:                                                                        //ldc.i4				0xe
	IL_0232:            V_3=14;                                                     //stloc				V_3
	IL_0236:            /*goto IL_000d;*/goto IL_023b;                              //br				IL_000d
	IL_023b:                                                                        //ldarg.0
	IL_023c:            Temp_3=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0241:                                                                        //ldarg.1
	IL_0242:            Temp_4=A_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0247:            Temp_5=(Temp_3 == Temp_4);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_024c:            if(!Temp_5)goto IL_0287;                                    //brfalse.s				IL_0287
	IL_024e:                                                                        //ldc.i4				0x13
	IL_0253:            V_3=19;                                                     //stloc				V_3
	IL_0257:            /*goto IL_000d;*/goto IL_025c;                              //br				IL_000d
	IL_025c:            goto IL_0134;                                               //br				IL_0134
	IL_0261:                                                                        //ldc.i4.1
	IL_0262:            return true;                                                //ret
	IL_0263:                                                                        //ldc.i4				0xb
	IL_0268:            V_3=11;                                                     //stloc				V_3
	IL_026c:            /*goto IL_000d;*/goto IL_0271;                              //br				IL_000d
	IL_0271:                                                                        //ldloc.1
	IL_0272:            if(V_1==nullptr)goto IL_0287;                               //brfalse.s				IL_0287
	IL_0274:                                                                        //ldc.i4				0x17
	IL_0279:            V_3=23;                                                     //stloc				V_3
	IL_027d:            /*goto IL_000d;*/goto IL_0282;                              //br				IL_000d
	IL_0282:            goto IL_00ba;                                               //br				IL_00ba
	IL_0287:                                                                        //ldc.i4.0
	IL_0288:            return false;                                               //ret

}
inline System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IEventReference^ A_0,Reflector::CodeModel::IEventReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0098;case 1:goto IL_00b9;case 2:goto IL_000b;case 3:goto IL_0059;case 4:goto IL_0077;case 5:goto IL_004c;};//switch				(IL_0098,IL_00b9,IL_000b,IL_0059,IL_0077,IL_004c)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_7=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_003a:            Temp_8=Temp_6->Equals(Temp_7);                              //callvirt				System::Boolean System::String::Equals(System::String^)
	IL_003f:            if(Temp_8)goto IL_007f;                                     //brtrue.s				IL_007f
	IL_0041:                                                                        //ldc.i4				0x5
	IL_0046:            V_0=5;                                                      //stloc				V_0
	IL_004a:            /*goto IL_000d;*/goto IL_004c;                              //br.s				IL_000d
	IL_004c:            goto IL_007b;                                               //br.s				IL_007b
	IL_004e:                                                                        //ldc.i4				0x3
	IL_0053:            V_0=3;                                                      //stloc				V_0
	IL_0057:            /*goto IL_000d;*/goto IL_0059;                              //br.s				IL_000d
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_005f:                                                                        //ldarg.1
	IL_0060:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0065:            Temp_5=Temp_3->Equals(safe_cast<System::Object^>(Temp_4));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_006a:            if(Temp_5)goto IL_00bb;                                     //brtrue.s				IL_00bb
	IL_006c:                                                                        //ldc.i4				0x4
	IL_0071:            V_0=4;                                                      //stloc				V_0
	IL_0075:            /*goto IL_000d;*/goto IL_0077;                              //br.s				IL_000d
	IL_0077:            goto IL_007d;                                               //br.s				IL_007d
	IL_0079:                                                                        //ldc.i4.0
	IL_007a:            return false;                                               //ret
	IL_007b:                                                                        //ldc.i4.0
	IL_007c:            return false;                                               //ret
	IL_007d:                                                                        //ldc.i4.0
	IL_007e:            return false;                                               //ret
	IL_007f:                                                                        //ldc.i4.5
	IL_0080:                                                                        //dup
	IL_0081:                                                                        //dup
	IL_0082:                                                                        //ldc.i4.3
	IL_0083:                                                                        //sub
	IL_0084:                                                                        //blt				IL_0080
	IL_0089:                                                                        //pop
	IL_008a:                                                                        //ldc.i4				0x0
	IL_008f:            V_0=0;                                                      //stloc				V_0
	IL_0093:            /*goto IL_000d;*/goto IL_0098;                              //br				IL_000d
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_0=A_0->EventType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_009e:                                                                        //ldarg.1
	IL_009f:            Temp_1=A_1->EventType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_00a4:            Temp_2=Temp_0->Equals(safe_cast<System::Object^>(Temp_1));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00a9:            if(Temp_2)goto IL_004e;                                     //brtrue.s				IL_004e
	IL_00ab:                                                                        //ldc.i4				0x1
	IL_00b0:            V_0=1;                                                      //stloc				V_0
	IL_00b4:            /*goto IL_000d;*/goto IL_00b9;                              //br				IL_000d
	IL_00b9:            goto IL_0079;                                               //br.s				IL_0079
	IL_00bb:                                                                        //ldc.i4.1
	IL_00bc:            return true;                                                //ret

}
inline System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IFieldReference^ A_0,Reflector::CodeModel::IFieldReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:            /*goto IL_0018;*/goto IL_000b;                              //br.s				IL_0018
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:            goto IL_0041;                                               //br.s				IL_0041
	IL_0018:                                                                        //ldloc				V_0
	IL_001c:            switch(V_0){case 0:goto IL_00ab;case 1:goto IL_005f;case 2:goto IL_0050;case 3:goto IL_000b;case 4:goto IL_00bf;case 5:goto IL_00e0;case 6:goto IL_008a;case 7:goto IL_007d;};//switch				(IL_00ab,IL_005f,IL_0050,IL_000b,IL_00bf,IL_00e0,IL_008a,IL_007d)
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldarg.1
	IL_0043:            if(A_0!=A_1)goto IL_007f;                                   //bne.un.s				IL_007f
	IL_0045:                                                                        //ldc.i4				0x2
	IL_004a:            V_0=2;                                                      //stloc				V_0
	IL_004e:            /*goto IL_0018;*/goto IL_0050;                              //br.s				IL_0018
	IL_0050:            goto IL_00af;                                               //br.s				IL_00af
	IL_0052:                                                                        //ldc.i4.0
	IL_0053:            return false;                                               //ret
	IL_0054:                                                                        //ldc.i4				0x1
	IL_0059:            V_0=1;                                                      //stloc				V_0
	IL_005d:            /*goto IL_0018;*/goto IL_005f;                              //br.s				IL_0018
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_0=A_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0065:                                                                        //ldarg.1
	IL_0066:            Temp_1=A_1->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_006b:            Temp_2=Temp_0->Equals(safe_cast<System::Object^>(Temp_1));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0070:            if(Temp_2)goto IL_00b1;                                     //brtrue.s				IL_00b1
	IL_0072:                                                                        //ldc.i4				0x7
	IL_0077:            V_0=7;                                                      //stloc				V_0
	IL_007b:            /*goto IL_0018;*/goto IL_007d;                              //br.s				IL_0018
	IL_007d:            goto IL_0052;                                               //br.s				IL_0052
	IL_007f:                                                                        //ldc.i4				0x6
	IL_0084:            V_0=6;                                                      //stloc				V_0
	IL_0088:            /*goto IL_0018;*/goto IL_008a;                              //br.s				IL_0018
	IL_008a:                                                                        //ldarg.0
	IL_008b:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0090:                                                                        //ldarg.1
	IL_0091:            Temp_7=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0096:            Temp_8=(Temp_6 != Temp_7);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_009b:            if(!Temp_8)goto IL_0054;                                    //brfalse.s				IL_0054
	IL_009d:                                                                        //ldc.i4				0x0
	IL_00a2:            V_0=0;                                                      //stloc				V_0
	IL_00a6:            /*goto IL_0018;*/goto IL_00ab;                              //br				IL_0018
	IL_00ab:            goto IL_00e2;                                               //br.s				IL_00e2
	IL_00ad:                                                                        //ldc.i4.0
	IL_00ae:            return false;                                               //ret
	IL_00af:                                                                        //ldc.i4.1
	IL_00b0:            return true;                                                //ret
	IL_00b1:                                                                        //ldc.i4				0x4
	IL_00b6:            V_0=4;                                                      //stloc				V_0
	IL_00ba:            /*goto IL_0018;*/goto IL_00bf;                              //br				IL_0018
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00c5:                                                                        //ldarg.1
	IL_00c6:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00cb:            Temp_5=Temp_3->Equals(safe_cast<System::Object^>(Temp_4));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00d0:            if(Temp_5)goto IL_00e4;                                     //brtrue.s				IL_00e4
	IL_00d2:                                                                        //ldc.i4				0x5
	IL_00d7:            V_0=5;                                                      //stloc				V_0
	IL_00db:            /*goto IL_0018;*/goto IL_00e0;                              //br				IL_0018
	IL_00e0:            goto IL_00ad;                                               //br.s				IL_00ad
	IL_00e2:                                                                        //ldc.i4.0
	IL_00e3:            return false;                                               //ret
	IL_00e4:                                                                        //ldc.i4.1
	IL_00e5:            return true;                                                //ret

}
inline System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IMethodReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Boolean Temp_4 = false;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_00ac;case 1:goto IL_0059;case 2:goto IL_000b;case 3:goto IL_0095;case 4:goto IL_007c;case 5:goto IL_004c;};//switch				(IL_00ac,IL_0059,IL_000b,IL_0095,IL_007c,IL_004c)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_003a:            Temp_7=Temp_5->Equals(Temp_6);                              //callvirt				System::Boolean System::String::Equals(System::String^)
	IL_003f:            if(Temp_7)goto IL_0087;                                     //brtrue.s				IL_0087
	IL_0041:                                                                        //ldc.i4				0x5
	IL_0046:            V_0=5;                                                      //stloc				V_0
	IL_004a:            /*goto IL_000d;*/goto IL_004c;                              //br.s				IL_000d
	IL_004c:            goto IL_0080;                                               //br.s				IL_0080
	IL_004e:                                                                        //ldc.i4				0x1
	IL_0053:            V_0=1;                                                      //stloc				V_0
	IL_0057:            /*goto IL_000d;*/goto IL_0059;                              //br.s				IL_000d
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_005f:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0064:                                                                        //ldarg.1
	IL_0065:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_006a:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_006f:            if(Temp_1==Temp_3)goto IL_00ae;                             //beq.s				IL_00ae
	IL_0071:                                                                        //ldc.i4				0x4
	IL_0076:            V_0=4;                                                      //stloc				V_0
	IL_007a:            /*goto IL_000d;*/goto IL_007c;                              //br.s				IL_000d
	IL_007c:            goto IL_0085;                                               //br.s				IL_0085
	IL_007e:                                                                        //ldc.i4.0
	IL_007f:            return false;                                               //ret
	IL_0080:            goto IL_0083;                                               //br.s				IL_0083
	IL_0082:                                                                        //break
	IL_0083:                                                                        //ldc.i4.0
	IL_0084:            return false;                                               //ret
	IL_0085:                                                                        //ldc.i4.0
	IL_0086:            return false;                                               //ret
	IL_0087:                                                                        //ldc.i4				0x3
	IL_008c:            V_0=3;                                                      //stloc				V_0
	IL_0090:            /*goto IL_000d;*/goto IL_0095;                              //br				IL_000d
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldarg.1
	IL_0097:            Temp_4=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0),safe_cast<Reflector::CodeModel::IMethodSignature^>(A_1));//call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IMethodSignature^,Reflector::CodeModel::IMethodSignature^)
	IL_009c:            if(Temp_4)goto IL_004e;                                     //brtrue.s				IL_004e
	IL_009e:                                                                        //ldc.i4				0x0
	IL_00a3:            V_0=0;                                                      //stloc				V_0
	IL_00a7:            /*goto IL_000d;*/goto IL_00ac;                              //br				IL_000d
	IL_00ac:            goto IL_007e;                                               //br.s				IL_007e
	IL_00ae:                                                                        //ldc.i4.1
	IL_00af:            return true;                                                //ret

}
inline System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IPropertyReference^ A_0,Reflector::CodeModel::IPropertyReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_9 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_10 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_11 = nullptr;
	Reflector::CodeModel::IType^ Temp_12 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_13 = nullptr;
	Reflector::CodeModel::IType^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Boolean Temp_18 = false;
	//local variables.
	Reflector::CodeModel::IParameterDeclarationCollection^ V_0 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_004e;                                               //br.s				IL_004e
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_00f9;case 1:goto IL_01b6;case 2:goto IL_019a;case 3:goto IL_0142;case 4:goto IL_0171;case 5:goto IL_00d5;case 6:goto IL_0109;case 7:goto IL_000b;case 8:goto IL_012a;case 9:goto IL_015c;case 10:goto IL_00c3;case 11:goto IL_0083;case 12:goto IL_006f;case 13:goto IL_0096;};//switch				(IL_00f9,IL_01b6,IL_019a,IL_0142,IL_0171,IL_00d5,IL_0109,IL_000b,IL_012a,IL_015c,IL_00c3,IL_0083,IL_006f,IL_0096)
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_16=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0054:                                                                        //ldarg.1
	IL_0055:            Temp_17=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_005a:            Temp_18=Temp_16->Equals(Temp_17);                           //callvirt				System::Boolean System::String::Equals(System::String^)
	IL_005f:            if(Temp_18)goto IL_00fb;                                    //brtrue				IL_00fb
	IL_0064:                                                                        //ldc.i4				0xc
	IL_0069:            V_3=12;                                                     //stloc				V_3
	IL_006d:            /*goto IL_000d;*/goto IL_006f;                              //br.s				IL_000d
	IL_006f:            goto IL_0132;                                               //br				IL_0132
	IL_0074:                                                                        //ldloc.2
	IL_0075:                                                                        //ldc.i4.1
	IL_0076:                                                                        //add
	IL_0077:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0078:                                                                        //ldc.i4				0xb
	IL_007d:            V_3=11;                                                     //stloc				V_3
	IL_0081:            /*goto IL_000d;*/goto IL_0083;                              //br.s				IL_000d
	IL_0083:            goto IL_0134;                                               //br				IL_0134
	IL_0088:                                                                        //ldc.i4				0xd
	IL_008d:            V_3=13;                                                     //stloc				V_3
	IL_0091:            /*goto IL_000d;*/goto IL_0096;                              //br				IL_000d
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldloc.2
	IL_0098:            Temp_11=V_0[V_2];                                           //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_009d:            Temp_12=Temp_11->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:                                                                        //ldloc.2
	IL_00a4:            Temp_13=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_00a9:            Temp_14=Temp_13->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00ae:            Temp_15=Temp_12->Equals(safe_cast<System::Object^>(Temp_14));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00b3:            if(Temp_15)goto IL_0074;                                    //brtrue.s				IL_0074
	IL_00b5:                                                                        //ldc.i4				0xa
	IL_00ba:            V_3=10;                                                     //stloc				V_3
	IL_00be:            /*goto IL_000d;*/goto IL_00c3;                              //br				IL_000d
	IL_00c3:            goto IL_012c;                                               //br.s				IL_012c
	IL_00c5:                                                                        //ldc.i4.0
	IL_00c6:            return false;                                               //ret
	IL_00c7:                                                                        //ldc.i4				0x5
	IL_00cc:            V_3=5;                                                      //stloc				V_3
	IL_00d0:            /*goto IL_000d;*/goto IL_00d5;                              //br				IL_000d
	IL_00d5:                                                                        //ldarg.0
	IL_00d6:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00db:                                                                        //ldarg.1
	IL_00dc:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(A_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00e1:            Temp_5=Temp_3->Equals(safe_cast<System::Object^>(Temp_4));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00e6:            if(Temp_5)goto IL_01bb;                                     //brtrue				IL_01bb
	IL_00eb:                                                                        //ldc.i4				0x0
	IL_00f0:            V_3=0;                                                      //stloc				V_3
	IL_00f4:            /*goto IL_000d;*/goto IL_00f9;                              //br				IL_000d
	IL_00f9:            goto IL_012e;                                               //br.s				IL_012e
	IL_00fb:                                                                        //ldc.i4				0x6
	IL_0100:            V_3=6;                                                      //stloc				V_3
	IL_0104:            /*goto IL_000d;*/goto IL_0109;                              //br				IL_000d
	IL_0109:                                                                        //ldarg.0
	IL_010a:            Temp_6=A_0->PropertyType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_010f:                                                                        //ldarg.1
	IL_0110:            Temp_7=A_1->PropertyType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0115:            Temp_8=Temp_6->Equals(safe_cast<System::Object^>(Temp_7));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_011a:            if(Temp_8)goto IL_0173;                                     //brtrue.s				IL_0173
	IL_011c:                                                                        //ldc.i4				0x8
	IL_0121:            V_3=8;                                                      //stloc				V_3
	IL_0125:            /*goto IL_000d;*/goto IL_012a;                              //br				IL_000d
	IL_012a:            goto IL_00c5;                                               //br.s				IL_00c5
	IL_012c:                                                                        //ldc.i4.0
	IL_012d:            return false;                                               //ret
	IL_012e:                                                                        //ldc.i4.0
	IL_012f:            return false;                                               //ret
	IL_0130:                                                                        //ldc.i4.0
	IL_0131:            return false;                                               //ret
	IL_0132:                                                                        //ldc.i4.0
	IL_0133:            return false;                                               //ret
	IL_0134:                                                                        //ldc.i4				0x3
	IL_0139:            V_3=3;                                                      //stloc				V_3
	IL_013d:            /*goto IL_000d;*/goto IL_0142;                              //br				IL_000d
	IL_0142:                                                                        //ldloc.2
	IL_0143:                                                                        //ldloc.0
	IL_0144:            Temp_2=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0149:            if(V_2<Temp_2)goto IL_0088;                                 //blt				IL_0088
	IL_014e:                                                                        //ldc.i4				0x9
	IL_0153:            V_3=9;                                                      //stloc				V_3
	IL_0157:            /*goto IL_000d;*/goto IL_015c;                              //br				IL_000d
	IL_015c:            goto IL_00c7;                                               //br				IL_00c7
	IL_0161:                                                                        //ldc.i4.0
	IL_0162:            V_2=0;                                                      //stloc.2
	IL_0163:                                                                        //ldc.i4				0x4
	IL_0168:            V_3=4;                                                      //stloc				V_3
	IL_016c:            /*goto IL_000d;*/goto IL_0171;                              //br				IL_000d
	IL_0171:            goto IL_0134;                                               //br.s				IL_0134
	IL_0173:                                                                        //ldarg.0
	IL_0174:            Temp_9=A_0->Parameters;                                     //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0179:            V_0=Temp_9;                                                 //stloc.0
	IL_017a:                                                                        //ldarg.1
	IL_017b:            Temp_10=A_1->Parameters;                                    //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0180:            V_1=Temp_10;                                                //stloc.1
	IL_0181:                                                                        //ldc.i4.0
	IL_0182:                                                                        //dup
	IL_0183:                                                                        //dup
	IL_0184:                                                                        //ldc.i4.6
	IL_0185:                                                                        //add
	IL_0186:                                                                        //bgt				IL_0182
	IL_018b:                                                                        //pop
	IL_018c:                                                                        //ldc.i4				0x2
	IL_0191:            V_3=2;                                                      //stloc				V_3
	IL_0195:            /*goto IL_000d;*/goto IL_019a;                              //br				IL_000d
	IL_019a:                                                                        //ldloc.0
	IL_019b:            Temp_0=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01a0:                                                                        //ldloc.1
	IL_01a1:            Temp_1=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01a6:            if(Temp_0==Temp_1)goto IL_0161;                             //beq.s				IL_0161
	IL_01a8:                                                                        //ldc.i4				0x1
	IL_01ad:            V_3=1;                                                      //stloc				V_3
	IL_01b1:            /*goto IL_000d;*/goto IL_01b6;                              //br				IL_000d
	IL_01b6:            goto IL_0130;                                               //br				IL_0130
	IL_01bb:                                                                        //ldc.i4.1
	IL_01bc:            return true;                                                //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x149::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Object^ Temp_14 = nullptr;
	Reflector::CodeModel::IModule^ Temp_15 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Boolean Temp_18 = false;
	System::Int32 Temp_19 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_20 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	Reflector::CodeModel::IModuleCollection^ Temp_23 = nullptr;
	Reflector::CodeModel::IModule^ Temp_24 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Boolean Temp_27 = false;
	System::Int32 Temp_28 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_29 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_30 = nullptr;
	System::Int32 Temp_31 = 0;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_32 = nullptr;
	System::Int32 Temp_33 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_34 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_4 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_7 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_8 = nullptr;
	Reflector::CodeModel::IAssembly^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	Reflector::CodeModel::IModule^ V_11 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ V_12 = nullptr;
	System::Int32 V_13 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_14 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_15 = nullptr;
	Reflector::CodeModel::IModule^ V_16 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ V_17 = nullptr;
	System::Int32 V_18 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_19 = nullptr;
	System::Int32 V_20 = 0;
	//method body ------- 
	IL_0000:            goto IL_00ae;                                               //br				IL_00ae
	IL_0005:                                                                        //ldloc				V_20
	IL_0009:            switch(V_20){case 0:goto IL_03b1;case 1:goto IL_0361;case 2:goto IL_0116;case 3:goto IL_031a;case 4:goto IL_0271;case 5:goto IL_00e2;case 6:goto IL_03ff;case 7:goto IL_03e1;case 8:goto IL_03c1;case 9:goto IL_0284;case 10:goto IL_039c;case 11:goto IL_02ff;case 12:goto IL_0220;case 13:goto IL_0348;case 14:goto IL_012b;case 15:goto IL_00f6;case 16:goto IL_02d0;case 17:goto IL_0380;case 18:goto IL_04ce;case 19:goto IL_023c;case 20:goto IL_025c;case 21:goto IL_01cc;case 22:goto IL_042f;case 23:goto IL_0144;case 24:goto IL_01ff;case 25:goto IL_0498;case 26:goto IL_0448;case 27:goto IL_01ec;case 28:goto IL_0170;case 29:goto IL_041f;case 30:goto IL_01ae;case 31:goto IL_018e;case 32:goto IL_02b4;case 33:goto IL_0464;case 34:goto IL_02a1;case 35:goto IL_04e7;case 36:goto IL_04ae;case 37:goto IL_0479;case 38:goto IL_032f;case 39:goto IL_0157;};//switch				(IL_03b1,IL_0361,IL_0116,IL_031a,IL_0271,IL_00e2,IL_03ff,IL_03e1,IL_03c1,IL_0284,IL_039c,IL_02ff,IL_0220,IL_0348,IL_012b,IL_00f6,IL_02d0,IL_0380,IL_04ce,IL_023c,IL_025c,IL_01cc,IL_042f,IL_0144,IL_01ff,IL_0498,IL_0448,IL_01ec,IL_0170,IL_041f,IL_01ae,IL_018e,IL_02b4,IL_0464,IL_02a1,IL_04e7,IL_04ae,IL_0479,IL_032f,IL_0157)
	IL_00ae:                                                                        //ldarg.0
	IL_00af:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00b4:            V_0=Temp_0;                                                 //stloc.0
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:            Temp_1=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00bb:            V_1=Temp_1;                                                 //stloc.1
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_00c2:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00c7:            V_2=Temp_3;                                                 //stloc.2
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:            Temp_4=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_00ce:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00d3:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_4);//stloc.3
	IL_00d4:                                                                        //ldc.i4				0x5
	IL_00d9:            V_20=5;                                                     //stloc				V_20
	IL_00dd:            /*goto IL_0005;*/goto IL_00e2;                              //br				IL_0005
	IL_00e2:                                                                        //ldloc.3
	IL_00e3:            if(V_3==nullptr)goto IL_0241;                               //brfalse				IL_0241
	IL_00e8:                                                                        //ldc.i4				0xf
	IL_00ed:            V_20=15;                                                    //stloc				V_20
	IL_00f1:            /*goto IL_0005;*/goto IL_00f6;                              //br				IL_0005
	IL_00f6:            goto IL_0304;                                               //br				IL_0304
	IL_00fb:                                                                        //ldarg.0
	IL_00fc:            Temp_14=A_0->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0101:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_0106:            V_15=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_14);//stloc.s				V_15
	IL_0108:                                                                        //ldc.i4				0x2
	IL_010d:            V_20=2;                                                     //stloc				V_20
	IL_0111:            /*goto IL_0005;*/goto IL_0116;                              //br				IL_0005
	IL_0116:                                                                        //ldloc.s				V_15
	IL_0118:            if(V_15==nullptr)goto IL_04ec;                              //brfalse				IL_04ec
	IL_011d:                                                                        //ldc.i4				0xe
	IL_0122:            V_20=14;                                                    //stloc				V_20
	IL_0126:            /*goto IL_0005;*/goto IL_012b;                              //br				IL_0005
	IL_012b:            goto IL_0385;                                               //br				IL_0385
	IL_0130:                                                                        //ldloc.s				V_13
	IL_0132:                                                                        //ldc.i4.1
	IL_0133:                                                                        //add
	IL_0134:            V_13=(V_13 + 1);                                            //stloc.s				V_13
	IL_0136:                                                                        //ldc.i4				0x17
	IL_013b:            V_20=23;                                                    //stloc				V_20
	IL_013f:            /*goto IL_0005;*/goto IL_0144;                              //br				IL_0005
	IL_0144:            goto IL_0421;                                               //br				IL_0421
	IL_0149:                                                                        //ldc.i4				0x27
	IL_014e:            V_20=39;                                                    //stloc				V_20
	IL_0152:            /*goto IL_0005;*/goto IL_0157;                              //br				IL_0005
	IL_0157:                                                                        //ldloc.s				V_6
	IL_0159:                                                                        //ldloc.s				V_5
	IL_015b:            Temp_33=safe_cast<System::Collections::ICollection^>(V_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0160:            if(V_6<Temp_33)goto IL_01b3;                                //blt.s				IL_01b3
	IL_0162:                                                                        //ldc.i4				0x1c
	IL_0167:            V_20=28;                                                    //stloc				V_20
	IL_016b:            /*goto IL_0005;*/goto IL_0170;                              //br				IL_0005
	IL_0170:            goto IL_0241;                                               //br				IL_0241
	IL_0175:                                                                        //ldloc.s				V_17
	IL_0177:                                                                        //ldloc.s				V_18
	IL_0179:            Temp_29=V_17[V_18];                                         //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeDeclarationCollection::get_Item(System::Int32)
	IL_017e:            V_19=Temp_29;                                               //stloc.s				V_19
	IL_0180:                                                                        //ldc.i4				0x1f
	IL_0185:            V_20=31;                                                    //stloc				V_20
	IL_0189:            /*goto IL_0005;*/goto IL_018e;                              //br				IL_0005
	IL_018e:                                                                        //ldloc.0
	IL_018f:                                                                        //ldloc.s				V_19
	IL_0191:            Temp_26=safe_cast<Reflector::CodeModel::ITypeReference^>(V_19)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0196:            Temp_27=(V_0 == Temp_26);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_019b:            if(!Temp_27)goto IL_0225;                                   //brfalse				IL_0225
	IL_01a0:                                                                        //ldc.i4				0x1e
	IL_01a5:            V_20=30;                                                    //stloc				V_20
	IL_01a9:            /*goto IL_0005;*/goto IL_01ae;                              //br				IL_0005
	IL_01ae:            goto IL_0276;                                               //br				IL_0276
	IL_01b3:                                                                        //ldloc.s				V_5
	IL_01b5:                                                                        //ldloc.s				V_6
	IL_01b7:            Temp_34=V_5[V_6];                                           //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeDeclarationCollection::get_Item(System::Int32)
	IL_01bc:            V_7=Temp_34;                                                //stloc.s				V_7
	IL_01be:                                                                        //ldc.i4				0x15
	IL_01c3:            V_20=21;                                                    //stloc				V_20
	IL_01c7:            /*goto IL_0005;*/goto IL_01cc;                              //br				IL_0005
	IL_01cc:                                                                        //ldloc.0
	IL_01cd:                                                                        //ldloc.s				V_7
	IL_01cf:            Temp_17=safe_cast<Reflector::CodeModel::ITypeReference^>(V_7)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_01d4:            Temp_18=(V_0 == Temp_17);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01d9:            if(!Temp_18)goto IL_0334;                                   //brfalse				IL_0334
	IL_01de:                                                                        //ldc.i4				0x1b
	IL_01e3:            V_20=27;                                                    //stloc				V_20
	IL_01e7:            /*goto IL_0005;*/goto IL_01ec;                              //br				IL_0005
	IL_01ec:            goto IL_034d;                                               //br				IL_034d
	IL_01f1:                                                                        //ldc.i4				0x18
	IL_01f6:            V_20=24;                                                    //stloc				V_20
	IL_01fa:            /*goto IL_0005;*/goto IL_01ff;                              //br				IL_0005
	IL_01ff:                                                                        //ldloc.s				V_10
	IL_0201:                                                                        //ldloc.s				V_9
	IL_0203:            Temp_21=V_9->Modules;                                       //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0208:            Temp_22=safe_cast<System::Collections::ICollection^>(Temp_21)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_020d:            if(V_10<Temp_22)goto IL_02d5;                               //blt				IL_02d5
	IL_0212:                                                                        //ldc.i4				0xc
	IL_0217:            V_20=12;                                                    //stloc				V_20
	IL_021b:            /*goto IL_0005;*/goto IL_0220;                              //br				IL_0005
	IL_0220:            goto IL_00fb;                                               //br				IL_00fb
	IL_0225:            goto IL_0228;                                               //br.s				IL_0228
	IL_0227:                                                                        //break
	IL_0228:                                                                        //ldloc.s				V_18
	IL_022a:                                                                        //ldc.i4.1
	IL_022b:                                                                        //add
	IL_022c:            V_18=(V_18 + 1);                                            //stloc.s				V_18
	IL_022e:                                                                        //ldc.i4				0x13
	IL_0233:            V_20=19;                                                    //stloc				V_20
	IL_0237:            /*goto IL_0005;*/goto IL_023c;                              //br				IL_0005
	IL_023c:            goto IL_02a6;                                               //br.s				IL_02a6
	IL_023e:                                                                        //ldloc.s				V_14
	IL_0240:            return V_14;                                                //ret
	IL_0241:                                                                        //ldarg.0
	IL_0242:            Temp_6=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0247:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_024c:            V_8=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_6);//stloc.s				V_8
	IL_024e:                                                                        //ldc.i4				0x14
	IL_0253:            V_20=20;                                                    //stloc				V_20
	IL_0257:            /*goto IL_0005;*/goto IL_025c;                              //br				IL_0005
	IL_025c:                                                                        //ldloc.s				V_8
	IL_025e:            if(V_8==nullptr)goto IL_00fb;                               //brfalse				IL_00fb
	IL_0263:                                                                        //ldc.i4				0x4
	IL_0268:            V_20=4;                                                     //stloc				V_20
	IL_026c:            /*goto IL_0005;*/goto IL_0271;                              //br				IL_0005
	IL_0271:            goto IL_044d;                                               //br				IL_044d
	IL_0276:                                                                        //ldc.i4				0x9
	IL_027b:            V_20=9;                                                     //stloc				V_20
	IL_027f:            /*goto IL_0005;*/goto IL_0284;                              //br				IL_0005
	IL_0284:                                                                        //ldloc.1
	IL_0285:                                                                        //ldloc.s				V_19
	IL_0287:            Temp_12=safe_cast<Reflector::CodeModel::ITypeReference^>(V_19)->Namespace;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_028c:            Temp_13=(V_1 == Temp_12);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0291:            if(!Temp_13)goto IL_0225;                                   //brfalse.s				IL_0225
	IL_0293:                                                                        //ldc.i4				0x22
	IL_0298:            V_20=34;                                                    //stloc				V_20
	IL_029c:            /*goto IL_0005;*/goto IL_02a1;                              //br				IL_0005
	IL_02a1:            goto IL_049d;                                               //br				IL_049d
	IL_02a6:                                                                        //ldc.i4				0x20
	IL_02ab:            V_20=32;                                                    //stloc				V_20
	IL_02af:            /*goto IL_0005;*/goto IL_02b4;                              //br				IL_0005
	IL_02b4:                                                                        //ldloc.s				V_18
	IL_02b6:                                                                        //ldloc.s				V_17
	IL_02b8:            Temp_28=safe_cast<System::Collections::ICollection^>(V_17)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02bd:            if(V_18<Temp_28)goto IL_0175;                               //blt				IL_0175
	IL_02c2:                                                                        //ldc.i4				0x10
	IL_02c7:            V_20=16;                                                    //stloc				V_20
	IL_02cb:            /*goto IL_0005;*/goto IL_02d0;                              //br				IL_0005
	IL_02d0:            goto IL_04ec;                                               //br				IL_04ec
	IL_02d5:                                                                        //ldloc.s				V_9
	IL_02d7:            Temp_23=V_9->Modules;                                       //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_02dc:                                                                        //ldloc.s				V_10
	IL_02de:            Temp_24=Temp_23[V_10];                                      //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_02e3:            V_11=Temp_24;                                               //stloc.s				V_11
	IL_02e5:                                                                        //ldloc.s				V_11
	IL_02e7:            Temp_25=V_11->Types;                                        //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_02ec:            V_12=Temp_25;                                               //stloc.s				V_12
	IL_02ee:                                                                        //ldc.i4.0
	IL_02ef:            V_13=0;                                                     //stloc.s				V_13
	IL_02f1:                                                                        //ldc.i4				0xb
	IL_02f6:            V_20=11;                                                    //stloc				V_20
	IL_02fa:            /*goto IL_0005;*/goto IL_02ff;                              //br				IL_0005
	IL_02ff:            goto IL_0421;                                               //br				IL_0421
	IL_0304:                                                                        //ldloc.3
	IL_0305:            Temp_16=V_3->Resolve();                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_030a:            V_4=Temp_16;                                                //stloc.s				V_4
	IL_030c:                                                                        //ldc.i4				0x3
	IL_0311:            V_20=3;                                                     //stloc				V_20
	IL_0315:            /*goto IL_0005;*/goto IL_031a;                              //br				IL_0005
	IL_031a:                                                                        //ldloc.s				V_4
	IL_031c:            if(V_4==nullptr)goto IL_0241;                               //brfalse				IL_0241
	IL_0321:                                                                        //ldc.i4				0x26
	IL_0326:            V_20=38;                                                    //stloc				V_20
	IL_032a:            /*goto IL_0005;*/goto IL_032f;                              //br				IL_0005
	IL_032f:            goto IL_047e;                                               //br				IL_047e
	IL_0334:                                                                        //ldloc.s				V_6
	IL_0336:                                                                        //ldc.i4.1
	IL_0337:                                                                        //add
	IL_0338:            V_6=(V_6 + 1);                                              //stloc.s				V_6
	IL_033a:                                                                        //ldc.i4				0xd
	IL_033f:            V_20=13;                                                    //stloc				V_20
	IL_0343:            /*goto IL_0005;*/goto IL_0348;                              //br				IL_0005
	IL_0348:            goto IL_0149;                                               //br				IL_0149
	IL_034d:                                                                        //ldloc.s				V_7
	IL_034f:            return V_7;                                                 //ret
	IL_0350:                                                                        //ldc.i4.0
	IL_0351:            V_10=0;                                                     //stloc.s				V_10
	IL_0353:                                                                        //ldc.i4				0x1
	IL_0358:            V_20=1;                                                     //stloc				V_20
	IL_035c:            /*goto IL_0005;*/goto IL_0361;                              //br				IL_0005
	IL_0361:            goto IL_01f1;                                               //br				IL_01f1
	IL_0366:                                                                        //ldloc.s				V_16
	IL_0368:            Temp_5=V_16->Types;                                         //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_036d:            V_17=Temp_5;                                                //stloc.s				V_17
	IL_036f:                                                                        //ldc.i4.0
	IL_0370:            V_18=0;                                                     //stloc.s				V_18
	IL_0372:                                                                        //ldc.i4				0x11
	IL_0377:            V_20=17;                                                    //stloc				V_20
	IL_037b:            /*goto IL_0005;*/goto IL_0380;                              //br				IL_0005
	IL_0380:            goto IL_02a6;                                               //br				IL_02a6
	IL_0385:                                                                        //ldloc.s				V_15
	IL_0387:            Temp_15=V_15->Resolve();                                    //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleReference::Resolve()
	IL_038c:            V_16=Temp_15;                                               //stloc.s				V_16
	IL_038e:                                                                        //ldc.i4				0xa
	IL_0393:            V_20=10;                                                    //stloc				V_20
	IL_0397:            /*goto IL_0005;*/goto IL_039c;                              //br				IL_0005
	IL_039c:                                                                        //ldloc.s				V_16
	IL_039e:            if(V_16==nullptr)goto IL_04ec;                              //brfalse				IL_04ec
	IL_03a3:                                                                        //ldc.i4				0x0
	IL_03a8:            V_20=0;                                                     //stloc				V_20
	IL_03ac:            /*goto IL_0005;*/goto IL_03b1;                              //br				IL_0005
	IL_03b1:            goto IL_0366;                                               //br.s				IL_0366
	IL_03b3:                                                                        //ldc.i4				0x8
	IL_03b8:            V_20=8;                                                     //stloc				V_20
	IL_03bc:            /*goto IL_0005;*/goto IL_03c1;                              //br				IL_0005
	IL_03c1:                                                                        //ldloc.1
	IL_03c2:                                                                        //ldloc.s				V_14
	IL_03c4:            Temp_10=safe_cast<Reflector::CodeModel::ITypeReference^>(V_14)->Namespace;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_03c9:            Temp_11=(V_1 == Temp_10);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_03ce:            if(!Temp_11)goto IL_0130;                                   //brfalse				IL_0130
	IL_03d3:                                                                        //ldc.i4				0x7
	IL_03d8:            V_20=7;                                                     //stloc				V_20
	IL_03dc:            /*goto IL_0005;*/goto IL_03e1;                              //br				IL_0005
	IL_03e1:            goto IL_04a0;                                               //br				IL_04a0
	IL_03e6:                                                                        //ldloc.s				V_12
	IL_03e8:                                                                        //ldloc.s				V_13
	IL_03ea:            Temp_20=V_12[V_13];                                         //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeDeclarationCollection::get_Item(System::Int32)
	IL_03ef:            V_14=Temp_20;                                               //stloc.s				V_14
	IL_03f1:                                                                        //ldc.i4				0x6
	IL_03f6:            V_20=6;                                                     //stloc				V_20
	IL_03fa:            /*goto IL_0005;*/goto IL_03ff;                              //br				IL_0005
	IL_03ff:                                                                        //ldloc.0
	IL_0400:                                                                        //ldloc.s				V_14
	IL_0402:            Temp_8=safe_cast<Reflector::CodeModel::ITypeReference^>(V_14)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0407:            Temp_9=(V_0 == Temp_8);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_040c:            if(!Temp_9)goto IL_0130;                                    //brfalse				IL_0130
	IL_0411:                                                                        //ldc.i4				0x1d
	IL_0416:            V_20=29;                                                    //stloc				V_20
	IL_041a:            /*goto IL_0005;*/goto IL_041f;                              //br				IL_0005
	IL_041f:            goto IL_03b3;                                               //br.s				IL_03b3
	IL_0421:                                                                        //ldc.i4				0x16
	IL_0426:            V_20=22;                                                    //stloc				V_20
	IL_042a:            /*goto IL_0005;*/goto IL_042f;                              //br				IL_0005
	IL_042f:                                                                        //ldloc.s				V_13
	IL_0431:                                                                        //ldloc.s				V_12
	IL_0433:            Temp_19=safe_cast<System::Collections::ICollection^>(V_12)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0438:            if(V_13<Temp_19)goto IL_03e6;                               //blt.s				IL_03e6
	IL_043a:                                                                        //ldc.i4				0x1a
	IL_043f:            V_20=26;                                                    //stloc				V_20
	IL_0443:            /*goto IL_0005;*/goto IL_0448;                              //br				IL_0005
	IL_0448:            goto IL_04d3;                                               //br				IL_04d3
	IL_044d:                                                                        //ldloc.s				V_8
	IL_044f:            Temp_7=V_8->Resolve();                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyReference::Resolve()
	IL_0454:            V_9=Temp_7;                                                 //stloc.s				V_9
	IL_0456:                                                                        //ldc.i4				0x21
	IL_045b:            V_20=33;                                                    //stloc				V_20
	IL_045f:            /*goto IL_0005;*/goto IL_0464;                              //br				IL_0005
	IL_0464:                                                                        //ldloc.s				V_9
	IL_0466:            if(V_9==nullptr)goto IL_00fb;                               //brfalse				IL_00fb
	IL_046b:                                                                        //ldc.i4				0x25
	IL_0470:            V_20=37;                                                    //stloc				V_20
	IL_0474:            /*goto IL_0005;*/goto IL_0479;                              //br				IL_0005
	IL_0479:            goto IL_0350;                                               //br				IL_0350
	IL_047e:                                                                        //ldloc.s				V_4
	IL_0480:            Temp_32=V_4->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0485:            V_5=Temp_32;                                                //stloc.s				V_5
	IL_0487:                                                                        //ldc.i4.0
	IL_0488:            V_6=0;                                                      //stloc.s				V_6
	IL_048a:                                                                        //ldc.i4				0x19
	IL_048f:            V_20=25;                                                    //stloc				V_20
	IL_0493:            /*goto IL_0005;*/goto IL_0498;                              //br				IL_0005
	IL_0498:            goto IL_0149;                                               //br				IL_0149
	IL_049d:                                                                        //ldloc.s				V_19
	IL_049f:            return V_19;                                                //ret
	IL_04a0:                                                                        //ldc.i4				0x24
	IL_04a5:            V_20=36;                                                    //stloc				V_20
	IL_04a9:            /*goto IL_0005;*/goto IL_04ae;                              //br				IL_0005
	IL_04ae:                                                                        //ldloc.2
	IL_04af:                                                                        //ldloc.s				V_14
	IL_04b1:            Temp_30=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_14)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_04b6:            Temp_31=safe_cast<System::Collections::ICollection^>(Temp_30)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_04bb:            if(V_2!=Temp_31)goto IL_0130;                               //bne.un				IL_0130
	IL_04c0:                                                                        //ldc.i4				0x12
	IL_04c5:            V_20=18;                                                    //stloc				V_20
	IL_04c9:            /*goto IL_0005;*/goto IL_04ce;                              //br				IL_0005
	IL_04ce:            goto IL_023e;                                               //br				IL_023e
	IL_04d3:                                                                        //ldloc.s				V_10
	IL_04d5:                                                                        //ldc.i4.1
	IL_04d6:                                                                        //add
	IL_04d7:            V_10=(V_10 + 1);                                            //stloc.s				V_10
	IL_04d9:                                                                        //ldc.i4				0x23
	IL_04de:            V_20=35;                                                    //stloc				V_20
	IL_04e2:            /*goto IL_0005;*/goto IL_04e7;                              //br				IL_0005
	IL_04e7:            goto IL_01f1;                                               //br				IL_01f1
	IL_04ec:                                                                        //ldnull
	IL_04ed:            return nullptr;                                             //ret

}
inline System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::ITypeReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Reflector::CodeModel::ITypeCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::Object^ Temp_12 = nullptr;
	System::Object^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	System::Object^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	Reflector::CodeModel::IModule^ Temp_18 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_19 = nullptr;
	Reflector::CodeModel::IModule^ Temp_20 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyReference^ V_0 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_1 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_2 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_4=17;                                                     //stloc				V_4
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0076;                                               //br.s				IL_0076
	IL_000d:                                                                        //ldloc				V_4
	IL_0011:            switch(V_4){case 0:goto IL_02c9;case 1:goto IL_009b;case 2:goto IL_01cc;case 3:goto IL_0119;case 4:goto IL_02aa;case 5:goto IL_0134;case 6:goto IL_026e;case 7:goto IL_0155;case 8:goto IL_00af;case 9:goto IL_01b0;case 10:goto IL_0281;case 11:goto IL_00f5;case 12:goto IL_0202;case 13:goto IL_0179;case 14:goto IL_0168;case 15:goto IL_01dd;case 16:goto IL_0247;case 17:goto IL_000b;case 18:goto IL_0088;case 19:goto IL_0233;case 20:goto IL_018c;case 21:goto IL_00ce;case 22:goto IL_0213;case 23:goto IL_00e2;};//switch				(IL_02c9,IL_009b,IL_01cc,IL_0119,IL_02aa,IL_0134,IL_026e,IL_0155,IL_00af,IL_01b0,IL_0281,IL_00f5,IL_0202,IL_0179,IL_0168,IL_01dd,IL_0247,IL_000b,IL_0088,IL_0233,IL_018c,IL_00ce,IL_0213,IL_00e2)
	IL_0076:                                                                        //ldarg.0
	IL_0077:                                                                        //ldarg.1
	IL_0078:            if(A_0!=A_1)goto IL_0126;                                   //bne.un				IL_0126
	IL_007d:                                                                        //ldc.i4				0x12
	IL_0082:            V_4=18;                                                     //stloc				V_4
	IL_0086:            /*goto IL_000d;*/goto IL_0088;                              //br.s				IL_000d
	IL_0088:            goto IL_0215;                                               //br				IL_0215
	IL_008d:                                                                        //ldc.i4				0x1
	IL_0092:            V_4=1;                                                      //stloc				V_4
	IL_0096:            /*goto IL_000d;*/goto IL_009b;                              //br				IL_000d
	IL_009b:                                                                        //ldloc.2
	IL_009c:            if(V_2==nullptr)goto IL_017e;                               //brfalse				IL_017e
	IL_00a1:                                                                        //ldc.i4				0x8
	IL_00a6:            V_4=8;                                                      //stloc				V_4
	IL_00aa:            /*goto IL_000d;*/goto IL_00af;                              //br				IL_000d
	IL_00af:            goto IL_0273;                                               //br				IL_0273
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:            Temp_13=A_1->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_00ba:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_00bf:            V_3=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_13);//stloc.3
	IL_00c0:                                                                        //ldc.i4				0x15
	IL_00c5:            V_4=21;                                                     //stloc				V_4
	IL_00c9:            /*goto IL_000d;*/goto IL_00ce;                              //br				IL_000d
	IL_00ce:                                                                        //ldloc.3
	IL_00cf:            if(V_3==nullptr)goto IL_015a;                               //brfalse				IL_015a
	IL_00d4:                                                                        //ldc.i4				0x17
	IL_00d9:            V_4=23;                                                     //stloc				V_4
	IL_00dd:            /*goto IL_000d;*/goto IL_00e2;                              //br				IL_000d
	IL_00e2:            goto IL_02af;                                               //br				IL_02af
	IL_00e7:                                                                        //ldc.i4				0xb
	IL_00ec:            V_4=11;                                                     //stloc				V_4
	IL_00f0:            /*goto IL_000d;*/goto IL_00f5;                              //br				IL_000d
	IL_00f5:                                                                        //ldarg.0
	IL_00f6:            Temp_9=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00fb:                                                                        //ldarg.1
	IL_00fc:            Temp_10=A_1->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0101:            Temp_11=(Temp_9 != Temp_10);                                //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0106:            if(!Temp_11)goto IL_0219;                                   //brfalse				IL_0219
	IL_010b:                                                                        //ldc.i4				0x3
	IL_0110:            V_4=3;                                                      //stloc				V_4
	IL_0114:            /*goto IL_000d;*/goto IL_0119;                              //br				IL_000d
	IL_0119:            goto IL_01e2;                                               //br				IL_01e2
	IL_011e:                                                                        //ldloc.0
	IL_011f:                                                                        //ldloc.2
	IL_0120:            Temp_8=V_0->Equals(safe_cast<System::Object^>(V_2));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0125:            return Temp_8;                                              //ret
	IL_0126:                                                                        //ldc.i4				0x5
	IL_012b:            V_4=5;                                                      //stloc				V_4
	IL_012f:            /*goto IL_000d;*/goto IL_0134;                              //br				IL_000d
	IL_0134:                                                                        //ldarg.0
	IL_0135:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_013a:                                                                        //ldarg.1
	IL_013b:            Temp_1=A_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0140:            Temp_2=(Temp_0 != Temp_1);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0145:            if(!Temp_2)goto IL_00e7;                                    //brfalse.s				IL_00e7
	IL_0147:                                                                        //ldc.i4				0x7
	IL_014c:            V_4=7;                                                      //stloc				V_4
	IL_0150:            /*goto IL_000d;*/goto IL_0155;                              //br				IL_000d
	IL_0155:            goto IL_0217;                                               //br				IL_0217
	IL_015a:                                                                        //ldc.i4				0xe
	IL_015f:            V_4=14;                                                     //stloc				V_4
	IL_0163:            /*goto IL_000d;*/goto IL_0168;                              //br				IL_000d
	IL_0168:                                                                        //ldloc.0
	IL_0169:            if(V_0==nullptr)goto IL_017e;                               //brfalse.s				IL_017e
	IL_016b:                                                                        //ldc.i4				0xd
	IL_0170:            V_4=13;                                                     //stloc				V_4
	IL_0174:            /*goto IL_000d;*/goto IL_0179;                              //br				IL_000d
	IL_0179:            goto IL_008d;                                               //br				IL_008d
	IL_017e:                                                                        //ldc.i4				0x14
	IL_0183:            V_4=20;                                                     //stloc				V_4
	IL_0187:            /*goto IL_000d;*/goto IL_018c;                              //br				IL_000d
	IL_018c:                                                                        //ldarg.0
	IL_018d:            Temp_15=A_0->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0192:                                                                        //ldarg.1
	IL_0193:            Temp_16=A_1->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0198:            Temp_17=Temp_15->Equals(Temp_16);                           //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_019d:            if(Temp_17)goto IL_02ce;                                    //brtrue				IL_02ce
	IL_01a2:                                                                        //ldc.i4				0x9
	IL_01a7:            V_4=9;                                                      //stloc				V_4
	IL_01ab:            /*goto IL_000d;*/goto IL_01b0;                              //br				IL_000d
	IL_01b0:            goto IL_01e6;                                               //br.s				IL_01e6
	IL_01b2:                                                                        //ldarg.1
	IL_01b3:            Temp_3=A_1->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_01b8:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_01bd:            V_2=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_3);//stloc.2
	IL_01be:                                                                        //ldc.i4				0x2
	IL_01c3:            V_4=2;                                                      //stloc				V_4
	IL_01c7:            /*goto IL_000d;*/goto IL_01cc;                              //br				IL_000d
	IL_01cc:                                                                        //ldloc.2
	IL_01cd:            if(V_2!=nullptr)goto IL_015a;                               //brtrue.s				IL_015a
	IL_01cf:                                                                        //ldc.i4				0xf
	IL_01d4:            V_4=15;                                                     //stloc				V_4
	IL_01d8:            /*goto IL_000d;*/goto IL_01dd;                              //br				IL_000d
	IL_01dd:            goto IL_00b4;                                               //br				IL_00b4
	IL_01e2:                                                                        //ldc.i4.0
	IL_01e3:            return false;                                               //ret
	IL_01e4:                                                                        //ldc.i4.0
	IL_01e5:            return false;                                               //ret
	IL_01e6:                                                                        //ldc.i4.0
	IL_01e7:            return false;                                               //ret
	IL_01e8:                                                                        //ldarg.0
	IL_01e9:            Temp_14=A_0->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_01ee:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_01f3:            V_1=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_14);//stloc.1
	IL_01f4:                                                                        //ldc.i4				0xc
	IL_01f9:            V_4=12;                                                     //stloc				V_4
	IL_01fd:            /*goto IL_000d;*/goto IL_0202;                              //br				IL_000d
	IL_0202:                                                                        //ldloc.1
	IL_0203:            if(V_1==nullptr)goto IL_01b2;                               //brfalse.s				IL_01b2
	IL_0205:                                                                        //ldc.i4				0x16
	IL_020a:            V_4=22;                                                     //stloc				V_4
	IL_020e:            /*goto IL_000d;*/goto IL_0213;                              //br				IL_000d
	IL_0213:            goto IL_0254;                                               //br.s				IL_0254
	IL_0215:                                                                        //ldc.i4.1
	IL_0216:            return true;                                                //ret
	IL_0217:                                                                        //ldc.i4.0
	IL_0218:            return false;                                               //ret
	IL_0219:                                                                        //ldarg.0
	IL_021a:            Temp_12=A_0->Owner;                                         //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_021f:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_0224:            V_0=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_12);//stloc.0
	IL_0225:                                                                        //ldc.i4				0x13
	IL_022a:            V_4=19;                                                     //stloc				V_4
	IL_022e:            /*goto IL_000d;*/goto IL_0233;                              //br				IL_000d
	IL_0233:                                                                        //ldloc.0
	IL_0234:            if(V_0!=nullptr)goto IL_01b2;                               //brtrue				IL_01b2
	IL_0239:                                                                        //ldc.i4				0x10
	IL_023e:            V_4=16;                                                     //stloc				V_4
	IL_0242:            /*goto IL_000d;*/goto IL_0247;                              //br				IL_000d
	IL_0247:                                                                        //ldc.i4.4
	IL_0248:                                                                        //dup
	IL_0249:                                                                        //dup
	IL_024a:                                                                        //ldc.i4.2
	IL_024b:                                                                        //sub
	IL_024c:                                                                        //blt				IL_0248
	IL_0251:                                                                        //pop
	IL_0252:            goto IL_01e8;                                               //br.s				IL_01e8
	IL_0254:                                                                        //ldloc.1
	IL_0255:            Temp_18=V_1->Resolve();                                     //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleReference::Resolve()
	IL_025a:            Temp_19=Temp_18->Assembly;                                  //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_025f:            V_0=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_19);//stloc.0
	IL_0260:                                                                        //ldc.i4				0x6
	IL_0265:            V_4=6;                                                      //stloc				V_4
	IL_0269:            /*goto IL_000d;*/goto IL_026e;                              //br				IL_000d
	IL_026e:            goto IL_01b2;                                               //br				IL_01b2
	IL_0273:                                                                        //ldc.i4				0xa
	IL_0278:            V_4=10;                                                     //stloc				V_4
	IL_027c:            /*goto IL_000d;*/goto IL_0281;                              //br				IL_000d
	IL_0281:                                                                        //ldarg.0
	IL_0282:            Temp_4=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0287:            Temp_5=safe_cast<System::Collections::ICollection^>(Temp_4)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_028c:                                                                        //ldarg.1
	IL_028d:            Temp_6=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0292:            Temp_7=safe_cast<System::Collections::ICollection^>(Temp_6)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0297:            if(Temp_5==Temp_7)goto IL_011e;                             //beq				IL_011e
	IL_029c:                                                                        //ldc.i4				0x4
	IL_02a1:            V_4=4;                                                      //stloc				V_4
	IL_02a5:            /*goto IL_000d;*/goto IL_02aa;                              //br				IL_000d
	IL_02aa:            goto IL_01e4;                                               //br				IL_01e4
	IL_02af:                                                                        //ldloc.3
	IL_02b0:            Temp_20=V_3->Resolve();                                     //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleReference::Resolve()
	IL_02b5:            Temp_21=Temp_20->Assembly;                                  //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_02ba:            V_2=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_21);//stloc.2
	IL_02bb:                                                                        //ldc.i4				0x0
	IL_02c0:            V_4=0;                                                      //stloc				V_4
	IL_02c4:            /*goto IL_000d;*/goto IL_02c9;                              //br				IL_000d
	IL_02c9:            goto IL_015a;                                               //br				IL_015a
	IL_02ce:                                                                        //ldc.i4.1
	IL_02cf:            return true;                                                //ret

}
