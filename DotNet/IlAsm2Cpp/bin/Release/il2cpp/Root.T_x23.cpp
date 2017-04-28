#include "global_xref.h"

inline Root::T_x23::T_x23(System::Object^ A_0,array<Reflector::CodeModel::IAssembly^>^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IModuleCollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Collections::IEnumerator^ Temp_8 = nullptr;
	Root::T_x121^ Temp_9 = nullptr;
	System::Collections::ArrayList^ Temp_10 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Boolean Temp_13 = false;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	array<Reflector::CodeModel::IAssembly^>^ Temp_16 = nullptr;
	Root::T_x121^ Temp_17 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_18 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IType^ Temp_19 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_20 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_21 = nullptr;
	Root::T_x121^ Temp_22 = nullptr;
	Reflector::CodeModel::FieldVisibility Temp_23 = (Reflector::CodeModel::FieldVisibility)0;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_25 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_26 = nullptr;
	Root::T_x121^ Temp_27 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	Reflector::CodeModel::IModule^ V_2 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_5 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_6 = nullptr;
	System::Collections::ArrayList^ V_7 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_8 = nullptr;
	Reflector::CodeModel::IAssembly^ V_9 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Collections::IEnumerator^ V_12 = nullptr;
	System::IDisposable^ V_13 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x13=0;                                              //stfld				System::Int32 Root::T_x23 F_x13
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x23 F_x1
	IL_0014:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0019:            V_0=Temp_0;                                                 //stloc.0
	IL_001a:                                                                        //ldarg.2
	IL_001b:            V_10=A_1;                                                   //stloc.s				V_10
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            V_11=0;                                                     //stloc.s				V_11
	IL_0020:            goto IL_0084;                                               //br.s				IL_0084
	IL_0022:            Temp_10=gcnew System::Collections::ArrayList();             //newobj				void System::Collections::ArrayList::.ctor()
	IL_0027:            V_7=Temp_10;                                                //stloc.s				V_7
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_11=Root::T_x23::M_x1(A_0);                             //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x23::M_x1(System::Object^)
	IL_002f:            V_8=Temp_11;                                                //stloc.s				V_8
	IL_0031:                                                                        //ldarg.2
	IL_0032:            V_10=A_1;                                                   //stloc.s				V_10
	IL_0034:                                                                        //ldc.i4.0
	IL_0035:            V_11=0;                                                     //stloc.s				V_11
	IL_0037:            goto IL_0069;                                               //br.s				IL_0069
	IL_0039:                                                                        //ldloc.s				V_5
	IL_003b:            Temp_18=V_5->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0040:                                                                        //ldc.i4.1
	IL_0041:            if(safe_cast<System::Int32>(Temp_18)!=1)goto IL_005c;       //bne.un.s				IL_005c
	IL_0043:            goto IL_01b2;                                               //br				IL_01b2
	IL_0048:                                                                        //ldloc.s				V_11
	IL_004a:                                                                        //ldc.i4.1
	IL_004b:                                                                        //add
	IL_004c:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_004e:            goto IL_0084;                                               //br.s				IL_0084
	IL_0050:                                                                        //ldloc.s				V_7
	IL_0052:                                                                        //ldloc.s				V_9
	IL_0054:            Temp_14=V_7->Add(safe_cast<System::Object^>(V_9));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0059:                                                                        //pop
	IL_005a:            goto IL_008e;                                               //br.s				IL_008e
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_9=this->F_x2;                                          //ldfld				Root::T_x121^ Root::T_x23 F_x2
	IL_0062:            if(Temp_9!=nullptr)goto IL_01c9;                            //brtrue				IL_01c9
	IL_0067:            goto IL_0022;                                               //br.s				IL_0022
	IL_0069:                                                                        //ldloc.s				V_11
	IL_006b:                                                                        //ldloc.s				V_10
	IL_006d:            Temp_12=V_10->Length;                                       //ldlen
	IL_006e:                                                                        //conv.i4
	IL_006f:            if(V_11<Temp_12)goto IL_016b;                               //blt				IL_016b
	IL_0074:            goto IL_0096;                                               //br.s				IL_0096
	IL_0076:                                                                        //ldarg.1
	IL_0077:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_007c:            V_5=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.s				V_5
	IL_007e:                                                                        //ldloc.s				V_5
	IL_0080:            if(V_5==nullptr)goto IL_005c;                               //brfalse.s				IL_005c
	IL_0082:            goto IL_0039;                                               //br.s				IL_0039
	IL_0084:                                                                        //ldloc.s				V_11
	IL_0086:                                                                        //ldloc.s				V_10
	IL_0088:            Temp_1=V_10->Length;                                        //ldlen
	IL_0089:                                                                        //conv.i4
	IL_008a:            if(V_11<Temp_1)goto IL_00d2;                                //blt.s				IL_00d2
	IL_008c:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_008e:                                                                        //ldloc.s				V_11
	IL_0090:                                                                        //ldc.i4.1
	IL_0091:                                                                        //add
	IL_0092:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_0094:            goto IL_0069;                                               //br.s				IL_0069
	IL_0096:                                                                        //ldloc.s				V_7
	IL_0098:            Temp_15=V_7->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_009d:                                                                        //conv.ovf.u4
	IL_009e:            Temp_16=gcnew array<Reflector::CodeModel::IAssembly^>(safe_cast<System::UInt32>(Temp_15));//newarr				Reflector::CodeModel::IAssembly
	IL_00a3:            A_1=Temp_16;                                                //starg.s				A_1
	IL_00a5:                                                                        //ldloc.s				V_7
	IL_00a7:                                                                        //ldarg.2
	IL_00a8:                                                                        //ldc.i4.0
	IL_00a9:            V_7->CopyTo(safe_cast<System::Array^>(A_1),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_00ae:                                                                        //ldarg.0
	IL_00af:                                                                        //ldarg.2
	IL_00b0:            Temp_17=gcnew Root::T_x121(A_1);                            //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::IAssembly^>^)
	IL_00b5:            this->F_x2=Temp_17;                                         //stfld				Root::T_x121^ Root::T_x23 F_x2
	IL_00ba:            goto IL_01c9;                                               //br				IL_01c9
	IL_00bf:                                                                        //ldloc.3
	IL_00c0:            Temp_24=safe_cast<Reflector::CodeModel::IMemberReference^>(V_3)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00c5:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00ca:            V_4=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_24);//stloc.s				V_4
	IL_00cc:                                                                        //ldloc.s				V_4
	IL_00ce:            if(V_4==nullptr)goto IL_0076;                               //brfalse.s				IL_0076
	IL_00d0:            goto IL_014f;                                               //br.s				IL_014f
	IL_00d2:                                                                        //ldloc.s				V_10
	IL_00d4:                                                                        //ldloc.s				V_11
	IL_00d6:                                                                        //ldelem.ref
	IL_00d7:            V_1=V_10[V_11];                                             //stloc.1
	IL_00d8:                                                                        //ldloc.0
	IL_00d9:                                                                        //ldloc.1
	IL_00da:            Temp_2=V_0->Add(safe_cast<System::Object^>(V_1));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00df:                                                                        //pop
	IL_00e0:                                                                        //ldloc.1
	IL_00e1:            Temp_3=V_1->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_00e6:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_00eb:            V_12=Temp_4;                                                //stloc.s				V_12
	IL_00ed:            /*goto IL_010d;*/goto IL_010801;                            //br.s				IL_010d
	IL_00ef:                                                                        //ldarg.0
	IL_00f0:                                                                        //ldloc.0
	IL_00f1:            Temp_8=V_0->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_00f6:            this->F_x12=Temp_8;                                         //stfld				System::Collections::IEnumerator^ Root::T_x23 F_x12
	IL_00fb:                                                                        //ldarg.1
	IL_00fc:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_0101:            V_3=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.3
	IL_0102:                                                                        //ldloc.3
	IL_0103:            if(V_3==nullptr)goto IL_0076;                               //brfalse				IL_0076
	IL_0108:            goto IL_01a1;                                               //br				IL_01a1
	IL_010801:          try{
	IL_010d:            goto IL_010f;                                               //br.s				IL_010f
	IL_010f:                                                                        //ldloc.s				V_12
	IL_0111:            Temp_5=V_12->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0116:            if(Temp_5)goto IL_011a;                                     //brtrue.s				IL_011a
	IL_0118:            goto IL_0131;                                               //br.s				IL_0131
	IL_011a:                                                                        //ldloc.s				V_12
	IL_011c:            Temp_6=V_12->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0121:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_0126:            V_2=safe_cast<Reflector::CodeModel::IModule^>(Temp_6);      //stloc.2
	IL_0127:                                                                        //ldloc.0
	IL_0128:                                                                        //ldloc.2
	IL_0129:            Temp_7=V_0->Add(safe_cast<System::Object^>(V_2));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_012e:                                                                        //pop
	IL_012f:            goto IL_010f;                                               //br.s				IL_010f
	IL_0131:            goto IL_0048;                                               //leave				IL_0048
	                    ;}
	                    finally{
	IL_0136:                                                                        //ldloc.s				V_12
	IL_0138:                                                                        //isinst				System::IDisposable
	IL_013d:            V_13=dynamic_cast<System::IDisposable^>(V_12);              //stloc.s				V_13
	IL_013f:                                                                        //ldloc.s				V_13
	IL_0141:            if(V_13==nullptr)goto IL_014e;                              //brfalse.s				IL_014e
	IL_0143:            goto IL_0145;                                               //br.s				IL_0145
	IL_0145:                                                                        //ldloc.s				V_13
	IL_0147:            /*V_13->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_014c:            goto IL_014e;                                               //br.s				IL_014e
	IL_014e:                                                                        //endfinally
	                    ;}
	IL_014f:                                                                        //ldarg.0
	IL_0150:                                                                        //ldloc.s				V_4
	IL_0152:            Temp_25=V_4->Resolve();                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0157:            Temp_26=Root::T_x23::M_x1(Temp_25);                         //call				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x23::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_015c:            Temp_27=gcnew Root::T_x121(Temp_26);                        //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::ITypeDeclaration^>^)
	IL_0161:            this->F_x2=Temp_27;                                         //stfld				Root::T_x121^ Root::T_x23 F_x2
	IL_0166:            goto IL_0076;                                               //br				IL_0076
	IL_016b:                                                                        //ldloc.s				V_10
	IL_016d:                                                                        //ldloc.s				V_11
	IL_016f:                                                                        //ldelem.ref
	IL_0170:            V_9=V_10[V_11];                                             //stloc.s				V_9
	IL_0172:                                                                        //ldloc.s				V_9
	IL_0174:                                                                        //ldloc.s				V_8
	IL_0176:            Temp_13=Root::T_x23::M_x1(V_9,V_8);                         //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IAssembly^,Reflector::CodeModel::IAssemblyReference^)
	IL_017b:            if(!Temp_13)goto IL_008e;                                   //brfalse				IL_008e
	IL_0180:            goto IL_0050;                                               //br				IL_0050
	IL_0185:                                                                        //ldarg.0
	IL_0186:                                                                        //ldloc.s				V_6
	IL_0188:            Temp_20=V_6->Resolve();                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_018d:            Temp_21=Root::T_x23::M_x1(Temp_20);                         //call				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x23::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0192:            Temp_22=gcnew Root::T_x121(Temp_21);                        //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::ITypeDeclaration^>^)
	IL_0197:            this->F_x2=Temp_22;                                         //stfld				Root::T_x121^ Root::T_x23 F_x2
	IL_019c:            goto IL_005c;                                               //br				IL_005c
	IL_01a1:                                                                        //ldloc.3
	IL_01a2:            Temp_23=V_3->Visibility;                                    //callvirt				Reflector::CodeModel::FieldVisibility Reflector::CodeModel::IFieldDeclaration::get_Visibility()
	IL_01a7:                                                                        //ldc.i4.1
	IL_01a8:            if(safe_cast<System::Int32>(Temp_23)!=1)goto IL_0076;       //bne.un				IL_0076
	IL_01ad:            goto IL_00bf;                                               //br				IL_00bf
	IL_01b2:                                                                        //ldloc.s				V_5
	IL_01b4:            Temp_19=safe_cast<Reflector::CodeModel::IMemberReference^>(V_5)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_01b9:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_01be:            V_6=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_19);//stloc.s				V_6
	IL_01c0:                                                                        //ldloc.s				V_6
	IL_01c2:            if(V_6==nullptr)goto IL_005c;                               //brfalse				IL_005c
	IL_01c7:            goto IL_0185;                                               //br.s				IL_0185
	IL_01c9:            return;                                                     //ret

}
inline System::Int32 Root::T_x23::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x121^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0052;case 2:goto IL_0039;case 3:goto IL_0066;};//switch				(IL_000b,IL_0052,IL_0039,IL_0066)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_3=this->F_x13;                                         //ldfld				System::Int32 Root::T_x23 F_x13
	IL_002c:            if(Temp_3!=0)goto IL_0047;                                  //brtrue.s				IL_0047
	IL_002e:                                                                        //ldc.i4				0x2
	IL_0033:            V_0=2;                                                      //stloc				V_0
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_006b;                                               //br.s				IL_006b
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x121^ Root::T_x23 F_x2
	IL_0041:            Temp_2=Temp_1->M_x1();                                      //callvirt				System::Int32 Root::T_x121::M_x1()
	IL_0046:            return Temp_2;                                              //ret
	IL_0047:                                                                        //ldc.i4				0x1
	IL_004c:            V_0=1;                                                      //stloc				V_0
	IL_0050:            /*goto IL_000d;*/goto IL_0052;                              //br.s				IL_000d
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x23 F_x13
	IL_0058:                                                                        //ldc.i4.1
	IL_0059:            if(Temp_0!=1)goto IL_006d;                                  //bne.un.s				IL_006d
	IL_005b:                                                                        //ldc.i4				0x3
	IL_0060:            V_0=3;                                                      //stloc				V_0
	IL_0064:            /*goto IL_000d;*/goto IL_0066;                              //br.s				IL_000d
	IL_0066:            goto IL_0069;                                               //br.s				IL_0069
	IL_0068:                                                                        //break
	IL_0069:            goto IL_003b;                                               //br.s				IL_003b
	IL_006b:                                                                        //ldc.i4.0
	IL_006c:            return 0;                                                   //ret
	IL_006d:                                                                        //ldc.i4.s				100
	IL_006f:            return 100;                                                 //ret

}
inline System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IAssembly^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IAssemblyReferenceCollection^ Temp_5 = nullptr;
	System::Collections::IEnumerator^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	Reflector::CodeModel::IModuleCollection^ Temp_8 = nullptr;
	System::Collections::IEnumerator^ Temp_9 = nullptr;
	//local variables.
	Reflector::CodeModel::IModule^ V_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_1 = nullptr;
	System::Boolean V_2 = false;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_6=2;                                                      //stloc				V_6
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_6
	IL_0011:            switch(V_6){case 0:goto IL_0039;case 1:goto IL_0241;case 2:goto IL_000b;};//switch				(IL_0039,IL_0241,IL_000b)
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldarg.1
	IL_0024:            Temp_7=A_0->Equals(safe_cast<System::Object^>(A_1));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0029:            if(!Temp_7)goto IL_0227;                                    //brfalse				IL_0227
	IL_002e:                                                                        //ldc.i4				0x0
	IL_0033:            V_6=0;                                                      //stloc				V_6
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_0223;                                               //br				IL_0223
	IL_003901:          try{
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_6=2;                                                      //stloc				V_6
	IL_0047:            /*goto IL_004b;*/goto IL_0049;                              //br.s				IL_004b
	IL_0049:            goto IL_0068;                                               //br.s				IL_0068
	IL_004b:                                                                        //ldloc				V_6
	IL_004f:            switch(V_6){case 0:goto IL_008b;case 1:goto IL_01b3;case 2:goto IL_0049;case 3:goto IL_01c6;case 4:goto IL_0075;};//switch				(IL_008b,IL_01b3,IL_0049,IL_01c6,IL_0075)
	IL_0068:            goto IL_006a;                                               //br.s				IL_006a
	IL_006a:                                                                        //ldc.i4				0x4
	IL_006f:            V_6=4;                                                      //stloc				V_6
	IL_0073:            /*goto IL_004b;*/goto IL_0075;                              //br.s				IL_004b
	IL_0075:                                                                        //ldloc.3
	IL_0076:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_007b:            if(Temp_3)goto IL_018c;                                     //brtrue				IL_018c
	IL_0080:                                                                        //ldc.i4				0x0
	IL_0085:            V_6=0;                                                      //stloc				V_6
	IL_0089:            /*goto IL_004b;*/goto IL_008b;                              //br.s				IL_004b
	IL_008b:            goto IL_01b8;                                               //br				IL_01b8
	IL_008B01:          try{
	IL_0090:                                                                        //ldc.i4				0x1
	IL_0095:            V_6=1;                                                      //stloc				V_6
	IL_0099:            /*goto IL_009d;*/goto IL_009b;                              //br.s				IL_009d
	IL_009b:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_009d:                                                                        //ldloc				V_6
	IL_00a1:            switch(V_6){case 0:goto IL_0126;case 1:goto IL_009b;case 2:goto IL_00e3;case 3:goto IL_010f;case 4:goto IL_00f2;case 5:goto IL_0136;case 6:goto IL_00cf;};//switch				(IL_0126,IL_009b,IL_00e3,IL_010f,IL_00f2,IL_0136,IL_00cf)
	IL_00c2:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_00c4:                                                                        //ldc.i4				0x6
	IL_00c9:            V_6=6;                                                      //stloc				V_6
	IL_00cd:            /*goto IL_009d;*/goto IL_00cf;                              //br.s				IL_009d
	IL_00cf:                                                                        //ldloc.s				V_4
	IL_00d1:            Temp_1=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00d6:            if(Temp_1)goto IL_00f7;                                     //brtrue.s				IL_00f7
	IL_00d8:                                                                        //ldc.i4				0x2
	IL_00dd:            V_6=2;                                                      //stloc				V_6
	IL_00e1:            /*goto IL_009d;*/goto IL_00e3;                              //br.s				IL_009d
	IL_00e3:            goto IL_0128;                                               //br.s				IL_0128
	IL_00e5:                                                                        //ldc.i4.1
	IL_00e6:            V_2=true;                                                   //stloc.2
	IL_00e7:                                                                        //ldc.i4				0x4
	IL_00ec:            V_6=4;                                                      //stloc				V_6
	IL_00f0:            /*goto IL_009d;*/goto IL_00f2;                              //br.s				IL_009d
	IL_00f2:            goto IL_0246;                                               //leave				IL_0246
	IL_00f7:                                                                        //ldloc.s				V_4
	IL_00f9:            Temp_2=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00fe:                                                                        //castclass				Reflector::CodeModel::IAssemblyReference
	IL_0103:            V_1=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_2);//stloc.1
	IL_0104:                                                                        //ldc.i4				0x3
	IL_0109:            V_6=3;                                                      //stloc				V_6
	IL_010d:            /*goto IL_009d;*/goto IL_010f;                              //br.s				IL_009d
	IL_010f:                                                                        //ldloc.1
	IL_0110:                                                                        //ldarg.1
	IL_0111:            Temp_0=V_1->Equals(safe_cast<System::Object^>(A_1));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0116:            if(!Temp_0)goto IL_00c4;                                    //brfalse.s				IL_00c4
	IL_0118:                                                                        //ldc.i4				0x0
	IL_011d:            V_6=0;                                                      //stloc				V_6
	IL_0121:            /*goto IL_009d;*/goto IL_0126;                              //br				IL_009d
	IL_0126:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_0128:                                                                        //ldc.i4				0x5
	IL_012d:            V_6=5;                                                      //stloc				V_6
	IL_0131:            /*goto IL_009d;*/goto IL_0136;                              //br				IL_009d
	IL_0136:            goto IL_006a;                                               //leave				IL_006a
	                    ;}
	                    finally{
	IL_013b:            goto IL_0152;                                               //br.s				IL_0152
	IL_013d:                                                                        //ldloc				V_6
	IL_0141:            switch(V_6){case 0:goto IL_0189;case 1:goto IL_0166;case 2:goto IL_0175;};//switch				(IL_0189,IL_0166,IL_0175)
	IL_0152:                                                                        //ldloc.s				V_4
	IL_0154:                                                                        //isinst				System::IDisposable
	IL_0159:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_015b:                                                                        //ldc.i4				0x1
	IL_0160:            V_6=1;                                                      //stloc				V_6
	IL_0164:            /*goto IL_013d;*/goto IL_0166;                              //br.s				IL_013d
	IL_0166:                                                                        //ldloc.s				V_5
	IL_0168:            if(V_5==nullptr)goto IL_018b;                               //brfalse.s				IL_018b
	IL_016a:                                                                        //ldc.i4				0x2
	IL_016f:            V_6=2;                                                      //stloc				V_6
	IL_0173:            /*goto IL_013d;*/goto IL_0175;                              //br.s				IL_013d
	IL_0175:            goto IL_0177;                                               //br.s				IL_0177
	IL_0177:                                                                        //ldloc.s				V_5
	IL_0179:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_017e:                                                                        //ldc.i4				0x0
	IL_0183:            V_6=0;                                                      //stloc				V_6
	IL_0187:            /*goto IL_013d;*/goto IL_0189;                              //br.s				IL_013d
	IL_0189:            goto IL_018b;                                               //br.s				IL_018b
	IL_018b:                                                                        //endfinally
	                    ;}
	IL_018c:                                                                        //ldloc.3
	IL_018d:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0192:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_0197:            V_0=safe_cast<Reflector::CodeModel::IModule^>(Temp_4);      //stloc.0
	IL_0198:                                                                        //ldloc.0
	IL_0199:            Temp_5=V_0->AssemblyReferences;                             //callvirt				Reflector::CodeModel::IAssemblyReferenceCollection^ Reflector::CodeModel::IModule::get_AssemblyReferences()
	IL_019e:            Temp_6=safe_cast<System::Collections::IEnumerable^>(Temp_5)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_01a3:            V_4=Temp_6;                                                 //stloc.s				V_4
	IL_01a5:                                                                        //ldc.i4				0x1
	IL_01aa:            V_6=1;                                                      //stloc				V_6
	IL_01ae:            /*goto IL_004b;*/goto IL_01b3;                              //br				IL_004b
	IL_01b3:            /*goto IL_0090;*/goto IL_008B01;                            //br				IL_0090
	IL_01b8:                                                                        //ldc.i4				0x3
	IL_01bd:            V_6=3;                                                      //stloc				V_6
	IL_01c1:            /*goto IL_004b;*/goto IL_01c6;                              //br				IL_004b
	IL_01c6:            goto IL_0225;                                               //leave.s				IL_0225
	                    ;}
	                    finally{
	IL_01c8:            goto IL_01df;                                               //br.s				IL_01df
	IL_01ca:                                                                        //ldloc				V_6
	IL_01ce:            switch(V_6){case 0:goto IL_0201;case 1:goto IL_0220;case 2:goto IL_01f2;};//switch				(IL_0201,IL_0220,IL_01f2)
	IL_01df:                                                                        //ldloc.3
	IL_01e0:                                                                        //isinst				System::IDisposable
	IL_01e5:            V_5=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_5
	IL_01e7:                                                                        //ldc.i4				0x2
	IL_01ec:            V_6=2;                                                      //stloc				V_6
	IL_01f0:            /*goto IL_01ca;*/goto IL_01f2;                              //br.s				IL_01ca
	IL_01f2:                                                                        //ldloc.s				V_5
	IL_01f4:            if(V_5==nullptr)goto IL_0222;                               //brfalse.s				IL_0222
	IL_01f6:                                                                        //ldc.i4				0x0
	IL_01fb:            V_6=0;                                                      //stloc				V_6
	IL_01ff:            /*goto IL_01ca;*/goto IL_0201;                              //br.s				IL_01ca
	IL_0201:                                                                        //ldc.i4.1
	IL_0202:                                                                        //dup
	IL_0203:                                                                        //dup
	IL_0204:                                                                        //ldc.i4.3
	IL_0205:                                                                        //add
	IL_0206:                                                                        //bgt				IL_0202
	IL_020b:                                                                        //pop
	IL_020c:            goto IL_020e;                                               //br.s				IL_020e
	IL_020e:                                                                        //ldloc.s				V_5
	IL_0210:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0215:                                                                        //ldc.i4				0x1
	IL_021a:            V_6=1;                                                      //stloc				V_6
	IL_021e:            /*goto IL_01ca;*/goto IL_0220;                              //br.s				IL_01ca
	IL_0220:            goto IL_0222;                                               //br.s				IL_0222
	IL_0222:                                                                        //endfinally
	                    ;}
	IL_0223:                                                                        //ldc.i4.1
	IL_0224:            return true;                                                //ret
	IL_0225:                                                                        //ldc.i4.0
	IL_0226:            return false;                                               //ret
	IL_0227:                                                                        //ldarg.0
	IL_0228:            Temp_8=A_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_022d:            Temp_9=safe_cast<System::Collections::IEnumerable^>(Temp_8)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0232:            V_3=Temp_9;                                                 //stloc.3
	IL_0233:                                                                        //ldc.i4				0x1
	IL_0238:            V_6=1;                                                      //stloc				V_6
	IL_023c:            /*goto IL_000d;*/goto IL_0241;                              //br				IL_000d
	IL_0241:            /*goto IL_003e;*/goto IL_003901;                            //br				IL_003e
	IL_0246:                                                                        //ldloc.2
	IL_0247:            return V_2;                                                 //ret

}
inline System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	System::Collections::IEnumerator^ Temp_5 = nullptr;
	Reflector::CodeModel::IMemberReference^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	System::Object^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	Reflector::CodeModel::IExpression^ V_1 = nullptr;
	Reflector::CodeModel::INamedArgumentExpression^ V_2 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_3 = nullptr;
	System::Boolean V_4 = false;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=A_0->Attributes;                                     //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0006:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000b:            V_5=Temp_1;                                                 //stloc.s				V_5
	IL_000d:            /*goto IL_0011;*/goto IL_001001;                            //br.s				IL_0011
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:            return false;                                               //ret
	IL_001001:          try{
	IL_0011:                                                                        //ldc.i4				0x2
	IL_0016:            V_8=2;                                                      //stloc				V_8
	IL_001a:            /*goto IL_001e;*/goto IL_001c;                              //br.s				IL_001e
	IL_001c:            goto IL_003b;                                               //br.s				IL_003b
	IL_001e:                                                                        //ldloc				V_8
	IL_0022:            switch(V_8){case 0:goto IL_0048;case 1:goto IL_005c;case 2:goto IL_001c;case 3:goto IL_0203;case 4:goto IL_0086;};//switch				(IL_0048,IL_005c,IL_001c,IL_0203,IL_0086)
	IL_003b:            goto IL_003d;                                               //br.s				IL_003d
	IL_003d:                                                                        //ldc.i4				0x0
	IL_0042:            V_8=0;                                                      //stloc				V_8
	IL_0046:            /*goto IL_001e;*/goto IL_0048;                              //br.s				IL_001e
	IL_0048:                                                                        //ldloc.s				V_5
	IL_004a:            Temp_2=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_004f:            if(Temp_2)goto IL_0061;                                     //brtrue.s				IL_0061
	IL_0051:                                                                        //ldc.i4				0x1
	IL_0056:            V_8=1;                                                      //stloc				V_8
	IL_005a:            /*goto IL_001e;*/goto IL_005c;                              //br.s				IL_001e
	IL_005c:            goto IL_01f5;                                               //br				IL_01f5
	IL_0061:                                                                        //ldloc.s				V_5
	IL_0063:            Temp_3=V_5->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0068:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_006d:            V_0=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_3);//stloc.0
	IL_006e:                                                                        //ldloc.0
	IL_006f:            Temp_4=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0074:            Temp_5=safe_cast<System::Collections::IEnumerable^>(Temp_4)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0079:            V_6=Temp_5;                                                 //stloc.s				V_6
	IL_007b:                                                                        //ldc.i4				0x4
	IL_0080:            V_8=4;                                                      //stloc				V_8
	IL_0084:            /*goto IL_001e;*/goto IL_0086;                              //br.s				IL_001e
	IL_0086:            /*goto IL_0088;*/goto IL_008601;                            //br.s				IL_0088
	IL_008601:          try{
	IL_0088:                                                                        //ldc.i4				0x3
	IL_008d:            V_8=3;                                                      //stloc				V_8
	IL_0091:            /*goto IL_0095;*/goto IL_0093;                              //br.s				IL_0095
	IL_0093:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_0095:                                                                        //ldloc				V_8
	IL_0099:            switch(V_8){case 0:goto IL_019f;case 1:goto IL_0111;case 2:goto IL_00f0;case 3:goto IL_0093;case 4:goto IL_0122;case 5:goto IL_018c;case 6:goto IL_015c;case 7:goto IL_0132;case 8:goto IL_00d7;case 9:goto IL_0149;case 10:goto IL_017b;};//switch				(IL_019f,IL_0111,IL_00f0,IL_0093,IL_0122,IL_018c,IL_015c,IL_0132,IL_00d7,IL_0149,IL_017b)
	IL_00ca:            goto IL_0124;                                               //br.s				IL_0124
	IL_00cc:                                                                        //ldc.i4				0x8
	IL_00d1:            V_8=8;                                                      //stloc				V_8
	IL_00d5:            /*goto IL_0095;*/goto IL_00d7;                              //br.s				IL_0095
	IL_00d7:                                                                        //ldarg.0
	IL_00d8:            Temp_9=this->F_x1;                                          //ldfld				System::Object^ Root::T_x23 F_x1
	IL_00dd:                                                                        //ldloc.3
	IL_00de:            Temp_10=Temp_9->Equals(safe_cast<System::Object^>(V_3));    //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00e3:            if(!Temp_10)goto IL_0124;                                   //brfalse.s				IL_0124
	IL_00e5:                                                                        //ldc.i4				0x2
	IL_00ea:            V_8=2;                                                      //stloc				V_8
	IL_00ee:            /*goto IL_0095;*/goto IL_00f0;                              //br.s				IL_0095
	IL_00f0:            goto IL_014b;                                               //br.s				IL_014b
	IL_00f2:                                                                        //ldloc.s				V_6
	IL_00f4:            Temp_8=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00f9:                                                                        //castclass				Reflector::CodeModel::IExpression
	IL_00fe:            V_1=safe_cast<Reflector::CodeModel::IExpression^>(Temp_8);  //stloc.1
	IL_00ff:                                                                        //ldloc.1
	IL_0100:                                                                        //isinst				Reflector::CodeModel::INamedArgumentExpression
	IL_0105:            V_2=dynamic_cast<Reflector::CodeModel::INamedArgumentExpression^>(V_1);//stloc.2
	IL_0106:                                                                        //ldc.i4				0x1
	IL_010b:            V_8=1;                                                      //stloc				V_8
	IL_010f:            /*goto IL_0095;*/goto IL_0111;                              //br.s				IL_0095
	IL_0111:                                                                        //ldloc.2
	IL_0112:            if(V_2==nullptr)goto IL_0124;                               //brfalse.s				IL_0124
	IL_0114:                                                                        //ldc.i4				0x4
	IL_0119:            V_8=4;                                                      //stloc				V_8
	IL_011d:            /*goto IL_0095;*/goto IL_0122;                              //br				IL_0095
	IL_0122:            goto IL_0161;                                               //br.s				IL_0161
	IL_0124:                                                                        //ldc.i4				0x7
	IL_0129:            V_8=7;                                                      //stloc				V_8
	IL_012d:            /*goto IL_0095;*/goto IL_0132;                              //br				IL_0095
	IL_0132:                                                                        //ldloc.s				V_6
	IL_0134:            Temp_7=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0139:            if(Temp_7)goto IL_00f2;                                     //brtrue.s				IL_00f2
	IL_013b:                                                                        //ldc.i4				0x9
	IL_0140:            V_8=9;                                                      //stloc				V_8
	IL_0144:            /*goto IL_0095;*/goto IL_0149;                              //br				IL_0095
	IL_0149:            goto IL_0191;                                               //br.s				IL_0191
	IL_014b:                                                                        //ldc.i4.1
	IL_014c:            V_4=true;                                                   //stloc.s				V_4
	IL_014e:                                                                        //ldc.i4				0x6
	IL_0153:            V_8=6;                                                      //stloc				V_8
	IL_0157:            /*goto IL_0095;*/goto IL_015c;                              //br				IL_0095
	IL_015c:            goto IL_0259;                                               //leave				IL_0259
	IL_0161:                                                                        //ldloc.2
	IL_0162:            Temp_6=V_2->Member;                                         //callvirt				Reflector::CodeModel::IMemberReference^ Reflector::CodeModel::INamedArgumentExpression::get_Member()
	IL_0167:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_016c:            V_3=dynamic_cast<Reflector::CodeModel::IFieldReference^>(Temp_6);//stloc.3
	IL_016d:                                                                        //ldc.i4				0xa
	IL_0172:            V_8=10;                                                     //stloc				V_8
	IL_0176:            /*goto IL_0095;*/goto IL_017b;                              //br				IL_0095
	IL_017b:                                                                        //ldloc.3
	IL_017c:            if(V_3==nullptr)goto IL_0124;                               //brfalse.s				IL_0124
	IL_017e:                                                                        //ldc.i4				0x5
	IL_0183:            V_8=5;                                                      //stloc				V_8
	IL_0187:            /*goto IL_0095;*/goto IL_018c;                              //br				IL_0095
	IL_018c:            goto IL_00cc;                                               //br				IL_00cc
	IL_0191:                                                                        //ldc.i4				0x0
	IL_0196:            V_8=0;                                                      //stloc				V_8
	IL_019a:            /*goto IL_0095;*/goto IL_019f;                              //br				IL_0095
	IL_019f:            goto IL_003d;                                               //leave				IL_003d
	                    ;}
	                    finally{
	IL_01a4:            goto IL_01bb;                                               //br.s				IL_01bb
	IL_01a6:                                                                        //ldloc				V_8
	IL_01aa:            switch(V_8){case 0:goto IL_01f2;case 1:goto IL_01de;case 2:goto IL_01cf;};//switch				(IL_01f2,IL_01de,IL_01cf)
	IL_01bb:                                                                        //ldloc.s				V_6
	IL_01bd:                                                                        //isinst				System::IDisposable
	IL_01c2:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_01c4:                                                                        //ldc.i4				0x2
	IL_01c9:            V_8=2;                                                      //stloc				V_8
	IL_01cd:            /*goto IL_01a6;*/goto IL_01cf;                              //br.s				IL_01a6
	IL_01cf:                                                                        //ldloc.s				V_7
	IL_01d1:            if(V_7==nullptr)goto IL_01f4;                               //brfalse.s				IL_01f4
	IL_01d3:                                                                        //ldc.i4				0x1
	IL_01d8:            V_8=1;                                                      //stloc				V_8
	IL_01dc:            /*goto IL_01a6;*/goto IL_01de;                              //br.s				IL_01a6
	IL_01de:            goto IL_01e0;                                               //br.s				IL_01e0
	IL_01e0:                                                                        //ldloc.s				V_7
	IL_01e2:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01e7:                                                                        //ldc.i4				0x0
	IL_01ec:            V_8=0;                                                      //stloc				V_8
	IL_01f0:            /*goto IL_01a6;*/goto IL_01f2;                              //br.s				IL_01a6
	IL_01f2:            goto IL_01f4;                                               //br.s				IL_01f4
	IL_01f4:                                                                        //endfinally
	                    ;}
	IL_01f5:                                                                        //ldc.i4				0x3
	IL_01fa:            V_8=3;                                                      //stloc				V_8
	IL_01fe:            /*goto IL_001e;*/goto IL_0203;                              //br				IL_001e
	IL_0203:            goto IL_000f;                                               //leave				IL_000f
	                    ;}
	                    finally{
	IL_0208:            goto IL_021f;                                               //br.s				IL_021f
	IL_020a:                                                                        //ldloc				V_9
	IL_020e:            switch(V_9){case 0:goto IL_0242;case 1:goto IL_0256;case 2:goto IL_0233;};//switch				(IL_0242,IL_0256,IL_0233)
	IL_021f:                                                                        //ldloc.s				V_5
	IL_0221:                                                                        //isinst				System::IDisposable
	IL_0226:            V_7=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_7
	IL_0228:                                                                        //ldc.i4				0x2
	IL_022d:            V_9=2;                                                      //stloc				V_9
	IL_0231:            /*goto IL_020a;*/goto IL_0233;                              //br.s				IL_020a
	IL_0233:                                                                        //ldloc.s				V_7
	IL_0235:            if(V_7==nullptr)goto IL_0258;                               //brfalse.s				IL_0258
	IL_0237:                                                                        //ldc.i4				0x0
	IL_023c:            V_9=0;                                                      //stloc				V_9
	IL_0240:            /*goto IL_020a;*/goto IL_0242;                              //br.s				IL_020a
	IL_0242:            goto IL_0244;                                               //br.s				IL_0244
	IL_0244:                                                                        //ldloc.s				V_7
	IL_0246:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_024b:                                                                        //ldc.i4				0x1
	IL_0250:            V_9=1;                                                      //stloc				V_9
	IL_0254:            /*goto IL_020a;*/goto IL_0256;                              //br.s				IL_020a
	IL_0256:            goto IL_0258;                                               //br.s				IL_0258
	IL_0258:                                                                        //endfinally
	                    ;}
	IL_0259:            goto IL_025c;                                               //br.s				IL_025c
	IL_025b:                                                                        //break
	IL_025c:                                                                        //ldloc.s				V_4
	IL_025e:            return V_4;                                                 //ret

}
inline System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::ITypeReference^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	System::Object^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	Reflector::CodeModel::IType^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	System::Object^ Temp_17 = nullptr;
	System::Boolean Temp_18 = false;
	Reflector::CodeModel::IType^ Temp_19 = nullptr;
	System::Boolean Temp_20 = false;
	Reflector::CodeModel::ITypeReference^ Temp_21 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_22 = nullptr;
	Reflector::CodeModel::IType^ Temp_23 = nullptr;
	System::Boolean Temp_24 = false;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_25 = nullptr;
	System::Collections::IEnumerator^ Temp_26 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IArrayType^ V_1 = nullptr;
	Reflector::CodeModel::IPointerType^ V_2 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_3 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_4 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_5 = nullptr;
	Reflector::CodeModel::IFunctionPointer^ V_6 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_7 = nullptr;
	System::Boolean V_8 = false;
	System::Collections::IEnumerator^ V_9 = nullptr;
	System::IDisposable^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:            goto IL_0073;                                               //br.s				IL_0073
	IL_0002:                                                                        //ldloc				V_11
	IL_0006:            switch(V_11){case 0:goto IL_030d;case 1:goto IL_019f;case 2:goto IL_00f9;case 3:goto IL_03c7;case 4:goto IL_0146;case 5:goto IL_041a;case 6:goto IL_03a0;case 7:goto IL_00b7;case 8:goto IL_00c8;case 9:goto IL_012f;case 10:goto IL_033d;case 11:goto IL_01dc;case 12:goto IL_0088;case 13:goto IL_036d;case 14:goto IL_0167;case 15:goto IL_034d;case 16:goto IL_02f8;case 17:goto IL_00dd;case 18:goto IL_042f;case 19:goto IL_03ff;case 20:goto IL_0328;case 21:goto IL_0099;case 22:goto IL_0380;case 23:goto IL_0186;case 24:goto IL_01c8;case 25:goto IL_03da;};//switch				(IL_030d,IL_019f,IL_00f9,IL_03c7,IL_0146,IL_041a,IL_03a0,IL_00b7,IL_00c8,IL_012f,IL_033d,IL_01dc,IL_0088,IL_036d,IL_0167,IL_034d,IL_02f8,IL_00dd,IL_042f,IL_03ff,IL_0328,IL_0099,IL_0380,IL_0186,IL_01c8,IL_03da)
	IL_0073:                                                                        //ldarg.1
	IL_0074:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0079:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_007a:                                                                        //ldc.i4				0xc
	IL_007f:            V_11=12;                                                    //stloc				V_11
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:                                                                        //ldloc.0
	IL_0089:            if(V_0==nullptr)goto IL_00a2;                               //brfalse.s				IL_00a2
	IL_008b:                                                                        //ldc.i4				0x15
	IL_0090:            V_11=21;                                                    //stloc				V_11
	IL_0094:            /*goto IL_0002;*/goto IL_0099;                              //br				IL_0002
	IL_0099:            goto IL_0178;                                               //br				IL_0178
	IL_009e:                                                                        //ldc.i4.1
	IL_009f:            return true;                                                //ret
	IL_00a0:                                                                        //ldc.i4.1
	IL_00a1:            return true;                                                //ret
	IL_00a2:                                                                        //ldarg.1
	IL_00a3:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_00a8:            V_1=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.1
	IL_00a9:                                                                        //ldc.i4				0x7
	IL_00ae:            V_11=7;                                                     //stloc				V_11
	IL_00b2:            /*goto IL_0002;*/goto IL_00b7;                              //br				IL_0002
	IL_00b7:                                                                        //ldloc.1
	IL_00b8:            if(V_1==nullptr)goto IL_011a;                               //brfalse.s				IL_011a
	IL_00ba:                                                                        //ldc.i4				0x8
	IL_00bf:            V_11=8;                                                     //stloc				V_11
	IL_00c3:            /*goto IL_0002;*/goto IL_00c8;                              //br				IL_0002
	IL_00c8:            goto IL_01a4;                                               //br				IL_01a4
	IL_00cd:                                                                        //ldc.i4.1
	IL_00ce:            return true;                                                //ret
	IL_00cf:                                                                        //ldc.i4				0x11
	IL_00d4:            V_11=17;                                                    //stloc				V_11
	IL_00d8:            /*goto IL_0002;*/goto IL_00dd;                              //br				IL_0002
	IL_00dd:                                                                        //ldarg.0
	IL_00de:            Temp_17=this->F_x1;                                         //ldfld				System::Object^ Root::T_x23 F_x1
	IL_00e3:                                                                        //ldloc.0
	IL_00e4:            Temp_18=Temp_17->Equals(safe_cast<System::Object^>(V_0));   //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00e9:            if(!Temp_18)goto IL_00a2;                                   //brfalse.s				IL_00a2
	IL_00eb:                                                                        //ldc.i4				0x2
	IL_00f0:            V_11=2;                                                     //stloc				V_11
	IL_00f4:            /*goto IL_0002;*/goto IL_00f9;                              //br				IL_0002
	IL_00f9:            goto IL_01b1;                                               //br				IL_01b1
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:                                                                        //ldloc.s				V_5
	IL_0101:            Temp_3=V_5->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_0106:            Temp_4=this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_3));//call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_010b:            return Temp_4;                                              //ret
	IL_010c:                                                                        //ldarg.0
	IL_010d:                                                                        //ldloc.s				V_4
	IL_010f:            Temp_9=V_4->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_0114:            Temp_10=this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_9));//call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0119:            return Temp_10;                                             //ret
	IL_011a:                                                                        //ldarg.1
	IL_011b:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_0120:            V_2=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.2
	IL_0121:                                                                        //ldc.i4				0x9
	IL_0126:            V_11=9;                                                     //stloc				V_11
	IL_012a:            /*goto IL_0002;*/goto IL_012f;                              //br				IL_0002
	IL_012f:                                                                        //ldloc.2
	IL_0130:            if(V_2==nullptr)goto IL_01b3;                               //brfalse				IL_01b3
	IL_0135:            goto IL_0138;                                               //br.s				IL_0138
	IL_0137:                                                                        //break
	IL_0138:                                                                        //ldc.i4				0x4
	IL_013d:            V_11=4;                                                     //stloc				V_11
	IL_0141:            /*goto IL_0002;*/goto IL_0146;                              //br				IL_0002
	IL_0146:            goto IL_03a5;                                               //br				IL_03a5
	IL_014b:                                                                        //ldloc.s				V_6
	IL_014d:            Temp_25=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_6)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0152:            Temp_26=safe_cast<System::Collections::IEnumerable^>(Temp_25)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0157:            V_9=Temp_26;                                                //stloc.s				V_9
	IL_0159:                                                                        //ldc.i4				0xe
	IL_015e:            V_11=14;                                                    //stloc				V_11
	IL_0162:            /*goto IL_0002;*/goto IL_0167;                              //br				IL_0002
	IL_0167:            /*goto IL_01de;*/goto IL_01DC01;                            //br.s				IL_01de
	IL_0169:                                                                        //ldc.i4.0
	IL_016a:            return false;                                               //ret
	IL_016b:                                                                        //ldarg.0
	IL_016c:                                                                        //ldloc.3
	IL_016d:            Temp_7=V_3->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_0172:            Temp_8=this->M_x1(Temp_7);                                  //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0177:            return Temp_8;                                              //ret
	IL_0178:                                                                        //ldc.i4				0x17
	IL_017d:            V_11=23;                                                    //stloc				V_11
	IL_0181:            /*goto IL_0002;*/goto IL_0186;                              //br				IL_0002
	IL_0186:                                                                        //ldloc.0
	IL_0187:            Temp_21=V_0->GenericType;                                   //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReference::get_GenericType()
	IL_018c:            if(Temp_21==nullptr)goto IL_00cf;                           //brfalse				IL_00cf
	IL_0191:                                                                        //ldc.i4				0x1
	IL_0196:            V_11=1;                                                     //stloc				V_11
	IL_019a:            /*goto IL_0002;*/goto IL_019f;                              //br				IL_0002
	IL_019f:            goto IL_03b2;                                               //br				IL_03b2
	IL_01a4:                                                                        //ldarg.0
	IL_01a5:                                                                        //ldloc.1
	IL_01a6:            Temp_5=V_1->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_01ab:            Temp_6=this->M_x1(Temp_5);                                  //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_01b0:            return Temp_6;                                              //ret
	IL_01b1:                                                                        //ldc.i4.1
	IL_01b2:            return true;                                                //ret
	IL_01b3:                                                                        //ldarg.1
	IL_01b4:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_01b9:            V_3=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.3
	IL_01ba:                                                                        //ldc.i4				0x18
	IL_01bf:            V_11=24;                                                    //stloc				V_11
	IL_01c3:            /*goto IL_0002;*/goto IL_01c8;                              //br				IL_0002
	IL_01c8:                                                                        //ldloc.3
	IL_01c9:            if(V_3==nullptr)goto IL_0312;                               //brfalse				IL_0312
	IL_01ce:                                                                        //ldc.i4				0xb
	IL_01d3:            V_11=11;                                                    //stloc				V_11
	IL_01d7:            /*goto IL_0002;*/goto IL_01dc;                              //br				IL_0002
	IL_01dc:            goto IL_016b;                                               //br.s				IL_016b
	IL_01DC01:          try{
	IL_01de:                                                                        //ldc.i4				0x6
	IL_01e3:            V_11=6;                                                     //stloc				V_11
	IL_01e7:            /*goto IL_01eb;*/goto IL_01e9;                              //br.s				IL_01eb
	IL_01e9:            goto IL_0210;                                               //br.s				IL_0210
	IL_01eb:                                                                        //ldloc				V_11
	IL_01ef:            switch(V_11){case 0:goto IL_027c;case 1:goto IL_0265;case 2:goto IL_0245;case 3:goto IL_0255;case 4:goto IL_028c;case 5:goto IL_022b;case 6:goto IL_01e9;};//switch				(IL_027c,IL_0265,IL_0245,IL_0255,IL_028c,IL_022b,IL_01e9)
	IL_0210:            goto IL_025a;                                               //br.s				IL_025a
	IL_0212:                                                                        //ldloc.s				V_9
	IL_0214:            Temp_12=V_9->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0219:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_021e:            V_7=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_12);//stloc.s				V_7
	IL_0220:                                                                        //ldc.i4				0x5
	IL_0225:            V_11=5;                                                     //stloc				V_11
	IL_0229:            /*goto IL_01eb;*/goto IL_022b;                              //br.s				IL_01eb
	IL_022b:                                                                        //ldarg.0
	IL_022c:                                                                        //ldloc.s				V_7
	IL_022e:            Temp_13=V_7->ParameterType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0233:            Temp_14=this->M_x1(Temp_13);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0238:            if(!Temp_14)goto IL_025a;                                   //brfalse.s				IL_025a
	IL_023a:                                                                        //ldc.i4				0x2
	IL_023f:            V_11=2;                                                     //stloc				V_11
	IL_0243:            /*goto IL_01eb;*/goto IL_0245;                              //br.s				IL_01eb
	IL_0245:            goto IL_0247;                                               //br.s				IL_0247
	IL_0247:                                                                        //ldc.i4.1
	IL_0248:            V_8=true;                                                   //stloc.s				V_8
	IL_024a:                                                                        //ldc.i4				0x3
	IL_024f:            V_11=3;                                                     //stloc				V_11
	IL_0253:            /*goto IL_01eb;*/goto IL_0255;                              //br.s				IL_01eb
	IL_0255:            goto IL_0434;                                               //leave				IL_0434
	IL_025a:                                                                        //ldc.i4				0x1
	IL_025f:            V_11=1;                                                     //stloc				V_11
	IL_0263:            /*goto IL_01eb;*/goto IL_0265;                              //br.s				IL_01eb
	IL_0265:                                                                        //ldloc.s				V_9
	IL_0267:            Temp_11=V_9->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_026c:            if(Temp_11)goto IL_0212;                                    //brtrue.s				IL_0212
	IL_026e:                                                                        //ldc.i4				0x0
	IL_0273:            V_11=0;                                                     //stloc				V_11
	IL_0277:            /*goto IL_01eb;*/goto IL_027c;                              //br				IL_01eb
	IL_027c:            goto IL_027e;                                               //br.s				IL_027e
	IL_027e:                                                                        //ldc.i4				0x4
	IL_0283:            V_11=4;                                                     //stloc				V_11
	IL_0287:            /*goto IL_01eb;*/goto IL_028c;                              //br				IL_01eb
	IL_028c:            goto IL_0169;                                               //leave				IL_0169
	                    ;}
	                    finally{
	IL_0291:            goto IL_02a8;                                               //br.s				IL_02a8
	IL_0293:                                                                        //ldloc				V_11
	IL_0297:            switch(V_11){case 0:goto IL_02df;case 1:goto IL_02cb;case 2:goto IL_02bc;};//switch				(IL_02df,IL_02cb,IL_02bc)
	IL_02a8:                                                                        //ldloc.s				V_9
	IL_02aa:                                                                        //isinst				System::IDisposable
	IL_02af:            V_10=dynamic_cast<System::IDisposable^>(V_9);               //stloc.s				V_10
	IL_02b1:                                                                        //ldc.i4				0x2
	IL_02b6:            V_11=2;                                                     //stloc				V_11
	IL_02ba:            /*goto IL_0293;*/goto IL_02bc;                              //br.s				IL_0293
	IL_02bc:                                                                        //ldloc.s				V_10
	IL_02be:            if(V_10==nullptr)goto IL_02e1;                              //brfalse.s				IL_02e1
	IL_02c0:                                                                        //ldc.i4				0x1
	IL_02c5:            V_11=1;                                                     //stloc				V_11
	IL_02c9:            /*goto IL_0293;*/goto IL_02cb;                              //br.s				IL_0293
	IL_02cb:            goto IL_02cd;                                               //br.s				IL_02cd
	IL_02cd:                                                                        //ldloc.s				V_10
	IL_02cf:            /*V_10->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_02d4:                                                                        //ldc.i4				0x0
	IL_02d9:            V_11=0;                                                     //stloc				V_11
	IL_02dd:            /*goto IL_0293;*/goto IL_02df;                              //br.s				IL_0293
	IL_02df:            goto IL_02e1;                                               //br.s				IL_02e1
	IL_02e1:                                                                        //endfinally
	                    ;}
	IL_02e2:                                                                        //ldarg.1
	IL_02e3:                                                                        //isinst				Reflector::CodeModel::IFunctionPointer
	IL_02e8:            V_6=dynamic_cast<Reflector::CodeModel::IFunctionPointer^>(A_0);//stloc.s				V_6
	IL_02ea:                                                                        //ldc.i4				0x10
	IL_02ef:            V_11=16;                                                    //stloc				V_11
	IL_02f3:            /*goto IL_0002;*/goto IL_02f8;                              //br				IL_0002
	IL_02f8:                                                                        //ldloc.s				V_6
	IL_02fa:            if(V_6==nullptr)goto IL_0169;                               //brfalse				IL_0169
	IL_02ff:                                                                        //ldc.i4				0x0
	IL_0304:            V_11=0;                                                     //stloc				V_11
	IL_0308:            /*goto IL_0002;*/goto IL_030d;                              //br				IL_0002
	IL_030d:            goto IL_03cc;                                               //br				IL_03cc
	IL_0312:                                                                        //ldarg.1
	IL_0313:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_0318:            V_4=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_4
	IL_031a:                                                                        //ldc.i4				0x14
	IL_031f:            V_11=20;                                                    //stloc				V_11
	IL_0323:            /*goto IL_0002;*/goto IL_0328;                              //br				IL_0002
	IL_0328:                                                                        //ldloc.s				V_4
	IL_032a:            if(V_4==nullptr)goto IL_0404;                               //brfalse				IL_0404
	IL_032f:                                                                        //ldc.i4				0xa
	IL_0334:            V_11=10;                                                    //stloc				V_11
	IL_0338:            /*goto IL_0002;*/goto IL_033d;                              //br				IL_0002
	IL_033d:            goto IL_033f;                                               //br.s				IL_033f
	IL_033f:                                                                        //ldc.i4				0xf
	IL_0344:            V_11=15;                                                    //stloc				V_11
	IL_0348:            /*goto IL_0002;*/goto IL_034d;                              //br				IL_0002
	IL_034d:                                                                        //ldarg.0
	IL_034e:                                                                        //ldloc.s				V_4
	IL_0350:            Temp_15=V_4->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_0355:            Temp_16=this->M_x1(Temp_15);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_035a:            if(Temp_16)goto IL_00a0;                                    //brtrue				IL_00a0
	IL_035f:                                                                        //ldc.i4				0xd
	IL_0364:            V_11=13;                                                    //stloc				V_11
	IL_0368:            /*goto IL_0002;*/goto IL_036d;                              //br				IL_0002
	IL_036d:            goto IL_010c;                                               //br				IL_010c
	IL_0372:                                                                        //ldc.i4				0x16
	IL_0377:            V_11=22;                                                    //stloc				V_11
	IL_037b:            /*goto IL_0002;*/goto IL_0380;                              //br				IL_0002
	IL_0380:                                                                        //ldarg.0
	IL_0381:                                                                        //ldloc.s				V_5
	IL_0383:            Temp_19=V_5->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_0388:            Temp_20=this->M_x1(Temp_19);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_038d:            if(Temp_20)goto IL_009e;                                    //brtrue				IL_009e
	IL_0392:                                                                        //ldc.i4				0x6
	IL_0397:            V_11=6;                                                     //stloc				V_11
	IL_039b:            /*goto IL_0002;*/goto IL_03a0;                              //br				IL_0002
	IL_03a0:            goto IL_00fe;                                               //br				IL_00fe
	IL_03a5:                                                                        //ldarg.0
	IL_03a6:                                                                        //ldloc.2
	IL_03a7:            Temp_1=V_2->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_03ac:            Temp_2=this->M_x1(Temp_1);                                  //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_03b1:            return Temp_2;                                              //ret
	IL_03b2:                                                                        //ldloc.0
	IL_03b3:            Temp_0=V_0->GenericType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReference::get_GenericType()
	IL_03b8:            V_0=Temp_0;                                                 //stloc.0
	IL_03b9:                                                                        //ldc.i4				0x3
	IL_03be:            V_11=3;                                                     //stloc				V_11
	IL_03c2:            /*goto IL_0002;*/goto IL_03c7;                              //br				IL_0002
	IL_03c7:            goto IL_00cf;                                               //br				IL_00cf
	IL_03cc:                                                                        //ldc.i4				0x19
	IL_03d1:            V_11=25;                                                    //stloc				V_11
	IL_03d5:            /*goto IL_0002;*/goto IL_03da;                              //br				IL_0002
	IL_03da:                                                                        //ldarg.0
	IL_03db:                                                                        //ldloc.s				V_6
	IL_03dd:            Temp_22=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_6)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_03e2:            Temp_23=Temp_22->Type;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_03e7:            Temp_24=this->M_x1(Temp_23);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_03ec:            if(!Temp_24)goto IL_014b;                                   //brfalse				IL_014b
	IL_03f1:                                                                        //ldc.i4				0x13
	IL_03f6:            V_11=19;                                                    //stloc				V_11
	IL_03fa:            /*goto IL_0002;*/goto IL_03ff;                              //br				IL_0002
	IL_03ff:            goto IL_00cd;                                               //br				IL_00cd
	IL_0404:                                                                        //ldarg.1
	IL_0405:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_040a:            V_5=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_5
	IL_040c:                                                                        //ldc.i4				0x5
	IL_0411:            V_11=5;                                                     //stloc				V_11
	IL_0415:            /*goto IL_0002;*/goto IL_041a;                              //br				IL_0002
	IL_041a:                                                                        //ldloc.s				V_5
	IL_041c:            if(V_5==nullptr)goto IL_02e2;                               //brfalse				IL_02e2
	IL_0421:                                                                        //ldc.i4				0x12
	IL_0426:            V_11=18;                                                    //stloc				V_11
	IL_042a:            /*goto IL_0002;*/goto IL_042f;                              //br				IL_0002
	IL_042f:            goto IL_0372;                                               //br				IL_0372
	IL_0434:                                                                        //ldloc.s				V_8
	IL_0436:            return V_8;                                                 //ret

}
inline array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x23::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Collections::ArrayList^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Collections::IEnumerator^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclarationCollection^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ V_3 = nullptr;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	array<Reflector::CodeModel::ITypeDeclaration^>^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0156;case 1:goto IL_0029;case 2:goto IL_003f;};//switch				(IL_0156,IL_0029,IL_003f)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=A_0->NestedTypes;                                    //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_001d:            V_0=Temp_0;                                                 //stloc.0
	IL_001e:                                                                        //ldc.i4				0x1
	IL_0023:            V_7=1;                                                      //stloc				V_7
	IL_0027:            /*goto IL_0002;*/goto IL_0029;                              //br.s				IL_0002
	IL_0029:                                                                        //ldloc.0
	IL_002a:            Temp_4=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_002f:            if(Temp_4==0)goto IL_0171;                                  //brfalse				IL_0171
	IL_0034:                                                                        //ldc.i4				0x2
	IL_0039:            V_7=2;                                                      //stloc				V_7
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0118;                                               //br				IL_0118
	IL_003F01:          try{
	IL_0044:                                                                        //ldc.i4				0x1
	IL_0049:            V_7=1;                                                      //stloc				V_7
	IL_004d:            /*goto IL_0051;*/goto IL_004f;                              //br.s				IL_0051
	IL_004f:            goto IL_006e;                                               //br.s				IL_006e
	IL_0051:                                                                        //ldloc				V_7
	IL_0055:            switch(V_7){case 0:goto IL_00a1;case 1:goto IL_004f;case 2:goto IL_00b5;case 3:goto IL_0094;case 4:goto IL_00c2;};//switch				(IL_00a1,IL_004f,IL_00b5,IL_0094,IL_00c2)
	IL_006e:            goto IL_0096;                                               //br.s				IL_0096
	IL_0070:                                                                        //ldloc.s				V_4
	IL_0072:            Temp_2=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0077:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_007c:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_2);//stloc.2
	IL_007d:                                                                        //ldloc.1
	IL_007e:                                                                        //ldloc.2
	IL_007f:            Temp_3=Root::T_x23::M_x1(V_2);                              //call				array<Reflector::CodeModel::ITypeDeclaration^>^ Root::T_x23::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0084:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_3));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldc.i4				0x3
	IL_008e:            V_7=3;                                                      //stloc				V_7
	IL_0092:            /*goto IL_0051;*/goto IL_0094;                              //br.s				IL_0051
	IL_0094:            goto IL_0096;                                               //br.s				IL_0096
	IL_0096:                                                                        //ldc.i4				0x0
	IL_009b:            V_7=0;                                                      //stloc				V_7
	IL_009f:            /*goto IL_0051;*/goto IL_00a1;                              //br.s				IL_0051
	IL_00a1:                                                                        //ldloc.s				V_4
	IL_00a3:            Temp_1=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a8:            if(Temp_1)goto IL_0070;                                     //brtrue.s				IL_0070
	IL_00aa:                                                                        //ldc.i4				0x2
	IL_00af:            V_7=2;                                                      //stloc				V_7
	IL_00b3:            /*goto IL_0051;*/goto IL_00b5;                              //br.s				IL_0051
	IL_00b5:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_00b7:                                                                        //ldc.i4				0x4
	IL_00bc:            V_7=4;                                                      //stloc				V_7
	IL_00c0:            /*goto IL_0051;*/goto IL_00c2;                              //br.s				IL_0051
	IL_00c2:            goto IL_015b;                                               //leave				IL_015b
	                    ;}
	                    finally{
	IL_00c7:            goto IL_00de;                                               //br.s				IL_00de
	IL_00c9:                                                                        //ldloc				V_7
	IL_00cd:            switch(V_7){case 0:goto IL_0115;case 1:goto IL_0101;case 2:goto IL_00f2;};//switch				(IL_0115,IL_0101,IL_00f2)
	IL_00de:                                                                        //ldloc.s				V_4
	IL_00e0:                                                                        //isinst				System::IDisposable
	IL_00e5:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_00e7:                                                                        //ldc.i4				0x2
	IL_00ec:            V_7=2;                                                      //stloc				V_7
	IL_00f0:            /*goto IL_00c9;*/goto IL_00f2;                              //br.s				IL_00c9
	IL_00f2:                                                                        //ldloc.s				V_5
	IL_00f4:            if(V_5==nullptr)goto IL_0117;                               //brfalse.s				IL_0117
	IL_00f6:                                                                        //ldc.i4				0x1
	IL_00fb:            V_7=1;                                                      //stloc				V_7
	IL_00ff:            /*goto IL_00c9;*/goto IL_0101;                              //br.s				IL_00c9
	IL_0101:            goto IL_0103;                                               //br.s				IL_0103
	IL_0103:                                                                        //ldloc.s				V_5
	IL_0105:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_010a:                                                                        //ldc.i4				0x0
	IL_010f:            V_7=0;                                                      //stloc				V_7
	IL_0113:            /*goto IL_00c9;*/goto IL_0115;                              //br.s				IL_00c9
	IL_0115:            goto IL_0117;                                               //br.s				IL_0117
	IL_0117:                                                                        //endfinally
	                    ;}
	IL_0118:                                                                        //ldloc.0
	IL_0119:            Temp_6=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_011e:                                                                        //ldc.i4.1
	IL_011f:                                                                        //add
	IL_0120:            Temp_7=gcnew System::Collections::ArrayList((Temp_6 + 1));  //newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0125:            V_1=Temp_7;                                                 //stloc.1
	IL_0126:                                                                        //ldloc.1
	IL_0127:                                                                        //ldarg.0
	IL_0128:            Temp_8=V_1->Add(safe_cast<System::Object^>(A_0));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_012d:                                                                        //pop
	IL_012e:                                                                        //ldloc.1
	IL_012f:                                                                        //ldloc.0
	IL_0130:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0135:                                                                        //ldloc.0
	IL_0136:            Temp_9=safe_cast<System::Collections::IEnumerable^>(V_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_013b:            V_4=Temp_9;                                                 //stloc.s				V_4
	IL_013d:                                                                        //ldc.i4.5
	IL_013e:                                                                        //dup
	IL_013f:                                                                        //dup
	IL_0140:                                                                        //ldc.i4.3
	IL_0141:                                                                        //sub
	IL_0142:                                                                        //blt				IL_013e
	IL_0147:                                                                        //pop
	IL_0148:                                                                        //ldc.i4				0x0
	IL_014d:            V_7=0;                                                      //stloc				V_7
	IL_0151:            /*goto IL_0002;*/goto IL_0156;                              //br				IL_0002
	IL_0156:            /*goto IL_0044;*/goto IL_003F01;                            //br				IL_0044
	IL_015b:                                                                        //ldloc.1
	IL_015c:            Temp_10=V_1->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0161:                                                                        //conv.ovf.u4
	IL_0162:            Temp_11=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(safe_cast<System::UInt32>(Temp_10));//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_0167:            V_3=Temp_11;                                                //stloc.3
	IL_0168:                                                                        //ldloc.1
	IL_0169:                                                                        //ldloc.3
	IL_016a:            V_1->CopyTo(safe_cast<System::Array^>(V_3));                //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^)
	IL_016f:                                                                        //ldloc.3
	IL_0170:            return V_3;                                                 //ret
	IL_0171:                                                                        //ldc.i4.1
	IL_0172:            Temp_5=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(1);//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_0177:            V_6=Temp_5;                                                 //stloc.s				V_6
	IL_0179:                                                                        //ldloc.s				V_6
	IL_017b:                                                                        //ldc.i4.0
	IL_017c:                                                                        //ldarg.0
	IL_017d:            V_6[0]=A_0;                                                 //stelem.ref
	IL_017e:                                                                        //ldloc.s				V_6
	IL_0180:            return V_6;                                                 //ret

}
inline Reflector::CodeModel::IAssemblyReference^ Root::T_x23::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_3 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_1 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_005a;case 1:goto IL_00af;case 2:goto IL_009e;case 3:goto IL_0068;case 4:goto IL_0035;case 5:goto IL_0046;};//switch				(IL_005a,IL_00af,IL_009e,IL_0068,IL_0035,IL_0046)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0029:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_002a:                                                                        //ldc.i4				0x4
	IL_002f:            V_3=4;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0038;                                               //br.s				IL_0038
	IL_0037:                                                                        //break
	IL_0038:                                                                        //ldloc.0
	IL_0039:            if(V_0==nullptr)goto IL_0089;                               //brfalse.s				IL_0089
	IL_003b:                                                                        //ldc.i4				0x5
	IL_0040:            V_3=5;                                                      //stloc				V_3
	IL_0044:            /*goto IL_0002;*/goto IL_0046;                              //br.s				IL_0002
	IL_0046:            goto IL_0076;                                               //br.s				IL_0076
	IL_0048:                                                                        //ldarg.0
	IL_0049:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_004e:            V_2=dynamic_cast<Reflector::CodeModel::IFieldReference^>(A_0);//stloc.2
	IL_004f:                                                                        //ldc.i4				0x0
	IL_0054:            V_3=0;                                                      //stloc				V_3
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:                                                                        //ldloc.2
	IL_005b:            if(V_2==nullptr)goto IL_00b1;                               //brfalse.s				IL_00b1
	IL_005d:                                                                        //ldc.i4				0x3
	IL_0062:            V_3=3;                                                      //stloc				V_3
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:            goto IL_007d;                                               //br.s				IL_007d
	IL_006a:                                                                        //ldloc.1
	IL_006b:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(V_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0070:            Temp_1=Root::T_x23::M_x1(safe_cast<System::Object^>(Temp_0));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x23::M_x1(System::Object^)
	IL_0075:            return Temp_1;                                              //ret
	IL_0076:                                                                        //ldloc.0
	IL_0077:            Temp_4=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_0));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_007c:            return Temp_4;                                              //ret
	IL_007d:                                                                        //ldloc.2
	IL_007e:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0083:            Temp_3=Root::T_x23::M_x1(safe_cast<System::Object^>(Temp_2));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x23::M_x1(System::Object^)
	IL_0088:            return Temp_3;                                              //ret
	IL_0089:                                                                        //ldarg.0
	IL_008a:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_008f:            V_1=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.1
	IL_0090:                                                                        //ldc.i4				0x2
	IL_0095:            V_3=2;                                                      //stloc				V_3
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:                                                                        //ldloc.1
	IL_009f:            if(V_1==nullptr)goto IL_0048;                               //brfalse.s				IL_0048
	IL_00a1:                                                                        //ldc.i4				0x1
	IL_00a6:            V_3=1;                                                      //stloc				V_3
	IL_00aa:            /*goto IL_0002;*/goto IL_00af;                              //br				IL_0002
	IL_00af:            goto IL_006a;                                               //br.s				IL_006a
	IL_00b1:                                                                        //ldnull
	IL_00b2:            return nullptr;                                             //ret

}
inline void Root::T_x23::M_x12()
//System::Collections::IEnumerator^::Reset by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x121^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x13=0;                                              //stfld				System::Int32 Root::T_x23 F_x13
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x121^ Root::T_x23 F_x2
	IL_000d:            Temp_0->M_x12();                                            //callvirt				void Root::T_x121::M_x12()
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_1=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x23 F_x12
	IL_0018:            Temp_1->Reset();                                            //callvirt				void System::Collections::IEnumerator::Reset()
	IL_001d:            return;                                                     //ret

}
inline System::Boolean Root::T_x23::M_x12(Reflector::CodeModel::ICustomAttributeProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	System::Boolean V_1 = false;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:            Temp_0=A_0->Attributes;                                     //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0009:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000e:            V_2=Temp_1;                                                 //stloc.2
	IL_000f:            /*goto IL_0013;*/goto IL_001201;                            //br.s				IL_0013
	IL_0011:                                                                        //ldc.i4.0
	IL_0012:            return false;                                               //ret
	IL_001201:          try{
	IL_0013:                                                                        //ldc.i4				0x0
	IL_0018:            V_4=0;                                                      //stloc				V_4
	IL_001c:            /*goto IL_0020;*/goto IL_001e;                              //br.s				IL_0020
	IL_001e:            goto IL_0045;                                               //br.s				IL_0045
	IL_0020:                                                                        //ldloc				V_4
	IL_0024:            switch(V_4){case 0:goto IL_001e;case 1:goto IL_00b6;case 2:goto IL_00a4;case 3:goto IL_007e;case 4:goto IL_0052;case 5:goto IL_00c6;case 6:goto IL_0065;};//switch				(IL_001e,IL_00b6,IL_00a4,IL_007e,IL_0052,IL_00c6,IL_0065)
	IL_0045:            goto IL_0047;                                               //br.s				IL_0047
	IL_0047:                                                                        //ldc.i4				0x4
	IL_004c:            V_4=4;                                                      //stloc				V_4
	IL_0050:            /*goto IL_0020;*/goto IL_0052;                              //br.s				IL_0020
	IL_0052:                                                                        //ldloc.2
	IL_0053:            Temp_6=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0058:            if(Temp_6)goto IL_0067;                                     //brtrue.s				IL_0067
	IL_005a:                                                                        //ldc.i4				0x6
	IL_005f:            V_4=6;                                                      //stloc				V_4
	IL_0063:            /*goto IL_0020;*/goto IL_0065;                              //br.s				IL_0020
	IL_0065:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_0067:                                                                        //ldloc.2
	IL_0068:            Temp_7=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006d:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_0072:            V_0=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_7);//stloc.0
	IL_0073:                                                                        //ldc.i4				0x3
	IL_0078:            V_4=3;                                                      //stloc				V_4
	IL_007c:            /*goto IL_0020;*/goto IL_007e;                              //br.s				IL_0020
	IL_007e:                                                                        //ldarg.0
	IL_007f:            Temp_2=this->F_x1;                                          //ldfld				System::Object^ Root::T_x23 F_x1
	IL_0084:                                                                        //ldloc.0
	IL_0085:            Temp_3=V_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_008a:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_3)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_008f:            Temp_5=Temp_2->Equals(safe_cast<System::Object^>(Temp_4));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0094:            if(!Temp_5)goto IL_0047;                                    //brfalse.s				IL_0047
	IL_0096:                                                                        //ldc.i4				0x2
	IL_009b:            V_4=2;                                                      //stloc				V_4
	IL_009f:            /*goto IL_0020;*/goto IL_00a4;                              //br				IL_0020
	IL_00a4:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_00a6:                                                                        //ldc.i4.1
	IL_00a7:            V_1=true;                                                   //stloc.1
	IL_00a8:                                                                        //ldc.i4				0x1
	IL_00ad:            V_4=1;                                                      //stloc				V_4
	IL_00b1:            /*goto IL_0020;*/goto IL_00b6;                              //br				IL_0020
	IL_00b6:            goto IL_0118;                                               //leave.s				IL_0118
	IL_00b8:                                                                        //ldc.i4				0x5
	IL_00bd:            V_4=5;                                                      //stloc				V_4
	IL_00c1:            /*goto IL_0020;*/goto IL_00c6;                              //br				IL_0020
	IL_00c6:            goto IL_0011;                                               //leave				IL_0011
	                    ;}
	                    finally{
	IL_00cb:            goto IL_00e2;                                               //br.s				IL_00e2
	IL_00cd:                                                                        //ldloc				V_5
	IL_00d1:            switch(V_5){case 0:goto IL_00f4;case 1:goto IL_0115;case 2:goto IL_0102;};//switch				(IL_00f4,IL_0115,IL_0102)
	IL_00e2:                                                                        //ldloc.2
	IL_00e3:                                                                        //isinst				System::IDisposable
	IL_00e8:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00e9:                                                                        //ldc.i4				0x0
	IL_00ee:            V_5=0;                                                      //stloc				V_5
	IL_00f2:            /*goto IL_00cd;*/goto IL_00f4;                              //br.s				IL_00cd
	IL_00f4:                                                                        //ldloc.3
	IL_00f5:            if(V_3==nullptr)goto IL_0117;                               //brfalse.s				IL_0117
	IL_00f7:                                                                        //ldc.i4				0x2
	IL_00fc:            V_5=2;                                                      //stloc				V_5
	IL_0100:            /*goto IL_00cd;*/goto IL_0102;                              //br.s				IL_00cd
	IL_0102:            goto IL_0104;                                               //br.s				IL_0104
	IL_0104:                                                                        //ldloc.3
	IL_0105:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_010a:                                                                        //ldc.i4				0x1
	IL_010f:            V_5=1;                                                      //stloc				V_5
	IL_0113:            /*goto IL_00cd;*/goto IL_0115;                              //br.s				IL_00cd
	IL_0115:            goto IL_0117;                                               //br.s				IL_0117
	IL_0117:                                                                        //endfinally
	                    ;}
	IL_0118:                                                                        //ldloc.1
	IL_0119:            return V_1;                                                 //ret

}
inline System::Boolean Root::T_x23::M_x12(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	Reflector::CodeModel::IInstructionCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_5 = nullptr;
	System::Collections::IEnumerator^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Boolean Temp_8 = false;
	System::Boolean Temp_9 = false;
	System::Object^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Object^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	System::Object^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IMethodBody^ V_1 = nullptr;
	Reflector::CodeModel::IInstruction^ V_2 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_4 = nullptr;
	Reflector::CodeModel::ICustomAttributeProvider^ V_5 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_6 = nullptr;
	System::Boolean V_7 = false;
	System::Collections::IEnumerator^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:            goto IL_0043;                                               //br.s				IL_0043
	IL_0002:                                                                        //ldloc				V_10
	IL_0006:            switch(V_10){case 0:goto IL_0060;case 1:goto IL_009a;case 2:goto IL_03de;case 3:goto IL_041d;case 4:goto IL_0071;case 5:goto IL_03ef;case 6:goto IL_0376;case 7:goto IL_0402;case 8:goto IL_03ad;case 9:goto IL_035f;case 10:goto IL_0392;case 11:goto IL_033f;case 12:goto IL_0086;case 13:goto IL_03c2;};//switch				(IL_0060,IL_009a,IL_03de,IL_041d,IL_0071,IL_03ef,IL_0376,IL_0402,IL_03ad,IL_035f,IL_0392,IL_033f,IL_0086,IL_03c2)
	IL_0043:                                                                        //ldc.i4.5
	IL_0044:                                                                        //dup
	IL_0045:                                                                        //dup
	IL_0046:                                                                        //ldc.i4.6
	IL_0047:                                                                        //add
	IL_0048:                                                                        //bgt				IL_0044
	IL_004d:                                                                        //pop
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_0054:            V_0=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.0
	IL_0055:                                                                        //ldc.i4				0x0
	IL_005a:            V_10=0;                                                     //stloc				V_10
	IL_005e:            /*goto IL_0002;*/goto IL_0060;                              //br.s				IL_0002
	IL_0060:                                                                        //ldloc.0
	IL_0061:            if(V_0==nullptr)goto IL_0397;                               //brfalse				IL_0397
	IL_0066:                                                                        //ldc.i4				0x4
	IL_006b:            V_10=4;                                                     //stloc				V_10
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_03c4;                                               //br				IL_03c4
	IL_0076:                                                                        //ldc.i4.1
	IL_0077:            return true;                                                //ret
	IL_0078:                                                                        //ldc.i4				0xc
	IL_007d:            V_10=12;                                                    //stloc				V_10
	IL_0081:            /*goto IL_0002;*/goto IL_0086;                              //br				IL_0002
	IL_0086:                                                                        //ldloc.0
	IL_0087:            if(V_0==nullptr)goto IL_0364;                               //brfalse				IL_0364
	IL_008c:                                                                        //ldc.i4				0x1
	IL_0091:            V_10=1;                                                     //stloc				V_10
	IL_0095:            /*goto IL_0002;*/goto IL_009a;                              //br				IL_0002
	IL_009a:            goto IL_0368;                                               //br				IL_0368
	IL_009A01:          try{
	IL_009f:                                                                        //ldc.i4				0xa
	IL_00a4:            V_10=10;                                                    //stloc				V_10
	IL_00a8:            /*goto IL_00ac;*/goto IL_00aa;                              //br.s				IL_00ac
	IL_00aa:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_00ac:                                                                        //ldloc				V_10
	IL_00b0:            switch(V_10){case 0:goto IL_0119;case 1:goto IL_0150;case 2:goto IL_0139;case 3:goto IL_010b;case 4:goto IL_017e;case 5:goto IL_0129;case 6:goto IL_01bf;case 7:goto IL_01a0;case 8:goto IL_01cf;case 9:goto IL_0190;case 10:goto IL_00aa;case 11:goto IL_0163;};//switch				(IL_0119,IL_0150,IL_0139,IL_010b,IL_017e,IL_0129,IL_01bf,IL_01a0,IL_01cf,IL_0190,IL_00aa,IL_0163)
	IL_00e5:            goto IL_012b;                                               //br.s				IL_012b
	IL_00e7:                                                                        //ldloc.s				V_8
	IL_00e9:            Temp_13=V_8->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00ee:                                                                        //castclass				Reflector::CodeModel::IInstruction
	IL_00f3:            V_2=safe_cast<Reflector::CodeModel::IInstruction^>(Temp_13);//stloc.2
	IL_00f4:                                                                        //ldloc.2
	IL_00f5:            Temp_14=V_2->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_00fa:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_00ff:            V_3=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_14);//stloc.3
	IL_0100:                                                                        //ldc.i4				0x3
	IL_0105:            V_10=3;                                                     //stloc				V_10
	IL_0109:            /*goto IL_00ac;*/goto IL_010b;                              //br.s				IL_00ac
	IL_010b:                                                                        //ldloc.3
	IL_010c:            if(V_3==nullptr)goto IL_012b;                               //brfalse.s				IL_012b
	IL_010e:                                                                        //ldc.i4				0x0
	IL_0113:            V_10=0;                                                     //stloc				V_10
	IL_0117:            /*goto IL_00ac;*/goto IL_0119;                              //br.s				IL_00ac
	IL_0119:            goto IL_0168;                                               //br.s				IL_0168
	IL_011b:                                                                        //ldloc.s				V_4
	IL_011d:            V_3=V_4;                                                    //stloc.3
	IL_011e:                                                                        //ldc.i4				0x5
	IL_0123:            V_10=5;                                                     //stloc				V_10
	IL_0127:            /*goto IL_00ac;*/goto IL_0129;                              //br.s				IL_00ac
	IL_0129:            goto IL_0192;                                               //br.s				IL_0192
	IL_012b:                                                                        //ldc.i4				0x2
	IL_0130:            V_10=2;                                                     //stloc				V_10
	IL_0134:            /*goto IL_00ac;*/goto IL_0139;                              //br				IL_00ac
	IL_0139:                                                                        //ldloc.s				V_8
	IL_013b:            Temp_12=V_8->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0140:            if(Temp_12)goto IL_00e7;                                    //brtrue.s				IL_00e7
	IL_0142:                                                                        //ldc.i4				0x1
	IL_0147:            V_10=1;                                                     //stloc				V_10
	IL_014b:            /*goto IL_00ac;*/goto IL_0150;                              //br				IL_00ac
	IL_0150:            goto IL_01c1;                                               //br.s				IL_01c1
	IL_0152:                                                                        //ldc.i4.1
	IL_0153:            V_7=true;                                                   //stloc.s				V_7
	IL_0155:                                                                        //ldc.i4				0xb
	IL_015a:            V_10=11;                                                    //stloc				V_10
	IL_015e:            /*goto IL_00ac;*/goto IL_0163;                              //br				IL_00ac
	IL_0163:            goto IL_0422;                                               //leave				IL_0422
	IL_0168:                                                                        //ldloc.3
	IL_0169:            Temp_11=V_3->GenericMethod;                                 //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_016e:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_0170:                                                                        //ldc.i4				0x4
	IL_0175:            V_10=4;                                                     //stloc				V_10
	IL_0179:            /*goto IL_00ac;*/goto IL_017e;                              //br				IL_00ac
	IL_017e:                                                                        //ldloc.s				V_4
	IL_0180:            if(V_4==nullptr)goto IL_0192;                               //brfalse.s				IL_0192
	IL_0182:                                                                        //ldc.i4				0x9
	IL_0187:            V_10=9;                                                     //stloc				V_10
	IL_018b:            /*goto IL_00ac;*/goto IL_0190;                              //br				IL_00ac
	IL_0190:            goto IL_011b;                                               //br.s				IL_011b
	IL_0192:                                                                        //ldc.i4				0x7
	IL_0197:            V_10=7;                                                     //stloc				V_10
	IL_019b:            /*goto IL_00ac;*/goto IL_01a0;                              //br				IL_00ac
	IL_01a0:                                                                        //ldarg.0
	IL_01a1:            Temp_15=this->F_x1;                                         //ldfld				System::Object^ Root::T_x23 F_x1
	IL_01a6:                                                                        //ldloc.3
	IL_01a7:            Temp_16=Temp_15->Equals(safe_cast<System::Object^>(V_3));   //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_01ac:            if(!Temp_16)goto IL_012b;                                   //brfalse				IL_012b
	IL_01b1:                                                                        //ldc.i4				0x6
	IL_01b6:            V_10=6;                                                     //stloc				V_10
	IL_01ba:            /*goto IL_00ac;*/goto IL_01bf;                              //br				IL_00ac
	IL_01bf:            goto IL_0152;                                               //br.s				IL_0152
	IL_01c1:                                                                        //ldc.i4				0x8
	IL_01c6:            V_10=8;                                                     //stloc				V_10
	IL_01ca:            /*goto IL_00ac;*/goto IL_01cf;                              //br				IL_00ac
	IL_01cf:            goto IL_0397;                                               //leave				IL_0397
	                    ;}
	                    finally{
	IL_01d4:            goto IL_01eb;                                               //br.s				IL_01eb
	IL_01d6:                                                                        //ldloc				V_10
	IL_01da:            switch(V_10){case 0:goto IL_020e;case 1:goto IL_0222;case 2:goto IL_01ff;};//switch				(IL_020e,IL_0222,IL_01ff)
	IL_01eb:                                                                        //ldloc.s				V_8
	IL_01ed:                                                                        //isinst				System::IDisposable
	IL_01f2:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_01f4:                                                                        //ldc.i4				0x2
	IL_01f9:            V_10=2;                                                     //stloc				V_10
	IL_01fd:            /*goto IL_01d6;*/goto IL_01ff;                              //br.s				IL_01d6
	IL_01ff:                                                                        //ldloc.s				V_9
	IL_0201:            if(V_9==nullptr)goto IL_0224;                               //brfalse.s				IL_0224
	IL_0203:                                                                        //ldc.i4				0x0
	IL_0208:            V_10=0;                                                     //stloc				V_10
	IL_020c:            /*goto IL_01d6;*/goto IL_020e;                              //br.s				IL_01d6
	IL_020e:            goto IL_0210;                                               //br.s				IL_0210
	IL_0210:                                                                        //ldloc.s				V_9
	IL_0212:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0217:                                                                        //ldc.i4				0x1
	IL_021c:            V_10=1;                                                     //stloc				V_10
	IL_0220:            /*goto IL_01d6;*/goto IL_0222;                              //br.s				IL_01d6
	IL_0222:            goto IL_0224;                                               //br.s				IL_0224
	IL_0224:                                                                        //endfinally
	                    ;}
	IL_022402:          try{
	IL_0225:                                                                        //ldc.i4				0x2
	IL_022a:            V_10=2;                                                     //stloc				V_10
	IL_022e:            /*goto IL_0232;*/goto IL_0230;                              //br.s				IL_0232
	IL_0230:            goto IL_0257;                                               //br.s				IL_0257
	IL_0232:                                                                        //ldloc				V_10
	IL_0236:            switch(V_10){case 0:goto IL_02be;case 1:goto IL_029a;case 2:goto IL_0230;case 3:goto IL_0285;case 4:goto IL_0267;case 5:goto IL_02a7;case 6:goto IL_02ce;};//switch				(IL_02be,IL_029a,IL_0230,IL_0285,IL_0267,IL_02a7,IL_02ce)
	IL_0257:            goto IL_029c;                                               //br.s				IL_029c
	IL_0259:                                                                        //ldc.i4.1
	IL_025a:            V_7=true;                                                   //stloc.s				V_7
	IL_025c:                                                                        //ldc.i4				0x4
	IL_0261:            V_10=4;                                                     //stloc				V_10
	IL_0265:            /*goto IL_0232;*/goto IL_0267;                              //br.s				IL_0232
	IL_0267:            goto IL_0422;                                               //leave				IL_0422
	IL_026c:                                                                        //ldloc.s				V_8
	IL_026e:            Temp_10=V_8->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0273:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_0278:            V_6=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_10);//stloc.s				V_6
	IL_027a:                                                                        //ldc.i4				0x3
	IL_027f:            V_10=3;                                                     //stloc				V_10
	IL_0283:            /*goto IL_0232;*/goto IL_0285;                              //br.s				IL_0232
	IL_0285:                                                                        //ldarg.0
	IL_0286:                                                                        //ldloc.s				V_6
	IL_0288:            Temp_8=this->M_x2(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_6));//call				System::Boolean Root::T_x23::M_x2(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_028d:            if(!Temp_8)goto IL_029c;                                    //brfalse.s				IL_029c
	IL_028f:                                                                        //ldc.i4				0x1
	IL_0294:            V_10=1;                                                     //stloc				V_10
	IL_0298:            /*goto IL_0232;*/goto IL_029a;                              //br.s				IL_0232
	IL_029a:            goto IL_0259;                                               //br.s				IL_0259
	IL_029c:                                                                        //ldc.i4				0x5
	IL_02a1:            V_10=5;                                                     //stloc				V_10
	IL_02a5:            /*goto IL_0232;*/goto IL_02a7;                              //br.s				IL_0232
	IL_02a7:                                                                        //ldloc.s				V_8
	IL_02a9:            Temp_9=V_8->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_02ae:            if(Temp_9)goto IL_026c;                                     //brtrue.s				IL_026c
	IL_02b0:                                                                        //ldc.i4				0x0
	IL_02b5:            V_10=0;                                                     //stloc				V_10
	IL_02b9:            /*goto IL_0232;*/goto IL_02be;                              //br				IL_0232
	IL_02be:            goto IL_02c0;                                               //br.s				IL_02c0
	IL_02c0:                                                                        //ldc.i4				0x6
	IL_02c5:            V_10=6;                                                     //stloc				V_10
	IL_02c9:            /*goto IL_0232;*/goto IL_02ce;                              //br				IL_0232
	IL_02ce:            goto IL_0364;                                               //leave				IL_0364
	                    ;}
	                    finally{
	IL_02d3:            goto IL_02ea;                                               //br.s				IL_02ea
	IL_02d5:                                                                        //ldloc				V_10
	IL_02d9:            switch(V_10){case 0:goto IL_0321;case 1:goto IL_030d;case 2:goto IL_02fe;};//switch				(IL_0321,IL_030d,IL_02fe)
	IL_02ea:                                                                        //ldloc.s				V_8
	IL_02ec:                                                                        //isinst				System::IDisposable
	IL_02f1:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_02f3:                                                                        //ldc.i4				0x2
	IL_02f8:            V_10=2;                                                     //stloc				V_10
	IL_02fc:            /*goto IL_02d5;*/goto IL_02fe;                              //br.s				IL_02d5
	IL_02fe:                                                                        //ldloc.s				V_9
	IL_0300:            if(V_9==nullptr)goto IL_0323;                               //brfalse.s				IL_0323
	IL_0302:                                                                        //ldc.i4				0x1
	IL_0307:            V_10=1;                                                     //stloc				V_10
	IL_030b:            /*goto IL_02d5;*/goto IL_030d;                              //br.s				IL_02d5
	IL_030d:            goto IL_030f;                                               //br.s				IL_030f
	IL_030f:                                                                        //ldloc.s				V_9
	IL_0311:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0316:                                                                        //ldc.i4				0x0
	IL_031b:            V_10=0;                                                     //stloc				V_10
	IL_031f:            /*goto IL_02d5;*/goto IL_0321;                              //br.s				IL_02d5
	IL_0321:            goto IL_0323;                                               //br.s				IL_0323
	IL_0323:                                                                        //endfinally
	                    ;}
	IL_0324:                                                                        //ldloc.1
	IL_0325:            Temp_1=V_1->Instructions;                                   //callvirt				Reflector::CodeModel::IInstructionCollection^ Reflector::CodeModel::IMethodBody::get_Instructions()
	IL_032a:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_032f:            V_8=Temp_2;                                                 //stloc.s				V_8
	IL_0331:                                                                        //ldc.i4				0xb
	IL_0336:            V_10=11;                                                    //stloc				V_10
	IL_033a:            /*goto IL_0002;*/goto IL_033f;                              //br				IL_0002
	IL_033f:            /*goto IL_009f;*/goto IL_009A01;                            //br				IL_009f
	IL_0344:                                                                        //ldloc.0
	IL_0345:            Temp_5=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_034a:            Temp_6=safe_cast<System::Collections::IEnumerable^>(Temp_5)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_034f:            V_8=Temp_6;                                                 //stloc.s				V_8
	IL_0351:                                                                        //ldc.i4				0x9
	IL_0356:            V_10=9;                                                     //stloc				V_10
	IL_035a:            /*goto IL_0002;*/goto IL_035f;                              //br				IL_0002
	IL_035f:            /*goto IL_0225;*/goto IL_022402;                            //br				IL_0225
	IL_0364:                                                                        //ldc.i4.0
	IL_0365:            return false;                                               //ret
	IL_0366:                                                                        //ldc.i4.1
	IL_0367:            return true;                                                //ret
	IL_0368:                                                                        //ldc.i4				0x6
	IL_036d:            V_10=6;                                                     //stloc				V_10
	IL_0371:            /*goto IL_0002;*/goto IL_0376;                              //br				IL_0002
	IL_0376:                                                                        //ldarg.0
	IL_0377:                                                                        //ldloc.0
	IL_0378:            Temp_3=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_037d:            Temp_4=this->M_x2(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(Temp_3));//call				System::Boolean Root::T_x23::M_x2(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_0382:            if(!Temp_4)goto IL_0344;                                    //brfalse.s				IL_0344
	IL_0384:                                                                        //ldc.i4				0xa
	IL_0389:            V_10=10;                                                    //stloc				V_10
	IL_038d:            /*goto IL_0002;*/goto IL_0392;                              //br				IL_0002
	IL_0392:            goto IL_0076;                                               //br				IL_0076
	IL_0397:                                                                        //ldarg.1
	IL_0398:                                                                        //isinst				Reflector::CodeModel::ICustomAttributeProvider
	IL_039d:            V_5=dynamic_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0);//stloc.s				V_5
	IL_039f:                                                                        //ldc.i4				0x8
	IL_03a4:            V_10=8;                                                     //stloc				V_10
	IL_03a8:            /*goto IL_0002;*/goto IL_03ad;                              //br				IL_0002
	IL_03ad:                                                                        //ldloc.s				V_5
	IL_03af:            if(V_5==nullptr)goto IL_0078;                               //brfalse				IL_0078
	IL_03b4:                                                                        //ldc.i4				0xd
	IL_03b9:            V_10=13;                                                    //stloc				V_10
	IL_03bd:            /*goto IL_0002;*/goto IL_03c2;                              //br				IL_0002
	IL_03c2:            goto IL_03f4;                                               //br.s				IL_03f4
	IL_03c4:                                                                        //ldloc.0
	IL_03c5:            Temp_0=V_0->Body;                                           //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_03ca:                                                                        //isinst				Reflector::CodeModel::IMethodBody
	IL_03cf:            V_1=dynamic_cast<Reflector::CodeModel::IMethodBody^>(Temp_0);//stloc.1
	IL_03d0:                                                                        //ldc.i4				0x2
	IL_03d5:            V_10=2;                                                     //stloc				V_10
	IL_03d9:            /*goto IL_0002;*/goto IL_03de;                              //br				IL_0002
	IL_03de:                                                                        //ldloc.1
	IL_03df:            if(V_1==nullptr)goto IL_0397;                               //brfalse.s				IL_0397
	IL_03e1:                                                                        //ldc.i4				0x5
	IL_03e6:            V_10=5;                                                     //stloc				V_10
	IL_03ea:            /*goto IL_0002;*/goto IL_03ef;                              //br				IL_0002
	IL_03ef:            goto IL_0324;                                               //br				IL_0324
	IL_03f4:                                                                        //ldc.i4				0x7
	IL_03f9:            V_10=7;                                                     //stloc				V_10
	IL_03fd:            /*goto IL_0002;*/goto IL_0402;                              //br				IL_0002
	IL_0402:                                                                        //ldarg.0
	IL_0403:                                                                        //ldloc.s				V_5
	IL_0405:            Temp_7=this->M_x2(V_5);                                     //call				System::Boolean Root::T_x23::M_x2(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_040a:            if(!Temp_7)goto IL_0078;                                    //brfalse				IL_0078
	IL_040f:                                                                        //ldc.i4				0x3
	IL_0414:            V_10=3;                                                     //stloc				V_10
	IL_0418:            /*goto IL_0002;*/goto IL_041d;                              //br				IL_0002
	IL_041d:            goto IL_0366;                                               //br				IL_0366
	IL_0422:                                                                        //ldloc.s				V_7
	IL_0424:            return V_7;                                                 //ret

}
inline System::Boolean Root::T_x23::M_x13()
//System::Collections::IEnumerator^::MoveNext by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x121^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x121^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Int32 Temp_4 = 0;
	System::Collections::IEnumerator^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Collections::IEnumerator^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_0=9;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003e;                                               //br.s				IL_003e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_00a0;case 1:goto IL_0051;case 2:goto IL_011f;case 3:goto IL_0079;case 4:goto IL_00ca;case 5:goto IL_005e;case 6:goto IL_0086;case 7:goto IL_00da;case 8:goto IL_00f5;case 9:goto IL_000b;};//switch				(IL_00a0,IL_0051,IL_011f,IL_0079,IL_00ca,IL_005e,IL_0086,IL_00da,IL_00f5,IL_000b)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_9=this->F_x13;                                         //ldfld				System::Int32 Root::T_x23 F_x13
	IL_0044:            if(Temp_9!=0)goto IL_007b;                                  //brtrue.s				IL_007b
	IL_0046:                                                                        //ldc.i4				0x1
	IL_004b:            V_0=1;                                                      //stloc				V_0
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:            goto IL_00cc;                                               //br.s				IL_00cc
	IL_0053:                                                                        //ldc.i4				0x5
	IL_0058:            V_0=5;                                                      //stloc				V_0
	IL_005c:            /*goto IL_000d;*/goto IL_005e;                              //br.s				IL_000d
	IL_005e:            goto IL_0061;                                               //br.s				IL_0061
	IL_0060:                                                                        //break
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x121^ Root::T_x23 F_x2
	IL_0067:            Temp_3=Temp_2->M_x13();                                     //callvirt				System::Boolean Root::T_x121::M_x13()
	IL_006c:            if(!Temp_3)goto IL_00b5;                                    //brfalse.s				IL_00b5
	IL_006e:                                                                        //ldc.i4				0x3
	IL_0073:            V_0=3;                                                      //stloc				V_0
	IL_0077:            /*goto IL_000d;*/goto IL_0079;                              //br.s				IL_000d
	IL_0079:            goto IL_00f7;                                               //br.s				IL_00f7
	IL_007b:                                                                        //ldc.i4				0x6
	IL_0080:            V_0=6;                                                      //stloc				V_0
	IL_0084:            /*goto IL_000d;*/goto IL_0086;                              //br.s				IL_000d
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_4=this->F_x13;                                         //ldfld				System::Int32 Root::T_x23 F_x13
	IL_008c:                                                                        //ldc.i4.1
	IL_008d:            if(Temp_4!=1)goto IL_0124;                                  //bne.un				IL_0124
	IL_0092:                                                                        //ldc.i4				0x0
	IL_0097:            V_0=0;                                                      //stloc				V_0
	IL_009b:            /*goto IL_000d;*/goto IL_00a0;                              //br				IL_000d
	IL_00a0:            goto IL_0053;                                               //br.s				IL_0053
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:            Temp_7=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x23 F_x12
	IL_00a9:            Temp_8=Temp_7->Current;                                     //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00ae:            this->F_x8=Temp_8;                                          //stfld				System::Object^ Root::T_x23 F_x8
	IL_00b3:                                                                        //ldc.i4.1
	IL_00b4:            return true;                                                //ret
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:                                                                        //ldc.i4.2
	IL_00b7:            this->F_x13=2;                                              //stfld				System::Int32 Root::T_x23 F_x13
	IL_00bc:                                                                        //ldc.i4				0x4
	IL_00c1:            V_0=4;                                                      //stloc				V_0
	IL_00c5:            /*goto IL_000d;*/goto IL_00ca;                              //br				IL_000d
	IL_00ca:            goto IL_0124;                                               //br.s				IL_0124
	IL_00cc:                                                                        //ldc.i4				0x7
	IL_00d1:            V_0=7;                                                      //stloc				V_0
	IL_00d5:            /*goto IL_000d;*/goto IL_00da;                              //br				IL_000d
	IL_00da:                                                                        //ldarg.0
	IL_00db:            Temp_5=this->F_x12;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x23 F_x12
	IL_00e0:            Temp_6=Temp_5->MoveNext();                                  //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00e5:            if(!Temp_6)goto IL_010a;                                    //brfalse.s				IL_010a
	IL_00e7:                                                                        //ldc.i4				0x8
	IL_00ec:            V_0=8;                                                      //stloc				V_0
	IL_00f0:            /*goto IL_000d;*/goto IL_00f5;                              //br				IL_000d
	IL_00f5:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x121^ Root::T_x23 F_x2
	IL_00fe:            Temp_1=Temp_0->M_x2();                                      //callvirt				System::Object^ Root::T_x121::M_x2()
	IL_0103:            this->F_x8=Temp_1;                                          //stfld				System::Object^ Root::T_x23 F_x8
	IL_0108:                                                                        //ldc.i4.1
	IL_0109:            return true;                                                //ret
	IL_010a:                                                                        //ldarg.0
	IL_010b:                                                                        //ldc.i4.1
	IL_010c:            this->F_x13=1;                                              //stfld				System::Int32 Root::T_x23 F_x13
	IL_0111:                                                                        //ldc.i4				0x2
	IL_0116:            V_0=2;                                                      //stloc				V_0
	IL_011a:            /*goto IL_000d;*/goto IL_011f;                              //br				IL_000d
	IL_011f:            goto IL_007b;                                               //br				IL_007b
	IL_0124:                                                                        //ldarg.0
	IL_0125:                                                                        //ldnull
	IL_0126:            this->F_x8=safe_cast<System::Object^>(nullptr);             //stfld				System::Object^ Root::T_x23 F_x8
	IL_012b:                                                                        //ldc.i4.0
	IL_012c:            return false;                                               //ret

}
inline System::Boolean Root::T_x23::M_x13(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IInstructionCollection^ Temp_5 = nullptr;
	System::Collections::IEnumerator^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_9 = nullptr;
	System::Collections::IEnumerator^ Temp_10 = nullptr;
	Reflector::CodeModel::IType^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Boolean Temp_13 = false;
	System::Object^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::IMethodReturnType^ Temp_16 = nullptr;
	Reflector::CodeModel::IType^ Temp_17 = nullptr;
	System::Boolean Temp_18 = false;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_19 = nullptr;
	System::Collections::IEnumerator^ Temp_20 = nullptr;
	Reflector::CodeModel::IType^ Temp_21 = nullptr;
	System::Boolean Temp_22 = false;
	System::Boolean Temp_23 = false;
	System::Boolean Temp_24 = false;
	System::Object^ Temp_25 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_26 = nullptr;
	System::Boolean Temp_27 = false;
	System::Boolean Temp_28 = false;
	System::Object^ Temp_29 = nullptr;
	Reflector::CodeModel::IType^ Temp_30 = nullptr;
	System::Boolean Temp_31 = false;
	Reflector::CodeModel::IType^ Temp_32 = nullptr;
	System::Boolean Temp_33 = false;
	System::Boolean Temp_34 = false;
	System::Object^ Temp_35 = nullptr;
	System::Boolean Temp_36 = false;
	System::Boolean Temp_37 = false;
	System::Object^ Temp_38 = nullptr;
	Reflector::CodeModel::IType^ Temp_39 = nullptr;
	System::Boolean Temp_40 = false;
	System::Boolean Temp_41 = false;
	System::Object^ Temp_42 = nullptr;
	System::Object^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	System::Object^ Temp_45 = nullptr;
	Reflector::CodeModel::IType^ Temp_46 = nullptr;
	System::Boolean Temp_47 = false;
	Reflector::CodeModel::IType^ Temp_48 = nullptr;
	System::Boolean Temp_49 = false;
	System::Boolean Temp_50 = false;
	System::Object^ Temp_51 = nullptr;
	Reflector::CodeModel::IType^ Temp_52 = nullptr;
	System::Boolean Temp_53 = false;
	Reflector::CodeModel::IMethodReturnType^ Temp_54 = nullptr;
	Reflector::CodeModel::IType^ Temp_55 = nullptr;
	System::Boolean Temp_56 = false;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_57 = nullptr;
	System::Collections::IEnumerator^ Temp_58 = nullptr;
	Reflector::CodeModel::IExceptionHandlerCollection^ Temp_59 = nullptr;
	System::Collections::IEnumerator^ Temp_60 = nullptr;
	Reflector::CodeModel::IVariableDeclarationCollection^ Temp_61 = nullptr;
	System::Collections::IEnumerator^ Temp_62 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_4 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_5 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_6 = nullptr;
	Reflector::CodeModel::IType^ V_7 = nullptr;
	Reflector::CodeModel::IMethodBody^ V_8 = nullptr;
	Reflector::CodeModel::IInstruction^ V_9 = nullptr;
	Reflector::CodeModel::IType^ V_10 = nullptr;
	Reflector::CodeModel::IMemberReference^ V_11 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_12 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_13 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_14 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ V_15 = nullptr;
	Reflector::CodeModel::IExceptionHandler^ V_16 = nullptr;
	Reflector::CodeModel::ICustomAttributeProvider^ V_17 = nullptr;
	System::Boolean V_18 = false;
	System::Collections::IEnumerator^ V_19 = nullptr;
	System::IDisposable^ V_20 = nullptr;
	System::Collections::IEnumerator^ V_21 = nullptr;
	System::Int32 V_22 = 0;
	//method body ------- 
	IL_0000:            goto IL_009e;                                               //br				IL_009e
	IL_0005:                                                                        //ldloc				V_22
	IL_0009:            switch(V_22){case 0:goto IL_0b99;case 1:goto IL_0d15;case 2:goto IL_0739;case 3:goto IL_08ba;case 4:goto IL_00c7;case 5:goto IL_0d6a;case 6:goto IL_06ab;case 7:goto IL_08cf;case 8:goto IL_0629;case 9:goto IL_0bc3;case 10:goto IL_0d55;case 11:goto IL_0a39;case 12:goto IL_06be;case 13:goto IL_0bae;case 14:goto IL_071a;case 15:goto IL_050b;case 16:goto IL_00b3;case 17:goto IL_0a7d;case 18:goto IL_0873;case 19:goto IL_08ee;case 20:goto IL_085e;case 21:goto IL_0a5d;case 22:goto IL_0a22;case 23:goto IL_0677;case 24:goto IL_0a4a;case 25:goto IL_0893;case 26:goto IL_0d35;case 27:goto IL_0696;case 28:goto IL_0705;case 29:goto IL_0d00;case 30:goto IL_06e2;case 31:goto IL_08a6;case 32:goto IL_0665;case 33:goto IL_0a0d;case 34:goto IL_064a;case 35:goto IL_0bde;};//switch				(IL_0b99,IL_0d15,IL_0739,IL_08ba,IL_00c7,IL_0d6a,IL_06ab,IL_08cf,IL_0629,IL_0bc3,IL_0d55,IL_0a39,IL_06be,IL_0bae,IL_071a,IL_050b,IL_00b3,IL_0a7d,IL_0873,IL_08ee,IL_085e,IL_0a5d,IL_0a22,IL_0677,IL_0a4a,IL_0893,IL_0d35,IL_0696,IL_0705,IL_0d00,IL_06e2,IL_08a6,IL_0665,IL_0a0d,IL_064a,IL_0bde)
	IL_009e:                                                                        //ldarg.1
	IL_009f:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_00a4:            V_0=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.0
	IL_00a5:                                                                        //ldc.i4				0x10
	IL_00aa:            V_22=16;                                                    //stloc				V_22
	IL_00ae:            /*goto IL_0005;*/goto IL_00b3;                              //br				IL_0005
	IL_00b3:                                                                        //ldloc.0
	IL_00b4:            if(V_0==nullptr)goto IL_0a24;                               //brfalse				IL_0a24
	IL_00b9:                                                                        //ldc.i4				0x4
	IL_00be:            V_22=4;                                                     //stloc				V_22
	IL_00c2:            /*goto IL_0005;*/goto IL_00c7;                              //br				IL_0005
	IL_00c7:            goto IL_06b0;                                               //br				IL_06b0
	IL_00C701:          try{
	IL_00cc:                                                                        //ldc.i4				0x12
	IL_00d1:            V_22=18;                                                    //stloc				V_22
	IL_00d5:            /*goto IL_00d9;*/goto IL_00d7;                              //br.s				IL_00d9
	IL_00d7:            goto IL_0146;                                               //br.s				IL_0146
	IL_00d9:                                                                        //ldloc				V_22
	IL_00dd:            switch(V_22){case 0:goto IL_016e;case 1:goto IL_0391;case 2:goto IL_041d;case 3:goto IL_033c;case 4:goto IL_0156;case 5:goto IL_02bb;case 6:goto IL_034f;case 7:goto IL_02ee;case 8:goto IL_02db;case 9:goto IL_0365;case 10:goto IL_01a4;case 11:goto IL_0471;case 12:goto IL_0455;case 13:goto IL_0486;case 14:goto IL_037b;case 15:goto IL_0327;case 16:goto IL_018f;case 17:goto IL_0437;case 18:goto IL_00d7;case 19:goto IL_03a4;case 20:goto IL_040a;case 21:goto IL_0499;case 22:goto IL_030e;case 23:goto IL_03c9;case 24:goto IL_03f5;};//switch				(IL_016e,IL_0391,IL_041d,IL_033c,IL_0156,IL_02bb,IL_034f,IL_02ee,IL_02db,IL_0365,IL_01a4,IL_0471,IL_0455,IL_0486,IL_037b,IL_0327,IL_018f,IL_0437,IL_00d7,IL_03a4,IL_040a,IL_0499,IL_030e,IL_03c9,IL_03f5)
	IL_0146:            goto IL_040f;                                               //br				IL_040f
	IL_014b:                                                                        //ldc.i4				0x4
	IL_0150:            V_22=4;                                                     //stloc				V_22
	IL_0154:            /*goto IL_00d9;*/goto IL_0156;                              //br.s				IL_00d9
	IL_0156:                                                                        //ldarg.0
	IL_0157:                                                                        //ldloc.s				V_10
	IL_0159:            Temp_44=this->M_x1(V_10);                                   //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_015e:            if(!Temp_44)goto IL_0173;                                   //brfalse.s				IL_0173
	IL_0160:                                                                        //ldc.i4				0x0
	IL_0165:            V_22=0;                                                     //stloc				V_22
	IL_0169:            /*goto IL_00d9;*/goto IL_016e;                              //br				IL_00d9
	IL_016e:            goto IL_0354;                                               //br				IL_0354
	IL_0173:                                                                        //ldloc.s				V_9
	IL_0175:            Temp_45=V_9->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_017a:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_017f:            V_11=dynamic_cast<Reflector::CodeModel::IMemberReference^>(Temp_45);//stloc.s				V_11
	IL_0181:                                                                        //ldc.i4				0x10
	IL_0186:            V_22=16;                                                    //stloc				V_22
	IL_018a:            /*goto IL_00d9;*/goto IL_018f;                              //br				IL_00d9
	IL_018f:                                                                        //ldloc.s				V_11
	IL_0191:            if(V_11==nullptr)goto IL_040f;                              //brfalse				IL_040f
	IL_0196:                                                                        //ldc.i4				0xa
	IL_019b:            V_22=10;                                                    //stloc				V_22
	IL_019f:            /*goto IL_00d9;*/goto IL_01a4;                              //br				IL_00d9
	IL_01a4:            goto IL_02ad;                                               //br				IL_02ad
	IL_01A401:          try{
	IL_01a9:                                                                        //ldc.i4				0x4
	IL_01ae:            V_22=4;                                                     //stloc				V_22
	IL_01b2:            /*goto IL_01b6;*/goto IL_01b4;                              //br.s				IL_01b6
	IL_01b4:            goto IL_01db;                                               //br.s				IL_01db
	IL_01b6:                                                                        //ldloc				V_22
	IL_01ba:            switch(V_22){case 0:goto IL_0230;case 1:goto IL_0247;case 2:goto IL_0223;case 3:goto IL_0257;case 4:goto IL_01b4;case 5:goto IL_0209;case 6:goto IL_01eb;};//switch				(IL_0230,IL_0247,IL_0223,IL_0257,IL_01b4,IL_0209,IL_01eb)
	IL_01db:            goto IL_0225;                                               //br.s				IL_0225
	IL_01dd:                                                                        //ldc.i4.1
	IL_01de:            V_18=true;                                                  //stloc.s				V_18
	IL_01e0:                                                                        //ldc.i4				0x6
	IL_01e5:            V_22=6;                                                     //stloc				V_22
	IL_01e9:            /*goto IL_01b6;*/goto IL_01eb;                              //br.s				IL_01b6
	IL_01eb:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_01f0:                                                                        //ldloc.s				V_21
	IL_01f2:            Temp_51=V_21->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_01f7:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_01fc:            V_13=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_51);//stloc.s				V_13
	IL_01fe:                                                                        //ldc.i4				0x5
	IL_0203:            V_22=5;                                                     //stloc				V_22
	IL_0207:            /*goto IL_01b6;*/goto IL_0209;                              //br.s				IL_01b6
	IL_0209:                                                                        //ldarg.0
	IL_020a:                                                                        //ldloc.s				V_13
	IL_020c:            Temp_52=V_13->ParameterType;                                //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0211:            Temp_53=this->M_x1(Temp_52);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0216:            if(!Temp_53)goto IL_0225;                                   //brfalse.s				IL_0225
	IL_0218:                                                                        //ldc.i4				0x2
	IL_021d:            V_22=2;                                                     //stloc				V_22
	IL_0221:            /*goto IL_01b6;*/goto IL_0223;                              //br.s				IL_01b6
	IL_0223:            goto IL_01dd;                                               //br.s				IL_01dd
	IL_0225:                                                                        //ldc.i4				0x0
	IL_022a:            V_22=0;                                                     //stloc				V_22
	IL_022e:            /*goto IL_01b6;*/goto IL_0230;                              //br.s				IL_01b6
	IL_0230:                                                                        //ldloc.s				V_21
	IL_0232:            Temp_50=V_21->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0237:            if(Temp_50)goto IL_01f0;                                    //brtrue.s				IL_01f0
	IL_0239:                                                                        //ldc.i4				0x1
	IL_023e:            V_22=1;                                                     //stloc				V_22
	IL_0242:            /*goto IL_01b6;*/goto IL_0247;                              //br				IL_01b6
	IL_0247:            goto IL_0249;                                               //br.s				IL_0249
	IL_0249:                                                                        //ldc.i4				0x3
	IL_024e:            V_22=3;                                                     //stloc				V_22
	IL_0252:            /*goto IL_01b6;*/goto IL_0257;                              //br				IL_01b6
	IL_0257:            goto IL_0310;                                               //leave				IL_0310
	                    ;}
	                    finally{
	IL_025c:            goto IL_0273;                                               //br.s				IL_0273
	IL_025e:                                                                        //ldloc				V_22
	IL_0262:            switch(V_22){case 0:goto IL_0287;case 1:goto IL_02aa;case 2:goto IL_0296;};//switch				(IL_0287,IL_02aa,IL_0296)
	IL_0273:                                                                        //ldloc.s				V_21
	IL_0275:                                                                        //isinst				System::IDisposable
	IL_027a:            V_20=dynamic_cast<System::IDisposable^>(V_21);              //stloc.s				V_20
	IL_027c:                                                                        //ldc.i4				0x0
	IL_0281:            V_22=0;                                                     //stloc				V_22
	IL_0285:            /*goto IL_025e;*/goto IL_0287;                              //br.s				IL_025e
	IL_0287:                                                                        //ldloc.s				V_20
	IL_0289:            if(V_20==nullptr)goto IL_02ac;                              //brfalse.s				IL_02ac
	IL_028b:                                                                        //ldc.i4				0x2
	IL_0290:            V_22=2;                                                     //stloc				V_22
	IL_0294:            /*goto IL_025e;*/goto IL_0296;                              //br.s				IL_025e
	IL_0296:            goto IL_0298;                                               //br.s				IL_0298
	IL_0298:                                                                        //ldloc.s				V_20
	IL_029a:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_029f:                                                                        //ldc.i4				0x1
	IL_02a4:            V_22=1;                                                     //stloc				V_22
	IL_02a8:            /*goto IL_025e;*/goto IL_02aa;                              //br.s				IL_025e
	IL_02aa:            goto IL_02ac;                                               //br.s				IL_02ac
	IL_02ac:                                                                        //endfinally
	                    ;}
	IL_02ad:                                                                        //ldc.i4				0x5
	IL_02b2:            V_22=5;                                                     //stloc				V_22
	IL_02b6:            /*goto IL_00d9;*/goto IL_02bb;                              //br				IL_00d9
	IL_02bb:                                                                        //ldarg.0
	IL_02bc:                                                                        //ldloc.s				V_11
	IL_02be:            Temp_46=V_11->DeclaringType;                                //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_02c3:            Temp_47=this->M_x1(Temp_46);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_02c8:            if(!Temp_47)goto IL_045a;                                   //brfalse				IL_045a
	IL_02cd:                                                                        //ldc.i4				0x8
	IL_02d2:            V_22=8;                                                     //stloc				V_22
	IL_02d6:            /*goto IL_00d9;*/goto IL_02db;                              //br				IL_00d9
	IL_02db:            goto IL_0380;                                               //br				IL_0380
	IL_02e0:                                                                        //ldc.i4				0x7
	IL_02e5:            V_22=7;                                                     //stloc				V_22
	IL_02e9:            /*goto IL_00d9;*/goto IL_02ee;                              //br				IL_00d9
	IL_02ee:                                                                        //ldarg.0
	IL_02ef:                                                                        //ldloc.s				V_14
	IL_02f1:            Temp_48=V_14->FieldType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_02f6:            Temp_49=this->M_x1(Temp_48);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_02fb:            if(!Temp_49)goto IL_040f;                                   //brfalse				IL_040f
	IL_0300:                                                                        //ldc.i4				0x16
	IL_0305:            V_22=22;                                                    //stloc				V_22
	IL_0309:            /*goto IL_00d9;*/goto IL_030e;                              //br				IL_00d9
	IL_030e:            goto IL_033e;                                               //br.s				IL_033e
	IL_0310:                                                                        //ldloc.s				V_11
	IL_0312:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0317:            V_14=dynamic_cast<Reflector::CodeModel::IFieldReference^>(V_11);//stloc.s				V_14
	IL_0319:                                                                        //ldc.i4				0xf
	IL_031e:            V_22=15;                                                    //stloc				V_22
	IL_0322:            /*goto IL_00d9;*/goto IL_0327;                              //br				IL_00d9
	IL_0327:                                                                        //ldloc.s				V_14
	IL_0329:            if(V_14==nullptr)goto IL_040f;                              //brfalse				IL_040f
	IL_032e:                                                                        //ldc.i4				0x3
	IL_0333:            V_22=3;                                                     //stloc				V_22
	IL_0337:            /*goto IL_00d9;*/goto IL_033c;                              //br				IL_00d9
	IL_033c:            goto IL_02e0;                                               //br.s				IL_02e0
	IL_033e:                                                                        //ldc.i4.1
	IL_033f:            V_18=true;                                                  //stloc.s				V_18
	IL_0341:                                                                        //ldc.i4				0x6
	IL_0346:            V_22=6;                                                     //stloc				V_22
	IL_034a:            /*goto IL_00d9;*/goto IL_034f;                              //br				IL_00d9
	IL_034f:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_0354:                                                                        //ldc.i4.1
	IL_0355:            V_18=true;                                                  //stloc.s				V_18
	IL_0357:                                                                        //ldc.i4				0x9
	IL_035c:            V_22=9;                                                     //stloc				V_22
	IL_0360:            /*goto IL_00d9;*/goto IL_0365;                              //br				IL_00d9
	IL_0365:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_036a:                                                                        //ldc.i4.1
	IL_036b:            V_18=true;                                                  //stloc.s				V_18
	IL_036d:                                                                        //ldc.i4				0xe
	IL_0372:            V_22=14;                                                    //stloc				V_22
	IL_0376:            /*goto IL_00d9;*/goto IL_037b;                              //br				IL_00d9
	IL_037b:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_0380:                                                                        //ldc.i4.1
	IL_0381:            V_18=true;                                                  //stloc.s				V_18
	IL_0383:                                                                        //ldc.i4				0x1
	IL_0388:            V_22=1;                                                     //stloc				V_22
	IL_038c:            /*goto IL_00d9;*/goto IL_0391;                              //br				IL_00d9
	IL_0391:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_0396:                                                                        //ldc.i4				0x13
	IL_039b:            V_22=19;                                                    //stloc				V_22
	IL_039f:            /*goto IL_00d9;*/goto IL_03a4;                              //br				IL_00d9
	IL_03a4:                                                                        //ldarg.0
	IL_03a5:                                                                        //ldloc.s				V_12
	IL_03a7:            Temp_54=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_12)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_03ac:            Temp_55=Temp_54->Type;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_03b1:            Temp_56=this->M_x1(Temp_55);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_03b6:            if(!Temp_56)goto IL_0439;                                   //brfalse				IL_0439
	IL_03bb:                                                                        //ldc.i4				0x17
	IL_03c0:            V_22=23;                                                    //stloc				V_22
	IL_03c4:            /*goto IL_00d9;*/goto IL_03c9;                              //br				IL_00d9
	IL_03c9:            goto IL_036a;                                               //br.s				IL_036a
	IL_03cb:                                                                        //ldloc.s				V_19
	IL_03cd:            Temp_42=V_19->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_03d2:                                                                        //castclass				Reflector::CodeModel::IInstruction
	IL_03d7:            V_9=safe_cast<Reflector::CodeModel::IInstruction^>(Temp_42);//stloc.s				V_9
	IL_03d9:                                                                        //ldloc.s				V_9
	IL_03db:            Temp_43=V_9->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_03e0:                                                                        //isinst				Reflector::CodeModel::IType
	IL_03e5:            V_10=dynamic_cast<Reflector::CodeModel::IType^>(Temp_43);   //stloc.s				V_10
	IL_03e7:                                                                        //ldc.i4				0x18
	IL_03ec:            V_22=24;                                                    //stloc				V_22
	IL_03f0:            /*goto IL_00d9;*/goto IL_03f5;                              //br				IL_00d9
	IL_03f5:                                                                        //ldloc.s				V_10
	IL_03f7:            if(V_10==nullptr)goto IL_0173;                              //brfalse				IL_0173
	IL_03fc:                                                                        //ldc.i4				0x14
	IL_0401:            V_22=20;                                                    //stloc				V_22
	IL_0405:            /*goto IL_00d9;*/goto IL_040a;                              //br				IL_00d9
	IL_040a:            goto IL_014b;                                               //br				IL_014b
	IL_040f:                                                                        //ldc.i4				0x2
	IL_0414:            V_22=2;                                                     //stloc				V_22
	IL_0418:            /*goto IL_00d9;*/goto IL_041d;                              //br				IL_00d9
	IL_041d:                                                                        //ldloc.s				V_19
	IL_041f:            Temp_41=V_19->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0424:            if(Temp_41)goto IL_03cb;                                    //brtrue				IL_03cb
	IL_0429:                                                                        //ldc.i4				0x11
	IL_042e:            V_22=17;                                                    //stloc				V_22
	IL_0432:            /*goto IL_00d9;*/goto IL_0437;                              //br				IL_00d9
	IL_0437:            goto IL_048b;                                               //br.s				IL_048b
	IL_0439:                                                                        //ldloc.s				V_12
	IL_043b:            Temp_57=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_12)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0440:            Temp_58=safe_cast<System::Collections::IEnumerable^>(Temp_57)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0445:            V_21=Temp_58;                                               //stloc.s				V_21
	IL_0447:                                                                        //ldc.i4				0xc
	IL_044c:            V_22=12;                                                    //stloc				V_22
	IL_0450:            /*goto IL_00d9;*/goto IL_0455;                              //br				IL_00d9
	IL_0455:            /*goto IL_01a9;*/goto IL_01A401;                            //br				IL_01a9
	IL_045a:                                                                        //ldloc.s				V_11
	IL_045c:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0461:            V_12=dynamic_cast<Reflector::CodeModel::IMethodReference^>(V_11);//stloc.s				V_12
	IL_0463:                                                                        //ldc.i4				0xb
	IL_0468:            V_22=11;                                                    //stloc				V_22
	IL_046c:            /*goto IL_00d9;*/goto IL_0471;                              //br				IL_00d9
	IL_0471:                                                                        //ldloc.s				V_12
	IL_0473:            if(V_12==nullptr)goto IL_0310;                              //brfalse				IL_0310
	IL_0478:                                                                        //ldc.i4				0xd
	IL_047d:            V_22=13;                                                    //stloc				V_22
	IL_0481:            /*goto IL_00d9;*/goto IL_0486;                              //br				IL_00d9
	IL_0486:            goto IL_0396;                                               //br				IL_0396
	IL_048b:                                                                        //ldc.i4				0x15
	IL_0490:            V_22=21;                                                    //stloc				V_22
	IL_0494:            /*goto IL_00d9;*/goto IL_0499;                              //br				IL_00d9
	IL_0499:            goto IL_0842;                                               //leave				IL_0842
	                    ;}
	                    finally{
	IL_049e:            goto IL_04b5;                                               //br.s				IL_04b5
	IL_04a0:                                                                        //ldloc				V_22
	IL_04a4:            switch(V_22){case 0:goto IL_04c9;case 1:goto IL_04ec;case 2:goto IL_04d8;};//switch				(IL_04c9,IL_04ec,IL_04d8)
	IL_04b5:                                                                        //ldloc.s				V_19
	IL_04b7:                                                                        //isinst				System::IDisposable
	IL_04bc:            V_20=dynamic_cast<System::IDisposable^>(V_19);              //stloc.s				V_20
	IL_04be:                                                                        //ldc.i4				0x0
	IL_04c3:            V_22=0;                                                     //stloc				V_22
	IL_04c7:            /*goto IL_04a0;*/goto IL_04c9;                              //br.s				IL_04a0
	IL_04c9:                                                                        //ldloc.s				V_20
	IL_04cb:            if(V_20==nullptr)goto IL_04ee;                              //brfalse.s				IL_04ee
	IL_04cd:                                                                        //ldc.i4				0x2
	IL_04d2:            V_22=2;                                                     //stloc				V_22
	IL_04d6:            /*goto IL_04a0;*/goto IL_04d8;                              //br.s				IL_04a0
	IL_04d8:            goto IL_04da;                                               //br.s				IL_04da
	IL_04da:                                                                        //ldloc.s				V_20
	IL_04dc:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_04e1:                                                                        //ldc.i4				0x1
	IL_04e6:            V_22=1;                                                     //stloc				V_22
	IL_04ea:            /*goto IL_04a0;*/goto IL_04ec;                              //br.s				IL_04a0
	IL_04ec:            goto IL_04ee;                                               //br.s				IL_04ee
	IL_04ee:                                                                        //endfinally
	                    ;}
	IL_04ef:                                                                        //ldloc.s				V_6
	IL_04f1:            Temp_2=V_6->Interfaces;                                     //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_04f6:            Temp_3=safe_cast<System::Collections::IEnumerable^>(Temp_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_04fb:            V_19=Temp_3;                                                //stloc.s				V_19
	IL_04fd:                                                                        //ldc.i4				0xf
	IL_0502:            V_22=15;                                                    //stloc				V_22
	IL_0506:            /*goto IL_0005;*/goto IL_050b;                              //br				IL_0005
	IL_050b:            /*goto IL_0a82;*/goto IL_0A7D01;                            //br				IL_0a82
	IL_050B01:          try{
	IL_0510:                                                                        //ldc.i4				0x0
	IL_0515:            V_22=0;                                                     //stloc				V_22
	IL_0519:            /*goto IL_051d;*/goto IL_051b;                              //br.s				IL_051d
	IL_051b:            goto IL_0542;                                               //br.s				IL_0542
	IL_051d:                                                                        //ldloc				V_22
	IL_0521:            switch(V_22){case 0:goto IL_051b;case 1:goto IL_05a4;case 2:goto IL_054f;case 3:goto IL_057d;case 4:goto IL_05b7;case 5:goto IL_0591;case 6:goto IL_0563;};//switch				(IL_051b,IL_05a4,IL_054f,IL_057d,IL_05b7,IL_0591,IL_0563)
	IL_0542:            goto IL_0544;                                               //br.s				IL_0544
	IL_0544:                                                                        //ldc.i4				0x2
	IL_0549:            V_22=2;                                                     //stloc				V_22
	IL_054d:            /*goto IL_051d;*/goto IL_054f;                              //br.s				IL_051d
	IL_054f:                                                                        //ldloc.s				V_19
	IL_0551:            Temp_34=V_19->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0556:            if(Temp_34)goto IL_0565;                                    //brtrue.s				IL_0565
	IL_0558:                                                                        //ldc.i4				0x6
	IL_055d:            V_22=6;                                                     //stloc				V_22
	IL_0561:            /*goto IL_051d;*/goto IL_0563;                              //br.s				IL_051d
	IL_0563:            goto IL_05a9;                                               //br.s				IL_05a9
	IL_0565:                                                                        //ldloc.s				V_19
	IL_0567:            Temp_35=V_19->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_056c:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_0571:            V_2=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_35);//stloc.2
	IL_0572:                                                                        //ldc.i4				0x3
	IL_0577:            V_22=3;                                                     //stloc				V_22
	IL_057b:            /*goto IL_051d;*/goto IL_057d;                              //br.s				IL_051d
	IL_057d:                                                                        //ldarg.0
	IL_057e:                                                                        //ldloc.2
	IL_057f:            Temp_36=this->M_x12(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_2));//call				System::Boolean Root::T_x23::M_x12(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_0584:            if(!Temp_36)goto IL_0544;                                   //brfalse.s				IL_0544
	IL_0586:                                                                        //ldc.i4				0x5
	IL_058b:            V_22=5;                                                     //stloc				V_22
	IL_058f:            /*goto IL_051d;*/goto IL_0591;                              //br.s				IL_051d
	IL_0591:            goto IL_0593;                                               //br.s				IL_0593
	IL_0593:                                                                        //ldc.i4.1
	IL_0594:            V_18=true;                                                  //stloc.s				V_18
	IL_0596:                                                                        //ldc.i4				0x1
	IL_059b:            V_22=1;                                                     //stloc				V_22
	IL_059f:            /*goto IL_051d;*/goto IL_05a4;                              //br				IL_051d
	IL_05a4:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_05a9:                                                                        //ldc.i4				0x4
	IL_05ae:            V_22=4;                                                     //stloc				V_22
	IL_05b2:            /*goto IL_051d;*/goto IL_05b7;                              //br				IL_051d
	IL_05b7:            goto IL_0a24;                                               //leave				IL_0a24
	                    ;}
	                    finally{
	IL_05bc:            goto IL_05d3;                                               //br.s				IL_05d3
	IL_05be:                                                                        //ldloc				V_22
	IL_05c2:            switch(V_22){case 0:goto IL_05e7;case 1:goto IL_060a;case 2:goto IL_05f6;};//switch				(IL_05e7,IL_060a,IL_05f6)
	IL_05d3:                                                                        //ldloc.s				V_19
	IL_05d5:                                                                        //isinst				System::IDisposable
	IL_05da:            V_20=dynamic_cast<System::IDisposable^>(V_19);              //stloc.s				V_20
	IL_05dc:                                                                        //ldc.i4				0x0
	IL_05e1:            V_22=0;                                                     //stloc				V_22
	IL_05e5:            /*goto IL_05be;*/goto IL_05e7;                              //br.s				IL_05be
	IL_05e7:                                                                        //ldloc.s				V_20
	IL_05e9:            if(V_20==nullptr)goto IL_060c;                              //brfalse.s				IL_060c
	IL_05eb:                                                                        //ldc.i4				0x2
	IL_05f0:            V_22=2;                                                     //stloc				V_22
	IL_05f4:            /*goto IL_05be;*/goto IL_05f6;                              //br.s				IL_05be
	IL_05f6:            goto IL_05f8;                                               //br.s				IL_05f8
	IL_05f8:                                                                        //ldloc.s				V_20
	IL_05fa:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_05ff:                                                                        //ldc.i4				0x1
	IL_0604:            V_22=1;                                                     //stloc				V_22
	IL_0608:            /*goto IL_05be;*/goto IL_060a;                              //br.s				IL_05be
	IL_060a:            goto IL_060c;                                               //br.s				IL_060c
	IL_060c:                                                                        //endfinally
	                    ;}
	IL_060d:                                                                        //ldloc.s				V_8
	IL_060f:            Temp_59=V_8->ExceptionHandlers;                             //callvirt				Reflector::CodeModel::IExceptionHandlerCollection^ Reflector::CodeModel::IMethodBody::get_ExceptionHandlers()
	IL_0614:            Temp_60=safe_cast<System::Collections::IEnumerable^>(Temp_59)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0619:            V_19=Temp_60;                                               //stloc.s				V_19
	IL_061b:                                                                        //ldc.i4				0x8
	IL_0620:            V_22=8;                                                     //stloc				V_22
	IL_0624:            /*goto IL_0005;*/goto IL_0629;                              //br				IL_0005
	IL_0629:            /*goto IL_073e;*/goto IL_073901;                            //br				IL_073e
	IL_062e:                                                                        //ldloc.s				V_8
	IL_0630:            Temp_5=V_8->Instructions;                                   //callvirt				Reflector::CodeModel::IInstructionCollection^ Reflector::CodeModel::IMethodBody::get_Instructions()
	IL_0635:            Temp_6=safe_cast<System::Collections::IEnumerable^>(Temp_5)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_063a:            V_19=Temp_6;                                                //stloc.s				V_19
	IL_063c:                                                                        //ldc.i4				0x22
	IL_0641:            V_22=34;                                                    //stloc				V_22
	IL_0645:            /*goto IL_0005;*/goto IL_064a;                              //br				IL_0005
	IL_064a:            /*goto IL_00cc;*/goto IL_00C701;                            //br				IL_00cc
	IL_064f:                                                                        //ldarg.1
	IL_0650:                                                                        //isinst				Reflector::CodeModel::ICustomAttributeProvider
	IL_0655:            V_17=dynamic_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0);//stloc.s				V_17
	IL_0657:                                                                        //ldc.i4				0x20
	IL_065c:            V_22=32;                                                    //stloc				V_22
	IL_0660:            /*goto IL_0005;*/goto IL_0665;                              //br				IL_0005
	IL_0665:                                                                        //ldloc.s				V_17
	IL_0667:            if(V_17==nullptr)goto IL_067e;                              //brfalse.s				IL_067e
	IL_0669:                                                                        //ldc.i4				0x17
	IL_066e:            V_22=23;                                                    //stloc				V_22
	IL_0672:            /*goto IL_0005;*/goto IL_0677;                              //br				IL_0005
	IL_0677:            goto IL_0bb5;                                               //br				IL_0bb5
	IL_067c:                                                                        //ldc.i4.1
	IL_067d:            return true;                                                //ret
	IL_067e:                                                                        //ldc.i4.0
	IL_067f:            return false;                                               //ret
	IL_0680:                                                                        //ldarg.1
	IL_0681:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_0686:            V_5=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(A_0);//stloc.s				V_5
	IL_0688:                                                                        //ldc.i4				0x1b
	IL_068d:            V_22=27;                                                    //stloc				V_22
	IL_0691:            /*goto IL_0005;*/goto IL_0696;                              //br				IL_0005
	IL_0696:                                                                        //ldloc.s				V_5
	IL_0698:            if(V_5==nullptr)goto IL_0b83;                               //brfalse				IL_0b83
	IL_069d:                                                                        //ldc.i4				0x6
	IL_06a2:            V_22=6;                                                     //stloc				V_22
	IL_06a6:            /*goto IL_0005;*/goto IL_06ab;                              //br				IL_0005
	IL_06ab:            goto IL_0865;                                               //br				IL_0865
	IL_06b0:                                                                        //ldc.i4				0xc
	IL_06b5:            V_22=12;                                                    //stloc				V_22
	IL_06b9:            /*goto IL_0005;*/goto IL_06be;                              //br				IL_0005
	IL_06be:                                                                        //ldarg.0
	IL_06bf:                                                                        //ldloc.0
	IL_06c0:            Temp_16=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_06c5:            Temp_17=Temp_16->Type;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_06ca:            Temp_18=this->M_x1(Temp_17);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_06cf:            if(!Temp_18)goto IL_0ce5;                                   //brfalse				IL_0ce5
	IL_06d4:                                                                        //ldc.i4				0x1e
	IL_06d9:            V_22=30;                                                    //stloc				V_22
	IL_06dd:            /*goto IL_0005;*/goto IL_06e2;                              //br				IL_0005
	IL_06e2:            goto IL_06e5;                                               //br.s				IL_06e5
	IL_06e4:                                                                        //break
	IL_06e5:            goto IL_0b81;                                               //br				IL_0b81
	IL_06ea:                                                                        //ldloc.0
	IL_06eb:            Temp_9=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_06f0:            Temp_10=safe_cast<System::Collections::IEnumerable^>(Temp_9)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_06f5:            V_19=Temp_10;                                               //stloc.s				V_19
	IL_06f7:                                                                        //ldc.i4				0x1c
	IL_06fc:            V_22=28;                                                    //stloc				V_22
	IL_0700:            /*goto IL_0005;*/goto IL_0705;                              //br				IL_0005
	IL_0705:            /*goto IL_0510;*/goto IL_050B01;                            //br				IL_0510
	IL_070a:                                                                        //ldc.i4.1
	IL_070b:            return true;                                                //ret
	IL_070c:                                                                        //ldc.i4				0xe
	IL_0711:            V_22=14;                                                    //stloc				V_22
	IL_0715:            /*goto IL_0005;*/goto IL_071a;                              //br				IL_0005
	IL_071a:                                                                        //ldarg.0
	IL_071b:                                                                        //ldloc.3
	IL_071c:            Temp_21=safe_cast<Reflector::CodeModel::IFieldReference^>(V_3)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0721:            Temp_22=this->M_x1(Temp_21);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0726:            if(!Temp_22)goto IL_09f7;                                   //brfalse				IL_09f7
	IL_072b:                                                                        //ldc.i4				0x2
	IL_0730:            V_22=2;                                                     //stloc				V_22
	IL_0734:            /*goto IL_0005;*/goto IL_0739;                              //br				IL_0005
	IL_0739:            goto IL_08bf;                                               //br				IL_08bf
	IL_073901:          try{
	IL_073e:                                                                        //ldc.i4				0x0
	IL_0743:            V_22=0;                                                     //stloc				V_22
	IL_0747:            /*goto IL_074b;*/goto IL_0749;                              //br.s				IL_074b
	IL_0749:            goto IL_0770;                                               //br.s				IL_0770
	IL_074b:                                                                        //ldloc				V_22
	IL_074f:            switch(V_22){case 0:goto IL_0749;case 1:goto IL_07a4;case 2:goto IL_07bf;case 3:goto IL_07ec;case 4:goto IL_07dc;case 5:goto IL_0790;case 6:goto IL_0780;};//switch				(IL_0749,IL_07a4,IL_07bf,IL_07ec,IL_07dc,IL_0790,IL_0780)
	IL_0770:            goto IL_0785;                                               //br.s				IL_0785
	IL_0772:                                                                        //ldc.i4.1
	IL_0773:            V_18=true;                                                  //stloc.s				V_18
	IL_0775:                                                                        //ldc.i4				0x6
	IL_077a:            V_22=6;                                                     //stloc				V_22
	IL_077e:            /*goto IL_074b;*/goto IL_0780;                              //br.s				IL_074b
	IL_0780:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_0785:                                                                        //ldc.i4				0x5
	IL_078a:            V_22=5;                                                     //stloc				V_22
	IL_078e:            /*goto IL_074b;*/goto IL_0790;                              //br.s				IL_074b
	IL_0790:                                                                        //ldloc.s				V_19
	IL_0792:            Temp_13=V_19->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0797:            if(Temp_13)goto IL_07a6;                                    //brtrue.s				IL_07a6
	IL_0799:                                                                        //ldc.i4				0x1
	IL_079e:            V_22=1;                                                     //stloc				V_22
	IL_07a2:            /*goto IL_074b;*/goto IL_07a4;                              //br.s				IL_074b
	IL_07a4:            goto IL_07de;                                               //br.s				IL_07de
	IL_07a6:                                                                        //ldloc.s				V_19
	IL_07a8:            Temp_14=V_19->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_07ad:                                                                        //castclass				Reflector::CodeModel::IExceptionHandler
	IL_07b2:            V_16=safe_cast<Reflector::CodeModel::IExceptionHandler^>(Temp_14);//stloc.s				V_16
	IL_07b4:                                                                        //ldc.i4				0x2
	IL_07b9:            V_22=2;                                                     //stloc				V_22
	IL_07bd:            /*goto IL_074b;*/goto IL_07bf;                              //br.s				IL_074b
	IL_07bf:                                                                        //ldarg.0
	IL_07c0:                                                                        //ldloc.s				V_16
	IL_07c2:            Temp_11=V_16->CatchType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IExceptionHandler::get_CatchType()
	IL_07c7:            Temp_12=this->M_x1(Temp_11);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_07cc:            if(!Temp_12)goto IL_0785;                                   //brfalse.s				IL_0785
	IL_07ce:                                                                        //ldc.i4				0x4
	IL_07d3:            V_22=4;                                                     //stloc				V_22
	IL_07d7:            /*goto IL_074b;*/goto IL_07dc;                              //br				IL_074b
	IL_07dc:            goto IL_0772;                                               //br.s				IL_0772
	IL_07de:                                                                        //ldc.i4				0x3
	IL_07e3:            V_22=3;                                                     //stloc				V_22
	IL_07e7:            /*goto IL_074b;*/goto IL_07ec;                              //br				IL_074b
	IL_07ec:            goto IL_064f;                                               //leave				IL_064f
	                    ;}
	                    finally{
	IL_07f1:            goto IL_0808;                                               //br.s				IL_0808
	IL_07f3:                                                                        //ldloc				V_22
	IL_07f7:            switch(V_22){case 0:goto IL_082b;case 1:goto IL_083f;case 2:goto IL_081c;};//switch				(IL_082b,IL_083f,IL_081c)
	IL_0808:                                                                        //ldloc.s				V_19
	IL_080a:                                                                        //isinst				System::IDisposable
	IL_080f:            V_20=dynamic_cast<System::IDisposable^>(V_19);              //stloc.s				V_20
	IL_0811:                                                                        //ldc.i4				0x2
	IL_0816:            V_22=2;                                                     //stloc				V_22
	IL_081a:            /*goto IL_07f3;*/goto IL_081c;                              //br.s				IL_07f3
	IL_081c:                                                                        //ldloc.s				V_20
	IL_081e:            if(V_20==nullptr)goto IL_0841;                              //brfalse.s				IL_0841
	IL_0820:                                                                        //ldc.i4				0x0
	IL_0825:            V_22=0;                                                     //stloc				V_22
	IL_0829:            /*goto IL_07f3;*/goto IL_082b;                              //br.s				IL_07f3
	IL_082b:            goto IL_082d;                                               //br.s				IL_082d
	IL_082d:                                                                        //ldloc.s				V_20
	IL_082f:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0834:                                                                        //ldc.i4				0x1
	IL_0839:            V_22=1;                                                     //stloc				V_22
	IL_083d:            /*goto IL_07f3;*/goto IL_083f;                              //br.s				IL_07f3
	IL_083f:            goto IL_0841;                                               //br.s				IL_0841
	IL_0841:                                                                        //endfinally
	                    ;}
	IL_0842:                                                                        //ldloc.s				V_8
	IL_0844:            Temp_61=V_8->LocalVariables;                                //callvirt				Reflector::CodeModel::IVariableDeclarationCollection^ Reflector::CodeModel::IMethodBody::get_LocalVariables()
	IL_0849:            Temp_62=safe_cast<System::Collections::IEnumerable^>(Temp_61)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_084e:            V_19=Temp_62;                                               //stloc.s				V_19
	IL_0850:                                                                        //ldc.i4				0x14
	IL_0855:            V_22=20;                                                    //stloc				V_22
	IL_0859:            /*goto IL_0005;*/goto IL_085e;                              //br				IL_0005
	IL_085e:            /*goto IL_08f3;*/goto IL_08EE01;                            //br				IL_08f3
	IL_0863:                                                                        //ldc.i4.1
	IL_0864:            return true;                                                //ret
	IL_0865:                                                                        //ldc.i4				0x12
	IL_086a:            V_22=18;                                                    //stloc				V_22
	IL_086e:            /*goto IL_0005;*/goto IL_0873;                              //br				IL_0005
	IL_0873:                                                                        //ldarg.0
	IL_0874:                                                                        //ldloc.s				V_5
	IL_0876:            Temp_26=safe_cast<Reflector::CodeModel::IEventReference^>(V_5)->EventType;//callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_087b:            Temp_27=this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_26));//call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0880:            if(!Temp_27)goto IL_0b83;                                   //brfalse				IL_0b83
	IL_0885:                                                                        //ldc.i4				0x19
	IL_088a:            V_22=25;                                                    //stloc				V_22
	IL_088e:            /*goto IL_0005;*/goto IL_0893;                              //br				IL_0005
	IL_0893:            goto IL_0bb3;                                               //br				IL_0bb3
	IL_0898:                                                                        //ldc.i4				0x1f
	IL_089d:            V_22=31;                                                    //stloc				V_22
	IL_08a1:            /*goto IL_0005;*/goto IL_08a6;                              //br				IL_0005
	IL_08a6:                                                                        //ldloc.0
	IL_08a7:            if(V_0==nullptr)goto IL_064f;                               //brfalse				IL_064f
	IL_08ac:                                                                        //ldc.i4				0x3
	IL_08b1:            V_22=3;                                                     //stloc				V_22
	IL_08b5:            /*goto IL_0005;*/goto IL_08ba;                              //br				IL_0005
	IL_08ba:            goto IL_0d3a;                                               //br				IL_0d3a
	IL_08bf:                                                                        //ldc.i4.1
	IL_08c0:            return true;                                                //ret
	IL_08c1:                                                                        //ldc.i4				0x7
	IL_08c6:            V_22=7;                                                     //stloc				V_22
	IL_08ca:            /*goto IL_0005;*/goto IL_08cf;                              //br				IL_0005
	IL_08cf:                                                                        //ldarg.0
	IL_08d0:                                                                        //ldloc.0
	IL_08d1:            Temp_7=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_08d6:            Temp_8=this->M_x12(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(Temp_7));//call				System::Boolean Root::T_x23::M_x12(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_08db:            if(!Temp_8)goto IL_06ea;                                    //brfalse				IL_06ea
	IL_08e0:                                                                        //ldc.i4				0x13
	IL_08e5:            V_22=19;                                                    //stloc				V_22
	IL_08e9:            /*goto IL_0005;*/goto IL_08ee;                              //br				IL_0005
	IL_08ee:            goto IL_070a;                                               //br				IL_070a
	IL_08EE01:          try{
	IL_08f3:                                                                        //ldc.i4				0x6
	IL_08f8:            V_22=6;                                                     //stloc				V_22
	IL_08fc:            /*goto IL_0900;*/goto IL_08fe;                              //br.s				IL_0900
	IL_08fe:            goto IL_0925;                                               //br.s				IL_0925
	IL_0900:                                                                        //ldloc				V_22
	IL_0904:            switch(V_22){case 0:goto IL_095a;case 1:goto IL_097a;case 2:goto IL_096a;case 3:goto IL_09a1;case 4:goto IL_0991;case 5:goto IL_0940;case 6:goto IL_08fe;};//switch				(IL_095a,IL_097a,IL_096a,IL_09a1,IL_0991,IL_0940,IL_08fe)
	IL_0925:            goto IL_096f;                                               //br.s				IL_096f
	IL_0927:                                                                        //ldloc.s				V_19
	IL_0929:            Temp_29=V_19->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_092e:                                                                        //castclass				Reflector::CodeModel::IVariableDeclaration
	IL_0933:            V_15=safe_cast<Reflector::CodeModel::IVariableDeclaration^>(Temp_29);//stloc.s				V_15
	IL_0935:                                                                        //ldc.i4				0x5
	IL_093a:            V_22=5;                                                     //stloc				V_22
	IL_093e:            /*goto IL_0900;*/goto IL_0940;                              //br.s				IL_0900
	IL_0940:                                                                        //ldarg.0
	IL_0941:                                                                        //ldloc.s				V_15
	IL_0943:            Temp_30=V_15->VariableType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_0948:            Temp_31=this->M_x1(Temp_30);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_094d:            if(!Temp_31)goto IL_096f;                                   //brfalse.s				IL_096f
	IL_094f:                                                                        //ldc.i4				0x0
	IL_0954:            V_22=0;                                                     //stloc				V_22
	IL_0958:            /*goto IL_0900;*/goto IL_095a;                              //br.s				IL_0900
	IL_095a:            goto IL_095c;                                               //br.s				IL_095c
	IL_095c:                                                                        //ldc.i4.1
	IL_095d:            V_18=true;                                                  //stloc.s				V_18
	IL_095f:                                                                        //ldc.i4				0x2
	IL_0964:            V_22=2;                                                     //stloc				V_22
	IL_0968:            /*goto IL_0900;*/goto IL_096a;                              //br.s				IL_0900
	IL_096a:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_096f:                                                                        //ldc.i4				0x1
	IL_0974:            V_22=1;                                                     //stloc				V_22
	IL_0978:            /*goto IL_0900;*/goto IL_097a;                              //br.s				IL_0900
	IL_097a:                                                                        //ldloc.s				V_19
	IL_097c:            Temp_28=V_19->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0981:            if(Temp_28)goto IL_0927;                                    //brtrue.s				IL_0927
	IL_0983:                                                                        //ldc.i4				0x4
	IL_0988:            V_22=4;                                                     //stloc				V_22
	IL_098c:            /*goto IL_0900;*/goto IL_0991;                              //br				IL_0900
	IL_0991:            goto IL_0993;                                               //br.s				IL_0993
	IL_0993:                                                                        //ldc.i4				0x3
	IL_0998:            V_22=3;                                                     //stloc				V_22
	IL_099c:            /*goto IL_0900;*/goto IL_09a1;                              //br				IL_0900
	IL_09a1:            goto IL_060d;                                               //leave				IL_060d
	                    ;}
	                    finally{
	IL_09a6:            goto IL_09bd;                                               //br.s				IL_09bd
	IL_09a8:                                                                        //ldloc				V_22
	IL_09ac:            switch(V_22){case 0:goto IL_09e0;case 1:goto IL_09f4;case 2:goto IL_09d1;};//switch				(IL_09e0,IL_09f4,IL_09d1)
	IL_09bd:                                                                        //ldloc.s				V_19
	IL_09bf:                                                                        //isinst				System::IDisposable
	IL_09c4:            V_20=dynamic_cast<System::IDisposable^>(V_19);              //stloc.s				V_20
	IL_09c6:                                                                        //ldc.i4				0x2
	IL_09cb:            V_22=2;                                                     //stloc				V_22
	IL_09cf:            /*goto IL_09a8;*/goto IL_09d1;                              //br.s				IL_09a8
	IL_09d1:                                                                        //ldloc.s				V_20
	IL_09d3:            if(V_20==nullptr)goto IL_09f6;                              //brfalse.s				IL_09f6
	IL_09d5:                                                                        //ldc.i4				0x0
	IL_09da:            V_22=0;                                                     //stloc				V_22
	IL_09de:            /*goto IL_09a8;*/goto IL_09e0;                              //br.s				IL_09a8
	IL_09e0:            goto IL_09e2;                                               //br.s				IL_09e2
	IL_09e2:                                                                        //ldloc.s				V_20
	IL_09e4:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_09e9:                                                                        //ldc.i4				0x1
	IL_09ee:            V_22=1;                                                     //stloc				V_22
	IL_09f2:            /*goto IL_09a8;*/goto IL_09f4;                              //br.s				IL_09a8
	IL_09f4:            goto IL_09f6;                                               //br.s				IL_09f6
	IL_09f6:                                                                        //endfinally
	                    ;}
	IL_09f7:                                                                        //ldarg.1
	IL_09f8:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_09fd:            V_4=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(A_0);//stloc.s				V_4
	IL_09ff:                                                                        //ldc.i4				0x21
	IL_0a04:            V_22=33;                                                    //stloc				V_22
	IL_0a08:            /*goto IL_0005;*/goto IL_0a0d;                              //br				IL_0005
	IL_0a0d:                                                                        //ldloc.s				V_4
	IL_0a0f:            if(V_4==nullptr)goto IL_0680;                               //brfalse				IL_0680
	IL_0a14:                                                                        //ldc.i4				0x16
	IL_0a19:            V_22=22;                                                    //stloc				V_22
	IL_0a1d:            /*goto IL_0005;*/goto IL_0a22;                              //br				IL_0005
	IL_0a22:            goto IL_0a4f;                                               //br.s				IL_0a4f
	IL_0a24:                                                                        //ldarg.1
	IL_0a25:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_0a2a:            V_3=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.3
	IL_0a2b:                                                                        //ldc.i4				0xb
	IL_0a30:            V_22=11;                                                    //stloc				V_22
	IL_0a34:            /*goto IL_0005;*/goto IL_0a39;                              //br				IL_0005
	IL_0a39:                                                                        //ldloc.3
	IL_0a3a:            if(V_3==nullptr)goto IL_09f7;                               //brfalse.s				IL_09f7
	IL_0a3c:                                                                        //ldc.i4				0x18
	IL_0a41:            V_22=24;                                                    //stloc				V_22
	IL_0a45:            /*goto IL_0005;*/goto IL_0a4a;                              //br				IL_0005
	IL_0a4a:            goto IL_070c;                                               //br				IL_070c
	IL_0a4f:                                                                        //ldc.i4				0x15
	IL_0a54:            V_22=21;                                                    //stloc				V_22
	IL_0a58:            /*goto IL_0005;*/goto IL_0a5d;                              //br				IL_0005
	IL_0a5d:                                                                        //ldarg.0
	IL_0a5e:                                                                        //ldloc.s				V_4
	IL_0a60:            Temp_32=safe_cast<Reflector::CodeModel::IPropertyReference^>(V_4)->PropertyType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0a65:            Temp_33=this->M_x1(Temp_32);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0a6a:            if(!Temp_33)goto IL_0680;                                   //brfalse				IL_0680
	IL_0a6f:                                                                        //ldc.i4				0x11
	IL_0a74:            V_22=17;                                                    //stloc				V_22
	IL_0a78:            /*goto IL_0005;*/goto IL_0a7d;                              //br				IL_0005
	IL_0a7d:            goto IL_0863;                                               //br				IL_0863
	IL_0A7D01:          try{
	IL_0a82:                                                                        //ldc.i4				0x0
	IL_0a87:            V_22=0;                                                     //stloc				V_22
	IL_0a8b:            /*goto IL_0a8f;*/goto IL_0a8d;                              //br.s				IL_0a8f
	IL_0a8d:            goto IL_0ab4;                                               //br.s				IL_0ab4
	IL_0a8f:                                                                        //ldloc				V_22
	IL_0a93:            switch(V_22){case 0:goto IL_0a8d;case 1:goto IL_0b2b;case 2:goto IL_0acf;case 3:goto IL_0b04;case 4:goto IL_0af4;case 5:goto IL_0b1b;case 6:goto IL_0ae4;};//switch				(IL_0a8d,IL_0b2b,IL_0acf,IL_0b04,IL_0af4,IL_0b1b,IL_0ae4)
	IL_0ab4:            goto IL_0af9;                                               //br.s				IL_0af9
	IL_0ab6:                                                                        //ldloc.s				V_19
	IL_0ab8:            Temp_25=V_19->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0abd:                                                                        //castclass				Reflector::CodeModel::IType
	IL_0ac2:            V_7=safe_cast<Reflector::CodeModel::IType^>(Temp_25);       //stloc.s				V_7
	IL_0ac4:                                                                        //ldc.i4				0x2
	IL_0ac9:            V_22=2;                                                     //stloc				V_22
	IL_0acd:            /*goto IL_0a8f;*/goto IL_0acf;                              //br.s				IL_0a8f
	IL_0acf:                                                                        //ldarg.0
	IL_0ad0:                                                                        //ldloc.s				V_7
	IL_0ad2:            Temp_23=this->M_x1(V_7);                                    //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0ad7:            if(!Temp_23)goto IL_0af9;                                   //brfalse.s				IL_0af9
	IL_0ad9:                                                                        //ldc.i4				0x6
	IL_0ade:            V_22=6;                                                     //stloc				V_22
	IL_0ae2:            /*goto IL_0a8f;*/goto IL_0ae4;                              //br.s				IL_0a8f
	IL_0ae4:            goto IL_0ae6;                                               //br.s				IL_0ae6
	IL_0ae6:                                                                        //ldc.i4.1
	IL_0ae7:            V_18=true;                                                  //stloc.s				V_18
	IL_0ae9:                                                                        //ldc.i4				0x4
	IL_0aee:            V_22=4;                                                     //stloc				V_22
	IL_0af2:            /*goto IL_0a8f;*/goto IL_0af4;                              //br.s				IL_0a8f
	IL_0af4:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_0af9:                                                                        //ldc.i4				0x3
	IL_0afe:            V_22=3;                                                     //stloc				V_22
	IL_0b02:            /*goto IL_0a8f;*/goto IL_0b04;                              //br.s				IL_0a8f
	IL_0b04:                                                                        //ldloc.s				V_19
	IL_0b06:            Temp_24=V_19->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0b0b:            if(Temp_24)goto IL_0ab6;                                    //brtrue.s				IL_0ab6
	IL_0b0d:                                                                        //ldc.i4				0x5
	IL_0b12:            V_22=5;                                                     //stloc				V_22
	IL_0b16:            /*goto IL_0a8f;*/goto IL_0b1b;                              //br				IL_0a8f
	IL_0b1b:            goto IL_0b1d;                                               //br.s				IL_0b1d
	IL_0b1d:                                                                        //ldc.i4				0x1
	IL_0b22:            V_22=1;                                                     //stloc				V_22
	IL_0b26:            /*goto IL_0a8f;*/goto IL_0b2b;                              //br				IL_0a8f
	IL_0b2b:            goto IL_0898;                                               //leave				IL_0898
	                    ;}
	                    finally{
	IL_0b30:            goto IL_0b47;                                               //br.s				IL_0b47
	IL_0b32:                                                                        //ldloc				V_22
	IL_0b36:            switch(V_22){case 0:goto IL_0b5b;case 1:goto IL_0b7e;case 2:goto IL_0b6a;};//switch				(IL_0b5b,IL_0b7e,IL_0b6a)
	IL_0b47:                                                                        //ldloc.s				V_19
	IL_0b49:                                                                        //isinst				System::IDisposable
	IL_0b4e:            V_20=dynamic_cast<System::IDisposable^>(V_19);              //stloc.s				V_20
	IL_0b50:                                                                        //ldc.i4				0x0
	IL_0b55:            V_22=0;                                                     //stloc				V_22
	IL_0b59:            /*goto IL_0b32;*/goto IL_0b5b;                              //br.s				IL_0b32
	IL_0b5b:                                                                        //ldloc.s				V_20
	IL_0b5d:            if(V_20==nullptr)goto IL_0b80;                              //brfalse.s				IL_0b80
	IL_0b5f:                                                                        //ldc.i4				0x2
	IL_0b64:            V_22=2;                                                     //stloc				V_22
	IL_0b68:            /*goto IL_0b32;*/goto IL_0b6a;                              //br.s				IL_0b32
	IL_0b6a:            goto IL_0b6c;                                               //br.s				IL_0b6c
	IL_0b6c:                                                                        //ldloc.s				V_20
	IL_0b6e:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0b73:                                                                        //ldc.i4				0x1
	IL_0b78:            V_22=1;                                                     //stloc				V_22
	IL_0b7c:            /*goto IL_0b32;*/goto IL_0b7e;                              //br.s				IL_0b32
	IL_0b7e:            goto IL_0b80;                                               //br.s				IL_0b80
	IL_0b80:                                                                        //endfinally
	                    ;}
	IL_0b81:                                                                        //ldc.i4.1
	IL_0b82:            return true;                                                //ret
	IL_0b83:                                                                        //ldarg.1
	IL_0b84:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0b89:            V_6=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.s				V_6
	IL_0b8b:                                                                        //ldc.i4				0x0
	IL_0b90:            V_22=0;                                                     //stloc				V_22
	IL_0b94:            /*goto IL_0005;*/goto IL_0b99;                              //br				IL_0005
	IL_0b99:                                                                        //ldloc.s				V_6
	IL_0b9b:            if(V_6==nullptr)goto IL_0898;                               //brfalse				IL_0898
	IL_0ba0:                                                                        //ldc.i4				0xd
	IL_0ba5:            V_22=13;                                                    //stloc				V_22
	IL_0ba9:            /*goto IL_0005;*/goto IL_0bae;                              //br				IL_0005
	IL_0bae:            goto IL_0d07;                                               //br				IL_0d07
	IL_0bb3:                                                                        //ldc.i4.1
	IL_0bb4:            return true;                                                //ret
	IL_0bb5:                                                                        //ldc.i4				0x9
	IL_0bba:            V_22=9;                                                     //stloc				V_22
	IL_0bbe:            /*goto IL_0005;*/goto IL_0bc3;                              //br				IL_0005
	IL_0bc3:                                                                        //ldarg.0
	IL_0bc4:                                                                        //ldloc.s				V_17
	IL_0bc6:            Temp_15=this->M_x12(V_17);                                  //call				System::Boolean Root::T_x23::M_x12(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_0bcb:            if(!Temp_15)goto IL_067e;                                   //brfalse				IL_067e
	IL_0bd0:                                                                        //ldc.i4				0x23
	IL_0bd5:            V_22=35;                                                    //stloc				V_22
	IL_0bd9:            /*goto IL_0005;*/goto IL_0bde;                              //br				IL_0005
	IL_0bde:            goto IL_0d05;                                               //br				IL_0d05
	IL_0BDE01:          try{
	IL_0be3:                                                                        //ldc.i4				0x0
	IL_0be8:            V_22=0;                                                     //stloc				V_22
	IL_0bec:            /*goto IL_0bf0;*/goto IL_0bee;                              //br.s				IL_0bf0
	IL_0bee:            goto IL_0c15;                                               //br.s				IL_0c15
	IL_0bf0:                                                                        //ldloc				V_22
	IL_0bf4:            switch(V_22){case 0:goto IL_0bee;case 1:goto IL_0c7f;case 2:goto IL_0c25;case 3:goto IL_0c35;case 4:goto IL_0c63;case 5:goto IL_0c49;case 6:goto IL_0c8f;};//switch				(IL_0bee,IL_0c7f,IL_0c25,IL_0c35,IL_0c63,IL_0c49,IL_0c8f)
	IL_0c15:            goto IL_0c2a;                                               //br.s				IL_0c2a
	IL_0c17:                                                                        //ldc.i4.1
	IL_0c18:            V_18=true;                                                  //stloc.s				V_18
	IL_0c1a:                                                                        //ldc.i4				0x2
	IL_0c1f:            V_22=2;                                                     //stloc				V_22
	IL_0c23:            /*goto IL_0bf0;*/goto IL_0c25;                              //br.s				IL_0bf0
	IL_0c25:            goto IL_0d6f;                                               //leave				IL_0d6f
	IL_0c2a:                                                                        //ldc.i4				0x3
	IL_0c2f:            V_22=3;                                                     //stloc				V_22
	IL_0c33:            /*goto IL_0bf0;*/goto IL_0c35;                              //br.s				IL_0bf0
	IL_0c35:                                                                        //ldloc.s				V_19
	IL_0c37:            Temp_37=V_19->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0c3c:            if(Temp_37)goto IL_0c4b;                                    //brtrue.s				IL_0c4b
	IL_0c3e:                                                                        //ldc.i4				0x5
	IL_0c43:            V_22=5;                                                     //stloc				V_22
	IL_0c47:            /*goto IL_0bf0;*/goto IL_0c49;                              //br.s				IL_0bf0
	IL_0c49:            goto IL_0c81;                                               //br.s				IL_0c81
	IL_0c4b:                                                                        //ldloc.s				V_19
	IL_0c4d:            Temp_38=V_19->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0c52:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_0c57:            V_1=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_38);//stloc.1
	IL_0c58:                                                                        //ldc.i4				0x4
	IL_0c5d:            V_22=4;                                                     //stloc				V_22
	IL_0c61:            /*goto IL_0bf0;*/goto IL_0c63;                              //br.s				IL_0bf0
	IL_0c63:                                                                        //ldarg.0
	IL_0c64:                                                                        //ldloc.1
	IL_0c65:            Temp_39=V_1->ParameterType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0c6a:            Temp_40=this->M_x1(Temp_39);                                //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0c6f:            if(!Temp_40)goto IL_0c2a;                                   //brfalse.s				IL_0c2a
	IL_0c71:                                                                        //ldc.i4				0x1
	IL_0c76:            V_22=1;                                                     //stloc				V_22
	IL_0c7a:            /*goto IL_0bf0;*/goto IL_0c7f;                              //br				IL_0bf0
	IL_0c7f:            goto IL_0c17;                                               //br.s				IL_0c17
	IL_0c81:                                                                        //ldc.i4				0x6
	IL_0c86:            V_22=6;                                                     //stloc				V_22
	IL_0c8a:            /*goto IL_0bf0;*/goto IL_0c8f;                              //br				IL_0bf0
	IL_0c8f:            goto IL_08c1;                                               //leave				IL_08c1
	                    ;}
	                    finally{
	IL_0c94:            goto IL_0cab;                                               //br.s				IL_0cab
	IL_0c96:                                                                        //ldloc				V_22
	IL_0c9a:            switch(V_22){case 0:goto IL_0ce2;case 1:goto IL_0cce;case 2:goto IL_0cbf;};//switch				(IL_0ce2,IL_0cce,IL_0cbf)
	IL_0cab:                                                                        //ldloc.s				V_19
	IL_0cad:                                                                        //isinst				System::IDisposable
	IL_0cb2:            V_20=dynamic_cast<System::IDisposable^>(V_19);              //stloc.s				V_20
	IL_0cb4:                                                                        //ldc.i4				0x2
	IL_0cb9:            V_22=2;                                                     //stloc				V_22
	IL_0cbd:            /*goto IL_0c96;*/goto IL_0cbf;                              //br.s				IL_0c96
	IL_0cbf:                                                                        //ldloc.s				V_20
	IL_0cc1:            if(V_20==nullptr)goto IL_0ce4;                              //brfalse.s				IL_0ce4
	IL_0cc3:                                                                        //ldc.i4				0x1
	IL_0cc8:            V_22=1;                                                     //stloc				V_22
	IL_0ccc:            /*goto IL_0c96;*/goto IL_0cce;                              //br.s				IL_0c96
	IL_0cce:            goto IL_0cd0;                                               //br.s				IL_0cd0
	IL_0cd0:                                                                        //ldloc.s				V_20
	IL_0cd2:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0cd7:                                                                        //ldc.i4				0x0
	IL_0cdc:            V_22=0;                                                     //stloc				V_22
	IL_0ce0:            /*goto IL_0c96;*/goto IL_0ce2;                              //br.s				IL_0c96
	IL_0ce2:            goto IL_0ce4;                                               //br.s				IL_0ce4
	IL_0ce4:                                                                        //endfinally
	                    ;}
	IL_0ce5:                                                                        //ldloc.0
	IL_0ce6:            Temp_19=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0ceb:            Temp_20=safe_cast<System::Collections::IEnumerable^>(Temp_19)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0cf0:            V_19=Temp_20;                                               //stloc.s				V_19
	IL_0cf2:                                                                        //ldc.i4				0x1d
	IL_0cf7:            V_22=29;                                                    //stloc				V_22
	IL_0cfb:            /*goto IL_0005;*/goto IL_0d00;                              //br				IL_0005
	IL_0d00:            /*goto IL_0be3;*/goto IL_0BDE01;                            //br				IL_0be3
	IL_0d05:                                                                        //ldc.i4.1
	IL_0d06:            return true;                                                //ret
	IL_0d07:                                                                        //ldc.i4				0x1
	IL_0d0c:            V_22=1;                                                     //stloc				V_22
	IL_0d10:            /*goto IL_0005;*/goto IL_0d15;                              //br				IL_0005
	IL_0d15:                                                                        //ldarg.0
	IL_0d16:                                                                        //ldloc.s				V_6
	IL_0d18:            Temp_0=V_6->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0d1d:            Temp_1=this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::IType^)
	IL_0d22:            if(!Temp_1)goto IL_04ef;                                    //brfalse				IL_04ef
	IL_0d27:                                                                        //ldc.i4				0x1a
	IL_0d2c:            V_22=26;                                                    //stloc				V_22
	IL_0d30:            /*goto IL_0005;*/goto IL_0d35;                              //br				IL_0005
	IL_0d35:            goto IL_067c;                                               //br				IL_067c
	IL_0d3a:                                                                        //ldloc.0
	IL_0d3b:            Temp_4=V_0->Body;                                           //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_0d40:                                                                        //isinst				Reflector::CodeModel::IMethodBody
	IL_0d45:            V_8=dynamic_cast<Reflector::CodeModel::IMethodBody^>(Temp_4);//stloc.s				V_8
	IL_0d47:                                                                        //ldc.i4				0xa
	IL_0d4c:            V_22=10;                                                    //stloc				V_22
	IL_0d50:            /*goto IL_0005;*/goto IL_0d55;                              //br				IL_0005
	IL_0d55:                                                                        //ldloc.s				V_8
	IL_0d57:            if(V_8==nullptr)goto IL_064f;                               //brfalse				IL_064f
	IL_0d5c:                                                                        //ldc.i4				0x5
	IL_0d61:            V_22=5;                                                     //stloc				V_22
	IL_0d65:            /*goto IL_0005;*/goto IL_0d6a;                              //br				IL_0005
	IL_0d6a:            goto IL_062e;                                               //br				IL_062e
	IL_0d6f:                                                                        //ldloc.s				V_18
	IL_0d71:            return V_18;                                                //ret

}
inline System::Object^ Root::T_x23::M_x2()
//System::Collections::IEnumerator^::get_Current by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Object^ Root::T_x23 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x23::M_x2(Reflector::CodeModel::ICustomAttributeProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	System::Boolean V_1 = false;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=A_0->Attributes;                                     //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0006:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000b:            V_2=Temp_1;                                                 //stloc.2
	IL_000c:            /*goto IL_0010;*/goto IL_000F01;                            //br.s				IL_0010
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:            return false;                                               //ret
	IL_000F01:          try{
	IL_0010:                                                                        //ldc.i4				0x6
	IL_0015:            V_4=6;                                                      //stloc				V_4
	IL_0019:            /*goto IL_001d;*/goto IL_001b;                              //br.s				IL_001d
	IL_001b:            goto IL_0042;                                               //br.s				IL_0042
	IL_001d:                                                                        //ldloc				V_4
	IL_0021:            switch(V_4){case 0:goto IL_0062;case 1:goto IL_00bb;case 2:goto IL_004f;case 3:goto IL_00ab;case 4:goto IL_007b;case 5:goto IL_0099;case 6:goto IL_001b;};//switch				(IL_0062,IL_00bb,IL_004f,IL_00ab,IL_007b,IL_0099,IL_001b)
	IL_0042:            goto IL_0044;                                               //br.s				IL_0044
	IL_0044:                                                                        //ldc.i4				0x2
	IL_0049:            V_4=2;                                                      //stloc				V_4
	IL_004d:            /*goto IL_001d;*/goto IL_004f;                              //br.s				IL_001d
	IL_004f:                                                                        //ldloc.2
	IL_0050:            Temp_2=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0055:            if(Temp_2)goto IL_0064;                                     //brtrue.s				IL_0064
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_4=0;                                                      //stloc				V_4
	IL_0060:            /*goto IL_001d;*/goto IL_0062;                              //br.s				IL_001d
	IL_0062:            goto IL_00ad;                                               //br.s				IL_00ad
	IL_0064:                                                                        //ldloc.2
	IL_0065:            Temp_3=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006a:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_006f:            V_0=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_3);//stloc.0
	IL_0070:                                                                        //ldc.i4				0x4
	IL_0075:            V_4=4;                                                      //stloc				V_4
	IL_0079:            /*goto IL_001d;*/goto IL_007b;                              //br.s				IL_001d
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_4=this->F_x1;                                          //ldfld				System::Object^ Root::T_x23 F_x1
	IL_0081:                                                                        //ldloc.0
	IL_0082:            Temp_5=V_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_0087:            Temp_6=Temp_4->Equals(safe_cast<System::Object^>(Temp_5));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_008c:            if(!Temp_6)goto IL_0044;                                    //brfalse.s				IL_0044
	IL_008e:                                                                        //ldc.i4				0x5
	IL_0093:            V_4=5;                                                      //stloc				V_4
	IL_0097:            /*goto IL_001d;*/goto IL_0099;                              //br.s				IL_001d
	IL_0099:            goto IL_009b;                                               //br.s				IL_009b
	IL_009b:                                                                        //ldc.i4.1
	IL_009c:            V_1=true;                                                   //stloc.1
	IL_009d:                                                                        //ldc.i4				0x3
	IL_00a2:            V_4=3;                                                      //stloc				V_4
	IL_00a6:            /*goto IL_001d;*/goto IL_00ab;                              //br				IL_001d
	IL_00ab:            goto IL_0118;                                               //leave.s				IL_0118
	IL_00ad:                                                                        //ldc.i4				0x1
	IL_00b2:            V_4=1;                                                      //stloc				V_4
	IL_00b6:            /*goto IL_001d;*/goto IL_00bb;                              //br				IL_001d
	IL_00bb:            goto IL_000e;                                               //leave				IL_000e
	                    ;}
	                    finally{
	IL_00c0:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_00c2:                                                                        //ldloc				V_5
	IL_00c6:            switch(V_5){case 0:goto IL_0102;case 1:goto IL_0115;case 2:goto IL_00f4;};//switch				(IL_0102,IL_0115,IL_00f4)
	IL_00d7:                                                                        //ldc.i4.0
	IL_00d8:                                                                        //dup
	IL_00d9:                                                                        //dup
	IL_00da:                                                                        //ldc.i4.2
	IL_00db:                                                                        //sub
	IL_00dc:                                                                        //blt				IL_00d8
	IL_00e1:                                                                        //pop
	IL_00e2:                                                                        //ldloc.2
	IL_00e3:                                                                        //isinst				System::IDisposable
	IL_00e8:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00e9:                                                                        //ldc.i4				0x2
	IL_00ee:            V_5=2;                                                      //stloc				V_5
	IL_00f2:            /*goto IL_00c2;*/goto IL_00f4;                              //br.s				IL_00c2
	IL_00f4:                                                                        //ldloc.3
	IL_00f5:            if(V_3==nullptr)goto IL_0117;                               //brfalse.s				IL_0117
	IL_00f7:                                                                        //ldc.i4				0x0
	IL_00fc:            V_5=0;                                                      //stloc				V_5
	IL_0100:            /*goto IL_00c2;*/goto IL_0102;                              //br.s				IL_00c2
	IL_0102:            goto IL_0104;                                               //br.s				IL_0104
	IL_0104:                                                                        //ldloc.3
	IL_0105:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_010a:                                                                        //ldc.i4				0x1
	IL_010f:            V_5=1;                                                      //stloc				V_5
	IL_0113:            /*goto IL_00c2;*/goto IL_0115;                              //br.s				IL_00c2
	IL_0115:            goto IL_0117;                                               //br.s				IL_0117
	IL_0117:                                                                        //endfinally
	                    ;}
	IL_0118:                                                                        //ldloc.1
	IL_0119:            return V_1;                                                 //ret

}
inline System::Boolean Root::T_x23::M_x2(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Reflector::CodeModel::IInstructionCollection^ Temp_6 = nullptr;
	System::Collections::IEnumerator^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IMethodBody^ V_1 = nullptr;
	Reflector::CodeModel::IInstruction^ V_2 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_3 = nullptr;
	Reflector::CodeModel::ICustomAttributeProvider^ V_4 = nullptr;
	System::Boolean V_5 = false;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:            goto IL_002f;                                               //br.s				IL_002f
	IL_0002:                                                                        //ldloc				V_8
	IL_0006:            switch(V_8){case 0:goto IL_00e1;case 1:goto IL_005a;case 2:goto IL_00c3;case 3:goto IL_004c;case 4:goto IL_00a6;case 5:goto IL_00f2;case 6:goto IL_007c;case 7:goto IL_0094;case 8:goto IL_0067;};//switch				(IL_00e1,IL_005a,IL_00c3,IL_004c,IL_00a6,IL_00f2,IL_007c,IL_0094,IL_0067)
	IL_002f:                                                                        //ldc.i4.5
	IL_0030:                                                                        //dup
	IL_0031:                                                                        //dup
	IL_0032:                                                                        //ldc.i4.6
	IL_0033:                                                                        //sub
	IL_0034:                                                                        //blt				IL_0030
	IL_0039:                                                                        //pop
	IL_003a:                                                                        //ldarg.1
	IL_003b:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_0040:            V_0=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.0
	IL_0041:                                                                        //ldc.i4				0x3
	IL_0046:            V_8=3;                                                      //stloc				V_8
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:                                                                        //ldloc.0
	IL_004d:            if(V_0==nullptr)goto IL_007e;                               //brfalse.s				IL_007e
	IL_004f:                                                                        //ldc.i4				0x1
	IL_0054:            V_8=1;                                                      //stloc				V_8
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_005c:                                                                        //ldc.i4				0x8
	IL_0061:            V_8=8;                                                      //stloc				V_8
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:                                                                        //ldarg.0
	IL_0068:                                                                        //ldloc.s				V_4
	IL_006a:            Temp_8=this->M_x1(V_4);                                     //call				System::Boolean Root::T_x23::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_006f:            if(!Temp_8)goto IL_00c5;                                    //brfalse.s				IL_00c5
	IL_0071:                                                                        //ldc.i4				0x6
	IL_0076:            V_8=6;                                                      //stloc				V_8
	IL_007a:            /*goto IL_0002;*/goto IL_007c;                              //br.s				IL_0002
	IL_007c:            goto IL_00f4;                                               //br.s				IL_00f4
	IL_007e:                                                                        //ldarg.1
	IL_007f:                                                                        //isinst				Reflector::CodeModel::ICustomAttributeProvider
	IL_0084:            V_4=dynamic_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0);//stloc.s				V_4
	IL_0086:                                                                        //ldc.i4				0x7
	IL_008b:            V_8=7;                                                      //stloc				V_8
	IL_008f:            /*goto IL_0002;*/goto IL_0094;                              //br				IL_0002
	IL_0094:                                                                        //ldloc.s				V_4
	IL_0096:            if(V_4==nullptr)goto IL_00c5;                               //brfalse.s				IL_00c5
	IL_0098:                                                                        //ldc.i4				0x4
	IL_009d:            V_8=4;                                                      //stloc				V_8
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:            goto IL_005c;                                               //br.s				IL_005c
	IL_00a8:                                                                        //ldloc.1
	IL_00a9:            Temp_6=V_1->Instructions;                                   //callvirt				Reflector::CodeModel::IInstructionCollection^ Reflector::CodeModel::IMethodBody::get_Instructions()
	IL_00ae:            Temp_7=safe_cast<System::Collections::IEnumerable^>(Temp_6)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_00b3:            V_6=Temp_7;                                                 //stloc.s				V_6
	IL_00b5:                                                                        //ldc.i4				0x2
	IL_00ba:            V_8=2;                                                      //stloc				V_8
	IL_00be:            /*goto IL_0002;*/goto IL_00c3;                              //br				IL_0002
	IL_00c3:            /*goto IL_00f6;*/goto IL_00F501;                            //br.s				IL_00f6
	IL_00c5:                                                                        //ldc.i4.0
	IL_00c6:            return false;                                               //ret
	IL_00c7:                                                                        //ldloc.0
	IL_00c8:            Temp_0=V_0->Body;                                           //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_00cd:                                                                        //isinst				Reflector::CodeModel::IMethodBody
	IL_00d2:            V_1=dynamic_cast<Reflector::CodeModel::IMethodBody^>(Temp_0);//stloc.1
	IL_00d3:                                                                        //ldc.i4				0x0
	IL_00d8:            V_8=0;                                                      //stloc				V_8
	IL_00dc:            /*goto IL_0002;*/goto IL_00e1;                              //br				IL_0002
	IL_00e1:                                                                        //ldloc.1
	IL_00e2:            if(V_1==nullptr)goto IL_007e;                               //brfalse.s				IL_007e
	IL_00e4:                                                                        //ldc.i4				0x5
	IL_00e9:            V_8=5;                                                      //stloc				V_8
	IL_00ed:            /*goto IL_0002;*/goto IL_00f2;                              //br				IL_0002
	IL_00f2:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_00f4:                                                                        //ldc.i4.1
	IL_00f5:            return true;                                                //ret
	IL_00F501:          try{
	IL_00f6:                                                                        //ldc.i4				0x2
	IL_00fb:            V_8=2;                                                      //stloc				V_8
	IL_00ff:            /*goto IL_0103;*/goto IL_0101;                              //br.s				IL_0103
	IL_0101:            goto IL_0130;                                               //br.s				IL_0130
	IL_0103:                                                                        //ldloc				V_8
	IL_0107:            switch(V_8){case 0:goto IL_0156;case 1:goto IL_01da;case 2:goto IL_0101;case 3:goto IL_0188;case 4:goto IL_0171;case 5:goto IL_019b;case 6:goto IL_01ae;case 7:goto IL_01ca;case 8:goto IL_0164;};//switch				(IL_0156,IL_01da,IL_0101,IL_0188,IL_0171,IL_019b,IL_01ae,IL_01ca,IL_0164)
	IL_0130:            goto IL_0166;                                               //br.s				IL_0166
	IL_0132:                                                                        //ldloc.s				V_6
	IL_0134:            Temp_2=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0139:                                                                        //castclass				Reflector::CodeModel::IInstruction
	IL_013e:            V_2=safe_cast<Reflector::CodeModel::IInstruction^>(Temp_2); //stloc.2
	IL_013f:                                                                        //ldloc.2
	IL_0140:            Temp_3=V_2->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_0145:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_014a:            V_3=dynamic_cast<Reflector::CodeModel::IFieldReference^>(Temp_3);//stloc.3
	IL_014b:                                                                        //ldc.i4				0x0
	IL_0150:            V_8=0;                                                      //stloc				V_8
	IL_0154:            /*goto IL_0103;*/goto IL_0156;                              //br.s				IL_0103
	IL_0156:                                                                        //ldloc.3
	IL_0157:            if(V_3==nullptr)goto IL_0166;                               //brfalse.s				IL_0166
	IL_0159:                                                                        //ldc.i4				0x8
	IL_015e:            V_8=8;                                                      //stloc				V_8
	IL_0162:            /*goto IL_0103;*/goto IL_0164;                              //br.s				IL_0103
	IL_0164:            goto IL_01a0;                                               //br.s				IL_01a0
	IL_0166:                                                                        //ldc.i4				0x4
	IL_016b:            V_8=4;                                                      //stloc				V_8
	IL_016f:            /*goto IL_0103;*/goto IL_0171;                              //br.s				IL_0103
	IL_0171:                                                                        //ldloc.s				V_6
	IL_0173:            Temp_1=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0178:            if(Temp_1)goto IL_0132;                                     //brtrue.s				IL_0132
	IL_017a:                                                                        //ldc.i4				0x3
	IL_017f:            V_8=3;                                                      //stloc				V_8
	IL_0183:            /*goto IL_0103;*/goto IL_0188;                              //br				IL_0103
	IL_0188:            goto IL_01cc;                                               //br.s				IL_01cc
	IL_018a:                                                                        //ldc.i4.1
	IL_018b:            V_5=true;                                                   //stloc.s				V_5
	IL_018d:                                                                        //ldc.i4				0x5
	IL_0192:            V_8=5;                                                      //stloc				V_8
	IL_0196:            /*goto IL_0103;*/goto IL_019b;                              //br				IL_0103
	IL_019b:            goto IL_0230;                                               //leave				IL_0230
	IL_01a0:                                                                        //ldc.i4				0x6
	IL_01a5:            V_8=6;                                                      //stloc				V_8
	IL_01a9:            /*goto IL_0103;*/goto IL_01ae;                              //br				IL_0103
	IL_01ae:                                                                        //ldarg.0
	IL_01af:            Temp_4=this->F_x1;                                          //ldfld				System::Object^ Root::T_x23 F_x1
	IL_01b4:                                                                        //ldloc.3
	IL_01b5:            Temp_5=Temp_4->Equals(safe_cast<System::Object^>(V_3));     //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_01ba:            if(!Temp_5)goto IL_0166;                                    //brfalse.s				IL_0166
	IL_01bc:                                                                        //ldc.i4				0x7
	IL_01c1:            V_8=7;                                                      //stloc				V_8
	IL_01c5:            /*goto IL_0103;*/goto IL_01ca;                              //br				IL_0103
	IL_01ca:            goto IL_018a;                                               //br.s				IL_018a
	IL_01cc:                                                                        //ldc.i4				0x1
	IL_01d1:            V_8=1;                                                      //stloc				V_8
	IL_01d5:            /*goto IL_0103;*/goto IL_01da;                              //br				IL_0103
	IL_01da:            goto IL_007e;                                               //leave				IL_007e
	                    ;}
	                    finally{
	IL_01df:            goto IL_01f6;                                               //br.s				IL_01f6
	IL_01e1:                                                                        //ldloc				V_8
	IL_01e5:            switch(V_8){case 0:goto IL_022d;case 1:goto IL_020a;case 2:goto IL_0219;};//switch				(IL_022d,IL_020a,IL_0219)
	IL_01f6:                                                                        //ldloc.s				V_6
	IL_01f8:                                                                        //isinst				System::IDisposable
	IL_01fd:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_01ff:                                                                        //ldc.i4				0x1
	IL_0204:            V_8=1;                                                      //stloc				V_8
	IL_0208:            /*goto IL_01e1;*/goto IL_020a;                              //br.s				IL_01e1
	IL_020a:                                                                        //ldloc.s				V_7
	IL_020c:            if(V_7==nullptr)goto IL_022f;                               //brfalse.s				IL_022f
	IL_020e:                                                                        //ldc.i4				0x2
	IL_0213:            V_8=2;                                                      //stloc				V_8
	IL_0217:            /*goto IL_01e1;*/goto IL_0219;                              //br.s				IL_01e1
	IL_0219:            goto IL_021b;                                               //br.s				IL_021b
	IL_021b:                                                                        //ldloc.s				V_7
	IL_021d:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0222:                                                                        //ldc.i4				0x0
	IL_0227:            V_8=0;                                                      //stloc				V_8
	IL_022b:            /*goto IL_01e1;*/goto IL_022d;                              //br.s				IL_01e1
	IL_022d:            goto IL_022f;                                               //br.s				IL_022f
	IL_022f:                                                                        //endfinally
	                    ;}
	IL_0230:                                                                        //ldloc.s				V_5
	IL_0232:            return V_5;                                                 //ret

}
inline System::Boolean Root::T_x23::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_006b;case 2:goto IL_0046;case 3:goto IL_00c8;case 4:goto IL_00a2;case 5:goto IL_0053;};//switch				(IL_000b,IL_006b,IL_0046,IL_00c8,IL_00a2,IL_0053)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_8=this->F_x1;                                          //ldfld				System::Object^ Root::T_x23 F_x1
	IL_0034:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0039:            if(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_8)==nullptr)goto IL_0094;//brfalse.s				IL_0094
	IL_003b:                                                                        //ldc.i4				0x2
	IL_0040:            V_0=2;                                                      //stloc				V_0
	IL_0044:            /*goto IL_000d;*/goto IL_0046;                              //br.s				IL_000d
	IL_0046:            goto IL_007a;                                               //br.s				IL_007a
	IL_0048:                                                                        //ldc.i4				0x5
	IL_004d:            V_0=5;                                                      //stloc				V_0
	IL_0051:            /*goto IL_000d;*/goto IL_0053;                              //br.s				IL_000d
	IL_0053:                                                                        //ldarg.0
	IL_0054:            Temp_7=this->F_x1;                                          //ldfld				System::Object^ Root::T_x23 F_x1
	IL_0059:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_005e:            if(dynamic_cast<Reflector::CodeModel::IFieldReference^>(Temp_7)==nullptr)goto IL_00ca;//brfalse.s				IL_00ca
	IL_0060:                                                                        //ldc.i4				0x1
	IL_0065:            V_0=1;                                                      //stloc				V_0
	IL_0069:            /*goto IL_000d;*/goto IL_006b;                              //br.s				IL_000d
	IL_006b:            goto IL_0087;                                               //br.s				IL_0087
	IL_006d:                                                                        //ldarg.0
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_4=this->F_x8;                                          //ldfld				System::Object^ Root::T_x23 F_x8
	IL_0074:            Temp_5=this->M_x12(Temp_4);                                 //call				System::Boolean Root::T_x23::M_x12(System::Object^)
	IL_0079:            return Temp_5;                                              //ret
	IL_007a:                                                                        //ldarg.0
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_2=this->F_x8;                                          //ldfld				System::Object^ Root::T_x23 F_x8
	IL_0081:            Temp_3=this->M_x13(Temp_2);                                 //call				System::Boolean Root::T_x23::M_x13(System::Object^)
	IL_0086:            return Temp_3;                                              //ret
	IL_0087:                                                                        //ldarg.0
	IL_0088:                                                                        //ldarg.0
	IL_0089:            Temp_0=this->F_x8;                                          //ldfld				System::Object^ Root::T_x23 F_x8
	IL_008e:            Temp_1=this->M_x2(Temp_0);                                  //call				System::Boolean Root::T_x23::M_x2(System::Object^)
	IL_0093:            return Temp_1;                                              //ret
	IL_0094:                                                                        //ldc.i4				0x4
	IL_0099:            V_0=4;                                                      //stloc				V_0
	IL_009d:            /*goto IL_000d;*/goto IL_00a2;                              //br				IL_000d
	IL_00a2:                                                                        //ldc.i4.4
	IL_00a3:                                                                        //dup
	IL_00a4:                                                                        //dup
	IL_00a5:                                                                        //ldc.i4.2
	IL_00a6:                                                                        //sub
	IL_00a7:                                                                        //blt				IL_00a3
	IL_00ac:                                                                        //pop
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_6=this->F_x1;                                          //ldfld				System::Object^ Root::T_x23 F_x1
	IL_00b3:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_00b8:            if(dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_6)==nullptr)goto IL_0048;//brfalse.s				IL_0048
	IL_00ba:                                                                        //ldc.i4				0x3
	IL_00bf:            V_0=3;                                                      //stloc				V_0
	IL_00c3:            /*goto IL_000d;*/goto IL_00c8;                              //br				IL_000d
	IL_00c8:            goto IL_006d;                                               //br.s				IL_006d
	IL_00ca:                                                                        //ldc.i4.0
	IL_00cb:            return false;                                               //ret

}
