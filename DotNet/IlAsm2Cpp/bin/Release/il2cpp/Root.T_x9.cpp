#include "global_xref.h"

inline Root::T_x9::T_x9(Root::T_x174^ A_0,System::UInt16 A_1,System::Int32 A_2,System::Int32 A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	Root::T_x139^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x174^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	Root::T_x139^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x174^ Root::T_x9 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x12=A_1;                                            //stfld				System::UInt16 Root::T_x9 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.3
	IL_0016:            this->F_x13=A_2;                                            //stfld				System::Int32 Root::T_x9 F_x13
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x9 F_x1
	IL_0021:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_0026:            V_0=Temp_1;                                                 //stloc.0
	IL_0027:                                                                        //ldloc.0
	IL_0028:                                                                        //ldarg.s				A_3
	IL_002a:            Temp_2=V_0->M_x14(A_3);                                     //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_002f:            V_1=Temp_2;                                                 //stloc.1
	IL_0030:                                                                        //ldloc.1
	IL_0031:            Temp_3=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0036:                                                                        //ldc.i4.s				15
	IL_0038:                                                                        //and
	IL_0039:                                                                        //ldc.i4.6
	IL_003a:            if((Temp_3 & 15)!=6)goto IL_0054;                           //bne.un.s				IL_0054
	IL_003c:            goto IL_003e;                                               //br.s				IL_003e
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //ldloc.0
	IL_0040:                                                                        //ldloc.1
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x9 F_x1
	IL_0047:                                                                        //ldnull
	IL_0048:            Temp_5=V_0->M_x5(V_1,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_4),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_004d:            this->F_x8=Temp_5;                                          //stfld				Reflector::CodeModel::IType^ Root::T_x9 F_x8
	IL_0052:            goto IL_0054;                                               //br.s				IL_0054
	IL_0054:                                                                        //ldloc.0
	IL_0055:                                                                        //ldloc.1
	IL_0056:            V_0->M_x12(V_1);                                            //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_005b:            return;                                                     //ret

}
inline System::Int32 Root::T_x9::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::NotSupportedException^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0062;case 1:goto IL_000b;case 2:goto IL_0038;case 3:goto IL_0054;};//switch				(IL_0062,IL_000b,IL_0038,IL_0054)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            if(this!=safe_cast<Root::T_x9^>(obj))goto IL_0042;          //bne.un.s				IL_0042
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_1=2;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0064;                                               //br.s				IL_0064
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IFieldReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IFieldReference^,Reflector::CodeModel::IFieldReference^)
	IL_0041:            return Temp_0;                                              //ret
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0048:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(obj);//stloc.0
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_1=3;                                                      //stloc				V_1
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_1=0;                                                      //stloc				V_1
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:            goto IL_003a;                                               //br.s				IL_003a
	IL_0064:                                                                        //ldc.i4.0
	IL_0065:            return 0;                                                   //ret
	IL_0066:            Temp_1=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_006b:            throw Temp_1;                                               //throw

}
inline Reflector::CodeModel::IExpression^ Root::T_x9::M_x1()
//Reflector::CodeModel::IFieldDeclaration^::get_Initializer by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				Reflector::CodeModel::IExpression^ Root::T_x9 F_x5
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x9::M_x1(Reflector::CodeModel::FieldVisibility A_0)
//Reflector::CodeModel::IFieldDeclaration^::set_Visibility by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x9::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_8 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICustomAttribute^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0020;                            //brtrue.s				IL_0020
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldc.i4.1
	IL_000c:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0011:            this->F_x2=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_0016:                                                                        //ldarg.0
	IL_0017:            Temp_8=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_001f:            return;                                                     //ret
	IL_0020:                                                                        //ldc.i4.4
	IL_0021:                                                                        //dup
	IL_0022:                                                                        //dup
	IL_0023:                                                                        //ldc.i4.2
	IL_0024:                                                                        //sub
	IL_0025:                                                                        //blt				IL_0021
	IL_002a:                                                                        //pop
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_0031:            V_0=Temp_1;                                                 //stloc.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_2=V_0->Length;                                         //ldlen
	IL_0035:                                                                        //conv.i4
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:                                                                        //conv.ovf.u4
	IL_0039:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_003e:            this->F_x2=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_4=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_5=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_6=V_0->Length;                                         //ldlen
	IL_0058:                                                                        //conv.i4
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x9::M_x1(Reflector::CodeModel::IExpression^ A_0)
//Reflector::CodeModel::IFieldDeclaration^::set_Initializer by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x5=A_0;                                             //stfld				Reflector::CodeModel::IExpression^ Root::T_x9 F_x5
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x9::M_x1(System::Boolean A_0)
//Reflector::CodeModel::IFieldDeclaration^::set_RuntimeSpecialName by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x9::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0035;case 1:goto IL_005f;case 2:goto IL_0051;case 3:goto IL_000b;};//switch				(IL_0035,IL_005f,IL_0051,IL_000b)
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            if(this!=safe_cast<Root::T_x9^>(A_0))goto IL_003f;          //bne.un.s				IL_003f
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_1=0;                                                      //stloc				V_1
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_0064;                                               //br.s				IL_0064
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldloc.0
	IL_0039:            Temp_0=Root::T_x149::M_x2(safe_cast<Reflector::CodeModel::IFieldReference^>(this),V_0);//call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IFieldReference^,Reflector::CodeModel::IFieldReference^)
	IL_003e:            return Temp_0;                                              //ret
	IL_003f:                                                                        //ldarg.1
	IL_0040:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0045:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(A_0);//stloc.0
	IL_0046:                                                                        //ldc.i4				0x2
	IL_004b:            V_1=2;                                                      //stloc				V_1
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:                                                                        //ldloc.0
	IL_0052:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0054:                                                                        //ldc.i4				0x1
	IL_0059:            V_1=1;                                                      //stloc				V_1
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:            goto IL_0062;                                               //br.s				IL_0062
	IL_0061:                                                                        //break
	IL_0062:            goto IL_0037;                                               //br.s				IL_0037
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:            return true;                                                //ret
	IL_0066:                                                                        //ldc.i4.0
	IL_0067:            return false;                                               //ret

}
inline System::Boolean Root::T_x9::M_x12()
//Reflector::CodeModel::IFieldDeclaration^::get_Literal by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x9 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.s				64
	IL_0009:                                                                        //and
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:                                                                        //ceq
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:            return (((safe_cast<System::Int32>(Temp_0) & 64) == 0) == false);//ret

}
inline void Root::T_x9::M_x12(System::Boolean A_0)
//Reflector::CodeModel::IFieldDeclaration^::set_Static by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x9::M_x13()
//Reflector::CodeModel::IFieldDeclaration^::get_SpecialName by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x9 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x200
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 512) == 0) == false);//ret

}
inline void Root::T_x9::M_x13(System::Boolean A_0)
//Reflector::CodeModel::IFieldDeclaration^::set_SpecialName by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x9::M_x15()
//Reflector::CodeModel::IFieldDeclaration^::get_RuntimeSpecialName by M_x15
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x9 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x400
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 1024) == 0) == false);//ret

}
inline System::Boolean Root::T_x9::M_x2()
//Reflector::CodeModel::IFieldDeclaration^::get_Static by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x9 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.s				16
	IL_0009:                                                                        //and
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:                                                                        //ceq
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:            return (((safe_cast<System::Int32>(Temp_0) & 16) == 0) == false);//ret

}
inline void Root::T_x9::M_x2(System::Boolean A_0)
//Reflector::CodeModel::IFieldDeclaration^::set_ReadOnly by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x9::M_x4()
//System::Object^::ToString by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_1=17;                                                     //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldc.i4.5
	IL_000d:            Temp_0=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_0012:            V_0=Temp_0;                                                 //stloc.0
	IL_0013:                                                                        //ldloc.0
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_1=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x9::get_DeclaringType()
	IL_001b:            Temp_2=Temp_1->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0020:            V_0[0]=Temp_2;                                              //stelem.ref
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldc.i4.1
	IL_0023:                                                                        //ldstr				L"\x012E"
	IL_0028:                                                                        //ldloc				V_1
	IL_002c:            Temp_3=a(L"\x012E",V_1);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0031:            V_0[1]=Temp_3;                                              //stelem.ref
	IL_0032:                                                                        //ldloc.0
	IL_0033:                                                                        //ldc.i4.2
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_4=this->Name;                                          //call				System::String^ Root::T_x9::get_Name()
	IL_003a:            V_0[2]=Temp_4;                                              //stelem.ref
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldc.i4.3
	IL_003d:                                                                        //ldstr				L"\x0F2E\x0B30\x1332"
	IL_0042:                                                                        //ldloc				V_1
	IL_0046:            Temp_5=a(L"\x0F2E\x0B30\x1332",V_1);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004b:            V_0[3]=Temp_5;                                              //stelem.ref
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldc.i4.4
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_6=this->FieldType;                                     //call				Reflector::CodeModel::IType^ Root::T_x9::get_FieldType()
	IL_0054:            Temp_7=Temp_6->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0059:            V_0[4]=Temp_7;                                              //stelem.ref
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_8=System::String::Concat(V_0);                         //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0060:            return Temp_8;                                              //ret

}
inline System::Int32 Root::T_x9::M_x5()
//System::Object^::GetHashCode by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Name;                                          //call				System::String^ Root::T_x9::get_Name()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::FieldVisibility Root::T_x9::M_x8()
//Reflector::CodeModel::IFieldDeclaration^::get_Visibility by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x9 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.7
	IL_0008:                                                                        //and
	IL_0009:            return safe_cast<Reflector::CodeModel::FieldVisibility>((safe_cast<System::Int32>(Temp_0) & 7));//ret

}
inline void Root::T_x9::M_x8(System::Boolean A_0)
//Reflector::CodeModel::IFieldDeclaration^::set_Literal by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x9::M_x9()
//Reflector::CodeModel::IFieldDeclaration^::get_ReadOnly by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x9 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4.s				32
	IL_0009:                                                                        //and
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:                                                                        //ceq
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:            return (((safe_cast<System::Int32>(Temp_0) & 32) == 0) == false);//ret

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x9::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IFieldDeclaration^>(this);//ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x9::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	Root::T_x11^ Temp_4 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x9 F_x1
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:            Temp_1->M_x12();                                            //callvirt				void Root::T_x2::M_x12()
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_0016:            if(Temp_2!=nullptr)goto IL_0023;                            //brtrue.s				IL_0023
	IL_0018:            goto IL_001b;                                               //br.s				IL_001b
	IL_001a:                                                                        //break
	IL_001b:            goto IL_001d;                                               //br.s				IL_001d
	IL_001d:            Temp_5=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_0022:            return Temp_5;                                              //ret
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_3=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x9 F_x2
	IL_0029:            Temp_4=gcnew Root::T_x11(Temp_3);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_002e:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_4);//ret

}
inline Reflector::CodeModel::IType^ Root::T_x9::DeclaringType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x9 F_x1
	IL_0006:            return safe_cast<Reflector::CodeModel::IType^>(Temp_0);     //ret

}
inline void Root::T_x9::DeclaringType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x9::Documentation::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x9 F_x1
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=Temp_1->M_x12(safe_cast<System::Object^>(this));     //callvirt				System::String^ Root::T_x2::M_x12(System::Object^)
	IL_0011:            return Temp_2;                                              //ret

}
inline void Root::T_x9::Documentation::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IType^ Root::T_x9::FieldType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Reflector::CodeModel::IType^ Root::T_x9 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x9::FieldType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x8=value;                                           //stfld				Reflector::CodeModel::IType^ Root::T_x9 F_x8
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x9::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x9 F_x1
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=this->F_x13;                                         //ldfld				System::Int32 Root::T_x9 F_x13
	IL_0011:            Temp_3=Temp_1->M_x17(Temp_2);                               //callvirt				System::String^ Root::T_x2::M_x17(System::Int32)
	IL_0016:            return Temp_3;                                              //ret

}
inline void Root::T_x9::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
