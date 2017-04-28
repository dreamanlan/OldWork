#include "global_xref.h"

inline Root::T_x69::T_x69(Reflector::CodeModel::IAssemblyCache^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::Windows::Forms::ListView^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Drawing::Size Temp_5;
	System::Windows::Forms::TextBox^ Temp_6 = nullptr;
	System::Drawing::Point Temp_7;
	System::Windows::Forms::TextBox^ Temp_8 = nullptr;
	System::Windows::Forms::TextBox^ Temp_9 = nullptr;
	System::EventHandler^ Temp_10 = nullptr;
	System::Windows::Forms::TextBox^ Temp_11 = nullptr;
	System::Windows::Forms::KeyEventHandler^ Temp_12 = nullptr;
	System::Windows::Forms::TextBox^ Temp_13 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_14 = nullptr;
	System::Windows::Forms::TextBox^ Temp_15 = nullptr;
	array<System::Windows::Forms::ColumnHeader^>^ Temp_16 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Windows::Forms::ListView^ Temp_27 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_28 = nullptr;
	System::Windows::Forms::ListView^ Temp_29 = nullptr;
	System::Windows::Forms::ListView^ Temp_30 = nullptr;
	System::Windows::Forms::ListView^ Temp_31 = nullptr;
	System::Drawing::Point Temp_32;
	System::Windows::Forms::ListView^ Temp_33 = nullptr;
	System::Drawing::Size Temp_34;
	System::Windows::Forms::ListView^ Temp_35 = nullptr;
	System::Windows::Forms::ListView^ Temp_36 = nullptr;
	System::Windows::Forms::ListView^ Temp_37 = nullptr;
	System::Windows::Forms::ListView^ Temp_38 = nullptr;
	System::Windows::Forms::ListView^ Temp_39 = nullptr;
	System::Windows::Forms::ImageList^ Temp_40 = nullptr;
	System::Windows::Forms::ListView^ Temp_41 = nullptr;
	System::Windows::Forms::ImageList^ Temp_42 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_43 = nullptr;
	System::Drawing::Image^ Temp_44 = nullptr;
	System::Int32 Temp_45 = 0;
	System::Windows::Forms::ListView^ Temp_46 = nullptr;
	System::Windows::Forms::ImageList^ Temp_47 = nullptr;
	System::Windows::Forms::ListView^ Temp_48 = nullptr;
	System::Windows::Forms::ImageList^ Temp_49 = nullptr;
	System::Drawing::Color Temp_50;
	System::Windows::Forms::ListView^ Temp_51 = nullptr;
	System::EventHandler^ Temp_52 = nullptr;
	System::Windows::Forms::ListView^ Temp_53 = nullptr;
	System::EventHandler^ Temp_54 = nullptr;
	System::Windows::Forms::ListView^ Temp_55 = nullptr;
	System::Windows::Forms::ColumnClickEventHandler^ Temp_56 = nullptr;
	System::Windows::Forms::ListView^ Temp_57 = nullptr;
	System::Windows::Forms::KeyEventHandler^ Temp_58 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_59 = nullptr;
	System::Windows::Forms::ListView^ Temp_60 = nullptr;
	System::Windows::Forms::Button^ Temp_61 = nullptr;
	System::Drawing::Point Temp_62;
	System::String^ Temp_63 = nullptr;
	System::EventHandler^ Temp_64 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_65 = nullptr;
	System::Windows::Forms::Button^ Temp_66 = nullptr;
	System::Drawing::Point Temp_67;
	System::String^ Temp_68 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_69 = nullptr;
	System::Windows::Forms::Button^ Temp_70 = nullptr;
	System::Drawing::Point Temp_71;
	System::String^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_74 = nullptr;
	//local variables.
	array<System::Windows::Forms::ColumnHeader^>^ V_0 = nullptr;
	System::Windows::Forms::Button^ V_1 = nullptr;
	System::Windows::Forms::Button^ V_2 = nullptr;
	System::Windows::Forms::Button^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_4=13;                                                     //stloc				V_4
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=gcnew System::Windows::Forms::TextBox();             //newobj				void System::Windows::Forms::TextBox::.ctor()
	IL_000f:            this->F_x12=Temp_0;                                         //stfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_1=gcnew System::Windows::Forms::ListView();            //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_001a:            this->F_x13=Temp_1;                                         //stfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldc.i4.0
	IL_0021:            Temp_2=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0026:            this->F_x8=Temp_2;                                          //stfld				System::Collections::ArrayList^ Root::T_x69 F_x8
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldnull
	IL_002d:            this->F_x5=safe_cast<System::IAsyncResult^>(nullptr);       //stfld				System::IAsyncResult^ Root::T_x69 F_x5
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldnull
	IL_0034:            this->F_x9=safe_cast<System::IAsyncResult^>(nullptr);       //stfld				System::IAsyncResult^ Root::T_x69 F_x9
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldnull
	IL_003b:            this->F_x4=safe_cast<System::IAsyncResult^>(nullptr);       //stfld				System::IAsyncResult^ Root::T_x69 F_x4
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldc.i4.0
	IL_0042:            this->F_x15=false;                                          //stfld				System::Boolean Root::T_x69 F_x15
	IL_0047:                                                                        //ldarg.0
	IL_0048:                                                                        //ldc.i4.0
	IL_0049:            this->F_x11=false;                                          //stfld				System::Boolean Root::T_x69 F_x11
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldc.i4.0
	IL_0050:            this->F_x10=false;                                          //stfld				System::Boolean Root::T_x69 F_x10
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldc.i4.0
	IL_0057:            this->F_x7=0;                                               //stfld				System::Int32 Root::T_x69 F_x7
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_3=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0062:            this->F_x16=Temp_3;                                         //stfld				System::String^ Root::T_x69 F_x16
	IL_0067:                                                                        //ldarg.0
	IL_0068:            /*Root::T_x66();*/                                          //call				void Root::T_x66::.ctor()
	IL_006d:                                                                        //ldarg.0
	IL_006e:                                                                        //ldarg.1
	IL_006f:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyCache^ Root::T_x69 F_x1
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldstr				L"\x6A2A\x5E2C\x5C2E\x5430\x5E32\x5734\x5B36\x4038\x1B3A\x7E3C\x5E3E\x2240\x2B42\x2044"
	IL_007a:                                                                        //ldloc				V_4
	IL_007e:            Temp_4=a(L"\x6A2A\x5E2C\x5C2E\x5430\x5E32\x5734\x5B36\x4038\x1B3A\x7E3C\x5E3E\x2240\x2B42\x2044",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0083:            this->Text=Temp_4;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0088:                                                                        //ldarg.0
	IL_0089:                                                                        //ldc.i4				0x19a
	IL_008e:                                                                        //ldc.i4				0x1b8
	IL_0093:            Temp_5=System::Drawing::Size(safe_cast<System::Int32>(410),safe_cast<System::Int32>(440));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0098:            this->ClientSize=Temp_5;                                    //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_6=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_00a3:                                                                        //ldc.i4.s				12
	IL_00a5:                                                                        //ldc.i4.s				12
	IL_00a7:            Temp_7=System::Drawing::Point(safe_cast<System::Int32>(12),safe_cast<System::Int32>(12));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_00ac:            Temp_6->Location=Temp_7;                                    //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_00b1:                                                                        //ldarg.0
	IL_00b2:            Temp_8=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_00b7:                                                                        //ldc.i4				0x181
	IL_00bc:            Temp_8->Width=385;                                          //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_00c1:                                                                        //ldarg.0
	IL_00c2:            Temp_9=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_00c7:                                                                        //ldarg.0
	IL_00c8:                                                                        //ldftn				void Root::T_x69::M_x12(System::Object^,System::EventArgs^)
	IL_00ce:            Temp_10=gcnew System::EventHandler(this,&Root::T_x69::M_x12);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00d3:            Temp_9->TextChanged += Temp_10;                             //callvirt				void System::Windows::Forms::Control::add_TextChanged(System::EventHandler^)
	IL_00d8:                                                                        //ldarg.0
	IL_00d9:            Temp_11=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_00de:                                                                        //ldarg.0
	IL_00df:                                                                        //ldftn				void Root::T_x69::M_x2(System::Object^,System::Windows::Forms::KeyEventArgs^)
	IL_00e5:            Temp_12=gcnew System::Windows::Forms::KeyEventHandler(this,&Root::T_x69::M_x2);//newobj				void System::Windows::Forms::KeyEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00ea:            Temp_11->KeyDown += Temp_12;                                //callvirt				void System::Windows::Forms::Control::add_KeyDown(System::Windows::Forms::KeyEventHandler^)
	IL_00ef:                                                                        //ldarg.0
	IL_00f0:            Temp_13=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_00f5:                                                                        //ldc.i4.1
	IL_00f6:            Temp_13->TabIndex=1;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_00fb:                                                                        //ldarg.0
	IL_00fc:            Temp_14=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0101:                                                                        //ldarg.0
	IL_0102:            Temp_15=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_0107:            Temp_14->Add(safe_cast<System::Windows::Forms::Control^>(Temp_15));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_010c:                                                                        //ldc.i4.5
	IL_010d:            Temp_16=gcnew array<System::Windows::Forms::ColumnHeader^>(5);//newarr				System::Windows::Forms::ColumnHeader
	IL_0112:            V_0=Temp_16;                                                //stloc.0
	IL_0113:                                                                        //ldloc.0
	IL_0114:                                                                        //ldc.i4.0
	IL_0115:            Temp_17=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_011a:            V_0[0]=Temp_17;                                             //stelem.ref
	IL_011b:                                                                        //ldloc.0
	IL_011c:                                                                        //ldc.i4.0
	IL_011d:                                                                        //ldelem.ref
	IL_011e:                                                                        //ldstr				L"\x652A\x4C2C\x422E\x5430"
	IL_0123:                                                                        //ldloc				V_4
	IL_0127:            Temp_18=a(L"\x652A\x4C2C\x422E\x5430",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012c:            V_0[0]->Text=Temp_18;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0131:                                                                        //ldloc.0
	IL_0132:                                                                        //ldc.i4.0
	IL_0133:                                                                        //ldelem.ref
	IL_0134:                                                                        //ldc.i4				0x10e
	IL_0139:            V_0[0]->Width=270;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_013e:                                                                        //ldloc.0
	IL_013f:                                                                        //ldc.i4.1
	IL_0140:            Temp_19=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0145:            V_0[1]=Temp_19;                                             //stelem.ref
	IL_0146:                                                                        //ldloc.0
	IL_0147:                                                                        //ldc.i4.1
	IL_0148:                                                                        //ldelem.ref
	IL_0149:                                                                        //ldstr				L"\x7D2A\x482C\x5D2E\x4230\x5A32\x5A34\x5936"
	IL_014e:                                                                        //ldloc				V_4
	IL_0152:            Temp_20=a(L"\x7D2A\x482C\x5D2E\x4230\x5A32\x5A34\x5936",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0157:            V_0[1]->Text=Temp_20;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_015c:                                                                        //ldloc.0
	IL_015d:                                                                        //ldc.i4.1
	IL_015e:                                                                        //ldelem.ref
	IL_015f:                                                                        //ldc.i4.s				110
	IL_0161:            V_0[1]->Width=110;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_0166:                                                                        //ldloc.0
	IL_0167:                                                                        //ldc.i4.2
	IL_0168:            Temp_21=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_016d:            V_0[2]=Temp_21;                                             //stelem.ref
	IL_016e:                                                                        //ldloc.0
	IL_016f:                                                                        //ldc.i4.2
	IL_0170:                                                                        //ldelem.ref
	IL_0171:                                                                        //ldstr				L"\x682A\x582C\x432E\x4530\x4632\x4734\x5236"
	IL_0176:                                                                        //ldloc				V_4
	IL_017a:            Temp_22=a(L"\x682A\x582C\x432E\x4530\x4632\x4734\x5236",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017f:            V_0[2]->Text=Temp_22;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0184:                                                                        //ldloc.0
	IL_0185:                                                                        //ldc.i4.2
	IL_0186:                                                                        //ldelem.ref
	IL_0187:                                                                        //ldc.i4.s				75
	IL_0189:            V_0[2]->Width=75;                                           //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_018e:                                                                        //ldloc.0
	IL_018f:                                                                        //ldc.i4.3
	IL_0190:            Temp_23=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0195:            V_0[3]=Temp_23;                                             //stelem.ref
	IL_0196:                                                                        //ldloc.0
	IL_0197:                                                                        //ldc.i4.3
	IL_0198:                                                                        //ldelem.ref
	IL_0199:                                                                        //ldstr				L"\x7B2A\x582C\x4D2E\x5D30\x5A32\x5634\x7C36\x5C38\x423A\x693C\x503E\x2A40\x2642\x2B44"
	IL_019e:                                                                        //ldloc				V_4
	IL_01a2:            Temp_24=a(L"\x7B2A\x582C\x4D2E\x5D30\x5A32\x5634\x7C36\x5C38\x423A\x693C\x503E\x2A40\x2642\x2B44",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a7:            V_0[3]->Text=Temp_24;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_01ac:                                                                        //ldloc.0
	IL_01ad:                                                                        //ldc.i4.3
	IL_01ae:                                                                        //ldelem.ref
	IL_01af:                                                                        //ldc.i4.s				125
	IL_01b1:            V_0[3]->Width=125;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_01b6:                                                                        //ldloc.0
	IL_01b7:                                                                        //ldc.i4.4
	IL_01b8:            Temp_25=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_01bd:            V_0[4]=Temp_25;                                             //stelem.ref
	IL_01be:                                                                        //ldloc.0
	IL_01bf:                                                                        //ldc.i4.4
	IL_01c0:                                                                        //ldelem.ref
	IL_01c1:                                                                        //ldstr				L"\x672A\x422C\x4C2E\x5030\x4732\x5C34\x5836\x5738"
	IL_01c6:                                                                        //ldloc				V_4
	IL_01ca:            Temp_26=a(L"\x672A\x422C\x4C2E\x5030\x4732\x5C34\x5836\x5738",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01cf:            V_0[4]->Text=Temp_26;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_01d4:                                                                        //ldloc.0
	IL_01d5:                                                                        //ldc.i4.4
	IL_01d6:                                                                        //ldelem.ref
	IL_01d7:                                                                        //ldc.i4				0x1f4
	IL_01dc:            V_0[4]->Width=500;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_01e1:                                                                        //ldarg.0
	IL_01e2:            Temp_27=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_01e7:            Temp_28=Temp_27->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_01ec:                                                                        //ldloc.0
	IL_01ed:            Temp_28->AddRange(V_0);                                     //callvirt				void System::Windows::Forms::ListView::ColumnHeaderCollection::AddRange(array<System::Windows::Forms::ColumnHeader^>^)
	IL_01f2:                                                                        //ldarg.0
	IL_01f3:            Temp_29=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_01f8:                                                                        //ldc.i4.2
	IL_01f9:            Temp_29->TabIndex=2;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_01fe:                                                                        //ldarg.0
	IL_01ff:            Temp_30=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0204:                                                                        //ldc.i4.1
	IL_0205:            Temp_30->View=safe_cast<System::Windows::Forms::View>(1);   //callvirt				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_020a:                                                                        //ldarg.0
	IL_020b:            Temp_31=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0210:                                                                        //ldc.i4.s				12
	IL_0212:                                                                        //ldc.i4.s				35
	IL_0214:            Temp_32=System::Drawing::Point(safe_cast<System::Int32>(12),safe_cast<System::Int32>(35));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0219:            Temp_31->Location=Temp_32;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_021e:                                                                        //ldarg.0
	IL_021f:            Temp_33=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0224:                                                                        //ldc.i4				0x181
	IL_0229:                                                                        //ldc.i4				0x168
	IL_022e:            Temp_34=System::Drawing::Size(safe_cast<System::Int32>(385),safe_cast<System::Int32>(360));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0233:            Temp_33->Size=Temp_34;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0238:                                                                        //ldarg.0
	IL_0239:            Temp_35=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_023e:                                                                        //ldc.i4.1
	IL_023f:            Temp_35->FullRowSelect=true;                                //callvirt				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_0244:                                                                        //ldarg.0
	IL_0245:            Temp_36=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_024a:                                                                        //ldc.i4.1
	IL_024b:            Temp_36->Sorting=safe_cast<System::Windows::Forms::SortOrder>(1);//callvirt				void System::Windows::Forms::ListView::set_Sorting(System::Windows::Forms::SortOrder)
	IL_0250:                                                                        //ldarg.0
	IL_0251:            Temp_37=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0256:                                                                        //ldc.i4.1
	IL_0257:            Temp_37->MultiSelect=true;                                  //callvirt				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_025c:                                                                        //ldarg.0
	IL_025d:            Temp_38=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0262:                                                                        //ldc.i4.0
	IL_0263:            Temp_38->HideSelection=false;                               //callvirt				void System::Windows::Forms::ListView::set_HideSelection(System::Boolean)
	IL_0268:                                                                        //ldarg.0
	IL_0269:            Temp_39=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_026e:            Temp_40=gcnew System::Windows::Forms::ImageList();          //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_0273:            Temp_39->SmallImageList=Temp_40;                            //callvirt				void System::Windows::Forms::ListView::set_SmallImageList(System::Windows::Forms::ImageList^)
	IL_0278:                                                                        //ldarg.0
	IL_0279:            Temp_41=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_027e:            Temp_42=Temp_41->SmallImageList;                            //callvirt				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0283:            Temp_43=Temp_42->Images;                                    //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0288:            Temp_44=Root::T_x117::M_x1();                               //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_028d:            Temp_45=Temp_43->AddStrip(Temp_44);                         //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_0292:                                                                        //pop
	IL_0293:                                                                        //ldarg.0
	IL_0294:            Temp_46=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0299:            Temp_47=Temp_46->SmallImageList;                            //callvirt				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_029e:                                                                        //ldc.i4.s				32
	IL_02a0:            Temp_47->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_02a5:                                                                        //ldarg.0
	IL_02a6:            Temp_48=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_02ab:            Temp_49=Temp_48->SmallImageList;                            //callvirt				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_02b0:                                                                        //ldc.i4				0xff
	IL_02b5:                                                                        //ldc.i4.0
	IL_02b6:                                                                        //ldc.i4				0x80
	IL_02bb:                                                                        //ldc.i4.0
	IL_02bc:            Temp_50=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_02c1:            Temp_49->TransparentColor=Temp_50;                          //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_02c6:                                                                        //ldarg.0
	IL_02c7:            Temp_51=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_02cc:                                                                        //ldarg.0
	IL_02cd:                                                                        //ldftn				void Root::T_x69::M_x1(System::Object^,System::EventArgs^)
	IL_02d3:            Temp_52=gcnew System::EventHandler(this,&Root::T_x69::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_02d8:            Temp_51->ItemActivate += Temp_52;                           //callvirt				void System::Windows::Forms::ListView::add_ItemActivate(System::EventHandler^)
	IL_02dd:                                                                        //ldarg.0
	IL_02de:            Temp_53=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_02e3:                                                                        //ldarg.0
	IL_02e4:                                                                        //ldftn				void Root::T_x69::M_x2(System::Object^,System::EventArgs^)
	IL_02ea:            Temp_54=gcnew System::EventHandler(this,&Root::T_x69::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_02ef:            Temp_53->SelectedIndexChanged += Temp_54;                   //callvirt				void System::Windows::Forms::ListView::add_SelectedIndexChanged(System::EventHandler^)
	IL_02f4:                                                                        //ldarg.0
	IL_02f5:            Temp_55=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_02fa:                                                                        //ldarg.0
	IL_02fb:                                                                        //ldftn				void Root::T_x69::M_x1(System::Object^,System::Windows::Forms::ColumnClickEventArgs^)
	IL_0301:            Temp_56=gcnew System::Windows::Forms::ColumnClickEventHandler(this,&Root::T_x69::M_x1);//newobj				void System::Windows::Forms::ColumnClickEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0306:            Temp_55->ColumnClick += Temp_56;                            //callvirt				void System::Windows::Forms::ListView::add_ColumnClick(System::Windows::Forms::ColumnClickEventHandler^)
	IL_030b:                                                                        //ldarg.0
	IL_030c:            Temp_57=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0311:                                                                        //ldarg.0
	IL_0312:                                                                        //ldftn				void Root::T_x69::M_x1(System::Object^,System::Windows::Forms::KeyEventArgs^)
	IL_0318:            Temp_58=gcnew System::Windows::Forms::KeyEventHandler(this,&Root::T_x69::M_x1);//newobj				void System::Windows::Forms::KeyEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_031d:            Temp_57->KeyDown += Temp_58;                                //callvirt				void System::Windows::Forms::Control::add_KeyDown(System::Windows::Forms::KeyEventHandler^)
	IL_0322:                                                                        //ldarg.0
	IL_0323:            Temp_59=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0328:                                                                        //ldarg.0
	IL_0329:            Temp_60=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_032e:            Temp_59->Add(safe_cast<System::Windows::Forms::Control^>(Temp_60));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0333:            Temp_61=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0338:            V_1=Temp_61;                                                //stloc.1
	IL_0339:                                                                        //ldloc.1
	IL_033a:                                                                        //ldc.i4.3
	IL_033b:            V_1->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0340:                                                                        //ldloc.1
	IL_0341:                                                                        //ldc.i4.s				12
	IL_0343:                                                                        //ldc.i4				0x195
	IL_0348:            Temp_62=System::Drawing::Point(safe_cast<System::Int32>(12),safe_cast<System::Int32>(405));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_034d:            V_1->Location=Temp_62;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0352:                                                                        //ldloc.1
	IL_0353:                                                                        //ldstr				L"\x0D2A\x7F2C\x4A2E\x5730\x4132\x5034\x4436\x5138"
	IL_0358:                                                                        //ldloc				V_4
	IL_035c:            Temp_63=a(L"\x0D2A\x7F2C\x4A2E\x5730\x4132\x5034\x4436\x5138",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0361:            V_1->Text=Temp_63;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0366:                                                                        //ldloc.1
	IL_0367:                                                                        //ldc.i4.4
	IL_0368:            V_1->TabIndex=4;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_036d:                                                                        //ldloc.1
	IL_036e:                                                                        //ldarg.0
	IL_036f:                                                                        //ldftn				void Root::T_x69::M_x13(System::Object^,System::EventArgs^)
	IL_0375:            Temp_64=gcnew System::EventHandler(this,&Root::T_x69::M_x13);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_037a:            V_1->Click += Temp_64;                                      //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_037f:                                                                        //ldarg.0
	IL_0380:            Temp_65=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0385:                                                                        //ldloc.1
	IL_0386:            Temp_65->Add(safe_cast<System::Windows::Forms::Control^>(V_1));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_038b:            Temp_66=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0390:            V_2=Temp_66;                                                //stloc.2
	IL_0391:                                                                        //ldloc.2
	IL_0392:                                                                        //ldc.i4.3
	IL_0393:            V_2->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0398:                                                                        //ldloc.2
	IL_0399:                                                                        //ldc.i4				0xf2
	IL_039e:                                                                        //ldc.i4				0x195
	IL_03a3:            Temp_67=System::Drawing::Point(safe_cast<System::Int32>(242),safe_cast<System::Int32>(405));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_03a8:            V_2->Location=Temp_67;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_03ad:                                                                        //ldloc.2
	IL_03ae:                                                                        //ldstr				L"\x642A\x5D2C\x4A2E\x5F30"
	IL_03b3:                                                                        //ldloc				V_4
	IL_03b7:            Temp_68=a(L"\x642A\x5D2C\x4A2E\x5F30",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03bc:            V_2->Text=Temp_68;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_03c1:                                                                        //ldloc.2
	IL_03c2:                                                                        //ldc.i4.5
	IL_03c3:            V_2->TabIndex=5;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_03c8:                                                                        //ldloc.2
	IL_03c9:                                                                        //ldc.i4.1
	IL_03ca:            V_2->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(1);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_03cf:                                                                        //ldloc.2
	IL_03d0:                                                                        //ldc.i4.0
	IL_03d1:            V_2->Enabled=false;                                         //callvirt				void System::Windows::Forms::Control::set_Enabled(System::Boolean)
	IL_03d6:                                                                        //ldarg.0
	IL_03d7:            Temp_69=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_03dc:                                                                        //ldloc.2
	IL_03dd:            Temp_69->Add(safe_cast<System::Windows::Forms::Control^>(V_2));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_03e2:                                                                        //ldarg.0
	IL_03e3:                                                                        //ldloc.2
	IL_03e4:            this->AcceptButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_2);//call				void System::Windows::Forms::Form::set_AcceptButton(System::Windows::Forms::IButtonControl^)
	IL_03e9:            Temp_70=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_03ee:            V_3=Temp_70;                                                //stloc.3
	IL_03ef:                                                                        //ldloc.3
	IL_03f0:                                                                        //ldc.i4.3
	IL_03f1:            V_3->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_03f6:                                                                        //ldloc.3
	IL_03f7:                                                                        //ldc.i4				0x142
	IL_03fc:                                                                        //ldc.i4				0x195
	IL_0401:            Temp_71=System::Drawing::Point(safe_cast<System::Int32>(322),safe_cast<System::Int32>(405));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0406:            V_3->Location=Temp_71;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_040b:                                                                        //ldloc.3
	IL_040c:                                                                        //ldstr				L"\x682A\x4C2C\x412E\x5230\x5632\x5934"
	IL_0411:                                                                        //ldloc				V_4
	IL_0415:            Temp_72=a(L"\x682A\x4C2C\x412E\x5230\x5632\x5934",V_4);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_041a:            Temp_73=Root::T_x128::M_x1(Temp_72);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_041f:            V_3->Text=Temp_73;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0424:                                                                        //ldloc.3
	IL_0425:                                                                        //ldc.i4.6
	IL_0426:            V_3->TabIndex=6;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_042b:                                                                        //ldloc.3
	IL_042c:                                                                        //ldc.i4.2
	IL_042d:            V_3->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(2);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_0432:                                                                        //ldarg.0
	IL_0433:            Temp_74=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0438:                                                                        //ldloc.3
	IL_0439:            Temp_74->Add(safe_cast<System::Windows::Forms::Control^>(V_3));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_043e:                                                                        //ldarg.0
	IL_043f:                                                                        //ldloc.3
	IL_0440:            this->CancelButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_3);//call				void System::Windows::Forms::Form::set_CancelButton(System::Windows::Forms::IButtonControl^)
	IL_0445:            return;                                                     //ret

}
inline void Root::T_x69::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::MethodInvoker^ Temp_0 = nullptr;
	System::IAsyncResult^ Temp_1 = nullptr;
	//local variables.
	System::Windows::Forms::MethodInvoker^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldc.i4.1
	IL_0005:            this->F_x15=true;                                           //stfld				System::Boolean Root::T_x69 F_x15
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldc.i4.1
	IL_000c:            this->F_x11=true;                                           //stfld				System::Boolean Root::T_x69 F_x11
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldc.i4.0
	IL_0013:            this->F_x10=false;                                          //stfld				System::Boolean Root::T_x69 F_x10
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldftn				void Root::T_x69::M_x12()
	IL_001f:            Temp_0=gcnew System::Windows::Forms::MethodInvoker(this,&Root::T_x69::M_x12);//newobj				void System::Windows::Forms::MethodInvoker::.ctor(System::Object^,System::IntPtr)
	IL_0024:            V_0=Temp_0;                                                 //stloc.0
	IL_0025:                                                                        //ldarg.0
	IL_0026:                                                                        //ldloc.0
	IL_0027:                                                                        //ldnull
	IL_0028:                                                                        //ldnull
	IL_0029:            Temp_1=V_0->BeginInvoke(safe_cast<System::AsyncCallback^>(nullptr),safe_cast<System::Object^>(nullptr));//callvirt				System::IAsyncResult^ System::Windows::Forms::MethodInvoker::BeginInvoke(System::AsyncCallback^,System::Object^)
	IL_002e:            this->F_x5=Temp_1;                                          //stfld				System::IAsyncResult^ Root::T_x69 F_x5
	IL_0033:            return;                                                     //ret

}
inline void Root::T_x69::M_x1(System::ComponentModel::CancelEventArgs^ A_0)
//System::Windows::Forms::Form^::OnClosing by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x13();                                              //call				void Root::T_x69::M_x13()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            System::Windows::Forms::Form::OnClosing(A_0);               //call				void System::Windows::Forms::Form::OnClosing(System::ComponentModel::CancelEventArgs^)
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x69::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Form^::OnLoad by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x69::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            System::Windows::Forms::Form::OnLoad(A_0);                  //call				void System::Windows::Forms::Form::OnLoad(System::EventArgs^)
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x69::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::IButtonControl^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->AcceptButton;                                  //call				System::Windows::Forms::IButtonControl^ System::Windows::Forms::Form::get_AcceptButton()
	IL_0006:            Temp_0->PerformClick();                                     //callvirt				void System::Windows::Forms::IButtonControl::PerformClick()
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x69::M_x1(System::Object^ A_0,System::Windows::Forms::ColumnClickEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Root::T_x69::T_x13^ Temp_2 = nullptr;
	System::Windows::Forms::ListView^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1=A_1->Column;                                         //callvirt				System::Int32 System::Windows::Forms::ColumnClickEventArgs::get_Column()
	IL_0017:            Temp_2=gcnew Root::T_x69::T_x13(Temp_1);                    //newobj				void Root::T_x69::T_x13::.ctor(System::Int32)
	IL_001c:            Temp_0->ListViewItemSorter=safe_cast<System::Collections::IComparer^>(Temp_2);//callvirt				void System::Windows::Forms::ListView::set_ListViewItemSorter(System::Collections::IComparer^)
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_3=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0027:                                                                        //ldc.i4.1
	IL_0028:            Temp_3->Sorting=safe_cast<System::Windows::Forms::SortOrder>(1);//callvirt				void System::Windows::Forms::ListView::set_Sorting(System::Windows::Forms::SortOrder)
	IL_002d:            return;                                                     //ret

}
inline void Root::T_x69::M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Windows::Forms::TextBox^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Windows::Forms::ListView^ Temp_5 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_6 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_7 = nullptr;
	System::Windows::Forms::ListView^ Temp_8 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_9 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_10 = nullptr;
	System::Windows::Forms::Keys Temp_11 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_00dc;case 2:goto IL_00bc;case 3:goto IL_004a;case 4:goto IL_00ac;case 5:goto IL_007a;case 6:goto IL_006d;};//switch				(IL_000b,IL_00dc,IL_00bc,IL_004a,IL_00ac,IL_007a,IL_006d)
	IL_0032:                                                                        //ldarg.2
	IL_0033:            Temp_11=A_1->KeyCode;                                       //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyCode()
	IL_0038:                                                                        //ldc.i4.s				38
	IL_003a:            if(safe_cast<System::Int32>(Temp_11)!=38)goto IL_00de;      //bne.un				IL_00de
	IL_003f:                                                                        //ldc.i4				0x3
	IL_0044:            V_0=3;                                                      //stloc				V_0
	IL_0048:            /*goto IL_000d;*/goto IL_004a;                              //br.s				IL_000d
	IL_004a:            goto IL_004d;                                               //br.s				IL_004d
	IL_004c:                                                                        //break
	IL_004d:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_3=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_0055:            Temp_4=Temp_3->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_005a:                                                                        //pop
	IL_005b:                                                                        //ldarg.2
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:            A_1->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_0062:                                                                        //ldc.i4				0x6
	IL_0067:            V_0=6;                                                      //stloc				V_0
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:            goto IL_00de;                                               //br.s				IL_00de
	IL_006f:                                                                        //ldc.i4				0x5
	IL_0074:            V_0=5;                                                      //stloc				V_0
	IL_0078:            /*goto IL_000d;*/goto IL_007a;                              //br.s				IL_000d
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_5=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0080:            Temp_6=Temp_5->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0085:                                                                        //ldc.i4.0
	IL_0086:            Temp_7=Temp_6[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_008b:                                                                        //ldarg.0
	IL_008c:            Temp_8=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0091:            Temp_9=Temp_8->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0096:                                                                        //ldc.i4.0
	IL_0097:            Temp_10=Temp_9[safe_cast<System::Int32>(0)];                //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_009c:            if(Temp_7!=Temp_10)goto IL_00de;                            //bne.un.s				IL_00de
	IL_009e:                                                                        //ldc.i4				0x4
	IL_00a3:            V_0=4;                                                      //stloc				V_0
	IL_00a7:            /*goto IL_000d;*/goto IL_00ac;                              //br				IL_000d
	IL_00ac:            goto IL_004f;                                               //br.s				IL_004f
	IL_00ae:                                                                        //ldc.i4				0x2
	IL_00b3:            V_0=2;                                                      //stloc				V_0
	IL_00b7:            /*goto IL_000d;*/goto IL_00bc;                              //br				IL_000d
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_00c2:            Temp_1=Temp_0->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_00c7:            Temp_2=Temp_1->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_00cc:            if(Temp_2==0)goto IL_00de;                                  //brfalse.s				IL_00de
	IL_00ce:                                                                        //ldc.i4				0x1
	IL_00d3:            V_0=1;                                                      //stloc				V_0
	IL_00d7:            /*goto IL_000d;*/goto IL_00dc;                              //br				IL_000d
	IL_00dc:            goto IL_006f;                                               //br.s				IL_006f
	IL_00de:            return;                                                     //ret

}
inline void Root::T_x69::M_x1(System::Windows::Forms::ListViewItem^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0006:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_2=Temp_1->Add(A_0);                                    //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_0011:                                                                        //pop
	IL_0012:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0017:            return;                                                     //ret

}
inline System::Boolean Root::T_x69::M_x1(Root::T_x69::T_x1^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	array<System::Char>^ Temp_3 = nullptr;
	array<System::String^>^ Temp_4 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_8 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	array<System::Char>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_003f;                                               //br.s				IL_003f
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_00a5;case 1:goto IL_0162;case 2:goto IL_0179;case 3:goto IL_00ec;case 4:goto IL_0087;case 5:goto IL_0190;case 6:goto IL_014e;case 7:goto IL_0072;case 8:goto IL_012a;case 9:goto IL_00b5;case 10:goto IL_0103;case 11:goto IL_0117;case 12:goto IL_013b;};//switch				(IL_00a5,IL_0162,IL_0179,IL_00ec,IL_0087,IL_0190,IL_014e,IL_0072,IL_012a,IL_00b5,IL_0103,IL_0117,IL_013b)
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_0=this->F_x16;                                         //ldfld				System::String^ Root::T_x69 F_x16
	IL_0045:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_004a:            Temp_2=Temp_0->ToLower(Temp_1);                             //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_004f:                                                                        //ldc.i4.1
	IL_0050:            Temp_3=gcnew array<System::Char>(1);                        //newarr				System::Char
	IL_0055:            V_4=Temp_3;                                                 //stloc.s				V_4
	IL_0057:                                                                        //ldloc.s				V_4
	IL_0059:                                                                        //ldc.i4.0
	IL_005a:                                                                        //ldc.i4.s				32
	IL_005c:            V_4[0]=(System::Char)32;                                    //stelem.i2
	IL_005d:                                                                        //ldloc.s				V_4
	IL_005f:            Temp_4=Temp_2->Split(V_4);                                  //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_0064:            V_0=Temp_4;                                                 //stloc.0
	IL_0065:                                                                        //ldc.i4.0
	IL_0066:            V_1=0;                                                      //stloc.1
	IL_0067:                                                                        //ldc.i4				0x7
	IL_006c:            V_5=7;                                                      //stloc				V_5
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0140;                                               //br				IL_0140
	IL_0077:                                                                        //ldc.i4.0
	IL_0078:            return false;                                               //ret
	IL_0079:                                                                        //ldc.i4				0x4
	IL_007e:            V_5=4;                                                      //stloc				V_5
	IL_0082:            /*goto IL_0002;*/goto IL_0087;                              //br				IL_0002
	IL_0087:                                                                        //ldloc.3
	IL_0088:                                                                        //ldarg.1
	IL_0089:            Temp_5=A_0->SubItems;                                       //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_008e:            Temp_6=Temp_5->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Count()
	IL_0093:                                                                        //ldc.i4.1
	IL_0094:                                                                        //sub
	IL_0095:            if(V_3<(Temp_6 - 1))goto IL_00a7;                           //blt.s				IL_00a7
	IL_0097:                                                                        //ldc.i4				0x0
	IL_009c:            V_5=0;                                                      //stloc				V_5
	IL_00a0:            /*goto IL_0002;*/goto IL_00a5;                              //br				IL_0002
	IL_00a5:            goto IL_011c;                                               //br.s				IL_011c
	IL_00a7:                                                                        //ldc.i4				0x9
	IL_00ac:            V_5=9;                                                      //stloc				V_5
	IL_00b0:            /*goto IL_0002;*/goto IL_00b5;                              //br				IL_0002
	IL_00b5:                                                                        //ldarg.1
	IL_00b6:            Temp_8=A_0->SubItems;                                       //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_00bb:                                                                        //ldloc.3
	IL_00bc:            Temp_9=Temp_8[V_3];                                         //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_00c1:            Temp_10=Temp_9->Text;                                       //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_00c6:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00cb:            Temp_12=Temp_10->ToLower(Temp_11);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_00d0:                                                                        //ldloc.0
	IL_00d1:                                                                        //ldloc.1
	IL_00d2:                                                                        //ldelem.ref
	IL_00d3:            Temp_13=Temp_12->IndexOf(V_0[V_1]);                         //callvirt				System::Int32 System::String::IndexOf(System::String^)
	IL_00d8:                                                                        //ldc.i4.m1
	IL_00d9:            if(Temp_13==-1)goto IL_0164;                                //beq				IL_0164
	IL_00de:                                                                        //ldc.i4				0x3
	IL_00e3:            V_5=3;                                                      //stloc				V_5
	IL_00e7:            /*goto IL_0002;*/goto IL_00ec;                              //br				IL_0002
	IL_00ec:            goto IL_017e;                                               //br				IL_017e
	IL_00f1:                                                                        //ldloc.1
	IL_00f2:                                                                        //ldc.i4.1
	IL_00f3:                                                                        //add
	IL_00f4:            V_1=(V_1 + 1);                                              //stloc.1
	IL_00f5:                                                                        //ldc.i4				0xa
	IL_00fa:            V_5=10;                                                     //stloc				V_5
	IL_00fe:            /*goto IL_0002;*/goto IL_0103;                              //br				IL_0002
	IL_0103:            goto IL_0140;                                               //br.s				IL_0140
	IL_0105:                                                                        //ldc.i4.0
	IL_0106:            V_2=0;                                                      //stloc.2
	IL_0107:                                                                        //ldc.i4.0
	IL_0108:            V_3=0;                                                      //stloc.3
	IL_0109:                                                                        //ldc.i4				0xb
	IL_010e:            V_5=11;                                                     //stloc				V_5
	IL_0112:            /*goto IL_0002;*/goto IL_0117;                              //br				IL_0002
	IL_0117:            goto IL_0079;                                               //br				IL_0079
	IL_011c:                                                                        //ldc.i4				0x8
	IL_0121:            V_5=8;                                                      //stloc				V_5
	IL_0125:            /*goto IL_0002;*/goto IL_012a;                              //br				IL_0002
	IL_012a:                                                                        //ldloc.2
	IL_012b:            if(V_2!=0)goto IL_00f1;                                     //brtrue.s				IL_00f1
	IL_012d:                                                                        //ldc.i4				0xc
	IL_0132:            V_5=12;                                                     //stloc				V_5
	IL_0136:            /*goto IL_0002;*/goto IL_013b;                              //br				IL_0002
	IL_013b:            goto IL_0077;                                               //br				IL_0077
	IL_0140:                                                                        //ldc.i4				0x6
	IL_0145:            V_5=6;                                                      //stloc				V_5
	IL_0149:            /*goto IL_0002;*/goto IL_014e;                              //br				IL_0002
	IL_014e:                                                                        //ldloc.1
	IL_014f:                                                                        //ldloc.0
	IL_0150:            Temp_7=V_0->Length;                                         //ldlen
	IL_0151:                                                                        //conv.i4
	IL_0152:            if(V_1<Temp_7)goto IL_0105;                                 //blt.s				IL_0105
	IL_0154:                                                                        //ldc.i4				0x1
	IL_0159:            V_5=1;                                                      //stloc				V_5
	IL_015d:            /*goto IL_0002;*/goto IL_0162;                              //br				IL_0002
	IL_0162:            goto IL_0192;                                               //br.s				IL_0192
	IL_0164:            goto IL_0167;                                               //br.s				IL_0167
	IL_0166:                                                                        //break
	IL_0167:                                                                        //ldloc.3
	IL_0168:                                                                        //ldc.i4.1
	IL_0169:                                                                        //add
	IL_016a:            V_3=(V_3 + 1);                                              //stloc.3
	IL_016b:                                                                        //ldc.i4				0x2
	IL_0170:            V_5=2;                                                      //stloc				V_5
	IL_0174:            /*goto IL_0002;*/goto IL_0179;                              //br				IL_0002
	IL_0179:            goto IL_0079;                                               //br				IL_0079
	IL_017e:                                                                        //ldloc.2
	IL_017f:                                                                        //ldc.i4.1
	IL_0180:                                                                        //add
	IL_0181:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0182:                                                                        //ldc.i4				0x5
	IL_0187:            V_5=5;                                                      //stloc				V_5
	IL_018b:            /*goto IL_0002;*/goto IL_0190;                              //br				IL_0002
	IL_0190:            goto IL_0164;                                               //br.s				IL_0164
	IL_0192:                                                                        //ldc.i4.1
	IL_0193:            return true;                                                //ret

}
inline void Root::T_x69::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IAsyncResult^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyCache^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyLocationCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Collections::ArrayList^ Temp_5 = nullptr;
	Root::T_x69::T_x12^ Temp_6 = nullptr;
	System::IAsyncResult^ Temp_7 = nullptr;
	System::IAsyncResult^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::Int32 Temp_11 = 0;
	System::Collections::IEnumerator^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Collections::IEnumerator^ Temp_14 = nullptr;
	System::Collections::IEnumerator^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	Root::T_x69::T_x1^ Temp_17 = nullptr;
	System::Collections::ArrayList^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::Boolean Temp_20 = false;
	System::Boolean Temp_21 = false;
	System::Collections::ArrayList^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	System::Object^ Temp_24 = nullptr;
	System::Boolean Temp_25 = false;
	System::Boolean Temp_26 = false;
	System::Boolean Temp_27 = false;
	System::IAsyncResult^ Temp_28 = nullptr;
	System::IAsyncResult^ Temp_29 = nullptr;
	System::Boolean Temp_30 = false;
	System::Int32 Temp_31 = 0;
	System::Collections::ArrayList^ Temp_32 = nullptr;
	System::Int32 Temp_33 = 0;
	Root::T_x69::T_x2^ Temp_34 = nullptr;
	array<System::Object^>^ Temp_35 = nullptr;
	System::IAsyncResult^ Temp_36 = nullptr;
	//local variables.
	Root::T_x69::T_x12^ V_0 = nullptr;
	Reflector::CodeModel::IAssemblyLocation^ V_1 = nullptr;
	Root::T_x69::T_x1^ V_2 = nullptr;
	Root::T_x69::T_x1^ V_3 = nullptr;
	Root::T_x69::T_x2^ V_4 = nullptr;
	array<System::Object^>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x16
	IL_0005:            V_6=22;                                                     //stloc				V_6
	IL_0009:            /*goto IL_0010;*/goto IL_000b;                              //br.s				IL_0010
	IL_000b:            goto IL_00ad;                                               //br				IL_00ad
	IL_0010:                                                                        //ldloc				V_6
	IL_0014:            switch(V_6){case 0:goto IL_02f7;case 1:goto IL_03f4;case 2:goto IL_03de;case 3:goto IL_02cb;case 4:goto IL_03ce;case 5:goto IL_017d;case 6:goto IL_01f5;case 7:goto IL_0137;case 8:goto IL_0333;case 9:goto IL_043e;case 10:goto IL_00f4;case 11:goto IL_045c;case 12:goto IL_0265;case 13:goto IL_039c;case 14:goto IL_01ae;case 15:goto IL_0252;case 16:goto IL_02b2;case 17:goto IL_036b;case 18:goto IL_0164;case 19:goto IL_0298;case 20:goto IL_0213;case 21:goto IL_02de;case 22:goto IL_000b;case 23:goto IL_010d;case 24:goto IL_0389;case 25:goto IL_04c3;case 26:goto IL_00ce;case 27:goto IL_042b;case 28:goto IL_0412;case 29:goto IL_04a9;case 30:goto IL_01e5;case 31:goto IL_0190;case 32:goto IL_01c1;case 33:goto IL_027e;case 34:goto IL_00e1;case 35:goto IL_0151;case 36:goto IL_03b5;};//switch				(IL_02f7,IL_03f4,IL_03de,IL_02cb,IL_03ce,IL_017d,IL_01f5,IL_0137,IL_0333,IL_043e,IL_00f4,IL_045c,IL_0265,IL_039c,IL_01ae,IL_0252,IL_02b2,IL_036b,IL_0164,IL_0298,IL_0213,IL_02de,IL_000b,IL_010d,IL_0389,IL_04c3,IL_00ce,IL_042b,IL_0412,IL_04a9,IL_01e5,IL_0190,IL_01c1,IL_027e,IL_00e1,IL_0151,IL_03b5)
	IL_00ad:            goto IL_0257;                                               //br				IL_0257
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:                                                                        //ldnull
	IL_00b4:            this->F_x9=safe_cast<System::IAsyncResult^>(nullptr);       //stfld				System::IAsyncResult^ Root::T_x69 F_x9
	IL_00b9:                                                                        //ldarg.0
	IL_00ba:                                                                        //ldnull
	IL_00bb:            this->F_x4=safe_cast<System::IAsyncResult^>(nullptr);       //stfld				System::IAsyncResult^ Root::T_x69 F_x4
	IL_00c0:                                                                        //ldc.i4				0x1a
	IL_00c5:            V_6=26;                                                     //stloc				V_6
	IL_00c9:            /*goto IL_0010;*/goto IL_00ce;                              //br				IL_0010
	IL_00ce:            goto IL_01b3;                                               //br				IL_01b3
	IL_00d3:                                                                        //ldc.i4				0x22
	IL_00d8:            V_6=34;                                                     //stloc				V_6
	IL_00dc:            /*goto IL_0010;*/goto IL_00e1;                              //br				IL_0010
	IL_00e1:            goto IL_0404;                                               //br				IL_0404
	IL_00e6:                                                                        //ldc.i4				0xa
	IL_00eb:            V_6=10;                                                     //stloc				V_6
	IL_00ef:            /*goto IL_0010;*/goto IL_00f4;                              //br				IL_0010
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            Temp_14=this->F_x2;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x69 F_x2
	IL_00fa:            if(Temp_14==nullptr)goto IL_03d0;                           //brfalse				IL_03d0
	IL_00ff:                                                                        //ldc.i4				0x17
	IL_0104:            V_6=23;                                                     //stloc				V_6
	IL_0108:            /*goto IL_0010;*/goto IL_010d;                              //br				IL_0010
	IL_010d:            goto IL_02d0;                                               //br				IL_02d0
	IL_0112:                                                                        //ldarg.0
	IL_0113:            Temp_22=this->F_x8;                                         //ldfld				System::Collections::ArrayList^ Root::T_x69 F_x8
	IL_0118:                                                                        //ldarg.0
	IL_0119:            Temp_23=this->F_x7;                                         //ldfld				System::Int32 Root::T_x69 F_x7
	IL_011e:            Temp_24=Temp_22[Temp_23];                                   //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0123:                                                                        //castclass				Root::T_x69::T_x1
	IL_0128:            V_3=safe_cast<Root::T_x69::T_x1^>(Temp_24);                 //stloc.3
	IL_0129:                                                                        //ldc.i4				0x7
	IL_012e:            V_6=7;                                                      //stloc				V_6
	IL_0132:            /*goto IL_0010;*/goto IL_0137;                              //br				IL_0010
	IL_0137:                                                                        //ldarg.0
	IL_0138:                                                                        //ldloc.3
	IL_0139:            Temp_10=this->M_x1(V_3);                                    //call				System::Boolean Root::T_x69::M_x1(Root::T_x69::T_x1^)
	IL_013e:            if(!Temp_10)goto IL_036d;                                   //brfalse				IL_036d
	IL_0143:                                                                        //ldc.i4				0x23
	IL_0148:            V_6=35;                                                     //stloc				V_6
	IL_014c:            /*goto IL_0010;*/goto IL_0151;                              //br				IL_0010
	IL_0151:            goto IL_0219;                                               //br				IL_0219
	IL_0156:                                                                        //ldc.i4				0x12
	IL_015b:            V_6=18;                                                     //stloc				V_6
	IL_015f:            /*goto IL_0010;*/goto IL_0164;                              //br				IL_0010
	IL_0164:                                                                        //ldarg.0
	IL_0165:            Temp_26=this->F_x11;                                        //ldfld				System::Boolean Root::T_x69 F_x11
	IL_016a:            if(!Temp_26)goto IL_00e6;                                   //brfalse				IL_00e6
	IL_016f:                                                                        //ldc.i4				0x5
	IL_0174:            V_6=5;                                                      //stloc				V_6
	IL_0178:            /*goto IL_0010;*/goto IL_017d;                              //br				IL_0010
	IL_017d:            goto IL_02fc;                                               //br				IL_02fc
	IL_0182:                                                                        //ldc.i4				0x1f
	IL_0187:            V_6=31;                                                     //stloc				V_6
	IL_018b:            /*goto IL_0010;*/goto IL_0190;                              //br				IL_0010
	IL_0190:                                                                        //ldarg.0
	IL_0191:            Temp_29=this->F_x4;                                         //ldfld				System::IAsyncResult^ Root::T_x69 F_x4
	IL_0196:            Temp_30=Temp_29->IsCompleted;                               //callvirt				System::Boolean System::IAsyncResult::get_IsCompleted()
	IL_019b:            if(!Temp_30)goto IL_04af;                                   //brfalse				IL_04af
	IL_01a0:                                                                        //ldc.i4				0xe
	IL_01a5:            V_6=14;                                                     //stloc				V_6
	IL_01a9:            /*goto IL_0010;*/goto IL_01ae;                              //br				IL_0010
	IL_01ae:            goto IL_00b2;                                               //br				IL_00b2
	IL_01b3:                                                                        //ldc.i4				0x20
	IL_01b8:            V_6=32;                                                     //stloc				V_6
	IL_01bc:            /*goto IL_0010;*/goto IL_01c1;                              //br				IL_0010
	IL_01c1:                                                                        //ldarg.0
	IL_01c2:            Temp_31=this->F_x7;                                         //ldfld				System::Int32 Root::T_x69 F_x7
	IL_01c7:                                                                        //ldarg.0
	IL_01c8:            Temp_32=this->F_x8;                                         //ldfld				System::Collections::ArrayList^ Root::T_x69 F_x8
	IL_01cd:            Temp_33=Temp_32->Count;                                     //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_01d2:            if(Temp_31<Temp_33)goto IL_038e;                            //blt				IL_038e
	IL_01d7:                                                                        //ldc.i4				0x1e
	IL_01dc:            V_6=30;                                                     //stloc				V_6
	IL_01e0:            /*goto IL_0010;*/goto IL_01e5;                              //br				IL_0010
	IL_01e5:            goto IL_0257;                                               //br.s				IL_0257
	IL_01e7:                                                                        //ldc.i4				0x6
	IL_01ec:            V_6=6;                                                      //stloc				V_6
	IL_01f0:            /*goto IL_0010;*/goto IL_01f5;                              //br				IL_0010
	IL_01f5:                                                                        //ldarg.0
	IL_01f6:            Temp_8=this->F_x9;                                          //ldfld				System::IAsyncResult^ Root::T_x69 F_x9
	IL_01fb:            Temp_9=Temp_8->IsCompleted;                                 //callvirt				System::Boolean System::IAsyncResult::get_IsCompleted()
	IL_0200:            if(!Temp_9)goto IL_03ba;                                    //brfalse				IL_03ba
	IL_0205:                                                                        //ldc.i4				0x14
	IL_020a:            V_6=20;                                                     //stloc				V_6
	IL_020e:            /*goto IL_0010;*/goto IL_0213;                              //br				IL_0010
	IL_0213:            goto IL_00d3;                                               //br				IL_00d3
	IL_0218:            return;                                                     //ret
	IL_0219:                                                                        //ldarg.0
	IL_021a:                                                                        //ldftn				void Root::T_x69::M_x1(System::Windows::Forms::ListViewItem^)
	IL_0220:            Temp_34=gcnew Root::T_x69::T_x2(this,&Root::T_x69::M_x1);   //newobj				void Root::T_x69::T_x2::.ctor(System::Object^,System::IntPtr)
	IL_0225:            V_4=Temp_34;                                                //stloc.s				V_4
	IL_0227:                                                                        //ldarg.0
	IL_0228:                                                                        //ldarg.0
	IL_0229:                                                                        //ldloc.s				V_4
	IL_022b:                                                                        //ldc.i4.1
	IL_022c:            Temp_35=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_0231:            V_5=Temp_35;                                                //stloc.s				V_5
	IL_0233:                                                                        //ldloc.s				V_5
	IL_0235:                                                                        //ldc.i4.0
	IL_0236:                                                                        //ldloc.3
	IL_0237:            V_5[0]=safe_cast<System::Object^>(V_3);                     //stelem.ref
	IL_0238:                                                                        //ldloc.s				V_5
	IL_023a:            Temp_36=this->BeginInvoke(safe_cast<System::Delegate^>(V_4),V_5);//call				System::IAsyncResult^ System::Windows::Forms::Control::BeginInvoke(System::Delegate^,array<System::Object^>^)
	IL_023f:            this->F_x4=Temp_36;                                         //stfld				System::IAsyncResult^ Root::T_x69 F_x4
	IL_0244:                                                                        //ldc.i4				0xf
	IL_0249:            V_6=15;                                                     //stloc				V_6
	IL_024d:            /*goto IL_0010;*/goto IL_0252;                              //br				IL_0010
	IL_0252:            goto IL_036d;                                               //br				IL_036d
	IL_0257:                                                                        //ldc.i4				0xc
	IL_025c:            V_6=12;                                                     //stloc				V_6
	IL_0260:            /*goto IL_0010;*/goto IL_0265;                              //br				IL_0010
	IL_0265:                                                                        //ldarg.0
	IL_0266:            Temp_20=this->F_x10;                                        //ldfld				System::Boolean Root::T_x69 F_x10
	IL_026b:            if(!Temp_20)goto IL_029d;                                   //brfalse				IL_029d
	IL_0270:                                                                        //ldc.i4				0x21
	IL_0275:            V_6=33;                                                     //stloc				V_6
	IL_0279:            /*goto IL_0010;*/goto IL_027e;                              //br				IL_0010
	IL_027e:            goto IL_04c8;                                               //br				IL_04c8
	IL_0283:                                                                        //ldarg.0
	IL_0284:                                                                        //ldnull
	IL_0285:            this->F_x2=safe_cast<System::Collections::IEnumerator^>(nullptr);//stfld				System::Collections::IEnumerator^ Root::T_x69 F_x2
	IL_028a:                                                                        //ldc.i4				0x13
	IL_028f:            V_6=19;                                                     //stloc				V_6
	IL_0293:            /*goto IL_0010;*/goto IL_0298;                              //br				IL_0010
	IL_0298:            goto IL_03d0;                                               //br				IL_03d0
	IL_029d:                                                                        //ldc.i4.s				10
	IL_029f:            System::Threading::Thread::Sleep(safe_cast<System::Int32>(10));//call				void System::Threading::Thread::Sleep(System::Int32)
	IL_02a4:                                                                        //ldc.i4				0x10
	IL_02a9:            V_6=16;                                                     //stloc				V_6
	IL_02ad:            /*goto IL_0010;*/goto IL_02b2;                              //br				IL_0010
	IL_02b2:                                                                        //ldarg.0
	IL_02b3:            Temp_25=this->F_x15;                                        //ldfld				System::Boolean Root::T_x69 F_x15
	IL_02b8:            if(!Temp_25)goto IL_0156;                                   //brfalse				IL_0156
	IL_02bd:                                                                        //ldc.i4				0x3
	IL_02c2:            V_6=3;                                                      //stloc				V_6
	IL_02c6:            /*goto IL_0010;*/goto IL_02cb;                              //br				IL_0010
	IL_02cb:            goto IL_0461;                                               //br				IL_0461
	IL_02d0:                                                                        //ldc.i4				0x15
	IL_02d5:            V_6=21;                                                     //stloc				V_6
	IL_02d9:            /*goto IL_0010;*/goto IL_02de;                              //br				IL_0010
	IL_02de:                                                                        //ldarg.0
	IL_02df:            Temp_27=this->F_x10;                                        //ldfld				System::Boolean Root::T_x69 F_x10
	IL_02e4:            if(!Temp_27)goto IL_0430;                                   //brfalse				IL_0430
	IL_02e9:                                                                        //ldc.i4				0x0
	IL_02ee:            V_6=0;                                                      //stloc				V_6
	IL_02f2:            /*goto IL_0010;*/goto IL_02f7;                              //br				IL_0010
	IL_02f7:            goto IL_0218;                                               //br				IL_0218
	IL_02fc:                                                                        //ldarg.0
	IL_02fd:                                                                        //ldc.i4.0
	IL_02fe:            this->F_x11=false;                                          //stfld				System::Boolean Root::T_x69 F_x11
	IL_0303:                                                                        //ldarg.0
	IL_0304:                                                                        //ldc.i4.0
	IL_0305:            this->F_x7=0;                                               //stfld				System::Int32 Root::T_x69 F_x7
	IL_030a:                                                                        //ldarg.0
	IL_030b:                                                                        //ldftn				void Root::T_x69::M_x2()
	IL_0311:            Temp_6=gcnew Root::T_x69::T_x12(this,&Root::T_x69::M_x2);   //newobj				void Root::T_x69::T_x12::.ctor(System::Object^,System::IntPtr)
	IL_0316:            V_0=Temp_6;                                                 //stloc.0
	IL_0317:                                                                        //ldarg.0
	IL_0318:                                                                        //ldarg.0
	IL_0319:                                                                        //ldloc.0
	IL_031a:                                                                        //ldnull
	IL_031b:            Temp_7=this->BeginInvoke(safe_cast<System::Delegate^>(V_0),safe_cast<array<System::Object^>^>(nullptr));//call				System::IAsyncResult^ System::Windows::Forms::Control::BeginInvoke(System::Delegate^,array<System::Object^>^)
	IL_0320:            this->F_x9=Temp_7;                                          //stfld				System::IAsyncResult^ Root::T_x69 F_x9
	IL_0325:                                                                        //ldc.i4				0x8
	IL_032a:            V_6=8;                                                      //stloc				V_6
	IL_032e:            /*goto IL_0010;*/goto IL_0333;                              //br				IL_0010
	IL_0333:            goto IL_00e6;                                               //br				IL_00e6
	IL_0338:                                                                        //ldarg.0
	IL_0339:            Temp_15=this->F_x2;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x69 F_x2
	IL_033e:            Temp_16=Temp_15->Current;                                   //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0343:                                                                        //castclass				Reflector::CodeModel::IAssemblyLocation
	IL_0348:            V_1=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(Temp_16);//stloc.1
	IL_0349:                                                                        //ldloc.1
	IL_034a:            Temp_17=gcnew Root::T_x69::T_x1(V_1);                       //newobj				void Root::T_x69::T_x1::.ctor(Reflector::CodeModel::IAssemblyLocation^)
	IL_034f:            V_2=Temp_17;                                                //stloc.2
	IL_0350:                                                                        //ldarg.0
	IL_0351:            Temp_18=this->F_x8;                                         //ldfld				System::Collections::ArrayList^ Root::T_x69 F_x8
	IL_0356:                                                                        //ldloc.2
	IL_0357:            Temp_19=Temp_18->Add(safe_cast<System::Object^>(V_2));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_035c:                                                                        //pop
	IL_035d:                                                                        //ldc.i4				0x11
	IL_0362:            V_6=17;                                                     //stloc				V_6
	IL_0366:            /*goto IL_0010;*/goto IL_036b;                              //br				IL_0010
	IL_036b:            goto IL_03d0;                                               //br.s				IL_03d0
	IL_036d:                                                                        //ldarg.0
	IL_036e:                                                                        //dup
	IL_036f:            Temp_11=this->F_x7;                                         //ldfld				System::Int32 Root::T_x69 F_x7
	IL_0374:                                                                        //ldc.i4.1
	IL_0375:                                                                        //add
	IL_0376:            this->F_x7=(Temp_11 + 1);                                   //stfld				System::Int32 Root::T_x69 F_x7
	IL_037b:                                                                        //ldc.i4				0x18
	IL_0380:            V_6=24;                                                     //stloc				V_6
	IL_0384:            /*goto IL_0010;*/goto IL_0389;                              //br				IL_0010
	IL_0389:            goto IL_01b3;                                               //br				IL_01b3
	IL_038e:                                                                        //ldc.i4				0xd
	IL_0393:            V_6=13;                                                     //stloc				V_6
	IL_0397:            /*goto IL_0010;*/goto IL_039c;                              //br				IL_0010
	IL_039c:                                                                        //ldarg.0
	IL_039d:            Temp_21=this->F_x10;                                        //ldfld				System::Boolean Root::T_x69 F_x10
	IL_03a2:            if(!Temp_21)goto IL_0112;                                   //brfalse				IL_0112
	IL_03a7:                                                                        //ldc.i4				0x24
	IL_03ac:            V_6=36;                                                     //stloc				V_6
	IL_03b0:            /*goto IL_0010;*/goto IL_03b5;                              //br				IL_0010
	IL_03b5:            goto IL_04ae;                                               //br				IL_04ae
	IL_03ba:                                                                        //ldc.i4.1
	IL_03bb:            System::Threading::Thread::Sleep(safe_cast<System::Int32>(1));//call				void System::Threading::Thread::Sleep(System::Int32)
	IL_03c0:                                                                        //ldc.i4				0x4
	IL_03c5:            V_6=4;                                                      //stloc				V_6
	IL_03c9:            /*goto IL_0010;*/goto IL_03ce;                              //br				IL_0010
	IL_03ce:            goto IL_03d0;                                               //br.s				IL_03d0
	IL_03d0:                                                                        //ldc.i4				0x2
	IL_03d5:            V_6=2;                                                      //stloc				V_6
	IL_03d9:            /*goto IL_0010;*/goto IL_03de;                              //br				IL_0010
	IL_03de:                                                                        //ldarg.0
	IL_03df:            Temp_0=this->F_x9;                                          //ldfld				System::IAsyncResult^ Root::T_x69 F_x9
	IL_03e4:            if(Temp_0==nullptr)goto IL_0404;                            //brfalse.s				IL_0404
	IL_03e6:                                                                        //ldc.i4				0x1
	IL_03eb:            V_6=1;                                                      //stloc				V_6
	IL_03ef:            /*goto IL_0010;*/goto IL_03f4;                              //br				IL_0010
	IL_03f4:                                                                        //ldc.i4.4
	IL_03f5:                                                                        //dup
	IL_03f6:                                                                        //dup
	IL_03f7:                                                                        //ldc.i4.2
	IL_03f8:                                                                        //sub
	IL_03f9:                                                                        //blt				IL_03f5
	IL_03fe:                                                                        //pop
	IL_03ff:            goto IL_01e7;                                               //br				IL_01e7
	IL_0404:                                                                        //ldc.i4				0x1c
	IL_0409:            V_6=28;                                                     //stloc				V_6
	IL_040d:            /*goto IL_0010;*/goto IL_0412;                              //br				IL_0010
	IL_0412:                                                                        //ldarg.0
	IL_0413:            Temp_28=this->F_x4;                                         //ldfld				System::IAsyncResult^ Root::T_x69 F_x4
	IL_0418:            if(Temp_28==nullptr)goto IL_00b2;                           //brfalse				IL_00b2
	IL_041d:                                                                        //ldc.i4				0x1b
	IL_0422:            V_6=27;                                                     //stloc				V_6
	IL_0426:            /*goto IL_0010;*/goto IL_042b;                              //br				IL_0010
	IL_042b:            goto IL_0182;                                               //br				IL_0182
	IL_0430:                                                                        //ldc.i4				0x9
	IL_0435:            V_6=9;                                                      //stloc				V_6
	IL_0439:            /*goto IL_0010;*/goto IL_043e;                              //br				IL_0010
	IL_043e:                                                                        //ldarg.0
	IL_043f:            Temp_12=this->F_x2;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x69 F_x2
	IL_0444:            Temp_13=Temp_12->MoveNext();                                //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0449:            if(!Temp_13)goto IL_0283;                                   //brfalse				IL_0283
	IL_044e:                                                                        //ldc.i4				0xb
	IL_0453:            V_6=11;                                                     //stloc				V_6
	IL_0457:            /*goto IL_0010;*/goto IL_045c;                              //br				IL_0010
	IL_045c:            goto IL_0338;                                               //br				IL_0338
	IL_0461:                                                                        //ldarg.0
	IL_0462:                                                                        //ldc.i4.0
	IL_0463:            this->F_x15=false;                                          //stfld				System::Boolean Root::T_x69 F_x15
	IL_0468:                                                                        //ldarg.0
	IL_0469:                                                                        //ldc.i4.1
	IL_046a:            this->F_x11=true;                                           //stfld				System::Boolean Root::T_x69 F_x11
	IL_046f:                                                                        //ldarg.0
	IL_0470:                                                                        //ldarg.0
	IL_0471:            Temp_1=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyCache^ Root::T_x69 F_x1
	IL_0476:            Temp_2=Temp_1->Assemblies;                                  //callvirt				Reflector::CodeModel::IAssemblyLocationCollection^ Reflector::CodeModel::IAssemblyCache::get_Assemblies()
	IL_047b:            Temp_3=safe_cast<System::Collections::IEnumerable^>(Temp_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0480:            this->F_x2=Temp_3;                                          //stfld				System::Collections::IEnumerator^ Root::T_x69 F_x2
	IL_0485:                                                                        //ldarg.0
	IL_0486:            Temp_4=this->F_x2;                                          //ldfld				System::Collections::IEnumerator^ Root::T_x69 F_x2
	IL_048b:            Temp_4->Reset();                                            //callvirt				void System::Collections::IEnumerator::Reset()
	IL_0490:                                                                        //ldarg.0
	IL_0491:            Temp_5=this->F_x8;                                          //ldfld				System::Collections::ArrayList^ Root::T_x69 F_x8
	IL_0496:            Temp_5->Clear();                                            //callvirt				void System::Collections::ArrayList::Clear()
	IL_049b:                                                                        //ldc.i4				0x1d
	IL_04a0:            V_6=29;                                                     //stloc				V_6
	IL_04a4:            /*goto IL_0010;*/goto IL_04a9;                              //br				IL_0010
	IL_04a9:            goto IL_0156;                                               //br				IL_0156
	IL_04ae:            return;                                                     //ret
	IL_04af:                                                                        //ldc.i4.1
	IL_04b0:            System::Threading::Thread::Sleep(safe_cast<System::Int32>(1));//call				void System::Threading::Thread::Sleep(System::Int32)
	IL_04b5:                                                                        //ldc.i4				0x19
	IL_04ba:            V_6=25;                                                     //stloc				V_6
	IL_04be:            /*goto IL_0010;*/goto IL_04c3;                              //br				IL_0010
	IL_04c3:            goto IL_0404;                                               //br				IL_0404
	IL_04c8:            return;                                                     //ret

}
inline void Root::T_x69::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x69 F_x12
	IL_0007:            Temp_1=Temp_0->Text;                                        //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_000c:            this->F_x16=Temp_1;                                         //stfld				System::String^ Root::T_x69 F_x16
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldc.i4.1
	IL_0013:            this->F_x11=true;                                           //stfld				System::Boolean Root::T_x69 F_x11
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x69::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x10=true;                                           //stfld				System::Boolean Root::T_x69 F_x10
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x69::M_x13(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x15=true;                                           //stfld				System::Boolean Root::T_x69 F_x15
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x69::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0006:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_000b:            Temp_1->Clear();                                            //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::Clear()
	IL_0010:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0015:            return;                                                     //ret

}
inline void Root::T_x69::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::IButtonControl^ Temp_0 = nullptr;
	System::Windows::Forms::ListView^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Windows::Forms::Button^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->AcceptButton;                                  //call				System::Windows::Forms::IButtonControl^ System::Windows::Forms::Form::get_AcceptButton()
	IL_0011:                                                                        //castclass				System::Windows::Forms::Button
	IL_0016:            V_0=safe_cast<System::Windows::Forms::Button^>(Temp_0);     //stloc.0
	IL_0017:                                                                        //ldloc.0
	IL_0018:                                                                        //ldarg.0
	IL_0019:            Temp_1=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_001e:            Temp_2=Temp_1->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0023:            Temp_3=Temp_2->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:                                                                        //ceq
	IL_002b:                                                                        //ldc.i4.0
	IL_002c:                                                                        //ceq
	IL_002e:            V_0->Enabled=((Temp_3 == 0) == false);                      //callvirt				void System::Windows::Forms::Control::set_Enabled(System::Boolean)
	IL_0033:            return;                                                     //ret

}
inline void Root::T_x69::M_x2(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Windows::Forms::ListView^ Temp_3 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_4 = nullptr;
	System::Windows::Forms::ListView^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Windows::Forms::ListView^ Temp_7 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_8 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_9 = nullptr;
	System::Windows::Forms::ListView^ Temp_10 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_11 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_12 = nullptr;
	System::Windows::Forms::Keys Temp_13 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0045;case 1:goto IL_00b6;case 2:goto IL_00d6;case 3:goto IL_00a6;case 4:goto IL_000b;};//switch				(IL_0045,IL_00b6,IL_00d6,IL_00a6,IL_000b)
	IL_002a:                                                                        //ldarg.2
	IL_002b:            Temp_13=A_1->KeyCode;                                       //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyCode()
	IL_0030:                                                                        //ldc.i4.s				40
	IL_0032:            if(safe_cast<System::Int32>(Temp_13)!=40)goto IL_00db;      //bne.un				IL_00db
	IL_0037:            goto IL_003a;                                               //br.s				IL_003a
	IL_0039:                                                                        //break
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_0=0;                                                      //stloc				V_0
	IL_0043:            /*goto IL_000d;*/goto IL_0045;                              //br.s				IL_000d
	IL_0045:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_3=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_004d:            Temp_4=Temp_3->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0052:            Temp_4->Clear();                                            //callvirt				void System::Windows::Forms::ListView::SelectedListViewItemCollection::Clear()
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_5=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_005d:            Temp_6=Temp_5->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0062:                                                                        //pop
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_7=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0069:            Temp_8=Temp_7->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_006e:                                                                        //ldc.i4.0
	IL_006f:            Temp_9=Temp_8[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:            Temp_9->Selected=true;                                      //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_10=this->F_x13;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0080:            Temp_11=Temp_10->Items;                                     //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0085:                                                                        //ldc.i4.0
	IL_0086:            Temp_12=Temp_11[safe_cast<System::Int32>(0)];               //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_008b:                                                                        //ldc.i4.1
	IL_008c:            Temp_12->Focused=true;                                      //callvirt				void System::Windows::Forms::ListViewItem::set_Focused(System::Boolean)
	IL_0091:                                                                        //ldarg.2
	IL_0092:                                                                        //ldc.i4.1
	IL_0093:            A_1->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_0098:                                                                        //ldc.i4				0x3
	IL_009d:            V_0=3;                                                      //stloc				V_0
	IL_00a1:            /*goto IL_000d;*/goto IL_00a6;                              //br				IL_000d
	IL_00a6:            goto IL_00db;                                               //br.s				IL_00db
	IL_00a8:                                                                        //ldc.i4				0x1
	IL_00ad:            V_0=1;                                                      //stloc				V_0
	IL_00b1:            /*goto IL_000d;*/goto IL_00b6;                              //br				IL_000d
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_00bc:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_00c1:            Temp_2=Temp_1->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_00c6:            if(Temp_2==0)goto IL_00db;                                  //brfalse.s				IL_00db
	IL_00c8:                                                                        //ldc.i4				0x2
	IL_00cd:            V_0=2;                                                      //stloc				V_0
	IL_00d1:            /*goto IL_000d;*/goto IL_00d6;                              //br				IL_000d
	IL_00d6:            goto IL_0047;                                               //br				IL_0047
	IL_00db:            return;                                                     //ret

}
inline array<System::String^>^ Root::T_x69::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<System::String^>^ Temp_3 = nullptr;
	System::Windows::Forms::ListView^ Temp_4 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::String^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Root::T_x69::T_x1^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0060;case 1:goto IL_0044;case 2:goto IL_0051;case 3:goto IL_0094;};//switch				(IL_0060,IL_0044,IL_0051,IL_0094)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0021:            Temp_1=Temp_0->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0026:            Temp_2=Temp_1->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_002b:            V_0=Temp_2;                                                 //stloc.0
	IL_002c:                                                                        //ldloc.0
	IL_002d:                                                                        //conv.ovf.u4
	IL_002e:            Temp_3=gcnew array<System::String^>(safe_cast<System::UInt32>(V_0));//newarr				System::String
	IL_0033:            V_1=Temp_3;                                                 //stloc.1
	IL_0034:                                                                        //ldc.i4.0
	IL_0035:            V_2=0;                                                      //stloc.2
	IL_0036:            goto IL_0039;                                               //br.s				IL_0039
	IL_0038:                                                                        //break
	IL_0039:                                                                        //ldc.i4				0x1
	IL_003e:            V_4=1;                                                      //stloc				V_4
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:            goto IL_0046;                                               //br.s				IL_0046
	IL_0046:                                                                        //ldc.i4				0x2
	IL_004b:            V_4=2;                                                      //stloc				V_4
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:                                                                        //ldloc.2
	IL_0052:                                                                        //ldloc.0
	IL_0053:            if(V_2<V_0)goto IL_0062;                                    //blt.s				IL_0062
	IL_0055:                                                                        //ldc.i4				0x0
	IL_005a:            V_4=0;                                                      //stloc				V_4
	IL_005e:            /*goto IL_0002;*/goto IL_0060;                              //br.s				IL_0002
	IL_0060:            goto IL_0096;                                               //br.s				IL_0096
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_4=this->F_x13;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x69 F_x13
	IL_0068:            Temp_5=Temp_4->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_006d:                                                                        //ldloc.2
	IL_006e:            Temp_6=Temp_5[V_2];                                         //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_0073:                                                                        //castclass				Root::T_x69::T_x1
	IL_0078:            V_3=safe_cast<Root::T_x69::T_x1^>(Temp_6);                  //stloc.3
	IL_0079:                                                                        //ldloc.1
	IL_007a:                                                                        //ldloc.2
	IL_007b:                                                                        //ldloc.3
	IL_007c:            Temp_7=V_3->M_x1();                                         //callvirt				System::String^ Root::T_x69::T_x1::M_x1()
	IL_0081:            V_1[V_2]=Temp_7;                                            //stelem.ref
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldc.i4.1
	IL_0084:                                                                        //add
	IL_0085:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0086:                                                                        //ldc.i4				0x3
	IL_008b:            V_4=3;                                                      //stloc				V_4
	IL_008f:            /*goto IL_0002;*/goto IL_0094;                              //br				IL_0002
	IL_0094:            goto IL_0046;                                               //br.s				IL_0046
	IL_0096:                                                                        //ldloc.1
	IL_0097:            return V_1;                                                 //ret

}
inline Root::T_x69::T_x13::T_x13(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x69::T_x13 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x69::T_x13 F_x1
	IL_0014:            return;                                                     //ret

}
inline System::Int32 Root::T_x69::T_x13::M_x1(System::Object^ A_0,System::Object^ A_1)
//System::Collections::IComparer^::Compare by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //isinst				System::Windows::Forms::ListViewItem
	IL_0009:            Temp_0=dynamic_cast<System::Windows::Forms::ListViewItem^>(A_0)->SubItems;//callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x69::T_x13 F_x1
	IL_0014:            Temp_2=Temp_0[Temp_1];                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_0019:            Temp_3=Temp_2->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_001e:            V_0=Temp_3;                                                 //stloc.0
	IL_001f:                                                                        //ldarg.2
	IL_0020:                                                                        //isinst				System::Windows::Forms::ListViewItem
	IL_0025:            Temp_4=dynamic_cast<System::Windows::Forms::ListViewItem^>(A_1)->SubItems;//callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_5=this->F_x1;                                          //ldfld				System::Int32 Root::T_x69::T_x13 F_x1
	IL_0030:            Temp_6=Temp_4[Temp_5];                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_0035:            Temp_7=Temp_6->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_003a:            V_1=Temp_7;                                                 //stloc.1
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldloc.1
	IL_003d:            Temp_8=V_0->CompareTo(V_1);                                 //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0042:            return Temp_8;                                              //ret

}
inline Root::T_x69::T_x1::T_x1(Reflector::CodeModel::IAssemblyLocation^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_1 = nullptr;
	System::Version^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_4 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_9 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_10 = nullptr;
	array<System::Byte>^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_13 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_18 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_19 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_22 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_0=19;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::ListViewItem();*/                 //call				void System::Windows::Forms::ListViewItem::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldc.i4				0x97
	IL_0015:            this->ImageIndex=151;                                       //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0021:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_1=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_002c:                                                                        //ldarg.1
	IL_002d:            Temp_2=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Version;//callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_0032:            Temp_3=Temp_2->ToString();                                  //callvirt				System::String^ System::Version::ToString()
	IL_0037:            Temp_4=Temp_1->Add(Temp_3);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_003c:                                                                        //pop
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_5=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_6=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Culture;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0049:            Temp_7=Temp_6->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_004e:            Temp_19=Temp_5;if(Temp_7==0)goto IL_0052;                   //brfalse.s				IL_0052
	IL_0050:            Temp_20=Temp_19;goto IL_0062;                               //br.s				IL_0062
	IL_0052:                                                                        //ldstr				L"\x5F30\x5632\x4034\x4336\x4B38\x5A3A\x513C"
	IL_0057:                                                                        //ldloc				V_0
	IL_005b:            Temp_8=a(L"\x5F30\x5632\x4034\x4336\x4B38\x5A3A\x513C",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0060:            Temp_22=Temp_19;Temp_21=Temp_8;goto IL_006a;                //br.s				IL_006a
	IL_0062:                                                                        //ldarg.1
	IL_0063:            Temp_17=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Culture;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0068:            Temp_22=Temp_20;Temp_21=Temp_17;goto IL_006a;               //br.s				IL_006a
	IL_006a:            Temp_9=Temp_22->Add(Temp_21);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_006f:                                                                        //pop
	IL_0070:                                                                        //ldarg.0
	IL_0071:            Temp_10=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0076:                                                                        //ldarg.0
	IL_0077:                                                                        //ldarg.1
	IL_0078:            Temp_11=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->PublicKeyToken;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_007d:            Temp_12=this->M_x1(Temp_11);                                //call				System::String^ Root::T_x69::T_x1::M_x1(array<System::Byte>^)
	IL_0082:            Temp_13=Temp_10->Add(Temp_12);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0087:                                                                        //pop
	IL_0088:                                                                        //ldarg.0
	IL_0089:            Temp_14=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_008e:                                                                        //ldarg.1
	IL_008f:            Temp_15=A_0->Location;                                      //callvirt				System::String^ Reflector::CodeModel::IAssemblyLocation::get_Location()
	IL_0094:            Temp_16=Temp_14->Add(Temp_15);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0099:                                                                        //pop
	IL_009a:            return;                                                     //ret

}
inline System::String^ Root::T_x69::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_0 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0006:                                                                        //ldc.i4.4
	IL_0007:            Temp_1=Temp_0[safe_cast<System::Int32>(4)];                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_000c:            Temp_2=Temp_1->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_0011:            return Temp_2;                                              //ret

}
inline System::String^ Root::T_x69::T_x1::M_x1(array<System::Byte>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::Globalization::CultureInfo^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_3=13;                                                     //stloc				V_3
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0058;case 1:goto IL_003a;case 2:goto IL_0092;case 3:goto IL_0047;};//switch				(IL_0058,IL_003a,IL_0092,IL_0047)
	IL_0024:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0029:            V_0=Temp_0;                                                 //stloc.0
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:            V_1=0;                                                      //stloc.1
	IL_002c:            goto IL_002f;                                               //br.s				IL_002f
	IL_002e:                                                                        //break
	IL_002f:                                                                        //ldc.i4				0x1
	IL_0034:            V_2=1;                                                      //stloc				V_2
	IL_0038:            /*goto IL_000b;*/goto IL_003a;                              //br.s				IL_000b
	IL_003a:            goto IL_003c;                                               //br.s				IL_003c
	IL_003c:                                                                        //ldc.i4				0x3
	IL_0041:            V_2=3;                                                      //stloc				V_2
	IL_0045:            /*goto IL_000b;*/goto IL_0047;                              //br.s				IL_000b
	IL_0047:                                                                        //ldloc.1
	IL_0048:                                                                        //ldarg.1
	IL_0049:            Temp_1=A_0->Length;                                         //ldlen
	IL_004a:                                                                        //conv.i4
	IL_004b:            if(V_1<Temp_1)goto IL_005a;                                 //blt.s				IL_005a
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_2=0;                                                      //stloc				V_2
	IL_0056:            /*goto IL_000b;*/goto IL_0058;                              //br.s				IL_000b
	IL_0058:            goto IL_0094;                                               //br.s				IL_0094
	IL_005a:                                                                        //ldloc.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //ldloc.1
	IL_005d:                                                                        //ldelema				System::Byte
	IL_0062:                                                                        //ldstr				L"\x532A\x1F2C"
	IL_0067:                                                                        //ldloc				V_3
	IL_006b:            Temp_2=a(L"\x532A\x1F2C",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0070:            Temp_3=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0075:            Temp_4=A_0[V_1].ToString(Temp_2,safe_cast<System::IFormatProvider^>(Temp_3));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_007a:            Temp_5=System::String::Concat(V_0,Temp_4);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_007f:            V_0=Temp_5;                                                 //stloc.0
	IL_0080:                                                                        //ldloc.1
	IL_0081:                                                                        //ldc.i4.1
	IL_0082:                                                                        //add
	IL_0083:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0084:                                                                        //ldc.i4				0x2
	IL_0089:            V_2=2;                                                      //stloc				V_2
	IL_008d:            /*goto IL_000b;*/goto IL_0092;                              //br				IL_000b
	IL_0092:            goto IL_003c;                                               //br.s				IL_003c
	IL_0094:                                                                        //ldloc.0
	IL_0095:            return V_0;                                                 //ret

}
