#include "global_xref.h"

inline Root::T_x133::T_x133(array<Reflector::CodeModel::IAssembly^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IModuleCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::IModule^>^ Temp_5 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_000b:            V_0=Temp_0;                                                 //stloc.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            V_2=A_0;                                                    //stloc.2
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:            V_3=0;                                                      //stloc.3
	IL_0010:            goto IL_0012;                                               //br.s				IL_0012
	IL_0012:                                                                        //ldloc.3
	IL_0013:                                                                        //ldloc.2
	IL_0014:            Temp_1=V_2->Length;                                         //ldlen
	IL_0015:                                                                        //conv.i4
	IL_0016:            if(V_3<Temp_1)goto IL_001a;                                 //blt.s				IL_001a
	IL_0018:            goto IL_0030;                                               //br.s				IL_0030
	IL_001a:                                                                        //ldloc.2
	IL_001b:                                                                        //ldloc.3
	IL_001c:                                                                        //ldelem.ref
	IL_001d:            V_1=V_2[V_3];                                               //stloc.1
	IL_001e:                                                                        //ldloc.0
	IL_001f:                                                                        //ldloc.1
	IL_0020:            Temp_2=V_1->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0025:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_2));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_002a:                                                                        //ldloc.3
	IL_002b:                                                                        //ldc.i4.1
	IL_002c:                                                                        //add
	IL_002d:            V_3=(V_3 + 1);                                              //stloc.3
	IL_002e:            goto IL_0012;                                               //br.s				IL_0012
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldloc.0
	IL_0032:            Temp_3=V_0->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0037:                                                                        //conv.ovf.u4
	IL_0038:            Temp_4=gcnew array<Reflector::CodeModel::IModule^>(safe_cast<System::UInt32>(Temp_3));//newarr				Reflector::CodeModel::IModule
	IL_003d:            this->F_x2=Temp_4;                                          //stfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_0042:                                                                        //ldloc.0
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_5=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_0049:            V_0->CopyTo(safe_cast<System::Array^>(Temp_5));             //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^)
	IL_004e:                                                                        //ldarg.0
	IL_004f:            this->M_x12();                                              //call				void Root::T_x133::M_x12()
	IL_0054:            return;                                                     //ret

}
inline Root::T_x133::T_x133(array<Reflector::CodeModel::IModule^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_000d:                                                                        //ldarg.0
	IL_000e:            this->M_x12();                                              //call				void Root::T_x133::M_x12()
	IL_0013:            return;                                                     //ret

}
inline Root::T_x133::T_x133(array<Reflector::CodeModel::ITypeDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IModule^>^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IModule^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:            Temp_0=gcnew array<Reflector::CodeModel::IModule^>(1);      //newarr				Reflector::CodeModel::IModule
	IL_000d:            V_0=Temp_0;                                                 //stloc.0
	IL_000e:                                                                        //ldloc.0
	IL_000f:            this->F_x2=V_0;                                             //stfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:            Temp_1=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_001b:            this->F_x13=Temp_1;                                         //stfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_2=this->F_x13;                                         //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_0026:                                                                        //ldarg.1
	IL_0027:            Temp_2->AddRange(safe_cast<System::Collections::ICollection^>(A_0));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_002c:                                                                        //ldarg.0
	IL_002d:            this->M_x12();                                              //call				void Root::T_x133::M_x12()
	IL_0032:            return;                                                     //ret

}
inline System::Int32 Root::T_x133::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Collections::ArrayList^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Collections::ArrayList^ Temp_13 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_2=3;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0097;case 1:goto IL_00b5;case 2:goto IL_003c;case 3:goto IL_000b;};//switch				(IL_0097,IL_00b5,IL_003c,IL_000b)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_13=this->F_x13;                                        //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_002c:            if(Temp_13==nullptr)goto IL_00b7;                           //brfalse				IL_00b7
	IL_0031:                                                                        //ldc.i4				0x2
	IL_0036:            V_2=2;                                                      //stloc				V_2
	IL_003a:            /*goto IL_000d;*/goto IL_003c;                              //br.s				IL_000d
	IL_003c:            goto IL_0089;                                               //br.s				IL_0089
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_2=this->F_x13;                                         //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_0044:            Temp_3=Temp_2->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0049:                                                                        //ldarg.0
	IL_004a:            Temp_4=this->F_x1;                                          //ldfld				System::Int32 Root::T_x133 F_x1
	IL_004f:                                                                        //mul
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_5=this->F_x12;                                         //ldfld				System::Int32 Root::T_x133 F_x12
	IL_0056:                                                                        //add
	IL_0057:            V_0=((Temp_3 * Temp_4) + Temp_5);                           //stloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_6=this->F_x13;                                         //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_005e:            Temp_7=Temp_6->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_8=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_0069:            Temp_9=Temp_8->Length;                                      //ldlen
	IL_006a:                                                                        //conv.i4
	IL_006b:                                                                        //mul
	IL_006c:            V_1=(Temp_7 * Temp_9);                                      //stloc.1
	IL_006d:                                                                        //ldloc.0
	IL_006e:                                                                        //ldc.i4.s				100
	IL_0070:                                                                        //mul
	IL_0071:                                                                        //ldloc.1
	IL_0072:                                                                        //div
	IL_0073:            return ((V_0 * 100) / V_1);                                 //ret
	IL_0074:                                                                        //ldarg.0
	IL_0075:            Temp_10=this->F_x1;                                         //ldfld				System::Int32 Root::T_x133 F_x1
	IL_007a:                                                                        //ldc.i4.1
	IL_007b:                                                                        //add
	IL_007c:                                                                        //ldc.i4.s				100
	IL_007e:                                                                        //mul
	IL_007f:                                                                        //ldarg.0
	IL_0080:            Temp_11=this->F_x2;                                         //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_0085:            Temp_12=Temp_11->Length;                                    //ldlen
	IL_0086:                                                                        //conv.i4
	IL_0087:                                                                        //div
	IL_0088:            return (((Temp_10 + 1) * 100) / Temp_12);                   //ret
	IL_0089:                                                                        //ldc.i4				0x0
	IL_008e:            V_2=0;                                                      //stloc				V_2
	IL_0092:            /*goto IL_000d;*/goto IL_0097;                              //br				IL_000d
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_0=this->F_x13;                                         //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_009d:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00a2:            if(Temp_1!=0)goto IL_003e;                                  //brtrue.s				IL_003e
	IL_00a4:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_00a6:                                                                        //break
	IL_00a7:                                                                        //ldc.i4				0x1
	IL_00ac:            V_2=1;                                                      //stloc				V_2
	IL_00b0:            /*goto IL_000d;*/goto IL_00b5;                              //br				IL_000d
	IL_00b5:            goto IL_0074;                                               //br.s				IL_0074
	IL_00b7:                                                                        //ldc.i4.s				100
	IL_00b9:            return 100;                                                 //ret

}
inline System::Collections::ICollection^ Root::T_x133::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Collections::ICollection^ Temp_6 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=A_0->NestedTypes;                                    //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_000d:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0012:            V_2=Temp_2;                                                 //stloc.2
	IL_0013:            /*goto IL_0015;*/goto IL_001301;                            //br.s				IL_0015
	IL_001301:          try{
	IL_0015:                                                                        //ldc.i4				0x2
	IL_001a:            V_4=2;                                                      //stloc				V_4
	IL_001e:            /*goto IL_0022;*/goto IL_0020;                              //br.s				IL_0022
	IL_0020:            goto IL_003f;                                               //br.s				IL_003f
	IL_0022:                                                                        //ldloc				V_4
	IL_0026:            switch(V_4){case 0:goto IL_007d;case 1:goto IL_009d;case 2:goto IL_0020;case 3:goto IL_0090;case 4:goto IL_0070;};//switch				(IL_007d,IL_009d,IL_0020,IL_0090,IL_0070)
	IL_003f:            goto IL_0042;                                               //br.s				IL_0042
	IL_0041:                                                                        //break
	IL_0042:            goto IL_0072;                                               //br.s				IL_0072
	IL_0044:                                                                        //ldloc.2
	IL_0045:            Temp_4=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004a:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_004f:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_4);//stloc.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:                                                                        //ldloc.1
	IL_0052:            Temp_5=V_0->Add(safe_cast<System::Object^>(V_1));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0057:                                                                        //pop
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldarg.0
	IL_005a:                                                                        //ldloc.1
	IL_005b:            Temp_6=this->M_x1(V_1);                                     //call				System::Collections::ICollection^ Root::T_x133::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0060:            V_0->AddRange(Temp_6);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0065:                                                                        //ldc.i4				0x4
	IL_006a:            V_4=4;                                                      //stloc				V_4
	IL_006e:            /*goto IL_0022;*/goto IL_0070;                              //br.s				IL_0022
	IL_0070:            goto IL_0072;                                               //br.s				IL_0072
	IL_0072:                                                                        //ldc.i4				0x0
	IL_0077:            V_4=0;                                                      //stloc				V_4
	IL_007b:            /*goto IL_0022;*/goto IL_007d;                              //br.s				IL_0022
	IL_007d:                                                                        //ldloc.2
	IL_007e:            Temp_3=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0083:            if(Temp_3)goto IL_0044;                                     //brtrue.s				IL_0044
	IL_0085:                                                                        //ldc.i4				0x3
	IL_008a:            V_4=3;                                                      //stloc				V_4
	IL_008e:            /*goto IL_0022;*/goto IL_0090;                              //br.s				IL_0022
	IL_0090:            goto IL_0092;                                               //br.s				IL_0092
	IL_0092:                                                                        //ldc.i4				0x1
	IL_0097:            V_4=1;                                                      //stloc				V_4
	IL_009b:            /*goto IL_0022;*/goto IL_009d;                              //br.s				IL_0022
	IL_009d:            goto IL_00ec;                                               //leave.s				IL_00ec
	                    ;}
	                    finally{
	IL_009f:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_00a1:                                                                        //ldloc				V_5
	IL_00a5:            switch(V_5){case 0:goto IL_00d6;case 1:goto IL_00c8;case 2:goto IL_00e9;};//switch				(IL_00d6,IL_00c8,IL_00e9)
	IL_00b6:                                                                        //ldloc.2
	IL_00b7:                                                                        //isinst				System::IDisposable
	IL_00bc:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00bd:                                                                        //ldc.i4				0x1
	IL_00c2:            V_5=1;                                                      //stloc				V_5
	IL_00c6:            /*goto IL_00a1;*/goto IL_00c8;                              //br.s				IL_00a1
	IL_00c8:                                                                        //ldloc.3
	IL_00c9:            if(V_3==nullptr)goto IL_00eb;                               //brfalse.s				IL_00eb
	IL_00cb:                                                                        //ldc.i4				0x0
	IL_00d0:            V_5=0;                                                      //stloc				V_5
	IL_00d4:            /*goto IL_00a1;*/goto IL_00d6;                              //br.s				IL_00a1
	IL_00d6:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_00d8:                                                                        //ldloc.3
	IL_00d9:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00de:                                                                        //ldc.i4				0x2
	IL_00e3:            V_5=2;                                                      //stloc				V_5
	IL_00e7:            /*goto IL_00a1;*/goto IL_00e9;                              //br.s				IL_00a1
	IL_00e9:            goto IL_00eb;                                               //br.s				IL_00eb
	IL_00eb:                                                                        //endfinally
	                    ;}
	IL_00ec:                                                                        //ldloc.0
	IL_00ed:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline void Root::T_x133::M_x12()
