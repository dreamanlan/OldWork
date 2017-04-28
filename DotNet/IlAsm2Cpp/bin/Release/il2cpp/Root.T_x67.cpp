#include "global_xref.h"

inline Root::T_x67::T_x67()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Drawing::Size Temp_1;
	System::Windows::Forms::PictureBox^ Temp_2 = nullptr;
	System::Drawing::Point Temp_3;
	System::Drawing::Size Temp_4;
	System::Type^ Temp_5 = nullptr;
	System::Reflection::Assembly^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::IO::Stream^ Temp_8 = nullptr;
	System::Drawing::Bitmap^ Temp_9 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_10 = nullptr;
	System::Windows::Forms::Label^ Temp_11 = nullptr;
	System::Type^ Temp_12 = nullptr;
	System::Reflection::Assembly^ Temp_13 = nullptr;
	System::Type^ Temp_14 = nullptr;
	array<System::Object^>^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Type^ Temp_18 = nullptr;
	System::Reflection::Assembly^ Temp_19 = nullptr;
	System::Type^ Temp_20 = nullptr;
	array<System::Object^>^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Drawing::Point Temp_24;
	System::Drawing::Size Temp_25;
	System::Windows::Forms::Control::ControlCollection^ Temp_26 = nullptr;
	System::Windows::Forms::Label^ Temp_27 = nullptr;
	System::Type^ Temp_28 = nullptr;
	System::Reflection::Assembly^ Temp_29 = nullptr;
	System::Type^ Temp_30 = nullptr;
	array<System::Object^>^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::Drawing::Point Temp_33;
	System::Drawing::Size Temp_34;
	System::Windows::Forms::Control::ControlCollection^ Temp_35 = nullptr;
	System::Windows::Forms::Label^ Temp_36 = nullptr;
	System::Drawing::Point Temp_37;
	System::Drawing::Size Temp_38;
	System::String^ Temp_39 = nullptr;
	System::Version^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_44 = nullptr;
	Root::T_x76^ Temp_45 = nullptr;
	System::Drawing::Point Temp_46;
	System::Drawing::Size Temp_47;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_50 = nullptr;
	System::Windows::Forms::Button^ Temp_51 = nullptr;
	System::Drawing::Point Temp_52;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::Drawing::Size Temp_55;
	System::Windows::Forms::Control::ControlCollection^ Temp_56 = nullptr;
	//local variables.
	System::Windows::Forms::PictureBox^ V_0 = nullptr;
	System::Windows::Forms::Label^ V_1 = nullptr;
	System::Windows::Forms::Label^ V_2 = nullptr;
	System::Windows::Forms::Label^ V_3 = nullptr;
	Root::T_x76^ V_4 = nullptr;
	System::Windows::Forms::Button^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_6=7;                                                      //stloc				V_6
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x66();*/                                          //call				void Root::T_x66::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldstr				L"\x6424\x4526\x4628\x5E2A\x592C"
	IL_0015:                                                                        //ldloc				V_6
	IL_0019:            Temp_0=a(L"\x6424\x4526\x4628\x5E2A\x592C",V_6);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001e:            this->Text=Temp_0;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldc.i4				0x136
	IL_0029:                                                                        //ldc.i4				0xdc
	IL_002e:            Temp_1=System::Drawing::Size(safe_cast<System::Int32>(310),safe_cast<System::Int32>(220));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0033:            this->ClientSize=Temp_1;                                    //call				void System::Windows::Forms::Form::set_ClientSize(System::Drawing::Size)
	IL_0038:            Temp_2=gcnew System::Windows::Forms::PictureBox();          //newobj				void System::Windows::Forms::PictureBox::.ctor()
	IL_003d:            V_0=Temp_2;                                                 //stloc.0
	IL_003e:                                                                        //ldloc.0
	IL_003f:                                                                        //ldc.i4.5
	IL_0040:                                                                        //ldc.i4.5
	IL_0041:            Temp_3=System::Drawing::Point(safe_cast<System::Int32>(5),safe_cast<System::Int32>(5));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0046:            V_0->Location=Temp_3;                                       //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_004b:                                                                        //ldloc.0
	IL_004c:                                                                        //ldc.i4				0x12c
	IL_0051:                                                                        //ldc.i4.s				80
	IL_0053:            Temp_4=System::Drawing::Size(safe_cast<System::Int32>(300),safe_cast<System::Int32>(80));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0058:            V_0->Size=Temp_4;                                           //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_005d:                                                                        //ldloc.0
	IL_005e:                                                                        //ldc.i4.2
	IL_005f:            V_0->SizeMode=safe_cast<System::Windows::Forms::PictureBoxSizeMode>(2);//callvirt				void System::Windows::Forms::PictureBox::set_SizeMode(System::Windows::Forms::PictureBoxSizeMode)
	IL_0064:                                                                        //ldloc.0
	IL_0065:                                                                        //ldarg.0
	IL_0066:            Temp_5=this->GetType();                                     //call				System::Type^ System::Object::GetType()
	IL_006b:            Temp_6=Temp_5->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_0070:                                                                        //ldstr				L"\x7724\x4226\x4F28\x472A\x482C\x4C2E\x4530\x5C32\x4734\x1936\x7838\x4B3A\x4D3C\x533E\x2840\x2042\x2444\x3346\x2048\x244A\x234C\x614E\x2150\x3D52\x3254"
	IL_0075:                                                                        //ldloc				V_6
	IL_0079:            Temp_7=a(L"\x7724\x4226\x4F28\x472A\x482C\x4C2E\x4530\x5C32\x4734\x1936\x7838\x4B3A\x4D3C\x533E\x2840\x2042\x2444\x3346\x2048\x244A\x234C\x614E\x2150\x3D52\x3254",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007e:            Temp_8=Temp_6->GetManifestResourceStream(Temp_7);           //callvirt				System::IO::Stream^ System::Reflection::Assembly::GetManifestResourceStream(System::String^)
	IL_0083:            Temp_9=gcnew System::Drawing::Bitmap(Temp_8);               //newobj				void System::Drawing::Bitmap::.ctor(System::IO::Stream^)
	IL_0088:            V_0->Image=safe_cast<System::Drawing::Image^>(Temp_9);      //callvirt				void System::Windows::Forms::PictureBox::set_Image(System::Drawing::Image^)
	IL_008d:                                                                        //ldarg.0
	IL_008e:            Temp_10=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0093:                                                                        //ldloc.0
	IL_0094:            Temp_10->Add(safe_cast<System::Windows::Forms::Control^>(V_0));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0099:            Temp_11=gcnew System::Windows::Forms::Label();              //newobj				void System::Windows::Forms::Label::.ctor()
	IL_009e:            V_1=Temp_11;                                                //stloc.1
	IL_009f:                                                                        //ldloc.1
	IL_00a0:                                                                        //ldc.i4.3
	IL_00a1:            V_1->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:                                                                        //ldarg.0
	IL_00a8:            Temp_12=this->GetType();                                    //call				System::Type^ System::Object::GetType()
	IL_00ad:            Temp_13=Temp_12->Assembly;                                  //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_00b2:                                                                        //ldtoken				System::Reflection::AssemblyTitleAttribute
	IL_00b7:            Temp_14=System::Reflection::AssemblyTitleAttribute::typeid; //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00bc:                                                                        //ldc.i4.0
	IL_00bd:            Temp_15=Temp_13->GetCustomAttributes(Temp_14,false);        //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_00c2:                                                                        //ldc.i4.0
	IL_00c3:                                                                        //ldelem.ref
	IL_00c4:                                                                        //isinst				System::Reflection::AssemblyTitleAttribute
	IL_00c9:            Temp_16=dynamic_cast<System::Reflection::AssemblyTitleAttribute^>(Temp_15[0])->Title;//callvirt				System::String^ System::Reflection::AssemblyTitleAttribute::get_Title()
	IL_00ce:                                                                        //ldstr				L"\x0924\x0726\x7F28\x4E2A\x5F2C\x5C2E\x5830\x5C32\x5B34\x1736"
	IL_00d3:                                                                        //ldloc				V_6
	IL_00d7:            Temp_17=a(L"\x0924\x0726\x7F28\x4E2A\x5F2C\x5C2E\x5830\x5C32\x5B34\x1736",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            Temp_18=this->GetType();                                    //call				System::Type^ System::Object::GetType()
	IL_00e2:            Temp_19=Temp_18->Assembly;                                  //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_00e7:                                                                        //ldtoken				System::Reflection::AssemblyInformationalVersionAttribute
	IL_00ec:            Temp_20=System::Reflection::AssemblyInformationalVersionAttribute::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00f1:                                                                        //ldc.i4.0
	IL_00f2:            Temp_21=Temp_19->GetCustomAttributes(Temp_20,false);        //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_00f7:                                                                        //ldc.i4.0
	IL_00f8:                                                                        //ldelem.ref
	IL_00f9:                                                                        //isinst				System::Reflection::AssemblyInformationalVersionAttribute
	IL_00fe:            Temp_22=dynamic_cast<System::Reflection::AssemblyInformationalVersionAttribute^>(Temp_21[0])->InformationalVersion;//callvirt				System::String^ System::Reflection::AssemblyInformationalVersionAttribute::get_InformationalVersion()
	IL_0103:            Temp_23=System::String::Concat(Temp_16,Temp_17,Temp_22);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0108:            V_1->Text=Temp_23;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_010d:                                                                        //ldloc.1
	IL_010e:                                                                        //ldc.i4.s				20
	IL_0110:                                                                        //ldc.i4.s				100
	IL_0112:            Temp_24=System::Drawing::Point(safe_cast<System::Int32>(20),safe_cast<System::Int32>(100));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0117:            V_1->Location=Temp_24;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_011c:                                                                        //ldloc.1
	IL_011d:                                                                        //ldc.i4				0x10e
	IL_0122:                                                                        //ldc.i4.s				16
	IL_0124:            Temp_25=System::Drawing::Size(safe_cast<System::Int32>(270),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0129:            V_1->Size=Temp_25;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_012e:                                                                        //ldarg.0
	IL_012f:            Temp_26=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0134:                                                                        //ldloc.1
	IL_0135:            Temp_26->Add(safe_cast<System::Windows::Forms::Control^>(V_1));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_013a:            Temp_27=gcnew System::Windows::Forms::Label();              //newobj				void System::Windows::Forms::Label::.ctor()
	IL_013f:            V_2=Temp_27;                                                //stloc.2
	IL_0140:                                                                        //ldloc.2
	IL_0141:                                                                        //ldc.i4.3
	IL_0142:            V_2->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0147:                                                                        //ldloc.2
	IL_0148:                                                                        //ldarg.0
	IL_0149:            Temp_28=this->GetType();                                    //call				System::Type^ System::Object::GetType()
	IL_014e:            Temp_29=Temp_28->Assembly;                                  //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_0153:                                                                        //ldtoken				System::Reflection::AssemblyCopyrightAttribute
	IL_0158:            Temp_30=System::Reflection::AssemblyCopyrightAttribute::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_015d:                                                                        //ldc.i4.0
	IL_015e:            Temp_31=Temp_29->GetCustomAttributes(Temp_30,false);        //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_0163:                                                                        //ldc.i4.0
	IL_0164:                                                                        //ldelem.ref
	IL_0165:                                                                        //isinst				System::Reflection::AssemblyCopyrightAttribute
	IL_016a:            Temp_32=dynamic_cast<System::Reflection::AssemblyCopyrightAttribute^>(Temp_31[0])->Copyright;//callvirt				System::String^ System::Reflection::AssemblyCopyrightAttribute::get_Copyright()
	IL_016f:            V_2->Text=Temp_32;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0174:                                                                        //ldloc.2
	IL_0175:                                                                        //ldc.i4.s				20
	IL_0177:                                                                        //ldc.i4.s				118
	IL_0179:            Temp_33=System::Drawing::Point(safe_cast<System::Int32>(20),safe_cast<System::Int32>(118));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_017e:            V_2->Location=Temp_33;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0183:                                                                        //ldloc.2
	IL_0184:                                                                        //ldc.i4				0x10e
	IL_0189:                                                                        //ldc.i4.s				32
	IL_018b:            Temp_34=System::Drawing::Size(safe_cast<System::Int32>(270),safe_cast<System::Int32>(32));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0190:            V_2->Size=Temp_34;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0195:                                                                        //ldarg.0
	IL_0196:            Temp_35=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_019b:                                                                        //ldloc.2
	IL_019c:            Temp_35->Add(safe_cast<System::Windows::Forms::Control^>(V_2));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_01a1:            Temp_36=gcnew System::Windows::Forms::Label();              //newobj				void System::Windows::Forms::Label::.ctor()
	IL_01a6:            V_3=Temp_36;                                                //stloc.3
	IL_01a7:                                                                        //ldloc.3
	IL_01a8:                                                                        //ldc.i4.3
	IL_01a9:            V_3->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_01ae:                                                                        //ldloc.3
	IL_01af:                                                                        //ldc.i4.s				20
	IL_01b1:                                                                        //ldc.i4				0x96
	IL_01b6:            Temp_37=System::Drawing::Point(safe_cast<System::Int32>(20),safe_cast<System::Int32>(150));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_01bb:            V_3->Location=Temp_37;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_01c0:                                                                        //ldloc.3
	IL_01c1:                                                                        //ldc.i4				0x10e
	IL_01c6:                                                                        //ldc.i4.s				16
	IL_01c8:            Temp_38=System::Drawing::Size(safe_cast<System::Int32>(270),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_01cd:            V_3->Size=Temp_38;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_01d2:                                                                        //ldloc.3
	IL_01d3:                                                                        //ldstr				L"\x7E24\x0926\x6728\x6E2A\x792C\x0F2E\x7730\x4132\x5434\x5A36\x5C38\x4C3A\x523C\x4D3E\x2A40\x6F42\x6544\x1146\x2C48\x394A\x3E4C\x264E\x3E50\x3D52\x7554"
	IL_01d8:                                                                        //ldloc				V_6
	IL_01dc:            Temp_39=a(L"\x7E24\x0926\x6728\x6E2A\x792C\x0F2E\x7730\x4132\x5434\x5A36\x5C38\x4C3A\x523C\x4D3E\x2A40\x6F42\x6544\x1146\x2C48\x394A\x3E4C\x264E\x3E50\x3D52\x7554",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e1:            Temp_40=System::Environment::Version;                       //call				System::Version^ System::Environment::get_Version()
	IL_01e6:            Temp_41=Temp_40->ToString();                                //callvirt				System::String^ System::Version::ToString()
	IL_01eb:                                                                        //ldstr				L"\x7824"
	IL_01f0:                                                                        //ldloc				V_6
	IL_01f4:            Temp_42=a(L"\x7824",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f9:            Temp_43=System::String::Concat(Temp_39,Temp_41,Temp_42);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_01fe:            V_3->Text=Temp_43;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0203:                                                                        //ldarg.0
	IL_0204:            Temp_44=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0209:                                                                        //ldloc.3
	IL_020a:            Temp_44->Add(safe_cast<System::Windows::Forms::Control^>(V_3));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_020f:            Temp_45=gcnew Root::T_x76();                                //newobj				void Root::T_x76::.ctor()
	IL_0214:            V_4=Temp_45;                                                //stloc.s				V_4
	IL_0216:                                                                        //ldloc.s				V_4
	IL_0218:                                                                        //ldc.i4.3
	IL_0219:            V_4->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_021e:                                                                        //ldloc.s				V_4
	IL_0220:                                                                        //ldc.i4.s				20
	IL_0222:                                                                        //ldc.i4				0xaa
	IL_0227:            Temp_46=System::Drawing::Point(safe_cast<System::Int32>(20),safe_cast<System::Int32>(170));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_022c:            V_4->Location=Temp_46;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0231:                                                                        //ldloc.s				V_4
	IL_0233:                                                                        //ldc.i4				0xc8
	IL_0238:                                                                        //ldc.i4.s				16
	IL_023a:            Temp_47=System::Drawing::Size(safe_cast<System::Int32>(200),safe_cast<System::Int32>(16));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_023f:            V_4->Size=Temp_47;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0244:                                                                        //ldloc.s				V_4
	IL_0246:                                                                        //ldstr				L"\x6D24\x4826\x4428\x4E2A\x5D2C\x4E2E\x5630\x5632"
	IL_024b:                                                                        //ldloc				V_6
	IL_024f:            Temp_48=a(L"\x6D24\x4826\x4428\x4E2A\x5D2C\x4E2E\x5630\x5632",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0254:            Temp_49=Root::T_x128::M_x1(Temp_48);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0259:            V_4->Text=Temp_49;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_025e:                                                                        //ldarg.0
	IL_025f:            Temp_50=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0264:                                                                        //ldloc.s				V_4
	IL_0266:            Temp_50->Add(safe_cast<System::Windows::Forms::Control^>(V_4));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_026b:            Temp_51=gcnew System::Windows::Forms::Button();             //newobj				void System::Windows::Forms::Button::.ctor()
	IL_0270:            V_5=Temp_51;                                                //stloc.s				V_5
	IL_0272:                                                                        //ldloc.s				V_5
	IL_0274:                                                                        //ldc.i4.3
	IL_0275:            V_5->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::ButtonBase::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_027a:                                                                        //ldloc.s				V_5
	IL_027c:                                                                        //ldc.i4				0xe6
	IL_0281:                                                                        //ldc.i4				0xbe
	IL_0286:            Temp_52=System::Drawing::Point(safe_cast<System::Int32>(230),safe_cast<System::Int32>(190));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_028b:            V_5->Location=Temp_52;                                      //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0290:                                                                        //ldloc.s				V_5
	IL_0292:                                                                        //ldstr				L"\x6424\x4426\x4A28\x4E2A\x5D2C\x5B2E"
	IL_0297:                                                                        //ldloc				V_6
	IL_029b:            Temp_53=a(L"\x6424\x4426\x4A28\x4E2A\x5D2C\x5B2E",V_6);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a0:            Temp_54=Root::T_x128::M_x1(Temp_53);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_02a5:            V_5->Text=Temp_54;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_02aa:                                                                        //ldloc.s				V_5
	IL_02ac:                                                                        //ldc.i4.s				75
	IL_02ae:                                                                        //ldc.i4.s				23
	IL_02b0:            Temp_55=System::Drawing::Size(safe_cast<System::Int32>(75),safe_cast<System::Int32>(23));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_02b5:            V_5->Size=Temp_55;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_02ba:                                                                        //ldloc.s				V_5
	IL_02bc:                                                                        //ldc.i4.0
	IL_02bd:            V_5->TabIndex=0;                                            //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_02c2:                                                                        //ldloc.s				V_5
	IL_02c4:                                                                        //ldc.i4.1
	IL_02c5:            V_5->DialogResult=safe_cast<System::Windows::Forms::DialogResult>(1);//callvirt				void System::Windows::Forms::Button::set_DialogResult(System::Windows::Forms::DialogResult)
	IL_02ca:                                                                        //ldarg.0
	IL_02cb:            Temp_56=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_02d0:                                                                        //ldloc.s				V_5
	IL_02d2:            Temp_56->Add(safe_cast<System::Windows::Forms::Control^>(V_5));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_02d7:                                                                        //ldarg.0
	IL_02d8:                                                                        //ldloc.s				V_5
	IL_02da:            this->AcceptButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_5);//call				void System::Windows::Forms::Form::set_AcceptButton(System::Windows::Forms::IButtonControl^)
	IL_02df:                                                                        //ldarg.0
	IL_02e0:                                                                        //ldloc.s				V_5
	IL_02e2:            this->CancelButton=safe_cast<System::Windows::Forms::IButtonControl^>(V_5);//call				void System::Windows::Forms::Form::set_CancelButton(System::Windows::Forms::IButtonControl^)
	IL_02e7:            return;                                                     //ret

}
