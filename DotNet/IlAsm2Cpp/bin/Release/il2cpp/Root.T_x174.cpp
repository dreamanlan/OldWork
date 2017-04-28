#include "global_xref.h"

inline Root::T_x174::T_x174(Root::T_x2^ A_0,System::UInt32 A_1,System::String^ A_2,System::String^ A_3,System::Int32 A_4)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x8=safe_cast<array<Reflector::CodeModel::IMethodDeclaration^>^>(nullptr);//stfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174 F_x8
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldnull
	IL_0009:            this->F_x5=safe_cast<array<Reflector::CodeModel::IFieldDeclaration^>^>(nullptr);//stfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174 F_x5
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldnull
	IL_0010:            this->F_x9=safe_cast<array<Reflector::CodeModel::IPropertyDeclaration^>^>(nullptr);//stfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174 F_x9
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldnull
	IL_0017:            this->F_x4=safe_cast<array<Reflector::CodeModel::IEventDeclaration^>^>(nullptr);//stfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174 F_x4
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldnull
	IL_001e:            this->F_x15=safe_cast<Reflector::CodeModel::ITypeReferenceCollection^>(nullptr);//stfld				Reflector::CodeModel::ITypeReferenceCollection^ Root::T_x174 F_x15
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldnull
	IL_0025:            this->F_x11=safe_cast<array<Reflector::CodeModel::IGenericParameter^>^>(nullptr);//stfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_002a:                                                                        //ldarg.0
	IL_002b:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            this->F_x1=A_0;                                             //stfld				Root::T_x2^ Root::T_x174 F_x1
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldnull
	IL_0039:            this->F_x12=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(nullptr);//stfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x174 F_x12
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //ldnull
	IL_0040:            this->F_x13=safe_cast<Reflector::CodeModel::ITypeDeclarationCollection^>(nullptr);//stfld				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x174 F_x13
	IL_0045:                                                                        //ldarg.0
	IL_0046:                                                                        //ldarg.2
	IL_0047:            this->F_x10=A_1;                                            //stfld				System::UInt32 Root::T_x174 F_x10
	IL_004c:                                                                        //ldarg.0
	IL_004d:                                                                        //ldarg.3
	IL_004e:            this->F_x7=A_2;                                             //stfld				System::String^ Root::T_x174 F_x7
	IL_0053:                                                                        //ldarg.0
	IL_0054:                                                                        //ldarg.s				A_3
	IL_0056:            this->F_x16=A_3;                                            //stfld				System::String^ Root::T_x174 F_x16
	IL_005b:                                                                        //ldarg.0
	IL_005c:                                                                        //ldarg.s				A_4
	IL_005e:            this->F_x6=A_4;                                             //stfld				System::Int32 Root::T_x174 F_x6
	IL_0063:            return;                                                     //ret

}
inline System::Int32 Root::T_x174::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            goto IL_000d;                                               //br.s				IL_000d
	IL_000b:            goto IL_0029;                                               //br.s				IL_0029
	IL_000d:            goto IL_0010;                                               //br.s				IL_0010
	IL_000f:                                                                        //break
	IL_0010:                                                                        //ldloc				V_1
	IL_0014:            switch(V_1){case 0:goto IL_0038;case 1:goto IL_0062;case 2:goto IL_000b;case 3:goto IL_0054;};//switch				(IL_0038,IL_0062,IL_000b,IL_0054)
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            if(this!=safe_cast<Root::T_x174^>(obj))goto IL_0042;        //bne.un.s				IL_0042
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_1=0;                                                      //stloc				V_1
	IL_0036:            goto IL_000d;                                               //br.s				IL_000d
	IL_0038:            goto IL_0064;                                               //br.s				IL_0064
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::ITypeReference^,Reflector::CodeModel::ITypeReference^)
	IL_0041:            return Temp_0;                                              //ret
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0048:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(obj);//stloc.0
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_1=3;                                                      //stloc				V_1
	IL_0052:            goto IL_000d;                                               //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0057:                                                                        //ldc.i4				0x1
	IL_005c:            V_1=1;                                                      //stloc				V_1
	IL_0060:            goto IL_000d;                                               //br.s				IL_000d
	IL_0062:            goto IL_003a;                                               //br.s				IL_003a
	IL_0064:                                                                        //ldc.i4.0
	IL_0065:            return 0;                                                   //ret
	IL_0066:                                                                        //ldc.i4.m1
	IL_0067:            return -1;                                                  //ret

}
inline System::Boolean Root::T_x174::M_x1()
//Reflector::CodeModel::ITypeDeclaration^::get_SpecialName by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x10;                                         //ldfld				System::UInt32 Root::T_x174 F_x10
	IL_0006:                                                                        //ldc.i4				0x400
	IL_000b:                                                                        //and
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //ceq
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //ceq
	IL_0012:            return (((Temp_0 & 1024) == 0) == false);                   //ret

}
inline void Root::T_x174::M_x1(array<Reflector::CodeModel::IEventDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x4;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174 F_x4
	IL_0006:            if(Temp_0==nullptr)goto IL_0010;                            //brfalse.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_1=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_000f:            throw Temp_1;                                               //throw
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            this->F_x4=A_0;                                             //stfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174 F_x4
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x174::M_x1(array<Reflector::CodeModel::IFieldDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174 F_x5
	IL_0006:            if(Temp_0==nullptr)goto IL_0010;                            //brfalse.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_1=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_000f:            throw Temp_1;                                               //throw
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            this->F_x5=A_0;                                             //stfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174 F_x5
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x174::M_x1(array<Reflector::CodeModel::IMethodDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174 F_x8
	IL_0006:            if(Temp_0==nullptr)goto IL_0010;                            //brfalse.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_1=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_000f:            throw Temp_1;                                               //throw
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            this->F_x8=A_0;                                             //stfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174 F_x8
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x174::M_x1(array<Reflector::CodeModel::IPropertyDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174 F_x9
	IL_0006:            if(Temp_0==nullptr)goto IL_0010;                            //brfalse.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_1=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_000f:            throw Temp_1;                                               //throw
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            this->F_x9=A_0;                                             //stfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174 F_x9
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x174::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
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
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_0011:            if(Temp_0!=nullptr)goto IL_002b;                            //brtrue.s				IL_002b
	IL_0013:            goto IL_0015;                                               //br.s				IL_0015
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldc.i4.1
	IL_0017:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_001c:            this->F_x2=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_8=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_002a:            return;                                                     //ret
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_0031:            V_0=Temp_1;                                                 //stloc.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_2=V_0->Length;                                         //ldlen
	IL_0035:                                                                        //conv.i4
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:                                                                        //conv.ovf.u4
	IL_0039:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_003e:            this->F_x2=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_0043:                                                                        //ldloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_4=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_004a:                                                                        //ldc.i4.0
	IL_004b:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_5=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_6=V_0->Length;                                         //ldlen
	IL_0058:                                                                        //conv.i4
	IL_0059:                                                                        //ldarg.1
	IL_005a:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x174::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::Memory::TypeDeclarationCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldc.i4				0x2
	IL_0010:            V_0=2;                                                      //stloc				V_0
	IL_0014:            /*goto IL_0018;*/goto IL_0016;                              //br.s				IL_0018
	IL_0016:            goto IL_002d;                                               //br.s				IL_002d
	IL_0018:                                                                        //ldloc				V_0
	IL_001c:            switch(V_0){case 0:goto IL_0058;case 1:goto IL_0040;case 2:goto IL_0016;};//switch				(IL_0058,IL_0040,IL_0016)
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_2=this->F_x13;                                         //ldfld				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x174 F_x13
	IL_0033:            if(Temp_2!=nullptr)goto IL_005a;                            //brtrue.s				IL_005a
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_0=1;                                                      //stloc				V_0
	IL_003e:            /*goto IL_0018;*/goto IL_0040;                              //br.s				IL_0018
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_1=gcnew Reflector::CodeModel::Memory::TypeDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::TypeDeclarationCollection::.ctor()
	IL_0048:            this->F_x13=safe_cast<Reflector::CodeModel::ITypeDeclarationCollection^>(Temp_1);//stfld				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x174 F_x13
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_0=0;                                                      //stloc				V_0
	IL_0056:            /*goto IL_0018;*/goto IL_0058;                              //br.s				IL_0018
	IL_0058:            goto IL_005a;                                               //br.s				IL_005a
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x174 F_x13
	IL_0060:                                                                        //ldarg.1
	IL_0061:            Temp_0->Add(A_0);                                           //callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::Add(Reflector::CodeModel::ITypeDeclaration^)
	IL_0066:            return;                                                     //ret

}
inline void Root::T_x174::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::TypeReferenceCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_0010;*/goto IL_000b;                              //br.s				IL_0010
	IL_000b:            goto IL_000e;                                               //br.s				IL_000e
	IL_000d:                                                                        //break
	IL_000e:            goto IL_0025;                                               //br.s				IL_0025
	IL_0010:                                                                        //ldloc				V_0
	IL_0014:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0038;case 2:goto IL_0050;};//switch				(IL_000b,IL_0038,IL_0050)
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_2=this->F_x15;                                         //ldfld				Reflector::CodeModel::ITypeReferenceCollection^ Root::T_x174 F_x15
	IL_002b:            if(Temp_2!=nullptr)goto IL_0052;                            //brtrue.s				IL_0052
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_0=1;                                                      //stloc				V_0
	IL_0036:            /*goto IL_0010;*/goto IL_0038;                              //br.s				IL_0010
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_0=gcnew Reflector::CodeModel::Memory::TypeReferenceCollection();//newobj				void Reflector::CodeModel::Memory::TypeReferenceCollection::.ctor()
	IL_0040:            this->F_x15=safe_cast<Reflector::CodeModel::ITypeReferenceCollection^>(Temp_0);//stfld				Reflector::CodeModel::ITypeReferenceCollection^ Root::T_x174 F_x15
	IL_0045:                                                                        //ldc.i4				0x2
	IL_004a:            V_0=2;                                                      //stloc				V_0
	IL_004e:            /*goto IL_0010;*/goto IL_0050;                              //br.s				IL_0010
	IL_0050:            goto IL_0052;                                               //br.s				IL_0052
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_1=this->F_x15;                                         //ldfld				Reflector::CodeModel::ITypeReferenceCollection^ Root::T_x174 F_x15
	IL_0058:                                                                        //ldarg.1
	IL_0059:            Temp_1->Add(A_0);                                           //callvirt				void Reflector::CodeModel::ITypeReferenceCollection::Add(Reflector::CodeModel::ITypeReference^)
	IL_005e:            return;                                                     //ret

}
inline void Root::T_x174::M_x1(Reflector::CodeModel::TypeVisibility A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_Visibility by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::M_x1(System::Boolean A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_Interface by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::M_x1(System::Int32 A_0,Reflector::CodeModel::IGenericParameter^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_2 = nullptr;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_6 = nullptr;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_7 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IGenericParameter^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_000b;case 1:goto IL_0041;case 2:goto IL_00b9;case 3:goto IL_009a;case 4:goto IL_007e;case 5:goto IL_0071;};//switch				(IL_000b,IL_0041,IL_00b9,IL_009a,IL_007e,IL_0071)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_7=this->F_x11;                                         //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0034:            if(Temp_7!=nullptr)goto IL_0073;                            //brtrue.s				IL_0073
	IL_0036:                                                                        //ldc.i4				0x1
	IL_003b:            V_1=1;                                                      //stloc				V_1
	IL_003f:            /*goto IL_000d;*/goto IL_0041;                              //br.s				IL_000d
	IL_0041:            goto IL_009c;                                               //br.s				IL_009c
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_1=this->F_x11;                                         //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0049:            V_0=Temp_1;                                                 //stloc.0
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldarg.1
	IL_004c:                                                                        //ldc.i4.1
	IL_004d:                                                                        //add
	IL_004e:                                                                        //conv.ovf.u4
	IL_004f:            Temp_2=gcnew array<Reflector::CodeModel::IGenericParameter^>(safe_cast<System::UInt32>((A_0 + 1)));//newarr				Reflector::CodeModel::IGenericParameter
	IL_0054:            this->F_x11=Temp_2;                                         //stfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0059:                                                                        //ldloc.0
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_3=this->F_x11;                                         //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0060:                                                                        //ldc.i4.0
	IL_0061:            V_0->CopyTo(safe_cast<System::Array^>(Temp_3),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0066:                                                                        //ldc.i4				0x5
	IL_006b:            V_1=5;                                                      //stloc				V_1
	IL_006f:            /*goto IL_000d;*/goto IL_0071;                              //br.s				IL_000d
	IL_0071:            goto IL_00bb;                                               //br.s				IL_00bb
	IL_0073:                                                                        //ldc.i4				0x4
	IL_0078:            V_1=4;                                                      //stloc				V_1
	IL_007c:            /*goto IL_000d;*/goto IL_007e;                              //br.s				IL_000d
	IL_007e:            goto IL_0081;                                               //br.s				IL_0081
	IL_0080:                                                                        //break
	IL_0081:                                                                        //ldarg.1
	IL_0082:                                                                        //ldarg.0
	IL_0083:            Temp_4=this->F_x11;                                         //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0088:            Temp_5=Temp_4->Length;                                      //ldlen
	IL_0089:                                                                        //conv.i4
	IL_008a:            if(A_0<Temp_5)goto IL_00bb;                                 //blt.s				IL_00bb
	IL_008c:                                                                        //ldc.i4				0x3
	IL_0091:            V_1=3;                                                      //stloc				V_1
	IL_0095:            /*goto IL_000d;*/goto IL_009a;                              //br				IL_000d
	IL_009a:            goto IL_0043;                                               //br.s				IL_0043
	IL_009c:                                                                        //ldarg.0
	IL_009d:                                                                        //ldarg.1
	IL_009e:                                                                        //ldc.i4.1
	IL_009f:                                                                        //add
	IL_00a0:                                                                        //conv.ovf.u4
	IL_00a1:            Temp_0=gcnew array<Reflector::CodeModel::IGenericParameter^>(safe_cast<System::UInt32>((A_0 + 1)));//newarr				Reflector::CodeModel::IGenericParameter
	IL_00a6:            this->F_x11=Temp_0;                                         //stfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_00ab:                                                                        //ldc.i4				0x2
	IL_00b0:            V_1=2;                                                      //stloc				V_1
	IL_00b4:            /*goto IL_000d;*/goto IL_00b9;                              //br				IL_000d
	IL_00b9:            goto IL_0073;                                               //br.s				IL_0073
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_6=this->F_x11;                                         //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_00c1:                                                                        //ldarg.1
	IL_00c2:                                                                        //ldarg.2
	IL_00c3:            Temp_6[A_0]=A_1;                                            //stelem.ref
	IL_00c4:            return;                                                     //ret

}
inline System::Boolean Root::T_x174::M_x1(System::Object^ A_0)
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
	IL_0011:            switch(V_1){case 0:goto IL_005c;case 1:goto IL_0035;case 2:goto IL_006a;case 3:goto IL_000b;};//switch				(IL_005c,IL_0035,IL_006a,IL_000b)
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            if(this!=safe_cast<Root::T_x174^>(A_0))goto IL_004a;        //bne.un.s				IL_004a
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_1=1;                                                      //stloc				V_1
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_006c;                                               //br.s				IL_006c
	IL_0037:                                                                        //ldc.i4.2
	IL_0038:                                                                        //dup
	IL_0039:                                                                        //dup
	IL_003a:                                                                        //ldc.i4.7
	IL_003b:                                                                        //add
	IL_003c:                                                                        //bgt				IL_0038
	IL_0041:                                                                        //pop
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldloc.0
	IL_0044:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IType^>(this),V_0);//call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_0049:            return Temp_0;                                              //ret
	IL_004a:                                                                        //ldarg.1
	IL_004b:                                                                        //isinst				Reflector::CodeModel::IType
	IL_0050:            V_0=dynamic_cast<Reflector::CodeModel::IType^>(A_0);        //stloc.0
	IL_0051:                                                                        //ldc.i4				0x0
	IL_0056:            V_1=0;                                                      //stloc				V_1
	IL_005a:            /*goto IL_000d;*/goto IL_005c;                              //br.s				IL_000d
	IL_005c:                                                                        //ldloc.0
	IL_005d:            if(V_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_1=2;                                                      //stloc				V_1
	IL_0068:            /*goto IL_000d;*/goto IL_006a;                              //br.s				IL_000d
	IL_006a:            goto IL_0037;                                               //br.s				IL_0037
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:            return true;                                                //ret
	IL_006e:                                                                        //ldc.i4.0
	IL_006f:            return false;                                               //ret

}
inline System::Int32 Root::T_x174::M_x10()
//System::Object^::GetHashCode by M_x10
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Name;                                          //call				System::String^ Root::T_x174::get_Name()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IEventDeclarationCollection^ Root::T_x174::M_x11()
//Reflector::CodeModel::ITypeDeclaration^::get_Events by M_x11
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_1 = nullptr;
	Root::T_x174::T_x2^ Temp_2 = nullptr;
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x4;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174 F_x4
	IL_0006:            if(Temp_0==nullptr)goto IL_000a;                            //brfalse.s				IL_000a
	IL_0008:            goto IL_0012;                                               //br.s				IL_0012
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            Temp_1=gcnew array<Reflector::CodeModel::IEventDeclaration^>(0);//newarr				Reflector::CodeModel::IEventDeclaration
	IL_0010:            Temp_4=Temp_1;goto IL_001a;                                 //br.s				IL_001a
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_3=this->F_x4;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174 F_x4
	IL_0018:            Temp_4=Temp_3;goto IL_001a;                                 //br.s				IL_001a
	IL_001a:            Temp_2=gcnew Root::T_x174::T_x2(Temp_4);/*warning ! semantic stack doesn't empty at joint !;*///newobj				void Root::T_x174::T_x2::.ctor(array<Reflector::CodeModel::IEventDeclaration^>^)
	IL_001f:            return safe_cast<Reflector::CodeModel::IEventDeclarationCollection^>(Temp_2);//ret

}
inline System::String^ Root::T_x174::M_x12()
//System::Object^::ToString by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Globalization::CultureInfo^ Temp_8 = nullptr;
	System::IO::StringWriter^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::CodeModel::IType^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	//local variables.
	Reflector::CodeModel::ITypeCollection^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_4=18;                                                     //stloc				V_4
	IL_0009:            goto IL_0038;                                               //br.s				IL_0038
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_0055;case 1:goto IL_0093;case 2:goto IL_00d4;case 3:goto IL_014c;case 4:goto IL_006c;case 5:goto IL_0123;case 6:goto IL_00b7;case 7:goto IL_0112;case 8:goto IL_0079;};//switch				(IL_0055,IL_0093,IL_00d4,IL_014c,IL_006c,IL_0123,IL_00b7,IL_0112,IL_0079)
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_0=this->GenericArguments;                              //call				Reflector::CodeModel::ITypeCollection^ Root::T_x174::get_GenericArguments()
	IL_003e:            V_0=Temp_0;                                                 //stloc.0
	IL_003f:                                                                        //ldc.i4.3
	IL_0040:                                                                        //dup
	IL_0041:                                                                        //dup
	IL_0042:                                                                        //ldc.i4.3
	IL_0043:                                                                        //sub
	IL_0044:                                                                        //blt				IL_0040
	IL_0049:                                                                        //pop
	IL_004a:                                                                        //ldc.i4				0x0
	IL_004f:            V_3=0;                                                      //stloc				V_3
	IL_0053:            /*goto IL_000b;*/goto IL_0055;                              //br.s				IL_000b
	IL_0055:                                                                        //ldloc.0
	IL_0056:            Temp_1=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_005b:                                                                        //ldc.i4.0
	IL_005c:            if(Temp_1<=0)goto IL_0151;                                  //ble				IL_0151
	IL_0061:                                                                        //ldc.i4				0x4
	IL_0066:            V_3=4;                                                      //stloc				V_3
	IL_006a:            /*goto IL_000b;*/goto IL_006c;                              //br.s				IL_000b
	IL_006c:            goto IL_00b9;                                               //br.s				IL_00b9
	IL_006e:                                                                        //ldc.i4				0x8
	IL_0073:            V_3=8;                                                      //stloc				V_3
	IL_0077:            /*goto IL_000b;*/goto IL_0079;                              //br.s				IL_000b
	IL_0079:                                                                        //ldloc.2
	IL_007a:                                                                        //ldloc.0
	IL_007b:            Temp_13=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0080:            if(V_2<Temp_13)goto IL_0104;                                //blt				IL_0104
	IL_0085:                                                                        //ldc.i4				0x1
	IL_008a:            V_3=1;                                                      //stloc				V_3
	IL_008e:            /*goto IL_000b;*/goto IL_0093;                              //br				IL_000b
	IL_0093:            goto IL_00d6;                                               //br.s				IL_00d6
	IL_0095:                                                                        //ldloc.1
	IL_0096:                                                                        //ldstr				L"\x1C2F"
	IL_009b:                                                                        //ldloc				V_4
	IL_009f:            Temp_10=a(L"\x1C2F",V_4);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a4:            V_1->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00a9:                                                                        //ldc.i4				0x6
	IL_00ae:            V_3=6;                                                      //stloc				V_3
	IL_00b2:            /*goto IL_000b;*/goto IL_00b7;                              //br				IL_000b
	IL_00b7:            goto IL_0128;                                               //br.s				IL_0128
	IL_00b9:            Temp_8=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00be:            Temp_9=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_8));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_00c3:            V_1=Temp_9;                                                 //stloc.1
	IL_00c4:                                                                        //ldc.i4.0
	IL_00c5:            V_2=0;                                                      //stloc.2
	IL_00c6:                                                                        //ldc.i4				0x2
	IL_00cb:            V_3=2;                                                      //stloc				V_3
	IL_00cf:            /*goto IL_000b;*/goto IL_00d4;                              //br				IL_000b
	IL_00d4:            goto IL_006e;                                               //br.s				IL_006e
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:            Temp_3=this->Name;                                          //call				System::String^ Root::T_x174::get_Name()
	IL_00dc:                                                                        //ldstr				L"\x0C2F"
	IL_00e1:                                                                        //ldloc				V_4
	IL_00e5:            Temp_4=a(L"\x0C2F",V_4);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ea:                                                                        //ldloc.1
	IL_00eb:            Temp_5=V_1->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_00f0:                                                                        //ldstr				L"\x0E2F"
	IL_00f5:                                                                        //ldloc				V_4
	IL_00f9:            Temp_6=a(L"\x0E2F",V_4);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fe:            Temp_7=System::String::Concat(Temp_3,Temp_4,Temp_5,Temp_6); //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_0103:            return Temp_7;                                              //ret
	IL_0104:                                                                        //ldc.i4				0x7
	IL_0109:            V_3=7;                                                      //stloc				V_3
	IL_010d:            /*goto IL_000b;*/goto IL_0112;                              //br				IL_000b
	IL_0112:                                                                        //ldloc.2
	IL_0113:            if(V_2==0)goto IL_0128;                                     //brfalse.s				IL_0128
	IL_0115:                                                                        //ldc.i4				0x5
	IL_011a:            V_3=5;                                                      //stloc				V_3
	IL_011e:            /*goto IL_000b;*/goto IL_0123;                              //br				IL_000b
	IL_0123:            goto IL_0095;                                               //br				IL_0095
	IL_0128:                                                                        //ldloc.1
	IL_0129:                                                                        //ldloc.0
	IL_012a:                                                                        //ldloc.2
	IL_012b:            Temp_11=V_0[V_2];                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_0130:            Temp_12=Temp_11->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_0135:            V_1->Write(Temp_12);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_013a:                                                                        //ldloc.2
	IL_013b:                                                                        //ldc.i4.1
	IL_013c:                                                                        //add
	IL_013d:            V_2=(V_2 + 1);                                              //stloc.2
	IL_013e:                                                                        //ldc.i4				0x3
	IL_0143:            V_3=3;                                                      //stloc				V_3
	IL_0147:            /*goto IL_000b;*/goto IL_014c;                              //br				IL_000b
	IL_014c:            goto IL_006e;                                               //br				IL_006e
	IL_0151:                                                                        //ldarg.0
	IL_0152:            Temp_2=this->Name;                                          //call				System::String^ Root::T_x174::get_Name()
	IL_0157:            return Temp_2;                                              //ret

}
inline void Root::T_x174::M_x12(System::Boolean A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_Sealed by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x174::M_x13()
//Reflector::CodeModel::ITypeDeclaration^::get_Sealed by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x10;                                         //ldfld				System::UInt32 Root::T_x174 F_x10
	IL_0006:                                                                        //ldc.i4				0x100
	IL_000b:                                                                        //and
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //ceq
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //ceq
	IL_0012:            return (((Temp_0 & 256) == 0) == false);                    //ret

}
inline void Root::T_x174::M_x13(System::Boolean A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_SpecialName by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IFieldDeclarationCollection^ Root::T_x174::M_x14()
//Reflector::CodeModel::ITypeDeclaration^::get_Fields by M_x14
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_1 = nullptr;
	Root::T_x174::T_x12^ Temp_2 = nullptr;
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174 F_x5
	IL_0006:            if(Temp_0==nullptr)goto IL_000a;                            //brfalse.s				IL_000a
	IL_0008:            goto IL_0012;                                               //br.s				IL_0012
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            Temp_1=gcnew array<Reflector::CodeModel::IFieldDeclaration^>(0);//newarr				Reflector::CodeModel::IFieldDeclaration
	IL_0010:            Temp_4=Temp_1;goto IL_001a;                                 //br.s				IL_001a
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_3=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174 F_x5
	IL_0018:            Temp_4=Temp_3;goto IL_001a;                                 //br.s				IL_001a
	IL_001a:            Temp_2=gcnew Root::T_x174::T_x12(Temp_4);/*warning ! semantic stack doesn't empty at joint !;*///newobj				void Root::T_x174::T_x12::.ctor(array<Reflector::CodeModel::IFieldDeclaration^>^)
	IL_001f:            return safe_cast<Reflector::CodeModel::IFieldDeclarationCollection^>(Temp_2);//ret

}
inline System::Boolean Root::T_x174::M_x15()
//Reflector::CodeModel::ITypeDeclaration^::get_BeforeFieldInit by M_x15
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x10;                                         //ldfld				System::UInt32 Root::T_x174 F_x10
	IL_0006:                                                                        //ldc.i4				0x100000
	IL_000b:                                                                        //and
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //ceq
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //ceq
	IL_0012:            return (((Temp_0 & 1048576) == 0) == false);                //ret

}
inline Reflector::CodeModel::IMethodDeclarationCollection^ Root::T_x174::M_x16()
//Reflector::CodeModel::ITypeDeclaration^::get_Methods by M_x16
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_1 = nullptr;
	Root::T_x174::T_x13^ Temp_2 = nullptr;
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174 F_x8
	IL_0006:            if(Temp_0==nullptr)goto IL_000a;                            //brfalse.s				IL_000a
	IL_0008:            goto IL_0012;                                               //br.s				IL_0012
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            Temp_1=gcnew array<Reflector::CodeModel::IMethodDeclaration^>(0);//newarr				Reflector::CodeModel::IMethodDeclaration
	IL_0010:            Temp_4=Temp_1;goto IL_001a;                                 //br.s				IL_001a
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_3=this->F_x8;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174 F_x8
	IL_0018:            Temp_4=Temp_3;goto IL_001a;                                 //br.s				IL_001a
	IL_001a:            Temp_2=gcnew Root::T_x174::T_x13(Temp_4);/*warning ! semantic stack doesn't empty at joint !;*///newobj				void Root::T_x174::T_x13::.ctor(array<Reflector::CodeModel::IMethodDeclaration^>^)
	IL_001f:            return safe_cast<Reflector::CodeModel::IMethodDeclarationCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x174::M_x18()
