#include "global_xref.h"

inline Root::T_x12::T_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x12::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				System::String
	IL_000b:            return safe_cast<System::String^>(Temp_0);                  //ret

}
inline void Root::T_x12::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->M_x1();                                        //call				System::String^ Root::T_x12::M_x1()
	IL_0007:            A_0->Write(Temp_0);                                         //callvirt				void Reflector::CodeModel::IFormatter::Write(System::String^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x12::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Root::T_x10::M_x1(safe_cast<System::Object^>(A_0));         //call				void Root::T_x10::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            this->Text=A_0;                                             //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldc.i4				0xa6
	IL_0018:                                                                        //dup
	IL_0019:            V_0=166;                                                    //stloc.0
	IL_001a:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_001f:                                                                        //ldloc.0
	IL_0020:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0025:            return;                                                     //ret

}
