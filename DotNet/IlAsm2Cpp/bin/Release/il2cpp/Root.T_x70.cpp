#include "global_xref.h"

inline Root::T_x70::T_x70()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Drawing::Size Temp_1;
	System::Windows::Forms::Label^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Drawing::Point Temp_4;
	System::Drawing::Size Temp_5;
	System::Windows::Forms::Control::ControlCollection^ Temp_6 = nullptr;
	System::Windows::Forms::TextBox^ Temp_7 = nullptr;
	System::Windows::Forms::TextBox^ Temp_8 = nullptr;
	System::Drawing::Font^ Temp_9 = nullptr;
	System::Drawing::Font^ Temp_10 = nullptr;
	System::Windows::Forms::TextBox^ Temp_11 = nullptr;
	System::Windows::Forms::TextBox^ Temp_12 = nullptr;
	System::Windows::Forms::TextBox^ Temp_13 = nullptr;
	System::Windows::Forms::TextBox^ Temp_14 = nullptr;
	System::Windows::Forms::TextBox^ Temp_15 = nullptr;
	System::Drawing::Point Temp_16;
	System::Windows::Forms::TextBox^ Temp_17 = nullptr;
	System::Drawing::Size Temp_18;
	System::Windows::Forms::Control::ControlCollection^ Temp_19 = nullptr;
	System::Windows::Forms::TextBox^ Temp_20 = nullptr;
	System::Windows::Forms::Label^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Drawing::Point Temp_23;
	System::Drawing::Size Temp_24;
	System::Windows::Forms::Control::ControlCollection^ Temp_25 = nullptr;
	System::Windows::Forms::TextBox^ Temp_26 = nullptr;
	System::Windows::Forms::TextBox^ Temp_27 = nullptr;
	System::Drawing::Point Temp_28;
	System::Windows::Forms::TextBox^ Temp_29 = nullptr;
	System::Drawing::Size Temp_30;
	System::Windows::Forms::TextBox^ Temp_31 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_32 = nullptr;
	System::Windows::Forms::TextBox^ Temp_33 = nullptr;
	System::Windows::Forms::Button^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::Drawing::Point Temp_36;
	System::Windows::Forms::TextBox^ Temp_37 = nullptr;
	System::Int32 Temp_38 = 0;
	System::Drawing::Size Temp_39;
	System::EventHandler^ Temp_40 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_41 = nullptr;
	System::Windows::Forms::Button^ Temp_42 = nullptr;
	System::Drawing::Point Temp_43;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_46 = nullptr;
	System::Windows::Forms::Button^ Temp_47 = nullptr;
	System::Drawing::Point Temp_48;
	System::String^ Temp_49 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_50 = nullptr;
	//local variables.
	System::Windows::Forms::Label^ V_0 = nullptr;
	System::Windows::Forms::Label^ V_1 = nullptr;
	System::Windows::Forms::Button^ V_2 = nullptr;
	System::Windows::Forms::Button^ V_3 = nullptr;
	System::Windows::Forms::Button^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_5=7;                                                      //stloc				V_5
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldnull
	IL_000b:            this->F_x1=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x70 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:            /*Root::T_x66();*/                                          //call				void Root::T_x66::.ctor()
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldstr				L"\x6424\x5426\x5A28\x4E2A\x402C\x4D2E\x5D30\x4A32\x1534\x7136\x5038\x573A\x583C\x1F3E\x1240\x2642\x2944\x2246\x2A48\x3F4A\x224C\x3D4E"
	IL_001c:                                                                        //ldloc				V_5
	IL_0020:            Temp_0=a(L"\x6424\x5426\x5A28\x4E2A\x402C\x4D2E\x5D30\x4A32\x1534\x7136\x5038\x573A\x583C\x1F3E\x1240\x2642\x2944\x2246\x2A48\x3F4A\x224C\x3D4E",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0025:            this->Text=Temp_0;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldc.i4				0x198
	IL_0030:                                                                        //ldc.i4				0x94
	IL_0035:            Temp_1=System::Drawing::Size(safe_cast<System::Int32>(408),safe_cast<System::Int32>(148));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_003a:            this->ClientSize=Temp_1;                                    //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_003f:            Temp_2=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_0044:            V_0=Temp_2;                                                 //stloc.0
	IL_0045:                                                                        //ldloc.0
	IL_0046:                                                                        //ldstr				L"\x7124\x4F26\x4C28\x0B2A\x4B2C\x402E\x5D30\x5F32\x5A34\x4036\x5038\x553A\x5A3C\x1F3E\x2040\x3042\x3644\x2246\x2448\x294A\x214C\x364E\x7150\x3D52\x3454\x3A56\x3C58\x7B5A\x3E5C\x3E5E\x0F60\x4362\x0B64\x0866\x1D68\x4B6A\x0F6C\x0A6E\x5170\x0172\x1074\x0476\x1678\x177A\x0B7C\x1A7E\xE580\xA382\xE484\xF286\xFD88\xE48A\xE08C\xEE8E\xE590\xFA92\xF694\xF696\xF598\xF79A\xE49C\xA59E"
	IL_004b:                                                                        //ldloc				V_5
	IL_004f:            Temp_3=a(L"\x7124\x4F26\x4C28\x0B2A\x4B2C\x402E\x5D30\x5F32\x5A34\x4036\x5038\x553A\x5A3C\x1F3E\x2040\x3042\x3644\x2246\x2448\x294A\x214C\x364E\x7150\x3D52\x3454\x3A56\x3C58\x7B5A\x3E5C\x3E5E\x0F60\x4362\x0B64\x0866\x1D68\x4B6A\x0F6C\x0A6E\x5170\x0172\x1074\x0476\x1678\x177A\x0B7C\x1A7E\xE580\xA382\xE484\xF286\xFD88\xE48A\xE08C\xEE8E\xE590\xFA92\xF694\xF696\xF598\xF79A\xE49C\xA59E",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0054:            V_0->Text=Temp_3;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0059:                                                                        //ldloc.0
	IL_005a:                                                                        //ldc.i4.3
	IL_005b:            V_0->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0060:                                                                        //ldloc.0
	IL_0061:                                                                        //ldc.i4.s				12
	IL_0063:                                                                        //ldc.i4.s				12
	IL_0065:            Temp_4=System::Drawing::Point(safe_cast<System::Int32>(12),safe_cast<System::Int32>(12));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_006a:            V_0->Location=Temp_4;                                       //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_006f:                                                                        //ldloc.0
	IL_0070:                                                                        //ldc.i4				0x180
	IL_0075:                                                                        //ldc.i4.s				16
	IL_0077:            Temp_5=System::Drawing::Size(safe_cast<System::Int32>(384),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_007c:            V_0->Size=Temp_5;                                           //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0081:                                                                        //ldarg.0
	IL_0082:            Temp_6=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0087:                                                                        //ldloc.0
	IL_0088:            Temp_6->Add(safe_cast<System::Windows::Forms::Control^>(V_0));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_008d:                                                                        //ldarg.0
	IL_008e:            Temp_7=gcnew System::Windows::Forms::TextBox();             //newobj				void System::Windows::Forms::TextBox::.ctor()
	IL_0093:            this->F_x2=Temp_7;                                          //stfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_8=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_9=this->Font;                                          //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_00a4:                                                                        //ldc.i4.1
	IL_00a5:            Temp_10=gcnew System::Drawing::Font(Temp_9,safe_cast<System::Drawing::FontStyle>(1));//newobj				void System::Drawing::Font::.ctor(System::Drawing::Font^,System::Drawing::FontStyle)
	IL_00aa:            Temp_8->Font=Temp_10;                                       //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_11=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_00b5:                                                                        //ldc.i4.0
	IL_00b6:            Temp_11->BorderStyle=safe_cast<System::Windows::Forms::BorderStyle>(0);//callvirt				void System::Windows::Forms::TextBoxBase::set_BorderStyle(System::Windows::Forms::BorderStyle)
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_12=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_00c1:                                                                        //ldc.i4.1
	IL_00c2:            Temp_12->ReadOnly=true;                                     //callvirt				void System::Windows::Forms::TextBoxBase::set_ReadOnly(System::Boolean)
	IL_00c7:                                                                        //ldarg.0
	IL_00c8:            Temp_13=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_00cd:                                                                        //ldc.i4.1
	IL_00ce:            Temp_13->Multiline=true;                                    //callvirt				void System::Windows::Forms::TextBoxBase::set_Multiline(System::Boolean)
	IL_00d3:                                                                        //ldarg.0
	IL_00d4:            Temp_14=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_00d9:                                                                        //ldc.i4.0
	IL_00da:            Temp_14->TabStop=false;                                     //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_00df:                                                                        //ldarg.0
	IL_00e0:            Temp_15=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_00e5:                                                                        //ldc.i4.s				12
	IL_00e7:                                                                        //ldc.i4.s				28
	IL_00e9:            Temp_16=System::Drawing::Point(safe_cast<System::Int32>(12),safe_cast<System::Int32>(28));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_00ee:            Temp_15->Location=Temp_16;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:            Temp_17=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_00f9:                                                                        //ldc.i4				0x180
	IL_00fe:                                                                        //ldc.i4.s				32
	IL_0100:            Temp_18=System::Drawing::Size(safe_cast<System::Int32>(384),safe_cast<System::Int32>(32));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0105:            Temp_17->Size=Temp_18;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_010a:                                                                        //ldarg.0
	IL_010b:            Temp_19=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0110:                                                                        //ldarg.0
	IL_0111:            Temp_20=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_0116:            Temp_19->Add(safe_cast<System::Windows::Forms::Control^>(Temp_20));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_011b:            Temp_21=gcnew System::Windows::Forms::Label();              //newobj				void System::Windows::Forms::Label::.ctor()
	IL_0120:            V_1=Temp_21;                                                //stloc.1
	IL_0121:                                                                        //ldloc.1
	IL_0122:                                                                        //ldstr				L"\x7524\x4B26\x4C28\x4A2A\x5E2C\x4A2E\x1130\x4032\x5034\x5B36\x5C38\x583A\x493C\x1F3E\x3540\x2B42\x2044\x6746\x2848\x384A\x3E4C\x2A4E\x3C50\x3152\x3954\x2E56\x7958\x3D5A\x345C\x335E\x0460\x4362\x0864\x0666\x0768\x1E6A\x0C6C\x036E\x1D70\x0A72\x4F74"
	IL_0127:                                                                        //ldloc				V_5
	IL_012b:            Temp_22=a(L"\x7524\x4B26\x4C28\x4A2A\x5E2C\x4A2E\x1130\x4032\x5034\x5B36\x5C38\x583A\x493C\x1F3E\x3540\x2B42\x2044\x6746\x2848\x384A\x3E4C\x2A4E\x3C50\x3152\x3954\x2E56\x7958\x3D5A\x345C\x335E\x0460\x4362\x0864\x0666\x0768\x1E6A\x0C6C\x036E\x1D70\x0A72\x4F74",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0130:            V_1->Text=Temp_22;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0135:                                                                        //ldloc.1
	IL_0136:                                                                        //ldc.i4.3
	IL_0137:            V_1->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_013c:                                                                        //ldloc.1
	IL_013d:                                                                        //ldc.i4.s				12
	IL_013f:                                                                        //ldc.i4.s				64
	IL_0141:            Temp_23=System::Drawing::Point(safe_cast<System::Int32>(12),safe_cast<System::Int32>(64));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0146:            V_1->Location=Temp_23;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_014b:                                                                        //ldloc.1
	IL_014c:                                                                        //ldc.i4				0x180
	IL_0151:                                                                        //ldc.i4.s				16
	IL_0153:            Temp_24=System::Drawing::Size(safe_cast<System::Int32>(384),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0158:            V_1->Size=Temp_24;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_015d:                                                                        //ldarg.0
	IL_015e:            Temp_25=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0163:                                                                        //ldloc.1
	IL_0164:            Temp_25->Add(safe_cast<System::Windows::Forms::Control^>(V_1));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0169:                                                                        //ldarg.0
	IL_016a:            Temp_26=gcnew System::Windows::Forms::TextBox();            //newobj				void System::Windows::Forms::TextBox::.ctor()
	IL_016f:            this->F_x12=Temp_26;                                        //stfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_0174:                                                                        //ldarg.0
	IL_0175:            Temp_27=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_017a:                                                                        //ldc.i4.s				12
	IL_017c:                                                                        //ldc.i4.s				80
	IL_017e:            Temp_28=System::Drawing::Point(safe_cast<System::Int32>(12),safe_cast<System::Int32>(80));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0183:            Temp_27->Location=Temp_28;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0188:                                                                        //ldarg.0
	IL_0189:            Temp_29=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_018e:                                                                        //ldc.i4				0x153
	IL_0193:                                                                        //ldc.i4.s				21
	IL_0195:            Temp_30=System::Drawing::Size(safe_cast<System::Int32>(339),safe_cast<System::Int32>(21));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_019a:            Temp_29->Size=Temp_30;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_019f:                                                                        //ldarg.0
	IL_01a0:            Temp_31=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_01a5:                                                                        //ldc.i4.1
	IL_01a6:            Temp_31->TabIndex=1;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_01ab:                                                                        //ldarg.0
	IL_01ac:            Temp_32=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_01b1:                                                                        //ldarg.0
	IL_01b2:            Temp_33=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_01b7:            Temp_32->Add(safe_cast<System::Windows::Forms::Control^>(Temp_33));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_01bc:            Temp_34=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_01c1:            V_2=Temp_34;                                                //stloc.2
	IL_01c2:                                                                        //ldloc.2
	IL_01c3:                                                                        //ldc.i4.3
	IL_01c4:            V_2->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_01c9:                                                                        //ldloc.2
	IL_01ca:                                                                        //ldstr				L"\x0324\x0926\x0728\x052A"
	IL_01cf:                                                                        //ldloc				V_5
	IL_01d3:            Temp_35=a(L"\x0324\x0926\x0728\x052A",V_5);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d8:            V_2->Text=Temp_35;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_01dd:                                                                        //ldloc.2
	IL_01de:                                                                        //ldc.i4				0x164
	IL_01e3:                                                                        //ldc.i4.s				80
	IL_01e5:            Temp_36=System::Drawing::Point(safe_cast<System::Int32>(356),safe_cast<System::Int32>(80));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_01ea:            V_2->Location=Temp_36;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_01ef:                                                                        //ldloc.2
	IL_01f0:                                                                        //ldc.i4.s				40
	IL_01f2:                                                                        //ldarg.0
	IL_01f3:            Temp_37=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_01f8:            Temp_38=Temp_37->Height;                                    //callvirt				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_01fd:            Temp_39=System::Drawing::Size(safe_cast<System::Int32>(40),Temp_38);//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0202:            V_2->Size=Temp_39;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0207:                                                                        //ldloc.2
	IL_0208:                                                                        //ldc.i4.2
	IL_0209:            V_2->TabIndex=2;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_020e:                                                                        //ldloc.2
	IL_020f:                                                                        //ldarg.0
	IL_0210:                                                                        //ldftn				void Root::T_x70::M_x1(System::Object^,System::EventArgs^)
	IL_0216:            Temp_40=gcnew System::EventHandler(this,&Root::T_x70::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_021b:            V_2->Click += Temp_40;                                      //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_0220:                                                                        //ldarg.0
	IL_0221:            Temp_41=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0226:                                                                        //ldloc.2
	IL_0227:            Temp_41->Add(safe_cast<System::Windows::Forms::Control^>(V_2));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_022c:            Temp_42=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0231:            V_3=Temp_42;                                                //stloc.3
	IL_0232:                                                                        //ldloc.3
	IL_0233:                                                                        //ldc.i4.3
	IL_0234:            V_3->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0239:                                                                        //ldloc.3
	IL_023a:                                                                        //ldc.i4				0xf1
	IL_023f:                                                                        //ldc.i4.s				112
	IL_0241:            Temp_43=System::Drawing::Point(safe_cast<System::Int32>(241),safe_cast<System::Int32>(112));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0246:            V_3->Location=Temp_43;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_024b:                                                                        //ldloc.3
	IL_024c:                                                                        //ldstr				L"\x6424\x4426\x4A28\x4E2A\x5D2C\x5B2E"
	IL_0251:                                                                        //ldloc				V_5
	IL_0255:            Temp_44=a(L"\x6424\x4426\x4A28\x4E2A\x5D2C\x5B2E",V_5);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025a:            Temp_45=Root::T_x128::M_x1(Temp_44);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_025f:            V_3->Text=Temp_45;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0264:                                                                        //ldloc.3
	IL_0265:                                                                        //ldc.i4.3
	IL_0266:            V_3->TabIndex=3;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_026b:                                                                        //ldloc.3
	IL_026c:                                                                        //ldc.i4.1
	IL_026d:            V_3->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(1);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_0272:                                                                        //ldarg.0
	IL_0273:            Temp_46=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0278:                                                                        //ldloc.3
	IL_0279:            Temp_46->Add(safe_cast<System::Windows::Forms::Control^>(V_3));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_027e:                                                                        //ldarg.0
	IL_027f:                                                                        //ldloc.3
	IL_0280:            this->AcceptButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_3);//call				void System::Windows::Forms::Form::set_AcceptButton(System::Windows::Forms::IButtonControl^)
	IL_0285:            Temp_47=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_028a:            V_4=Temp_47;                                                //stloc.s				V_4
	IL_028c:                                                                        //ldloc.s				V_4
	IL_028e:                                                                        //ldc.i4.3
	IL_028f:            V_4->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0294:                                                                        //ldloc.s				V_4
	IL_0296:                                                                        //ldc.i4				0x141
	IL_029b:                                                                        //ldc.i4.s				112
	IL_029d:            Temp_48=System::Drawing::Point(safe_cast<System::Int32>(321),safe_cast<System::Int32>(112));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_02a2:            V_4->Location=Temp_48;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_02a7:                                                                        //ldloc.s				V_4
	IL_02a9:                                                                        //ldstr				L"\x0324\x7426\x4228\x422A\x5D2C"
	IL_02ae:                                                                        //ldloc				V_5
	IL_02b2:            Temp_49=a(L"\x0324\x7426\x4228\x422A\x5D2C",V_5);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b7:            V_4->Text=Temp_49;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_02bc:                                                                        //ldloc.s				V_4
	IL_02be:                                                                        //ldc.i4.4
	IL_02bf:            V_4->TabIndex=4;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_02c4:                                                                        //ldloc.s				V_4
	IL_02c6:                                                                        //ldc.i4.2
	IL_02c7:            V_4->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(2);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_02cc:                                                                        //ldarg.0
	IL_02cd:                                                                        //ldloc.s				V_4
	IL_02cf:            this->CancelButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_4);//call				void System::Windows::Forms::Form::set_CancelButton(System::Windows::Forms::IButtonControl^)
	IL_02d4:                                                                        //ldarg.0
	IL_02d5:            Temp_50=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_02da:                                                                        //ldloc.s				V_4
	IL_02dc:            Temp_50->Add(safe_cast<System::Windows::Forms::Control^>(V_4));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_02e1:            return;                                                     //ret

}
inline System::String^ Root::T_x70::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_0006:            Temp_1=Temp_0->Text;                                        //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x70::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::OpenFileDialog^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::DialogResult Temp_4 = (System::Windows::Forms::DialogResult)0;
	System::Windows::Forms::TextBox^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	//local variables.
	System::Windows::Forms::OpenFileDialog^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_2=0;                                                      //stloc				V_2
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_1
	IL_000f:            switch(V_1){case 0:goto IL_0061;case 1:goto IL_0096;case 2:goto IL_0075;};//switch				(IL_0061,IL_0096,IL_0075)
	IL_0020:            goto IL_0023;                                               //br.s				IL_0023
	IL_0022:                                                                        //break
	IL_0023:            Temp_0=gcnew System::Windows::Forms::OpenFileDialog();      //newobj				void System::Windows::Forms::OpenFileDialog::.ctor()
	IL_0028:            V_0=Temp_0;                                                 //stloc.0
	IL_0029:                                                                        //ldloc.0
	IL_002a:                                                                        //ldstr				L"\x511D\x501F\x4721\x4A23"
	IL_002f:                                                                        //ldloc				V_2
	IL_0033:            Temp_1=a(L"\x511D\x501F\x4721\x4A23",V_2);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0038:            V_0->Title=Temp_1;                                          //callvirt				void System::Windows::Forms::FileDialog::set_Title(System::String^)
	IL_003d:                                                                        //ldloc.0
	IL_003e:                                                                        //ldstr				L"\x5F1D\x531F\x5121\x4123\x4B25\x4A27\x4629\x552B\x682D\x592F\x5E31\x4033\x5335\x4A37"
	IL_0043:                                                                        //ldloc				V_2
	IL_0047:            Temp_2=a(L"\x5F1D\x531F\x5121\x4123\x4B25\x4A27\x4629\x552B\x682D\x592F\x5E31\x4033\x5335\x4A37",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004c:            Temp_3=Root::T_x128::M_x1(Temp_2);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0051:            V_0->Filter=Temp_3;                                         //callvirt				void System::Windows::Forms::FileDialog::set_Filter(System::String^)
	IL_0056:                                                                        //ldc.i4				0x0
	IL_005b:            V_1=0;                                                      //stloc				V_1
	IL_005f:            /*goto IL_000b;*/goto IL_0061;                              //br.s				IL_000b
	IL_0061:                                                                        //ldloc.0
	IL_0062:            Temp_4=V_0->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::CommonDialog::ShowDialog()
	IL_0067:                                                                        //ldc.i4.1
	IL_0068:            if(safe_cast<System::Int32>(Temp_4)!=1)goto IL_0098;        //bne.un.s				IL_0098
	IL_006a:                                                                        //ldc.i4				0x2
	IL_006f:            V_1=2;                                                      //stloc				V_1
	IL_0073:            /*goto IL_000b;*/goto IL_0075;                              //br.s				IL_000b
	IL_0075:            goto IL_0077;                                               //br.s				IL_0077
	IL_0077:                                                                        //ldarg.0
	IL_0078:            Temp_5=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_007d:                                                                        //ldloc.0
	IL_007e:            Temp_6=V_0->FileName;                                       //callvirt				System::String^ System::Windows::Forms::FileDialog::get_FileName()
	IL_0083:            Temp_5->Text=Temp_6;                                        //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0088:                                                                        //ldc.i4				0x1
	IL_008d:            V_1=1;                                                      //stloc				V_1
	IL_0091:            /*goto IL_000b;*/goto IL_0096;                              //br				IL_000b
	IL_0096:            goto IL_0098;                                               //br.s				IL_0098
	IL_0098:            return;                                                     //ret

}
inline void Root::T_x70::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x70 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x2
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0->Text=A_0;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0013:            return;                                                     //ret

}
inline System::String^ Root::T_x70::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x70 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x70::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x70 F_x12
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Text=A_0;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_000c:            return;                                                     //ret

}
