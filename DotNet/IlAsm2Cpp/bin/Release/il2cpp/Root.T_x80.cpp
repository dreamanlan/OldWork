#include "global_xref.h"

inline Root::T_x80::T_x80()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::RichTextBox^ Temp_0 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_1 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_2 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_3 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_4 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_5 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_6 = nullptr;
	System::Drawing::Color Temp_7;
	System::Windows::Forms::RichTextBox^ Temp_8 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_9 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_10 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x2=safe_cast<Reflector::CodeModel::IFormatter^>(nullptr);//stfld				Reflector::CodeModel::IFormatter^ Root::T_x80 F_x2
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldnull
	IL_0009:            this->F_x12=safe_cast<System::Windows::Forms::RichTextBox^>(nullptr);//stfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_000e:                                                                        //ldarg.0
	IL_000f:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.5
	IL_0016:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_0=gcnew System::Windows::Forms::RichTextBox();         //newobj				void System::Windows::Forms::RichTextBox::.ctor()
	IL_0028:            this->F_x12=Temp_0;                                         //stfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_1=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_0033:                                                                        //ldc.i4.5
	IL_0034:            Temp_1->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_2=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_003f:                                                                        //ldc.i4.1
	IL_0040:            Temp_2->Multiline=true;                                     //callvirt				void System::Windows::Forms::TextBoxBase::set_Multiline(System::Boolean)
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_3=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_004b:                                                                        //ldc.i4.0
	IL_004c:            Temp_3->WordWrap=false;                                     //callvirt				void System::Windows::Forms::TextBoxBase::set_WordWrap(System::Boolean)
	IL_0051:                                                                        //ldarg.0
	IL_0052:            Temp_4=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_0057:                                                                        //ldc.i4.1
	IL_0058:            Temp_4->ReadOnly=true;                                      //callvirt				void System::Windows::Forms::TextBoxBase::set_ReadOnly(System::Boolean)
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_5=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_0063:                                                                        //ldc.i4.0
	IL_0064:            Temp_5->BorderStyle=safe_cast<System::Windows::Forms::BorderStyle>(0);//callvirt				void System::Windows::Forms::TextBoxBase::set_BorderStyle(System::Windows::Forms::BorderStyle)
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_6=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_006f:                                                                        //ldc.i4				0xff
	IL_0074:                                                                        //ldc.i4				0xff
	IL_0079:                                                                        //ldc.i4				0xe1
	IL_007e:            Temp_7=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(255),safe_cast<System::Int32>(225));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_0083:            Temp_6->BackColor=Temp_7;                                   //callvirt				void System::Windows::Forms::Control::set_BackColor(System::Drawing::Color)
	IL_0088:                                                                        //ldarg.0
	IL_0089:            Temp_8=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_008e:                                                                        //ldc.i4.3
	IL_008f:            Temp_8->ScrollBars=safe_cast<System::Windows::Forms::RichTextBoxScrollBars>(3);//callvirt				void System::Windows::Forms::RichTextBox::set_ScrollBars(System::Windows::Forms::RichTextBoxScrollBars)
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_9=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_009a:                                                                        //ldarg.0
	IL_009b:            Temp_10=this->F_x12;                                        //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_00a0:            Temp_9->Add(safe_cast<System::Windows::Forms::Control^>(Temp_10));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00a5:            return;                                                     //ret

}
inline System::Boolean Root::T_x80::M_x1()
//Root::T_x75^::Focus by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::Control::Focus();            //call				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x80::M_x1(Reflector::CodeModel::IFormatter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::RichTextBox^ Temp_0 = nullptr;
	System::Drawing::Font^ Temp_1 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::RichTextBox^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0083;case 1:goto IL_0054;case 2:goto IL_000b;case 3:goto IL_0037;};//switch				(IL_0083,IL_0054,IL_000b,IL_0037)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.1
	IL_002a:            if(A_0==nullptr)goto IL_0039;                               //brfalse.s				IL_0039
	IL_002c:                                                                        //ldc.i4				0x3
	IL_0031:            V_0=3;                                                      //stloc				V_0
	IL_0035:            /*goto IL_000d;*/goto IL_0037;                              //br.s				IL_000d
	IL_0037:            goto IL_0056;                                               //br.s				IL_0056
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_4=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_003f:            Temp_5=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0044:            Temp_4->Rtf=Temp_5;                                         //callvirt				void System::Windows::Forms::RichTextBox::set_Rtf(System::String^)
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_0=1;                                                      //stloc				V_0
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:            goto IL_0085;                                               //br.s				IL_0085
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_1=this->Font;                                          //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0062:            Temp_0->Font=Temp_1;                                        //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_2=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_006d:                                                                        //ldarg.1
	IL_006e:            Temp_3=A_0->ToString();                                     //callvirt				System::String^ System::Object::ToString()
	IL_0073:            Temp_2->Rtf=Temp_3;                                         //callvirt				void System::Windows::Forms::RichTextBox::set_Rtf(System::String^)
	IL_0078:                                                                        //ldc.i4				0x0
	IL_007d:            V_0=0;                                                      //stloc				V_0
	IL_0081:            /*goto IL_000d;*/goto IL_0083;                              //br.s				IL_000d
	IL_0083:            goto IL_0085;                                               //br.s				IL_0085
	IL_0085:                                                                        //ldarg.0
	IL_0086:                                                                        //ldarg.1
	IL_0087:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IFormatter^ Root::T_x80 F_x2
	IL_008c:            return;                                                     //ret

}
inline Reflector::CodeModel::IFormatter^ Root::T_x80::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x80::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=gcnew Root::T_x80::T_x1(A_0);                        //newobj				void Root::T_x80::T_x1::.ctor(System::Boolean)
	IL_0006:            return safe_cast<Reflector::CodeModel::IFormatter^>(Temp_0);//ret

}
inline void Root::T_x80::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnGotFocus by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::RichTextBox^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::OnGotFocus(A_0);           //call				void System::Windows::Forms::Control::OnGotFocus(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_000d:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0012:                                                                        //pop
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x80::M_x1(Root::T_x124^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	Root::T_x125^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x80 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x80 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x125::Invoke(System::Object^,Root::T_x124^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x80::M_x1(Root::T_x125^ A_0)
//Root::T_x75^::M_x2 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x80 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x125
	IL_0012:            this->F_x1=safe_cast<Root::T_x125^>(Temp_1);                //stfld				Root::T_x125^ Root::T_x80 F_x1
	IL_0017:            return;                                                     //ret

}
inline Reflector::CodeModel::IFormatter^ Root::T_x80::M_x12()
//Root::T_x75^::M_x1 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFormatter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IFormatter^ Root::T_x80 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x80::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::RichTextBox^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_0006:            Temp_1=Temp_0->TabStop;                                     //callvirt				System::Boolean System::Windows::Forms::Control::get_TabStop()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x80::M_x2(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::RichTextBox^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::RichTextBox^ Root::T_x80 F_x12
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->TabStop=A_0;                                        //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x80::M_x2(Root::T_x125^ A_0)
//Root::T_x75^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x80 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x125
	IL_0012:            this->F_x1=safe_cast<Root::T_x125^>(Temp_1);                //stfld				Root::T_x125^ Root::T_x80 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x80::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Collections::ArrayList^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0006:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000b:            this->F_x1=Temp_1;                                          //stfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldc.i4.0
	IL_0012:            this->F_x13=0;                                              //stfld				System::Int32 Root::T_x80::T_x1 F_x13
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_001d:            this->F_x8=Temp_2;                                          //stfld				System::Collections::ArrayList^ Root::T_x80::T_x1 F_x8
	IL_0022:                                                                        //ldarg.0
	IL_0023:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_3=this->F_x8;                                          //ldfld				System::Collections::ArrayList^ Root::T_x80::T_x1 F_x8
	IL_002e:                                                                        //ldc.i4.0
	IL_002f:                                                                        //box				System::Int32
	IL_0034:            Temp_4=Temp_3->Add(safe_cast<System::Object^>(0));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0039:                                                                        //pop
	IL_003a:            return;                                                     //ret

}
inline Root::T_x80::T_x1::T_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0006:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000b:            this->F_x1=Temp_1;                                          //stfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldc.i4.0
	IL_0012:            this->F_x13=0;                                              //stfld				System::Int32 Root::T_x80::T_x1 F_x13
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_001d:            this->F_x8=Temp_2;                                          //stfld				System::Collections::ArrayList^ Root::T_x80::T_x1 F_x8
	IL_0022:                                                                        //ldarg.0
	IL_0023:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            this->F_x2=A_0;                                             //stfld				System::Boolean Root::T_x80::T_x1 F_x2
	IL_002f:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_2=10;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_1=1;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //add
	IL_0019:                                                                        //bgt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_0046;                                               //br.s				IL_0046
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_0059;case 1:goto IL_0014;case 2:goto IL_00c8;case 3:goto IL_009f;case 4:goto IL_00b1;case 5:goto IL_0066;case 6:goto IL_007a;};//switch				(IL_0059,IL_0014,IL_00c8,IL_009f,IL_00b1,IL_0066,IL_007a)
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_2=this->F_x12;                                         //ldfld				System::Boolean Root::T_x80::T_x1 F_x12
	IL_004c:            if(!Temp_2)goto IL_00ca;                                    //brfalse.s				IL_00ca
	IL_004e:                                                                        //ldc.i4				0x0
	IL_0053:            V_1=0;                                                      //stloc				V_1
	IL_0057:            /*goto IL_0021;*/goto IL_0059;                              //br.s				IL_0021
	IL_0059:            goto IL_00a1;                                               //br.s				IL_00a1
	IL_005b:                                                                        //ldc.i4				0x5
	IL_0060:            V_1=5;                                                      //stloc				V_1
	IL_0064:            /*goto IL_0021;*/goto IL_0066;                              //br.s				IL_0021
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x80::T_x1 F_x13
	IL_006d:            if(V_0<Temp_0)goto IL_007c;                                 //blt.s				IL_007c
	IL_006f:                                                                        //ldc.i4				0x6
	IL_0074:            V_1=6;                                                      //stloc				V_1
	IL_0078:            /*goto IL_0021;*/goto IL_007a;                              //br.s				IL_0021
	IL_007a:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_007c:                                                                        //ldarg.0
	IL_007d:                                                                        //ldstr				L"\x0827\x0A29\x0C2B\x0E2D\x102F\x1231"
	IL_0082:                                                                        //ldloc				V_2
	IL_0086:            Temp_1=a(L"\x0827\x0A29\x0C2B\x0E2D\x102F\x1231",V_2);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008b:            this->M_x8(Temp_1);                                         //call				void Root::T_x80::T_x1::M_x8(System::String^)
	IL_0090:                                                                        //ldloc.0
	IL_0091:                                                                        //ldc.i4.1
	IL_0092:                                                                        //add
	IL_0093:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0094:                                                                        //ldc.i4				0x3
	IL_0099:            V_1=3;                                                      //stloc				V_1
	IL_009d:            /*goto IL_0021;*/goto IL_009f;                              //br.s				IL_0021
	IL_009f:            goto IL_005b;                                               //br.s				IL_005b
	IL_00a1:                                                                        //ldc.i4.0
	IL_00a2:            V_0=0;                                                      //stloc.0
	IL_00a3:                                                                        //ldc.i4				0x4
	IL_00a8:            V_1=4;                                                      //stloc				V_1
	IL_00ac:            /*goto IL_0021;*/goto IL_00b1;                              //br				IL_0021
	IL_00b1:            goto IL_005b;                                               //br.s				IL_005b
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:                                                                        //ldc.i4.0
	IL_00b5:            this->F_x12=false;                                          //stfld				System::Boolean Root::T_x80::T_x1 F_x12
	IL_00ba:                                                                        //ldc.i4				0x2
	IL_00bf:            V_1=2;                                                      //stloc				V_1
	IL_00c3:            /*goto IL_0021;*/goto IL_00c8;                              //br				IL_0021
	IL_00c8:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_00ca:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Boolean Root::T_x80::T_x1 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x1(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteLiteral by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x800000
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(8388608));          //call				void Root::T_x80::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x1(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::IO::StringWriter^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Collections::ArrayList^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Collections::ArrayList^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_2=19;                                                     //stloc				V_2
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_1
	IL_000f:            switch(V_1){case 0:goto IL_0080;case 1:goto IL_0046;case 2:goto IL_0055;};//switch				(IL_0080,IL_0046,IL_0055)
	IL_0020:            goto IL_0023;                                               //br.s				IL_0023
	IL_0022:                                                                        //break
	IL_0023:                                                                        //ldarg.0
	IL_0024:            this->M_x1();                                               //call				void Root::T_x80::T_x1::M_x1()
	IL_0029:                                                                        //ldarg.0
	IL_002a:            Temp_0=this->F_x8;                                          //ldfld				System::Collections::ArrayList^ Root::T_x80::T_x1 F_x8
	IL_002f:                                                                        //ldarg.2
	IL_0030:                                                                        //box				System::Int32
	IL_0035:            Temp_1=Temp_0->IndexOf(safe_cast<System::Object^>(A_1));    //callvirt				System::Int32 System::Collections::ArrayList::IndexOf(System::Object^)
	IL_003a:            V_0=Temp_1;                                                 //stloc.0
	IL_003b:                                                                        //ldc.i4				0x1
	IL_0040:            V_1=1;                                                      //stloc				V_1
	IL_0044:            /*goto IL_000b;*/goto IL_0046;                              //br.s				IL_000b
	IL_0046:                                                                        //ldloc.0
	IL_0047:                                                                        //ldc.i4.m1
	IL_0048:            if(V_0!=-1)goto IL_0082;                                    //bne.un.s				IL_0082
	IL_004a:                                                                        //ldc.i4				0x2
	IL_004f:            V_1=2;                                                      //stloc				V_1
	IL_0053:            /*goto IL_000b;*/goto IL_0055;                              //br.s				IL_000b
	IL_0055:            goto IL_0057;                                               //br.s				IL_0057
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_9=this->F_x8;                                          //ldfld				System::Collections::ArrayList^ Root::T_x80::T_x1 F_x8
	IL_005d:            Temp_10=Temp_9->Count;                                      //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0062:            V_0=Temp_10;                                                //stloc.0
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_11=this->F_x8;                                         //ldfld				System::Collections::ArrayList^ Root::T_x80::T_x1 F_x8
	IL_0069:                                                                        //ldarg.2
	IL_006a:                                                                        //box				System::Int32
	IL_006f:            Temp_12=Temp_11->Add(safe_cast<System::Object^>(A_1));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0074:                                                                        //pop
	IL_0075:                                                                        //ldc.i4				0x0
	IL_007a:            V_1=0;                                                      //stloc				V_1
	IL_007e:            /*goto IL_000b;*/goto IL_0080;                              //br.s				IL_000b
	IL_0080:            goto IL_0082;                                               //br.s				IL_0082
	IL_0082:                                                                        //ldarg.0
	IL_0083:            Temp_2=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_0088:                                                                        //ldstr				L"\x6D30\x5032\x5334"
	IL_008d:                                                                        //ldloc				V_2
	IL_0091:            Temp_3=a(L"\x6D30\x5032\x5334",V_2);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0096:                                                                        //ldloca.s				V_0
	IL_0098:            Temp_4=V_0.ToString();                                      //call				System::String^ System::Int32::ToString()
	IL_009d:                                                                        //ldstr				L"\x1130"
	IL_00a2:                                                                        //ldloc				V_2
	IL_00a6:            Temp_5=a(L"\x1130",V_2);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ab:            Temp_6=System::String::Concat(Temp_3,Temp_4,Temp_5);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00b0:            Temp_2->Write(Temp_6);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:                                                                        //ldarg.1
	IL_00b7:            this->M_x8(A_0);                                            //call				void Root::T_x80::T_x1::M_x8(System::String^)
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:            Temp_7=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_00c2:                                                                        //ldstr				L"\x6D30\x5032\x5334\x0736\x1938"
	IL_00c7:                                                                        //ldloc				V_2
	IL_00cb:            Temp_8=a(L"\x6D30\x5032\x5334\x0736\x1938",V_2);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d0:            Temp_7->Write(Temp_8);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00d5:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x1(System::String^ A_0,System::String^ A_1)
