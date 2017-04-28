#include "global_xref.h"

inline Root::T_x21::T_x21(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	Root::T_x21::T_x1^ Temp_1 = nullptr;
	Root::T_x21::T_x1^ Temp_2 = nullptr;
	Root::T_x21::T_x1^ Temp_3 = nullptr;
	Root::T_x21::T_x1^ Temp_4 = nullptr;
	System::Collections::ICollection^ Temp_5 = nullptr;
	System::Collections::IEnumerator^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::INamespace^ V_2 = nullptr;
	Reflector::CodeModel::IModule^ V_3 = nullptr;
	Reflector::CodeModel::IAssembly^ V_4 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0006:            this->F_x12=safe_cast<System::Collections::IDictionary^>(Temp_0);//stfld				System::Collections::IDictionary^ Root::T_x21 F_x12
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x21 F_x1
	IL_0018:                                                                        //ldarg.1
	IL_0019:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_001e:            V_0=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.0
	IL_001f:                                                                        //ldloc.0
	IL_0020:            if(V_0==nullptr)goto IL_0040;                               //brfalse.s				IL_0040
	IL_0022:            goto IL_005a;                                               //br.s				IL_005a
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldloc.3
	IL_0026:            Temp_2=gcnew Root::T_x21::T_x1(V_3);                        //newobj				void Root::T_x21::T_x1::.ctor(Reflector::CodeModel::IModule^)
	IL_002b:            this->F_x2=safe_cast<System::Collections::IEnumerator^>(Temp_2);//stfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_0030:            goto IL_004c;                                               //br.s				IL_004c
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.2
	IL_0034:            Temp_3=gcnew Root::T_x21::T_x1(V_2);                        //newobj				void Root::T_x21::T_x1::.ctor(Reflector::CodeModel::INamespace^)
	IL_0039:            this->F_x2=safe_cast<System::Collections::IEnumerator^>(Temp_3);//stfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_003e:            goto IL_006d;                                               //br.s				IL_006d
	IL_0040:                                                                        //ldarg.1
	IL_0041:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0046:            V_1=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.1
	IL_0047:                                                                        //ldloc.1
	IL_0048:            if(V_1==nullptr)goto IL_0088;                               //brfalse.s				IL_0088
	IL_004a:            goto IL_0094;                                               //br.s				IL_0094
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_0052:            V_4=dynamic_cast<Reflector::CodeModel::IAssembly^>(A_0);    //stloc.s				V_4
	IL_0054:                                                                        //ldloc.s				V_4
	IL_0056:            if(V_4==nullptr)goto IL_00a2;                               //brfalse.s				IL_00a2
	IL_0058:            goto IL_0079;                                               //br.s				IL_0079
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldloc.0
	IL_005c:            Temp_5=Root::T_x21::T_x2::M_x1(V_0);                        //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0061:            Temp_6=safe_cast<System::Collections::IEnumerable^>(Temp_5)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0066:            this->F_x2=Temp_6;                                          //stfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_006b:            goto IL_0040;                                               //br.s				IL_0040
	IL_006d:                                                                        //ldarg.1
	IL_006e:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_0073:            V_3=dynamic_cast<Reflector::CodeModel::IModule^>(A_0);      //stloc.3
	IL_0074:                                                                        //ldloc.3
	IL_0075:            if(V_3==nullptr)goto IL_004c;                               //brfalse.s				IL_004c
	IL_0077:            goto IL_0024;                                               //br.s				IL_0024
	IL_0079:                                                                        //ldarg.0
	IL_007a:                                                                        //ldloc.s				V_4
	IL_007c:            Temp_1=gcnew Root::T_x21::T_x1(V_4);                        //newobj				void Root::T_x21::T_x1::.ctor(Reflector::CodeModel::IAssembly^)
	IL_0081:            this->F_x2=safe_cast<System::Collections::IEnumerator^>(Temp_1);//stfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_0086:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_0088:                                                                        //ldarg.1
	IL_0089:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_008e:            V_2=dynamic_cast<Reflector::CodeModel::INamespace^>(A_0);   //stloc.2
	IL_008f:                                                                        //ldloc.2
	IL_0090:            if(V_2==nullptr)goto IL_006d;                               //brfalse.s				IL_006d
	IL_0092:            goto IL_0032;                                               //br.s				IL_0032
	IL_0094:                                                                        //ldarg.0
	IL_0095:                                                                        //ldloc.1
	IL_0096:            Temp_4=gcnew Root::T_x21::T_x1(V_1);                        //newobj				void Root::T_x21::T_x1::.ctor(Reflector::CodeModel::ITypeDeclaration^)
	IL_009b:            this->F_x2=safe_cast<System::Collections::IEnumerator^>(Temp_4);//stfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_00a0:            goto IL_0088;                                               //br.s				IL_0088
	IL_00a2:            return;                                                     //ret

}
inline System::Int32 Root::T_x21::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	Root::T_x20^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_0006:                                                                        //isinst				Root::T_x20
	IL_000b:            V_0=dynamic_cast<Root::T_x20^>(Temp_0);                     //stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            if(V_0==nullptr)goto IL_0018;                               //brfalse.s				IL_0018
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldloc.0
	IL_0012:            Temp_1=V_0->M_x1();                                         //callvirt				System::Int32 Root::T_x20::M_x1()
	IL_0017:            return Temp_1;                                              //ret
	IL_0018:                                                                        //ldc.i4.4
	IL_0019:                                                                        //dup
	IL_001a:                                                                        //dup
	IL_001b:                                                                        //ldc.i4.2
	IL_001c:                                                                        //sub
	IL_001d:                                                                        //blt				IL_0019
	IL_0022:                                                                        //pop
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:            return 0;                                                   //ret

}
inline System::Object^ Root::T_x21::M_x12()
//System::Collections::IEnumerator^::get_Current by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_0006:            Temp_1=Temp_0->Current;                                     //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x21::M_x13()
//System::Collections::IEnumerator^::Reset by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Collections::IDictionary^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_0006:            Temp_0->Reset();                                            //callvirt				void System::Collections::IEnumerator::Reset()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x21 F_x12
	IL_0011:            Temp_1->Clear();                                            //callvirt				void System::Collections::IDictionary::Clear()
	IL_0016:            return;                                                     //ret

}
inline System::Boolean Root::T_x21::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Boolean Root::T_x21 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x21::M_x8()
//System::Collections::IEnumerator^::MoveNext by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Collections::IDictionary^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Collections::IDictionary^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Collections::IEnumerator^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	//local variables.
	System::Boolean V_0 = false;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0082;case 1:goto IL_00d1;case 2:goto IL_003a;case 3:goto IL_00b5;case 4:goto IL_0099;case 5:goto IL_004e;};//switch				(IL_0082,IL_00d1,IL_003a,IL_00b5,IL_0099,IL_004e)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_0029:            Temp_1=Temp_0->MoveNext();                                  //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_002e:            V_0=Temp_1;                                                 //stloc.0
	IL_002f:                                                                        //ldc.i4				0x2
	IL_0034:            V_2=2;                                                      //stloc				V_2
	IL_0038:            /*goto IL_0002;*/goto IL_003a;                              //br.s				IL_0002
	IL_003a:            goto IL_003d;                                               //br.s				IL_003d
	IL_003c:                                                                        //break
	IL_003d:                                                                        //ldloc.0
	IL_003e:            if(!V_0)goto IL_00d3;                                       //brfalse				IL_00d3
	IL_0043:                                                                        //ldc.i4				0x5
	IL_0048:            V_2=5;                                                      //stloc				V_2
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_009b;                                               //br.s				IL_009b
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_4=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x21 F_x12
	IL_0056:                                                                        //ldloc.1
	IL_0057:                                                                        //ldc.i4.1
	IL_0058:                                                                        //box				System::Boolean
	IL_005d:            Temp_4->Add(V_1,safe_cast<System::Object^>(true));          //callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_5=this->F_x1;                                          //ldfld				System::Object^ Root::T_x21 F_x1
	IL_0069:                                                                        //ldloc.1
	IL_006a:            Temp_6=Root::T_x21::T_x12::M_x1(Temp_5,V_1);                //call				System::Boolean Root::T_x21::T_x12::M_x1(System::Object^,System::Object^)
	IL_006f:                                                                        //ldc.i4.0
	IL_0070:                                                                        //ceq
	IL_0072:            this->F_x13=(Temp_6 == false);                              //stfld				System::Boolean Root::T_x21 F_x13
	IL_0077:                                                                        //ldc.i4				0x0
	IL_007c:            V_2=0;                                                      //stloc				V_2
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_0084:                                                                        //ldarg.0
	IL_0085:                                                                        //ldc.i4.0
	IL_0086:            this->F_x13=false;                                          //stfld				System::Boolean Root::T_x21 F_x13
	IL_008b:                                                                        //ldc.i4				0x4
	IL_0090:            V_2=4;                                                      //stloc				V_2
	IL_0094:            /*goto IL_0002;*/goto IL_0099;                              //br				IL_0002
	IL_0099:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_009b:                                                                        //ldarg.0
	IL_009c:            Temp_7=this->F_x2;                                          //ldfld				System::Collections::IEnumerator^ Root::T_x21 F_x2
	IL_00a1:            Temp_8=Temp_7->Current;                                     //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00a6:            V_1=Temp_8;                                                 //stloc.1
	IL_00a7:                                                                        //ldc.i4				0x3
	IL_00ac:            V_2=3;                                                      //stloc				V_2
	IL_00b0:            /*goto IL_0002;*/goto IL_00b5;                              //br				IL_0002
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:            Temp_2=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x21 F_x12
	IL_00bb:                                                                        //ldloc.1
	IL_00bc:            Temp_3=Temp_2->Contains(V_1);                               //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_00c1:            if(!Temp_3)goto IL_0050;                                    //brfalse.s				IL_0050
	IL_00c3:                                                                        //ldc.i4				0x1
	IL_00c8:            V_2=1;                                                      //stloc				V_2
	IL_00cc:            /*goto IL_0002;*/goto IL_00d1;                              //br				IL_0002
	IL_00d1:            goto IL_0084;                                               //br.s				IL_0084
	IL_00d3:                                                                        //ldloc.0
	IL_00d4:            return V_0;                                                 //ret

}
inline Root::T_x21::T_x1::T_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_8 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::IModule^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldc.i4.0
	IL_0007:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_000c:            V_0=Temp_0;                                                 //stloc.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0013:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0018:            V_2=Temp_2;                                                 //stloc.2
	IL_0019:            /*goto IL_001b;*/goto IL_001901;                            //br.s				IL_001b
	IL_001901:          try{
	IL_001b:            goto IL_0037;                                               //br.s				IL_0037
	IL_001d:                                                                        //ldloc.2
	IL_001e:            Temp_4=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0023:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_0028:            V_1=safe_cast<Reflector::CodeModel::IModule^>(Temp_4);      //stloc.1
	IL_0029:                                                                        //ldloc.0
	IL_002a:                                                                        //ldloc.1
	IL_002b:            Temp_5=V_1->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_0030:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldloc.2
	IL_0038:            Temp_3=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_003d:            if(Temp_3)goto IL_001d;                                     //brtrue.s				IL_001d
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:            goto IL_0058;                                               //leave.s				IL_0058
	                    ;}
	                    finally{
	IL_0043:                                                                        //ldloc.2
	IL_0044:                                                                        //isinst				System::IDisposable
	IL_0049:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_004a:                                                                        //ldloc.3
	IL_004b:            if(V_3==nullptr)goto IL_0057;                               //brfalse.s				IL_0057
	IL_004d:            goto IL_004f;                                               //br.s				IL_004f
	IL_004f:                                                                        //ldloc.3
	IL_0050:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0055:            goto IL_0057;                                               //br.s				IL_0057
	IL_0057:                                                                        //endfinally
	                    ;}
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_6=V_0->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_005f:                                                                        //conv.ovf.u4
	IL_0060:            Temp_7=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(safe_cast<System::UInt32>(Temp_6));//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_0065:            this->F_x1=Temp_7;                                          //stfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldarg.0
	IL_006c:            Temp_8=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_0071:                                                                        //ldc.i4.0
	IL_0072:            V_0->CopyTo(safe_cast<System::Array^>(Temp_8),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_0077:                                                                        //ldarg.0
	IL_0078:            this->M_x12();                                              //call				void Root::T_x21::T_x1::M_x12()
	IL_007d:            return;                                                     //ret

}
inline Root::T_x21::T_x1::T_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_3 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_000d:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0012:                                                                        //conv.ovf.u4
	IL_0013:            Temp_2=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(safe_cast<System::UInt32>(Temp_1));//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_0018:            this->F_x1=Temp_2;                                          //stfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_4=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_0029:                                                                        //ldc.i4.0
	IL_002a:            safe_cast<System::Collections::ICollection^>(Temp_3)->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            this->M_x12();                                              //call				void Root::T_x21::T_x1::M_x12()
	IL_0035:            return;                                                     //ret

}
inline Root::T_x21::T_x1::T_x1(Reflector::CodeModel::INamespace^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_3 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_000d:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0012:                                                                        //conv.ovf.u4
	IL_0013:            Temp_2=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(safe_cast<System::UInt32>(Temp_1));//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_0018:            this->F_x1=Temp_2;                                          //stfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_4=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_0029:                                                                        //ldc.i4.0
	IL_002a:            safe_cast<System::Collections::ICollection^>(Temp_3)->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            this->M_x12();                                              //call				void Root::T_x21::T_x1::M_x12()
	IL_0035:            return;                                                     //ret

}
inline Root::T_x21::T_x1::T_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ITypeDeclaration^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:            Temp_0=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(1);//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_000d:            V_0=Temp_0;                                                 //stloc.0
	IL_000e:                                                                        //ldloc.0
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            V_0[0]=A_0;                                                 //stelem.ref
	IL_0012:                                                                        //ldloc.0
	IL_0013:            this->F_x1=V_0;                                             //stfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_0018:                                                                        //ldarg.0
	IL_0019:            this->M_x12();                                              //call				void Root::T_x21::T_x1::M_x12()
	IL_001e:            return;                                                     //ret

}
inline System::Int32 Root::T_x21::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_0006:                                                                        //ldc.i4.m1
	IL_0007:            if(Temp_0!=-1)goto IL_000d;                                 //bne.un.s				IL_000d
	IL_0009:            goto IL_000b;                                               //br.s				IL_000b
	IL_000b:                                                                        //ldc.i4.0
	IL_000c:            return 0;                                                   //ret
	IL_000d:                                                                        //ldc.i4.4
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //dup
	IL_0010:                                                                        //ldc.i4.2
	IL_0011:                                                                        //sub
	IL_0012:                                                                        //blt				IL_000e
	IL_0017:                                                                        //pop
	IL_0018:                                                                        //ldarg.0
	IL_0019:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_001e:                                                                        //ldc.i4.s				100
	IL_0020:                                                                        //mul
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_2=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_0027:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0028:                                                                        //conv.i4
	IL_0029:                                                                        //div
	IL_002a:            return ((Temp_1 * 100) / Temp_3);                           //ret

}
inline void Root::T_x21::T_x1::M_x12()
//System::Collections::IEnumerator^::Reset by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.m1
	IL_0002:            this->F_x2=-1;                                              //stfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldnull
	IL_0009:            this->F_x12=safe_cast<System::Collections::IEnumerator^>(nullptr);//stfld				System::Collections::IEnumerator^ Root::T_x21::T_x1 F_x12
	IL_000e:            return;                                                     //ret

}
inline System::Boolean Root::T_x21::T_x1::M_x13()
//System::Collections::IEnumerator^::MoveNext by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Collections::ICollection^ Temp_11 = nullptr;
	System::Collections::IEnumerator^ Temp_12 = nullptr;
	System::Collections::IEnumerator^ Temp_13 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003e;                                               //br.s				IL_003e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_00f1;case 1:goto IL_00cb;case 2:goto IL_00ad;case 3:goto IL_007f;case 4:goto IL_000b;case 5:goto IL_006b;case 6:goto IL_010f;case 7:goto IL_00db;case 8:goto IL_0130;case 9:goto IL_009a;};//switch				(IL_00f1,IL_00cb,IL_00ad,IL_007f,IL_000b,IL_006b,IL_010f,IL_00db,IL_0130,IL_009a)
	IL_003e:            goto IL_00cd;                                               //br				IL_00cd
	IL_0043:                                                                        //ldarg.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_9=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_10=this->F_x2;                                         //ldfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_0050:                                                                        //ldelem.ref
	IL_0051:            Temp_11=Root::T_x21::T_x2::M_x1(Temp_9[Temp_10]);           //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0056:            Temp_12=safe_cast<System::Collections::IEnumerable^>(Temp_11)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_005b:            this->F_x12=Temp_12;                                        //stfld				System::Collections::IEnumerator^ Root::T_x21::T_x1 F_x12
	IL_0060:                                                                        //ldc.i4				0x5
	IL_0065:            V_0=5;                                                      //stloc				V_0
	IL_0069:            /*goto IL_000d;*/goto IL_006b;                              //br.s				IL_000d
	IL_006b:            goto IL_00cd;                                               //br.s				IL_00cd
	IL_006d:            goto IL_0070;                                               //br.s				IL_0070
	IL_006f:                                                                        //break
	IL_0070:                                                                        //ldc.i4.0
	IL_0071:            return false;                                               //ret
	IL_0072:                                                                        //ldc.i4.0
	IL_0073:            return false;                                               //ret
	IL_0074:                                                                        //ldc.i4				0x3
	IL_0079:            V_0=3;                                                      //stloc				V_0
	IL_007d:            /*goto IL_000d;*/goto IL_007f;                              //br.s				IL_000d
	IL_007f:                                                                        //ldarg.0
	IL_0080:            Temp_4=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x21::T_x1 F_x12
	IL_0085:            Temp_5=Temp_4->MoveNext();                                  //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_008a:            if(!Temp_5)goto IL_009f;                                    //brfalse.s				IL_009f
	IL_008c:                                                                        //ldc.i4				0x9
	IL_0091:            V_0=9;                                                      //stloc				V_0
	IL_0095:            /*goto IL_000d;*/goto IL_009a;                              //br				IL_000d
	IL_009a:            goto IL_0135;                                               //br				IL_0135
	IL_009f:                                                                        //ldc.i4				0x2
	IL_00a4:            V_0=2;                                                      //stloc				V_0
	IL_00a8:            /*goto IL_000d;*/goto IL_00ad;                              //br				IL_000d
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_1=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_00b9:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_00ba:                                                                        //conv.i4
	IL_00bb:            if(Temp_0<Temp_2)goto IL_00f3;                              //blt.s				IL_00f3
	IL_00bd:                                                                        //ldc.i4				0x1
	IL_00c2:            V_0=1;                                                      //stloc				V_0
	IL_00c6:            /*goto IL_000d;*/goto IL_00cb;                              //br				IL_000d
	IL_00cb:            goto IL_0072;                                               //br.s				IL_0072
	IL_00cd:                                                                        //ldc.i4				0x7
	IL_00d2:            V_0=7;                                                      //stloc				V_0
	IL_00d6:            /*goto IL_000d;*/goto IL_00db;                              //br				IL_000d
	IL_00db:                                                                        //ldarg.0
	IL_00dc:            Temp_13=this->F_x12;                                        //ldfld				System::Collections::IEnumerator^ Root::T_x21::T_x1 F_x12
	IL_00e1:            if(Temp_13==nullptr)goto IL_009f;                           //brfalse.s				IL_009f
	IL_00e3:                                                                        //ldc.i4				0x0
	IL_00e8:            V_0=0;                                                      //stloc				V_0
	IL_00ec:            /*goto IL_000d;*/goto IL_00f1;                              //br				IL_000d
	IL_00f1:            goto IL_0074;                                               //br.s				IL_0074
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:                                                                        //dup
	IL_00f5:            Temp_3=this->F_x2;                                          //ldfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_00fa:                                                                        //ldc.i4.1
	IL_00fb:                                                                        //add
	IL_00fc:            this->F_x2=(Temp_3 + 1);                                    //stfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_0101:                                                                        //ldc.i4				0x6
	IL_0106:            V_0=6;                                                      //stloc				V_0
	IL_010a:            /*goto IL_000d;*/goto IL_010f;                              //br				IL_000d
	IL_010f:                                                                        //ldarg.0
	IL_0110:            Temp_6=this->F_x2;                                          //ldfld				System::Int32 Root::T_x21::T_x1 F_x2
	IL_0115:                                                                        //ldarg.0
	IL_0116:            Temp_7=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x21::T_x1 F_x1
	IL_011b:            Temp_8=Temp_7->Length;                                      //ldlen
	IL_011c:                                                                        //conv.i4
	IL_011d:            if(Temp_6<Temp_8)goto IL_0043;                              //blt				IL_0043
	IL_0122:                                                                        //ldc.i4				0x8
	IL_0127:            V_0=8;                                                      //stloc				V_0
	IL_012b:            /*goto IL_000d;*/goto IL_0130;                              //br				IL_000d
	IL_0130:            goto IL_006d;                                               //br				IL_006d
	IL_0135:                                                                        //ldc.i4.1
	IL_0136:            return true;                                                //ret

}
inline System::Object^ Root::T_x21::T_x1::M_x2()
//System::Collections::IEnumerator^::get_Current by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x21::T_x1 F_x12
	IL_0006:            Temp_1=Temp_0->Current;                                     //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x21::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=A_0->Attributes;                                     //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0010:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0015:            V_2=Temp_2;                                                 //stloc.2
	IL_0016:            /*goto IL_0018;*/goto IL_001601;                            //br.s				IL_0018
	IL_001601:          try{
	IL_0018:                                                                        //ldc.i4				0x0
	IL_001d:            V_4=0;                                                      //stloc				V_4
	IL_0021:            /*goto IL_0025;*/goto IL_0023;                              //br.s				IL_0025
	IL_0023:            goto IL_0042;                                               //br.s				IL_0042
	IL_0025:                                                                        //ldloc				V_4
	IL_0029:            switch(V_4){case 0:goto IL_0023;case 1:goto IL_0095;case 2:goto IL_0088;case 3:goto IL_0068;case 4:goto IL_0075;};//switch				(IL_0023,IL_0095,IL_0088,IL_0068,IL_0075)
	IL_0042:            goto IL_006a;                                               //br.s				IL_006a
	IL_0044:                                                                        //ldloc.2
	IL_0045:            Temp_4=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004a:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_004f:            V_1=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_4);//stloc.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:                                                                        //ldloc.1
	IL_0052:            Temp_5=V_1->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_0057:            Temp_6=V_0->Add(safe_cast<System::Object^>(Temp_5));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_005c:                                                                        //pop
	IL_005d:                                                                        //ldc.i4				0x3
	IL_0062:            V_4=3;                                                      //stloc				V_4
	IL_0066:            /*goto IL_0025;*/goto IL_0068;                              //br.s				IL_0025
	IL_0068:            goto IL_006a;                                               //br.s				IL_006a
	IL_006a:                                                                        //ldc.i4				0x4
	IL_006f:            V_4=4;                                                      //stloc				V_4
	IL_0073:            /*goto IL_0025;*/goto IL_0075;                              //br.s				IL_0025
	IL_0075:                                                                        //ldloc.2
	IL_0076:            Temp_3=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_007b:            if(Temp_3)goto IL_0044;                                     //brtrue.s				IL_0044
	IL_007d:                                                                        //ldc.i4				0x2
	IL_0082:            V_4=2;                                                      //stloc				V_4
	IL_0086:            /*goto IL_0025;*/goto IL_0088;                              //br.s				IL_0025
	IL_0088:            goto IL_008a;                                               //br.s				IL_008a
	IL_008a:                                                                        //ldc.i4				0x1
	IL_008f:            V_4=1;                                                      //stloc				V_4
	IL_0093:            /*goto IL_0025;*/goto IL_0095;                              //br.s				IL_0025
	IL_0095:            goto IL_00e4;                                               //leave.s				IL_00e4
	                    ;}
	                    finally{
	IL_0097:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_0099:                                                                        //ldloc				V_5
	IL_009d:            switch(V_5){case 0:goto IL_00e1;case 1:goto IL_00c0;case 2:goto IL_00ce;};//switch				(IL_00e1,IL_00c0,IL_00ce)
	IL_00ae:                                                                        //ldloc.2
	IL_00af:                                                                        //isinst				System::IDisposable
	IL_00b4:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00b5:                                                                        //ldc.i4				0x1
	IL_00ba:            V_5=1;                                                      //stloc				V_5
	IL_00be:            /*goto IL_0099;*/goto IL_00c0;                              //br.s				IL_0099
	IL_00c0:                                                                        //ldloc.3
	IL_00c1:            if(V_3==nullptr)goto IL_00e3;                               //brfalse.s				IL_00e3
	IL_00c3:                                                                        //ldc.i4				0x2
	IL_00c8:            V_5=2;                                                      //stloc				V_5
	IL_00cc:            /*goto IL_0099;*/goto IL_00ce;                              //br.s				IL_0099
	IL_00ce:            goto IL_00d0;                                               //br.s				IL_00d0
	IL_00d0:                                                                        //ldloc.3
	IL_00d1:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00d6:                                                                        //ldc.i4				0x0
	IL_00db:            V_5=0;                                                      //stloc				V_5
	IL_00df:            /*goto IL_0099;*/goto IL_00e1;                              //br.s				IL_0099
	IL_00e1:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_00e3:                                                                        //endfinally
	                    ;}
	IL_00e4:                                                                        //ldloc.0
	IL_00e5:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::ICollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldc.i4.0
	IL_000c:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0011:            V_0=Temp_0;                                                 //stloc.0
	IL_0012:                                                                        //ldloc.0
	IL_0013:                                                                        //ldarg.0
	IL_0014:            Temp_1=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_0019:            V_0->AddRange(Temp_1);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_001e:                                                                        //ldloc.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=safe_cast<Reflector::CodeModel::IFieldReference^>(A_0)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0025:            Temp_3=Root::T_x21::T_x2::M_x1(Temp_2);                     //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_002a:            V_0->AddRange(Temp_3);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_002f:                                                                        //ldloc.0
	IL_0030:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IFieldReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Collections::ICollection^ Temp_2 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:                                                                        //ldarg.0
	IL_0009:            Temp_1=A_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_000e:            Temp_2=Root::T_x21::T_x2::M_x1(Temp_1);                     //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0013:            V_0->AddRange(Temp_2);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::ICollection^ Temp_1 = nullptr;
	System::Collections::ICollection^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::Collections::ICollection^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	Reflector::CodeModel::IType^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::Collections::ICollection^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Collections::ICollection^ Temp_15 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_16 = nullptr;
	System::Object^ Temp_17 = nullptr;
	System::Collections::ICollection^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::Boolean Temp_20 = false;
	System::Object^ Temp_21 = nullptr;
	Reflector::CodeModel::IType^ Temp_22 = nullptr;
	System::Collections::ICollection^ Temp_23 = nullptr;
	Reflector::CodeModel::IVariableDeclarationCollection^ Temp_24 = nullptr;
	System::Collections::IEnumerator^ Temp_25 = nullptr;
	Reflector::CodeModel::IInstructionCollection^ Temp_26 = nullptr;
	System::Collections::IEnumerator^ Temp_27 = nullptr;
	Reflector::CodeModel::IExceptionHandlerCollection^ Temp_28 = nullptr;
	System::Collections::IEnumerator^ Temp_29 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::IMethodBody^ V_1 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IExceptionHandler^ V_3 = nullptr;
	Reflector::CodeModel::IInstruction^ V_4 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_7 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_8 = nullptr;
	Reflector::CodeModel::IType^ V_9 = nullptr;
	System::Collections::IEnumerator^ V_10 = nullptr;
	System::IDisposable^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_12
	IL_0006:            switch(V_12){case 0:goto IL_0055;case 1:goto IL_04dc;case 2:goto IL_0091;case 3:goto IL_04fc;case 4:goto IL_0071;};//switch				(IL_0055,IL_04dc,IL_0091,IL_04fc,IL_0071)
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:                                                                        //ldloc.0
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_1=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_002d:            V_0->AddRange(Temp_1);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0032:                                                                        //ldloc.0
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_2=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(A_0));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_0039:            V_0->AddRange(Temp_2);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_3=A_0->Body;                                           //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_0044:                                                                        //isinst				Reflector::CodeModel::IMethodBody
	IL_0049:            V_1=dynamic_cast<Reflector::CodeModel::IMethodBody^>(Temp_3);//stloc.1
	IL_004a:                                                                        //ldc.i4				0x0
	IL_004f:            V_12=0;                                                     //stloc				V_12
	IL_0053:            /*goto IL_0002;*/goto IL_0055;                              //br.s				IL_0002
	IL_0055:                                                                        //ldloc.1
	IL_0056:            if(V_1==nullptr)goto IL_0501;                               //brfalse				IL_0501
	IL_005b:                                                                        //ldc.i4.2
	IL_005c:                                                                        //dup
	IL_005d:                                                                        //dup
	IL_005e:                                                                        //ldc.i4.3
	IL_005f:                                                                        //add
	IL_0060:                                                                        //bgt				IL_005c
	IL_0065:                                                                        //pop
	IL_0066:                                                                        //ldc.i4				0x4
	IL_006b:            V_12=4;                                                     //stloc				V_12
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_04c1;                                               //br				IL_04c1
	IL_0076:                                                                        //ldloc.1
	IL_0077:            Temp_26=V_1->Instructions;                                  //callvirt				Reflector::CodeModel::IInstructionCollection^ Reflector::CodeModel::IMethodBody::get_Instructions()
	IL_007c:            Temp_27=safe_cast<System::Collections::IEnumerable^>(Temp_26)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0081:            V_10=Temp_27;                                               //stloc.s				V_10
	IL_0083:                                                                        //ldc.i4				0x2
	IL_0088:            V_12=2;                                                     //stloc				V_12
	IL_008c:            /*goto IL_0002;*/goto IL_0091;                              //br				IL_0002
	IL_0091:            /*goto IL_0248;*/goto IL_024702;                            //br				IL_0248
	IL_009101:          try{
	IL_0096:                                                                        //ldc.i4				0x4
	IL_009b:            V_12=4;                                                     //stloc				V_12
	IL_009f:            /*goto IL_00a3;*/goto IL_00a1;                              //br.s				IL_00a3
	IL_00a1:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_00a3:                                                                        //ldloc				V_12
	IL_00a7:            switch(V_12){case 0:goto IL_0119;case 1:goto IL_010c;case 2:goto IL_00e1;case 3:goto IL_00cd;case 4:goto IL_00a1;};//switch				(IL_0119,IL_010c,IL_00e1,IL_00cd,IL_00a1)
	IL_00c0:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_00c2:                                                                        //ldc.i4				0x3
	IL_00c7:            V_12=3;                                                     //stloc				V_12
	IL_00cb:            /*goto IL_00a3;*/goto IL_00cd;                              //br.s				IL_00a3
	IL_00cd:                                                                        //ldloc.s				V_10
	IL_00cf:            Temp_20=V_10->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00d4:            if(Temp_20)goto IL_00e3;                                    //brtrue.s				IL_00e3
	IL_00d6:                                                                        //ldc.i4				0x2
	IL_00db:            V_12=2;                                                     //stloc				V_12
	IL_00df:            /*goto IL_00a3;*/goto IL_00e1;                              //br.s				IL_00a3
	IL_00e1:            goto IL_010e;                                               //br.s				IL_010e
	IL_00e3:                                                                        //ldloc.s				V_10
	IL_00e5:            Temp_21=V_10->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00ea:                                                                        //castclass				Reflector::CodeModel::IExceptionHandler
	IL_00ef:            V_3=safe_cast<Reflector::CodeModel::IExceptionHandler^>(Temp_21);//stloc.3
	IL_00f0:                                                                        //ldloc.0
	IL_00f1:                                                                        //ldloc.3
	IL_00f2:            Temp_22=V_3->CatchType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IExceptionHandler::get_CatchType()
	IL_00f7:            Temp_23=Root::T_x21::T_x2::M_x1(Temp_22);                   //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_00fc:            V_0->AddRange(Temp_23);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0101:                                                                        //ldc.i4				0x1
	IL_0106:            V_12=1;                                                     //stloc				V_12
	IL_010a:            /*goto IL_00a3;*/goto IL_010c;                              //br.s				IL_00a3
	IL_010c:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_010e:                                                                        //ldc.i4				0x0
	IL_0113:            V_12=0;                                                     //stloc				V_12
	IL_0117:            /*goto IL_00a3;*/goto IL_0119;                              //br.s				IL_00a3
	IL_0119:            goto IL_0076;                                               //leave				IL_0076
	                    ;}
	                    finally{
	IL_011e:            goto IL_0135;                                               //br.s				IL_0135
	IL_0120:                                                                        //ldloc				V_12
	IL_0124:            switch(V_12){case 0:goto IL_016c;case 1:goto IL_0149;case 2:goto IL_0158;};//switch				(IL_016c,IL_0149,IL_0158)
	IL_0135:                                                                        //ldloc.s				V_10
	IL_0137:                                                                        //isinst				System::IDisposable
	IL_013c:            V_11=dynamic_cast<System::IDisposable^>(V_10);              //stloc.s				V_11
	IL_013e:                                                                        //ldc.i4				0x1
	IL_0143:            V_12=1;                                                     //stloc				V_12
	IL_0147:            /*goto IL_0120;*/goto IL_0149;                              //br.s				IL_0120
	IL_0149:                                                                        //ldloc.s				V_11
	IL_014b:            if(V_11==nullptr)goto IL_016e;                              //brfalse.s				IL_016e
	IL_014d:                                                                        //ldc.i4				0x2
	IL_0152:            V_12=2;                                                     //stloc				V_12
	IL_0156:            /*goto IL_0120;*/goto IL_0158;                              //br.s				IL_0120
	IL_0158:            goto IL_015a;                                               //br.s				IL_015a
	IL_015a:                                                                        //ldloc.s				V_11
	IL_015c:            /*V_11->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0161:                                                                        //ldc.i4				0x0
	IL_0166:            V_12=0;                                                     //stloc				V_12
	IL_016a:            /*goto IL_0120;*/goto IL_016c;                              //br.s				IL_0120
	IL_016c:            goto IL_016e;                                               //br.s				IL_016e
	IL_016e:                                                                        //endfinally
	                    ;}
	IL_016E02:          try{
	IL_016f:                                                                        //ldc.i4				0x2
	IL_0174:            V_12=2;                                                     //stloc				V_12
	IL_0178:            /*goto IL_017c;*/goto IL_017a;                              //br.s				IL_017c
	IL_017a:            goto IL_0199;                                               //br.s				IL_0199
	IL_017c:                                                                        //ldloc				V_12
	IL_0180:            switch(V_12){case 0:goto IL_01d1;case 1:goto IL_01e5;case 2:goto IL_017a;case 3:goto IL_01c4;case 4:goto IL_01f2;};//switch				(IL_01d1,IL_01e5,IL_017a,IL_01c4,IL_01f2)
	IL_0199:            goto IL_01c6;                                               //br.s				IL_01c6
	IL_019b:                                                                        //ldloc.s				V_10
	IL_019d:            Temp_5=V_10->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_01a2:                                                                        //castclass				Reflector::CodeModel::IVariableDeclaration
	IL_01a7:            V_2=safe_cast<Reflector::CodeModel::IVariableDeclaration^>(Temp_5);//stloc.2
	IL_01a8:                                                                        //ldloc.0
	IL_01a9:                                                                        //ldloc.2
	IL_01aa:            Temp_6=V_2->VariableType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_01af:            Temp_7=Root::T_x21::T_x2::M_x1(Temp_6);                     //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_01b4:            V_0->AddRange(Temp_7);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_01b9:                                                                        //ldc.i4				0x3
	IL_01be:            V_12=3;                                                     //stloc				V_12
	IL_01c2:            /*goto IL_017c;*/goto IL_01c4;                              //br.s				IL_017c
	IL_01c4:            goto IL_01c6;                                               //br.s				IL_01c6
	IL_01c6:                                                                        //ldc.i4				0x0
	IL_01cb:            V_12=0;                                                     //stloc				V_12
	IL_01cf:            /*goto IL_017c;*/goto IL_01d1;                              //br.s				IL_017c
	IL_01d1:                                                                        //ldloc.s				V_10
	IL_01d3:            Temp_4=V_10->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_01d8:            if(Temp_4)goto IL_019b;                                     //brtrue.s				IL_019b
	IL_01da:                                                                        //ldc.i4				0x1
	IL_01df:            V_12=1;                                                     //stloc				V_12
	IL_01e3:            /*goto IL_017c;*/goto IL_01e5;                              //br.s				IL_017c
	IL_01e5:            goto IL_01e7;                                               //br.s				IL_01e7
	IL_01e7:                                                                        //ldc.i4				0x4
	IL_01ec:            V_12=4;                                                     //stloc				V_12
	IL_01f0:            /*goto IL_017c;*/goto IL_01f2;                              //br.s				IL_017c
	IL_01f2:            goto IL_04e1;                                               //leave				IL_04e1
	                    ;}
	                    finally{
	IL_01f7:            goto IL_020e;                                               //br.s				IL_020e
	IL_01f9:                                                                        //ldloc				V_12
	IL_01fd:            switch(V_12){case 0:goto IL_0222;case 1:goto IL_0231;case 2:goto IL_0245;};//switch				(IL_0222,IL_0231,IL_0245)
	IL_020e:                                                                        //ldloc.s				V_10
	IL_0210:                                                                        //isinst				System::IDisposable
	IL_0215:            V_11=dynamic_cast<System::IDisposable^>(V_10);              //stloc.s				V_11
	IL_0217:                                                                        //ldc.i4				0x0
	IL_021c:            V_12=0;                                                     //stloc				V_12
	IL_0220:            /*goto IL_01f9;*/goto IL_0222;                              //br.s				IL_01f9
	IL_0222:                                                                        //ldloc.s				V_11
	IL_0224:            if(V_11==nullptr)goto IL_0247;                              //brfalse.s				IL_0247
	IL_0226:                                                                        //ldc.i4				0x1
	IL_022b:            V_12=1;                                                     //stloc				V_12
	IL_022f:            /*goto IL_01f9;*/goto IL_0231;                              //br.s				IL_01f9
	IL_0231:            goto IL_0233;                                               //br.s				IL_0233
	IL_0233:                                                                        //ldloc.s				V_11
	IL_0235:            /*V_11->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_023a:                                                                        //ldc.i4				0x2
	IL_023f:            V_12=2;                                                     //stloc				V_12
	IL_0243:            /*goto IL_01f9;*/goto IL_0245;                              //br.s				IL_01f9
	IL_0245:            goto IL_0247;                                               //br.s				IL_0247
	IL_0247:                                                                        //endfinally
	                    ;}
	IL_024702:          try{
	IL_0248:                                                                        //ldc.i4				0x8
	IL_024d:            V_12=8;                                                     //stloc				V_12
	IL_0251:            /*goto IL_0255;*/goto IL_0253;                              //br.s				IL_0255
	IL_0253:            goto IL_02a6;                                               //br.s				IL_02a6
	IL_0255:                                                                        //ldloc				V_12
	IL_0259:            switch(V_12){case 0:goto IL_0347;case 1:goto IL_03ab;case 2:goto IL_046b;case 3:goto IL_0423;case 4:goto IL_0382;case 5:goto IL_0361;case 6:goto IL_0438;case 7:goto IL_0322;case 8:goto IL_0253;case 9:goto IL_0337;case 10:goto IL_02fc;case 11:goto IL_02ea;case 12:goto IL_03f4;case 13:goto IL_0458;case 14:goto IL_0394;case 15:goto IL_02cc;case 16:goto IL_03db;case 17:goto IL_03c9;};//switch				(IL_0347,IL_03ab,IL_046b,IL_0423,IL_0382,IL_0361,IL_0438,IL_0322,IL_0253,IL_0337,IL_02fc,IL_02ea,IL_03f4,IL_0458,IL_0394,IL_02cc,IL_03db,IL_03c9)
	IL_02a6:            goto IL_0339;                                               //br				IL_0339
	IL_02ab:                                                                        //ldloc.0
	IL_02ac:                                                                        //ldloc.s				V_5
	IL_02ae:            Temp_13=Root::T_x21::T_x2::M_x1(V_5);                       //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_02b3:            V_0->AddRange(Temp_13);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_02b8:                                                                        //ldloc.0
	IL_02b9:                                                                        //ldloc.s				V_5
	IL_02bb:            Temp_14=V_0->Add(safe_cast<System::Object^>(V_5));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_02c0:                                                                        //pop
	IL_02c1:                                                                        //ldc.i4				0xf
	IL_02c6:            V_12=15;                                                    //stloc				V_12
	IL_02ca:            /*goto IL_0255;*/goto IL_02cc;                              //br.s				IL_0255
	IL_02cc:            goto IL_02ce;                                               //br.s				IL_02ce
	IL_02ce:                                                                        //ldloc.s				V_4
	IL_02d0:            Temp_12=V_4->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_02d5:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_02da:            V_6=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_12);//stloc.s				V_6
	IL_02dc:                                                                        //ldc.i4				0xb
	IL_02e1:            V_12=11;                                                    //stloc				V_12
	IL_02e5:            /*goto IL_0255;*/goto IL_02ea;                              //br				IL_0255
	IL_02ea:                                                                        //ldloc.s				V_6
	IL_02ec:            if(V_6==nullptr)goto IL_0366;                               //brfalse.s				IL_0366
	IL_02ee:                                                                        //ldc.i4				0xa
	IL_02f3:            V_12=10;                                                    //stloc				V_12
	IL_02f7:            /*goto IL_0255;*/goto IL_02fc;                              //br				IL_0255
	IL_02fc:            goto IL_02fe;                                               //br.s				IL_02fe
	IL_02fe:                                                                        //ldloc.0
	IL_02ff:                                                                        //ldloc.s				V_6
	IL_0301:            Temp_15=Root::T_x21::T_x2::M_x1(V_6);                       //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_0306:            V_0->AddRange(Temp_15);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_030b:                                                                        //ldloc.s				V_6
	IL_030d:            Temp_16=V_6->GenericMethod;                                 //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_0312:            V_7=Temp_16;                                                //stloc.s				V_7
	IL_0314:                                                                        //ldc.i4				0x7
	IL_0319:            V_12=7;                                                     //stloc				V_12
	IL_031d:            /*goto IL_0255;*/goto IL_0322;                              //br				IL_0255
	IL_0322:                                                                        //ldloc.s				V_7
	IL_0324:            if(V_7==nullptr)goto IL_03ad;                               //brfalse				IL_03ad
	IL_0329:                                                                        //ldc.i4				0x9
	IL_032e:            V_12=9;                                                     //stloc				V_12
	IL_0332:            /*goto IL_0255;*/goto IL_0337;                              //br				IL_0255
	IL_0337:            goto IL_0399;                                               //br.s				IL_0399
	IL_0339:                                                                        //ldc.i4				0x0
	IL_033e:            V_12=0;                                                     //stloc				V_12
	IL_0342:            /*goto IL_0255;*/goto IL_0347;                              //br				IL_0255
	IL_0347:                                                                        //ldloc.s				V_10
	IL_0349:            Temp_8=V_10->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_034e:            if(Temp_8)goto IL_03f9;                                     //brtrue				IL_03f9
	IL_0353:                                                                        //ldc.i4				0x5
	IL_0358:            V_12=5;                                                     //stloc				V_12
	IL_035c:            /*goto IL_0255;*/goto IL_0361;                              //br				IL_0255
	IL_0361:            goto IL_045d;                                               //br				IL_045d
	IL_0366:                                                                        //ldloc.s				V_4
	IL_0368:            Temp_17=V_4->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_036d:                                                                        //isinst				Reflector::CodeModel::IType
	IL_0372:            V_9=dynamic_cast<Reflector::CodeModel::IType^>(Temp_17);    //stloc.s				V_9
	IL_0374:                                                                        //ldc.i4				0x4
	IL_0379:            V_12=4;                                                     //stloc				V_12
	IL_037d:            /*goto IL_0255;*/goto IL_0382;                              //br				IL_0255
	IL_0382:                                                                        //ldloc.s				V_9
	IL_0384:            if(V_9==nullptr)goto IL_0339;                               //brfalse.s				IL_0339
	IL_0386:                                                                        //ldc.i4				0xe
	IL_038b:            V_12=14;                                                    //stloc				V_12
	IL_038f:            /*goto IL_0255;*/goto IL_0394;                              //br				IL_0255
	IL_0394:            goto IL_043d;                                               //br				IL_043d
	IL_0399:                                                                        //ldloc.s				V_7
	IL_039b:            V_6=V_7;                                                    //stloc.s				V_6
	IL_039d:                                                                        //ldc.i4				0x1
	IL_03a2:            V_12=1;                                                     //stloc				V_12
	IL_03a6:            /*goto IL_0255;*/goto IL_03ab;                              //br				IL_0255
	IL_03ab:            goto IL_03ad;                                               //br.s				IL_03ad
	IL_03ad:                                                                        //ldloc.s				V_6
	IL_03af:            Temp_11=safe_cast<Reflector::CodeModel::IMemberReference^>(V_6)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_03b4:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_03b9:            V_8=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_11);//stloc.s				V_8
	IL_03bb:                                                                        //ldc.i4				0x11
	IL_03c0:            V_12=17;                                                    //stloc				V_12
	IL_03c4:            /*goto IL_0255;*/goto IL_03c9;                              //br				IL_0255
	IL_03c9:                                                                        //ldloc.s				V_8
	IL_03cb:            if(V_8==nullptr)goto IL_0366;                               //brfalse.s				IL_0366
	IL_03cd:                                                                        //ldc.i4				0x10
	IL_03d2:            V_12=16;                                                    //stloc				V_12
	IL_03d6:            /*goto IL_0255;*/goto IL_03db;                              //br				IL_0255
	IL_03db:            goto IL_03dd;                                               //br.s				IL_03dd
	IL_03dd:                                                                        //ldloc.0
	IL_03de:                                                                        //ldloc.s				V_6
	IL_03e0:            Temp_19=V_0->Add(safe_cast<System::Object^>(V_6));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_03e5:                                                                        //pop
	IL_03e6:                                                                        //ldc.i4				0xc
	IL_03eb:            V_12=12;                                                    //stloc				V_12
	IL_03ef:            /*goto IL_0255;*/goto IL_03f4;                              //br				IL_0255
	IL_03f4:            goto IL_0366;                                               //br				IL_0366
	IL_03f9:                                                                        //ldloc.s				V_10
	IL_03fb:            Temp_9=V_10->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0400:                                                                        //castclass				Reflector::CodeModel::IInstruction
	IL_0405:            V_4=safe_cast<Reflector::CodeModel::IInstruction^>(Temp_9); //stloc.s				V_4
	IL_0407:                                                                        //ldloc.s				V_4
	IL_0409:            Temp_10=V_4->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_040e:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0413:            V_5=dynamic_cast<Reflector::CodeModel::IFieldReference^>(Temp_10);//stloc.s				V_5
	IL_0415:                                                                        //ldc.i4				0x3
	IL_041a:            V_12=3;                                                     //stloc				V_12
	IL_041e:            /*goto IL_0255;*/goto IL_0423;                              //br				IL_0255
	IL_0423:                                                                        //ldloc.s				V_5
	IL_0425:            if(V_5==nullptr)goto IL_02ce;                               //brfalse				IL_02ce
	IL_042a:                                                                        //ldc.i4				0x6
	IL_042f:            V_12=6;                                                     //stloc				V_12
	IL_0433:            /*goto IL_0255;*/goto IL_0438;                              //br				IL_0255
	IL_0438:            goto IL_02ab;                                               //br				IL_02ab
	IL_043d:                                                                        //ldloc.0
	IL_043e:                                                                        //ldloc.s				V_9
	IL_0440:            Temp_18=Root::T_x21::T_x2::M_x1(V_9);                       //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0445:            V_0->AddRange(Temp_18);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_044a:                                                                        //ldc.i4				0xd
	IL_044f:            V_12=13;                                                    //stloc				V_12
	IL_0453:            /*goto IL_0255;*/goto IL_0458;                              //br				IL_0255
	IL_0458:            goto IL_0339;                                               //br				IL_0339
	IL_045d:                                                                        //ldc.i4				0x2
	IL_0462:            V_12=2;                                                     //stloc				V_12
	IL_0466:            /*goto IL_0255;*/goto IL_046b;                              //br				IL_0255
	IL_046b:            goto IL_0501;                                               //leave				IL_0501
	                    ;}
	                    finally{
	IL_0470:            goto IL_0487;                                               //br.s				IL_0487
	IL_0472:                                                                        //ldloc				V_12
	IL_0476:            switch(V_12){case 0:goto IL_049b;case 1:goto IL_04aa;case 2:goto IL_04be;};//switch				(IL_049b,IL_04aa,IL_04be)
	IL_0487:                                                                        //ldloc.s				V_10
	IL_0489:                                                                        //isinst				System::IDisposable
	IL_048e:            V_11=dynamic_cast<System::IDisposable^>(V_10);              //stloc.s				V_11
	IL_0490:                                                                        //ldc.i4				0x0
	IL_0495:            V_12=0;                                                     //stloc				V_12
	IL_0499:            /*goto IL_0472;*/goto IL_049b;                              //br.s				IL_0472
	IL_049b:                                                                        //ldloc.s				V_11
	IL_049d:            if(V_11==nullptr)goto IL_04c0;                              //brfalse.s				IL_04c0
	IL_049f:                                                                        //ldc.i4				0x1
	IL_04a4:            V_12=1;                                                     //stloc				V_12
	IL_04a8:            /*goto IL_0472;*/goto IL_04aa;                              //br.s				IL_0472
	IL_04aa:            goto IL_04ac;                                               //br.s				IL_04ac
	IL_04ac:                                                                        //ldloc.s				V_11
	IL_04ae:            /*V_11->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_04b3:                                                                        //ldc.i4				0x2
	IL_04b8:            V_12=2;                                                     //stloc				V_12
	IL_04bc:            /*goto IL_0472;*/goto IL_04be;                              //br.s				IL_0472
	IL_04be:            goto IL_04c0;                                               //br.s				IL_04c0
	IL_04c0:                                                                        //endfinally
	                    ;}
	IL_04c1:                                                                        //ldloc.1
	IL_04c2:            Temp_24=V_1->LocalVariables;                                //callvirt				Reflector::CodeModel::IVariableDeclarationCollection^ Reflector::CodeModel::IMethodBody::get_LocalVariables()
	IL_04c7:            Temp_25=safe_cast<System::Collections::IEnumerable^>(Temp_24)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_04cc:            V_10=Temp_25;                                               //stloc.s				V_10
	IL_04ce:                                                                        //ldc.i4				0x1
	IL_04d3:            V_12=1;                                                     //stloc				V_12
	IL_04d7:            /*goto IL_0002;*/goto IL_04dc;                              //br				IL_0002
	IL_04dc:            /*goto IL_016f;*/goto IL_016E02;                            //br				IL_016f
	IL_04e1:                                                                        //ldloc.1
	IL_04e2:            Temp_28=V_1->ExceptionHandlers;                             //callvirt				Reflector::CodeModel::IExceptionHandlerCollection^ Reflector::CodeModel::IMethodBody::get_ExceptionHandlers()
	IL_04e7:            Temp_29=safe_cast<System::Collections::IEnumerable^>(Temp_28)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_04ec:            V_10=Temp_29;                                               //stloc.s				V_10
	IL_04ee:                                                                        //ldc.i4				0x3
	IL_04f3:            V_12=3;                                                     //stloc				V_12
	IL_04f7:            /*goto IL_0002;*/goto IL_04fc;                              //br				IL_0002
	IL_04fc:            /*goto IL_0096;*/goto IL_009101;                            //br				IL_0096
	IL_0501:                                                                        //ldloc.0
	IL_0502:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_6 = nullptr;
	System::Collections::IEnumerator^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	System::Collections::ICollection^ Temp_11 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_0026;                                               //br.s				IL_0026
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_4
	IL_0011:            switch(V_4){case 0:goto IL_0053;case 1:goto IL_0038;case 2:goto IL_016e;case 3:goto IL_0145;};//switch				(IL_0053,IL_0038,IL_016e,IL_0145)
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_002c:            V_0=Temp_0;                                                 //stloc.0
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_4=1;                                                      //stloc				V_4
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_4=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_003e:            Temp_5=Temp_4->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0043:            if(Temp_5==nullptr)goto IL_012b;                            //brfalse				IL_012b
	IL_0048:                                                                        //ldc.i4				0x0
	IL_004d:            V_4=0;                                                      //stloc				V_4
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_014a;                                               //br				IL_014a
	IL_005301:          try{
	IL_0058:                                                                        //ldc.i4				0x4
	IL_005d:            V_4=4;                                                      //stloc				V_4
	IL_0061:            /*goto IL_0065;*/goto IL_0063;                              //br.s				IL_0065
	IL_0063:            goto IL_0082;                                               //br.s				IL_0082
	IL_0065:                                                                        //ldloc				V_4
	IL_0069:            switch(V_4){case 0:goto IL_00d9;case 1:goto IL_00cc;case 2:goto IL_00ac;case 3:goto IL_00b9;case 4:goto IL_0063;};//switch				(IL_00d9,IL_00cc,IL_00ac,IL_00b9,IL_0063)
	IL_0082:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_0084:                                                                        //ldloc.2
	IL_0085:            Temp_9=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_008a:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_008f:            V_1=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_9);//stloc.1
	IL_0090:                                                                        //ldloc.0
	IL_0091:                                                                        //ldloc.1
	IL_0092:            Temp_10=V_1->ParameterType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0097:            Temp_11=Root::T_x21::T_x2::M_x1(Temp_10);                   //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_009c:            V_0->AddRange(Temp_11);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_00a1:                                                                        //ldc.i4				0x2
	IL_00a6:            V_4=2;                                                      //stloc				V_4
	IL_00aa:            /*goto IL_0065;*/goto IL_00ac;                              //br.s				IL_0065
	IL_00ac:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_00ae:                                                                        //ldc.i4				0x3
	IL_00b3:            V_4=3;                                                      //stloc				V_4
	IL_00b7:            /*goto IL_0065;*/goto IL_00b9;                              //br.s				IL_0065
	IL_00b9:                                                                        //ldloc.2
	IL_00ba:            Temp_8=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00bf:            if(Temp_8)goto IL_0084;                                     //brtrue.s				IL_0084
	IL_00c1:                                                                        //ldc.i4				0x1
	IL_00c6:            V_4=1;                                                      //stloc				V_4
	IL_00ca:            /*goto IL_0065;*/goto IL_00cc;                              //br.s				IL_0065
	IL_00cc:            goto IL_00ce;                                               //br.s				IL_00ce
	IL_00ce:                                                                        //ldc.i4				0x0
	IL_00d3:            V_4=0;                                                      //stloc				V_4
	IL_00d7:            /*goto IL_0065;*/goto IL_00d9;                              //br.s				IL_0065
	IL_00d9:            goto IL_0170;                                               //leave				IL_0170
	                    ;}
	                    finally{
	IL_00de:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_00e0:                                                                        //ldloc				V_4
	IL_00e4:            switch(V_4){case 0:goto IL_0115;case 1:goto IL_0107;case 2:goto IL_0128;};//switch				(IL_0115,IL_0107,IL_0128)
	IL_00f5:                                                                        //ldloc.2
	IL_00f6:                                                                        //isinst				System::IDisposable
	IL_00fb:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00fc:                                                                        //ldc.i4				0x1
	IL_0101:            V_4=1;                                                      //stloc				V_4
	IL_0105:            /*goto IL_00e0;*/goto IL_0107;                              //br.s				IL_00e0
	IL_0107:                                                                        //ldloc.3
	IL_0108:            if(V_3==nullptr)goto IL_012a;                               //brfalse.s				IL_012a
	IL_010a:                                                                        //ldc.i4				0x0
	IL_010f:            V_4=0;                                                      //stloc				V_4
	IL_0113:            /*goto IL_00e0;*/goto IL_0115;                              //br.s				IL_00e0
	IL_0115:            goto IL_0117;                                               //br.s				IL_0117
	IL_0117:                                                                        //ldloc.3
	IL_0118:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_011d:                                                                        //ldc.i4				0x2
	IL_0122:            V_4=2;                                                      //stloc				V_4
	IL_0126:            /*goto IL_00e0;*/goto IL_0128;                              //br.s				IL_00e0
	IL_0128:            goto IL_012a;                                               //br.s				IL_012a
	IL_012a:                                                                        //endfinally
	                    ;}
	IL_012b:                                                                        //ldarg.0
	IL_012c:            Temp_6=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0131:            Temp_7=safe_cast<System::Collections::IEnumerable^>(Temp_6)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0136:            V_2=Temp_7;                                                 //stloc.2
	IL_0137:                                                                        //ldc.i4				0x3
	IL_013c:            V_4=3;                                                      //stloc				V_4
	IL_0140:            /*goto IL_0002;*/goto IL_0145;                              //br				IL_0002
	IL_0145:            /*goto IL_0058;*/goto IL_005301;                            //br				IL_0058
	IL_014a:                                                                        //ldloc.0
	IL_014b:                                                                        //ldarg.0
	IL_014c:            Temp_1=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0151:            Temp_2=Temp_1->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0156:            Temp_3=Root::T_x21::T_x2::M_x1(Temp_2);                     //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_015b:            V_0->AddRange(Temp_3);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0160:                                                                        //ldc.i4				0x2
	IL_0165:            V_4=2;                                                      //stloc				V_4
	IL_0169:            /*goto IL_0002;*/goto IL_016e;                              //br				IL_0002
	IL_016e:            goto IL_012b;                                               //br.s				IL_012b
	IL_0170:                                                                        //ldloc.0
	IL_0171:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Collections::ICollection^ Temp_5 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_6 = nullptr;
	System::Collections::ICollection^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	System::Collections::ICollection^ Temp_10 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_11 = nullptr;
	System::Collections::ICollection^ Temp_12 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_15 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_16 = nullptr;
	Reflector::CodeModel::IType^ Temp_17 = nullptr;
	System::Collections::ICollection^ Temp_18 = nullptr;
	Reflector::CodeModel::IType^ Temp_19 = nullptr;
	System::Collections::ICollection^ Temp_20 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_21 = nullptr;
	Reflector::CodeModel::IType^ Temp_22 = nullptr;
	System::Collections::ICollection^ Temp_23 = nullptr;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	System::Collections::ICollection^ Temp_25 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::IArrayType^ V_3 = nullptr;
	Reflector::CodeModel::IPointerType^ V_4 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_5 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_6 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_7 = nullptr;
	Reflector::CodeModel::IFunctionPointer^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:            goto IL_0077;                                               //br.s				IL_0077
	IL_0002:                                                                        //ldloc				V_10
	IL_0006:            switch(V_10){case 0:goto IL_00ef;case 1:goto IL_02ef;case 2:goto IL_00a4;case 3:goto IL_0093;case 4:goto IL_038b;case 5:goto IL_02c7;case 6:goto IL_032f;case 7:goto IL_030a;case 8:goto IL_0101;case 9:goto IL_0233;case 10:goto IL_0297;case 11:goto IL_01fa;case 12:goto IL_01df;case 13:goto IL_02de;case 14:goto IL_02b2;case 15:goto IL_00d4;case 16:goto IL_0276;case 17:goto IL_015c;case 18:goto IL_01a8;case 19:goto IL_011b;case 20:goto IL_012f;case 21:goto IL_024b;case 22:goto IL_0354;case 23:goto IL_00bf;case 24:goto IL_0260;case 25:goto IL_020f;case 26:goto IL_0171;};//switch				(IL_00ef,IL_02ef,IL_00a4,IL_0093,IL_038b,IL_02c7,IL_032f,IL_030a,IL_0101,IL_0233,IL_0297,IL_01fa,IL_01df,IL_02de,IL_02b2,IL_00d4,IL_0276,IL_015c,IL_01a8,IL_011b,IL_012f,IL_024b,IL_0354,IL_00bf,IL_0260,IL_020f,IL_0171)
	IL_0077:                                                                        //ldc.i4.0
	IL_0078:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_007d:            V_0=Temp_0;                                                 //stloc.0
	IL_007e:                                                                        //ldarg.0
	IL_007f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0084:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.1
	IL_0085:                                                                        //ldc.i4				0x3
	IL_008a:            V_10=3;                                                     //stloc				V_10
	IL_008e:            /*goto IL_0002;*/goto IL_0093;                              //br				IL_0002
	IL_0093:                                                                        //ldloc.1
	IL_0094:            if(V_1==nullptr)goto IL_0106;                               //brfalse.s				IL_0106
	IL_0096:                                                                        //ldc.i4				0x2
	IL_009b:            V_10=2;                                                     //stloc				V_10
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:            goto IL_02c9;                                               //br				IL_02c9
	IL_00a9:                                                                        //ldarg.0
	IL_00aa:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_00af:            V_7=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_7
	IL_00b1:                                                                        //ldc.i4				0x17
	IL_00b6:            V_10=23;                                                    //stloc				V_10
	IL_00ba:            /*goto IL_0002;*/goto IL_00bf;                              //br				IL_0002
	IL_00bf:                                                                        //ldloc.s				V_7
	IL_00c1:            if(V_7==nullptr)goto IL_0235;                               //brfalse				IL_0235
	IL_00c6:                                                                        //ldc.i4				0xf
	IL_00cb:            V_10=15;                                                    //stloc				V_10
	IL_00cf:            /*goto IL_0002;*/goto IL_00d4;                              //br				IL_0002
	IL_00d4:            goto IL_0176;                                               //br				IL_0176
	IL_00d9:                                                                        //ldarg.0
	IL_00da:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_00df:            V_6=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_6
	IL_00e1:                                                                        //ldc.i4				0x0
	IL_00e6:            V_10=0;                                                     //stloc				V_10
	IL_00ea:            /*goto IL_0002;*/goto IL_00ef;                              //br				IL_0002
	IL_00ef:                                                                        //ldloc.s				V_6
	IL_00f1:            if(V_6==nullptr)goto IL_00a9;                               //brfalse.s				IL_00a9
	IL_00f3:                                                                        //ldc.i4				0x8
	IL_00f8:            V_10=8;                                                     //stloc				V_10
	IL_00fc:            /*goto IL_0002;*/goto IL_0101;                              //br				IL_0002
	IL_0101:            goto IL_0359;                                               //br				IL_0359
	IL_0106:                                                                        //ldarg.0
	IL_0107:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_010c:            V_3=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.3
	IL_010d:                                                                        //ldc.i4				0x13
	IL_0112:            V_10=19;                                                    //stloc				V_10
	IL_0116:            /*goto IL_0002;*/goto IL_011b;                              //br				IL_0002
	IL_011b:                                                                        //ldloc.3
	IL_011c:            if(V_3==nullptr)goto IL_029c;                               //brfalse				IL_029c
	IL_0121:                                                                        //ldc.i4				0x14
	IL_0126:            V_10=20;                                                    //stloc				V_10
	IL_012a:            /*goto IL_0002;*/goto IL_012f;                              //br				IL_0002
	IL_012f:            goto IL_0214;                                               //br				IL_0214
	IL_0134:                                                                        //ldloc.0
	IL_0135:                                                                        //ldloc.s				V_8
	IL_0137:            Temp_21=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_8)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_013c:            Temp_22=Temp_21->Type;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0141:            Temp_23=Root::T_x21::T_x2::M_x1(Temp_22);                   //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0146:            V_0->AddRange(Temp_23);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_014b:                                                                        //ldc.i4.0
	IL_014c:            V_9=0;                                                      //stloc.s				V_9
	IL_014e:                                                                        //ldc.i4				0x11
	IL_0153:            V_10=17;                                                    //stloc				V_10
	IL_0157:            /*goto IL_0002;*/goto IL_015c;                              //br				IL_0002
	IL_015c:            goto IL_0265;                                               //br				IL_0265
	IL_0161:                                                                        //ldloc.2
	IL_0162:            V_1=V_2;                                                    //stloc.1
	IL_0163:                                                                        //ldc.i4				0x1a
	IL_0168:            V_10=26;                                                    //stloc				V_10
	IL_016c:            /*goto IL_0002;*/goto IL_0171;                              //br				IL_0002
	IL_0171:            goto IL_02f4;                                               //br				IL_02f4
	IL_0176:                                                                        //ldloc.0
	IL_0177:                                                                        //ldloc.s				V_7
	IL_0179:            Temp_9=V_7->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_017e:            Temp_10=Root::T_x21::T_x2::M_x1(Temp_9);                    //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0183:            V_0->AddRange(Temp_10);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0188:                                                                        //ldloc.0
	IL_0189:                                                                        //ldloc.s				V_7
	IL_018b:            Temp_11=V_7->Modifier;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_0190:            Temp_12=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_11));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0195:            V_0->AddRange(Temp_12);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_019a:                                                                        //ldc.i4				0x12
	IL_019f:            V_10=18;                                                    //stloc				V_10
	IL_01a3:            /*goto IL_0002;*/goto IL_01a8;                              //br				IL_0002
	IL_01a8:            goto IL_0235;                                               //br				IL_0235
	IL_01ad:                                                                        //ldloc.0
	IL_01ae:                                                                        //ldloc.s				V_8
	IL_01b0:            Temp_15=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_8)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_01b5:                                                                        //ldloc.s				V_9
	IL_01b7:            Temp_16=Temp_15[V_9];                                       //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_01bc:            Temp_17=Temp_16->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_01c1:            Temp_18=Root::T_x21::T_x2::M_x1(Temp_17);                   //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_01c6:            V_0->AddRange(Temp_18);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_01cb:                                                                        //ldloc.s				V_9
	IL_01cd:                                                                        //ldc.i4.1
	IL_01ce:                                                                        //add
	IL_01cf:            V_9=(V_9 + 1);                                              //stloc.s				V_9
	IL_01d1:                                                                        //ldc.i4				0xc
	IL_01d6:            V_10=12;                                                    //stloc				V_10
	IL_01da:            /*goto IL_0002;*/goto IL_01df;                              //br				IL_0002
	IL_01df:            goto IL_0265;                                               //br				IL_0265
	IL_01e4:                                                                        //ldarg.0
	IL_01e5:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_01ea:            V_5=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.s				V_5
	IL_01ec:                                                                        //ldc.i4				0xb
	IL_01f1:            V_10=11;                                                    //stloc				V_10
	IL_01f5:            /*goto IL_0002;*/goto IL_01fa;                              //br				IL_0002
	IL_01fa:                                                                        //ldloc.s				V_5
	IL_01fc:            if(V_5==nullptr)goto IL_00d9;                               //brfalse				IL_00d9
	IL_0201:                                                                        //ldc.i4				0x19
	IL_0206:            V_10=25;                                                    //stloc				V_10
	IL_020a:            /*goto IL_0002;*/goto IL_020f;                              //br				IL_0002
	IL_020f:            goto IL_0334;                                               //br				IL_0334
	IL_0214:                                                                        //ldloc.0
	IL_0215:                                                                        //ldloc.3
	IL_0216:            Temp_19=V_3->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_021b:            Temp_20=Root::T_x21::T_x2::M_x1(Temp_19);                   //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0220:            V_0->AddRange(Temp_20);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0225:                                                                        //ldc.i4				0x9
	IL_022a:            V_10=9;                                                     //stloc				V_10
	IL_022e:            /*goto IL_0002;*/goto IL_0233;                              //br				IL_0002
	IL_0233:            goto IL_029c;                                               //br.s				IL_029c
	IL_0235:                                                                        //ldarg.0
	IL_0236:                                                                        //isinst				Reflector::CodeModel::IFunctionPointer
	IL_023b:            V_8=dynamic_cast<Reflector::CodeModel::IFunctionPointer^>(A_0);//stloc.s				V_8
	IL_023d:                                                                        //ldc.i4				0x15
	IL_0242:            V_10=21;                                                    //stloc				V_10
	IL_0246:            /*goto IL_0002;*/goto IL_024b;                              //br				IL_0002
	IL_024b:                                                                        //ldloc.s				V_8
	IL_024d:            if(V_8==nullptr)goto IL_0390;                               //brfalse				IL_0390
	IL_0252:                                                                        //ldc.i4				0x18
	IL_0257:            V_10=24;                                                    //stloc				V_10
	IL_025b:            /*goto IL_0002;*/goto IL_0260;                              //br				IL_0002
	IL_0260:            goto IL_0134;                                               //br				IL_0134
	IL_0265:            goto IL_0268;                                               //br.s				IL_0268
	IL_0267:                                                                        //break
	IL_0268:                                                                        //ldc.i4				0x10
	IL_026d:            V_10=16;                                                    //stloc				V_10
	IL_0271:            /*goto IL_0002;*/goto IL_0276;                              //br				IL_0002
	IL_0276:                                                                        //ldloc.s				V_9
	IL_0278:                                                                        //ldloc.s				V_8
	IL_027a:            Temp_13=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_8)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_027f:            Temp_14=safe_cast<System::Collections::ICollection^>(Temp_13)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0284:            if(V_9<Temp_14)goto IL_01ad;                                //blt				IL_01ad
	IL_0289:                                                                        //ldc.i4				0xa
	IL_028e:            V_10=10;                                                    //stloc				V_10
	IL_0292:            /*goto IL_0002;*/goto IL_0297;                              //br				IL_0002
	IL_0297:            goto IL_0390;                                               //br				IL_0390
	IL_029c:                                                                        //ldarg.0
	IL_029d:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_02a2:            V_4=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.s				V_4
	IL_02a4:                                                                        //ldc.i4				0xe
	IL_02a9:            V_10=14;                                                    //stloc				V_10
	IL_02ad:            /*goto IL_0002;*/goto IL_02b2;                              //br				IL_0002
	IL_02b2:                                                                        //ldloc.s				V_4
	IL_02b4:            if(V_4==nullptr)goto IL_01e4;                               //brfalse				IL_01e4
	IL_02b9:                                                                        //ldc.i4				0x5
	IL_02be:            V_10=5;                                                     //stloc				V_10
	IL_02c2:            /*goto IL_0002;*/goto IL_02c7;                              //br				IL_0002
	IL_02c7:            goto IL_030f;                                               //br.s				IL_030f
	IL_02c9:                                                                        //ldloc.1
	IL_02ca:            Temp_1=V_1->GenericType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReference::get_GenericType()
	IL_02cf:            V_2=Temp_1;                                                 //stloc.2
	IL_02d0:                                                                        //ldc.i4				0xd
	IL_02d5:            V_10=13;                                                    //stloc				V_10
	IL_02d9:            /*goto IL_0002;*/goto IL_02de;                              //br				IL_0002
	IL_02de:                                                                        //ldloc.2
	IL_02df:            if(V_2==nullptr)goto IL_02f4;                               //brfalse.s				IL_02f4
	IL_02e1:                                                                        //ldc.i4				0x1
	IL_02e6:            V_10=1;                                                     //stloc				V_10
	IL_02ea:            /*goto IL_0002;*/goto IL_02ef;                              //br				IL_0002
	IL_02ef:            goto IL_0161;                                               //br				IL_0161
	IL_02f4:                                                                        //ldloc.0
	IL_02f5:                                                                        //ldloc.1
	IL_02f6:            Temp_8=V_0->Add(safe_cast<System::Object^>(V_1));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_02fb:                                                                        //pop
	IL_02fc:                                                                        //ldc.i4				0x7
	IL_0301:            V_10=7;                                                     //stloc				V_10
	IL_0305:            /*goto IL_0002;*/goto IL_030a;                              //br				IL_0002
	IL_030a:            goto IL_0106;                                               //br				IL_0106
	IL_030f:                                                                        //ldloc.0
	IL_0310:                                                                        //ldloc.s				V_4
	IL_0312:            Temp_2=V_4->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0317:            Temp_3=Root::T_x21::T_x2::M_x1(Temp_2);                     //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_031c:            V_0->AddRange(Temp_3);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0321:                                                                        //ldc.i4				0x6
	IL_0326:            V_10=6;                                                     //stloc				V_10
	IL_032a:            /*goto IL_0002;*/goto IL_032f;                              //br				IL_0002
	IL_032f:            goto IL_01e4;                                               //br				IL_01e4
	IL_0334:                                                                        //ldloc.0
	IL_0335:                                                                        //ldloc.s				V_5
	IL_0337:            Temp_24=V_5->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_033c:            Temp_25=Root::T_x21::T_x2::M_x1(Temp_24);                   //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0341:            V_0->AddRange(Temp_25);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0346:                                                                        //ldc.i4				0x16
	IL_034b:            V_10=22;                                                    //stloc				V_10
	IL_034f:            /*goto IL_0002;*/goto IL_0354;                              //br				IL_0002
	IL_0354:            goto IL_00d9;                                               //br				IL_00d9
	IL_0359:                                                                        //ldloc.0
	IL_035a:                                                                        //ldloc.s				V_6
	IL_035c:            Temp_4=V_6->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_0361:            Temp_5=Root::T_x21::T_x2::M_x1(Temp_4);                     //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0366:            V_0->AddRange(Temp_5);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_036b:                                                                        //ldloc.0
	IL_036c:                                                                        //ldloc.s				V_6
	IL_036e:            Temp_6=V_6->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_0373:            Temp_7=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_6));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0378:            V_0->AddRange(Temp_7);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_037d:                                                                        //ldc.i4				0x4
	IL_0382:            V_10=4;                                                     //stloc				V_10
	IL_0386:            /*goto IL_0002;*/goto IL_038b;                              //br				IL_0002
	IL_038b:            goto IL_00a9;                                               //br				IL_00a9
	IL_0390:                                                                        //ldloc.0
	IL_0391:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::ICollection^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	System::Collections::ICollection^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	System::Collections::ICollection^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::Object^ Temp_12 = nullptr;
	System::Collections::ICollection^ Temp_13 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_14 = nullptr;
	System::Collections::ICollection^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	System::Object^ Temp_17 = nullptr;
	System::Collections::ICollection^ Temp_18 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_19 = nullptr;
	System::Collections::IEnumerator^ Temp_20 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_21 = nullptr;
	System::Collections::IEnumerator^ Temp_22 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_23 = nullptr;
	System::Collections::IEnumerator^ Temp_24 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0045;case 1:goto IL_0459;case 2:goto IL_03f5;case 3:goto IL_0415;case 4:goto IL_005b;case 5:goto IL_0230;case 6:goto IL_0439;};//switch				(IL_0045,IL_0459,IL_03f5,IL_0415,IL_005b,IL_0230,IL_0439)
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_002d:            V_0=Temp_0;                                                 //stloc.0
	IL_002e:                                                                        //ldloc.0
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_1=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_0035:            V_0->AddRange(Temp_1);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_7=0;                                                      //stloc				V_7
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_2=A_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_004b:            if(Temp_2==nullptr)goto IL_0215;                            //brfalse				IL_0215
	IL_0050:                                                                        //ldc.i4				0x4
	IL_0055:            V_7=4;                                                      //stloc				V_7
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_041a;                                               //br				IL_041a
	IL_005B01:          try{
	IL_0060:                                                                        //ldc.i4				0x2
	IL_0065:            V_7=2;                                                      //stloc				V_7
	IL_0069:            /*goto IL_006d;*/goto IL_006b;                              //br.s				IL_006d
	IL_006b:            goto IL_008a;                                               //br.s				IL_008a
	IL_006d:                                                                        //ldloc				V_7
	IL_0071:            switch(V_7){case 0:goto IL_00b0;case 1:goto IL_00de;case 2:goto IL_006b;case 3:goto IL_00bd;case 4:goto IL_00d1;};//switch				(IL_00b0,IL_00de,IL_006b,IL_00bd,IL_00d1)
	IL_008a:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_008c:                                                                        //ldloc.s				V_5
	IL_008e:            Temp_17=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0093:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_0098:            V_1=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_17);//stloc.1
	IL_0099:                                                                        //ldloc.0
	IL_009a:                                                                        //ldloc.1
	IL_009b:            Temp_18=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_1));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_00a0:            V_0->AddRange(Temp_18);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_00a5:                                                                        //ldc.i4				0x0
	IL_00aa:            V_7=0;                                                      //stloc				V_7
	IL_00ae:            /*goto IL_006d;*/goto IL_00b0;                              //br.s				IL_006d
	IL_00b0:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_00b2:                                                                        //ldc.i4				0x3
	IL_00b7:            V_7=3;                                                      //stloc				V_7
	IL_00bb:            /*goto IL_006d;*/goto IL_00bd;                              //br.s				IL_006d
	IL_00bd:                                                                        //ldloc.s				V_5
	IL_00bf:            Temp_16=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00c4:            if(Temp_16)goto IL_008c;                                    //brtrue.s				IL_008c
	IL_00c6:                                                                        //ldc.i4				0x4
	IL_00cb:            V_7=4;                                                      //stloc				V_7
	IL_00cf:            /*goto IL_006d;*/goto IL_00d1;                              //br.s				IL_006d
	IL_00d1:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_00d3:                                                                        //ldc.i4				0x1
	IL_00d8:            V_7=1;                                                      //stloc				V_7
	IL_00dc:            /*goto IL_006d;*/goto IL_00de;                              //br.s				IL_006d
	IL_00de:            goto IL_043e;                                               //leave				IL_043e
	                    ;}
	                    finally{
	IL_00e3:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00e5:                                                                        //ldloc				V_7
	IL_00e9:            switch(V_7){case 0:goto IL_013c;case 1:goto IL_0128;case 2:goto IL_0119;};//switch				(IL_013c,IL_0128,IL_0119)
	IL_00fa:                                                                        //ldc.i4.2
	IL_00fb:                                                                        //dup
	IL_00fc:                                                                        //dup
	IL_00fd:                                                                        //ldc.i4.4
	IL_00fe:                                                                        //sub
	IL_00ff:                                                                        //blt				IL_00fb
	IL_0104:                                                                        //pop
	IL_0105:                                                                        //ldloc.s				V_5
	IL_0107:                                                                        //isinst				System::IDisposable
	IL_010c:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_010e:                                                                        //ldc.i4				0x2
	IL_0113:            V_7=2;                                                      //stloc				V_7
	IL_0117:            /*goto IL_00e5;*/goto IL_0119;                              //br.s				IL_00e5
	IL_0119:                                                                        //ldloc.s				V_6
	IL_011b:            if(V_6==nullptr)goto IL_013e;                               //brfalse.s				IL_013e
	IL_011d:                                                                        //ldc.i4				0x1
	IL_0122:            V_7=1;                                                      //stloc				V_7
	IL_0126:            /*goto IL_00e5;*/goto IL_0128;                              //br.s				IL_00e5
	IL_0128:            goto IL_012a;                                               //br.s				IL_012a
	IL_012a:                                                                        //ldloc.s				V_6
	IL_012c:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0131:                                                                        //ldc.i4				0x0
	IL_0136:            V_7=0;                                                      //stloc				V_7
	IL_013a:            /*goto IL_00e5;*/goto IL_013c;                              //br.s				IL_00e5
	IL_013c:            goto IL_013e;                                               //br.s				IL_013e
	IL_013e:                                                                        //endfinally
	                    ;}
	IL_013E02:          try{
	IL_013f:                                                                        //ldc.i4				0x3
	IL_0144:            V_7=3;                                                      //stloc				V_7
	IL_0148:            /*goto IL_014c;*/goto IL_014a;                              //br.s				IL_014c
	IL_014a:            goto IL_0169;                                               //br.s				IL_0169
	IL_014c:                                                                        //ldloc				V_7
	IL_0150:            switch(V_7){case 0:goto IL_01bf;case 1:goto IL_01b2;case 2:goto IL_019e;case 3:goto IL_014a;case 4:goto IL_0191;};//switch				(IL_01bf,IL_01b2,IL_019e,IL_014a,IL_0191)
	IL_0169:            goto IL_0193;                                               //br.s				IL_0193
	IL_016b:                                                                        //ldloc.s				V_5
	IL_016d:            Temp_9=V_5->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0172:                                                                        //castclass				Reflector::CodeModel::IFieldDeclaration
	IL_0177:            V_4=safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_9);//stloc.s				V_4
	IL_0179:                                                                        //ldloc.0
	IL_017a:                                                                        //ldloc.s				V_4
	IL_017c:            Temp_10=Root::T_x21::T_x2::M_x1(V_4);                       //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_0181:            V_0->AddRange(Temp_10);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0186:                                                                        //ldc.i4				0x4
	IL_018b:            V_7=4;                                                      //stloc				V_7
	IL_018f:            /*goto IL_014c;*/goto IL_0191;                              //br.s				IL_014c
	IL_0191:            goto IL_0193;                                               //br.s				IL_0193
	IL_0193:                                                                        //ldc.i4				0x2
	IL_0198:            V_7=2;                                                      //stloc				V_7
	IL_019c:            /*goto IL_014c;*/goto IL_019e;                              //br.s				IL_014c
	IL_019e:                                                                        //ldloc.s				V_5
	IL_01a0:            Temp_8=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_01a5:            if(Temp_8)goto IL_016b;                                     //brtrue.s				IL_016b
	IL_01a7:                                                                        //ldc.i4				0x1
	IL_01ac:            V_7=1;                                                      //stloc				V_7
	IL_01b0:            /*goto IL_014c;*/goto IL_01b2;                              //br.s				IL_014c
	IL_01b2:            goto IL_01b4;                                               //br.s				IL_01b4
	IL_01b4:                                                                        //ldc.i4				0x0
	IL_01b9:            V_7=0;                                                      //stloc				V_7
	IL_01bd:            /*goto IL_014c;*/goto IL_01bf;                              //br.s				IL_014c
	IL_01bf:            goto IL_045e;                                               //leave				IL_045e
	                    ;}
	                    finally{
	IL_01c4:            goto IL_01db;                                               //br.s				IL_01db
	IL_01c6:                                                                        //ldloc				V_7
	IL_01ca:            switch(V_7){case 0:goto IL_01fe;case 1:goto IL_01ef;case 2:goto IL_0212;};//switch				(IL_01fe,IL_01ef,IL_0212)
	IL_01db:                                                                        //ldloc.s				V_5
	IL_01dd:                                                                        //isinst				System::IDisposable
	IL_01e2:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_01e4:                                                                        //ldc.i4				0x1
	IL_01e9:            V_7=1;                                                      //stloc				V_7
	IL_01ed:            /*goto IL_01c6;*/goto IL_01ef;                              //br.s				IL_01c6
	IL_01ef:                                                                        //ldloc.s				V_6
	IL_01f1:            if(V_6==nullptr)goto IL_0214;                               //brfalse.s				IL_0214
	IL_01f3:                                                                        //ldc.i4				0x0
	IL_01f8:            V_7=0;                                                      //stloc				V_7
	IL_01fc:            /*goto IL_01c6;*/goto IL_01fe;                              //br.s				IL_01c6
	IL_01fe:            goto IL_0200;                                               //br.s				IL_0200
	IL_0200:                                                                        //ldloc.s				V_6
	IL_0202:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0207:                                                                        //ldc.i4				0x2
	IL_020c:            V_7=2;                                                      //stloc				V_7
	IL_0210:            /*goto IL_01c6;*/goto IL_0212;                              //br.s				IL_01c6
	IL_0212:            goto IL_0214;                                               //br.s				IL_0214
	IL_0214:                                                                        //endfinally
	                    ;}
	IL_0215:                                                                        //ldarg.0
	IL_0216:            Temp_3=A_0->Interfaces;                                     //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_021b:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0220:            V_5=Temp_4;                                                 //stloc.s				V_5
	IL_0222:                                                                        //ldc.i4				0x5
	IL_0227:            V_7=5;                                                      //stloc				V_7
	IL_022b:            /*goto IL_0002;*/goto IL_0230;                              //br				IL_0002
	IL_0230:            /*goto IL_0060;*/goto IL_005B01;                            //br				IL_0060
	IL_023001:          try{
	IL_0235:                                                                        //ldc.i4				0x0
	IL_023a:            V_7=0;                                                      //stloc				V_7
	IL_023e:            /*goto IL_0242;*/goto IL_0240;                              //br.s				IL_0242
	IL_0240:            goto IL_025f;                                               //br.s				IL_025f
	IL_0242:                                                                        //ldloc				V_7
	IL_0246:            switch(V_7){case 0:goto IL_0240;case 1:goto IL_026c;case 2:goto IL_0280;case 3:goto IL_02b3;case 4:goto IL_02a6;};//switch				(IL_0240,IL_026c,IL_0280,IL_02b3,IL_02a6)
	IL_025f:            goto IL_0261;                                               //br.s				IL_0261
	IL_0261:                                                                        //ldc.i4				0x1
	IL_0266:            V_7=1;                                                      //stloc				V_7
	IL_026a:            /*goto IL_0242;*/goto IL_026c;                              //br.s				IL_0242
	IL_026c:                                                                        //ldloc.s				V_5
	IL_026e:            Temp_11=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0273:            if(Temp_11)goto IL_0282;                                    //brtrue.s				IL_0282
	IL_0275:                                                                        //ldc.i4				0x2
	IL_027a:            V_7=2;                                                      //stloc				V_7
	IL_027e:            /*goto IL_0242;*/goto IL_0280;                              //br.s				IL_0242
	IL_0280:            goto IL_02a8;                                               //br.s				IL_02a8
	IL_0282:                                                                        //ldloc.s				V_5
	IL_0284:            Temp_12=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0289:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_028e:            V_3=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_12);//stloc.3
	IL_028f:                                                                        //ldloc.0
	IL_0290:                                                                        //ldloc.3
	IL_0291:            Temp_13=Root::T_x21::T_x2::M_x1(V_3);                       //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0296:            V_0->AddRange(Temp_13);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_029b:                                                                        //ldc.i4				0x4
	IL_02a0:            V_7=4;                                                      //stloc				V_7
	IL_02a4:            /*goto IL_0242;*/goto IL_02a6;                              //br.s				IL_0242
	IL_02a6:            goto IL_0261;                                               //br.s				IL_0261
	IL_02a8:                                                                        //ldc.i4				0x3
	IL_02ad:            V_7=3;                                                      //stloc				V_7
	IL_02b1:            /*goto IL_0242;*/goto IL_02b3;                              //br.s				IL_0242
	IL_02b3:            goto IL_03da;                                               //leave				IL_03da
	                    ;}
	                    finally{
	IL_02b8:            goto IL_02cf;                                               //br.s				IL_02cf
	IL_02ba:                                                                        //ldloc				V_7
	IL_02be:            switch(V_7){case 0:goto IL_0306;case 1:goto IL_02e3;case 2:goto IL_02f2;};//switch				(IL_0306,IL_02e3,IL_02f2)
	IL_02cf:                                                                        //ldloc.s				V_5
	IL_02d1:                                                                        //isinst				System::IDisposable
	IL_02d6:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_02d8:                                                                        //ldc.i4				0x1
	IL_02dd:            V_7=1;                                                      //stloc				V_7
	IL_02e1:            /*goto IL_02ba;*/goto IL_02e3;                              //br.s				IL_02ba
	IL_02e3:                                                                        //ldloc.s				V_6
	IL_02e5:            if(V_6==nullptr)goto IL_0308;                               //brfalse.s				IL_0308
	IL_02e7:                                                                        //ldc.i4				0x2
	IL_02ec:            V_7=2;                                                      //stloc				V_7
	IL_02f0:            /*goto IL_02ba;*/goto IL_02f2;                              //br.s				IL_02ba
	IL_02f2:            goto IL_02f4;                                               //br.s				IL_02f4
	IL_02f4:                                                                        //ldloc.s				V_6
	IL_02f6:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_02fb:                                                                        //ldc.i4				0x0
	IL_0300:            V_7=0;                                                      //stloc				V_7
	IL_0304:            /*goto IL_02ba;*/goto IL_0306;                              //br.s				IL_02ba
	IL_0306:            goto IL_0308;                                               //br.s				IL_0308
	IL_0308:                                                                        //endfinally
	                    ;}
	IL_030802:          try{
	IL_0309:                                                                        //ldc.i4				0x0
	IL_030e:            V_7=0;                                                      //stloc				V_7
	IL_0312:            /*goto IL_0316;*/goto IL_0314;                              //br.s				IL_0316
	IL_0314:            goto IL_0333;                                               //br.s				IL_0333
	IL_0316:                                                                        //ldloc				V_7
	IL_031a:            switch(V_7){case 0:goto IL_0314;case 1:goto IL_0359;case 2:goto IL_037a;case 3:goto IL_0387;case 4:goto IL_0366;};//switch				(IL_0314,IL_0359,IL_037a,IL_0387,IL_0366)
	IL_0333:            goto IL_035b;                                               //br.s				IL_035b
	IL_0335:                                                                        //ldloc.s				V_5
	IL_0337:            Temp_6=V_5->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_033c:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0341:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_6);//stloc.2
	IL_0342:                                                                        //ldloc.0
	IL_0343:                                                                        //ldloc.2
	IL_0344:            Temp_7=Root::T_x21::T_x2::M_x1(V_2);                        //call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0349:            V_0->AddRange(Temp_7);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_034e:                                                                        //ldc.i4				0x1
	IL_0353:            V_7=1;                                                      //stloc				V_7
	IL_0357:            /*goto IL_0316;*/goto IL_0359;                              //br.s				IL_0316
	IL_0359:            goto IL_035b;                                               //br.s				IL_035b
	IL_035b:                                                                        //ldc.i4				0x4
	IL_0360:            V_7=4;                                                      //stloc				V_7
	IL_0364:            /*goto IL_0316;*/goto IL_0366;                              //br.s				IL_0316
	IL_0366:                                                                        //ldloc.s				V_5
	IL_0368:            Temp_5=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_036d:            if(Temp_5)goto IL_0335;                                     //brtrue.s				IL_0335
	IL_036f:                                                                        //ldc.i4				0x2
	IL_0374:            V_7=2;                                                      //stloc				V_7
	IL_0378:            /*goto IL_0316;*/goto IL_037a;                              //br.s				IL_0316
	IL_037a:            goto IL_037c;                                               //br.s				IL_037c
	IL_037c:                                                                        //ldc.i4				0x3
	IL_0381:            V_7=3;                                                      //stloc				V_7
	IL_0385:            /*goto IL_0316;*/goto IL_0387;                              //br.s				IL_0316
	IL_0387:            goto IL_03fa;                                               //leave.s				IL_03fa
	                    ;}
	                    finally{
	IL_0389:            goto IL_03a0;                                               //br.s				IL_03a0
	IL_038b:                                                                        //ldloc				V_7
	IL_038f:            switch(V_7){case 0:goto IL_03d7;case 1:goto IL_03c3;case 2:goto IL_03b4;};//switch				(IL_03d7,IL_03c3,IL_03b4)
	IL_03a0:                                                                        //ldloc.s				V_5
	IL_03a2:                                                                        //isinst				System::IDisposable
	IL_03a7:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_03a9:                                                                        //ldc.i4				0x2
	IL_03ae:            V_7=2;                                                      //stloc				V_7
	IL_03b2:            /*goto IL_038b;*/goto IL_03b4;                              //br.s				IL_038b
	IL_03b4:                                                                        //ldloc.s				V_6
	IL_03b6:            if(V_6==nullptr)goto IL_03d9;                               //brfalse.s				IL_03d9
	IL_03b8:                                                                        //ldc.i4				0x1
	IL_03bd:            V_7=1;                                                      //stloc				V_7
	IL_03c1:            /*goto IL_038b;*/goto IL_03c3;                              //br.s				IL_038b
	IL_03c3:            goto IL_03c5;                                               //br.s				IL_03c5
	IL_03c5:                                                                        //ldloc.s				V_6
	IL_03c7:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_03cc:                                                                        //ldc.i4				0x0
	IL_03d1:            V_7=0;                                                      //stloc				V_7
	IL_03d5:            /*goto IL_038b;*/goto IL_03d7;                              //br.s				IL_038b
	IL_03d7:            goto IL_03d9;                                               //br.s				IL_03d9
	IL_03d9:                                                                        //endfinally
	                    ;}
	IL_03da:                                                                        //ldarg.0
	IL_03db:            Temp_19=A_0->Fields;                                        //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_03e0:            Temp_20=safe_cast<System::Collections::IEnumerable^>(Temp_19)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_03e5:            V_5=Temp_20;                                                //stloc.s				V_5
	IL_03e7:                                                                        //ldc.i4				0x2
	IL_03ec:            V_7=2;                                                      //stloc				V_7
	IL_03f0:            /*goto IL_0002;*/goto IL_03f5;                              //br				IL_0002
	IL_03f5:            /*goto IL_013f;*/goto IL_013E02;                            //br				IL_013f
	IL_03fa:                                                                        //ldarg.0
	IL_03fb:            Temp_21=A_0->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0400:            Temp_22=safe_cast<System::Collections::IEnumerable^>(Temp_21)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0405:            V_5=Temp_22;                                                //stloc.s				V_5
	IL_0407:                                                                        //ldc.i4				0x3
	IL_040c:            V_7=3;                                                      //stloc				V_7
	IL_0410:            /*goto IL_0002;*/goto IL_0415;                              //br				IL_0002
	IL_0415:            /*goto IL_0235;*/goto IL_023001;                            //br				IL_0235
	IL_041a:                                                                        //ldloc.0
	IL_041b:                                                                        //ldarg.0
	IL_041c:            Temp_14=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0421:            Temp_15=Root::T_x21::T_x2::M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_14));//call				System::Collections::ICollection^ Root::T_x21::T_x2::M_x1(Reflector::CodeModel::IType^)
	IL_0426:            V_0->AddRange(Temp_15);                                     //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_042b:                                                                        //ldc.i4				0x6
	IL_0430:            V_7=6;                                                      //stloc				V_7
	IL_0434:            /*goto IL_0002;*/goto IL_0439;                              //br				IL_0002
	IL_0439:            goto IL_0215;                                               //br				IL_0215
	IL_043e:                                                                        //ldarg.0
	IL_043f:            Temp_23=A_0->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0444:            Temp_24=safe_cast<System::Collections::IEnumerable^>(Temp_23)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0449:            V_5=Temp_24;                                                //stloc.s				V_5
	IL_044b:                                                                        //ldc.i4				0x1
	IL_0450:            V_7=1;                                                      //stloc				V_7
	IL_0454:            /*goto IL_0002;*/goto IL_0459;                              //br				IL_0002
	IL_0459:            /*goto IL_0309;*/goto IL_030802;                            //br				IL_0309
	IL_045e:                                                                        //ldloc.0
	IL_045f:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline Root::T_x21::T_x12::T_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Object^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	//local variables.
	Reflector::CodeModel::IMemberReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0072;case 1:goto IL_003d;case 2:goto IL_00cb;case 3:goto IL_009a;case 4:goto IL_00e7;case 5:goto IL_004b;case 6:goto IL_0089;case 7:goto IL_0064;};//switch				(IL_0072,IL_003d,IL_00cb,IL_009a,IL_00e7,IL_004b,IL_0089,IL_0064)
	IL_002b:                                                                        //ldarg.1
	IL_002c:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_0031:            V_0=dynamic_cast<Reflector::CodeModel::IMemberReference^>(A_1);//stloc.0
	IL_0032:                                                                        //ldc.i4				0x1
	IL_0037:            V_4=1;                                                      //stloc				V_4
	IL_003b:            /*goto IL_0002;*/goto IL_003d;                              //br.s				IL_0002
	IL_003d:                                                                        //ldloc.0
	IL_003e:            if(V_0==nullptr)goto IL_0074;                               //brfalse.s				IL_0074
	IL_0040:                                                                        //ldc.i4				0x5
	IL_0045:            V_4=5;                                                      //stloc				V_4
	IL_0049:            /*goto IL_0002;*/goto IL_004b;                              //br.s				IL_0002
	IL_004b:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_004d:                                                                        //ldloc.2
	IL_004e:            Temp_1=V_2->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0053:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0058:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_1);//stloc.3
	IL_0059:                                                                        //ldc.i4				0x7
	IL_005e:            V_4=7;                                                      //stloc				V_4
	IL_0062:            /*goto IL_0002;*/goto IL_0064;                              //br.s				IL_0002
	IL_0064:                                                                        //ldloc.3
	IL_0065:            if(V_3==nullptr)goto IL_00a4;                               //brfalse.s				IL_00a4
	IL_0067:                                                                        //ldc.i4				0x0
	IL_006c:            V_4=0;                                                      //stloc				V_4
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_00e9;                                               //br.s				IL_00e9
	IL_0074:                                                                        //ldarg.1
	IL_0075:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_007a:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_1);//stloc.2
	IL_007b:                                                                        //ldc.i4				0x6
	IL_0080:            V_4=6;                                                      //stloc				V_4
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:                                                                        //ldloc.2
	IL_008a:            if(V_2==nullptr)goto IL_00f3;                               //brfalse.s				IL_00f3
	IL_008c:                                                                        //ldc.i4				0x3
	IL_0091:            V_4=3;                                                      //stloc				V_4
	IL_0095:            /*goto IL_0002;*/goto IL_009a;                              //br				IL_0002
	IL_009a:            goto IL_004d;                                               //br.s				IL_004d
	IL_009c:                                                                        //ldarg.0
	IL_009d:                                                                        //ldloc.1
	IL_009e:            Temp_2=Root::T_x21::T_x12::M_x1(A_0,safe_cast<System::Object^>(V_1));//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::IAssemblyReference^,System::Object^)
	IL_00a3:            return Temp_2;                                              //ret
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:                                                                        //ldloc.2
	IL_00a6:            Temp_4=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_2));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_00ab:            Temp_5=A_0->Equals(safe_cast<System::Object^>(Temp_4));     //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00b0:            return Temp_5;                                              //ret
	IL_00b1:                                                                        //ldloc.0
	IL_00b2:            Temp_3=V_0->DeclaringType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00b7:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00bc:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_3);//stloc.1
	IL_00bd:                                                                        //ldc.i4				0x2
	IL_00c2:            V_4=2;                                                      //stloc				V_4
	IL_00c6:            /*goto IL_0002;*/goto IL_00cb;                              //br				IL_0002
	IL_00cb:                                                                        //ldloc.1
	IL_00cc:            if(V_1==nullptr)goto IL_00f1;                               //brfalse.s				IL_00f1
	IL_00ce:                                                                        //ldc.i4.4
	IL_00cf:                                                                        //dup
	IL_00d0:                                                                        //dup
	IL_00d1:                                                                        //ldc.i4.2
	IL_00d2:                                                                        //sub
	IL_00d3:                                                                        //blt				IL_00cf
	IL_00d8:                                                                        //pop
	IL_00d9:                                                                        //ldc.i4				0x4
	IL_00de:            V_4=4;                                                      //stloc				V_4
	IL_00e2:            /*goto IL_0002;*/goto IL_00e7;                              //br				IL_0002
	IL_00e7:            goto IL_009c;                                               //br.s				IL_009c
	IL_00e9:                                                                        //ldarg.0
	IL_00ea:                                                                        //ldloc.3
	IL_00eb:            Temp_0=Root::T_x21::T_x12::M_x1(A_0,safe_cast<System::Object^>(V_3));//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::IAssemblyReference^,System::Object^)
	IL_00f0:            return Temp_0;                                              //ret
	IL_00f1:                                                                        //ldc.i4.0
	IL_00f2:            return false;                                               //ret
	IL_00f3:                                                                        //ldc.i4.0
	IL_00f4:            return false;                                               //ret

}
inline System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::IMethodReference^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IMethodReference^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0006:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_1);//stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_0017;                               //brfalse.s				IL_0017
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:            goto IL_000f;                                               //br.s				IL_000f
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldloc.0
	IL_0011:            Temp_0=A_0->Equals(safe_cast<System::Object^>(V_0));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0016:            return Temp_0;                                              //ret
	IL_0017:                                                                        //ldc.i4.0
	IL_0018:            return false;                                               //ret

}
inline System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::INamespace^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	System::Boolean Temp_7 = false;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	Reflector::CodeModel::IType^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::IMemberReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_4 = nullptr;
	System::Boolean V_5 = false;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:            goto IL_0037;                                               //br.s				IL_0037
	IL_0002:                                                                        //ldloc				V_8
	IL_0006:            switch(V_8){case 0:goto IL_00a0;case 1:goto IL_0215;case 2:goto IL_0246;case 3:goto IL_01ce;case 4:goto IL_01f4;case 5:goto IL_0232;case 6:goto IL_01df;case 7:goto IL_0074;case 8:goto IL_0049;case 9:goto IL_00b4;case 10:goto IL_005a;};//switch				(IL_00a0,IL_0215,IL_0246,IL_01ce,IL_01f4,IL_0232,IL_01df,IL_0074,IL_0049,IL_00b4,IL_005a)
	IL_0037:                                                                        //ldarg.1
	IL_0038:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_003d:            V_0=dynamic_cast<Reflector::CodeModel::IMemberReference^>(A_1);//stloc.0
	IL_003e:                                                                        //ldc.i4				0x8
	IL_0043:            V_8=8;                                                      //stloc				V_8
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:                                                                        //ldloc.0
	IL_004a:            if(V_0==nullptr)goto IL_021d;                               //brfalse				IL_021d
	IL_004f:                                                                        //ldc.i4				0xa
	IL_0054:            V_8=10;                                                     //stloc				V_8
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:            goto IL_0086;                                               //br.s				IL_0086
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_0=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0062:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0067:            V_6=Temp_1;                                                 //stloc.s				V_6
	IL_0069:                                                                        //ldc.i4				0x7
	IL_006e:            V_8=7;                                                      //stloc				V_8
	IL_0072:            /*goto IL_0002;*/goto IL_0074;                              //br.s				IL_0002
	IL_0074:            /*goto IL_00b6;*/goto IL_00B401;                            //br.s				IL_00b6
	IL_0076:                                                                        //ldarg.0
	IL_0077:                                                                        //ldloc.3
	IL_0078:            Temp_6=Root::T_x21::T_x12::M_x1(A_0,safe_cast<System::Object^>(V_3));//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::INamespace^,System::Object^)
	IL_007d:            return Temp_6;                                              //ret
	IL_007e:                                                                        //ldarg.0
	IL_007f:                                                                        //ldloc.1
	IL_0080:            Temp_10=Root::T_x21::T_x12::M_x1(A_0,safe_cast<System::Object^>(V_1));//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::INamespace^,System::Object^)
	IL_0085:            return Temp_10;                                             //ret
	IL_0086:                                                                        //ldloc.0
	IL_0087:            Temp_11=V_0->DeclaringType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_008c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0091:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_11);//stloc.1
	IL_0092:                                                                        //ldc.i4				0x0
	IL_0097:            V_8=0;                                                      //stloc				V_8
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            if(V_1==nullptr)goto IL_01e4;                               //brfalse				IL_01e4
	IL_00a6:                                                                        //ldc.i4				0x9
	IL_00ab:            V_8=9;                                                      //stloc				V_8
	IL_00af:            /*goto IL_0002;*/goto IL_00b4;                              //br				IL_0002
	IL_00b4:            goto IL_007e;                                               //br.s				IL_007e
	IL_00B401:          try{
	IL_00b6:                                                                        //ldc.i4				0x3
	IL_00bb:            V_8=3;                                                      //stloc				V_8
	IL_00bf:            /*goto IL_00c3;*/goto IL_00c1;                              //br.s				IL_00c3
	IL_00c1:            goto IL_00e8;                                               //br.s				IL_00e8
	IL_00c3:                                                                        //ldloc				V_8
	IL_00c7:            switch(V_8){case 0:goto IL_012b;case 1:goto IL_015f;case 2:goto IL_014f;case 3:goto IL_00c1;case 4:goto IL_0116;case 5:goto IL_0138;case 6:goto IL_00f8;};//switch				(IL_012b,IL_015f,IL_014f,IL_00c1,IL_0116,IL_0138,IL_00f8)
	IL_00e8:            goto IL_012d;                                               //br.s				IL_012d
	IL_00ea:                                                                        //ldc.i4.1
	IL_00eb:            V_5=true;                                                   //stloc.s				V_5
	IL_00ed:                                                                        //ldc.i4				0x6
	IL_00f2:            V_8=6;                                                      //stloc				V_8
	IL_00f6:            /*goto IL_00c3;*/goto IL_00f8;                              //br.s				IL_00c3
	IL_00f8:            goto IL_024b;                                               //leave				IL_024b
	IL_00fd:                                                                        //ldloc.s				V_6
	IL_00ff:            Temp_9=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0104:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0109:            V_4=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_9);//stloc.s				V_4
	IL_010b:                                                                        //ldc.i4				0x4
	IL_0110:            V_8=4;                                                      //stloc				V_8
	IL_0114:            /*goto IL_00c3;*/goto IL_0116;                              //br.s				IL_00c3
	IL_0116:                                                                        //ldloc.2
	IL_0117:                                                                        //ldloc.s				V_4
	IL_0119:            Temp_7=V_2->Equals(safe_cast<System::Object^>(V_4));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_011e:            if(!Temp_7)goto IL_012d;                                    //brfalse.s				IL_012d
	IL_0120:                                                                        //ldc.i4				0x0
	IL_0125:            V_8=0;                                                      //stloc				V_8
	IL_0129:            /*goto IL_00c3;*/goto IL_012b;                              //br.s				IL_00c3
	IL_012b:            goto IL_00ea;                                               //br.s				IL_00ea
	IL_012d:                                                                        //ldc.i4				0x5
	IL_0132:            V_8=5;                                                      //stloc				V_8
	IL_0136:            /*goto IL_00c3;*/goto IL_0138;                              //br.s				IL_00c3
	IL_0138:                                                                        //ldloc.s				V_6
	IL_013a:            Temp_8=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_013f:            if(Temp_8)goto IL_00fd;                                     //brtrue.s				IL_00fd
	IL_0141:                                                                        //ldc.i4				0x2
	IL_0146:            V_8=2;                                                      //stloc				V_8
	IL_014a:            /*goto IL_00c3;*/goto IL_014f;                              //br				IL_00c3
	IL_014f:            goto IL_0151;                                               //br.s				IL_0151
	IL_0151:                                                                        //ldc.i4				0x1
	IL_0156:            V_8=1;                                                      //stloc				V_8
	IL_015a:            /*goto IL_00c3;*/goto IL_015f;                              //br				IL_00c3
	IL_015f:            goto IL_01b2;                                               //leave.s				IL_01b2
	                    ;}
	                    finally{
	IL_0161:            goto IL_0178;                                               //br.s				IL_0178
	IL_0163:                                                                        //ldloc				V_8
	IL_0167:            switch(V_8){case 0:goto IL_01af;case 1:goto IL_018c;case 2:goto IL_019b;};//switch				(IL_01af,IL_018c,IL_019b)
	IL_0178:                                                                        //ldloc.s				V_6
	IL_017a:                                                                        //isinst				System::IDisposable
	IL_017f:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_0181:                                                                        //ldc.i4				0x1
	IL_0186:            V_8=1;                                                      //stloc				V_8
	IL_018a:            /*goto IL_0163;*/goto IL_018c;                              //br.s				IL_0163
	IL_018c:                                                                        //ldloc.s				V_7
	IL_018e:            if(V_7==nullptr)goto IL_01b1;                               //brfalse.s				IL_01b1
	IL_0190:                                                                        //ldc.i4				0x2
	IL_0195:            V_8=2;                                                      //stloc				V_8
	IL_0199:            /*goto IL_0163;*/goto IL_019b;                              //br.s				IL_0163
	IL_019b:            goto IL_019d;                                               //br.s				IL_019d
	IL_019d:                                                                        //ldloc.s				V_7
	IL_019f:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01a4:                                                                        //ldc.i4				0x0
	IL_01a9:            V_8=0;                                                      //stloc				V_8
	IL_01ad:            /*goto IL_0163;*/goto IL_01af;                              //br.s				IL_0163
	IL_01af:            goto IL_01b1;                                               //br.s				IL_01b1
	IL_01b1:                                                                        //endfinally
	                    ;}
	IL_01b2:                                                                        //ldc.i4.0
	IL_01b3:            return false;                                               //ret
	IL_01b4:                                                                        //ldloc.2
	IL_01b5:            Temp_2=V_2->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_01ba:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_01bf:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2);//stloc.3
	IL_01c0:                                                                        //ldc.i4				0x3
	IL_01c5:            V_8=3;                                                      //stloc				V_8
	IL_01c9:            /*goto IL_0002;*/goto IL_01ce;                              //br				IL_0002
	IL_01ce:                                                                        //ldloc.3
	IL_01cf:            if(V_3==nullptr)goto IL_01e6;                               //brfalse.s				IL_01e6
	IL_01d1:                                                                        //ldc.i4				0x6
	IL_01d6:            V_8=6;                                                      //stloc				V_8
	IL_01da:            /*goto IL_0002;*/goto IL_01df;                              //br				IL_0002
	IL_01df:            goto IL_0076;                                               //br				IL_0076
	IL_01e4:                                                                        //ldc.i4.0
	IL_01e5:            return false;                                               //ret
	IL_01e6:                                                                        //ldc.i4				0x4
	IL_01eb:            V_8=4;                                                      //stloc				V_8
	IL_01ef:            /*goto IL_0002;*/goto IL_01f4;                              //br				IL_0002
	IL_01f4:                                                                        //ldloc.2
	IL_01f5:            Temp_3=V_2->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_01fa:                                                                        //ldarg.0
	IL_01fb:            Temp_4=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_0200:            Temp_5=(Temp_3 == Temp_4);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0205:            if(!Temp_5)goto IL_01b2;                                    //brfalse.s				IL_01b2
	IL_0207:                                                                        //ldc.i4				0x1
	IL_020c:            V_8=1;                                                      //stloc				V_8
	IL_0210:            /*goto IL_0002;*/goto IL_0215;                              //br				IL_0002
	IL_0215:            goto IL_0218;                                               //br.s				IL_0218
	IL_0217:                                                                        //break
	IL_0218:            goto IL_005c;                                               //br				IL_005c
	IL_021d:                                                                        //ldarg.1
	IL_021e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0223:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_1);//stloc.2
	IL_0224:                                                                        //ldc.i4				0x5
	IL_0229:            V_8=5;                                                      //stloc				V_8
	IL_022d:            /*goto IL_0002;*/goto IL_0232;                              //br				IL_0002
	IL_0232:                                                                        //ldloc.2
	IL_0233:            if(V_2==nullptr)goto IL_01b2;                               //brfalse				IL_01b2
	IL_0238:                                                                        //ldc.i4				0x2
	IL_023d:            V_8=2;                                                      //stloc				V_8
	IL_0241:            /*goto IL_0002;*/goto IL_0246;                              //br				IL_0002
	IL_0246:            goto IL_01b4;                                               //br				IL_01b4
	IL_024b:                                                                        //ldloc.s				V_5
	IL_024d:            return V_5;                                                 //ret

}
inline System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::ITypeReference^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Object^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	//local variables.
	Reflector::CodeModel::IMemberReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0065;case 1:goto IL_00b9;case 2:goto IL_00fd;case 3:goto IL_010e;case 4:goto IL_0045;case 5:goto IL_00d5;case 6:goto IL_00a8;case 7:goto IL_007c;case 8:goto IL_0056;case 9:goto IL_00e6;};//switch				(IL_0065,IL_00b9,IL_00fd,IL_010e,IL_0045,IL_00d5,IL_00a8,IL_007c,IL_0056,IL_00e6)
	IL_0033:                                                                        //ldarg.1
	IL_0034:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_0039:            V_0=dynamic_cast<Reflector::CodeModel::IMemberReference^>(A_1);//stloc.0
	IL_003a:                                                                        //ldc.i4				0x4
	IL_003f:            V_4=4;                                                      //stloc				V_4
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldloc.0
	IL_0046:            if(V_0==nullptr)goto IL_00e8;                               //brfalse				IL_00e8
	IL_004b:                                                                        //ldc.i4				0x8
	IL_0050:            V_4=8;                                                      //stloc				V_4
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_008e;                                               //br.s				IL_008e
	IL_0058:                                                                        //ldc.i4.1
	IL_0059:            return true;                                                //ret
	IL_005a:                                                                        //ldc.i4				0x0
	IL_005f:            V_4=0;                                                      //stloc				V_4
	IL_0063:            /*goto IL_0002;*/goto IL_0065;                              //br.s				IL_0002
	IL_0065:            goto IL_0068;                                               //br.s				IL_0068
	IL_0067:                                                                        //break
	IL_0068:                                                                        //ldarg.0
	IL_0069:                                                                        //ldloc.2
	IL_006a:            Temp_0=A_0->Equals(safe_cast<System::Object^>(V_2));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_006f:            if(!Temp_0)goto IL_00bb;                                    //brfalse.s				IL_00bb
	IL_0071:                                                                        //ldc.i4				0x7
	IL_0076:            V_4=7;                                                      //stloc				V_4
	IL_007a:            /*goto IL_0002;*/goto IL_007c;                              //br.s				IL_0002
	IL_007c:            goto IL_0058;                                               //br.s				IL_0058
	IL_007e:                                                                        //ldarg.0
	IL_007f:                                                                        //ldloc.1
	IL_0080:            Temp_2=Root::T_x21::T_x12::M_x1(A_0,safe_cast<System::Object^>(V_1));//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::ITypeReference^,System::Object^)
	IL_0085:            return Temp_2;                                              //ret
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //ldloc.3
	IL_0088:            Temp_4=Root::T_x21::T_x12::M_x1(A_0,safe_cast<System::Object^>(V_3));//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::ITypeReference^,System::Object^)
	IL_008d:            return Temp_4;                                              //ret
	IL_008e:                                                                        //ldloc.0
	IL_008f:            Temp_3=V_0->DeclaringType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0094:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0099:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_3);//stloc.1
	IL_009a:                                                                        //ldc.i4				0x6
	IL_009f:            V_4=6;                                                      //stloc				V_4
	IL_00a3:            /*goto IL_0002;*/goto IL_00a8;                              //br				IL_0002
	IL_00a8:                                                                        //ldloc.1
	IL_00a9:            if(V_1==nullptr)goto IL_0113;                               //brfalse.s				IL_0113
	IL_00ab:                                                                        //ldc.i4				0x1
	IL_00b0:            V_4=1;                                                      //stloc				V_4
	IL_00b4:            /*goto IL_0002;*/goto IL_00b9;                              //br				IL_0002
	IL_00b9:            goto IL_007e;                                               //br.s				IL_007e
	IL_00bb:                                                                        //ldloc.2
	IL_00bc:            Temp_1=V_2->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_00c1:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00c6:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_1);//stloc.3
	IL_00c7:                                                                        //ldc.i4				0x5
	IL_00cc:            V_4=5;                                                      //stloc				V_4
	IL_00d0:            /*goto IL_0002;*/goto IL_00d5;                              //br				IL_0002
	IL_00d5:                                                                        //ldloc.3
	IL_00d6:            if(V_3==nullptr)goto IL_0115;                               //brfalse.s				IL_0115
	IL_00d8:                                                                        //ldc.i4				0x9
	IL_00dd:            V_4=9;                                                      //stloc				V_4
	IL_00e1:            /*goto IL_0002;*/goto IL_00e6;                              //br				IL_0002
	IL_00e6:            goto IL_0086;                                               //br.s				IL_0086
	IL_00e8:                                                                        //ldarg.1
	IL_00e9:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00ee:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_1);//stloc.2
	IL_00ef:                                                                        //ldc.i4				0x2
	IL_00f4:            V_4=2;                                                      //stloc				V_4
	IL_00f8:            /*goto IL_0002;*/goto IL_00fd;                              //br				IL_0002
	IL_00fd:                                                                        //ldloc.2
	IL_00fe:            if(V_2==nullptr)goto IL_0115;                               //brfalse.s				IL_0115
	IL_0100:                                                                        //ldc.i4				0x3
	IL_0105:            V_4=3;                                                      //stloc				V_4
	IL_0109:            /*goto IL_0002;*/goto IL_010e;                              //br				IL_0002
	IL_010e:            goto IL_005a;                                               //br				IL_005a
	IL_0113:                                                                        //ldc.i4.0
	IL_0114:            return false;                                               //ret
	IL_0115:                                                                        //ldc.i4.0
	IL_0116:            return false;                                               //ret

}
inline System::Boolean Root::T_x21::T_x12::M_x1(System::Object^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IAssembly^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	Reflector::CodeModel::IModule^ V_1 = nullptr;
	Reflector::CodeModel::INamespace^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_010e;case 1:goto IL_00eb;case 2:goto IL_007a;case 3:goto IL_00bb;case 4:goto IL_00da;case 5:goto IL_0045;case 6:goto IL_011f;case 7:goto IL_008b;case 8:goto IL_00a6;case 9:goto IL_0053;};//switch				(IL_010e,IL_00eb,IL_007a,IL_00bb,IL_00da,IL_0045,IL_011f,IL_008b,IL_00a6,IL_0053)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_0039:            V_0=dynamic_cast<Reflector::CodeModel::IAssembly^>(A_0);    //stloc.0
	IL_003a:                                                                        //ldc.i4				0x5
	IL_003f:            V_5=5;                                                      //stloc				V_5
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldloc.0
	IL_0046:            if(V_0==nullptr)goto IL_0065;                               //brfalse.s				IL_0065
	IL_0048:                                                                        //ldc.i4				0x9
	IL_004d:            V_5=9;                                                      //stloc				V_5
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_00bd;                                               //br.s				IL_00bd
	IL_0055:                                                                        //ldloc.3
	IL_0056:                                                                        //ldarg.1
	IL_0057:            Temp_0=Root::T_x21::T_x12::M_x1(V_3,A_1);                   //call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::ITypeReference^,System::Object^)
	IL_005c:            return Temp_0;                                              //ret
	IL_005d:                                                                        //ldloc.2
	IL_005e:                                                                        //ldarg.1
	IL_005f:            Temp_2=Root::T_x21::T_x12::M_x1(V_2,A_1);                   //call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::INamespace^,System::Object^)
	IL_0064:            return Temp_2;                                              //ret
	IL_0065:            goto IL_0068;                                               //br.s				IL_0068
	IL_0067:                                                                        //break
	IL_0068:                                                                        //ldarg.0
	IL_0069:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_006e:            V_1=dynamic_cast<Reflector::CodeModel::IModule^>(A_0);      //stloc.1
	IL_006f:                                                                        //ldc.i4				0x2
	IL_0074:            V_5=2;                                                      //stloc				V_5
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:                                                                        //ldloc.1
	IL_007b:            if(V_1==nullptr)goto IL_00f9;                               //brfalse.s				IL_00f9
	IL_007d:                                                                        //ldc.i4				0x7
	IL_0082:            V_5=7;                                                      //stloc				V_5
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_0124;                                               //br				IL_0124
	IL_0090:                                                                        //ldarg.0
	IL_0091:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0096:            V_4=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.s				V_4
	IL_0098:                                                                        //ldc.i4				0x8
	IL_009d:            V_5=8;                                                      //stloc				V_5
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:                                                                        //ldloc.s				V_4
	IL_00a8:            if(V_4==nullptr)goto IL_0131;                               //brfalse				IL_0131
	IL_00ad:                                                                        //ldc.i4				0x3
	IL_00b2:            V_5=3;                                                      //stloc				V_5
	IL_00b6:            /*goto IL_0002;*/goto IL_00bb;                              //br				IL_0002
	IL_00bb:            goto IL_00f0;                                               //br.s				IL_00f0
	IL_00bd:                                                                        //ldloc.0
	IL_00be:                                                                        //ldarg.1
	IL_00bf:            Temp_5=Root::T_x21::T_x12::M_x1(safe_cast<Reflector::CodeModel::IAssemblyReference^>(V_0),A_1);//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::IAssemblyReference^,System::Object^)
	IL_00c4:            return Temp_5;                                              //ret
	IL_00c5:                                                                        //ldarg.0
	IL_00c6:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00cb:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.3
	IL_00cc:                                                                        //ldc.i4				0x4
	IL_00d1:            V_5=4;                                                      //stloc				V_5
	IL_00d5:            /*goto IL_0002;*/goto IL_00da;                              //br				IL_0002
	IL_00da:                                                                        //ldloc.3
	IL_00db:            if(V_3==nullptr)goto IL_0090;                               //brfalse.s				IL_0090
	IL_00dd:                                                                        //ldc.i4				0x1
	IL_00e2:            V_5=1;                                                      //stloc				V_5
	IL_00e6:            /*goto IL_0002;*/goto IL_00eb;                              //br				IL_0002
	IL_00eb:            goto IL_0055;                                               //br				IL_0055
	IL_00f0:                                                                        //ldloc.s				V_4
	IL_00f2:                                                                        //ldarg.1
	IL_00f3:            Temp_1=Root::T_x21::T_x12::M_x1(V_4,A_1);                   //call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::IMethodReference^,System::Object^)
	IL_00f8:            return Temp_1;                                              //ret
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_00ff:            V_2=dynamic_cast<Reflector::CodeModel::INamespace^>(A_0);   //stloc.2
	IL_0100:                                                                        //ldc.i4				0x0
	IL_0105:            V_5=0;                                                      //stloc				V_5
	IL_0109:            /*goto IL_0002;*/goto IL_010e;                              //br				IL_0002
	IL_010e:                                                                        //ldloc.2
	IL_010f:            if(V_2==nullptr)goto IL_00c5;                               //brfalse.s				IL_00c5
	IL_0111:                                                                        //ldc.i4				0x6
	IL_0116:            V_5=6;                                                      //stloc				V_5
	IL_011a:            /*goto IL_0002;*/goto IL_011f;                              //br				IL_0002
	IL_011f:            goto IL_005d;                                               //br				IL_005d
	IL_0124:                                                                        //ldloc.1
	IL_0125:            Temp_3=V_1->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_012a:                                                                        //ldarg.1
	IL_012b:            Temp_4=Root::T_x21::T_x12::M_x1(safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_3),A_1);//call				System::Boolean Root::T_x21::T_x12::M_x1(Reflector::CodeModel::IAssemblyReference^,System::Object^)
	IL_0130:            return Temp_4;                                              //ret
	IL_0131:                                                                        //ldc.i4.0
	IL_0132:            return false;                                               //ret

}
