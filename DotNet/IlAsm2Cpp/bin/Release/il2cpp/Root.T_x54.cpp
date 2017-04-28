#include "global_xref.h"

inline Root::T_x54::T_x54(Root::T_x18::T_x9^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x18::T_x9^ Root::T_x54 F_x1
	IL_000d:            return;                                                     //ret

}
inline System::String^ Root::T_x54::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x9^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x18::T_x9^ Root::T_x54 F_x1
	IL_0006:            Temp_1=Temp_0->M_x134();                                    //callvirt				System::String^ Root::T_x18::T_x9::M_x134()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x54::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x9^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::DialogResult Temp_3 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::SystemException^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_1=19;                                                     //stloc				V_1
	IL_000501:          try{
	IL_0009:                                                                        //ldc.i4.2
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x18::T_x9^ Root::T_x54 F_x1
	IL_001a:                                                                        //ldarg.1
	IL_001b:            Temp_0->M_x5(A_0);                                          //callvirt				void Root::T_x18::T_x9::M_x5(System::String^)
	IL_0020:            goto IL_0043;                                               //leave.s				IL_0043
	                    ;}
	                    catch(System::SystemException^ Ex_002002){
	IL_0022:            V_0=Ex_002002;                                              //stloc.0
	IL_0023:                                                                        //ldnull
	IL_0024:                                                                        //ldloc.0
	IL_0025:            Temp_1=V_0->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_002a:                                                                        //ldstr				L"\x7C30\x6032\x7D34\x6336\x7438\x773A"
	IL_002f:                                                                        //ldloc				V_1
	IL_0033:            Temp_2=a(L"\x7C30\x6032\x7D34\x6336\x7438\x773A",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:                                                                        //ldc.i4.s				16
	IL_003b:            Temp_3=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_1,Temp_2,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0040:                                                                        //pop
	IL_0041:            goto IL_0043;                                               //leave.s				IL_0043
	                    ;}
	IL_0043:            return;                                                     //ret

}