//Reflector::CodeModel::IFormatter^::WriteProperty by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x1(System::String^ A_0,System::String^ A_1,System::Object^ A_2)
//Reflector::CodeModel::IFormatter^::WriteReference by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x80::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:                                                                        //ldc.i4				0x8000
	IL_000d:            this->M_x1(A_0,safe_cast<System::Int32>(32768));            //call				void Root::T_x80::T_x1::M_x1(System::String^,System::Int32)
	IL_0012:            return;                                                     //ret

}
inline System::Boolean Root::T_x80::T_x1::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Boolean Root::T_x80::T_x1 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x80::T_x1::M_x12(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteDeclaration by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StringWriter^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_0=17;                                                     //stloc				V_0
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_0012:                                                                        //ldstr				L"\x732E\x5330\x1332"
	IL_0017:                                                                        //ldloc				V_0
	IL_001b:            Temp_1=a(L"\x732E\x5330\x1332",V_0);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0020:            Temp_0->Write(Temp_1);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0025:                                                                        //ldarg.0
	IL_0026:                                                                        //ldarg.1
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:            this->M_x1(A_0,safe_cast<System::Int32>(0));                //call				void Root::T_x80::T_x1::M_x1(System::String^,System::Int32)
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_2=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_0033:                                                                        //ldstr				L"\x732E\x5330\x0332\x1534"
	IL_0038:                                                                        //ldloc				V_0
	IL_003c:            Temp_3=a(L"\x732E\x5330\x0332\x1534",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            Temp_2->Write(Temp_3);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0046:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x13()
//Reflector::CodeModel::IFormatter^::WriteIndent by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x80::T_x1 F_x13
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:                                                                        //add
	IL_0009:            this->F_x13=(Temp_0 + 1);                                   //stfld				System::Int32 Root::T_x80::T_x1 F_x13
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x13(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteKeyword by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x80
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(128));              //call				void Root::T_x80::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x2()
//Reflector::CodeModel::IFormatter^::WriteLine by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StringWriter^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_000f:                                                                        //ldstr				L"\x431E\x5120\x4222\x5724\x7B26\x4528\x422A\x1C2C\x1A2E\x0130"
	IL_0014:                                                                        //ldloc				V_0
	IL_0018:            Temp_1=a(L"\x431E\x5120\x4222\x5724\x7B26\x4528\x422A\x1C2C\x1A2E\x0130",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001d:            Temp_0->Write(Temp_1);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldc.i4.1
	IL_0024:            this->F_x12=true;                                           //stfld				System::Boolean Root::T_x80::T_x1 F_x12
	IL_0029:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x2(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::Write by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x80::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x8(A_0);                                            //call				void Root::T_x80::T_x1::M_x8(System::String^)
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x5()
//Reflector::CodeModel::IFormatter^::WriteOutdent by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x80::T_x1 F_x13
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:                                                                        //sub
	IL_0009:            this->F_x13=(Temp_0 - 1);                                   //stfld				System::Int32 Root::T_x80::T_x1 F_x13
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x80::T_x1::M_x5(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteComment by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x808080
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(8421504));          //call				void Root::T_x80::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline System::String^ Root::T_x80::T_x1::M_x8()
//System::Object^::ToString by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Collections::ArrayList^ Temp_4 = nullptr;
	System::Collections::IEnumerator^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Globalization::CultureInfo^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Globalization::CultureInfo^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::IO::StringWriter^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::String^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_9=1;                                                      //stloc				V_9
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:                                                                        //ldloc.0
	IL_0017:                                                                        //ldstr				L"\x641E\x7D20\x5122\x5124\x4126\x1828\x772A\x4C2C\x412E\x4230\x5A32\x6934\x5636\x5738\x483A\x543C\x5C3E\x3140\x2442\x7444\x7546\x7C48\x794A\x114C\x2B4E\x3450\x3552\x3354\x6756\x0558\x3F5A\x385C\x395E\x0D60\x0262\x0B64\x0066\x5868\x5B6A\x5E6C\x5C6E"
	IL_001c:                                                                        //ldloc				V_9
	IL_0020:            Temp_2=a(L"\x641E\x7D20\x5122\x5124\x4126\x1828\x772A\x4C2C\x412E\x4230\x5A32\x6934\x5636\x5738\x483A\x543C\x5C3E\x3140\x2442\x7444\x7546\x7C48\x794A\x114C\x2B4E\x3450\x3552\x3354\x6756\x0558\x3F5A\x385C\x395E\x0D60\x0262\x0B64\x0066\x5868\x5B6A\x5E6C\x5C6E",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0025:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_002a:                                                                        //ldloc.0
	IL_002b:                                                                        //ldstr				L"\x641E\x7D20\x4022\x4A24\x4B26\x4628\x592A\x592C\x4D2E\x5D30\x1332"
	IL_0030:                                                                        //ldloc				V_9
	IL_0034:            Temp_3=a(L"\x641E\x7D20\x4022\x4A24\x4B26\x4628\x592A\x592C\x4D2E\x5D30\x1332",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0039:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_4=this->F_x8;                                          //ldfld				System::Collections::ArrayList^ Root::T_x80::T_x1 F_x8
	IL_0044:            Temp_5=Temp_4->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_0049:            V_3=Temp_5;                                                 //stloc.3
	IL_004a:            /*goto IL_004c;*/goto IL_004A01;                            //br.s				IL_004c
	IL_004A01:          try{
	IL_004c:                                                                        //ldc.i4				0x4
	IL_0051:            V_6=4;                                                      //stloc				V_6
	IL_0055:            /*goto IL_0059;*/goto IL_0057;                              //br.s				IL_0059
	IL_0057:            goto IL_0076;                                               //br.s				IL_0076
	IL_0059:                                                                        //ldloc				V_6
	IL_005d:            switch(V_6){case 0:goto IL_0180;case 1:goto IL_014c;case 2:goto IL_013c;case 3:goto IL_0165;case 4:goto IL_0057;};//switch				(IL_0180,IL_014c,IL_013c,IL_0165,IL_0057)
	IL_0076:            goto IL_013e;                                               //br				IL_013e
	IL_007b:                                                                        //ldloc.3
	IL_007c:            Temp_7=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0081:                                                                        //unbox				System::Int32
	IL_0086:                                                                        //ldind.i4
	IL_0087:            V_1=safe_cast<System::Int32>(Temp_7);                       //stloc.1
	IL_0088:                                                                        //ldloc.0
	IL_0089:                                                                        //ldstr				L"\x431E\x5320\x4622\x4124"
	IL_008e:                                                                        //ldloc				V_9
	IL_0092:            Temp_8=a(L"\x431E\x5320\x4622\x4124",V_9);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0097:            V_0->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_009c:                                                                        //ldloc.0
	IL_009d:                                                                        //ldloc.1
	IL_009e:                                                                        //ldc.i4.s				16
	IL_00a0:                                                                        //shr
	IL_00a1:                                                                        //ldc.i4				0xff
	IL_00a6:                                                                        //and
	IL_00a7:            V_4=((V_1 >> 16) & 255);                                    //stloc.s				V_4
	IL_00a9:                                                                        //ldloca.s				V_4
	IL_00ab:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00b0:            Temp_10=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_9));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00b5:            V_0->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:                                                                        //ldstr				L"\x431E\x4620\x5122\x4024\x4226\x4728"
	IL_00c0:                                                                        //ldloc				V_9
	IL_00c4:            Temp_11=a(L"\x431E\x4620\x5122\x4024\x4226\x4728",V_9);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c9:            V_0->Write(Temp_11);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ce:                                                                        //ldloc.0
	IL_00cf:                                                                        //ldloc.1
	IL_00d0:                                                                        //ldc.i4.8
	IL_00d1:                                                                        //shr
	IL_00d2:                                                                        //ldc.i4				0xff
	IL_00d7:                                                                        //and
	IL_00d8:            V_4=((V_1 >> 8) & 255);                                     //stloc.s				V_4
	IL_00da:                                                                        //ldloca.s				V_4
	IL_00dc:            Temp_12=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00e1:            Temp_13=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_12));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00e6:            V_0->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00eb:                                                                        //ldloc.0
	IL_00ec:                                                                        //ldstr				L"\x431E\x4320\x4F22\x5024\x4226"
	IL_00f1:                                                                        //ldloc				V_9
	IL_00f5:            Temp_14=a(L"\x431E\x4320\x4F22\x5024\x4226",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fa:            V_0->Write(Temp_14);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ff:                                                                        //ldloc.0
	IL_0100:                                                                        //ldloc.1
	IL_0101:                                                                        //ldc.i4				0xff
	IL_0106:                                                                        //and
	IL_0107:            V_4=(V_1 & 255);                                            //stloc.s				V_4
	IL_0109:                                                                        //ldloca.s				V_4
	IL_010b:            Temp_15=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0110:            Temp_16=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_15));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0115:            V_0->Write(Temp_16);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_011a:                                                                        //ldloc.0
	IL_011b:                                                                        //ldstr				L"\x241E"
	IL_0120:                                                                        //ldloc				V_9
	IL_0124:            Temp_17=a(L"\x241E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0129:            V_0->Write(Temp_17);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_012e:                                                                        //ldc.i4				0x2
	IL_0133:            V_6=2;                                                      //stloc				V_6
	IL_0137:            /*goto IL_0059;*/goto IL_013c;                              //br				IL_0059
	IL_013c:            goto IL_013e;                                               //br.s				IL_013e
	IL_013e:                                                                        //ldc.i4				0x1
	IL_0143:            V_6=1;                                                      //stloc				V_6
	IL_0147:            /*goto IL_0059;*/goto IL_014c;                              //br				IL_0059
	IL_014c:                                                                        //ldloc.3
	IL_014d:            Temp_6=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0152:            if(Temp_6)goto IL_007b;                                     //brtrue				IL_007b
	IL_0157:                                                                        //ldc.i4				0x3
	IL_015c:            V_6=3;                                                      //stloc				V_6
	IL_0160:            /*goto IL_0059;*/goto IL_0165;                              //br				IL_0059
	IL_0165:                                                                        //ldc.i4.4
	IL_0166:                                                                        //dup
	IL_0167:                                                                        //dup
	IL_0168:                                                                        //ldc.i4.2
	IL_0169:                                                                        //sub
	IL_016a:                                                                        //blt				IL_0166
	IL_016f:                                                                        //pop
	IL_0170:            goto IL_0172;                                               //br.s				IL_0172
	IL_0172:                                                                        //ldc.i4				0x0
	IL_0177:            V_6=0;                                                      //stloc				V_6
	IL_017b:            /*goto IL_0059;*/goto IL_0180;                              //br				IL_0059
	IL_0180:            goto IL_01d2;                                               //leave.s				IL_01d2
	                    ;}
	                    finally{
	IL_0182:            goto IL_0199;                                               //br.s				IL_0199
	IL_0184:                                                                        //ldloc				V_7
	IL_0188:            switch(V_7){case 0:goto IL_01cf;case 1:goto IL_01bb;case 2:goto IL_01ac;};//switch				(IL_01cf,IL_01bb,IL_01ac)
	IL_0199:                                                                        //ldloc.3
	IL_019a:                                                                        //isinst				System::IDisposable
	IL_019f:            V_5=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_5
	IL_01a1:                                                                        //ldc.i4				0x2
	IL_01a6:            V_7=2;                                                      //stloc				V_7
	IL_01aa:            /*goto IL_0184;*/goto IL_01ac;                              //br.s				IL_0184
	IL_01ac:                                                                        //ldloc.s				V_5
	IL_01ae:            if(V_5==nullptr)goto IL_01d1;                               //brfalse.s				IL_01d1
	IL_01b0:                                                                        //ldc.i4				0x1
	IL_01b5:            V_7=1;                                                      //stloc				V_7
	IL_01b9:            /*goto IL_0184;*/goto IL_01bb;                              //br.s				IL_0184
	IL_01bb:            goto IL_01bd;                                               //br.s				IL_01bd
	IL_01bd:                                                                        //ldloc.s				V_5
	IL_01bf:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01c4:                                                                        //ldc.i4				0x0
	IL_01c9:            V_7=0;                                                      //stloc				V_7
	IL_01cd:            /*goto IL_0184;*/goto IL_01cf;                              //br.s				IL_0184
	IL_01cf:            goto IL_01d1;                                               //br.s				IL_01d1
	IL_01d1:                                                                        //endfinally
	                    ;}
	IL_01d2:                                                                        //ldloc.0
	IL_01d3:                                                                        //ldstr				L"\x621E"
	IL_01d8:                                                                        //ldloc				V_9
	IL_01dc:            Temp_18=a(L"\x621E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e1:            V_0->Write(Temp_18);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01e6:                                                                        //ldloc.0
	IL_01e7:                                                                        //ldstr				L"\x431E\x5120\x4222\x5724\x7B26\x4528\x422A\x1C2C\x1A2E\x0130"
	IL_01ec:                                                                        //ldloc				V_9
	IL_01f0:            Temp_19=a(L"\x431E\x5120\x4222\x5724\x7B26\x4528\x422A\x1C2C\x1A2E\x0130",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f5:            V_0->Write(Temp_19);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01fa:                                                                        //ldloc.0
	IL_01fb:                                                                        //ldstr				L"\x431E\x4220\x4522\x1524"
	IL_0200:                                                                        //ldloc				V_9
	IL_0204:            Temp_20=a(L"\x431E\x4220\x4522\x1524",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0209:            V_0->Write(Temp_20);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_020e:                                                                        //ldloc.0
	IL_020f:                                                                        //ldstr				L"\x3F1E"
	IL_0214:                                                                        //ldloc				V_9
	IL_0218:            Temp_21=a(L"\x3F1E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_021d:            V_0->Write(Temp_21);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0222:                                                                        //ldloc.0
	IL_0223:                                                                        //ldarg.0
	IL_0224:            Temp_22=this->F_x1;                                         //ldfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_0229:            Temp_23=Temp_22->ToString();                                //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_022e:            V_0->Write(Temp_23);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0233:                                                                        //ldloc.0
	IL_0234:                                                                        //ldstr				L"\x431E\x5120\x4222\x5724"
	IL_0239:                                                                        //ldloc				V_9
	IL_023d:            Temp_24=a(L"\x431E\x5120\x4222\x5724",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0242:            V_0->Write(Temp_24);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0247:                                                                        //ldloc.0
	IL_0248:                                                                        //ldstr				L"\x621E"
	IL_024d:                                                                        //ldloc				V_9
	IL_0251:            Temp_25=a(L"\x621E",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0256:            V_0->Write(Temp_25);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_025b:                                                                        //ldloc.0
	IL_025c:            Temp_26=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0261:            V_2=Temp_26;                                                //stloc.2
	IL_0262:            goto IL_02aa;                                               //leave.s				IL_02aa
	                    ;}
	                    finally{
	IL_0264:                                                                        //ldc.i4				0x2
	IL_0269:            V_8=2;                                                      //stloc				V_8
	IL_026d:            /*goto IL_0271;*/goto IL_026f;                              //br.s				IL_0271
	IL_026f:            goto IL_0286;                                               //br.s				IL_0286
	IL_0271:                                                                        //ldloc				V_8
	IL_0275:            switch(V_8){case 0:goto IL_02a7;case 1:goto IL_0294;case 2:goto IL_026f;};//switch				(IL_02a7,IL_0294,IL_026f)
	IL_0286:                                                                        //ldloc.0
	IL_0287:            if(V_0==nullptr)goto IL_02a9;                               //brfalse.s				IL_02a9
	IL_0289:                                                                        //ldc.i4				0x1
	IL_028e:            V_8=1;                                                      //stloc				V_8
	IL_0292:            /*goto IL_0271;*/goto IL_0294;                              //br.s				IL_0271
	IL_0294:            goto IL_0296;                                               //br.s				IL_0296
	IL_0296:                                                                        //ldloc.0
	IL_0297:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_029c:                                                                        //ldc.i4				0x0
	IL_02a1:            V_8=0;                                                      //stloc				V_8
	IL_02a5:            /*goto IL_0271;*/goto IL_02a7;                              //br.s				IL_0271
	IL_02a7:            goto IL_02a9;                                               //br.s				IL_02a9
	IL_02a9:                                                                        //endfinally
	                    ;}
	IL_02aa:                                                                        //ldloc.2
	IL_02ab:            return V_2;                                                 //ret

}
inline void Root::T_x80::T_x1::M_x8(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::IO::StringWriter^ Temp_9 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_0=11;                                                     //stloc				V_0
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //ldstr				L"\x7528"
	IL_0012:                                                                        //ldloc				V_0
	IL_0016:            Temp_0=a(L"\x7528",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001b:                                                                        //ldstr				L"\x7528\x772A"
	IL_0020:                                                                        //ldloc				V_0
	IL_0024:            Temp_1=a(L"\x7528\x772A",V_0);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0029:            Temp_2=A_0->Replace(Temp_0,Temp_1);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_002e:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_0030:                                                                        //ldarg.1
	IL_0031:                                                                        //ldstr				L"\x5228"
	IL_0036:                                                                        //ldloc				V_0
	IL_003a:            Temp_3=a(L"\x5228",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003f:                                                                        //ldstr				L"\x7528\x502A"
	IL_0044:                                                                        //ldloc				V_0
	IL_0048:            Temp_4=a(L"\x7528\x502A",V_0);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004d:            Temp_5=A_0->Replace(Temp_3,Temp_4);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0052:            A_0=Temp_5;                                                 //starg.s				A_0
	IL_0054:                                                                        //ldarg.1
	IL_0055:                                                                        //ldstr				L"\x5428"
	IL_005a:                                                                        //ldloc				V_0
	IL_005e:            Temp_6=a(L"\x5428",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0063:                                                                        //ldstr				L"\x7528\x562A"
	IL_0068:                                                                        //ldloc				V_0
	IL_006c:            Temp_7=a(L"\x7528\x562A",V_0);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            Temp_8=A_0->Replace(Temp_6,Temp_7);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0076:            A_0=Temp_8;                                                 //starg.s				A_0
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_9=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x80::T_x1 F_x1
	IL_007e:                                                                        //ldarg.1
	IL_007f:            Temp_9->Write(A_0);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0084:            return;                                                     //ret

}
