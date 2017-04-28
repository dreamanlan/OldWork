#include "global_xref.h"

inline Root::T_x19::T_x19()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::SortedList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::SortedList();             //newobj				void System::Collections::SortedList::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::Collections::SortedList^ Root::T_x19 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x19::M_x1()
//System::Collections::IEnumerable^::GetEnumerator by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::SortedList^ Temp_0 = nullptr;
	System::Collections::ICollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::SortedList^ Root::T_x19 F_x1
	IL_0006:            Temp_1=Temp_0->Values;                                      //callvirt				System::Collections::ICollection^ System::Collections::SortedList::get_Values()
	IL_000b:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0010:            return Temp_2;                                              //ret

}
inline void Root::T_x19::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::INamespace^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0063;case 1:goto IL_000b;case 2:goto IL_003d;};//switch				(IL_0063,IL_000b,IL_003d)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Owner;//callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_002b:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_0030:            if(dynamic_cast<Reflector::CodeModel::IModule^>(Temp_3)==nullptr)goto IL_0065;//brfalse.s				IL_0065
	IL_0032:                                                                        //ldc.i4				0x2
	IL_0037:            V_1=2;                                                      //stloc				V_1
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:            goto IL_003f;                                               //br.s				IL_003f
	IL_003f:                                                                        //ldarg.0
	IL_0040:                                                                        //ldarg.1
	IL_0041:            Temp_0=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Namespace;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0046:            Temp_1=this->M_x1(Temp_0);                                  //call				Reflector::CodeModel::INamespace^ Root::T_x19::M_x1(System::String^)
	IL_004b:            V_0=Temp_1;                                                 //stloc.0
	IL_004c:                                                                        //ldloc.0
	IL_004d:            Temp_2=V_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0052:                                                                        //ldarg.1
	IL_0053:            Temp_2->Add(A_0);                                           //callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::Add(Reflector::CodeModel::ITypeDeclaration^)
	IL_0058:                                                                        //ldc.i4				0x0
	IL_005d:            V_1=0;                                                      //stloc				V_1
	IL_0061:            /*goto IL_000d;*/goto IL_0063;                              //br.s				IL_000d
	IL_0063:            goto IL_0065;                                               //br.s				IL_0065
	IL_0065:            return;                                                     //ret

}
inline Reflector::CodeModel::INamespace^ Root::T_x19::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::SortedList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::Namespace^ Temp_2 = nullptr;
	System::Collections::SortedList^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::Memory::Namespace^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_1=5;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0063;case 1:goto IL_00b5;case 2:goto IL_0082;case 3:goto IL_0093;case 4:goto IL_003c;case 5:goto IL_000b;};//switch				(IL_0063,IL_00b5,IL_0082,IL_0093,IL_003c,IL_000b)
	IL_002e:                                                                        //ldarg.1
	IL_002f:            if(A_0!=nullptr)goto IL_0065;                               //brtrue.s				IL_0065
	IL_0031:                                                                        //ldc.i4				0x4
	IL_0036:            V_1=4;                                                      //stloc				V_1
	IL_003a:            /*goto IL_000d;*/goto IL_003c;                              //br.s				IL_000d
	IL_003c:            goto IL_0095;                                               //br.s				IL_0095
	IL_003e:            Temp_2=gcnew Reflector::CodeModel::Memory::Namespace();     //newobj				void Reflector::CodeModel::Memory::Namespace::.ctor()
	IL_0043:            V_0=Temp_2;                                                 //stloc.0
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //ldarg.1
	IL_0046:            V_0->Name=A_0;                                              //callvirt				void Reflector::CodeModel::Memory::Namespace::set_Name(System::String^)
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_3=this->F_x1;                                          //ldfld				System::Collections::SortedList^ Root::T_x19 F_x1
	IL_0051:                                                                        //ldarg.1
	IL_0052:                                                                        //ldloc.0
	IL_0053:            Temp_3->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_0));//callvirt				void System::Collections::SortedList::Add(System::Object^,System::Object^)
	IL_0058:                                                                        //ldc.i4				0x0
	IL_005d:            V_1=0;                                                      //stloc				V_1
	IL_0061:            /*goto IL_000d;*/goto IL_0063;                              //br.s				IL_000d
	IL_0063:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_0065:                                                                        //ldarg.0
	IL_0066:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::SortedList^ Root::T_x19 F_x1
	IL_006b:                                                                        //ldarg.1
	IL_006c:            Temp_1=Temp_0[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::SortedList::get_Item(System::Object^)
	IL_0071:                                                                        //castclass				Reflector::CodeModel::Memory::Namespace
	IL_0076:            V_0=safe_cast<Reflector::CodeModel::Memory::Namespace^>(Temp_1);//stloc.0
	IL_0077:                                                                        //ldc.i4				0x2
	IL_007c:            V_1=2;                                                      //stloc				V_1
	IL_0080:            /*goto IL_000d;*/goto IL_0082;                              //br.s				IL_000d
	IL_0082:                                                                        //ldloc.0
	IL_0083:            if(V_0!=nullptr)goto IL_00b7;                               //brtrue.s				IL_00b7
	IL_0085:                                                                        //ldc.i4				0x3
	IL_008a:            V_1=3;                                                      //stloc				V_1
	IL_008e:            /*goto IL_000d;*/goto IL_0093;                              //br				IL_000d
	IL_0093:            goto IL_003e;                                               //br.s				IL_003e
	IL_0095:                                                                        //ldc.i4.4
	IL_0096:                                                                        //dup
	IL_0097:                                                                        //dup
	IL_0098:                                                                        //ldc.i4.2
	IL_0099:                                                                        //sub
	IL_009a:                                                                        //blt				IL_0096
	IL_009f:                                                                        //pop
	IL_00a0:            Temp_4=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00a5:            A_0=Temp_4;                                                 //starg.s				A_0
	IL_00a7:                                                                        //ldc.i4				0x1
	IL_00ac:            V_1=1;                                                      //stloc				V_1
	IL_00b0:            /*goto IL_000d;*/goto IL_00b5;                              //br				IL_000d
	IL_00b5:            goto IL_0065;                                               //br.s				IL_0065
	IL_00b7:                                                                        //ldloc.0
	IL_00b8:            return safe_cast<Reflector::CodeModel::INamespace^>(V_0);   //ret

}
