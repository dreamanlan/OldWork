#include "global_xref.h"

inline Root::T_x47::T_x47()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Root::T_x58^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0006:            this->F_x13=Temp_0;                                         //stfld				System::String^ Root::T_x47 F_x13
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0011:            this->F_x8=Temp_1;                                          //stfld				System::String^ Root::T_x47 F_x8
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4.1
	IL_0018:            this->F_x5=true;                                            //stfld				System::Boolean Root::T_x47 F_x5
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            this->F_x9=false;                                           //stfld				System::Boolean Root::T_x47 F_x9
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldnull
	IL_0026:            this->F_x4=safe_cast<Root::T_x58^>(nullptr);                //stfld				Root::T_x58^ Root::T_x47 F_x4
	IL_002b:                                                                        //ldarg.0
	IL_002c:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_2=gcnew Root::T_x58(this);                             //newobj				void Root::T_x58::.ctor(Root::T_x47^)
	IL_0038:            this->F_x4=Temp_2;                                          //stfld				Root::T_x58^ Root::T_x47 F_x4
	IL_003d:                                                                        //ldarg.0
	IL_003e:                                                                        //ldc.i4.5
	IL_003f:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldc.i4.0
	IL_0046:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldc.i4.2
	IL_004d:                                                                        //ldc.i4.1
	IL_004e:            this->SetStyle(safe_cast<System::Windows::Forms::ControlStyles>(2),true);//call				void System::Windows::Forms::Control::SetStyle(System::Windows::Forms::ControlStyles,System::Boolean)
	IL_0053:                                                                        //ldarg.0
	IL_0054:                                                                        //ldc.i4.1
	IL_0055:            this->M_x2(true);                                           //call				void Root::T_x47::M_x2(System::Boolean)
	IL_005a:            return;                                                     //ret

}
inline System::String^ Root::T_x47::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Guid Temp_5;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Guid V_2;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_4=7;                                                      //stloc				V_4
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_00b3;case 1:goto IL_0078;case 2:goto IL_0034;case 3:goto IL_009d;};//switch				(IL_00b3,IL_0078,IL_0034,IL_009d)
	IL_0024:                                                                        //ldnull
	IL_0025:            V_0=safe_cast<System::String^>(nullptr);                    //stloc.0
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldc.i4				0x2
	IL_002e:            V_3=2;                                                      //stloc				V_3
	IL_0032:            /*goto IL_000b;*/goto IL_0034;                              //br.s				IL_000b
	IL_0034:            goto IL_0067;                                               //br.s				IL_0067
	IL_003401:          try{
	IL_0036:            Temp_0=System::IO::Path::GetTempFileName();                 //call				System::String^ System::IO::Path::GetTempFileName()
	IL_003b:            V_1=Temp_0;                                                 //stloc.1
	IL_003c:            goto IL_007a;                                               //leave.s				IL_007a
	                    ;}
	                    catch(System::IO::IOException^ Ex_003C02){
	IL_003e:                                                                        //pop
	IL_003f:                                                                        //ldstr				L"\x0024\x7326\x6C28\x662A\x7D2C\x0A2E"
	IL_0044:                                                                        //ldloc				V_4
	IL_0048:            Temp_3=a(L"\x0024\x7326\x6C28\x662A\x7D2C\x0A2E",V_4);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004d:            Temp_4=System::Environment::ExpandEnvironmentVariables(Temp_3);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_0052:            Temp_5=System::Guid::NewGuid();                             //call				System::Guid System::Guid::NewGuid()
	IL_0057:            V_2=Temp_5;                                                 //stloc.2
	IL_0058:                                                                        //ldloca.s				V_2
	IL_005a:            Temp_6=V_2.ToString();                                      //call				System::String^ System::Guid::ToString()
	IL_005f:            Temp_7=System::IO::Path::Combine(Temp_4,Temp_6);            //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_0064:            V_1=Temp_7;                                                 //stloc.1
	IL_0065:            goto IL_007a;                                               //leave.s				IL_007a
	                    ;}
	IL_0067:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_006c:            V_1=Temp_1;                                                 //stloc.1
	IL_006d:                                                                        //ldc.i4				0x1
	IL_0072:            V_3=1;                                                      //stloc				V_3
	IL_0076:            /*goto IL_000b;*/goto IL_0078;                              //br.s				IL_000b
	IL_0078:            /*goto IL_0036;*/goto IL_003401;                            //br.s				IL_0036
	IL_007a:                                                                        //ldloc.1
	IL_007b:                                                                        //ldstr				L"\x0B24\x4F26\x5D28\x462A"
	IL_0080:                                                                        //ldloc				V_4
	IL_0084:            Temp_8=a(L"\x0B24\x4F26\x5D28\x462A",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:            Temp_9=System::IO::Path::ChangeExtension(V_1,Temp_8);       //call				System::String^ System::IO::Path::ChangeExtension(System::String^,System::String^)
	IL_008e:            V_0=Temp_9;                                                 //stloc.0
	IL_008f:                                                                        //ldc.i4				0x3
	IL_0094:            V_3=3;                                                      //stloc				V_3
	IL_0098:            /*goto IL_000b;*/goto IL_009d;                              //br				IL_000b
	IL_009d:                                                                        //ldloc.0
	IL_009e:            Temp_2=System::IO::File::Exists(V_0);                       //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_00a3:            if(Temp_2)goto IL_0067;                                     //brtrue.s				IL_0067
	IL_00a5:                                                                        //ldc.i4				0x0
	IL_00aa:            V_3=0;                                                      //stloc				V_3
	IL_00ae:            /*goto IL_000b;*/goto IL_00b3;                              //br				IL_000b
	IL_00b3:            goto IL_00b5;                                               //br.s				IL_00b5
	IL_00b5:                                                                        //ldloc.0
	IL_00b6:            return V_0;                                                 //ret

}
inline void Root::T_x47::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnLostFocus by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::OnLostFocus(A_0);          //call				void System::Windows::Forms::Control::OnLostFocus(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_000d:                                                                        //ldc.i4.s				-5
	IL_000f:            Temp_0->M_x8(safe_cast<System::Int32>(-5));                 //callvirt				void Root::T_x58::M_x8(System::Int32)
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x47::M_x1(System::Int32 A_0,System::Int32 A_1,System::Int32 A_2,System::Int32 A_3,System::Windows::Forms::BoundsSpecified A_4)
//System::Windows::Forms::Control^::SetBoundsCore by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Rectangle Temp_0;
	Root::T_x58^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	Root::T_x58^ Temp_6 = nullptr;
	//local variables.
	System::Drawing::Rectangle V_0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_004d;case 1:goto IL_003a;case 2:goto IL_0088;};//switch				(IL_004d,IL_003a,IL_0088)
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldarg.1
	IL_0024:                                                                        //ldarg.2
	IL_0025:                                                                        //ldarg.3
	IL_0026:                                                                        //ldarg.s				A_3
	IL_0028:                                                                        //ldarg.s				A_4
	IL_002a:            System::Windows::Forms::Control::SetBoundsCore(A_0,A_1,A_2,A_3,A_4);//call				void System::Windows::Forms::Control::SetBoundsCore(System::Int32,System::Int32,System::Int32,System::Int32,System::Windows::Forms::BoundsSpecified)
	IL_002f:                                                                        //ldc.i4				0x1
	IL_0034:            V_1=1;                                                      //stloc				V_1
	IL_0038:            /*goto IL_000d;*/goto IL_003a;                              //br.s				IL_000d
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_6=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0040:            if(Temp_6==nullptr)goto IL_008a;                            //brfalse.s				IL_008a
	IL_0042:                                                                        //ldc.i4				0x0
	IL_0047:            V_1=0;                                                      //stloc				V_1
	IL_004b:            /*goto IL_000d;*/goto IL_004d;                              //br.s				IL_000d
	IL_004d:            goto IL_004f;                                               //br.s				IL_004f
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_0=this->ClientRectangle;                               //call				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0055:            V_0=Temp_0;                                                 //stloc.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_1=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_005c:                                                                        //ldloca.s				V_0
	IL_005e:            Temp_2=V_0.Left;                                            //call				System::Int32 System::Drawing::Rectangle::get_Left()
	IL_0063:                                                                        //ldloca.s				V_0
	IL_0065:            Temp_3=V_0.Top;                                             //call				System::Int32 System::Drawing::Rectangle::get_Top()
	IL_006a:                                                                        //ldloca.s				V_0
	IL_006c:            Temp_4=V_0.Right;                                           //call				System::Int32 System::Drawing::Rectangle::get_Right()
	IL_0071:                                                                        //ldloca.s				V_0
	IL_0073:            Temp_5=V_0.Bottom;                                          //call				System::Int32 System::Drawing::Rectangle::get_Bottom()
	IL_0078:            Temp_1->M_x1(Temp_2,Temp_3,Temp_4,Temp_5);                  //callvirt				void Root::T_x58::M_x1(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_007d:                                                                        //ldc.i4				0x2
	IL_0082:            V_1=2;                                                      //stloc				V_1
	IL_0086:            /*goto IL_000d;*/goto IL_0088;                              //br.s				IL_000d
	IL_0088:            goto IL_008a;                                               //br.s				IL_008a
	IL_008a:            return;                                                     //ret

}
inline void Root::T_x47::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	Root::T_x18::T_x19^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	//local variables.
	System::Object^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Object^ V_2 = nullptr;
	System::Object^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_4=0;                                                      //stloc				V_4
	IL_0009:            goto IL_000d;                                               //br.s				IL_000d
	IL_000b:            goto IL_0029;                                               //br.s				IL_0029
	IL_000d:            goto IL_0010;                                               //br.s				IL_0010
	IL_000f:                                                                        //break
	IL_0010:                                                                        //ldloc				V_4
	IL_0014:            switch(V_4){case 0:goto IL_000b;case 1:goto IL_0080;case 2:goto IL_003c;case 3:goto IL_0097;};//switch				(IL_000b,IL_0080,IL_003c,IL_0097)
	IL_0029:                                                                        //ldarg.0
	IL_002a:            Temp_5=this->IsHandleCreated;                               //call				System::Boolean System::Windows::Forms::Control::get_IsHandleCreated()
	IL_002f:            if(!Temp_5)goto IL_0082;                                    //brfalse.s				IL_0082
	IL_0031:                                                                        //ldc.i4				0x2
	IL_0036:            V_4=2;                                                      //stloc				V_4
	IL_003a:            goto IL_000d;                                               //br.s				IL_000d
	IL_003c:            goto IL_005c;                                               //br.s				IL_005c
	IL_003C01:          try{
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0044:            Temp_1=Temp_0->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_0049:                                                                        //ldarg.1
	IL_004a:                                                                        //ldloca.s				V_0
	IL_004c:                                                                        //ldloca.s				V_1
	IL_004e:                                                                        //ldloca.s				V_2
	IL_0050:                                                                        //ldloca.s				V_3
	IL_0052:            Temp_1->M_x1(A_0,safe_cast<System::Object^%>(V_0),safe_cast<System::Object^%>(V_1),safe_cast<System::Object^%>(V_2),safe_cast<System::Object^%>(V_3));//callvirt				void Root::T_x18::T_x19::M_x1(System::String^,System::Object^%,System::Object^%,System::Object^%,System::Object^%)
	IL_0057:            goto IL_0099;                                               //leave.s				IL_0099
	                    ;}
	                    catch(System::Runtime::InteropServices::COMException^ Ex_005702){
	IL_0059:                                                                        //pop
	IL_005a:            goto IL_0099;                                               //leave.s				IL_0099
	                    ;}
	IL_005c:                                                                        //ldc.i4.0
	IL_005d:                                                                        //box				System::Int32
	IL_0062:            V_0=safe_cast<System::Object^>(0);                          //stloc.0
	IL_0063:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0068:            V_1=safe_cast<System::Object^>(Temp_2);                     //stloc.1
	IL_0069:            Temp_3=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_006e:            V_2=safe_cast<System::Object^>(Temp_3);                     //stloc.2
	IL_006f:            Temp_4=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0074:            V_3=safe_cast<System::Object^>(Temp_4);                     //stloc.3
	IL_0075:                                                                        //ldc.i4				0x1
	IL_007a:            V_4=1;                                                      //stloc				V_4
	IL_007e:            goto IL_000d;                                               //br.s				IL_000d
	IL_0080:            /*goto IL_003e;*/goto IL_003C01;                            //br.s				IL_003e
	IL_0082:                                                                        //ldarg.0
	IL_0083:                                                                        //ldarg.1
	IL_0084:            this->F_x13=A_0;                                            //stfld				System::String^ Root::T_x47 F_x13
	IL_0089:                                                                        //ldc.i4				0x3
	IL_008e:            V_4=3;                                                      //stloc				V_4
	IL_0092:            goto IL_000d;                                               //br				IL_000d
	IL_0097:            goto IL_0099;                                               //br.s				IL_0099
	IL_0099:            return;                                                     //ret

}
inline System::Boolean Root::T_x47::M_x1(System::Windows::Forms::Keys A_0)
//System::Windows::Forms::Control^::IsInputKey by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldc.i4.s				27
	IL_0003:            if(safe_cast<System::Int32>(A_0)!=27)goto IL_0009;          //bne.un.s				IL_0009
	IL_0005:            goto IL_0007;                                               //br.s				IL_0007
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            return false;                                               //ret
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_0=System::Windows::Forms::Control::IsInputKey(A_0);    //call				System::Boolean System::Windows::Forms::Control::IsInputKey(System::Windows::Forms::Keys)
	IL_0010:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x47::M_x1(System::Windows::Forms::Message% A_0)
