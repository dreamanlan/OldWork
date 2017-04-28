#include "global_xref.h"

inline Root::T_x10::T_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x1=true;                                            //stfld				System::Boolean Root::T_x10 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Windows::Forms::TreeNode();*/                     //call				void System::Windows::Forms::TreeNode::.ctor()
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x10::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x10::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x10::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->Tag=A_0;                                              //call				void System::Windows::Forms::TreeNode::set_Tag(System::Object^)
	IL_0007:            return;                                                     //ret

}
inline System::Object^ Root::T_x10::M_x1(System::Type^ A_0)
//System::IServiceProvider^::GetService by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeView^ Temp_0 = nullptr;
	System::IServiceProvider^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	Root::T_x25^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->TreeView;                                      //call				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_0006:                                                                        //castclass				Root::T_x25
	IL_000b:            V_0=safe_cast<Root::T_x25^>(Temp_0);                        //stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            Temp_1=V_0->M_x4();                                         //callvirt				System::IServiceProvider^ Root::T_x25::M_x4()
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_2=Temp_1->GetService(A_0);                             //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0018:            return Temp_2;                                              //ret

}
inline void Root::T_x10::M_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0006:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::TreeNodeCollection::Clear()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0011:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x10::M_x1(System::EventArgs^)
	IL_0016:            return;                                                     //ret

}
inline void Root::T_x10::M_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::IWindowCollection^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::IWindow^ Temp_4 = nullptr;
	System::Windows::Forms::Control^ Temp_5 = nullptr;
	//local variables.
	Reflector::IWindowManager^ V_0 = nullptr;
	Reflector::IWindow^ V_1 = nullptr;
	Root::T_x83^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_3=12;                                                     //stloc				V_3
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldtoken				Reflector::IWindowManager
	IL_0012:            Temp_0=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0017:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001c:                                                                        //castclass				Reflector::IWindowManager
	IL_0021:            V_0=safe_cast<Reflector::IWindowManager^>(Temp_1);          //stloc.0
	IL_0022:                                                                        //ldloc.0
	IL_0023:            Temp_2=V_0->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0028:                                                                        //ldstr				L"\x6E29\x452B\x5D2D\x512F\x4131\x4733\x5335\x5537\x5839\x503B\x5B3D\x323F\x1541\x2D43\x2845\x2C47\x2549\x3B4B"
	IL_002d:                                                                        //ldloc				V_3
	IL_0031:            Temp_3=a(L"\x6E29\x452B\x5D2D\x512F\x4131\x4733\x5335\x5537\x5839\x503B\x5B3D\x323F\x1541\x2D43\x2845\x2C47\x2549\x3B4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0036:            Temp_4=Temp_2[Temp_3];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_003b:            V_1=Temp_4;                                                 //stloc.1
	IL_003c:                                                                        //ldloc.1
	IL_003d:            Temp_5=V_1->Content;                                        //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_0042:                                                                        //castclass				Root::T_x83
	IL_0047:            V_2=safe_cast<Root::T_x83^>(Temp_5);                        //stloc.2
	IL_0048:                                                                        //ldloc.2
	IL_0049:                                                                        //ldnull
	IL_004a:            V_2->M_x1(safe_cast<Reflector::CodeModel::ILanguage^>(nullptr));//callvirt				void Root::T_x83::M_x1(Reflector::CodeModel::ILanguage^)
	IL_004f:                                                                        //ldloc.1
	IL_0050:                                                                        //ldc.i4.1
	IL_0051:            V_1->Visible=true;                                          //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0056:            return;                                                     //ret

}
inline void Root::T_x10::M_x12(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0006:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::TreeNodeCollection::Clear()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0011:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x10::M_x1(System::EventArgs^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4.1
	IL_0018:            this->F_x1=true;                                            //stfld				System::Boolean Root::T_x10 F_x1
	IL_001d:            return;                                                     //ret

}
inline System::String^ Root::T_x10::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_0=16;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6C2D\x422F\x5D31\x4333\x4535\x5D37\x4839\x123B\x7A3D\x253F\x2441\x2543\x3345\x2447\x3E49"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6C2D\x422F\x5D31\x4333\x4535\x5D37\x4839\x123B\x7A3D\x253F\x2441\x2543\x3345\x2447\x3E49",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x10::M_x14()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Boolean Root::T_x10 F_x1
	IL_0006:            if(!Temp_0)goto IL_0022;                                    //brfalse.s				IL_0022
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0010:            Temp_1->Clear();                                            //callvirt				void System::Windows::Forms::TreeNodeCollection::Clear()
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_001b:            this->M_x2(Temp_2);                                         //callvirt				void Root::T_x10::M_x2(System::EventArgs^)
	IL_0020:            goto IL_0022;                                               //br.s				IL_0022
	IL_0022:            return;                                                     //ret

}
inline void Root::T_x10::M_x16()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	Reflector::IWindowCollection^ Temp_3 = nullptr;
	Reflector::IWindow^ Temp_4 = nullptr;
	System::Windows::Forms::Control^ Temp_5 = nullptr;
	array<System::Object^>^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	Reflector::IWindowCollection^ Temp_8 = nullptr;
	Reflector::IWindow^ Temp_9 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	Reflector::IWindowManager^ V_1 = nullptr;
	Root::T_x3^ V_2 = nullptr;
	array<System::Object^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_4=0;                                                      //stloc				V_4
	IL_0009:                                                                        //ldc.i4.4
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.2
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldstr				L"\x5F1D\x4E1F\x4321\x4823\x5F25\x5227\x4F29\x5E2B\x792D\x592F\x5C31\x5033\x5935\x4F37"
	IL_0019:                                                                        //ldloc				V_4
	IL_001d:            Temp_0=a(L"\x5F1D\x4E1F\x4321\x4823\x5F25\x5227\x4F29\x5E2B\x792D\x592F\x5C31\x5033\x5935\x4F37",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:            V_0=Temp_0;                                                 //stloc.0
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldtoken				Reflector::IWindowManager
	IL_0029:            Temp_1=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_002e:            Temp_2=this->M_x1(Temp_1);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0033:                                                                        //castclass				Reflector::IWindowManager
	IL_0038:            V_1=safe_cast<Reflector::IWindowManager^>(Temp_2);          //stloc.1
	IL_0039:                                                                        //ldloc.1
	IL_003a:            Temp_3=V_1->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_003f:                                                                        //ldloc.0
	IL_0040:            Temp_4=Temp_3[V_0];                                         //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0045:            Temp_5=Temp_4->Content;                                     //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_004a:                                                                        //castclass				Root::T_x3
	IL_004f:            V_2=safe_cast<Root::T_x3^>(Temp_5);                         //stloc.2
	IL_0050:                                                                        //ldloc.2
	IL_0051:                                                                        //ldc.i4.1
	IL_0052:            Temp_6=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0057:            V_3=Temp_6;                                                 //stloc.3
	IL_0058:                                                                        //ldloc.3
	IL_0059:                                                                        //ldc.i4.0
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_7=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0060:            V_3[0]=Temp_7;                                              //stelem.ref
	IL_0061:                                                                        //ldloc.3
	IL_0062:            V_2->M_x2(safe_cast<System::Collections::IEnumerable^>(V_3));//callvirt				void Root::T_x3::M_x2(System::Collections::IEnumerable^)
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_8=V_1->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_006d:                                                                        //ldloc.0
	IL_006e:            Temp_9=Temp_8[V_0];                                         //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0073:                                                                        //ldc.i4.1
	IL_0074:            Temp_9->Visible=true;                                       //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0079:            return;                                                     //ret

}
inline void Root::T_x10::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x10::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x1=false;                                           //stfld				System::Boolean Root::T_x10 F_x1
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x10::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline System::Object^ Root::T_x10::M_x6()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Tag;                                           //call				System::Object^ System::Windows::Forms::TreeNode::get_Tag()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x10::M_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Boolean Root::T_x10 F_x1
	IL_0006:            if(Temp_0)goto IL_0017;                                     //brtrue.s				IL_0017
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0010:            this->M_x12(Temp_1);                                        //callvirt				void Root::T_x10::M_x12(System::EventArgs^)
	IL_0015:            goto IL_0017;                                               //br.s				IL_0017
	IL_0017:            return;                                                     //ret

}
inline System::Boolean Root::T_x10::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return false;                                               //ret

}
