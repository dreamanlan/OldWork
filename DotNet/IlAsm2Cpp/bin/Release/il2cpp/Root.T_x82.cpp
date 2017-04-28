#include "global_xref.h"

inline Root::T_x82::T_x82(Reflector::CodeModel::IAssemblyManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Size Temp_0;
	System::String^ Temp_1 = nullptr;
	System::Windows::Forms::Label^ Temp_2 = nullptr;
	System::Drawing::Point Temp_3;
	System::String^ Temp_4 = nullptr;
	System::Drawing::Size Temp_5;
	System::Windows::Forms::Control::ControlCollection^ Temp_6 = nullptr;
	array<System::Windows::Forms::ColumnHeader^>^ Temp_7 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Windows::Forms::ListView^ Temp_18 = nullptr;
	System::Windows::Forms::ListView^ Temp_19 = nullptr;
	System::Drawing::Point Temp_20;
	System::Windows::Forms::ListView^ Temp_21 = nullptr;
	System::Drawing::Size Temp_22;
	System::Windows::Forms::ListView^ Temp_23 = nullptr;
	System::Windows::Forms::ListView^ Temp_24 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_25 = nullptr;
	System::Windows::Forms::ListView^ Temp_26 = nullptr;
	System::Windows::Forms::ListView^ Temp_27 = nullptr;
	System::Windows::Forms::ListView^ Temp_28 = nullptr;
	System::Windows::Forms::ListView^ Temp_29 = nullptr;
	System::Windows::Forms::ImageList^ Temp_30 = nullptr;
	System::Windows::Forms::ListView^ Temp_31 = nullptr;
	System::Windows::Forms::ImageList^ Temp_32 = nullptr;
	System::Windows::Forms::ListView^ Temp_33 = nullptr;
	System::Windows::Forms::ImageList^ Temp_34 = nullptr;
	System::Drawing::Color Temp_35;
	System::Windows::Forms::ListView^ Temp_36 = nullptr;
	System::Windows::Forms::ImageList^ Temp_37 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_38 = nullptr;
	System::Drawing::Image^ Temp_39 = nullptr;
	System::Int32 Temp_40 = 0;
	System::Windows::Forms::Control::ControlCollection^ Temp_41 = nullptr;
	System::Windows::Forms::ListView^ Temp_42 = nullptr;
	System::Windows::Forms::Button^ Temp_43 = nullptr;
	System::Drawing::Point Temp_44;
	System::Drawing::Size Temp_45;
	System::String^ Temp_46 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_47 = nullptr;
	System::Windows::Forms::Button^ Temp_48 = nullptr;
	System::Drawing::Point Temp_49;
	System::Drawing::Size Temp_50;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_53 = nullptr;
	//local variables.
	System::Windows::Forms::Label^ V_0 = nullptr;
	array<System::Windows::Forms::ColumnHeader^>^ V_1 = nullptr;
	System::Windows::Forms::Button^ V_2 = nullptr;
	System::Windows::Forms::Button^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_4=3;                                                      //stloc				V_4
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x66();*/                                          //call				void Root::T_x66::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x82 F_x1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4				0x19a
	IL_001c:                                                                        //ldc.i4				0x190
	IL_0021:            Temp_0=System::Drawing::Size(safe_cast<System::Int32>(410),safe_cast<System::Int32>(400));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0026:            this->ClientSize=Temp_0;                                    //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldstr				L"\x7420\x4D22\x4924\x4826\x4828\x4F2A\x0D2C\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C"
	IL_0031:                                                                        //ldloc				V_4
	IL_0035:            Temp_1=a(L"\x7420\x4D22\x4924\x4826\x4828\x4F2A\x0D2C\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003a:            this->Text=Temp_1;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_003f:            Temp_2=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_0044:            V_0=Temp_2;                                                 //stloc.0
	IL_0045:                                                                        //ldloc.0
	IL_0046:                                                                        //ldc.i4.3
	IL_0047:            V_0->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldc.i4.s				16
	IL_004f:                                                                        //ldc.i4.8
	IL_0050:            Temp_3=System::Drawing::Point(safe_cast<System::Int32>(16),safe_cast<System::Int32>(8));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0055:            V_0->Location=Temp_3;                                       //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_005a:                                                                        //ldloc.0
	IL_005b:                                                                        //ldstr				L"\x7220\x4622\x4924\x4226\x4A28\x5F2A\x0D2C\x4E2E\x5F30\x1332\x5434\x4436\x4A38\x5E3A\x503C\x5D3E\x2D40\x3A42\x7F44"
	IL_0060:                                                                        //ldloc				V_4
	IL_0064:            Temp_4=a(L"\x7220\x4622\x4924\x4226\x4A28\x5F2A\x0D2C\x4E2E\x5F30\x1332\x5434\x4436\x4A38\x5E3A\x503C\x5D3E\x2D40\x3A42\x7F44",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0069:            V_0->Text=Temp_4;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_006e:                                                                        //ldloc.0
	IL_006f:                                                                        //ldc.i4				0x96
	IL_0074:                                                                        //ldc.i4.s				16
	IL_0076:            Temp_5=System::Drawing::Size(safe_cast<System::Int32>(150),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_007b:            V_0->Size=Temp_5;                                           //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0080:                                                                        //ldarg.0
	IL_0081:            Temp_6=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0086:                                                                        //ldloc.0
	IL_0087:            Temp_6->Add(safe_cast<System::Windows::Forms::Control^>(V_0));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_008c:                                                                        //ldc.i4.5
	IL_008d:            Temp_7=gcnew array<System::Windows::Forms::ColumnHeader^>(5);//newarr				System::Windows::Forms::ColumnHeader
	IL_0092:            V_1=Temp_7;                                                 //stloc.1
	IL_0093:                                                                        //ldloc.1
	IL_0094:                                                                        //ldc.i4.0
	IL_0095:            Temp_8=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_009a:            V_1[0]=Temp_8;                                              //stelem.ref
	IL_009b:                                                                        //ldloc.1
	IL_009c:                                                                        //ldc.i4.0
	IL_009d:                                                                        //ldelem.ref
	IL_009e:                                                                        //ldstr				L"\x6F20\x4222\x4824\x4226"
	IL_00a3:                                                                        //ldloc				V_4
	IL_00a7:            Temp_9=a(L"\x6F20\x4222\x4824\x4226",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ac:            V_1[0]->Text=Temp_9;                                        //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_00b1:                                                                        //ldloc.1
	IL_00b2:                                                                        //ldc.i4.0
	IL_00b3:                                                                        //ldelem.ref
	IL_00b4:                                                                        //ldc.i4				0x10e
	IL_00b9:            V_1[0]->Width=270;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_00be:                                                                        //ldloc.1
	IL_00bf:                                                                        //ldc.i4.1
	IL_00c0:            Temp_10=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_00c5:            V_1[1]=Temp_10;                                             //stelem.ref
	IL_00c6:                                                                        //ldloc.1
	IL_00c7:                                                                        //ldc.i4.1
	IL_00c8:                                                                        //ldelem.ref
	IL_00c9:                                                                        //ldstr				L"\x7720\x4622\x5724\x5426\x4028\x442A\x432C"
	IL_00ce:                                                                        //ldloc				V_4
	IL_00d2:            Temp_11=a(L"\x7720\x4622\x5724\x5426\x4028\x442A\x432C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d7:            V_1[1]->Text=Temp_11;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_00dc:                                                                        //ldloc.1
	IL_00dd:                                                                        //ldc.i4.1
	IL_00de:                                                                        //ldelem.ref
	IL_00df:                                                                        //ldc.i4.s				110
	IL_00e1:            V_1[1]->Width=110;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_00e6:                                                                        //ldloc.1
	IL_00e7:                                                                        //ldc.i4.2
	IL_00e8:            Temp_12=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_00ed:            V_1[2]=Temp_12;                                             //stelem.ref
	IL_00ee:                                                                        //ldloc.1
	IL_00ef:                                                                        //ldc.i4.2
	IL_00f0:                                                                        //ldelem.ref
	IL_00f1:                                                                        //ldstr				L"\x6220\x5622\x4924\x5326\x5C28\x592A\x482C"
	IL_00f6:                                                                        //ldloc				V_4
	IL_00fa:            Temp_13=a(L"\x6220\x5622\x4924\x5326\x5C28\x592A\x482C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ff:            V_1[2]->Text=Temp_13;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0104:                                                                        //ldloc.1
	IL_0105:                                                                        //ldc.i4.2
	IL_0106:                                                                        //ldelem.ref
	IL_0107:                                                                        //ldc.i4.s				75
	IL_0109:            V_1[2]->Width=75;                                           //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_010e:                                                                        //ldloc.1
	IL_010f:                                                                        //ldc.i4.3
	IL_0110:            Temp_14=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0115:            V_1[3]=Temp_14;                                             //stelem.ref
	IL_0116:                                                                        //ldloc.1
	IL_0117:                                                                        //ldc.i4.3
	IL_0118:                                                                        //ldelem.ref
	IL_0119:                                                                        //ldstr				L"\x7120\x5622\x4724\x4B26\x4028\x482A\x662C\x4A2E\x4830\x6732\x5A34\x5C36\x5C38\x553A"
	IL_011e:                                                                        //ldloc				V_4
	IL_0122:            Temp_15=a(L"\x7120\x5622\x4724\x4B26\x4028\x482A\x662C\x4A2E\x4830\x6732\x5A34\x5C36\x5C38\x553A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0127:            V_1[3]->Text=Temp_15;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_012c:                                                                        //ldloc.1
	IL_012d:                                                                        //ldc.i4.3
	IL_012e:                                                                        //ldelem.ref
	IL_012f:                                                                        //ldc.i4.s				125
	IL_0131:            V_1[3]->Width=125;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_0136:                                                                        //ldloc.1
	IL_0137:                                                                        //ldc.i4.4
	IL_0138:            Temp_16=gcnew System::Windows::Forms::ColumnHeader();       //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_013d:            V_1[4]=Temp_16;                                             //stelem.ref
	IL_013e:                                                                        //ldloc.1
	IL_013f:                                                                        //ldc.i4.4
	IL_0140:                                                                        //ldelem.ref
	IL_0141:                                                                        //ldstr				L"\x6D20\x4C22\x4624\x4626\x5D28\x422A\x422C\x412E"
	IL_0146:                                                                        //ldloc				V_4
	IL_014a:            Temp_17=a(L"\x6D20\x4C22\x4624\x4626\x5D28\x422A\x422C\x412E",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014f:            V_1[4]->Text=Temp_17;                                       //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0154:                                                                        //ldloc.1
	IL_0155:                                                                        //ldc.i4.4
	IL_0156:                                                                        //ldelem.ref
	IL_0157:                                                                        //ldc.i4				0x1f4
	IL_015c:            V_1[4]->Width=500;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_0161:                                                                        //ldarg.0
	IL_0162:            Temp_18=gcnew System::Windows::Forms::ListView();           //newobj				void System::Windows::Forms::ListView::.ctor()
	IL_0167:            this->F_x2=Temp_18;                                         //stfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_016c:                                                                        //ldarg.0
	IL_016d:            Temp_19=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_0172:                                                                        //ldc.i4.s				16
	IL_0174:                                                                        //ldc.i4.s				24
	IL_0176:            Temp_20=System::Drawing::Point(safe_cast<System::Int32>(16),safe_cast<System::Int32>(24));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_017b:            Temp_19->Location=Temp_20;                                  //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0180:                                                                        //ldarg.0
	IL_0181:            Temp_21=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_0186:                                                                        //ldc.i4				0x17a
	IL_018b:                                                                        //ldc.i4				0x14c
	IL_0190:            Temp_22=System::Drawing::Size(safe_cast<System::Int32>(378),safe_cast<System::Int32>(332));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0195:            Temp_21->Size=Temp_22;                                      //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_019a:                                                                        //ldarg.0
	IL_019b:            Temp_23=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_01a0:                                                                        //ldc.i4.1
	IL_01a1:            Temp_23->View=safe_cast<System::Windows::Forms::View>(1);   //callvirt				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_01a6:                                                                        //ldarg.0
	IL_01a7:            Temp_24=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_01ac:            Temp_25=Temp_24->Columns;                                   //callvirt				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_01b1:                                                                        //ldloc.1
	IL_01b2:            Temp_25->AddRange(V_1);                                     //callvirt				void System::Windows::Forms::ListView::ColumnHeaderCollection::AddRange(array<System::Windows::Forms::ColumnHeader^>^)
	IL_01b7:                                                                        //ldarg.0
	IL_01b8:            Temp_26=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_01bd:                                                                        //ldc.i4.1
	IL_01be:            Temp_26->MultiSelect=true;                                  //callvirt				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:            Temp_27=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_01c9:                                                                        //ldc.i4.1
	IL_01ca:            Temp_27->FullRowSelect=true;                                //callvirt				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_01cf:                                                                        //ldarg.0
	IL_01d0:            Temp_28=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_01d5:                                                                        //ldc.i4.0
	IL_01d6:            Temp_28->HideSelection=false;                               //callvirt				void System::Windows::Forms::ListView::set_HideSelection(System::Boolean)
	IL_01db:                                                                        //ldarg.0
	IL_01dc:            Temp_29=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_01e1:            Temp_30=gcnew System::Windows::Forms::ImageList();          //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_01e6:            Temp_29->SmallImageList=Temp_30;                            //callvirt				void System::Windows::Forms::ListView::set_SmallImageList(System::Windows::Forms::ImageList^)
	IL_01eb:                                                                        //ldarg.0
	IL_01ec:            Temp_31=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_01f1:            Temp_32=Temp_31->SmallImageList;                            //callvirt				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_01f6:                                                                        //ldc.i4.s				32
	IL_01f8:            Temp_32->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_01fd:                                                                        //ldarg.0
	IL_01fe:            Temp_33=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_0203:            Temp_34=Temp_33->SmallImageList;                            //callvirt				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0208:                                                                        //ldc.i4				0xff
	IL_020d:                                                                        //ldc.i4.0
	IL_020e:                                                                        //ldc.i4				0x80
	IL_0213:                                                                        //ldc.i4.0
	IL_0214:            Temp_35=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0219:            Temp_34->TransparentColor=Temp_35;                          //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_021e:                                                                        //ldarg.0
	IL_021f:            Temp_36=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_0224:            Temp_37=Temp_36->SmallImageList;                            //callvirt				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0229:            Temp_38=Temp_37->Images;                                    //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_022e:            Temp_39=Root::T_x117::M_x1();                               //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_0233:            Temp_40=Temp_38->AddStrip(Temp_39);                         //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_0238:                                                                        //pop
	IL_0239:                                                                        //ldarg.0
	IL_023a:            Temp_41=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_023f:                                                                        //ldarg.0
	IL_0240:            Temp_42=this->F_x2;                                         //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_0245:            Temp_41->Add(safe_cast<System::Windows::Forms::Control^>(Temp_42));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_024a:            Temp_43=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_024f:            V_2=Temp_43;                                                //stloc.2
	IL_0250:                                                                        //ldloc.2
	IL_0251:                                                                        //ldc.i4.3
	IL_0252:            V_2->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0257:                                                                        //ldloc.2
	IL_0258:                                                                        //ldc.i4				0xef
	IL_025d:                                                                        //ldc.i4				0x16d
	IL_0262:            Temp_44=System::Drawing::Point(safe_cast<System::Int32>(239),safe_cast<System::Int32>(365));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0267:            V_2->Location=Temp_44;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_026c:                                                                        //ldloc.2
	IL_026d:                                                                        //ldc.i4.s				75
	IL_026f:                                                                        //ldc.i4.s				23
	IL_0271:            Temp_45=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0276:            V_2->Size=Temp_45;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_027b:                                                                        //ldloc.2
	IL_027c:                                                                        //ldstr				L"\x0720\x7622\x4B24\x4B26\x4628\x4A2A\x492C"
	IL_0281:                                                                        //ldloc				V_4
	IL_0285:            Temp_46=a(L"\x0720\x7622\x4B24\x4B26\x4628\x4A2A\x492C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028a:            V_2->Text=Temp_46;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_028f:                                                                        //ldloc.2
	IL_0290:                                                                        //ldc.i4.1
	IL_0291:            V_2->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(1);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_0296:                                                                        //ldarg.0
	IL_0297:            Temp_47=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_029c:                                                                        //ldloc.2
	IL_029d:            Temp_47->Add(safe_cast<System::Windows::Forms::Control^>(V_2));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_02a2:                                                                        //ldarg.0
	IL_02a3:                                                                        //ldloc.2
	IL_02a4:            this->AcceptButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_2);//call				void System::Windows::Forms::Form::set_AcceptButton(System::Windows::Forms::IButtonControl^)
	IL_02a9:            Temp_48=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_02ae:            V_3=Temp_48;                                                //stloc.3
	IL_02af:                                                                        //ldloc.3
	IL_02b0:                                                                        //ldc.i4.3
	IL_02b1:            V_3->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_02b6:                                                                        //ldloc.3
	IL_02b7:                                                                        //ldc.i4				0x13f
	IL_02bc:                                                                        //ldc.i4				0x16d
	IL_02c1:            Temp_49=System::Drawing::Point(safe_cast<System::Int32>(319),safe_cast<System::Int32>(365));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_02c6:            V_3->Location=Temp_49;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_02cb:                                                                        //ldloc.3
	IL_02cc:                                                                        //ldc.i4.s				75
	IL_02ce:                                                                        //ldc.i4.s				23
	IL_02d0:            Temp_50=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_02d5:            V_3->Size=Temp_50;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_02da:                                                                        //ldloc.3
	IL_02db:                                                                        //ldstr				L"\x6220\x4222\x4B24\x4426\x4C28\x472A"
	IL_02e0:                                                                        //ldloc				V_4
	IL_02e4:            Temp_51=a(L"\x6220\x4222\x4B24\x4426\x4C28\x472A",V_4);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e9:            Temp_52=Root::T_x128::M_x1(Temp_51);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_02ee:            V_3->Text=Temp_52;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_02f3:                                                                        //ldloc.3
	IL_02f4:                                                                        //ldc.i4.2
	IL_02f5:            V_3->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(2);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_02fa:                                                                        //ldarg.0
	IL_02fb:            Temp_53=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0300:                                                                        //ldloc.3
	IL_0301:            Temp_53->Add(safe_cast<System::Windows::Forms::Control^>(V_3));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0306:                                                                        //ldarg.0
	IL_0307:                                                                        //ldloc.3
	IL_0308:            this->CancelButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_3);//call				void System::Windows::Forms::Form::set_CancelButton(System::Windows::Forms::IButtonControl^)
	IL_030d:                                                                        //ldarg.0
	IL_030e:            this->M_x1();                                               //call				void Root::T_x82::M_x1()
	IL_0313:            return;                                                     //ret

}
inline void Root::T_x82::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Root::T_x82::T_x1^ Temp_7 = nullptr;
	System::Windows::Forms::ListView^ Temp_8 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_9 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	Root::T_x82::T_x1^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_0006:            Temp_1=Temp_0->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_000b:            Temp_1->Clear();                                            //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::Clear()
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x82 F_x1
	IL_0016:            Temp_3=Temp_2->Assemblies;                                  //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_001b:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0020:            V_2=Temp_4;                                                 //stloc.2
	IL_0021:            /*goto IL_0023;*/goto IL_002101;                            //br.s				IL_0023
	IL_002101:          try{
	IL_0023:                                                                        //ldc.i4				0x0
	IL_0028:            V_4=0;                                                      //stloc				V_4
	IL_002c:            /*goto IL_0030;*/goto IL_002e;                              //br.s				IL_0030
	IL_002e:            goto IL_004d;                                               //br.s				IL_004d
	IL_0030:                                                                        //ldloc				V_4
	IL_0034:            switch(V_4){case 0:goto IL_002e;case 1:goto IL_0085;case 2:goto IL_00a5;case 3:goto IL_00b8;case 4:goto IL_0092;};//switch				(IL_002e,IL_0085,IL_00a5,IL_00b8,IL_0092)
	IL_004d:            goto IL_0087;                                               //br.s				IL_0087
	IL_004f:                                                                        //ldloc.2
	IL_0050:            Temp_6=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0055:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_005a:            V_0=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_6);    //stloc.0
	IL_005b:            Temp_7=gcnew Root::T_x82::T_x1();                           //newobj				void Root::T_x82::T_x1::.ctor()
	IL_0060:            V_1=Temp_7;                                                 //stloc.1
	IL_0061:                                                                        //ldloc.1
	IL_0062:                                                                        //ldloc.0
	IL_0063:            V_1->M_x1(V_0);                                             //callvirt				void Root::T_x82::T_x1::M_x1(Reflector::CodeModel::IAssembly^)
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_8=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_006e:            Temp_9=Temp_8->Items;                                       //callvirt				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0073:                                                                        //ldloc.1
	IL_0074:            Temp_10=Temp_9->Add(safe_cast<System::Windows::Forms::ListViewItem^>(V_1));//callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_0079:                                                                        //pop
	IL_007a:                                                                        //ldc.i4				0x1
	IL_007f:            V_4=1;                                                      //stloc				V_4
	IL_0083:            /*goto IL_0030;*/goto IL_0085;                              //br.s				IL_0030
	IL_0085:            goto IL_0087;                                               //br.s				IL_0087
	IL_0087:                                                                        //ldc.i4				0x4
	IL_008c:            V_4=4;                                                      //stloc				V_4
	IL_0090:            /*goto IL_0030;*/goto IL_0092;                              //br.s				IL_0030
	IL_0092:                                                                        //ldloc.2
	IL_0093:            Temp_5=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0098:            if(Temp_5)goto IL_004f;                                     //brtrue.s				IL_004f
	IL_009a:                                                                        //ldc.i4				0x2
	IL_009f:            V_4=2;                                                      //stloc				V_4
	IL_00a3:            /*goto IL_0030;*/goto IL_00a5;                              //br.s				IL_0030
	IL_00a5:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_00a7:                                                                        //break
	IL_00a8:            goto IL_00aa;                                               //br.s				IL_00aa
	IL_00aa:                                                                        //ldc.i4				0x3
	IL_00af:            V_4=3;                                                      //stloc				V_4
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
inline System::Collections::IEnumerable^ Root::T_x82::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IAssembly^>^ Temp_3 = nullptr;
	System::Windows::Forms::ListView^ Temp_4 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_5 = nullptr;
	System::Collections::IEnumerator^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	Reflector::CodeModel::IAssembly^ Temp_10 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<Reflector::CodeModel::IAssembly^>^ V_1 = nullptr;
	Root::T_x82::T_x1^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            V_0=0;                                                      //stloc.0
	IL_0002:                                                                        //ldarg.0
	IL_0003:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_0008:            Temp_1=Temp_0->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_000d:            Temp_2=Temp_1->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0012:                                                                        //conv.ovf.u4
	IL_0013:            Temp_3=gcnew array<Reflector::CodeModel::IAssembly^>(safe_cast<System::UInt32>(Temp_2));//newarr				Reflector::CodeModel::IAssembly
	IL_0018:            V_1=Temp_3;                                                 //stloc.1
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_4=this->F_x2;                                          //ldfld				System::Windows::Forms::ListView^ Root::T_x82 F_x2
	IL_001f:            Temp_5=Temp_4->SelectedItems;                               //callvirt				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0024:            Temp_6=Temp_5->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::SelectedListViewItemCollection::GetEnumerator()
	IL_0029:            V_3=Temp_6;                                                 //stloc.3
	IL_002a:            /*goto IL_002c;*/goto IL_002A01;                            //br.s				IL_002c
	IL_002A01:          try{
	IL_002c:                                                                        //ldc.i4				0x4
	IL_0031:            V_5=4;                                                      //stloc				V_5
	IL_0035:            /*goto IL_0039;*/goto IL_0037;                              //br.s				IL_0039
	IL_0037:            goto IL_0056;                                               //br.s				IL_0056
	IL_0039:                                                                        //ldloc				V_5
	IL_003d:            switch(V_5){case 0:goto IL_00b4;case 1:goto IL_00a7;case 2:goto IL_0094;case 3:goto IL_0087;case 4:goto IL_0037;};//switch				(IL_00b4,IL_00a7,IL_0094,IL_0087,IL_0037)
	IL_0056:                                                                        //ldc.i4.2
	IL_0057:                                                                        //dup
	IL_0058:                                                                        //dup
	IL_0059:                                                                        //ldc.i4.4
	IL_005a:                                                                        //sub
	IL_005b:                                                                        //blt				IL_0057
	IL_0060:                                                                        //pop
	IL_0061:            goto IL_0089;                                               //br.s				IL_0089
	IL_0063:                                                                        //ldloc.3
	IL_0064:            Temp_8=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0069:                                                                        //castclass				Root::T_x82::T_x1
	IL_006e:            V_2=safe_cast<Root::T_x82::T_x1^>(Temp_8);                  //stloc.2
	IL_006f:                                                                        //ldloc.1
	IL_0070:            Temp_9=V_0;                                                 //ldloc.0
	IL_0071:                                                                        //dup
	IL_0072:                                                                        //ldc.i4.1
	IL_0073:                                                                        //add
	IL_0074:            V_0=(Temp_9 + 1);                                           //stloc.0
	IL_0075:                                                                        //ldloc.2
	IL_0076:            Temp_10=V_2->M_x1();                                        //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x82::T_x1::M_x1()
	IL_007b:            V_1[Temp_9]=Temp_10;                                        //stelem.ref
	IL_007c:                                                                        //ldc.i4				0x3
	IL_0081:            V_5=3;                                                      //stloc				V_5
	IL_0085:            /*goto IL_0039;*/goto IL_0087;                              //br.s				IL_0039
	IL_0087:            goto IL_0089;                                               //br.s				IL_0089
	IL_0089:                                                                        //ldc.i4				0x2
	IL_008e:            V_5=2;                                                      //stloc				V_5
	IL_0092:            /*goto IL_0039;*/goto IL_0094;                              //br.s				IL_0039
	IL_0094:                                                                        //ldloc.3
	IL_0095:            Temp_7=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_009a:            if(Temp_7)goto IL_0063;                                     //brtrue.s				IL_0063
	IL_009c:                                                                        //ldc.i4				0x1
	IL_00a1:            V_5=1;                                                      //stloc				V_5
	IL_00a5:            /*goto IL_0039;*/goto IL_00a7;                              //br.s				IL_0039
	IL_00a7:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_00a9:                                                                        //ldc.i4				0x0
	IL_00ae:            V_5=0;                                                      //stloc				V_5
	IL_00b2:            /*goto IL_0039;*/goto IL_00b4;                              //br.s				IL_0039
	IL_00b4:            goto IL_0106;                                               //leave.s				IL_0106
	                    ;}
	                    finally{
	IL_00b6:            goto IL_00cd;                                               //br.s				IL_00cd
	IL_00b8:                                                                        //ldloc				V_6
	IL_00bc:            switch(V_6){case 0:goto IL_00ef;case 1:goto IL_0103;case 2:goto IL_00e0;};//switch				(IL_00ef,IL_0103,IL_00e0)
	IL_00cd:                                                                        //ldloc.3
	IL_00ce:                                                                        //isinst				System::IDisposable
	IL_00d3:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_00d5:                                                                        //ldc.i4				0x2
	IL_00da:            V_6=2;                                                      //stloc				V_6
	IL_00de:            /*goto IL_00b8;*/goto IL_00e0;                              //br.s				IL_00b8
	IL_00e0:                                                                        //ldloc.s				V_4
	IL_00e2:            if(V_4==nullptr)goto IL_0105;                               //brfalse.s				IL_0105
	IL_00e4:                                                                        //ldc.i4				0x0
	IL_00e9:            V_6=0;                                                      //stloc				V_6
	IL_00ed:            /*goto IL_00b8;*/goto IL_00ef;                              //br.s				IL_00b8
	IL_00ef:            goto IL_00f1;                                               //br.s				IL_00f1
	IL_00f1:                                                                        //ldloc.s				V_4
	IL_00f3:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00f8:                                                                        //ldc.i4				0x1
	IL_00fd:            V_6=1;                                                      //stloc				V_6
	IL_0101:            /*goto IL_00b8;*/goto IL_0103;                              //br.s				IL_00b8
	IL_0103:            goto IL_0105;                                               //br.s				IL_0105
	IL_0105:                                                                        //endfinally
	                    ;}
	IL_0106:                                                                        //ldloc.1
	IL_0107:            return safe_cast<System::Collections::IEnumerable^>(V_1);   //ret

}
inline Root::T_x82::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ListViewItem();*/                 //call				void System::Windows::Forms::ListViewItem::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x82::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Tag;                                           //call				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_000b:            return safe_cast<Reflector::CodeModel::IAssembly^>(Temp_0); //ret

}
inline System::String^ Root::T_x82::T_x1::M_x1(array<System::Byte>^ A_0)
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
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_3=11;                                                     //stloc				V_3
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0037;case 1:goto IL_0055;case 2:goto IL_009a;case 3:goto IL_0044;};//switch				(IL_0037,IL_0055,IL_009a,IL_0044)
	IL_0024:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0029:            V_0=Temp_0;                                                 //stloc.0
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:            V_1=0;                                                      //stloc.1
	IL_002c:                                                                        //ldc.i4				0x0
	IL_0031:            V_2=0;                                                      //stloc				V_2
	IL_0035:            /*goto IL_000b;*/goto IL_0037;                              //br.s				IL_000b
	IL_0037:            goto IL_0039;                                               //br.s				IL_0039
	IL_0039:                                                                        //ldc.i4				0x3
	IL_003e:            V_2=3;                                                      //stloc				V_2
	IL_0042:            /*goto IL_000b;*/goto IL_0044;                              //br.s				IL_000b
	IL_0044:                                                                        //ldloc.1
	IL_0045:                                                                        //ldarg.1
	IL_0046:            Temp_1=A_0->Length;                                         //ldlen
	IL_0047:                                                                        //conv.i4
	IL_0048:            if(V_1<Temp_1)goto IL_0057;                                 //blt.s				IL_0057
	IL_004a:                                                                        //ldc.i4				0x1
	IL_004f:            V_2=1;                                                      //stloc				V_2
	IL_0053:            /*goto IL_000b;*/goto IL_0055;                              //br.s				IL_000b
	IL_0055:            goto IL_009c;                                               //br.s				IL_009c
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldelema				System::Byte
	IL_005f:                                                                        //ldstr				L"\x5128\x192A"
	IL_0064:                                                                        //ldloc				V_3
	IL_0068:            Temp_2=a(L"\x5128\x192A",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:            Temp_3=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0072:            Temp_4=A_0[V_1].ToString(Temp_2,safe_cast<System::IFormatProvider^>(Temp_3));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_0077:            Temp_5=System::String::Concat(V_0,Temp_4);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_007c:            V_0=Temp_5;                                                 //stloc.0
	IL_007d:                                                                        //ldloc.1
	IL_007e:                                                                        //ldc.i4.1
	IL_007f:                                                                        //add
	IL_0080:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0081:                                                                        //ldc.i4.4
	IL_0082:                                                                        //dup
	IL_0083:                                                                        //dup
	IL_0084:                                                                        //ldc.i4.2
	IL_0085:                                                                        //sub
	IL_0086:                                                                        //blt				IL_0082
	IL_008b:                                                                        //pop
	IL_008c:                                                                        //ldc.i4				0x2
	IL_0091:            V_2=2;                                                      //stloc				V_2
	IL_0095:            /*goto IL_000b;*/goto IL_009a;                              //br				IL_000b
	IL_009a:            goto IL_0039;                                               //br.s				IL_0039
	IL_009c:                                                                        //ldloc.0
	IL_009d:            return V_0;                                                 //ret

}
inline void Root::T_x82::T_x1::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_2 = nullptr;
	System::Version^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_10 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_11 = nullptr;
	array<System::Byte>^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_14 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_22 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_25 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_28 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::Int32 Temp_33 = 0;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_34 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_37 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            goto IL_0028;                                               //br.s				IL_0028
	IL_000b:                                                                        //ldloc				V_0
	IL_000f:            switch(V_0){case 0:goto IL_003a;case 1:goto IL_0132;case 2:goto IL_0053;case 3:goto IL_007c;case 4:goto IL_0060;};//switch				(IL_003a,IL_0132,IL_0053,IL_007c,IL_0060)
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            this->Tag=safe_cast<System::Object^>(A_0);                  //call				void System::Windows::Forms::ListViewItem::set_Tag(System::Object^)
	IL_002f:                                                                        //ldc.i4				0x0
	IL_0034:            V_0=0;                                                      //stloc				V_0
	IL_0038:            /*goto IL_000b;*/goto IL_003a;                              //br.s				IL_000b
	IL_003a:            goto IL_003d;                                               //br.s				IL_003d
	IL_003c:                                                                        //break
	IL_003d:                                                                        //ldarg.1
	IL_003e:            Temp_0=A_0->Status;                                         //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0043:            if(Temp_0==nullptr)goto IL_00f6;                            //brfalse				IL_00f6
	IL_0048:                                                                        //ldc.i4				0x2
	IL_004d:            V_0=2;                                                      //stloc				V_0
	IL_0051:            /*goto IL_000b;*/goto IL_0053;                              //br.s				IL_000b
	IL_0053:            goto IL_0055;                                               //br.s				IL_0055
	IL_0055:                                                                        //ldc.i4				0x4
	IL_005a:            V_0=4;                                                      //stloc				V_0
	IL_005e:            /*goto IL_000b;*/goto IL_0060;                              //br.s				IL_000b
	IL_0060:                                                                        //ldarg.1
	IL_0061:            Temp_32=A_0->Status;                                        //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0066:            Temp_33=Temp_32->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_006b:                                                                        //ldc.i4.0
	IL_006c:            if(Temp_33<=0)goto IL_00f6;                                 //ble				IL_00f6
	IL_0071:                                                                        //ldc.i4				0x3
	IL_0076:            V_0=3;                                                      //stloc				V_0
	IL_007a:            /*goto IL_000b;*/goto IL_007c;                              //br.s				IL_000b
	IL_007c:            goto IL_007e;                                               //br.s				IL_007e
	IL_007e:                                                                        //ldarg.0
	IL_007f:                                                                        //ldc.i4				0xa6
	IL_0084:            this->ImageIndex=166;                                       //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0089:                                                                        //ldarg.0
	IL_008a:                                                                        //ldarg.1
	IL_008b:            Temp_19=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0090:            this->Text=Temp_19;                                         //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_20=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_009b:                                                                        //ldstr				L"\x201E"
	IL_00a0:                                                                        //ldloc				V_1
	IL_00a4:            Temp_21=a(L"\x201E",V_1);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a9:            Temp_22=Temp_20->Add(Temp_21);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_00ae:                                                                        //pop
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_23=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_00b5:                                                                        //ldstr				L"\x201E"
	IL_00ba:                                                                        //ldloc				V_1
	IL_00be:            Temp_24=a(L"\x201E",V_1);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c3:            Temp_25=Temp_23->Add(Temp_24);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_00c8:                                                                        //pop
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:            Temp_26=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_00cf:                                                                        //ldstr				L"\x201E"
	IL_00d4:                                                                        //ldloc				V_1
	IL_00d8:            Temp_27=a(L"\x201E",V_1);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dd:            Temp_28=Temp_26->Add(Temp_27);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_00e2:                                                                        //pop
	IL_00e3:                                                                        //ldarg.0
	IL_00e4:            Temp_29=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_00e9:                                                                        //ldarg.1
	IL_00ea:            Temp_30=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(A_0)->Location;//callvirt				System::String^ Reflector::CodeModel::IAssemblyLocation::get_Location()
	IL_00ef:            Temp_31=Temp_29->Add(Temp_30);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_00f4:                                                                        //pop
	IL_00f5:            return;                                                     //ret
	IL_00f6:                                                                        //ldarg.0
	IL_00f7:                                                                        //ldc.i4				0x97
	IL_00fc:            this->ImageIndex=151;                                       //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0101:                                                                        //ldarg.0
	IL_0102:                                                                        //ldarg.1
	IL_0103:            Temp_1=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0108:            this->Text=Temp_1;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_010d:                                                                        //ldarg.0
	IL_010e:            Temp_2=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0113:                                                                        //ldarg.1
	IL_0114:            Temp_3=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Version;//callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_0119:            Temp_4=Temp_3->ToString();                                  //callvirt				System::String^ System::Version::ToString()
	IL_011e:            Temp_5=Temp_2->Add(Temp_4);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0123:                                                                        //pop
	IL_0124:                                                                        //ldc.i4				0x1
	IL_0129:            V_0=1;                                                      //stloc				V_0
	IL_012d:            /*goto IL_000b;*/goto IL_0132;                              //br				IL_000b
	IL_0132:                                                                        //ldarg.0
	IL_0133:            Temp_6=this->SubItems;                                      //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0138:                                                                        //ldarg.1
	IL_0139:            Temp_7=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Culture;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_013e:            Temp_8=Temp_7->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_0143:            Temp_35=Temp_6;if(Temp_8==0)goto IL_014f;                   //brfalse.s				IL_014f
	IL_0145:            goto IL_0147;                                               //br.s				IL_0147
	IL_0147:                                                                        //ldarg.1
	IL_0148:            Temp_18=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Culture;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_014d:            Temp_37=Temp_35;Temp_36=Temp_18;goto IL_015f;               //br.s				IL_015f
	IL_014f:                                                                        //ldstr				L"\x711E\x4420\x5622\x5124\x5526\x4828\x472A"
	IL_0154:                                                                        //ldloc				V_1
	IL_0158:            Temp_9=a(L"\x711E\x4420\x5622\x5124\x5526\x4828\x472A",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015d:            Temp_37=Temp_35;Temp_36=Temp_9;goto IL_015f;                //br.s				IL_015f
	IL_015f:            Temp_10=Temp_37->Add(Temp_36);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0164:                                                                        //pop
	IL_0165:                                                                        //ldarg.0
	IL_0166:            Temp_11=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_016b:                                                                        //ldarg.0
	IL_016c:                                                                        //ldarg.1
	IL_016d:            Temp_12=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->PublicKeyToken;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_0172:            Temp_13=this->M_x1(Temp_12);                                //call				System::String^ Root::T_x82::T_x1::M_x1(array<System::Byte>^)
	IL_0177:            Temp_14=Temp_11->Add(Temp_13);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_017c:                                                                        //pop
	IL_017d:                                                                        //ldarg.0
	IL_017e:            Temp_15=this->SubItems;                                     //call				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0183:                                                                        //ldarg.1
	IL_0184:            Temp_16=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(A_0)->Location;//callvirt				System::String^ Reflector::CodeModel::IAssemblyLocation::get_Location()
	IL_0189:            Temp_17=Temp_15->Add(Temp_16);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_018e:                                                                        //pop
	IL_018f:            return;                                                     //ret

}