//System::Windows::Forms::Control^::PreProcessMessage by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Root::T_x18::T_x17^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::IntPtr Temp_3 = (System::IntPtr)0;
	System::IntPtr Temp_4 = (System::IntPtr)0;
	System::IntPtr Temp_5 = (System::IntPtr)0;
	Root::T_x58^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Boolean Temp_8 = false;
	System::IntPtr Temp_9 = (System::IntPtr)0;
	System::Int32 Temp_10 = 0;
	System::Windows::Forms::Keys Temp_11 = (System::Windows::Forms::Keys)0;
	System::Int32 Temp_12 = 0;
	System::Boolean Temp_13 = false;
	//local variables.
	System::Windows::Forms::Keys V_0 = (System::Windows::Forms::Keys)0;
	Root::T_x18::T_x17^ V_1 = nullptr;
	System::Windows::Forms::Keys V_2 = (System::Windows::Forms::Keys)0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_3=1;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003e;                                               //br.s				IL_003e
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_013e;case 1:goto IL_000b;case 2:goto IL_00c9;case 3:goto IL_0154;case 4:goto IL_00b9;case 5:goto IL_009a;case 6:goto IL_0118;case 7:goto IL_0051;case 8:goto IL_00ea;case 9:goto IL_00fa;};//switch				(IL_013e,IL_000b,IL_00c9,IL_0154,IL_00b9,IL_009a,IL_0118,IL_0051,IL_00ea,IL_00fa)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_13=this->F_x9;                                         //ldfld				System::Boolean Root::T_x47 F_x9
	IL_0044:            if(Temp_13)goto IL_0056;                                    //brtrue.s				IL_0056
	IL_0046:                                                                        //ldc.i4				0x7
	IL_004b:            V_3=7;                                                      //stloc				V_3
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:            goto IL_00ec;                                               //br				IL_00ec
	IL_0056:            Temp_1=gcnew Root::T_x18::T_x17();                          //newobj				void Root::T_x18::T_x17::.ctor()
	IL_005b:            V_1=Temp_1;                                                 //stloc.1
	IL_005c:                                                                        //ldloc.1
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_2=A_0.Msg;                                             //call				System::Int32 System::Windows::Forms::Message::get_Msg()
	IL_0063:            V_1->F_x2=Temp_2;                                           //stfld				System::Int32 Root::T_x18::T_x17 F_x2
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldarg.1
	IL_006a:            Temp_3=A_0.WParam;                                          //call				System::IntPtr System::Windows::Forms::Message::get_WParam()
	IL_006f:            V_1->F_x12=Temp_3;                                          //stfld				System::IntPtr Root::T_x18::T_x17 F_x12
	IL_0074:                                                                        //ldloc.1
	IL_0075:                                                                        //ldarg.1
	IL_0076:            Temp_4=A_0.LParam;                                          //call				System::IntPtr System::Windows::Forms::Message::get_LParam()
	IL_007b:            V_1->F_x13=Temp_4;                                          //stfld				System::IntPtr Root::T_x18::T_x17 F_x13
	IL_0080:                                                                        //ldloc.1
	IL_0081:                                                                        //ldarg.1
	IL_0082:            Temp_5=A_0.HWnd;                                            //call				System::IntPtr System::Windows::Forms::Message::get_HWnd()
	IL_0087:            V_1->F_x1=Temp_5;                                           //stfld				System::IntPtr Root::T_x18::T_x17 F_x1
	IL_008c:                                                                        //ldc.i4				0x5
	IL_0091:            V_3=5;                                                      //stloc				V_3
	IL_0095:            /*goto IL_000d;*/goto IL_009a;                              //br				IL_000d
	IL_009a:                                                                        //ldarg.0
	IL_009b:            Temp_6=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            Temp_7=Temp_6->M_x1(V_1);                                   //callvirt				System::Boolean Root::T_x58::M_x1(Root::T_x18::T_x17^)
	IL_00a6:            if(!Temp_7)goto IL_0161;                                    //brfalse				IL_0161
	IL_00ab:                                                                        //ldc.i4				0x4
	IL_00b0:            V_3=4;                                                      //stloc				V_3
	IL_00b4:            /*goto IL_000d;*/goto IL_00b9;                              //br				IL_000d
	IL_00b9:            goto IL_011a;                                               //br.s				IL_011a
	IL_00bb:                                                                        //ldc.i4				0x2
	IL_00c0:            V_3=2;                                                      //stloc				V_3
	IL_00c4:            /*goto IL_000d;*/goto IL_00c9;                              //br				IL_000d
	IL_00c9:                                                                        //ldloc.2
	IL_00ca:                                                                        //ldc.i4				0x20058
	IL_00cf:            if(safe_cast<System::Int32>(V_2)!=131160)goto IL_0056;      //bne.un.s				IL_0056
	IL_00d1:                                                                        //ldc.i4.2
	IL_00d2:                                                                        //dup
	IL_00d3:                                                                        //dup
	IL_00d4:                                                                        //ldc.i4.7
	IL_00d5:                                                                        //add
	IL_00d6:                                                                        //bgt				IL_00d2
	IL_00db:                                                                        //pop
	IL_00dc:                                                                        //ldc.i4				0x8
	IL_00e1:            V_3=8;                                                      //stloc				V_3
	IL_00e5:            /*goto IL_000d;*/goto IL_00ea;                              //br				IL_000d
	IL_00ea:            goto IL_0159;                                               //br.s				IL_0159
	IL_00ec:                                                                        //ldc.i4				0x9
	IL_00f1:            V_3=9;                                                      //stloc				V_3
	IL_00f5:            /*goto IL_000d;*/goto IL_00fa;                              //br				IL_000d
	IL_00fa:                                                                        //ldarg.1
	IL_00fb:            Temp_12=A_0.Msg;                                            //call				System::Int32 System::Windows::Forms::Message::get_Msg()
	IL_0100:                                                                        //ldc.i4				0x100
	IL_0105:            if(Temp_12!=256)goto IL_0056;                               //bne.un				IL_0056
	IL_010a:                                                                        //ldc.i4				0x6
	IL_010f:            V_3=6;                                                      //stloc				V_3
	IL_0113:            /*goto IL_000d;*/goto IL_0118;                              //br				IL_000d
	IL_0118:            goto IL_011c;                                               //br.s				IL_011c
	IL_011a:                                                                        //ldc.i4.1
	IL_011b:            return true;                                                //ret
	IL_011c:                                                                        //ldarg.1
	IL_011d:            Temp_9=A_0.WParam;                                          //call				System::IntPtr System::Windows::Forms::Message::get_WParam()
	IL_0122:            Temp_10=safe_cast<System::Int32>(Temp_9);                   //call				System::Int32 System::IntPtr::op_Explicit(System::IntPtr)
	IL_0127:            Temp_11=System::Windows::Forms::Control::ModifierKeys;      //call				System::Windows::Forms::Keys System::Windows::Forms::Control::get_ModifierKeys()
	IL_012c:                                                                        //or
	IL_012d:            V_0=safe_cast<System::Windows::Forms::Keys>((Temp_10 | safe_cast<System::Int32>(Temp_11)));//stloc.0
	IL_012e:                                                                        //ldloc.0
	IL_012f:            V_2=V_0;                                                    //stloc.2
	IL_0130:                                                                        //ldc.i4				0x0
	IL_0135:            V_3=0;                                                      //stloc				V_3
	IL_0139:            /*goto IL_000d;*/goto IL_013e;                              //br				IL_000d
	IL_013e:                                                                        //ldloc.2
	IL_013f:                                                                        //ldc.i4				0x20043
	IL_0144:            if(safe_cast<System::Int32>(V_2)==131139)goto IL_0159;      //beq.s				IL_0159
	IL_0146:                                                                        //ldc.i4				0x3
	IL_014b:            V_3=3;                                                      //stloc				V_3
	IL_014f:            /*goto IL_000d;*/goto IL_0154;                              //br				IL_000d
	IL_0154:            goto IL_00bb;                                               //br				IL_00bb
	IL_0159:                                                                        //ldarg.0
	IL_015a:                                                                        //ldarg.1
	IL_015b:            Temp_0=System::Windows::Forms::Control::PreProcessMessage(A_0);//call				System::Boolean System::Windows::Forms::Control::PreProcessMessage(System::Windows::Forms::Message%)
	IL_0160:            return Temp_0;                                              //ret
	IL_0161:                                                                        //ldarg.0
	IL_0162:                                                                        //ldarg.1
	IL_0163:            Temp_8=System::Windows::Forms::Control::PreProcessMessage(A_0);//call				System::Boolean System::Windows::Forms::Control::PreProcessMessage(System::Windows::Forms::Message%)
	IL_0168:            return Temp_8;                                              //ret

}
inline void Root::T_x47::M_x1(Root::T_x49^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x13(A_0);                                           //callvirt				void Root::T_x47::M_x13(Root::T_x49^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x47::M_x1(Root::T_x50^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x50^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x50^ Root::T_x47 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x50
	IL_0012:            this->F_x2=safe_cast<Root::T_x50^>(Temp_1);                 //stfld				Root::T_x50^ Root::T_x47 F_x2
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x47::M_x1(Root::T_x51^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x2(A_0);                                            //callvirt				void Root::T_x47::M_x2(Root::T_x51^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x47::M_x1(Root::T_x52^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x52^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x52^ Root::T_x47 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x52
	IL_0012:            this->F_x1=safe_cast<Root::T_x52^>(Temp_1);                 //stfld				Root::T_x52^ Root::T_x47 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x47::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	Root::T_x18::T_x19^ Temp_1 = nullptr;
	Root::T_x18::T_x10 Temp_2 = (Root::T_x18::T_x10)0;
	Root::T_x58^ Temp_3 = nullptr;
	Root::T_x18::T_x19^ Temp_4 = nullptr;
	//local variables.
	Root::T_x18::T_x10 V_0 = (Root::T_x18::T_x10)0;
	System::Object^ V_1 = nullptr;
	System::Object^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0076;case 1:goto IL_003f;case 2:goto IL_004f;};//switch				(IL_0076,IL_003f,IL_004f)
	IL_0017:                                                                        //ldc.i4.2
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //dup
	IL_001a:                                                                        //ldc.i4.3
	IL_001b:                                                                        //add
	IL_001c:                                                                        //bgt				IL_0018
	IL_0021:                                                                        //pop
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0028:            Temp_1=Temp_0->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_002d:                                                                        //ldc.i4.6
	IL_002e:            Temp_2=Temp_1->M_x1(safe_cast<Root::T_x18::T_x55>(6));      //callvirt				Root::T_x18::T_x10 Root::T_x18::T_x19::M_x1(Root::T_x18::T_x55)
	IL_0033:            V_0=Temp_2;                                                 //stloc.0
	IL_0034:                                                                        //ldc.i4				0x1
	IL_0039:            V_3=1;                                                      //stloc				V_3
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:                                                                        //ldloc.0
	IL_0040:                                                                        //ldc.i4.2
	IL_0041:                                                                        //and
	IL_0042:            if((V_0 & safe_cast<Root::T_x18::T_x10>(2))==0)goto IL_0078;//brfalse.s				IL_0078
	IL_0044:                                                                        //ldc.i4				0x2
	IL_0049:            V_3=2;                                                      //stloc				V_3
	IL_004d:            /*goto IL_0002;*/goto IL_004f;                              //br.s				IL_0002
	IL_004f:            goto IL_0051;                                               //br.s				IL_0051
	IL_0051:                                                                        //ldnull
	IL_0052:            V_1=safe_cast<System::Object^>(nullptr);                    //stloc.1
	IL_0053:                                                                        //ldnull
	IL_0054:            V_2=safe_cast<System::Object^>(nullptr);                    //stloc.2
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_3=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_005b:            Temp_4=Temp_3->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_0060:                                                                        //ldc.i4.6
	IL_0061:                                                                        //ldc.i4.1
	IL_0062:                                                                        //ldloca.s				V_1
	IL_0064:                                                                        //ldloca.s				V_2
	IL_0066:            Temp_4->M_x1(safe_cast<Root::T_x18::T_x55>(6),safe_cast<Root::T_x18::T_x4>(1),safe_cast<System::Object^%>(V_1),safe_cast<System::Object^%>(V_2));//callvirt				void Root::T_x18::T_x19::M_x1(Root::T_x18::T_x55,Root::T_x18::T_x4,System::Object^%,System::Object^%)
	IL_006b:                                                                        //ldc.i4				0x0
	IL_0070:            V_3=0;                                                      //stloc				V_3
	IL_0074:            /*goto IL_0002;*/goto IL_0076;                              //br.s				IL_0002
	IL_0076:            goto IL_0078;                                               //br.s				IL_0078
	IL_0078:            return;                                                     //ret

}
inline void Root::T_x47::M_x12(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnHandleCreated by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	Root::T_x58^ Temp_1 = nullptr;
	Root::T_x18::T_x19^ Temp_2 = nullptr;
	Root::T_x47::T_x1^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	Root::T_x47::T_x2^ Temp_5 = nullptr;
	Root::T_x58^ Temp_6 = nullptr;
	Root::T_x18::T_x19^ Temp_7 = nullptr;
	Root::T_x47::T_x12^ Temp_8 = nullptr;
	System::Type^ Temp_9 = nullptr;
	Root::T_x47::T_x2^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::IO::StreamWriter^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	//local variables.
	System::IO::StreamWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0056;case 1:goto IL_0040;case 2:goto IL_017a;case 3:goto IL_0136;case 4:goto IL_011b;case 5:goto IL_0152;};//switch				(IL_0056,IL_0040,IL_017a,IL_0136,IL_011b,IL_0152)
	IL_0023:                                                                        //ldc.i4.3
	IL_0024:                                                                        //dup
	IL_0025:                                                                        //dup
	IL_0026:                                                                        //ldc.i4.3
	IL_0027:                                                                        //sub
	IL_0028:                                                                        //blt				IL_0024
	IL_002d:                                                                        //pop
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            System::Windows::Forms::Control::OnHandleCreated(A_0);      //call				void System::Windows::Forms::Control::OnHandleCreated(System::EventArgs^)
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_1=1;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_11=this->F_x5;                                         //ldfld				System::Boolean Root::T_x47 F_x5
	IL_0046:            if(!Temp_11)goto IL_017f;                                   //brfalse				IL_017f
	IL_004b:                                                                        //ldc.i4				0x0
	IL_0050:            V_1=0;                                                      //stloc				V_1
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_00af;                                               //br.s				IL_00af
	IL_005601:          try{
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_12=this->F_x8;                                         //ldfld				System::String^ Root::T_x47 F_x8
	IL_005f:            V_0->WriteLine(Temp_12);                                    //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0064:            goto IL_0138;                                               //leave				IL_0138
	                    ;}
	                    finally{
	IL_0069:                                                                        //ldc.i4				0x1
	IL_006e:            V_1=1;                                                      //stloc				V_1
	IL_0072:            /*goto IL_0076;*/goto IL_0074;                              //br.s				IL_0076
	IL_0074:            goto IL_008b;                                               //br.s				IL_008b
	IL_0076:                                                                        //ldloc				V_1
	IL_007a:            switch(V_1){case 0:goto IL_00ac;case 1:goto IL_0074;case 2:goto IL_0099;};//switch				(IL_00ac,IL_0074,IL_0099)
	IL_008b:                                                                        //ldloc.0
	IL_008c:            if(V_0==nullptr)goto IL_00ae;                               //brfalse.s				IL_00ae
	IL_008e:                                                                        //ldc.i4				0x2
	IL_0093:            V_1=2;                                                      //stloc				V_1
	IL_0097:            /*goto IL_0076;*/goto IL_0099;                              //br.s				IL_0076
	IL_0099:            goto IL_009b;                                               //br.s				IL_009b
	IL_009b:                                                                        //ldloc.0
	IL_009c:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_00a1:                                                                        //ldc.i4				0x0
	IL_00a6:            V_1=0;                                                      //stloc				V_1
	IL_00aa:            /*goto IL_0076;*/goto IL_00ac;                              //br.s				IL_0076
	IL_00ac:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_00ae:                                                                        //endfinally
	                    ;}
	IL_00af:                                                                        //ldarg.0
	IL_00b0:                                                                        //ldc.i4.0
	IL_00b1:            this->F_x5=false;                                           //stfld				System::Boolean Root::T_x47 F_x5
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_00bc:            Temp_0->M_x16();                                            //callvirt				void Root::T_x58::M_x16()
	IL_00c1:                                                                        //ldarg.0
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:            Temp_1=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_00c8:            Temp_2=Temp_1->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:            Temp_3=gcnew Root::T_x47::T_x1(this);                       //newobj				void Root::T_x47::T_x1::.ctor(Root::T_x47^)
	IL_00d3:                                                                        //ldtoken				Root::T_x48::T_x2
	IL_00d8:            Temp_4=Root::T_x48::T_x2::typeid;                           //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00dd:            Temp_5=gcnew Root::T_x47::T_x2(safe_cast<System::Object^>(Temp_2),safe_cast<System::Object^>(Temp_3),Temp_4);//newobj				void Root::T_x47::T_x2::.ctor(System::Object^,System::Object^,System::Type^)
	IL_00e2:            this->F_x15=Temp_5;                                         //stfld				Root::T_x47::T_x2^ Root::T_x47 F_x15
	IL_00e7:                                                                        //ldarg.0
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:            Temp_6=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_00ee:            Temp_7=Temp_6->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:            Temp_8=gcnew Root::T_x47::T_x12(this);                      //newobj				void Root::T_x47::T_x12::.ctor(Root::T_x47^)
	IL_00f9:                                                                        //ldtoken				Root::T_x48::T_x1
	IL_00fe:            Temp_9=Root::T_x48::T_x1::typeid;                           //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0103:            Temp_10=gcnew Root::T_x47::T_x2(safe_cast<System::Object^>(Temp_7),safe_cast<System::Object^>(Temp_8),Temp_9);//newobj				void Root::T_x47::T_x2::.ctor(System::Object^,System::Object^,System::Type^)
	IL_0108:            this->F_x11=Temp_10;                                        //stfld				Root::T_x47::T_x2^ Root::T_x47 F_x11
	IL_010d:                                                                        //ldc.i4				0x4
	IL_0112:            V_1=4;                                                      //stloc				V_1
	IL_0116:            /*goto IL_0002;*/goto IL_011b;                              //br				IL_0002
	IL_011b:                                                                        //ldarg.0
	IL_011c:            Temp_16=this->F_x13;                                        //ldfld				System::String^ Root::T_x47 F_x13
	IL_0121:            Temp_17=Temp_16->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_0126:            if(Temp_17!=0)goto IL_0138;                                 //brtrue.s				IL_0138
	IL_0128:                                                                        //ldc.i4				0x3
	IL_012d:            V_1=3;                                                      //stloc				V_1
	IL_0131:            /*goto IL_0002;*/goto IL_0136;                              //br				IL_0002
	IL_0136:            goto IL_0154;                                               //br.s				IL_0154
	IL_0138:                                                                        //ldarg.0
	IL_0139:                                                                        //ldarg.0
	IL_013a:            Temp_18=this->F_x13;                                        //ldfld				System::String^ Root::T_x47 F_x13
	IL_013f:            this->M_x1(Temp_18);                                        //call				void Root::T_x47::M_x1(System::String^)
	IL_0144:                                                                        //ldc.i4				0x5
	IL_0149:            V_1=5;                                                      //stloc				V_1
	IL_014d:            /*goto IL_0002;*/goto IL_0152;                              //br				IL_0002
	IL_0152:            goto IL_017f;                                               //br.s				IL_017f
	IL_0154:                                                                        //ldarg.0
	IL_0155:                                                                        //ldarg.0
	IL_0156:            Temp_13=this->M_x1();                                       //call				System::String^ Root::T_x47::M_x1()
	IL_015b:            this->F_x13=Temp_13;                                        //stfld				System::String^ Root::T_x47 F_x13
	IL_0160:                                                                        //ldarg.0
	IL_0161:            Temp_14=this->F_x13;                                        //ldfld				System::String^ Root::T_x47 F_x13
	IL_0166:            Temp_15=System::IO::File::CreateText(Temp_14);              //call				System::IO::StreamWriter^ System::IO::File::CreateText(System::String^)
	IL_016b:            V_0=Temp_15;                                                //stloc.0
	IL_016c:                                                                        //ldc.i4				0x2
	IL_0171:            V_1=2;                                                      //stloc				V_1
	IL_0175:            /*goto IL_0002;*/goto IL_017a;                              //br				IL_0002
	IL_017a:            /*goto IL_0058;*/goto IL_005601;                            //br				IL_0058
	IL_017f:            return;                                                     //ret

}
inline void Root::T_x47::M_x12(Root::T_x49^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x50^ Temp_0 = nullptr;
	Root::T_x50^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x50^ Root::T_x47 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x50^ Root::T_x47 F_x2
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x50::Invoke(System::Object^,Root::T_x49^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x47::M_x12(Root::T_x50^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x50^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x50^ Root::T_x47 F_x12
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x50
	IL_0012:            this->F_x12=safe_cast<Root::T_x50^>(Temp_1);                //stfld				Root::T_x50^ Root::T_x47 F_x12
	IL_0017:            return;                                                     //ret

}
inline System::Boolean Root::T_x47::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				System::Boolean Root::T_x47 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x47::M_x13(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnGotFocus by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::OnGotFocus(A_0);           //call				void System::Windows::Forms::Control::OnGotFocus(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_000d:                                                                        //ldc.i4.s				-4
	IL_000f:            Temp_0->M_x8(safe_cast<System::Int32>(-4));                 //callvirt				void Root::T_x58::M_x8(System::Int32)
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x47::M_x13(Root::T_x49^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Root::T_x50^ Temp_1 = nullptr;
	Root::T_x50^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_0=7;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003a;                                               //br.s				IL_003a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_00b8;case 1:goto IL_0075;case 2:goto IL_0052;case 3:goto IL_008d;case 4:goto IL_005f;case 5:goto IL_00fb;case 6:goto IL_009d;case 7:goto IL_000b;case 8:goto IL_00e0;};//switch				(IL_00b8,IL_0075,IL_0052,IL_008d,IL_005f,IL_00fb,IL_009d,IL_000b,IL_00e0)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_6=this->F_x8;                                          //ldfld				System::String^ Root::T_x47 F_x8
	IL_0040:            Temp_7=Temp_6->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_0045:            if(Temp_7==0)goto IL_0054;                                  //brfalse.s				IL_0054
	IL_0047:                                                                        //ldc.i4				0x2
	IL_004c:            V_0=2;                                                      //stloc				V_0
	IL_0050:            /*goto IL_000d;*/goto IL_0052;                              //br.s				IL_000d
	IL_0052:            goto IL_008f;                                               //br.s				IL_008f
	IL_0054:                                                                        //ldc.i4				0x4
	IL_0059:            V_0=4;                                                      //stloc				V_0
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_2=this->F_x12;                                         //ldfld				Root::T_x50^ Root::T_x47 F_x12
	IL_0065:            if(Temp_2==nullptr)goto IL_0100;                            //brfalse				IL_0100
	IL_006a:                                                                        //ldc.i4				0x1
	IL_006f:            V_0=1;                                                      //stloc				V_0
	IL_0073:            /*goto IL_000d;*/goto IL_0075;                              //br.s				IL_000d
	IL_0075:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0077:                                                                        //ldarg.0
	IL_0078:            Temp_3=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_007d:            this->F_x8=Temp_3;                                          //stfld				System::String^ Root::T_x47 F_x8
	IL_0082:                                                                        //ldc.i4				0x3
	IL_0087:            V_0=3;                                                      //stloc				V_0
	IL_008b:            /*goto IL_000d;*/goto IL_008d;                              //br.s				IL_000d
	IL_008d:            goto IL_0054;                                               //br.s				IL_0054
	IL_008f:                                                                        //ldc.i4				0x6
	IL_0094:            V_0=6;                                                      //stloc				V_0
	IL_0098:            /*goto IL_000d;*/goto IL_009d;                              //br				IL_000d
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_4=this->F_x13;                                         //ldfld				System::String^ Root::T_x47 F_x13
	IL_00a3:            Temp_5=System::IO::File::Exists(Temp_4);                    //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_00a8:            if(!Temp_5)goto IL_0077;                                    //brfalse.s				IL_0077
	IL_00aa:                                                                        //ldc.i4				0x0
	IL_00af:            V_0=0;                                                      //stloc				V_0
	IL_00b3:            /*goto IL_000d;*/goto IL_00b8;                              //br				IL_000d
	IL_00b8:            goto IL_00e2;                                               //br.s				IL_00e2
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:            Temp_1=this->F_x12;                                         //ldfld				Root::T_x50^ Root::T_x47 F_x12
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:                                                                        //ldarg.1
	IL_00c2:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x50::Invoke(System::Object^,Root::T_x49^)
	IL_00c7:                                                                        //ldc.i4.5
	IL_00c8:                                                                        //dup
	IL_00c9:                                                                        //dup
	IL_00ca:                                                                        //ldc.i4.3
	IL_00cb:                                                                        //sub
	IL_00cc:                                                                        //blt				IL_00c8
	IL_00d1:                                                                        //pop
	IL_00d2:                                                                        //ldc.i4				0x8
	IL_00d7:            V_0=8;                                                      //stloc				V_0
	IL_00db:            /*goto IL_000d;*/goto IL_00e0;                              //br				IL_000d
	IL_00e0:            goto IL_0100;                                               //br.s				IL_0100
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:            Temp_0=this->F_x13;                                         //ldfld				System::String^ Root::T_x47 F_x13
	IL_00e8:            System::IO::File::Delete(Temp_0);                           //call				void System::IO::File::Delete(System::String^)
	IL_00ed:                                                                        //ldc.i4				0x5
	IL_00f2:            V_0=5;                                                      //stloc				V_0
	IL_00f6:            /*goto IL_000d;*/goto IL_00fb;                              //br				IL_000d
	IL_00fb:            goto IL_0077;                                               //br				IL_0077
	IL_0100:            return;                                                     //ret

}
inline void Root::T_x47::M_x13(Root::T_x50^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x50^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x50^ Root::T_x47 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x50
	IL_0012:            this->F_x2=safe_cast<Root::T_x50^>(Temp_1);                 //stfld				Root::T_x50^ Root::T_x47 F_x2
	IL_0017:            return;                                                     //ret

}
inline System::String^ Root::T_x47::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::String^ Root::T_x47 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x47::M_x2(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x9=A_0;                                             //stfld				System::Boolean Root::T_x47 F_x9
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x47::M_x2(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnHandleDestroyed by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47::T_x2^ Temp_0 = nullptr;
	Root::T_x47::T_x2^ Temp_1 = nullptr;
	Root::T_x58^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x15;                                         //ldfld				Root::T_x47::T_x2^ Root::T_x47 F_x15
	IL_0009:            Temp_0->M_x1();                                             //callvirt				void Root::T_x47::T_x2::M_x1()
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldnull
	IL_0010:            this->F_x15=safe_cast<Root::T_x47::T_x2^>(nullptr);         //stfld				Root::T_x47::T_x2^ Root::T_x47 F_x15
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_1=this->F_x11;                                         //ldfld				Root::T_x47::T_x2^ Root::T_x47 F_x11
	IL_001b:            Temp_1->M_x1();                                             //callvirt				void Root::T_x47::T_x2::M_x1()
	IL_0020:                                                                        //ldarg.0
	IL_0021:                                                                        //ldnull
	IL_0022:            this->F_x11=safe_cast<Root::T_x47::T_x2^>(nullptr);         //stfld				Root::T_x47::T_x2^ Root::T_x47 F_x11
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_2=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_002d:            Temp_2->M_x8();                                             //callvirt				void Root::T_x58::M_x8()
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldnull
	IL_0034:            this->F_x4=safe_cast<Root::T_x58^>(nullptr);                //stfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldarg.1
	IL_003b:            System::Windows::Forms::Control::OnHandleDestroyed(A_0);    //call				void System::Windows::Forms::Control::OnHandleDestroyed(System::EventArgs^)
	IL_0040:            return;                                                     //ret

}
inline void Root::T_x47::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x8=A_0;                                             //stfld				System::String^ Root::T_x47 F_x8
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x47::M_x2(Root::T_x49^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x12(A_0);                                           //callvirt				void Root::T_x47::M_x12(Root::T_x49^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x47::M_x2(Root::T_x50^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x50^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x50^ Root::T_x47 F_x12
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x50
	IL_0012:            this->F_x12=safe_cast<Root::T_x50^>(Temp_1);                //stfld				Root::T_x50^ Root::T_x47 F_x12
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x47::M_x2(Root::T_x51^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x52^ Temp_0 = nullptr;
	Root::T_x52^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x52^ Root::T_x47 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x52^ Root::T_x47 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x52::Invoke(System::Object^,Root::T_x51^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x47::M_x2(Root::T_x52^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x52^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x52^ Root::T_x47 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x52
	IL_0012:            this->F_x1=safe_cast<Root::T_x52^>(Temp_1);                 //stfld				Root::T_x52^ Root::T_x47 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x53^ Root::T_x47::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	Root::T_x18::T_x19^ Temp_1 = nullptr;
	Root::T_x58^ Temp_2 = nullptr;
	Root::T_x18::T_x19^ Temp_3 = nullptr;
	Root::T_x18::T_x56^ Temp_4 = nullptr;
	Root::T_x53^ Temp_5 = nullptr;
	Root::T_x58^ Temp_6 = nullptr;
	Root::T_x18::T_x19^ Temp_7 = nullptr;
	Root::T_x18::T_x56^ Temp_8 = nullptr;
	Root::T_x58^ Temp_9 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0094;case 1:goto IL_0041;case 2:goto IL_0081;case 3:goto IL_0064;case 4:goto IL_00af;case 5:goto IL_000b;};//switch				(IL_0094,IL_0041,IL_0081,IL_0064,IL_00af,IL_000b)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_9=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0034:            if(Temp_9==nullptr)goto IL_00b1;                            //brfalse.s				IL_00b1
	IL_0036:                                                                        //ldc.i4				0x1
	IL_003b:            V_0=1;                                                      //stloc				V_0
	IL_003f:            /*goto IL_000d;*/goto IL_0041;                              //br.s				IL_000d
	IL_0041:            goto IL_0086;                                               //br.s				IL_0086
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_2=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0049:            Temp_3=Temp_2->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_004e:            Temp_4=Temp_3->M_x11();                                     //callvirt				Root::T_x18::T_x56^ Root::T_x18::T_x19::M_x11()
	IL_0053:            Temp_5=gcnew Root::T_x53(Temp_4);                           //newobj				void Root::T_x53::.ctor(Root::T_x18::T_x56^)
	IL_0058:            return Temp_5;                                              //ret
	IL_0059:                                                                        //ldc.i4				0x3
	IL_005e:            V_0=3;                                                      //stloc				V_0
	IL_0062:            /*goto IL_000d;*/goto IL_0064;                              //br.s				IL_000d
	IL_0064:                                                                        //ldarg.0
	IL_0065:            Temp_6=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_006a:            Temp_7=Temp_6->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_006f:            Temp_8=Temp_7->M_x11();                                     //callvirt				Root::T_x18::T_x56^ Root::T_x18::T_x19::M_x11()
	IL_0074:            if(Temp_8==nullptr)goto IL_00b1;                            //brfalse.s				IL_00b1
	IL_0076:                                                                        //ldc.i4				0x2
	IL_007b:            V_0=2;                                                      //stloc				V_0
	IL_007f:            /*goto IL_000d;*/goto IL_0081;                              //br.s				IL_000d
	IL_0081:            goto IL_0084;                                               //br.s				IL_0084
	IL_0083:                                                                        //break
	IL_0084:            goto IL_0043;                                               //br.s				IL_0043
	IL_0086:                                                                        //ldc.i4				0x0
	IL_008b:            V_0=0;                                                      //stloc				V_0
	IL_008f:            /*goto IL_000d;*/goto IL_0094;                              //br				IL_000d
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_009a:            Temp_1=Temp_0->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_009f:            if(Temp_1==nullptr)goto IL_00b1;                            //brfalse.s				IL_00b1
	IL_00a1:                                                                        //ldc.i4				0x4
	IL_00a6:            V_0=4;                                                      //stloc				V_0
	IL_00aa:            /*goto IL_000d;*/goto IL_00af;                              //br				IL_000d
	IL_00af:            goto IL_0059;                                               //br.s				IL_0059
	IL_00b1:                                                                        //ldnull
	IL_00b2:            return nullptr;                                             //ret

}
inline void Root::T_x47::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	Root::T_x18::T_x19^ Temp_1 = nullptr;
	Root::T_x18::T_x10 Temp_2 = (Root::T_x18::T_x10)0;
	Root::T_x58^ Temp_3 = nullptr;
	Root::T_x18::T_x19^ Temp_4 = nullptr;
	//local variables.
	Root::T_x18::T_x10 V_0 = (Root::T_x18::T_x10)0;
	System::Object^ V_1 = nullptr;
	System::Object^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_0076;case 1:goto IL_003f;case 2:goto IL_004f;};//switch				(IL_0076,IL_003f,IL_004f)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0028:            Temp_1=Temp_0->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_002d:                                                                        //ldc.i4.7
	IL_002e:            Temp_2=Temp_1->M_x1(safe_cast<Root::T_x18::T_x55>(7));      //callvirt				Root::T_x18::T_x10 Root::T_x18::T_x19::M_x1(Root::T_x18::T_x55)
	IL_0033:            V_0=Temp_2;                                                 //stloc.0
	IL_0034:                                                                        //ldc.i4				0x1
	IL_0039:            V_3=1;                                                      //stloc				V_3
	IL_003d:            /*goto IL_000d;*/goto IL_003f;                              //br.s				IL_000d
	IL_003f:                                                                        //ldloc.0
	IL_0040:                                                                        //ldc.i4.2
	IL_0041:                                                                        //and
	IL_0042:            if((V_0 & safe_cast<Root::T_x18::T_x10>(2))==0)goto IL_0078;//brfalse.s				IL_0078
	IL_0044:                                                                        //ldc.i4				0x2
	IL_0049:            V_3=2;                                                      //stloc				V_3
	IL_004d:            /*goto IL_000d;*/goto IL_004f;                              //br.s				IL_000d
	IL_004f:            goto IL_0051;                                               //br.s				IL_0051
	IL_0051:                                                                        //ldnull
	IL_0052:            V_1=safe_cast<System::Object^>(nullptr);                    //stloc.1
	IL_0053:                                                                        //ldnull
	IL_0054:            V_2=safe_cast<System::Object^>(nullptr);                    //stloc.2
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_3=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_005b:            Temp_4=Temp_3->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_0060:                                                                        //ldc.i4.7
	IL_0061:                                                                        //ldc.i4.1
	IL_0062:                                                                        //ldloca.s				V_1
	IL_0064:                                                                        //ldloca.s				V_2
	IL_0066:            Temp_4->M_x1(safe_cast<Root::T_x18::T_x55>(7),safe_cast<Root::T_x18::T_x4>(1),safe_cast<System::Object^%>(V_1),safe_cast<System::Object^%>(V_2));//callvirt				void Root::T_x18::T_x19::M_x1(Root::T_x18::T_x55,Root::T_x18::T_x4,System::Object^%,System::Object^%)
	IL_006b:                                                                        //ldc.i4				0x0
	IL_0070:            V_3=0;                                                      //stloc				V_3
	IL_0074:            /*goto IL_000d;*/goto IL_0076;                              //br.s				IL_000d
	IL_0076:            goto IL_0078;                                               //br.s				IL_0078
	IL_0078:            return;                                                     //ret

}
inline System::Drawing::Size Root::T_x47::M_x8()
//System::Windows::Forms::Control^::get_DefaultSize by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Size Temp_0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=System::Drawing::Size(safe_cast<System::Int32>(0),safe_cast<System::Int32>(0));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0007:            return Temp_0;                                              //ret

}
inline void Root::T_x47::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x58^ Temp_0 = nullptr;
	Root::T_x18::T_x19^ Temp_1 = nullptr;
	Root::T_x18::T_x10 Temp_2 = (Root::T_x18::T_x10)0;
	Root::T_x58^ Temp_3 = nullptr;
	Root::T_x18::T_x19^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Windows::Forms::DialogResult Temp_7 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Root::T_x18::T_x10 V_0 = (Root::T_x18::T_x10)0;
	System::Object^ V_1 = nullptr;
	System::Object^ V_2 = nullptr;
	System::Runtime::InteropServices::COMException^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_5=5;                                                      //stloc				V_5
	IL_000501:          try{
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_0085;case 1:goto IL_0095;case 2:goto IL_005d;case 3:goto IL_004d;};//switch				(IL_0085,IL_0095,IL_005d,IL_004d)
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_0=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_002a:            Temp_1=Temp_0->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_002f:                                                                        //ldc.i4.s				12
	IL_0031:            Temp_2=Temp_1->M_x1(safe_cast<Root::T_x18::T_x55>(12));     //callvirt				Root::T_x18::T_x10 Root::T_x18::T_x19::M_x1(Root::T_x18::T_x55)
	IL_0036:            V_0=Temp_2;                                                 //stloc.0
	IL_0037:                                                                        //ldc.i4.2
	IL_0038:                                                                        //dup
	IL_0039:                                                                        //dup
	IL_003a:                                                                        //ldc.i4.4
	IL_003b:                                                                        //sub
	IL_003c:                                                                        //blt				IL_0038
	IL_0041:                                                                        //pop
	IL_0042:                                                                        //ldc.i4				0x3
	IL_0047:            V_4=3;                                                      //stloc				V_4
	IL_004b:            /*goto IL_000b;*/goto IL_004d;                              //br.s				IL_000b
	IL_004d:                                                                        //ldloc.0
	IL_004e:                                                                        //ldc.i4.2
	IL_004f:                                                                        //and
	IL_0050:            if((V_0 & safe_cast<Root::T_x18::T_x10>(2))==0)goto IL_0087;//brfalse.s				IL_0087
	IL_0052:                                                                        //ldc.i4				0x2
	IL_0057:            V_4=2;                                                      //stloc				V_4
	IL_005b:            /*goto IL_000b;*/goto IL_005d;                              //br.s				IL_000b
	IL_005d:            goto IL_005f;                                               //br.s				IL_005f
	IL_005f:                                                                        //ldnull
	IL_0060:            V_1=safe_cast<System::Object^>(nullptr);                    //stloc.1
	IL_0061:                                                                        //ldnull
	IL_0062:            V_2=safe_cast<System::Object^>(nullptr);                    //stloc.2
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_3=this->F_x4;                                          //ldfld				Root::T_x58^ Root::T_x47 F_x4
	IL_0069:            Temp_4=Temp_3->M_x10();                                     //callvirt				Root::T_x18::T_x19^ Root::T_x58::M_x10()
	IL_006e:                                                                        //ldc.i4.s				12
	IL_0070:                                                                        //ldc.i4.1
	IL_0071:                                                                        //ldloca.s				V_1
	IL_0073:                                                                        //ldloca.s				V_2
	IL_0075:            Temp_4->M_x1(safe_cast<Root::T_x18::T_x55>(12),safe_cast<Root::T_x18::T_x4>(1),safe_cast<System::Object^%>(V_1),safe_cast<System::Object^%>(V_2));//callvirt				void Root::T_x18::T_x19::M_x1(Root::T_x18::T_x55,Root::T_x18::T_x4,System::Object^%,System::Object^%)
	IL_007a:                                                                        //ldc.i4				0x0
	IL_007f:            V_4=0;                                                      //stloc				V_4
	IL_0083:            /*goto IL_000b;*/goto IL_0085;                              //br.s				IL_000b
	IL_0085:            goto IL_0087;                                               //br.s				IL_0087
	IL_0087:                                                                        //ldc.i4				0x1
	IL_008c:            V_4=1;                                                      //stloc				V_4
	IL_0090:            /*goto IL_000b;*/goto IL_0095;                              //br				IL_000b
	IL_0095:            goto IL_00b8;                                               //leave.s				IL_00b8
	                    ;}
	                    catch(System::Runtime::InteropServices::COMException^ Ex_009502){
	IL_0097:            V_3=Ex_009502;                                              //stloc.3
	IL_0098:                                                                        //ldnull
	IL_0099:                                                                        //ldloc.3
	IL_009a:            Temp_5=V_3->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_009f:                                                                        //ldstr				L"\x6E22\x7624\x6F26\x7D28\x662A\x612C"
	IL_00a4:                                                                        //ldloc				V_5
	IL_00a8:            Temp_6=a(L"\x6E22\x7624\x6F26\x7D28\x662A\x612C",V_5);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ad:                                                                        //ldc.i4.0
	IL_00ae:                                                                        //ldc.i4.s				16
	IL_00b0:            Temp_7=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_5,Temp_6,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_00b5:                                                                        //pop
	IL_00b6:            goto IL_00b8;                                               //leave.s				IL_00b8
	                    ;}
	IL_00b8:            return;                                                     //ret

}
inline Root::T_x47::T_x2::T_x2(System::Object^ A_0,System::Object^ A_1,System::Type^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Guid Temp_0;
	Root::T_x18::T_x5^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::InvalidCastException^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	Root::T_x18::T_x5^ Temp_8 = nullptr;
	Root::T_x18::T_x5^ Temp_9 = nullptr;
	Root::T_x18::T_x5^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	array<System::Object^>^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::ArgumentException^ Temp_16 = nullptr;
	Root::T_x18::T_x5^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	System::Int32 Temp_19 = 0;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::ArgumentException^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::InvalidCastException^ Temp_26 = nullptr;
	//local variables.
	Root::T_x18::T_x13^ V_0 = nullptr;
	System::Guid V_1;
	array<System::Object^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_3=3;                                                      //stloc				V_3
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000f:                                                                        //ldarg.1
	IL_0010:                                                                        //isinst				Root::T_x18::T_x13
	IL_0015:            V_0=dynamic_cast<Root::T_x18::T_x13^>(A_0);                 //stloc.0
	IL_0016:                                                                        //ldloc.0
	IL_0017:            if(V_0!=nullptr)goto IL_0055;                               //brtrue.s				IL_0055
	IL_0019:            goto IL_0085;                                               //br.s				IL_0085
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_19=this->F_x2;                                         //ldfld				System::Int32 Root::T_x47::T_x2 F_x2
	IL_0021:            if(Temp_19!=0)goto IL_0137;                                 //brtrue				IL_0137
	IL_0026:            goto IL_0099;                                               //br.s				IL_0099
	IL_0028:                                                                        //ldstr				L"\x7520\x4B22\x4024\x0726\x4E28\x422A\x5B2C\x4A2E\x5F30\x1332\x1234\x4436\x5038\x553A\x563C\x183E\x6140\x2C42\x2744\x2D46\x2C48\x284A\x394C\x6F4E\x3550\x3C52\x3054\x2456\x7958\x355A\x325C\x2B5E\x4160\x0A62\x0864\x1766\x0568\x0E6A\x006C\x0A6E\x1F70\x0772\x5574\x5076"
	IL_002d:                                                                        //ldloc				V_3
	IL_0031:            Temp_2=a(L"\x7520\x4B22\x4024\x0726\x4E28\x422A\x5B2C\x4A2E\x5F30\x1332\x1234\x4436\x5038\x553A\x563C\x183E\x6140\x2C42\x2744\x2D46\x2C48\x284A\x394C\x6F4E\x3550\x3C52\x3054\x2456\x7958\x355A\x325C\x2B5E\x4160\x0A62\x0864\x1766\x0568\x0E6A\x006C\x0A6E\x1F70\x0772\x5574\x5076",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0036:                                                                        //ldarg.3
	IL_0037:            Temp_3=A_2->Name;                                           //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_003c:                                                                        //ldstr				L"\x0620\x0D22"
	IL_0041:                                                                        //ldloc				V_3
	IL_0045:            Temp_4=a(L"\x0620\x0D22",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004a:            Temp_5=System::String::Concat(Temp_2,Temp_3,Temp_4);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_004f:            Temp_6=gcnew System::InvalidCastException(Temp_5);          //newobj				void System::InvalidCastException::.ctor(System::String^)
	IL_0054:            throw Temp_6;                                               //throw
	IL_0055:                                                                        //ldarg.3
	IL_0056:            Temp_0=A_2->GUID;                                           //callvirt				System::Guid System::Type::get_GUID()
	IL_005b:            V_1=Temp_0;                                                 //stloc.1
	IL_005c:                                                                        //ldloc.0
	IL_005d:                                                                        //ldloca.s				V_1
	IL_005f:                                                                        //ldarg.0
	IL_0060:                                                                        //ldflda				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_0065:            V_0->M_x1(safe_cast<System::Guid%>(V_1),safe_cast<Root::T_x18::T_x5^%>(this->F_x1));//callvirt				void Root::T_x18::T_x13::M_x1(System::Guid%,Root::T_x18::T_x5^%)
	IL_006a:                                                                        //ldarg.0
	IL_006b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_0070:            if(Temp_1!=nullptr)goto IL_012f;                            //brtrue				IL_012f
	IL_0075:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_0077:                                                                        //ldarg.0
	IL_0078:            Temp_17=this->F_x1;                                         //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_007d:            Temp_18=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(Temp_17));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_0082:                                                                        //pop
	IL_0083:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_0085:                                                                        //ldstr				L"\x7520\x4B22\x4024\x0726\x5A28\x442A\x582C\x5D2E\x5230\x5632\x1534\x5836\x5B38\x513A\x583C\x5C3E\x3540\x6342\x2144\x2846\x2C48\x384A\x6D4C\x214E\x3E50\x2752\x7554\x3256\x2158\x2B5A\x325C\x2C5E\x0460\x4362\x2C64\x2466\x0668\x056A\x036C\x0A6E\x1270\x0772\x1C74\x1876\x1778\x2B7A\x127C\x167E\xEF80\xF782\xC684\xE886\xE788\xFF8A\xEC8C\xE68E\xFF90\xF692\xE794\xB996"
	IL_008a:                                                                        //ldloc				V_3
	IL_008e:            Temp_25=a(L"\x7520\x4B22\x4024\x0726\x5A28\x442A\x582C\x5D2E\x5230\x5632\x1534\x5836\x5B38\x513A\x583C\x5C3E\x3540\x6342\x2144\x2846\x2C48\x384A\x6D4C\x214E\x3E50\x2752\x7554\x3256\x2158\x2B5A\x325C\x2C5E\x0460\x4362\x2C64\x2466\x0668\x056A\x036C\x0A6E\x1270\x0772\x1C74\x1876\x1778\x2B7A\x127C\x167E\xEF80\xF782\xC684\xE886\xE788\xFF8A\xEC8C\xE68E\xFF90\xF692\xE794\xB996",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0093:            Temp_26=gcnew System::InvalidCastException(Temp_25);        //newobj				void System::InvalidCastException::.ctor(System::String^)
	IL_0098:            throw Temp_26;                                              //throw
	IL_0099:                                                                        //ldarg.0
	IL_009a:            Temp_10=this->F_x1;                                         //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_009f:            if(Temp_10==nullptr)goto IL_00a3;                           //brfalse.s				IL_00a3
	IL_00a1:            goto IL_0077;                                               //br.s				IL_0077
	IL_00a3:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a8:                                                                        //ldstr				L"\x6220\x4C22\x5024\x4B26\x4D28\x0B2A\x432C\x402E\x4530\x1332\x5634\x4536\x5C38\x5A3A\x493C\x5A3E\x6140\x2042\x2A44\x2946\x2748\x2E4A\x2E4C\x3B4E\x3850\x3C52\x3B54\x7756\x2958\x345A\x345C\x315E\x1560\x4362\x0364\x0866\x1B68\x4B6A\x086C\x196E\x1470\x1D72\x0174\x5776\x1078\x157A\x097C\x1A7E\xF380\xE582\xE484\xE486\xEC88\xAB8A\xAA8C\xF48E\xA190\xEE92\xB294\xB996"
	IL_00ad:                                                                        //ldloc				V_3
	IL_00b1:            Temp_12=a(L"\x6220\x4C22\x5024\x4B26\x4D28\x0B2A\x432C\x402E\x4530\x1332\x5634\x4536\x5C38\x5A3A\x493C\x5A3E\x6140\x2042\x2A44\x2946\x2748\x2E4A\x2E4C\x3B4E\x3850\x3C52\x3B54\x7756\x2958\x345A\x345C\x315E\x1560\x4362\x0364\x0866\x1B68\x4B6A\x086C\x196E\x1470\x1D72\x0174\x5776\x1078\x157A\x097C\x1A7E\xF380\xE582\xE484\xE486\xEC88\xAB8A\xAA8C\xF48E\xA190\xEE92\xB294\xB996",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b6:                                                                        //ldc.i4.1
	IL_00b7:            Temp_13=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_00bc:            V_2=Temp_13;                                                //stloc.2
	IL_00bd:                                                                        //ldloc.2
	IL_00be:                                                                        //ldc.i4.0
	IL_00bf:                                                                        //ldarg.3
	IL_00c0:            Temp_14=A_2->Name;                                          //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_00c5:            V_2[0]=safe_cast<System::Object^>(Temp_14);                 //stelem.ref
	IL_00c6:                                                                        //ldloc.2
	IL_00c7:            Temp_15=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_11),Temp_12,V_2);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00cc:            Temp_16=gcnew System::ArgumentException(Temp_15);           //newobj				void System::ArgumentException::.ctor(System::String^)
	IL_00d1:            throw Temp_16;                                              //throw
	IL_00d2:                                                                        //ldarg.3
	IL_00d3:                                                                        //ldarg.2
	IL_00d4:            Temp_7=A_2->IsInstanceOfType(A_1);                          //callvirt				System::Boolean System::Type::IsInstanceOfType(System::Object^)
	IL_00d9:            if(Temp_7)goto IL_010d;                                     //brtrue.s				IL_010d
	IL_00db:            goto IL_0028;                                               //br				IL_0028
	IL_00e0:                                                                        //ldstr				L"\x7520\x4B22\x4024\x0726\x5A28\x442A\x582C\x5D2E\x5230\x5632\x1534\x5836\x5B38\x513A\x583C\x5C3E\x3540\x6342\x2144\x2846\x2C48\x384A\x6D4C\x214E\x3E50\x2752\x7554\x3256\x2158\x2B5A\x325C\x2C5E\x0460\x4362\x4264"
	IL_00e5:                                                                        //ldloc				V_3
	IL_00e9:            Temp_20=a(L"\x7520\x4B22\x4024\x0726\x5A28\x442A\x582C\x5D2E\x5230\x5632\x1534\x5836\x5B38\x513A\x583C\x5C3E\x3540\x6342\x2144\x2846\x2C48\x384A\x6D4C\x214E\x3E50\x2752\x7554\x3256\x2158\x2B5A\x325C\x2C5E\x0460\x4362\x4264",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ee:                                                                        //ldarg.3
	IL_00ef:            Temp_21=A_2->Name;                                          //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_00f4:                                                                        //ldstr				L"\x0620\x0D22"
	IL_00f9:                                                                        //ldloc				V_3
	IL_00fd:            Temp_22=a(L"\x0620\x0D22",V_3);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0102:            Temp_23=System::String::Concat(Temp_20,Temp_21,Temp_22);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0107:            Temp_24=gcnew System::ArgumentException(Temp_23);           //newobj				void System::ArgumentException::.ctor(System::String^)
	IL_010c:            throw Temp_24;                                              //throw
	IL_010d:                                                                        //ldarg.0
	IL_010e:            Temp_8=this->F_x1;                                          //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_0113:                                                                        //ldarg.2
	IL_0114:                                                                        //ldarg.0
	IL_0115:                                                                        //ldflda				System::Int32 Root::T_x47::T_x2 F_x2
	IL_011a:            Temp_8->M_x1(A_1,safe_cast<System::Int32%>(this->F_x2));    //callvirt				void Root::T_x18::T_x5::M_x1(System::Object^,System::Int32%)
	IL_011f:                                                                        //ldarg.0
	IL_0120:            Temp_9=this->F_x1;                                          //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_0125:            if(Temp_9==nullptr)goto IL_0099;                            //brfalse				IL_0099
	IL_012a:            goto IL_001b;                                               //br				IL_001b
	IL_012f:                                                                        //ldarg.2
	IL_0130:            if(A_1==nullptr)goto IL_0028;                               //brfalse				IL_0028
	IL_0135:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_0137:            return;                                                     //ret

}
inline void Root::T_x47::T_x2::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x5^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Root::T_x18::T_x5^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	Root::T_x18::T_x5^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_009b;case 1:goto IL_000b;case 2:goto IL_0085;case 3:goto IL_0078;case 4:goto IL_0040;};//switch				(IL_009b,IL_000b,IL_0085,IL_0078,IL_0040)
	IL_002a:            goto IL_002d;                                               //br.s				IL_002d
	IL_002c:                                                                        //break
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_5=this->F_x1;                                          //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_0033:            if(Temp_5==nullptr)goto IL_009d;                            //brfalse.s				IL_009d
	IL_0035:                                                                        //ldc.i4				0x4
	IL_003a:            V_0=4;                                                      //stloc				V_0
	IL_003e:            /*goto IL_000d;*/goto IL_0040;                              //br.s				IL_000d
	IL_0040:            goto IL_007a;                                               //br.s				IL_007a
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x47::T_x2 F_x2
	IL_004e:            Temp_0->M_x1(Temp_1);                                       //callvirt				void Root::T_x18::T_x5::M_x1(System::Int32)
	IL_0053:                                                                        //ldarg.0
	IL_0054:                                                                        //ldc.i4.0
	IL_0055:            this->F_x2=0;                                               //stfld				System::Int32 Root::T_x47::T_x2 F_x2
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_0060:            Temp_3=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(Temp_2));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_0065:                                                                        //pop
	IL_0066:                                                                        //ldarg.0
	IL_0067:                                                                        //ldnull
	IL_0068:            this->F_x1=safe_cast<Root::T_x18::T_x5^>(nullptr);          //stfld				Root::T_x18::T_x5^ Root::T_x47::T_x2 F_x1
	IL_006d:                                                                        //ldc.i4				0x3
	IL_0072:            V_0=3;                                                      //stloc				V_0
	IL_0076:            /*goto IL_000d;*/goto IL_0078;                              //br.s				IL_000d
	IL_0078:            goto IL_009d;                                               //br.s				IL_009d
	IL_007a:                                                                        //ldc.i4				0x2
	IL_007f:            V_0=2;                                                      //stloc				V_0
	IL_0083:            /*goto IL_000d;*/goto IL_0085;                              //br.s				IL_000d
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_4=this->F_x2;                                          //ldfld				System::Int32 Root::T_x47::T_x2 F_x2
	IL_008b:            if(Temp_4==0)goto IL_009d;                                  //brfalse.s				IL_009d
	IL_008d:                                                                        //ldc.i4				0x0
	IL_0092:            V_0=0;                                                      //stloc				V_0
	IL_0096:            /*goto IL_000d;*/goto IL_009b;                              //br				IL_000d
	IL_009b:            goto IL_0042;                                               //br.s				IL_0042
	IL_009d:            return;                                                     //ret

}
inline Root::T_x47::T_x2::!T_x2()
//System::Object^::Finalize by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_000001:          try{
	IL_0001:            this->M_x1();                                               //call				void Root::T_x47::T_x2::M_x1()
	IL_0006:            goto IL_000f;                                               //leave.s				IL_000f
	                    ;}
	                    finally{
	IL_0008:                                                                        //ldarg.0
	IL_0009:            /*System::Object::Finalize();*/                             //call				void System::Object::Finalize()
	IL_000e:                                                                        //endfinally
	                    ;}
	IL_000f:            return;                                                     //ret

}
inline Root::T_x47::T_x1::T_x1(Root::T_x47^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x47^ Root::T_x47::T_x1 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x47::T_x1::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	Root::T_x49^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x47::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=gcnew Root::T_x49(A_0);                              //newobj				void Root::T_x49::.ctor(System::String^)
	IL_000c:            Temp_0->M_x2(Temp_1);                                       //callvirt				void Root::T_x47::M_x2(Root::T_x49^)
	IL_0011:            return;                                                     //ret

}
inline void Root::T_x47::T_x1::M_x1(System::String^ A_0,System::Int32 A_1,System::String^ A_2,System::Object^% A_3,System::String^ A_4,System::Boolean% A_5)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x51^ Temp_0 = nullptr;
	Root::T_x47^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	Root::T_x51^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldc.i4.0
	IL_0005:            Temp_0=gcnew Root::T_x51(A_0,false);                        //newobj				void Root::T_x51::.ctor(System::String^,System::Boolean)
	IL_000a:            V_0=Temp_0;                                                 //stloc.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x47::T_x1 F_x1
	IL_0011:                                                                        //ldloc.0
	IL_0012:            Temp_1->M_x1(V_0);                                          //callvirt				void Root::T_x47::M_x1(Root::T_x51^)
	IL_0017:                                                                        //ldarg.s				A_5
	IL_0019:                                                                        //ldloc.0
	IL_001a:            Temp_2=V_0->Cancel;                                         //callvirt				System::Boolean System::ComponentModel::CancelEventArgs::get_Cancel()
	IL_001f:            A_5=Temp_2;                                                 //stind.i1
	IL_0020:            return;                                                     //ret

}
inline Root::T_x47::T_x12::T_x12(Root::T_x47^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x47^ Root::T_x47::T_x12 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x47::T_x12::M_x1(System::Object^ A_0,System::String^% A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	Root::T_x49^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x47::T_x12 F_x1
	IL_0006:                                                                        //ldarg.2
	IL_0007:                                                                        //ldind.ref
	IL_0008:            Temp_1=gcnew Root::T_x49(safe_cast<System::String^>(A_1));  //newobj				void Root::T_x49::.ctor(System::String^)
	IL_000d:            Temp_0->M_x1(Temp_1);                                       //callvirt				void Root::T_x47::M_x1(Root::T_x49^)
	IL_0012:            return;                                                     //ret

}
