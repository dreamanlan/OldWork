#include "global_xref.h"

inline Root::T_x150::T_x150(Root::T_x174^ A_0,System::UInt16 A_1,System::Int32 A_2,System::Int32 A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x174^ Root::T_x150 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x12=A_1;                                            //stfld				System::UInt16 Root::T_x150 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.3
	IL_0016:            this->F_x13=A_2;                                            //stfld				System::Int32 Root::T_x150 F_x13
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.s				A_3
	IL_001e:            this->F_x8=A_3;                                             //stfld				System::Int32 Root::T_x150 F_x8
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldnull
	IL_0025:            this->F_x5=safe_cast<Reflector::CodeModel::IMethodReference^>(nullptr);//stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x5
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldnull
	IL_002c:            this->F_x9=safe_cast<Reflector::CodeModel::IMethodReference^>(nullptr);//stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x9
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldnull
	IL_0033:            this->F_x4=safe_cast<Reflector::CodeModel::IMethodReference^>(nullptr);//stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x4
	IL_0038:            return;                                                     //ret

}
inline System::Int32 Root::T_x150::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	Reflector::CodeModel::IEventReference^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_0006:            V_0=dynamic_cast<Reflector::CodeModel::IEventReference^>(obj);//stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_0014;                               //brfalse.s				IL_0014
	IL_000a:            goto IL_000c;                                               //br.s				IL_000c
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldloc.0
	IL_000e:            Temp_1=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IEventReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IEventReference^,Reflector::CodeModel::IEventReference^)
	IL_0013:            return Temp_1;                                              //ret
	IL_0014:                                                                        //ldc.i4.4
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.2
	IL_0018:                                                                        //sub
	IL_0019:                                                                        //blt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0024:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x150::M_x1()
