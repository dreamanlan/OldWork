#include "global_xref.h"

inline Root::T_x135::T_x135(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IType^ Root::T_x135 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldnull
	IL_000f:            this->F_x2=safe_cast<Reflector::CodeModel::IArrayDimensionCollection^>(nullptr);//stfld				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135 F_x2
	IL_0014:            return;                                                     //ret

}
inline Root::T_x135::T_x135(Reflector::CodeModel::IType^ A_0,array<Reflector::CodeModel::IArrayDimension^>^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x135::T_x1^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IType^ Root::T_x135 F_x1
	IL_000d:                                                                        //ldarg.2
	IL_000e:            if(A_1==nullptr)goto IL_0012;                               //brfalse.s				IL_0012
	IL_0010:            goto IL_001a;                                               //br.s				IL_001a
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldnull
	IL_0014:            this->F_x2=safe_cast<Reflector::CodeModel::IArrayDimensionCollection^>(nullptr);//stfld				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135 F_x2
	IL_0019:            return;                                                     //ret
	IL_001a:                                                                        //ldarg.2
	IL_001b:            Temp_0=A_1->Length;                                         //ldlen
	IL_001c:                                                                        //conv.i4
	IL_001d:            if(Temp_0!=0)goto IL_0021;                                  //brtrue.s				IL_0021
	IL_001f:            goto IL_0012;                                               //br.s				IL_0012
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.2
	IL_0023:            Temp_1=gcnew Root::T_x135::T_x1(A_1);                       //newobj				void Root::T_x135::T_x1::.ctor(array<Reflector::CodeModel::IArrayDimension^>^)
	IL_0028:            this->F_x2=safe_cast<Reflector::CodeModel::IArrayDimensionCollection^>(Temp_1);//stfld				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135 F_x2
	IL_002d:            return;                                                     //ret

}
inline System::Int32 Root::T_x135::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	Reflector::CodeModel::IArrayType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_0006:            V_0=dynamic_cast<Reflector::CodeModel::IArrayType^>(obj);   //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_0014;                               //brfalse.s				IL_0014
	IL_000a:            goto IL_000c;                                               //br.s				IL_000c
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldloc.0
	IL_000e:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IArrayType^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IArrayType^,Reflector::CodeModel::IArrayType^)
	IL_0013:            return Temp_0;                                              //ret
	IL_0014:                                                                        //ldc.i4.4
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.2
	IL_0018:                                                                        //sub
	IL_0019:                                                                        //blt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:                                                                        //ldc.i4.m1
	IL_0020:            return -1;                                                  //ret

}
inline System::Int32 Root::T_x135::M_x1()
//System::Object^::GetHashCode by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x13();                                       //call				Reflector::CodeModel::IType^ Root::T_x135::M_x13()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::Object::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x135::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::IArrayType^::set_ElementType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x135::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0038;case 1:goto IL_0054;case 2:goto IL_0062;case 3:goto IL_000b;};//switch				(IL_0038,IL_0054,IL_0062,IL_000b)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            if(this!=safe_cast<Root::T_x135^>(A_0))goto IL_0042;        //bne.un.s				IL_0042
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_1=0;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0064;                                               //br.s				IL_0064
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IType^>(this),V_0);//call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_0041:            return Temp_0;                                              //ret
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //isinst				Reflector::CodeModel::IType
	IL_0048:            V_0=dynamic_cast<Reflector::CodeModel::IType^>(A_0);        //stloc.0
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_1=1;                                                      //stloc				V_1
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0057:                                                                        //ldc.i4				0x2
	IL_005c:            V_1=2;                                                      //stloc				V_1
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:            goto IL_003a;                                               //br.s				IL_003a
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:            return true;                                                //ret
	IL_0066:                                                                        //ldc.i4.0
	IL_0067:            return false;                                               //ret

}
inline System::String^ Root::T_x135::M_x12()
//System::Object^::ToString by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IArrayType^>(this));//call				System::String^ Root::T_x149::M_x1(Reflector::CodeModel::IArrayType^)
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IType^ Root::T_x135::M_x13()
//Reflector::CodeModel::IArrayType^::get_ElementType by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IType^ Root::T_x135 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135::M_x2()
//Reflector::CodeModel::IArrayType^::get_Dimensions by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0011;                            //brfalse.s				IL_0011
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_2=this->F_x2;                                          //ldfld				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135 F_x2
	IL_0010:            return Temp_2;                                              //ret
	IL_0011:            Temp_1=Root::T_x135::T_x1::M_x1();                          //call				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135::T_x1::M_x1()
	IL_0016:            return Temp_1;                                              //ret

}
inline static Root::T_x135::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x135::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x135::T_x1(safe_cast<array<Reflector::CodeModel::IArrayDimension^>^>(nullptr));//newobj				void Root::T_x135::T_x1::.ctor(array<Reflector::CodeModel::IArrayDimension^>^)
	IL_0006:            Root::T_x135::T_x1::F_x1=safe_cast<Reflector::CodeModel::IArrayDimensionCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135::T_x1 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x135::T_x1::T_x1(array<Reflector::CodeModel::IArrayDimension^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x135::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x135::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0010:            Temp_3=Temp_2->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_0015:            return Temp_3;                                              //ret
	IL_0016:            Temp_1=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_001b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x135::T_x1::F_x1;                            //ldsfld				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x135::T_x1 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x135::T_x1::M_x1(Reflector::CodeModel::IArrayDimension^ A_0)
//Reflector::CodeModel::IArrayDimensionCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x135::T_x1::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IArrayDimensionCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IArrayDimension^ Root::T_x135::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IArrayDimensionCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x135::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IArrayDimension^ A_1)
//Reflector::CodeModel::IArrayDimensionCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x135::T_x1::M_x12(Reflector::CodeModel::IArrayDimension^ A_0)
//Reflector::CodeModel::IArrayDimensionCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x135::T_x1::M_x13(Reflector::CodeModel::IArrayDimension^ A_0)
//Reflector::CodeModel::IArrayDimensionCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x135::T_x1::M_x2()
//Reflector::CodeModel::IArrayDimensionCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x135::T_x1::M_x2(Reflector::CodeModel::IArrayDimension^ A_0)
//Reflector::CodeModel::IArrayDimensionCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x135::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IArrayDimensionCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x135::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IArrayDimension^ A_1)
//Reflector::CodeModel::IArrayDimensionCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x135::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0013;                            //brfalse.s				IL_0013
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0011:                                                                        //conv.i4
	IL_0012:            return Temp_2;                                              //ret
	IL_0013:                                                                        //ldc.i4.0
	IL_0014:            return 0;                                                   //ret

}
inline System::Boolean Root::T_x135::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x135::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IArrayDimension^>^ Root::T_x135::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
