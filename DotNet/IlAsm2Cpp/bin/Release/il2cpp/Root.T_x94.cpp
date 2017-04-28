#include "global_xref.h"

inline Root::T_x94::T_x94()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Drawing::Size Temp_2;
	System::Windows::Forms::Button^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Drawing::Point Temp_5;
	System::Drawing::Size Temp_6;
	System::Windows::Forms::Control::ControlCollection^ Temp_7 = nullptr;
	System::Windows::Forms::Label^ Temp_8 = nullptr;
	System::Drawing::Point Temp_9;
	System::String^ Temp_10 = nullptr;
	System::Drawing::Size Temp_11;
	System::Windows::Forms::Control::ControlCollection^ Temp_12 = nullptr;
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
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_24 = nullptr;
	System::Windows::Forms::ListView^ Temp_25 = nullptr;
	System::Windows::Forms::ListView^ Temp_26 = nullptr;
	System::Windows::Forms::ListView^ Temp_27 = nullptr;
	System::EventHandler^ Temp_28 = nullptr;
	System::Windows::Forms::ListView^ Temp_29 = nullptr;
	System::EventHandler^ Temp_30 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_31 = nullptr;
	System::Windows::Forms::ListView^ Temp_32 = nullptr;
	//local variables.
	System::Windows::Forms::Button^ V_0 = nullptr;
	System::Windows::Forms::Label^ V_1 = nullptr;
	array<System::Windows::Forms::ColumnHeader^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_3=12;                                                     //stloc				V_3
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=gcnew System::Windows::Forms::ListView();            //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_000f:            this->F_x1=Temp_0;                                          //stfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldnull
	IL_0016:            this->F_x2=safe_cast<System::Windows::Forms::TextBox^>(nullptr);//stfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_001b:                                                                        //ldarg.0
	IL_001c:            /*Root::T_x66();*/                                          //call				void Root::T_x66::.ctor()
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldstr				L"\x6B29\x482B\x4A2D\x1D2F\x7B31\x5A33\x4535"
	IL_0027:                                                                        //ldloc				V_3
	IL_002b:            Temp_1=a(L"\x6B29\x482B\x4A2D\x1D2F\x7B31\x5A33\x4535",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0030:            this->Text=Temp_1;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0035:                                                                        //ldarg.0
	IL_0036:                                                                        //ldc.i4				0x186
	IL_003b:                                                                        //ldc.i4				0x122
	IL_0040:            Temp_2=System::Drawing::Size(safe_cast<System::Int32>(390),safe_cast<System::Int32>(290));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0045:            this->ClientSize=Temp_2;                                    //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldc.i4.1
	IL_004c:            this->StartPosition=safe_cast<System::Windows::Forms::FormStartPosition>(1);//call				void System::Windows::Forms::Form::set_StartPosition(System::Windows::Forms::FormStartPosition)
	IL_0051:            Temp_3=gcnew System::Windows::Forms::Button();              //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0056:            V_0=Temp_3;                                                 //stloc.0
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldc.i4.3
	IL_0059:            V_0->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_005e:                                                                        //ldloc.0
	IL_005f:                                                                        //ldstr				L"\x0C29\x6F2B\x412D\x5E2F\x4631\x5D33\x5835\x4D37\x5F39"
	IL_0064:                                                                        //ldloc				V_3
	IL_0068:            Temp_4=a(L"\x0C29\x6F2B\x412D\x5E2F\x4631\x5D33\x5835\x4D37\x5F39",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:            V_0->Text=Temp_4;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0072:                                                                        //ldloc.0
	IL_0073:                                                                        //ldc.i4				0x133
	IL_0078:                                                                        //ldc.i4				0x102
	IL_007d:            Temp_5=System::Drawing::Point(safe_cast<System::Int32>(307),safe_cast<System::Int32>(258));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0082:            V_0->Location=Temp_5;                                       //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0087:                                                                        //ldloc.0
	IL_0088:                                                                        //ldc.i4.s				75
	IL_008a:                                                                        //ldc.i4.s				23
	IL_008c:            Temp_6=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0091:            V_0->Size=Temp_6;                                           //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldc.i4.0
	IL_0098:            V_0->TabIndex=0;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_009d:                                                                        //ldloc.0
	IL_009e:                                                                        //ldc.i4.1
	IL_009f:            V_0->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(1);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:            Temp_7=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_00aa:                                                                        //ldloc.0
	IL_00ab:            Temp_7->Add(safe_cast<System::Windows::Forms::Control^>(V_0));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:                                                                        //ldloc.0
	IL_00b2:            this->AcceptButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_0);//call				void System::Windows::Forms::Form::set_AcceptButton(System::Windows::Forms::IButtonControl^)
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:                                                                        //ldloc.0
	IL_00b9:            this->CancelButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_0);//call				void System::Windows::Forms::Form::set_CancelButton(System::Windows::Forms::IButtonControl^)
	IL_00be:            Temp_8=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_00c3:            V_1=Temp_8;                                                 //stloc.1
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:                                                                        //ldc.i4.3
	IL_00c6:            V_1->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_00cb:                                                                        //ldloc.1
	IL_00cc:                                                                        //ldc.i4.8
	IL_00cd:                                                                        //ldc.i4.8
	IL_00ce:            Temp_9=System::Drawing::Point(safe_cast<System::Int32>(8),safe_cast<System::Int32>(8));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_00d3:            V_1->Location=Temp_9;                                       //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_00d8:                                                                        //ldloc.1
	IL_00d9:                                                                        //ldstr				L"\x7E29\x442B\x4B2D\x102F\x5431\x5B33\x5A35\x5437\x5539\x4B3B\x573D\x2E3F\x2541\x6443\x2745\x2C47\x2E49\x614B\x274D\x3E4F\x7A51\x2753\x7F55\x7857\x3C59\x3D5B\x375D\x0C5F\x0761\x0063\x4665\x1C67\x0569\x4C6B\x026D\x1F6F\x1371\x1073\x4C75"
	IL_00de:                                                                        //ldloc				V_3
	IL_00e2:            Temp_10=a(L"\x7E29\x442B\x4B2D\x102F\x5431\x5B33\x5A35\x5437\x5539\x4B3B\x573D\x2E3F\x2541\x6443\x2745\x2C47\x2E49\x614B\x274D\x3E4F\x7A51\x2753\x7F55\x7857\x3C59\x3D5B\x375D\x0C5F\x0761\x0063\x4665\x1C67\x0569\x4C6B\x026D\x1F6F\x1371\x1073\x4C75",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e7:            V_1->Text=Temp_10;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_00ec:                                                                        //ldloc.1
	IL_00ed:                                                                        //ldc.i4				0xc8
	IL_00f2:                                                                        //ldc.i4.s				16
	IL_00f4:            Temp_11=System::Drawing::Size(safe_cast<System::Int32>(200),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_00f9:            V_1->Size=Temp_11;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:            Temp_12=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0104:                                                                        //ldloc.1
	IL_0105:            Temp_12->Add(safe_cast<System::Windows::Forms::Control^>(V_1));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_010a:                                                                        //ldc.i4.1
	IL_010b:            Temp_13=gcnew array<System::Windows::Forms::ColumnHeader^>(1);//newarr				System::Windows::Forms::ColumnHeader
	IL_0110:            V_2=Temp_13;                                                //stloc.2
	IL_0111:                                                                        //ldloc.2
	IL_0112:                                                                        //ldc.i4.0
	IL_0113:            Temp_14=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0118:            V_2[0]=Temp_14;                                             //stelem.ref
	IL_0119:                                                                        //ldloc.2
	IL_011a:                                                                        //ldc.i4.0
	IL_011b:                                                                        //ldelem.ref
	IL_011c:                                                                        //ldstr				L"\x6629\x432B\x4D2D\x512F\x4631\x5D33\x5935\x5637"
	IL_0121:                                                                        //ldloc				V_3
	IL_0125:            Temp_15=a(L"\x6629\x432B\x4D2D\x512F\x4631\x5D33\x5935\x5637",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012a:            V_2[0]->Text=Temp_15;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_012f:                                                                        //ldloc.2
	IL_0130:                                                                        //ldc.i4.0
	IL_0131:                                                                        //ldelem.ref
	IL_0132:                                                                        //ldc.i4				0x172
	IL_0137:            V_2[0]->Width=370;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_013c:                                                                        //ldarg.0
	IL_013d:            Temp_16=gcnew System::Windows::Forms::ListView();           //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_0142:            this->F_x1=Temp_16;                                         //stfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_0147:                                                                        //ldarg.0
	IL_0148:            Temp_17=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_014d:                                                                        //ldc.i4.1
	IL_014e:            Temp_17->TabIndex=1;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_0153:                                                                        //ldarg.0
	IL_0154:            Temp_18=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_0159:                                                                        //ldc.i4.8
	IL_015a:                                                                        //ldc.i4.s				24
	IL_015c:            Temp_19=System::Drawing::Point(safe_cast<System::Int32>(8),safe_cast<System::Int32>(24));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0161:            Temp_18->Location=Temp_19;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0166:                                                                        //ldarg.0
	IL_0167:            Temp_20=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_016c:                                                                        //ldc.i4				0x176
	IL_0171:                                                                        //ldc.i4				0xe2
	IL_0176:            Temp_21=System::Drawing::Size(safe_cast<System::Int32>(374),safe_cast<System::Int32>(226));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_017b:            Temp_20->Size=Temp_21;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0180:                                                                        //ldarg.0
	IL_0181:            Temp_22=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_0186:                                                                        //ldc.i4.1
	IL_0187:            Temp_22->View=safe_cast<System::Windows::Forms::View>(1);   //callvirt				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_018c:                                                                        //ldarg.0
	IL_018d:            Temp_23=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_0192:            Temp_24=Temp_23->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_0197:                                                                        //ldloc.2
	IL_0198:            Temp_24->AddRange(V_2);                                     //callvirt				void System::Windows::Forms::ListView::ColumnHeaderCollection::AddRange(array<System::Windows::Forms::ColumnHeader^>^)
	IL_019d:                                                                        //ldarg.0
	IL_019e:            Temp_25=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_01a3:                                                                        //ldc.i4.0
	IL_01a4:            Temp_25->MultiSelect=false;                                 //callvirt				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_01a9:                                                                        //ldarg.0
	IL_01aa:            Temp_26=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_01af:                                                                        //ldc.i4.1
	IL_01b0:            Temp_26->FullRowSelect=true;                                //callvirt				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_01b5:                                                                        //ldarg.0
	IL_01b6:            Temp_27=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_01bb:                                                                        //ldarg.0
	IL_01bc:                                                                        //ldftn				void Root::T_x94::M_x2(System::Object^,System::EventArgs^)
	IL_01c2:            Temp_28=gcnew System::EventHandler(this,&Root::T_x94::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_01c7:            Temp_27->ItemActivate += Temp_28;                           //callvirt				void System::Windows::Forms::ListView::add_ItemActivate(System::EventHandler^)
	IL_01cc:                                                                        //ldarg.0
	IL_01cd:            Temp_29=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_01d2:                                                                        //ldarg.0
	IL_01d3:                                                                        //ldftn				void Root::T_x94::M_x1(System::Object^,System::EventArgs^)
	IL_01d9:            Temp_30=gcnew System::EventHandler(this,&Root::T_x94::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_01de:            Temp_29->SelectedIndexChanged += Temp_30;                   //callvirt				void System::Windows::Forms::ListView::add_SelectedIndexChanged(System::EventHandler^)
	IL_01e3:                                                                        //ldarg.0
	IL_01e4:            Temp_31=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_01e9:                                                                        //ldarg.0
	IL_01ea:            Temp_32=this->F_x1;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_01ef:            Temp_31->Add(safe_cast<System::Windows::Forms::Control^>(Temp_32));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_01f4:            return;                                                     //ret

}
inline void Root::T_x94::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_1 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_2 = nullptr;
	System::Windows::Forms::TextBox^ Temp_3 = nullptr;
	System::Exception^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Windows::Forms::ListView^ Temp_6 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Windows::Forms::TextBox^ Temp_9 = nullptr;
	//local variables.
	Root::T_x94::T_x1^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_003d;case 1:goto IL_00a9;case 2:goto IL_0085;case 3:goto IL_000b;case 4:goto IL_0078;};//switch				(IL_003d,IL_00a9,IL_0085,IL_000b,IL_0078)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_9=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_0030:            if(Temp_9==nullptr)goto IL_00ab;                            //brfalse.s				IL_00ab
	IL_0032:                                                                        //ldc.i4				0x0
	IL_0037:            V_1=0;                                                      //stloc				V_1
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:            goto IL_007a;                                               //br.s				IL_007a
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_0045:            Temp_1=Temp_0->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            Temp_2=Temp_1[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_0050:                                                                        //castclass				Root::T_x94::T_x1
	IL_0055:            V_0=safe_cast<Root::T_x94::T_x1^>(Temp_2);                  //stloc.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_3=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //ldloc.0
	IL_005e:            Temp_4=V_0->M_x1();                                         //callvirt				System::Exception^ Root::T_x94::T_x1::M_x1()
	IL_0063:            Temp_5=this->M_x1(Temp_4);                                  //call				System::String^ Root::T_x94::M_x1(System::Exception^)
	IL_0068:            Temp_3->Text=Temp_5;                                        //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_006d:                                                                        //ldc.i4				0x4
	IL_0072:            V_1=4;                                                      //stloc				V_1
	IL_0076:            /*goto IL_000d;*/goto IL_0078;                              //br.s				IL_000d
	IL_0078:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_007a:                                                                        //ldc.i4				0x2
	IL_007f:            V_1=2;                                                      //stloc				V_1
	IL_0083:            /*goto IL_000d;*/goto IL_0085;                              //br.s				IL_000d
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_6=this->F_x1;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_008b:            Temp_7=Temp_6->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0090:            Temp_8=Temp_7->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0095:                                                                        //ldc.i4.1
	IL_0096:            if(Temp_8!=1)goto IL_00ab;                                  //bne.un.s				IL_00ab
	IL_0098:            goto IL_009b;                                               //br.s				IL_009b
	IL_009a:                                                                        //break
	IL_009b:                                                                        //ldc.i4				0x1
	IL_00a0:            V_1=1;                                                      //stloc				V_1
	IL_00a4:            /*goto IL_000d;*/goto IL_00a9;                              //br				IL_000d
	IL_00a9:            goto IL_003f;                                               //br.s				IL_003f
	IL_00ab:            return;                                                     //ret

}
inline System::String^ Root::T_x94::M_x1(System::Exception^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0005:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000a:            V_0=Temp_1;                                                 //stloc.0
	IL_000b:            /*goto IL_000d;*/goto IL_000B01;                            //br.s				IL_000d
	IL_000B01:          try{
	IL_000d:            goto IL_0010;                                               //br.s				IL_0010
	IL_000f:                                                                        //break
	IL_0010:                                                                        //ldloc.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_2=A_0->ToString();                                     //callvirt				System::String^ System::Exception::ToString()
	IL_0017:            V_0->WriteLine(Temp_2);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_001c:                                                                        //ldloc.0
	IL_001d:            Temp_3=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0022:            V_1=Temp_3;                                                 //stloc.1
	IL_0023:            goto IL_006b;                                               //leave.s				IL_006b
	                    ;}
	                    finally{
	IL_0025:                                                                        //ldc.i4				0x1
	IL_002a:            V_2=1;                                                      //stloc				V_2
	IL_002e:            /*goto IL_0032;*/goto IL_0030;                              //br.s				IL_0032
	IL_0030:            goto IL_0047;                                               //br.s				IL_0047
	IL_0032:                                                                        //ldloc				V_2
	IL_0036:            switch(V_2){case 0:goto IL_0068;case 1:goto IL_0030;case 2:goto IL_0055;};//switch				(IL_0068,IL_0030,IL_0055)
	IL_0047:                                                                        //ldloc.0
	IL_0048:            if(V_0==nullptr)goto IL_006a;                               //brfalse.s				IL_006a
	IL_004a:                                                                        //ldc.i4				0x2
	IL_004f:            V_2=2;                                                      //stloc				V_2
	IL_0053:            /*goto IL_0032;*/goto IL_0055;                              //br.s				IL_0032
	IL_0055:            goto IL_0057;                                               //br.s				IL_0057
	IL_0057:                                                                        //ldloc.0
	IL_0058:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_005d:                                                                        //ldc.i4				0x0
	IL_0062:            V_2=0;                                                      //stloc				V_2
	IL_0066:            /*goto IL_0032;*/goto IL_0068;                              //br.s				IL_0032
	IL_0068:            goto IL_006a;                                               //br.s				IL_006a
	IL_006a:                                                                        //endfinally
	                    ;}
	IL_006b:                                                                        //ldloc.1
	IL_006c:            return V_1;                                                 //ret

}
inline void Root::T_x94::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x94::M_x1()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x94::M_x1(System::String^ A_0,System::Exception^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x94::T_x1^ Temp_0 = nullptr;
	System::Windows::Forms::ListView^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_2 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_3 = nullptr;
	//local variables.
	Root::T_x94::T_x1^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.2
	IL_0005:            Temp_0=gcnew Root::T_x94::T_x1(A_0,A_1);                    //newobj				void Root::T_x94::T_x1::.ctor(System::String^,System::Exception^)
	IL_000a:            V_0=Temp_0;                                                 //stloc.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x1;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x94 F_x1
	IL_0011:            Temp_2=Temp_1->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_3=Temp_2->Add(safe_cast<System::Windows::Forms::ListViewItem^>(V_0));//callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_001c:                                                                        //pop
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x94::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Size Temp_0;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::TextBox^ Temp_2 = nullptr;
	System::Windows::Forms::TextBox^ Temp_3 = nullptr;
	System::Drawing::Size Temp_4;
	System::Windows::Forms::TextBox^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Drawing::Point Temp_7;
	System::Windows::Forms::TextBox^ Temp_8 = nullptr;
	System::Windows::Forms::TextBox^ Temp_9 = nullptr;
	System::Windows::Forms::TextBox^ Temp_10 = nullptr;
	System::Windows::Forms::TextBox^ Temp_11 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_12 = nullptr;
	System::Windows::Forms::TextBox^ Temp_13 = nullptr;
	System::Windows::Forms::TextBox^ Temp_14 = nullptr;
	//local variables.
	System::Drawing::Size V_0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00e6;case 1:goto IL_000b;case 2:goto IL_0038;};//switch				(IL_00e6,IL_000b,IL_0038)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_14=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_0028:            if(Temp_14!=nullptr)goto IL_00f3;                           //brtrue				IL_00f3
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_1=2;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_0=this->ClientSize;                                    //call				System::Drawing::Size System::Windows::Forms::Form::get_ClientSize()
	IL_0040:            V_0=Temp_0;                                                 //stloc.0
	IL_0041:                                                                        //ldloca.s				V_0
	IL_0043:                                                                        //dup
	IL_0044:            Temp_1=V_0.Height;                                          //call				System::Int32 System::Drawing::Size::get_Height()
	IL_0049:                                                                        //ldc.i4.s				100
	IL_004b:                                                                        //add
	IL_004c:            V_0.Height=(Temp_1 + 100);                                  //call				void System::Drawing::Size::set_Height(System::Int32)
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldloc.0
	IL_0053:            this->ClientSize=V_0;                                       //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_2=gcnew System::Windows::Forms::TextBox();             //newobj				void System::Windows::Forms::TextBox::.ctor()
	IL_005e:            this->F_x2=Temp_2;                                          //stfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_3=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_0069:                                                                        //ldc.i4				0x176
	IL_006e:                                                                        //ldc.i4.s				90
	IL_0070:            Temp_4=System::Drawing::Size(safe_cast<System::Int32>(374),safe_cast<System::Int32>(90));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0075:            Temp_3->Size=Temp_4;                                        //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_5=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_0080:                                                                        //ldc.i4.8
	IL_0081:                                                                        //ldloca.s				V_0
	IL_0083:            Temp_6=V_0.Height;                                          //call				System::Int32 System::Drawing::Size::get_Height()
	IL_0088:                                                                        //ldc.i4.8
	IL_0089:                                                                        //sub
	IL_008a:                                                                        //ldc.i4.s				90
	IL_008c:                                                                        //sub
	IL_008d:            Temp_7=System::Drawing::Point(safe_cast<System::Int32>(8),((Temp_6 - 8) - 90));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0092:            Temp_5->Location=Temp_7;                                    //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_8=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_009d:                                                                        //ldc.i4.1
	IL_009e:            Temp_8->ReadOnly=true;                                      //callvirt				void System::Windows::Forms::TextBoxBase::set_ReadOnly(System::Boolean)
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:            Temp_9=this->F_x2;                                          //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_00a9:                                                                        //ldc.i4.1
	IL_00aa:            Temp_9->Multiline=true;                                     //callvirt				void System::Windows::Forms::TextBoxBase::set_Multiline(System::Boolean)
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_10=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_00b5:                                                                        //ldc.i4.3
	IL_00b6:            Temp_10->ScrollBars=safe_cast<System::Windows::Forms::ScrollBars>(3);//callvirt				void System::Windows::Forms::TextBox::set_ScrollBars(System::Windows::Forms::ScrollBars)
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_11=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_00c1:                                                                        //ldc.i4.0
	IL_00c2:            Temp_11->WordWrap=false;                                    //callvirt				void System::Windows::Forms::TextBoxBase::set_WordWrap(System::Boolean)
	IL_00c7:                                                                        //ldarg.0
	IL_00c8:            Temp_12=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:            Temp_13=this->F_x2;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x94 F_x2
	IL_00d3:            Temp_12->Add(safe_cast<System::Windows::Forms::Control^>(Temp_13));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00d8:                                                                        //ldc.i4				0x0
	IL_00dd:            V_1=0;                                                      //stloc				V_1
	IL_00e1:            /*goto IL_000d;*/goto IL_00e6;                              //br				IL_000d
	IL_00e6:                                                                        //ldc.i4.4
	IL_00e7:                                                                        //dup
	IL_00e8:                                                                        //dup
	IL_00e9:                                                                        //ldc.i4.2
	IL_00ea:                                                                        //sub
	IL_00eb:                                                                        //blt				IL_00e7
	IL_00f0:                                                                        //pop
	IL_00f1:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:            this->M_x1();                                               //call				void Root::T_x94::M_x1()
	IL_00f9:            return;                                                     //ret

}
inline Root::T_x94::T_x1::T_x1(System::String^ A_0,System::Exception^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ListViewItem();*/                 //call				void System::Windows::Forms::ListViewItem::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x94::T_x1 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::Exception^ Root::T_x94::T_x1 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.1
	IL_0016:            this->Text=A_0;                                             //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_001b:            return;                                                     //ret

}
inline System::Exception^ Root::T_x94::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Exception^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x94::T_x1 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x94::T_x1::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x94::T_x1 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
