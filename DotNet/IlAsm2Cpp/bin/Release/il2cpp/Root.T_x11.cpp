#include "global_xref.h"

inline static Root::T_x11::T_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x11^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x11(safe_cast<array<Reflector::CodeModel::ICustomAttribute^>^>(nullptr));//newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_0006:            Root::T_x11::F_x1=safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_0);//stsfld				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x11::T_x11(array<Reflector::CodeModel::ICustomAttribute^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x11::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x11::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0016:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_001b:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x11::F_x1;                                   //ldsfld				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x11::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
//Reflector::CodeModel::ICustomAttributeCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.m1
	IL_000b:            return -1;                                                  //ret
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:                                                                        //sub
	IL_0011:                                                                        //blt				IL_000d
	IL_0016:                                                                        //pop
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0025:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0026:                                                                        //conv.i4
	IL_0027:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_002c:            return Temp_4;                                              //ret

}
inline void Root::T_x11::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::ICustomAttributeCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::ICustomAttribute^ Root::T_x11::M_x1(System::Int32 A_0)
//Reflector::CodeModel::ICustomAttributeCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x11::M_x1(System::Int32 A_0,Reflector::CodeModel::ICustomAttribute^ A_1)
//Reflector::CodeModel::ICustomAttributeCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x11::M_x12(Reflector::CodeModel::ICustomAttribute^ A_0)
//Reflector::CodeModel::ICustomAttributeCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x11::M_x13(Reflector::CodeModel::ICustomAttribute^ A_0)
//Reflector::CodeModel::ICustomAttributeCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x11::M_x2()
//Reflector::CodeModel::ICustomAttributeCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x2=safe_cast<array<Reflector::CodeModel::ICustomAttribute^>^>(nullptr);//stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x11::M_x2(Reflector::CodeModel::ICustomAttribute^ A_0)
//Reflector::CodeModel::ICustomAttributeCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000f;                            //brtrue.s				IL_000f
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:            return false;                                               //ret
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_001d:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldc.i4.m1
	IL_0025:                                                                        //ceq
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ceq
	IL_002a:            return ((Temp_4 == -1) == false);                           //ret

}
inline void Root::T_x11::M_x2(System::Int32 A_0)
//Reflector::CodeModel::ICustomAttributeCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x11::M_x2(System::Int32 A_0,Reflector::CodeModel::ICustomAttribute^ A_1)
//Reflector::CodeModel::ICustomAttributeCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0[A_0]=A_1;                                            //stelem.ref
	IL_0009:            return;                                                     //ret

}
inline System::Int32 Root::T_x11::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x11::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x11::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x11 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
