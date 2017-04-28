#include "global_xref.h"

inline Root::T_x66::T_x66()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Drawing::Font^ Temp_3 = nullptr;
	System::Drawing::Size Temp_4;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_0=13;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::Form();*/                         //call				void System::Windows::Forms::Form::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldstr				L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246"
	IL_0015:                                                                        //ldloc				V_0
	IL_0019:            Temp_0=a(L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001e:            Temp_1=Root::T_x128::M_x1(Temp_0);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0023:            this->Text=Temp_1;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldnull
	IL_002a:            this->Icon=safe_cast<System::Drawing::Icon^>(nullptr);      //call				void System::Windows::Forms::Form::set_Icon(System::Drawing::Icon^)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldstr				L"\x7F2A\x4C2C\x472E\x5E30\x5E32\x5434"
	IL_0035:                                                                        //ldloc				V_0
	IL_0039:            Temp_2=a(L"\x7F2A\x4C2C\x472E\x5E30\x5E32\x5434",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003e:                                                                        //ldc.r4				8.25
	IL_0043:            Temp_3=gcnew System::Drawing::Font(Temp_2,safe_cast<System::Single>(8.25));//newobj				void System::Drawing::Font::.ctor(System::String^,System::Single)
	IL_0048:            this->Font=Temp_3;                                          //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldc.i4.3
	IL_004f:            this->FormBorderStyle=safe_cast<System::Windows::Forms::FormBorderStyle>(3);//call				void System::Windows::Forms::Form::set_FormBorderStyle(System::Windows::Forms::FormBorderStyle)
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldc.i4.1
	IL_0056:            this->ControlBox=true;                                      //call				void System::Windows::Forms::Form::set_ControlBox(System::Boolean)
	IL_005b:                                                                        //ldarg.0
	IL_005c:                                                                        //ldc.i4.0
	IL_005d:            this->MaximizeBox=false;                                    //call				void System::Windows::Forms::Form::set_MaximizeBox(System::Boolean)
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldc.i4.0
	IL_0064:            this->MinimizeBox=false;                                    //call				void System::Windows::Forms::Form::set_MinimizeBox(System::Boolean)
	IL_0069:                                                                        //ldarg.0
	IL_006a:                                                                        //ldc.i4.0
	IL_006b:            this->ShowInTaskbar=false;                                  //call				void System::Windows::Forms::Form::set_ShowInTaskbar(System::Boolean)
	IL_0070:                                                                        //ldarg.0
	IL_0071:                                                                        //ldc.i4.4
	IL_0072:            this->StartPosition=safe_cast<System::Windows::Forms::FormStartPosition>(4);//call				void System::Windows::Forms::Form::set_StartPosition(System::Windows::Forms::FormStartPosition)
	IL_0077:                                                                        //ldarg.0
	IL_0078:                                                                        //ldc.i4.1
	IL_0079:            this->AutoScale=true;                                       //call				void System::Windows::Forms::Form::set_AutoScale(System::Boolean)
	IL_007e:                                                                        //ldarg.0
	IL_007f:                                                                        //ldc.i4.5
	IL_0080:                                                                        //ldc.i4.s				14
	IL_0082:            Temp_4=System::Drawing::Size(safe_cast<System::Int32>(5),safe_cast<System::Int32>(14));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0087:            this->AutoScaleBaseSize=Temp_4;                             //callvirt				void System::Windows::Forms::Form::set_AutoScaleBaseSize(System::Drawing::Size)
	IL_008c:            return;                                                     //ret

}
inline void Root::T_x66::M_x1(System::Windows::Forms::Message% A_0)
//System::Windows::Forms::Form^::WndProc by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::EventArgs^ Temp_1 = nullptr;
	System::IntPtr Temp_2 = (System::IntPtr)0;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::IntPtr V_0 = (System::IntPtr)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_005e;case 1:goto IL_0072;case 2:goto IL_000b;case 3:goto IL_003e;};//switch				(IL_005e,IL_0072,IL_000b,IL_003e)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_3=A_0.Msg;                                             //call				System::Int32 System::Windows::Forms::Message::get_Msg()
	IL_002f:                                                                        //ldc.i4.s				24
	IL_0031:            if(Temp_3!=24)goto IL_0074;                                 //bne.un.s				IL_0074
	IL_0033:                                                                        //ldc.i4				0x3
	IL_0038:            V_1=3;                                                      //stloc				V_1
	IL_003c:            /*goto IL_000d;*/goto IL_003e;                              //br.s				IL_000d
	IL_003e:            goto IL_004c;                                               //br.s				IL_004c
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0046:            this->OnVisibleChanged(Temp_1);                             //callvirt				void System::Windows::Forms::Control::OnVisibleChanged(System::EventArgs^)
	IL_004b:            return;                                                     //ret
	IL_004c:                                                                        //ldarg.1
	IL_004d:            Temp_2=A_0.WParam;                                          //call				System::IntPtr System::Windows::Forms::Message::get_WParam()
	IL_0052:            V_0=Temp_2;                                                 //stloc.0
	IL_0053:                                                                        //ldc.i4				0x0
	IL_0058:            V_1=0;                                                      //stloc				V_1
	IL_005c:            /*goto IL_000d;*/goto IL_005e;                              //br.s				IL_000d
	IL_005e:                                                                        //ldloca.s				V_0
	IL_0060:            Temp_0=V_0.ToInt32();                                       //call				System::Int32 System::IntPtr::ToInt32()
	IL_0065:            if(Temp_0!=0)goto IL_0074;                                  //brtrue.s				IL_0074
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_1=1;                                                      //stloc				V_1
	IL_0070:            /*goto IL_000d;*/goto IL_0072;                              //br.s				IL_000d
	IL_0072:            goto IL_0040;                                               //br.s				IL_0040
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldarg.1
	IL_0076:            System::Windows::Forms::Form::WndProc(A_0);                 //call				void System::Windows::Forms::Form::WndProc(System::Windows::Forms::Message%)
	IL_007b:            return;                                                     //ret

}
inline System::Boolean Root::T_x66::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::DialogResult Temp_0 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->ShowDialog();                                  //call				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_0006:                                                                        //ldc.i4.1
	IL_0007:                                                                        //ceq
	IL_0009:            return (safe_cast<System::Int32>(Temp_0) == 1);             //ret

}
