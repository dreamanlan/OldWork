#include "global_xref.h"

inline Root::T_x155::T_x155(System::IO::BinaryReader^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	array<Root::T_x156^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Root::T_x156^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::IO::Stream^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	array<System::Byte>^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	array<System::Byte>^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::InvalidOperationException^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::InvalidOperationException^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::InvalidOperationException^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	array<System::Byte>^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	array<System::Byte>^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	array<System::Byte>^ Temp_28 = nullptr;
	System::Int32 Temp_29 = 0;
	array<System::Byte>^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::InvalidOperationException^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	array<System::Byte>^ Temp_35 = nullptr;
	System::Int32 Temp_36 = 0;
	array<System::Byte>^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::InvalidOperationException^ Temp_39 = nullptr;
	System::Globalization::CultureInfo^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	array<System::Object^>^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::InvalidOperationException^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	Root::T_x172^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::Boolean Temp_52 = false;
	Root::T_x172^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::InvalidOperationException^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	Root::T_x155^ Temp_57 = nullptr;
	Root::T_x155^ Temp_58 = nullptr;
	System::Int32 Temp_59 = 0;
	Root::T_x155^ Temp_60 = nullptr;
	//local variables.
	array<Root::T_x156^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	Root::T_x156^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	array<System::Object^>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_6=13;                                                     //stloc				V_6
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000f:                                                                        //ldarg.1
	IL_0010:            Temp_0=A_0->ReadUInt16();                                   //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0015:                                                                        //conv.i4
	IL_0016:                                                                        //conv.ovf.u4
	IL_0017:            Temp_1=gcnew array<Root::T_x156^>(safe_cast<System::UInt32>(safe_cast<System::Int32>(Temp_0)));//newarr				Root::T_x156
	IL_001c:            V_0=Temp_1;                                                 //stloc.0
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            V_1=0;                                                      //stloc.1
	IL_001f:            goto IL_02c1;                                               //br				IL_02c1
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_13=this->F_x13;                                        //ldfld				array<System::Byte>^ Root::T_x155 F_x13
	IL_002a:            if(Temp_13==nullptr)goto IL_01ac;                           //brfalse				IL_01ac
	IL_002f:            goto IL_0309;                                               //br				IL_0309
	IL_0034:                                                                        //ldstr				L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x0C5E\x1560\x1162\x0C64\x0966\x0E68\x186A\x4D6C\x076E\x1470\x1272\x0574\x0476\x5778"
	IL_0039:                                                                        //ldloc				V_6
	IL_003d:            Temp_21=a(L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x0C5E\x1560\x1162\x0C64\x0966\x0E68\x186A\x4D6C\x076E\x1470\x1272\x0574\x0476\x5778",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0042:            Temp_22=gcnew System::InvalidOperationException(Temp_21);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0047:            throw Temp_22;                                              //throw
	IL_0048:                                                                        //ldloc.s				V_4
	IL_004a:                                                                        //ldstr				L"\x082A\x7E2C\x5B2E\x4330\x5A32\x5B34\x5036\x4A38"
	IL_004f:                                                                        //ldloc				V_6
	IL_0053:            Temp_23=a(L"\x082A\x7E2C\x5B2E\x4330\x5A32\x5B34\x5036\x4A38",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:            if(V_4==Temp_23)goto IL_00d2;                               //beq.s				IL_00d2
	IL_005a:            goto IL_00e2;                                               //br				IL_00e2
	IL_005f:                                                                        //ldarg.0
	IL_0060:                                                                        //ldarg.1
	IL_0061:                                                                        //ldloc.3
	IL_0062:            Temp_15=V_3->M_x1();                                        //callvirt				System::Int32 Root::T_x156::M_x1()
	IL_0067:            Temp_16=A_0->ReadBytes(Temp_15);                            //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_006c:            this->F_x13=Temp_16;                                        //stfld				array<System::Byte>^ Root::T_x155 F_x13
	IL_0071:            goto IL_031d;                                               //br				IL_031d
	IL_0076:                                                                        //ldloc.3
	IL_0077:            Temp_46=V_3->M_x2();                                        //callvirt				System::String^ Root::T_x156::M_x2()
	IL_007c:                                                                        //dup
	IL_007d:            V_4=Temp_46;                                                //stloc.s				V_4
	IL_007f:            if(V_4==nullptr)goto IL_00a0;                               //brfalse				IL_00a0
	IL_0084:            goto IL_015e;                                               //br				IL_015e
	IL_0089:                                                                        //ldarg.0
	IL_008a:                                                                        //ldarg.1
	IL_008b:                                                                        //ldloc.3
	IL_008c:            Temp_29=V_3->M_x1();                                        //callvirt				System::Int32 Root::T_x156::M_x1()
	IL_0091:            Temp_30=A_0->ReadBytes(Temp_29);                            //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_0096:            this->F_x12=Temp_30;                                        //stfld				array<System::Byte>^ Root::T_x155 F_x12
	IL_009b:            goto IL_031d;                                               //br				IL_031d
	IL_00a0:            Temp_40=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a5:                                                                        //ldstr				L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x3E4A\x234C\x244E\x3E50\x2452\x3B54\x7756\x3458\x3E5A\x295C\x3E5E\x4C60\x0762\x0464\x1366\x0868\x4B6A\x1E6C\x1B6E\x0370\x1672\x1474\x1A76\x5978\x5C7A\x067C\x4F7E\xFC80\xA482\xAB84"
	IL_00aa:                                                                        //ldloc				V_6
	IL_00ae:            Temp_41=a(L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x3E4A\x234C\x244E\x3E50\x2452\x3B54\x7756\x3458\x3E5A\x295C\x3E5E\x4C60\x0762\x0464\x1366\x0868\x4B6A\x1E6C\x1B6E\x0370\x1672\x1474\x1A76\x5978\x5C7A\x067C\x4F7E\xFC80\xA482\xAB84",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:                                                                        //ldc.i4.1
	IL_00b4:            Temp_42=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_00b9:            V_5=Temp_42;                                                //stloc.s				V_5
	IL_00bb:                                                                        //ldloc.s				V_5
	IL_00bd:                                                                        //ldc.i4.0
	IL_00be:                                                                        //ldloc.3
	IL_00bf:            Temp_43=V_3->M_x2();                                        //callvirt				System::String^ Root::T_x156::M_x2()
	IL_00c4:            V_5[0]=safe_cast<System::Object^>(Temp_43);                 //stelem.ref
	IL_00c5:                                                                        //ldloc.s				V_5
	IL_00c7:            Temp_44=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_40),Temp_41,V_5);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00cc:            Temp_45=gcnew System::InvalidOperationException(Temp_44);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_00d1:            throw Temp_45;                                              //throw
	IL_00d2:                                                                        //ldarg.0
	IL_00d3:            Temp_24=this->F_x2;                                         //ldfld				array<System::Byte>^ Root::T_x155 F_x2
	IL_00d8:            if(Temp_24==nullptr)goto IL_02cc;                           //brfalse				IL_02cc
	IL_00dd:            goto IL_0034;                                               //br				IL_0034
	IL_00e2:                                                                        //ldloc.s				V_4
	IL_00e4:                                                                        //ldstr				L"\x082A\x782C\x7C2E"
	IL_00e9:                                                                        //ldloc				V_6
	IL_00ed:            Temp_27=a(L"\x082A\x782C\x7C2E",V_6);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f2:            if(V_4==Temp_27)goto IL_01e6;                               //beq				IL_01e6
	IL_00f7:            goto IL_0290;                                               //br				IL_0290
	IL_00fc:                                                                        //ldstr				L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x1D5E\x0D60\x0C62\x0764\x4766\x0168\x0E6A\x0C6C\x1F6E\x0270\x5D72"
	IL_0101:                                                                        //ldloc				V_6
	IL_0105:            Temp_38=a(L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x1D5E\x0D60\x0C62\x0764\x4766\x0168\x0E6A\x0C6C\x1F6E\x0270\x5D72",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010a:            Temp_39=gcnew System::InvalidOperationException(Temp_38);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_010f:            throw Temp_39;                                              //throw
	IL_0110:                                                                        //ldloc.2
	IL_0111:                                                                        //ldloc.0
	IL_0112:            Temp_4=V_0->Length;                                         //ldlen
	IL_0113:                                                                        //conv.i4
	IL_0114:            if(V_2<Temp_4)goto IL_01fb;                                 //blt				IL_01fb
	IL_0119:            goto IL_032d;                                               //br				IL_032d
	IL_011e:                                                                        //ldstr				L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x295C\x3E5E\x0360\x0F62\x0064\x4766\x0168\x0E6A\x0C6C\x1F6E\x0270\x5D72"
	IL_0123:                                                                        //ldloc				V_6
	IL_0127:            Temp_54=a(L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x295C\x3E5E\x0360\x0F62\x0064\x4766\x0168\x0E6A\x0C6C\x1F6E\x0270\x5D72",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012c:            Temp_55=gcnew System::InvalidOperationException(Temp_54);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0131:            throw Temp_55;                                              //throw
	IL_0132:                                                                        //ldloc.0
	IL_0133:                                                                        //ldloc.1
	IL_0134:                                                                        //ldarg.1
	IL_0135:            Temp_3=gcnew Root::T_x156(A_0);                             //newobj				void Root::T_x156::.ctor(System::IO::BinaryReader^)
	IL_013a:            V_0[V_1]=Temp_3;                                            //stelem.ref
	IL_013b:                                                                        //ldloc.1
	IL_013c:                                                                        //ldc.i4.1
	IL_013d:                                                                        //add
	IL_013e:            V_1=(V_1 + 1);                                              //stloc.1
	IL_013f:            goto IL_02c1;                                               //br				IL_02c1
	IL_0144:                                                                        //ldloc.s				V_4
	IL_0146:                                                                        //ldstr				L"\x082A\x532C"
	IL_014b:                                                                        //ldloc				V_6
	IL_014f:            Temp_56=a(L"\x082A\x532C",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0154:            if(V_4==Temp_56)goto IL_0280;                               //beq				IL_0280
	IL_0159:            goto IL_0048;                                               //br				IL_0048
	IL_015e:                                                                        //ldloc.s				V_4
	IL_0160:            Temp_47=System::String::IsInterned(V_4);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_0165:            V_4=Temp_47;                                                //stloc.s				V_4
	IL_0167:                                                                        //ldloc.s				V_4
	IL_0169:                                                                        //ldstr				L"\x082A\x002C"
	IL_016e:                                                                        //ldloc				V_6
	IL_0172:            Temp_48=a(L"\x082A\x002C",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0177:            if(V_4==Temp_48)goto IL_0280;                               //beq				IL_0280
	IL_017c:            goto IL_0144;                                               //br.s				IL_0144
	IL_017e:                                                                        //ldloc.s				V_4
	IL_0180:                                                                        //ldstr				L"\x082A\x6F2C\x432E\x5E30\x5132"
	IL_0185:                                                                        //ldloc				V_6
	IL_0189:            Temp_34=a(L"\x082A\x6F2C\x432E\x5E30\x5132",V_6);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018e:            if(V_4==Temp_34)goto IL_02f9;                               //beq				IL_02f9
	IL_0193:            goto IL_01f6;                                               //br.s				IL_01f6
	IL_0195:                                                                        //ldarg.0
	IL_0196:                                                                        //ldarg.1
	IL_0197:                                                                        //ldloc.3
	IL_0198:            Temp_36=V_3->M_x1();                                        //callvirt				System::Int32 Root::T_x156::M_x1()
	IL_019d:            Temp_37=A_0->ReadBytes(Temp_36);                            //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_01a2:            this->F_x8=Temp_37;                                         //stfld				array<System::Byte>^ Root::T_x155 F_x8
	IL_01a7:            goto IL_031d;                                               //br				IL_031d
	IL_01ac:                                                                        //ldloc.3
	IL_01ad:            Temp_14=V_3->M_x1();                                        //callvirt				System::Int32 Root::T_x156::M_x1()
	IL_01b2:                                                                        //ldc.i4.s				16
	IL_01b4:                                                                        //rem
	IL_01b5:            if((Temp_14 % 16)==0)goto IL_005f;                          //brfalse				IL_005f
	IL_01ba:            goto IL_026c;                                               //br				IL_026c
	IL_01bf:                                                                        //ldarg.0
	IL_01c0:                                                                        //ldloc.3
	IL_01c1:            Temp_50=V_3->M_x2();                                        //callvirt				System::String^ Root::T_x156::M_x2()
	IL_01c6:                                                                        //ldstr				L"\x082A\x002C"
	IL_01cb:                                                                        //ldloc				V_6
	IL_01cf:            Temp_51=a(L"\x082A\x002C",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d4:            Temp_52=(Temp_50 == Temp_51);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01d9:            Temp_58=this;if(Temp_52)goto IL_02aa;                       //brtrue				IL_02aa
	IL_01de:            goto IL_01e0;                                               //br.s				IL_01e0
	IL_01e0:                                                                        //ldc.i4.0
	IL_01e1:            Temp_60=Temp_58;Temp_59=0;goto IL_02e3;                     //br				IL_02e3
	IL_01e6:                                                                        //ldarg.0
	IL_01e7:            Temp_28=this->F_x12;                                        //ldfld				array<System::Byte>^ Root::T_x155 F_x12
	IL_01ec:            if(Temp_28==nullptr)goto IL_0089;                           //brfalse				IL_0089
	IL_01f1:            goto IL_02ad;                                               //br				IL_02ad
	IL_01f6:            goto IL_00a0;                                               //br				IL_00a0
	IL_01fb:                                                                        //ldloc.0
	IL_01fc:                                                                        //ldloc.2
	IL_01fd:                                                                        //ldelem.ref
	IL_01fe:            V_3=V_0[V_2];                                               //stloc.3
	IL_01ff:                                                                        //ldarg.1
	IL_0200:            Temp_5=A_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_0205:                                                                        //ldarg.2
	IL_0206:                                                                        //ldloc.3
	IL_0207:            Temp_6=V_3->M_x12();                                        //callvirt				System::Int32 Root::T_x156::M_x12()
	IL_020c:                                                                        //add
	IL_020d:                                                                        //conv.i8
	IL_020e:            Temp_5->Position=safe_cast<System::Int64>((A_1 + Temp_6));  //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0213:                                                                        //ldstr				L"\x082A\x002C"
	IL_0218:                                                                        //ldloc				V_6
	IL_021c:            Temp_7=a(L"\x082A\x002C",V_6);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0221:                                                                        //ldstr				L"\x082A\x532C"
	IL_0226:                                                                        //ldloc				V_6
	IL_022a:            Temp_8=a(L"\x082A\x532C",V_6);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_022f:                                                                        //ldstr				L"\x082A\x7E2C\x5B2E\x4330\x5A32\x5B34\x5036\x4A38"
	IL_0234:                                                                        //ldloc				V_6
	IL_0238:            Temp_9=a(L"\x082A\x7E2C\x5B2E\x4330\x5A32\x5B34\x5036\x4A38",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023d:                                                                        //ldstr				L"\x082A\x782C\x7C2E"
	IL_0242:                                                                        //ldloc				V_6
	IL_0246:            Temp_10=a(L"\x082A\x782C\x7C2E",V_6);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024b:                                                                        //ldstr				L"\x082A\x6A2C\x7A2E\x7830\x7732"
	IL_0250:                                                                        //ldloc				V_6
	IL_0254:            Temp_11=a(L"\x082A\x6A2C\x7A2E\x7830\x7732",V_6);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0259:                                                                        //ldstr				L"\x082A\x6F2C\x432E\x5E30\x5132"
	IL_025e:                                                                        //ldloc				V_6
	IL_0262:            Temp_12=a(L"\x082A\x6F2C\x432E\x5E30\x5132",V_6);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0267:            goto IL_0076;                                               //leave				IL_0076
	IL_026c:                                                                        //ldstr				L"\x082A\x6A2C\x7A2E\x7830\x7732\x1534\x5F36\x5C38\x5A3A\x4D3C\x1F3E\x2940\x2242\x3644\x6746\x2048\x254A\x3B4C\x2E4E\x3D50\x3A52\x3154\x7756\x2A58\x325A\x275C\x3A5E\x4F60"
	IL_0271:                                                                        //ldloc				V_6
	IL_0275:            Temp_17=a(L"\x082A\x6A2C\x7A2E\x7830\x7732\x1534\x5F36\x5C38\x5A3A\x4D3C\x1F3E\x2940\x2242\x3644\x6746\x2048\x254A\x3B4C\x2E4E\x3D50\x3A52\x3154\x7756\x2A58\x325A\x275C\x3A5E\x4F60",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027a:            Temp_18=gcnew System::InvalidOperationException(Temp_17);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_027f:            throw Temp_18;                                              //throw
	IL_0280:                                                                        //ldarg.0
	IL_0281:            Temp_49=this->F_x1;                                         //ldfld				Root::T_x172^ Root::T_x155 F_x1
	IL_0286:            if(Temp_49==nullptr)goto IL_01bf;                           //brfalse				IL_01bf
	IL_028b:            goto IL_011e;                                               //br				IL_011e
	IL_0290:                                                                        //ldloc.s				V_4
	IL_0292:                                                                        //ldstr				L"\x082A\x6A2C\x7A2E\x7830\x7732"
	IL_0297:                                                                        //ldloc				V_6
	IL_029b:            Temp_33=a(L"\x082A\x6A2C\x7A2E\x7830\x7732",V_6);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a0:            if(V_4==Temp_33)goto IL_0024;                               //beq				IL_0024
	IL_02a5:            goto IL_017e;                                               //br				IL_017e
	IL_02aa:                                                                        //ldc.i4.1
	IL_02ab:            Temp_60=Temp_58;Temp_59=1;goto IL_02e3;                     //br.s				IL_02e3
	IL_02ad:                                                                        //ldstr				L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x0A5E\x3260\x4362\x0D64\x0266\x0868\x1B6A\x1E6C\x416E"
	IL_02b2:                                                                        //ldloc				V_6
	IL_02b6:            Temp_31=a(L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x0A5E\x3260\x4362\x0D64\x0266\x0868\x1B6A\x1E6C\x416E",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02bb:            Temp_32=gcnew System::InvalidOperationException(Temp_31);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_02c0:            throw Temp_32;                                              //throw
	IL_02c1:                                                                        //ldloc.1
	IL_02c2:                                                                        //ldloc.0
	IL_02c3:            Temp_2=V_0->Length;                                         //ldlen
	IL_02c4:                                                                        //conv.i4
	IL_02c5:            if(V_1<Temp_2)goto IL_0132;                                 //blt				IL_0132
	IL_02ca:            goto IL_0326;                                               //br.s				IL_0326
	IL_02cc:                                                                        //ldarg.0
	IL_02cd:                                                                        //ldarg.1
	IL_02ce:                                                                        //ldloc.3
	IL_02cf:            Temp_25=V_3->M_x1();                                        //callvirt				System::Int32 Root::T_x156::M_x1()
	IL_02d4:            Temp_26=A_0->ReadBytes(Temp_25);                            //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_02d9:            this->F_x2=Temp_26;                                         //stfld				array<System::Byte>^ Root::T_x155 F_x2
	IL_02de:            goto IL_031d;                                               //br				IL_031d
	IL_02e3:            Temp_60->F_x5=safe_cast<System::Boolean>(Temp_59);/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::Boolean Root::T_x155 F_x5
	IL_02e8:                                                                        //ldarg.0
	IL_02e9:                                                                        //ldarg.1
	IL_02ea:            Temp_53=gcnew Root::T_x172(A_0);                            //newobj				void Root::T_x172::.ctor(System::IO::BinaryReader^)
	IL_02ef:            this->F_x1=Temp_53;                                         //stfld				Root::T_x172^ Root::T_x155 F_x1
	IL_02f4:            goto IL_031d;                                               //br				IL_031d
	IL_02f9:                                                                        //ldarg.0
	IL_02fa:            Temp_35=this->F_x8;                                         //ldfld				array<System::Byte>^ Root::T_x155 F_x8
	IL_02ff:            if(Temp_35==nullptr)goto IL_0195;                           //brfalse				IL_0195
	IL_0304:            goto IL_00fc;                                               //br				IL_00fc
	IL_0309:                                                                        //ldstr				L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x185E\x3460\x2A62\x2164\x4766\x0168\x0E6A\x0C6C\x1F6E\x0270\x5D72"
	IL_030e:                                                                        //ldloc				V_6
	IL_0312:            Temp_19=a(L"\x662A\x422C\x4B2E\x4430\x5F32\x5034\x1736\x5A38\x543A\x533C\x4B3E\x2040\x2A42\x2B44\x3446\x6948\x264A\x384C\x234E\x2550\x3A52\x2554\x3B56\x3C58\x7B5A\x7E5C\x185E\x3460\x2A62\x2164\x4766\x0168\x0E6A\x0C6C\x1F6E\x0270\x5D72",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0317:            Temp_20=gcnew System::InvalidOperationException(Temp_19);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_031c:            throw Temp_20;                                              //throw
	IL_031d:                                                                        //ldloc.2
	IL_031e:                                                                        //ldc.i4.1
	IL_031f:                                                                        //add
	IL_0320:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0321:            goto IL_0110;                                               //br				IL_0110
	IL_0326:                                                                        //ldc.i4.0
	IL_0327:            V_2=0;                                                      //stloc.2
	IL_0328:            goto IL_0110;                                               //br				IL_0110
	IL_032d:            return;                                                     //ret

}
inline array<System::Byte>^ Root::T_x155::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<System::Byte>^ Root::T_x155 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x155::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				System::Boolean Root::T_x155 F_x5
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x172^ Root::T_x155::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x172^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x172^ Root::T_x155 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline array<System::Byte>^ Root::T_x155::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				array<System::Byte>^ Root::T_x155 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline array<System::Byte>^ Root::T_x155::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				array<System::Byte>^ Root::T_x155 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline array<System::Byte>^ Root::T_x155::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				array<System::Byte>^ Root::T_x155 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
