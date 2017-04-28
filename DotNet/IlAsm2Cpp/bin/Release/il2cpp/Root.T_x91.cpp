#include "global_xref.h"

inline Root::T_x91::T_x91(System::String^ A_0,System::Reflection::Assembly^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x91::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew Root::T_x91::T_x1();                           //newobj				void Root::T_x91::T_x1::.ctor()
	IL_0006:            this->F_x12=Temp_0;                                         //stfld				Root::T_x91::T_x1^ Root::T_x91 F_x12
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x91 F_x1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.2
	IL_001a:            this->F_x2=A_1;                                             //stfld				System::Reflection::Assembly^ Root::T_x91 F_x2
	IL_001f:            return;                                                     //ret

}
inline Root::T_x92^ Root::T_x91::M_x1()
//Root::T_x90^::M_x12 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x91::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x91::T_x1^ Root::T_x91 F_x12
	IL_0006:            return safe_cast<Root::T_x92^>(Temp_0);                     //ret

}
inline void Root::T_x91::M_x1(System::IServiceProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Reflection::Assembly^ Temp_0 = nullptr;
	array<System::Type^>^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Root::T_x91::T_x1^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Int32 Temp_7 = 0;
	System::Boolean Temp_8 = false;
	//local variables.
	System::Type^ V_0 = nullptr;
	Reflector::IPackage^ V_1 = nullptr;
	array<System::Type^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_0037;                                               //br.s				IL_0037
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_013d;case 1:goto IL_009e;case 2:goto IL_0087;case 3:goto IL_010b;case 4:goto IL_00be;case 5:goto IL_00e2;case 6:goto IL_00f2;case 7:goto IL_00ce;case 8:goto IL_0061;case 9:goto IL_0050;case 10:goto IL_0071;};//switch				(IL_013d,IL_009e,IL_0087,IL_010b,IL_00be,IL_00e2,IL_00f2,IL_00ce,IL_0061,IL_0050,IL_0071)
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_0=this->F_x2;                                          //ldfld				System::Reflection::Assembly^ Root::T_x91 F_x2
	IL_003d:            Temp_1=Temp_0->GetTypes();                                  //callvirt				array<System::Type^>^ System::Reflection::Assembly::GetTypes()
	IL_0042:            V_2=Temp_1;                                                 //stloc.2
	IL_0043:                                                                        //ldc.i4.0
	IL_0044:            V_3=0;                                                      //stloc.3
	IL_0045:                                                                        //ldc.i4				0x9
	IL_004a:            V_4=9;                                                      //stloc				V_4
	IL_004e:            /*goto IL_0002;*/goto IL_0050;                              //br.s				IL_0002
	IL_0050:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_0052:                                                                        //ldloc.3
	IL_0053:                                                                        //ldc.i4.1
	IL_0054:                                                                        //add
	IL_0055:            V_3=(V_3 + 1);                                              //stloc.3
	IL_0056:                                                                        //ldc.i4				0x8
	IL_005b:            V_4=8;                                                      //stloc				V_4
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_0064;                                               //br.s				IL_0064
	IL_0063:                                                                        //break
	IL_0064:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_0066:                                                                        //ldc.i4				0xa
	IL_006b:            V_4=10;                                                     //stloc				V_4
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:                                                                        //ldloc.0
	IL_0072:            Temp_8=V_0->IsInterface;                                    //callvirt				System::Boolean System::Type::get_IsInterface()
	IL_0077:            if(Temp_8)goto IL_0052;                                     //brtrue.s				IL_0052
	IL_0079:                                                                        //ldc.i4				0x2
	IL_007e:            V_4=2;                                                      //stloc				V_4
	IL_0082:            /*goto IL_0002;*/goto IL_0087;                              //br				IL_0002
	IL_0087:            goto IL_0110;                                               //br				IL_0110
	IL_008c:                                                                        //ldloc.2
	IL_008d:                                                                        //ldloc.3
	IL_008e:                                                                        //ldelem.ref
	IL_008f:            V_0=V_2[V_3];                                               //stloc.0
	IL_0090:                                                                        //ldc.i4				0x1
	IL_0095:            V_4=1;                                                      //stloc				V_4
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:                                                                        //ldtoken				Reflector::IPackage
	IL_00a3:            Temp_2=Reflector::IPackage::typeid;                         //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00a8:                                                                        //ldloc.0
	IL_00a9:            Temp_3=Temp_2->IsAssignableFrom(V_0);                       //callvirt				System::Boolean System::Type::IsAssignableFrom(System::Type^)
	IL_00ae:            if(!Temp_3)goto IL_0052;                                    //brfalse.s				IL_0052
	IL_00b0:                                                                        //ldc.i4				0x4
	IL_00b5:            V_4=4;                                                      //stloc				V_4
	IL_00b9:            /*goto IL_0002;*/goto IL_00be;                              //br				IL_0002
	IL_00be:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00c0:                                                                        //ldc.i4				0x7
	IL_00c5:            V_4=7;                                                      //stloc				V_4
	IL_00c9:            /*goto IL_0002;*/goto IL_00ce;                              //br				IL_0002
	IL_00ce:                                                                        //ldloc.3
	IL_00cf:                                                                        //ldloc.2
	IL_00d0:            Temp_7=V_2->Length;                                         //ldlen
	IL_00d1:                                                                        //conv.i4
	IL_00d2:            if(V_3<Temp_7)goto IL_008c;                                 //blt.s				IL_008c
	IL_00d4:                                                                        //ldc.i4				0x5
	IL_00d9:            V_4=5;                                                      //stloc				V_4
	IL_00dd:            /*goto IL_0002;*/goto IL_00e2;                              //br				IL_0002
	IL_00e2:            goto IL_0142;                                               //br.s				IL_0142
	IL_00e4:                                                                        //ldc.i4				0x6
	IL_00e9:            V_4=6;                                                      //stloc				V_4
	IL_00ed:            /*goto IL_0002;*/goto IL_00f2;                              //br				IL_0002
	IL_00f2:                                                                        //ldloc.0
	IL_00f3:            Temp_6=V_0->IsAbstract;                                     //callvirt				System::Boolean System::Type::get_IsAbstract()
	IL_00f8:            if(Temp_6)goto IL_0052;                                     //brtrue				IL_0052
	IL_00fd:                                                                        //ldc.i4				0x3
	IL_0102:            V_4=3;                                                      //stloc				V_4
	IL_0106:            /*goto IL_0002;*/goto IL_010b;                              //br				IL_0002
	IL_010b:            goto IL_0066;                                               //br				IL_0066
	IL_0110:                                                                        //ldloc.0
	IL_0111:            Temp_4=System::Activator::CreateInstance(V_0);              //call				System::Object^ System::Activator::CreateInstance(System::Type^)
	IL_0116:                                                                        //castclass				Reflector::IPackage
	IL_011b:            V_1=safe_cast<Reflector::IPackage^>(Temp_4);                //stloc.1
	IL_011c:                                                                        //ldloc.1
	IL_011d:                                                                        //ldarg.1
	IL_011e:            V_1->Load(A_0);                                             //callvirt				void Reflector::IPackage::Load(System::IServiceProvider^)
	IL_0123:                                                                        //ldarg.0
	IL_0124:            Temp_5=this->F_x12;                                         //ldfld				Root::T_x91::T_x1^ Root::T_x91 F_x12
	IL_0129:                                                                        //ldloc.1
	IL_012a:            Temp_5->M_x1(V_1);                                          //callvirt				void Root::T_x91::T_x1::M_x1(Reflector::IPackage^)
	IL_012f:                                                                        //ldc.i4				0x0
	IL_0134:            V_4=0;                                                      //stloc				V_4
	IL_0138:            /*goto IL_0002;*/goto IL_013d;                              //br				IL_0002
	IL_013d:            goto IL_0052;                                               //br				IL_0052
	IL_0142:            return;                                                     //ret

}
inline System::String^ Root::T_x91::M_x12()
//Root::T_x90^::M_x2 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x91 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x91::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x91::T_x1^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	Reflector::IPackage^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x91::T_x1^ Root::T_x91 F_x12
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::CollectionBase::GetEnumerator()
	IL_000b:            V_1=Temp_1;                                                 //stloc.1
	IL_000c:            /*goto IL_000e;*/goto IL_000C01;                            //br.s				IL_000e
	IL_000C01:          try{
	IL_000e:                                                                        //ldc.i4				0x0
	IL_0013:            V_3=0;                                                      //stloc				V_3
	IL_0017:            /*goto IL_001b;*/goto IL_0019;                              //br.s				IL_001b
	IL_0019:            goto IL_0038;                                               //br.s				IL_0038
	IL_001b:                                                                        //ldloc				V_3
	IL_001f:            switch(V_3){case 0:goto IL_0019;case 1:goto IL_0057;case 2:goto IL_0084;case 3:goto IL_0077;case 4:goto IL_0064;};//switch				(IL_0019,IL_0057,IL_0084,IL_0077,IL_0064)
	IL_0038:            goto IL_0059;                                               //br.s				IL_0059
	IL_003a:                                                                        //ldloc.1
	IL_003b:            Temp_3=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0040:                                                                        //castclass				Reflector::IPackage
	IL_0045:            V_0=safe_cast<Reflector::IPackage^>(Temp_3);                //stloc.0
	IL_0046:                                                                        //ldloc.0
	IL_0047:            V_0->Unload();                                              //callvirt				void Reflector::IPackage::Unload()
	IL_004c:                                                                        //ldc.i4				0x1
	IL_0051:            V_3=1;                                                      //stloc				V_3
	IL_0055:            /*goto IL_001b;*/goto IL_0057;                              //br.s				IL_001b
	IL_0057:            goto IL_0059;                                               //br.s				IL_0059
	IL_0059:                                                                        //ldc.i4				0x4
	IL_005e:            V_3=4;                                                      //stloc				V_3
	IL_0062:            /*goto IL_001b;*/goto IL_0064;                              //br.s				IL_001b
	IL_0064:                                                                        //ldloc.1
	IL_0065:            Temp_2=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_006a:            if(Temp_2)goto IL_003a;                                     //brtrue.s				IL_003a
	IL_006c:                                                                        //ldc.i4				0x3
	IL_0071:            V_3=3;                                                      //stloc				V_3
	IL_0075:            /*goto IL_001b;*/goto IL_0077;                              //br.s				IL_001b
	IL_0077:            goto IL_0079;                                               //br.s				IL_0079
	IL_0079:                                                                        //ldc.i4				0x2
	IL_007e:            V_3=2;                                                      //stloc				V_3
	IL_0082:            /*goto IL_001b;*/goto IL_0084;                              //br.s				IL_001b
	IL_0084:            goto IL_00d3;                                               //leave.s				IL_00d3
	                    ;}
	                    finally{
	IL_0086:            goto IL_009d;                                               //br.s				IL_009d
	IL_0088:                                                                        //ldloc				V_4
	IL_008c:            switch(V_4){case 0:goto IL_00bd;case 1:goto IL_00d0;case 2:goto IL_00af;};//switch				(IL_00bd,IL_00d0,IL_00af)
	IL_009d:                                                                        //ldloc.1
	IL_009e:                                                                        //isinst				System::IDisposable
	IL_00a3:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00a4:                                                                        //ldc.i4				0x2
	IL_00a9:            V_4=2;                                                      //stloc				V_4
	IL_00ad:            /*goto IL_0088;*/goto IL_00af;                              //br.s				IL_0088
	IL_00af:                                                                        //ldloc.2
	IL_00b0:            if(V_2==nullptr)goto IL_00d2;                               //brfalse.s				IL_00d2
	IL_00b2:                                                                        //ldc.i4				0x0
	IL_00b7:            V_4=0;                                                      //stloc				V_4
	IL_00bb:            /*goto IL_0088;*/goto IL_00bd;                              //br.s				IL_0088
	IL_00bd:            goto IL_00bf;                                               //br.s				IL_00bf
	IL_00bf:                                                                        //ldloc.2
	IL_00c0:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00c5:                                                                        //ldc.i4				0x1
	IL_00ca:            V_4=1;                                                      //stloc				V_4
	IL_00ce:            /*goto IL_0088;*/goto IL_00d0;                              //br.s				IL_0088
	IL_00d0:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_00d2:                                                                        //endfinally
	                    ;}
	IL_00d3:                                                                        //ldc.i4.4
	IL_00d4:                                                                        //dup
	IL_00d5:                                                                        //dup
	IL_00d6:                                                                        //ldc.i4.2
	IL_00d7:                                                                        //sub
	IL_00d8:                                                                        //blt				IL_00d4
	IL_00dd:                                                                        //pop
	IL_00de:            return;                                                     //ret

}
inline Root::T_x91::~T_x91()
//System::IDisposable^::Dispose by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x13();                                              //call				void Root::T_x91::M_x13()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x91::M_x8()
//Root::T_x90^::M_x1 by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Reflection::Assembly^ Temp_0 = nullptr;
	System::Reflection::AssemblyName^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Reflection::Assembly^ Root::T_x91 F_x2
	IL_0006:            Temp_1=Temp_0->GetName();                                   //callvirt				System::Reflection::AssemblyName^ System::Reflection::Assembly::GetName()
	IL_000b:            Temp_2=Temp_1->Name;                                        //callvirt				System::String^ System::Reflection::AssemblyName::get_Name()
	IL_0010:            return Temp_2;                                              //ret

}
inline Root::T_x91::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Collections::CollectionBase();*/                  //call				void System::Collections::CollectionBase::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x91::T_x1::M_x1(Reflector::IPackage^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->List;                                          //call				System::Collections::IList^ System::Collections::CollectionBase::get_List()
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::IList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
inline Reflector::IPackage^ Root::T_x91::T_x1::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->List;                                          //call				System::Collections::IList^ System::Collections::CollectionBase::get_List()
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::IList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				Reflector::IPackage
	IL_0011:            return safe_cast<Reflector::IPackage^>(Temp_1);             //ret

}
