#include "global_xref.h"

inline Root::T_x78::T_x78()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ContainerControl^ Temp_0 = nullptr;
	System::Windows::Forms::ContainerControl^ Temp_1 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_2 = nullptr;
	System::Windows::Forms::ContainerControl^ Temp_3 = nullptr;
	System::Windows::Forms::Label^ Temp_4 = nullptr;
	System::Windows::Forms::Label^ Temp_5 = nullptr;
	System::Windows::Forms::Label^ Temp_6 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_7 = nullptr;
	System::Windows::Forms::Label^ Temp_8 = nullptr;
	Root::T_x78::T_x2^ Temp_9 = nullptr;
	Root::T_x78::T_x2^ Temp_10 = nullptr;
	Root::T_x78::T_x2^ Temp_11 = nullptr;
	System::Drawing::Color Temp_12;
	Root::T_x78::T_x2^ Temp_13 = nullptr;
	System::Drawing::Color Temp_14;
	System::Windows::Forms::Control::ControlCollection^ Temp_15 = nullptr;
	Root::T_x78::T_x2^ Temp_16 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:            this->TabStop=true;                                         //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.5
	IL_000f:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=gcnew System::Windows::Forms::ContainerControl();    //newobj				void System::Windows::Forms::ContainerControl::.ctor()
	IL_001a:            this->F_x13=Temp_0;                                         //stfld				System::Windows::Forms::ContainerControl^ Root::T_x78 F_x13
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_1=this->F_x13;                                         //ldfld				System::Windows::Forms::ContainerControl^ Root::T_x78 F_x13
	IL_0025:                                                                        //ldc.i4.5
	IL_0026:            Temp_1->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_2=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0031:                                                                        //ldarg.0
	IL_0032:            Temp_3=this->F_x13;                                         //ldfld				System::Windows::Forms::ContainerControl^ Root::T_x78 F_x13
	IL_0037:            Temp_2->Add(safe_cast<System::Windows::Forms::Control^>(Temp_3));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_4=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_0042:            this->F_x12=Temp_4;                                         //stfld				System::Windows::Forms::Label^ Root::T_x78 F_x12
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_5=this->F_x12;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x78 F_x12
	IL_004d:                                                                        //ldc.i4.1
	IL_004e:            Temp_5->Height=1;                                           //callvirt				void System::Windows::Forms::Control::set_Height(System::Int32)
	IL_0053:                                                                        //ldarg.0
	IL_0054:            Temp_6=this->F_x12;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x78 F_x12
	IL_0059:                                                                        //ldc.i4.1
	IL_005a:            Temp_6->Dock=safe_cast<System::Windows::Forms::DockStyle>(1);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_7=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0065:                                                                        //ldarg.0
	IL_0066:            Temp_8=this->F_x12;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x78 F_x12
	IL_006b:            Temp_7->Add(safe_cast<System::Windows::Forms::Control^>(Temp_8));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0070:                                                                        //ldarg.0
	IL_0071:            Temp_9=gcnew Root::T_x78::T_x2();                           //newobj				void Root::T_x78::T_x2::.ctor()
	IL_0076:            this->F_x2=Temp_9;                                          //stfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_10=this->F_x2;                                         //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_0081:                                                                        //ldc.i4.1
	IL_0082:            Temp_10->Dock=safe_cast<System::Windows::Forms::DockStyle>(1);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0087:                                                                        //ldarg.0
	IL_0088:            Temp_11=this->F_x2;                                         //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_008d:            Temp_12=System::Drawing::SystemColors::InactiveCaptionText; //call				System::Drawing::Color System::Drawing::SystemColors::get_InactiveCaptionText()
	IL_0092:            Temp_11->ForeColor=Temp_12;                                 //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_13=this->F_x2;                                         //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_009d:            Temp_14=System::Drawing::SystemColors::InactiveCaption;     //call				System::Drawing::Color System::Drawing::SystemColors::get_InactiveCaption()
	IL_00a2:            Temp_13->BackColor=Temp_14;                                 //callvirt				void System::Windows::Forms::Control::set_BackColor(System::Drawing::Color)
	IL_00a7:                                                                        //ldarg.0
	IL_00a8:            Temp_15=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_16=this->F_x2;                                         //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_00b3:            Temp_15->Add(safe_cast<System::Windows::Forms::Control^>(Temp_16));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_00b8:            return;                                                     //ret

}
inline void Root::T_x78::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::CancelEventArgs^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::ComponentModel::CancelEventArgs();     //newobj				void System::ComponentModel::CancelEventArgs::.ctor()
	IL_0006:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x78::M_x1(System::ComponentModel::CancelEventArgs^)
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x78::M_x1(Reflector::IWindow^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x78::T_x2^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Windows::Forms::ContainerControl^ Temp_2 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_3 = nullptr;
	System::Windows::Forms::ContainerControl^ Temp_4 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_5 = nullptr;
	Reflector::IWindow^ Temp_6 = nullptr;
	System::Windows::Forms::Control^ Temp_7 = nullptr;
	Root::T_x78::T_x2^ Temp_8 = nullptr;
	Reflector::IWindow^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::IWindow^ Temp_11 = nullptr;
	Reflector::IWindow^ Temp_12 = nullptr;
	System::Windows::Forms::Control^ Temp_13 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_00d3;case 1:goto IL_0092;case 2:goto IL_0067;case 3:goto IL_0051;case 4:goto IL_00b8;};//switch				(IL_00d3,IL_0092,IL_0067,IL_0051,IL_00b8)
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            this->F_x8=A_0;                                             //stfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_002c:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0031:            Temp_0->Text=Temp_1;                                        //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_2=this->F_x13;                                         //ldfld				System::Windows::Forms::ContainerControl^ Root::T_x78 F_x13
	IL_003c:            Temp_3=Temp_2->Controls;                                    //callvirt				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0041:            Temp_3->Clear();                                            //callvirt				void System::Windows::Forms::Control::ControlCollection::Clear()
	IL_0046:                                                                        //ldc.i4				0x3
	IL_004b:            V_0=3;                                                      //stloc				V_0
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_0054;                                               //br.s				IL_0054
	IL_0053:                                                                        //break
	IL_0054:                                                                        //ldarg.0
	IL_0055:            Temp_11=this->F_x8;                                         //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_005a:            if(Temp_11==nullptr)goto IL_00d5;                           //brfalse.s				IL_00d5
	IL_005c:                                                                        //ldc.i4				0x2
	IL_0061:            V_0=2;                                                      //stloc				V_0
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:            goto IL_0094;                                               //br.s				IL_0094
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_4=this->F_x13;                                         //ldfld				System::Windows::Forms::ContainerControl^ Root::T_x78 F_x13
	IL_006f:            Temp_5=Temp_4->Controls;                                    //callvirt				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0074:                                                                        //ldarg.0
	IL_0075:            Temp_6=this->F_x8;                                          //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_007a:            Temp_7=Temp_6->Content;                                     //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_007f:            Temp_5->Add(Temp_7);                                        //callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0084:                                                                        //ldc.i4				0x1
	IL_0089:            V_0=1;                                                      //stloc				V_0
	IL_008d:            /*goto IL_0002;*/goto IL_0092;                              //br				IL_0002
	IL_0092:            goto IL_00d5;                                               //br.s				IL_00d5
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_8=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_009a:                                                                        //ldarg.0
	IL_009b:            Temp_9=this->F_x8;                                          //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_00a0:            Temp_10=Temp_9->Caption;                                    //callvirt				System::String^ Reflector::IWindow::get_Caption()
	IL_00a5:            Temp_8->Text=Temp_10;                                       //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_00aa:                                                                        //ldc.i4				0x4
	IL_00af:            V_0=4;                                                      //stloc				V_0
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:                                                                        //ldarg.0
	IL_00b9:            Temp_12=this->F_x8;                                         //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_00be:            Temp_13=Temp_12->Content;                                   //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_00c3:            if(Temp_13==nullptr)goto IL_00d5;                           //brfalse.s				IL_00d5
	IL_00c5:                                                                        //ldc.i4				0x0
	IL_00ca:            V_0=0;                                                      //stloc				V_0
	IL_00ce:            /*goto IL_0002;*/goto IL_00d3;                              //br				IL_0002
	IL_00d3:            goto IL_0069;                                               //br.s				IL_0069
	IL_00d5:            return;                                                     //ret

}
inline void Root::T_x78::M_x1(System::ComponentModel::CancelEventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::CancelEventHandler^ Temp_0 = nullptr;
	System::ComponentModel::CancelEventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::CancelEventHandler^ Root::T_x78 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::ComponentModel::CancelEventHandler^ Root::T_x78 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::ComponentModel::CancelEventHandler::Invoke(System::Object^,System::ComponentModel::CancelEventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x78::M_x1(System::ComponentModel::CancelEventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::CancelEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::CancelEventHandler^ Root::T_x78 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::CancelEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::CancelEventHandler^>(Temp_1);//stfld				System::ComponentModel::CancelEventHandler^ Root::T_x78 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x78::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnLeave by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x78::T_x2^ Temp_0 = nullptr;
	System::Drawing::Color Temp_1;
	Root::T_x78::T_x2^ Temp_2 = nullptr;
	System::Drawing::Color Temp_3;
	Root::T_x78::T_x2^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            System::Windows::Forms::Control::OnLeave(A_0);              //call				void System::Windows::Forms::Control::OnLeave(System::EventArgs^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_0010:            Temp_1=System::Drawing::SystemColors::InactiveCaptionText;  //call				System::Drawing::Color System::Drawing::SystemColors::get_InactiveCaptionText()
	IL_0015:            Temp_0->ForeColor=Temp_1;                                   //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_0020:            Temp_3=System::Drawing::SystemColors::InactiveCaption;      //call				System::Drawing::Color System::Drawing::SystemColors::get_InactiveCaption()
	IL_0025:            Temp_2->BackColor=Temp_3;                                   //callvirt				void System::Windows::Forms::Control::set_BackColor(System::Drawing::Color)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_4=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_0030:            Temp_4->Invalidate();                                       //callvirt				void System::Windows::Forms::Control::Invalidate()
	IL_0035:            return;                                                     //ret

}
inline Reflector::IWindow^ Root::T_x78::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindow^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x78::M_x2(System::ComponentModel::CancelEventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::CancelEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::CancelEventHandler^ Root::T_x78 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::CancelEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::CancelEventHandler^>(Temp_1);//stfld				System::ComponentModel::CancelEventHandler^ Root::T_x78 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x78::M_x2(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnEnter by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x78::T_x2^ Temp_0 = nullptr;
	System::Drawing::Color Temp_1;
	Root::T_x78::T_x2^ Temp_2 = nullptr;
	System::Drawing::Color Temp_3;
	Root::T_x78::T_x2^ Temp_4 = nullptr;
	Reflector::IWindow^ Temp_5 = nullptr;
	System::Windows::Forms::Control^ Temp_6 = nullptr;
	Reflector::IWindow^ Temp_7 = nullptr;
	Reflector::IWindow^ Temp_8 = nullptr;
	System::Windows::Forms::Control^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_00a0;case 1:goto IL_005c;case 2:goto IL_006f;case 3:goto IL_00c6;case 4:goto IL_0090;};//switch				(IL_00a0,IL_005c,IL_006f,IL_00c6,IL_0090)
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            System::Windows::Forms::Control::OnEnter(A_0);              //call				void System::Windows::Forms::Control::OnEnter(System::EventArgs^)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_002c:            Temp_1=System::Drawing::SystemColors::ActiveCaptionText;    //call				System::Drawing::Color System::Drawing::SystemColors::get_ActiveCaptionText()
	IL_0031:            Temp_0->ForeColor=Temp_1;                                   //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_003c:            Temp_3=System::Drawing::SystemColors::ActiveCaption;        //call				System::Drawing::Color System::Drawing::SystemColors::get_ActiveCaption()
	IL_0041:            Temp_2->BackColor=Temp_3;                                   //callvirt				void System::Windows::Forms::Control::set_BackColor(System::Drawing::Color)
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_4=this->F_x2;                                          //ldfld				Root::T_x78::T_x2^ Root::T_x78 F_x2
	IL_004c:            Temp_4->Invalidate();                                       //callvirt				void System::Windows::Forms::Control::Invalidate()
	IL_0051:                                                                        //ldc.i4				0x1
	IL_0056:            V_0=1;                                                      //stloc				V_0
	IL_005a:            /*goto IL_0002;*/goto IL_005c;                              //br.s				IL_0002
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_7=this->F_x8;                                          //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_0062:            if(Temp_7==nullptr)goto IL_00c8;                            //brfalse.s				IL_00c8
	IL_0064:                                                                        //ldc.i4				0x2
	IL_0069:            V_0=2;                                                      //stloc				V_0
	IL_006d:            /*goto IL_0002;*/goto IL_006f;                              //br.s				IL_0002
	IL_006f:            goto IL_0092;                                               //br.s				IL_0092
	IL_0071:                                                                        //ldarg.0
	IL_0072:            Temp_8=this->F_x8;                                          //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_0077:            Temp_9=Temp_8->Content;                                     //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_007c:            Temp_10=Temp_9->Focus();                                    //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0081:                                                                        //pop
	IL_0082:                                                                        //ldc.i4				0x4
	IL_0087:            V_0=4;                                                      //stloc				V_0
	IL_008b:            /*goto IL_0002;*/goto IL_0090;                              //br				IL_0002
	IL_0090:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_0092:                                                                        //ldc.i4				0x0
	IL_0097:            V_0=0;                                                      //stloc				V_0
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:            Temp_5=this->F_x8;                                          //ldfld				Reflector::IWindow^ Root::T_x78 F_x8
	IL_00a6:            Temp_6=Temp_5->Content;                                     //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_00ab:            if(Temp_6==nullptr)goto IL_00c8;                            //brfalse.s				IL_00c8
	IL_00ad:                                                                        //ldc.i4.4
	IL_00ae:                                                                        //dup
	IL_00af:                                                                        //dup
	IL_00b0:                                                                        //ldc.i4.2
	IL_00b1:                                                                        //sub
	IL_00b2:                                                                        //blt				IL_00ae
	IL_00b7:                                                                        //pop
	IL_00b8:                                                                        //ldc.i4				0x3
	IL_00bd:            V_0=3;                                                      //stloc				V_0
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:            goto IL_0071;                                               //br.s				IL_0071
	IL_00c8:            return;                                                     //ret

}
inline Root::T_x78::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Label^ Temp_0 = nullptr;
	System::Windows::Forms::Label^ Temp_1 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_2 = nullptr;
	System::Windows::Forms::Label^ Temp_3 = nullptr;
	Root::T_x78::T_x1^ Temp_4 = nullptr;
	Root::T_x78::T_x1^ Temp_5 = nullptr;
	System::EventHandler^ Temp_6 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_7 = nullptr;
	Root::T_x78::T_x1^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_0=gcnew System::Windows::Forms::Label();               //newobj				void System::Windows::Forms::Label::.ctor()
	IL_0013:            this->F_x2=Temp_0;                                          //stfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0018:                                                                        //ldarg.0
	IL_0019:            Temp_1=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_001e:                                                                        //ldc.i4.3
	IL_001f:            Temp_1->FlatStyle=safe_cast<System::Windows::Forms::FlatStyle>(3);//callvirt				void System::Windows::Forms::Label::set_FlatStyle(System::Windows::Forms::FlatStyle)
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_2=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_3=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0030:            Temp_2->Add(safe_cast<System::Windows::Forms::Control^>(Temp_3));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0035:                                                                        //ldarg.0
	IL_0036:            Temp_4=gcnew Root::T_x78::T_x1();                           //newobj				void Root::T_x78::T_x1::.ctor()
	IL_003b:            this->F_x1=Temp_4;                                          //stfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_5=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_0046:                                                                        //ldarg.0
	IL_0047:                                                                        //ldftn				void Root::T_x78::T_x2::M_x1(System::Object^,System::EventArgs^)
	IL_004d:            Temp_6=gcnew System::EventHandler(this,&Root::T_x78::T_x2::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0052:            Temp_5->Click += Temp_6;                                    //callvirt				void System::Windows::Forms::Control::add_Click(System::EventHandler^)
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_7=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_8=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_0063:            Temp_7->Add(safe_cast<System::Windows::Forms::Control^>(Temp_8));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_9=System::Windows::Forms::SystemInformation::ToolWindowCaptionHeight;//call				System::Int32 System::Windows::Forms::SystemInformation::get_ToolWindowCaptionHeight()
	IL_006e:            this->Height=Temp_9;                                        //call				void System::Windows::Forms::Control::set_Height(System::Int32)
	IL_0073:            return;                                                     //ret

}
inline void Root::T_x78::T_x2::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnSizeChanged by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x78::T_x1^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x78::T_x1^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x78::T_x1^ Temp_6 = nullptr;
	Root::T_x78::T_x1^ Temp_7 = nullptr;
	System::Windows::Forms::Label^ Temp_8 = nullptr;
	System::Drawing::Font^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Windows::Forms::Label^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Windows::Forms::Label^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Windows::Forms::Label^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Windows::Forms::Label^ Temp_17 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0105;case 1:goto IL_00cd;case 2:goto IL_00e9;};//switch				(IL_0105,IL_00cd,IL_00e9)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0020:                                                                        //conv.r8
	IL_0021:                                                                        //ldc.r8				0.69999999999999996
	IL_002a:                                                                        //mul
	IL_002b:                                                                        //conv.i4
	IL_002c:            V_0=safe_cast<System::Int32>((safe_cast<System::Double>(Temp_0) * 0.7));//stloc.0
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_1=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0033:                                                                        //ldloc.0
	IL_0034:                                                                        //sub
	IL_0035:                                                                        //ldc.i4.2
	IL_0036:                                                                        //div
	IL_0037:            V_1=((Temp_1 - V_0) / 2);                                   //stloc.1
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_3=this->Width;                                         //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //sub
	IL_0046:                                                                        //ldloc.1
	IL_0047:                                                                        //sub
	IL_0048:            Temp_2->Left=((Temp_3 - V_0) - V_1);                        //callvirt				void System::Windows::Forms::Control::set_Left(System::Int32)
	IL_004d:                                                                        //ldarg.0
	IL_004e:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_0053:                                                                        //ldarg.0
	IL_0054:            Temp_5=this->Height;                                        //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0059:                                                                        //ldloc.0
	IL_005a:                                                                        //sub
	IL_005b:                                                                        //ldloc.1
	IL_005c:                                                                        //sub
	IL_005d:            Temp_4->Top=((Temp_5 - V_0) - V_1);                         //callvirt				void System::Windows::Forms::Control::set_Top(System::Int32)
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_6=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_0068:                                                                        //ldloc.0
	IL_0069:            Temp_6->Width=V_0;                                          //callvirt				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_7=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_0074:                                                                        //ldloc.0
	IL_0075:            Temp_7->Height=V_0;                                         //callvirt				void System::Windows::Forms::Control::set_Height(System::Int32)
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_8=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0080:            Temp_9=Temp_8->Font;                                        //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0085:            Temp_10=Temp_9->Height;                                     //callvirt				System::Int32 System::Drawing::Font::get_Height()
	IL_008a:            V_2=Temp_10;                                                //stloc.2
	IL_008b:                                                                        //ldarg.0
	IL_008c:            Temp_11=this->F_x2;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_12=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0097:                                                                        //ldloc.2
	IL_0098:                                                                        //sub
	IL_0099:                                                                        //ldc.i4.2
	IL_009a:                                                                        //div
	IL_009b:            Temp_11->Top=((Temp_12 - V_2) / 2);                         //callvirt				void System::Windows::Forms::Control::set_Top(System::Int32)
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:            Temp_13=this->F_x2;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_00a6:                                                                        //ldarg.0
	IL_00a7:            Temp_14=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_00ac:                                                                        //ldloc.2
	IL_00ad:                                                                        //sub
	IL_00ae:                                                                        //conv.r8
	IL_00af:                                                                        //ldc.r8				0.80000000000000004
	IL_00b8:                                                                        //mul
	IL_00b9:                                                                        //conv.i4
	IL_00ba:            Temp_13->Left=safe_cast<System::Int32>((safe_cast<System::Double>((Temp_14 - V_2)) * 0.8));//callvirt				void System::Windows::Forms::Control::set_Left(System::Int32)
	IL_00bf:                                                                        //ldc.i4				0x1
	IL_00c4:            V_3=1;                                                      //stloc				V_3
	IL_00c8:            /*goto IL_0002;*/goto IL_00cd;                              //br				IL_0002
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:            Temp_15=this->F_x2;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_00d3:            Temp_16=Temp_15->Left;                                      //callvirt				System::Int32 System::Windows::Forms::Control::get_Left()
	IL_00d8:                                                                        //ldc.i4.0
	IL_00d9:            if(Temp_16>=0)goto IL_0107;                                 //bge.s				IL_0107
	IL_00db:                                                                        //ldc.i4				0x2
	IL_00e0:            V_3=2;                                                      //stloc				V_3
	IL_00e4:            /*goto IL_0002;*/goto IL_00e9;                              //br				IL_0002
	IL_00e9:            goto IL_00eb;                                               //br.s				IL_00eb
	IL_00eb:                                                                        //ldarg.0
	IL_00ec:            Temp_17=this->F_x2;                                         //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_00f1:                                                                        //ldc.i4.2
	IL_00f2:            Temp_17->Left=2;                                            //callvirt				void System::Windows::Forms::Control::set_Left(System::Int32)
	IL_00f7:                                                                        //ldc.i4				0x0
	IL_00fc:            V_3=0;                                                      //stloc				V_3
	IL_0100:            /*goto IL_0002;*/goto IL_0105;                              //br				IL_0002
	IL_0105:            goto IL_0107;                                               //br.s				IL_0107
	IL_0107:            return;                                                     //ret

}
inline void Root::T_x78::T_x2::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	System::Windows::Forms::Control^ Temp_1 = nullptr;
	//local variables.
	Root::T_x78^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_0006:            if(Temp_0==nullptr)goto IL_001e;                            //brfalse.s				IL_001e
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_0010:                                                                        //castclass				Root::T_x78
	IL_0015:            V_0=safe_cast<Root::T_x78^>(Temp_1);                        //stloc.0
	IL_0016:                                                                        //ldloc.0
	IL_0017:            V_0->M_x1();                                                //callvirt				void Root::T_x78::M_x1()
	IL_001c:            goto IL_001e;                                               //br.s				IL_001e
	IL_001e:            return;                                                     //ret

}
inline void Root::T_x78::T_x2::M_x1(System::Windows::Forms::MouseEventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseDown by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Windows::Forms::Control^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0058;case 1:goto IL_003f;case 2:goto IL_002c;};//switch				(IL_0058,IL_003f,IL_002c)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            System::Windows::Forms::Control::OnMouseDown(A_0);          //call				void System::Windows::Forms::Control::OnMouseDown(System::Windows::Forms::MouseEventArgs^)
	IL_0021:                                                                        //ldc.i4				0x2
	IL_0026:            V_0=2;                                                      //stloc				V_0
	IL_002a:            /*goto IL_0002;*/goto IL_002c;                              //br.s				IL_0002
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_2=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_0032:            if(Temp_2==nullptr)goto IL_005a;                            //brfalse.s				IL_005a
	IL_0034:                                                                        //ldc.i4				0x1
	IL_0039:            V_0=1;                                                      //stloc				V_0
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_0047:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_004c:                                                                        //pop
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_0=0;                                                      //stloc				V_0
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_005a;                                               //br.s				IL_005a
	IL_005a:            return;                                                     //ret

}
inline void Root::T_x78::T_x2::M_x12(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnForeColorChanged by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Label^ Temp_0 = nullptr;
	System::Drawing::Color Temp_1;
	Root::T_x78::T_x1^ Temp_2 = nullptr;
	System::Drawing::Color Temp_3;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_1=this->ForeColor;                                     //callvirt				System::Drawing::Color System::Windows::Forms::Control::get_ForeColor()
	IL_000f:            Temp_0->ForeColor=Temp_1;                                   //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_3=this->ForeColor;                                     //callvirt				System::Drawing::Color System::Windows::Forms::Control::get_ForeColor()
	IL_0020:            Temp_2->ForeColor=Temp_3;                                   //callvirt				void System::Windows::Forms::Control::set_ForeColor(System::Drawing::Color)
	IL_0025:                                                                        //ldarg.0
	IL_0026:                                                                        //ldarg.1
	IL_0027:            System::Windows::Forms::Control::OnForeColorChanged(A_0);   //call				void System::Windows::Forms::Control::OnForeColorChanged(System::EventArgs^)
	IL_002c:            return;                                                     //ret

}
inline void Root::T_x78::T_x2::M_x13(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnTextChanged by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Label^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Windows::Forms::Label^ Temp_2 = nullptr;
	System::Windows::Forms::Label^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::Label^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Drawing::Size Temp_7;
	System::EventArgs^ Temp_8 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_1=this->Text;                                          //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_000f:            Temp_0->Text=Temp_1;                                        //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_2=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_3=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0020:            Temp_4=Temp_3->PreferredWidth;                              //callvirt				System::Int32 System::Windows::Forms::Label::get_PreferredWidth()
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_5=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_002b:            Temp_6=Temp_5->PreferredHeight;                             //callvirt				System::Int32 System::Windows::Forms::Label::get_PreferredHeight()
	IL_0030:            Temp_7=System::Drawing::Size(Temp_4,Temp_6);                //newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0035:            Temp_2->Size=Temp_7;                                        //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_8=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0040:            this->OnSizeChanged(Temp_8);                                //callvirt				void System::Windows::Forms::Control::OnSizeChanged(System::EventArgs^)
	IL_0045:                                                                        //ldarg.0
	IL_0046:                                                                        //ldarg.1
	IL_0047:            System::Windows::Forms::Control::OnTextChanged(A_0);        //call				void System::Windows::Forms::Control::OnTextChanged(System::EventArgs^)
	IL_004c:            return;                                                     //ret

}
inline void Root::T_x78::T_x2::M_x2(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnBackColorChanged by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Label^ Temp_0 = nullptr;
	System::Drawing::Color Temp_1;
	Root::T_x78::T_x1^ Temp_2 = nullptr;
	System::Drawing::Color Temp_3;
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
	IL_000c:            Temp_0=this->F_x2;                                          //ldfld				System::Windows::Forms::Label^ Root::T_x78::T_x2 F_x2
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_1=this->BackColor;                                     //callvirt				System::Drawing::Color System::Windows::Forms::Control::get_BackColor()
	IL_0017:            Temp_0->BackColor=Temp_1;                                   //callvirt				void System::Windows::Forms::Control::set_BackColor(System::Drawing::Color)
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x78::T_x1^ Root::T_x78::T_x2 F_x1
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_3=this->BackColor;                                     //callvirt				System::Drawing::Color System::Windows::Forms::Control::get_BackColor()
	IL_0028:            Temp_2->BackColor=Temp_3;                                   //callvirt				void System::Windows::Forms::Control::set_BackColor(System::Drawing::Color)
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldarg.1
	IL_002f:            System::Windows::Forms::Control::OnBackColorChanged(A_0);   //call				void System::Windows::Forms::Control::OnBackColorChanged(System::EventArgs^)
	IL_0034:            return;                                                     //ret

}
inline Root::T_x78::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x1=false;                                           //stfld				System::Boolean Root::T_x78::T_x1 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            this->F_x2=false;                                           //stfld				System::Boolean Root::T_x78::T_x1 F_x2
	IL_000e:                                                                        //ldarg.0
	IL_000f:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4				0x2002
	IL_0021:                                                                        //ldc.i4.1
	IL_0022:            this->SetStyle(safe_cast<System::Windows::Forms::ControlStyles>(8194),true);//call				void System::Windows::Forms::Control::SetStyle(System::Windows::Forms::ControlStyles,System::Boolean)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldc.i4				0x1000
	IL_002d:                                                                        //ldc.i4.0
	IL_002e:            this->SetStyle(safe_cast<System::Windows::Forms::ControlStyles>(4096),false);//call				void System::Windows::Forms::Control::SetStyle(System::Windows::Forms::ControlStyles,System::Boolean)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldc.i4				0x200
	IL_0039:                                                                        //ldc.i4.0
	IL_003a:            this->SetStyle(safe_cast<System::Windows::Forms::ControlStyles>(512),false);//call				void System::Windows::Forms::Control::SetStyle(System::Windows::Forms::ControlStyles,System::Boolean)
	IL_003f:            return;                                                     //ret

}
inline void Root::T_x78::T_x1::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseLeave by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x1=false;                                           //stfld				System::Boolean Root::T_x78::T_x1 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            System::Windows::Forms::Control::OnMouseLeave(A_0);         //call				void System::Windows::Forms::Control::OnMouseLeave(System::EventArgs^)
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x78::T_x1::M_x1(System::Windows::Forms::MouseEventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseUp by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::MouseButtons Temp_0 = (System::Windows::Forms::MouseButtons)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0057;case 2:goto IL_003a;};//switch				(IL_000b,IL_0057,IL_003a)
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_0=A_0->Button;                                         //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_0028:                                                                        //ldc.i4				0x100000
	IL_002d:            if(safe_cast<System::Int32>(Temp_0)!=1048576)goto IL_0059;  //bne.un.s				IL_0059
	IL_002f:                                                                        //ldc.i4				0x2
	IL_0034:            V_0=2;                                                      //stloc				V_0
	IL_0038:            /*goto IL_000d;*/goto IL_003a;                              //br.s				IL_000d
	IL_003a:            goto IL_003c;                                               //br.s				IL_003c
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldc.i4.0
	IL_003e:            this->F_x2=false;                                           //stfld				System::Boolean Root::T_x78::T_x1 F_x2
	IL_0043:                                                                        //ldarg.0
	IL_0044:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_0049:            goto IL_004c;                                               //br.s				IL_004c
	IL_004b:                                                                        //break
	IL_004c:                                                                        //ldc.i4				0x1
	IL_0051:            V_0=1;                                                      //stloc				V_0
	IL_0055:            /*goto IL_000d;*/goto IL_0057;                              //br.s				IL_000d
	IL_0057:            goto IL_0059;                                               //br.s				IL_0059
	IL_0059:                                                                        //ldarg.0
	IL_005a:                                                                        //ldarg.1
	IL_005b:            System::Windows::Forms::Control::OnMouseUp(A_0);            //call				void System::Windows::Forms::Control::OnMouseUp(System::Windows::Forms::MouseEventArgs^)
	IL_0060:            return;                                                     //ret

}
inline void Root::T_x78::T_x1::M_x1(System::Windows::Forms::PaintEventArgs^ A_0)
//System::Windows::Forms::Control^::OnPaint by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Color Temp_0;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Drawing::Rectangle Temp_3;
	System::Int32 Temp_4 = 0;
	System::Drawing::Rectangle Temp_5;
	System::Int32 Temp_6 = 0;
	System::Drawing::Rectangle Temp_7;
	System::Int32 Temp_8 = 0;
	System::Drawing::Rectangle Temp_9;
	System::Int32 Temp_10 = 0;
	System::Drawing::Graphics^ Temp_11 = nullptr;
	System::Drawing::Pen^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::Drawing::Graphics^ Temp_17 = nullptr;
	System::Drawing::Point Temp_18;
	System::Drawing::Point Temp_19;
	System::Drawing::Graphics^ Temp_20 = nullptr;
	System::Drawing::Point Temp_21;
	System::Drawing::Point Temp_22;
	System::Drawing::Color Temp_23;
	System::Boolean Temp_24 = false;
	//local variables.
	System::Drawing::Color V_0;
	System::Drawing::Pen^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Drawing::Rectangle V_8;
	System::Drawing::Rectangle V_9;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_10
	IL_0006:            switch(V_10){case 0:goto IL_01c1;case 1:goto IL_0121;case 2:goto IL_006a;case 3:goto IL_0080;case 4:goto IL_0159;case 5:goto IL_013a;case 6:goto IL_0057;case 7:goto IL_0044;};//switch				(IL_01c1,IL_0121,IL_006a,IL_0080,IL_0159,IL_013a,IL_0057,IL_0044)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldarg.1
	IL_002d:            System::Windows::Forms::Control::OnPaint(A_0);              //call				void System::Windows::Forms::Control::OnPaint(System::Windows::Forms::PaintEventArgs^)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_0=this->ForeColor;                                     //callvirt				System::Drawing::Color System::Windows::Forms::Control::get_ForeColor()
	IL_0038:            V_0=Temp_0;                                                 //stloc.0
	IL_0039:                                                                        //ldc.i4				0x7
	IL_003e:            V_10=7;                                                     //stloc				V_10
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_24=this->F_x2;                                         //ldfld				System::Boolean Root::T_x78::T_x1 F_x2
	IL_004a:            if(Temp_24)goto IL_0085;                                    //brtrue.s				IL_0085
	IL_004c:                                                                        //ldc.i4				0x6
	IL_0051:            V_10=6;                                                     //stloc				V_10
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:            goto IL_013f;                                               //br				IL_013f
	IL_005c:            goto IL_005f;                                               //br.s				IL_005f
	IL_005e:                                                                        //break
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_10=2;                                                     //stloc				V_10
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:                                                                        //ldarg.0
	IL_006b:            Temp_2=this->F_x1;                                          //ldfld				System::Boolean Root::T_x78::T_x1 F_x1
	IL_0070:            if(!Temp_2)goto IL_01c3;                                    //brfalse				IL_01c3
	IL_0075:                                                                        //ldc.i4				0x3
	IL_007a:            V_10=3;                                                     //stloc				V_10
	IL_007e:            /*goto IL_0002;*/goto IL_0080;                              //br.s				IL_0002
	IL_0080:            goto IL_015e;                                               //br				IL_015e
	IL_0085:                                                                        //ldloc.0
	IL_0086:                                                                        //ldc.r4				1.
	IL_008b:            Temp_12=gcnew System::Drawing::Pen(V_0,safe_cast<System::Single>(1));//newobj				void System::Drawing::Pen::.ctor(System::Drawing::Color,System::Single)
	IL_0090:            V_1=Temp_12;                                                //stloc.1
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_13=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_0097:                                                                        //conv.r8
	IL_0098:                                                                        //ldc.r8				0.5
	IL_00a1:                                                                        //mul
	IL_00a2:                                                                        //conv.i4
	IL_00a3:            V_2=safe_cast<System::Int32>((safe_cast<System::Double>(Temp_13) * 0.5));//stloc.2
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:            Temp_14=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_00aa:                                                                        //ldloc.2
	IL_00ab:                                                                        //sub
	IL_00ac:                                                                        //ldc.i4.2
	IL_00ad:                                                                        //div
	IL_00ae:            V_3=((Temp_14 - V_2) / 2);                                  //stloc.3
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_15=this->Width;                                        //call				System::Int32 System::Windows::Forms::Control::get_Width()
	IL_00b5:                                                                        //ldloc.2
	IL_00b6:                                                                        //sub
	IL_00b7:                                                                        //ldloc.3
	IL_00b8:                                                                        //sub
	IL_00b9:            V_4=((Temp_15 - V_2) - V_3);                                //stloc.s				V_4
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_16=this->Height;                                       //call				System::Int32 System::Windows::Forms::Control::get_Height()
	IL_00c1:                                                                        //ldloc.2
	IL_00c2:                                                                        //sub
	IL_00c3:                                                                        //ldloc.3
	IL_00c4:                                                                        //sub
	IL_00c5:            V_5=((Temp_16 - V_2) - V_3);                                //stloc.s				V_5
	IL_00c7:                                                                        //ldloc.s				V_4
	IL_00c9:                                                                        //ldloc.2
	IL_00ca:                                                                        //add
	IL_00cb:                                                                        //ldc.i4.1
	IL_00cc:                                                                        //sub
	IL_00cd:            V_6=((V_4 + V_2) - 1);                                      //stloc.s				V_6
	IL_00cf:                                                                        //ldloc.s				V_5
	IL_00d1:                                                                        //ldloc.2
	IL_00d2:                                                                        //add
	IL_00d3:                                                                        //ldc.i4.1
	IL_00d4:                                                                        //sub
	IL_00d5:            V_7=((V_5 + V_2) - 1);                                      //stloc.s				V_7
	IL_00d7:                                                                        //ldarg.1
	IL_00d8:            Temp_17=A_0->Graphics;                                      //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_00dd:                                                                        //ldloc.1
	IL_00de:                                                                        //ldloc.s				V_4
	IL_00e0:                                                                        //ldloc.s				V_5
	IL_00e2:            Temp_18=System::Drawing::Point(V_4,V_5);                    //newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_00e7:                                                                        //ldloc.s				V_7
	IL_00e9:                                                                        //ldloc.s				V_6
	IL_00eb:            Temp_19=System::Drawing::Point(V_7,V_6);                    //newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_00f0:            Temp_17->DrawLine(V_1,Temp_18,Temp_19);                     //callvirt				void System::Drawing::Graphics::DrawLine(System::Drawing::Pen^,System::Drawing::Point,System::Drawing::Point)
	IL_00f5:                                                                        //ldarg.1
	IL_00f6:            Temp_20=A_0->Graphics;                                      //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_00fb:                                                                        //ldloc.1
	IL_00fc:                                                                        //ldloc.s				V_7
	IL_00fe:                                                                        //ldloc.s				V_4
	IL_0100:            Temp_21=System::Drawing::Point(V_7,V_4);                    //newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0105:                                                                        //ldloc.s				V_5
	IL_0107:                                                                        //ldloc.s				V_6
	IL_0109:            Temp_22=System::Drawing::Point(V_5,V_6);                    //newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_010e:            Temp_20->DrawLine(V_1,Temp_21,Temp_22);                     //callvirt				void System::Drawing::Graphics::DrawLine(System::Drawing::Pen^,System::Drawing::Point,System::Drawing::Point)
	IL_0113:                                                                        //ldc.i4				0x1
	IL_0118:            V_10=1;                                                     //stloc				V_10
	IL_011c:            /*goto IL_0002;*/goto IL_0121;                              //br				IL_0002
	IL_0121:                                                                        //ldarg.0
	IL_0122:            Temp_1=this->Enabled;                                       //call				System::Boolean System::Windows::Forms::Control::get_Enabled()
	IL_0127:            if(!Temp_1)goto IL_01c3;                                    //brfalse				IL_01c3
	IL_012c:                                                                        //ldc.i4				0x5
	IL_0131:            V_10=5;                                                     //stloc				V_10
	IL_0135:            /*goto IL_0002;*/goto IL_013a;                              //br				IL_0002
	IL_013a:            goto IL_005c;                                               //br				IL_005c
	IL_013f:                                                                        //ldc.i4				0x80
	IL_0144:                                                                        //ldloc.0
	IL_0145:            Temp_23=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(128),V_0);//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Drawing::Color)
	IL_014a:            V_0=Temp_23;                                                //stloc.0
	IL_014b:                                                                        //ldc.i4				0x4
	IL_0150:            V_10=4;                                                     //stloc				V_10
	IL_0154:            /*goto IL_0002;*/goto IL_0159;                              //br				IL_0002
	IL_0159:            goto IL_0085;                                               //br				IL_0085
	IL_015e:                                                                        //ldloca.s				V_8
	IL_0160:                                                                        //ldarg.0
	IL_0161:            Temp_3=this->ClientRectangle;                               //call				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0166:            V_9=Temp_3;                                                 //stloc.s				V_9
	IL_0168:                                                                        //ldloca.s				V_9
	IL_016a:            Temp_4=V_9.Left;                                            //call				System::Int32 System::Drawing::Rectangle::get_Left()
	IL_016f:                                                                        //ldarg.0
	IL_0170:            Temp_5=this->ClientRectangle;                               //call				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0175:            V_9=Temp_5;                                                 //stloc.s				V_9
	IL_0177:                                                                        //ldloca.s				V_9
	IL_0179:            Temp_6=V_9.Top;                                             //call				System::Int32 System::Drawing::Rectangle::get_Top()
	IL_017e:                                                                        //ldarg.0
	IL_017f:            Temp_7=this->ClientRectangle;                               //call				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0184:            V_9=Temp_7;                                                 //stloc.s				V_9
	IL_0186:                                                                        //ldloca.s				V_9
	IL_0188:            Temp_8=V_9.Right;                                           //call				System::Int32 System::Drawing::Rectangle::get_Right()
	IL_018d:                                                                        //ldc.i4.1
	IL_018e:                                                                        //sub
	IL_018f:                                                                        //ldarg.0
	IL_0190:            Temp_9=this->ClientRectangle;                               //call				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0195:            V_9=Temp_9;                                                 //stloc.s				V_9
	IL_0197:                                                                        //ldloca.s				V_9
	IL_0199:            Temp_10=V_9.Bottom;                                         //call				System::Int32 System::Drawing::Rectangle::get_Bottom()
	IL_019e:                                                                        //ldc.i4.1
	IL_019f:                                                                        //sub
	IL_01a0:            V_8=System::Drawing::Rectangle(Temp_4,Temp_6,(Temp_8 - 1),(Temp_10 - 1));//call				void System::Drawing::Rectangle::.ctor(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_01a5:                                                                        //ldarg.1
	IL_01a6:            Temp_11=A_0->Graphics;                                      //callvirt				System::Drawing::Graphics^ System::Windows::Forms::PaintEventArgs::get_Graphics()
	IL_01ab:                                                                        //ldloc.1
	IL_01ac:                                                                        //ldloc.s				V_8
	IL_01ae:            Temp_11->DrawRectangle(V_1,V_8);                            //callvirt				void System::Drawing::Graphics::DrawRectangle(System::Drawing::Pen^,System::Drawing::Rectangle)
	IL_01b3:                                                                        //ldc.i4				0x0
	IL_01b8:            V_10=0;                                                     //stloc				V_10
	IL_01bc:            /*goto IL_0002;*/goto IL_01c1;                              //br				IL_0002
	IL_01c1:            goto IL_01c3;                                               //br.s				IL_01c3
	IL_01c3:            return;                                                     //ret

}
inline void Root::T_x78::T_x1::M_x12(System::Windows::Forms::MouseEventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseMove by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Rectangle Temp_0;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Drawing::Point Temp_3;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	//local variables.
	System::Boolean V_0 = false;
	System::Drawing::Rectangle V_1;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0045;case 1:goto IL_0073;case 2:goto IL_0059;};//switch				(IL_0045,IL_0073,IL_0059)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->ClientRectangle;                               //call				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0020:            V_1=Temp_0;                                                 //stloc.1
	IL_0021:                                                                        //ldloca.s				V_1
	IL_0023:                                                                        //ldarg.1
	IL_0024:            Temp_1=A_0->X;                                              //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_X()
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_2=A_0->Y;                                              //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_Y()
	IL_002f:            Temp_3=System::Drawing::Point(Temp_1,Temp_2);               //newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0034:            Temp_4=V_1.Contains(Temp_3);                                //call				System::Boolean System::Drawing::Rectangle::Contains(System::Drawing::Point)
	IL_0039:            V_0=Temp_4;                                                 //stloc.0
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_2=0;                                                      //stloc				V_2
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldloc.0
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_5=this->F_x1;                                          //ldfld				System::Boolean Root::T_x78::T_x1 F_x1
	IL_004c:            if(V_0==Temp_5)goto IL_0075;                                //beq.s				IL_0075
	IL_004e:                                                                        //ldc.i4				0x2
	IL_0053:            V_2=2;                                                      //stloc				V_2
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_005b;                                               //br.s				IL_005b
	IL_005b:                                                                        //ldarg.0
	IL_005c:                                                                        //ldloc.0
	IL_005d:            this->F_x1=V_0;                                             //stfld				System::Boolean Root::T_x78::T_x1 F_x1
	IL_0062:                                                                        //ldarg.0
	IL_0063:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_0068:                                                                        //ldc.i4				0x1
	IL_006d:            V_2=1;                                                      //stloc				V_2
	IL_0071:            /*goto IL_0002;*/goto IL_0073;                              //br.s				IL_0002
	IL_0073:            goto IL_0075;                                               //br.s				IL_0075
	IL_0075:                                                                        //ldarg.0
	IL_0076:                                                                        //ldarg.1
	IL_0077:            System::Windows::Forms::Control::OnMouseMove(A_0);          //call				void System::Windows::Forms::Control::OnMouseMove(System::Windows::Forms::MouseEventArgs^)
	IL_007c:            return;                                                     //ret

}
inline void Root::T_x78::T_x1::M_x2(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseEnter by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x1=true;                                            //stfld				System::Boolean Root::T_x78::T_x1 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            System::Windows::Forms::Control::OnMouseEnter(A_0);         //call				void System::Windows::Forms::Control::OnMouseEnter(System::EventArgs^)
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x78::T_x1::M_x2(System::Windows::Forms::MouseEventArgs^ A_0)
//System::Windows::Forms::Control^::OnMouseDown by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::MouseButtons Temp_0 = (System::Windows::Forms::MouseButtons)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_003a;case 1:goto IL_0054;case 2:goto IL_000b;};//switch				(IL_003a,IL_0054,IL_000b)
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_0=A_0->Button;                                         //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_0028:                                                                        //ldc.i4				0x100000
	IL_002d:            if(safe_cast<System::Int32>(Temp_0)!=1048576)goto IL_0061;  //bne.un.s				IL_0061
	IL_002f:                                                                        //ldc.i4				0x0
	IL_0034:            V_0=0;                                                      //stloc				V_0
	IL_0038:            /*goto IL_000d;*/goto IL_003a;                              //br.s				IL_000d
	IL_003a:            goto IL_003c;                                               //br.s				IL_003c
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldc.i4.1
	IL_003e:            this->F_x2=true;                                            //stfld				System::Boolean Root::T_x78::T_x1 F_x2
	IL_0043:                                                                        //ldarg.0
	IL_0044:            this->Invalidate();                                         //call				void System::Windows::Forms::Control::Invalidate()
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_0=1;                                                      //stloc				V_0
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldc.i4.4
	IL_0055:                                                                        //dup
	IL_0056:                                                                        //dup
	IL_0057:                                                                        //ldc.i4.2
	IL_0058:                                                                        //sub
	IL_0059:                                                                        //blt				IL_0055
	IL_005e:                                                                        //pop
	IL_005f:            goto IL_0061;                                               //br.s				IL_0061
	IL_0061:                                                                        //ldarg.0
	IL_0062:                                                                        //ldarg.1
	IL_0063:            System::Windows::Forms::Control::OnMouseDown(A_0);          //call				void System::Windows::Forms::Control::OnMouseDown(System::Windows::Forms::MouseEventArgs^)
	IL_0068:            return;                                                     //ret

}
