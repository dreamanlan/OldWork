#include "global_xref.h"

inline Root::T_x71::T_x71()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::Label^ Temp_1 = nullptr;
	System::Windows::Forms::Button^ Temp_2 = nullptr;
	System::Windows::Forms::Button^ Temp_3 = nullptr;
	System::Drawing::Size Temp_4;
	System::Windows::Forms::Label^ Temp_5 = nullptr;
	System::Windows::Forms::Label^ Temp_6 = nullptr;
	System::Windows::Forms::Label^ Temp_7 = nullptr;
	System::Drawing::Point Temp_8;
	System::Windows::Forms::Label^ Temp_9 = nullptr;
	System::Drawing::Size Temp_10;
	System::Windows::Forms::Control::ControlCollection^ Temp_11 = nullptr;
	System::Windows::Forms::Label^ Temp_12 = nullptr;
	array<System::Windows::Forms::ColumnHeader^>^ Temp_13 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Windows::Forms::ListView^ Temp_16 = nullptr;
	System::Windows::Forms::ListView^ Temp_17 = nullptr;
	System::Windows::Forms::ListView^ Temp_18 = nullptr;
	System::Drawing::Point Temp_19;
	System::Windows::Forms::ListView^ Temp_20 = nullptr;
	System::Drawing::Size Temp_21;
	System::Windows::Forms::ListView^ Temp_22 = nullptr;
	System::Windows::Forms::ListView^ Temp_23 = nullptr;
	System::Windows::Forms::ListView^ Temp_24 = nullptr;
	System::Windows::Forms::ListView^ Temp_25 = nullptr;
	System::Windows::Forms::ListView^ Temp_26 = nullptr;
	System::EventHandler^ Temp_27 = nullptr;
	System::Windows::Forms::ListView^ Temp_28 = nullptr;
	System::EventHandler^ Temp_29 = nullptr;
	System::Windows::Forms::ListView^ Temp_30 = nullptr;
	System::Windows::Forms::KeyEventHandler^ Temp_31 = nullptr;
	System::Windows::Forms::ListView^ Temp_32 = nullptr;
	System::Windows::Forms::LabelEditEventHandler^ Temp_33 = nullptr;
	System::Windows::Forms::ListView^ Temp_34 = nullptr;
	System::Windows::Forms::LabelEditEventHandler^ Temp_35 = nullptr;
	System::Windows::Forms::ListView^ Temp_36 = nullptr;
	System::EventHandler^ Temp_37 = nullptr;
	System::Windows::Forms::ListView^ Temp_38 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_39 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_40 = nullptr;
	System::Windows::Forms::ListView^ Temp_41 = nullptr;
	System::Windows::Forms::Button^ Temp_42 = nullptr;
	System::Windows::Forms::Button^ Temp_43 = nullptr;
	System::Drawing::Point Temp_44;
	System::Windows::Forms::Button^ Temp_45 = nullptr;
	System::Drawing::Size Temp_46;
	System::Windows::Forms::Button^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::Windows::Forms::Button^ Temp_49 = nullptr;
	System::Windows::Forms::Button^ Temp_50 = nullptr;
	System::EventHandler^ Temp_51 = nullptr;
	System::Windows::Forms::Button^ Temp_52 = nullptr;
	System::Boolean Temp_53 = false;
	System::Windows::Forms::Control::ControlCollection^ Temp_54 = nullptr;
	System::Windows::Forms::Button^ Temp_55 = nullptr;
	System::Windows::Forms::Button^ Temp_56 = nullptr;
	System::Windows::Forms::Button^ Temp_57 = nullptr;
	System::Drawing::Point Temp_58;
	System::Windows::Forms::Button^ Temp_59 = nullptr;
	System::Drawing::Size Temp_60;
	System::Windows::Forms::Button^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::Windows::Forms::Button^ Temp_63 = nullptr;
	System::Windows::Forms::Button^ Temp_64 = nullptr;
	System::EventHandler^ Temp_65 = nullptr;
	System::Windows::Forms::Button^ Temp_66 = nullptr;
	System::Boolean Temp_67 = false;
	System::Windows::Forms::Control::ControlCollection^ Temp_68 = nullptr;
	System::Windows::Forms::Button^ Temp_69 = nullptr;
	System::Windows::Forms::Button^ Temp_70 = nullptr;
	System::Drawing::Point Temp_71;
	System::String^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::Drawing::Size Temp_74;
	System::Windows::Forms::Control::ControlCollection^ Temp_75 = nullptr;
	System::Windows::Forms::Button^ Temp_76 = nullptr;
	System::Drawing::Point Temp_77;
	System::String^ Temp_78 = nullptr;
	System::String^ Temp_79 = nullptr;
	System::Drawing::Size Temp_80;
	System::Windows::Forms::Control::ControlCollection^ Temp_81 = nullptr;
	//local variables.
	array<System::Windows::Forms::ColumnHeader^>^ V_0 = nullptr;
	System::Windows::Forms::Button^ V_1 = nullptr;
	System::Windows::Forms::Button^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_3=12;                                                     //stloc				V_3
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=gcnew System::Windows::Forms::ListView();            //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_000f:            this->F_x12=Temp_0;                                         //stfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_1=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_001a:            this->F_x13=Temp_1;                                         //stfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=gcnew System::Windows::Forms::Button();              //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0025:            this->F_x8=Temp_2;                                          //stfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_3=gcnew System::Windows::Forms::Button();              //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0030:            this->F_x5=Temp_3;                                          //stfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_0035:                                                                        //ldarg.0
	IL_0036:                                                                        //ldc.i4.0
	IL_0037:            this->F_x9=false;                                           //stfld				System::Boolean Root::T_x71 F_x9
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldc.i4.0
	IL_003e:            this->F_x4=false;                                           //stfld				System::Boolean Root::T_x71 F_x4
	IL_0043:                                                                        //ldarg.0
	IL_0044:            /*Root::T_x66();*/                                          //call				void Root::T_x66::.ctor()
	IL_0049:                                                                        //ldarg.0
	IL_004a:                                                                        //ldc.i4				0x186
	IL_004f:                                                                        //ldc.i4				0x122
	IL_0054:            Temp_4=System::Drawing::Size(safe_cast<System::Int32>(390),safe_cast<System::Int32>(290));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0059:            this->ClientSize=Temp_4;                                    //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_5=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_0064:            this->F_x13=Temp_5;                                         //stfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_6=this->F_x13;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_006f:                                                                        //ldc.i4.3
	IL_0070:            Temp_6->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0075:                                                                        //ldarg.0
	IL_0076:            Temp_7=this->F_x13;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_007b:                                                                        //ldc.i4.8
	IL_007c:                                                                        //ldc.i4.8
	IL_007d:            Temp_8=System::Drawing::Point(safe_cast<System::Int32>(8),safe_cast<System::Int32>(8));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0082:            Temp_7->Location=Temp_8;                                    //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0087:                                                                        //ldarg.0
	IL_0088:            Temp_9=this->F_x13;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_008d:                                                                        //ldc.i4				0x17c
	IL_0092:                                                                        //ldc.i4.s				16
	IL_0094:            Temp_10=System::Drawing::Size(safe_cast<System::Int32>(380),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0099:            Temp_9->Size=Temp_10;                                       //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_11=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:            Temp_12=this->F_x13;                                        //ldfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_00aa:            Temp_11->Add(safe_cast<System::Windows::Forms::Control^>(Temp_12));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00af:                                                                        //ldc.i4.1
	IL_00b0:            Temp_13=gcnew array<System::Windows::Forms::ColumnHeader^>(1);//newarr				System::Windows::Forms::ColumnHeader
	IL_00b5:            V_0=Temp_13;                                                //stloc.0
	IL_00b6:                                                                        //ldloc.0
	IL_00b7:                                                                        //ldc.i4.0
	IL_00b8:            Temp_14=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_00bd:            V_0[0]=Temp_14;                                             //stelem.ref
	IL_00be:                                                                        //ldloc.0
	IL_00bf:                                                                        //ldc.i4.0
	IL_00c0:                                                                        //ldelem.ref
	IL_00c1:                                                                        //ldstr				L"\x6429\x4D2B\x432D\x552F"
	IL_00c6:                                                                        //ldloc				V_3
	IL_00ca:            Temp_15=a(L"\x6429\x4D2B\x432D\x552F",V_3);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cf:            V_0[0]->Text=Temp_15;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:                                                                        //ldc.i4.0
	IL_00d6:                                                                        //ldelem.ref
	IL_00d7:                                                                        //ldc.i4				0x172
	IL_00dc:            V_0[0]->Width=370;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:            Temp_16=gcnew System::Windows::Forms::ListView();           //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_00e7:            this->F_x12=Temp_16;                                        //stfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00ec:                                                                        //ldarg.0
	IL_00ed:            Temp_17=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00f2:                                                                        //ldc.i4.1
	IL_00f3:            Temp_17->TabIndex=1;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:            Temp_18=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00fe:                                                                        //ldc.i4.8
	IL_00ff:                                                                        //ldc.i4.s				24
	IL_0101:            Temp_19=System::Drawing::Point(safe_cast<System::Int32>(8),safe_cast<System::Int32>(24));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0106:            Temp_18->Location=Temp_19;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_010b:                                                                        //ldarg.0
	IL_010c:            Temp_20=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0111:                                                                        //ldc.i4				0x176
	IL_0116:                                                                        //ldc.i4				0xe2
	IL_011b:            Temp_21=System::Drawing::Size(safe_cast<System::Int32>(374),safe_cast<System::Int32>(226));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0120:            Temp_20->Size=Temp_21;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0125:                                                                        //ldarg.0
	IL_0126:            Temp_22=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_012b:                                                                        //ldc.i4.1
	IL_012c:            Temp_22->View=safe_cast<System::Windows::Forms::View>(1);   //callvirt				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_0131:                                                                        //ldarg.0
	IL_0132:            Temp_23=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0137:                                                                        //ldc.i4.0
	IL_0138:            Temp_23->HideSelection=false;                               //callvirt				void System::Windows::Forms::ListView::set_HideSelection(System::Boolean)
	IL_013d:                                                                        //ldarg.0
	IL_013e:            Temp_24=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0143:                                                                        //ldc.i4.0
	IL_0144:            Temp_24->MultiSelect=false;                                 //callvirt				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_0149:                                                                        //ldarg.0
	IL_014a:            Temp_25=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_014f:                                                                        //ldc.i4.1
	IL_0150:            Temp_25->FullRowSelect=true;                                //callvirt				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_0155:                                                                        //ldarg.0
	IL_0156:            Temp_26=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_015b:                                                                        //ldarg.0
	IL_015c:                                                                        //ldftn				void Root::T_x71::M_x12(System::Object^,System::EventArgs^)
	IL_0162:            Temp_27=gcnew System::EventHandler(this,&Root::T_x71::M_x12);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0167:            Temp_26->GotFocus += Temp_27;                               //callvirt				void System::Windows::Forms::Control::add_GotFocus(System::EventHandler^)
	IL_016c:                                                                        //ldarg.0
	IL_016d:            Temp_28=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0172:                                                                        //ldarg.0
	IL_0173:                                                                        //ldftn				void Root::T_x71::M_x2(System::Object^,System::EventArgs^)
	IL_0179:            Temp_29=gcnew System::EventHandler(this,&Root::T_x71::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_017e:            Temp_28->ItemActivate += Temp_29;                           //callvirt				void System::Windows::Forms::ListView::add_ItemActivate(System::EventHandler^)
	IL_0183:                                                                        //ldarg.0
	IL_0184:            Temp_30=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0189:                                                                        //ldarg.0
	IL_018a:                                                                        //ldftn				void Root::T_x71::M_x1(System::Object^,System::Windows::Forms::KeyEventArgs^)
	IL_0190:            Temp_31=gcnew System::Windows::Forms::KeyEventHandler(this,&Root::T_x71::M_x1);//newobj				void System::Windows::Forms::KeyEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0195:            Temp_30->KeyDown += Temp_31;                                //callvirt				void System::Windows::Forms::Control::add_KeyDown(System::Windows::Forms::KeyEventHandler^)
	IL_019a:                                                                        //ldarg.0
	IL_019b:            Temp_32=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01a0:                                                                        //ldarg.0
	IL_01a1:                                                                        //ldftn				void Root::T_x71::M_x2(System::Object^,System::Windows::Forms::LabelEditEventArgs^)
	IL_01a7:            Temp_33=gcnew System::Windows::Forms::LabelEditEventHandler(this,&Root::T_x71::M_x2);//newobj				void System::Windows::Forms::LabelEditEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_01ac:            Temp_32->BeforeLabelEdit += Temp_33;                        //callvirt				void System::Windows::Forms::ListView::add_BeforeLabelEdit(System::Windows::Forms::LabelEditEventHandler^)
	IL_01b1:                                                                        //ldarg.0
	IL_01b2:            Temp_34=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01b7:                                                                        //ldarg.0
	IL_01b8:                                                                        //ldftn				void Root::T_x71::M_x1(System::Object^,System::Windows::Forms::LabelEditEventArgs^)
	IL_01be:            Temp_35=gcnew System::Windows::Forms::LabelEditEventHandler(this,&Root::T_x71::M_x1);//newobj				void System::Windows::Forms::LabelEditEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_01c3:            Temp_34->AfterLabelEdit += Temp_35;                         //callvirt				void System::Windows::Forms::ListView::add_AfterLabelEdit(System::Windows::Forms::LabelEditEventHandler^)
	IL_01c8:                                                                        //ldarg.0
	IL_01c9:            Temp_36=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01ce:                                                                        //ldarg.0
	IL_01cf:                                                                        //ldftn				void Root::T_x71::M_x1(System::Object^,System::EventArgs^)
	IL_01d5:            Temp_37=gcnew System::EventHandler(this,&Root::T_x71::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_01da:            Temp_36->SelectedIndexChanged += Temp_37;                   //callvirt				void System::Windows::Forms::ListView::add_SelectedIndexChanged(System::EventHandler^)
	IL_01df:                                                                        //ldarg.0
	IL_01e0:            Temp_38=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01e5:            Temp_39=Temp_38->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_01ea:                                                                        //ldloc.0
	IL_01eb:            Temp_39->AddRange(V_0);                                     //callvirt				void System::Windows::Forms::ListView::ColumnHeaderCollection::AddRange(array<System::Windows::Forms::ColumnHeader^>^)
	IL_01f0:                                                                        //ldarg.0
	IL_01f1:            Temp_40=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_01f6:                                                                        //ldarg.0
	IL_01f7:            Temp_41=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01fc:            Temp_40->Add(safe_cast<System::Windows::Forms::Control^>(Temp_41));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0201:                                                                        //ldarg.0
	IL_0202:            Temp_42=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0207:                                                                        //ldc.i4.3
	IL_0208:            Temp_42->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_020d:                                                                        //ldarg.0
	IL_020e:            Temp_43=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0213:                                                                        //ldc.i4.8
	IL_0214:                                                                        //ldc.i4				0x102
	IL_0219:            Temp_44=System::Drawing::Point(safe_cast<System::Int32>(8),safe_cast<System::Int32>(258));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_021e:            Temp_43->Location=Temp_44;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0223:                                                                        //ldarg.0
	IL_0224:            Temp_45=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0229:                                                                        //ldc.i4.s				75
	IL_022b:                                                                        //ldc.i4.s				23
	IL_022d:            Temp_46=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0232:            Temp_45->Size=Temp_46;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0237:                                                                        //ldarg.0
	IL_0238:            Temp_47=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_023d:                                                                        //ldstr				L"\x0C29\x6D2B\x4A2D\x542F"
	IL_0242:                                                                        //ldloc				V_3
	IL_0246:            Temp_48=a(L"\x0C29\x6D2B\x4A2D\x542F",V_3);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024b:            Temp_47->Text=Temp_48;                                      //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0250:                                                                        //ldarg.0
	IL_0251:            Temp_49=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0256:                                                                        //ldc.i4.2
	IL_0257:            Temp_49->TabIndex=2;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_025c:                                                                        //ldarg.0
	IL_025d:            Temp_50=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0262:                                                                        //ldarg.0
	IL_0263:                                                                        //ldftn				void Root::T_x71::M_x8(System::Object^,System::EventArgs^)
	IL_0269:            Temp_51=gcnew System::EventHandler(this,&Root::T_x71::M_x8);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_026e:            Temp_50->Click += Temp_51;                                  //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_0273:                                                                        //ldarg.0
	IL_0274:            Temp_52=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0279:                                                                        //ldarg.0
	IL_027a:            Temp_53=this->F_x9;                                         //ldfld				System::Boolean Root::T_x71 F_x9
	IL_027f:            Temp_52->Visible=Temp_53;                                   //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_0284:                                                                        //ldarg.0
	IL_0285:            Temp_54=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_028a:                                                                        //ldarg.0
	IL_028b:            Temp_55=this->F_x8;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0290:            Temp_54->Add(safe_cast<System::Windows::Forms::Control^>(Temp_55));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0295:                                                                        //ldarg.0
	IL_0296:            Temp_56=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_029b:                                                                        //ldc.i4.3
	IL_029c:            Temp_56->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_02a1:                                                                        //ldarg.0
	IL_02a2:            Temp_57=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_02a7:                                                                        //ldc.i4.s				88
	IL_02a9:                                                                        //ldc.i4				0x102
	IL_02ae:            Temp_58=System::Drawing::Point(safe_cast<System::Int32>(88),safe_cast<System::Int32>(258));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_02b3:            Temp_57->Location=Temp_58;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_02b8:                                                                        //ldarg.0
	IL_02b9:            Temp_59=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_02be:                                                                        //ldc.i4.s				75
	IL_02c0:                                                                        //ldc.i4.s				23
	IL_02c2:            Temp_60=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_02c7:            Temp_59->Size=Temp_60;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_02cc:                                                                        //ldarg.0
	IL_02cd:            Temp_61=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_02d2:                                                                        //ldstr				L"\x0C29\x7E2B\x4B2D\x5D2F\x5D31\x4233\x5335"
	IL_02d7:                                                                        //ldloc				V_3
	IL_02db:            Temp_62=a(L"\x0C29\x7E2B\x4B2D\x5D2F\x5D31\x4233\x5335",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e0:            Temp_61->Text=Temp_62;                                      //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_02e5:                                                                        //ldarg.0
	IL_02e6:            Temp_63=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_02eb:                                                                        //ldc.i4.3
	IL_02ec:            Temp_63->TabIndex=3;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_02f1:                                                                        //ldarg.0
	IL_02f2:            Temp_64=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_02f7:                                                                        //ldarg.0
	IL_02f8:                                                                        //ldftn				void Root::T_x71::M_x13(System::Object^,System::EventArgs^)
	IL_02fe:            Temp_65=gcnew System::EventHandler(this,&Root::T_x71::M_x13);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0303:            Temp_64->Click += Temp_65;                                  //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_0308:                                                                        //ldarg.0
	IL_0309:            Temp_66=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_030e:                                                                        //ldarg.0
	IL_030f:            Temp_67=this->F_x9;                                         //ldfld				System::Boolean Root::T_x71 F_x9
	IL_0314:            Temp_66->Visible=Temp_67;                                   //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_0319:                                                                        //ldarg.0
	IL_031a:            Temp_68=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_031f:                                                                        //ldarg.0
	IL_0320:            Temp_69=this->F_x5;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_0325:            Temp_68->Add(safe_cast<System::Windows::Forms::Control^>(Temp_69));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_032a:            Temp_70=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_032f:            V_1=Temp_70;                                                //stloc.1
	IL_0330:                                                                        //ldloc.1
	IL_0331:                                                                        //ldc.i4.3
	IL_0332:            V_1->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0337:                                                                        //ldloc.1
	IL_0338:                                                                        //ldc.i4				0xe3
	IL_033d:                                                                        //ldc.i4				0x102
	IL_0342:            Temp_71=System::Drawing::Point(safe_cast<System::Int32>(227),safe_cast<System::Int32>(258));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0347:            V_1->Location=Temp_71;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_034c:                                                                        //ldloc.1
	IL_034d:                                                                        //ldstr				L"\x6B29\x4F2B\x4D2D\x552F\x4231\x4033"
	IL_0352:                                                                        //ldloc				V_3
	IL_0356:            Temp_72=a(L"\x6B29\x4F2B\x4D2D\x552F\x4231\x4033",V_3);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_035b:            Temp_73=Root::T_x128::M_x1(Temp_72);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0360:            V_1->Text=Temp_73;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0365:                                                                        //ldloc.1
	IL_0366:                                                                        //ldc.i4.s				75
	IL_0368:                                                                        //ldc.i4.s				23
	IL_036a:            Temp_74=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_036f:            V_1->Size=Temp_74;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0374:                                                                        //ldloc.1
	IL_0375:                                                                        //ldc.i4.4
	IL_0376:            V_1->TabIndex=4;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_037b:                                                                        //ldloc.1
	IL_037c:                                                                        //ldc.i4.1
	IL_037d:            V_1->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(1);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_0382:                                                                        //ldarg.0
	IL_0383:            Temp_75=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0388:                                                                        //ldloc.1
	IL_0389:            Temp_75->Add(safe_cast<System::Windows::Forms::Control^>(V_1));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_038e:                                                                        //ldarg.0
	IL_038f:                                                                        //ldloc.1
	IL_0390:            this->AcceptButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_1);//call				void System::Windows::Forms::Form::set_AcceptButton(System::Windows::Forms::IButtonControl^)
	IL_0395:            Temp_76=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_039a:            V_2=Temp_76;                                                //stloc.2
	IL_039b:                                                                        //ldloc.2
	IL_039c:                                                                        //ldc.i4.3
	IL_039d:            V_2->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_03a2:                                                                        //ldloc.2
	IL_03a3:                                                                        //ldc.i4				0x133
	IL_03a8:                                                                        //ldc.i4				0x102
	IL_03ad:            Temp_77=System::Drawing::Point(safe_cast<System::Int32>(307),safe_cast<System::Int32>(258));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_03b2:            V_2->Location=Temp_77;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_03b7:                                                                        //ldloc.2
	IL_03b8:                                                                        //ldstr				L"\x6929\x4D2B\x402D\x532F\x5731\x5833"
	IL_03bd:                                                                        //ldloc				V_3
	IL_03c1:            Temp_78=a(L"\x6929\x4D2B\x402D\x532F\x5731\x5833",V_3);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c6:            Temp_79=Root::T_x128::M_x1(Temp_78);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_03cb:            V_2->Text=Temp_79;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_03d0:                                                                        //ldloc.2
	IL_03d1:                                                                        //ldc.i4.s				75
	IL_03d3:                                                                        //ldc.i4.s				23
	IL_03d5:            Temp_80=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_03da:            V_2->Size=Temp_80;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_03df:                                                                        //ldloc.2
	IL_03e0:                                                                        //ldc.i4.5
	IL_03e1:            V_2->TabIndex=5;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_03e6:                                                                        //ldarg.0
	IL_03e7:            Temp_81=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_03ec:                                                                        //ldloc.2
	IL_03ed:            Temp_81->Add(safe_cast<System::Windows::Forms::Control^>(V_2));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_03f2:                                                                        //ldarg.0
	IL_03f3:                                                                        //ldloc.2
	IL_03f4:            this->CancelButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_2);//call				void System::Windows::Forms::Form::set_CancelButton(System::Windows::Forms::IButtonControl^)
	IL_03f9:            return;                                                     //ret

}
inline System::String^ Root::T_x71::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
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
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_3=4;                                                      //stloc				V_3
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0064;case 1:goto IL_0083;case 2:goto IL_0033;};//switch				(IL_0064,IL_0083,IL_0033)
	IL_0020:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:                                                                        //ldc.i4.1
	IL_0027:            V_1=1;                                                      //stloc.1
	IL_0028:                                                                        //ldc.i4				0x2
	IL_002d:            V_2=2;                                                      //stloc				V_2
	IL_0031:            /*goto IL_000b;*/goto IL_0033;                              //br.s				IL_000b
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldstr				L"\x6C21\x4123\x5125\x0827\x6629\x452B\x5D2D\x442F\x1231"
	IL_003a:                                                                        //ldloc				V_3
	IL_003e:            Temp_2=a(L"\x6C21\x4123\x5125\x0827\x6629\x452B\x5D2D\x442F\x1231",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0043:                                                                        //ldloca.s				V_1
	IL_0045:            Temp_3=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_004a:            Temp_4=V_1.ToString(safe_cast<System::IFormatProvider^>(Temp_3));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_004f:            Temp_5=System::String::Concat(Temp_2,Temp_4);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0054:            V_0=Temp_5;                                                 //stloc.0
	IL_0055:                                                                        //ldloc.1
	IL_0056:                                                                        //ldc.i4.1
	IL_0057:                                                                        //add
	IL_0058:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0059:                                                                        //ldc.i4				0x0
	IL_005e:            V_2=0;                                                      //stloc				V_2
	IL_0062:            /*goto IL_000b;*/goto IL_0064;                              //br.s				IL_000b
	IL_0064:                                                                        //ldarg.0
	IL_0065:                                                                        //ldloc.0
	IL_0066:            Temp_1=this->M_x1(V_0);                                     //call				System::Boolean Root::T_x71::M_x1(System::String^)
	IL_006b:            if(Temp_1)goto IL_0035;                                     //brtrue.s				IL_0035
	IL_006d:                                                                        //ldc.i4.5
	IL_006e:                                                                        //dup
	IL_006f:                                                                        //dup
	IL_0070:                                                                        //ldc.i4.3
	IL_0071:                                                                        //sub
	IL_0072:                                                                        //blt				IL_006e
	IL_0077:                                                                        //pop
	IL_0078:                                                                        //ldc.i4				0x1
	IL_007d:            V_2=1;                                                      //stloc				V_2
	IL_0081:            /*goto IL_000b;*/goto IL_0083;                              //br.s				IL_000b
	IL_0083:            goto IL_0085;                                               //br.s				IL_0085
	IL_0085:                                                                        //ldloc.0
	IL_0086:            return V_0;                                                 //ret

}
inline void Root::T_x71::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::Button^ Temp_1 = nullptr;
	System::Windows::Forms::Button^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0039;case 1:goto IL_0071;case 2:goto IL_000b;};//switch				(IL_0039,IL_0071,IL_000b)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.1
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_3=this->F_x9;                                          //ldfld				System::Boolean Root::T_x71 F_x9
	IL_002c:            if(A_0==Temp_3)goto IL_0073;                                //beq.s				IL_0073
	IL_002e:                                                                        //ldc.i4				0x0
	IL_0033:            V_0=0;                                                      //stloc				V_0
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_003b;                                               //br.s				IL_003b
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //ldarg.1
	IL_003d:            this->F_x9=A_0;                                             //stfld				System::Boolean Root::T_x71 F_x9
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0048:                                                                        //ldarg.1
	IL_0049:            Temp_0->LabelEdit=A_0;                                      //callvirt				void System::Windows::Forms::ListView::set_LabelEdit(System::Boolean)
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_1=this->F_x8;                                          //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x8
	IL_0054:                                                                        //ldarg.1
	IL_0055:            Temp_1->Visible=A_0;                                        //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_2=this->F_x5;                                          //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_0060:                                                                        //ldarg.1
	IL_0061:            Temp_2->Visible=A_0;                                        //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_0=1;                                                      //stloc				V_0
	IL_006f:            /*goto IL_000d;*/goto IL_0071;                              //br.s				IL_000d
	IL_0071:            goto IL_0073;                                               //br.s				IL_0073
	IL_0073:            return;                                                     //ret

}
inline void Root::T_x71::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Button^ Temp_0 = nullptr;
	System::Windows::Forms::ListView^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_2 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Windows::Forms::ListView^ Temp_7 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_1=9;                                                      //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0095;case 1:goto IL_0014;case 2:goto IL_0054;};//switch				(IL_0095,IL_0014,IL_0054)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_7=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0031:            Temp_8=Temp_7->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0036:            Temp_9=Temp_8->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:            if(Temp_9!=1)goto IL_0097;                                  //bne.un.s				IL_0097
	IL_003e:                                                                        //ldc.i4.2
	IL_003f:                                                                        //dup
	IL_0040:                                                                        //dup
	IL_0041:                                                                        //ldc.i4.7
	IL_0042:                                                                        //add
	IL_0043:                                                                        //bgt				IL_003f
	IL_0048:                                                                        //pop
	IL_0049:                                                                        //ldc.i4				0x2
	IL_004e:            V_0=2;                                                      //stloc				V_0
	IL_0052:            /*goto IL_0016;*/goto IL_0054;                              //br.s				IL_0016
	IL_0054:            goto IL_0056;                                               //br.s				IL_0056
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_0=this->F_x5;                                          //ldfld				System::Windows::Forms::Button^ Root::T_x71 F_x5
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_1=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0062:            Temp_2=Temp_1->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0067:                                                                        //ldc.i4.0
	IL_0068:            Temp_3=Temp_2[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_006d:            Temp_4=Temp_3->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_0072:                                                                        //ldstr				L"\x0A26\x0428\x0B2A\x692C\x4A2E\x5730\x5232\x4034\x5B36\x4D38\x1B3A\x103C\x123E"
	IL_0077:                                                                        //ldloc				V_1
	IL_007b:            Temp_5=a(L"\x0A26\x0428\x0B2A\x692C\x4A2E\x5730\x5232\x4034\x5B36\x4D38\x1B3A\x103C\x123E",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0080:            Temp_6=(Temp_4 != Temp_5);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0085:            Temp_0->Enabled=Temp_6;                                     //callvirt				void System::Windows::Forms::Control::set_Enabled(System::Boolean)
	IL_008a:                                                                        //ldc.i4				0x0
	IL_008f:            V_0=0;                                                      //stloc				V_0
	IL_0093:            /*goto IL_0016;*/goto IL_0095;                              //br.s				IL_0016
	IL_0095:            goto IL_0097;                                               //br.s				IL_0097
	IL_0097:            return;                                                     //ret

}
inline void Root::T_x71::M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Keys Temp_0 = (System::Windows::Forms::Keys)0;
	System::Windows::Forms::ListView^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_2 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Windows::Forms::ListView^ Temp_7 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Windows::Forms::Keys Temp_10 = (System::Windows::Forms::Keys)0;
	System::Windows::Forms::Keys Temp_11 = (System::Windows::Forms::Keys)0;
	System::Windows::Forms::ListView^ Temp_12 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_13 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_1=8;                                                      //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0066;                                               //br.s				IL_0066
	IL_0016:                                                                        //ldc.i4.5
	IL_0017:                                                                        //dup
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //ldc.i4.6
	IL_001a:                                                                        //sub
	IL_001b:                                                                        //blt				IL_0017
	IL_0020:                                                                        //pop
	IL_0021:                                                                        //ldloc				V_0
	IL_0025:            switch(V_0){case 0:goto IL_00f1;case 1:goto IL_0014;case 2:goto IL_0148;case 3:goto IL_01a3;case 4:goto IL_00d0;case 5:goto IL_00a5;case 6:goto IL_007c;case 7:goto IL_00c0;case 8:goto IL_0092;case 9:goto IL_0190;case 10:goto IL_011d;case 11:goto IL_010a;case 12:goto IL_0163;case 13:goto IL_0138;case 14:goto IL_01df;};//switch				(IL_00f1,IL_0014,IL_0148,IL_01a3,IL_00d0,IL_00a5,IL_007c,IL_00c0,IL_0092,IL_0190,IL_011d,IL_010a,IL_0163,IL_0138,IL_01df)
	IL_0066:                                                                        //ldarg.0
	IL_0067:            Temp_15=this->F_x9;                                         //ldfld				System::Boolean Root::T_x71 F_x9
	IL_006c:            if(!Temp_15)goto IL_01e1;                                   //brfalse				IL_01e1
	IL_0071:                                                                        //ldc.i4				0x6
	IL_0076:            V_0=6;                                                      //stloc				V_0
	IL_007a:            /*goto IL_0016;*/goto IL_007c;                              //br.s				IL_0016
	IL_007c:            goto IL_010f;                                               //br				IL_010f
	IL_0081:                                                                        //ldarg.0
	IL_0082:            this->M_x12();                                              //call				void Root::T_x71::M_x12()
	IL_0087:                                                                        //ldc.i4				0x8
	IL_008c:            V_0=8;                                                      //stloc				V_0
	IL_0090:            /*goto IL_0016;*/goto IL_0092;                              //br.s				IL_0016
	IL_0092:            goto IL_013a;                                               //br				IL_013a
	IL_0097:                                                                        //ldc.i4				0x5
	IL_009c:            V_0=5;                                                      //stloc				V_0
	IL_00a0:            /*goto IL_0016;*/goto IL_00a5;                              //br				IL_0016
	IL_00a5:                                                                        //ldarg.2
	IL_00a6:            Temp_10=A_1->KeyData;                                       //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyData()
	IL_00ab:                                                                        //ldc.i4.s				45
	IL_00ad:            if(safe_cast<System::Int32>(Temp_10)!=45)goto IL_013a;      //bne.un				IL_013a
	IL_00b2:                                                                        //ldc.i4				0x7
	IL_00b7:            V_0=7;                                                      //stloc				V_0
	IL_00bb:            /*goto IL_0016;*/goto IL_00c0;                              //br				IL_0016
	IL_00c0:            goto IL_0081;                                               //br.s				IL_0081
	IL_00c2:                                                                        //ldc.i4				0x4
	IL_00c7:            V_0=4;                                                      //stloc				V_0
	IL_00cb:            /*goto IL_0016;*/goto IL_00d0;                              //br				IL_0016
	IL_00d0:                                                                        //ldarg.0
	IL_00d1:            Temp_7=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00d6:            Temp_8=Temp_7->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_00db:            Temp_9=Temp_8->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_00e0:                                                                        //ldc.i4.1
	IL_00e1:            if(Temp_9!=1)goto IL_0097;                                  //bne.un.s				IL_0097
	IL_00e3:                                                                        //ldc.i4				0x0
	IL_00e8:            V_0=0;                                                      //stloc				V_0
	IL_00ec:            /*goto IL_0016;*/goto IL_00f1;                              //br				IL_0016
	IL_00f1:            goto IL_0195;                                               //br				IL_0195
	IL_00f6:                                                                        //ldarg.0
	IL_00f7:            this->M_x2();                                               //call				void Root::T_x71::M_x2()
	IL_00fc:                                                                        //ldc.i4				0xb
	IL_0101:            V_0=11;                                                     //stloc				V_0
	IL_0105:            /*goto IL_0016;*/goto IL_010a;                              //br				IL_0016
	IL_010a:            goto IL_01e1;                                               //br				IL_01e1
	IL_010f:                                                                        //ldc.i4				0xa
	IL_0114:            V_0=10;                                                     //stloc				V_0
	IL_0118:            /*goto IL_0016;*/goto IL_011d;                              //br				IL_0016
	IL_011d:                                                                        //ldarg.2
	IL_011e:            Temp_11=A_1->KeyData;                                       //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyData()
	IL_0123:                                                                        //ldc.i4.s				113
	IL_0125:            if(safe_cast<System::Int32>(Temp_11)!=113)goto IL_0097;     //bne.un				IL_0097
	IL_012a:                                                                        //ldc.i4				0xd
	IL_012f:            V_0=13;                                                     //stloc				V_0
	IL_0133:            /*goto IL_0016;*/goto IL_0138;                              //br				IL_0016
	IL_0138:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_013a:                                                                        //ldc.i4				0x2
	IL_013f:            V_0=2;                                                      //stloc				V_0
	IL_0143:            /*goto IL_0016;*/goto IL_0148;                              //br				IL_0016
	IL_0148:                                                                        //ldarg.2
	IL_0149:            Temp_0=A_1->KeyData;                                        //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyData()
	IL_014e:                                                                        //ldc.i4.s				46
	IL_0150:            if(safe_cast<System::Int32>(Temp_0)!=46)goto IL_01e1;       //bne.un				IL_01e1
	IL_0155:                                                                        //ldc.i4				0xc
	IL_015a:            V_0=12;                                                     //stloc				V_0
	IL_015e:            /*goto IL_0016;*/goto IL_0163;                              //br				IL_0016
	IL_0163:            goto IL_00f6;                                               //br.s				IL_00f6
	IL_0165:                                                                        //ldarg.0
	IL_0166:            Temp_12=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_016b:            Temp_13=Temp_12->SelectedItems;                             //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0170:                                                                        //ldc.i4.0
	IL_0171:            Temp_14=Temp_13[safe_cast<System::Int32>(0)];               //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_0176:            Temp_14->BeginEdit();                                       //callvirt				void System::Windows::Forms::ListViewItem::BeginEdit()
	IL_017b:                                                                        //ldarg.2
	IL_017c:                                                                        //ldc.i4.1
	IL_017d:            A_1->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_0182:                                                                        //ldc.i4				0x9
	IL_0187:            V_0=9;                                                      //stloc				V_0
	IL_018b:            /*goto IL_0016;*/goto IL_0190;                              //br				IL_0016
	IL_0190:            goto IL_0097;                                               //br				IL_0097
	IL_0195:                                                                        //ldc.i4				0x3
	IL_019a:            V_0=3;                                                      //stloc				V_0
	IL_019e:            /*goto IL_0016;*/goto IL_01a3;                              //br				IL_0016
	IL_01a3:                                                                        //ldarg.0
	IL_01a4:            Temp_1=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01a9:            Temp_2=Temp_1->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_01ae:                                                                        //ldc.i4.0
	IL_01af:            Temp_3=Temp_2[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_01b4:            Temp_4=Temp_3->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_01b9:                                                                        //ldstr				L"\x0B25\x0527\x0A29\x682B\x4B2D\x562F\x5331\x4133\x5A35\x4C37\x1A39\x113B\x133D"
	IL_01be:                                                                        //ldloc				V_1
	IL_01c2:            Temp_5=a(L"\x0B25\x0527\x0A29\x682B\x4B2D\x562F\x5331\x4133\x5A35\x4C37\x1A39\x113B\x133D",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c7:            Temp_6=(Temp_4 != Temp_5);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_01cc:            if(!Temp_6)goto IL_0097;                                    //brfalse				IL_0097
	IL_01d1:                                                                        //ldc.i4				0xe
	IL_01d6:            V_0=14;                                                     //stloc				V_0
	IL_01da:            /*goto IL_0016;*/goto IL_01df;                              //br				IL_0016
	IL_01df:            goto IL_0165;                                               //br.s				IL_0165
	IL_01e1:            return;                                                     //ret

}
inline void Root::T_x71::M_x1(System::Object^ A_0,System::Windows::Forms::LabelEditEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Windows::Forms::DialogResult Temp_5 = (System::Windows::Forms::DialogResult)0;
	System::Boolean Temp_6 = false;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Windows::Forms::ListView^ Temp_14 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Windows::Forms::ListViewItem^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Windows::Forms::DialogResult Temp_24 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::Windows::Forms::DialogResult Temp_31 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Boolean Temp_35 = false;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_2=13;                                                     //stloc				V_2
	IL_0009:            goto IL_0068;                                               //br.s				IL_0068
	IL_000b:                                                                        //ldloc				V_1
	IL_000f:            switch(V_1){case 0:goto IL_0248;case 1:goto IL_014e;case 2:goto IL_01d4;case 3:goto IL_00d8;case 4:goto IL_0300;case 5:goto IL_0109;case 6:goto IL_00eb;case 7:goto IL_01a8;case 8:goto IL_011c;case 9:goto IL_01bb;case 10:goto IL_0313;case 11:goto IL_032c;case 12:goto IL_0235;case 13:goto IL_02c4;case 14:goto IL_007a;case 15:goto IL_0093;case 16:goto IL_0168;case 17:goto IL_013b;case 18:goto IL_018f;case 19:goto IL_02d4;case 20:goto IL_0266;};//switch				(IL_0248,IL_014e,IL_01d4,IL_00d8,IL_0300,IL_0109,IL_00eb,IL_01a8,IL_011c,IL_01bb,IL_0313,IL_032c,IL_0235,IL_02c4,IL_007a,IL_0093,IL_0168,IL_013b,IL_018f,IL_02d4,IL_0266)
	IL_0068:                                                                        //ldarg.0
	IL_0069:                                                                        //ldc.i4.0
	IL_006a:            this->F_x4=false;                                           //stfld				System::Boolean Root::T_x71 F_x4
	IL_006f:                                                                        //ldc.i4				0xe
	IL_0074:            V_1=14;                                                     //stloc				V_1
	IL_0078:            /*goto IL_000b;*/goto IL_007a;                              //br.s				IL_000b
	IL_007a:                                                                        //ldarg.2
	IL_007b:            Temp_13=A_1->CancelEdit;                                    //callvirt				System::Boolean System::Windows::Forms::LabelEditEventArgs::get_CancelEdit()
	IL_0080:            if(Temp_13)goto IL_0331;                                    //brtrue				IL_0331
	IL_0085:                                                                        //ldc.i4				0xf
	IL_008a:            V_1=15;                                                     //stloc				V_1
	IL_008e:            /*goto IL_000b;*/goto IL_0093;                              //br				IL_000b
	IL_0093:            goto IL_016a;                                               //br				IL_016a
	IL_0098:                                                                        //ldarg.0
	IL_0099:                                                                        //ldstr				L"\x672A\x4C2C\x4D2E\x5430\x5F32\x1534\x5E36\x4A38\x1B3A\x583C\x523E\x3140\x3742\x3C44\x6746\x2648\x394A\x6D4C\x3A4E\x2250\x3A52\x3B54\x3056\x7958\x325A\x335C\x295E\x0060\x0F62\x0C64\x0366\x4968\x086A\x056C\x0E6E\x0370\x1272\x1674\x0376\x1C78\x097A\x0E7C\x517E"
	IL_009e:                                                                        //ldloc				V_2
	IL_00a2:            Temp_2=a(L"\x672A\x4C2C\x4D2E\x5430\x5F32\x1534\x5E36\x4A38\x1B3A\x583C\x523E\x3140\x3742\x3C44\x6746\x2648\x394A\x6D4C\x3A4E\x2250\x3A52\x3B54\x3056\x7958\x325A\x335C\x295E\x0060\x0F62\x0C64\x0366\x4968\x086A\x056C\x0E6E\x0370\x1272\x1674\x0376\x1C78\x097A\x0E7C\x517E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a7:                                                                        //ldstr				L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246"
	IL_00ac:                                                                        //ldloc				V_2
	IL_00b0:            Temp_3=a(L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b5:            Temp_4=Root::T_x128::M_x1(Temp_3);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_00ba:                                                                        //ldc.i4.0
	IL_00bb:                                                                        //ldc.i4.s				48
	IL_00bd:            Temp_5=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(this),Temp_2,Temp_4,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_00c2:                                                                        //pop
	IL_00c3:                                                                        //ldarg.2
	IL_00c4:                                                                        //ldc.i4.1
	IL_00c5:            A_1->CancelEdit=true;                                       //callvirt				void System::Windows::Forms::LabelEditEventArgs::set_CancelEdit(System::Boolean)
	IL_00ca:                                                                        //ldc.i4				0x3
	IL_00cf:            V_1=3;                                                      //stloc				V_1
	IL_00d3:            /*goto IL_000b;*/goto IL_00d8;                              //br				IL_000b
	IL_00d8:            goto IL_01ad;                                               //br				IL_01ad
	IL_00dd:                                                                        //ldc.i4				0x6
	IL_00e2:            V_1=6;                                                      //stloc				V_1
	IL_00e6:            /*goto IL_000b;*/goto IL_00eb;                              //br				IL_000b
	IL_00eb:                                                                        //ldarg.2
	IL_00ec:            Temp_7=A_1->Label;                                          //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_00f1:                                                                        //ldc.i4.s				124
	IL_00f3:            Temp_8=Temp_7->IndexOf(safe_cast<System::Char>((System::Char)124));//callvirt				System::Int32 System::String::IndexOf(System::Char)
	IL_00f8:                                                                        //ldc.i4.m1
	IL_00f9:            if(Temp_8!=-1)goto IL_0098;                                 //bne.un.s				IL_0098
	IL_00fb:                                                                        //ldc.i4				0x5
	IL_0100:            V_1=5;                                                      //stloc				V_1
	IL_0104:            /*goto IL_000b;*/goto IL_0109;                              //br				IL_000b
	IL_0109:            goto IL_02c6;                                               //br				IL_02c6
	IL_010e:                                                                        //ldc.i4				0x8
	IL_0113:            V_1=8;                                                      //stloc				V_1
	IL_0117:            /*goto IL_000b;*/goto IL_011c;                              //br				IL_000b
	IL_011c:                                                                        //ldarg.0
	IL_011d:                                                                        //ldarg.2
	IL_011e:            Temp_9=A_1->Label;                                          //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_0123:            Temp_10=this->M_x1(Temp_9);                                 //call				System::Boolean Root::T_x71::M_x1(System::String^)
	IL_0128:            if(!Temp_10)goto IL_0305;                                   //brfalse				IL_0305
	IL_012d:                                                                        //ldc.i4				0x11
	IL_0132:            V_1=17;                                                     //stloc				V_1
	IL_0136:            /*goto IL_000b;*/goto IL_013b;                              //br				IL_000b
	IL_013b:            goto IL_026b;                                               //br				IL_026b
	IL_0140:                                                                        //ldc.i4				0x1
	IL_0145:            V_1=1;                                                      //stloc				V_1
	IL_0149:            /*goto IL_000b;*/goto IL_014e;                              //br				IL_000b
	IL_014e:                                                                        //ldarg.0
	IL_014f:                                                                        //ldloc.0
	IL_0150:            Temp_6=this->M_x1(V_0);                                     //call				System::Boolean Root::T_x71::M_x1(System::Windows::Forms::ListViewItem^)
	IL_0155:            if(!Temp_6)goto IL_0331;                                    //brfalse				IL_0331
	IL_015a:                                                                        //ldc.i4				0x10
	IL_015f:            V_1=16;                                                     //stloc				V_1
	IL_0163:            /*goto IL_000b;*/goto IL_0168;                              //br				IL_000b
	IL_0168:            goto IL_01d9;                                               //br.s				IL_01d9
	IL_016a:                                                                        //ldarg.0
	IL_016b:            Temp_14=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0170:            Temp_15=Temp_14->Items;                                     //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0175:                                                                        //ldarg.2
	IL_0176:            Temp_16=A_1->Item;                                          //callvirt				System::Int32 System::Windows::Forms::LabelEditEventArgs::get_Item()
	IL_017b:            Temp_17=Temp_15[Temp_16];                                   //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_0180:            V_0=Temp_17;                                                //stloc.0
	IL_0181:                                                                        //ldc.i4				0x12
	IL_0186:            V_1=18;                                                     //stloc				V_1
	IL_018a:            /*goto IL_000b;*/goto IL_018f;                              //br				IL_000b
	IL_018f:                                                                        //ldarg.2
	IL_0190:            Temp_32=A_1->Label;                                         //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_0195:            if(Temp_32==nullptr)goto IL_0305;                           //brfalse				IL_0305
	IL_019a:                                                                        //ldc.i4				0x7
	IL_019f:            V_1=7;                                                      //stloc				V_1
	IL_01a3:            /*goto IL_000b;*/goto IL_01a8;                              //br				IL_000b
	IL_01a8:            goto IL_010e;                                               //br				IL_010e
	IL_01ad:                                                                        //ldc.i4				0x9
	IL_01b2:            V_1=9;                                                      //stloc				V_1
	IL_01b6:            /*goto IL_000b;*/goto IL_01bb;                              //br				IL_000b
	IL_01bb:                                                                        //ldarg.2
	IL_01bc:            Temp_11=A_1->Label;                                         //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_01c1:            if(Temp_11!=nullptr)goto IL_0331;                           //brtrue				IL_0331
	IL_01c6:                                                                        //ldc.i4				0x2
	IL_01cb:            V_1=2;                                                      //stloc				V_1
	IL_01cf:            /*goto IL_000b;*/goto IL_01d4;                              //br				IL_000b
	IL_01d4:            goto IL_0140;                                               //br				IL_0140
	IL_01d9:                                                                        //ldarg.0
	IL_01da:                                                                        //ldstr				L"\x672A\x4C2C\x4D2E\x5430\x5F32\x1534\x1036"
	IL_01df:                                                                        //ldloc				V_2
	IL_01e3:            Temp_18=a(L"\x672A\x4C2C\x4D2E\x5430\x5F32\x1534\x1036",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e8:                                                                        //ldloc.0
	IL_01e9:            Temp_19=V_0->Text;                                          //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_01ee:                                                                        //ldstr				L"\x0C2A\x0D2C\x4E2E\x5D30\x4132\x5034\x5636\x5D38\x423A\x1D3C\x5A3E\x3940\x2A42\x3644\x3346\x3A48\x654A"
	IL_01f3:                                                                        //ldloc				V_2
	IL_01f7:            Temp_20=a(L"\x0C2A\x0D2C\x4E2E\x5D30\x4132\x5034\x5636\x5D38\x423A\x1D3C\x5A3E\x3940\x2A42\x3644\x3346\x3A48\x654A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01fc:            Temp_21=System::String::Concat(Temp_18,Temp_19,Temp_20);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0201:                                                                        //ldstr				L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246"
	IL_0206:                                                                        //ldloc				V_2
	IL_020a:            Temp_22=a(L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_020f:            Temp_23=Root::T_x128::M_x1(Temp_22);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0214:                                                                        //ldc.i4.0
	IL_0215:                                                                        //ldc.i4.s				48
	IL_0217:            Temp_24=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(this),Temp_21,Temp_23,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_021c:                                                                        //pop
	IL_021d:                                                                        //ldarg.2
	IL_021e:                                                                        //ldc.i4.1
	IL_021f:            A_1->CancelEdit=true;                                       //callvirt				void System::Windows::Forms::LabelEditEventArgs::set_CancelEdit(System::Boolean)
	IL_0224:            goto IL_0227;                                               //br.s				IL_0227
	IL_0226:                                                                        //break
	IL_0227:                                                                        //ldc.i4				0xc
	IL_022c:            V_1=12;                                                     //stloc				V_1
	IL_0230:            /*goto IL_000b;*/goto IL_0235;                              //br				IL_000b
	IL_0235:            goto IL_0331;                                               //br				IL_0331
	IL_023a:                                                                        //ldc.i4				0x0
	IL_023f:            V_1=0;                                                      //stloc				V_1
	IL_0243:            /*goto IL_000b;*/goto IL_0248;                              //br				IL_000b
	IL_0248:                                                                        //ldarg.2
	IL_0249:            Temp_0=A_1->Label;                                          //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_024e:            Temp_1=Temp_0->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_0253:            if(Temp_1==0)goto IL_0098;                                  //brfalse				IL_0098
	IL_0258:                                                                        //ldc.i4				0x14
	IL_025d:            V_1=20;                                                     //stloc				V_1
	IL_0261:            /*goto IL_000b;*/goto IL_0266;                              //br				IL_000b
	IL_0266:            goto IL_00dd;                                               //br				IL_00dd
	IL_026b:                                                                        //ldarg.0
	IL_026c:                                                                        //ldstr				L"\x672A\x4C2C\x4D2E\x5430\x5F32\x1534\x1036"
	IL_0271:                                                                        //ldloc				V_2
	IL_0275:            Temp_25=a(L"\x672A\x4C2C\x4D2E\x5430\x5F32\x1534\x1036",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027a:                                                                        //ldarg.2
	IL_027b:            Temp_26=A_1->Label;                                         //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_0280:                                                                        //ldstr				L"\x0C2A\x0D2C\x4E2E\x5D30\x4132\x5034\x5636\x5D38\x423A\x1D3C\x5A3E\x3940\x2A42\x3644\x3346\x3A48\x654A"
	IL_0285:                                                                        //ldloc				V_2
	IL_0289:            Temp_27=a(L"\x0C2A\x0D2C\x4E2E\x5D30\x4132\x5034\x5636\x5D38\x423A\x1D3C\x5A3E\x3940\x2A42\x3644\x3346\x3A48\x654A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028e:            Temp_28=System::String::Concat(Temp_25,Temp_26,Temp_27);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0293:                                                                        //ldstr				L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246"
	IL_0298:                                                                        //ldloc				V_2
	IL_029c:            Temp_29=a(L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a1:            Temp_30=Root::T_x128::M_x1(Temp_29);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_02a6:                                                                        //ldc.i4.0
	IL_02a7:                                                                        //ldc.i4.s				48
	IL_02a9:            Temp_31=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(this),Temp_28,Temp_30,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_02ae:                                                                        //pop
	IL_02af:                                                                        //ldarg.2
	IL_02b0:                                                                        //ldc.i4.1
	IL_02b1:            A_1->CancelEdit=true;                                       //callvirt				void System::Windows::Forms::LabelEditEventArgs::set_CancelEdit(System::Boolean)
	IL_02b6:                                                                        //ldc.i4				0xd
	IL_02bb:            V_1=13;                                                     //stloc				V_1
	IL_02bf:            /*goto IL_000b;*/goto IL_02c4;                              //br				IL_000b
	IL_02c4:            goto IL_0305;                                               //br.s				IL_0305
	IL_02c6:                                                                        //ldc.i4				0x13
	IL_02cb:            V_1=19;                                                     //stloc				V_1
	IL_02cf:            /*goto IL_000b;*/goto IL_02d4;                              //br				IL_000b
	IL_02d4:                                                                        //ldarg.2
	IL_02d5:            Temp_33=A_1->Label;                                         //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_02da:                                                                        //ldstr				L"\x062A\x002C\x0F2E\x7530\x5632\x5334\x5636\x4C38\x573A\x493C\x1F3E\x6C40\x6E42"
	IL_02df:                                                                        //ldloc				V_2
	IL_02e3:            Temp_34=a(L"\x062A\x002C\x0F2E\x7530\x5632\x5334\x5636\x4C38\x573A\x493C\x1F3E\x6C40\x6E42",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e8:            Temp_35=(Temp_33 == Temp_34);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_02ed:            if(!Temp_35)goto IL_01ad;                                   //brfalse				IL_01ad
	IL_02f2:                                                                        //ldc.i4				0x4
	IL_02f7:            V_1=4;                                                      //stloc				V_1
	IL_02fb:            /*goto IL_000b;*/goto IL_0300;                              //br				IL_000b
	IL_0300:            goto IL_0098;                                               //br				IL_0098
	IL_0305:                                                                        //ldc.i4				0xa
	IL_030a:            V_1=10;                                                     //stloc				V_1
	IL_030e:            /*goto IL_000b;*/goto IL_0313;                              //br				IL_000b
	IL_0313:                                                                        //ldarg.2
	IL_0314:            Temp_12=A_1->Label;                                         //callvirt				System::String^ System::Windows::Forms::LabelEditEventArgs::get_Label()
	IL_0319:            if(Temp_12==nullptr)goto IL_01ad;                           //brfalse				IL_01ad
	IL_031e:                                                                        //ldc.i4				0xb
	IL_0323:            V_1=11;                                                     //stloc				V_1
	IL_0327:            /*goto IL_000b;*/goto IL_032c;                              //br				IL_000b
	IL_032c:            goto IL_023a;                                               //br				IL_023a
	IL_0331:            return;                                                     //ret

}
inline System::Boolean Root::T_x71::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Windows::Forms::ListView^ Temp_3 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_4 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Windows::Forms::ListViewItem^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0030;case 1:goto IL_007e;case 2:goto IL_008e;case 3:goto IL_0065;case 4:goto IL_0044;case 5:goto IL_00af;};//switch				(IL_0030,IL_007e,IL_008e,IL_0065,IL_0044,IL_00af)
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:            V_0=0;                                                      //stloc.0
	IL_0025:                                                                        //ldc.i4				0x0
	IL_002a:            V_2=0;                                                      //stloc				V_2
	IL_002e:            /*goto IL_0002;*/goto IL_0030;                              //br.s				IL_0002
	IL_0030:            goto IL_0033;                                               //br.s				IL_0033
	IL_0032:                                                                        //break
	IL_0033:            goto IL_0080;                                               //br.s				IL_0080
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0039:                                                                        //ldc.i4				0x4
	IL_003e:            V_2=4;                                                      //stloc				V_2
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:            goto IL_0080;                                               //br.s				IL_0080
	IL_0046:                                                                        //ldc.i4.1
	IL_0047:            return true;                                                //ret
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_3=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_004e:            Temp_4=Temp_3->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0053:                                                                        //ldloc.0
	IL_0054:            Temp_5=Temp_4[V_0];                                         //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_0059:            V_1=Temp_5;                                                 //stloc.1
	IL_005a:                                                                        //ldc.i4				0x3
	IL_005f:            V_2=3;                                                      //stloc				V_2
	IL_0063:            /*goto IL_0002;*/goto IL_0065;                              //br.s				IL_0002
	IL_0065:                                                                        //ldarg.1
	IL_0066:                                                                        //ldloc.1
	IL_0067:            Temp_6=V_1->Text;                                           //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_006c:            Temp_7=(A_0 == Temp_6);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0071:            if(!Temp_7)goto IL_0035;                                    //brfalse.s				IL_0035
	IL_0073:                                                                        //ldc.i4				0x1
	IL_0078:            V_2=1;                                                      //stloc				V_2
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_0046;                                               //br.s				IL_0046
	IL_0080:                                                                        //ldc.i4				0x2
	IL_0085:            V_2=2;                                                      //stloc				V_2
	IL_0089:            /*goto IL_0002;*/goto IL_008e;                              //br				IL_0002
	IL_008e:                                                                        //ldloc.0
	IL_008f:                                                                        //ldarg.0
	IL_0090:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0095:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_009a:            Temp_2=Temp_1->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_009f:            if(V_0<Temp_2)goto IL_0048;                                 //blt.s				IL_0048
	IL_00a1:                                                                        //ldc.i4				0x5
	IL_00a6:            V_2=5;                                                      //stloc				V_2
	IL_00aa:            /*goto IL_0002;*/goto IL_00af;                              //br				IL_0002
	IL_00af:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_00b1:                                                                        //ldc.i4.0
	IL_00b2:            return false;                                               //ret

}
inline System::Boolean Root::T_x71::M_x1(System::Windows::Forms::Keys A_0)
//System::Windows::Forms::Form^::ProcessDialogKey by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	//local variables.
	System::Windows::Forms::Keys V_0 = (System::Windows::Forms::Keys)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0044;case 1:goto IL_0063;case 2:goto IL_0088;case 3:goto IL_000b;case 4:goto IL_0078;case 5:goto IL_0053;};//switch				(IL_0044,IL_0063,IL_0088,IL_000b,IL_0078,IL_0053)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_1=this->F_x4;                                          //ldfld				System::Boolean Root::T_x71 F_x4
	IL_0034:            if(!Temp_1)goto IL_008a;                                    //brfalse.s				IL_008a
	IL_0036:            goto IL_0039;                                               //br.s				IL_0039
	IL_0038:                                                                        //break
	IL_0039:                                                                        //ldc.i4				0x0
	IL_003e:            V_1=0;                                                      //stloc				V_1
	IL_0042:            /*goto IL_000d;*/goto IL_0044;                              //br.s				IL_000d
	IL_0044:            goto IL_0065;                                               //br.s				IL_0065
	IL_0046:                                                                        //ldc.i4.0
	IL_0047:            return false;                                               //ret
	IL_0048:                                                                        //ldc.i4				0x5
	IL_004d:            V_1=5;                                                      //stloc				V_1
	IL_0051:            /*goto IL_000d;*/goto IL_0053;                              //br.s				IL_000d
	IL_0053:                                                                        //ldloc.0
	IL_0054:                                                                        //ldc.i4.s				27
	IL_0056:            if(safe_cast<System::Int32>(V_0)!=27)goto IL_008a;          //bne.un.s				IL_008a
	IL_0058:                                                                        //ldc.i4				0x1
	IL_005d:            V_1=1;                                                      //stloc				V_1
	IL_0061:            /*goto IL_000d;*/goto IL_0063;                              //br.s				IL_000d
	IL_0063:            goto IL_0046;                                               //br.s				IL_0046
	IL_0065:                                                                        //ldarg.1
	IL_0066:                                                                        //ldc.i4				0xffff
	IL_006b:                                                                        //and
	IL_006c:            V_0=safe_cast<System::Windows::Forms::Keys>((A_0 & safe_cast<System::Windows::Forms::Keys>(65535)));//stloc.0
	IL_006d:                                                                        //ldc.i4				0x4
	IL_0072:            V_1=4;                                                      //stloc				V_1
	IL_0076:            /*goto IL_000d;*/goto IL_0078;                              //br.s				IL_000d
	IL_0078:                                                                        //ldloc.0
	IL_0079:                                                                        //ldc.i4.s				13
	IL_007b:            if(safe_cast<System::Int32>(V_0)==13)goto IL_0046;          //beq.s				IL_0046
	IL_007d:                                                                        //ldc.i4				0x2
	IL_0082:            V_1=2;                                                      //stloc				V_1
	IL_0086:            /*goto IL_000d;*/goto IL_0088;                              //br.s				IL_000d
	IL_0088:            goto IL_0048;                                               //br.s				IL_0048
	IL_008a:                                                                        //ldarg.0
	IL_008b:                                                                        //ldarg.1
	IL_008c:            Temp_0=System::Windows::Forms::Form::ProcessDialogKey(A_0); //call				System::Boolean System::Windows::Forms::Form::ProcessDialogKey(System::Windows::Forms::Keys)
	IL_0091:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x71::M_x1(System::Windows::Forms::ListViewItem^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	System::Boolean V_1 = false;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0006:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_000b:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::ListViewItemCollection::GetEnumerator()
	IL_0010:            V_2=Temp_2;                                                 //stloc.2
	IL_0011:            /*goto IL_0015;*/goto IL_001401;                            //br.s				IL_0015
	IL_0013:                                                                        //ldc.i4.0
	IL_0014:            return false;                                               //ret
	IL_001401:          try{
	IL_0015:                                                                        //ldc.i4				0x5
	IL_001a:            V_4=5;                                                      //stloc				V_4
	IL_001e:            /*goto IL_0022;*/goto IL_0020;                              //br.s				IL_0022
	IL_0020:            goto IL_004f;                                               //br.s				IL_004f
	IL_0022:                                                                        //ldloc				V_4
	IL_0026:            switch(V_4){case 0:goto IL_00a9;case 1:goto IL_006f;case 2:goto IL_00bb;case 3:goto IL_005c;case 4:goto IL_0088;case 5:goto IL_0020;case 6:goto IL_00f3;case 7:goto IL_00ce;case 8:goto IL_00e3;};//switch				(IL_00a9,IL_006f,IL_00bb,IL_005c,IL_0088,IL_0020,IL_00f3,IL_00ce,IL_00e3)
	IL_004f:            goto IL_0051;                                               //br.s				IL_0051
	IL_0051:                                                                        //ldc.i4				0x3
	IL_0056:            V_4=3;                                                      //stloc				V_4
	IL_005a:            /*goto IL_0022;*/goto IL_005c;                              //br.s				IL_0022
	IL_005c:                                                                        //ldloc.2
	IL_005d:            Temp_3=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0062:            if(Temp_3)goto IL_0071;                                     //brtrue.s				IL_0071
	IL_0064:                                                                        //ldc.i4				0x1
	IL_0069:            V_4=1;                                                      //stloc				V_4
	IL_006d:            /*goto IL_0022;*/goto IL_006f;                              //br.s				IL_0022
	IL_006f:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_0071:                                                                        //ldloc.2
	IL_0072:            Temp_4=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0077:                                                                        //castclass				System::Windows::Forms::ListViewItem
	IL_007c:            V_0=safe_cast<System::Windows::Forms::ListViewItem^>(Temp_4);//stloc.0
	IL_007d:                                                                        //ldc.i4				0x4
	IL_0082:            V_4=4;                                                      //stloc				V_4
	IL_0086:            /*goto IL_0022;*/goto IL_0088;                              //br.s				IL_0022
	IL_0088:                                                                        //ldloc.0
	IL_0089:            Temp_5=V_0->Text;                                           //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_008e:                                                                        //ldarg.1
	IL_008f:            Temp_6=A_0->Text;                                           //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_0094:            Temp_7=(Temp_5 == Temp_6);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0099:            if(!Temp_7)goto IL_0051;                                    //brfalse.s				IL_0051
	IL_009b:                                                                        //ldc.i4				0x0
	IL_00a0:            V_4=0;                                                      //stloc				V_4
	IL_00a4:            /*goto IL_0022;*/goto IL_00a9;                              //br				IL_0022
	IL_00a9:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_00ab:                                                                        //ldc.i4.1
	IL_00ac:            V_1=true;                                                   //stloc.1
	IL_00ad:                                                                        //ldc.i4				0x2
	IL_00b2:            V_4=2;                                                      //stloc				V_4
	IL_00b6:            /*goto IL_0022;*/goto IL_00bb;                              //br				IL_0022
	IL_00bb:            goto IL_0145;                                               //leave				IL_0145
	IL_00c0:                                                                        //ldc.i4				0x7
	IL_00c5:            V_4=7;                                                      //stloc				V_4
	IL_00c9:            /*goto IL_0022;*/goto IL_00ce;                              //br				IL_0022
	IL_00ce:                                                                        //ldarg.1
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:            if(A_0==V_0)goto IL_0051;                                   //beq				IL_0051
	IL_00d5:                                                                        //ldc.i4				0x8
	IL_00da:            V_4=8;                                                      //stloc				V_4
	IL_00de:            /*goto IL_0022;*/goto IL_00e3;                              //br				IL_0022
	IL_00e3:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_00e5:                                                                        //ldc.i4				0x6
	IL_00ea:            V_4=6;                                                      //stloc				V_4
	IL_00ee:            /*goto IL_0022;*/goto IL_00f3;                              //br				IL_0022
	IL_00f3:            goto IL_0013;                                               //leave				IL_0013
	                    ;}
	                    finally{
	IL_00f8:            goto IL_010f;                                               //br.s				IL_010f
	IL_00fa:                                                                        //ldloc				V_5
	IL_00fe:            switch(V_5){case 0:goto IL_012f;case 1:goto IL_0142;case 2:goto IL_0121;};//switch				(IL_012f,IL_0142,IL_0121)
	IL_010f:                                                                        //ldloc.2
	IL_0110:                                                                        //isinst				System::IDisposable
	IL_0115:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_0116:                                                                        //ldc.i4				0x2
	IL_011b:            V_5=2;                                                      //stloc				V_5
	IL_011f:            /*goto IL_00fa;*/goto IL_0121;                              //br.s				IL_00fa
	IL_0121:                                                                        //ldloc.3
	IL_0122:            if(V_3==nullptr)goto IL_0144;                               //brfalse.s				IL_0144
	IL_0124:                                                                        //ldc.i4				0x0
	IL_0129:            V_5=0;                                                      //stloc				V_5
	IL_012d:            /*goto IL_00fa;*/goto IL_012f;                              //br.s				IL_00fa
	IL_012f:            goto IL_0131;                                               //br.s				IL_0131
	IL_0131:                                                                        //ldloc.3
	IL_0132:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0137:                                                                        //ldc.i4				0x1
	IL_013c:            V_5=1;                                                      //stloc				V_5
	IL_0140:            /*goto IL_00fa;*/goto IL_0142;                              //br.s				IL_00fa
	IL_0142:            goto IL_0144;                                               //br.s				IL_0144
	IL_0144:                                                                        //endfinally
	                    ;}
	IL_0145:                                                                        //ldc.i4.0
	IL_0146:                                                                        //dup
	IL_0147:                                                                        //dup
	IL_0148:                                                                        //ldc.i4.6
	IL_0149:                                                                        //add
	IL_014a:                                                                        //bgt				IL_0146
	IL_014f:                                                                        //pop
	IL_0150:                                                                        //ldloc.1
	IL_0151:            return V_1;                                                 //ret

}
inline void Root::T_x71::M_x1(Root::T_x99^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	Root::T_x99^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Windows::Forms::ListView^ Temp_9 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_10 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::String^ Temp_14 = nullptr;
	Root::T_x99^ Temp_15 = nullptr;
	Root::T_x98^ Temp_16 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_17 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_18 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_21 = nullptr;
	//local variables.
	Root::T_x98^ V_0 = nullptr;
	System::Windows::Forms::ListViewItem^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_6=2;                                                      //stloc				V_6
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            this->F_x2=A_0;                                             //stfld				Root::T_x99^ Root::T_x71 F_x2
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0016:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_001b:            Temp_1->Clear();                                            //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::Clear()
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x99^ Root::T_x71 F_x2
	IL_0026:            Temp_3=Temp_2->M_x12();                                     //callvirt				System::Collections::IEnumerator^ Root::T_x99::M_x12()
	IL_002b:            V_2=Temp_3;                                                 //stloc.2
	IL_002c:            /*goto IL_002e;*/goto IL_002C01;                            //br.s				IL_002e
	IL_002C01:          try{
	IL_002e:                                                                        //ldc.i4				0x1
	IL_0033:            V_4=1;                                                      //stloc				V_4
	IL_0037:            /*goto IL_003b;*/goto IL_0039;                              //br.s				IL_003b
	IL_0039:            goto IL_0064;                                               //br.s				IL_0064
	IL_003b:                                                                        //ldloc				V_4
	IL_003f:            switch(V_4){case 0:goto IL_0132;case 1:goto IL_0039;case 2:goto IL_014b;case 3:goto IL_0086;case 4:goto IL_015b;case 5:goto IL_010b;case 6:goto IL_0122;case 7:goto IL_00ef;};//switch				(IL_0132,IL_0039,IL_014b,IL_0086,IL_015b,IL_010b,IL_0122,IL_00ef)
	IL_0064:            goto IL_0124;                                               //br				IL_0124
	IL_0069:                                                                        //ldloc.2
	IL_006a:            Temp_5=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006f:                                                                        //castclass				Root::T_x98
	IL_0074:            V_0=safe_cast<Root::T_x98^>(Temp_5);                        //stloc.0
	IL_0075:            Temp_6=gcnew System::Windows::Forms::ListViewItem();        //newobj				void System::Windows::Forms::ListViewItem::.ctor()
	IL_007a:            V_1=Temp_6;                                                 //stloc.1
	IL_007b:                                                                        //ldc.i4				0x3
	IL_0080:            V_4=3;                                                      //stloc				V_4
	IL_0084:            /*goto IL_003b;*/goto IL_0086;                              //br.s				IL_003b
	IL_0086:                                                                        //ldloc.1
	IL_0087:                                                                        //ldloc.0
	IL_0088:            Temp_7=V_0->M_x2();                                         //callvirt				System::String^ Root::T_x98::M_x2()
	IL_008d:            Temp_19=V_1;if(Temp_7==nullptr)goto IL_00a8;                //brfalse.s				IL_00a8
	IL_008f:            goto IL_0091;                                               //br.s				IL_0091
	IL_0091:                                                                        //ldloc.0
	IL_0092:            Temp_12=V_0->M_x2();                                        //callvirt				System::String^ Root::T_x98::M_x2()
	IL_0097:            Temp_13=Temp_12->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_009c:            if(Temp_13==0)goto IL_00a8;                                 //brfalse.s				IL_00a8
	IL_009e:            goto IL_00a0;                                               //br.s				IL_00a0
	IL_00a0:                                                                        //ldloc.0
	IL_00a1:            Temp_14=V_0->M_x2();                                        //callvirt				System::String^ Root::T_x98::M_x2()
	IL_00a6:            Temp_21=Temp_19;Temp_20=Temp_14;goto IL_00b8;               //br.s				IL_00b8
	IL_00a8:            /*warning ! semantic stack doesn't empty at joint !;*/      //ldstr				L"\x0D1F\x0F21\x0423\x6225\x4D27\x4C29\x4D2B\x5B2D\x5C2F\x4631\x1433\x1B35\x1537"
	IL_00ad:                                                                        //ldloc				V_6
	IL_00b1:            Temp_8=a(L"\x0D1F\x0F21\x0423\x6225\x4D27\x4C29\x4D2B\x5B2D\x5C2F\x4631\x1433\x1B35\x1537",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b6:            Temp_21=Temp_19;Temp_20=Temp_8;goto IL_00b8;                //br.s				IL_00b8
	IL_00b8:            Temp_21->Text=Temp_20;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_00bd:                                                                        //ldloc.1
	IL_00be:                                                                        //ldloc.0
	IL_00bf:            V_1->Tag=safe_cast<System::Object^>(V_0);                   //callvirt				void System::Windows::Forms::ListViewItem::set_Tag(System::Object^)
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:            Temp_9=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00ca:            Temp_10=Temp_9->Items;                                      //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_00cf:                                                                        //ldloc.1
	IL_00d0:            Temp_11=Temp_10->Add(V_1);                                  //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_00d5:                                                                        //pop
	IL_00d6:                                                                        //ldc.i4.2
	IL_00d7:                                                                        //dup
	IL_00d8:                                                                        //dup
	IL_00d9:                                                                        //ldc.i4.4
	IL_00da:                                                                        //sub
	IL_00db:                                                                        //blt				IL_00d7
	IL_00e0:                                                                        //pop
	IL_00e1:                                                                        //ldc.i4				0x7
	IL_00e6:            V_4=7;                                                      //stloc				V_4
	IL_00ea:            /*goto IL_003b;*/goto IL_00ef;                              //br				IL_003b
	IL_00ef:                                                                        //ldloc.0
	IL_00f0:                                                                        //ldarg.0
	IL_00f1:            Temp_15=this->F_x2;                                         //ldfld				Root::T_x99^ Root::T_x71 F_x2
	IL_00f6:            Temp_16=Temp_15->M_x13();                                   //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_00fb:            if(V_0!=Temp_16)goto IL_0124;                               //bne.un.s				IL_0124
	IL_00fd:                                                                        //ldc.i4				0x5
	IL_0102:            V_4=5;                                                      //stloc				V_4
	IL_0106:            /*goto IL_003b;*/goto IL_010b;                              //br				IL_003b
	IL_010b:            goto IL_010d;                                               //br.s				IL_010d
	IL_010d:                                                                        //ldloc.1
	IL_010e:                                                                        //ldc.i4.1
	IL_010f:            V_1->Selected=true;                                         //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_0114:                                                                        //ldc.i4				0x6
	IL_0119:            V_4=6;                                                      //stloc				V_4
	IL_011d:            /*goto IL_003b;*/goto IL_0122;                              //br				IL_003b
	IL_0122:            goto IL_0124;                                               //br.s				IL_0124
	IL_0124:                                                                        //ldc.i4				0x0
	IL_0129:            V_4=0;                                                      //stloc				V_4
	IL_012d:            /*goto IL_003b;*/goto IL_0132;                              //br				IL_003b
	IL_0132:                                                                        //ldloc.2
	IL_0133:            Temp_4=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0138:            if(Temp_4)goto IL_0069;                                     //brtrue				IL_0069
	IL_013d:                                                                        //ldc.i4				0x2
	IL_0142:            V_4=2;                                                      //stloc				V_4
	IL_0146:            /*goto IL_003b;*/goto IL_014b;                              //br				IL_003b
	IL_014b:            goto IL_014d;                                               //br.s				IL_014d
	IL_014d:                                                                        //ldc.i4				0x4
	IL_0152:            V_4=4;                                                      //stloc				V_4
	IL_0156:            /*goto IL_003b;*/goto IL_015b;                              //br				IL_003b
	IL_015b:            goto IL_01aa;                                               //leave.s				IL_01aa
	                    ;}
	                    finally{
	IL_015d:            goto IL_0174;                                               //br.s				IL_0174
	IL_015f:                                                                        //ldloc				V_5
	IL_0163:            switch(V_5){case 0:goto IL_0186;case 1:goto IL_01a7;case 2:goto IL_0194;};//switch				(IL_0186,IL_01a7,IL_0194)
	IL_0174:                                                                        //ldloc.2
	IL_0175:                                                                        //isinst				System::IDisposable
	IL_017a:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_017b:                                                                        //ldc.i4				0x0
	IL_0180:            V_5=0;                                                      //stloc				V_5
	IL_0184:            /*goto IL_015f;*/goto IL_0186;                              //br.s				IL_015f
	IL_0186:                                                                        //ldloc.3
	IL_0187:            if(V_3==nullptr)goto IL_01a9;                               //brfalse.s				IL_01a9
	IL_0189:                                                                        //ldc.i4				0x2
	IL_018e:            V_5=2;                                                      //stloc				V_5
	IL_0192:            /*goto IL_015f;*/goto IL_0194;                              //br.s				IL_015f
	IL_0194:            goto IL_0196;                                               //br.s				IL_0196
	IL_0196:                                                                        //ldloc.3
	IL_0197:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_019c:                                                                        //ldc.i4				0x1
	IL_01a1:            V_5=1;                                                      //stloc				V_5
	IL_01a5:            /*goto IL_015f;*/goto IL_01a7;                              //br.s				IL_015f
	IL_01a7:            goto IL_01a9;                                               //br.s				IL_01a9
	IL_01a9:                                                                        //endfinally
	                    ;}
	IL_01aa:            return;                                                     //ret

}
inline void Root::T_x71::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListViewItem^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Root::T_x98^ Temp_2 = nullptr;
	System::Windows::Forms::ListView^ Temp_3 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_4 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_5 = nullptr;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew System::Windows::Forms::ListViewItem();        //newobj				void System::Windows::Forms::ListViewItem::.ctor()
	IL_0010:            V_0=Temp_0;                                                 //stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_1=this->M_x1();                                        //call				System::String^ Root::T_x71::M_x1()
	IL_0018:            V_0->Text=Temp_1;                                           //callvirt				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_001d:                                                                        //ldloc.0
	IL_001e:            Temp_2=gcnew Root::T_x98();                                 //newobj				void Root::T_x98::.ctor()
	IL_0023:            V_0->Tag=safe_cast<System::Object^>(Temp_2);                //callvirt				void System::Windows::Forms::ListViewItem::set_Tag(System::Object^)
	IL_0028:                                                                        //ldloc.0
	IL_0029:                                                                        //ldc.i4.1
	IL_002a:            V_0->Selected=true;                                         //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_3=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0035:            Temp_4=Temp_3->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_003a:                                                                        //ldloc.0
	IL_003b:            Temp_5=Temp_4->Add(V_0);                                    //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_0040:                                                                        //pop
	IL_0041:                                                                        //ldloc.0
	IL_0042:            V_0->BeginEdit();                                           //callvirt				void System::Windows::Forms::ListViewItem::BeginEdit()
	IL_0047:            return;                                                     //ret

}
inline void Root::T_x71::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Object^ Temp_1 = nullptr;
	System::Windows::Forms::ListView^ Temp_2 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_4 = nullptr;
	System::Windows::Forms::ListView^ Temp_5 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_6 = nullptr;
	System::Collections::IEnumerator^ Temp_7 = nullptr;
	System::Windows::Forms::ListView^ Temp_8 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Windows::Forms::ListView^ Temp_11 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_12 = nullptr;
	System::Windows::Forms::ListView^ Temp_13 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_14 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_15 = nullptr;
	System::Windows::Forms::ListView^ Temp_16 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_3=6;                                                      //stloc				V_3
	IL_0009:            /*goto IL_0018;*/goto IL_000b;                              //br.s				IL_0018
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:            goto IL_0041;                                               //br.s				IL_0041
	IL_0018:                                                                        //ldloc				V_3
	IL_001c:            switch(V_3){case 0:goto IL_0211;case 1:goto IL_0061;case 2:goto IL_0195;case 3:goto IL_01a5;case 4:goto IL_01ed;case 5:goto IL_0177;case 6:goto IL_000b;case 7:goto IL_01c6;};//switch				(IL_0211,IL_0061,IL_0195,IL_01a5,IL_01ed,IL_0177,IL_000b,IL_01c6)
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_16=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0047:            Temp_17=Temp_16->SelectedItems;                             //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_004c:            Temp_18=Temp_17->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0051:            if(Temp_18!=0)goto IL_0169;                                 //brtrue				IL_0169
	IL_0056:                                                                        //ldc.i4				0x1
	IL_005b:            V_3=1;                                                      //stloc				V_3
	IL_005f:            /*goto IL_0018;*/goto IL_0061;                              //br.s				IL_0018
	IL_0061:            goto IL_0197;                                               //br				IL_0197
	IL_006101:          try{
	IL_0066:                                                                        //ldc.i4				0x4
	IL_006b:            V_3=4;                                                      //stloc				V_3
	IL_006f:            /*goto IL_0073;*/goto IL_0071;                              //br.s				IL_0073
	IL_0071:            goto IL_0098;                                               //br.s				IL_0098
	IL_0073:                                                                        //ldloc				V_3
	IL_0077:            switch(V_3){case 0:goto IL_0107;case 1:goto IL_00a5;case 2:goto IL_00b8;case 3:goto IL_00cc;case 4:goto IL_0071;case 5:goto IL_00e5;case 6:goto IL_0117;};//switch				(IL_0107,IL_00a5,IL_00b8,IL_00cc,IL_0071,IL_00e5,IL_0117)
	IL_0098:            goto IL_009a;                                               //br.s				IL_009a
	IL_009a:                                                                        //ldc.i4				0x1
	IL_009f:            V_3=1;                                                      //stloc				V_3
	IL_00a3:            /*goto IL_0073;*/goto IL_00a5;                              //br.s				IL_0073
	IL_00a5:                                                                        //ldloc.1
	IL_00a6:            Temp_0=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00ab:            if(Temp_0)goto IL_00ce;                                     //brtrue.s				IL_00ce
	IL_00ad:                                                                        //ldc.i4				0x2
	IL_00b2:            V_3=2;                                                      //stloc				V_3
	IL_00b6:            /*goto IL_0073;*/goto IL_00b8;                              //br.s				IL_0073
	IL_00b8:            goto IL_0109;                                               //br.s				IL_0109
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:                                                                        //ldc.i4.1
	IL_00bc:            V_0->Focused=true;                                          //callvirt				void System::Windows::Forms::ListViewItem::set_Focused(System::Boolean)
	IL_00c1:                                                                        //ldc.i4				0x3
	IL_00c6:            V_3=3;                                                      //stloc				V_3
	IL_00ca:            /*goto IL_0073;*/goto IL_00cc;                              //br.s				IL_0073
	IL_00cc:            goto IL_009a;                                               //br.s				IL_009a
	IL_00ce:                                                                        //ldloc.1
	IL_00cf:            Temp_1=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00d4:                                                                        //castclass				System::Windows::Forms::ListViewItem
	IL_00d9:            V_0=safe_cast<System::Windows::Forms::ListViewItem^>(Temp_1);//stloc.0
	IL_00da:                                                                        //ldc.i4				0x5
	IL_00df:            V_3=5;                                                      //stloc				V_3
	IL_00e3:            /*goto IL_0073;*/goto IL_00e5;                              //br.s				IL_0073
	IL_00e5:                                                                        //ldloc.0
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:            Temp_2=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00ec:            Temp_3=Temp_2->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_00f1:                                                                        //ldc.i4.0
	IL_00f2:            Temp_4=Temp_3[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_00f7:            if(V_0!=Temp_4)goto IL_009a;                                //bne.un.s				IL_009a
	IL_00f9:                                                                        //ldc.i4				0x0
	IL_00fe:            V_3=0;                                                      //stloc				V_3
	IL_0102:            /*goto IL_0073;*/goto IL_0107;                              //br				IL_0073
	IL_0107:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0109:                                                                        //ldc.i4				0x6
	IL_010e:            V_3=6;                                                      //stloc				V_3
	IL_0112:            /*goto IL_0073;*/goto IL_0117;                              //br				IL_0073
	IL_0117:            goto IL_0216;                                               //leave				IL_0216
	                    ;}
	                    finally{
	IL_011c:            goto IL_0133;                                               //br.s				IL_0133
	IL_011e:                                                                        //ldloc				V_3
	IL_0122:            switch(V_3){case 0:goto IL_0153;case 1:goto IL_0145;case 2:goto IL_0166;};//switch				(IL_0153,IL_0145,IL_0166)
	IL_0133:                                                                        //ldloc.1
	IL_0134:                                                                        //isinst				System::IDisposable
	IL_0139:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_013a:                                                                        //ldc.i4				0x1
	IL_013f:            V_3=1;                                                      //stloc				V_3
	IL_0143:            /*goto IL_011e;*/goto IL_0145;                              //br.s				IL_011e
	IL_0145:                                                                        //ldloc.2
	IL_0146:            if(V_2==nullptr)goto IL_0168;                               //brfalse.s				IL_0168
	IL_0148:                                                                        //ldc.i4				0x0
	IL_014d:            V_3=0;                                                      //stloc				V_3
	IL_0151:            /*goto IL_011e;*/goto IL_0153;                              //br.s				IL_011e
	IL_0153:            goto IL_0155;                                               //br.s				IL_0155
	IL_0155:                                                                        //ldloc.2
	IL_0156:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_015b:                                                                        //ldc.i4				0x2
	IL_0160:            V_3=2;                                                      //stloc				V_3
	IL_0164:            /*goto IL_011e;*/goto IL_0166;                              //br.s				IL_011e
	IL_0166:            goto IL_0168;                                               //br.s				IL_0168
	IL_0168:                                                                        //endfinally
	                    ;}
	IL_0169:                                                                        //ldc.i4				0x5
	IL_016e:            V_3=5;                                                      //stloc				V_3
	IL_0172:            /*goto IL_0018;*/goto IL_0177;                              //br				IL_0018
	IL_0177:                                                                        //ldarg.0
	IL_0178:            Temp_11=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_017d:            Temp_12=Temp_11->FocusedItem;                               //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::get_FocusedItem()
	IL_0182:            if(Temp_12!=nullptr)goto IL_0216;                           //brtrue				IL_0216
	IL_0187:                                                                        //ldc.i4				0x2
	IL_018c:            V_3=2;                                                      //stloc				V_3
	IL_0190:            /*goto IL_0018;*/goto IL_0195;                              //br				IL_0018
	IL_0195:            goto IL_01f2;                                               //br.s				IL_01f2
	IL_0197:                                                                        //ldc.i4				0x3
	IL_019c:            V_3=3;                                                      //stloc				V_3
	IL_01a0:            /*goto IL_0018;*/goto IL_01a5;                              //br				IL_0018
	IL_01a5:                                                                        //ldarg.0
	IL_01a6:            Temp_8=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01ab:            Temp_9=Temp_8->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_01b0:            Temp_10=Temp_9->Count;                                      //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_01b5:                                                                        //ldc.i4.0
	IL_01b6:            if(Temp_10<=0)goto IL_0169;                                 //ble.s				IL_0169
	IL_01b8:                                                                        //ldc.i4				0x7
	IL_01bd:            V_3=7;                                                      //stloc				V_3
	IL_01c1:            /*goto IL_0018;*/goto IL_01c6;                              //br				IL_0018
	IL_01c6:            goto IL_01c8;                                               //br.s				IL_01c8
	IL_01c8:                                                                        //ldarg.0
	IL_01c9:            Temp_13=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01ce:            Temp_14=Temp_13->Items;                                     //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_01d3:                                                                        //ldc.i4.0
	IL_01d4:            Temp_15=Temp_14[safe_cast<System::Int32>(0)];               //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_01d9:                                                                        //ldc.i4.1
	IL_01da:            Temp_15->Selected=true;                                     //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_01df:                                                                        //ldc.i4				0x4
	IL_01e4:            V_3=4;                                                      //stloc				V_3
	IL_01e8:            /*goto IL_0018;*/goto IL_01ed;                              //br				IL_0018
	IL_01ed:            goto IL_0169;                                               //br				IL_0169
	IL_01f2:                                                                        //ldarg.0
	IL_01f3:            Temp_5=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_01f8:            Temp_6=Temp_5->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_01fd:            Temp_7=Temp_6->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::ListViewItemCollection::GetEnumerator()
	IL_0202:            V_1=Temp_7;                                                 //stloc.1
	IL_0203:                                                                        //ldc.i4				0x0
	IL_0208:            V_3=0;                                                      //stloc				V_3
	IL_020c:            /*goto IL_0018;*/goto IL_0211;                              //br				IL_0018
	IL_0211:            /*goto IL_0066;*/goto IL_006101;                            //br				IL_0066
	IL_0216:            return;                                                     //ret

}
inline void Root::T_x71::M_x12(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Label^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Text=A_0;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_000c:            return;                                                     //ret

}
inline System::Boolean Root::T_x71::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				System::Boolean Root::T_x71 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x71::M_x13(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x2();                                               //call				void Root::T_x71::M_x2()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x71::M_x13(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::IButtonControl^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->AcceptButton;                                  //call				System::Windows::Forms::IButtonControl^ System::Windows::Forms::Form::get_AcceptButton()
	IL_0006:                                                                        //isinst				System::Windows::Forms::Button
	IL_000b:                                                                        //ldarg.1
	IL_000c:            dynamic_cast<System::Windows::Forms::Button^>(Temp_0)->Text=A_0;//callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0011:            return;                                                     //ret

}
inline void Root::T_x71::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_2 = nullptr;
	System::Windows::Forms::ListView^ Temp_3 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Windows::Forms::ListView^ Temp_6 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::DialogResult Temp_10 = (System::Windows::Forms::DialogResult)0;
	System::Windows::Forms::ListView^ Temp_11 = nullptr;
	System::Windows::Forms::ListView::SelectedIndexCollection^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Globalization::CultureInfo^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	array<System::Object^>^ Temp_16 = nullptr;
	System::Windows::Forms::ListView^ Temp_17 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_18 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Windows::Forms::ListView^ Temp_22 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	System::Windows::Forms::ListView^ Temp_25 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_26 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_27 = nullptr;
	System::Windows::Forms::ListView^ Temp_28 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_29 = nullptr;
	System::Int32 Temp_30 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::String^ V_1 = nullptr;
	array<System::Object^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_4=1;                                                      //stloc				V_4
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_3=2;                                                      //stloc				V_3
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0043;                                               //br.s				IL_0043
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            switch(V_3){case 0:goto IL_0166;case 1:goto IL_00b0;case 2:goto IL_0014;case 3:goto IL_0187;case 4:goto IL_013d;case 5:goto IL_01a8;case 6:goto IL_010c;case 7:goto IL_0067;case 8:goto IL_008c;};//switch				(IL_0166,IL_00b0,IL_0014,IL_0187,IL_013d,IL_01a8,IL_010c,IL_0067,IL_008c)
	IL_0043:            goto IL_0046;                                               //br.s				IL_0046
	IL_0045:                                                                        //break
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_28=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_004c:            Temp_29=Temp_28->SelectedItems;                             //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0051:            Temp_30=Temp_29->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0056:                                                                        //ldc.i4.1
	IL_0057:            if(Temp_30!=1)goto IL_01ad;                                 //bne.un				IL_01ad
	IL_005c:                                                                        //ldc.i4				0x7
	IL_0061:            V_3=7;                                                      //stloc				V_3
	IL_0065:            /*goto IL_0016;*/goto IL_0067;                              //br.s				IL_0016
	IL_0067:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_006f:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0074:                                                                        //ldloc.0
	IL_0075:            Temp_2=Temp_1[V_0];                                         //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_007a:                                                                        //ldc.i4.1
	IL_007b:            Temp_2->Selected=true;                                      //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_0080:            return;                                                     //ret
	IL_0081:                                                                        //ldc.i4				0x8
	IL_0086:            V_3=8;                                                      //stloc				V_3
	IL_008a:            /*goto IL_0016;*/goto IL_008c;                              //br.s				IL_0016
	IL_008c:                                                                        //ldloc.0
	IL_008d:                                                                        //ldarg.0
	IL_008e:            Temp_22=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0093:            Temp_23=Temp_22->Items;                                     //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0098:            Temp_24=Temp_23->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_009d:            if(V_0>=Temp_24)goto IL_013f;                               //bge				IL_013f
	IL_00a2:                                                                        //ldc.i4				0x1
	IL_00a7:            V_3=1;                                                      //stloc				V_3
	IL_00ab:            /*goto IL_0016;*/goto IL_00b0;                              //br				IL_0016
	IL_00b0:            goto IL_0069;                                               //br.s				IL_0069
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:            Temp_11=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00b8:            Temp_12=Temp_11->SelectedIndices;                           //callvirt				System::Windows::Forms::ListView::SelectedIndexCollection^ System::Windows::Forms::ListView::get_SelectedIndices()
	IL_00bd:                                                                        //ldc.i4.0
	IL_00be:            Temp_13=Temp_12[safe_cast<System::Int32>(0)];               //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedIndexCollection::get_Item(System::Int32)
	IL_00c3:            V_0=Temp_13;                                                //stloc.0
	IL_00c4:            Temp_14=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00c9:                                                                        //ldstr				L"\x5B1E\x4E20\x0322\x5C24\x4826\x5C28\x0B2A\x5A2C\x4E2E\x5F30\x4732\x1534\x4336\x5638\x1B3A\x4F3C\x5A3E\x2C40\x2C42\x3344\x2246\x6948\x6C4A\x364C\x7F4E\x2C50\x7452\x6A54"
	IL_00ce:                                                                        //ldloc				V_4
	IL_00d2:            Temp_15=a(L"\x5B1E\x4E20\x0322\x5C24\x4826\x5C28\x0B2A\x5A2C\x4E2E\x5F30\x4732\x1534\x4336\x5638\x1B3A\x4F3C\x5A3E\x2C40\x2C42\x3344\x2246\x6948\x6C4A\x364C\x7F4E\x2C50\x7452\x6A54",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d7:                                                                        //ldc.i4.1
	IL_00d8:            Temp_16=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_00dd:            V_2=Temp_16;                                                //stloc.2
	IL_00de:                                                                        //ldloc.2
	IL_00df:                                                                        //ldc.i4.0
	IL_00e0:                                                                        //ldarg.0
	IL_00e1:            Temp_17=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_00e6:            Temp_18=Temp_17->Items;                                     //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_00eb:                                                                        //ldloc.0
	IL_00ec:            Temp_19=Temp_18[V_0];                                       //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_00f1:            Temp_20=Temp_19->Text;                                      //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_00f6:            V_2[0]=safe_cast<System::Object^>(Temp_20);                 //stelem.ref
	IL_00f7:                                                                        //ldloc.2
	IL_00f8:            Temp_21=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_14),Temp_15,V_2);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00fd:            V_1=Temp_21;                                                //stloc.1
	IL_00fe:                                                                        //ldc.i4				0x6
	IL_0103:            V_3=6;                                                      //stloc				V_3
	IL_0107:            /*goto IL_0016;*/goto IL_010c;                              //br				IL_0016
	IL_010c:                                                                        //ldarg.0
	IL_010d:                                                                        //ldloc.1
	IL_010e:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x7B34\x5636\x5438\x5E3A"
	IL_0113:                                                                        //ldloc				V_4
	IL_0117:            Temp_8=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x7B34\x5636\x5438\x5E3A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011c:            Temp_9=Root::T_x128::M_x1(Temp_8);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0121:                                                                        //ldc.i4.4
	IL_0122:                                                                        //ldc.i4.s				48
	IL_0124:            Temp_10=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(this),V_1,Temp_9,safe_cast<System::Windows::Forms::MessageBoxButtons>(4),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0129:                                                                        //ldc.i4.6
	IL_012a:            if(safe_cast<System::Int32>(Temp_10)!=6)goto IL_01ad;       //bne.un				IL_01ad
	IL_012f:                                                                        //ldc.i4				0x4
	IL_0134:            V_3=4;                                                      //stloc				V_3
	IL_0138:            /*goto IL_0016;*/goto IL_013d;                              //br				IL_0016
	IL_013d:            goto IL_0168;                                               //br.s				IL_0168
	IL_013f:                                                                        //ldarg.0
	IL_0140:            Temp_25=this->F_x12;                                        //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0145:            Temp_26=Temp_25->Items;                                     //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_014a:                                                                        //ldloc.0
	IL_014b:                                                                        //ldc.i4.1
	IL_014c:                                                                        //sub
	IL_014d:            Temp_27=Temp_26[(V_0 - 1)];                                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_0152:                                                                        //ldc.i4.1
	IL_0153:            Temp_27->Selected=true;                                     //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_0158:                                                                        //ldc.i4				0x0
	IL_015d:            V_3=0;                                                      //stloc				V_3
	IL_0161:            /*goto IL_0016;*/goto IL_0166;                              //br				IL_0016
	IL_0166:            goto IL_01ad;                                               //br.s				IL_01ad
	IL_0168:                                                                        //ldarg.0
	IL_0169:            Temp_6=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_016e:            Temp_7=Temp_6->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0173:                                                                        //ldloc.0
	IL_0174:            Temp_7->RemoveAt(V_0);                                      //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::RemoveAt(System::Int32)
	IL_0179:                                                                        //ldc.i4				0x3
	IL_017e:            V_3=3;                                                      //stloc				V_3
	IL_0182:            /*goto IL_0016;*/goto IL_0187;                              //br				IL_0016
	IL_0187:                                                                        //ldarg.0
	IL_0188:            Temp_3=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_018d:            Temp_4=Temp_3->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0192:            Temp_5=Temp_4->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_0197:                                                                        //ldc.i4.0
	IL_0198:            if(Temp_5<=0)goto IL_01ad;                                  //ble.s				IL_01ad
	IL_019a:                                                                        //ldc.i4				0x5
	IL_019f:            V_3=5;                                                      //stloc				V_3
	IL_01a3:            /*goto IL_0016;*/goto IL_01a8;                              //br				IL_0016
	IL_01a8:            goto IL_0081;                                               //br				IL_0081
	IL_01ad:            return;                                                     //ret

}
inline void Root::T_x71::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
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
inline void Root::T_x71::M_x2(System::Object^ A_0,System::Windows::Forms::LabelEditEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Windows::Forms::ListViewItem^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_0012:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0017:                                                                        //ldarg.2
	IL_0018:            Temp_2=A_1->Item;                                           //callvirt				System::Int32 System::Windows::Forms::LabelEditEventArgs::get_Item()
	IL_001d:            Temp_3=Temp_1[Temp_2];                                      //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_0022:            Temp_4=Temp_3->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_0027:                                                                        //ldstr				L"\x0F21\x0923\x0625\x6C27\x4F29\x4A2B\x4F2D\x452F\x5E31\x4033\x1635\x1537\x1739"
	IL_002c:                                                                        //ldloc				V_0
	IL_0030:            Temp_5=a(L"\x0F21\x0923\x0625\x6C27\x4F29\x4A2B\x4F2D\x452F\x5E31\x4033\x1635\x1537\x1739",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0035:            Temp_6=(Temp_4 == Temp_5);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_003a:            if(!Temp_6)goto IL_0046;                                    //brfalse.s				IL_0046
	IL_003c:            goto IL_003e;                                               //br.s				IL_003e
	IL_003e:                                                                        //ldarg.2
	IL_003f:                                                                        //ldc.i4.1
	IL_0040:            A_1->CancelEdit=true;                                       //callvirt				void System::Windows::Forms::LabelEditEventArgs::set_CancelEdit(System::Boolean)
	IL_0045:            return;                                                     //ret
	IL_0046:                                                                        //ldarg.0
	IL_0047:                                                                        //ldc.i4.1
	IL_0048:            this->F_x4=true;                                            //stfld				System::Boolean Root::T_x71 F_x4
	IL_004d:            return;                                                     //ret

}
inline void Root::T_x71::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::IButtonControl^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->CancelButton;                                  //call				System::Windows::Forms::IButtonControl^ System::Windows::Forms::Form::get_CancelButton()
	IL_0006:                                                                        //isinst				System::Windows::Forms::Button
	IL_000b:                                                                        //ldarg.1
	IL_000c:            dynamic_cast<System::Windows::Forms::Button^>(Temp_0)->Text=A_0;//callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0011:            return;                                                     //ret

}
inline System::String^ Root::T_x71::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::IButtonControl^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->CancelButton;                                  //call				System::Windows::Forms::IButtonControl^ System::Windows::Forms::Form::get_CancelButton()
	IL_0006:                                                                        //isinst				System::Windows::Forms::Button
	IL_000b:            Temp_1=dynamic_cast<System::Windows::Forms::Button^>(Temp_0)->Text;//callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_0010:            return Temp_1;                                              //ret

}
inline Root::T_x99^ Root::T_x71::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x99^ Temp_0 = nullptr;
	System::Windows::Forms::ListView^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Root::T_x99^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	Root::T_x99^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Object^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	Root::T_x99^ Temp_15 = nullptr;
	Root::T_x98^ Temp_16 = nullptr;
	Root::T_x98^ Temp_17 = nullptr;
	Root::T_x98^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	Root::T_x98^ Temp_20 = nullptr;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	Root::T_x98^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_6=17;                                                     //stloc				V_6
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x99^ Root::T_x71 F_x2
	IL_000f:            Temp_0->M_x2();                                             //callvirt				void Root::T_x99::M_x2()
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_1=this->F_x12;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x71 F_x12
	IL_001a:            Temp_2=Temp_1->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_001f:            Temp_3=Temp_2->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::ListViewItemCollection::GetEnumerator()
	IL_0024:            V_2=Temp_3;                                                 //stloc.2
	IL_0025:            /*goto IL_0027;*/goto IL_002501;                            //br.s				IL_0027
	IL_002501:          try{
	IL_0027:                                                                        //ldc.i4				0x3
	IL_002c:            V_4=3;                                                      //stloc				V_4
	IL_0030:            /*goto IL_0034;*/goto IL_0032;                              //br.s				IL_0034
	IL_0032:            goto IL_005d;                                               //br.s				IL_005d
	IL_0034:                                                                        //ldloc				V_4
	IL_0038:            switch(V_4){case 0:goto IL_010d;case 1:goto IL_00e4;case 2:goto IL_00c8;case 3:goto IL_0032;case 4:goto IL_0126;case 5:goto IL_0082;case 6:goto IL_0136;case 7:goto IL_00b2;};//switch				(IL_010d,IL_00e4,IL_00c8,IL_0032,IL_0126,IL_0082,IL_0136,IL_00b2)
	IL_005d:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_005f:                                                                        //ldloc.2
	IL_0060:            Temp_13=V_2->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0065:                                                                        //castclass				System::Windows::Forms::ListViewItem
	IL_006a:            V_0=safe_cast<System::Windows::Forms::ListViewItem^>(Temp_13);//stloc.0
	IL_006b:                                                                        //ldloc.0
	IL_006c:            Temp_14=V_0->Tag;                                           //callvirt				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0071:                                                                        //castclass				Root::T_x98
	IL_0076:            V_1=safe_cast<Root::T_x98^>(Temp_14);                       //stloc.1
	IL_0077:                                                                        //ldc.i4				0x5
	IL_007c:            V_4=5;                                                      //stloc				V_4
	IL_0080:            /*goto IL_0034;*/goto IL_0082;                              //br.s				IL_0034
	IL_0082:                                                                        //ldloc.1
	IL_0083:                                                                        //ldloc.0
	IL_0084:            Temp_6=V_0->Text;                                           //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_0089:                                                                        //ldstr				L"\x022E\x1C30\x1332\x7134\x5236\x5F38\x5A3A\x483C\x533E\x3540\x6342\x6844\x6A46"
	IL_008e:                                                                        //ldloc				V_6
	IL_0092:            Temp_7=a(L"\x022E\x1C30\x1332\x7134\x5236\x5F38\x5A3A\x483C\x533E\x3540\x6342\x6844\x6A46",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0097:            Temp_8=(Temp_6 == Temp_7);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_009c:            Temp_17=V_1;if(Temp_8)goto IL_00a0;                         //brtrue.s				IL_00a0
	IL_009e:            Temp_18=Temp_17;goto IL_00e6;                               //br.s				IL_00e6
	IL_00a0:            Temp_9=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00a5:            Temp_20=Temp_17;Temp_19=Temp_9;goto IL_00ee;                //br.s				IL_00ee
	IL_00a7:                                                                        //ldc.i4				0x7
	IL_00ac:            V_4=7;                                                      //stloc				V_4
	IL_00b0:            /*goto IL_0034;*/goto IL_00b2;                              //br.s				IL_0034
	IL_00b2:                                                                        //ldloc.2
	IL_00b3:            Temp_12=V_2->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00b8:            if(Temp_12)goto IL_005f;                                    //brtrue.s				IL_005f
	IL_00ba:                                                                        //ldc.i4				0x2
	IL_00bf:            V_4=2;                                                      //stloc				V_4
	IL_00c3:            /*goto IL_0034;*/goto IL_00c8;                              //br				IL_0034
	IL_00c8:            goto IL_0128;                                               //br.s				IL_0128
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:            Temp_5=this->F_x2;                                          //ldfld				Root::T_x99^ Root::T_x71 F_x2
	IL_00d0:                                                                        //ldloc.1
	IL_00d1:            Temp_5->M_x1(V_1);                                          //callvirt				void Root::T_x99::M_x1(Root::T_x98^)
	IL_00d6:                                                                        //ldc.i4				0x1
	IL_00db:            V_4=1;                                                      //stloc				V_4
	IL_00df:            /*goto IL_0034;*/goto IL_00e4;                              //br				IL_0034
	IL_00e4:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_00e6:                                                                        //ldloc.0
	IL_00e7:            Temp_11=V_0->Text;                                          //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_00ec:            Temp_20=Temp_18;Temp_19=Temp_11;goto IL_00ee;               //br.s				IL_00ee
	IL_00ee:            Temp_20->M_x1(Temp_19);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Root::T_x98::M_x1(System::String^)
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:            Temp_10=this->F_x2;                                         //ldfld				Root::T_x99^ Root::T_x71 F_x2
	IL_00f9:                                                                        //ldloc.1
	IL_00fa:            Temp_10->M_x2(V_1);                                         //callvirt				void Root::T_x99::M_x2(Root::T_x98^)
	IL_00ff:                                                                        //ldc.i4				0x0
	IL_0104:            V_4=0;                                                      //stloc				V_4
	IL_0108:            /*goto IL_0034;*/goto IL_010d;                              //br				IL_0034
	IL_010d:            goto IL_0110;                                               //br.s				IL_0110
	IL_010f:                                                                        //break
	IL_0110:                                                                        //ldloc.0
	IL_0111:            Temp_4=V_0->Selected;                                       //callvirt				System::Boolean System::Windows::Forms::ListViewItem::get_Selected()
	IL_0116:            if(!Temp_4)goto IL_00a7;                                    //brfalse.s				IL_00a7
	IL_0118:                                                                        //ldc.i4				0x4
	IL_011d:            V_4=4;                                                      //stloc				V_4
	IL_0121:            /*goto IL_0034;*/goto IL_0126;                              //br				IL_0034
	IL_0126:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_0128:                                                                        //ldc.i4				0x6
	IL_012d:            V_4=6;                                                      //stloc				V_4
	IL_0131:            /*goto IL_0034;*/goto IL_0136;                              //br				IL_0034
	IL_0136:            goto IL_0185;                                               //leave.s				IL_0185
	                    ;}
	                    finally{
	IL_0138:            goto IL_014f;                                               //br.s				IL_014f
	IL_013a:                                                                        //ldloc				V_5
	IL_013e:            switch(V_5){case 0:goto IL_0182;case 1:goto IL_0161;case 2:goto IL_016f;};//switch				(IL_0182,IL_0161,IL_016f)
	IL_014f:                                                                        //ldloc.2
	IL_0150:                                                                        //isinst				System::IDisposable
	IL_0155:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_0156:                                                                        //ldc.i4				0x1
	IL_015b:            V_5=1;                                                      //stloc				V_5
	IL_015f:            /*goto IL_013a;*/goto IL_0161;                              //br.s				IL_013a
	IL_0161:                                                                        //ldloc.3
	IL_0162:            if(V_3==nullptr)goto IL_0184;                               //brfalse.s				IL_0184
	IL_0164:                                                                        //ldc.i4				0x2
	IL_0169:            V_5=2;                                                      //stloc				V_5
	IL_016d:            /*goto IL_013a;*/goto IL_016f;                              //br.s				IL_013a
	IL_016f:            goto IL_0171;                                               //br.s				IL_0171
	IL_0171:                                                                        //ldloc.3
	IL_0172:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0177:                                                                        //ldc.i4				0x0
	IL_017c:            V_5=0;                                                      //stloc				V_5
	IL_0180:            /*goto IL_013a;*/goto IL_0182;                              //br.s				IL_013a
	IL_0182:            goto IL_0184;                                               //br.s				IL_0184
	IL_0184:                                                                        //endfinally
	                    ;}
	IL_0185:                                                                        //ldarg.0
	IL_0186:            Temp_15=this->F_x2;                                         //ldfld				Root::T_x99^ Root::T_x71 F_x2
	IL_018b:            return Temp_15;                                             //ret

}
inline System::String^ Root::T_x71::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::IButtonControl^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->AcceptButton;                                  //call				System::Windows::Forms::IButtonControl^ System::Windows::Forms::Form::get_AcceptButton()
	IL_0006:                                                                        //isinst				System::Windows::Forms::Button
	IL_000b:            Temp_1=dynamic_cast<System::Windows::Forms::Button^>(Temp_0)->Text;//callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_0010:            return Temp_1;                                              //ret

}
inline void Root::T_x71::M_x8(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x12();                                              //call				void Root::T_x71::M_x12()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x71::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Label^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x71 F_x13
	IL_0006:            Temp_1=Temp_0->Text;                                        //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_000b:            return Temp_1;                                              //ret

}
