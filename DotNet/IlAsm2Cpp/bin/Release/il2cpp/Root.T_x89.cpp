#include "global_xref.h"

inline Root::T_x89::T_x89(Reflector::CodeModel::IAssemblyManager^ A_0,Reflector::IAssemblyBrowser^ A_1,Reflector::IWindowManager^ A_2,Reflector::ICommandBarManager^ A_3,Root::T_x97^ A_4,Reflector::CodeModel::IVisibilityConfiguration^ A_5)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Root::T_x89::T_x11^ Temp_1 = nullptr;
	Root::T_x89::T_x11^ Temp_2 = nullptr;
	Root::T_x89::T_x11^ Temp_3 = nullptr;
	Root::T_x89::T_x11^ Temp_4 = nullptr;
	System::Windows::Forms::KeyEventHandler^ Temp_5 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_6 = nullptr;
	Root::T_x89::T_x11^ Temp_7 = nullptr;
	System::Windows::Forms::Label^ Temp_8 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_9 = nullptr;
	Root::T_x89::T_x1^ Temp_10 = nullptr;
	Root::T_x89::T_x1^ Temp_11 = nullptr;
	Root::T_x89::T_x1^ Temp_12 = nullptr;
	Root::T_x89::T_x1^ Temp_13 = nullptr;
	System::ComponentModel::PropertyChangedEventHandler^ Temp_14 = nullptr;
	Root::T_x89::T_x1^ Temp_15 = nullptr;
	System::EventHandler^ Temp_16 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_17 = nullptr;
	Root::T_x89::T_x1^ Temp_18 = nullptr;
	Root::T_x79^ Temp_19 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_20 = nullptr;
	Root::T_x79^ Temp_21 = nullptr;
	Reflector::ICommandBarCollection^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	Reflector::ICommandBar^ Temp_24 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Drawing::Image^ Temp_27 = nullptr;
	System::EventHandler^ Temp_28 = nullptr;
	Reflector::ICommandBarButton^ Temp_29 = nullptr;
	Root::T_x89::T_x11^ Temp_30 = nullptr;
	Root::T_x89::T_x11^ Temp_31 = nullptr;
	Root::T_x89::T_x11^ Temp_32 = nullptr;
	//local variables.
	System::Windows::Forms::Label^ V_0 = nullptr;
	Reflector::ICommandBar^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_2=2;                                                      //stloc				V_2
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_000f:            this->F_x4=Temp_0;                                          //stfld				System::String^ Root::T_x89 F_x4
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:            this->F_x15=safe_cast<Root::T_x89::T_x4>(0);                //stfld				Root::T_x89::T_x4 Root::T_x89 F_x15
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldnull
	IL_001d:            this->F_x11=safe_cast<Root::T_x89::T_x6^>(nullptr);         //stfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldnull
	IL_0024:            this->F_x10=safe_cast<System::IAsyncResult^>(nullptr);      //stfld				System::IAsyncResult^ Root::T_x89 F_x10
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldnull
	IL_002b:            this->F_x7=safe_cast<System::IAsyncResult^>(nullptr);       //stfld				System::IAsyncResult^ Root::T_x89 F_x7
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldnull
	IL_0032:            this->F_x16=safe_cast<System::IAsyncResult^>(nullptr);      //stfld				System::IAsyncResult^ Root::T_x89 F_x16
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:            this->F_x6=0;                                               //stfld				System::Int32 Root::T_x89 F_x6
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //ldc.i4.0
	IL_0040:            this->F_x14=0;                                              //stfld				System::Int32 Root::T_x89 F_x14
	IL_0045:                                                                        //ldarg.0
	IL_0046:            /*System::Windows::Forms::ContainerControl();*/             //call				void System::Windows::Forms::ContainerControl::.ctor()
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldc.i4.0
	IL_004d:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0052:                                                                        //ldarg.0
	IL_0053:                                                                        //ldc.i4.5
	IL_0054:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_1=gcnew Root::T_x89::T_x11();                          //newobj				void Root::T_x89::T_x11::.ctor()
	IL_005f:            this->F_x9=Temp_1;                                          //stfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0064:                                                                        //ldarg.0
	IL_0065:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_006a:                                                                        //ldc.i4.2
	IL_006b:            Temp_2->TabIndex=2;                                         //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_0070:                                                                        //ldarg.0
	IL_0071:            Temp_3=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0076:                                                                        //ldc.i4.5
	IL_0077:            Temp_3->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_007c:                                                                        //ldarg.0
	IL_007d:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0082:                                                                        //ldarg.0
	IL_0083:                                                                        //ldftn				void Root::T_x89::M_x1(System::Object^,System::Windows::Forms::KeyEventArgs^)
	IL_0089:            Temp_5=gcnew System::Windows::Forms::KeyEventHandler(this,&Root::T_x89::M_x1);//newobj				void System::Windows::Forms::KeyEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_008e:            Temp_4->KeyDown += Temp_5;                                  //callvirt				void System::Windows::Forms::Control::add_KeyDown(System::Windows::Forms::KeyEventHandler^)
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_6=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0099:                                                                        //ldarg.0
	IL_009a:            Temp_7=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_009f:            Temp_6->Add(safe_cast<System::Windows::Forms::Control^>(Temp_7));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00a4:            Temp_8=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_00a9:            V_0=Temp_8;                                                 //stloc.0
	IL_00aa:                                                                        //ldloc.0
	IL_00ab:                                                                        //ldc.i4.1
	IL_00ac:            V_0->Dock=safe_cast<System::Windows::Forms::DockStyle>(1);  //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_00b1:                                                                        //ldloc.0
	IL_00b2:                                                                        //ldc.i4.1
	IL_00b3:            V_0->Height=1;                                              //callvirt				void System::Windows::Forms::Control::set_Height(System::Int32)
	IL_00b8:                                                                        //ldarg.0
	IL_00b9:            Temp_9=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_00be:                                                                        //ldloc.0
	IL_00bf:            Temp_9->Add(safe_cast<System::Windows::Forms::Control^>(V_0));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:            Temp_10=gcnew Root::T_x89::T_x1();                          //newobj				void Root::T_x89::T_x1::.ctor()
	IL_00ca:            this->F_x5=Temp_10;                                         //stfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_00cf:                                                                        //ldarg.0
	IL_00d0:            Temp_11=this->F_x5;                                         //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_00d5:                                                                        //ldc.i4.1
	IL_00d6:            Temp_11->TabIndex=1;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_00db:                                                                        //ldarg.0
	IL_00dc:            Temp_12=this->F_x5;                                         //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_00e1:                                                                        //ldc.i4.1
	IL_00e2:            Temp_12->Dock=safe_cast<System::Windows::Forms::DockStyle>(1);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_00e7:                                                                        //ldarg.0
	IL_00e8:            Temp_13=this->F_x5;                                         //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_00ed:                                                                        //ldarg.0
	IL_00ee:                                                                        //ldftn				void Root::T_x89::M_x1(System::Object^,System::ComponentModel::PropertyChangedEventArgs^)
	IL_00f4:            Temp_14=gcnew System::ComponentModel::PropertyChangedEventHandler(this,&Root::T_x89::M_x1);//newobj				void System::ComponentModel::PropertyChangedEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00f9:            Temp_13->M_x1(Temp_14);                                     //callvirt				void Root::T_x89::T_x1::M_x1(System::ComponentModel::PropertyChangedEventHandler^)
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:            Temp_15=this->F_x5;                                         //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_0104:                                                                        //ldarg.0
	IL_0105:                                                                        //ldftn				void Root::T_x89::M_x2(System::Object^,System::EventArgs^)
	IL_010b:            Temp_16=gcnew System::EventHandler(this,&Root::T_x89::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0110:            Temp_15->M_x1(Temp_16);                                     //callvirt				void Root::T_x89::T_x1::M_x1(System::EventHandler^)
	IL_0115:                                                                        //ldarg.0
	IL_0116:            Temp_17=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_011b:                                                                        //ldarg.0
	IL_011c:            Temp_18=this->F_x5;                                         //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_0121:            Temp_17->Add(safe_cast<System::Windows::Forms::Control^>(Temp_18));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0126:                                                                        //ldarg.0
	IL_0127:            Temp_19=gcnew Root::T_x79();                                //newobj				void Root::T_x79::.ctor()
	IL_012c:            this->F_x8=Temp_19;                                         //stfld				Root::T_x79^ Root::T_x89 F_x8
	IL_0131:                                                                        //ldarg.0
	IL_0132:            Temp_20=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0137:                                                                        //ldarg.0
	IL_0138:            Temp_21=this->F_x8;                                         //ldfld				Root::T_x79^ Root::T_x89 F_x8
	IL_013d:            Temp_20->Add(safe_cast<System::Windows::Forms::Control^>(Temp_21));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0142:                                                                        //ldarg.s				A_3
	IL_0144:            Temp_22=A_3->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0149:                                                                        //ldstr				L"\x731F\x4721\x4523\x5425\x4B27\x4229\x7B2B\x472D\x5E2F\x5631\x5B33\x4135\x7B37\x5539\x523B\x4A3D\x253F\x3A41\x3043\x0B45\x2D47\x2449\x394B"
	IL_014e:                                                                        //ldloc				V_2
	IL_0152:            Temp_23=a(L"\x731F\x4721\x4523\x5425\x4B27\x4229\x7B2B\x472D\x5E2F\x5631\x5B33\x4135\x7B37\x5539\x523B\x4A3D\x253F\x3A41\x3043\x0B45\x2D47\x2449\x394B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0157:            Temp_24=Temp_22->AddContextMenu(Temp_23);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_015c:            V_1=Temp_24;                                                //stloc.1
	IL_015d:                                                                        //ldloc.1
	IL_015e:            Temp_25=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0163:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0168:                                                                        //ldloc				V_2
	IL_016c:            Temp_26=a(L"\x061F\x6121\x4B23\x5625\x5127",V_2);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0171:            Temp_27=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0176:                                                                        //ldarg.0
	IL_0177:                                                                        //ldftn				void Root::T_x89::M_x1(System::Object^,System::EventArgs^)
	IL_017d:            Temp_28=gcnew System::EventHandler(this,&Root::T_x89::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0182:                                                                        //ldc.i4				0x20043
	IL_0187:            Temp_29=Temp_25->AddButton(Temp_26,Temp_27,Temp_28,safe_cast<System::Windows::Forms::Keys>(131139));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_018c:                                                                        //pop
	IL_018d:                                                                        //ldarg.0
	IL_018e:            Temp_30=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0193:                                                                        //ldloc.1
	IL_0194:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_0199:            Temp_30->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(V_1);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_019e:                                                                        //ldarg.0
	IL_019f:            Temp_31=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_01a4:                                                                        //ldarg.2
	IL_01a5:            Temp_31->M_x1(A_1);                                         //callvirt				void Root::T_x89::T_x11::M_x1(Reflector::IAssemblyBrowser^)
	IL_01aa:                                                                        //ldarg.0
	IL_01ab:            Temp_32=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_01b0:                                                                        //ldarg.3
	IL_01b1:            Temp_32->M_x1(A_2);                                         //callvirt				void Root::T_x89::T_x11::M_x1(Reflector::IWindowManager^)
	IL_01b6:                                                                        //ldarg.0
	IL_01b7:                                                                        //ldarg.1
	IL_01b8:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x89 F_x1
	IL_01bd:                                                                        //ldarg.0
	IL_01be:                                                                        //ldarg.s				A_4
	IL_01c0:            this->F_x2=A_4;                                             //stfld				Root::T_x97^ Root::T_x89 F_x2
	IL_01c5:                                                                        //ldarg.0
	IL_01c6:                                                                        //ldarg.s				A_5
	IL_01c8:            this->F_x12=A_5;                                            //stfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x89 F_x12
	IL_01cd:            return;                                                     //ret

}
inline void Root::T_x89::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x79^ Temp_0 = nullptr;
	Root::T_x79^ Temp_1 = nullptr;
	Root::T_x79^ Temp_2 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_3 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_4 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Root::T_x89::T_x4 Temp_7 = (Root::T_x89::T_x4)0;
	Root::T_x89::T_x11^ Temp_8 = nullptr;
	Root::T_x89::T_x11^ Temp_9 = nullptr;
	Root::T_x89::T_x11^ Temp_10 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	Root::T_x89::T_x11^ Temp_13 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Root::T_x89::T_x11^ Temp_16 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	Root::T_x89::T_x11^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	//local variables.
	System::Windows::Forms::ColumnHeader^ V_0 = nullptr;
	System::Windows::Forms::ColumnHeader^ V_1 = nullptr;
	System::Windows::Forms::ColumnHeader^ V_2 = nullptr;
	Root::T_x89::T_x4 V_3 = (Root::T_x89::T_x4)0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_5=10;                                                     //stloc				V_5
	IL_0009:            goto IL_0037;                                               //br.s				IL_0037
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:                                                                        //ldloc				V_4
	IL_001a:            switch(V_4){case 0:goto IL_0193;case 1:goto IL_014b;case 2:goto IL_00b8;case 3:goto IL_0110;case 4:goto IL_00d8;case 5:goto IL_015b;};//switch				(IL_0193,IL_014b,IL_00b8,IL_0110,IL_00d8,IL_015b)
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x79^ Root::T_x89 F_x8
	IL_003d:                                                                        //ldc.i4.0
	IL_003e:            Temp_0->M_x2(safe_cast<System::Int32>(0));                  //callvirt				void Root::T_x79::M_x2(System::Int32)
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x79^ Root::T_x89 F_x8
	IL_0049:                                                                        //ldc.i4.s				100
	IL_004b:            Temp_1->M_x12(safe_cast<System::Int32>(100));               //callvirt				void Root::T_x79::M_x12(System::Int32)
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_2=this->F_x8;                                          //ldfld				Root::T_x79^ Root::T_x89 F_x8
	IL_0056:                                                                        //ldc.i4.0
	IL_0057:            Temp_2->M_x1(safe_cast<System::Int32>(0));                  //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_005c:            Temp_3=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0061:            V_0=Temp_3;                                                 //stloc.0
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldc.i4				0xc8
	IL_0068:            V_0->Width=200;                                             //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_006d:            Temp_4=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0072:            V_1=Temp_4;                                                 //stloc.1
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldc.i4				0x12c
	IL_0079:            V_1->Width=300;                                             //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_007e:            Temp_5=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0083:            V_2=Temp_5;                                                 //stloc.2
	IL_0084:                                                                        //ldloc.2
	IL_0085:                                                                        //ldstr				L"\x6927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x4F35"
	IL_008a:                                                                        //ldloc				V_5
	IL_008e:            Temp_6=a(L"\x6927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x4F35",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0093:            V_2->Text=Temp_6;                                           //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0098:                                                                        //ldloc.2
	IL_0099:                                                                        //ldc.i4				0x258
	IL_009e:            V_2->Width=600;                                             //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:            Temp_7=this->F_x15;                                         //ldfld				Root::T_x89::T_x4 Root::T_x89 F_x15
	IL_00a9:            V_3=Temp_7;                                                 //stloc.3
	IL_00aa:                                                                        //ldc.i4				0x2
	IL_00af:            V_4=2;                                                      //stloc				V_4
	IL_00b3:            /*goto IL_000b;*/goto IL_00b8;                              //br				IL_000b
	IL_00b8:                                                                        //ldloc.3
	IL_00b9:            switch(safe_cast<System::Int32>(V_3)){case 0:goto IL_0115;case 1:goto IL_00da;case 2:goto IL_015d;};//switch				(IL_0115,IL_00da,IL_015d)
	IL_00ca:                                                                        //ldc.i4				0x4
	IL_00cf:            V_4=4;                                                      //stloc				V_4
	IL_00d3:            /*goto IL_000b;*/goto IL_00d8;                              //br				IL_000b
	IL_00d8:            goto IL_014d;                                               //br.s				IL_014d
	IL_00da:                                                                        //ldloc.0
	IL_00db:                                                                        //ldstr				L"\x6527\x4F29\x412B\x4C2D\x552F\x4031"
	IL_00e0:                                                                        //ldloc				V_5
	IL_00e4:            Temp_22=a(L"\x6527\x4F29\x412B\x4C2D\x552F\x4031",V_5);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e9:            V_0->Text=Temp_22;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_00ee:                                                                        //ldloc.1
	IL_00ef:                                                                        //ldstr				L"\x6C27\x4F29\x4F2B\x422D\x512F\x4031\x5D33\x5835\x5F37\x1A39\x683B\x473D\x303F\x2741"
	IL_00f4:                                                                        //ldloc				V_5
	IL_00f8:            Temp_23=a(L"\x6C27\x4F29\x4F2B\x422D\x512F\x4031\x5D33\x5835\x5F37\x1A39\x683B\x473D\x303F\x2741",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fd:            V_1->Text=Temp_23;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0102:                                                                        //ldc.i4				0x3
	IL_0107:            V_4=3;                                                      //stloc				V_4
	IL_010b:            /*goto IL_000b;*/goto IL_0110;                              //br				IL_000b
	IL_0110:            goto IL_0195;                                               //br				IL_0195
	IL_0115:                                                                        //ldloc.0
	IL_0116:                                                                        //ldstr				L"\x7C27\x5329\x5C2B\x4B2D"
	IL_011b:                                                                        //ldloc				V_5
	IL_011f:            Temp_20=a(L"\x7C27\x5329\x5C2B\x4B2D",V_5);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0124:            V_0->Text=Temp_20;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0129:                                                                        //ldloc.1
	IL_012a:                                                                        //ldstr				L"\x6627\x4B29\x412B\x4B2D\x432F\x4231\x5533\x5535\x5D37"
	IL_012f:                                                                        //ldloc				V_5
	IL_0133:            Temp_21=a(L"\x6627\x4B29\x412B\x4B2D\x432F\x4231\x5533\x5535\x5D37",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0138:            V_1->Text=Temp_21;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_013d:                                                                        //ldc.i4				0x1
	IL_0142:            V_4=1;                                                      //stloc				V_4
	IL_0146:            /*goto IL_000b;*/goto IL_014b;                              //br				IL_000b
	IL_014b:            goto IL_0195;                                               //br.s				IL_0195
	IL_014d:                                                                        //ldc.i4				0x5
	IL_0152:            V_4=5;                                                      //stloc				V_4
	IL_0156:            /*goto IL_000b;*/goto IL_015b;                              //br				IL_000b
	IL_015b:            goto IL_0195;                                               //br.s				IL_0195
	IL_015d:                                                                        //ldloc.0
	IL_015e:                                                                        //ldstr				L"\x6127\x5E29\x492B\x432D"
	IL_0163:                                                                        //ldloc				V_5
	IL_0167:            Temp_24=a(L"\x6127\x5E29\x492B\x432D",V_5);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016c:            V_0->Text=Temp_24;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0171:                                                                        //ldloc.1
	IL_0172:                                                                        //ldstr				L"\x6727\x5D29\x422B\x4B2D\x422F"
	IL_0177:                                                                        //ldloc				V_5
	IL_017b:            Temp_25=a(L"\x6727\x5D29\x422B\x4B2D\x422F",V_5);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0180:            V_1->Text=Temp_25;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0185:                                                                        //ldc.i4				0x0
	IL_018a:            V_4=0;                                                      //stloc				V_4
	IL_018e:            /*goto IL_000b;*/goto IL_0193;                              //br				IL_000b
	IL_0193:            goto IL_0195;                                               //br.s				IL_0195
	IL_0195:                                                                        //ldarg.0
	IL_0196:            Temp_8=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_019b:            Temp_8->BeginUpdate();                                      //callvirt				void System::Windows::Forms::ListView::BeginUpdate()
	IL_01a0:                                                                        //ldarg.0
	IL_01a1:            Temp_9=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_01a6:            Temp_9->Clear();                                            //callvirt				void System::Windows::Forms::ListView::Clear()
	IL_01ab:                                                                        //ldarg.0
	IL_01ac:            Temp_10=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_01b1:            Temp_11=Temp_10->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_01b6:                                                                        //ldloc.0
	IL_01b7:            Temp_12=Temp_11->Add(V_0);                                  //callvirt				System::Int32 System::Windows::Forms::ListView::ColumnHeaderCollection::Add(System::Windows::Forms::ColumnHeader^)
	IL_01bc:                                                                        //pop
	IL_01bd:                                                                        //ldarg.0
	IL_01be:            Temp_13=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_01c3:            Temp_14=Temp_13->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_01c8:                                                                        //ldloc.1
	IL_01c9:            Temp_15=Temp_14->Add(V_1);                                  //callvirt				System::Int32 System::Windows::Forms::ListView::ColumnHeaderCollection::Add(System::Windows::Forms::ColumnHeader^)
	IL_01ce:                                                                        //pop
	IL_01cf:                                                                        //ldarg.0
	IL_01d0:            Temp_16=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_01d5:            Temp_17=Temp_16->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_01da:                                                                        //ldloc.2
	IL_01db:            Temp_18=Temp_17->Add(V_2);                                  //callvirt				System::Int32 System::Windows::Forms::ListView::ColumnHeaderCollection::Add(System::Windows::Forms::ColumnHeader^)
	IL_01e0:                                                                        //pop
	IL_01e1:                                                                        //ldarg.0
	IL_01e2:            Temp_19=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_01e7:            Temp_19->EndUpdate();                                       //callvirt				void System::Windows::Forms::ListView::EndUpdate()
	IL_01ec:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_01f1:            return;                                                     //ret

}
inline void Root::T_x89::M_x1(array<System::Windows::Forms::ListViewItem^>^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x79^ Temp_0 = nullptr;
	Root::T_x89::T_x11^ Temp_1 = nullptr;
	Root::T_x89::T_x11^ Temp_2 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_3 = nullptr;
	Root::T_x89::T_x11^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x89::T_x11^ Temp_6 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0051;case 1:goto IL_00d2;case 2:goto IL_0063;case 3:goto IL_0076;case 4:goto IL_003a;case 5:goto IL_00ad;};//switch				(IL_0051,IL_00d2,IL_0063,IL_0076,IL_003a,IL_00ad)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x79^ Root::T_x89 F_x8
	IL_0029:                                                                        //ldarg.2
	IL_002a:            Temp_0->M_x1(A_1);                                          //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_002f:                                                                        //ldc.i4				0x4
	IL_0034:            V_0=4;                                                      //stloc				V_0
	IL_0038:            /*goto IL_0002;*/goto IL_003a;                              //br.s				IL_0002
	IL_003a:                                                                        //ldarg.1
	IL_003b:            Temp_5=A_0->Length;                                         //ldlen
	IL_003c:                                                                        //conv.i4
	IL_003d:                                                                        //ldc.i4.0
	IL_003e:            if(Temp_5<=0)goto IL_00d4;                                  //ble				IL_00d4
	IL_0043:            goto IL_0046;                                               //br.s				IL_0046
	IL_0045:                                                                        //break
	IL_0046:                                                                        //ldc.i4				0x0
	IL_004b:            V_0=0;                                                      //stloc				V_0
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_0078;                                               //br.s				IL_0078
	IL_0053:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0058:                                                                        //ldc.i4				0x2
	IL_005d:            V_0=2;                                                      //stloc				V_0
	IL_0061:            /*goto IL_0002;*/goto IL_0063;                              //br.s				IL_0002
	IL_0063:            goto IL_00d4;                                               //br.s				IL_00d4
	IL_0065:                                                                        //ldarg.0
	IL_0066:            this->M_x13();                                              //call				void Root::T_x89::M_x13()
	IL_006b:                                                                        //ldc.i4				0x3
	IL_0070:            V_0=3;                                                      //stloc				V_0
	IL_0074:            /*goto IL_0002;*/goto IL_0076;                              //br.s				IL_0002
	IL_0076:            goto IL_0053;                                               //br.s				IL_0053
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_1=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_007e:            Temp_1->BeginUpdate();                                      //callvirt				void System::Windows::Forms::ListView::BeginUpdate()
	IL_0083:                                                                        //ldarg.0
	IL_0084:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0089:            Temp_3=Temp_2->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_008e:                                                                        //ldarg.1
	IL_008f:            Temp_3->AddRange(A_0);                                      //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::AddRange(array<System::Windows::Forms::ListViewItem^>^)
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_009a:            Temp_4->EndUpdate();                                        //callvirt				void System::Windows::Forms::ListView::EndUpdate()
	IL_009f:                                                                        //ldc.i4				0x5
	IL_00a4:            V_0=5;                                                      //stloc				V_0
	IL_00a8:            /*goto IL_0002;*/goto IL_00ad;                              //br				IL_0002
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_6=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_00b3:            Temp_7=Temp_6->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_00b8:            Temp_8=Temp_7->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_00bd:                                                                        //ldc.i4				0x9c4
	IL_00c2:            if(Temp_8<=2500)goto IL_0053;                               //ble.s				IL_0053
	IL_00c4:                                                                        //ldc.i4				0x1
	IL_00c9:            V_0=1;                                                      //stloc				V_0
	IL_00cd:            /*goto IL_0002;*/goto IL_00d2;                              //br				IL_0002
	IL_00d2:            goto IL_0065;                                               //br.s				IL_0065
	IL_00d4:            return;                                                     //ret

}
inline void Root::T_x89::M_x1(System::Collections::ArrayList^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<System::Windows::Forms::ListViewItem^>^ Temp_1 = nullptr;
	Root::T_x121^ Temp_2 = nullptr;
	Root::T_x89::T_x14^ Temp_3 = nullptr;
	array<System::Object^>^ Temp_4 = nullptr;
	System::IAsyncResult^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	//local variables.
	array<System::Windows::Forms::ListViewItem^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Root::T_x20^ V_2 = nullptr;
	Root::T_x89::T_x14^ V_3 = nullptr;
	array<System::Object^>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_006b;case 1:goto IL_0057;case 2:goto IL_0049;};//switch				(IL_006b,IL_0057,IL_0049)
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_0=A_0->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_001d:                                                                        //conv.ovf.u4
	IL_001e:            Temp_1=gcnew array<System::Windows::Forms::ListViewItem^>(safe_cast<System::UInt32>(Temp_0));//newarr				System::Windows::Forms::ListViewItem
	IL_0023:            V_0=Temp_1;                                                 //stloc.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:                                                                        //ldloc.0
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            A_0->CopyTo(safe_cast<System::Array^>(V_0),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_002c:                                                                        //ldarg.1
	IL_002d:            A_0->Clear();                                               //callvirt				void System::Collections::ArrayList::Clear()
	IL_0032:                                                                        //ldc.i4.0
	IL_0033:            V_1=0;                                                      //stloc.1
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_2=this->F_x13;                                         //ldfld				Root::T_x121^ Root::T_x89 F_x13
	IL_003a:            V_2=safe_cast<Root::T_x20^>(Temp_2);                        //stloc.2
	IL_003b:            goto IL_003e;                                               //br.s				IL_003e
	IL_003d:                                                                        //break
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_5=2;                                                      //stloc				V_5
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:                                                                        //ldloc.2
	IL_004a:            if(V_2==nullptr)goto IL_006d;                               //brfalse.s				IL_006d
	IL_004c:                                                                        //ldc.i4				0x1
	IL_0051:            V_5=1;                                                      //stloc				V_5
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:            goto IL_0059;                                               //br.s				IL_0059
	IL_0059:                                                                        //ldloc.2
	IL_005a:            Temp_6=V_2->M_x1();                                         //callvirt				System::Int32 Root::T_x20::M_x1()
	IL_005f:            V_1=Temp_6;                                                 //stloc.1
	IL_0060:                                                                        //ldc.i4				0x0
	IL_0065:            V_5=0;                                                      //stloc				V_5
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:            goto IL_006d;                                               //br.s				IL_006d
	IL_006d:                                                                        //ldarg.0
	IL_006e:                                                                        //ldftn				void Root::T_x89::M_x1(array<System::Windows::Forms::ListViewItem^>^,System::Int32)
	IL_0074:            Temp_3=gcnew Root::T_x89::T_x14(this,&Root::T_x89::M_x1);   //newobj				void Root::T_x89::T_x14::.ctor(System::Object^,System::IntPtr)
	IL_0079:            V_3=Temp_3;                                                 //stloc.3
	IL_007a:                                                                        //ldarg.0
	IL_007b:                                                                        //ldarg.0
	IL_007c:                                                                        //ldloc.3
	IL_007d:                                                                        //ldc.i4.2
	IL_007e:            Temp_4=gcnew array<System::Object^>(2);                     //newarr				System::Object
	IL_0083:            V_4=Temp_4;                                                 //stloc.s				V_4
	IL_0085:                                                                        //ldloc.s				V_4
	IL_0087:                                                                        //ldc.i4.0
	IL_0088:                                                                        //ldloc.0
	IL_0089:            V_4[0]=safe_cast<System::Object^>(V_0);                     //stelem.ref
	IL_008a:                                                                        //ldloc.s				V_4
	IL_008c:                                                                        //ldc.i4.1
	IL_008d:                                                                        //ldloc.1
	IL_008e:                                                                        //box				System::Int32
	IL_0093:            V_4[1]=safe_cast<System::Object^>(V_1);                     //stelem.ref
	IL_0094:                                                                        //ldloc.s				V_4
	IL_0096:            Temp_5=this->BeginInvoke(safe_cast<System::Delegate^>(V_3),V_4);//call				System::IAsyncResult^ System::Windows::Forms::Control::BeginInvoke(System::Delegate^,array<System::Object^>^)
	IL_009b:            this->F_x16=Temp_5;                                         //stfld				System::IAsyncResult^ Root::T_x89 F_x16
	IL_00a0:            return;                                                     //ret

}
inline void Root::T_x89::M_x1(System::Exception^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x97^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x97^ Root::T_x89 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->M_x1(A_0);                                          //callvirt				void Root::T_x97::M_x1(System::Exception^)
	IL_000c:            return;                                                     //ret

}
inline System::Boolean Root::T_x89::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Root::T_x89::T_x6^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Root::T_x89::T_x6^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	Root::T_x89::T_x6^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	Root::T_x89::T_x6^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	Root::T_x89::T_x6^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_18 = nullptr;
	System::Boolean Temp_19 = false;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_005b;                                               //br.s				IL_005b
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_017e;case 1:goto IL_023a;case 2:goto IL_00d1;case 3:goto IL_00e5;case 4:goto IL_0268;case 5:goto IL_007b;case 6:goto IL_01e7;case 7:goto IL_008e;case 8:goto IL_006d;case 9:goto IL_019d;case 10:goto IL_00ad;case 11:goto IL_0254;case 12:goto IL_021b;case 13:goto IL_01fb;case 14:goto IL_0100;case 15:goto IL_01cd;case 16:goto IL_016b;case 17:goto IL_0115;case 18:goto IL_014f;case 19:goto IL_01ad;};//switch				(IL_017e,IL_023a,IL_00d1,IL_00e5,IL_0268,IL_007b,IL_01e7,IL_008e,IL_006d,IL_019d,IL_00ad,IL_0254,IL_021b,IL_01fb,IL_0100,IL_01cd,IL_016b,IL_0115,IL_014f,IL_01ad)
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0061:            V_0=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.0
	IL_0062:                                                                        //ldc.i4				0x8
	IL_0067:            V_5=8;                                                      //stloc				V_5
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:                                                                        //ldloc.0
	IL_006e:            if(V_0==nullptr)goto IL_00bc;                               //brfalse.s				IL_00bc
	IL_0070:                                                                        //ldc.i4				0x5
	IL_0075:            V_5=5;                                                      //stloc				V_5
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_020d;                                               //br				IL_020d
	IL_0080:                                                                        //ldc.i4				0x7
	IL_0085:            V_5=7;                                                      //stloc				V_5
	IL_0089:            /*goto IL_0002;*/goto IL_008e;                              //br				IL_0002
	IL_008e:            goto IL_0091;                                               //br.s				IL_0091
	IL_0090:                                                                        //break
	IL_0091:                                                                        //ldloc.3
	IL_0092:                                                                        //ldarg.0
	IL_0093:            Temp_4=this->F_x12;                                         //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x89 F_x12
	IL_0098:            Temp_5=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IPropertyReference^>(V_3),Temp_4);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_009d:            if(!Temp_5)goto IL_00ea;                                    //brfalse.s				IL_00ea
	IL_009f:                                                                        //ldc.i4				0xa
	IL_00a4:            V_5=10;                                                     //stloc				V_5
	IL_00a8:            /*goto IL_0002;*/goto IL_00ad;                              //br				IL_0002
	IL_00ad:            goto IL_0127;                                               //br.s				IL_0127
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_14=this->F_x11;                                        //ldfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_00b5:                                                                        //ldarg.1
	IL_00b6:            Temp_15=Temp_14->M_x1(A_0);                                 //callvirt				System::Boolean Root::T_x89::T_x6::M_x1(System::Object^)
	IL_00bb:            return Temp_15;                                             //ret
	IL_00bc:                                                                        //ldarg.1
	IL_00bd:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_00c2:            V_1=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.1
	IL_00c3:                                                                        //ldc.i4				0x2
	IL_00c8:            V_5=2;                                                      //stloc				V_5
	IL_00cc:            /*goto IL_0002;*/goto IL_00d1;                              //br				IL_0002
	IL_00d1:                                                                        //ldloc.1
	IL_00d2:            if(V_1==nullptr)goto IL_023f;                               //brfalse				IL_023f
	IL_00d7:                                                                        //ldc.i4				0x3
	IL_00dc:            V_5=3;                                                      //stloc				V_5
	IL_00e0:            /*goto IL_0002;*/goto IL_00e5;                              //br				IL_0002
	IL_00e5:            goto IL_0170;                                               //br				IL_0170
	IL_00ea:                                                                        //ldarg.1
	IL_00eb:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_00f0:            V_4=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(A_0);//stloc.s				V_4
	IL_00f2:                                                                        //ldc.i4				0xe
	IL_00f7:            V_5=14;                                                     //stloc				V_5
	IL_00fb:            /*goto IL_0002;*/goto IL_0100;                              //br				IL_0002
	IL_0100:                                                                        //ldloc.s				V_4
	IL_0102:            if(V_4==nullptr)goto IL_026d;                               //brfalse				IL_026d
	IL_0107:                                                                        //ldc.i4				0x11
	IL_010c:            V_5=17;                                                     //stloc				V_5
	IL_0110:            /*goto IL_0002;*/goto IL_0115;                              //br				IL_0002
	IL_0115:            goto IL_019f;                                               //br				IL_019f
	IL_011a:                                                                        //ldarg.0
	IL_011b:            Temp_2=this->F_x11;                                         //ldfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_0120:                                                                        //ldarg.1
	IL_0121:            Temp_3=Temp_2->M_x1(A_0);                                   //callvirt				System::Boolean Root::T_x89::T_x6::M_x1(System::Object^)
	IL_0126:            return Temp_3;                                              //ret
	IL_0127:                                                                        //ldarg.0
	IL_0128:            Temp_8=this->F_x11;                                         //ldfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_012d:                                                                        //ldarg.1
	IL_012e:            Temp_9=Temp_8->M_x1(A_0);                                   //callvirt				System::Boolean Root::T_x89::T_x6::M_x1(System::Object^)
	IL_0133:            return Temp_9;                                              //ret
	IL_0134:                                                                        //ldarg.0
	IL_0135:            Temp_12=this->F_x11;                                        //ldfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_013a:                                                                        //ldarg.1
	IL_013b:            Temp_13=Temp_12->M_x1(A_0);                                 //callvirt				System::Boolean Root::T_x89::T_x6::M_x1(System::Object^)
	IL_0140:            return Temp_13;                                             //ret
	IL_0141:                                                                        //ldc.i4				0x12
	IL_0146:            V_5=18;                                                     //stloc				V_5
	IL_014a:            /*goto IL_0002;*/goto IL_014f;                              //br				IL_0002
	IL_014f:                                                                        //ldloc.2
	IL_0150:                                                                        //ldarg.0
	IL_0151:            Temp_16=this->F_x12;                                        //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x89 F_x12
	IL_0156:            Temp_17=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(V_2),Temp_16);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_015b:            if(!Temp_17)goto IL_01d2;                                   //brfalse.s				IL_01d2
	IL_015d:                                                                        //ldc.i4				0x10
	IL_0162:            V_5=16;                                                     //stloc				V_5
	IL_0166:            /*goto IL_0002;*/goto IL_016b;                              //br				IL_0002
	IL_016b:            goto IL_00af;                                               //br				IL_00af
	IL_0170:                                                                        //ldc.i4				0x0
	IL_0175:            V_5=0;                                                      //stloc				V_5
	IL_0179:            /*goto IL_0002;*/goto IL_017e;                              //br				IL_0002
	IL_017e:                                                                        //ldloc.1
	IL_017f:                                                                        //ldarg.0
	IL_0180:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x89 F_x12
	IL_0185:            Temp_1=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IFieldReference^>(V_1),Temp_0);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_018a:            if(!Temp_1)goto IL_023f;                                    //brfalse				IL_023f
	IL_018f:                                                                        //ldc.i4				0x9
	IL_0194:            V_5=9;                                                      //stloc				V_5
	IL_0198:            /*goto IL_0002;*/goto IL_019d;                              //br				IL_0002
	IL_019d:            goto IL_0200;                                               //br.s				IL_0200
	IL_019f:                                                                        //ldc.i4				0x13
	IL_01a4:            V_5=19;                                                     //stloc				V_5
	IL_01a8:            /*goto IL_0002;*/goto IL_01ad;                              //br				IL_0002
	IL_01ad:                                                                        //ldloc.s				V_4
	IL_01af:                                                                        //ldarg.0
	IL_01b0:            Temp_18=this->F_x12;                                        //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x89 F_x12
	IL_01b5:            Temp_19=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IEventReference^>(V_4),Temp_18);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IEventReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_01ba:            if(!Temp_19)goto IL_026d;                                   //brfalse				IL_026d
	IL_01bf:                                                                        //ldc.i4				0xf
	IL_01c4:            V_5=15;                                                     //stloc				V_5
	IL_01c8:            /*goto IL_0002;*/goto IL_01cd;                              //br				IL_0002
	IL_01cd:            goto IL_0134;                                               //br				IL_0134
	IL_01d2:                                                                        //ldarg.1
	IL_01d3:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_01d8:            V_3=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(A_0);//stloc.3
	IL_01d9:                                                                        //ldc.i4				0x6
	IL_01de:            V_5=6;                                                      //stloc				V_5
	IL_01e2:            /*goto IL_0002;*/goto IL_01e7;                              //br				IL_0002
	IL_01e7:                                                                        //ldloc.3
	IL_01e8:            if(V_3==nullptr)goto IL_00ea;                               //brfalse				IL_00ea
	IL_01ed:                                                                        //ldc.i4				0xd
	IL_01f2:            V_5=13;                                                     //stloc				V_5
	IL_01f6:            /*goto IL_0002;*/goto IL_01fb;                              //br				IL_0002
	IL_01fb:            goto IL_0080;                                               //br				IL_0080
	IL_0200:                                                                        //ldarg.0
	IL_0201:            Temp_6=this->F_x11;                                         //ldfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_0206:                                                                        //ldarg.1
	IL_0207:            Temp_7=Temp_6->M_x1(A_0);                                   //callvirt				System::Boolean Root::T_x89::T_x6::M_x1(System::Object^)
	IL_020c:            return Temp_7;                                              //ret
	IL_020d:                                                                        //ldc.i4				0xc
	IL_0212:            V_5=12;                                                     //stloc				V_5
	IL_0216:            /*goto IL_0002;*/goto IL_021b;                              //br				IL_0002
	IL_021b:                                                                        //ldloc.0
	IL_021c:                                                                        //ldarg.0
	IL_021d:            Temp_10=this->F_x12;                                        //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x89 F_x12
	IL_0222:            Temp_11=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_0),Temp_10);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0227:            if(!Temp_11)goto IL_00bc;                                   //brfalse				IL_00bc
	IL_022c:                                                                        //ldc.i4				0x1
	IL_0231:            V_5=1;                                                      //stloc				V_5
	IL_0235:            /*goto IL_0002;*/goto IL_023a;                              //br				IL_0002
	IL_023a:            goto IL_011a;                                               //br				IL_011a
	IL_023f:                                                                        //ldarg.1
	IL_0240:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_0245:            V_2=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.2
	IL_0246:                                                                        //ldc.i4				0xb
	IL_024b:            V_5=11;                                                     //stloc				V_5
	IL_024f:            /*goto IL_0002;*/goto IL_0254;                              //br				IL_0002
	IL_0254:                                                                        //ldloc.2
	IL_0255:            if(V_2==nullptr)goto IL_01d2;                               //brfalse				IL_01d2
	IL_025a:                                                                        //ldc.i4				0x4
	IL_025f:            V_5=4;                                                      //stloc				V_5
	IL_0263:            /*goto IL_0002;*/goto IL_0268;                              //br				IL_0002
	IL_0268:            goto IL_0141;                                               //br				IL_0141
	IL_026d:                                                                        //ldc.i4.0
	IL_026e:            return false;                                               //ret

}
inline void Root::T_x89::M_x1(System::Object^ A_0,System::ComponentModel::PropertyChangedEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x1^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Root::T_x89::T_x1^ Temp_2 = nullptr;
	Root::T_x89::T_x4 Temp_3 = (Root::T_x89::T_x4)0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x5;                                          //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_000a:            Temp_1=Temp_0->M_x2();                                      //callvirt				System::String^ Root::T_x89::T_x1::M_x2()
	IL_000f:            this->F_x4=Temp_1;                                          //stfld				System::String^ Root::T_x89 F_x4
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_2=this->F_x5;                                          //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_001b:            Temp_3=Temp_2->M_x13();                                     //callvirt				Root::T_x89::T_x4 Root::T_x89::T_x1::M_x13()
	IL_0020:            this->F_x15=Temp_3;                                         //stfld				Root::T_x89::T_x4 Root::T_x89 F_x15
	IL_0025:                                                                        //ldarg.0
	IL_0026:            this->M_x12();                                              //call				void Root::T_x89::M_x12()
	IL_002b:            return;                                                     //ret

}
inline void Root::T_x89::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	Root::T_x89::T_x11^ Temp_2 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Windows::Forms::ListViewItem^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0008:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000d:            V_0=Temp_1;                                                 //stloc.0
	IL_000e:            /*goto IL_0010;*/goto IL_000E01;                            //br.s				IL_0010
	IL_000E01:          try{
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0016:            Temp_3=Temp_2->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_001b:            Temp_4=Temp_3->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::SelectedListViewItemCollection::GetEnumerator()
	IL_0020:            V_2=Temp_4;                                                 //stloc.2
	IL_0021:            /*goto IL_0023;*/goto IL_002101;                            //br.s				IL_0023
	IL_002101:          try{
	IL_0023:                                                                        //ldc.i4				0x1
	IL_0028:            V_4=1;                                                      //stloc				V_4
	IL_002c:            /*goto IL_0030;*/goto IL_002e;                              //br.s				IL_0030
	IL_002e:            goto IL_004d;                                               //br.s				IL_004d
	IL_0030:                                                                        //ldloc				V_4
	IL_0034:            switch(V_4){case 0:goto IL_0092;case 1:goto IL_002e;case 2:goto IL_009f;case 3:goto IL_0072;case 4:goto IL_007f;};//switch				(IL_0092,IL_002e,IL_009f,IL_0072,IL_007f)
	IL_004d:            goto IL_0074;                                               //br.s				IL_0074
	IL_004f:                                                                        //ldloc.2
	IL_0050:            Temp_6=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0055:                                                                        //castclass				System::Windows::Forms::ListViewItem
	IL_005a:            V_1=safe_cast<System::Windows::Forms::ListViewItem^>(Temp_6);//stloc.1
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldloc.1
	IL_005d:            Temp_7=V_1->ToString();                                     //callvirt				System::String^ System::Windows::Forms::ListViewItem::ToString()
	IL_0062:            V_0->WriteLine(Temp_7);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0067:                                                                        //ldc.i4				0x3
	IL_006c:            V_4=3;                                                      //stloc				V_4
	IL_0070:            /*goto IL_0030;*/goto IL_0072;                              //br.s				IL_0030
	IL_0072:            goto IL_0074;                                               //br.s				IL_0074
	IL_0074:                                                                        //ldc.i4				0x4
	IL_0079:            V_4=4;                                                      //stloc				V_4
	IL_007d:            /*goto IL_0030;*/goto IL_007f;                              //br.s				IL_0030
	IL_007f:                                                                        //ldloc.2
	IL_0080:            Temp_5=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0085:            if(Temp_5)goto IL_004f;                                     //brtrue.s				IL_004f
	IL_0087:                                                                        //ldc.i4				0x0
	IL_008c:            V_4=0;                                                      //stloc				V_4
	IL_0090:            /*goto IL_0030;*/goto IL_0092;                              //br.s				IL_0030
	IL_0092:            goto IL_0094;                                               //br.s				IL_0094
	IL_0094:                                                                        //ldc.i4				0x2
	IL_0099:            V_4=2;                                                      //stloc				V_4
	IL_009d:            /*goto IL_0030;*/goto IL_009f;                              //br.s				IL_0030
	IL_009f:            goto IL_00ee;                                               //leave.s				IL_00ee
	                    ;}
	                    finally{
	IL_00a1:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_00a3:                                                                        //ldloc				V_5
	IL_00a7:            switch(V_5){case 0:goto IL_00d8;case 1:goto IL_00ca;case 2:goto IL_00eb;};//switch				(IL_00d8,IL_00ca,IL_00eb)
	IL_00b8:                                                                        //ldloc.2
	IL_00b9:                                                                        //isinst				System::IDisposable
	IL_00be:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00bf:                                                                        //ldc.i4				0x1
	IL_00c4:            V_5=1;                                                      //stloc				V_5
	IL_00c8:            /*goto IL_00a3;*/goto IL_00ca;                              //br.s				IL_00a3
	IL_00ca:                                                                        //ldloc.3
	IL_00cb:            if(V_3==nullptr)goto IL_00ed;                               //brfalse.s				IL_00ed
	IL_00cd:                                                                        //ldc.i4				0x0
	IL_00d2:            V_5=0;                                                      //stloc				V_5
	IL_00d6:            /*goto IL_00a3;*/goto IL_00d8;                              //br.s				IL_00a3
	IL_00d8:            goto IL_00da;                                               //br.s				IL_00da
	IL_00da:                                                                        //ldloc.3
	IL_00db:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00e0:                                                                        //ldc.i4				0x2
	IL_00e5:            V_5=2;                                                      //stloc				V_5
	IL_00e9:            /*goto IL_00a3;*/goto IL_00eb;                              //br.s				IL_00a3
	IL_00eb:            goto IL_00ed;                                               //br.s				IL_00ed
	IL_00ed:                                                                        //endfinally
	                    ;}
	IL_00ee:                                                                        //ldloc.0
	IL_00ef:            Temp_8=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_00f4:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_8));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_00f9:            goto IL_0141;                                               //leave.s				IL_0141
	                    ;}
	                    finally{
	IL_00fb:                                                                        //ldc.i4				0x2
	IL_0100:            V_6=2;                                                      //stloc				V_6
	IL_0104:            /*goto IL_0108;*/goto IL_0106;                              //br.s				IL_0108
	IL_0106:            goto IL_011d;                                               //br.s				IL_011d
	IL_0108:                                                                        //ldloc				V_6
	IL_010c:            switch(V_6){case 0:goto IL_013e;case 1:goto IL_012b;case 2:goto IL_0106;};//switch				(IL_013e,IL_012b,IL_0106)
	IL_011d:                                                                        //ldloc.0
	IL_011e:            if(V_0==nullptr)goto IL_0140;                               //brfalse.s				IL_0140
	IL_0120:                                                                        //ldc.i4				0x1
	IL_0125:            V_6=1;                                                      //stloc				V_6
	IL_0129:            /*goto IL_0108;*/goto IL_012b;                              //br.s				IL_0108
	IL_012b:            goto IL_012d;                                               //br.s				IL_012d
	IL_012d:                                                                        //ldloc.0
	IL_012e:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0133:                                                                        //ldc.i4				0x0
	IL_0138:            V_6=0;                                                      //stloc				V_6
	IL_013c:            /*goto IL_0108;*/goto IL_013e;                              //br.s				IL_0108
	IL_013e:            goto IL_0140;                                               //br.s				IL_0140
	IL_0140:                                                                        //endfinally
	                    ;}
	IL_0141:            return;                                                     //ret

}
inline void Root::T_x89::M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x1^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Root::T_x89::T_x11^ Temp_2 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Root::T_x89::T_x11^ Temp_5 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_6 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_7 = nullptr;
	Root::T_x89::T_x11^ Temp_8 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_9 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_10 = nullptr;
	System::Windows::Forms::Keys Temp_11 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003d;                                               //br.s				IL_003d
	IL_000d:                                                                        //ldc.i4.3
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //dup
	IL_0010:                                                                        //ldc.i4.3
	IL_0011:                                                                        //sub
	IL_0012:                                                                        //blt				IL_000e
	IL_0017:                                                                        //pop
	IL_0018:                                                                        //ldloc				V_0
	IL_001c:            switch(V_0){case 0:goto IL_0055;case 1:goto IL_00b4;case 2:goto IL_00c4;case 3:goto IL_00e5;case 4:goto IL_000b;case 5:goto IL_0082;case 6:goto IL_0075;};//switch				(IL_0055,IL_00b4,IL_00c4,IL_00e5,IL_000b,IL_0082,IL_0075)
	IL_003d:                                                                        //ldarg.2
	IL_003e:            Temp_11=A_1->KeyCode;                                       //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyCode()
	IL_0043:                                                                        //ldc.i4.s				38
	IL_0045:            if(safe_cast<System::Int32>(Temp_11)!=38)goto IL_00e7;      //bne.un				IL_00e7
	IL_004a:                                                                        //ldc.i4				0x0
	IL_004f:            V_0=0;                                                      //stloc				V_0
	IL_0053:            /*goto IL_000d;*/goto IL_0055;                              //br.s				IL_000d
	IL_0055:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_0=this->F_x5;                                          //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_005d:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0062:                                                                        //pop
	IL_0063:                                                                        //ldarg.2
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:            A_1->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_006a:                                                                        //ldc.i4				0x6
	IL_006f:            V_0=6;                                                      //stloc				V_0
	IL_0073:            /*goto IL_000d;*/goto IL_0075;                              //br.s				IL_000d
	IL_0075:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_0077:                                                                        //ldc.i4				0x5
	IL_007c:            V_0=5;                                                      //stloc				V_0
	IL_0080:            /*goto IL_000d;*/goto IL_0082;                              //br.s				IL_000d
	IL_0082:                                                                        //ldarg.0
	IL_0083:            Temp_5=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0088:            Temp_6=Temp_5->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_008d:                                                                        //ldc.i4.0
	IL_008e:            Temp_7=Temp_6[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_8=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0099:            Temp_9=Temp_8->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_009e:                                                                        //ldc.i4.0
	IL_009f:            Temp_10=Temp_9[safe_cast<System::Int32>(0)];                //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_00a4:            if(Temp_7!=Temp_10)goto IL_00e7;                            //bne.un.s				IL_00e7
	IL_00a6:                                                                        //ldc.i4				0x1
	IL_00ab:            V_0=1;                                                      //stloc				V_0
	IL_00af:            /*goto IL_000d;*/goto IL_00b4;                              //br				IL_000d
	IL_00b4:            goto IL_0057;                                               //br.s				IL_0057
	IL_00b6:                                                                        //ldc.i4				0x2
	IL_00bb:            V_0=2;                                                      //stloc				V_0
	IL_00bf:            /*goto IL_000d;*/goto IL_00c4;                              //br				IL_000d
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_00ca:            Temp_3=Temp_2->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_00cf:            Temp_4=Temp_3->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_00d4:                                                                        //ldc.i4.1
	IL_00d5:            if(Temp_4!=1)goto IL_00e7;                                  //bne.un.s				IL_00e7
	IL_00d7:                                                                        //ldc.i4				0x3
	IL_00dc:            V_0=3;                                                      //stloc				V_0
	IL_00e0:            /*goto IL_000d;*/goto IL_00e5;                              //br				IL_000d
	IL_00e5:            goto IL_0077;                                               //br.s				IL_0077
	IL_00e7:            return;                                                     //ret

}
inline void Root::T_x89::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x89::T_x1^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Windows::Forms::MethodInvoker^ Temp_3 = nullptr;
	System::IAsyncResult^ Temp_4 = nullptr;
	System::IAsyncResult^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::IAsyncResult^ Temp_9 = nullptr;
	//local variables.
	System::Windows::Forms::MethodInvoker^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_002f;                                               //br.s				IL_002f
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0076;case 1:goto IL_009c;case 2:goto IL_005b;case 3:goto IL_004b;case 4:goto IL_0121;case 5:goto IL_010a;case 6:goto IL_00b8;case 7:goto IL_0086;case 8:goto IL_00ef;};//switch				(IL_0076,IL_009c,IL_005b,IL_004b,IL_0121,IL_010a,IL_00b8,IL_0086,IL_00ef)
	IL_002f:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0034:                                                                        //ldarg.0
	IL_0035:                                                                        //ldflda				System::Int32 Root::T_x89 F_x6
	IL_003a:            Temp_0=System::Threading::Interlocked::Increment(safe_cast<System::Int32%>(this->F_x6));//call				System::Int32 System::Threading::Interlocked::Increment(System::Int32%)
	IL_003f:                                                                        //pop
	IL_0040:                                                                        //ldc.i4				0x3
	IL_0045:            V_1=3;                                                      //stloc				V_1
	IL_0049:            /*goto IL_0002;*/goto IL_004b;                              //br.s				IL_0002
	IL_004b:            goto IL_00f1;                                               //br				IL_00f1
	IL_0050:                                                                        //ldc.i4				0x2
	IL_0055:            V_1=2;                                                      //stloc				V_1
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_5=this->F_x10;                                         //ldfld				System::IAsyncResult^ Root::T_x89 F_x10
	IL_0061:            Temp_6=Temp_5->IsCompleted;                                 //callvirt				System::Boolean System::IAsyncResult::get_IsCompleted()
	IL_0066:            if(!Temp_6)goto IL_0126;                                    //brfalse				IL_0126
	IL_006b:                                                                        //ldc.i4				0x0
	IL_0070:            V_1=0;                                                      //stloc				V_1
	IL_0074:            /*goto IL_0002;*/goto IL_0076;                              //br.s				IL_0002
	IL_0076:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0078:                                                                        //ldc.i4				0x7
	IL_007d:            V_1=7;                                                      //stloc				V_1
	IL_0081:            /*goto IL_0002;*/goto IL_0086;                              //br				IL_0002
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_9=this->F_x10;                                         //ldfld				System::IAsyncResult^ Root::T_x89 F_x10
	IL_008c:            if(Temp_9==nullptr)goto IL_00ba;                            //brfalse.s				IL_00ba
	IL_008e:                                                                        //ldc.i4				0x1
	IL_0093:            V_1=1;                                                      //stloc				V_1
	IL_0097:            /*goto IL_0002;*/goto IL_009c;                              //br				IL_0002
	IL_009c:            goto IL_0050;                                               //br.s				IL_0050
	IL_009e:                                                                        //ldarg.0
	IL_009f:                                                                        //ldflda				System::Int32 Root::T_x89 F_x14
	IL_00a4:            Temp_8=System::Threading::Interlocked::Decrement(safe_cast<System::Int32%>(this->F_x14));//call				System::Int32 System::Threading::Interlocked::Decrement(System::Int32%)
	IL_00a9:                                                                        //pop
	IL_00aa:                                                                        //ldc.i4				0x6
	IL_00af:            V_1=6;                                                      //stloc				V_1
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:            goto IL_00f1;                                               //br.s				IL_00f1
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:            Temp_1=this->F_x5;                                          //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_00c0:            Temp_2=Temp_1->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_00c5:                                                                        //pop
	IL_00c6:                                                                        //ldarg.0
	IL_00c7:                                                                        //ldftn				void Root::T_x89::M_x2()
	IL_00cd:            Temp_3=gcnew System::Windows::Forms::MethodInvoker(this,&Root::T_x89::M_x2);//newobj				void System::Windows::Forms::MethodInvoker::.ctor(System::Object^,System::IntPtr)
	IL_00d2:            V_0=Temp_3;                                                 //stloc.0
	IL_00d3:                                                                        //ldarg.0
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:                                                                        //ldnull
	IL_00d6:                                                                        //ldnull
	IL_00d7:            Temp_4=V_0->BeginInvoke(safe_cast<System::AsyncCallback^>(nullptr),safe_cast<System::Object^>(nullptr));//callvirt				System::IAsyncResult^ System::Windows::Forms::MethodInvoker::BeginInvoke(System::AsyncCallback^,System::Object^)
	IL_00dc:            this->F_x10=Temp_4;                                         //stfld				System::IAsyncResult^ Root::T_x89 F_x10
	IL_00e1:                                                                        //ldc.i4				0x8
	IL_00e6:            V_1=8;                                                      //stloc				V_1
	IL_00ea:            /*goto IL_0002;*/goto IL_00ef;                              //br				IL_0002
	IL_00ef:            goto IL_0126;                                               //br.s				IL_0126
	IL_00f1:                                                                        //ldc.i4.4
	IL_00f2:                                                                        //dup
	IL_00f3:                                                                        //dup
	IL_00f4:                                                                        //ldc.i4.2
	IL_00f5:                                                                        //sub
	IL_00f6:                                                                        //blt				IL_00f2
	IL_00fb:                                                                        //pop
	IL_00fc:                                                                        //ldc.i4				0x5
	IL_0101:            V_1=5;                                                      //stloc				V_1
	IL_0105:            /*goto IL_0002;*/goto IL_010a;                              //br				IL_0002
	IL_010a:                                                                        //ldarg.0
	IL_010b:            Temp_7=this->F_x14;                                         //ldfld				System::Int32 Root::T_x89 F_x14
	IL_0110:                                                                        //ldc.i4.0
	IL_0111:            if(Temp_7>0)goto IL_009e;                                   //bgt.s				IL_009e
	IL_0113:                                                                        //ldc.i4				0x4
	IL_0118:            V_1=4;                                                      //stloc				V_1
	IL_011c:            /*goto IL_0002;*/goto IL_0121;                              //br				IL_0002
	IL_0121:            goto IL_0078;                                               //br				IL_0078
	IL_0126:            return;                                                     //ret

}
inline void Root::T_x89::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldflda				System::Int32 Root::T_x89 F_x14
	IL_0006:            Temp_0=System::Threading::Interlocked::Increment(safe_cast<System::Int32%>(this->F_x14));//call				System::Int32 System::Threading::Interlocked::Increment(System::Int32%)
	IL_000b:                                                                        //pop
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x89::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::IAsyncResult^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::IAsyncResult^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Root::T_x89::T_x5^ Temp_5 = nullptr;
	Root::T_x121^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	Root::T_x89::T_x5^ Temp_8 = nullptr;
	Root::T_x121^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Root::T_x89::T_x15^ Temp_11 = nullptr;
	Root::T_x121^ Temp_12 = nullptr;
	Root::T_x121^ Temp_13 = nullptr;
	System::IAsyncResult^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	Reflector::CodeModel::IAssemblyManager^ Temp_18 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	array<Reflector::CodeModel::IAssembly^>^ Temp_21 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_22 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	Root::T_x89::T_x18^ Temp_25 = nullptr;
	array<System::Object^>^ Temp_26 = nullptr;
	System::IAsyncResult^ Temp_27 = nullptr;
	Root::T_x89::T_x4 Temp_28 = (Root::T_x89::T_x4)0;
	Root::T_x121^ Temp_29 = nullptr;
	System::Boolean Temp_30 = false;
	Root::T_x121^ Temp_31 = nullptr;
	System::Object^ Temp_32 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_33 = nullptr;
	System::Int32 Temp_34 = 0;
	System::IAsyncResult^ Temp_35 = nullptr;
	Root::T_x121^ Temp_36 = nullptr;
	System::Object^ Temp_37 = nullptr;
	System::Boolean Temp_38 = false;
	Root::T_x89::T_x10^ Temp_39 = nullptr;
	array<System::Object^>^ Temp_40 = nullptr;
	System::IAsyncResult^ Temp_41 = nullptr;
	System::Object^ Temp_42 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Collections::ArrayList^ V_1 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ V_2 = nullptr;
	System::Windows::Forms::ListViewItem^ V_3 = nullptr;
	System::Exception^ V_4 = nullptr;
	Root::T_x89::T_x10^ V_5 = nullptr;
	System::IAsyncResult^ V_6 = nullptr;
	array<System::Object^>^ V_7 = nullptr;
	Root::T_x89::T_x4 V_8 = (Root::T_x89::T_x4)0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:            /*goto IL_0096;*/goto IL_000001;                            //br				IL_0096
	IL_000001:          try{
	IL_0005:                                                                        //ldloc				V_9
	IL_0009:            switch(V_9){case 0:goto IL_044f;case 1:goto IL_01cb;case 2:goto IL_014c;case 3:goto IL_047b;case 4:goto IL_00f2;case 5:goto IL_0236;case 6:goto IL_0417;case 7:goto IL_02e0;case 8:goto IL_039f;case 9:goto IL_048e;case 10:goto IL_0438;case 11:goto IL_011b;case 12:goto IL_012e;case 13:goto IL_01fc;case 14:goto IL_0468;case 15:goto IL_00ad;case 16:goto IL_02b2;case 17:goto IL_02f9;case 18:goto IL_0280;case 19:goto IL_01e9;case 20:goto IL_0249;case 21:goto IL_0262;case 22:goto IL_00df;case 23:goto IL_0108;case 24:goto IL_02c2;case 25:goto IL_0325;case 26:goto IL_0389;case 27:goto IL_030c;case 28:goto IL_0176;case 29:goto IL_0365;case 30:goto IL_0186;case 31:goto IL_01b8;case 32:goto IL_0352;case 33:goto IL_0215;};//switch				(IL_044f,IL_01cb,IL_014c,IL_047b,IL_00f2,IL_0236,IL_0417,IL_02e0,IL_039f,IL_048e,IL_0438,IL_011b,IL_012e,IL_01fc,IL_0468,IL_00ad,IL_02b2,IL_02f9,IL_0280,IL_01e9,IL_0249,IL_0262,IL_00df,IL_0108,IL_02c2,IL_0325,IL_0389,IL_030c,IL_0176,IL_0365,IL_0186,IL_01b8,IL_0352,IL_0215)
	IL_0096:                                                                        //ldc.i4.0
	IL_0097:            V_0=0;                                                      //stloc.0
	IL_0098:                                                                        //ldc.i4.0
	IL_0099:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_009e:            V_1=Temp_0;                                                 //stloc.1
	IL_009f:                                                                        //ldc.i4				0xf
	IL_00a4:            V_9=15;                                                     //stloc				V_9
	IL_00a8:            /*goto IL_0005;*/goto IL_00ad;                              //br				IL_0005
	IL_00ad:            goto IL_01ee;                                               //br				IL_01ee
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_7=this->F_x4;                                          //ldfld				System::String^ Root::T_x89 F_x4
	IL_00b9:            Temp_8=gcnew Root::T_x89::T_x5(Temp_7);                     //newobj				void Root::T_x89::T_x5::.ctor(System::String^)
	IL_00be:            this->F_x11=safe_cast<Root::T_x89::T_x6^>(Temp_8);          //stfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_00c3:                                                                        //ldarg.0
	IL_00c4:                                                                        //ldloc.2
	IL_00c5:                                                                        //ldc.i4.0
	IL_00c6:                                                                        //ldc.i4.1
	IL_00c7:            Temp_9=gcnew Root::T_x121(V_2,false,true);                  //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::IAssembly^>^,System::Boolean,System::Boolean)
	IL_00cc:            this->F_x13=Temp_9;                                         //stfld				Root::T_x121^ Root::T_x89 F_x13
	IL_00d1:                                                                        //ldc.i4				0x16
	IL_00d6:            V_9=22;                                                     //stloc				V_9
	IL_00da:            /*goto IL_0005;*/goto IL_00df;                              //br				IL_0005
	IL_00df:            goto IL_0267;                                               //br				IL_0267
	IL_00e4:                                                                        //ldc.i4				0x4
	IL_00e9:            V_9=4;                                                      //stloc				V_9
	IL_00ed:            /*goto IL_0005;*/goto IL_00f2;                              //br				IL_0005
	IL_00f2:                                                                        //ldarg.0
	IL_00f3:            Temp_3=this->F_x16;                                         //ldfld				System::IAsyncResult^ Root::T_x89 F_x16
	IL_00f8:            if(Temp_3==nullptr)goto IL_0151;                            //brfalse.s				IL_0151
	IL_00fa:                                                                        //ldc.i4				0x17
	IL_00ff:            V_9=23;                                                     //stloc				V_9
	IL_0103:            /*goto IL_0005;*/goto IL_0108;                              //br				IL_0005
	IL_0108:            goto IL_01bd;                                               //br				IL_01bd
	IL_010d:                                                                        //ldc.i4				0xb
	IL_0112:            V_9=11;                                                     //stloc				V_9
	IL_0116:            /*goto IL_0005;*/goto IL_011b;                              //br				IL_0005
	IL_011b:            goto IL_0267;                                               //br				IL_0267
	IL_0120:                                                                        //ldc.i4				0xc
	IL_0125:            V_9=12;                                                     //stloc				V_9
	IL_0129:            /*goto IL_0005;*/goto IL_012e;                              //br				IL_0005
	IL_012e:                                                                        //ldarg.0
	IL_012f:            Temp_14=this->F_x7;                                         //ldfld				System::IAsyncResult^ Root::T_x89 F_x7
	IL_0134:            Temp_15=Temp_14->IsCompleted;                               //callvirt				System::Boolean System::IAsyncResult::get_IsCompleted()
	IL_0139:            if(!Temp_15)goto IL_038b;                                   //brfalse				IL_038b
	IL_013e:                                                                        //ldc.i4				0x2
	IL_0143:            V_9=2;                                                      //stloc				V_9
	IL_0147:            /*goto IL_0005;*/goto IL_014c;                              //br				IL_0005
	IL_014c:            goto IL_046d;                                               //br				IL_046d
	IL_0151:                                                                        //ldarg.0
	IL_0152:                                                                        //ldnull
	IL_0153:            this->F_x7=safe_cast<System::IAsyncResult^>(nullptr);       //stfld				System::IAsyncResult^ Root::T_x89 F_x7
	IL_0158:                                                                        //ldarg.0
	IL_0159:                                                                        //ldnull
	IL_015a:            this->F_x16=safe_cast<System::IAsyncResult^>(nullptr);      //stfld				System::IAsyncResult^ Root::T_x89 F_x16
	IL_015f:                                                                        //ldarg.0
	IL_0160:                                                                        //ldloc.1
	IL_0161:            this->M_x1(V_1);                                            //call				void Root::T_x89::M_x1(System::Collections::ArrayList^)
	IL_0166:                                                                        //ldc.i4.0
	IL_0167:            V_0=0;                                                      //stloc.0
	IL_0168:                                                                        //ldc.i4				0x1c
	IL_016d:            V_9=28;                                                     //stloc				V_9
	IL_0171:            /*goto IL_0005;*/goto IL_0176;                              //br				IL_0005
	IL_0176:            goto IL_01ee;                                               //br.s				IL_01ee
	IL_0178:                                                                        //ldc.i4				0x1e
	IL_017d:            V_9=30;                                                     //stloc				V_9
	IL_0181:            /*goto IL_0005;*/goto IL_0186;                              //br				IL_0005
	IL_0186:            goto IL_02fe;                                               //br				IL_02fe
	IL_018b:                                                                        //ldarg.0
	IL_018c:                                                                        //ldarg.0
	IL_018d:            Temp_10=this->F_x4;                                         //ldfld				System::String^ Root::T_x89 F_x4
	IL_0192:            Temp_11=gcnew Root::T_x89::T_x15(Temp_10);                  //newobj				void Root::T_x89::T_x15::.ctor(System::String^)
	IL_0197:            this->F_x11=safe_cast<Root::T_x89::T_x6^>(Temp_11);         //stfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_019c:                                                                        //ldarg.0
	IL_019d:                                                                        //ldloc.2
	IL_019e:                                                                        //ldc.i4.1
	IL_019f:                                                                        //ldc.i4.1
	IL_01a0:            Temp_12=gcnew Root::T_x121(V_2,true,true);                  //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::IAssembly^>^,System::Boolean,System::Boolean)
	IL_01a5:            this->F_x13=Temp_12;                                        //stfld				Root::T_x121^ Root::T_x89 F_x13
	IL_01aa:                                                                        //ldc.i4				0x1f
	IL_01af:            V_9=31;                                                     //stloc				V_9
	IL_01b3:            /*goto IL_0005;*/goto IL_01b8;                              //br				IL_0005
	IL_01b8:            goto IL_0267;                                               //br				IL_0267
	IL_01bd:                                                                        //ldc.i4				0x1
	IL_01c2:            V_9=1;                                                      //stloc				V_9
	IL_01c6:            /*goto IL_0005;*/goto IL_01cb;                              //br				IL_0005
	IL_01cb:                                                                        //ldarg.0
	IL_01cc:            Temp_1=this->F_x16;                                         //ldfld				System::IAsyncResult^ Root::T_x89 F_x16
	IL_01d1:            Temp_2=Temp_1->IsCompleted;                                 //callvirt				System::Boolean System::IAsyncResult::get_IsCompleted()
	IL_01d6:            if(!Temp_2)goto IL_02e5;                                    //brfalse				IL_02e5
	IL_01db:                                                                        //ldc.i4				0x13
	IL_01e0:            V_9=19;                                                     //stloc				V_9
	IL_01e4:            /*goto IL_0005;*/goto IL_01e9;                              //br				IL_0005
	IL_01e9:            goto IL_0151;                                               //br				IL_0151
	IL_01ee:                                                                        //ldc.i4				0xd
	IL_01f3:            V_9=13;                                                     //stloc				V_9
	IL_01f7:            /*goto IL_0005;*/goto IL_01fc;                              //br				IL_0005
	IL_01fc:                                                                        //ldarg.0
	IL_01fd:            Temp_16=this->F_x14;                                        //ldfld				System::Int32 Root::T_x89 F_x14
	IL_0202:            if(Temp_16==0)goto IL_023b;                                 //brfalse				IL_023b
	IL_0207:                                                                        //ldc.i4				0x21
	IL_020c:            V_9=33;                                                     //stloc				V_9
	IL_0210:            /*goto IL_0005;*/goto IL_0215;                              //br				IL_0005
	IL_0215:            goto IL_0480;                                               //br				IL_0480
	IL_021a:                                                                        //ldarg.0
	IL_021b:                                                                        //ldloc.1
	IL_021c:            this->M_x1(V_1);                                            //call				void Root::T_x89::M_x1(System::Collections::ArrayList^)
	IL_0221:                                                                        //ldarg.0
	IL_0222:                                                                        //ldnull
	IL_0223:            this->F_x13=safe_cast<Root::T_x121^>(nullptr);              //stfld				Root::T_x121^ Root::T_x89 F_x13
	IL_0228:                                                                        //ldc.i4				0x5
	IL_022d:            V_9=5;                                                      //stloc				V_9
	IL_0231:            /*goto IL_0005;*/goto IL_0236;                              //br				IL_0005
	IL_0236:            goto IL_04ce;                                               //leave				IL_04ce
	IL_023b:                                                                        //ldc.i4				0x14
	IL_0240:            V_9=20;                                                     //stloc				V_9
	IL_0244:            /*goto IL_0005;*/goto IL_0249;                              //br				IL_0005
	IL_0249:                                                                        //ldarg.0
	IL_024a:            Temp_17=this->F_x6;                                         //ldfld				System::Int32 Root::T_x89 F_x6
	IL_024f:            if(Temp_17==0)goto IL_02b4;                                 //brfalse				IL_02b4
	IL_0254:                                                                        //ldc.i4				0x15
	IL_0259:            V_9=21;                                                     //stloc				V_9
	IL_025d:            /*goto IL_0005;*/goto IL_0262;                              //br				IL_0005
	IL_0262:            goto IL_03a4;                                               //br				IL_03a4
	IL_0267:                                                                        //ldarg.0
	IL_0268:            Temp_13=this->F_x13;                                        //ldfld				Root::T_x121^ Root::T_x89 F_x13
	IL_026d:            Temp_13->M_x12();                                           //callvirt				void Root::T_x121::M_x12()
	IL_0272:                                                                        //ldc.i4				0x12
	IL_0277:            V_9=18;                                                     //stloc				V_9
	IL_027b:            /*goto IL_0005;*/goto IL_0280;                              //br				IL_0005
	IL_0280:            goto IL_01ee;                                               //br				IL_01ee
	IL_0285:                                                                        //ldarg.0
	IL_0286:                                                                        //ldarg.0
	IL_0287:            Temp_4=this->F_x4;                                          //ldfld				System::String^ Root::T_x89 F_x4
	IL_028c:            Temp_5=gcnew Root::T_x89::T_x5(Temp_4);                     //newobj				void Root::T_x89::T_x5::.ctor(System::String^)
	IL_0291:            this->F_x11=safe_cast<Root::T_x89::T_x6^>(Temp_5);          //stfld				Root::T_x89::T_x6^ Root::T_x89 F_x11
	IL_0296:                                                                        //ldarg.0
	IL_0297:                                                                        //ldloc.2
	IL_0298:                                                                        //ldc.i4.1
	IL_0299:                                                                        //ldc.i4.0
	IL_029a:            Temp_6=gcnew Root::T_x121(V_2,true,false);                  //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::IAssembly^>^,System::Boolean,System::Boolean)
	IL_029f:            this->F_x13=Temp_6;                                         //stfld				Root::T_x121^ Root::T_x89 F_x13
	IL_02a4:                                                                        //ldc.i4				0x10
	IL_02a9:            V_9=16;                                                     //stloc				V_9
	IL_02ad:            /*goto IL_0005;*/goto IL_02b2;                              //br				IL_0005
	IL_02b2:            goto IL_0267;                                               //br.s				IL_0267
	IL_02b4:                                                                        //ldc.i4				0x18
	IL_02b9:            V_9=24;                                                     //stloc				V_9
	IL_02bd:            /*goto IL_0005;*/goto IL_02c2;                              //br				IL_0005
	IL_02c2:                                                                        //ldarg.0
	IL_02c3:            Temp_29=this->F_x13;                                        //ldfld				Root::T_x121^ Root::T_x89 F_x13
	IL_02c8:            Temp_30=Temp_29->M_x13();                                   //callvirt				System::Boolean Root::T_x121::M_x13()
	IL_02cd:            if(Temp_30)goto IL_0357;                                    //brtrue				IL_0357
	IL_02d2:                                                                        //ldc.i4				0x7
	IL_02d7:            V_9=7;                                                      //stloc				V_9
	IL_02db:            /*goto IL_0005;*/goto IL_02e0;                              //br				IL_0005
	IL_02e0:            goto IL_021a;                                               //br				IL_021a
	IL_02e5:                                                                        //ldc.i4.1
	IL_02e6:            System::Threading::Thread::Sleep(safe_cast<System::Int32>(1));//call				void System::Threading::Thread::Sleep(System::Int32)
	IL_02eb:                                                                        //ldc.i4				0x11
	IL_02f0:            V_9=17;                                                     //stloc				V_9
	IL_02f4:            /*goto IL_0005;*/goto IL_02f9;                              //br				IL_0005
	IL_02f9:            goto IL_00e4;                                               //br				IL_00e4
	IL_02fe:                                                                        //ldc.i4				0x1b
	IL_0303:            V_9=27;                                                     //stloc				V_9
	IL_0307:            /*goto IL_0005;*/goto IL_030c;                              //br				IL_0005
	IL_030c:                                                                        //ldarg.0
	IL_030d:            Temp_35=this->F_x7;                                         //ldfld				System::IAsyncResult^ Root::T_x89 F_x7
	IL_0312:            if(Temp_35==nullptr)goto IL_00e4;                           //brfalse				IL_00e4
	IL_0317:                                                                        //ldc.i4				0x19
	IL_031c:            V_9=25;                                                     //stloc				V_9
	IL_0320:            /*goto IL_0005;*/goto IL_0325;                              //br				IL_0005
	IL_0325:            goto IL_0120;                                               //br				IL_0120
	IL_032a:                                                                        //ldarg.0
	IL_032b:                                                                        //ldarg.0
	IL_032c:            Temp_31=this->F_x13;                                        //ldfld				Root::T_x121^ Root::T_x89 F_x13
	IL_0331:            Temp_32=Temp_31->M_x2();                                    //callvirt				System::Object^ Root::T_x121::M_x2()
	IL_0336:            Temp_33=this->M_x2(Temp_32);                                //call				System::Windows::Forms::ListViewItem^ Root::T_x89::M_x2(System::Object^)
	IL_033b:            V_3=Temp_33;                                                //stloc.3
	IL_033c:                                                                        //ldloc.1
	IL_033d:                                                                        //ldloc.3
	IL_033e:            Temp_34=V_1->Add(safe_cast<System::Object^>(V_3));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0343:                                                                        //pop
	IL_0344:                                                                        //ldc.i4				0x20
	IL_0349:            V_9=32;                                                     //stloc				V_9
	IL_034d:            /*goto IL_0005;*/goto IL_0352;                              //br				IL_0005
	IL_0352:            goto IL_043d;                                               //br				IL_043d
	IL_0357:                                                                        //ldc.i4				0x1d
	IL_035c:            V_9=29;                                                     //stloc				V_9
	IL_0360:            /*goto IL_0005;*/goto IL_0365;                              //br				IL_0005
	IL_0365:                                                                        //ldarg.0
	IL_0366:                                                                        //ldarg.0
	IL_0367:            Temp_36=this->F_x13;                                        //ldfld				Root::T_x121^ Root::T_x89 F_x13
	IL_036c:            Temp_37=Temp_36->M_x2();                                    //callvirt				System::Object^ Root::T_x121::M_x2()
	IL_0371:            Temp_38=this->M_x1(Temp_37);                                //call				System::Boolean Root::T_x89::M_x1(System::Object^)
	IL_0376:            if(!Temp_38)goto IL_043d;                                   //brfalse				IL_043d
	IL_037b:                                                                        //ldc.i4				0x1a
	IL_0380:            V_9=26;                                                     //stloc				V_9
	IL_0384:            /*goto IL_0005;*/goto IL_0389;                              //br				IL_0005
	IL_0389:            goto IL_032a;                                               //br.s				IL_032a
	IL_038b:                                                                        //ldc.i4.1
	IL_038c:            System::Threading::Thread::Sleep(safe_cast<System::Int32>(1));//call				void System::Threading::Thread::Sleep(System::Int32)
	IL_0391:                                                                        //ldc.i4				0x8
	IL_0396:            V_9=8;                                                      //stloc				V_9
	IL_039a:            /*goto IL_0005;*/goto IL_039f;                              //br				IL_0005
	IL_039f:            goto IL_02fe;                                               //br				IL_02fe
	IL_03a4:                                                                        //ldarg.0
	IL_03a5:            Temp_18=this->F_x1;                                         //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x89 F_x1
	IL_03aa:            Temp_19=Temp_18->Assemblies;                                //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_03af:            Temp_20=safe_cast<System::Collections::ICollection^>(Temp_19)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_03b4:                                                                        //conv.ovf.u4
	IL_03b5:            Temp_21=gcnew array<Reflector::CodeModel::IAssembly^>(safe_cast<System::UInt32>(Temp_20));//newarr				Reflector::CodeModel::IAssembly
	IL_03ba:            V_2=Temp_21;                                                //stloc.2
	IL_03bb:                                                                        //ldarg.0
	IL_03bc:            Temp_22=this->F_x1;                                         //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x89 F_x1
	IL_03c1:            Temp_23=Temp_22->Assemblies;                                //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_03c6:                                                                        //ldloc.2
	IL_03c7:                                                                        //ldc.i4.0
	IL_03c8:            safe_cast<System::Collections::ICollection^>(Temp_23)->CopyTo(safe_cast<System::Array^>(V_2),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_03cd:                                                                        //ldarg.0
	IL_03ce:                                                                        //ldflda				System::Int32 Root::T_x89 F_x6
	IL_03d3:            Temp_24=System::Threading::Interlocked::Decrement(safe_cast<System::Int32%>(this->F_x6));//call				System::Int32 System::Threading::Interlocked::Decrement(System::Int32%)
	IL_03d8:                                                                        //pop
	IL_03d9:                                                                        //ldarg.0
	IL_03da:                                                                        //ldarg.0
	IL_03db:                                                                        //ldarg.0
	IL_03dc:                                                                        //ldftn				void Root::T_x89::M_x1()
	IL_03e2:            Temp_25=gcnew Root::T_x89::T_x18(this,&Root::T_x89::M_x1);  //newobj				void Root::T_x89::T_x18::.ctor(System::Object^,System::IntPtr)
	IL_03e7:                                                                        //ldc.i4.0
	IL_03e8:            Temp_26=gcnew array<System::Object^>(0);                    //newarr				System::Object
	IL_03ed:            V_7=Temp_26;                                                //stloc.s				V_7
	IL_03ef:                                                                        //ldloc.s				V_7
	IL_03f1:            Temp_27=this->BeginInvoke(safe_cast<System::Delegate^>(Temp_25),V_7);//call				System::IAsyncResult^ System::Windows::Forms::Control::BeginInvoke(System::Delegate^,array<System::Object^>^)
	IL_03f6:            this->F_x7=Temp_27;                                         //stfld				System::IAsyncResult^ Root::T_x89 F_x7
	IL_03fb:                                                                        //ldloc.1
	IL_03fc:            V_1->Clear();                                               //callvirt				void System::Collections::ArrayList::Clear()
	IL_0401:                                                                        //ldarg.0
	IL_0402:            Temp_28=this->F_x15;                                        //ldfld				Root::T_x89::T_x4 Root::T_x89 F_x15
	IL_0407:            V_8=Temp_28;                                                //stloc.s				V_8
	IL_0409:                                                                        //ldc.i4				0x6
	IL_040e:            V_9=6;                                                      //stloc				V_9
	IL_0412:            /*goto IL_0005;*/goto IL_0417;                              //br				IL_0005
	IL_0417:                                                                        //ldloc.s				V_8
	IL_0419:            switch(safe_cast<System::Int32>(V_8)){case 0:goto IL_0285;case 1:goto IL_00b2;case 2:goto IL_018b;};//switch				(IL_0285,IL_00b2,IL_018b)
	IL_042a:                                                                        //ldc.i4				0xa
	IL_042f:            V_9=10;                                                     //stloc				V_9
	IL_0433:            /*goto IL_0005;*/goto IL_0438;                              //br				IL_0005
	IL_0438:            goto IL_010d;                                               //br				IL_010d
	IL_043d:                                                                        //ldloc.0
	IL_043e:                                                                        //ldc.i4.1
	IL_043f:                                                                        //add
	IL_0440:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0441:                                                                        //ldc.i4				0x0
	IL_0446:            V_9=0;                                                      //stloc				V_9
	IL_044a:            /*goto IL_0005;*/goto IL_044f;                              //br				IL_0005
	IL_044f:                                                                        //ldloc.0
	IL_0450:                                                                        //ldc.i4				0x100
	IL_0455:            if(V_0<=256)goto IL_01ee;                                   //ble				IL_01ee
	IL_045a:                                                                        //ldc.i4				0xe
	IL_045f:            V_9=14;                                                     //stloc				V_9
	IL_0463:            /*goto IL_0005;*/goto IL_0468;                              //br				IL_0005
	IL_0468:            goto IL_0178;                                               //br				IL_0178
	IL_046d:                                                                        //ldc.i4				0x3
	IL_0472:            V_9=3;                                                      //stloc				V_9
	IL_0476:            /*goto IL_0005;*/goto IL_047b;                              //br				IL_0005
	IL_047b:            goto IL_00e4;                                               //br				IL_00e4
	IL_0480:                                                                        //ldc.i4				0x9
	IL_0485:            V_9=9;                                                      //stloc				V_9
	IL_0489:            /*goto IL_0005;*/goto IL_048e;                              //br				IL_0005
	IL_048e:            goto IL_04c5;                                               //leave.s				IL_04c5
	                    ;}
	                    catch(System::Exception^ Ex_048E02){
	IL_0490:            V_4=Ex_048E02;                                              //stloc.s				V_4
	IL_0492:                                                                        //ldarg.0
	IL_0493:                                                                        //ldftn				void Root::T_x89::M_x1(System::Exception^)
	IL_0499:            Temp_39=gcnew Root::T_x89::T_x10(this,&Root::T_x89::M_x1);  //newobj				void Root::T_x89::T_x10::.ctor(System::Object^,System::IntPtr)
	IL_049e:            V_5=Temp_39;                                                //stloc.s				V_5
	IL_04a0:                                                                        //ldarg.0
	IL_04a1:                                                                        //ldloc.s				V_5
	IL_04a3:                                                                        //ldc.i4.1
	IL_04a4:            Temp_40=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_04a9:            V_7=Temp_40;                                                //stloc.s				V_7
	IL_04ab:                                                                        //ldloc.s				V_7
	IL_04ad:                                                                        //ldc.i4.0
	IL_04ae:                                                                        //ldloc.s				V_4
	IL_04b0:            V_7[0]=safe_cast<System::Object^>(V_4);                     //stelem.ref
	IL_04b1:                                                                        //ldloc.s				V_7
	IL_04b3:            Temp_41=this->BeginInvoke(safe_cast<System::Delegate^>(V_5),V_7);//call				System::IAsyncResult^ System::Windows::Forms::Control::BeginInvoke(System::Delegate^,array<System::Object^>^)
	IL_04b8:            V_6=Temp_41;                                                //stloc.s				V_6
	IL_04ba:                                                                        //ldarg.0
	IL_04bb:                                                                        //ldloc.s				V_6
	IL_04bd:            Temp_42=this->EndInvoke(V_6);                               //call				System::Object^ System::Windows::Forms::Control::EndInvoke(System::IAsyncResult^)
	IL_04c2:                                                                        //pop
	IL_04c3:            goto IL_04c5;                                               //leave.s				IL_04c5
	                    ;}
	IL_04c5:                                                                        //ldarg.0
	IL_04c6:                                                                        //ldnull
	IL_04c7:            this->F_x13=safe_cast<Root::T_x121^>(nullptr);              //stfld				Root::T_x121^ Root::T_x89 F_x13
	IL_04cc:            goto IL_04ce;                                               //br.s				IL_04ce
	IL_04ce:            goto IL_04d1;                                               //br.s				IL_04d1
	IL_04d0:                                                                        //break
	IL_04d1:            return;                                                     //ret

}
inline System::Windows::Forms::ListViewItem^ Root::T_x89::M_x2(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x2^ Temp_0 = nullptr;
	Root::T_x89::T_x13^ Temp_1 = nullptr;
	Root::T_x89::T_x7^ Temp_2 = nullptr;
	Root::T_x89::T_x8^ Temp_3 = nullptr;
	System::NotSupportedException^ Temp_4 = nullptr;
	Root::T_x89::T_x12^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Root::T_x89::T_x2^ V_1 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_2 = nullptr;
	Root::T_x89::T_x8^ V_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_4 = nullptr;
	Root::T_x89::T_x12^ V_5 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_6 = nullptr;
	Root::T_x89::T_x13^ V_7 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_8 = nullptr;
	Root::T_x89::T_x7^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_10
	IL_0006:            switch(V_10){case 0:goto IL_005e;case 1:goto IL_011b;case 2:goto IL_00e2;case 3:goto IL_009e;case 4:goto IL_0149;case 5:goto IL_00b2;case 6:goto IL_00cd;case 7:goto IL_0050;case 8:goto IL_015b;case 9:goto IL_0109;};//switch				(IL_005e,IL_011b,IL_00e2,IL_009e,IL_0149,IL_00b2,IL_00cd,IL_0050,IL_015b,IL_0109)
	IL_0033:                                                                        //ldc.i4.5
	IL_0034:                                                                        //dup
	IL_0035:                                                                        //dup
	IL_0036:                                                                        //ldc.i4.6
	IL_0037:                                                                        //sub
	IL_0038:                                                                        //blt				IL_0034
	IL_003d:                                                                        //pop
	IL_003e:                                                                        //ldarg.1
	IL_003f:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0044:            V_0=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.0
	IL_0045:                                                                        //ldc.i4				0x7
	IL_004a:            V_10=7;                                                     //stloc				V_10
	IL_004e:            /*goto IL_0002;*/goto IL_0050;                              //br.s				IL_0002
	IL_0050:                                                                        //ldloc.0
	IL_0051:            if(V_0==nullptr)goto IL_0089;                               //brfalse.s				IL_0089
	IL_0053:                                                                        //ldc.i4				0x0
	IL_0058:            V_10=0;                                                     //stloc				V_10
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:            goto IL_00e4;                                               //br				IL_00e4
	IL_0063:            Temp_1=gcnew Root::T_x89::T_x13();                          //newobj				void Root::T_x89::T_x13::.ctor()
	IL_0068:            V_7=Temp_1;                                                 //stloc.s				V_7
	IL_006a:                                                                        //ldloc.s				V_7
	IL_006c:                                                                        //ldloc.s				V_6
	IL_006e:            V_7->M_x1(V_6);                                             //callvirt				void Root::T_x89::T_x13::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0073:                                                                        //ldloc.s				V_7
	IL_0075:            return safe_cast<System::Windows::Forms::ListViewItem^>(V_7);//ret
	IL_0076:            Temp_5=gcnew Root::T_x89::T_x12();                          //newobj				void Root::T_x89::T_x12::.ctor()
	IL_007b:            V_5=Temp_5;                                                 //stloc.s				V_5
	IL_007d:                                                                        //ldloc.s				V_5
	IL_007f:                                                                        //ldloc.s				V_4
	IL_0081:            V_5->M_x1(V_4);                                             //callvirt				void Root::T_x89::T_x12::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0086:                                                                        //ldloc.s				V_5
	IL_0088:            return safe_cast<System::Windows::Forms::ListViewItem^>(V_5);//ret
	IL_0089:                                                                        //ldarg.1
	IL_008a:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_008f:            V_2=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.2
	IL_0090:                                                                        //ldc.i4				0x3
	IL_0095:            V_10=3;                                                     //stloc				V_10
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:                                                                        //ldloc.2
	IL_009f:            if(V_2==nullptr)goto IL_0133;                               //brfalse				IL_0133
	IL_00a4:                                                                        //ldc.i4				0x5
	IL_00a9:            V_10=5;                                                     //stloc				V_10
	IL_00ad:            /*goto IL_0002;*/goto IL_00b2;                              //br				IL_0002
	IL_00b2:            goto IL_0160;                                               //br				IL_0160
	IL_00b7:                                                                        //ldarg.1
	IL_00b8:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_00bd:            V_8=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(A_0);//stloc.s				V_8
	IL_00bf:                                                                        //ldc.i4				0x6
	IL_00c4:            V_10=6;                                                     //stloc				V_10
	IL_00c8:            /*goto IL_0002;*/goto IL_00cd;                              //br				IL_0002
	IL_00cd:                                                                        //ldloc.s				V_8
	IL_00cf:            if(V_8==nullptr)goto IL_016f;                               //brfalse				IL_016f
	IL_00d4:                                                                        //ldc.i4				0x2
	IL_00d9:            V_10=2;                                                     //stloc				V_10
	IL_00dd:            /*goto IL_0002;*/goto IL_00e2;                              //br				IL_0002
	IL_00e2:            goto IL_0120;                                               //br.s				IL_0120
	IL_00e4:            Temp_0=gcnew Root::T_x89::T_x2();                           //newobj				void Root::T_x89::T_x2::.ctor()
	IL_00e9:            V_1=Temp_0;                                                 //stloc.1
	IL_00ea:                                                                        //ldloc.1
	IL_00eb:                                                                        //ldloc.0
	IL_00ec:            V_1->M_x1(V_0);                                             //callvirt				void Root::T_x89::T_x2::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00f1:                                                                        //ldloc.1
	IL_00f2:            return safe_cast<System::Windows::Forms::ListViewItem^>(V_1);//ret
	IL_00f3:                                                                        //ldarg.1
	IL_00f4:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_00f9:            V_6=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(A_0);//stloc.s				V_6
	IL_00fb:                                                                        //ldc.i4				0x9
	IL_0100:            V_10=9;                                                     //stloc				V_10
	IL_0104:            /*goto IL_0002;*/goto IL_0109;                              //br				IL_0002
	IL_0109:                                                                        //ldloc.s				V_6
	IL_010b:            if(V_6==nullptr)goto IL_00b7;                               //brfalse.s				IL_00b7
	IL_010d:                                                                        //ldc.i4				0x1
	IL_0112:            V_10=1;                                                     //stloc				V_10
	IL_0116:            /*goto IL_0002;*/goto IL_011b;                              //br				IL_0002
	IL_011b:            goto IL_0063;                                               //br				IL_0063
	IL_0120:            Temp_2=gcnew Root::T_x89::T_x7();                           //newobj				void Root::T_x89::T_x7::.ctor()
	IL_0125:            V_9=Temp_2;                                                 //stloc.s				V_9
	IL_0127:                                                                        //ldloc.s				V_9
	IL_0129:                                                                        //ldloc.s				V_8
	IL_012b:            V_9->M_x1(V_8);                                             //callvirt				void Root::T_x89::T_x7::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_0130:                                                                        //ldloc.s				V_9
	IL_0132:            return safe_cast<System::Windows::Forms::ListViewItem^>(V_9);//ret
	IL_0133:                                                                        //ldarg.1
	IL_0134:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_0139:            V_4=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.s				V_4
	IL_013b:                                                                        //ldc.i4				0x4
	IL_0140:            V_10=4;                                                     //stloc				V_10
	IL_0144:            /*goto IL_0002;*/goto IL_0149;                              //br				IL_0002
	IL_0149:                                                                        //ldloc.s				V_4
	IL_014b:            if(V_4==nullptr)goto IL_00f3;                               //brfalse.s				IL_00f3
	IL_014d:                                                                        //ldc.i4				0x8
	IL_0152:            V_10=8;                                                     //stloc				V_10
	IL_0156:            /*goto IL_0002;*/goto IL_015b;                              //br				IL_0002
	IL_015b:            goto IL_0076;                                               //br				IL_0076
	IL_0160:            Temp_3=gcnew Root::T_x89::T_x8();                           //newobj				void Root::T_x89::T_x8::.ctor()
	IL_0165:            V_3=Temp_3;                                                 //stloc.3
	IL_0166:                                                                        //ldloc.3
	IL_0167:                                                                        //ldloc.2
	IL_0168:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x89::T_x8::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_016d:                                                                        //ldloc.3
	IL_016e:            return safe_cast<System::Windows::Forms::ListViewItem^>(V_3);//ret
	IL_016f:            Temp_4=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0174:            throw Temp_4;                                               //throw

}
inline void Root::T_x89::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x11^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Root::T_x89::T_x11^ Temp_2 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_3 = nullptr;
	Root::T_x89::T_x11^ Temp_4 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_6 = nullptr;
	Root::T_x89::T_x11^ Temp_7 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_8 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_9 = nullptr;
	Root::T_x89::T_x11^ Temp_10 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_004b;case 2:goto IL_00a5;};//switch				(IL_000b,IL_004b,IL_00a5)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_10=this->F_x9;                                         //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0028:            Temp_11=Temp_10->Items;                                     //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_002d:            Temp_12=Temp_11->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_0032:                                                                        //ldc.i4.0
	IL_0033:            if(Temp_12<=0)goto IL_00a7;                                 //ble.s				IL_00a7
	IL_0035:                                                                        //ldc.i4.2
	IL_0036:                                                                        //dup
	IL_0037:                                                                        //dup
	IL_0038:                                                                        //ldc.i4.7
	IL_0039:                                                                        //add
	IL_003a:                                                                        //bgt				IL_0036
	IL_003f:                                                                        //pop
	IL_0040:                                                                        //ldc.i4				0x1
	IL_0045:            V_0=1;                                                      //stloc				V_0
	IL_0049:            /*goto IL_000d;*/goto IL_004b;                              //br.s				IL_000d
	IL_004b:            goto IL_004d;                                               //br.s				IL_004d
	IL_004d:                                                                        //ldarg.0
	IL_004e:            Temp_0=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0053:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0058:                                                                        //pop
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_005f:            Temp_3=Temp_2->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0064:            Temp_3->Clear();                                            //callvirt				void System::Windows::Forms::ListView::SelectedListViewItemCollection::Clear()
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_006f:            Temp_5=Temp_4->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0074:                                                                        //ldc.i4.0
	IL_0075:            Temp_6=Temp_5[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_007a:                                                                        //ldc.i4.1
	IL_007b:            Temp_6->Selected=true;                                      //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_0080:                                                                        //ldarg.0
	IL_0081:            Temp_7=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_0086:            Temp_8=Temp_7->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_008b:                                                                        //ldc.i4.0
	IL_008c:            Temp_9=Temp_8[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_0091:                                                                        //ldc.i4.1
	IL_0092:            Temp_9->Focused=true;                                       //callvirt				void System::Windows::Forms::ListViewItem::set_Focused(System::Boolean)
	IL_0097:                                                                        //ldc.i4				0x2
	IL_009c:            V_0=2;                                                      //stloc				V_0
	IL_00a0:            /*goto IL_000d;*/goto IL_00a5;                              //br				IL_000d
	IL_00a5:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_00a7:            return;                                                     //ret

}
inline void Root::T_x89::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x1^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Root::T_x89::T_x1^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_0006:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_000b:                                                                        //pop
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_2=this->F_x5;                                          //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_0012:            Temp_2->M_x12();                                            //callvirt				void Root::T_x89::T_x1::M_x12()
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x89::OnEnter(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x1^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::ContainerControl::OnEnter(e);       //call				void System::Windows::Forms::ContainerControl::OnEnter(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x5;                                          //ldfld				Root::T_x89::T_x1^ Root::T_x89 F_x5
	IL_000d:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0012:                                                                        //pop
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x89::OnParentChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	Root::T_x89::T_x11^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::ContainerControl::OnParentChanged(e);//call				void System::Windows::Forms::ContainerControl::OnParentChanged(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_000d:            if(Temp_0==nullptr)goto IL_001b;                            //brfalse.s				IL_001b
	IL_000f:            goto IL_0012;                                               //br.s				IL_0012
	IL_0011:                                                                        //break
	IL_0012:            goto IL_0014;                                               //br.s				IL_0014
	IL_0014:                                                                        //ldarg.0
	IL_0015:            this->M_x12();                                              //call				void Root::T_x89::M_x12()
	IL_001a:            return;                                                     //ret
	IL_001b:                                                                        //ldarg.0
	IL_001c:            this->M_x13();                                              //call				void Root::T_x89::M_x13()
	IL_0021:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_1=this->F_x9;                                          //ldfld				Root::T_x89::T_x11^ Root::T_x89 F_x9
	IL_002c:            Temp_2=Temp_1->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0031:            Temp_2->Clear();                                            //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::Clear()
	IL_0036:            return;                                                     //ret

}
inline Root::T_x89::T_x16::T_x16(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Collections::ArrayList^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	array<System::String^>^ Temp_11 = nullptr;
	array<System::String^>^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Char Temp_14 = (System::Char)0;
	System::Int32 Temp_15 = 0;
	System::String^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::Char Temp_20 = (System::Char)0;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::Int32 Temp_24 = 0;
	System::String^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	System::Char Temp_27 = (System::Char)0;
	System::Char Temp_28 = (System::Char)0;
	System::Int32 Temp_29 = 0;
	System::Int32 Temp_30 = 0;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Boolean V_2 = false;
	System::Int32 V_3 = 0;
	System::String^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::String^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_7=7;                                                      //stloc				V_7
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldnull
	IL_000b:            this->F_x1=safe_cast<array<System::String^>^>(nullptr);     //stfld				array<System::String^>^ Root::T_x89::T_x16 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldnull
	IL_0018:            this->F_x1=safe_cast<array<System::String^>^>(nullptr);     //stfld				array<System::String^>^ Root::T_x89::T_x16 F_x1
	IL_001d:                                                                        //ldarg.1
	IL_001e:            if(A_0==nullptr)goto IL_01be;                               //brfalse				IL_01be
	IL_0023:            goto IL_0106;                                               //br				IL_0106
	IL_0028:                                                                        //ldarg.1
	IL_0029:                                                                        //ldloc.3
	IL_002a:            Temp_14=A_0[V_3];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_002f:                                                                        //ldc.i4.s				32
	IL_0031:            if(Temp_14!=(System::Char)32)goto IL_01d2;                  //bne.un				IL_01d2
	IL_0036:            goto IL_0099;                                               //br.s				IL_0099
	IL_0038:                                                                        //ldarg.1
	IL_0039:                                                                        //ldloc.1
	IL_003a:                                                                        //ldloc.3
	IL_003b:                                                                        //ldloc.1
	IL_003c:                                                                        //sub
	IL_003d:                                                                        //ldc.i4.1
	IL_003e:                                                                        //add
	IL_003f:            Temp_21=A_0->Substring(V_1,((V_3 - V_1) + 1));              //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0044:            V_4=Temp_21;                                                //stloc.s				V_4
	IL_0046:                                                                        //ldloc.s				V_4
	IL_0048:                                                                        //ldstr				L"\x0724"
	IL_004d:                                                                        //ldloc				V_7
	IL_0051:            Temp_22=a(L"\x0724",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0056:            Temp_23=V_4->EndsWith(Temp_22);                             //callvirt				System::Boolean System::String::EndsWith(System::String^)
	IL_005b:            if(Temp_23)goto IL_0182;                                    //brtrue				IL_0182
	IL_0060:            goto IL_01ac;                                               //br				IL_01ac
	IL_0065:                                                                        //ldloc.1
	IL_0066:                                                                        //ldc.i4.m1
	IL_0067:            if(V_1!=-1)goto IL_0197;                                    //bne.un				IL_0197
	IL_006c:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_006e:                                                                        //ldloc.3
	IL_006f:                                                                        //ldc.i4.1
	IL_0070:                                                                        //add
	IL_0071:            V_3=(V_3 + 1);                                              //stloc.3
	IL_0072:            goto IL_00da;                                               //br.s				IL_00da
	IL_0074:                                                                        //ldarg.1
	IL_0075:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_007a:            Temp_6=A_0->ToLower(Temp_5);                                //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_007f:            A_0=Temp_6;                                                 //starg.s				A_0
	IL_0081:                                                                        //ldc.i4.0
	IL_0082:            Temp_7=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0087:            V_0=Temp_7;                                                 //stloc.0
	IL_0088:                                                                        //ldarg.1
	IL_0089:            Temp_8=A_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_008e:                                                                        //ldc.i4.1
	IL_008f:            if(Temp_8<=1)goto IL_00e8;                                  //ble				IL_00e8
	IL_0094:            goto IL_0152;                                               //br				IL_0152
	IL_0099:                                                                        //ldarg.1
	IL_009a:                                                                        //ldloc.1
	IL_009b:                                                                        //ldloc.3
	IL_009c:                                                                        //ldloc.1
	IL_009d:                                                                        //sub
	IL_009e:            Temp_18=A_0->Substring(V_1,(V_3 - V_1));                    //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_00a3:            V_5=Temp_18;                                                //stloc.s				V_5
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:                                                                        //ldloc.s				V_5
	IL_00a8:            Temp_19=V_0->Add(safe_cast<System::Object^>(V_5));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00ad:                                                                        //pop
	IL_00ae:                                                                        //ldc.i4.m1
	IL_00af:            V_1=-1;                                                     //stloc.1
	IL_00b0:            goto IL_006e;                                               //br.s				IL_006e
	IL_00b2:            goto IL_01e2;                                               //br				IL_01e2
	IL_00b7:                                                                        //ldloc.3
	IL_00b8:                                                                        //ldarg.1
	IL_00b9:            Temp_26=A_0->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_00be:                                                                        //ldc.i4.1
	IL_00bf:                                                                        //sub
	IL_00c0:            if(V_3!=(Temp_26 - 1))goto IL_006e;                         //bne.un				IL_006e
	IL_00c5:            goto IL_0038;                                               //br				IL_0038
	IL_00ca:                                                                        //ldarg.1
	IL_00cb:                                                                        //ldloc.3
	IL_00cc:            Temp_27=A_0[V_3];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_00d1:                                                                        //ldc.i4.s				32
	IL_00d3:            if(Temp_27==(System::Char)32)goto IL_006e;                  //beq				IL_006e
	IL_00d8:            goto IL_0143;                                               //br.s				IL_0143
	IL_00da:                                                                        //ldloc.3
	IL_00db:                                                                        //ldarg.1
	IL_00dc:            Temp_13=A_0->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_00e1:            if(V_3<Temp_13)goto IL_0065;                                //blt				IL_0065
	IL_00e6:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_00e8:                                                                        //ldloc.0
	IL_00e9:                                                                        //ldarg.1
	IL_00ea:            Temp_9=V_0->Add(safe_cast<System::Object^>(A_0));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00ef:                                                                        //pop
	IL_00f0:            goto IL_01e2;                                               //br				IL_01e2
	IL_00f5:                                                                        //ldarg.1
	IL_00f6:            Temp_29=A_0->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_00fb:                                                                        //ldc.i4.1
	IL_00fc:            if(Temp_29!=1)goto IL_006e;                                 //bne.un				IL_006e
	IL_0101:            goto IL_019f;                                               //br				IL_019f
	IL_0106:                                                                        //ldarg.1
	IL_0107:                                                                        //ldstr				L"\x0724"
	IL_010c:                                                                        //ldloc				V_7
	IL_0110:            Temp_0=a(L"\x0724",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0115:                                                                        //ldstr				""
	IL_011a:            Temp_1=A_0->Replace(Temp_0,"");                             //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_011f:                                                                        //ldstr				L"\x0524"
	IL_0124:                                                                        //ldloc				V_7
	IL_0128:            Temp_2=a(L"\x0524",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012d:                                                                        //ldstr				""
	IL_0132:            Temp_3=Temp_1->Replace(Temp_2,"");                          //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0137:            Temp_4=Temp_3->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_013c:            if(Temp_4!=0)goto IL_0074;                                  //brtrue				IL_0074
	IL_0141:            goto IL_01be;                                               //br.s				IL_01be
	IL_0143:                                                                        //ldloc.3
	IL_0144:            V_1=V_3;                                                    //stloc.1
	IL_0145:                                                                        //ldarg.1
	IL_0146:                                                                        //ldloc.3
	IL_0147:            Temp_28=A_0[V_3];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_014c:                                                                        //ldc.i4.s				34
	IL_014e:            if(Temp_28!=(System::Char)34)goto IL_00f5;                  //bne.un.s				IL_00f5
	IL_0150:            goto IL_015d;                                               //br.s				IL_015d
	IL_0152:                                                                        //ldc.i4.m1
	IL_0153:            V_1=-1;                                                     //stloc.1
	IL_0154:                                                                        //ldc.i4.0
	IL_0155:            V_2=false;                                                  //stloc.2
	IL_0156:                                                                        //ldc.i4.0
	IL_0157:            V_3=0;                                                      //stloc.3
	IL_0158:            goto IL_00da;                                               //br				IL_00da
	IL_015d:                                                                        //ldloc.2
	IL_015e:                                                                        //ldc.i4.0
	IL_015f:                                                                        //ceq
	IL_0161:            V_2=(V_2 == false);                                         //stloc.2
	IL_0162:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_0164:                                                                        //ldarg.1
	IL_0165:                                                                        //ldloc.1
	IL_0166:                                                                        //ldloc.3
	IL_0167:                                                                        //ldloc.1
	IL_0168:                                                                        //sub
	IL_0169:                                                                        //ldc.i4.1
	IL_016a:                                                                        //add
	IL_016b:            Temp_16=A_0->Substring(V_1,((V_3 - V_1) + 1));              //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0170:            V_6=Temp_16;                                                //stloc.s				V_6
	IL_0172:                                                                        //ldloc.0
	IL_0173:                                                                        //ldloc.s				V_6
	IL_0175:            Temp_17=V_0->Add(safe_cast<System::Object^>(V_6));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_017a:                                                                        //pop
	IL_017b:                                                                        //ldc.i4.m1
	IL_017c:            V_1=-1;                                                     //stloc.1
	IL_017d:            goto IL_006e;                                               //br				IL_006e
	IL_0182:                                                                        //ldloc.0
	IL_0183:                                                                        //ldloc.s				V_4
	IL_0185:            Temp_24=V_0->Add(safe_cast<System::Object^>(V_4));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_018a:                                                                        //pop
	IL_018b:                                                                        //ldloc.2
	IL_018c:                                                                        //ldc.i4.0
	IL_018d:                                                                        //ceq
	IL_018f:            V_2=(V_2 == false);                                         //stloc.2
	IL_0190:                                                                        //ldc.i4.m1
	IL_0191:            V_1=-1;                                                     //stloc.1
	IL_0192:            goto IL_006e;                                               //br				IL_006e
	IL_0197:                                                                        //ldloc.2
	IL_0198:            if(!V_2)goto IL_0028;                                       //brfalse				IL_0028
	IL_019d:            goto IL_01bf;                                               //br.s				IL_01bf
	IL_019f:                                                                        //ldloc.0
	IL_01a0:                                                                        //ldarg.1
	IL_01a1:            Temp_30=V_0->Add(safe_cast<System::Object^>(A_0));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01a6:                                                                        //pop
	IL_01a7:            goto IL_006e;                                               //br				IL_006e
	IL_01ac:                                                                        //ldloc.s				V_4
	IL_01ae:                                                                        //ldc.i4.s				34
	IL_01b0:                                                                        //box				System::Char
	IL_01b5:            Temp_25=System::String::Concat(safe_cast<System::Object^>(V_4),safe_cast<System::Object^>((System::Char)34));//call				System::String^ System::String::Concat(System::Object^,System::Object^)
	IL_01ba:            V_4=Temp_25;                                                //stloc.s				V_4
	IL_01bc:            goto IL_0182;                                               //br.s				IL_0182
	IL_01be:            return;                                                     //ret
	IL_01bf:                                                                        //ldarg.1
	IL_01c0:                                                                        //ldloc.3
	IL_01c1:            Temp_20=A_0[V_3];                                           //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_01c6:                                                                        //ldc.i4.s				34
	IL_01c8:            if(Temp_20==(System::Char)34)goto IL_0038;                  //beq				IL_0038
	IL_01cd:            goto IL_00b7;                                               //br				IL_00b7
	IL_01d2:                                                                        //ldloc.3
	IL_01d3:                                                                        //ldarg.1
	IL_01d4:            Temp_15=A_0->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_01d9:                                                                        //ldc.i4.1
	IL_01da:                                                                        //sub
	IL_01db:            if(V_3!=(Temp_15 - 1))goto IL_006e;                         //bne.un				IL_006e
	IL_01e0:            goto IL_0164;                                               //br.s				IL_0164
	IL_01e2:                                                                        //ldarg.0
	IL_01e3:                                                                        //ldloc.0
	IL_01e4:            Temp_10=V_0->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_01e9:                                                                        //conv.ovf.u4
	IL_01ea:            Temp_11=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_10));//newarr				System::String
	IL_01ef:            this->F_x1=Temp_11;                                         //stfld				array<System::String^>^ Root::T_x89::T_x16 F_x1
	IL_01f4:                                                                        //ldloc.0
	IL_01f5:                                                                        //ldarg.0
	IL_01f6:            Temp_12=this->F_x1;                                         //ldfld				array<System::String^>^ Root::T_x89::T_x16 F_x1
	IL_01fb:                                                                        //ldc.i4.0
	IL_01fc:            V_0->CopyTo(safe_cast<System::Array^>(Temp_12),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_0201:            return;                                                     //ret

}
inline System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	array<System::String^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Int32 Temp_3 = 0;
	array<System::String^>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	array<System::String^>^ Temp_6 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_2=13;                                                     //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0052;                                               //br.s				IL_0052
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0068;case 1:goto IL_00a2;case 2:goto IL_017c;case 3:goto IL_00b9;case 4:goto IL_00de;case 5:goto IL_013d;case 6:goto IL_0165;case 7:goto IL_00fd;case 8:goto IL_0155;case 9:goto IL_0110;case 10:goto IL_0129;case 11:goto IL_00cb;case 12:goto IL_0079;case 13:goto IL_000b;case 14:goto IL_008c;};//switch				(IL_0068,IL_00a2,IL_017c,IL_00b9,IL_00de,IL_013d,IL_0165,IL_00fd,IL_0155,IL_0110,IL_0129,IL_00cb,IL_0079,IL_000b,IL_008c)
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_6=this->F_x1;                                          //ldfld				array<System::String^>^ Root::T_x89::T_x16 F_x1
	IL_0058:            if(Temp_6==nullptr)goto IL_0181;                            //brfalse				IL_0181
	IL_005d:                                                                        //ldc.i4				0x0
	IL_0062:            V_2=0;                                                      //stloc				V_2
	IL_0066:            /*goto IL_000d;*/goto IL_0068;                              //br.s				IL_000d
	IL_0068:            goto IL_00bb;                                               //br.s				IL_00bb
	IL_006a:                                                                        //ldc.i4.0
	IL_006b:            return false;                                               //ret
	IL_006c:                                                                        //ldc.i4.0
	IL_006d:            V_1=0;                                                      //stloc.1
	IL_006e:                                                                        //ldc.i4				0xc
	IL_0073:            V_2=12;                                                     //stloc				V_2
	IL_0077:            /*goto IL_000d;*/goto IL_0079;                              //br.s				IL_000d
	IL_0079:            goto IL_0102;                                               //br				IL_0102
	IL_007e:            goto IL_0081;                                               //br.s				IL_0081
	IL_0080:                                                                        //break
	IL_0081:                                                                        //ldc.i4				0xe
	IL_0086:            V_2=14;                                                     //stloc				V_2
	IL_008a:            /*goto IL_000d;*/goto IL_008c;                              //br.s				IL_000d
	IL_008c:                                                                        //ldarg.1
	IL_008d:                                                                        //ldloc.0
	IL_008e:                                                                        //ldelem.ref
	IL_008f:            if(A_0[V_0]!=nullptr)goto IL_012b;                          //brtrue				IL_012b
	IL_0094:                                                                        //ldc.i4				0x1
	IL_0099:            V_2=1;                                                      //stloc				V_2
	IL_009d:            /*goto IL_000d;*/goto IL_00a2;                              //br				IL_000d
	IL_00a2:            goto IL_013f;                                               //br				IL_013f
	IL_00a7:                                                                        //ldloc.1
	IL_00a8:                                                                        //ldc.i4.1
	IL_00a9:                                                                        //add
	IL_00aa:            V_1=(V_1 + 1);                                              //stloc.1
	IL_00ab:                                                                        //ldc.i4				0x3
	IL_00b0:            V_2=3;                                                      //stloc				V_2
	IL_00b4:            /*goto IL_000d;*/goto IL_00b9;                              //br				IL_000d
	IL_00b9:            goto IL_0102;                                               //br.s				IL_0102
	IL_00bb:                                                                        //ldc.i4.0
	IL_00bc:            V_0=0;                                                      //stloc.0
	IL_00bd:                                                                        //ldc.i4				0xb
	IL_00c2:            V_2=11;                                                     //stloc				V_2
	IL_00c6:            /*goto IL_000d;*/goto IL_00cb;                              //br				IL_000d
	IL_00cb:            goto IL_0157;                                               //br				IL_0157
	IL_00d0:                                                                        //ldc.i4				0x4
	IL_00d5:            V_2=4;                                                      //stloc				V_2
	IL_00d9:            /*goto IL_000d;*/goto IL_00de;                              //br				IL_000d
	IL_00de:                                                                        //ldarg.0
	IL_00df:                                                                        //ldarg.0
	IL_00e0:            Temp_1=this->F_x1;                                          //ldfld				array<System::String^>^ Root::T_x89::T_x16 F_x1
	IL_00e5:                                                                        //ldloc.1
	IL_00e6:                                                                        //ldelem.ref
	IL_00e7:                                                                        //ldarg.1
	IL_00e8:            Temp_2=this->M_x1(Temp_1[V_1],A_0);                         //call				System::Boolean Root::T_x89::T_x16::M_x1(System::String^,array<System::String^>^)
	IL_00ed:            if(Temp_2)goto IL_00a7;                                     //brtrue.s				IL_00a7
	IL_00ef:                                                                        //ldc.i4				0x7
	IL_00f4:            V_2=7;                                                      //stloc				V_2
	IL_00f8:            /*goto IL_000d;*/goto IL_00fd;                              //br				IL_000d
	IL_00fd:            goto IL_006a;                                               //br				IL_006a
	IL_0102:                                                                        //ldc.i4				0x9
	IL_0107:            V_2=9;                                                      //stloc				V_2
	IL_010b:            /*goto IL_000d;*/goto IL_0110;                              //br				IL_000d
	IL_0110:                                                                        //ldloc.1
	IL_0111:                                                                        //ldarg.0
	IL_0112:            Temp_4=this->F_x1;                                          //ldfld				array<System::String^>^ Root::T_x89::T_x16 F_x1
	IL_0117:            Temp_5=Temp_4->Length;                                      //ldlen
	IL_0118:                                                                        //conv.i4
	IL_0119:            if(V_1<Temp_5)goto IL_00d0;                                 //blt.s				IL_00d0
	IL_011b:                                                                        //ldc.i4				0xa
	IL_0120:            V_2=10;                                                     //stloc				V_2
	IL_0124:            /*goto IL_000d;*/goto IL_0129;                              //br				IL_000d
	IL_0129:            goto IL_0181;                                               //br.s				IL_0181
	IL_012b:                                                                        //ldloc.0
	IL_012c:                                                                        //ldc.i4.1
	IL_012d:                                                                        //add
	IL_012e:            V_0=(V_0 + 1);                                              //stloc.0
	IL_012f:                                                                        //ldc.i4				0x5
	IL_0134:            V_2=5;                                                      //stloc				V_2
	IL_0138:            /*goto IL_000d;*/goto IL_013d;                              //br				IL_000d
	IL_013d:            goto IL_0157;                                               //br.s				IL_0157
	IL_013f:                                                                        //ldarg.1
	IL_0140:                                                                        //ldloc.0
	IL_0141:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0146:            A_0[V_0]=Temp_0;                                            //stelem.ref
	IL_0147:                                                                        //ldc.i4				0x8
	IL_014c:            V_2=8;                                                      //stloc				V_2
	IL_0150:            /*goto IL_000d;*/goto IL_0155;                              //br				IL_000d
	IL_0155:            goto IL_012b;                                               //br.s				IL_012b
	IL_0157:                                                                        //ldc.i4				0x6
	IL_015c:            V_2=6;                                                      //stloc				V_2
	IL_0160:            /*goto IL_000d;*/goto IL_0165;                              //br				IL_000d
	IL_0165:                                                                        //ldloc.0
	IL_0166:                                                                        //ldarg.1
	IL_0167:            Temp_3=A_0->Length;                                         //ldlen
	IL_0168:                                                                        //conv.i4
	IL_0169:            if(V_0<Temp_3)goto IL_007e;                                 //blt				IL_007e
	IL_016e:                                                                        //ldc.i4				0x2
	IL_0173:            V_2=2;                                                      //stloc				V_2
	IL_0177:            /*goto IL_000d;*/goto IL_017c;                              //br				IL_000d
	IL_017c:            goto IL_006c;                                               //br				IL_006c
	IL_0181:                                                                        //ldc.i4.1
	IL_0182:            return true;                                                //ret

}
inline System::Boolean Root::T_x89::T_x16::M_x1(System::String^ A_0,array<System::String^>^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Int32 Temp_1 = 0;
	System::Globalization::CultureInfo^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Int32 Temp_11 = 0;
	System::Globalization::CultureInfo^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	array<System::Char>^ Temp_14 = nullptr;
	array<System::String^>^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::String^ V_1 = nullptr;
	array<System::String^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_6=3;                                                      //stloc				V_6
	IL_0009:                                                                        //ldc.i4				0x11
	IL_000e:            V_5=17;                                                     //stloc				V_5
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_007b;                                               //br.s				IL_007b
	IL_0016:                                                                        //ldloc				V_5
	IL_001a:            switch(V_5){case 0:goto IL_01b3;case 1:goto IL_00df;case 2:goto IL_027f;case 3:goto IL_0139;case 4:goto IL_01db;case 5:goto IL_0123;case 6:goto IL_0264;case 7:goto IL_018e;case 8:goto IL_01c6;case 9:goto IL_0229;case 10:goto IL_015f;case 11:goto IL_0179;case 12:goto IL_00cc;case 13:goto IL_0296;case 14:goto IL_0202;case 15:goto IL_02ab;case 16:goto IL_014f;case 17:goto IL_0014;case 18:goto IL_00fb;case 19:goto IL_00b5;case 20:goto IL_01f2;case 21:goto IL_02c2;case 22:goto IL_00a2;};//switch				(IL_01b3,IL_00df,IL_027f,IL_0139,IL_01db,IL_0123,IL_0264,IL_018e,IL_01c6,IL_0229,IL_015f,IL_0179,IL_00cc,IL_0296,IL_0202,IL_02ab,IL_014f,IL_0014,IL_00fb,IL_00b5,IL_01f2,IL_02c2,IL_00a2)
	IL_007b:                                                                        //ldarg.1
	IL_007c:                                                                        //ldstr				L"\x0320"
	IL_0081:                                                                        //ldloc				V_6
	IL_0085:            Temp_16=a(L"\x0320",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008a:            Temp_17=A_0->StartsWith(Temp_16);                           //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_008f:            if(!Temp_17)goto IL_0128;                                   //brfalse				IL_0128
	IL_0094:                                                                        //ldc.i4				0x16
	IL_0099:            V_5=22;                                                     //stloc				V_5
	IL_009d:            /*goto IL_0016;*/goto IL_00a2;                              //br				IL_0016
	IL_00a2:            goto IL_01f4;                                               //br				IL_01f4
	IL_00a7:                                                                        //ldc.i4				0x13
	IL_00ac:            V_5=19;                                                     //stloc				V_5
	IL_00b0:            /*goto IL_0016;*/goto IL_00b5;                              //br				IL_0016
	IL_00b5:            goto IL_02c7;                                               //br				IL_02c7
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:                                                                        //ldc.i4.1
	IL_00bc:                                                                        //add
	IL_00bd:            V_0=(V_0 + 1);                                              //stloc.0
	IL_00be:                                                                        //ldc.i4				0xc
	IL_00c3:            V_5=12;                                                     //stloc				V_5
	IL_00c7:            /*goto IL_0016;*/goto IL_00cc;                              //br				IL_0016
	IL_00cc:            goto IL_029d;                                               //br				IL_029d
	IL_00d1:                                                                        //ldc.i4				0x1
	IL_00d6:            V_5=1;                                                      //stloc				V_5
	IL_00da:            /*goto IL_0016;*/goto IL_00df;                              //br				IL_0016
	IL_00df:                                                                        //ldloc.2
	IL_00e0:                                                                        //ldloc.3
	IL_00e1:                                                                        //ldelem.ref
	IL_00e2:                                                                        //ldarg.1
	IL_00e3:            Temp_0=(V_2[V_3] == A_0);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00e8:            if(!Temp_0)goto IL_01e0;                                    //brfalse				IL_01e0
	IL_00ed:                                                                        //ldc.i4				0x12
	IL_00f2:            V_5=18;                                                     //stloc				V_5
	IL_00f6:            /*goto IL_0016;*/goto IL_00fb;                              //br				IL_0016
	IL_00fb:            goto IL_017e;                                               //br				IL_017e
	IL_0100:                                                                        //ldc.i4.1
	IL_0101:            return true;                                                //ret
	IL_0102:                                                                        //ldarg.1
	IL_0103:                                                                        //ldc.i4.1
	IL_0104:                                                                        //ldarg.1
	IL_0105:            Temp_6=A_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_010a:                                                                        //ldc.i4.2
	IL_010b:                                                                        //sub
	IL_010c:            Temp_7=A_0->Substring(safe_cast<System::Int32>(1),(Temp_6 - 2));//callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0111:            A_0=Temp_7;                                                 //starg.s				A_0
	IL_0113:                                                                        //ldc.i4.0
	IL_0114:            V_0=0;                                                      //stloc.0
	IL_0115:                                                                        //ldc.i4				0x5
	IL_011a:            V_5=5;                                                      //stloc				V_5
	IL_011e:            /*goto IL_0016;*/goto IL_0123;                              //br				IL_0016
	IL_0123:            goto IL_029d;                                               //br				IL_029d
	IL_0128:                                                                        //ldc.i4.0
	IL_0129:            V_4=0;                                                      //stloc.s				V_4
	IL_012b:                                                                        //ldc.i4				0x3
	IL_0130:            V_5=3;                                                      //stloc				V_5
	IL_0134:            /*goto IL_0016;*/goto IL_0139;                              //br				IL_0016
	IL_0139:            goto IL_01b8;                                               //br.s				IL_01b8
	IL_013b:                                                                        //ldloc.s				V_4
	IL_013d:                                                                        //ldc.i4.1
	IL_013e:                                                                        //add
	IL_013f:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_0141:                                                                        //ldc.i4				0x10
	IL_0146:            V_5=16;                                                     //stloc				V_5
	IL_014a:            /*goto IL_0016;*/goto IL_014f;                              //br				IL_0016
	IL_014f:            goto IL_01b8;                                               //br.s				IL_01b8
	IL_0151:                                                                        //ldc.i4				0xa
	IL_0156:            V_5=10;                                                     //stloc				V_5
	IL_015a:            /*goto IL_0016;*/goto IL_015f;                              //br				IL_0016
	IL_015f:                                                                        //ldloc.1
	IL_0160:                                                                        //ldarg.1
	IL_0161:            Temp_8=(V_1 == A_0);                                        //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0166:            if(!Temp_8)goto IL_00ba;                                    //brfalse				IL_00ba
	IL_016b:                                                                        //ldc.i4				0xb
	IL_0170:            V_5=11;                                                     //stloc				V_5
	IL_0174:            /*goto IL_0016;*/goto IL_0179;                              //br				IL_0016
	IL_0179:            goto IL_029b;                                               //br				IL_029b
	IL_017e:                                                                        //ldc.i4.1
	IL_017f:            return true;                                                //ret
	IL_0180:                                                                        //ldc.i4				0x7
	IL_0185:            V_5=7;                                                      //stloc				V_5
	IL_0189:            /*goto IL_0016;*/goto IL_018e;                              //br				IL_0016
	IL_018e:                                                                        //ldarg.2
	IL_018f:                                                                        //ldloc.s				V_4
	IL_0191:                                                                        //ldelem.ref
	IL_0192:            Temp_2=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0197:            Temp_3=A_1[V_4]->ToLower(Temp_2);                           //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_019c:                                                                        //ldarg.1
	IL_019d:            Temp_4=Temp_3->IndexOf(A_0);                                //callvirt				System::Int32 System::String::IndexOf(System::String^)
	IL_01a2:                                                                        //ldc.i4.m1
	IL_01a3:            if(Temp_4==-1)goto IL_013b;                                 //beq.s				IL_013b
	IL_01a5:                                                                        //ldc.i4				0x0
	IL_01aa:            V_5=0;                                                      //stloc				V_5
	IL_01ae:            /*goto IL_0016;*/goto IL_01b3;                              //br				IL_0016
	IL_01b3:            goto IL_0100;                                               //br				IL_0100
	IL_01b8:                                                                        //ldc.i4				0x8
	IL_01bd:            V_5=8;                                                      //stloc				V_5
	IL_01c1:            /*goto IL_0016;*/goto IL_01c6;                              //br				IL_0016
	IL_01c6:                                                                        //ldloc.s				V_4
	IL_01c8:                                                                        //ldarg.2
	IL_01c9:            Temp_5=A_1->Length;                                         //ldlen
	IL_01ca:                                                                        //conv.i4
	IL_01cb:            if(V_4<Temp_5)goto IL_0180;                                 //blt.s				IL_0180
	IL_01cd:                                                                        //ldc.i4				0x4
	IL_01d2:            V_5=4;                                                      //stloc				V_5
	IL_01d6:            /*goto IL_0016;*/goto IL_01db;                              //br				IL_0016
	IL_01db:            goto IL_02c7;                                               //br				IL_02c7
	IL_01e0:                                                                        //ldloc.3
	IL_01e1:                                                                        //ldc.i4.1
	IL_01e2:                                                                        //add
	IL_01e3:            V_3=(V_3 + 1);                                              //stloc.3
	IL_01e4:                                                                        //ldc.i4				0x14
	IL_01e9:            V_5=20;                                                     //stloc				V_5
	IL_01ed:            /*goto IL_0016;*/goto IL_01f2;                              //br				IL_0016
	IL_01f2:            goto IL_0271;                                               //br.s				IL_0271
	IL_01f4:                                                                        //ldc.i4				0xe
	IL_01f9:            V_5=14;                                                     //stloc				V_5
	IL_01fd:            /*goto IL_0016;*/goto IL_0202;                              //br				IL_0016
	IL_0202:                                                                        //ldarg.1
	IL_0203:                                                                        //ldstr				L"\x0320"
	IL_0208:                                                                        //ldloc				V_6
	IL_020c:            Temp_9=a(L"\x0320",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0211:            Temp_10=A_0->EndsWith(Temp_9);                              //callvirt				System::Boolean System::String::EndsWith(System::String^)
	IL_0216:            if(!Temp_10)goto IL_0128;                                   //brfalse				IL_0128
	IL_021b:                                                                        //ldc.i4				0x9
	IL_0220:            V_5=9;                                                      //stloc				V_5
	IL_0224:            /*goto IL_0016;*/goto IL_0229;                              //br				IL_0016
	IL_0229:            goto IL_0102;                                               //br				IL_0102
	IL_022e:                                                                        //ldarg.2
	IL_022f:                                                                        //ldloc.0
	IL_0230:                                                                        //ldelem.ref
	IL_0231:            Temp_12=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0236:            Temp_13=A_1[V_0]->ToLower(Temp_12);                         //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_023b:            V_1=Temp_13;                                                //stloc.1
	IL_023c:                                                                        //ldloc.1
	IL_023d:                                                                        //ldc.i4.3
	IL_023e:            Temp_14=gcnew array<System::Char>(3);                       //newarr				System::Char
	IL_0243:                                                                        //dup
	IL_0244:                                                                        //ldtoken				Root::T_x188::T_x10 Root::T_x188 F_x9
	IL_0249:            BytesToChars(gcnew array<System::Byte>{0x20,0x00,0x2E,0x00,0x2B,0x00},Temp_14);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_024e:            Temp_15=V_1->Split(Temp_14);                                //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_0253:            V_2=Temp_15;                                                //stloc.2
	IL_0254:                                                                        //ldc.i4.0
	IL_0255:            V_3=0;                                                      //stloc.3
	IL_0256:                                                                        //ldc.i4				0x6
	IL_025b:            V_5=6;                                                      //stloc				V_5
	IL_025f:            /*goto IL_0016;*/goto IL_0264;                              //br				IL_0016
	IL_0264:                                                                        //ldc.i4.4
	IL_0265:                                                                        //dup
	IL_0266:                                                                        //dup
	IL_0267:                                                                        //ldc.i4.2
	IL_0268:                                                                        //sub
	IL_0269:                                                                        //blt				IL_0265
	IL_026e:                                                                        //pop
	IL_026f:            goto IL_0271;                                               //br.s				IL_0271
	IL_0271:                                                                        //ldc.i4				0x2
	IL_0276:            V_5=2;                                                      //stloc				V_5
	IL_027a:            /*goto IL_0016;*/goto IL_027f;                              //br				IL_0016
	IL_027f:                                                                        //ldloc.3
	IL_0280:                                                                        //ldloc.2
	IL_0281:            Temp_1=V_2->Length;                                         //ldlen
	IL_0282:                                                                        //conv.i4
	IL_0283:            if(V_3<Temp_1)goto IL_00d1;                                 //blt				IL_00d1
	IL_0288:                                                                        //ldc.i4				0xd
	IL_028d:            V_5=13;                                                     //stloc				V_5
	IL_0291:            /*goto IL_0016;*/goto IL_0296;                              //br				IL_0016
	IL_0296:            goto IL_0151;                                               //br				IL_0151
	IL_029b:                                                                        //ldc.i4.1
	IL_029c:            return true;                                                //ret
	IL_029d:                                                                        //ldc.i4				0xf
	IL_02a2:            V_5=15;                                                     //stloc				V_5
	IL_02a6:            /*goto IL_0016;*/goto IL_02ab;                              //br				IL_0016
	IL_02ab:                                                                        //ldloc.0
	IL_02ac:                                                                        //ldarg.2
	IL_02ad:            Temp_11=A_1->Length;                                        //ldlen
	IL_02ae:                                                                        //conv.i4
	IL_02af:            if(V_0<Temp_11)goto IL_022e;                                //blt				IL_022e
	IL_02b4:                                                                        //ldc.i4				0x15
	IL_02b9:            V_5=21;                                                     //stloc				V_5
	IL_02bd:            /*goto IL_0016;*/goto IL_02c2;                              //br				IL_0016
	IL_02c2:            goto IL_00a7;                                               //br				IL_00a7
	IL_02c7:                                                                        //ldc.i4.0
	IL_02c8:            return false;                                               //ret

}
inline Root::T_x89::T_x5::T_x5(System::String^ A_0):Root::T_x89::T_x16(A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //call				void Root::T_x89::T_x16::.ctor(System::String^)
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x89::T_x5::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	array<System::String^>^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::NotSupportedException^ Temp_8 = nullptr;
	array<System::String^>^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::CodeModel::IType^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	array<System::String^>^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Boolean Temp_18 = false;
	array<System::String^>^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	Reflector::CodeModel::IType^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	array<System::String^>^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	Reflector::CodeModel::IType^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Boolean Temp_28 = false;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_4 = nullptr;
	array<System::String^>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0063;                                               //br.s				IL_0063
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_014e;case 1:goto IL_0075;case 2:goto IL_0294;case 3:goto IL_0124;case 4:goto IL_0089;case 5:goto IL_0304;case 6:goto IL_010e;case 7:goto IL_02f0;case 8:goto IL_00dd;case 9:goto IL_032f;case 10:goto IL_027f;case 11:goto IL_01c0;case 12:goto IL_01d4;case 13:goto IL_0227;case 14:goto IL_01a6;case 15:goto IL_02d2;case 16:goto IL_00f9;case 17:goto IL_009c;case 18:goto IL_023e;case 19:goto IL_031e;case 20:goto IL_0165;case 21:goto IL_01e7;};//switch				(IL_014e,IL_0075,IL_0294,IL_0124,IL_0089,IL_0304,IL_010e,IL_02f0,IL_00dd,IL_032f,IL_027f,IL_01c0,IL_01d4,IL_0227,IL_01a6,IL_02d2,IL_00f9,IL_009c,IL_023e,IL_031e,IL_0165,IL_01e7)
	IL_0063:                                                                        //ldarg.1
	IL_0064:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0069:            V_0=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.0
	IL_006a:                                                                        //ldc.i4				0x1
	IL_006f:            V_6=1;                                                      //stloc				V_6
	IL_0073:            /*goto IL_0002;*/goto IL_0075;                              //br.s				IL_0002
	IL_0075:                                                                        //ldloc.0
	IL_0076:            if(V_0==nullptr)goto IL_01ab;                               //brfalse				IL_01ab
	IL_007b:                                                                        //ldc.i4				0x4
	IL_0080:            V_6=4;                                                      //stloc				V_6
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:            goto IL_0230;                                               //br				IL_0230
	IL_008e:                                                                        //ldc.i4				0x11
	IL_0093:            V_6=17;                                                     //stloc				V_6
	IL_0097:            /*goto IL_0002;*/goto IL_009c;                              //br				IL_0002
	IL_009c:                                                                        //ldarg.0
	IL_009d:                                                                        //ldc.i4.2
	IL_009e:            Temp_9=gcnew array<System::String^>(2);                     //newarr				System::String
	IL_00a3:            V_5=Temp_9;                                                 //stloc.s				V_5
	IL_00a5:                                                                        //ldloc.s				V_5
	IL_00a7:                                                                        //ldc.i4.0
	IL_00a8:                                                                        //ldloc.3
	IL_00a9:            Temp_10=safe_cast<Reflector::CodeModel::IMemberReference^>(V_3)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_00ae:            V_5[0]=Temp_10;                                             //stelem.ref
	IL_00af:                                                                        //ldloc.s				V_5
	IL_00b1:                                                                        //ldc.i4.1
	IL_00b2:                                                                        //ldloc.3
	IL_00b3:            Temp_11=safe_cast<Reflector::CodeModel::IMemberReference^>(V_3)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00b8:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00bd:            Temp_12=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_11));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_00c2:            V_5[1]=Temp_12;                                             //stelem.ref
	IL_00c3:                                                                        //ldloc.s				V_5
	IL_00c5:            Temp_13=Root::T_x89::T_x16::M_x1(V_5);                      //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_00ca:            if(!Temp_13)goto IL_02d9;                                   //brfalse				IL_02d9
	IL_00cf:                                                                        //ldc.i4				0x8
	IL_00d4:            V_6=8;                                                      //stloc				V_6
	IL_00d8:            /*goto IL_0002;*/goto IL_00dd;                              //br				IL_0002
	IL_00dd:            goto IL_0153;                                               //br.s				IL_0153
	IL_00df:                                                                        //ldc.i4.1
	IL_00e0:            return true;                                                //ret
	IL_00e1:                                                                        //ldc.i4.0
	IL_00e2:            return false;                                               //ret
	IL_00e3:                                                                        //ldarg.1
	IL_00e4:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_00e9:            V_4=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(A_0);//stloc.s				V_4
	IL_00eb:                                                                        //ldc.i4				0x10
	IL_00f0:            V_6=16;                                                     //stloc				V_6
	IL_00f4:            /*goto IL_0002;*/goto IL_00f9;                              //br				IL_0002
	IL_00f9:                                                                        //ldloc.s				V_4
	IL_00fb:            if(V_4==nullptr)goto IL_0338;                               //brfalse				IL_0338
	IL_0100:                                                                        //ldc.i4				0x6
	IL_0105:            V_6=6;                                                      //stloc				V_6
	IL_0109:            /*goto IL_0002;*/goto IL_010e;                              //br				IL_0002
	IL_010e:            goto IL_0111;                                               //br.s				IL_0111
	IL_0110:                                                                        //break
	IL_0111:            goto IL_01d9;                                               //br				IL_01d9
	IL_0116:                                                                        //ldc.i4				0x3
	IL_011b:            V_6=3;                                                      //stloc				V_6
	IL_011f:            /*goto IL_0002;*/goto IL_0124;                              //br				IL_0002
	IL_0124:                                                                        //ldarg.0
	IL_0125:                                                                        //ldc.i4.1
	IL_0126:            Temp_5=gcnew array<System::String^>(1);                     //newarr				System::String
	IL_012b:            V_5=Temp_5;                                                 //stloc.s				V_5
	IL_012d:                                                                        //ldloc.s				V_5
	IL_012f:                                                                        //ldc.i4.0
	IL_0130:                                                                        //ldloc.0
	IL_0131:            Temp_6=Root::T_x115::M_x8(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0136:            V_5[0]=Temp_6;                                              //stelem.ref
	IL_0137:                                                                        //ldloc.s				V_5
	IL_0139:            Temp_7=Root::T_x89::T_x16::M_x1(V_5);                       //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_013e:            if(!Temp_7)goto IL_00e1;                                    //brfalse.s				IL_00e1
	IL_0140:                                                                        //ldc.i4				0x0
	IL_0145:            V_6=0;                                                      //stloc				V_6
	IL_0149:            /*goto IL_0002;*/goto IL_014e;                              //br				IL_0002
	IL_014e:            goto IL_0284;                                               //br				IL_0284
	IL_0153:                                                                        //ldc.i4.1
	IL_0154:            return true;                                                //ret
	IL_0155:                                                                        //ldc.i4.1
	IL_0156:            return true;                                                //ret
	IL_0157:                                                                        //ldc.i4				0x14
	IL_015c:            V_6=20;                                                     //stloc				V_6
	IL_0160:            /*goto IL_0002;*/goto IL_0165;                              //br				IL_0002
	IL_0165:                                                                        //ldarg.0
	IL_0166:                                                                        //ldc.i4.2
	IL_0167:            Temp_19=gcnew array<System::String^>(2);                    //newarr				System::String
	IL_016c:            V_5=Temp_19;                                                //stloc.s				V_5
	IL_016e:                                                                        //ldloc.s				V_5
	IL_0170:                                                                        //ldc.i4.0
	IL_0171:                                                                        //ldloc.2
	IL_0172:            Temp_20=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0177:            V_5[0]=Temp_20;                                             //stelem.ref
	IL_0178:                                                                        //ldloc.s				V_5
	IL_017a:                                                                        //ldc.i4.1
	IL_017b:                                                                        //ldloc.2
	IL_017c:            Temp_21=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0181:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0186:            Temp_22=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_21));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_018b:            V_5[1]=Temp_22;                                             //stelem.ref
	IL_018c:                                                                        //ldloc.s				V_5
	IL_018e:            Temp_23=Root::T_x89::T_x16::M_x1(V_5);                      //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_0193:            if(!Temp_23)goto IL_0336;                                   //brfalse				IL_0336
	IL_0198:                                                                        //ldc.i4				0xe
	IL_019d:            V_6=14;                                                     //stloc				V_6
	IL_01a1:            /*goto IL_0002;*/goto IL_01a6;                              //br				IL_0002
	IL_01a6:            goto IL_00df;                                               //br				IL_00df
	IL_01ab:                                                                        //ldarg.1
	IL_01ac:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_01b1:            V_1=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.1
	IL_01b2:                                                                        //ldc.i4				0xb
	IL_01b7:            V_6=11;                                                     //stloc				V_6
	IL_01bb:            /*goto IL_0002;*/goto IL_01c0;                              //br				IL_0002
	IL_01c0:                                                                        //ldloc.1
	IL_01c1:            if(V_1==nullptr)goto IL_0309;                               //brfalse				IL_0309
	IL_01c6:                                                                        //ldc.i4				0xc
	IL_01cb:            V_6=12;                                                     //stloc				V_6
	IL_01cf:            /*goto IL_0002;*/goto IL_01d4;                              //br				IL_0002
	IL_01d4:            goto IL_0286;                                               //br				IL_0286
	IL_01d9:                                                                        //ldc.i4				0x15
	IL_01de:            V_6=21;                                                     //stloc				V_6
	IL_01e2:            /*goto IL_0002;*/goto IL_01e7;                              //br				IL_0002
	IL_01e7:                                                                        //ldarg.0
	IL_01e8:                                                                        //ldc.i4.2
	IL_01e9:            Temp_24=gcnew array<System::String^>(2);                    //newarr				System::String
	IL_01ee:            V_5=Temp_24;                                                //stloc.s				V_5
	IL_01f0:                                                                        //ldloc.s				V_5
	IL_01f2:                                                                        //ldc.i4.0
	IL_01f3:                                                                        //ldloc.s				V_4
	IL_01f5:            Temp_25=safe_cast<Reflector::CodeModel::IMemberReference^>(V_4)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_01fa:            V_5[0]=Temp_25;                                             //stelem.ref
	IL_01fb:                                                                        //ldloc.s				V_5
	IL_01fd:                                                                        //ldc.i4.1
	IL_01fe:                                                                        //ldloc.s				V_4
	IL_0200:            Temp_26=safe_cast<Reflector::CodeModel::IMemberReference^>(V_4)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0205:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_020a:            Temp_27=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_26));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_020f:            V_5[1]=Temp_27;                                             //stelem.ref
	IL_0210:                                                                        //ldloc.s				V_5
	IL_0212:            Temp_28=Root::T_x89::T_x16::M_x1(V_5);                      //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_0217:            if(!Temp_28)goto IL_022c;                                   //brfalse.s				IL_022c
	IL_0219:                                                                        //ldc.i4				0xd
	IL_021e:            V_6=13;                                                     //stloc				V_6
	IL_0222:            /*goto IL_0002;*/goto IL_0227;                              //br				IL_0002
	IL_0227:            goto IL_0155;                                               //br				IL_0155
	IL_022c:                                                                        //ldc.i4.0
	IL_022d:            return false;                                               //ret
	IL_022e:                                                                        //ldc.i4.1
	IL_022f:            return true;                                                //ret
	IL_0230:                                                                        //ldc.i4				0x12
	IL_0235:            V_6=18;                                                     //stloc				V_6
	IL_0239:            /*goto IL_0002;*/goto IL_023e;                              //br				IL_0002
	IL_023e:                                                                        //ldarg.0
	IL_023f:                                                                        //ldc.i4.3
	IL_0240:            Temp_14=gcnew array<System::String^>(3);                    //newarr				System::String
	IL_0245:            V_5=Temp_14;                                                //stloc.s				V_5
	IL_0247:                                                                        //ldloc.s				V_5
	IL_0249:                                                                        //ldc.i4.0
	IL_024a:                                                                        //ldloc.0
	IL_024b:            Temp_15=Root::T_x115::M_x5(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_0250:            V_5[0]=Temp_15;                                             //stelem.ref
	IL_0251:                                                                        //ldloc.s				V_5
	IL_0253:                                                                        //ldc.i4.1
	IL_0254:                                                                        //ldloc.0
	IL_0255:            Temp_16=Root::T_x115::M_x13(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				System::String^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeReference^)
	IL_025a:            V_5[1]=Temp_16;                                             //stelem.ref
	IL_025b:                                                                        //ldloc.s				V_5
	IL_025d:                                                                        //ldc.i4.2
	IL_025e:                                                                        //ldloc.0
	IL_025f:            Temp_17=Root::T_x115::M_x8(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0264:            V_5[2]=Temp_17;                                             //stelem.ref
	IL_0265:                                                                        //ldloc.s				V_5
	IL_0267:            Temp_18=Root::T_x89::T_x16::M_x1(V_5);                      //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_026c:            if(!Temp_18)goto IL_0116;                                   //brfalse				IL_0116
	IL_0271:                                                                        //ldc.i4				0xa
	IL_0276:            V_6=10;                                                     //stloc				V_6
	IL_027a:            /*goto IL_0002;*/goto IL_027f;                              //br				IL_0002
	IL_027f:            goto IL_0334;                                               //br				IL_0334
	IL_0284:                                                                        //ldc.i4.1
	IL_0285:            return true;                                                //ret
	IL_0286:                                                                        //ldc.i4				0x2
	IL_028b:            V_6=2;                                                      //stloc				V_6
	IL_028f:            /*goto IL_0002;*/goto IL_0294;                              //br				IL_0002
	IL_0294:                                                                        //ldarg.0
	IL_0295:                                                                        //ldc.i4.2
	IL_0296:            Temp_0=gcnew array<System::String^>(2);                     //newarr				System::String
	IL_029b:            V_5=Temp_0;                                                 //stloc.s				V_5
	IL_029d:                                                                        //ldloc.s				V_5
	IL_029f:                                                                        //ldc.i4.0
	IL_02a0:                                                                        //ldloc.1
	IL_02a1:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(V_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_02a6:            V_5[0]=Temp_1;                                              //stelem.ref
	IL_02a7:                                                                        //ldloc.s				V_5
	IL_02a9:                                                                        //ldc.i4.1
	IL_02aa:                                                                        //ldloc.1
	IL_02ab:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(V_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_02b0:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_02b5:            Temp_3=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_02ba:            V_5[1]=Temp_3;                                              //stelem.ref
	IL_02bb:                                                                        //ldloc.s				V_5
	IL_02bd:            Temp_4=Root::T_x89::T_x16::M_x1(V_5);                       //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_02c2:            if(!Temp_4)goto IL_02d7;                                    //brfalse.s				IL_02d7
	IL_02c4:                                                                        //ldc.i4				0xf
	IL_02c9:            V_6=15;                                                     //stloc				V_6
	IL_02cd:            /*goto IL_0002;*/goto IL_02d2;                              //br				IL_0002
	IL_02d2:            goto IL_022e;                                               //br				IL_022e
	IL_02d7:                                                                        //ldc.i4.0
	IL_02d8:            return false;                                               //ret
	IL_02d9:                                                                        //ldc.i4.0
	IL_02da:            return false;                                               //ret
	IL_02db:                                                                        //ldarg.1
	IL_02dc:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_02e1:            V_3=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(A_0);//stloc.3
	IL_02e2:                                                                        //ldc.i4				0x7
	IL_02e7:            V_6=7;                                                      //stloc				V_6
	IL_02eb:            /*goto IL_0002;*/goto IL_02f0;                              //br				IL_0002
	IL_02f0:                                                                        //ldloc.3
	IL_02f1:            if(V_3==nullptr)goto IL_00e3;                               //brfalse				IL_00e3
	IL_02f6:                                                                        //ldc.i4				0x5
	IL_02fb:            V_6=5;                                                      //stloc				V_6
	IL_02ff:            /*goto IL_0002;*/goto IL_0304;                              //br				IL_0002
	IL_0304:            goto IL_008e;                                               //br				IL_008e
	IL_0309:                                                                        //ldarg.1
	IL_030a:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_030f:            V_2=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.2
	IL_0310:                                                                        //ldc.i4				0x13
	IL_0315:            V_6=19;                                                     //stloc				V_6
	IL_0319:            /*goto IL_0002;*/goto IL_031e;                              //br				IL_0002
	IL_031e:                                                                        //ldloc.2
	IL_031f:            if(V_2==nullptr)goto IL_02db;                               //brfalse.s				IL_02db
	IL_0321:                                                                        //ldc.i4				0x9
	IL_0326:            V_6=9;                                                      //stloc				V_6
	IL_032a:            /*goto IL_0002;*/goto IL_032f;                              //br				IL_0002
	IL_032f:            goto IL_0157;                                               //br				IL_0157
	IL_0334:                                                                        //ldc.i4.1
	IL_0335:            return true;                                                //ret
	IL_0336:                                                                        //ldc.i4.0
	IL_0337:            return false;                                               //ret
	IL_0338:            Temp_8=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_033d:            throw Temp_8;                                               //throw

}
inline Root::T_x89::T_x15::T_x15(System::String^ A_0):Root::T_x89::T_x16(A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //call				void Root::T_x89::T_x16::.ctor(System::String^)
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x89::T_x15::M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	System::Collections::IEnumerator^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	array<System::String^>^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::Object^ Temp_11 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_12 = nullptr;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	Reflector::CodeModel::IExpression^ V_1 = nullptr;
	Reflector::CodeModel::ILiteralExpression^ V_2 = nullptr;
	Reflector::CodeModel::INamedArgumentExpression^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Boolean V_5 = false;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::Collections::IEnumerator^ V_7 = nullptr;
	array<System::String^>^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=A_0->Attributes;                                     //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0006:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000b:            V_6=Temp_1;                                                 //stloc.s				V_6
	IL_000d:            /*goto IL_0011;*/goto IL_001001;                            //br.s				IL_0011
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:            return false;                                               //ret
	IL_001001:          try{
	IL_0011:                                                                        //ldc.i4				0x4
	IL_0016:            V_10=4;                                                     //stloc				V_10
	IL_001a:            /*goto IL_001e;*/goto IL_001c;                              //br.s				IL_001e
	IL_001c:            goto IL_003b;                                               //br.s				IL_003b
	IL_001e:                                                                        //ldloc				V_10
	IL_0022:            switch(V_10){case 0:goto IL_0062;case 1:goto IL_004b;case 2:goto IL_008c;case 3:goto IL_0251;case 4:goto IL_001c;};//switch				(IL_0062,IL_004b,IL_008c,IL_0251,IL_001c)
	IL_003b:            goto IL_0040;                                               //br				IL_0040
	IL_0040:                                                                        //ldc.i4				0x1
	IL_0045:            V_10=1;                                                     //stloc				V_10
	IL_0049:            /*goto IL_001e;*/goto IL_004b;                              //br.s				IL_001e
	IL_004b:                                                                        //ldloc.s				V_6
	IL_004d:            Temp_2=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0052:            if(Temp_2)goto IL_0067;                                     //brtrue				IL_0067
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_10=0;                                                     //stloc				V_10
	IL_0060:            /*goto IL_001e;*/goto IL_0062;                              //br.s				IL_001e
	IL_0062:            goto IL_0243;                                               //br				IL_0243
	IL_0067:                                                                        //ldloc.s				V_6
	IL_0069:            Temp_3=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006e:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_0073:            V_0=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_3);//stloc.0
	IL_0074:                                                                        //ldloc.0
	IL_0075:            Temp_4=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_007a:            Temp_5=safe_cast<System::Collections::IEnumerable^>(Temp_4)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_007f:            V_7=Temp_5;                                                 //stloc.s				V_7
	IL_0081:                                                                        //ldc.i4				0x2
	IL_0086:            V_10=2;                                                     //stloc				V_10
	IL_008a:            /*goto IL_001e;*/goto IL_008c;                              //br.s				IL_001e
	IL_008c:            /*goto IL_008e;*/goto IL_008C01;                            //br.s				IL_008e
	IL_008C01:          try{
	IL_008e:                                                                        //ldc.i4				0x9
	IL_0093:            V_10=9;                                                     //stloc				V_10
	IL_0097:            /*goto IL_009b;*/goto IL_0099;                              //br.s				IL_009b
	IL_0099:            goto IL_00d4;                                               //br.s				IL_00d4
	IL_009b:                                                                        //ldloc				V_10
	IL_009f:            switch(V_10){case 0:goto IL_00e1;case 1:goto IL_01c6;case 2:goto IL_01a2;case 3:goto IL_01ed;case 4:goto IL_0112;case 5:goto IL_00f9;case 6:goto IL_0125;case 7:goto IL_01b3;case 8:goto IL_0174;case 9:goto IL_0099;case 10:goto IL_01da;case 11:goto IL_013c;};//switch				(IL_00e1,IL_01c6,IL_01a2,IL_01ed,IL_0112,IL_00f9,IL_0125,IL_01b3,IL_0174,IL_0099,IL_01da,IL_013c)
	IL_00d4:            goto IL_0117;                                               //br.s				IL_0117
	IL_00d6:                                                                        //ldc.i4				0x0
	IL_00db:            V_10=0;                                                     //stloc				V_10
	IL_00df:            /*goto IL_009b;*/goto IL_00e1;                              //br.s				IL_009b
	IL_00e1:                                                                        //ldloc.2
	IL_00e2:            Temp_6=V_2->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_00e7:                                                                        //isinst				System::String
	IL_00ec:            if(dynamic_cast<System::String^>(Temp_6)==nullptr)goto IL_0117;//brfalse.s				IL_0117
	IL_00ee:                                                                        //ldc.i4				0x5
	IL_00f3:            V_10=5;                                                     //stloc				V_10
	IL_00f7:            /*goto IL_009b;*/goto IL_00f9;                              //br.s				IL_009b
	IL_00f9:            goto IL_0141;                                               //br.s				IL_0141
	IL_00fb:                                                                        //ldloc.3
	IL_00fc:            Temp_12=V_3->Value;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INamedArgumentExpression::get_Value()
	IL_0101:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_0106:            V_2=dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(Temp_12);//stloc.2
	IL_0107:                                                                        //ldc.i4				0x4
	IL_010c:            V_10=4;                                                     //stloc				V_10
	IL_0110:            /*goto IL_009b;*/goto IL_0112;                              //br.s				IL_009b
	IL_0112:            goto IL_01b8;                                               //br				IL_01b8
	IL_0117:                                                                        //ldc.i4				0x6
	IL_011c:            V_10=6;                                                     //stloc				V_10
	IL_0120:            /*goto IL_009b;*/goto IL_0125;                              //br				IL_009b
	IL_0125:                                                                        //ldloc.s				V_7
	IL_0127:            Temp_10=V_7->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_012c:            if(Temp_10)goto IL_0179;                                    //brtrue.s				IL_0179
	IL_012e:                                                                        //ldc.i4				0xb
	IL_0133:            V_10=11;                                                    //stloc				V_10
	IL_0137:            /*goto IL_009b;*/goto IL_013c;                              //br				IL_009b
	IL_013c:            goto IL_01df;                                               //br				IL_01df
	IL_0141:                                                                        //ldloc.2
	IL_0142:            Temp_7=V_2->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_0147:                                                                        //isinst				System::String
	IL_014c:            V_4=dynamic_cast<System::String^>(Temp_7);                  //stloc.s				V_4
	IL_014e:                                                                        //ldarg.0
	IL_014f:                                                                        //ldc.i4.1
	IL_0150:            Temp_8=gcnew array<System::String^>(1);                     //newarr				System::String
	IL_0155:            V_8=Temp_8;                                                 //stloc.s				V_8
	IL_0157:                                                                        //ldloc.s				V_8
	IL_0159:                                                                        //ldc.i4.0
	IL_015a:                                                                        //ldloc.s				V_4
	IL_015c:            V_8[0]=V_4;                                                 //stelem.ref
	IL_015d:                                                                        //ldloc.s				V_8
	IL_015f:            Temp_9=Root::T_x89::T_x16::M_x1(V_8);                       //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_0164:            V_5=Temp_9;                                                 //stloc.s				V_5
	IL_0166:                                                                        //ldc.i4				0x8
	IL_016b:            V_10=8;                                                     //stloc				V_10
	IL_016f:            /*goto IL_009b;*/goto IL_0174;                              //br				IL_009b
	IL_0174:            goto IL_02a7;                                               //leave				IL_02a7
	IL_0179:                                                                        //ldloc.s				V_7
	IL_017b:            Temp_11=V_7->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0180:                                                                        //castclass				Reflector::CodeModel::IExpression
	IL_0185:            V_1=safe_cast<Reflector::CodeModel::IExpression^>(Temp_11); //stloc.1
	IL_0186:                                                                        //ldloc.1
	IL_0187:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_018c:            V_2=dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(V_1);//stloc.2
	IL_018d:                                                                        //ldloc.1
	IL_018e:                                                                        //isinst				Reflector::CodeModel::INamedArgumentExpression
	IL_0193:            V_3=dynamic_cast<Reflector::CodeModel::INamedArgumentExpression^>(V_1);//stloc.3
	IL_0194:                                                                        //ldc.i4				0x2
	IL_0199:            V_10=2;                                                     //stloc				V_10
	IL_019d:            /*goto IL_009b;*/goto IL_01a2;                              //br				IL_009b
	IL_01a2:                                                                        //ldloc.3
	IL_01a3:            if(V_3==nullptr)goto IL_01b8;                               //brfalse.s				IL_01b8
	IL_01a5:                                                                        //ldc.i4				0x7
	IL_01aa:            V_10=7;                                                     //stloc				V_10
	IL_01ae:            /*goto IL_009b;*/goto IL_01b3;                              //br				IL_009b
	IL_01b3:            goto IL_00fb;                                               //br				IL_00fb
	IL_01b8:                                                                        //ldc.i4				0x1
	IL_01bd:            V_10=1;                                                     //stloc				V_10
	IL_01c1:            /*goto IL_009b;*/goto IL_01c6;                              //br				IL_009b
	IL_01c6:                                                                        //ldloc.2
	IL_01c7:            if(V_2==nullptr)goto IL_0117;                               //brfalse				IL_0117
	IL_01cc:                                                                        //ldc.i4				0xa
	IL_01d1:            V_10=10;                                                    //stloc				V_10
	IL_01d5:            /*goto IL_009b;*/goto IL_01da;                              //br				IL_009b
	IL_01da:            goto IL_00d6;                                               //br				IL_00d6
	IL_01df:                                                                        //ldc.i4				0x3
	IL_01e4:            V_10=3;                                                     //stloc				V_10
	IL_01e8:            /*goto IL_009b;*/goto IL_01ed;                              //br				IL_009b
	IL_01ed:            goto IL_0040;                                               //leave				IL_0040
	                    ;}
	                    finally{
	IL_01f2:            goto IL_0209;                                               //br.s				IL_0209
	IL_01f4:                                                                        //ldloc				V_10
	IL_01f8:            switch(V_10){case 0:goto IL_021d;case 1:goto IL_0240;case 2:goto IL_022c;};//switch				(IL_021d,IL_0240,IL_022c)
	IL_0209:                                                                        //ldloc.s				V_7
	IL_020b:                                                                        //isinst				System::IDisposable
	IL_0210:            V_9=dynamic_cast<System::IDisposable^>(V_7);                //stloc.s				V_9
	IL_0212:                                                                        //ldc.i4				0x0
	IL_0217:            V_10=0;                                                     //stloc				V_10
	IL_021b:            /*goto IL_01f4;*/goto IL_021d;                              //br.s				IL_01f4
	IL_021d:                                                                        //ldloc.s				V_9
	IL_021f:            if(V_9==nullptr)goto IL_0242;                               //brfalse.s				IL_0242
	IL_0221:                                                                        //ldc.i4				0x2
	IL_0226:            V_10=2;                                                     //stloc				V_10
	IL_022a:            /*goto IL_01f4;*/goto IL_022c;                              //br.s				IL_01f4
	IL_022c:            goto IL_022e;                                               //br.s				IL_022e
	IL_022e:                                                                        //ldloc.s				V_9
	IL_0230:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0235:                                                                        //ldc.i4				0x1
	IL_023a:            V_10=1;                                                     //stloc				V_10
	IL_023e:            /*goto IL_01f4;*/goto IL_0240;                              //br.s				IL_01f4
	IL_0240:            goto IL_0242;                                               //br.s				IL_0242
	IL_0242:                                                                        //endfinally
	                    ;}
	IL_0243:                                                                        //ldc.i4				0x3
	IL_0248:            V_10=3;                                                     //stloc				V_10
	IL_024c:            /*goto IL_001e;*/goto IL_0251;                              //br				IL_001e
	IL_0251:            goto IL_000f;                                               //leave				IL_000f
	                    ;}
	                    finally{
	IL_0256:            goto IL_026d;                                               //br.s				IL_026d
	IL_0258:                                                                        //ldloc				V_11
	IL_025c:            switch(V_11){case 0:goto IL_0281;case 1:goto IL_0290;case 2:goto IL_02a4;};//switch				(IL_0281,IL_0290,IL_02a4)
	IL_026d:                                                                        //ldloc.s				V_6
	IL_026f:                                                                        //isinst				System::IDisposable
	IL_0274:            V_9=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_9
	IL_0276:                                                                        //ldc.i4				0x0
	IL_027b:            V_11=0;                                                     //stloc				V_11
	IL_027f:            /*goto IL_0258;*/goto IL_0281;                              //br.s				IL_0258
	IL_0281:                                                                        //ldloc.s				V_9
	IL_0283:            if(V_9==nullptr)goto IL_02a6;                               //brfalse.s				IL_02a6
	IL_0285:                                                                        //ldc.i4				0x1
	IL_028a:            V_11=1;                                                     //stloc				V_11
	IL_028e:            /*goto IL_0258;*/goto IL_0290;                              //br.s				IL_0258
	IL_0290:            goto IL_0292;                                               //br.s				IL_0292
	IL_0292:                                                                        //ldloc.s				V_9
	IL_0294:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0299:                                                                        //ldc.i4				0x2
	IL_029e:            V_11=2;                                                     //stloc				V_11
	IL_02a2:            /*goto IL_0258;*/goto IL_02a4;                              //br.s				IL_0258
	IL_02a4:            goto IL_02a6;                                               //br.s				IL_02a6
	IL_02a6:                                                                        //endfinally
	                    ;}
	IL_02a7:                                                                        //ldc.i4.4
	IL_02a8:                                                                        //dup
	IL_02a9:                                                                        //dup
	IL_02aa:                                                                        //ldc.i4.2
	IL_02ab:                                                                        //sub
	IL_02ac:                                                                        //blt				IL_02a8
	IL_02b1:                                                                        //pop
	IL_02b2:                                                                        //ldloc.s				V_5
	IL_02b4:            return V_5;                                                 //ret

}
inline System::Boolean Root::T_x89::T_x15::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	array<System::String^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Int32 Temp_3 = 0;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IInstructionCollection^ Temp_6 = nullptr;
	System::Collections::IEnumerator^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	System::Boolean Temp_12 = false;
	System::Object^ Temp_13 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IMethodBody^ V_3 = nullptr;
	Reflector::CodeModel::IInstruction^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_6 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_7 = nullptr;
	System::Boolean V_8 = false;
	System::Collections::IEnumerator^ V_9 = nullptr;
	array<System::String^>^ V_10 = nullptr;
	System::IDisposable^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:            goto IL_0067;                                               //br.s				IL_0067
	IL_0002:                                                                        //ldloc				V_12
	IL_0006:            switch(V_12){case 0:goto IL_0079;case 1:goto IL_0343;case 2:goto IL_02cb;case 3:goto IL_0384;case 4:goto IL_02b9;case 5:goto IL_0270;case 6:goto IL_029e;case 7:goto IL_02ed;case 8:goto IL_03ce;case 9:goto IL_025b;case 10:goto IL_00bb;case 11:goto IL_0353;case 12:goto IL_028a;case 13:goto IL_00a0;case 14:goto IL_0223;case 15:goto IL_0302;case 16:goto IL_023d;case 17:goto IL_03ba;case 18:goto IL_032c;case 19:goto IL_0398;case 20:goto IL_008d;case 21:goto IL_031a;case 22:goto IL_036d;};//switch				(IL_0079,IL_0343,IL_02cb,IL_0384,IL_02b9,IL_0270,IL_029e,IL_02ed,IL_03ce,IL_025b,IL_00bb,IL_0353,IL_028a,IL_00a0,IL_0223,IL_0302,IL_023d,IL_03ba,IL_032c,IL_0398,IL_008d,IL_031a,IL_036d)
	IL_0067:                                                                        //ldarg.1
	IL_0068:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_006d:            V_0=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.0
	IL_006e:                                                                        //ldc.i4				0x0
	IL_0073:            V_12=0;                                                     //stloc				V_12
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:                                                                        //ldloc.0
	IL_007a:            if(V_0==nullptr)goto IL_0275;                               //brfalse				IL_0275
	IL_007f:                                                                        //ldc.i4				0x14
	IL_0084:            V_12=20;                                                    //stloc				V_12
	IL_0088:            /*goto IL_0002;*/goto IL_008d;                              //br				IL_0002
	IL_008d:            goto IL_0345;                                               //br				IL_0345
	IL_0092:                                                                        //ldc.i4				0xd
	IL_0097:            V_12=13;                                                    //stloc				V_12
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:                                                                        //ldloc.s				V_6
	IL_00a3:            Temp_9=this->M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_6));//call				System::Boolean Root::T_x89::T_x15::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_00a8:            if(!Temp_9)goto IL_0242;                                    //brfalse				IL_0242
	IL_00ad:                                                                        //ldc.i4				0xa
	IL_00b2:            V_12=10;                                                    //stloc				V_12
	IL_00b6:            /*goto IL_0002;*/goto IL_00bb;                              //br				IL_0002
	IL_00bb:            goto IL_039e;                                               //br				IL_039e
	IL_00BB01:          try{
	IL_00c0:                                                                        //ldc.i4				0x8
	IL_00c5:            V_12=8;                                                     //stloc				V_12
	IL_00c9:            /*goto IL_00cd;*/goto IL_00cb;                              //br.s				IL_00cd
	IL_00cb:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00cd:                                                                        //ldloc				V_12
	IL_00d1:            switch(V_12){case 0:goto IL_0185;case 1:goto IL_0118;case 2:goto IL_01bf;case 3:goto IL_016c;case 4:goto IL_013b;case 5:goto IL_01af;case 6:goto IL_0198;case 7:goto IL_014b;case 8:goto IL_00cb;};//switch				(IL_0185,IL_0118,IL_01bf,IL_016c,IL_013b,IL_01af,IL_0198,IL_014b,IL_00cb)
	IL_00fa:            goto IL_018a;                                               //br				IL_018a
	IL_00ff:                                                                        //ldloc.s				V_4
	IL_0101:            Temp_0=V_4->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_0106:                                                                        //castclass				System::String
	IL_010b:            V_5=safe_cast<System::String^>(Temp_0);                     //stloc.s				V_5
	IL_010d:                                                                        //ldc.i4				0x1
	IL_0112:            V_12=1;                                                     //stloc				V_12
	IL_0116:            /*goto IL_00cd;*/goto IL_0118;                              //br.s				IL_00cd
	IL_0118:                                                                        //ldarg.0
	IL_0119:                                                                        //ldc.i4.1
	IL_011a:            Temp_1=gcnew array<System::String^>(1);                     //newarr				System::String
	IL_011f:            V_10=Temp_1;                                                //stloc.s				V_10
	IL_0121:                                                                        //ldloc.s				V_10
	IL_0123:                                                                        //ldc.i4.0
	IL_0124:                                                                        //ldloc.s				V_5
	IL_0126:            V_10[0]=V_5;                                                //stelem.ref
	IL_0127:                                                                        //ldloc.s				V_10
	IL_0129:            Temp_2=Root::T_x89::T_x16::M_x1(V_10);                      //call				System::Boolean Root::T_x89::T_x16::M_x1(array<System::String^>^)
	IL_012e:            if(!Temp_2)goto IL_018a;                                    //brfalse.s				IL_018a
	IL_0130:                                                                        //ldc.i4				0x4
	IL_0135:            V_12=4;                                                     //stloc				V_12
	IL_0139:            /*goto IL_00cd;*/goto IL_013b;                              //br.s				IL_00cd
	IL_013b:            goto IL_013d;                                               //br.s				IL_013d
	IL_013d:                                                                        //ldc.i4.1
	IL_013e:            V_8=true;                                                   //stloc.s				V_8
	IL_0140:                                                                        //ldc.i4				0x7
	IL_0145:            V_12=7;                                                     //stloc				V_12
	IL_0149:            /*goto IL_00cd;*/goto IL_014b;                              //br.s				IL_00cd
	IL_014b:            goto IL_03d3;                                               //leave				IL_03d3
	IL_0150:                                                                        //ldloc.s				V_9
	IL_0152:            Temp_5=V_9->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0157:                                                                        //castclass				Reflector::CodeModel::IInstruction
	IL_015c:            V_4=safe_cast<Reflector::CodeModel::IInstruction^>(Temp_5); //stloc.s				V_4
	IL_015e:                                                                        //ldc.i4				0x3
	IL_0163:            V_12=3;                                                     //stloc				V_12
	IL_0167:            /*goto IL_00cd;*/goto IL_016c;                              //br				IL_00cd
	IL_016c:                                                                        //ldloc.s				V_4
	IL_016e:            Temp_3=V_4->Code;                                           //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_0173:                                                                        //ldc.i4.s				114
	IL_0175:            if(Temp_3!=114)goto IL_018a;                                //bne.un.s				IL_018a
	IL_0177:                                                                        //ldc.i4				0x0
	IL_017c:            V_12=0;                                                     //stloc				V_12
	IL_0180:            /*goto IL_00cd;*/goto IL_0185;                              //br				IL_00cd
	IL_0185:            goto IL_00ff;                                               //br				IL_00ff
	IL_018a:                                                                        //ldc.i4				0x6
	IL_018f:            V_12=6;                                                     //stloc				V_12
	IL_0193:            /*goto IL_00cd;*/goto IL_0198;                              //br				IL_00cd
	IL_0198:                                                                        //ldloc.s				V_9
	IL_019a:            Temp_4=V_9->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_019f:            if(Temp_4)goto IL_0150;                                     //brtrue.s				IL_0150
	IL_01a1:                                                                        //ldc.i4				0x5
	IL_01a6:            V_12=5;                                                     //stloc				V_12
	IL_01aa:            /*goto IL_00cd;*/goto IL_01af;                              //br				IL_00cd
	IL_01af:            goto IL_01b1;                                               //br.s				IL_01b1
	IL_01b1:                                                                        //ldc.i4				0x2
	IL_01b6:            V_12=2;                                                     //stloc				V_12
	IL_01ba:            /*goto IL_00cd;*/goto IL_01bf;                              //br				IL_00cd
	IL_01bf:            goto IL_02a3;                                               //leave				IL_02a3
	                    ;}
	                    finally{
	IL_01c4:            goto IL_01db;                                               //br.s				IL_01db
	IL_01c6:                                                                        //ldloc				V_12
	IL_01ca:            switch(V_12){case 0:goto IL_0212;case 1:goto IL_01ef;case 2:goto IL_01fe;};//switch				(IL_0212,IL_01ef,IL_01fe)
	IL_01db:                                                                        //ldloc.s				V_9
	IL_01dd:                                                                        //isinst				System::IDisposable
	IL_01e2:            V_11=dynamic_cast<System::IDisposable^>(V_9);               //stloc.s				V_11
	IL_01e4:                                                                        //ldc.i4				0x1
	IL_01e9:            V_12=1;                                                     //stloc				V_12
	IL_01ed:            /*goto IL_01c6;*/goto IL_01ef;                              //br.s				IL_01c6
	IL_01ef:                                                                        //ldloc.s				V_11
	IL_01f1:            if(V_11==nullptr)goto IL_0214;                              //brfalse.s				IL_0214
	IL_01f3:                                                                        //ldc.i4				0x2
	IL_01f8:            V_12=2;                                                     //stloc				V_12
	IL_01fc:            /*goto IL_01c6;*/goto IL_01fe;                              //br.s				IL_01c6
	IL_01fe:            goto IL_0200;                                               //br.s				IL_0200
	IL_0200:                                                                        //ldloc.s				V_11
	IL_0202:            /*V_11->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0207:                                                                        //ldc.i4				0x0
	IL_020c:            V_12=0;                                                     //stloc				V_12
	IL_0210:            /*goto IL_01c6;*/goto IL_0212;                              //br.s				IL_01c6
	IL_0212:            goto IL_0214;                                               //br.s				IL_0214
	IL_0214:                                                                        //endfinally
	                    ;}
	IL_0215:                                                                        //ldc.i4				0xe
	IL_021a:            V_12=14;                                                    //stloc				V_12
	IL_021e:            /*goto IL_0002;*/goto IL_0223;                              //br				IL_0002
	IL_0223:                                                                        //ldarg.0
	IL_0224:                                                                        //ldloc.1
	IL_0225:            Temp_10=this->M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_1));//call				System::Boolean Root::T_x89::T_x15::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_022a:            if(!Temp_10)goto IL_036f;                                   //brfalse				IL_036f
	IL_022f:                                                                        //ldc.i4				0x10
	IL_0234:            V_12=16;                                                    //stloc				V_12
	IL_0238:            /*goto IL_0002;*/goto IL_023d;                              //br				IL_0002
	IL_023d:            goto IL_02f2;                                               //br				IL_02f2
	IL_0242:                                                                        //ldarg.1
	IL_0243:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_0248:            V_7=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(A_0);//stloc.s				V_7
	IL_024a:            goto IL_024d;                                               //br.s				IL_024d
	IL_024c:                                                                        //break
	IL_024d:                                                                        //ldc.i4				0x9
	IL_0252:            V_12=9;                                                     //stloc				V_12
	IL_0256:            /*goto IL_0002;*/goto IL_025b;                              //br				IL_0002
	IL_025b:                                                                        //ldloc.s				V_7
	IL_025d:            if(V_7==nullptr)goto IL_031c;                               //brfalse				IL_031c
	IL_0262:                                                                        //ldc.i4				0x5
	IL_0267:            V_12=5;                                                     //stloc				V_12
	IL_026b:            /*goto IL_0002;*/goto IL_0270;                              //br				IL_0002
	IL_0270:            goto IL_02f4;                                               //br				IL_02f4
	IL_0275:                                                                        //ldarg.1
	IL_0276:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_027b:            V_1=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.1
	IL_027c:                                                                        //ldc.i4				0xc
	IL_0281:            V_12=12;                                                    //stloc				V_12
	IL_0285:            /*goto IL_0002;*/goto IL_028a;                              //br				IL_0002
	IL_028a:                                                                        //ldloc.1
	IL_028b:            if(V_1==nullptr)goto IL_036f;                               //brfalse				IL_036f
	IL_0290:                                                                        //ldc.i4				0x6
	IL_0295:            V_12=6;                                                     //stloc				V_12
	IL_0299:            /*goto IL_0002;*/goto IL_029e;                              //br				IL_0002
	IL_029e:            goto IL_0215;                                               //br				IL_0215
	IL_02a3:                                                                        //ldarg.1
	IL_02a4:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_02a9:            V_6=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(A_0);//stloc.s				V_6
	IL_02ab:                                                                        //ldc.i4				0x4
	IL_02b0:            V_12=4;                                                     //stloc				V_12
	IL_02b4:            /*goto IL_0002;*/goto IL_02b9;                              //br				IL_0002
	IL_02b9:                                                                        //ldloc.s				V_6
	IL_02bb:            if(V_6==nullptr)goto IL_0242;                               //brfalse.s				IL_0242
	IL_02bd:                                                                        //ldc.i4				0x2
	IL_02c2:            V_12=2;                                                     //stloc				V_12
	IL_02c6:            /*goto IL_0002;*/goto IL_02cb;                              //br				IL_0002
	IL_02cb:            goto IL_0092;                                               //br				IL_0092
	IL_02d0:                                                                        //ldc.i4.1
	IL_02d1:            return true;                                                //ret
	IL_02d2:                                                                        //ldloc.3
	IL_02d3:            Temp_6=V_3->Instructions;                                   //callvirt				Reflector::CodeModel::IInstructionCollection^ Reflector::CodeModel::IMethodBody::get_Instructions()
	IL_02d8:            Temp_7=safe_cast<System::Collections::IEnumerable^>(Temp_6)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_02dd:            V_9=Temp_7;                                                 //stloc.s				V_9
	IL_02df:                                                                        //ldc.i4				0x7
	IL_02e4:            V_12=7;                                                     //stloc				V_12
	IL_02e8:            /*goto IL_0002;*/goto IL_02ed;                              //br				IL_0002
	IL_02ed:            /*goto IL_00c0;*/goto IL_00BB01;                            //br				IL_00c0
	IL_02f2:                                                                        //ldc.i4.1
	IL_02f3:            return true;                                                //ret
	IL_02f4:                                                                        //ldc.i4				0xf
	IL_02f9:            V_12=15;                                                    //stloc				V_12
	IL_02fd:            /*goto IL_0002;*/goto IL_0302;                              //br				IL_0002
	IL_0302:                                                                        //ldarg.0
	IL_0303:                                                                        //ldloc.s				V_7
	IL_0305:            Temp_11=this->M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_7));//call				System::Boolean Root::T_x89::T_x15::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_030a:            if(!Temp_11)goto IL_031c;                                   //brfalse.s				IL_031c
	IL_030c:                                                                        //ldc.i4				0x15
	IL_0311:            V_12=21;                                                    //stloc				V_12
	IL_0315:            /*goto IL_0002;*/goto IL_031a;                              //br				IL_0002
	IL_031a:            goto IL_02d0;                                               //br.s				IL_02d0
	IL_031c:                                                                        //ldc.i4.0
	IL_031d:            return false;                                               //ret
	IL_031e:                                                                        //ldc.i4				0x12
	IL_0323:            V_12=18;                                                    //stloc				V_12
	IL_0327:            /*goto IL_0002;*/goto IL_032c;                              //br				IL_0002
	IL_032c:                                                                        //ldarg.0
	IL_032d:                                                                        //ldloc.2
	IL_032e:            Temp_12=this->M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_2));//call				System::Boolean Root::T_x89::T_x15::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_0333:            if(!Temp_12)goto IL_03a0;                                   //brfalse.s				IL_03a0
	IL_0335:                                                                        //ldc.i4				0x1
	IL_033a:            V_12=1;                                                     //stloc				V_12
	IL_033e:            /*goto IL_0002;*/goto IL_0343;                              //br				IL_0002
	IL_0343:            goto IL_039c;                                               //br.s				IL_039c
	IL_0345:                                                                        //ldc.i4				0xb
	IL_034a:            V_12=11;                                                    //stloc				V_12
	IL_034e:            /*goto IL_0002;*/goto IL_0353;                              //br				IL_0002
	IL_0353:                                                                        //ldarg.0
	IL_0354:                                                                        //ldloc.0
	IL_0355:            Temp_8=this->M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0));//call				System::Boolean Root::T_x89::T_x15::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_035a:            if(!Temp_8)goto IL_0275;                                    //brfalse				IL_0275
	IL_035f:                                                                        //ldc.i4				0x16
	IL_0364:            V_12=22;                                                    //stloc				V_12
	IL_0368:            /*goto IL_0002;*/goto IL_036d;                              //br				IL_0002
	IL_036d:            goto IL_039a;                                               //br.s				IL_039a
	IL_036f:                                                                        //ldarg.1
	IL_0370:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_0375:            V_2=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.2
	IL_0376:                                                                        //ldc.i4				0x3
	IL_037b:            V_12=3;                                                     //stloc				V_12
	IL_037f:            /*goto IL_0002;*/goto IL_0384;                              //br				IL_0002
	IL_0384:                                                                        //ldloc.2
	IL_0385:            if(V_2==nullptr)goto IL_02a3;                               //brfalse				IL_02a3
	IL_038a:                                                                        //ldc.i4				0x13
	IL_038f:            V_12=19;                                                    //stloc				V_12
	IL_0393:            /*goto IL_0002;*/goto IL_0398;                              //br				IL_0002
	IL_0398:            goto IL_031e;                                               //br.s				IL_031e
	IL_039a:                                                                        //ldc.i4.1
	IL_039b:            return true;                                                //ret
	IL_039c:                                                                        //ldc.i4.1
	IL_039d:            return true;                                                //ret
	IL_039e:                                                                        //ldc.i4.1
	IL_039f:            return true;                                                //ret
	IL_03a0:                                                                        //ldloc.2
	IL_03a1:            Temp_13=V_2->Body;                                          //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_03a6:                                                                        //isinst				Reflector::CodeModel::IMethodBody
	IL_03ab:            V_3=dynamic_cast<Reflector::CodeModel::IMethodBody^>(Temp_13);//stloc.3
	IL_03ac:                                                                        //ldc.i4				0x11
	IL_03b1:            V_12=17;                                                    //stloc				V_12
	IL_03b5:            /*goto IL_0002;*/goto IL_03ba;                              //br				IL_0002
	IL_03ba:                                                                        //ldloc.3
	IL_03bb:            if(V_3==nullptr)goto IL_02a3;                               //brfalse				IL_02a3
	IL_03c0:                                                                        //ldc.i4				0x8
	IL_03c5:            V_12=8;                                                     //stloc				V_12
	IL_03c9:            /*goto IL_0002;*/goto IL_03ce;                              //br				IL_0002
	IL_03ce:            goto IL_02d2;                                               //br				IL_02d2
	IL_03d3:                                                                        //ldloc.s				V_8
	IL_03d5:            return V_8;                                                 //ret

}
inline Root::T_x89::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ImageList^ Temp_0 = nullptr;
	System::Windows::Forms::ImageList^ Temp_1 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_2 = nullptr;
	System::Drawing::Image^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::ImageList^ Temp_5 = nullptr;
	System::Windows::Forms::ImageList^ Temp_6 = nullptr;
	System::Drawing::Color Temp_7;
	System::Windows::Forms::TextBox^ Temp_8 = nullptr;
	System::Windows::Forms::TextBox^ Temp_9 = nullptr;
	System::Windows::Forms::TextBox^ Temp_10 = nullptr;
	System::Windows::Forms::TextBox^ Temp_11 = nullptr;
	System::EventHandler^ Temp_12 = nullptr;
	System::Windows::Forms::TextBox^ Temp_13 = nullptr;
	System::Windows::Forms::KeyEventHandler^ Temp_14 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_15 = nullptr;
	System::Windows::Forms::TextBox^ Temp_16 = nullptr;
	Root::T_x89::T_x19^ Temp_17 = nullptr;
	Root::T_x89::T_x19^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	Root::T_x89::T_x19^ Temp_20 = nullptr;
	Root::T_x89::T_x19^ Temp_21 = nullptr;
	Root::T_x89::T_x19^ Temp_22 = nullptr;
	Root::T_x89::T_x19^ Temp_23 = nullptr;
	System::Windows::Forms::ImageList^ Temp_24 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_25 = nullptr;
	System::Drawing::Image^ Temp_26 = nullptr;
	Root::T_x89::T_x19^ Temp_27 = nullptr;
	System::EventHandler^ Temp_28 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_29 = nullptr;
	Root::T_x89::T_x19^ Temp_30 = nullptr;
	Root::T_x89::T_x19^ Temp_31 = nullptr;
	Root::T_x89::T_x19^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	Root::T_x89::T_x19^ Temp_34 = nullptr;
	Root::T_x89::T_x19^ Temp_35 = nullptr;
	Root::T_x89::T_x19^ Temp_36 = nullptr;
	Root::T_x89::T_x19^ Temp_37 = nullptr;
	System::Windows::Forms::ImageList^ Temp_38 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_39 = nullptr;
	System::Drawing::Image^ Temp_40 = nullptr;
	Root::T_x89::T_x19^ Temp_41 = nullptr;
	System::EventHandler^ Temp_42 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_43 = nullptr;
	Root::T_x89::T_x19^ Temp_44 = nullptr;
	Root::T_x89::T_x19^ Temp_45 = nullptr;
	Root::T_x89::T_x19^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	Root::T_x89::T_x19^ Temp_48 = nullptr;
	Root::T_x89::T_x19^ Temp_49 = nullptr;
	Root::T_x89::T_x19^ Temp_50 = nullptr;
	Root::T_x89::T_x19^ Temp_51 = nullptr;
	System::Windows::Forms::ImageList^ Temp_52 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_53 = nullptr;
	System::Drawing::Image^ Temp_54 = nullptr;
	Root::T_x89::T_x19^ Temp_55 = nullptr;
	System::EventHandler^ Temp_56 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_57 = nullptr;
	Root::T_x89::T_x19^ Temp_58 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::UserControl();*/                  //call				void System::Windows::Forms::UserControl::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_0=gcnew System::Windows::Forms::ImageList();           //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_0015:            this->F_x8=Temp_0;                                          //stfld				System::Windows::Forms::ImageList^ Root::T_x89::T_x1 F_x8
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_1=this->F_x8;                                          //ldfld				System::Windows::Forms::ImageList^ Root::T_x89::T_x1 F_x8
	IL_0020:            Temp_2=Temp_1->Images;                                      //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0025:            Temp_3=Root::T_x117::M_x1();                                //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_002a:            Temp_4=Temp_2->AddStrip(Temp_3);                            //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_002f:                                                                        //pop
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_5=this->F_x8;                                          //ldfld				System::Windows::Forms::ImageList^ Root::T_x89::T_x1 F_x8
	IL_0036:                                                                        //ldc.i4.s				32
	IL_0038:            Temp_5->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_6=this->F_x8;                                          //ldfld				System::Windows::Forms::ImageList^ Root::T_x89::T_x1 F_x8
	IL_0043:                                                                        //ldc.i4				0xff
	IL_0048:                                                                        //ldc.i4.0
	IL_0049:                                                                        //ldc.i4				0x80
	IL_004e:                                                                        //ldc.i4.0
	IL_004f:            Temp_7=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0054:            Temp_6->TransparentColor=Temp_7;                            //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_8=gcnew System::Windows::Forms::TextBox();             //newobj				void System::Windows::Forms::TextBox::.ctor()
	IL_005f:            this->F_x12=Temp_8;                                         //stfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0064:                                                                        //ldarg.0
	IL_0065:            Temp_9=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_006a:                                                                        //ldc.i4.1
	IL_006b:            Temp_9->TabIndex=1;                                         //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_0070:                                                                        //ldarg.0
	IL_0071:            Temp_10=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0076:                                                                        //ldc.i4.5
	IL_0077:            Temp_10->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_007c:                                                                        //ldarg.0
	IL_007d:            Temp_11=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0082:                                                                        //ldarg.0
	IL_0083:                                                                        //ldftn				void Root::T_x89::T_x1::M_x1(System::Object^,System::EventArgs^)
	IL_0089:            Temp_12=gcnew System::EventHandler(this,&Root::T_x89::T_x1::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_008e:            Temp_11->TextChanged += Temp_12;                            //callvirt				void System::Windows::Forms::Control::add_TextChanged(System::EventHandler^)
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_13=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0099:                                                                        //ldarg.0
	IL_009a:                                                                        //ldftn				void Root::T_x89::T_x1::M_x1(System::Object^,System::Windows::Forms::KeyEventArgs^)
	IL_00a0:            Temp_14=gcnew System::Windows::Forms::KeyEventHandler(this,&Root::T_x89::T_x1::M_x1);//newobj				void System::Windows::Forms::KeyEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00a5:            Temp_13->KeyDown += Temp_14;                                //callvirt				void System::Windows::Forms::Control::add_KeyDown(System::Windows::Forms::KeyEventHandler^)
	IL_00aa:                                                                        //ldarg.0
	IL_00ab:            Temp_15=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:            Temp_16=this->F_x12;                                        //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_00b6:            Temp_15->Add(safe_cast<System::Windows::Forms::Control^>(Temp_16));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:                                                                        //ldc.i4.0
	IL_00bd:            this->F_x13=safe_cast<Root::T_x89::T_x4>(0);                //stfld				Root::T_x89::T_x4 Root::T_x89::T_x1 F_x13
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:            this->M_x1();                                               //call				void Root::T_x89::T_x1::M_x1()
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:            Temp_17=gcnew Root::T_x89::T_x19();                         //newobj				void Root::T_x89::T_x19::.ctor()
	IL_00ce:            this->F_x5=Temp_17;                                         //stfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_00d3:                                                                        //ldarg.0
	IL_00d4:            Temp_18=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_00d9:                                                                        //ldstr				L"\x7722\x5C24\x5726\x4C28\x0B2A\x7E2C\x4A2E\x5030\x4132\x5634\x5F36"
	IL_00de:                                                                        //ldloc				V_0
	IL_00e2:            Temp_19=a(L"\x7722\x5C24\x5726\x4C28\x0B2A\x7E2C\x4A2E\x5030\x4132\x5634\x5F36",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e7:            Temp_18->Text=Temp_19;                                      //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_00ec:                                                                        //ldarg.0
	IL_00ed:            Temp_20=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_00f2:                                                                        //ldc.i4.1
	IL_00f3:            Temp_20->M_x1(true);                                        //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:            Temp_21=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_00fe:                                                                        //ldc.i4.s				22
	IL_0100:            Temp_21->Width=22;                                          //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_0105:                                                                        //ldarg.0
	IL_0106:            Temp_22=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_010b:                                                                        //ldc.i4.4
	IL_010c:            Temp_22->Dock=safe_cast<System::Windows::Forms::DockStyle>(4);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0111:                                                                        //ldarg.0
	IL_0112:            Temp_23=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_0117:                                                                        //ldarg.0
	IL_0118:            Temp_24=this->F_x8;                                         //ldfld				System::Windows::Forms::ImageList^ Root::T_x89::T_x1 F_x8
	IL_011d:            Temp_25=Temp_24->Images;                                    //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0122:                                                                        //ldc.i4.7
	IL_0123:            Temp_26=Temp_25[safe_cast<System::Int32>(7)];               //callvirt				System::Drawing::Image^ System::Windows::Forms::ImageList::ImageCollection::get_Item(System::Int32)
	IL_0128:            Temp_23->M_x1(Temp_26);                                     //callvirt				void Root::T_x89::T_x19::M_x1(System::Drawing::Image^)
	IL_012d:                                                                        //ldarg.0
	IL_012e:            Temp_27=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_0133:                                                                        //ldarg.0
	IL_0134:                                                                        //ldftn				void Root::T_x89::T_x1::M_x2(System::Object^,System::EventArgs^)
	IL_013a:            Temp_28=gcnew System::EventHandler(this,&Root::T_x89::T_x1::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_013f:            Temp_27->Click += Temp_28;                                  //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_0144:                                                                        //ldarg.0
	IL_0145:            Temp_29=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_014a:                                                                        //ldarg.0
	IL_014b:            Temp_30=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_0150:            Temp_29->Add(safe_cast<System::Windows::Forms::Control^>(Temp_30));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0155:                                                                        //ldarg.0
	IL_0156:            this->M_x1();                                               //call				void Root::T_x89::T_x1::M_x1()
	IL_015b:                                                                        //ldarg.0
	IL_015c:            Temp_31=gcnew Root::T_x89::T_x19();                         //newobj				void Root::T_x89::T_x19::.ctor()
	IL_0161:            this->F_x9=Temp_31;                                         //stfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_0166:                                                                        //ldarg.0
	IL_0167:            Temp_32=this->F_x9;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_016c:                                                                        //ldstr				L"\x6E22\x4024\x4A26\x4B28\x4E2A\x5F2C\x0F2E\x6230\x5632\x5434\x4536\x5A38\x533A"
	IL_0171:                                                                        //ldloc				V_0
	IL_0175:            Temp_33=a(L"\x6E22\x4024\x4A26\x4B28\x4E2A\x5F2C\x0F2E\x6230\x5632\x5434\x4536\x5A38\x533A",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017a:            Temp_32->Text=Temp_33;                                      //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_017f:                                                                        //ldarg.0
	IL_0180:            Temp_34=this->F_x9;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_0185:                                                                        //ldc.i4.0
	IL_0186:            Temp_34->M_x1(false);                                       //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_018b:                                                                        //ldarg.0
	IL_018c:            Temp_35=this->F_x9;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_0191:                                                                        //ldc.i4.s				22
	IL_0193:            Temp_35->Width=22;                                          //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_0198:                                                                        //ldarg.0
	IL_0199:            Temp_36=this->F_x9;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_019e:                                                                        //ldc.i4.4
	IL_019f:            Temp_36->Dock=safe_cast<System::Windows::Forms::DockStyle>(4);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_01a4:                                                                        //ldarg.0
	IL_01a5:            Temp_37=this->F_x9;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_01aa:                                                                        //ldarg.0
	IL_01ab:            Temp_38=this->F_x8;                                         //ldfld				System::Windows::Forms::ImageList^ Root::T_x89::T_x1 F_x8
	IL_01b0:            Temp_39=Temp_38->Images;                                    //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_01b5:                                                                        //ldc.i4.s				103
	IL_01b7:            Temp_40=Temp_39[safe_cast<System::Int32>(103)];             //callvirt				System::Drawing::Image^ System::Windows::Forms::ImageList::ImageCollection::get_Item(System::Int32)
	IL_01bc:            Temp_37->M_x1(Temp_40);                                     //callvirt				void Root::T_x89::T_x19::M_x1(System::Drawing::Image^)
	IL_01c1:                                                                        //ldarg.0
	IL_01c2:            Temp_41=this->F_x9;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_01c7:                                                                        //ldarg.0
	IL_01c8:                                                                        //ldftn				void Root::T_x89::T_x1::M_x2(System::Object^,System::EventArgs^)
	IL_01ce:            Temp_42=gcnew System::EventHandler(this,&Root::T_x89::T_x1::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_01d3:            Temp_41->Click += Temp_42;                                  //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_01d8:                                                                        //ldarg.0
	IL_01d9:            Temp_43=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_01de:                                                                        //ldarg.0
	IL_01df:            Temp_44=this->F_x9;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_01e4:            Temp_43->Add(safe_cast<System::Windows::Forms::Control^>(Temp_44));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_01e9:                                                                        //ldarg.0
	IL_01ea:            this->M_x1();                                               //call				void Root::T_x89::T_x1::M_x1()
	IL_01ef:                                                                        //ldarg.0
	IL_01f0:            Temp_45=gcnew Root::T_x89::T_x19();                         //newobj				void Root::T_x89::T_x19::.ctor()
	IL_01f5:            this->F_x4=Temp_45;                                         //stfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_01fa:                                                                        //ldarg.0
	IL_01fb:            Temp_46=this->F_x4;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_0200:                                                                        //ldstr				L"\x7022\x5124\x5526\x4028\x452A\x4A2C\x0F2E\x6230\x5632\x5434\x4536\x5A38\x533A"
	IL_0205:                                                                        //ldloc				V_0
	IL_0209:            Temp_47=a(L"\x7022\x5124\x5526\x4028\x452A\x4A2C\x0F2E\x6230\x5632\x5434\x4536\x5A38\x533A",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_020e:            Temp_46->Text=Temp_47;                                      //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0213:                                                                        //ldarg.0
	IL_0214:            Temp_48=this->F_x4;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_0219:                                                                        //ldc.i4.0
	IL_021a:            Temp_48->M_x1(false);                                       //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_021f:                                                                        //ldarg.0
	IL_0220:            Temp_49=this->F_x4;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_0225:                                                                        //ldc.i4.s				22
	IL_0227:            Temp_49->Width=22;                                          //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_022c:                                                                        //ldarg.0
	IL_022d:            Temp_50=this->F_x4;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_0232:                                                                        //ldc.i4.4
	IL_0233:            Temp_50->Dock=safe_cast<System::Windows::Forms::DockStyle>(4);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0238:                                                                        //ldarg.0
	IL_0239:            Temp_51=this->F_x4;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_023e:                                                                        //ldarg.0
	IL_023f:            Temp_52=this->F_x8;                                         //ldfld				System::Windows::Forms::ImageList^ Root::T_x89::T_x1 F_x8
	IL_0244:            Temp_53=Temp_52->Images;                                    //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0249:                                                                        //ldc.i4				0xa1
	IL_024e:            Temp_54=Temp_53[safe_cast<System::Int32>(161)];             //callvirt				System::Drawing::Image^ System::Windows::Forms::ImageList::ImageCollection::get_Item(System::Int32)
	IL_0253:            Temp_51->M_x1(Temp_54);                                     //callvirt				void Root::T_x89::T_x19::M_x1(System::Drawing::Image^)
	IL_0258:                                                                        //ldarg.0
	IL_0259:            Temp_55=this->F_x4;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_025e:                                                                        //ldarg.0
	IL_025f:                                                                        //ldftn				void Root::T_x89::T_x1::M_x2(System::Object^,System::EventArgs^)
	IL_0265:            Temp_56=gcnew System::EventHandler(this,&Root::T_x89::T_x1::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_026a:            Temp_55->Click += Temp_56;                                  //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_026f:                                                                        //ldarg.0
	IL_0270:            Temp_57=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0275:                                                                        //ldarg.0
	IL_0276:            Temp_58=this->F_x4;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_027b:            Temp_57->Add(safe_cast<System::Windows::Forms::Control^>(Temp_58));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0280:                                                                        //ldarg.0
	IL_0281:            this->M_x1();                                               //call				void Root::T_x89::T_x1::M_x1()
	IL_0286:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Label^ Temp_0 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_1 = nullptr;
	//local variables.
	System::Windows::Forms::Label^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_0008:            V_0=Temp_0;                                                 //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldc.i4.4
	IL_000b:            V_0->Dock=safe_cast<System::Windows::Forms::DockStyle>(4);  //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0010:                                                                        //ldloc.0
	IL_0011:                                                                        //ldc.i4.1
	IL_0012:            V_0->Width=1;                                               //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_0017:                                                                        //ldloc.0
	IL_0018:                                                                        //ldc.i4.1
	IL_0019:            V_0->Height=1;                                              //callvirt				void System::Windows::Forms::Control::set_Height(System::Int32)
	IL_001e:                                                                        //ldarg.0
	IL_001f:            Temp_1=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0024:                                                                        //ldloc.0
	IL_0025:            Temp_1->Add(safe_cast<System::Windows::Forms::Control^>(V_0));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_002a:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x1(System::ComponentModel::PropertyChangedEventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x89::T_x1 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x89::T_x1 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::ComponentModel::PropertyChangedEventHandler::Invoke(System::Object^,System::ComponentModel::PropertyChangedEventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x1(System::ComponentModel::PropertyChangedEventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x89::T_x1 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::PropertyChangedEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::PropertyChangedEventHandler^>(Temp_1);//stfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x89::T_x1 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x1 F_x2
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x1(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x1 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x89::T_x1 F_x2
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_0=7;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldstr				L"\x6324\x4E26\x4528\x5F2A\x482C\x5D2E\x6530\x5632\x4D34\x4336"
	IL_000f:                                                                        //ldloc				V_0
	IL_0013:            Temp_0=a(L"\x6324\x4E26\x4528\x5F2A\x482C\x5D2E\x6530\x5632\x4D34\x4336",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0018:            Temp_1=gcnew System::ComponentModel::PropertyChangedEventArgs(Temp_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_001d:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x89::T_x1::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_0022:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventArgs^ Temp_0 = nullptr;
	System::Windows::Forms::Keys Temp_1 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0059;case 2:goto IL_0037;};//switch				(IL_000b,IL_0059,IL_0037)
	IL_0022:                                                                        //ldarg.2
	IL_0023:            Temp_1=A_1->KeyCode;                                        //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyCode()
	IL_0028:                                                                        //ldc.i4.s				40
	IL_002a:            if(safe_cast<System::Int32>(Temp_1)!=40)goto IL_005b;       //bne.un.s				IL_005b
	IL_002c:                                                                        //ldc.i4				0x2
	IL_0031:            V_0=2;                                                      //stloc				V_0
	IL_0035:            /*goto IL_000d;*/goto IL_0037;                              //br.s				IL_000d
	IL_0037:            goto IL_0039;                                               //br.s				IL_0039
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_0=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_003f:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x89::T_x1::M_x1(System::EventArgs^)
	IL_0044:                                                                        //ldarg.2
	IL_0045:                                                                        //ldc.i4.1
	IL_0046:            A_1->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_004b:            goto IL_004e;                                               //br.s				IL_004e
	IL_004d:                                                                        //break
	IL_004e:                                                                        //ldc.i4				0x1
	IL_0053:            V_0=1;                                                      //stloc				V_0
	IL_0057:            /*goto IL_000d;*/goto IL_0059;                              //br.s				IL_000d
	IL_0059:            goto IL_005b;                                               //br.s				IL_005b
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0006:            Temp_0->SelectAll();                                        //callvirt				void System::Windows::Forms::TextBoxBase::SelectAll()
	IL_000b:            return;                                                     //ret

}
inline Root::T_x89::T_x4 Root::T_x89::T_x1::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x4 Temp_0 = (Root::T_x89::T_x4)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x89::T_x4 Root::T_x89::T_x1 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x89::T_x1::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0006:            Temp_1=Temp_0->Text;                                        //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x89::T_x1::M_x2(System::ComponentModel::PropertyChangedEventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x89::T_x1 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::PropertyChangedEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::PropertyChangedEventHandler^>(Temp_1);//stfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x89::T_x1 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x2(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x1 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x89::T_x1 F_x2
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x89::T_x19^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_2 = nullptr;
	Root::T_x89::T_x19^ Temp_3 = nullptr;
	Root::T_x89::T_x19^ Temp_4 = nullptr;
	Root::T_x89::T_x19^ Temp_5 = nullptr;
	Root::T_x89::T_x19^ Temp_6 = nullptr;
	Root::T_x89::T_x19^ Temp_7 = nullptr;
	Root::T_x89::T_x19^ Temp_8 = nullptr;
	Root::T_x89::T_x19^ Temp_9 = nullptr;
	Root::T_x89::T_x19^ Temp_10 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_1=14;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0043;                                               //br.s				IL_0043
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0067;case 1:goto IL_0014;case 2:goto IL_007e;case 3:goto IL_00dc;case 4:goto IL_00ad;case 5:goto IL_0126;case 6:goto IL_005a;case 7:goto IL_0140;case 8:goto IL_010b;};//switch				(IL_0067,IL_0014,IL_007e,IL_00dc,IL_00ad,IL_0126,IL_005a,IL_0140,IL_010b)
	IL_0043:                                                                        //ldarg.1
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_10=this->F_x5;                                         //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_004a:            if(A_0!=safe_cast<System::Object^>(Temp_10))goto IL_010d;   //bne.un				IL_010d
	IL_004f:                                                                        //ldc.i4				0x6
	IL_0054:            V_0=6;                                                      //stloc				V_0
	IL_0058:            /*goto IL_0016;*/goto IL_005a;                              //br.s				IL_0016
	IL_005a:            goto IL_00af;                                               //br.s				IL_00af
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_0=0;                                                      //stloc				V_0
	IL_0065:            /*goto IL_0016;*/goto IL_0067;                              //br.s				IL_0016
	IL_0067:                                                                        //ldarg.1
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_006e:            if(A_0!=safe_cast<System::Object^>(Temp_0))goto IL_0145;    //bne.un				IL_0145
	IL_0073:                                                                        //ldc.i4				0x2
	IL_0078:            V_0=2;                                                      //stloc				V_0
	IL_007c:            /*goto IL_0016;*/goto IL_007e;                              //br.s				IL_0016
	IL_007e:            goto IL_00de;                                               //br.s				IL_00de
	IL_0080:                                                                        //ldarg.0
	IL_0081:            Temp_8=this->F_x5;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_0086:                                                                        //ldc.i4.0
	IL_0087:            Temp_8->M_x1(false);                                        //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_9=this->F_x4;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_0092:                                                                        //ldc.i4.0
	IL_0093:            Temp_9->M_x1(false);                                        //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_0098:                                                                        //ldarg.0
	IL_0099:                                                                        //ldc.i4.1
	IL_009a:            this->F_x13=safe_cast<Root::T_x89::T_x4>(1);                //stfld				Root::T_x89::T_x4 Root::T_x89::T_x1 F_x13
	IL_009f:                                                                        //ldc.i4				0x4
	IL_00a4:            V_0=4;                                                      //stloc				V_0
	IL_00a8:            /*goto IL_0016;*/goto IL_00ad;                              //br				IL_0016
	IL_00ad:            goto IL_005c;                                               //br.s				IL_005c
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_6=this->F_x9;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_00b5:                                                                        //ldc.i4.0
	IL_00b6:            Temp_6->M_x1(false);                                        //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_7=this->F_x4;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x4
	IL_00c1:                                                                        //ldc.i4.0
	IL_00c2:            Temp_7->M_x1(false);                                        //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_00c7:                                                                        //ldarg.0
	IL_00c8:                                                                        //ldc.i4.0
	IL_00c9:            this->F_x13=safe_cast<Root::T_x89::T_x4>(0);                //stfld				Root::T_x89::T_x4 Root::T_x89::T_x1 F_x13
	IL_00ce:                                                                        //ldc.i4				0x3
	IL_00d3:            V_0=3;                                                      //stloc				V_0
	IL_00d7:            /*goto IL_0016;*/goto IL_00dc;                              //br				IL_0016
	IL_00dc:            goto IL_010d;                                               //br.s				IL_010d
	IL_00de:                                                                        //ldarg.0
	IL_00df:            Temp_3=this->F_x5;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x5
	IL_00e4:                                                                        //ldc.i4.0
	IL_00e5:            Temp_3->M_x1(false);                                        //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_00ea:                                                                        //ldarg.0
	IL_00eb:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_00f0:                                                                        //ldc.i4.0
	IL_00f1:            Temp_4->M_x1(false);                                        //callvirt				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_00f6:                                                                        //ldarg.0
	IL_00f7:                                                                        //ldc.i4.2
	IL_00f8:            this->F_x13=safe_cast<Root::T_x89::T_x4>(2);                //stfld				Root::T_x89::T_x4 Root::T_x89::T_x1 F_x13
	IL_00fd:                                                                        //ldc.i4				0x8
	IL_0102:            V_0=8;                                                      //stloc				V_0
	IL_0106:            /*goto IL_0016;*/goto IL_010b;                              //br				IL_0016
	IL_010b:            goto IL_0145;                                               //br.s				IL_0145
	IL_010d:                                                                        //ldc.i4.4
	IL_010e:                                                                        //dup
	IL_010f:                                                                        //dup
	IL_0110:                                                                        //ldc.i4.2
	IL_0111:                                                                        //sub
	IL_0112:                                                                        //blt				IL_010e
	IL_0117:                                                                        //pop
	IL_0118:                                                                        //ldc.i4				0x5
	IL_011d:            V_0=5;                                                      //stloc				V_0
	IL_0121:            /*goto IL_0016;*/goto IL_0126;                              //br				IL_0016
	IL_0126:                                                                        //ldarg.1
	IL_0127:                                                                        //ldarg.0
	IL_0128:            Temp_5=this->F_x9;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_012d:            if(A_0!=safe_cast<System::Object^>(Temp_5))goto IL_005c;    //bne.un				IL_005c
	IL_0132:                                                                        //ldc.i4				0x7
	IL_0137:            V_0=7;                                                      //stloc				V_0
	IL_013b:            /*goto IL_0016;*/goto IL_0140;                              //br				IL_0016
	IL_0140:            goto IL_0080;                                               //br				IL_0080
	IL_0145:                                                                        //ldarg.0
	IL_0146:                                                                        //ldstr				L"\x6A2B\x472D\x5C2F\x4631\x5133\x4435\x6C37\x4339\x4C3B\x5B3D"
	IL_014b:                                                                        //ldloc				V_1
	IL_014f:            Temp_1=a(L"\x6A2B\x472D\x5C2F\x4631\x5133\x4435\x6C37\x4339\x4C3B\x5B3D",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0154:            Temp_2=gcnew System::ComponentModel::PropertyChangedEventArgs(Temp_1);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_0159:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x89::T_x1::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_015e:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::OnEnter(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0006:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_000b:                                                                        //pop
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            System::Windows::Forms::UserControl::OnEnter(e);            //call				void System::Windows::Forms::UserControl::OnEnter(System::EventArgs^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x89::T_x1::OnHandleCreated(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Root::T_x89::T_x19^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x89::T_x19^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            System::Windows::Forms::UserControl::OnHandleCreated(e);    //call				void System::Windows::Forms::UserControl::OnHandleCreated(System::EventArgs^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x89::T_x1 F_x12
	IL_0011:            Temp_1=Temp_0->Height;                                      //callvirt				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0016:            this->Height=Temp_1;                                        //call				void System::Windows::Forms::Control::set_Height(System::Int32)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_3=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0027:            Temp_2->Height=Temp_3;                                      //callvirt				void System::Windows::Forms::Control::set_Height(System::Int32)
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x89::T_x19^ Root::T_x89::T_x1 F_x9
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_5=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0038:                                                                        //ldc.i4.1
	IL_0039:                                                                        //add
	IL_003a:            Temp_4->Width=(Temp_5 + 1);                                 //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_003f:            return;                                                     //ret

}
inline Root::T_x89::T_x19::T_x19()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x2=true;                                            //stfld				System::Boolean Root::T_x89::T_x19 F_x2
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            this->F_x12=false;                                          //stfld				System::Boolean Root::T_x89::T_x19 F_x12
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:            this->F_x13=false;                                          //stfld				System::Boolean Root::T_x89::T_x19 F_x13
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldnull
	IL_0017:            this->F_x8=safe_cast<System::Drawing::Image^>(nullptr);     //stfld				System::Drawing::Image^ Root::T_x89::T_x19 F_x8
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldnull
	IL_001e:            this->F_x5=safe_cast<System::Windows::Forms::ToolTip^>(nullptr);//stfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldc.i4.0
	IL_0025:            this->F_x9=safe_cast<System::Windows::Forms::Keys>(0);      //stfld				System::Windows::Forms::Keys Root::T_x89::T_x19 F_x9
	IL_002a:                                                                        //ldarg.0
	IL_002b:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldc.i4.0
	IL_0032:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0037:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->M_x13();                                       //call				System::Boolean Root::T_x89::T_x19::M_x13()
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:                                                                        //ceq
	IL_000a:            this->M_x1((Temp_0 == false));                              //call				void Root::T_x89::T_x19::M_x1(System::Boolean)
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0015:            this->OnClick(Temp_1);                                      //callvirt				void System::Windows::Forms::Control::OnClick(System::EventArgs^)
	IL_001a:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->Text;                                          //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_000a:            this->Text=Temp_0;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->F_x2=A_0;                                             //stfld				System::Boolean Root::T_x89::T_x19 F_x2
	IL_0016:                                                                        //ldarg.0
	IL_0017:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0022:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x89::T_x19::M_x2(System::EventArgs^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1(System::Drawing::Image^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x8=A_0;                                             //stfld				System::Drawing::Image^ Root::T_x89::T_x19 F_x8
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseLeave by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldc.i4.0
	IL_0005:            this->F_x12=false;                                          //stfld				System::Boolean Root::T_x89::T_x19 F_x12
	IL_000a:                                                                        //ldarg.0
	IL_000b:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_0010:                                                                        //ldarg.0
	IL_0011:            this->Update();                                             //call				void System::Windows::Forms::Control::Update()
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            System::Windows::Forms::Control::OnMouseLeave(A_0);         //call				void System::Windows::Forms::Control::OnMouseLeave(System::EventArgs^)
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x19 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x89::T_x19 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1(System::String^ A_0)
//System::Windows::Forms::Control^::set_Text by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ToolTip^ Temp_0 = nullptr;
	System::Windows::Forms::ToolTip^ Temp_1 = nullptr;
	System::Windows::Forms::ToolTip^ Temp_2 = nullptr;
	System::Windows::Forms::ToolTip^ Temp_3 = nullptr;
	System::Windows::Forms::ToolTip^ Temp_4 = nullptr;
	System::Windows::Forms::ToolTip^ Temp_5 = nullptr;
	System::Windows::Forms::ToolTip^ Temp_6 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0035;case 1:goto IL_000b;case 2:goto IL_0058;};//switch				(IL_0035,IL_000b,IL_0058)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_6=this->F_x5;                                          //ldfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_0028:            if(Temp_6==nullptr)goto IL_0065;                            //brfalse.s				IL_0065
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_0=0;                                                      //stloc				V_0
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_0=this->F_x5;                                          //ldfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_003d:            Temp_0->RemoveAll();                                        //callvirt				void System::Windows::Forms::ToolTip::RemoveAll()
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_1=this->F_x5;                                          //ldfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_0048:            /*Temp_1->Dispose();*/                                      //callvirt				void System::ComponentModel::Component::Dispose()
	IL_004d:                                                                        //ldc.i4				0x2
	IL_0052:            V_0=2;                                                      //stloc				V_0
	IL_0056:            /*goto IL_000d;*/goto IL_0058;                              //br.s				IL_000d
	IL_0058:                                                                        //ldc.i4.4
	IL_0059:                                                                        //dup
	IL_005a:                                                                        //dup
	IL_005b:                                                                        //ldc.i4.2
	IL_005c:                                                                        //sub
	IL_005d:                                                                        //blt				IL_0059
	IL_0062:                                                                        //pop
	IL_0063:            goto IL_0065;                                               //br.s				IL_0065
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:            System::Windows::Forms::Control::Text=A_0;                  //call				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_2=gcnew System::Windows::Forms::ToolTip();             //newobj				void System::Windows::Forms::ToolTip::.ctor()
	IL_0072:            this->F_x5=Temp_2;                                          //stfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_0077:                                                                        //ldarg.0
	IL_0078:            Temp_3=this->F_x5;                                          //ldfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_007d:                                                                        //ldc.i4.0
	IL_007e:            Temp_3->InitialDelay=0;                                     //callvirt				void System::Windows::Forms::ToolTip::set_InitialDelay(System::Int32)
	IL_0083:                                                                        //ldarg.0
	IL_0084:            Temp_4=this->F_x5;                                          //ldfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_0089:                                                                        //ldc.i4.1
	IL_008a:            Temp_4->ShowAlways=true;                                    //callvirt				void System::Windows::Forms::ToolTip::set_ShowAlways(System::Boolean)
	IL_008f:                                                                        //ldarg.0
	IL_0090:            Temp_5=this->F_x5;                                          //ldfld				System::Windows::Forms::ToolTip^ Root::T_x89::T_x19 F_x5
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldarg.1
	IL_0097:            Temp_5->SetToolTip(safe_cast<System::Windows::Forms::Control^>(this),A_0);//callvirt				void System::Windows::Forms::ToolTip::SetToolTip(System::Windows::Forms::Control^,System::String^)
	IL_009c:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1(System::Windows::Forms::Keys A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x9=A_0;                                             //stfld				System::Windows::Forms::Keys Root::T_x89::T_x19 F_x9
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x89::T_x19::M_x1(System::Windows::Forms::Message% A_0)
//System::Windows::Forms::Control^::ProcessKeyPreview by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IntPtr Temp_0 = (System::IntPtr)0;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::Keys Temp_2 = (System::Windows::Forms::Keys)0;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::Windows::Forms::Keys Temp_5 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Windows::Forms::Keys V_0 = (System::Windows::Forms::Keys)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_006c;case 1:goto IL_0057;case 2:goto IL_007f;case 3:goto IL_0043;};//switch				(IL_006c,IL_0057,IL_007f,IL_0043)
	IL_0026:                                                                        //ldarg.1
	IL_0027:            Temp_0=A_0.WParam;                                          //call				System::IntPtr System::Windows::Forms::Message::get_WParam()
	IL_002c:            Temp_1=safe_cast<System::Int32>(Temp_0);                    //call				System::Int32 System::IntPtr::op_Explicit(System::IntPtr)
	IL_0031:            Temp_2=System::Windows::Forms::Control::ModifierKeys;       //call				System::Windows::Forms::Keys System::Windows::Forms::Control::get_ModifierKeys()
	IL_0036:                                                                        //or
	IL_0037:            V_0=safe_cast<System::Windows::Forms::Keys>((Temp_1 | safe_cast<System::Int32>(Temp_2)));//stloc.0
	IL_0038:                                                                        //ldc.i4				0x3
	IL_003d:            V_1=3;                                                      //stloc				V_1
	IL_0041:            /*goto IL_000d;*/goto IL_0043;                              //br.s				IL_000d
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_5=this->F_x9;                                          //ldfld				System::Windows::Forms::Keys Root::T_x89::T_x19 F_x9
	IL_004a:            if(V_0!=Temp_5)goto IL_0081;                                //bne.un.s				IL_0081
	IL_004c:                                                                        //ldc.i4				0x1
	IL_0051:            V_1=1;                                                      //stloc				V_1
	IL_0055:            /*goto IL_000d;*/goto IL_0057;                              //br.s				IL_000d
	IL_0057:            goto IL_0061;                                               //br.s				IL_0061
	IL_0059:                                                                        //ldarg.0
	IL_005a:            this->M_x1();                                               //call				void Root::T_x89::T_x19::M_x1()
	IL_005f:                                                                        //ldc.i4.1
	IL_0060:            return true;                                                //ret
	IL_0061:                                                                        //ldc.i4				0x0
	IL_0066:            V_1=0;                                                      //stloc				V_1
	IL_006a:            /*goto IL_000d;*/goto IL_006c;                              //br.s				IL_000d
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_3=this->M_x13();                                       //call				System::Boolean Root::T_x89::T_x19::M_x13()
	IL_0072:            if(Temp_3)goto IL_0081;                                     //brtrue.s				IL_0081
	IL_0074:                                                                        //ldc.i4				0x2
	IL_0079:            V_1=2;                                                      //stloc				V_1
	IL_007d:            /*goto IL_000d;*/goto IL_007f;                              //br.s				IL_000d
	IL_007f:            goto IL_0059;                                               //br.s				IL_0059
	IL_0081:                                                                        //ldarg.0
	IL_0082:                                                                        //ldarg.1
	IL_0083:            Temp_4=System::Windows::Forms::Control::ProcessKeyPreview(A_0);//call				System::Boolean System::Windows::Forms::Control::ProcessKeyPreview(System::Windows::Forms::Message%)
	IL_0088:            return Temp_4;                                              //ret

}
inline void Root::T_x89::T_x19::M_x1(System::Windows::Forms::MouseEventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseUp by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Windows::Forms::MouseButtons Temp_3 = (System::Windows::Forms::MouseButtons)0;
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
	IL_0016:            goto IL_0045;                                               //br.s				IL_0045
	IL_0018:                                                                        //ldloc				V_0
	IL_001c:            switch(V_0){case 0:goto IL_00b6;case 1:goto IL_00f6;case 2:goto IL_0060;case 3:goto IL_000b;case 4:goto IL_0090;case 5:goto IL_006d;case 6:goto IL_00a6;case 7:goto IL_00cd;case 8:goto IL_0083;};//switch				(IL_00b6,IL_00f6,IL_0060,IL_000b,IL_0090,IL_006d,IL_00a6,IL_00cd,IL_0083)
	IL_0045:                                                                        //ldarg.1
	IL_0046:            Temp_3=A_0->Button;                                         //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_004b:                                                                        //ldc.i4				0x100000
	IL_0050:            if(safe_cast<System::Int32>(Temp_3)!=1048576)goto IL_00f8;  //bne.un				IL_00f8
	IL_0055:                                                                        //ldc.i4				0x2
	IL_005a:            V_0=2;                                                      //stloc				V_0
	IL_005e:            /*goto IL_0018;*/goto IL_0060;                              //br.s				IL_0018
	IL_0060:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_0062:                                                                        //ldc.i4				0x5
	IL_0067:            V_0=5;                                                      //stloc				V_0
	IL_006b:            /*goto IL_0018;*/goto IL_006d;                              //br.s				IL_0018
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_2=this->F_x13;                                         //ldfld				System::Boolean Root::T_x89::T_x19 F_x13
	IL_0073:            if(!Temp_2)goto IL_00f8;                                    //brfalse				IL_00f8
	IL_0078:                                                                        //ldc.i4				0x8
	IL_007d:            V_0=8;                                                      //stloc				V_0
	IL_0081:            /*goto IL_0018;*/goto IL_0083;                              //br.s				IL_0018
	IL_0083:            goto IL_00cf;                                               //br.s				IL_00cf
	IL_0085:                                                                        //ldc.i4				0x4
	IL_008a:            V_0=4;                                                      //stloc				V_0
	IL_008e:            /*goto IL_0018;*/goto IL_0090;                              //br.s				IL_0018
	IL_0090:                                                                        //ldarg.0
	IL_0091:            Temp_1=this->M_x13();                                       //call				System::Boolean Root::T_x89::T_x19::M_x13()
	IL_0096:            if(Temp_1)goto IL_00f8;                                     //brtrue.s				IL_00f8
	IL_0098:                                                                        //ldc.i4				0x6
	IL_009d:            V_0=6;                                                      //stloc				V_0
	IL_00a1:            /*goto IL_0018;*/goto IL_00a6;                              //br				IL_0018
	IL_00a6:            goto IL_0062;                                               //br.s				IL_0062
	IL_00a8:                                                                        //ldc.i4				0x0
	IL_00ad:            V_0=0;                                                      //stloc				V_0
	IL_00b1:            /*goto IL_0018;*/goto IL_00b6;                              //br				IL_0018
	IL_00b6:                                                                        //ldarg.1
	IL_00b7:            Temp_0=A_0->Clicks;                                         //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_Clicks()
	IL_00bc:                                                                        //ldc.i4.1
	IL_00bd:            if(Temp_0!=1)goto IL_00f8;                                  //bne.un.s				IL_00f8
	IL_00bf:                                                                        //ldc.i4				0x7
	IL_00c4:            V_0=7;                                                      //stloc				V_0
	IL_00c8:            /*goto IL_0018;*/goto IL_00cd;                              //br				IL_0018
	IL_00cd:            goto IL_0085;                                               //br.s				IL_0085
	IL_00cf:                                                                        //ldarg.0
	IL_00d0:                                                                        //ldc.i4.0
	IL_00d1:            this->F_x13=false;                                          //stfld				System::Boolean Root::T_x89::T_x19 F_x13
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            this->Update();                                             //call				void System::Windows::Forms::Control::Update()
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:            this->M_x1();                                               //call				void Root::T_x89::T_x19::M_x1()
	IL_00e8:                                                                        //ldc.i4				0x1
	IL_00ed:            V_0=1;                                                      //stloc				V_0
	IL_00f1:            /*goto IL_0018;*/goto IL_00f6;                              //br				IL_0018
	IL_00f6:            goto IL_00f8;                                               //br.s				IL_00f8
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:                                                                        //ldarg.1
	IL_00fa:            System::Windows::Forms::Control::OnMouseUp(A_0);            //call				void System::Windows::Forms::Control::OnMouseUp(System::Windows::Forms::MouseEventArgs^)
	IL_00ff:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x1(System::Windows::Forms::PaintEventArgs^ A_0)
//System::Windows::Forms::Control^::OnPaintBackground by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Graphics^ Temp_0 = nullptr;
	System::Drawing::Color Temp_1;
	System::Drawing::SolidBrush^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Drawing::Graphics^ Temp_5 = nullptr;
	System::Drawing::Color Temp_6;
	System::Drawing::Pen^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	System::Drawing::Graphics^ Temp_12 = nullptr;
	System::Drawing::Color Temp_13;
	System::Drawing::Pen^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::Drawing::Graphics^ Temp_17 = nullptr;
	System::Drawing::Color Temp_18;
	System::Drawing::SolidBrush^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::Int32 Temp_21 = 0;
	System::Drawing::Graphics^ Temp_22 = nullptr;
	System::Drawing::Color Temp_23;
	System::Drawing::Pen^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	System::Int32 Temp_26 = 0;
	System::Boolean Temp_27 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0047;case 2:goto IL_019e;case 3:goto IL_0057;case 4:goto IL_006d;case 5:goto IL_01b7;};//switch				(IL_000b,IL_0047,IL_019e,IL_0057,IL_006d,IL_01b7)
	IL_002e:            goto IL_0031;                                               //br.s				IL_0031
	IL_0030:                                                                        //break
	IL_0031:                                                                        //ldarg.0
	IL_0032:            Temp_27=this->F_x13;                                        //ldfld				System::Boolean Root::T_x89::T_x19 F_x13
	IL_0037:            if(!Temp_27)goto IL_0190;                                   //brfalse				IL_0190
	IL_003c:                                                                        //ldc.i4				0x1
	IL_0041:            V_0=1;                                                      //stloc				V_0
	IL_0045:            /*goto IL_000d;*/goto IL_0047;                              //br.s				IL_000d
	IL_0047:            goto IL_00e1;                                               //br				IL_00e1
	IL_004c:                                                                        //ldc.i4				0x3
	IL_0051:            V_0=3;                                                      //stloc				V_0
	IL_0055:            /*goto IL_000d;*/goto IL_0057;                              //br.s				IL_000d
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_11=this->F_x12;                                        //ldfld				System::Boolean Root::T_x89::T_x19 F_x12
	IL_005d:            if(!Temp_11)goto IL_01bc;                                   //brfalse				IL_01bc
	IL_0062:                                                                        //ldc.i4				0x4
	IL_0067:            V_0=4;                                                      //stloc				V_0
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:            goto IL_0150;                                               //br				IL_0150
	IL_0072:                                                                        //ldarg.1
	IL_0073:            Temp_17=A_0->Graphics;                                      //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_0078:                                                                        //ldc.i4				0xdc
	IL_007d:                                                                        //ldc.i4				0xdc
	IL_0082:                                                                        //ldc.i4				0xfa
	IL_0087:            Temp_18=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(220),safe_cast<System::Int32>(220),safe_cast<System::Int32>(250));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_008c:            Temp_19=gcnew System::Drawing::SolidBrush(Temp_18);         //newobj				void System::Drawing::SolidBrush::.ctor(System::Drawing::Color)
	IL_0091:                                                                        //ldc.i4.0
	IL_0092:                                                                        //ldc.i4.0
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_20=this->Width;                                        //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_0099:                                                                        //ldc.i4.1
	IL_009a:                                                                        //sub
	IL_009b:                                                                        //ldarg.0
	IL_009c:            Temp_21=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_00a1:                                                                        //ldc.i4.1
	IL_00a2:                                                                        //sub
	IL_00a3:            Temp_17->FillRectangle(safe_cast<System::Drawing::Brush^>(Temp_19),safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),(Temp_20 - 1),(Temp_21 - 1));//callvirt				void System::Drawing::Graphics::FillRectangle(System::Drawing::Brush^,System::Int32,System::Int32,System::Int32,System::Int32)
	IL_00a8:                                                                        //ldarg.1
	IL_00a9:            Temp_22=A_0->Graphics;                                      //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_00ae:                                                                        //ldc.i4.s				127
	IL_00b0:                                                                        //ldc.i4				0x9d
	IL_00b5:                                                                        //ldc.i4				0xb9
	IL_00ba:            Temp_23=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(127),safe_cast<System::Int32>(157),safe_cast<System::Int32>(185));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_00bf:                                                                        //ldc.r4				1.
	IL_00c4:            Temp_24=gcnew System::Drawing::Pen(Temp_23,safe_cast<System::Single>(1));//newobj				void System::Drawing::Pen::.ctor(System::Drawing::Color,System::Single)
	IL_00c9:                                                                        //ldc.i4.0
	IL_00ca:                                                                        //ldc.i4.0
	IL_00cb:                                                                        //ldarg.0
	IL_00cc:            Temp_25=this->Width;                                        //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_00d1:                                                                        //ldc.i4.1
	IL_00d2:                                                                        //sub
	IL_00d3:                                                                        //ldarg.0
	IL_00d4:            Temp_26=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_00d9:                                                                        //ldc.i4.1
	IL_00da:                                                                        //sub
	IL_00db:            Temp_22->DrawRectangle(Temp_24,safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),(Temp_25 - 1),(Temp_26 - 1));//callvirt				void System::Drawing::Graphics::DrawRectangle(System::Drawing::Pen^,System::Int32,System::Int32,System::Int32,System::Int32)
	IL_00e0:            return;                                                     //ret
	IL_00e1:                                                                        //ldarg.1
	IL_00e2:            Temp_0=A_0->Graphics;                                       //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_00e7:                                                                        //ldc.i4				0xaa
	IL_00ec:                                                                        //ldc.i4				0xbe
	IL_00f1:                                                                        //ldc.i4				0xdc
	IL_00f6:            Temp_1=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(170),safe_cast<System::Int32>(190),safe_cast<System::Int32>(220));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_00fb:            Temp_2=gcnew System::Drawing::SolidBrush(Temp_1);           //newobj				void System::Drawing::SolidBrush::.ctor(System::Drawing::Color)
	IL_0100:                                                                        //ldc.i4.0
	IL_0101:                                                                        //ldc.i4.0
	IL_0102:                                                                        //ldarg.0
	IL_0103:            Temp_3=this->Width;                                         //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_0108:                                                                        //ldc.i4.1
	IL_0109:                                                                        //sub
	IL_010a:                                                                        //ldarg.0
	IL_010b:            Temp_4=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0110:                                                                        //ldc.i4.1
	IL_0111:                                                                        //sub
	IL_0112:            Temp_0->FillRectangle(safe_cast<System::Drawing::Brush^>(Temp_2),safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),(Temp_3 - 1),(Temp_4 - 1));//callvirt				void System::Drawing::Graphics::FillRectangle(System::Drawing::Brush^,System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0117:                                                                        //ldarg.1
	IL_0118:            Temp_5=A_0->Graphics;                                       //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_011d:                                                                        //ldc.i4.s				127
	IL_011f:                                                                        //ldc.i4				0x9d
	IL_0124:                                                                        //ldc.i4				0xb9
	IL_0129:            Temp_6=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(127),safe_cast<System::Int32>(157),safe_cast<System::Int32>(185));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_012e:                                                                        //ldc.r4				1.
	IL_0133:            Temp_7=gcnew System::Drawing::Pen(Temp_6,safe_cast<System::Single>(1));//newobj				void System::Drawing::Pen::.ctor(System::Drawing::Color,System::Single)
	IL_0138:                                                                        //ldc.i4.0
	IL_0139:                                                                        //ldc.i4.0
	IL_013a:                                                                        //ldarg.0
	IL_013b:            Temp_8=this->Width;                                         //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_0140:                                                                        //ldc.i4.1
	IL_0141:                                                                        //sub
	IL_0142:                                                                        //ldarg.0
	IL_0143:            Temp_9=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0148:                                                                        //ldc.i4.1
	IL_0149:                                                                        //sub
	IL_014a:            Temp_5->DrawRectangle(Temp_7,safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),(Temp_8 - 1),(Temp_9 - 1));//callvirt				void System::Drawing::Graphics::DrawRectangle(System::Drawing::Pen^,System::Int32,System::Int32,System::Int32,System::Int32)
	IL_014f:            return;                                                     //ret
	IL_0150:                                                                        //ldarg.0
	IL_0151:                                                                        //ldarg.1
	IL_0152:            System::Windows::Forms::Control::OnPaintBackground(A_0);    //call				void System::Windows::Forms::Control::OnPaintBackground(System::Windows::Forms::PaintEventArgs^)
	IL_0157:                                                                        //ldarg.1
	IL_0158:            Temp_12=A_0->Graphics;                                      //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_015d:                                                                        //ldc.i4.s				127
	IL_015f:                                                                        //ldc.i4				0x9d
	IL_0164:                                                                        //ldc.i4				0xb9
	IL_0169:            Temp_13=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(127),safe_cast<System::Int32>(157),safe_cast<System::Int32>(185));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_016e:                                                                        //ldc.r4				1.
	IL_0173:            Temp_14=gcnew System::Drawing::Pen(Temp_13,safe_cast<System::Single>(1));//newobj				void System::Drawing::Pen::.ctor(System::Drawing::Color,System::Single)
	IL_0178:                                                                        //ldc.i4.0
	IL_0179:                                                                        //ldc.i4.0
	IL_017a:                                                                        //ldarg.0
	IL_017b:            Temp_15=this->Width;                                        //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_0180:                                                                        //ldc.i4.1
	IL_0181:                                                                        //sub
	IL_0182:                                                                        //ldarg.0
	IL_0183:            Temp_16=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0188:                                                                        //ldc.i4.1
	IL_0189:                                                                        //sub
	IL_018a:            Temp_12->DrawRectangle(Temp_14,safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),(Temp_15 - 1),(Temp_16 - 1));//callvirt				void System::Drawing::Graphics::DrawRectangle(System::Drawing::Pen^,System::Int32,System::Int32,System::Int32,System::Int32)
	IL_018f:            return;                                                     //ret
	IL_0190:                                                                        //ldc.i4				0x2
	IL_0195:            V_0=2;                                                      //stloc				V_0
	IL_0199:            /*goto IL_000d;*/goto IL_019e;                              //br				IL_000d
	IL_019e:                                                                        //ldarg.0
	IL_019f:            Temp_10=this->M_x13();                                      //call				System::Boolean Root::T_x89::T_x19::M_x13()
	IL_01a4:            if(!Temp_10)goto IL_004c;                                   //brfalse				IL_004c
	IL_01a9:                                                                        //ldc.i4				0x5
	IL_01ae:            V_0=5;                                                      //stloc				V_0
	IL_01b2:            /*goto IL_000d;*/goto IL_01b7;                              //br				IL_000d
	IL_01b7:            goto IL_0072;                                               //br				IL_0072
	IL_01bc:                                                                        //ldarg.0
	IL_01bd:                                                                        //ldarg.1
	IL_01be:            System::Windows::Forms::Control::OnPaintBackground(A_0);    //call				void System::Windows::Forms::Control::OnPaintBackground(System::Windows::Forms::PaintEventArgs^)
	IL_01c3:            return;                                                     //ret

}
inline System::Drawing::Image^ Root::T_x89::T_x19::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Image^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Drawing::Image^ Root::T_x89::T_x19 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x89::T_x19::M_x12(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseEnter by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldc.i4.1
	IL_0005:            this->F_x12=true;                                           //stfld				System::Boolean Root::T_x89::T_x19 F_x12
	IL_000a:                                                                        //ldarg.0
	IL_000b:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_0010:                                                                        //ldarg.0
	IL_0011:            this->Update();                                             //call				void System::Windows::Forms::Control::Update()
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            System::Windows::Forms::Control::OnMouseEnter(A_0);         //call				void System::Windows::Forms::Control::OnMouseEnter(System::EventArgs^)
	IL_001d:            return;                                                     //ret

}
inline System::Boolean Root::T_x89::T_x19::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Boolean Root::T_x89::T_x19 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Windows::Forms::Keys Root::T_x89::T_x19::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Keys Temp_0 = (System::Windows::Forms::Keys)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				System::Windows::Forms::Keys Root::T_x89::T_x19 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x89::T_x19::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x19 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x19 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x2(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x89::T_x19 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x89::T_x19 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x2(System::Windows::Forms::MouseEventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseDown by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Boolean Temp_1 = false;
	System::Windows::Forms::MouseButtons Temp_2 = (System::Windows::Forms::MouseButtons)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_00b4;case 1:goto IL_000b;case 2:goto IL_008d;case 3:goto IL_004a;case 4:goto IL_009d;case 5:goto IL_006d;case 6:goto IL_007a;};//switch				(IL_00b4,IL_000b,IL_008d,IL_004a,IL_009d,IL_006d,IL_007a)
	IL_0032:                                                                        //ldarg.1
	IL_0033:            Temp_2=A_0->Button;                                         //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_0038:                                                                        //ldc.i4				0x100000
	IL_003d:            if(safe_cast<System::Int32>(Temp_2)!=1048576)goto IL_00b6;  //bne.un.s				IL_00b6
	IL_003f:                                                                        //ldc.i4				0x3
	IL_0044:            V_0=3;                                                      //stloc				V_0
	IL_0048:            /*goto IL_000d;*/goto IL_004a;                              //br.s				IL_000d
	IL_004a:            goto IL_004d;                                               //br.s				IL_004d
	IL_004c:                                                                        //break
	IL_004d:            goto IL_008f;                                               //br.s				IL_008f
	IL_004f:                                                                        //ldarg.0
	IL_0050:                                                                        //ldc.i4.1
	IL_0051:            this->F_x13=true;                                           //stfld				System::Boolean Root::T_x89::T_x19 F_x13
	IL_0056:                                                                        //ldarg.0
	IL_0057:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_005c:                                                                        //ldarg.0
	IL_005d:            this->Update();                                             //call				void System::Windows::Forms::Control::Update()
	IL_0062:                                                                        //ldc.i4				0x5
	IL_0067:            V_0=5;                                                      //stloc				V_0
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_006f:                                                                        //ldc.i4				0x6
	IL_0074:            V_0=6;                                                      //stloc				V_0
	IL_0078:            /*goto IL_000d;*/goto IL_007a;                              //br.s				IL_000d
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_1=this->M_x13();                                       //call				System::Boolean Root::T_x89::T_x19::M_x13()
	IL_0080:            if(Temp_1)goto IL_00b6;                                     //brtrue.s				IL_00b6
	IL_0082:                                                                        //ldc.i4				0x2
	IL_0087:            V_0=2;                                                      //stloc				V_0
	IL_008b:            /*goto IL_000d;*/goto IL_008d;                              //br.s				IL_000d
	IL_008d:            goto IL_004f;                                               //br.s				IL_004f
	IL_008f:                                                                        //ldc.i4				0x4
	IL_0094:            V_0=4;                                                      //stloc				V_0
	IL_0098:            /*goto IL_000d;*/goto IL_009d;                              //br				IL_000d
	IL_009d:                                                                        //ldarg.1
	IL_009e:            Temp_0=A_0->Clicks;                                         //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_Clicks()
	IL_00a3:                                                                        //ldc.i4.1
	IL_00a4:            if(Temp_0!=1)goto IL_00b6;                                  //bne.un.s				IL_00b6
	IL_00a6:                                                                        //ldc.i4				0x0
	IL_00ab:            V_0=0;                                                      //stloc				V_0
	IL_00af:            /*goto IL_000d;*/goto IL_00b4;                              //br				IL_000d
	IL_00b4:            goto IL_006f;                                               //br.s				IL_006f
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:                                                                        //ldarg.1
	IL_00b8:            System::Windows::Forms::Control::OnMouseDown(A_0);          //call				void System::Windows::Forms::Control::OnMouseDown(System::Windows::Forms::MouseEventArgs^)
	IL_00bd:            return;                                                     //ret

}
inline void Root::T_x89::T_x19::M_x2(System::Windows::Forms::PaintEventArgs^ A_0)
//System::Windows::Forms::Control^::OnPaint by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Image^ Temp_0 = nullptr;
	System::Drawing::Size Temp_1;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Drawing::Graphics^ Temp_6 = nullptr;
	System::Drawing::Image^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Drawing::Image^ Temp_10 = nullptr;
	//local variables.
	System::Drawing::Size V_0;
	System::Drawing::Point V_1;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_2=1;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_009a;case 1:goto IL_000b;case 2:goto IL_0035;};//switch				(IL_009a,IL_000b,IL_0035)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_10=this->F_x8;                                         //ldfld				System::Drawing::Image^ Root::T_x89::T_x19 F_x8
	IL_0028:            if(Temp_10==nullptr)goto IL_009c;                           //brfalse.s				IL_009c
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_2=2;                                                      //stloc				V_2
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:            goto IL_003a;                                               //br.s				IL_003a
	IL_0039:                                                                        //break
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_0=this->F_x8;                                          //ldfld				System::Drawing::Image^ Root::T_x89::T_x19 F_x8
	IL_0040:            Temp_1=Temp_0->Size;                                        //callvirt				System::Drawing::Size System::Drawing::Image::get_Size()
	IL_0045:            V_0=Temp_1;                                                 //stloc.0
	IL_0046:                                                                        //ldloca.s				V_1
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_2=this->Width;                                         //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_004e:                                                                        //ldloca.s				V_0
	IL_0050:            Temp_3=V_0.Width;                                           //call				System::Int32 System::Drawing::Size::get_Width()
	IL_0055:                                                                        //sub
	IL_0056:                                                                        //ldc.i4.2
	IL_0057:                                                                        //div
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_4=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_005e:                                                                        //ldloca.s				V_0
	IL_0060:            Temp_5=V_0.Height;                                          //call				System::Int32 System::Drawing::Size::get_Height()
	IL_0065:                                                                        //sub
	IL_0066:                                                                        //ldc.i4.2
	IL_0067:                                                                        //div
	IL_0068:            V_1=System::Drawing::Point(((Temp_2 - Temp_3) / 2),((Temp_4 - Temp_5) / 2));//call				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_006d:                                                                        //ldarg.1
	IL_006e:            Temp_6=A_0->Graphics;                                       //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_0073:                                                                        //ldarg.0
	IL_0074:            Temp_7=this->F_x8;                                          //ldfld				System::Drawing::Image^ Root::T_x89::T_x19 F_x8
	IL_0079:                                                                        //ldloca.s				V_1
	IL_007b:            Temp_8=V_1.X;                                               //call				System::Int32 System::Drawing::Point::get_X()
	IL_0080:                                                                        //ldloca.s				V_1
	IL_0082:            Temp_9=V_1.Y;                                               //call				System::Int32 System::Drawing::Point::get_Y()
	IL_0087:            Temp_6->DrawImage(Temp_7,Temp_8,Temp_9);                    //callvirt				void System::Drawing::Graphics::DrawImage(System::Drawing::Image^,System::Int32,System::Int32)
	IL_008c:                                                                        //ldc.i4				0x0
	IL_0091:            V_2=0;                                                      //stloc				V_2
	IL_0095:            /*goto IL_000d;*/goto IL_009a;                              //br				IL_000d
	IL_009a:            goto IL_009c;                                               //br.s				IL_009c
	IL_009c:            return;                                                     //ret

}
inline System::String^ Root::T_x89::T_x19::M_x8()
//System::Windows::Forms::Control^::get_Text by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::Control::Text;               //call				System::String^ System::Windows::Forms::Control::get_Text()
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x89::T_x11::T_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ImageList^ Temp_0 = nullptr;
	System::Windows::Forms::ImageList^ Temp_1 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_2 = nullptr;
	System::Drawing::Image^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::ImageList^ Temp_5 = nullptr;
	System::Windows::Forms::ImageList^ Temp_6 = nullptr;
	System::Drawing::Color Temp_7;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ListView();*/                     //call				void System::Windows::Forms::ListView::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:            this->View=safe_cast<System::Windows::Forms::View>(1);      //call				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.1
	IL_000f:            this->MultiSelect=true;                                     //call				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.1
	IL_0016:            this->AllowColumnReorder=true;                              //call				void System::Windows::Forms::ListView::set_AllowColumnReorder(System::Boolean)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4.1
	IL_001d:            this->FullRowSelect=true;                                   //call				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldc.i4.2
	IL_0024:            this->HeaderStyle=safe_cast<System::Windows::Forms::ColumnHeaderStyle>(2);//call				void System::Windows::Forms::ListView::set_HeaderStyle(System::Windows::Forms::ColumnHeaderStyle)
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:            this->HideSelection=false;                                  //call				void System::Windows::Forms::ListView::set_HideSelection(System::Boolean)
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_0=gcnew System::Windows::Forms::ImageList();           //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_0036:            this->SmallImageList=Temp_0;                                //call				void System::Windows::Forms::ListView::set_SmallImageList(System::Windows::Forms::ImageList^)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_1=this->SmallImageList;                                //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0041:            Temp_2=Temp_1->Images;                                      //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0046:            Temp_3=Root::T_x117::M_x1();                                //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_004b:            Temp_4=Temp_2->AddStrip(Temp_3);                            //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_0050:                                                                        //pop
	IL_0051:                                                                        //ldarg.0
	IL_0052:            Temp_5=this->SmallImageList;                                //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0057:                                                                        //ldc.i4.s				32
	IL_0059:            Temp_5->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_6=this->SmallImageList;                                //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0064:                                                                        //ldc.i4				0xff
	IL_0069:                                                                        //ldc.i4.0
	IL_006a:                                                                        //ldc.i4				0x80
	IL_006f:                                                                        //ldc.i4.0
	IL_0070:            Temp_7=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0075:            Temp_6->TransparentColor=Temp_7;                            //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_007a:            return;                                                     //ret

}
inline void Root::T_x89::T_x11::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IAssemblyBrowser^ Temp_0 = nullptr;
	Reflector::IWindowManager^ Temp_1 = nullptr;
	Reflector::IWindowCollection^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::IWindow^ Temp_4 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	//local variables.
	Root::T_x89::T_x9^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_3=15;                                                     //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_2=3;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_00b5;case 1:goto IL_008c;case 2:goto IL_00c9;case 3:goto IL_0014;case 4:goto IL_004f;};//switch				(IL_00b5,IL_008c,IL_00c9,IL_0014,IL_004f)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_8=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0039:            Temp_9=Temp_8->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_003e:                                                                        //ldc.i4.1
	IL_003f:            if(Temp_9!=1)goto IL_00cb;                                  //bne.un				IL_00cb
	IL_0044:                                                                        //ldc.i4				0x4
	IL_0049:            V_2=4;                                                      //stloc				V_2
	IL_004d:            /*goto IL_0016;*/goto IL_004f;                              //br.s				IL_0016
	IL_004f:            goto IL_008e;                                               //br.s				IL_008e
	IL_0051:                                                                        //ldarg.0
	IL_0052:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x89::T_x11 F_x1
	IL_0057:                                                                        //ldloc.1
	IL_0058:            Temp_0->ActiveItem=V_1;                                     //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_1=this->F_x2;                                          //ldfld				Reflector::IWindowManager^ Root::T_x89::T_x11 F_x2
	IL_0063:            Temp_2=Temp_1->Windows;                                     //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0068:                                                                        //ldstr				L"\x7E2C\x4A2E\x5030\x4132\x5634\x5F36\x6E38\x523A\x533C\x5B3E\x2E40\x3442"
	IL_006d:                                                                        //ldloc				V_3
	IL_0071:            Temp_3=a(L"\x7E2C\x4A2E\x5030\x4132\x5634\x5F36\x6E38\x523A\x533C\x5B3E\x2E40\x3442",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0076:            Temp_4=Temp_2[Temp_3];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_007b:                                                                        //ldc.i4.0
	IL_007c:            Temp_4->Visible=false;                                      //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0081:                                                                        //ldc.i4				0x1
	IL_0086:            V_2=1;                                                      //stloc				V_2
	IL_008a:            /*goto IL_0016;*/goto IL_008c;                              //br.s				IL_0016
	IL_008c:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_008e:                                                                        //ldarg.0
	IL_008f:            Temp_5=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0094:                                                                        //ldc.i4.0
	IL_0095:            Temp_6=Temp_5[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_009a:                                                                        //castclass				Root::T_x89::T_x9
	IL_009f:            V_0=safe_cast<Root::T_x89::T_x9^>(Temp_6);                  //stloc.0
	IL_00a0:                                                                        //ldloc.0
	IL_00a1:            Temp_7=V_0->M_x12();                                        //callvirt				System::Object^ Root::T_x89::T_x9::M_x12()
	IL_00a6:            V_1=Temp_7;                                                 //stloc.1
	IL_00a7:                                                                        //ldc.i4				0x0
	IL_00ac:            V_2=0;                                                      //stloc				V_2
	IL_00b0:            /*goto IL_0016;*/goto IL_00b5;                              //br				IL_0016
	IL_00b5:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_00b7:                                                                        //break
	IL_00b8:                                                                        //ldloc.1
	IL_00b9:            if(V_1==nullptr)goto IL_00cb;                               //brfalse.s				IL_00cb
	IL_00bb:                                                                        //ldc.i4				0x2
	IL_00c0:            V_2=2;                                                      //stloc				V_2
	IL_00c4:            /*goto IL_0016;*/goto IL_00c9;                              //br				IL_0016
	IL_00c9:            goto IL_0051;                                               //br.s				IL_0051
	IL_00cb:            return;                                                     //ret

}
inline void Root::T_x89::T_x11::M_x1(Reflector::IAssemblyBrowser^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Reflector::IAssemblyBrowser^ Root::T_x89::T_x11 F_x1
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x89::T_x11::M_x1(Reflector::IWindowManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				Reflector::IWindowManager^ Root::T_x89::T_x11 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x89::T_x11::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::ListView^::OnItemActivate by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x89::T_x11::M_x1()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x89::T_x11::M_x1(System::Windows::Forms::ColumnClickEventArgs^ A_0)
//System::Windows::Forms::ListView^::OnColumnClick by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x89::T_x11::T_x1^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            System::Windows::Forms::ListView::OnColumnClick(A_0);       //call				void System::Windows::Forms::ListView::OnColumnClick(System::Windows::Forms::ColumnClickEventArgs^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=A_0->Column;                                         //callvirt				System::Int32 System::Windows::Forms::ColumnClickEventArgs::get_Column()
	IL_0011:            Temp_1=gcnew Root::T_x89::T_x11::T_x1(Temp_0);              //newobj				void Root::T_x89::T_x11::T_x1::.ctor(System::Int32)
	IL_0016:            this->ListViewItemSorter=safe_cast<System::Collections::IComparer^>(Temp_1);//call				void System::Windows::Forms::ListView::set_ListViewItemSorter(System::Collections::IComparer^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4.1
	IL_001d:            this->Sorting=safe_cast<System::Windows::Forms::SortOrder>(1);//call				void System::Windows::Forms::ListView::set_Sorting(System::Windows::Forms::SortOrder)
	IL_0022:            return;                                                     //ret

}
inline Reflector::IAssemblyBrowser^ Root::T_x89::T_x11::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IAssemblyBrowser^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x89::T_x11 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::IWindowManager^ Root::T_x89::T_x11::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::IWindowManager^ Root::T_x89::T_x11 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x89::T_x11::ProcessDialogKey(System::Windows::Forms::Keys key)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldc.i4.s				32
	IL_0003:            if(safe_cast<System::Int32>(key)!=32)goto IL_000f;          //bne.un.s				IL_000f
	IL_0005:            goto IL_0007;                                               //br.s				IL_0007
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->M_x1();                                               //call				void Root::T_x89::T_x11::M_x1()
	IL_000d:                                                                        //ldc.i4.1
	IL_000e:            return true;                                                //ret
	IL_000f:                                                                        //ldc.i4.4
	IL_0010:                                                                        //dup
	IL_0011:                                                                        //dup
	IL_0012:                                                                        //ldc.i4.2
	IL_0013:                                                                        //sub
	IL_0014:                                                                        //blt				IL_0010
	IL_0019:                                                                        //pop
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=System::Windows::Forms::ListView::ProcessDialogKey(key);//call				System::Boolean System::Windows::Forms::ListView::ProcessDialogKey(System::Windows::Forms::Keys)
	IL_0021:            return Temp_0;                                              //ret

}
inline Root::T_x89::T_x11::T_x1::T_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x89::T_x11::T_x1 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x89::T_x11::T_x1 F_x1
	IL_0014:            return;                                                     //ret

}
inline System::Int32 Root::T_x89::T_x11::T_x1::M_x1(System::Object^ A_0,System::Object^ A_1)
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
	IL_000f:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x89::T_x11::T_x1 F_x1
	IL_0014:            Temp_2=Temp_0[Temp_1];                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_0019:            Temp_3=Temp_2->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_001e:            V_0=Temp_3;                                                 //stloc.0
	IL_001f:                                                                        //ldarg.2
	IL_0020:                                                                        //isinst				System::Windows::Forms::ListViewItem
	IL_0025:            Temp_4=dynamic_cast<System::Windows::Forms::ListViewItem^>(A_1)->SubItems;//callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_5=this->F_x1;                                          //ldfld				System::Int32 Root::T_x89::T_x11::T_x1 F_x1
	IL_0030:            Temp_6=Temp_4[Temp_5];                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_0035:            Temp_7=Temp_6->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_003a:            V_1=Temp_7;                                                 //stloc.1
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldloc.1
	IL_003d:            Temp_8=V_0->CompareTo(V_1);                                 //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0042:            return Temp_8;                                              //ret

}
inline Root::T_x89::T_x9::T_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ListViewItem();*/                 //call				void System::Windows::Forms::ListViewItem::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x89::T_x9::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->Tag=A_0;                                              //call				void System::Windows::Forms::ListViewItem::set_Tag(System::Object^)
	IL_0007:            return;                                                     //ret

}
inline System::Object^ Root::T_x89::T_x9::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Tag;                                           //call				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x89::T_x13::T_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x89::T_x9();*/                                    //call				void Root::T_x89::T_x9::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x89::T_x13::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::Object^ Root::T_x89::T_x9::M_x12()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IPropertyDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::IPropertyDeclaration^>(Temp_0);//ret

}
inline void Root::T_x89::T_x13::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Color Temp_2;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_7 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_12 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Root::T_x89::T_x9::M_x1(safe_cast<System::Object^>(A_0));   //call				void Root::T_x89::T_x9::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0011:            this->ImageIndex=Temp_0;                                    //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_1=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_001d:            Temp_2=System::Drawing::Color::FromArgb(Temp_1);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0022:            this->ForeColor=Temp_2;                                     //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_002e:            this->Text=Temp_3;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_4=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_003f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0044:            Temp_6=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_5));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0049:            Temp_7=Temp_4->Add(Temp_6);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_004e:                                                                        //pop
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_8=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_9=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_005b:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0060:            Temp_10=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_9)));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_0065:            Temp_11=Temp_10->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_006a:            Temp_12=Temp_8->Add(Temp_11);                               //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_006f:                                                                        //pop
	IL_0070:            return;                                                     //ret

}
inline System::String^ Root::T_x89::T_x13::M_x2()
//System::Windows::Forms::ListViewItem^::ToString by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IPropertyDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x1();                                        //call				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x89::T_x13::M_x1()
	IL_0006:            Temp_1=Root::T_x115::M_x12(safe_cast<Reflector::CodeModel::IPropertyReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IPropertyReference^)
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x89::T_x12::T_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x89::T_x9();*/                                    //call				void Root::T_x89::T_x9::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x89::T_x12::M_x1()
//System::Windows::Forms::ListViewItem^::ToString by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x89::T_x12::M_x2()
	IL_0006:            Temp_1=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x89::T_x12::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Color Temp_2;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_7 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_12 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Root::T_x89::T_x9::M_x1(safe_cast<System::Object^>(A_0));   //call				void Root::T_x89::T_x9::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0011:            this->ImageIndex=Temp_0;                                    //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_1=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_001d:            Temp_2=System::Drawing::Color::FromArgb(Temp_1);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0022:            this->ForeColor=Temp_2;                                     //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=Root::T_x115::M_x12(safe_cast<Reflector::CodeModel::IMethodReference^>(A_0));//call				System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IMethodReference^)
	IL_002e:            this->Text=Temp_3;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_4=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_003f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0044:            Temp_6=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_5));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0049:            Temp_7=Temp_4->Add(Temp_6);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_004e:                                                                        //pop
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_8=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_9=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_005b:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0060:            Temp_10=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_9)));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_0065:            Temp_11=Temp_10->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_006a:            Temp_12=Temp_8->Add(Temp_11);                               //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_006f:                                                                        //pop
	IL_0070:            return;                                                     //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x89::T_x12::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::Object^ Root::T_x89::T_x9::M_x12()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_0);//ret

}
inline Root::T_x89::T_x8::T_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x89::T_x9();*/                                    //call				void Root::T_x89::T_x9::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x89::T_x8::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::Object^ Root::T_x89::T_x9::M_x12()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IFieldDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_0);//ret

}
inline void Root::T_x89::T_x8::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Color Temp_2;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_7 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_12 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Root::T_x89::T_x9::M_x1(safe_cast<System::Object^>(A_0));   //call				void Root::T_x89::T_x9::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0011:            this->ImageIndex=Temp_0;                                    //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_1=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_001d:            Temp_2=System::Drawing::Color::FromArgb(Temp_1);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0022:            this->ForeColor=Temp_2;                                     //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_002e:            this->Text=Temp_3;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_4=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_003f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0044:            Temp_6=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_5));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0049:            Temp_7=Temp_4->Add(Temp_6);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_004e:                                                                        //pop
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_8=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_9=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_005b:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0060:            Temp_10=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_9)));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_0065:            Temp_11=Temp_10->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_006a:            Temp_12=Temp_8->Add(Temp_11);                               //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_006f:                                                                        //pop
	IL_0070:            return;                                                     //ret

}
inline System::String^ Root::T_x89::T_x8::M_x2()
//System::Windows::Forms::ListViewItem^::ToString by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x1();                                        //call				Reflector::CodeModel::IFieldDeclaration^ Root::T_x89::T_x8::M_x1()
	IL_0006:            Temp_1=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IFieldReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x89::T_x7::T_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x89::T_x9();*/                                    //call				void Root::T_x89::T_x9::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x89::T_x7::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::Object^ Root::T_x89::T_x9::M_x12()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IEventDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::IEventDeclaration^>(Temp_0);//ret

}
inline void Root::T_x89::T_x7::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Color Temp_2;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_7 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_12 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Root::T_x89::T_x9::M_x1(safe_cast<System::Object^>(A_0));   //call				void Root::T_x89::T_x9::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0011:            this->ImageIndex=Temp_0;                                    //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_1=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_001d:            Temp_2=System::Drawing::Color::FromArgb(Temp_1);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0022:            this->ForeColor=Temp_2;                                     //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_002e:            this->Text=Temp_3;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_4=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_003f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0044:            Temp_6=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_5));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0049:            Temp_7=Temp_4->Add(Temp_6);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_004e:                                                                        //pop
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_8=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_9=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_005b:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0060:            Temp_10=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_9)));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_0065:            Temp_11=Temp_10->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_006a:            Temp_12=Temp_8->Add(Temp_11);                               //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_006f:                                                                        //pop
	IL_0070:            return;                                                     //ret

}
inline System::String^ Root::T_x89::T_x7::M_x2()
//System::Windows::Forms::ListViewItem^::ToString by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x89::T_x7::M_x1()
	IL_0006:            Temp_1=Root::T_x115::M_x5(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::IEventReference^)
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x89::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x89::T_x9();*/                                    //call				void Root::T_x89::T_x9::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x89::T_x2::M_x1()
//System::Windows::Forms::ListViewItem^::ToString by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x89::T_x2::M_x2()
	IL_0006:            Temp_1=Root::T_x115::M_x8(safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x89::T_x2::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Color Temp_2;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_6 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_10 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Root::T_x89::T_x9::M_x1(safe_cast<System::Object^>(A_0));   //call				void Root::T_x89::T_x9::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_0011:            this->ImageIndex=Temp_0;                                    //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_1=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_001d:            Temp_2=System::Drawing::Color::FromArgb(Temp_1);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0022:            this->ForeColor=Temp_2;                                     //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=Root::T_x115::M_x5(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_002e:            this->Text=Temp_3;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_4=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_5=Root::T_x115::M_x13(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//call				System::String^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeReference^)
	IL_003f:            Temp_6=Temp_4->Add(Temp_5);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0044:                                                                        //pop
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_7=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_004b:                                                                        //ldarg.1
	IL_004c:            Temp_8=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(A_0));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_0051:            Temp_9=Temp_8->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0056:            Temp_10=Temp_7->Add(Temp_9);                                //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_005b:                                                                        //pop
	IL_005c:            return;                                                     //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x89::T_x2::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::Object^ Root::T_x89::T_x9::M_x12()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_0);//ret

}