//Reflector::CodeModel::IEventDeclaration^::get_RemoveMethod by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x150::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
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
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0011:            if(Temp_0!=nullptr)goto IL_002b;                            //brtrue.s				IL_002b
	IL_0013:            goto IL_0015;                                               //br.s				IL_0015
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldc.i4.1
	IL_0017:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_001c:            this->F_x2=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_8=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_002a:            return;                                                     //ret
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0031:            V_0=Temp_1;                                                 //stloc.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_2=V_0->Length;                                         //ldlen
	IL_0035:                                                                        //conv.i4
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:                                                                        //conv.ovf.u4
	IL_0039:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_003e:            this->F_x2=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_4=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_5=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_6=V_0->Length;                                         //ldlen
	IL_0058:                                                                        //conv.i4
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x150::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IEventDeclaration^::set_AddMethod by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x5=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x5
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x150::M_x1(System::Boolean A_0)
//Reflector::CodeModel::IEventDeclaration^::set_SpecialName by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x150^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x150^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x150^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x150^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x150 F_x12
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4				0xfffffdff
	IL_0010:                                                                        //and
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -513);if(A_0)goto IL_0016;//brtrue.s				IL_0016
	IL_0014:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_001d;                   //br.s				IL_001d
	IL_0016:                                                                        //ldc.i4				0x200
	IL_001b:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=512;goto IL_0020;        //br.s				IL_0020
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0020;          //br.s				IL_0020
	IL_0020:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0021:                                                                        //conv.u2
	IL_0022:            Temp_9->F_x12=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x150 F_x12
	IL_0027:            return;                                                     //ret

}
inline System::Boolean Root::T_x150::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IEventReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0038;case 1:goto IL_000b;case 2:goto IL_0062;case 3:goto IL_0054;};//switch				(IL_0038,IL_000b,IL_0062,IL_0054)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            if(this!=safe_cast<Root::T_x150^>(A_0))goto IL_0042;        //bne.un.s				IL_0042
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_1=0;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0064;                                               //br.s				IL_0064
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_0=Root::T_x149::M_x2(safe_cast<Reflector::CodeModel::IEventReference^>(this),V_0);//call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IEventReference^,Reflector::CodeModel::IEventReference^)
	IL_0041:            return Temp_0;                                              //ret
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_0048:            V_0=dynamic_cast<Reflector::CodeModel::IEventReference^>(A_0);//stloc.0
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_1=3;                                                      //stloc				V_1
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
inline Reflector::CodeModel::IMethodReference^ Root::T_x150::M_x12()
//Reflector::CodeModel::IEventDeclaration^::get_AddMethod by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x5
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x150::M_x12(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IEventDeclaration^::set_RemoveMethod by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x9=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x9
	IL_0007:            return;                                                     //ret

}
inline System::Int32 Root::T_x150::M_x13()
//System::Object^::GetHashCode by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Name;                                          //call				System::String^ Root::T_x150::get_Name()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x150::M_x13(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x9=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x9
	IL_0007:            return;                                                     //ret

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x150::M_x2()
//Reflector::CodeModel::IEventDeclaration^::get_InvokeMethod by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x4;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x4
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x150::M_x2(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x5=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x5
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x150::M_x2(System::Boolean A_0)
//Reflector::CodeModel::IEventDeclaration^::set_RuntimeSpecialName by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x150^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x150^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x150^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x150^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x150 F_x12
	IL_000a:                                                                        //conv.i4
	IL_000b:                                                                        //ldc.i4				0xfffffbff
	IL_0010:                                                                        //and
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -1025);if(A_0)goto IL_0016;//brtrue.s				IL_0016
	IL_0014:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_001d;                   //br.s				IL_001d
	IL_0016:                                                                        //ldc.i4				0x400
	IL_001b:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=1024;goto IL_0020;       //br.s				IL_0020
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0020;          //br.s				IL_0020
	IL_0020:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0021:                                                                        //conv.u2
	IL_0022:            Temp_9->F_x12=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x150 F_x12
	IL_0027:            return;                                                     //ret

}
inline System::String^ Root::T_x150::M_x5()
//System::Object^::ToString by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_0=11;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x150::get_DeclaringType()
	IL_000f:            Temp_1=Temp_0->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0014:                                                                        //ldstr				L"\x0728"
	IL_0019:                                                                        //ldloc				V_0
	IL_001d:            Temp_2=a(L"\x0728",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_3=this->Name;                                          //call				System::String^ Root::T_x150::get_Name()
	IL_0028:            Temp_4=System::String::Concat(Temp_1,Temp_2,Temp_3);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_002d:            return Temp_4;                                              //ret

}
inline void Root::T_x150::M_x5(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IEventDeclaration^::set_InvokeMethod by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x4=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x4
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x150::M_x8()
//Reflector::CodeModel::IEventDeclaration^::get_RuntimeSpecialName by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x150 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x400
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 1024) == 0) == false);//ret

}
inline void Root::T_x150::M_x8(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x4=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x150 F_x4
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x150::M_x9()
//Reflector::CodeModel::IEventDeclaration^::get_SpecialName by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x150 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x200
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 512) == 0) == false);//ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x150::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IEventDeclaration^>(this);//ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x150::Attributes::get()
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
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x150 F_x1
	IL_0011:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_0016:            Temp_1->M_x12();                                            //callvirt				void Root::T_x2::M_x12()
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0021:            if(Temp_2!=nullptr)goto IL_002b;                            //brtrue.s				IL_002b
	IL_0023:            goto IL_0025;                                               //br.s				IL_0025
	IL_0025:            Temp_5=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_002a:            return Temp_5;                                              //ret
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_3=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x150 F_x2
	IL_0031:            Temp_4=gcnew Root::T_x11(Temp_3);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_0036:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_4);//ret

}
inline Reflector::CodeModel::IType^ Root::T_x150::DeclaringType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x150 F_x1
	IL_0006:            return safe_cast<Reflector::CodeModel::IType^>(Temp_0);     //ret

}
inline void Root::T_x150::DeclaringType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x150::Documentation::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x150 F_x1
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=Temp_1->M_x12(safe_cast<System::Object^>(this));     //callvirt				System::String^ Root::T_x2::M_x12(System::Object^)
	IL_0011:            return Temp_2;                                              //ret

}
inline void Root::T_x150::Documentation::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x150::EventType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Root::T_x174^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x150 F_x1
	IL_0009:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_2=this->F_x8;                                          //ldfld				System::Int32 Root::T_x150 F_x8
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_3=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x150 F_x1
	IL_001a:                                                                        //ldnull
	IL_001b:            Temp_4=Temp_1->M_x5(Temp_2,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_3),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(System::Int32,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0020:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_0025:            return safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_4);//ret

}
inline void Root::T_x150::EventType::set(Reflector::CodeModel::ITypeReference^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x150::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x150 F_x1
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=this->F_x13;                                         //ldfld				System::Int32 Root::T_x150 F_x13
	IL_0011:            Temp_3=Temp_1->M_x17(Temp_2);                               //callvirt				System::String^ Root::T_x2::M_x17(System::Int32)
	IL_0016:            return Temp_3;                                              //ret

}
inline void Root::T_x150::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