//System::Collections::IEnumerator^::Reset by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IModule^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IModule^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0036;                                               //br.s				IL_0036
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_00ab;case 1:goto IL_00c9;case 2:goto IL_006d;case 3:goto IL_000b;case 4:goto IL_0060;case 5:goto IL_0049;case 6:goto IL_0092;case 7:goto IL_0082;};//switch				(IL_00ab,IL_00c9,IL_006d,IL_000b,IL_0060,IL_0049,IL_0092,IL_0082)
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_3=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_003c:            if(Temp_3==nullptr)goto IL_00ad;                            //brfalse.s				IL_00ad
	IL_003e:                                                                        //ldc.i4				0x5
	IL_0043:            V_0=5;                                                      //stloc				V_0
	IL_0047:            /*goto IL_000d;*/goto IL_0049;                              //br.s				IL_000d
	IL_0049:            goto IL_004c;                                               //br.s				IL_004c
	IL_004b:                                                                        //break
	IL_004c:            goto IL_0084;                                               //br.s				IL_0084
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldc.i4.0
	IL_0050:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x133 F_x1
	IL_0055:                                                                        //ldc.i4				0x4
	IL_005a:            V_0=4;                                                      //stloc				V_0
	IL_005e:            /*goto IL_000d;*/goto IL_0060;                              //br.s				IL_000d
	IL_0060:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_0062:                                                                        //ldc.i4				0x2
	IL_0067:            V_0=2;                                                      //stloc				V_0
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_0073:                                                                        //ldc.i4.0
	IL_0074:                                                                        //ldelem.ref
	IL_0075:            if(Temp_0[0]!=nullptr)goto IL_00ad;                         //brtrue.s				IL_00ad
	IL_0077:                                                                        //ldc.i4				0x7
	IL_007c:            V_0=7;                                                      //stloc				V_0
	IL_0080:            /*goto IL_000d;*/goto IL_0082;                              //br.s				IL_000d
	IL_0082:            goto IL_004e;                                               //br.s				IL_004e
	IL_0084:                                                                        //ldc.i4				0x6
	IL_0089:            V_0=6;                                                      //stloc				V_0
	IL_008d:            /*goto IL_000d;*/goto IL_0092;                              //br				IL_000d
	IL_0092:                                                                        //ldarg.0
	IL_0093:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_0098:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0099:                                                                        //conv.i4
	IL_009a:                                                                        //ldc.i4.1
	IL_009b:            if(Temp_2!=1)goto IL_00ad;                                  //bne.un.s				IL_00ad
	IL_009d:                                                                        //ldc.i4				0x0
	IL_00a2:            V_0=0;                                                      //stloc				V_0
	IL_00a6:            /*goto IL_000d;*/goto IL_00ab;                              //br				IL_000d
	IL_00ab:            goto IL_0062;                                               //br.s				IL_0062
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:                                                                        //ldc.i4.m1
	IL_00af:            this->F_x1=-1;                                              //stfld				System::Int32 Root::T_x133 F_x1
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:                                                                        //ldnull
	IL_00b6:            this->F_x13=safe_cast<System::Collections::ArrayList^>(nullptr);//stfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_00bb:                                                                        //ldc.i4				0x1
	IL_00c0:            V_0=1;                                                      //stloc				V_0
	IL_00c4:            /*goto IL_000d;*/goto IL_00c9;                              //br				IL_000d
	IL_00c9:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_00cb:                                                                        //ldarg.0
	IL_00cc:                                                                        //ldc.i4.m1
	IL_00cd:            this->F_x12=-1;                                             //stfld				System::Int32 Root::T_x133 F_x12
	IL_00d2:            return;                                                     //ret

}
inline System::Boolean Root::T_x133::M_x13()
//System::Collections::IEnumerator^::MoveNext by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	System::Collections::ArrayList^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Collections::ArrayList^ Temp_10 = nullptr;
	System::Collections::ICollection^ Temp_11 = nullptr;
	System::Collections::ArrayList^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Collections::ArrayList^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Collections::ArrayList^ Temp_16 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_17 = nullptr;
	System::Collections::IEnumerator^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::Int32 Temp_20 = 0;
	System::Boolean Temp_21 = false;
	//local variables.
	Reflector::CodeModel::IModule^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_4=1;                                                      //stloc				V_4
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003e;                                               //br.s				IL_003e
	IL_000d:                                                                        //ldloc				V_4
	IL_0011:            switch(V_4){case 0:goto IL_0193;case 1:goto IL_000b;case 2:goto IL_01a3;case 3:goto IL_01c6;case 4:goto IL_0239;case 5:goto IL_017a;case 6:goto IL_01d9;case 7:goto IL_0153;case 8:goto IL_01ff;case 9:goto IL_0167;};//switch				(IL_0193,IL_000b,IL_01a3,IL_01c6,IL_0239,IL_017a,IL_01d9,IL_0153,IL_01ff,IL_0167)
	IL_003e:            goto IL_016c;                                               //br				IL_016c
	IL_0043:                                                                        //ldc.i4.0
	IL_0044:            return false;                                               //ret
	IL_004401:          try{
	IL_0045:                                                                        //ldc.i4				0x1
	IL_004a:            V_4=1;                                                      //stloc				V_4
	IL_004e:            /*goto IL_0052;*/goto IL_0050;                              //br.s				IL_0052
	IL_0050:            goto IL_006f;                                               //br.s				IL_006f
	IL_0052:                                                                        //ldloc				V_4
	IL_0056:            switch(V_4){case 0:goto IL_008f;case 1:goto IL_0050;case 2:goto IL_007c;case 3:goto IL_00c7;case 4:goto IL_00d7;};//switch				(IL_008f,IL_0050,IL_007c,IL_00c7,IL_00d7)
	IL_006f:            goto IL_0071;                                               //br.s				IL_0071
	IL_0071:                                                                        //ldc.i4				0x2
	IL_0076:            V_4=2;                                                      //stloc				V_4
	IL_007a:            /*goto IL_0052;*/goto IL_007c;                              //br.s				IL_0052
	IL_007c:                                                                        //ldloc.2
	IL_007d:            Temp_6=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0082:            if(Temp_6)goto IL_0091;                                     //brtrue.s				IL_0091
	IL_0084:                                                                        //ldc.i4				0x0
	IL_0089:            V_4=0;                                                      //stloc				V_4
	IL_008d:            /*goto IL_0052;*/goto IL_008f;                              //br.s				IL_0052
	IL_008f:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_0091:                                                                        //ldloc.2
	IL_0092:            Temp_7=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0097:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_009c:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_7);//stloc.1
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_8=this->F_x13;                                         //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_00a3:                                                                        //ldloc.1
	IL_00a4:            Temp_9=Temp_8->Add(safe_cast<System::Object^>(V_1));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00a9:                                                                        //pop
	IL_00aa:                                                                        //ldarg.0
	IL_00ab:            Temp_10=this->F_x13;                                        //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:                                                                        //ldloc.1
	IL_00b2:            Temp_11=this->M_x1(V_1);                                    //call				System::Collections::ICollection^ Root::T_x133::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00b7:            Temp_10->AddRange(Temp_11);                                 //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_00bc:                                                                        //ldc.i4				0x3
	IL_00c1:            V_4=3;                                                      //stloc				V_4
	IL_00c5:            /*goto IL_0052;*/goto IL_00c7;                              //br.s				IL_0052
	IL_00c7:            goto IL_0071;                                               //br.s				IL_0071
	IL_00c9:                                                                        //ldc.i4				0x4
	IL_00ce:            V_4=4;                                                      //stloc				V_4
	IL_00d2:            /*goto IL_0052;*/goto IL_00d7;                              //br				IL_0052
	IL_00d7:            goto IL_016c;                                               //leave				IL_016c
	                    ;}
	                    finally{
	IL_00dc:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00de:                                                                        //ldloc				V_4
	IL_00e2:            switch(V_4){case 0:goto IL_0113;case 1:goto IL_0126;case 2:goto IL_0105;};//switch				(IL_0113,IL_0126,IL_0105)
	IL_00f3:                                                                        //ldloc.2
	IL_00f4:                                                                        //isinst				System::IDisposable
	IL_00f9:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00fa:                                                                        //ldc.i4				0x2
	IL_00ff:            V_4=2;                                                      //stloc				V_4
	IL_0103:            /*goto IL_00de;*/goto IL_0105;                              //br.s				IL_00de
	IL_0105:                                                                        //ldloc.3
	IL_0106:            if(V_3==nullptr)goto IL_0128;                               //brfalse.s				IL_0128
	IL_0108:                                                                        //ldc.i4				0x0
	IL_010d:            V_4=0;                                                      //stloc				V_4
	IL_0111:            /*goto IL_00de;*/goto IL_0113;                              //br.s				IL_00de
	IL_0113:            goto IL_0115;                                               //br.s				IL_0115
	IL_0115:                                                                        //ldloc.3
	IL_0116:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_011b:                                                                        //ldc.i4				0x1
	IL_0120:            V_4=1;                                                      //stloc				V_4
	IL_0124:            /*goto IL_00de;*/goto IL_0126;                              //br.s				IL_00de
	IL_0126:            goto IL_0128;                                               //br.s				IL_0128
	IL_0128:                                                                        //endfinally
	                    ;}
	IL_0129:                                                                        //ldarg.0
	IL_012a:                                                                        //dup
	IL_012b:            Temp_3=this->F_x1;                                          //ldfld				System::Int32 Root::T_x133 F_x1
	IL_0130:                                                                        //ldc.i4.1
	IL_0131:                                                                        //add
	IL_0132:            this->F_x1=(Temp_3 + 1);                                    //stfld				System::Int32 Root::T_x133 F_x1
	IL_0137:                                                                        //ldarg.0
	IL_0138:            Temp_4=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_013d:                                                                        //ldarg.0
	IL_013e:            Temp_5=this->F_x1;                                          //ldfld				System::Int32 Root::T_x133 F_x1
	IL_0143:                                                                        //ldelem.ref
	IL_0144:            V_0=Temp_4[Temp_5];                                         //stloc.0
	IL_0145:                                                                        //ldc.i4				0x7
	IL_014a:            V_4=7;                                                      //stloc				V_4
	IL_014e:            /*goto IL_000d;*/goto IL_0153;                              //br				IL_000d
	IL_0153:                                                                        //ldloc.0
	IL_0154:            if(V_0!=nullptr)goto IL_020c;                               //brtrue				IL_020c
	IL_0159:                                                                        //ldc.i4				0x9
	IL_015e:            V_4=9;                                                      //stloc				V_4
	IL_0162:            /*goto IL_000d;*/goto IL_0167;                              //br				IL_000d
	IL_0167:            goto IL_023e;                                               //br				IL_023e
	IL_016c:                                                                        //ldc.i4				0x5
	IL_0171:            V_4=5;                                                      //stloc				V_4
	IL_0175:            /*goto IL_000d;*/goto IL_017a;                              //br				IL_000d
	IL_017a:                                                                        //ldarg.0
	IL_017b:            Temp_12=this->F_x13;                                        //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_0180:            if(Temp_12==nullptr)goto IL_0195;                           //brfalse				IL_0195
	IL_0185:                                                                        //ldc.i4				0x0
	IL_018a:            V_4=0;                                                      //stloc				V_4
	IL_018e:            /*goto IL_000d;*/goto IL_0193;                              //br				IL_000d
	IL_0193:            goto IL_01cb;                                               //br.s				IL_01cb
	IL_0195:                                                                        //ldc.i4				0x2
	IL_019a:            V_4=2;                                                      //stloc				V_4
	IL_019e:            /*goto IL_000d;*/goto IL_01a3;                              //br				IL_000d
	IL_01a3:                                                                        //ldarg.0
	IL_01a4:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x133 F_x1
	IL_01a9:                                                                        //ldc.i4.1
	IL_01aa:                                                                        //add
	IL_01ab:                                                                        //ldarg.0
	IL_01ac:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IModule^>^ Root::T_x133 F_x2
	IL_01b1:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_01b2:                                                                        //conv.i4
	IL_01b3:            if((Temp_0 + 1)>=Temp_2)goto IL_0043;                       //bge				IL_0043
	IL_01b8:                                                                        //ldc.i4				0x3
	IL_01bd:            V_4=3;                                                      //stloc				V_4
	IL_01c1:            /*goto IL_000d;*/goto IL_01c6;                              //br				IL_000d
	IL_01c6:            goto IL_0129;                                               //br				IL_0129
	IL_01cb:                                                                        //ldc.i4				0x6
	IL_01d0:            V_4=6;                                                      //stloc				V_4
	IL_01d4:            /*goto IL_000d;*/goto IL_01d9;                              //br				IL_000d
	IL_01d9:                                                                        //ldarg.0
	IL_01da:            Temp_13=this->F_x12;                                        //ldfld				System::Int32 Root::T_x133 F_x12
	IL_01df:                                                                        //ldc.i4.1
	IL_01e0:                                                                        //add
	IL_01e1:                                                                        //ldarg.0
	IL_01e2:            Temp_14=this->F_x13;                                        //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_01e7:            Temp_15=Temp_14->Count;                                     //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_01ec:            if((Temp_13 + 1)>=Temp_15)goto IL_0195;                     //bge				IL_0195
	IL_01f1:                                                                        //ldc.i4				0x8
	IL_01f6:            V_4=8;                                                      //stloc				V_4
	IL_01fa:            /*goto IL_000d;*/goto IL_01ff;                              //br				IL_000d
	IL_01ff:                                                                        //ldc.i4.4
	IL_0200:                                                                        //dup
	IL_0201:                                                                        //dup
	IL_0202:                                                                        //ldc.i4.2
	IL_0203:                                                                        //sub
	IL_0204:                                                                        //blt				IL_0200
	IL_0209:                                                                        //pop
	IL_020a:            goto IL_0253;                                               //br.s				IL_0253
	IL_020c:                                                                        //ldarg.0
	IL_020d:                                                                        //ldc.i4.m1
	IL_020e:            this->F_x12=-1;                                             //stfld				System::Int32 Root::T_x133 F_x12
	IL_0213:                                                                        //ldarg.0
	IL_0214:                                                                        //ldc.i4.0
	IL_0215:            Temp_16=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_021a:            this->F_x13=Temp_16;                                        //stfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_021f:                                                                        //ldloc.0
	IL_0220:            Temp_17=V_0->Types;                                         //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_0225:            Temp_18=safe_cast<System::Collections::IEnumerable^>(Temp_17)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_022a:            V_2=Temp_18;                                                //stloc.2
	IL_022b:                                                                        //ldc.i4				0x4
	IL_0230:            V_4=4;                                                      //stloc				V_4
	IL_0234:            /*goto IL_000d;*/goto IL_0239;                              //br				IL_000d
	IL_0239:            /*goto IL_0045;*/goto IL_004401;                            //br				IL_0045
	IL_023e:                                                                        //ldarg.0
	IL_023f:                                                                        //dup
	IL_0240:            Temp_20=this->F_x1;                                         //ldfld				System::Int32 Root::T_x133 F_x1
	IL_0245:                                                                        //ldc.i4.1
	IL_0246:                                                                        //add
	IL_0247:            this->F_x1=(Temp_20 + 1);                                   //stfld				System::Int32 Root::T_x133 F_x1
	IL_024c:                                                                        //ldarg.0
	IL_024d:            Temp_21=this->M_x13();                                      //call				System::Boolean Root::T_x133::M_x13()
	IL_0252:            return Temp_21;                                             //ret
	IL_0253:                                                                        //ldarg.0
	IL_0254:                                                                        //dup
	IL_0255:            Temp_19=this->F_x12;                                        //ldfld				System::Int32 Root::T_x133 F_x12
	IL_025a:                                                                        //ldc.i4.1
	IL_025b:                                                                        //add
	IL_025c:            this->F_x12=(Temp_19 + 1);                                  //stfld				System::Int32 Root::T_x133 F_x12
	IL_0261:                                                                        //ldc.i4.1
	IL_0262:            return true;                                                //ret

}
inline System::Object^ Root::T_x133::M_x2()
//System::Collections::IEnumerator^::get_Current by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Collections::ArrayList^ Root::T_x133 F_x13
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_1=this->F_x12;                                         //ldfld				System::Int32 Root::T_x133 F_x12
	IL_000c:            Temp_2=Temp_0[Temp_1];                                      //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0011:            return Temp_2;                                              //ret

}
