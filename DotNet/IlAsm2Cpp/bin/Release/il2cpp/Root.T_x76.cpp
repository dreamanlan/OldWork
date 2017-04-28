#include "global_xref.h"

inline Root::T_x76::T_x76()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Cursor^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Drawing::Font^ Temp_2 = nullptr;
	System::Drawing::Color Temp_3;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_0=14;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::Label();*/                        //call				void System::Windows::Forms::Label::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_0=System::Windows::Forms::Cursors::Hand;               //call				System::Windows::Forms::Cursor^ System::Windows::Forms::Cursors::get_Hand()
	IL_0015:            this->Cursor=Temp_0;                                        //callvirt				void System::Windows::Forms::Control::set_Cursor(System::Windows::Forms::Cursor^)
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldstr				L"\x782B\x4F2D\x582F\x5D31\x5933\x5735"
	IL_0020:                                                                        //ldloc				V_0
	IL_0024:            Temp_1=a(L"\x782B\x4F2D\x582F\x5D31\x5933\x5735",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0029:                                                                        //ldc.r4				8.25
	IL_002e:                                                                        //ldc.i4.4
	IL_002f:            Temp_2=gcnew System::Drawing::Font(Temp_1,safe_cast<System::Single>(8.25),safe_cast<System::Drawing::FontStyle>(4));//newobj				void System::Drawing::Font::.ctor(System::String^,System::Single,System::Drawing::FontStyle)
	IL_0034:            this->Font=Temp_2;                                          //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_3=System::Drawing::Color::DarkGreen;                   //call				System::Drawing::Color System::Drawing::Color::get_DarkGreen()
	IL_003f:            this->ForeColor=Temp_3;                                     //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_0044:            return;                                                     //ret

}
inline void Root::T_x76::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	System::Diagnostics::Process^ Temp_2 = nullptr;
	System::Windows::Forms::MouseButtons Temp_3 = (System::Windows::Forms::MouseButtons)0;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	array<System::Object^>^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Windows::Forms::DialogResult Temp_11 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_2=12;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00b4;case 1:goto IL_004d;case 2:goto IL_00cb;case 3:goto IL_0014;};//switch				(IL_00b4,IL_004d,IL_00cb,IL_0014)
	IL_002f:            goto IL_0032;                                               //br.s				IL_0032
	IL_0031:                                                                        //break
	IL_0032:                                                                        //ldarg.1
	IL_0033:            Temp_3=e->Button;                                           //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_0038:                                                                        //ldc.i4				0x100000
	IL_003d:            if(safe_cast<System::Int32>(Temp_3)!=1048576)goto IL_00cd;  //bne.un				IL_00cd
	IL_0042:                                                                        //ldc.i4				0x1
	IL_0047:            V_1=1;                                                      //stloc				V_1
	IL_004b:            /*goto IL_0016;*/goto IL_004d;                              //br.s				IL_0016
	IL_004d:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_004D01:          try{
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_1=this->Text;                                          //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_0055:            Temp_2=System::Diagnostics::Process::Start(Temp_1);         //call				System::Diagnostics::Process^ System::Diagnostics::Process::Start(System::String^)
	IL_005a:                                                                        //pop
	IL_005b:            goto IL_00cd;                                               //leave.s				IL_00cd
	                    ;}
	                    catch(System::ComponentModel::Win32Exception^ Ex_005B02){
	IL_005d:                                                                        //pop
	IL_005e:                                                                        //ldnull
	IL_005f:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0064:                                                                        //ldstr				L"\x6C29\x4D2B\x472D\x5C2F\x5731\x5033\x1635\x4C37\x5539\x1C3B\x523D\x213F\x3741\x2A43\x2545\x2047\x6A49\x6B4B\x354D\x604F\x2F51\x7353\x7855"
	IL_0069:                                                                        //ldloc				V_2
	IL_006d:            Temp_5=a(L"\x6C29\x4D2B\x472D\x5C2F\x5731\x5033\x1635\x4C37\x5539\x1C3B\x523D\x213F\x3741\x2A43\x2545\x2047\x6A49\x6B4B\x354D\x604F\x2F51\x7353\x7855",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0072:                                                                        //ldc.i4.1
	IL_0073:            Temp_6=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0078:            V_0=Temp_6;                                                 //stloc.0
	IL_0079:                                                                        //ldloc.0
	IL_007a:                                                                        //ldc.i4.0
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_7=this->Text;                                          //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_0081:            V_0[0]=safe_cast<System::Object^>(Temp_7);                  //stelem.ref
	IL_0082:                                                                        //ldloc.0
	IL_0083:            Temp_8=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_4),Temp_5,V_0);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0088:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345"
	IL_008d:                                                                        //ldloc				V_2
	IL_0091:            Temp_9=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0096:            Temp_10=Root::T_x128::M_x1(Temp_9);                         //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_009b:                                                                        //ldc.i4.0
	IL_009c:                                                                        //ldc.i4.s				48
	IL_009e:            Temp_11=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_8,Temp_10,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_00a3:                                                                        //pop
	IL_00a4:            goto IL_00cd;                                               //leave.s				IL_00cd
	                    ;}
	IL_00a6:                                                                        //ldc.i4				0x0
	IL_00ab:            V_1=0;                                                      //stloc				V_1
	IL_00af:            /*goto IL_0016;*/goto IL_00b4;                              //br				IL_0016
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:            Temp_0=e->Clicks;                                           //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_Clicks()
	IL_00ba:                                                                        //ldc.i4.1
	IL_00bb:            if(Temp_0!=1)goto IL_00cd;                                  //bne.un.s				IL_00cd
	IL_00bd:                                                                        //ldc.i4				0x2
	IL_00c2:            V_1=2;                                                      //stloc				V_1
	IL_00c6:            /*goto IL_0016;*/goto IL_00cb;                              //br				IL_0016
	IL_00cb:            /*goto IL_004f;*/goto IL_004D01;                            //br.s				IL_004f
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:                                                                        //ldarg.1
	IL_00cf:            System::Windows::Forms::Label::OnMouseDown(e);              //call				void System::Windows::Forms::Label::OnMouseDown(System::Windows::Forms::MouseEventArgs^)
	IL_00d4:            return;                                                     //ret

}
inline void Root::T_x76::OnMouseEnter(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Color Temp_0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Drawing::Color::Green;                       //call				System::Drawing::Color System::Drawing::Color::get_Green()
	IL_0006:            this->ForeColor=Temp_0;                                     //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            System::Windows::Forms::Label::OnMouseEnter(e);             //call				void System::Windows::Forms::Label::OnMouseEnter(System::EventArgs^)
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x76::OnMouseLeave(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Color Temp_0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Drawing::Color::DarkGreen;                   //call				System::Drawing::Color System::Drawing::Color::get_DarkGreen()
	IL_0006:            this->ForeColor=Temp_0;                                     //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            System::Windows::Forms::Label::OnMouseLeave(e);             //call				void System::Windows::Forms::Label::OnMouseLeave(System::EventArgs^)
	IL_0012:            return;                                                     //ret

}
inline System::String^ Root::T_x76::Text::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::Label::Text;                 //call				System::String^ System::Windows::Forms::Label::get_Text()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x76::Text::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Size Temp_2;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            System::Windows::Forms::Label::Text=value;                  //call				void System::Windows::Forms::Label::set_Text(System::String^)
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.0
	IL_0014:            Temp_0=this->PreferredWidth;                                //callvirt				System::Int32 System::Windows::Forms::Label::get_PreferredWidth()
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_1=this->PreferredHeight;                               //callvirt				System::Int32 System::Windows::Forms::Label::get_PreferredHeight()
	IL_001f:            Temp_2=System::Drawing::Size(Temp_0,Temp_1);                //newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0024:            this->Size=Temp_2;                                          //call				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0029:            return;                                                     //ret

}