//Reflector::CodeModel::ITypeDeclaration^::get_BaseType by M_x18
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x2^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x2^ Root::T_x174 F_x1
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_1=this->F_x6;                                          //ldfld				System::Int32 Root::T_x174 F_x6
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldnull
	IL_000e:            Temp_2=Temp_0->M_x5(Temp_1,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(this),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(System::Int32,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0013:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_0018:            return safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_2);//ret

}
inline Reflector::CodeModel::TypeVisibility Root::T_x174::M_x19()
//Reflector::CodeModel::ITypeDeclaration^::get_Visibility by M_x19
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x10;                                         //ldfld				System::UInt32 Root::T_x174 F_x10
	IL_0006:                                                                        //ldc.i4.7
	IL_0007:                                                                        //and
	IL_0008:            return safe_cast<Reflector::CodeModel::TypeVisibility>((Temp_0 & 7));//ret

}
inline System::Boolean Root::T_x174::M_x2()
//Reflector::CodeModel::ITypeDeclaration^::get_RuntimeSpecialName by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x10;                                         //ldfld				System::UInt32 Root::T_x174 F_x10
	IL_0006:                                                                        //ldc.i4				0x800
	IL_000b:                                                                        //and
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //ceq
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //ceq
	IL_0012:            return (((Temp_0 & 2048) == 0) == false);                   //ret

}
inline void Root::T_x174::M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x174 F_x12
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x174::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_BaseType by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::M_x2(System::Boolean A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_Abstract by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x2^ Root::T_x174::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x2^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x2^ Root::T_x174 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x174::M_x5()
//Reflector::CodeModel::ITypeDeclaration^::get_Abstract by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x10;                                         //ldfld				System::UInt32 Root::T_x174 F_x10
	IL_0006:                                                                        //ldc.i4				0x80
	IL_000b:                                                                        //and
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //ceq
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //ceq
	IL_0012:            return (((Temp_0 & 128) == 0) == false);                    //ret

}
inline void Root::T_x174::M_x5(System::Boolean A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_BeforeFieldInit by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x174::M_x6()
//Reflector::CodeModel::ITypeDeclaration^::get_NestedTypes by M_x6
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::TypeDeclarationCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x174 F_x13
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_2=gcnew Reflector::CodeModel::Memory::TypeDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::TypeDeclarationCollection::.ctor()
	IL_000f:            return safe_cast<Reflector::CodeModel::ITypeDeclarationCollection^>(Temp_2);//ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x13;                                         //ldfld				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x174 F_x13
	IL_0016:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IPropertyDeclarationCollection^ Root::T_x174::M_x7()
//Reflector::CodeModel::ITypeDeclaration^::get_Properties by M_x7
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_1 = nullptr;
	Root::T_x174::T_x1^ Temp_2 = nullptr;
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174 F_x9
	IL_0006:            if(Temp_0==nullptr)goto IL_000a;                            //brfalse.s				IL_000a
	IL_0008:            goto IL_0012;                                               //br.s				IL_0012
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            Temp_1=gcnew array<Reflector::CodeModel::IPropertyDeclaration^>(0);//newarr				Reflector::CodeModel::IPropertyDeclaration
	IL_0010:            Temp_4=Temp_1;goto IL_001a;                                 //br.s				IL_001a
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_3=this->F_x9;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174 F_x9
	IL_0018:            Temp_4=Temp_3;goto IL_001a;                                 //br.s				IL_001a
	IL_001a:            Temp_2=gcnew Root::T_x174::T_x1(Temp_4);/*warning ! semantic stack doesn't empty at joint !;*///newobj				void Root::T_x174::T_x1::.ctor(array<Reflector::CodeModel::IPropertyDeclaration^>^)
	IL_001f:            return safe_cast<Reflector::CodeModel::IPropertyDeclarationCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::ITypeReferenceCollection^ Root::T_x174::M_x8()
//Reflector::CodeModel::ITypeDeclaration^::get_Interfaces by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::TypeReferenceCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x15;                                         //ldfld				Reflector::CodeModel::ITypeReferenceCollection^ Root::T_x174 F_x15
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_2=gcnew Reflector::CodeModel::Memory::TypeReferenceCollection();//newobj				void Reflector::CodeModel::Memory::TypeReferenceCollection::.ctor()
	IL_000f:            return safe_cast<Reflector::CodeModel::ITypeReferenceCollection^>(Temp_2);//ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x15;                                         //ldfld				Reflector::CodeModel::ITypeReferenceCollection^ Root::T_x174 F_x15
	IL_0016:            return Temp_1;                                              //ret

}
inline void Root::T_x174::M_x8(System::Boolean A_0)
//Reflector::CodeModel::ITypeDeclaration^::set_RuntimeSpecialName by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x174::M_x9()
//Reflector::CodeModel::ITypeDeclaration^::get_Interface by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x10;                                         //ldfld				System::UInt32 Root::T_x174 F_x10
	IL_0006:                                                                        //ldc.i4.s				32
	IL_0008:                                                                        //and
	IL_0009:                                                                        //ldc.i4.0
	IL_000a:                                                                        //ceq
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //ceq
	IL_000f:            return (((Temp_0 & 32) == 0) == false);                     //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x174::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::ITypeDeclaration^>(this);//ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x174::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x2^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	Root::T_x11^ Temp_3 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x4();                                        //call				Root::T_x2^ Root::T_x174::M_x4()
	IL_0006:            Temp_0->M_x9();                                             //callvirt				void Root::T_x2::M_x9()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_0011:            if(Temp_1!=nullptr)goto IL_0026;                            //brtrue.s				IL_0026
	IL_0013:                                                                        //ldc.i4.2
	IL_0014:                                                                        //dup
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //ldc.i4.3
	IL_0017:                                                                        //add
	IL_0018:                                                                        //bgt				IL_0014
	IL_001d:                                                                        //pop
	IL_001e:            goto IL_0020;                                               //br.s				IL_0020
	IL_0020:            Temp_4=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_0025:            return Temp_4;                                              //ret
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x174 F_x2
	IL_002c:            Temp_3=gcnew Root::T_x11(Temp_2);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_0031:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_3);//ret

}
inline System::String^ Root::T_x174::Documentation::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x2^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x4();                                        //call				Root::T_x2^ Root::T_x174::M_x4()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_1=Temp_0->M_x12(safe_cast<System::Object^>(this));     //callvirt				System::String^ Root::T_x2::M_x12(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline void Root::T_x174::Documentation::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::ITypeCollection^ Root::T_x174::GenericArguments::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_1 = nullptr;
	Root::T_x173^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x11;                                         //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x173::M_x1();                                //call				Reflector::CodeModel::ITypeCollection^ Root::T_x173::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x11;                                         //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0016:            Temp_2=gcnew Root::T_x173(safe_cast<array<Reflector::CodeModel::IType^>^>(Temp_1));//newobj				void Root::T_x173::.ctor(array<Reflector::CodeModel::IType^>^)
	IL_001b:            return safe_cast<Reflector::CodeModel::ITypeCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x174::GenericType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline void Root::T_x174::GenericType::set(Reflector::CodeModel::ITypeReference^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x174::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::String^ Temp_12 = nullptr;
	array<Reflector::CodeModel::IGenericParameter^>^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_2=5;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003a;                                               //br.s				IL_003a
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_012d;case 1:goto IL_00df;case 2:goto IL_00af;case 3:goto IL_010f;case 4:goto IL_00f6;case 5:goto IL_000b;case 6:goto IL_0050;case 7:goto IL_00cd;case 8:goto IL_009d;};//switch				(IL_012d,IL_00df,IL_00af,IL_010f,IL_00f6,IL_000b,IL_0050,IL_00cd,IL_009d)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_13=this->F_x11;                                        //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_0040:            if(Temp_13==nullptr)goto IL_00e1;                           //brfalse				IL_00e1
	IL_0045:                                                                        //ldc.i4				0x6
	IL_004a:            V_2=6;                                                      //stloc				V_2
	IL_004e:            /*goto IL_000d;*/goto IL_0050;                              //br.s				IL_000d
	IL_0050:            goto IL_00e8;                                               //br				IL_00e8
	IL_005001:          Temp_15=Temp_16;try{
	IL_0055:            /*warning ! semantic stack doesn't empty at joint !;*/      //ldc.i4.2
	IL_0056:                                                                        //dup
	IL_0057:                                                                        //dup
	IL_0058:                                                                        //ldc.i4.4
	IL_0059:                                                                        //sub
	IL_005a:            Temp_16=2;                                                  //blt				IL_0056
	IL_005f:                                                                        //pop
	IL_0060:                                                                        //ldarg.0
	IL_0061:            Temp_2=this->F_x7;                                          //ldfld				System::String^ Root::T_x174 F_x7
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldc.i4.1
	IL_0068:                                                                        //add
	IL_0069:            Temp_3=Temp_2->Substring((V_0 + 1));                        //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_006e:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0073:            Temp_5=System::Int32::Parse(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0078:                                                                        //pop
	IL_0079:                                                                        //ldarg.0
	IL_007a:            Temp_6=this->F_x7;                                          //ldfld				System::String^ Root::T_x174 F_x7
	IL_007f:                                                                        //ldc.i4.0
	IL_0080:                                                                        //ldloc.0
	IL_0081:            Temp_7=Temp_6->Substring(safe_cast<System::Int32>(0),V_0);  //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0086:            V_1=Temp_7;                                                 //stloc.1
	IL_0087:            goto IL_0132;                                               //leave				IL_0132
	                    ;}
	                    catch(System::FormatException^ Ex_008702){
	IL_008c:                                                                        //pop
	IL_008d:            goto IL_00e1;                                               //leave.s				IL_00e1
	                    ;}
	IL_008f:                                                                        //ldc.i4				0x8
	IL_0094:            V_2=8;                                                      //stloc				V_2
	IL_0098:            /*goto IL_000d;*/goto IL_009d;                              //br				IL_000d
	IL_009d:                                                                        //ldloc.0
	IL_009e:                                                                        //ldc.i4.m1
	IL_009f:            if(V_0==-1)goto IL_00e1;                                    //beq.s				IL_00e1
	IL_00a1:                                                                        //ldc.i4				0x2
	IL_00a6:            V_2=2;                                                      //stloc				V_2
	IL_00aa:            /*goto IL_000d;*/goto IL_00af;                              //br				IL_000d
	IL_00af:            /*goto IL_0055;*/goto IL_005001;                            //br.s				IL_0055
	IL_00b1:                                                                        //ldarg.0
	IL_00b2:            Temp_8=this->F_x7;                                          //ldfld				System::String^ Root::T_x174 F_x7
	IL_00b7:                                                                        //ldc.i4.s				96
	IL_00b9:            Temp_9=Temp_8->LastIndexOf(safe_cast<System::Char>((System::Char)96));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_00be:            V_0=Temp_9;                                                 //stloc.0
	IL_00bf:                                                                        //ldc.i4				0x7
	IL_00c4:            V_2=7;                                                      //stloc				V_2
	IL_00c8:            /*goto IL_000d;*/goto IL_00cd;                              //br				IL_000d
	IL_00cd:                                                                        //ldloc.0
	IL_00ce:                                                                        //ldc.i4.m1
	IL_00cf:            if(V_0!=-1)goto IL_008f;                                    //bne.un.s				IL_008f
	IL_00d1:                                                                        //ldc.i4				0x1
	IL_00d6:            V_2=1;                                                      //stloc				V_2
	IL_00da:            /*goto IL_000d;*/goto IL_00df;                              //br				IL_000d
	IL_00df:            goto IL_0111;                                               //br.s				IL_0111
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:            Temp_12=this->F_x7;                                         //ldfld				System::String^ Root::T_x174 F_x7
	IL_00e7:            return Temp_12;                                             //ret
	IL_00e8:                                                                        //ldc.i4				0x4
	IL_00ed:            V_2=4;                                                      //stloc				V_2
	IL_00f1:            /*goto IL_000d;*/goto IL_00f6;                              //br				IL_000d
	IL_00f6:                                                                        //ldarg.0
	IL_00f7:            Temp_10=this->F_x11;                                        //ldfld				array<Reflector::CodeModel::IGenericParameter^>^ Root::T_x174 F_x11
	IL_00fc:            Temp_11=Temp_10->Length;                                    //ldlen
	IL_00fd:                                                                        //conv.i4
	IL_00fe:                                                                        //ldc.i4.0
	IL_00ff:            if(Temp_11<=0)goto IL_00e1;                                 //ble.s				IL_00e1
	IL_0101:                                                                        //ldc.i4				0x3
	IL_0106:            V_2=3;                                                      //stloc				V_2
	IL_010a:            /*goto IL_000d;*/goto IL_010f;                              //br				IL_000d
	IL_010f:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0111:                                                                        //ldarg.0
	IL_0112:            Temp_0=this->F_x7;                                          //ldfld				System::String^ Root::T_x174 F_x7
	IL_0117:                                                                        //ldc.i4.s				33
	IL_0119:            Temp_1=Temp_0->LastIndexOf(safe_cast<System::Char>((System::Char)33));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_011e:            V_0=Temp_1;                                                 //stloc.0
	IL_011f:                                                                        //ldc.i4				0x0
	IL_0124:            V_2=0;                                                      //stloc				V_2
	IL_0128:            /*goto IL_000d;*/goto IL_012d;                              //br				IL_000d
	IL_012d:            goto IL_008f;                                               //br				IL_008f
	IL_0132:                                                                        //ldloc.1
	IL_0133:            return V_1;                                                 //ret

}
inline void Root::T_x174::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x174::Namespace::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x16;                                         //ldfld				System::String^ Root::T_x174 F_x16
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x174::Namespace::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Object^ Root::T_x174::Owner::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x174 F_x12
	IL_0006:            if(Temp_0==nullptr)goto IL_0011;                            //brfalse.s				IL_0011
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_2=this->F_x12;                                         //ldfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x174 F_x12
	IL_0010:            return safe_cast<System::Object^>(Temp_2);                  //ret
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x2^ Root::T_x174 F_x1
	IL_0017:            return safe_cast<System::Object^>(Temp_1);                  //ret

}
inline void Root::T_x174::Owner::set(System::Object^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x174::T_x12::T_x12(array<Reflector::CodeModel::IFieldDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174::T_x12 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x174::T_x12::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x174::T_x12::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x174::T_x12::M_x1()
//Reflector::CodeModel::IFieldDeclarationCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x12::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
//Reflector::CodeModel::IFieldDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x12::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IFieldDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x174::T_x12::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IFieldDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x174::T_x12::M_x1(System::Int32 A_0,Reflector::CodeModel::IFieldDeclaration^ A_1)
//Reflector::CodeModel::IFieldDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x12::M_x12(Reflector::CodeModel::IFieldDeclaration^ A_0)
//Reflector::CodeModel::IFieldDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x12::M_x13(Reflector::CodeModel::IFieldDeclaration^ A_0)
//Reflector::CodeModel::IFieldDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x174::T_x12::M_x2(Reflector::CodeModel::IFieldDeclaration^ A_0)
//Reflector::CodeModel::IFieldDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x12::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IFieldDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x12::M_x2(System::Int32 A_0,Reflector::CodeModel::IFieldDeclaration^ A_1)
//Reflector::CodeModel::IFieldDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x12::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0007:                                                                        //conv.i4
	IL_0008:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x174::T_x12::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x174::T_x12::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IFieldDeclaration^>^ Root::T_x174::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x174::T_x13::T_x13(array<Reflector::CodeModel::IMethodDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x174::T_x13::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x174::T_x13::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x174::T_x13::M_x1()
//Reflector::CodeModel::IMethodDeclarationCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x13::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
//Reflector::CodeModel::IMethodDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:                                                                        //ldarg.0
	IL_0009:            Temp_1=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_000e:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_000f:                                                                        //conv.i4
	IL_0010:            Temp_3=System::Array::IndexOf(safe_cast<System::Array^>(Temp_0),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_2);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0015:            return Temp_3;                                              //ret

}
inline void Root::T_x174::T_x13::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IMethodDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x174::T_x13::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IMethodDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x174::T_x13::M_x1(System::Int32 A_0,Reflector::CodeModel::IMethodDeclaration^ A_1)
//Reflector::CodeModel::IMethodDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x13::M_x12(Reflector::CodeModel::IMethodDeclaration^ A_0)
//Reflector::CodeModel::IMethodDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x13::M_x13(Reflector::CodeModel::IMethodDeclaration^ A_0)
//Reflector::CodeModel::IMethodDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x174::T_x13::M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0)
//Reflector::CodeModel::IMethodDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0009:                                                                        //ldarg.1
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0011:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0012:                                                                        //conv.i4
	IL_0013:            Temp_3=System::Array::IndexOf(safe_cast<System::Array^>(Temp_0),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_2);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0018:                                                                        //ldc.i4.m1
	IL_0019:                                                                        //ceq
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:                                                                        //ceq
	IL_001e:            return ((Temp_3 == -1) == false);                           //ret

}
inline void Root::T_x174::T_x13::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IMethodDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x13::M_x2(System::Int32 A_0,Reflector::CodeModel::IMethodDeclaration^ A_1)
//Reflector::CodeModel::IMethodDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x13::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0006:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0007:                                                                        //conv.i4
	IL_0008:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x174::T_x13::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x174::T_x13::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IMethodDeclaration^>^ Root::T_x174::T_x13 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x174::T_x1::T_x1(array<Reflector::CodeModel::IPropertyDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174::T_x1 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x174::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x174::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x174::T_x1::M_x1()
//Reflector::CodeModel::IPropertyDeclarationCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x1::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
//Reflector::CodeModel::IPropertyDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x1::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IPropertyDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x174::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IPropertyDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x174::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IPropertyDeclaration^ A_1)
//Reflector::CodeModel::IPropertyDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x1::M_x12(Reflector::CodeModel::IPropertyDeclaration^ A_0)
//Reflector::CodeModel::IPropertyDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x1::M_x13(Reflector::CodeModel::IPropertyDeclaration^ A_0)
//Reflector::CodeModel::IPropertyDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x174::T_x1::M_x2(Reflector::CodeModel::IPropertyDeclaration^ A_0)
//Reflector::CodeModel::IPropertyDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IPropertyDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IPropertyDeclaration^ A_1)
//Reflector::CodeModel::IPropertyDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0007:                                                                        //conv.i4
	IL_0008:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x174::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x174::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IPropertyDeclaration^>^ Root::T_x174::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x174::T_x2::T_x2(array<Reflector::CodeModel::IEventDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174::T_x2 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x174::T_x2::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174::T_x2 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x174::T_x2::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x174::T_x2::M_x1()
//Reflector::CodeModel::IEventDeclarationCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x2::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
//Reflector::CodeModel::IEventDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x2::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IEventDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x174::T_x2::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IEventDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174::T_x2 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x174::T_x2::M_x1(System::Int32 A_0,Reflector::CodeModel::IEventDeclaration^ A_1)
//Reflector::CodeModel::IEventDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x2::M_x12(Reflector::CodeModel::IEventDeclaration^ A_0)
//Reflector::CodeModel::IEventDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x2::M_x13(Reflector::CodeModel::IEventDeclaration^ A_0)
//Reflector::CodeModel::IEventDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x174::T_x2::M_x2(Reflector::CodeModel::IEventDeclaration^ A_0)
//Reflector::CodeModel::IEventDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x2::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IEventDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x174::T_x2::M_x2(System::Int32 A_0,Reflector::CodeModel::IEventDeclaration^ A_1)
//Reflector::CodeModel::IEventDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x174::T_x2::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0007:                                                                        //conv.i4
	IL_0008:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x174::T_x2::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x174::T_x2::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IEventDeclaration^>^ Root::T_x174::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
