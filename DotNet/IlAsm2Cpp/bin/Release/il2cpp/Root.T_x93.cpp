#include "global_xref.h"

inline Root::T_x93::T_x93()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::Button^ Temp_1 = nullptr;
	System::Windows::Forms::Button^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Drawing::Size Temp_4;
	System::Windows::Forms::Button^ Temp_5 = nullptr;
	System::Drawing::Point Temp_6;
	System::String^ Temp_7 = nullptr;
	System::Drawing::Size Temp_8;
	System::Windows::Forms::Control::ControlCollection^ Temp_9 = nullptr;
	System::Windows::Forms::Button^ Temp_10 = nullptr;
	System::Windows::Forms::Button^ Temp_11 = nullptr;
	System::Drawing::Point Temp_12;
	System::Windows::Forms::Button^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Windows::Forms::Button^ Temp_15 = nullptr;
	System::Drawing::Size Temp_16;
	System::Windows::Forms::Button^ Temp_17 = nullptr;
	System::Windows::Forms::Button^ Temp_18 = nullptr;
	System::EventHandler^ Temp_19 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_20 = nullptr;
	System::Windows::Forms::Button^ Temp_21 = nullptr;
	System::Windows::Forms::Button^ Temp_22 = nullptr;
	System::Windows::Forms::Button^ Temp_23 = nullptr;
	System::Windows::Forms::Button^ Temp_24 = nullptr;
	System::Drawing::Point Temp_25;
	System::Windows::Forms::Button^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Windows::Forms::Button^ Temp_28 = nullptr;
	System::Drawing::Size Temp_29;
	System::Windows::Forms::Button^ Temp_30 = nullptr;
	System::Windows::Forms::Button^ Temp_31 = nullptr;
	System::EventHandler^ Temp_32 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_33 = nullptr;
	System::Windows::Forms::Button^ Temp_34 = nullptr;
	System::Windows::Forms::Label^ Temp_35 = nullptr;
	System::Drawing::Point Temp_36;
	System::String^ Temp_37 = nullptr;
	System::Drawing::Size Temp_38;
	System::Windows::Forms::Control::ControlCollection^ Temp_39 = nullptr;
	array<System::Windows::Forms::ColumnHeader^>^ Temp_40 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::Windows::Forms::ListView^ Temp_45 = nullptr;
	System::Windows::Forms::ListView^ Temp_46 = nullptr;
	System::Windows::Forms::ListView^ Temp_47 = nullptr;
	System::Drawing::Point Temp_48;
	System::Windows::Forms::ListView^ Temp_49 = nullptr;
	System::Drawing::Size Temp_50;
	System::Windows::Forms::ListView^ Temp_51 = nullptr;
	System::Windows::Forms::ListView^ Temp_52 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_53 = nullptr;
	System::Windows::Forms::ListView^ Temp_54 = nullptr;
	System::Windows::Forms::ListView^ Temp_55 = nullptr;
	System::Windows::Forms::ListView^ Temp_56 = nullptr;
	System::EventHandler^ Temp_57 = nullptr;
	System::Windows::Forms::ListView^ Temp_58 = nullptr;
	System::EventHandler^ Temp_59 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_60 = nullptr;
	System::Windows::Forms::ListView^ Temp_61 = nullptr;
	//local variables.
	System::Windows::Forms::Button^ V_0 = nullptr;
	System::Windows::Forms::Label^ V_1 = nullptr;
	array<System::Windows::Forms::ColumnHeader^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_3=10;                                                     //stloc				V_3
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldnull
	IL_000b:            this->F_x1=safe_cast<Root::T_x95^>(nullptr);                //stfld				Root::T_x95^ Root::T_x93 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_0=gcnew System::Windows::Forms::ListView();            //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_0016:            this->F_x2=Temp_0;                                          //stfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_1=gcnew System::Windows::Forms::Button();              //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0021:            this->F_x12=Temp_1;                                         //stfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_2=gcnew System::Windows::Forms::Button();              //newobj				void System::Windows::Forms::Button::.ctor()
	IL_002c:            this->F_x13=Temp_2;                                         //stfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_0031:                                                                        //ldarg.0
	IL_0032:            /*Root::T_x66();*/                                          //call				void Root::T_x66::.ctor()
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldstr				L"\x6927\x4E29\x482B\x032D\x792F\x5C31\x4733"
	IL_003d:                                                                        //ldloc				V_3
	IL_0041:            Temp_3=a(L"\x6927\x4E29\x482B\x032D\x792F\x5C31\x4733",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0046:            this->Text=Temp_3;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldc.i4				0x186
	IL_0051:                                                                        //ldc.i4				0x102
	IL_0056:            Temp_4=System::Drawing::Size(safe_cast<System::Int32>(390),safe_cast<System::Int32>(258));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_005b:            this->ClientSize=Temp_4;                                    //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_0060:            Temp_5=gcnew System::Windows::Forms::Button();              //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0065:            V_0=Temp_5;                                                 //stloc.0
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldc.i4.3
	IL_0068:            V_0->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_006d:                                                                        //ldloc.0
	IL_006e:                                                                        //ldc.i4				0x12e
	IL_0073:                                                                        //ldc.i4.s				24
	IL_0075:            Temp_6=System::Drawing::Point(safe_cast<System::Int32>(302),safe_cast<System::Int32>(24));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_007a:            V_0->Location=Temp_6;                                       //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_007f:                                                                        //ldloc.0
	IL_0080:                                                                        //ldstr				L"\x0E27\x6929\x402B\x412D\x432F\x5731"
	IL_0085:                                                                        //ldloc				V_3
	IL_0089:            Temp_7=a(L"\x0E27\x6929\x402B\x412D\x432F\x5731",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008e:            V_0->Text=Temp_7;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0093:                                                                        //ldloc.0
	IL_0094:                                                                        //ldc.i4.s				75
	IL_0096:                                                                        //ldc.i4.s				23
	IL_0098:            Temp_8=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_009d:            V_0->Size=Temp_8;                                           //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_00a2:                                                                        //ldloc.0
	IL_00a3:                                                                        //ldc.i4.0
	IL_00a4:            V_0->TabIndex=0;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_00a9:                                                                        //ldloc.0
	IL_00aa:                                                                        //ldc.i4.1
	IL_00ab:            V_0->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(1);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:            Temp_9=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_00b6:                                                                        //ldloc.0
	IL_00b7:            Temp_9->Add(safe_cast<System::Windows::Forms::Control^>(V_0));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:                                                                        //ldloc.0
	IL_00be:            this->AcceptButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_0);//call				void System::Windows::Forms::Form::set_AcceptButton(System::Windows::Forms::IButtonControl^)
	IL_00c3:                                                                        //ldarg.0
	IL_00c4:                                                                        //ldloc.0
	IL_00c5:            this->CancelButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_0);//call				void System::Windows::Forms::Form::set_CancelButton(System::Windows::Forms::IButtonControl^)
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:            Temp_10=this->F_x12;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_00d0:                                                                        //ldc.i4.3
	IL_00d1:            Temp_10->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:            Temp_11=this->F_x12;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_00dc:                                                                        //ldc.i4				0x12e
	IL_00e1:                                                                        //ldc.i4.s				56
	IL_00e3:            Temp_12=System::Drawing::Point(safe_cast<System::Int32>(302),safe_cast<System::Int32>(56));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_00e8:            Temp_11->Location=Temp_12;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_00ed:                                                                        //ldarg.0
	IL_00ee:            Temp_13=this->F_x12;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_00f3:                                                                        //ldstr				L"\x0E27\x6B29\x482B\x4A2D\x1E2F\x1C31\x1A33"
	IL_00f8:                                                                        //ldloc				V_3
	IL_00fc:            Temp_14=a(L"\x0E27\x6B29\x482B\x4A2D\x1E2F\x1C31\x1A33",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0101:            Temp_13->Text=Temp_14;                                      //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0106:                                                                        //ldarg.0
	IL_0107:            Temp_15=this->F_x12;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_010c:                                                                        //ldc.i4.s				75
	IL_010e:                                                                        //ldc.i4.s				23
	IL_0110:            Temp_16=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0115:            Temp_15->Size=Temp_16;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_011a:                                                                        //ldarg.0
	IL_011b:            Temp_17=this->F_x12;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_0120:                                                                        //ldc.i4.1
	IL_0121:            Temp_17->TabIndex=1;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_0126:                                                                        //ldarg.0
	IL_0127:            Temp_18=this->F_x12;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_012c:                                                                        //ldarg.0
	IL_012d:                                                                        //ldftn				void Root::T_x93::M_x13(System::Object^,System::EventArgs^)
	IL_0133:            Temp_19=gcnew System::EventHandler(this,&Root::T_x93::M_x13);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0138:            Temp_18->Click += Temp_19;                                  //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_013d:                                                                        //ldarg.0
	IL_013e:            Temp_20=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0143:                                                                        //ldarg.0
	IL_0144:            Temp_21=this->F_x12;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x12
	IL_0149:            Temp_20->Add(safe_cast<System::Windows::Forms::Control^>(Temp_21));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_014e:            Temp_22=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0153:                                                                        //pop
	IL_0154:                                                                        //ldarg.0
	IL_0155:            Temp_23=this->F_x13;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_015a:                                                                        //ldc.i4.3
	IL_015b:            Temp_23->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0160:                                                                        //ldarg.0
	IL_0161:            Temp_24=this->F_x13;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_0166:                                                                        //ldc.i4				0x12e
	IL_016b:                                                                        //ldc.i4.s				88
	IL_016d:            Temp_25=System::Drawing::Point(safe_cast<System::Int32>(302),safe_cast<System::Int32>(88));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0172:            Temp_24->Location=Temp_25;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0177:                                                                        //ldarg.0
	IL_0178:            Temp_26=this->F_x13;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_017d:                                                                        //ldstr				L"\x0E27\x7829\x492B\x432D\x5F2F\x4431\x5133"
	IL_0182:                                                                        //ldloc				V_3
	IL_0186:            Temp_27=a(L"\x0E27\x7829\x492B\x432D\x5F2F\x4431\x5133",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018b:            Temp_26->Text=Temp_27;                                      //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0190:                                                                        //ldarg.0
	IL_0191:            Temp_28=this->F_x13;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_0196:                                                                        //ldc.i4.s				75
	IL_0198:                                                                        //ldc.i4.s				23
	IL_019a:            Temp_29=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_019f:            Temp_28->Size=Temp_29;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_01a4:                                                                        //ldarg.0
	IL_01a5:            Temp_30=this->F_x13;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_01aa:                                                                        //ldc.i4.2
	IL_01ab:            Temp_30->TabIndex=2;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_01b0:                                                                        //ldarg.0
	IL_01b1:            Temp_31=this->F_x13;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_01b6:                                                                        //ldarg.0
	IL_01b7:                                                                        //ldftn				void Root::T_x93::M_x12(System::Object^,System::EventArgs^)
	IL_01bd:            Temp_32=gcnew System::EventHandler(this,&Root::T_x93::M_x12);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_01c2:            Temp_31->Click += Temp_32;                                  //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_01c7:                                                                        //ldarg.0
	IL_01c8:            Temp_33=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_01cd:                                                                        //ldarg.0
	IL_01ce:            Temp_34=this->F_x13;                                        //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_01d3:            Temp_33->Add(safe_cast<System::Windows::Forms::Control^>(Temp_34));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_01d8:            Temp_35=gcnew System::Windows::Forms::Label();              //newobj				void System::Windows::Forms::Label::.ctor()
	IL_01dd:            V_1=Temp_35;                                                //stloc.1
	IL_01de:                                                                        //ldloc.1
	IL_01df:                                                                        //ldc.i4.3
	IL_01e0:            V_1->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_01e5:                                                                        //ldloc.1
	IL_01e6:                                                                        //ldc.i4.8
	IL_01e7:                                                                        //ldc.i4.8
	IL_01e8:            Temp_36=System::Drawing::Point(safe_cast<System::Int32>(8),safe_cast<System::Int32>(8));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_01ed:            V_1->Location=Temp_36;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_01f2:                                                                        //ldloc.1
	IL_01f3:                                                                        //ldstr				L"\x6927\x4E29\x482B\x032D\x792F\x5C31\x4733\x1635\x5937\x4C39\x5D3B\x573D\x2C3F\x2341\x2643\x2A45\x2D47\x7049"
	IL_01f8:                                                                        //ldloc				V_3
	IL_01fc:            Temp_37=a(L"\x6927\x4E29\x482B\x032D\x792F\x5C31\x4733\x1635\x5937\x4C39\x5D3B\x573D\x2C3F\x2341\x2643\x2A45\x2D47\x7049",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0201:            V_1->Text=Temp_37;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0206:                                                                        //ldloc.1
	IL_0207:                                                                        //ldc.i4.s				100
	IL_0209:                                                                        //ldc.i4.s				16
	IL_020b:            Temp_38=System::Drawing::Size(safe_cast<System::Int32>(100),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0210:            V_1->Size=Temp_38;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0215:                                                                        //ldarg.0
	IL_0216:            Temp_39=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_021b:                                                                        //ldloc.1
	IL_021c:            Temp_39->Add(safe_cast<System::Windows::Forms::Control^>(V_1));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0221:                                                                        //ldc.i4.2
	IL_0222:            Temp_40=gcnew array<System::Windows::Forms::ColumnHeader^>(2);//newarr				System::Windows::Forms::ColumnHeader
	IL_0227:            V_2=Temp_40;                                                //stloc.2
	IL_0228:                                                                        //ldloc.2
	IL_0229:                                                                        //ldc.i4.0
	IL_022a:            Temp_41=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_022f:            V_2[0]=Temp_41;                                             //stelem.ref
	IL_0230:                                                                        //ldloc.2
	IL_0231:                                                                        //ldc.i4.0
	IL_0232:                                                                        //ldelem.ref
	IL_0233:                                                                        //ldstr				L"\x6627\x4B29\x412B\x4B2D"
	IL_0238:                                                                        //ldloc				V_3
	IL_023c:            Temp_42=a(L"\x6627\x4B29\x412B\x4B2D",V_3);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0241:            V_2[0]->Text=Temp_42;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0246:                                                                        //ldloc.2
	IL_0247:                                                                        //ldc.i4.0
	IL_0248:                                                                        //ldelem.ref
	IL_0249:                                                                        //ldc.i4				0xc8
	IL_024e:            V_2[0]->Width=200;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_0253:                                                                        //ldloc.2
	IL_0254:                                                                        //ldc.i4.1
	IL_0255:            Temp_43=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_025a:            V_2[1]=Temp_43;                                             //stelem.ref
	IL_025b:                                                                        //ldloc.2
	IL_025c:                                                                        //ldc.i4.1
	IL_025d:                                                                        //ldelem.ref
	IL_025e:                                                                        //ldstr				L"\x6427\x4529\x4F2B\x4F2D\x442F\x5B31\x5B33\x5835"
	IL_0263:                                                                        //ldloc				V_3
	IL_0267:            Temp_44=a(L"\x6427\x4529\x4F2B\x4F2D\x442F\x5B31\x5B33\x5835",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_026c:            V_2[1]->Text=Temp_44;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0271:                                                                        //ldloc.2
	IL_0272:                                                                        //ldc.i4.1
	IL_0273:                                                                        //ldelem.ref
	IL_0274:                                                                        //ldc.i4				0x1f4
	IL_0279:            V_2[1]->Width=500;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_027e:                                                                        //ldarg.0
	IL_027f:            Temp_45=gcnew System::Windows::Forms::ListView();           //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_0284:            this->F_x2=Temp_45;                                         //stfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0289:                                                                        //ldarg.0
	IL_028a:            Temp_46=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_028f:                                                                        //ldc.i4.0
	IL_0290:            Temp_46->TabIndex=0;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_0295:                                                                        //ldarg.0
	IL_0296:            Temp_47=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_029b:                                                                        //ldc.i4.8
	IL_029c:                                                                        //ldc.i4.s				24
	IL_029e:            Temp_48=System::Drawing::Point(safe_cast<System::Int32>(8),safe_cast<System::Int32>(24));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_02a3:            Temp_47->Location=Temp_48;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_02a8:                                                                        //ldarg.0
	IL_02a9:            Temp_49=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_02ae:                                                                        //ldc.i4				0x11e
	IL_02b3:                                                                        //ldc.i4				0xe2
	IL_02b8:            Temp_50=System::Drawing::Size(safe_cast<System::Int32>(286),safe_cast<System::Int32>(226));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_02bd:            Temp_49->Size=Temp_50;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_02c2:                                                                        //ldarg.0
	IL_02c3:            Temp_51=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_02c8:                                                                        //ldc.i4.1
	IL_02c9:            Temp_51->View=safe_cast<System::Windows::Forms::View>(1);   //callvirt				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_02ce:                                                                        //ldarg.0
	IL_02cf:            Temp_52=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_02d4:            Temp_53=Temp_52->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_02d9:                                                                        //ldloc.2
	IL_02da:            Temp_53->AddRange(V_2);                                     //callvirt				void System::Windows::Forms::ListView::ColumnHeaderCollection::AddRange(array<System::Windows::Forms::ColumnHeader^>^)
	IL_02df:                                                                        //ldarg.0
	IL_02e0:            Temp_54=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_02e5:                                                                        //ldc.i4.0
	IL_02e6:            Temp_54->MultiSelect=false;                                 //callvirt				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_02eb:                                                                        //ldarg.0
	IL_02ec:            Temp_55=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_02f1:                                                                        //ldc.i4.1
	IL_02f2:            Temp_55->FullRowSelect=true;                                //callvirt				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_02f7:                                                                        //ldarg.0
	IL_02f8:            Temp_56=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_02fd:                                                                        //ldarg.0
	IL_02fe:                                                                        //ldftn				void Root::T_x93::M_x2(System::Object^,System::EventArgs^)
	IL_0304:            Temp_57=gcnew System::EventHandler(this,&Root::T_x93::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0309:            Temp_56->GotFocus += Temp_57;                               //callvirt				void System::Windows::Forms::Control::add_GotFocus(System::EventHandler^)
	IL_030e:                                                                        //ldarg.0
	IL_030f:            Temp_58=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0314:                                                                        //ldarg.0
	IL_0315:                                                                        //ldftn				void Root::T_x93::M_x1(System::Object^,System::EventArgs^)
	IL_031b:            Temp_59=gcnew System::EventHandler(this,&Root::T_x93::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0320:            Temp_58->SelectedIndexChanged += Temp_59;                   //callvirt				void System::Windows::Forms::ListView::add_SelectedIndexChanged(System::EventHandler^)
	IL_0325:                                                                        //ldarg.0
	IL_0326:            Temp_60=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_032b:                                                                        //ldarg.0
	IL_032c:            Temp_61=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0331:            Temp_60->Add(safe_cast<System::Windows::Forms::Control^>(Temp_61));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0336:            return;                                                     //ret

}
inline void Root::T_x93::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	Root::T_x95^ Temp_2 = nullptr;
	Root::T_x56^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Root::T_x93::T_x1^ Temp_7 = nullptr;
	System::Windows::Forms::ListView^ Temp_8 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_9 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_10 = nullptr;
	//local variables.
	Root::T_x90^ V_0 = nullptr;
	Root::T_x93::T_x1^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0006:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_000b:            Temp_1->Clear();                                            //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::Clear()
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x95^ Root::T_x93 F_x1
	IL_0016:            Temp_3=Temp_2->M_x1();                                      //callvirt				Root::T_x56^ Root::T_x95::M_x1()
	IL_001b:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0020:            V_2=Temp_4;                                                 //stloc.2
	IL_0021:            /*goto IL_0023;*/goto IL_002101;                            //br.s				IL_0023
	IL_002101:          try{
	IL_0023:                                                                        //ldc.i4				0x0
	IL_0028:            V_4=0;                                                      //stloc				V_4
	IL_002c:            /*goto IL_0030;*/goto IL_002e;                              //br.s				IL_0030
	IL_002e:            goto IL_004d;                                               //br.s				IL_004d
	IL_0030:                                                                        //ldloc				V_4
	IL_0034:            switch(V_4){case 0:goto IL_002e;case 1:goto IL_00a8;case 2:goto IL_00b8;case 3:goto IL_0088;case 4:goto IL_0095;};//switch				(IL_002e,IL_00a8,IL_00b8,IL_0088,IL_0095)
	IL_004d:            goto IL_008a;                                               //br.s				IL_008a
	IL_004f:                                                                        //ldloc.2
	IL_0050:            Temp_6=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0055:                                                                        //castclass				Root::T_x90
	IL_005a:            V_0=safe_cast<Root::T_x90^>(Temp_6);                        //stloc.0
	IL_005b:            Temp_7=gcnew Root::T_x93::T_x1();                           //newobj				void Root::T_x93::T_x1::.ctor()
	IL_0060:            V_1=Temp_7;                                                 //stloc.1
	IL_0061:                                                                        //ldloc.1
	IL_0062:                                                                        //ldloc.0
	IL_0063:            V_1->M_x1(V_0);                                             //callvirt				void Root::T_x93::T_x1::M_x1(Root::T_x90^)
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_8=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_006e:            Temp_9=Temp_8->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0073:                                                                        //ldloc.1
	IL_0074:            Temp_10=Temp_9->Add(safe_cast<System::Windows::Forms::ListViewItem^>(V_1));//callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_0079:                                                                        //pop
	IL_007a:            goto IL_007d;                                               //br.s				IL_007d
	IL_007c:                                                                        //break
	IL_007d:                                                                        //ldc.i4				0x3
	IL_0082:            V_4=3;                                                      //stloc				V_4
	IL_0086:            /*goto IL_0030;*/goto IL_0088;                              //br.s				IL_0030
	IL_0088:            goto IL_008a;                                               //br.s				IL_008a
	IL_008a:                                                                        //ldc.i4				0x4
	IL_008f:            V_4=4;                                                      //stloc				V_4
	IL_0093:            /*goto IL_0030;*/goto IL_0095;                              //br.s				IL_0030
	IL_0095:                                                                        //ldloc.2
	IL_0096:            Temp_5=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_009b:            if(Temp_5)goto IL_004f;                                     //brtrue.s				IL_004f
	IL_009d:                                                                        //ldc.i4				0x1
	IL_00a2:            V_4=1;                                                      //stloc				V_4
	IL_00a6:            /*goto IL_0030;*/goto IL_00a8;                              //br.s				IL_0030
	IL_00a8:            goto IL_00aa;                                               //br.s				IL_00aa
	IL_00aa:                                                                        //ldc.i4				0x2
	IL_00af:            V_4=2;                                                      //stloc				V_4
	IL_00b3:            /*goto IL_0030;*/goto IL_00b8;                              //br				IL_0030
	IL_00b8:            goto IL_0107;                                               //leave.s				IL_0107
	                    ;}
	                    finally{
	IL_00ba:            goto IL_00d1;                                               //br.s				IL_00d1
	IL_00bc:                                                                        //ldloc				V_5
	IL_00c0:            switch(V_5){case 0:goto IL_00f1;case 1:goto IL_0104;case 2:goto IL_00e3;};//switch				(IL_00f1,IL_0104,IL_00e3)
	IL_00d1:                                                                        //ldloc.2
	IL_00d2:                                                                        //isinst				System::IDisposable
	IL_00d7:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00d8:                                                                        //ldc.i4				0x2
	IL_00dd:            V_5=2;                                                      //stloc				V_5
	IL_00e1:            /*goto IL_00bc;*/goto IL_00e3;                              //br.s				IL_00bc
	IL_00e3:                                                                        //ldloc.3
	IL_00e4:            if(V_3==nullptr)goto IL_0106;                               //brfalse.s				IL_0106
	IL_00e6:                                                                        //ldc.i4				0x0
	IL_00eb:            V_5=0;                                                      //stloc				V_5
	IL_00ef:            /*goto IL_00bc;*/goto IL_00f1;                              //br.s				IL_00bc
	IL_00f1:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00f3:                                                                        //ldloc.3
	IL_00f4:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00f9:                                                                        //ldc.i4				0x1
	IL_00fe:            V_5=1;                                                      //stloc				V_5
	IL_0102:            /*goto IL_00bc;*/goto IL_0104;                              //br.s				IL_00bc
	IL_0104:            goto IL_0106;                                               //br.s				IL_0106
	IL_0106:                                                                        //endfinally
	                    ;}
	IL_0107:            return;                                                     //ret

}
inline void Root::T_x93::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Button^ Temp_0 = nullptr;
	System::Windows::Forms::ListView^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::Button^ Root::T_x93 F_x13
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_1=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_000f:            Temp_2=Temp_1->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0014:            Temp_3=Temp_2->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0019:                                                                        //ldc.i4.0
	IL_001a:                                                                        //ceq
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:                                                                        //ceq
	IL_001f:            Temp_0->Enabled=((Temp_3 == 0) == false);                   //callvirt				void System::Windows::Forms::Control::set_Enabled(System::Boolean)
	IL_0024:            return;                                                     //ret

}
inline void Root::T_x93::M_x1(Root::T_x95^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Root::T_x95^ Root::T_x93 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->M_x1();                                               //call				void Root::T_x93::M_x1()
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x93::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Object^ Temp_1 = nullptr;
	Root::T_x95^ Temp_2 = nullptr;
	Root::T_x90^ Temp_3 = nullptr;
	System::Windows::Forms::ListView^ Temp_4 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_5 = nullptr;
	System::Collections::IEnumerator^ Temp_6 = nullptr;
	System::Windows::Forms::ListView^ Temp_7 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	//local variables.
	Root::T_x93::T_x1^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_3=2;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_0164;case 1:goto IL_0140;case 2:goto IL_000b;case 3:goto IL_0046;};//switch				(IL_0164,IL_0140,IL_000b,IL_0046)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_7=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_002c:            Temp_8=Temp_7->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0031:            Temp_9=Temp_8->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0036:            if(Temp_9==0)goto IL_0166;                                  //brfalse				IL_0166
	IL_003b:                                                                        //ldc.i4				0x3
	IL_0040:            V_3=3;                                                      //stloc				V_3
	IL_0044:            /*goto IL_000d;*/goto IL_0046;                              //br.s				IL_000d
	IL_0046:            goto IL_0121;                                               //br				IL_0121
	IL_004601:          try{
	IL_004b:                                                                        //ldc.i4				0x0
	IL_0050:            V_3=0;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0058;*/goto IL_0056;                              //br.s				IL_0058
	IL_0056:            goto IL_0075;                                               //br.s				IL_0075
	IL_0058:                                                                        //ldloc				V_3
	IL_005c:            switch(V_3){case 0:goto IL_0056;case 1:goto IL_00c5;case 2:goto IL_00a5;case 3:goto IL_00b2;case 4:goto IL_00d2;};//switch				(IL_0056,IL_00c5,IL_00a5,IL_00b2,IL_00d2)
	IL_0075:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_0077:                                                                        //ldloc.1
	IL_0078:            Temp_1=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_007d:                                                                        //castclass				Root::T_x93::T_x1
	IL_0082:            V_0=safe_cast<Root::T_x93::T_x1^>(Temp_1);                  //stloc.0
	IL_0083:                                                                        //ldarg.0
	IL_0084:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x95^ Root::T_x93 F_x1
	IL_0089:                                                                        //ldloc.0
	IL_008a:            Temp_3=V_0->M_x1();                                         //callvirt				Root::T_x90^ Root::T_x93::T_x1::M_x1()
	IL_008f:            Temp_2->M_x1(Temp_3);                                       //callvirt				void Root::T_x95::M_x1(Root::T_x90^)
	IL_0094:                                                                        //ldloc.0
	IL_0095:            V_0->Remove();                                              //callvirt				void System::Windows::Forms::ListViewItem::Remove()
	IL_009a:                                                                        //ldc.i4				0x2
	IL_009f:            V_3=2;                                                      //stloc				V_3
	IL_00a3:            /*goto IL_0058;*/goto IL_00a5;                              //br.s				IL_0058
	IL_00a5:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_00a7:                                                                        //ldc.i4				0x3
	IL_00ac:            V_3=3;                                                      //stloc				V_3
	IL_00b0:            /*goto IL_0058;*/goto IL_00b2;                              //br.s				IL_0058
	IL_00b2:                                                                        //ldloc.1
	IL_00b3:            Temp_0=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00b8:            if(Temp_0)goto IL_0077;                                     //brtrue.s				IL_0077
	IL_00ba:                                                                        //ldc.i4				0x1
	IL_00bf:            V_3=1;                                                      //stloc				V_3
	IL_00c3:            /*goto IL_0058;*/goto IL_00c5;                              //br.s				IL_0058
	IL_00c5:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_00c7:                                                                        //ldc.i4				0x4
	IL_00cc:            V_3=4;                                                      //stloc				V_3
	IL_00d0:            /*goto IL_0058;*/goto IL_00d2;                              //br.s				IL_0058
	IL_00d2:            goto IL_0145;                                               //leave.s				IL_0145
	                    ;}
	                    finally{
	IL_00d4:            goto IL_00eb;                                               //br.s				IL_00eb
	IL_00d6:                                                                        //ldloc				V_3
	IL_00da:            switch(V_3){case 0:goto IL_010b;case 1:goto IL_011e;case 2:goto IL_00fd;};//switch				(IL_010b,IL_011e,IL_00fd)
	IL_00eb:                                                                        //ldloc.1
	IL_00ec:                                                                        //isinst				System::IDisposable
	IL_00f1:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00f2:                                                                        //ldc.i4				0x2
	IL_00f7:            V_3=2;                                                      //stloc				V_3
	IL_00fb:            /*goto IL_00d6;*/goto IL_00fd;                              //br.s				IL_00d6
	IL_00fd:                                                                        //ldloc.2
	IL_00fe:            if(V_2==nullptr)goto IL_0120;                               //brfalse.s				IL_0120
	IL_0100:                                                                        //ldc.i4				0x0
	IL_0105:            V_3=0;                                                      //stloc				V_3
	IL_0109:            /*goto IL_00d6;*/goto IL_010b;                              //br.s				IL_00d6
	IL_010b:            goto IL_010d;                                               //br.s				IL_010d
	IL_010d:                                                                        //ldloc.2
	IL_010e:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0113:                                                                        //ldc.i4				0x1
	IL_0118:            V_3=1;                                                      //stloc				V_3
	IL_011c:            /*goto IL_00d6;*/goto IL_011e;                              //br.s				IL_00d6
	IL_011e:            goto IL_0120;                                               //br.s				IL_0120
	IL_0120:                                                                        //endfinally
	                    ;}
	IL_0121:                                                                        //ldarg.0
	IL_0122:            Temp_4=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0127:            Temp_5=Temp_4->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_012c:            Temp_6=Temp_5->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::SelectedListViewItemCollection::GetEnumerator()
	IL_0131:            V_1=Temp_6;                                                 //stloc.1
	IL_0132:                                                                        //ldc.i4				0x1
	IL_0137:            V_3=1;                                                      //stloc				V_3
	IL_013b:            /*goto IL_000d;*/goto IL_0140;                              //br				IL_000d
	IL_0140:            /*goto IL_004b;*/goto IL_004601;                            //br				IL_004b
	IL_0145:                                                                        //ldarg.0
	IL_0146:            this->M_x1();                                               //call				void Root::T_x93::M_x1()
	IL_014b:                                                                        //ldc.i4.4
	IL_014c:                                                                        //dup
	IL_014d:                                                                        //dup
	IL_014e:                                                                        //ldc.i4.2
	IL_014f:                                                                        //sub
	IL_0150:                                                                        //blt				IL_014c
	IL_0155:                                                                        //pop
	IL_0156:                                                                        //ldc.i4				0x0
	IL_015b:            V_3=0;                                                      //stloc				V_3
	IL_015f:            /*goto IL_000d;*/goto IL_0164;                              //br				IL_000d
	IL_0164:            goto IL_0166;                                               //br.s				IL_0166
	IL_0166:            return;                                                     //ret

}
inline void Root::T_x93::M_x13(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::OpenFileDialog^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::Reflection::Module^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Windows::Forms::DialogResult Temp_8 = (System::Windows::Forms::DialogResult)0;
	Root::T_x95^ Temp_9 = nullptr;
	array<System::String^>^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Windows::Forms::DialogResult Temp_14 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::Windows::Forms::OpenFileDialog^ V_0 = nullptr;
	System::Windows::Forms::DialogResult V_1 = (System::Windows::Forms::DialogResult)0;
	System::InvalidOperationException^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_4=19;                                                     //stloc				V_4
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_0090;case 1:goto IL_0108;case 2:goto IL_00a0;case 3:goto IL_00b2;};//switch				(IL_0090,IL_0108,IL_00a0,IL_00b2)
	IL_0024:            Temp_0=gcnew System::Windows::Forms::OpenFileDialog();      //newobj				void System::Windows::Forms::OpenFileDialog::.ctor()
	IL_0029:            V_0=Temp_0;                                                 //stloc.0
	IL_002a:                                                                        //ldloc.0
	IL_002b:                                                                        //ldstr				L"\x7030\x4032\x4634\x5236\x5438\x593A\x513C\x463E\x0740\x2A42\x2944\x3346\x2C48\x394A"
	IL_0030:                                                                        //ldloc				V_4
	IL_0034:            Temp_1=a(L"\x7030\x4032\x4634\x5236\x5438\x593A\x513C\x463E\x0740\x2A42\x2944\x3346\x2C48\x394A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0039:            Temp_2=Root::T_x128::M_x1(Temp_1);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_003e:            V_0->Filter=Temp_2;                                         //callvirt				void System::Windows::Forms::FileDialog::set_Filter(System::String^)
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldtoken				Reflector::INotifyPropertyChanged
	IL_0049:            Temp_3=Reflector::INotifyPropertyChanged::typeid;           //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_004e:            Temp_4=Temp_3->Module;                                      //callvirt				System::Reflection::Module^ System::Type::get_Module()
	IL_0053:            Temp_5=Temp_4->FullyQualifiedName;                          //callvirt				System::String^ System::Reflection::Module::get_FullyQualifiedName()
	IL_0058:            Temp_6=System::IO::Path::GetDirectoryName(Temp_5);          //call				System::String^ System::IO::Path::GetDirectoryName(System::String^)
	IL_005d:            V_0->InitialDirectory=Temp_6;                               //callvirt				void System::Windows::Forms::FileDialog::set_InitialDirectory(System::String^)
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldstr				L"\x7030\x5732\x5134\x1736\x7738\x5E3A\x4A3C\x1F3E\x0040\x2742\x2144\x6A46\x0048\x254A"
	IL_0068:                                                                        //ldloc				V_4
	IL_006c:            Temp_7=a(L"\x7030\x5732\x5134\x1736\x7738\x5E3A\x4A3C\x1F3E\x0040\x2742\x2144\x6A46\x0048\x254A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            V_0->Title=Temp_7;                                          //callvirt				void System::Windows::Forms::FileDialog::set_Title(System::String^)
	IL_0076:                                                                        //ldloc.0
	IL_0077:                                                                        //ldc.i4.1
	IL_0078:            V_0->Multiselect=true;                                      //callvirt				void System::Windows::Forms::OpenFileDialog::set_Multiselect(System::Boolean)
	IL_007d:                                                                        //ldc.i4.0
	IL_007e:            V_1=safe_cast<System::Windows::Forms::DialogResult>(0);     //stloc.1
	IL_007f:            goto IL_0082;                                               //br.s				IL_0082
	IL_0081:                                                                        //break
	IL_0082:                                                                        //ldc.i4				0x0
	IL_0087:            V_3=0;                                                      //stloc				V_3
	IL_008b:            /*goto IL_000b;*/goto IL_0090;                              //br				IL_000b
	IL_0090:            /*goto IL_00b4;*/goto IL_00B201;                            //br.s				IL_00b4
	IL_0092:                                                                        //ldc.i4				0x2
	IL_0097:            V_3=2;                                                      //stloc				V_3
	IL_009b:            /*goto IL_000b;*/goto IL_00a0;                              //br				IL_000b
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:                                                                        //ldc.i4.1
	IL_00a2:            if(safe_cast<System::Int32>(V_1)!=1)goto IL_010a;           //bne.un.s				IL_010a
	IL_00a4:                                                                        //ldc.i4				0x3
	IL_00a9:            V_3=3;                                                      //stloc				V_3
	IL_00ad:            /*goto IL_000b;*/goto IL_00b2;                              //br				IL_000b
	IL_00b2:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_00B201:          try{
	IL_00b4:                                                                        //ldloc.0
	IL_00b5:            Temp_8=V_0->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::CommonDialog::ShowDialog()
	IL_00ba:            V_1=Temp_8;                                                 //stloc.1
	IL_00bb:            goto IL_0092;                                               //leave.s				IL_0092
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_00BB02){
	IL_00bd:            V_2=Ex_00BB02;                                              //stloc.2
	IL_00be:                                                                        //ldnull
	IL_00bf:                                                                        //ldloc.2
	IL_00c0:            Temp_11=V_2->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_00c5:                                                                        //ldstr				L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C"
	IL_00ca:                                                                        //ldloc				V_4
	IL_00ce:            Temp_12=a(L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d3:            Temp_13=Root::T_x128::M_x1(Temp_12);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_00d8:                                                                        //ldc.i4.0
	IL_00d9:                                                                        //ldc.i4.s				16
	IL_00db:            Temp_14=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_11,Temp_13,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_00e0:                                                                        //pop
	IL_00e1:            goto IL_0092;                                               //leave.s				IL_0092
	                    ;}
	IL_00e3:                                                                        //ldarg.0
	IL_00e4:            Temp_9=this->F_x1;                                          //ldfld				Root::T_x95^ Root::T_x93 F_x1
	IL_00e9:                                                                        //ldloc.0
	IL_00ea:            Temp_10=V_0->FileNames;                                     //callvirt				array<System::String^>^ System::Windows::Forms::FileDialog::get_FileNames()
	IL_00ef:            Temp_9->M_x1(Temp_10);                                      //callvirt				void Root::T_x95::M_x1(array<System::String^>^)
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            this->M_x1();                                               //call				void Root::T_x93::M_x1()
	IL_00fa:                                                                        //ldc.i4				0x1
	IL_00ff:            V_3=1;                                                      //stloc				V_3
	IL_0103:            /*goto IL_000b;*/goto IL_0108;                              //br				IL_000b
	IL_0108:            goto IL_010a;                                               //br.s				IL_010a
	IL_010a:            return;                                                     //ret

}
inline Root::T_x95^ Root::T_x93::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x95^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x95^ Root::T_x93 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x93::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Windows::Forms::ListView^ Temp_3 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_4 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_5 = nullptr;
	System::Windows::Forms::ListView^ Temp_6 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_7 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_8 = nullptr;
	System::Windows::Forms::ListView^ Temp_9 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0047;case 1:goto IL_0092;case 2:goto IL_00b6;case 3:goto IL_0082;case 4:goto IL_000b;};//switch				(IL_0047,IL_0092,IL_00b6,IL_0082,IL_000b)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_9=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0030:            Temp_10=Temp_9->SelectedItems;                              //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0035:            Temp_11=Temp_10->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_003a:            if(Temp_11!=0)goto IL_00b8;                                 //brtrue.s				IL_00b8
	IL_003c:                                                                        //ldc.i4				0x0
	IL_0041:            V_0=0;                                                      //stloc				V_0
	IL_0045:            /*goto IL_000d;*/goto IL_0047;                              //br.s				IL_000d
	IL_0047:            goto IL_0084;                                               //br.s				IL_0084
	IL_0049:                                                                        //ldarg.0
	IL_004a:            Temp_3=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_004f:            Temp_4=Temp_3->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0054:                                                                        //ldc.i4.0
	IL_0055:            Temp_5=Temp_4[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_005a:                                                                        //ldc.i4.1
	IL_005b:            Temp_5->Focused=true;                                       //callvirt				void System::Windows::Forms::ListViewItem::set_Focused(System::Boolean)
	IL_0060:                                                                        //ldarg.0
	IL_0061:            Temp_6=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0066:            Temp_7=Temp_6->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_006b:                                                                        //ldc.i4.0
	IL_006c:            Temp_8=Temp_7[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_0071:                                                                        //ldc.i4.1
	IL_0072:            Temp_8->Selected=true;                                      //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_0077:                                                                        //ldc.i4				0x3
	IL_007c:            V_0=3;                                                      //stloc				V_0
	IL_0080:            /*goto IL_000d;*/goto IL_0082;                              //br.s				IL_000d
	IL_0082:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_0084:                                                                        //ldc.i4				0x1
	IL_0089:            V_0=1;                                                      //stloc				V_0
	IL_008d:            /*goto IL_000d;*/goto IL_0092;                              //br				IL_000d
	IL_0092:                                                                        //ldarg.0
	IL_0093:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x93 F_x2
	IL_0098:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_009d:            Temp_2=Temp_1->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_00a2:                                                                        //ldc.i4.0
	IL_00a3:            if(Temp_2<=0)goto IL_00b8;                                  //ble.s				IL_00b8
	IL_00a5:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_00a7:                                                                        //break
	IL_00a8:                                                                        //ldc.i4				0x2
	IL_00ad:            V_0=2;                                                      //stloc				V_0
	IL_00b1:            /*goto IL_000d;*/goto IL_00b6;                              //br				IL_000d
	IL_00b6:            goto IL_0049;                                               //br.s				IL_0049
	IL_00b8:            return;                                                     //ret

}
inline Root::T_x93::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ListViewItem();*/                 //call				void System::Windows::Forms::ListViewItem::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x90^ Root::T_x93::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Tag;                                           //call				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0006:                                                                        //castclass				Root::T_x90
	IL_000b:            return safe_cast<Root::T_x90^>(Temp_0);                     //ret

}
inline void Root::T_x93::T_x1::M_x1(Root::T_x90^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            this->Tag=safe_cast<System::Object^>(A_0);                  //call				void System::Windows::Forms::ListViewItem::set_Tag(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldc.i4				0x97
	IL_0010:            this->ImageIndex=151;                                       //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_0=A_0->M_x1();                                         //callvirt				System::String^ Root::T_x90::M_x1()
	IL_001c:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_1=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0027:                                                                        //ldarg.1
	IL_0028:            Temp_2=A_0->M_x2();                                         //callvirt				System::String^ Root::T_x90::M_x2()
	IL_002d:            Temp_3=Temp_1->Add(Temp_2);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0032:                                                                        //pop
	IL_0033:            return;                                                     //ret

}
