#include "global_xref.h"

inline Root::T_x29::T_x29(Reflector::CodeModel::IAssemblyManager^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IAssembly^>^ Temp_3 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_4 = nullptr;
	Root::T_x133^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::ITypeReference^ Temp_9 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_10 = nullptr;
	System::Collections::IEnumerator^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Object^ Temp_13 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IAssembly^>^ V_0 = nullptr;
	Root::T_x133^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_000c:            this->F_x1=safe_cast<System::Collections::IDictionary^>(Temp_0);//stfld				System::Collections::IDictionary^ Root::T_x29 F_x1
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1=A_0->Assemblies;                                     //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0017:            Temp_2=safe_cast<System::Collections::ICollection^>(Temp_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_001c:                                                                        //conv.ovf.u4
	IL_001d:            Temp_3=gcnew array<Reflector::CodeModel::IAssembly^>(safe_cast<System::UInt32>(Temp_2));//newarr				Reflector::CodeModel::IAssembly
	IL_0022:            V_0=Temp_3;                                                 //stloc.0
	IL_0023:                                                                        //ldarg.1
	IL_0024:            Temp_4=A_0->Assemblies;                                     //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0029:                                                                        //ldloc.0
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:            safe_cast<System::Collections::ICollection^>(Temp_4)->CopyTo(safe_cast<System::Array^>(V_0),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_0030:                                                                        //ldloc.0
	IL_0031:            Temp_5=gcnew Root::T_x133(V_0);                             //newobj				void Root::T_x133::.ctor(array<Reflector::CodeModel::IAssembly^>^)
	IL_0036:            V_1=Temp_5;                                                 //stloc.1
	IL_0037:            goto IL_0095;                                               //br.s				IL_0095
	IL_003701:          try{
	IL_0039:            goto IL_003b;                                               //br.s				IL_003b
	IL_003b:                                                                        //ldloc.s				V_5
	IL_003d:            Temp_12=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0042:            if(Temp_12)goto IL_0046;                                    //brtrue.s				IL_0046
	IL_0044:            goto IL_005f;                                               //br.s				IL_005f
	IL_0046:                                                                        //ldloc.s				V_5
	IL_0048:            Temp_13=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004d:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_0052:            V_4=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_13);//stloc.s				V_4
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldloc.s				V_4
	IL_0057:                                                                        //ldloc.2
	IL_0058:            this->M_x1(V_4,V_2);                                        //call				void Root::T_x29::M_x1(Reflector::CodeModel::ITypeReference^,Reflector::CodeModel::ITypeDeclaration^)
	IL_005d:            goto IL_003b;                                               //br.s				IL_003b
	IL_005f:            goto IL_0095;                                               //leave.s				IL_0095
	                    ;}
	                    finally{
	IL_0061:                                                                        //ldloc.s				V_5
	IL_0063:                                                                        //isinst				System::IDisposable
	IL_0068:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_006a:                                                                        //ldloc.s				V_6
	IL_006c:            if(V_6==nullptr)goto IL_0079;                               //brfalse.s				IL_0079
	IL_006e:            goto IL_0070;                                               //br.s				IL_0070
	IL_0070:                                                                        //ldloc.s				V_6
	IL_0072:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0077:            goto IL_0079;                                               //br.s				IL_0079
	IL_0079:                                                                        //endfinally
	                    ;}
	IL_007a:                                                                        //ldloc.2
	IL_007b:            Temp_10=V_2->Interfaces;                                    //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_0080:            Temp_11=safe_cast<System::Collections::IEnumerable^>(Temp_10)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0085:            V_5=Temp_11;                                                //stloc.s				V_5
	IL_0087:            /*goto IL_0039;*/goto IL_003701;                            //br.s				IL_0039
	IL_0089:                                                                        //ldloc.2
	IL_008a:            Temp_9=V_2->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_008f:            V_3=Temp_9;                                                 //stloc.3
	IL_0090:                                                                        //ldloc.3
	IL_0091:            if(V_3==nullptr)goto IL_007a;                               //brfalse.s				IL_007a
	IL_0093:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_0095:                                                                        //ldloc.1
	IL_0096:            Temp_6=V_1->M_x13();                                        //callvirt				System::Boolean Root::T_x133::M_x13()
	IL_009b:            if(Temp_6)goto IL_009f;                                     //brtrue.s				IL_009f
	IL_009d:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_009f:                                                                        //ldloc.1
	IL_00a0:            Temp_7=V_1->M_x2();                                         //callvirt				System::Object^ Root::T_x133::M_x2()
	IL_00a5:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_00aa:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_7);//stloc.2
	IL_00ab:                                                                        //ldloc.2
	IL_00ac:                                                                        //ldarg.2
	IL_00ad:            Temp_8=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_2),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_00b2:            if(!Temp_8)goto IL_0095;                                    //brfalse.s				IL_0095
	IL_00b4:            goto IL_0089;                                               //br.s				IL_0089
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:                                                                        //ldloc.3
	IL_00b8:                                                                        //ldloc.2
	IL_00b9:            this->M_x1(V_3,V_2);                                        //call				void Root::T_x29::M_x1(Reflector::CodeModel::ITypeReference^,Reflector::CodeModel::ITypeDeclaration^)
	IL_00be:            goto IL_007a;                                               //br.s				IL_007a
	IL_00c0:            return;                                                     //ret

}
inline System::Collections::IEnumerable^ Root::T_x29::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IDictionary^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x29 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_000c:                                                                        //castclass				System::Collections::ArrayList
	IL_0011:            V_0=safe_cast<System::Collections::ArrayList^>(Temp_1);     //stloc.0
	IL_0012:                                                                        //ldloc.0
	IL_0013:            if(V_0==nullptr)goto IL_0022;                               //brfalse.s				IL_0022
	IL_0015:            goto IL_0018;                                               //br.s				IL_0018
	IL_0017:                                                                        //break
	IL_0018:            goto IL_001a;                                               //br.s				IL_001a
	IL_001a:                                                                        //ldloc.0
	IL_001b:            V_0->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0020:                                                                        //ldloc.0
	IL_0021:            return safe_cast<System::Collections::IEnumerable^>(V_0);   //ret
	IL_0022:                                                                        //ldc.i4.0
	IL_0023:            Temp_2=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0028:            return safe_cast<System::Collections::IEnumerable^>(Temp_2);//ret

}
inline void Root::T_x29::M_x1(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::ITypeDeclaration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::IDictionary^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Collections::ArrayList^ Temp_6 = nullptr;
	System::Collections::IDictionary^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_003b;                                               //br.s				IL_003b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0069;case 1:goto IL_00a0;case 2:goto IL_00eb;case 3:goto IL_007e;case 4:goto IL_005b;case 5:goto IL_0140;case 6:goto IL_011c;case 7:goto IL_004d;case 8:goto IL_00d8;case 9:goto IL_00ff;case 10:goto IL_00c1;case 11:goto IL_00b1;};//switch				(IL_0069,IL_00a0,IL_00eb,IL_007e,IL_005b,IL_0140,IL_011c,IL_004d,IL_00d8,IL_00ff,IL_00c1,IL_00b1)
	IL_003b:                                                                        //ldarg.1
	IL_003c:            Temp_0=A_0->GenericType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReference::get_GenericType()
	IL_0041:            V_0=Temp_0;                                                 //stloc.0
	IL_0042:                                                                        //ldc.i4				0x7
	IL_0047:            V_3=7;                                                      //stloc				V_3
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:                                                                        //ldloc.0
	IL_004e:            if(V_0==nullptr)goto IL_0080;                               //brfalse.s				IL_0080
	IL_0050:                                                                        //ldc.i4				0x4
	IL_0055:            V_3=4;                                                      //stloc				V_3
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_00da;                                               //br.s				IL_00da
	IL_005d:            return;                                                     //ret
	IL_005e:                                                                        //ldc.i4				0x0
	IL_0063:            V_3=0;                                                      //stloc				V_3
	IL_0067:            /*goto IL_0002;*/goto IL_0069;                              //br.s				IL_0002
	IL_0069:                                                                        //ldloc.1
	IL_006a:                                                                        //ldloc.2
	IL_006b:            Temp_1=V_1[V_2];                                            //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0070:                                                                        //ldarg.2
	IL_0071:            if(Temp_1!=safe_cast<System::Object^>(A_1))goto IL_00ed;    //bne.un.s				IL_00ed
	IL_0073:                                                                        //ldc.i4				0x3
	IL_0078:            V_3=3;                                                      //stloc				V_3
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_005d;                                               //br.s				IL_005d
	IL_0080:                                                                        //ldarg.0
	IL_0081:            Temp_2=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x29 F_x1
	IL_0086:                                                                        //ldarg.1
	IL_0087:            Temp_3=Temp_2[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_008c:                                                                        //castclass				System::Collections::ArrayList
	IL_0091:            V_1=safe_cast<System::Collections::ArrayList^>(Temp_3);     //stloc.1
	IL_0092:                                                                        //ldc.i4				0x1
	IL_0097:            V_3=1;                                                      //stloc				V_3
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            if(V_1!=nullptr)goto IL_0101;                               //brtrue.s				IL_0101
	IL_00a3:                                                                        //ldc.i4				0xb
	IL_00a8:            V_3=11;                                                     //stloc				V_3
	IL_00ac:            /*goto IL_0002;*/goto IL_00b1;                              //br				IL_0002
	IL_00b1:            goto IL_011e;                                               //br.s				IL_011e
	IL_00b3:                                                                        //ldc.i4				0xa
	IL_00b8:            V_3=10;                                                     //stloc				V_3
	IL_00bc:            /*goto IL_0002;*/goto IL_00c1;                              //br				IL_0002
	IL_00c1:                                                                        //ldloc.2
	IL_00c2:                                                                        //ldloc.1
	IL_00c3:            Temp_5=V_1->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00c8:            if(V_2<Temp_5)goto IL_005e;                                 //blt.s				IL_005e
	IL_00ca:                                                                        //ldc.i4				0x8
	IL_00cf:            V_3=8;                                                      //stloc				V_3
	IL_00d3:            /*goto IL_0002;*/goto IL_00d8;                              //br				IL_0002
	IL_00d8:            goto IL_0142;                                               //br.s				IL_0142
	IL_00da:                                                                        //ldloc.0
	IL_00db:            A_0=V_0;                                                    //starg.s				A_0
	IL_00dd:                                                                        //ldc.i4				0x2
	IL_00e2:            V_3=2;                                                      //stloc				V_3
	IL_00e6:            /*goto IL_0002;*/goto IL_00eb;                              //br				IL_0002
	IL_00eb:            goto IL_0080;                                               //br.s				IL_0080
	IL_00ed:                                                                        //ldloc.2
	IL_00ee:                                                                        //ldc.i4.1
	IL_00ef:                                                                        //add
	IL_00f0:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00f1:                                                                        //ldc.i4				0x9
	IL_00f6:            V_3=9;                                                      //stloc				V_3
	IL_00fa:            /*goto IL_0002;*/goto IL_00ff;                              //br				IL_0002
	IL_00ff:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_0101:                                                                        //ldc.i4.4
	IL_0102:                                                                        //dup
	IL_0103:                                                                        //dup
	IL_0104:                                                                        //ldc.i4.2
	IL_0105:                                                                        //sub
	IL_0106:                                                                        //blt				IL_0102
	IL_010b:                                                                        //pop
	IL_010c:                                                                        //ldc.i4.0
	IL_010d:            V_2=0;                                                      //stloc.2
	IL_010e:                                                                        //ldc.i4				0x6
	IL_0113:            V_3=6;                                                      //stloc				V_3
	IL_0117:            /*goto IL_0002;*/goto IL_011c;                              //br				IL_0002
	IL_011c:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_011e:                                                                        //ldc.i4.0
	IL_011f:            Temp_6=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0124:            V_1=Temp_6;                                                 //stloc.1
	IL_0125:                                                                        //ldarg.0
	IL_0126:            Temp_7=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x29 F_x1
	IL_012b:                                                                        //ldarg.1
	IL_012c:                                                                        //ldloc.1
	IL_012d:            Temp_7->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_1));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0132:                                                                        //ldc.i4				0x5
	IL_0137:            V_3=5;                                                      //stloc				V_3
	IL_013b:            /*goto IL_0002;*/goto IL_0140;                              //br				IL_0002
	IL_0140:            goto IL_0101;                                               //br.s				IL_0101
	IL_0142:                                                                        //ldloc.1
	IL_0143:                                                                        //ldarg.2
	IL_0144:            Temp_4=V_1->Add(safe_cast<System::Object^>(A_1));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0149:                                                                        //pop
	IL_014a:            return;                                                     //ret

}
