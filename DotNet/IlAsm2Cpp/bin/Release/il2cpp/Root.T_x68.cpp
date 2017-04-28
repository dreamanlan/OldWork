#include "global_xref.h"

inline Root::T_x68::T_x68()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Reflection::Assembly^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::IO::Stream^ Temp_3 = nullptr;
	System::Drawing::Icon^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Drawing::Font^ Temp_6 = nullptr;
	System::Single Temp_7 = 0;
	System::Drawing::Font^ Temp_8 = nullptr;
	System::Drawing::Size Temp_9;
	System::Drawing::Size Temp_10;
	Root::T_x68::T_x13^ Temp_11 = nullptr;
	System::Windows::Forms::Splitter^ Temp_12 = nullptr;
	System::Windows::Forms::Splitter^ Temp_13 = nullptr;
	System::Windows::Forms::Splitter^ Temp_14 = nullptr;
	System::Windows::Forms::Splitter^ Temp_15 = nullptr;
	Root::T_x78^ Temp_16 = nullptr;
	Root::T_x78^ Temp_17 = nullptr;
	Root::T_x78^ Temp_18 = nullptr;
	Root::T_x78^ Temp_19 = nullptr;
	Root::T_x78^ Temp_20 = nullptr;
	Root::T_x78^ Temp_21 = nullptr;
	System::ComponentModel::CancelEventHandler^ Temp_22 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::Form();*/                         //call				void System::Windows::Forms::Form::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_0=this->GetType();                                     //call				System::Type^ System::Object::GetType()
	IL_0016:            Temp_1=Temp_0->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_001b:                                                                        //ldstr				L"\x7021\x4123\x4025\x4427\x4F29\x4F2B\x5A2D\x5F2F\x4031\x1A33\x7735\x4837\x4A39\x503B\x573D\x233F\x2341\x3043\x2F45\x2747\x2449\x624B\x274D\x334F\x3D51"
	IL_0020:                                                                        //ldloc				V_0
	IL_0024:            Temp_2=a(L"\x7021\x4123\x4025\x4427\x4F29\x4F2B\x5A2D\x5F2F\x4031\x1A33\x7735\x4837\x4A39\x503B\x573D\x233F\x2341\x3043\x2F45\x2747\x2449\x624B\x274D\x334F\x3D51",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0029:            Temp_3=Temp_1->GetManifestResourceStream(Temp_2);           //callvirt				System::IO::Stream^ System::Reflection::Assembly::GetManifestResourceStream(System::String^)
	IL_002e:            Temp_4=gcnew System::Drawing::Icon(Temp_3);                 //newobj				void System::Drawing::Icon::.ctor(System::IO::Stream^)
	IL_0033:            this->Icon=Temp_4;                                          //call				void System::Windows::Forms::Form::set_Icon(System::Drawing::Icon^)
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldstr				L"\x7621\x4523\x4E25\x4727\x4729\x4D2B"
	IL_003e:                                                                        //ldloc				V_0
	IL_0042:            Temp_5=a(L"\x7621\x4523\x4E25\x4727\x4729\x4D2B",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0047:            Temp_6=System::Windows::Forms::Control::DefaultFont;        //call				System::Drawing::Font^ System::Windows::Forms::Control::get_DefaultFont()
	IL_004c:            Temp_7=Temp_6->SizeInPoints;                                //callvirt				System::Single System::Drawing::Font::get_SizeInPoints()
	IL_0051:            Temp_8=gcnew System::Drawing::Font(Temp_5,Temp_7);          //newobj				void System::Drawing::Font::.ctor(System::String^,System::Single)
	IL_0056:            this->Font=Temp_8;                                          //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_005b:                                                                        //ldarg.0
	IL_005c:                                                                        //ldc.i4				0x1e0
	IL_0061:                                                                        //ldc.i4				0x258
	IL_0066:            Temp_9=System::Drawing::Size(safe_cast<System::Int32>(480),safe_cast<System::Int32>(600));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_006b:            this->Size=Temp_9;                                          //call				void System::Windows::Forms::Form::set_Size(System::Drawing::Size)
	IL_0070:                                                                        //ldarg.0
	IL_0071:                                                                        //ldc.i4				0xf0
	IL_0076:                                                                        //ldc.i4				0x12c
	IL_007b:            Temp_10=System::Drawing::Size(safe_cast<System::Int32>(240),safe_cast<System::Int32>(300));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0080:            this->MinimumSize=Temp_10;                                  //call				void System::Windows::Forms::Form::set_MinimumSize(System::Drawing::Size)
	IL_0085:                                                                        //ldarg.0
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_11=gcnew Root::T_x68::T_x13(this);                     //newobj				void Root::T_x68::T_x13::.ctor(Root::T_x68^)
	IL_008c:            this->F_x12=Temp_11;                                        //stfld				Root::T_x68::T_x13^ Root::T_x68 F_x12
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_12=gcnew System::Windows::Forms::Splitter();           //newobj				void System::Windows::Forms::Splitter::.ctor()
	IL_0097:            this->F_x5=Temp_12;                                         //stfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_13=this->F_x5;                                         //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_00a2:                                                                        //ldc.i4.3
	IL_00a3:            Temp_13->Dock=safe_cast<System::Windows::Forms::DockStyle>(3);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_00a8:                                                                        //ldarg.0
	IL_00a9:            Temp_14=this->F_x5;                                         //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_00ae:                                                                        //ldc.i4.0
	IL_00af:            Temp_14->BorderStyle=safe_cast<System::Windows::Forms::BorderStyle>(0);//callvirt				void System::Windows::Forms::Splitter::set_BorderStyle(System::Windows::Forms::BorderStyle)
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:            Temp_15=this->F_x5;                                         //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_00ba:                                                                        //ldc.i4.0
	IL_00bb:            Temp_15->Visible=false;                                     //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:            Temp_16=gcnew Root::T_x78();                                //newobj				void Root::T_x78::.ctor()
	IL_00c6:            this->F_x9=Temp_16;                                         //stfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00cb:                                                                        //ldarg.0
	IL_00cc:            Temp_17=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00d1:                                                                        //ldc.i4.0
	IL_00d2:            Temp_17->TabStop=false;                                     //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_00d7:                                                                        //ldarg.0
	IL_00d8:            Temp_18=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00dd:                                                                        //ldc.i4				0x262
	IL_00e2:            Temp_18->Width=610;                                         //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_00e7:                                                                        //ldarg.0
	IL_00e8:            Temp_19=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00ed:                                                                        //ldc.i4.5
	IL_00ee:            Temp_19->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:            Temp_20=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00f9:                                                                        //ldc.i4.0
	IL_00fa:            Temp_20->Visible=false;                                     //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_00ff:                                                                        //ldarg.0
	IL_0100:            Temp_21=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0105:                                                                        //ldarg.0
	IL_0106:                                                                        //ldftn				void Root::T_x68::M_x1(System::Object^,System::ComponentModel::CancelEventArgs^)
	IL_010c:            Temp_22=gcnew System::ComponentModel::CancelEventHandler(this,&Root::T_x68::M_x1);//newobj				void System::ComponentModel::CancelEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0111:            Temp_21->M_x2(Temp_22);                                     //callvirt				void Root::T_x78::M_x2(System::ComponentModel::CancelEventHandler^)
	IL_0116:                                                                        //ldarg.0
	IL_0117:                                                                        //ldc.i4.1
	IL_0118:            this->F_x4=safe_cast<Root::T_x68::T_x12>(1);                //stfld				Root::T_x68::T_x12 Root::T_x68 F_x4
	IL_011d:            return;                                                     //ret

}
inline void Root::T_x68::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Size Temp_0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Size Temp_2;
	System::Int32 Temp_3 = 0;
	Reflector::IConfiguration^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::IConfiguration^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Root::T_x78^ Temp_9 = nullptr;
	System::Drawing::Size Temp_10;
	System::Int32 Temp_11 = 0;
	System::Globalization::CultureInfo^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	Root::T_x78^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Windows::Forms::Splitter^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::Windows::Forms::FormWindowState Temp_18 = (System::Windows::Forms::FormWindowState)0;
	Reflector::IConfiguration^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	Reflector::IConfiguration^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Drawing::Point Temp_23;
	System::Int32 Temp_24 = 0;
	System::Globalization::CultureInfo^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	Reflector::IConfiguration^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Drawing::Point Temp_29;
	System::Int32 Temp_30 = 0;
	System::Globalization::CultureInfo^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	Reflector::IConfiguration^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Globalization::CultureInfo^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	Reflector::IConfiguration^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::Globalization::CultureInfo^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	Reflector::IConfiguration^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	Root::T_x78^ Temp_43 = nullptr;
	System::Drawing::Size Temp_44;
	System::Int32 Temp_45 = 0;
	System::Globalization::CultureInfo^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	Root::T_x78^ Temp_48 = nullptr;
	System::Boolean Temp_49 = false;
	Reflector::IConfiguration^ Temp_50 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Windows::Forms::FormWindowState V_2 = (System::Windows::Forms::FormWindowState)0;
	System::Drawing::Size V_3;
	System::Drawing::Point V_4;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_7=17;                                                     //stloc				V_7
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_6=2;                                                      //stloc				V_6
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003b;                                               //br.s				IL_003b
	IL_0016:                                                                        //ldloc				V_6
	IL_001a:            switch(V_6){case 0:goto IL_01cf;case 1:goto IL_01aa;case 2:goto IL_0014;case 3:goto IL_0051;case 4:goto IL_01ef;case 5:goto IL_027c;case 6:goto IL_018c;};//switch				(IL_01cf,IL_01aa,IL_0014,IL_0051,IL_01ef,IL_027c,IL_018c)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_50=this->F_x2;                                         //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_0041:            if(Temp_50==nullptr)goto IL_0281;                           //brfalse				IL_0281
	IL_0046:                                                                        //ldc.i4				0x3
	IL_004b:            V_6=3;                                                      //stloc				V_6
	IL_004f:            /*goto IL_0016;*/goto IL_0051;                              //br.s				IL_0016
	IL_0051:            goto IL_01ba;                                               //br				IL_01ba
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_19=this->F_x2;                                         //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_005c:                                                                        //ldstr				L"\x622E\x5030\x4B32\x5C34\x5A36\x5038\x413A\x583C\x5B3E"
	IL_0061:                                                                        //ldloc				V_7
	IL_0065:            Temp_20=a(L"\x622E\x5030\x4B32\x5C34\x5A36\x5038\x413A\x583C\x5B3E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006a:            Temp_19->ClearProperty(Temp_20);                            //callvirt				void Reflector::IConfiguration::ClearProperty(System::String^)
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_21=this->F_x2;                                         //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_0075:                                                                        //ldstr				L"\x772E"
	IL_007a:                                                                        //ldloc				V_7
	IL_007e:            Temp_22=a(L"\x772E",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0083:                                                                        //ldarg.0
	IL_0084:            Temp_23=this->DesktopLocation;                              //call				System::Drawing::Point System::Windows::Forms::Form::get_DesktopLocation()
	IL_0089:            V_4=Temp_23;                                                //stloc.s				V_4
	IL_008b:                                                                        //ldloca.s				V_4
	IL_008d:            Temp_24=V_4.X;                                              //call				System::Int32 System::Drawing::Point::get_X()
	IL_0092:            V_5=Temp_24;                                                //stloc.s				V_5
	IL_0094:                                                                        //ldloca.s				V_5
	IL_0096:            Temp_25=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_009b:            Temp_26=V_5.ToString(safe_cast<System::IFormatProvider^>(Temp_25));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00a0:            Temp_21->SetProperty(Temp_22,Temp_26);                      //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:            Temp_27=this->F_x2;                                         //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_00ab:                                                                        //ldstr				L"\x762E"
	IL_00b0:                                                                        //ldloc				V_7
	IL_00b4:            Temp_28=a(L"\x762E",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b9:                                                                        //ldarg.0
	IL_00ba:            Temp_29=this->DesktopLocation;                              //call				System::Drawing::Point System::Windows::Forms::Form::get_DesktopLocation()
	IL_00bf:            V_4=Temp_29;                                                //stloc.s				V_4
	IL_00c1:                                                                        //ldloca.s				V_4
	IL_00c3:            Temp_30=V_4.Y;                                              //call				System::Int32 System::Drawing::Point::get_Y()
	IL_00c8:            V_5=Temp_30;                                                //stloc.s				V_5
	IL_00ca:                                                                        //ldloca.s				V_5
	IL_00cc:            Temp_31=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00d1:            Temp_32=V_5.ToString(safe_cast<System::IFormatProvider^>(Temp_31));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00d6:            Temp_27->SetProperty(Temp_28,Temp_32);                      //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_00db:                                                                        //ldarg.0
	IL_00dc:            Temp_33=this->F_x2;                                         //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_00e1:                                                                        //ldstr				L"\x782E\x5830\x5732\x4134\x5F36"
	IL_00e6:                                                                        //ldloc				V_7
	IL_00ea:            Temp_34=a(L"\x782E\x5830\x5732\x4134\x5F36",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ef:                                                                        //ldloca.s				V_0
	IL_00f1:            Temp_35=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00f6:            Temp_36=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_35));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00fb:            Temp_33->SetProperty(Temp_34,Temp_36);                      //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_0100:                                                                        //ldarg.0
	IL_0101:            Temp_37=this->F_x2;                                         //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_0106:                                                                        //ldstr				L"\x672E\x5430\x5A32\x5234\x5F36\x4D38"
	IL_010b:                                                                        //ldloc				V_7
	IL_010f:            Temp_38=a(L"\x672E\x5430\x5A32\x5234\x5F36\x4D38",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0114:                                                                        //ldloca.s				V_1
	IL_0116:            Temp_39=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_011b:            Temp_40=V_1.ToString(safe_cast<System::IFormatProvider^>(Temp_39));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0120:            Temp_37->SetProperty(Temp_38,Temp_40);                      //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_0125:                                                                        //ldarg.0
	IL_0126:            Temp_41=this->F_x2;                                         //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_012b:                                                                        //ldstr				L"\x7F2E\x5030\x5D32\x5034"
	IL_0130:                                                                        //ldloc				V_7
	IL_0134:            Temp_42=a(L"\x7F2E\x5030\x5D32\x5034",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0139:                                                                        //ldarg.0
	IL_013a:            Temp_43=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_013f:            Temp_44=Temp_43->Size;                                      //callvirt				System::Drawing::Size System::Windows::Forms::Control::get_Size()
	IL_0144:            V_3=Temp_44;                                                //stloc.3
	IL_0145:                                                                        //ldloca.s				V_3
	IL_0147:            Temp_45=V_3.Width;                                          //call				System::Int32 System::Drawing::Size::get_Width()
	IL_014c:            V_5=Temp_45;                                                //stloc.s				V_5
	IL_014e:                                                                        //ldloca.s				V_5
	IL_0150:            Temp_46=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0155:            Temp_47=V_5.ToString(safe_cast<System::IFormatProvider^>(Temp_46));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_015a:            Temp_41->SetProperty(Temp_42,Temp_47);                      //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_015f:            return;                                                     //ret
	IL_0160:                                                                        //ldarg.0
	IL_0161:            Temp_0=this->Size;                                          //call				System::Drawing::Size System::Windows::Forms::Form::get_Size()
	IL_0166:            V_3=Temp_0;                                                 //stloc.3
	IL_0167:                                                                        //ldloca.s				V_3
	IL_0169:            Temp_1=V_3.Width;                                           //call				System::Int32 System::Drawing::Size::get_Width()
	IL_016e:            V_0=Temp_1;                                                 //stloc.0
	IL_016f:                                                                        //ldarg.0
	IL_0170:            Temp_2=this->Size;                                          //call				System::Drawing::Size System::Windows::Forms::Form::get_Size()
	IL_0175:            V_3=Temp_2;                                                 //stloc.3
	IL_0176:                                                                        //ldloca.s				V_3
	IL_0178:            Temp_3=V_3.Height;                                          //call				System::Int32 System::Drawing::Size::get_Height()
	IL_017d:            V_1=Temp_3;                                                 //stloc.1
	IL_017e:                                                                        //ldc.i4				0x6
	IL_0183:            V_6=6;                                                      //stloc				V_6
	IL_0187:            /*goto IL_0016;*/goto IL_018c;                              //br				IL_0016
	IL_018c:                                                                        //ldarg.0
	IL_018d:            Temp_48=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0192:            Temp_49=Temp_48->Visible;                                   //callvirt				System::Boolean System::Windows::Forms::Control::get_Visible()
	IL_0197:            if(!Temp_49)goto IL_0056;                                   //brfalse				IL_0056
	IL_019c:                                                                        //ldc.i4				0x1
	IL_01a1:            V_6=1;                                                      //stloc				V_6
	IL_01a5:            /*goto IL_0016;*/goto IL_01aa;                              //br				IL_0016
	IL_01aa:                                                                        //ldc.i4.2
	IL_01ab:                                                                        //dup
	IL_01ac:                                                                        //dup
	IL_01ad:                                                                        //ldc.i4.7
	IL_01ae:                                                                        //add
	IL_01af:                                                                        //bgt				IL_01ab
	IL_01b4:                                                                        //pop
	IL_01b5:            goto IL_0254;                                               //br				IL_0254
	IL_01ba:                                                                        //ldarg.0
	IL_01bb:            Temp_18=this->WindowState;                                  //call				System::Windows::Forms::FormWindowState System::Windows::Forms::Form::get_WindowState()
	IL_01c0:            V_2=Temp_18;                                                //stloc.2
	IL_01c1:                                                                        //ldc.i4				0x0
	IL_01c6:            V_6=0;                                                      //stloc				V_6
	IL_01ca:            /*goto IL_0016;*/goto IL_01cf;                              //br				IL_0016
	IL_01cf:                                                                        //ldloc.2
	IL_01d0:            switch(safe_cast<System::Int32>(V_2)){case 0:goto IL_0160;case 1:goto IL_0281;case 2:goto IL_01f1;};//switch				(IL_0160,IL_0281,IL_01f1)
	IL_01e1:                                                                        //ldc.i4				0x4
	IL_01e6:            V_6=4;                                                      //stloc				V_6
	IL_01ea:            /*goto IL_0016;*/goto IL_01ef;                              //br				IL_0016
	IL_01ef:            goto IL_0253;                                               //br.s				IL_0253
	IL_01f1:                                                                        //ldarg.0
	IL_01f2:            Temp_4=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_01f7:                                                                        //ldstr				L"\x622E\x5030\x4B32\x5C34\x5A36\x5038\x413A\x583C\x5B3E"
	IL_01fc:                                                                        //ldloc				V_7
	IL_0200:            Temp_5=a(L"\x622E\x5030\x4B32\x5C34\x5A36\x5038\x413A\x583C\x5B3E",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0205:                                                                        //ldstr				L"\x5B2E\x4330\x4632\x5034"
	IL_020a:                                                                        //ldloc				V_7
	IL_020e:            Temp_6=a(L"\x5B2E\x4330\x4632\x5034",V_7);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0213:            Temp_4->SetProperty(Temp_5,Temp_6);                         //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_0218:                                                                        //ldarg.0
	IL_0219:            Temp_7=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_021e:                                                                        //ldstr				L"\x7F2E\x5030\x5D32\x5034"
	IL_0223:                                                                        //ldloc				V_7
	IL_0227:            Temp_8=a(L"\x7F2E\x5030\x5D32\x5034",V_7);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_022c:                                                                        //ldarg.0
	IL_022d:            Temp_9=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0232:            Temp_10=Temp_9->Size;                                       //callvirt				System::Drawing::Size System::Windows::Forms::Control::get_Size()
	IL_0237:            V_3=Temp_10;                                                //stloc.3
	IL_0238:                                                                        //ldloca.s				V_3
	IL_023a:            Temp_11=V_3.Width;                                          //call				System::Int32 System::Drawing::Size::get_Width()
	IL_023f:            V_5=Temp_11;                                                //stloc.s				V_5
	IL_0241:                                                                        //ldloca.s				V_5
	IL_0243:            Temp_12=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0248:            Temp_13=V_5.ToString(safe_cast<System::IFormatProvider^>(Temp_12));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_024d:            Temp_7->SetProperty(Temp_8,Temp_13);                        //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_0252:            return;                                                     //ret
	IL_0253:            return;                                                     //ret
	IL_0254:                                                                        //ldloc.0
	IL_0255:                                                                        //ldarg.0
	IL_0256:            Temp_14=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_025b:            Temp_15=Temp_14->Width;                                     //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_0260:                                                                        //ldarg.0
	IL_0261:            Temp_16=this->F_x5;                                         //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_0266:            Temp_17=Temp_16->Width;                                     //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_026b:                                                                        //add
	IL_026c:                                                                        //sub
	IL_026d:            V_0=(V_0 - (Temp_15 + Temp_17));                            //stloc.0
	IL_026e:                                                                        //ldc.i4				0x5
	IL_0273:            V_6=5;                                                      //stloc				V_6
	IL_0277:            /*goto IL_0016;*/goto IL_027c;                              //br				IL_0016
	IL_027c:            goto IL_0056;                                               //br				IL_0056
	IL_0281:            return;                                                     //ret

}
inline void Root::T_x68::M_x1(Reflector::IConfiguration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Globalization::CultureInfo^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Drawing::Size Temp_10;
	Root::T_x78^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Globalization::CultureInfo^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Root::T_x78^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::Drawing::Size Temp_18;
	System::Drawing::Point Temp_19;
	System::Boolean Temp_20 = false;
	System::Boolean Temp_21 = false;
	Root::T_x78^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Globalization::CultureInfo^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Globalization::CultureInfo^ Temp_29 = nullptr;
	System::Int32 Temp_30 = 0;
	System::Drawing::Rectangle Temp_31;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::Boolean Temp_36 = false;
	System::String^ Temp_37 = nullptr;
	System::Boolean Temp_38 = false;
	System::String^ Temp_39 = nullptr;
	System::Boolean Temp_40 = false;
	System::String^ Temp_41 = nullptr;
	System::Boolean Temp_42 = false;
	System::String^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	//local variables.
	System::Drawing::Point V_0;
	System::Drawing::Rectangle V_1;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_3=0;                                                      //stloc				V_3
	IL_0009:            goto IL_0074;                                               //br.s				IL_0074
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_03a7;case 1:goto IL_0216;case 2:goto IL_00ef;case 3:goto IL_03be;case 4:goto IL_0249;case 5:goto IL_00ce;case 6:goto IL_02aa;case 7:goto IL_01db;case 8:goto IL_02e6;case 9:goto IL_03f8;case 10:goto IL_031c;case 11:goto IL_014c;case 12:goto IL_0342;case 13:goto IL_0309;case 14:goto IL_01f5;case 15:goto IL_0270;case 16:goto IL_0086;case 17:goto IL_0236;case 18:goto IL_0167;case 19:goto IL_0283;case 20:goto IL_01b4;case 21:goto IL_03d1;case 22:goto IL_017a;case 23:goto IL_01a1;};//switch				(IL_03a7,IL_0216,IL_00ef,IL_03be,IL_0249,IL_00ce,IL_02aa,IL_01db,IL_02e6,IL_03f8,IL_031c,IL_014c,IL_0342,IL_0309,IL_01f5,IL_0270,IL_0086,IL_0236,IL_0167,IL_0283,IL_01b4,IL_03d1,IL_017a,IL_01a1)
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldnull
	IL_0076:            this->F_x2=safe_cast<Reflector::IConfiguration^>(nullptr);  //stfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_007b:                                                                        //ldc.i4				0x10
	IL_0080:            V_2=16;                                                     //stloc				V_2
	IL_0084:            /*goto IL_000b;*/goto IL_0086;                              //br.s				IL_000b
	IL_0086:                                                                        //ldarg.1
	IL_0087:                                                                        //ldstr				L"\x531D\x411F\x5A21\x4D23\x4B25\x4127\x5029\x492B\x4A2D"
	IL_008c:                                                                        //ldloc				V_3
	IL_0090:            Temp_32=a(L"\x531D\x411F\x5A21\x4D23\x4B25\x4127\x5029\x492B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0095:                                                                        //ldstr				L"\x781D\x411F\x4E21\x5723\x4325"
	IL_009a:                                                                        //ldloc				V_3
	IL_009e:            Temp_33=a(L"\x781D\x411F\x4E21\x5723\x4325",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a3:            Temp_34=A_0->GetProperty(Temp_32,Temp_33);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_00a8:                                                                        //ldstr				L"\x6A1D\x521F\x5721\x4123"
	IL_00ad:                                                                        //ldloc				V_3
	IL_00b1:            Temp_35=a(L"\x6A1D\x521F\x5721\x4123",V_3);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b6:            Temp_36=(Temp_34 == Temp_35);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00bb:            if(!Temp_36)goto IL_01e0;                                   //brfalse				IL_01e0
	IL_00c0:                                                                        //ldc.i4				0x5
	IL_00c5:            V_2=5;                                                      //stloc				V_2
	IL_00c9:            /*goto IL_000b;*/goto IL_00ce;                              //br				IL_000b
	IL_00ce:            goto IL_03a9;                                               //br				IL_03a9
	IL_00d3:                                                                        //ldarg.0
	IL_00d4:                                                                        //ldc.i4.0
	IL_00d5:            this->StartPosition=safe_cast<System::Windows::Forms::FormStartPosition>(0);//call				void System::Windows::Forms::Form::set_StartPosition(System::Windows::Forms::FormStartPosition)
	IL_00da:                                                                        //ldarg.0
	IL_00db:                                                                        //ldloc.0
	IL_00dc:            this->DesktopLocation=V_0;                                  //call				void System::Windows::Forms::Form::set_DesktopLocation(System::Drawing::Point)
	IL_00e1:                                                                        //ldc.i4				0x2
	IL_00e6:            V_2=2;                                                      //stloc				V_2
	IL_00ea:            /*goto IL_000b;*/goto IL_00ef;                              //br				IL_000b
	IL_00ef:            goto IL_01a6;                                               //br				IL_01a6
	IL_00f4:                                                                        //ldloca.s				V_0
	IL_00f6:                                                                        //ldarg.1
	IL_00f7:                                                                        //ldstr				L"\x461D"
	IL_00fc:                                                                        //ldloc				V_3
	IL_0100:            Temp_23=a(L"\x461D",V_3);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0105:            Temp_24=A_0->GetProperty(Temp_23);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_010a:            Temp_25=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_010f:            Temp_26=System::Int32::Parse(Temp_24,safe_cast<System::IFormatProvider^>(Temp_25));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0114:                                                                        //ldarg.1
	IL_0115:                                                                        //ldstr				L"\x471D"
	IL_011a:                                                                        //ldloc				V_3
	IL_011e:            Temp_27=a(L"\x471D",V_3);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0123:            Temp_28=A_0->GetProperty(Temp_27);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0128:            Temp_29=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_012d:            Temp_30=System::Int32::Parse(Temp_28,safe_cast<System::IFormatProvider^>(Temp_29));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0132:            V_0=System::Drawing::Point(Temp_26,Temp_30);                //call				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0137:                                                                        //ldloc.0
	IL_0138:            Temp_31=System::Windows::Forms::Screen::GetWorkingArea(V_0);//call				System::Drawing::Rectangle System::Windows::Forms::Screen::GetWorkingArea(System::Drawing::Point)
	IL_013d:            V_1=Temp_31;                                                //stloc.1
	IL_013e:                                                                        //ldc.i4				0xb
	IL_0143:            V_2=11;                                                     //stloc				V_2
	IL_0147:            /*goto IL_000b;*/goto IL_014c;                              //br				IL_000b
	IL_014c:                                                                        //ldloca.s				V_1
	IL_014e:                                                                        //ldloc.0
	IL_014f:            Temp_21=V_1.Contains(V_0);                                  //call				System::Boolean System::Drawing::Rectangle::Contains(System::Drawing::Point)
	IL_0154:            if(Temp_21)goto IL_00d3;                                    //brtrue				IL_00d3
	IL_0159:                                                                        //ldc.i4				0x12
	IL_015e:            V_2=18;                                                     //stloc				V_2
	IL_0162:            /*goto IL_000b;*/goto IL_0167;                              //br				IL_000b
	IL_0167:            goto IL_030e;                                               //br				IL_030e
	IL_016c:                                                                        //ldc.i4				0x16
	IL_0171:            V_2=22;                                                     //stloc				V_2
	IL_0175:            /*goto IL_000b;*/goto IL_017a;                              //br				IL_000b
	IL_017a:                                                                        //ldarg.1
	IL_017b:                                                                        //ldstr				L"\x491D\x491F\x4621\x5023\x4E25"
	IL_0180:                                                                        //ldloc				V_3
	IL_0184:            Temp_43=a(L"\x491D\x491F\x4621\x5023\x4E25",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0189:            Temp_44=A_0->HasProperty(Temp_43);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_018e:            if(!Temp_44)goto IL_03c3;                                   //brfalse				IL_03c3
	IL_0193:                                                                        //ldc.i4				0x17
	IL_0198:            V_2=23;                                                     //stloc				V_2
	IL_019c:            /*goto IL_000b;*/goto IL_01a1;                              //br				IL_000b
	IL_01a1:            goto IL_0275;                                               //br				IL_0275
	IL_01a6:                                                                        //ldc.i4				0x14
	IL_01ab:            V_2=20;                                                     //stloc				V_2
	IL_01af:            /*goto IL_000b;*/goto IL_01b4;                              //br				IL_000b
	IL_01b4:                                                                        //ldarg.1
	IL_01b5:                                                                        //ldstr				L"\x4E1D\x411F\x4C21\x4123"
	IL_01ba:                                                                        //ldloc				V_3
	IL_01be:            Temp_39=a(L"\x4E1D\x411F\x4C21\x4123",V_3);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c3:            Temp_40=A_0->HasProperty(Temp_39);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_01c8:            if(!Temp_40)goto IL_03fd;                                   //brfalse				IL_03fd
	IL_01cd:                                                                        //ldc.i4				0x7
	IL_01d2:            V_2=7;                                                      //stloc				V_2
	IL_01d6:            /*goto IL_000b;*/goto IL_01db;                              //br				IL_000b
	IL_01db:            goto IL_02af;                                               //br				IL_02af
	IL_01e0:                                                                        //ldarg.0
	IL_01e1:                                                                        //ldc.i4.0
	IL_01e2:            this->WindowState=safe_cast<System::Windows::Forms::FormWindowState>(0);//call				void System::Windows::Forms::Form::set_WindowState(System::Windows::Forms::FormWindowState)
	IL_01e7:                                                                        //ldc.i4				0xe
	IL_01ec:            V_2=14;                                                     //stloc				V_2
	IL_01f0:            /*goto IL_000b;*/goto IL_01f5;                              //br				IL_000b
	IL_01f5:            goto IL_016c;                                               //br				IL_016c
	IL_01fa:                                                                        //ldarg.0
	IL_01fb:                                                                        //ldc.i4.2
	IL_01fc:            this->StartPosition=safe_cast<System::Windows::Forms::FormStartPosition>(2);//call				void System::Windows::Forms::Form::set_StartPosition(System::Windows::Forms::FormStartPosition)
	IL_0201:                                                                        //ldarg.0
	IL_0202:                                                                        //ldc.i4.0
	IL_0203:            this->WindowState=safe_cast<System::Windows::Forms::FormWindowState>(0);//call				void System::Windows::Forms::Form::set_WindowState(System::Windows::Forms::FormWindowState)
	IL_0208:                                                                        //ldc.i4				0x1
	IL_020d:            V_2=1;                                                      //stloc				V_2
	IL_0211:            /*goto IL_000b;*/goto IL_0216;                              //br				IL_000b
	IL_0216:            goto IL_01a6;                                               //br.s				IL_01a6
	IL_0218:                                                                        //ldarg.0
	IL_0219:            Temp_22=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_021e:                                                                        //ldc.i4				0x12c
	IL_0223:            Temp_22->Width=300;                                         //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_0228:                                                                        //ldc.i4				0x11
	IL_022d:            V_2=17;                                                     //stloc				V_2
	IL_0231:            /*goto IL_000b;*/goto IL_0236;                              //br				IL_000b
	IL_0236:            goto IL_03fd;                                               //br				IL_03fd
	IL_023b:                                                                        //ldc.i4				0x4
	IL_0240:            V_2=4;                                                      //stloc				V_2
	IL_0244:            /*goto IL_000b;*/goto IL_0249;                              //br				IL_000b
	IL_0249:                                                                        //ldarg.1
	IL_024a:                                                                        //ldstr				L"\x471D"
	IL_024f:                                                                        //ldloc				V_3
	IL_0253:            Temp_0=a(L"\x471D",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0258:            Temp_1=A_0->HasProperty(Temp_0);                            //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_025d:            if(!Temp_1)goto IL_01a6;                                    //brfalse				IL_01a6
	IL_0262:                                                                        //ldc.i4				0xf
	IL_0267:            V_2=15;                                                     //stloc				V_2
	IL_026b:            /*goto IL_000b;*/goto IL_0270;                              //br				IL_000b
	IL_0270:            goto IL_00f4;                                               //br				IL_00f4
	IL_0275:                                                                        //ldc.i4				0x13
	IL_027a:            V_2=19;                                                     //stloc				V_2
	IL_027e:            /*goto IL_000b;*/goto IL_0283;                              //br				IL_000b
	IL_0283:                                                                        //ldarg.1
	IL_0284:                                                                        //ldstr				L"\x561D\x451F\x4B21\x4323\x4E25\x5C27"
	IL_0289:                                                                        //ldloc				V_3
	IL_028d:            Temp_37=a(L"\x561D\x451F\x4B21\x4323\x4E25\x5C27",V_3);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0292:            Temp_38=A_0->HasProperty(Temp_37);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_0297:            if(!Temp_38)goto IL_03c3;                                   //brfalse				IL_03c3
	IL_029c:                                                                        //ldc.i4				0x6
	IL_02a1:            V_2=6;                                                      //stloc				V_2
	IL_02a5:            /*goto IL_000b;*/goto IL_02aa;                              //br				IL_000b
	IL_02aa:            goto IL_0347;                                               //br				IL_0347
	IL_02af:                                                                        //ldarg.0
	IL_02b0:            Temp_11=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_02b5:                                                                        //ldarg.1
	IL_02b6:                                                                        //ldstr				L"\x4E1D\x411F\x4C21\x4123"
	IL_02bb:                                                                        //ldloc				V_3
	IL_02bf:            Temp_12=a(L"\x4E1D\x411F\x4C21\x4123",V_3);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c4:            Temp_13=A_0->GetProperty(Temp_12);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_02c9:            Temp_14=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_02ce:            Temp_15=System::Int32::Parse(Temp_13,safe_cast<System::IFormatProvider^>(Temp_14));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_02d3:            Temp_11->Width=Temp_15;                                     //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_02d8:                                                                        //ldc.i4				0x8
	IL_02dd:            V_2=8;                                                      //stloc				V_2
	IL_02e1:            /*goto IL_000b;*/goto IL_02e6;                              //br				IL_000b
	IL_02e6:                                                                        //ldarg.0
	IL_02e7:            Temp_16=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_02ec:            Temp_17=Temp_16->Width;                                     //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_02f1:                                                                        //ldc.i4				0x12c
	IL_02f6:            if(Temp_17>=300)goto IL_03fd;                               //bge				IL_03fd
	IL_02fb:                                                                        //ldc.i4				0xd
	IL_0300:            V_2=13;                                                     //stloc				V_2
	IL_0304:            /*goto IL_000b;*/goto IL_0309;                              //br				IL_000b
	IL_0309:            goto IL_0218;                                               //br				IL_0218
	IL_030e:                                                                        //ldc.i4				0xa
	IL_0313:            V_2=10;                                                     //stloc				V_2
	IL_0317:            /*goto IL_000b;*/goto IL_031c;                              //br				IL_000b
	IL_031c:                                                                        //ldloca.s				V_1
	IL_031e:                                                                        //ldloc.0
	IL_031f:                                                                        //ldarg.0
	IL_0320:            Temp_18=this->Size;                                         //call				System::Drawing::Size System::Windows::Forms::Form::get_Size()
	IL_0325:            Temp_19=(V_0 + Temp_18);                                    //call				System::Drawing::Point System::Drawing::Point::op_Addition(System::Drawing::Point,System::Drawing::Size)
	IL_032a:            Temp_20=V_1.Contains(Temp_19);                              //call				System::Boolean System::Drawing::Rectangle::Contains(System::Drawing::Point)
	IL_032f:            if(!Temp_20)goto IL_01fa;                                   //brfalse				IL_01fa
	IL_0334:                                                                        //ldc.i4				0xc
	IL_0339:            V_2=12;                                                     //stloc				V_2
	IL_033d:            /*goto IL_000b;*/goto IL_0342;                              //br				IL_000b
	IL_0342:            goto IL_00d3;                                               //br				IL_00d3
	IL_0347:                                                                        //ldc.i4.4
	IL_0348:                                                                        //dup
	IL_0349:                                                                        //dup
	IL_034a:                                                                        //ldc.i4.2
	IL_034b:                                                                        //sub
	IL_034c:                                                                        //blt				IL_0348
	IL_0351:                                                                        //pop
	IL_0352:                                                                        //ldarg.0
	IL_0353:                                                                        //ldarg.1
	IL_0354:                                                                        //ldstr				L"\x491D\x491F\x4621\x5023\x4E25"
	IL_0359:                                                                        //ldloc				V_3
	IL_035d:            Temp_2=a(L"\x491D\x491F\x4621\x5023\x4E25",V_3);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0362:            Temp_3=A_0->GetProperty(Temp_2);                            //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0367:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_036c:            Temp_5=System::Int32::Parse(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0371:                                                                        //ldarg.1
	IL_0372:                                                                        //ldstr				L"\x561D\x451F\x4B21\x4323\x4E25\x5C27"
	IL_0377:                                                                        //ldloc				V_3
	IL_037b:            Temp_6=a(L"\x561D\x451F\x4B21\x4323\x4E25\x5C27",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0380:            Temp_7=A_0->GetProperty(Temp_6);                            //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0385:            Temp_8=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_038a:            Temp_9=System::Int32::Parse(Temp_7,safe_cast<System::IFormatProvider^>(Temp_8));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_038f:            Temp_10=System::Drawing::Size(Temp_5,Temp_9);               //newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0394:            this->Size=Temp_10;                                         //call				void System::Windows::Forms::Form::set_Size(System::Drawing::Size)
	IL_0399:                                                                        //ldc.i4				0x0
	IL_039e:            V_2=0;                                                      //stloc				V_2
	IL_03a2:            /*goto IL_000b;*/goto IL_03a7;                              //br				IL_000b
	IL_03a7:            goto IL_03c3;                                               //br.s				IL_03c3
	IL_03a9:                                                                        //ldarg.0
	IL_03aa:                                                                        //ldc.i4.2
	IL_03ab:            this->WindowState=safe_cast<System::Windows::Forms::FormWindowState>(2);//call				void System::Windows::Forms::Form::set_WindowState(System::Windows::Forms::FormWindowState)
	IL_03b0:                                                                        //ldc.i4				0x3
	IL_03b5:            V_2=3;                                                      //stloc				V_2
	IL_03b9:            /*goto IL_000b;*/goto IL_03be;                              //br				IL_000b
	IL_03be:            goto IL_016c;                                               //br				IL_016c
	IL_03c3:                                                                        //ldc.i4				0x15
	IL_03c8:            V_2=21;                                                     //stloc				V_2
	IL_03cc:            /*goto IL_000b;*/goto IL_03d1;                              //br				IL_000b
	IL_03d1:                                                                        //ldarg.1
	IL_03d2:                                                                        //ldstr				L"\x461D"
	IL_03d7:                                                                        //ldloc				V_3
	IL_03db:            Temp_41=a(L"\x461D",V_3);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e0:            Temp_42=A_0->HasProperty(Temp_41);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_03e5:            if(!Temp_42)goto IL_01a6;                                   //brfalse				IL_01a6
	IL_03ea:                                                                        //ldc.i4				0x9
	IL_03ef:            V_2=9;                                                      //stloc				V_2
	IL_03f3:            /*goto IL_000b;*/goto IL_03f8;                              //br				IL_000b
	IL_03f8:            goto IL_023b;                                               //br				IL_023b
	IL_03fd:                                                                        //ldarg.0
	IL_03fe:                                                                        //ldarg.1
	IL_03ff:            this->F_x2=A_0;                                             //stfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_0404:            return;                                                     //ret

}
inline void Root::T_x68::M_x1(System::Boolean A_0)
//Reflector::IWindowManager^::set_Visible by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::Visible=A_0;               //call				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x68::M_x1(System::EventHandler^ A_0)
//Reflector::IWindowManager^::add_Closed by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Form::Closed += A_0;                //call				void System::Windows::Forms::Form::add_Closed(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x68::M_x1(System::Object^ A_0,System::ComponentModel::CancelEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	Reflector::IWindow^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->M_x4();                                        //call				Reflector::IWindowCollection^ Root::T_x68::M_x4()
	IL_0009:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000e:            V_1=Temp_1;                                                 //stloc.1
	IL_000f:            /*goto IL_0011;*/goto IL_000F01;                            //br.s				IL_0011
	IL_000F01:          try{
	IL_0011:                                                                        //ldc.i4				0x4
	IL_0016:            V_3=4;                                                      //stloc				V_3
	IL_001a:            /*goto IL_001e;*/goto IL_001c;                              //br.s				IL_001e
	IL_001c:            goto IL_003b;                                               //br.s				IL_003b
	IL_001e:                                                                        //ldloc				V_3
	IL_0022:            switch(V_3){case 0:goto IL_005b;case 1:goto IL_007b;case 2:goto IL_0068;case 3:goto IL_0088;case 4:goto IL_001c;};//switch				(IL_005b,IL_007b,IL_0068,IL_0088,IL_001c)
	IL_003b:            goto IL_005d;                                               //br.s				IL_005d
	IL_003d:                                                                        //ldloc.1
	IL_003e:            Temp_3=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0043:                                                                        //castclass				Reflector::IWindow
	IL_0048:            V_0=safe_cast<Reflector::IWindow^>(Temp_3);                 //stloc.0
	IL_0049:                                                                        //ldloc.0
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            V_0->Visible=false;                                         //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0050:                                                                        //ldc.i4				0x0
	IL_0055:            V_3=0;                                                      //stloc				V_3
	IL_0059:            /*goto IL_001e;*/goto IL_005b;                              //br.s				IL_001e
	IL_005b:            goto IL_005d;                                               //br.s				IL_005d
	IL_005d:                                                                        //ldc.i4				0x2
	IL_0062:            V_3=2;                                                      //stloc				V_3
	IL_0066:            /*goto IL_001e;*/goto IL_0068;                              //br.s				IL_001e
	IL_0068:                                                                        //ldloc.1
	IL_0069:            Temp_2=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_006e:            if(Temp_2)goto IL_003d;                                     //brtrue.s				IL_003d
	IL_0070:                                                                        //ldc.i4				0x1
	IL_0075:            V_3=1;                                                      //stloc				V_3
	IL_0079:            /*goto IL_001e;*/goto IL_007b;                              //br.s				IL_001e
	IL_007b:            goto IL_007d;                                               //br.s				IL_007d
	IL_007d:                                                                        //ldc.i4				0x3
	IL_0082:            V_3=3;                                                      //stloc				V_3
	IL_0086:            /*goto IL_001e;*/goto IL_0088;                              //br.s				IL_001e
	IL_0088:            goto IL_00d7;                                               //leave.s				IL_00d7
	                    ;}
	                    finally{
	IL_008a:            goto IL_00a1;                                               //br.s				IL_00a1
	IL_008c:                                                                        //ldloc				V_4
	IL_0090:            switch(V_4){case 0:goto IL_00c1;case 1:goto IL_00b3;case 2:goto IL_00d4;};//switch				(IL_00c1,IL_00b3,IL_00d4)
	IL_00a1:                                                                        //ldloc.1
	IL_00a2:                                                                        //isinst				System::IDisposable
	IL_00a7:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00a8:                                                                        //ldc.i4				0x1
	IL_00ad:            V_4=1;                                                      //stloc				V_4
	IL_00b1:            /*goto IL_008c;*/goto IL_00b3;                              //br.s				IL_008c
	IL_00b3:                                                                        //ldloc.2
	IL_00b4:            if(V_2==nullptr)goto IL_00d6;                               //brfalse.s				IL_00d6
	IL_00b6:                                                                        //ldc.i4				0x0
	IL_00bb:            V_4=0;                                                      //stloc				V_4
	IL_00bf:            /*goto IL_008c;*/goto IL_00c1;                              //br.s				IL_008c
	IL_00c1:            goto IL_00c3;                                               //br.s				IL_00c3
	IL_00c3:                                                                        //ldloc.2
	IL_00c4:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00c9:                                                                        //ldc.i4				0x2
	IL_00ce:            V_4=2;                                                      //stloc				V_4
	IL_00d2:            /*goto IL_008c;*/goto IL_00d4;                              //br.s				IL_008c
	IL_00d4:            goto IL_00d6;                                               //br.s				IL_00d6
	IL_00d6:                                                                        //endfinally
	                    ;}
	IL_00d7:            return;                                                     //ret

}
inline void Root::T_x68::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Root::T_x78^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Root::T_x78^ Temp_4 = nullptr;
	Root::T_x78^ Temp_5 = nullptr;
	System::Windows::Forms::Splitter^ Temp_6 = nullptr;
	Root::T_x78^ Temp_7 = nullptr;
	Reflector::IWindow^ Temp_8 = nullptr;
	Reflector::IWindowCollection^ Temp_9 = nullptr;
	Reflector::IWindow^ Temp_10 = nullptr;
	System::Windows::Forms::FormWindowState Temp_11 = (System::Windows::Forms::FormWindowState)0;
	System::EventArgs^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Root::T_x78^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Windows::Forms::Splitter^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_003a;                                               //br.s				IL_003a
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_007e;case 1:goto IL_00e4;case 2:goto IL_00a0;case 3:goto IL_00ff;case 4:goto IL_0057;case 5:goto IL_014a;case 6:goto IL_011b;case 7:goto IL_0163;case 8:goto IL_00d4;};//switch				(IL_007e,IL_00e4,IL_00a0,IL_00ff,IL_0057,IL_014a,IL_011b,IL_0163,IL_00d4)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_0=this->M_x5();                                        //call				System::Windows::Forms::Control^ Root::T_x68::M_x5()
	IL_0040:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0045:                                                                        //pop
	IL_0046:                                                                        //ldarg.0
	IL_0047:            this->SuspendLayout();                                      //call				void System::Windows::Forms::Control::SuspendLayout()
	IL_004c:                                                                        //ldc.i4				0x4
	IL_0051:            V_0=4;                                                      //stloc				V_0
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_7=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_005d:            Temp_8=Temp_7->M_x2();                                      //callvirt				Reflector::IWindow^ Root::T_x78::M_x2()
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_9=this->M_x4();                                        //call				Reflector::IWindowCollection^ Root::T_x68::M_x4()
	IL_0068:                                                                        //ldarg.1
	IL_0069:            Temp_10=Temp_9[A_0];                                        //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_006e:            if(Temp_8!=Temp_10)goto IL_0168;                            //bne.un				IL_0168
	IL_0073:                                                                        //ldc.i4				0x0
	IL_0078:            V_0=0;                                                      //stloc				V_0
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_00d6;                                               //br.s				IL_00d6
	IL_0080:                                                                        //ldarg.0
	IL_0081:                                                                        //ldc.i4.1
	IL_0082:            this->F_x4=safe_cast<Root::T_x68::T_x12>(1);                //stfld				Root::T_x68::T_x12 Root::T_x68 F_x4
	IL_0087:                                                                        //ldarg.0
	IL_0088:            Temp_12=System::EventArgs::Empty;                           //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_008d:            this->OnSizeChanged(Temp_12);                               //callvirt				void System::Windows::Forms::Control::OnSizeChanged(System::EventArgs^)
	IL_0092:                                                                        //ldc.i4				0x2
	IL_0097:            V_0=2;                                                      //stloc				V_0
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:            goto IL_0101;                                               //br.s				IL_0101
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:                                                                        //dup
	IL_00a4:            Temp_13=this->Width;                                        //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_00a9:                                                                        //ldarg.0
	IL_00aa:            Temp_14=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00af:            Temp_15=Temp_14->Width;                                     //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:            Temp_16=this->F_x5;                                         //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_00ba:            Temp_17=Temp_16->Width;                                     //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_00bf:                                                                        //add
	IL_00c0:                                                                        //sub
	IL_00c1:            this->Width=(Temp_13 - (Temp_15 + Temp_17));                //call				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_00c6:                                                                        //ldc.i4				0x8
	IL_00cb:            V_0=8;                                                      //stloc				V_0
	IL_00cf:            /*goto IL_0002;*/goto IL_00d4;                              //br				IL_0002
	IL_00d4:            goto IL_0080;                                               //br.s				IL_0080
	IL_00d6:                                                                        //ldc.i4				0x1
	IL_00db:            V_0=1;                                                      //stloc				V_0
	IL_00df:            /*goto IL_0002;*/goto IL_00e4;                              //br				IL_0002
	IL_00e4:                                                                        //ldarg.0
	IL_00e5:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00ea:            Temp_3=Temp_2->Visible;                                     //callvirt				System::Boolean System::Windows::Forms::Control::get_Visible()
	IL_00ef:            if(!Temp_3)goto IL_0101;                                    //brfalse.s				IL_0101
	IL_00f1:                                                                        //ldc.i4				0x3
	IL_00f6:            V_0=3;                                                      //stloc				V_0
	IL_00fa:            /*goto IL_0002;*/goto IL_00ff;                              //br				IL_0002
	IL_00ff:            goto IL_011d;                                               //br.s				IL_011d
	IL_0101:                                                                        //ldarg.0
	IL_0102:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0107:                                                                        //ldnull
	IL_0108:            Temp_4->M_x1(safe_cast<Reflector::IWindow^>(nullptr));      //callvirt				void Root::T_x78::M_x1(Reflector::IWindow^)
	IL_010d:                                                                        //ldc.i4				0x6
	IL_0112:            V_0=6;                                                      //stloc				V_0
	IL_0116:            /*goto IL_0002;*/goto IL_011b;                              //br				IL_0002
	IL_011b:            goto IL_0168;                                               //br.s				IL_0168
	IL_011d:                                                                        //ldarg.0
	IL_011e:                                                                        //ldc.i4.2
	IL_011f:            this->F_x4=safe_cast<Root::T_x68::T_x12>(2);                //stfld				Root::T_x68::T_x12 Root::T_x68 F_x4
	IL_0124:                                                                        //ldarg.0
	IL_0125:            Temp_5=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_012a:                                                                        //ldc.i4.0
	IL_012b:            Temp_5->Visible=false;                                      //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_0130:                                                                        //ldarg.0
	IL_0131:            Temp_6=this->F_x5;                                          //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_0136:                                                                        //ldc.i4.0
	IL_0137:            Temp_6->Visible=false;                                      //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_013c:                                                                        //ldc.i4				0x5
	IL_0141:            V_0=5;                                                      //stloc				V_0
	IL_0145:            /*goto IL_0002;*/goto IL_014a;                              //br				IL_0002
	IL_014a:                                                                        //ldarg.0
	IL_014b:            Temp_11=this->WindowState;                                  //call				System::Windows::Forms::FormWindowState System::Windows::Forms::Form::get_WindowState()
	IL_0150:            if(safe_cast<System::Int32>(Temp_11)!=0)goto IL_0080;       //brtrue				IL_0080
	IL_0155:                                                                        //ldc.i4				0x7
	IL_015a:            V_0=7;                                                      //stloc				V_0
	IL_015e:            /*goto IL_0002;*/goto IL_0163;                              //br				IL_0002
	IL_0163:            goto IL_00a2;                                               //br				IL_00a2
	IL_0168:                                                                        //ldarg.0
	IL_0169:                                                                        //ldc.i4.1
	IL_016a:            this->ResumeLayout(true);                                   //call				void System::Windows::Forms::Control::ResumeLayout(System::Boolean)
	IL_016f:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0174:            return;                                                     //ret

}
inline void Root::T_x68::M_x1(System::Windows::Forms::Control^ A_0)
//Reflector::IWindowManager^::set_Content by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            this->F_x8=A_0;                                             //stfld				System::Windows::Forms::Control^ Root::T_x68 F_x8
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_0=this->F_x8;                                          //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x8
	IL_0010:                                                                        //ldc.i4.3
	IL_0011:            Temp_0->Dock=safe_cast<System::Windows::Forms::DockStyle>(3);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0016:                                                                        //ldarg.0
	IL_0017:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_001c:            this->OnSizeChanged(Temp_1);                                //callvirt				void System::Windows::Forms::Control::OnSizeChanged(System::EventArgs^)
	IL_0021:                                                                        //ldarg.0
	IL_0022:            this->M_x2();                                               //call				void Root::T_x68::M_x2()
	IL_0027:            return;                                                     //ret

}
inline System::Boolean Root::T_x68::M_x1(System::Windows::Forms::Keys A_0)
//System::Windows::Forms::Form^::ProcessDialogKey by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	//local variables.
	Reflector::IWindow^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_3=1;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_0038;case 1:goto IL_000b;case 2:goto IL_011d;};//switch				(IL_0038,IL_000b,IL_011d)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.1
	IL_0026:                                                                        //ldc.i4.s				27
	IL_0028:            if(safe_cast<System::Int32>(A_0)!=27)goto IL_0124;          //bne.un				IL_0124
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_3=0;                                                      //stloc				V_3
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0103;                                               //br				IL_0103
	IL_003801:          try{
	IL_003d:                                                                        //ldc.i4				0x1
	IL_0042:            V_3=1;                                                      //stloc				V_3
	IL_0046:            /*goto IL_004a;*/goto IL_0048;                              //br.s				IL_004a
	IL_0048:            goto IL_0067;                                               //br.s				IL_0067
	IL_004a:                                                                        //ldloc				V_3
	IL_004e:            switch(V_3){case 0:goto IL_0087;case 1:goto IL_0048;case 2:goto IL_0094;case 3:goto IL_00a7;case 4:goto IL_00b4;};//switch				(IL_0087,IL_0048,IL_0094,IL_00a7,IL_00b4)
	IL_0067:            goto IL_0089;                                               //br.s				IL_0089
	IL_0069:                                                                        //ldloc.1
	IL_006a:            Temp_3=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006f:                                                                        //castclass				Reflector::IWindow
	IL_0074:            V_0=safe_cast<Reflector::IWindow^>(Temp_3);                 //stloc.0
	IL_0075:                                                                        //ldloc.0
	IL_0076:                                                                        //ldc.i4.0
	IL_0077:            V_0->Visible=false;                                         //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_007c:                                                                        //ldc.i4				0x0
	IL_0081:            V_3=0;                                                      //stloc				V_3
	IL_0085:            /*goto IL_004a;*/goto IL_0087;                              //br.s				IL_004a
	IL_0087:            goto IL_0089;                                               //br.s				IL_0089
	IL_0089:                                                                        //ldc.i4				0x2
	IL_008e:            V_3=2;                                                      //stloc				V_3
	IL_0092:            /*goto IL_004a;*/goto IL_0094;                              //br.s				IL_004a
	IL_0094:                                                                        //ldloc.1
	IL_0095:            Temp_2=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_009a:            if(Temp_2)goto IL_0069;                                     //brtrue.s				IL_0069
	IL_009c:                                                                        //ldc.i4				0x3
	IL_00a1:            V_3=3;                                                      //stloc				V_3
	IL_00a5:            /*goto IL_004a;*/goto IL_00a7;                              //br.s				IL_004a
	IL_00a7:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_00a9:                                                                        //ldc.i4				0x4
	IL_00ae:            V_3=4;                                                      //stloc				V_3
	IL_00b2:            /*goto IL_004a;*/goto IL_00b4;                              //br.s				IL_004a
	IL_00b4:            goto IL_0122;                                               //leave.s				IL_0122
	                    ;}
	                    finally{
	IL_00b6:            goto IL_00cd;                                               //br.s				IL_00cd
	IL_00b8:                                                                        //ldloc				V_3
	IL_00bc:            switch(V_3){case 0:goto IL_00df;case 1:goto IL_0100;case 2:goto IL_00ed;};//switch				(IL_00df,IL_0100,IL_00ed)
	IL_00cd:                                                                        //ldloc.1
	IL_00ce:                                                                        //isinst				System::IDisposable
	IL_00d3:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00d4:                                                                        //ldc.i4				0x0
	IL_00d9:            V_3=0;                                                      //stloc				V_3
	IL_00dd:            /*goto IL_00b8;*/goto IL_00df;                              //br.s				IL_00b8
	IL_00df:                                                                        //ldloc.2
	IL_00e0:            if(V_2==nullptr)goto IL_0102;                               //brfalse.s				IL_0102
	IL_00e2:                                                                        //ldc.i4				0x2
	IL_00e7:            V_3=2;                                                      //stloc				V_3
	IL_00eb:            /*goto IL_00b8;*/goto IL_00ed;                              //br.s				IL_00b8
	IL_00ed:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_00ef:                                                                        //ldloc.2
	IL_00f0:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00f5:                                                                        //ldc.i4				0x1
	IL_00fa:            V_3=1;                                                      //stloc				V_3
	IL_00fe:            /*goto IL_00b8;*/goto IL_0100;                              //br.s				IL_00b8
	IL_0100:            goto IL_0102;                                               //br.s				IL_0102
	IL_0102:                                                                        //endfinally
	                    ;}
	IL_0103:                                                                        //ldarg.0
	IL_0104:            Temp_0=this->M_x4();                                        //call				Reflector::IWindowCollection^ Root::T_x68::M_x4()
	IL_0109:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_010e:            V_1=Temp_1;                                                 //stloc.1
	IL_010f:                                                                        //ldc.i4				0x2
	IL_0114:            V_3=2;                                                      //stloc				V_3
	IL_0118:            /*goto IL_000d;*/goto IL_011d;                              //br				IL_000d
	IL_011d:            /*goto IL_003d;*/goto IL_003801;                            //br				IL_003d
	IL_0122:                                                                        //ldc.i4.1
	IL_0123:            return true;                                                //ret
	IL_0124:                                                                        //ldarg.0
	IL_0125:                                                                        //ldarg.1
	IL_0126:            Temp_4=System::Windows::Forms::Form::ProcessDialogKey(A_0); //call				System::Boolean System::Windows::Forms::Form::ProcessDialogKey(System::Windows::Forms::Keys)
	IL_012b:            return Temp_4;                                              //ret

}
inline void Root::T_x68::M_x1(System::Windows::Forms::Message% A_0)
//System::Windows::Forms::Form^::WndProc by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::IntPtr Temp_1 = (System::IntPtr)0;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	array<System::Char>^ Temp_5 = nullptr;
	System::IntPtr Temp_6 = (System::IntPtr)0;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	Root::T_x72^ Temp_9 = nullptr;
	System::EventArgs^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Boolean Temp_12 = false;
	System::IntPtr Temp_13 = (System::IntPtr)0;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	//local variables.
	Root::T_x68::T_x2 V_0;
	array<System::Char>^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	Root::T_x72^ V_3 = nullptr;
	System::IntPtr V_4 = (System::IntPtr)0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_5=4;                                                      //stloc				V_5
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0036;                                               //br.s				IL_0036
	IL_000d:                                                                        //ldloc				V_5
	IL_0011:            switch(V_5){case 0:goto IL_00f3;case 1:goto IL_013d;case 2:goto IL_00d6;case 3:goto IL_004e;case 4:goto IL_000b;case 5:goto IL_010a;case 6:goto IL_0125;case 7:goto IL_00b2;};//switch				(IL_00f3,IL_013d,IL_00d6,IL_004e,IL_000b,IL_010a,IL_0125,IL_00b2)
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_14=A_0.Msg;                                            //call				System::Int32 System::Windows::Forms::Message::get_Msg()
	IL_003c:                                                                        //ldc.i4.s				74
	IL_003e:            if(Temp_14!=74)goto IL_0117;                                //bne.un				IL_0117
	IL_0043:                                                                        //ldc.i4				0x3
	IL_0048:            V_5=3;                                                      //stloc				V_5
	IL_004c:            /*goto IL_000d;*/goto IL_004e;                              //br.s				IL_000d
	IL_004e:            goto IL_0050;                                               //br.s				IL_0050
	IL_0050:                                                                        //ldarg.1
	IL_0051:                                                                        //ldtoken				Root::T_x68::T_x2
	IL_0056:            Temp_2=Root::T_x68::T_x2::typeid;                           //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_005b:            Temp_3=A_0.GetLParam(Temp_2);                               //call				System::Object^ System::Windows::Forms::Message::GetLParam(System::Type^)
	IL_0060:                                                                        //unbox				Root::T_x68::T_x2
	IL_0065:                                                                        //ldobj				Root::T_x68::T_x2
	IL_006a:            V_0=safe_cast<Root::T_x68::T_x2>(Temp_3);                   //stloc.0
	IL_006b:                                                                        //ldloca.s				V_0
	IL_006d:            Temp_4=V_0.F_x2;                                            //ldfld				System::Int32 Root::T_x68::T_x2 F_x2
	IL_0072:                                                                        //ldc.i4.2
	IL_0073:                                                                        //div
	IL_0074:                                                                        //conv.ovf.u4
	IL_0075:            Temp_5=gcnew array<System::Char>(safe_cast<System::UInt32>((Temp_4 / 2)));//newarr				System::Char
	IL_007a:            V_1=Temp_5;                                                 //stloc.1
	IL_007b:                                                                        //ldloca.s				V_0
	IL_007d:            Temp_6=V_0.F_x12;                                           //ldfld				System::IntPtr Root::T_x68::T_x2 F_x12
	IL_0082:                                                                        //ldloc.1
	IL_0083:                                                                        //ldc.i4.0
	IL_0084:                                                                        //ldloc.1
	IL_0085:            Temp_7=V_1->Length;                                         //ldlen
	IL_0086:                                                                        //conv.i4
	IL_0087:            System::Runtime::InteropServices::Marshal::Copy(Temp_6,V_1,safe_cast<System::Int32>(0),Temp_7);//call				void System::Runtime::InteropServices::Marshal::Copy(System::IntPtr,array<System::Char>^,System::Int32,System::Int32)
	IL_008c:                                                                        //ldloc.1
	IL_008d:            Temp_8=gcnew System::String(V_1);                           //newobj				void System::String::.ctor(array<System::Char>^)
	IL_0092:            V_2=Temp_8;                                                 //stloc.2
	IL_0093:                                                                        //ldloc.2
	IL_0094:            Temp_9=gcnew Root::T_x72(V_2);                              //newobj				void Root::T_x72::.ctor(System::String^)
	IL_0099:            V_3=Temp_9;                                                 //stloc.3
	IL_009a:                                                                        //ldarg.0
	IL_009b:                                                                        //ldloc.3
	IL_009c:            this->M_x1(V_3);                                            //callvirt				void Root::T_x68::M_x1(Root::T_x72^)
	IL_00a1:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_00a3:                                                                        //break
	IL_00a4:                                                                        //ldc.i4				0x7
	IL_00a9:            V_5=7;                                                      //stloc				V_5
	IL_00ad:            /*goto IL_000d;*/goto IL_00b2;                              //br				IL_000d
	IL_00b2:                                                                        //ldarg.1
	IL_00b3:                                                                        //ldloc.3
	IL_00b4:            Temp_12=V_3->M_x1();                                        //callvirt				System::Boolean Root::T_x72::M_x1()
	IL_00b9:            if(Temp_12)goto IL_00d7;                                    //brtrue.s				IL_00d7
	IL_00bb:            goto IL_00da;                                               //br.s				IL_00da
	IL_00bd:                                                                        //ldarg.0
	IL_00be:            Temp_10=System::EventArgs::Empty;                           //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_00c3:            this->OnVisibleChanged(Temp_10);                            //callvirt				void System::Windows::Forms::Control::OnVisibleChanged(System::EventArgs^)
	IL_00c8:                                                                        //ldc.i4				0x2
	IL_00cd:            V_5=2;                                                      //stloc				V_5
	IL_00d1:            /*goto IL_000d;*/goto IL_00d6;                              //br				IL_000d
	IL_00d6:            return;                                                     //ret
	IL_00d7:                                                                        //ldc.i4.1
	IL_00d8:            Temp_15=1;goto IL_010c;                                     //br.s				IL_010c
	IL_00da:                                                                        //ldc.i4.0
	IL_00db:            Temp_15=0;goto IL_010c;                                     //br.s				IL_010c
	IL_00dd:                                                                        //ldarg.1
	IL_00de:            Temp_1=A_0.WParam;                                          //call				System::IntPtr System::Windows::Forms::Message::get_WParam()
	IL_00e3:            V_4=Temp_1;                                                 //stloc.s				V_4
	IL_00e5:                                                                        //ldc.i4				0x0
	IL_00ea:            V_5=0;                                                      //stloc				V_5
	IL_00ee:            /*goto IL_000d;*/goto IL_00f3;                              //br				IL_000d
	IL_00f3:                                                                        //ldloca.s				V_4
	IL_00f5:            Temp_0=V_4.ToInt32();                                       //call				System::Int32 System::IntPtr::ToInt32()
	IL_00fa:            if(Temp_0!=0)goto IL_013f;                                  //brtrue.s				IL_013f
	IL_00fc:                                                                        //ldc.i4				0x5
	IL_0101:            V_5=5;                                                      //stloc				V_5
	IL_0105:            /*goto IL_000d;*/goto IL_010a;                              //br				IL_000d
	IL_010a:            goto IL_00bd;                                               //br.s				IL_00bd
	IL_010c:            Temp_13=safe_cast<System::IntPtr>(Temp_15);/*warning ! semantic stack doesn't empty at joint !;*///call				System::IntPtr System::IntPtr::op_Explicit(System::Int32)
	IL_0111:            A_0.Result=Temp_13;                                         //call				void System::Windows::Forms::Message::set_Result(System::IntPtr)
	IL_0116:            return;                                                     //ret
	IL_0117:                                                                        //ldc.i4				0x6
	IL_011c:            V_5=6;                                                      //stloc				V_5
	IL_0120:            /*goto IL_000d;*/goto IL_0125;                              //br				IL_000d
	IL_0125:                                                                        //ldarg.1
	IL_0126:            Temp_11=A_0.Msg;                                            //call				System::Int32 System::Windows::Forms::Message::get_Msg()
	IL_012b:                                                                        //ldc.i4.s				24
	IL_012d:            if(Temp_11!=24)goto IL_013f;                                //bne.un.s				IL_013f
	IL_012f:                                                                        //ldc.i4				0x1
	IL_0134:            V_5=1;                                                      //stloc				V_5
	IL_0138:            /*goto IL_000d;*/goto IL_013d;                              //br				IL_000d
	IL_013d:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_013f:                                                                        //ldarg.0
	IL_0140:                                                                        //ldarg.1
	IL_0141:            System::Windows::Forms::Form::WndProc(A_0);                 //call				void System::Windows::Forms::Form::WndProc(System::Windows::Forms::Message%)
	IL_0146:            return;                                                     //ret

}
inline System::Boolean Root::T_x68::M_x1(System::Windows::Forms::Message% A_0,System::Windows::Forms::Keys A_1)
//System::Windows::Forms::Form^::ProcessCmdKey by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Windows::Forms::Control^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0048;case 2:goto IL_0064;case 3:goto IL_0039;};//switch				(IL_000b,IL_0048,IL_0064,IL_0039)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_3=this->F_x13;                                         //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x13
	IL_002c:            if(Temp_3==nullptr)goto IL_0066;                            //brfalse.s				IL_0066
	IL_002e:                                                                        //ldc.i4				0x3
	IL_0033:            V_0=3;                                                      //stloc				V_0
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_003d;                                               //br.s				IL_003d
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:            return true;                                                //ret
	IL_003d:                                                                        //ldc.i4				0x1
	IL_0042:            V_0=1;                                                      //stloc				V_0
	IL_0046:            /*goto IL_000d;*/goto IL_0048;                              //br.s				IL_000d
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x13
	IL_004e:                                                                        //ldarg.1
	IL_004f:            Temp_1=Temp_0->PreProcessMessage(A_0);                      //callvirt				System::Boolean System::Windows::Forms::Control::PreProcessMessage(System::Windows::Forms::Message%)
	IL_0054:            if(!Temp_1)goto IL_0066;                                    //brfalse.s				IL_0066
	IL_0056:            goto IL_0059;                                               //br.s				IL_0059
	IL_0058:                                                                        //break
	IL_0059:                                                                        //ldc.i4				0x2
	IL_005e:            V_0=2;                                                      //stloc				V_0
	IL_0062:            /*goto IL_000d;*/goto IL_0064;                              //br.s				IL_000d
	IL_0064:            goto IL_003b;                                               //br.s				IL_003b
	IL_0066:                                                                        //ldarg.0
	IL_0067:                                                                        //ldarg.1
	IL_0068:                                                                        //ldarg.2
	IL_0069:            Temp_2=System::Windows::Forms::Form::ProcessCmdKey(A_0,A_1);//call				System::Boolean System::Windows::Forms::Form::ProcessCmdKey(System::Windows::Forms::Message%,System::Windows::Forms::Keys)
	IL_006e:            return Temp_2;                                              //ret

}
inline void Root::T_x68::M_x1(Root::T_x72^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x73^ Temp_0 = nullptr;
	Root::T_x73^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x73^ Root::T_x68 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x73^ Root::T_x68 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x73::Invoke(System::Object^,Root::T_x72^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x68::M_x1(Root::T_x73^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x73^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x73^ Root::T_x68 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x73
	IL_0012:            this->F_x1=safe_cast<Root::T_x73^>(Temp_1);                 //stfld				Root::T_x73^ Root::T_x68 F_x1
	IL_0017:            return;                                                     //ret

}
inline Reflector::IConfiguration^ Root::T_x68::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x68 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x68::M_x12(System::EventHandler^ A_0)
//Reflector::IWindowManager^::add_Load by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Form::Load += A_0;                  //call				void System::Windows::Forms::Form::add_Load(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x68::M_x12(System::String^ A_0)
//Reflector::IWindowManager^::ShowMessage by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Windows::Forms::DialogResult Temp_2 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:                                                                        //ldstr				L"\x611F\x5221\x5423\x4A25\x4127\x4929\x4D2B\x5A2D\x592F\x5D31\x5A33\x7835\x5937\x5739\x593B"
	IL_0010:                                                                        //ldloc				V_0
	IL_0014:            Temp_0=a(L"\x611F\x5221\x5423\x4A25\x4127\x4929\x4D2B\x5A2D\x592F\x5D31\x5A33\x7835\x5937\x5739\x593B",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0019:            Temp_1=Root::T_x128::M_x1(Temp_0);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_001e:            Temp_2=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(this),A_0,Temp_1);//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^)
	IL_0023:                                                                        //pop
	IL_0024:            return;                                                     //ret

}
inline void Root::T_x68::M_x13()
//Reflector::IWindowManager^::Close by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            System::Windows::Forms::Form::Close();                      //call				void System::Windows::Forms::Form::Close()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x68::M_x13(System::EventHandler^ A_0)
//Reflector::IWindowManager^::remove_Closed by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Form::Closed -= A_0;                //call				void System::Windows::Forms::Form::remove_Closed(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline System::Windows::Forms::Control^ Root::T_x68::M_x15()
//Reflector::IWindowManager^::get_CommandBarManager by M_x15
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x68::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control::ControlCollection^ Temp_0 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_1 = nullptr;
	System::Windows::Forms::Splitter^ Temp_2 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_3 = nullptr;
	Root::T_x78^ Temp_4 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_5 = nullptr;
	System::Windows::Forms::Control^ Temp_6 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_7 = nullptr;
	System::Windows::Forms::Control^ Temp_8 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0009:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::Control::ControlCollection::Clear()
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_1=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_2=this->F_x5;                                          //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_001a:            Temp_1->Add(safe_cast<System::Windows::Forms::Control^>(Temp_2));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_3=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_002b:            Temp_3->Add(safe_cast<System::Windows::Forms::Control^>(Temp_4));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_5=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_6=this->F_x8;                                          //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x8
	IL_003c:            Temp_5->Add(Temp_6);                                        //callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_7=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_8=this->F_x13;                                         //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x13
	IL_004d:            Temp_7->Add(Temp_8);                                        //callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0052:            return;                                                     //ret

}
inline void Root::T_x68::M_x2(System::EventHandler^ A_0)
//Reflector::IWindowManager^::remove_Load by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Form::Load -= A_0;                  //call				void System::Windows::Forms::Form::remove_Load(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x68::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Root::T_x78^ Temp_2 = nullptr;
	Reflector::IWindow^ Temp_3 = nullptr;
	System::Windows::Forms::Control^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Root::T_x78^ Temp_6 = nullptr;
	Reflector::IWindowCollection^ Temp_7 = nullptr;
	Reflector::IWindow^ Temp_8 = nullptr;
	Root::T_x78^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	Root::T_x78^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Windows::Forms::Splitter^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Root::T_x78^ Temp_16 = nullptr;
	Root::T_x78^ Temp_17 = nullptr;
	System::Windows::Forms::Splitter^ Temp_18 = nullptr;
	System::EventArgs^ Temp_19 = nullptr;
	System::Windows::Forms::FormWindowState Temp_20 = (System::Windows::Forms::FormWindowState)0;
	Root::T_x78^ Temp_21 = nullptr;
	Root::T_x78^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	//local variables.
	Reflector::IWindow^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_003b;                                               //br.s				IL_003b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_01f9;case 1:goto IL_018f;case 2:goto IL_0069;case 3:goto IL_00ad;case 4:goto IL_012c;case 5:goto IL_009a;case 6:goto IL_00d0;case 7:goto IL_01c6;case 8:goto IL_01e0;case 9:goto IL_0077;case 10:goto IL_010e;case 11:goto IL_0169;};//switch				(IL_01f9,IL_018f,IL_0069,IL_00ad,IL_012c,IL_009a,IL_00d0,IL_01c6,IL_01e0,IL_0077,IL_010e,IL_0169)
	IL_003b:                                                                        //ldc.i4.5
	IL_003c:                                                                        //dup
	IL_003d:                                                                        //dup
	IL_003e:                                                                        //ldc.i4.6
	IL_003f:                                                                        //add
	IL_0040:                                                                        //bgt				IL_003c
	IL_0045:                                                                        //pop
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_0=this->M_x5();                                        //call				System::Windows::Forms::Control^ Root::T_x68::M_x5()
	IL_004c:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0051:                                                                        //pop
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_2=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0058:            Temp_3=Temp_2->M_x2();                                      //callvirt				Reflector::IWindow^ Root::T_x78::M_x2()
	IL_005d:            V_0=Temp_3;                                                 //stloc.0
	IL_005e:                                                                        //ldc.i4				0x2
	IL_0063:            V_1=2;                                                      //stloc				V_1
	IL_0067:            /*goto IL_0002;*/goto IL_0069;                              //br.s				IL_0002
	IL_0069:                                                                        //ldloc.0
	IL_006a:            if(V_0==nullptr)goto IL_00d2;                               //brfalse.s				IL_00d2
	IL_006c:                                                                        //ldc.i4				0x9
	IL_0071:            V_1=9;                                                      //stloc				V_1
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:            goto IL_016e;                                               //br				IL_016e
	IL_007c:                                                                        //ldarg.0
	IL_007d:            Temp_16=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0082:                                                                        //ldc.i4				0x12c
	IL_0087:            Temp_16->Width=300;                                         //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_008c:                                                                        //ldc.i4				0x5
	IL_0091:            V_1=5;                                                      //stloc				V_1
	IL_0095:            /*goto IL_0002;*/goto IL_009a;                              //br				IL_0002
	IL_009a:            goto IL_0194;                                               //br				IL_0194
	IL_009f:                                                                        //ldc.i4				0x3
	IL_00a4:            V_1=3;                                                      //stloc				V_1
	IL_00a8:            /*goto IL_0002;*/goto IL_00ad;                              //br				IL_0002
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_9=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00b3:            Temp_10=Temp_9->Width;                                      //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_00b8:                                                                        //ldc.i4				0x12c
	IL_00bd:            if(Temp_10>=300)goto IL_0194;                               //bge				IL_0194
	IL_00c2:                                                                        //ldc.i4				0x6
	IL_00c7:            V_1=6;                                                      //stloc				V_1
	IL_00cb:            /*goto IL_0002;*/goto IL_00d0;                              //br				IL_0002
	IL_00d0:            goto IL_007c;                                               //br.s				IL_007c
	IL_00d2:                                                                        //ldarg.0
	IL_00d3:            this->SuspendLayout();                                      //call				void System::Windows::Forms::Control::SuspendLayout()
	IL_00d8:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_00dd:                                                                        //ldarg.0
	IL_00de:            Temp_4=this->M_x5();                                        //call				System::Windows::Forms::Control^ Root::T_x68::M_x5()
	IL_00e3:            Temp_5=Temp_4->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_00e8:                                                                        //pop
	IL_00e9:                                                                        //ldarg.0
	IL_00ea:            Temp_6=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_00ef:                                                                        //ldarg.0
	IL_00f0:            Temp_7=this->M_x4();                                        //call				Reflector::IWindowCollection^ Root::T_x68::M_x4()
	IL_00f5:                                                                        //ldarg.1
	IL_00f6:            Temp_8=Temp_7[A_0];                                         //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_00fb:            Temp_6->M_x1(Temp_8);                                       //callvirt				void Root::T_x78::M_x1(Reflector::IWindow^)
	IL_0100:                                                                        //ldc.i4				0xa
	IL_0105:            V_1=10;                                                     //stloc				V_1
	IL_0109:            /*goto IL_0002;*/goto IL_010e;                              //br				IL_0002
	IL_010e:                                                                        //ldarg.0
	IL_010f:            Temp_22=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0114:            Temp_23=Temp_22->Visible;                                   //callvirt				System::Boolean System::Windows::Forms::Control::get_Visible()
	IL_0119:            if(Temp_23)goto IL_01fe;                                    //brtrue				IL_01fe
	IL_011e:                                                                        //ldc.i4				0x4
	IL_0123:            V_1=4;                                                      //stloc				V_1
	IL_0127:            /*goto IL_0002;*/goto IL_012c;                              //br				IL_0002
	IL_012c:            goto IL_01cb;                                               //br				IL_01cb
	IL_0131:                                                                        //ldarg.0
	IL_0132:            Temp_17=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0137:                                                                        //ldc.i4.1
	IL_0138:            Temp_17->Visible=true;                                      //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_013d:                                                                        //ldarg.0
	IL_013e:            Temp_18=this->F_x5;                                         //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_0143:                                                                        //ldc.i4.1
	IL_0144:            Temp_18->Visible=true;                                      //callvirt				void System::Windows::Forms::Control::set_Visible(System::Boolean)
	IL_0149:                                                                        //ldarg.0
	IL_014a:                                                                        //ldc.i4.0
	IL_014b:            this->F_x4=safe_cast<Root::T_x68::T_x12>(0);                //stfld				Root::T_x68::T_x12 Root::T_x68 F_x4
	IL_0150:                                                                        //ldarg.0
	IL_0151:            Temp_19=System::EventArgs::Empty;                           //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0156:            this->OnSizeChanged(Temp_19);                               //callvirt				void System::Windows::Forms::Control::OnSizeChanged(System::EventArgs^)
	IL_015b:                                                                        //ldc.i4				0xb
	IL_0160:            V_1=11;                                                     //stloc				V_1
	IL_0164:            /*goto IL_0002;*/goto IL_0169;                              //br				IL_0002
	IL_0169:            goto IL_01fe;                                               //br				IL_01fe
	IL_016e:                                                                        //ldarg.0
	IL_016f:            Temp_21=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0174:                                                                        //ldnull
	IL_0175:            Temp_21->M_x1(safe_cast<Reflector::IWindow^>(nullptr));     //callvirt				void Root::T_x78::M_x1(Reflector::IWindow^)
	IL_017a:                                                                        //ldloc.0
	IL_017b:                                                                        //ldc.i4.0
	IL_017c:            V_0->Visible=false;                                         //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0181:                                                                        //ldc.i4				0x1
	IL_0186:            V_1=1;                                                      //stloc				V_1
	IL_018a:            /*goto IL_0002;*/goto IL_018f;                              //br				IL_0002
	IL_018f:            goto IL_00d2;                                               //br				IL_00d2
	IL_0194:                                                                        //ldarg.0
	IL_0195:                                                                        //dup
	IL_0196:            Temp_11=this->Width;                                        //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_019b:                                                                        //ldarg.0
	IL_019c:            Temp_12=this->F_x9;                                         //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_01a1:            Temp_13=Temp_12->Width;                                     //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_01a6:                                                                        //ldarg.0
	IL_01a7:            Temp_14=this->F_x5;                                         //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_01ac:            Temp_15=Temp_14->Width;                                     //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_01b1:                                                                        //add
	IL_01b2:                                                                        //add
	IL_01b3:            this->Width=(Temp_11 + (Temp_13 + Temp_15));                //call				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_01b8:                                                                        //ldc.i4				0x7
	IL_01bd:            V_1=7;                                                      //stloc				V_1
	IL_01c1:            /*goto IL_0002;*/goto IL_01c6;                              //br				IL_0002
	IL_01c6:            goto IL_0131;                                               //br				IL_0131
	IL_01cb:                                                                        //ldarg.0
	IL_01cc:                                                                        //ldc.i4.2
	IL_01cd:            this->F_x4=safe_cast<Root::T_x68::T_x12>(2);                //stfld				Root::T_x68::T_x12 Root::T_x68 F_x4
	IL_01d2:                                                                        //ldc.i4				0x8
	IL_01d7:            V_1=8;                                                      //stloc				V_1
	IL_01db:            /*goto IL_0002;*/goto IL_01e0;                              //br				IL_0002
	IL_01e0:                                                                        //ldarg.0
	IL_01e1:            Temp_20=this->WindowState;                                  //call				System::Windows::Forms::FormWindowState System::Windows::Forms::Form::get_WindowState()
	IL_01e6:            if(safe_cast<System::Int32>(Temp_20)!=0)goto IL_0131;       //brtrue				IL_0131
	IL_01eb:                                                                        //ldc.i4				0x0
	IL_01f0:            V_1=0;                                                      //stloc				V_1
	IL_01f4:            /*goto IL_0002;*/goto IL_01f9;                              //br				IL_0002
	IL_01f9:            goto IL_009f;                                               //br				IL_009f
	IL_01fe:                                                                        //ldarg.0
	IL_01ff:                                                                        //ldc.i4.1
	IL_0200:            this->ResumeLayout(true);                                   //call				void System::Windows::Forms::Control::ResumeLayout(System::Boolean)
	IL_0205:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_020a:            return;                                                     //ret

}
inline void Root::T_x68::M_x2(System::Windows::Forms::Control^ A_0)
//Reflector::IWindowManager^::set_CommandBarManager by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x13=A_0;                                            //stfld				System::Windows::Forms::Control^ Root::T_x68 F_x13
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->M_x2();                                               //call				void Root::T_x68::M_x2()
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x68::M_x2(Root::T_x73^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x73^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x73^ Root::T_x68 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x73
	IL_0012:            this->F_x1=safe_cast<Root::T_x73^>(Temp_1);                 //stfld				Root::T_x73^ Root::T_x68 F_x1
	IL_0017:            return;                                                     //ret

}
inline Reflector::IWindowCollection^ Root::T_x68::M_x4()
//Reflector::IWindowManager^::get_Windows by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x68::T_x13^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x68::T_x13^ Root::T_x68 F_x12
	IL_0006:            return safe_cast<Reflector::IWindowCollection^>(Temp_0);    //ret

}
inline System::Windows::Forms::Control^ Root::T_x68::M_x5()
//Reflector::IWindowManager^::get_Content by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x68::M_x8()
//Reflector::IWindowManager^::get_Visible by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::Control::Visible;            //call				System::Boolean System::Windows::Forms::Control::get_Visible()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x68::M_x9()
//Reflector::IWindowManager^::Activate by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            System::Windows::Forms::Form::Activate();                   //call				void System::Windows::Forms::Form::Activate()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x68::OnLocationChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x68::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            System::Windows::Forms::Form::OnLocationChanged(e);         //call				void System::Windows::Forms::Form::OnLocationChanged(System::EventArgs^)
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x68::OnSizeChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	System::Windows::Forms::FormWindowState Temp_1 = (System::Windows::Forms::FormWindowState)0;
	Root::T_x68::T_x12 Temp_2 = (Root::T_x68::T_x12)0;
	System::Windows::Forms::Control^ Temp_3 = nullptr;
	System::Drawing::Size Temp_4;
	System::Int32 Temp_5 = 0;
	System::Windows::Forms::Splitter^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Root::T_x78^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Windows::Forms::Control^ Temp_10 = nullptr;
	System::Drawing::Size Temp_11;
	System::Int32 Temp_12 = 0;
	//local variables.
	Root::T_x68::T_x12 V_0 = (Root::T_x68::T_x12)0;
	System::Drawing::Size V_1;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0067;case 1:goto IL_0116;case 2:goto IL_00b0;case 3:goto IL_0050;case 4:goto IL_00c6;case 5:goto IL_00dc;case 6:goto IL_00a0;case 7:goto IL_0090;case 8:goto IL_00f6;case 9:goto IL_015a;};//switch				(IL_0067,IL_0116,IL_00b0,IL_0050,IL_00c6,IL_00dc,IL_00a0,IL_0090,IL_00f6,IL_015a)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldarg.1
	IL_0035:            System::Windows::Forms::Form::OnSizeChanged(e);             //call				void System::Windows::Forms::Form::OnSizeChanged(System::EventArgs^)
	IL_003a:                                                                        //ldc.i4.3
	IL_003b:                                                                        //dup
	IL_003c:                                                                        //dup
	IL_003d:                                                                        //ldc.i4.3
	IL_003e:                                                                        //sub
	IL_003f:                                                                        //blt				IL_003b
	IL_0044:                                                                        //pop
	IL_0045:                                                                        //ldc.i4				0x3
	IL_004a:            V_2=3;                                                      //stloc				V_2
	IL_004e:            /*goto IL_0002;*/goto IL_0050;                              //br.s				IL_0002
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_1=this->WindowState;                                   //call				System::Windows::Forms::FormWindowState System::Windows::Forms::Form::get_WindowState()
	IL_0056:                                                                        //ldc.i4.1
	IL_0057:            if(safe_cast<System::Int32>(Temp_1)==1)goto IL_015f;        //beq				IL_015f
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_2=0;                                                      //stloc				V_2
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_10=this->F_x8;                                         //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x8
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_11=this->ClientSize;                                   //call				System::Drawing::Size System::Windows::Forms::Form::get_ClientSize()
	IL_0075:            V_1=Temp_11;                                                //stloc.1
	IL_0076:                                                                        //ldloca.s				V_1
	IL_0078:            Temp_12=V_1.Width;                                          //call				System::Int32 System::Drawing::Size::get_Width()
	IL_007d:            Temp_10->Width=Temp_12;                                     //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_0082:                                                                        //ldc.i4				0x7
	IL_0087:            V_2=7;                                                      //stloc				V_2
	IL_008b:            /*goto IL_0002;*/goto IL_0090;                              //br				IL_0002
	IL_0090:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_0092:                                                                        //ldc.i4				0x6
	IL_0097:            V_2=6;                                                      //stloc				V_2
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_00a2:                                                                        //ldc.i4				0x2
	IL_00a7:            V_2=2;                                                      //stloc				V_2
	IL_00ab:            /*goto IL_0002;*/goto IL_00b0;                              //br				IL_0002
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:            Temp_0=this->F_x8;                                          //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x8
	IL_00b6:            if(Temp_0==nullptr)goto IL_00c8;                            //brfalse.s				IL_00c8
	IL_00b8:                                                                        //ldc.i4				0x4
	IL_00bd:            V_2=4;                                                      //stloc				V_2
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:            this->M_x1();                                               //call				void Root::T_x68::M_x1()
	IL_00ce:                                                                        //ldc.i4				0x5
	IL_00d3:            V_2=5;                                                      //stloc				V_2
	IL_00d7:            /*goto IL_0002;*/goto IL_00dc;                              //br				IL_0002
	IL_00dc:            goto IL_015f;                                               //br				IL_015f
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:            Temp_2=this->F_x4;                                          //ldfld				Root::T_x68::T_x12 Root::T_x68 F_x4
	IL_00e7:            V_0=Temp_2;                                                 //stloc.0
	IL_00e8:                                                                        //ldc.i4				0x8
	IL_00ed:            V_2=8;                                                      //stloc				V_2
	IL_00f1:            /*goto IL_0002;*/goto IL_00f6;                              //br				IL_0002
	IL_00f6:                                                                        //ldloc.0
	IL_00f7:            switch(safe_cast<System::Int32>(V_0)){case 0:goto IL_011b;case 1:goto IL_0069;case 2:goto IL_00c8;};//switch				(IL_011b,IL_0069,IL_00c8)
	IL_0108:                                                                        //ldc.i4				0x1
	IL_010d:            V_2=1;                                                      //stloc				V_2
	IL_0111:            /*goto IL_0002;*/goto IL_0116;                              //br				IL_0002
	IL_0116:            goto IL_0092;                                               //br				IL_0092
	IL_011b:                                                                        //ldarg.0
	IL_011c:            Temp_3=this->F_x8;                                          //ldfld				System::Windows::Forms::Control^ Root::T_x68 F_x8
	IL_0121:                                                                        //ldarg.0
	IL_0122:            Temp_4=this->ClientSize;                                    //call				System::Drawing::Size System::Windows::Forms::Form::get_ClientSize()
	IL_0127:            V_1=Temp_4;                                                 //stloc.1
	IL_0128:                                                                        //ldloca.s				V_1
	IL_012a:            Temp_5=V_1.Width;                                           //call				System::Int32 System::Drawing::Size::get_Width()
	IL_012f:                                                                        //ldarg.0
	IL_0130:            Temp_6=this->F_x5;                                          //ldfld				System::Windows::Forms::Splitter^ Root::T_x68 F_x5
	IL_0135:            Temp_7=Temp_6->Width;                                       //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_013a:                                                                        //sub
	IL_013b:                                                                        //ldarg.0
	IL_013c:            Temp_8=this->F_x9;                                          //ldfld				Root::T_x78^ Root::T_x68 F_x9
	IL_0141:            Temp_9=Temp_8->Width;                                       //callvirt				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_0146:                                                                        //sub
	IL_0147:            Temp_3->Width=((Temp_5 - Temp_7) - Temp_9);                 //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_014c:                                                                        //ldc.i4				0x9
	IL_0151:            V_2=9;                                                      //stloc				V_2
	IL_0155:            /*goto IL_0002;*/goto IL_015a;                              //br				IL_0002
	IL_015a:            goto IL_00c8;                                               //br				IL_00c8
	IL_015f:            return;                                                     //ret

}
inline Root::T_x68::T_x2::T_x2(System::IntPtr A_0,System::Int32 A_1,System::IntPtr A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::IntPtr Root::T_x68::T_x2 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.2
	IL_0009:            this->F_x2=A_1;                                             //stfld				System::Int32 Root::T_x68::T_x2 F_x2
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldarg.3
	IL_0010:            this->F_x12=A_2;                                            //stfld				System::IntPtr Root::T_x68::T_x2 F_x12
	IL_0015:            return;                                                     //ret

}
inline Root::T_x68::T_x13::T_x13(Root::T_x68^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0006:            this->F_x2=Temp_0;                                          //stfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x1=A_0;                                             //stfld				Root::T_x68^ Root::T_x68::T_x13 F_x1
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x68::T_x13::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Collections::Hashtable::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x68::T_x13::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Collections::ICollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0006:            Temp_1=Temp_0->Values;                                      //callvirt				System::Collections::ICollection^ System::Collections::Hashtable::get_Values()
	IL_000b:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0010:            return Temp_2;                                              //ret

}
inline Reflector::IWindow^ Root::T_x68::T_x13::M_x1(System::String^ A_0)
//Reflector::IWindowCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_000c:                                                                        //castclass				Reflector::IWindow
	IL_0011:            return safe_cast<Reflector::IWindow^>(Temp_1);              //ret

}
inline Reflector::IWindow^ Root::T_x68::T_x13::M_x1(System::String^ A_0,System::Windows::Forms::Control^ A_1,System::String^ A_2)
//Reflector::IWindowCollection^::Add by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Windows::Forms::Control^>^ Temp_0 = nullptr;
	Root::T_x68^ Temp_1 = nullptr;
	Root::T_x68::T_x1^ Temp_2 = nullptr;
	System::Collections::Hashtable^ Temp_3 = nullptr;
	//local variables.
	array<System::Windows::Forms::Control^>^ V_0 = nullptr;
	Root::T_x68::T_x1^ V_1 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldc.i4.1
	IL_0004:            Temp_0=gcnew array<System::Windows::Forms::Control^>(1);    //newarr				System::Windows::Forms::Control
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldloc.0
	IL_000b:                                                                        //ldc.i4.0
	IL_000c:                                                                        //ldarg.2
	IL_000d:            V_0[0]=A_1;                                                 //stelem.ref
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x68^ Root::T_x68::T_x13 F_x1
	IL_0014:                                                                        //ldarg.1
	IL_0015:                                                                        //ldarg.2
	IL_0016:                                                                        //ldarg.3
	IL_0017:            Temp_2=gcnew Root::T_x68::T_x1(Temp_1,A_0,A_1,A_2);         //newobj				void Root::T_x68::T_x1::.ctor(Root::T_x68^,System::String^,System::Windows::Forms::Control^,System::String^)
	IL_001c:            V_1=Temp_2;                                                 //stloc.1
	IL_001d:                                                                        //ldarg.0
	IL_001e:            Temp_3=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0023:                                                                        //ldarg.1
	IL_0024:                                                                        //ldloc.1
	IL_0025:            Temp_3->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_1));//callvirt				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_002a:                                                                        //ldloc.1
	IL_002b:            return safe_cast<Reflector::IWindow^>(V_1);                 //ret

}
inline void Root::T_x68::T_x13::M_x2(System::String^ A_0)
//Reflector::IWindowCollection^::Remove by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Remove(safe_cast<System::Object^>(A_0));            //callvirt				void System::Collections::Hashtable::Remove(System::Object^)
	IL_000c:            return;                                                     //ret

}
inline System::Int32 Root::T_x68::T_x13::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::Hashtable::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x68::T_x13::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Collections::Hashtable::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x68::T_x13::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::Hashtable^ Root::T_x68::T_x13 F_x2
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Collections::Hashtable::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x68::T_x1::T_x1(Root::T_x68^ A_0,System::String^ A_1,System::Windows::Forms::Control^ A_2,System::String^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x68^ Root::T_x68::T_x1 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::String^ Root::T_x68::T_x1 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.3
	IL_0016:            this->F_x12=A_2;                                            //stfld				System::Windows::Forms::Control^ Root::T_x68::T_x1 F_x12
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.s				A_3
	IL_001e:            this->F_x13=A_3;                                            //stfld				System::String^ Root::T_x68::T_x1 F_x13
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldc.i4.0
	IL_0025:            this->F_x8=false;                                           //stfld				System::Boolean Root::T_x68::T_x1 F_x8
	IL_002a:            return;                                                     //ret

}
inline System::String^ Root::T_x68::T_x1::M_x1()
//Reflector::IWindow^::get_Caption by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::String^ Root::T_x68::T_x1 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x68::T_x1::M_x1(System::Boolean A_0)
//Reflector::IWindow^::set_Visible by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Root::T_x68^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Root::T_x68^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0085;case 2:goto IL_0041;case 3:goto IL_005f;case 4:goto IL_009b;};//switch				(IL_000b,IL_0085,IL_0041,IL_005f,IL_009b)
	IL_002a:                                                                        //ldarg.1
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_5=this->F_x8;                                          //ldfld				System::Boolean Root::T_x68::T_x1 F_x8
	IL_0031:            if(A_0==Temp_5)goto IL_009d;                                //beq.s				IL_009d
	IL_0033:            goto IL_0036;                                               //br.s				IL_0036
	IL_0035:                                                                        //break
	IL_0036:                                                                        //ldc.i4				0x2
	IL_003b:            V_0=2;                                                      //stloc				V_0
	IL_003f:            /*goto IL_000d;*/goto IL_0041;                              //br.s				IL_000d
	IL_0041:            goto IL_0073;                                               //br.s				IL_0073
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x68^ Root::T_x68::T_x1 F_x1
	IL_0049:                                                                        //ldarg.0
	IL_004a:            Temp_2=this->F_x2;                                          //ldfld				System::String^ Root::T_x68::T_x1 F_x2
	IL_004f:            Temp_1->M_x1(Temp_2);                                       //callvirt				void Root::T_x68::M_x1(System::String^)
	IL_0054:                                                                        //ldc.i4				0x3
	IL_0059:            V_0=3;                                                      //stloc				V_0
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:            goto IL_009d;                                               //br.s				IL_009d
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_3=this->F_x1;                                          //ldfld				Root::T_x68^ Root::T_x68::T_x1 F_x1
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_4=this->F_x2;                                          //ldfld				System::String^ Root::T_x68::T_x1 F_x2
	IL_006d:            Temp_3->M_x2(Temp_4);                                       //callvirt				void Root::T_x68::M_x2(System::String^)
	IL_0072:            return;                                                     //ret
	IL_0073:                                                                        //ldarg.0
	IL_0074:                                                                        //ldarg.1
	IL_0075:            this->F_x8=A_0;                                             //stfld				System::Boolean Root::T_x68::T_x1 F_x8
	IL_007a:                                                                        //ldc.i4				0x1
	IL_007f:            V_0=1;                                                      //stloc				V_0
	IL_0083:            /*goto IL_000d;*/goto IL_0085;                              //br.s				IL_000d
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_0=this->F_x8;                                          //ldfld				System::Boolean Root::T_x68::T_x1 F_x8
	IL_008b:            if(!Temp_0)goto IL_0043;                                    //brfalse.s				IL_0043
	IL_008d:                                                                        //ldc.i4				0x4
	IL_0092:            V_0=4;                                                      //stloc				V_0
	IL_0096:            /*goto IL_000d;*/goto IL_009b;                              //br				IL_000d
	IL_009b:            goto IL_0061;                                               //br.s				IL_0061
	IL_009d:            return;                                                     //ret

}
inline void Root::T_x68::T_x1::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x13=A_0;                                            //stfld				System::String^ Root::T_x68::T_x1 F_x13
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x68::T_x1::M_x1(System::Windows::Forms::Control^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::Windows::Forms::Control^ Root::T_x68::T_x1 F_x12
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x68::T_x1::M_x12()
//Reflector::IWindow^::get_Visible by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Boolean Root::T_x68::T_x1 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Windows::Forms::Control^ Root::T_x68::T_x1::M_x2()
//Reflector::IWindow^::get_Content by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::Control^ Root::T_x68::T_x1 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
