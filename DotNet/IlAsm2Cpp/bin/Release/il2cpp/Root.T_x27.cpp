#include "global_xref.h"

inline Root::T_x27::T_x27()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x27::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_2 = nullptr;
	//local variables.
	Reflector::IAssemblyBrowser^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_0011:            Temp_0=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=Root::T_x10::M_x1(Temp_0);                           //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001b:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_0020:            V_0=safe_cast<Reflector::IAssemblyBrowser^>(Temp_1);        //stloc.0
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_2=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x27::M_x8()
	IL_0028:            V_0->ActiveItem=safe_cast<System::Object^>(Temp_2);         //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_002d:            return;                                                     //ret

}
inline void Root::T_x27::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Root::T_x10::M_x1(safe_cast<System::Object^>(A_0));         //call				void Root::T_x10::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldc.i4				0x98
	IL_0011:                                                                        //dup
	IL_0012:            V_0=152;                                                    //stloc.0
	IL_0013:            this->SelectedImageIndex=152;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0025:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0030:            return;                                                     //ret

}
inline void Root::T_x27::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::ILanguageWriter^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.2
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldtoken				Reflector::CodeModel::ILanguageWriterConfiguration
	IL_0013:            Temp_0=Reflector::CodeModel::ILanguageWriterConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0018:            Temp_1=Root::T_x10::M_x1(Temp_0);                           //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001d:                                                                        //castclass				Reflector::CodeModel::ILanguageWriterConfiguration
	IL_0022:            Temp_2=A_1->GetWriter(A_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(Temp_1));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_0027:            V_0=Temp_2;                                                 //stloc.0
	IL_0028:                                                                        //ldloc.0
	IL_0029:                                                                        //ldarg.0
	IL_002a:            Temp_3=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x27::M_x8()
	IL_002f:            V_0->WriteAssemblyReference(Temp_3);                        //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteAssemblyReference(Reflector::CodeModel::IAssemblyReference^)
	IL_0034:            return;                                                     //ret

}
inline void Root::T_x27::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IModule^ Root::T_x27 F_x1
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x27::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	Root::T_x10^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0006:            Temp_1=gcnew Root::T_x10();                                 //newobj				void Root::T_x10::.ctor()
	IL_000b:            Temp_2=Temp_0->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0010:                                                                        //pop
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Root::T_x10::M_x1(A_0);                                     //call				void Root::T_x10::M_x1(System::EventArgs^)
	IL_0018:            return;                                                     //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x27::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModule^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IModule^ Root::T_x27 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x27::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_0=13;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x1738\x7A3A\x4E3C\x4C3E\x2440\x2E42\x2744\x2B46\x3048\x194A\x284C\x294E\x3450\x2152\x3054\x3956\x3A58\x3E5A"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x1738\x7A3A\x4E3C\x4C3E\x2440\x2E42\x2744\x2B46\x3048\x194A\x284C\x294E\x3450\x2152\x3054\x3956\x3A58\x3E5A",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x27::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x27::M_x1()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x27::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_2 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssemblyReferenceCollection^ Temp_7 = nullptr;
	System::Collections::IEnumerator^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Object^ Temp_10 = nullptr;
	Root::T_x27^ Temp_11 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Reflector::CodeModel::IModule^ Temp_14 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_15 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	System::Windows::Forms::TreeNode^ Temp_18 = nullptr;
	Root::T_x12^ Temp_19 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	System::String^ Temp_22 = nullptr;
	//local variables.
	Root::T_x27^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	Reflector::CodeModel::IModule^ V_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_3 = nullptr;
	Root::T_x27^ V_4 = nullptr;
	System::NullReferenceException^ V_5 = nullptr;
	Root::T_x12^ V_6 = nullptr;
	System::Collections::IEnumerator^ V_7 = nullptr;
	System::Collections::IEnumerator^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_10
	IL_0006:            switch(V_10){case 0:goto IL_02c6;case 1:goto IL_02b2;case 2:goto IL_003a;case 3:goto IL_0280;case 4:goto IL_02a1;case 5:goto IL_0270;};//switch				(IL_02c6,IL_02b2,IL_003a,IL_0280,IL_02a1,IL_0270)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNode::get_Parent()
	IL_0029:                                                                        //isinst				Root::T_x27
	IL_002e:            V_0=dynamic_cast<Root::T_x27^>(Temp_0);                     //stloc.0
	IL_002f:                                                                        //ldc.i4				0x2
	IL_0034:            V_10=2;                                                     //stloc				V_10
	IL_0038:            /*goto IL_0002;*/goto IL_003a;                              //br.s				IL_0002
	IL_003a:            goto IL_02a4;                                               //br				IL_02a4
	IL_003A01:          try{
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_1=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x27::M_x8()
	IL_0045:            Temp_2=Temp_1->Resolve();                                   //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyReference::Resolve()
	IL_004a:            V_1=Temp_2;                                                 //stloc.1
	IL_004b:                                                                        //ldloc.1
	IL_004c:            Temp_3=V_1->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0051:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0056:            V_7=Temp_4;                                                 //stloc.s				V_7
	IL_0058:            /*goto IL_005a;*/goto IL_005801;                            //br.s				IL_005a
	IL_005801:          try{
	IL_005a:                                                                        //ldc.i4				0x4
	IL_005f:            V_10=4;                                                     //stloc				V_10
	IL_0063:            /*goto IL_0067;*/goto IL_0065;                              //br.s				IL_0067
	IL_0065:            goto IL_0084;                                               //br.s				IL_0084
	IL_0067:                                                                        //ldloc				V_10
	IL_006b:            switch(V_10){case 0:goto IL_00cc;case 1:goto IL_00b8;case 2:goto IL_01d7;case 3:goto IL_00ab;case 4:goto IL_0065;};//switch				(IL_00cc,IL_00b8,IL_01d7,IL_00ab,IL_0065)
	IL_0084:            goto IL_00ad;                                               //br.s				IL_00ad
	IL_0086:                                                                        //ldloc.s				V_7
	IL_0088:            Temp_6=V_7->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_008d:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_0092:            V_2=safe_cast<Reflector::CodeModel::IModule^>(Temp_6);      //stloc.2
	IL_0093:                                                                        //ldloc.2
	IL_0094:            Temp_7=V_2->AssemblyReferences;                             //callvirt				Reflector::CodeModel::IAssemblyReferenceCollection^ Reflector::CodeModel::IModule::get_AssemblyReferences()
	IL_0099:            Temp_8=safe_cast<System::Collections::IEnumerable^>(Temp_7)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_009e:            V_8=Temp_8;                                                 //stloc.s				V_8
	IL_00a0:                                                                        //ldc.i4				0x3
	IL_00a5:            V_10=3;                                                     //stloc				V_10
	IL_00a9:            /*goto IL_0067;*/goto IL_00ab;                              //br.s				IL_0067
	IL_00ab:            /*goto IL_00d1;*/goto IL_00CC01;                            //br.s				IL_00d1
	IL_00ad:                                                                        //ldc.i4				0x1
	IL_00b2:            V_10=1;                                                     //stloc				V_10
	IL_00b6:            /*goto IL_0067;*/goto IL_00b8;                              //br.s				IL_0067
	IL_00b8:                                                                        //ldloc.s				V_7
	IL_00ba:            Temp_5=V_7->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00bf:            if(Temp_5)goto IL_0086;                                     //brtrue.s				IL_0086
	IL_00c1:                                                                        //ldc.i4				0x0
	IL_00c6:            V_10=0;                                                     //stloc				V_10
	IL_00ca:            /*goto IL_0067;*/goto IL_00cc;                              //br.s				IL_0067
	IL_00cc:            goto IL_01c9;                                               //br				IL_01c9
	IL_00CC01:          try{
	IL_00d1:                                                                        //ldc.i4				0x2
	IL_00d6:            V_10=2;                                                     //stloc				V_10
	IL_00da:            /*goto IL_00de;*/goto IL_00dc;                              //br.s				IL_00de
	IL_00dc:            goto IL_00fb;                                               //br.s				IL_00fb
	IL_00de:                                                                        //ldloc				V_10
	IL_00e2:            switch(V_10){case 0:goto IL_013f;case 1:goto IL_0163;case 2:goto IL_00dc;case 3:goto IL_014c;case 4:goto IL_0173;};//switch				(IL_013f,IL_0163,IL_00dc,IL_014c,IL_0173)
	IL_00fb:            goto IL_0141;                                               //br.s				IL_0141
	IL_00fd:                                                                        //ldloc.s				V_8
	IL_00ff:            Temp_10=V_8->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0104:                                                                        //castclass				Reflector::CodeModel::IAssemblyReference
	IL_0109:            V_3=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_10);//stloc.3
	IL_010a:            Temp_11=gcnew Root::T_x27();                                //newobj				void Root::T_x27::.ctor()
	IL_010f:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_0111:                                                                        //ldarg.0
	IL_0112:            Temp_12=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0117:                                                                        //ldloc.s				V_4
	IL_0119:            Temp_13=Temp_12->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_4));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_011e:                                                                        //pop
	IL_011f:                                                                        //ldloc.s				V_4
	IL_0121:                                                                        //ldloc.3
	IL_0122:            V_4->M_x1(V_3);                                             //callvirt				void Root::T_x27::M_x1(Reflector::CodeModel::IAssemblyReference^)
	IL_0127:                                                                        //ldloc.s				V_4
	IL_0129:                                                                        //ldarg.0
	IL_012a:            Temp_14=this->M_x12();                                      //call				Reflector::CodeModel::IModule^ Root::T_x27::M_x12()
	IL_012f:            V_4->M_x1(Temp_14);                                         //callvirt				void Root::T_x27::M_x1(Reflector::CodeModel::IModule^)
	IL_0134:                                                                        //ldc.i4				0x0
	IL_0139:            V_10=0;                                                     //stloc				V_10
	IL_013d:            /*goto IL_00de;*/goto IL_013f;                              //br.s				IL_00de
	IL_013f:            goto IL_0141;                                               //br.s				IL_0141
	IL_0141:                                                                        //ldc.i4				0x3
	IL_0146:            V_10=3;                                                     //stloc				V_10
	IL_014a:            /*goto IL_00de;*/goto IL_014c;                              //br.s				IL_00de
	IL_014c:                                                                        //ldloc.s				V_8
	IL_014e:            Temp_9=V_8->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0153:            if(Temp_9)goto IL_00fd;                                     //brtrue.s				IL_00fd
	IL_0155:                                                                        //ldc.i4				0x1
	IL_015a:            V_10=1;                                                     //stloc				V_10
	IL_015e:            /*goto IL_00de;*/goto IL_0163;                              //br				IL_00de
	IL_0163:            goto IL_0165;                                               //br.s				IL_0165
	IL_0165:                                                                        //ldc.i4				0x4
	IL_016a:            V_10=4;                                                     //stloc				V_10
	IL_016e:            /*goto IL_00de;*/goto IL_0173;                              //br				IL_00de
	IL_0173:            goto IL_00ad;                                               //leave				IL_00ad
	                    ;}
	                    finally{
	IL_0178:            goto IL_018f;                                               //br.s				IL_018f
	IL_017a:                                                                        //ldloc				V_10
	IL_017e:            switch(V_10){case 0:goto IL_01a3;case 1:goto IL_01c6;case 2:goto IL_01b2;};//switch				(IL_01a3,IL_01c6,IL_01b2)
	IL_018f:                                                                        //ldloc.s				V_8
	IL_0191:                                                                        //isinst				System::IDisposable
	IL_0196:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_0198:                                                                        //ldc.i4				0x0
	IL_019d:            V_10=0;                                                     //stloc				V_10
	IL_01a1:            /*goto IL_017a;*/goto IL_01a3;                              //br.s				IL_017a
	IL_01a3:                                                                        //ldloc.s				V_9
	IL_01a5:            if(V_9==nullptr)goto IL_01c8;                               //brfalse.s				IL_01c8
	IL_01a7:                                                                        //ldc.i4				0x2
	IL_01ac:            V_10=2;                                                     //stloc				V_10
	IL_01b0:            /*goto IL_017a;*/goto IL_01b2;                              //br.s				IL_017a
	IL_01b2:            goto IL_01b4;                                               //br.s				IL_01b4
	IL_01b4:                                                                        //ldloc.s				V_9
	IL_01b6:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01bb:                                                                        //ldc.i4				0x1
	IL_01c0:            V_10=1;                                                     //stloc				V_10
	IL_01c4:            /*goto IL_017a;*/goto IL_01c6;                              //br.s				IL_017a
	IL_01c6:            goto IL_01c8;                                               //br.s				IL_01c8
	IL_01c8:                                                                        //endfinally
	                    ;}
	IL_01c9:                                                                        //ldc.i4				0x2
	IL_01ce:            V_10=2;                                                     //stloc				V_10
	IL_01d2:            /*goto IL_0067;*/goto IL_01d7;                              //br				IL_0067
	IL_01d7:            goto IL_022a;                                               //leave.s				IL_022a
	                    ;}
	                    finally{
	IL_01d9:            goto IL_01f0;                                               //br.s				IL_01f0
	IL_01db:                                                                        //ldloc				V_10
	IL_01df:            switch(V_10){case 0:goto IL_0213;case 1:goto IL_0227;case 2:goto IL_0204;};//switch				(IL_0213,IL_0227,IL_0204)
	IL_01f0:                                                                        //ldloc.s				V_7
	IL_01f2:                                                                        //isinst				System::IDisposable
	IL_01f7:            V_9=dynamic_cast<System::IDisposable^>(V_7);                //stloc.s				V_9
	IL_01f9:                                                                        //ldc.i4				0x2
	IL_01fe:            V_10=2;                                                     //stloc				V_10
	IL_0202:            /*goto IL_01db;*/goto IL_0204;                              //br.s				IL_01db
	IL_0204:                                                                        //ldloc.s				V_9
	IL_0206:            if(V_9==nullptr)goto IL_0229;                               //brfalse.s				IL_0229
	IL_0208:                                                                        //ldc.i4				0x0
	IL_020d:            V_10=0;                                                     //stloc				V_10
	IL_0211:            /*goto IL_01db;*/goto IL_0213;                              //br.s				IL_01db
	IL_0213:            goto IL_0215;                                               //br.s				IL_0215
	IL_0215:                                                                        //ldloc.s				V_9
	IL_0217:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_021c:                                                                        //ldc.i4				0x1
	IL_0221:            V_10=1;                                                     //stloc				V_10
	IL_0225:            /*goto IL_01db;*/goto IL_0227;                              //br.s				IL_01db
	IL_0227:            goto IL_0229;                                               //br.s				IL_0229
	IL_0229:                                                                        //endfinally
	                    ;}
	IL_022a:            goto IL_02cb;                                               //leave				IL_02cb
	                    ;}
	                    catch(System::NullReferenceException^ Ex_022A02){
	IL_022f:            V_5=Ex_022A02;                                              //stloc.s				V_5
	IL_0231:            Temp_19=gcnew Root::T_x12();                                //newobj				void Root::T_x12::.ctor()
	IL_0236:            V_6=Temp_19;                                                //stloc.s				V_6
	IL_0238:                                                                        //ldarg.0
	IL_0239:            Temp_20=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_023e:                                                                        //ldloc.s				V_6
	IL_0240:            Temp_21=Temp_20->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_6));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0245:                                                                        //pop
	IL_0246:                                                                        //ldloc.s				V_6
	IL_0248:                                                                        //ldloc.s				V_5
	IL_024a:            Temp_22=V_5->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_024f:            V_6->M_x1(Temp_22);                                         //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_0254:            goto IL_02cb;                                               //leave.s				IL_02cb
	                    ;}
	IL_0256:                                                                        //ldloc.0
	IL_0257:            Temp_18=V_0->Parent;                                        //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNode::get_Parent()
	IL_025c:                                                                        //isinst				Root::T_x27
	IL_0261:            V_0=dynamic_cast<Root::T_x27^>(Temp_18);                    //stloc.0
	IL_0262:                                                                        //ldc.i4				0x5
	IL_0267:            V_10=5;                                                     //stloc				V_10
	IL_026b:            /*goto IL_0002;*/goto IL_0270;                              //br				IL_0002
	IL_0270:            goto IL_02a4;                                               //br.s				IL_02a4
	IL_0272:                                                                        //ldc.i4				0x3
	IL_0277:            V_10=3;                                                     //stloc				V_10
	IL_027b:            /*goto IL_0002;*/goto IL_0280;                              //br				IL_0002
	IL_0280:                                                                        //ldarg.0
	IL_0281:            Temp_15=this->M_x8();                                       //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x27::M_x8()
	IL_0286:                                                                        //ldloc.0
	IL_0287:            Temp_16=V_0->M_x8();                                        //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x27::M_x8()
	IL_028c:            Temp_17=Temp_15->Equals(safe_cast<System::Object^>(Temp_16));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0291:            if(!Temp_17)goto IL_0256;                                   //brfalse.s				IL_0256
	IL_0293:                                                                        //ldc.i4				0x4
	IL_0298:            V_10=4;                                                     //stloc				V_10
	IL_029c:            /*goto IL_0002;*/goto IL_02a1;                              //br				IL_0002
	IL_02a1:            goto IL_02a3;                                               //br.s				IL_02a3
	IL_02a3:            return;                                                     //ret
	IL_02a4:                                                                        //ldc.i4				0x1
	IL_02a9:            V_10=1;                                                     //stloc				V_10
	IL_02ad:            /*goto IL_0002;*/goto IL_02b2;                              //br				IL_0002
	IL_02b2:            goto IL_02b5;                                               //br.s				IL_02b5
	IL_02b4:                                                                        //break
	IL_02b5:                                                                        //ldloc.0
	IL_02b6:            if(V_0!=nullptr)goto IL_0272;                               //brtrue.s				IL_0272
	IL_02b8:                                                                        //ldc.i4				0x0
	IL_02bd:            V_10=0;                                                     //stloc				V_10
	IL_02c1:            /*goto IL_0002;*/goto IL_02c6;                              //br				IL_0002
	IL_02c6:            /*goto IL_003f;*/goto IL_003A01;                            //br				IL_003f
	IL_02cb:                                                                        //ldarg.0
	IL_02cc:                                                                        //ldarg.1
	IL_02cd:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_02d2:            return;                                                     //ret

}
inline void Root::T_x27::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_2=8;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_1=1;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003f;                                               //br.s				IL_003f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00fe;case 1:goto IL_0014;case 2:goto IL_0111;case 3:goto IL_00be;case 4:goto IL_0079;case 5:goto IL_00ab;case 6:goto IL_00dc;case 7:goto IL_009b;};//switch				(IL_00fe,IL_0014,IL_0111,IL_00be,IL_0079,IL_00ab,IL_00dc,IL_009b)
	IL_003f:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41"
	IL_0044:                                                                        //ldloc				V_2
	IL_0048:            Temp_5=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004d:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x2B51"
	IL_0052:                                                                        //ldloc				V_2
	IL_0056:            Temp_6=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x2B51",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005b:            goto IL_009d;                                               //leave.s				IL_009d
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_3=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x27::M_x8()
	IL_0063:            Temp_4=Temp_3->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0068:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_4));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_006d:            return;                                                     //ret
	IL_006e:                                                                        //ldc.i4				0x4
	IL_0073:            V_1=4;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0016;*/goto IL_0079;                              //br.s				IL_0016
	IL_0079:            goto IL_007c;                                               //br.s				IL_007c
	IL_007b:                                                                        //break
	IL_007c:                                                                        //ldloc.0
	IL_007d:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x2B51"
	IL_0082:                                                                        //ldloc				V_2
	IL_0086:            Temp_1=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x2B51",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008b:            if(V_0==Temp_1)goto IL_00c0;                                //beq.s				IL_00c0
	IL_008d:                                                                        //ldc.i4				0x7
	IL_0092:            V_1=7;                                                      //stloc				V_1
	IL_0096:            /*goto IL_0016;*/goto IL_009b;                              //br				IL_0016
	IL_009b:            goto IL_0103;                                               //br.s				IL_0103
	IL_009d:                                                                        //ldc.i4				0x5
	IL_00a2:            V_1=5;                                                      //stloc				V_1
	IL_00a6:            /*goto IL_0016;*/goto IL_00ab;                              //br				IL_0016
	IL_00ab:                                                                        //ldarg.1
	IL_00ac:                                                                        //dup
	IL_00ad:            V_0=A_0;                                                    //stloc.0
	IL_00ae:            if(V_0==nullptr)goto IL_0113;                               //brfalse.s				IL_0113
	IL_00b0:                                                                        //ldc.i4				0x3
	IL_00b5:            V_1=3;                                                      //stloc				V_1
	IL_00b9:            /*goto IL_0016;*/goto IL_00be;                              //br				IL_0016
	IL_00be:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:            this->M_x1();                                               //call				void Root::T_x27::M_x1()
	IL_00c6:            return;                                                     //ret
	IL_00c7:                                                                        //ldloc.0
	IL_00c8:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00cd:            V_0=Temp_0;                                                 //stloc.0
	IL_00ce:                                                                        //ldc.i4				0x6
	IL_00d3:            V_1=6;                                                      //stloc				V_1
	IL_00d7:            /*goto IL_0016;*/goto IL_00dc;                              //br				IL_0016
	IL_00dc:                                                                        //ldloc.0
	IL_00dd:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41"
	IL_00e2:                                                                        //ldloc				V_2
	IL_00e6:            Temp_2=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00eb:            if(V_0==Temp_2)goto IL_005d;                                //beq				IL_005d
	IL_00f0:                                                                        //ldc.i4				0x0
	IL_00f5:            V_1=0;                                                      //stloc				V_1
	IL_00f9:            /*goto IL_0016;*/goto IL_00fe;                              //br				IL_0016
	IL_00fe:            goto IL_006e;                                               //br				IL_006e
	IL_0103:                                                                        //ldc.i4				0x2
	IL_0108:            V_1=2;                                                      //stloc				V_1
	IL_010c:            /*goto IL_0016;*/goto IL_0111;                              //br				IL_0016
	IL_0111:            goto IL_0113;                                               //br.s				IL_0113
	IL_0113:                                                                        //ldarg.0
	IL_0114:                                                                        //ldarg.1
	IL_0115:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_011a:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssemblyReference^ Root::T_x27::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IAssemblyReference
	IL_000b:            return safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_0);//ret

}
inline System::Boolean Root::T_x27::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_2=17;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x6
	IL_000e:            V_1=6;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003b;                                               //br.s				IL_003b
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00c9;case 1:goto IL_009a;case 2:goto IL_0083;case 3:goto IL_00dc;case 4:goto IL_0064;case 5:goto IL_00b9;case 6:goto IL_0014;};//switch				(IL_00c9,IL_009a,IL_0083,IL_00dc,IL_0064,IL_00b9,IL_0014)
	IL_003b:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A"
	IL_0040:                                                                        //ldloc				V_2
	IL_0044:            Temp_4=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0049:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x0C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x225A"
	IL_004e:                                                                        //ldloc				V_2
	IL_0052:            Temp_5=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x0C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x225A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0057:            goto IL_00bb;                                               //leave.s				IL_00bb
	IL_0059:                                                                        //ldc.i4				0x4
	IL_005e:            V_1=4;                                                      //stloc				V_1
	IL_0062:            /*goto IL_0016;*/goto IL_0064;                              //br.s				IL_0016
	IL_0064:            goto IL_0067;                                               //br.s				IL_0067
	IL_0066:                                                                        //break
	IL_0067:                                                                        //ldloc.0
	IL_0068:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x0C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x225A"
	IL_006d:                                                                        //ldloc				V_2
	IL_0071:            Temp_3=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x0C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x225A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0076:            if(V_0!=Temp_3)goto IL_00e0;                                //bne.un.s				IL_00e0
	IL_0078:                                                                        //ldc.i4				0x2
	IL_007d:            V_1=2;                                                      //stloc				V_1
	IL_0081:            /*goto IL_0016;*/goto IL_0083;                              //br.s				IL_0016
	IL_0083:            goto IL_00de;                                               //br.s				IL_00de
	IL_0085:                                                                        //ldloc.0
	IL_0086:            Temp_2=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_008b:            V_0=Temp_2;                                                 //stloc.0
	IL_008c:                                                                        //ldc.i4				0x1
	IL_0091:            V_1=1;                                                      //stloc				V_1
	IL_0095:            /*goto IL_0016;*/goto IL_009a;                              //br				IL_0016
	IL_009a:                                                                        //ldloc.0
	IL_009b:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A"
	IL_00a0:                                                                        //ldloc				V_2
	IL_00a4:            Temp_1=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a9:            if(V_0==Temp_1)goto IL_00de;                                //beq.s				IL_00de
	IL_00ab:                                                                        //ldc.i4				0x5
	IL_00b0:            V_1=5;                                                      //stloc				V_1
	IL_00b4:            /*goto IL_0016;*/goto IL_00b9;                              //br				IL_0016
	IL_00b9:            goto IL_0059;                                               //br.s				IL_0059
	IL_00bb:                                                                        //ldc.i4				0x0
	IL_00c0:            V_1=0;                                                      //stloc				V_1
	IL_00c4:            /*goto IL_0016;*/goto IL_00c9;                              //br				IL_0016
	IL_00c9:                                                                        //ldarg.1
	IL_00ca:                                                                        //dup
	IL_00cb:            V_0=A_0;                                                    //stloc.0
	IL_00cc:            if(V_0==nullptr)goto IL_00e0;                               //brfalse.s				IL_00e0
	IL_00ce:                                                                        //ldc.i4				0x3
	IL_00d3:            V_1=3;                                                      //stloc				V_1
	IL_00d7:            /*goto IL_0016;*/goto IL_00dc;                              //br				IL_0016
	IL_00dc:            goto IL_0085;                                               //br.s				IL_0085
	IL_00de:                                                                        //ldc.i4.1
	IL_00df:            return true;                                                //ret
	IL_00e0:                                                                        //ldarg.0
	IL_00e1:                                                                        //ldarg.1
	IL_00e2:            Temp_0=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_00e7:            return Temp_0;                                              //ret

}
