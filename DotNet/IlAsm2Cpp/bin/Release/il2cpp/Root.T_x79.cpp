#include "global_xref.h"

inline Root::T_x79::T_x79()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_1 = nullptr;
	System::Windows::Forms::ProgressBar^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Windows::Forms::ProgressBar();         //newobj				void System::Windows::Forms::ProgressBar::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Windows::Forms::StatusBar();*/                    //call				void System::Windows::Forms::StatusBar::.ctor()
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_1=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_001d:            Temp_1->Add(safe_cast<System::Windows::Forms::Control^>(Temp_2));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0022:            return;                                                     //ret

}
inline System::Int32 Root::T_x79::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0006:            Temp_1=Temp_0->Maximum;                                     //callvirt				System::Int32 System::Windows::Forms::ProgressBar::get_Maximum()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x79::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::StatusBar^::OnResize by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	System::Drawing::Point Temp_1;
	System::Windows::Forms::ProgressBar^ Temp_2 = nullptr;
	System::Drawing::Size Temp_3;
	System::Int32 Temp_4 = 0;
	System::Drawing::Size Temp_5;
	System::Int32 Temp_6 = 0;
	System::Drawing::Size Temp_7;
	System::Int32 Temp_8 = 0;
	System::Drawing::Size Temp_9;
	//local variables.
	System::Drawing::Size V_0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            System::Windows::Forms::StatusBar::OnResize(A_0);           //call				void System::Windows::Forms::StatusBar::OnResize(System::EventArgs^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0010:                                                                        //ldc.i4.4
	IL_0011:                                                                        //ldc.i4.4
	IL_0012:            Temp_1=System::Drawing::Point(safe_cast<System::Int32>(4),safe_cast<System::Int32>(4));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0017:            Temp_0->Location=Temp_1;                                    //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_3=this->ClientSize;                                    //call				System::Drawing::Size System::Windows::Forms::Control::get_ClientSize()
	IL_0028:            V_0=Temp_3;                                                 //stloc.0
	IL_0029:                                                                        //ldloca.s				V_0
	IL_002b:            Temp_4=V_0.Width;                                           //call				System::Int32 System::Drawing::Size::get_Width()
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_5=this->ClientSize;                                    //call				System::Drawing::Size System::Windows::Forms::Control::get_ClientSize()
	IL_0036:            V_0=Temp_5;                                                 //stloc.0
	IL_0037:                                                                        //ldloca.s				V_0
	IL_0039:            Temp_6=V_0.Height;                                          //call				System::Int32 System::Drawing::Size::get_Height()
	IL_003e:                                                                        //sub
	IL_003f:                                                                        //ldc.i4.8
	IL_0040:                                                                        //sub
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_7=this->ClientSize;                                    //call				System::Drawing::Size System::Windows::Forms::Control::get_ClientSize()
	IL_0047:            V_0=Temp_7;                                                 //stloc.0
	IL_0048:                                                                        //ldloca.s				V_0
	IL_004a:            Temp_8=V_0.Height;                                          //call				System::Int32 System::Drawing::Size::get_Height()
	IL_004f:                                                                        //ldc.i4.6
	IL_0050:                                                                        //sub
	IL_0051:            Temp_9=System::Drawing::Size(((Temp_4 - Temp_6) - 8),(Temp_8 - 6));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0056:            Temp_2->Size=Temp_9;                                        //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_005b:                                                                        //ldarg.0
	IL_005c:            this->Refresh();                                            //callvirt				void System::Windows::Forms::Control::Refresh()
	IL_0061:            return;                                                     //ret

}
inline void Root::T_x79::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::ProgressBar^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0007:            Temp_1=Temp_0->Value;                                       //callvirt				System::Int32 System::Windows::Forms::ProgressBar::get_Value()
	IL_000c:            if(A_0==Temp_1)goto IL_001e;                                //beq.s				IL_001e
	IL_000e:            goto IL_0010;                                               //br.s				IL_0010
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_2->Value=A_0;                                          //callvirt				void System::Windows::Forms::ProgressBar::set_Value(System::Int32)
	IL_001c:            goto IL_001e;                                               //br.s				IL_001e
	IL_001e:            return;                                                     //ret

}
inline System::Int32 Root::T_x79::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0006:            Temp_1=Temp_0->Value;                                       //callvirt				System::Int32 System::Windows::Forms::ProgressBar::get_Value()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x79::M_x12(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Maximum=A_0;                                        //callvirt				void System::Windows::Forms::ProgressBar::set_Maximum(System::Int32)
	IL_000c:            return;                                                     //ret

}
inline System::Int32 Root::T_x79::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0006:            Temp_1=Temp_0->Minimum;                                     //callvirt				System::Int32 System::Windows::Forms::ProgressBar::get_Minimum()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x79::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ProgressBar^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::ProgressBar^ Root::T_x79 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Minimum=A_0;                                        //callvirt				void System::Windows::Forms::ProgressBar::set_Minimum(System::Int32)
	IL_000c:            return;                                                     //ret

}
