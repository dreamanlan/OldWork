#include "global_xref.h"

inline Root::T_x34::T_x34()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x33();*/                                          //call				void Root::T_x33::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IEventReference^ Root::T_x34::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMemberReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x8();                                        //call				Reflector::CodeModel::IMemberReference^ Root::T_x33::M_x8()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IEventReference
	IL_000b:            return safe_cast<Reflector::CodeModel::IEventReference^>(Temp_0);//ret

}
inline void Root::T_x34::M_x1(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Drawing::Color Temp_8;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x33::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				void Root::T_x33::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldarg.1
	IL_0015:            Temp_0=Root::T_x115::M_x9(A_0);                             //call				System::String^ Root::T_x115::M_x9(Reflector::CodeModel::IEventReference^)
	IL_001a:                                                                        //ldstr				L"\x0120\x5822\x0524"
	IL_001f:                                                                        //ldloc				V_1
	IL_0023:            Temp_1=a(L"\x0120\x5822\x0524",V_1);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_002e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0033:            Temp_3=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0038:                                                                        //ldstr				L"\x0120\x5E22"
	IL_003d:                                                                        //ldloc				V_1
	IL_0041:            Temp_4=a(L"\x0120\x5E22",V_1);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0046:            Temp_5=System::String::Concat(Temp_0,Temp_1,Temp_3,Temp_4); //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_004b:            this->Text=Temp_5;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldarg.1
	IL_0053:            Temp_6=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0058:                                                                        //dup
	IL_0059:            V_0=Temp_6;                                                 //stloc.0
	IL_005a:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_005f:                                                                        //ldloc.0
	IL_0060:            this->SelectedImageIndex=V_0;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:            Temp_7=Root::T_x116::M_x2(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::IMemberReference^)
	IL_006c:            Temp_8=System::Drawing::Color::FromArgb(Temp_7);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0071:            this->ForeColor=Temp_8;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_0076:            return;                                                     //ret

}
inline void Root::T_x34::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::IEventReference^ Temp_2 = nullptr;
	//local variables.
	Reflector::IAssemblyBrowser^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_0011:            Temp_0=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001b:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_0020:            V_0=safe_cast<Reflector::IAssemblyBrowser^>(Temp_1);        //stloc.0
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_2=this->M_x1();                                        //call				Reflector::CodeModel::IEventReference^ Root::T_x34::M_x1()
	IL_0028:            V_0->ActiveItem=safe_cast<System::Object^>(Temp_2);         //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_002d:            return;                                                     //ret

}
inline void Root::T_x34::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x12();                                              //call				void Root::T_x34::M_x12()
	IL_0006:            return;                                                     //ret

}
