#include "global_xref.h"

inline Root::T_x81::T_x81()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::Windows::Forms::TextBox^ Temp_1 = nullptr;
	System::Windows::Forms::TextBox^ Temp_2 = nullptr;
	System::Windows::Forms::TextBox^ Temp_3 = nullptr;
	System::Windows::Forms::TextBox^ Temp_4 = nullptr;
	System::Windows::Forms::TextBox^ Temp_5 = nullptr;
	System::Windows::Forms::TextBox^ Temp_6 = nullptr;
	System::Drawing::Color Temp_7;
	System::Windows::Forms::Control::ControlCollection^ Temp_8 = nullptr;
	System::Windows::Forms::TextBox^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x2=safe_cast<Reflector::CodeModel::IFormatter^>(nullptr);//stfld				Reflector::CodeModel::IFormatter^ Root::T_x81 F_x2
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldnull
	IL_0009:            this->F_x12=safe_cast<System::Windows::Forms::TextBox^>(nullptr);//stfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_000e:                                                                        //ldarg.0
	IL_000f:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.5
	IL_0016:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_0=gcnew System::Windows::Forms::TextBox();             //newobj				void System::Windows::Forms::TextBox::.ctor()
	IL_0028:            this->F_x12=Temp_0;                                         //stfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_1=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_0033:                                                                        //ldc.i4.5
	IL_0034:            Temp_1->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_2=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_003f:                                                                        //ldc.i4.1
	IL_0040:            Temp_2->Multiline=true;                                     //callvirt				void System::Windows::Forms::TextBoxBase::set_Multiline(System::Boolean)
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_3=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_004b:                                                                        //ldc.i4.0
	IL_004c:            Temp_3->WordWrap=false;                                     //callvirt				void System::Windows::Forms::TextBoxBase::set_WordWrap(System::Boolean)
	IL_0051:                                                                        //ldarg.0
	IL_0052:            Temp_4=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_0057:                                                                        //ldc.i4.1
	IL_0058:            Temp_4->ReadOnly=true;                                      //callvirt				void System::Windows::Forms::TextBoxBase::set_ReadOnly(System::Boolean)
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_5=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_0063:                                                                        //ldc.i4.0
	IL_0064:            Temp_5->BorderStyle=safe_cast<System::Windows::Forms::BorderStyle>(0);//callvirt				void System::Windows::Forms::TextBoxBase::set_BorderStyle(System::Windows::Forms::BorderStyle)
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_6=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_006f:                                                                        //ldc.i4				0xff
	IL_0074:                                                                        //ldc.i4				0xff
	IL_0079:                                                                        //ldc.i4				0xe1
	IL_007e:            Temp_7=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(255),safe_cast<System::Int32>(225));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_0083:            Temp_6->BackColor=Temp_7;                                   //callvirt				void System::Windows::Forms::Control::set_BackColor(System::Drawing::Color)
	IL_0088:                                                                        //ldarg.0
	IL_0089:            Temp_8=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_008e:                                                                        //ldarg.0
	IL_008f:            Temp_9=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_0094:            Temp_8->Add(safe_cast<System::Windows::Forms::Control^>(Temp_9));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0099:            return;                                                     //ret

}
inline System::Boolean Root::T_x81::M_x1()
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
inline void Root::T_x81::M_x1(Reflector::CodeModel::IFormatter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::Drawing::Font^ Temp_1 = nullptr;
	System::Windows::Forms::TextBox^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::TextBox^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0054;case 2:goto IL_0037;case 3:goto IL_0083;};//switch				(IL_000b,IL_0054,IL_0037,IL_0083)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.1
	IL_002a:            if(A_0==nullptr)goto IL_0039;                               //brfalse.s				IL_0039
	IL_002c:                                                                        //ldc.i4				0x2
	IL_0031:            V_0=2;                                                      //stloc				V_0
	IL_0035:            /*goto IL_000d;*/goto IL_0037;                              //br.s				IL_000d
	IL_0037:            goto IL_0056;                                               //br.s				IL_0056
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_4=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_003f:            Temp_5=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0044:            Temp_4->Text=Temp_5;                                        //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_0=1;                                                      //stloc				V_0
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:            goto IL_0085;                                               //br.s				IL_0085
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_1=this->Font;                                          //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0062:            Temp_0->Font=Temp_1;                                        //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_2=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_006d:                                                                        //ldarg.1
	IL_006e:            Temp_3=A_0->ToString();                                     //callvirt				System::String^ System::Object::ToString()
	IL_0073:            Temp_2->Text=Temp_3;                                        //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0078:                                                                        //ldc.i4				0x3
	IL_007d:            V_0=3;                                                      //stloc				V_0
	IL_0081:            /*goto IL_000d;*/goto IL_0083;                              //br.s				IL_000d
	IL_0083:            goto IL_0085;                                               //br.s				IL_0085
	IL_0085:                                                                        //ldarg.0
	IL_0086:                                                                        //ldarg.1
	IL_0087:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IFormatter^ Root::T_x81 F_x2
	IL_008c:            return;                                                     //ret

}
inline Reflector::CodeModel::IFormatter^ Root::T_x81::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x81::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=gcnew Root::T_x81::T_x1(A_0);                        //newobj				void Root::T_x81::T_x1::.ctor(System::Boolean)
	IL_0006:            return safe_cast<Reflector::CodeModel::IFormatter^>(Temp_0);//ret

}
inline void Root::T_x81::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnGotFocus by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::OnGotFocus(A_0);           //call				void System::Windows::Forms::Control::OnGotFocus(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_000d:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0012:                                                                        //pop
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x81::M_x1(Root::T_x124^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	Root::T_x125^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x81 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x81 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x125::Invoke(System::Object^,Root::T_x124^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x81::M_x1(Root::T_x125^ A_0)
//Root::T_x75^::M_x2 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x81 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x125
	IL_0012:            this->F_x1=safe_cast<Root::T_x125^>(Temp_1);                //stfld				Root::T_x125^ Root::T_x81 F_x1
	IL_0017:            return;                                                     //ret

}
inline Reflector::CodeModel::IFormatter^ Root::T_x81::M_x12()
//Root::T_x75^::M_x1 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFormatter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IFormatter^ Root::T_x81 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x81::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_0006:            Temp_1=Temp_0->TabStop;                                     //callvirt				System::Boolean System::Windows::Forms::Control::get_TabStop()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x81::M_x2(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TextBox^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Windows::Forms::TextBox^ Root::T_x81 F_x12
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->TabStop=A_0;                                        //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x81::M_x2(Root::T_x125^ A_0)
//Root::T_x75^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x81 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x125
	IL_0012:            this->F_x1=safe_cast<Root::T_x125^>(Temp_1);                //stfld				Root::T_x125^ Root::T_x81 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x81::T_x1::T_x1(System::Boolean A_0)
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
	IL_000b:            this->F_x1=Temp_1;                                          //stfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldc.i4.0
	IL_0012:            this->F_x13=0;                                              //stfld				System::Int32 Root::T_x81::T_x1 F_x13
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_001d:            this->F_x8=Temp_2;                                          //stfld				System::Collections::ArrayList^ Root::T_x81::T_x1 F_x8
	IL_0022:                                                                        //ldarg.0
	IL_0023:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            this->F_x2=A_0;                                             //stfld				System::Boolean Root::T_x81::T_x1 F_x2
	IL_002f:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_2=19;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003b;                                               //br.s				IL_003b
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00cb;case 1:goto IL_0072;case 2:goto IL_005e;case 3:goto IL_0014;case 4:goto IL_0051;case 5:goto IL_00b1;case 6:goto IL_009f;};//switch				(IL_00cb,IL_0072,IL_005e,IL_0014,IL_0051,IL_00b1,IL_009f)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_3=this->F_x12;                                         //ldfld				System::Boolean Root::T_x81::T_x1 F_x12
	IL_0041:            if(!Temp_3)goto IL_00cd;                                    //brfalse				IL_00cd
	IL_0046:                                                                        //ldc.i4				0x4
	IL_004b:            V_1=4;                                                      //stloc				V_1
	IL_004f:            /*goto IL_0016;*/goto IL_0051;                              //br.s				IL_0016
	IL_0051:            goto IL_00a1;                                               //br.s				IL_00a1
	IL_0053:                                                                        //ldc.i4				0x2
	IL_0058:            V_1=2;                                                      //stloc				V_1
	IL_005c:            /*goto IL_0016;*/goto IL_005e;                              //br.s				IL_0016
	IL_005e:                                                                        //ldloc.0
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x81::T_x1 F_x13
	IL_0065:            if(V_0<Temp_0)goto IL_0074;                                 //blt.s				IL_0074
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_1=1;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0016;*/goto IL_0072;                              //br.s				IL_0016
	IL_0072:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_0074:                                                                        //ldarg.0
	IL_0075:            Temp_1=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_007a:                                                                        //ldstr				L"\x1130\x1332\x1534\x1736"
	IL_007f:                                                                        //ldloc				V_2
	IL_0083:            Temp_2=a(L"\x1130\x1332\x1534\x1736",V_2);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0088:            Temp_1->Write(Temp_2);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_008d:                                                                        //ldloc.0
	IL_008e:                                                                        //ldc.i4.1
	IL_008f:                                                                        //add
	IL_0090:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0091:                                                                        //ldc.i4				0x6
	IL_0096:            V_1=6;                                                      //stloc				V_1
	IL_009a:            /*goto IL_0016;*/goto IL_009f;                              //br				IL_0016
	IL_009f:            goto IL_0053;                                               //br.s				IL_0053
	IL_00a1:                                                                        //ldc.i4.0
	IL_00a2:            V_0=0;                                                      //stloc.0
	IL_00a3:                                                                        //ldc.i4				0x5
	IL_00a8:            V_1=5;                                                      //stloc				V_1
	IL_00ac:            /*goto IL_0016;*/goto IL_00b1;                              //br				IL_0016
	IL_00b1:            goto IL_0053;                                               //br.s				IL_0053
	IL_00b3:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_00b5:                                                                        //break
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:                                                                        //ldc.i4.0
	IL_00b8:            this->F_x12=false;                                          //stfld				System::Boolean Root::T_x81::T_x1 F_x12
	IL_00bd:                                                                        //ldc.i4				0x0
	IL_00c2:            V_1=0;                                                      //stloc				V_1
	IL_00c6:            /*goto IL_0016;*/goto IL_00cb;                              //br				IL_0016
	IL_00cb:            goto IL_00cd;                                               //br.s				IL_00cd
	IL_00cd:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StringWriter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x81::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0->Write(A_0);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x1(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StringWriter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x81::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0->Write(A_0);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x1(System::String^ A_0,System::String^ A_1)
//Reflector::CodeModel::IFormatter^::WriteProperty by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x8;                                          //ldfld				System::Collections::ArrayList^ Root::T_x81::T_x1 F_x8
	IL_000f:                                                                        //ldarg.1
	IL_0010:                                                                        //ldstr				L"\x1821\x0423"
	IL_0015:                                                                        //ldloc				V_0
	IL_0019:            Temp_1=a(L"\x1821\x0423",V_0);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001e:                                                                        //ldarg.2
	IL_001f:            Temp_2=System::String::Concat(A_0,Temp_1,A_1);              //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0024:            Temp_3=Temp_0->Add(safe_cast<System::Object^>(Temp_2));     //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0029:                                                                        //pop
	IL_002a:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x1(System::String^ A_0,System::String^ A_1,System::Object^ A_2)
//Reflector::CodeModel::IFormatter^::WriteReference by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StringWriter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x81::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0->Write(A_0);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x12()
//Reflector::CodeModel::IFormatter^::WriteIndent by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x81::T_x1 F_x13
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:                                                                        //add
	IL_0009:            this->F_x13=(Temp_0 + 1);                                   //stfld				System::Int32 Root::T_x81::T_x1 F_x13
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x12(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::Write by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StringWriter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x81::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0->Write(A_0);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0012:            return;                                                     //ret

}
inline System::String^ Root::T_x81::T_x1::M_x13()
//System::Object^::ToString by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::IO::StringReader^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::IO::StringReader^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_7=3;                                                      //stloc				V_7
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:                                                                        //ldloc.0
	IL_0017:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_0022:            Temp_3=Temp_2->ToString();                                  //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0027:            Temp_4=gcnew System::IO::StringReader(Temp_3);              //newobj				void System::IO::StringReader::.ctor(System::String^)
	IL_002c:            V_1=Temp_4;                                                 //stloc.1
	IL_002d:            /*goto IL_002f;*/goto IL_002D01;                            //br.s				IL_002f
	IL_002D01:          try{
	IL_002f:                                                                        //ldc.i4				0x0
	IL_0034:            V_4=0;                                                      //stloc				V_4
	IL_0038:            /*goto IL_003c;*/goto IL_003a;                              //br.s				IL_003c
	IL_003a:            goto IL_0059;                                               //br.s				IL_0059
	IL_003c:                                                                        //ldloc				V_4
	IL_0040:            switch(V_4){case 0:goto IL_003a;case 1:goto IL_009a;case 2:goto IL_00c9;case 3:goto IL_008d;case 4:goto IL_00ae;};//switch				(IL_003a,IL_009a,IL_00c9,IL_008d,IL_00ae)
	IL_0059:            goto IL_008f;                                               //br.s				IL_008f
	IL_005b:                                                                        //ldloc.1
	IL_005c:            Temp_6=V_1->ReadLine();                                     //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_0061:            V_2=Temp_6;                                                 //stloc.2
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldstr				L"\x0120\x0322\x0524\x0726"
	IL_0068:                                                                        //ldloc				V_7
	IL_006c:            Temp_7=a(L"\x0120\x0322\x0524\x0726",V_7);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:                                                                        //ldloc.2
	IL_0072:            Temp_8=System::String::Concat(Temp_7,V_2);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0077:            V_0->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_007c:                                                                        //ldloc.0
	IL_007d:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0082:                                                                        //ldc.i4				0x3
	IL_0087:            V_4=3;                                                      //stloc				V_4
	IL_008b:            /*goto IL_003c;*/goto IL_008d;                              //br.s				IL_003c
	IL_008d:            goto IL_008f;                                               //br.s				IL_008f
	IL_008f:                                                                        //ldc.i4				0x1
	IL_0094:            V_4=1;                                                      //stloc				V_4
	IL_0098:            /*goto IL_003c;*/goto IL_009a;                              //br.s				IL_003c
	IL_009a:                                                                        //ldloc.1
	IL_009b:            Temp_5=V_1->Peek();                                         //callvirt				System::Int32 System::IO::TextReader::Peek()
	IL_00a0:                                                                        //ldc.i4.m1
	IL_00a1:            if(Temp_5!=-1)goto IL_005b;                                 //bne.un.s				IL_005b
	IL_00a3:                                                                        //ldc.i4				0x4
	IL_00a8:            V_4=4;                                                      //stloc				V_4
	IL_00ac:            /*goto IL_003c;*/goto IL_00ae;                              //br.s				IL_003c
	IL_00ae:                                                                        //ldc.i4.4
	IL_00af:                                                                        //dup
	IL_00b0:                                                                        //dup
	IL_00b1:                                                                        //ldc.i4.2
	IL_00b2:                                                                        //sub
	IL_00b3:                                                                        //blt				IL_00af
	IL_00b8:                                                                        //pop
	IL_00b9:            goto IL_00bb;                                               //br.s				IL_00bb
	IL_00bb:                                                                        //ldc.i4				0x2
	IL_00c0:            V_4=2;                                                      //stloc				V_4
	IL_00c4:            /*goto IL_003c;*/goto IL_00c9;                              //br				IL_003c
	IL_00c9:            goto IL_0111;                                               //leave.s				IL_0111
	                    ;}
	                    finally{
	IL_00cb:                                                                        //ldc.i4				0x0
	IL_00d0:            V_5=0;                                                      //stloc				V_5
	IL_00d4:            /*goto IL_00d8;*/goto IL_00d6;                              //br.s				IL_00d8
	IL_00d6:            goto IL_00ed;                                               //br.s				IL_00ed
	IL_00d8:                                                                        //ldloc				V_5
	IL_00dc:            switch(V_5){case 0:goto IL_00d6;case 1:goto IL_00fb;case 2:goto IL_010e;};//switch				(IL_00d6,IL_00fb,IL_010e)
	IL_00ed:                                                                        //ldloc.1
	IL_00ee:            if(V_1==nullptr)goto IL_0110;                               //brfalse.s				IL_0110
	IL_00f0:                                                                        //ldc.i4				0x1
	IL_00f5:            V_5=1;                                                      //stloc				V_5
	IL_00f9:            /*goto IL_00d8;*/goto IL_00fb;                              //br.s				IL_00d8
	IL_00fb:            goto IL_00fd;                                               //br.s				IL_00fd
	IL_00fd:                                                                        //ldloc.1
	IL_00fe:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0103:                                                                        //ldc.i4				0x2
	IL_0108:            V_5=2;                                                      //stloc				V_5
	IL_010c:            /*goto IL_00d8;*/goto IL_010e;                              //br.s				IL_00d8
	IL_010e:            goto IL_0110;                                               //br.s				IL_0110
	IL_0110:                                                                        //endfinally
	                    ;}
	IL_0111:                                                                        //ldloc.0
	IL_0112:            Temp_9=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0117:            V_3=Temp_9;                                                 //stloc.3
	IL_0118:            goto IL_0160;                                               //leave.s				IL_0160
	                    ;}
	                    finally{
	IL_011a:                                                                        //ldc.i4				0x1
	IL_011f:            V_6=1;                                                      //stloc				V_6
	IL_0123:            /*goto IL_0127;*/goto IL_0125;                              //br.s				IL_0127
	IL_0125:            goto IL_013c;                                               //br.s				IL_013c
	IL_0127:                                                                        //ldloc				V_6
	IL_012b:            switch(V_6){case 0:goto IL_014a;case 1:goto IL_0125;case 2:goto IL_015d;};//switch				(IL_014a,IL_0125,IL_015d)
	IL_013c:                                                                        //ldloc.0
	IL_013d:            if(V_0==nullptr)goto IL_015f;                               //brfalse.s				IL_015f
	IL_013f:                                                                        //ldc.i4				0x0
	IL_0144:            V_6=0;                                                      //stloc				V_6
	IL_0148:            /*goto IL_0127;*/goto IL_014a;                              //br.s				IL_0127
	IL_014a:            goto IL_014c;                                               //br.s				IL_014c
	IL_014c:                                                                        //ldloc.0
	IL_014d:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0152:                                                                        //ldc.i4				0x2
	IL_0157:            V_6=2;                                                      //stloc				V_6
	IL_015b:            /*goto IL_0127;*/goto IL_015d;                              //br.s				IL_0127
	IL_015d:            goto IL_015f;                                               //br.s				IL_015f
	IL_015f:                                                                        //endfinally
	                    ;}
	IL_0160:                                                                        //ldloc.3
	IL_0161:            return V_3;                                                 //ret

}
inline void Root::T_x81::T_x1::M_x13(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteDeclaration by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x1(A_0);                                            //call				void Root::T_x81::T_x1::M_x1(System::String^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x2()
//Reflector::CodeModel::IFormatter^::WriteLine by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StringWriter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::IO::StringWriter^ Root::T_x81::T_x1 F_x1
	IL_0006:            Temp_0->WriteLine();                                        //callvirt				void System::IO::TextWriter::WriteLine()
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldc.i4.1
	IL_000d:            this->F_x12=true;                                           //stfld				System::Boolean Root::T_x81::T_x1 F_x12
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x2(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteLiteral by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x800000
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(8388608));          //call				void Root::T_x81::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x5(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteComment by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x808080
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(8421504));          //call				void Root::T_x81::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x8()
//Reflector::CodeModel::IFormatter^::WriteOutdent by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x81::T_x1 F_x13
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:                                                                        //sub
	IL_0009:            this->F_x13=(Temp_0 - 1);                                   //stfld				System::Int32 Root::T_x81::T_x1 F_x13
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x81::T_x1::M_x8(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteKeyword by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x80
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(128));              //call				void Root::T_x81::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
