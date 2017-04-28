#include "global_xref.h"

inline Root::T_x179::T_x179()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0007:            this->F_x1=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_000c:                                                                        //ldarg.0
	IL_000d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0012:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x179::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x179::M_x1()
//System::Collections::ICollection^::get_IsSynchronized by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Collections::ArrayList::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x179::M_x1(System::Array^ A_0,System::Int32 A_1)
//System::Collections::ICollection^::CopyTo by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            Temp_0->CopyTo(A_0,safe_cast<System::Int32>(0));            //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline Root::T_x8^ Root::T_x179::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				Root::T_x8
	IL_0011:            return safe_cast<Root::T_x8^>(Temp_1);                      //ret

}
inline void Root::T_x179::M_x1(Root::T_x8^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
inline System::Object^ Root::T_x179::M_x12()
//System::Collections::ICollection^::get_SyncRoot by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Collections::ArrayList::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Int32 Root::T_x179::M_x2()
//System::Collections::ICollection^::get_Count by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x179 F_x1
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
