#include "global_xref.h"

inline Root::T_x39::T_x39()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_000b:            return safe_cast<Reflector::CodeModel::IModule^>(Temp_0);   //ret

}
inline void Root::T_x39::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::IModule^ Temp_3 = nullptr;
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
	IL_002a:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
	IL_002f:            V_0->WriteModule(Temp_3);                                   //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteModule(Reflector::CodeModel::IModule^)
	IL_0034:            return;                                                     //ret

}
inline void Root::T_x39::M_x1(Reflector::CodeModel::IModule^ A_0)
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
	IL_000c:                                                                        //ldc.i4				0x99
	IL_0011:                                                                        //dup
	IL_0012:            V_0=153;                                                    //stloc.0
	IL_0013:            this->SelectedImageIndex=153;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_0=safe_cast<Reflector::CodeModel::IModuleReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IModuleReference::get_Name()
	IL_0025:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0030:            return;                                                     //ret

}
inline void Root::T_x39::M_x1(System::EventArgs^ A_0)
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
	IL_0011:            return;                                                     //ret

}
inline Root::T_x41^ Root::T_x39::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::INamespace^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	Root::T_x41^ V_1 = nullptr;
	Root::T_x41^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_7=2;                                                      //stloc				V_7
	IL_0009:                                                                        //ldarg.0
	IL_000a:            this->M_x14();                                              //call				void Root::T_x10::M_x14()
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0015:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::TreeNodeCollection::GetEnumerator()
	IL_001a:            V_3=Temp_1;                                                 //stloc.3
	IL_001b:            /*goto IL_001f;*/goto IL_001E01;                            //br.s				IL_001f
	IL_001d:                                                                        //ldnull
	IL_001e:            return nullptr;                                             //ret
	IL_001E01:          try{
	IL_001f:                                                                        //ldc.i4				0x1
	IL_0024:            V_5=1;                                                      //stloc				V_5
	IL_0028:            /*goto IL_002c;*/goto IL_002a;                              //br.s				IL_002c
	IL_002a:            goto IL_006d;                                               //br.s				IL_006d
	IL_002c:                                                                        //ldloc				V_5
	IL_0030:            switch(V_5){case 0:goto IL_0132;case 1:goto IL_002a;case 2:goto IL_0176;case 3:goto IL_0107;case 4:goto IL_00c6;case 5:goto IL_0120;case 6:goto IL_0145;case 7:goto IL_01a2;case 8:goto IL_0166;case 9:goto IL_00a2;case 10:goto IL_007f;case 11:goto IL_018f;case 12:goto IL_00b3;case 13:goto IL_00f4;};//switch				(IL_0132,IL_002a,IL_0176,IL_0107,IL_00c6,IL_0120,IL_0145,IL_01a2,IL_0166,IL_00a2,IL_007f,IL_018f,IL_00b3,IL_00f4)
	IL_006d:            goto IL_00f9;                                               //br				IL_00f9
	IL_0072:                                                                        //ldloc.1
	IL_0073:            V_2=V_1;                                                    //stloc.2
	IL_0074:                                                                        //ldc.i4				0xa
	IL_0079:            V_5=10;                                                     //stloc				V_5
	IL_007d:            /*goto IL_002c;*/goto IL_007f;                              //br.s				IL_002c
	IL_007f:            goto IL_01f7;                                               //leave				IL_01f7
	IL_0084:                                                                        //ldloc.3
	IL_0085:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_008a:                                                                        //castclass				Root::T_x10
	IL_008f:            V_0=safe_cast<Root::T_x10^>(Temp_4);                        //stloc.0
	IL_0090:                                                                        //ldloc.0
	IL_0091:                                                                        //isinst				Root::T_x41
	IL_0096:            V_1=dynamic_cast<Root::T_x41^>(V_0);                        //stloc.1
	IL_0097:                                                                        //ldc.i4				0x9
	IL_009c:            V_5=9;                                                      //stloc				V_5
	IL_00a0:            /*goto IL_002c;*/goto IL_00a2;                              //br.s				IL_002c
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:            if(V_1==nullptr)goto IL_00f9;                               //brfalse.s				IL_00f9
	IL_00a5:                                                                        //ldc.i4				0xc
	IL_00aa:            V_5=12;                                                     //stloc				V_5
	IL_00ae:            /*goto IL_002c;*/goto IL_00b3;                              //br				IL_002c
	IL_00b3:            goto IL_0137;                                               //br				IL_0137
	IL_00b8:                                                                        //ldc.i4				0x4
	IL_00bd:            V_5=4;                                                      //stloc				V_5
	IL_00c1:            /*goto IL_002c;*/goto IL_00c6;                              //br				IL_002c
	IL_00c6:                                                                        //ldloc.1
	IL_00c7:            Temp_5=V_1->M_x1();                                         //callvirt				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_00cc:            Temp_6=Temp_5->Name;                                        //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_00d1:                                                                        //ldstr				L"\x0D1F"
	IL_00d6:                                                                        //ldloc				V_7
	IL_00da:            Temp_7=a(L"\x0D1F",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00df:            Temp_8=(Temp_6 == Temp_7);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00e4:            if(!Temp_8)goto IL_00f9;                                    //brfalse.s				IL_00f9
	IL_00e6:                                                                        //ldc.i4				0xd
	IL_00eb:            V_5=13;                                                     //stloc				V_5
	IL_00ef:            /*goto IL_002c;*/goto IL_00f4;                              //br				IL_002c
	IL_00f4:            goto IL_0072;                                               //br				IL_0072
	IL_00f9:                                                                        //ldc.i4				0x3
	IL_00fe:            V_5=3;                                                      //stloc				V_5
	IL_0102:            /*goto IL_002c;*/goto IL_0107;                              //br				IL_002c
	IL_0107:                                                                        //ldloc.3
	IL_0108:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_010d:            if(Temp_3)goto IL_0084;                                     //brtrue				IL_0084
	IL_0112:                                                                        //ldc.i4				0x5
	IL_0117:            V_5=5;                                                      //stloc				V_5
	IL_011b:            /*goto IL_002c;*/goto IL_0120;                              //br				IL_002c
	IL_0120:            goto IL_0194;                                               //br.s				IL_0194
	IL_0122:                                                                        //ldloc.1
	IL_0123:            V_2=V_1;                                                    //stloc.2
	IL_0124:                                                                        //ldc.i4				0x0
	IL_0129:            V_5=0;                                                      //stloc				V_5
	IL_012d:            /*goto IL_002c;*/goto IL_0132;                              //br				IL_002c
	IL_0132:            goto IL_01f7;                                               //leave				IL_01f7
	IL_0137:                                                                        //ldc.i4				0x6
	IL_013c:            V_5=6;                                                      //stloc				V_5
	IL_0140:            /*goto IL_002c;*/goto IL_0145;                              //br				IL_002c
	IL_0145:                                                                        //ldarg.1
	IL_0146:                                                                        //ldloc.1
	IL_0147:            Temp_9=V_1->M_x1();                                         //callvirt				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_014c:            Temp_10=Temp_9->Name;                                       //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_0151:            Temp_11=(A_0 == Temp_10);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0156:            if(!Temp_11)goto IL_0168;                                   //brfalse.s				IL_0168
	IL_0158:                                                                        //ldc.i4				0x8
	IL_015d:            V_5=8;                                                      //stloc				V_5
	IL_0161:            /*goto IL_002c;*/goto IL_0166;                              //br				IL_002c
	IL_0166:            goto IL_0122;                                               //br.s				IL_0122
	IL_0168:                                                                        //ldc.i4				0x2
	IL_016d:            V_5=2;                                                      //stloc				V_5
	IL_0171:            /*goto IL_002c;*/goto IL_0176;                              //br				IL_002c
	IL_0176:                                                                        //ldarg.1
	IL_0177:            Temp_2=A_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_017c:            if(Temp_2!=0)goto IL_00f9;                                  //brtrue				IL_00f9
	IL_0181:                                                                        //ldc.i4				0xb
	IL_0186:            V_5=11;                                                     //stloc				V_5
	IL_018a:            /*goto IL_002c;*/goto IL_018f;                              //br				IL_002c
	IL_018f:            goto IL_00b8;                                               //br				IL_00b8
	IL_0194:                                                                        //ldc.i4				0x7
	IL_0199:            V_5=7;                                                      //stloc				V_5
	IL_019d:            /*goto IL_002c;*/goto IL_01a2;                              //br				IL_002c
	IL_01a2:            goto IL_001d;                                               //leave				IL_001d
	                    ;}
	                    finally{
	IL_01a7:            goto IL_01be;                                               //br.s				IL_01be
	IL_01a9:                                                                        //ldloc				V_6
	IL_01ad:            switch(V_6){case 0:goto IL_01e0;case 1:goto IL_01d1;case 2:goto IL_01f4;};//switch				(IL_01e0,IL_01d1,IL_01f4)
	IL_01be:                                                                        //ldloc.3
	IL_01bf:                                                                        //isinst				System::IDisposable
	IL_01c4:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_01c6:                                                                        //ldc.i4				0x1
	IL_01cb:            V_6=1;                                                      //stloc				V_6
	IL_01cf:            /*goto IL_01a9;*/goto IL_01d1;                              //br.s				IL_01a9
	IL_01d1:                                                                        //ldloc.s				V_4
	IL_01d3:            if(V_4==nullptr)goto IL_01f6;                               //brfalse.s				IL_01f6
	IL_01d5:                                                                        //ldc.i4				0x0
	IL_01da:            V_6=0;                                                      //stloc				V_6
	IL_01de:            /*goto IL_01a9;*/goto IL_01e0;                              //br.s				IL_01a9
	IL_01e0:            goto IL_01e2;                                               //br.s				IL_01e2
	IL_01e2:                                                                        //ldloc.s				V_4
	IL_01e4:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01e9:                                                                        //ldc.i4				0x2
	IL_01ee:            V_6=2;                                                      //stloc				V_6
	IL_01f2:            /*goto IL_01a9;*/goto IL_01f4;                              //br.s				IL_01a9
	IL_01f4:            goto IL_01f6;                                               //br.s				IL_01f6
	IL_01f6:                                                                        //endfinally
	                    ;}
	IL_01f7:            goto IL_01fa;                                               //br.s				IL_01fa
	IL_01f9:                                                                        //break
	IL_01fa:                                                                        //ldloc.2
	IL_01fb:            return V_2;                                                 //ret

}
inline System::String^ Root::T_x39::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_0=16;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6C2D\x422F\x5D31\x4333\x4535\x5D37\x4839\x123B\x733D\x2F3F\x2641\x3143\x2A45\x2D47"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6C2D\x422F\x5D31\x4333\x4535\x5D37\x4839\x123B\x733D\x2F3F\x2641\x3143\x2A45\x2D47",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x39::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x39::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x39::T_x1^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IModule^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IModule^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssemblyReferenceCollection^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	Root::T_x19^ Temp_9 = nullptr;
	Reflector::CodeModel::IModule^ Temp_10 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_11 = nullptr;
	System::Collections::IEnumerator^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Object^ Temp_14 = nullptr;
	Root::T_x41^ Temp_15 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	Reflector::CodeModel::IModule^ Temp_18 = nullptr;
	Reflector::CodeModel::IModuleReferenceCollection^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::Collections::IEnumerator^ Temp_21 = nullptr;
	//local variables.
	Root::T_x39::T_x1^ V_0 = nullptr;
	Root::T_x19^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::INamespace^ V_3 = nullptr;
	Root::T_x41^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_7=6;                                                      //stloc				V_7
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_7
	IL_0011:            switch(V_7){case 0:goto IL_00ce;case 1:goto IL_02b4;case 2:goto IL_00aa;case 3:goto IL_0097;case 4:goto IL_0068;case 5:goto IL_0050;case 6:goto IL_000b;};//switch				(IL_00ce,IL_02b4,IL_00aa,IL_0097,IL_0068,IL_0050,IL_000b)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_18=this->M_x1();                                       //call				Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
	IL_0038:            Temp_19=Temp_18->ModuleReferences;                          //callvirt				Reflector::CodeModel::IModuleReferenceCollection^ Reflector::CodeModel::IModule::get_ModuleReferences()
	IL_003d:            Temp_20=safe_cast<System::Collections::ICollection^>(Temp_19)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0042:                                                                        //ldc.i4.0
	IL_0043:            if(Temp_20>0)goto IL_006a;                                  //bgt.s				IL_006a
	IL_0045:                                                                        //ldc.i4				0x5
	IL_004a:            V_7=5;                                                      //stloc				V_7
	IL_004e:            /*goto IL_000d;*/goto IL_0050;                              //br.s				IL_000d
	IL_0050:            goto IL_009c;                                               //br.s				IL_009c
	IL_0052:                                                                        //ldloc.1
	IL_0053:            Temp_21=V_1->M_x1();                                        //callvirt				System::Collections::IEnumerator^ Root::T_x19::M_x1()
	IL_0058:            V_5=Temp_21;                                                //stloc.s				V_5
	IL_005a:            goto IL_005d;                                               //br.s				IL_005d
	IL_005c:                                                                        //break
	IL_005d:                                                                        //ldc.i4				0x4
	IL_0062:            V_7=4;                                                      //stloc				V_7
	IL_0066:            /*goto IL_000d;*/goto IL_0068;                              //br.s				IL_000d
	IL_0068:            /*goto IL_00d0;*/goto IL_00CE01;                            //br.s				IL_00d0
	IL_006a:            Temp_0=gcnew Root::T_x39::T_x1();                           //newobj				void Root::T_x39::T_x1::.ctor()
	IL_006f:            V_0=Temp_0;                                                 //stloc.0
	IL_0070:                                                                        //ldarg.0
	IL_0071:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0076:                                                                        //ldloc.0
	IL_0077:            Temp_2=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_0));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_007c:                                                                        //pop
	IL_007d:                                                                        //ldloc.0
	IL_007e:                                                                        //ldarg.0
	IL_007f:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
	IL_0084:            V_0->M_x1(Temp_3);                                          //callvirt				void Root::T_x39::T_x1::M_x1(Reflector::CodeModel::IModule^)
	IL_0089:                                                                        //ldc.i4				0x3
	IL_008e:            V_7=3;                                                      //stloc				V_7
	IL_0092:            /*goto IL_000d;*/goto IL_0097;                              //br				IL_000d
	IL_0097:            goto IL_028e;                                               //br				IL_028e
	IL_009c:                                                                        //ldc.i4				0x2
	IL_00a1:            V_7=2;                                                      //stloc				V_7
	IL_00a5:            /*goto IL_000d;*/goto IL_00aa;                              //br				IL_000d
	IL_00aa:                                                                        //ldarg.0
	IL_00ab:            Temp_6=this->M_x1();                                        //call				Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
	IL_00b0:            Temp_7=Temp_6->AssemblyReferences;                          //callvirt				Reflector::CodeModel::IAssemblyReferenceCollection^ Reflector::CodeModel::IModule::get_AssemblyReferences()
	IL_00b5:            Temp_8=safe_cast<System::Collections::ICollection^>(Temp_7)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00ba:                                                                        //ldc.i4.0
	IL_00bb:            if(Temp_8<=0)goto IL_028e;                                  //ble				IL_028e
	IL_00c0:                                                                        //ldc.i4				0x0
	IL_00c5:            V_7=0;                                                      //stloc				V_7
	IL_00c9:            /*goto IL_000d;*/goto IL_00ce;                              //br				IL_000d
	IL_00ce:            goto IL_006a;                                               //br.s				IL_006a
	IL_00CE01:          try{
	IL_00d0:                                                                        //ldc.i4				0x2
	IL_00d5:            V_7=2;                                                      //stloc				V_7
	IL_00d9:            /*goto IL_00dd;*/goto IL_00db;                              //br.s				IL_00dd
	IL_00db:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00dd:                                                                        //ldloc				V_7
	IL_00e1:            switch(V_7){case 0:goto IL_0138;case 1:goto IL_0169;case 2:goto IL_00db;case 3:goto IL_0145;case 4:goto IL_0159;};//switch				(IL_0138,IL_0169,IL_00db,IL_0145,IL_0159)
	IL_00fa:            goto IL_013a;                                               //br.s				IL_013a
	IL_00fc:                                                                        //ldloc.s				V_5
	IL_00fe:            Temp_14=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0103:                                                                        //castclass				Reflector::CodeModel::INamespace
	IL_0108:            V_3=safe_cast<Reflector::CodeModel::INamespace^>(Temp_14);  //stloc.3
	IL_0109:            Temp_15=gcnew Root::T_x41();                                //newobj				void Root::T_x41::.ctor()
	IL_010e:            V_4=Temp_15;                                                //stloc.s				V_4
	IL_0110:                                                                        //ldloc.s				V_4
	IL_0112:                                                                        //ldloc.3
	IL_0113:            V_4->M_x1(V_3);                                             //callvirt				void Root::T_x41::M_x1(Reflector::CodeModel::INamespace^)
	IL_0118:                                                                        //ldarg.0
	IL_0119:            Temp_16=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_011e:                                                                        //ldloc.s				V_4
	IL_0120:            Temp_17=Temp_16->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_4));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0125:                                                                        //pop
	IL_0126:                                                                        //ldloc.s				V_4
	IL_0128:            V_4->M_x10();                                               //callvirt				void Root::T_x10::M_x10()
	IL_012d:                                                                        //ldc.i4				0x0
	IL_0132:            V_7=0;                                                      //stloc				V_7
	IL_0136:            /*goto IL_00dd;*/goto IL_0138;                              //br.s				IL_00dd
	IL_0138:            goto IL_013a;                                               //br.s				IL_013a
	IL_013a:                                                                        //ldc.i4				0x3
	IL_013f:            V_7=3;                                                      //stloc				V_7
	IL_0143:            /*goto IL_00dd;*/goto IL_0145;                              //br.s				IL_00dd
	IL_0145:                                                                        //ldloc.s				V_5
	IL_0147:            Temp_13=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_014c:            if(Temp_13)goto IL_00fc;                                    //brtrue.s				IL_00fc
	IL_014e:                                                                        //ldc.i4				0x4
	IL_0153:            V_7=4;                                                      //stloc				V_7
	IL_0157:            /*goto IL_00dd;*/goto IL_0159;                              //br.s				IL_00dd
	IL_0159:            goto IL_015b;                                               //br.s				IL_015b
	IL_015b:                                                                        //ldc.i4				0x1
	IL_0160:            V_7=1;                                                      //stloc				V_7
	IL_0164:            /*goto IL_00dd;*/goto IL_0169;                              //br				IL_00dd
	IL_0169:            goto IL_02b9;                                               //leave				IL_02b9
	                    ;}
	                    finally{
	IL_016e:            goto IL_0185;                                               //br.s				IL_0185
	IL_0170:                                                                        //ldloc				V_7
	IL_0174:            switch(V_7){case 0:goto IL_01bc;case 1:goto IL_0199;case 2:goto IL_01a8;};//switch				(IL_01bc,IL_0199,IL_01a8)
	IL_0185:                                                                        //ldloc.s				V_5
	IL_0187:                                                                        //isinst				System::IDisposable
	IL_018c:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_018e:                                                                        //ldc.i4				0x1
	IL_0193:            V_7=1;                                                      //stloc				V_7
	IL_0197:            /*goto IL_0170;*/goto IL_0199;                              //br.s				IL_0170
	IL_0199:                                                                        //ldloc.s				V_6
	IL_019b:            if(V_6==nullptr)goto IL_01be;                               //brfalse.s				IL_01be
	IL_019d:                                                                        //ldc.i4				0x2
	IL_01a2:            V_7=2;                                                      //stloc				V_7
	IL_01a6:            /*goto IL_0170;*/goto IL_01a8;                              //br.s				IL_0170
	IL_01a8:            goto IL_01aa;                                               //br.s				IL_01aa
	IL_01aa:                                                                        //ldloc.s				V_6
	IL_01ac:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01b1:                                                                        //ldc.i4				0x0
	IL_01b6:            V_7=0;                                                      //stloc				V_7
	IL_01ba:            /*goto IL_0170;*/goto IL_01bc;                              //br.s				IL_0170
	IL_01bc:            goto IL_01be;                                               //br.s				IL_01be
	IL_01be:                                                                        //endfinally
	                    ;}
	IL_01BE02:          try{
	IL_01bf:                                                                        //ldc.i4				0x1
	IL_01c4:            V_7=1;                                                      //stloc				V_7
	IL_01c8:            /*goto IL_01cc;*/goto IL_01ca;                              //br.s				IL_01cc
	IL_01ca:            goto IL_01e9;                                               //br.s				IL_01e9
	IL_01cc:                                                                        //ldloc				V_7
	IL_01d0:            switch(V_7){case 0:goto IL_022b;case 1:goto IL_01ca;case 2:goto IL_0238;case 3:goto IL_020a;case 4:goto IL_01f6;};//switch				(IL_022b,IL_01ca,IL_0238,IL_020a,IL_01f6)
	IL_01e9:            goto IL_01eb;                                               //br.s				IL_01eb
	IL_01eb:                                                                        //ldc.i4				0x4
	IL_01f0:            V_7=4;                                                      //stloc				V_7
	IL_01f4:            /*goto IL_01cc;*/goto IL_01f6;                              //br.s				IL_01cc
	IL_01f6:                                                                        //ldloc.s				V_5
	IL_01f8:            Temp_4=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_01fd:            if(Temp_4)goto IL_020c;                                     //brtrue.s				IL_020c
	IL_01ff:                                                                        //ldc.i4				0x3
	IL_0204:            V_7=3;                                                      //stloc				V_7
	IL_0208:            /*goto IL_01cc;*/goto IL_020a;                              //br.s				IL_01cc
	IL_020a:            goto IL_022d;                                               //br.s				IL_022d
	IL_020c:                                                                        //ldloc.s				V_5
	IL_020e:            Temp_5=V_5->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0213:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0218:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_5);//stloc.2
	IL_0219:                                                                        //ldloc.1
	IL_021a:                                                                        //ldloc.2
	IL_021b:            V_1->M_x1(V_2);                                             //callvirt				void Root::T_x19::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0220:                                                                        //ldc.i4				0x0
	IL_0225:            V_7=0;                                                      //stloc				V_7
	IL_0229:            /*goto IL_01cc;*/goto IL_022b;                              //br.s				IL_01cc
	IL_022b:            goto IL_01eb;                                               //br.s				IL_01eb
	IL_022d:                                                                        //ldc.i4				0x2
	IL_0232:            V_7=2;                                                      //stloc				V_7
	IL_0236:            /*goto IL_01cc;*/goto IL_0238;                              //br.s				IL_01cc
	IL_0238:            goto IL_0052;                                               //leave				IL_0052
	                    ;}
	                    finally{
	IL_023d:            goto IL_0254;                                               //br.s				IL_0254
	IL_023f:                                                                        //ldloc				V_7
	IL_0243:            switch(V_7){case 0:goto IL_0268;case 1:goto IL_0277;case 2:goto IL_028b;};//switch				(IL_0268,IL_0277,IL_028b)
	IL_0254:                                                                        //ldloc.s				V_5
	IL_0256:                                                                        //isinst				System::IDisposable
	IL_025b:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_025d:                                                                        //ldc.i4				0x0
	IL_0262:            V_7=0;                                                      //stloc				V_7
	IL_0266:            /*goto IL_023f;*/goto IL_0268;                              //br.s				IL_023f
	IL_0268:                                                                        //ldloc.s				V_6
	IL_026a:            if(V_6==nullptr)goto IL_028d;                               //brfalse.s				IL_028d
	IL_026c:                                                                        //ldc.i4				0x1
	IL_0271:            V_7=1;                                                      //stloc				V_7
	IL_0275:            /*goto IL_023f;*/goto IL_0277;                              //br.s				IL_023f
	IL_0277:            goto IL_0279;                                               //br.s				IL_0279
	IL_0279:                                                                        //ldloc.s				V_6
	IL_027b:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0280:                                                                        //ldc.i4				0x2
	IL_0285:            V_7=2;                                                      //stloc				V_7
	IL_0289:            /*goto IL_023f;*/goto IL_028b;                              //br.s				IL_023f
	IL_028b:            goto IL_028d;                                               //br.s				IL_028d
	IL_028d:                                                                        //endfinally
	                    ;}
	IL_028e:            Temp_9=gcnew Root::T_x19();                                 //newobj				void Root::T_x19::.ctor()
	IL_0293:            V_1=Temp_9;                                                 //stloc.1
	IL_0294:                                                                        //ldarg.0
	IL_0295:            Temp_10=this->M_x1();                                       //call				Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
	IL_029a:            Temp_11=Temp_10->Types;                                     //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_029f:            Temp_12=safe_cast<System::Collections::IEnumerable^>(Temp_11)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_02a4:            V_5=Temp_12;                                                //stloc.s				V_5
	IL_02a6:                                                                        //ldc.i4				0x1
	IL_02ab:            V_7=1;                                                      //stloc				V_7
	IL_02af:            /*goto IL_000d;*/goto IL_02b4;                              //br				IL_000d
	IL_02b4:            /*goto IL_01bf;*/goto IL_01BE02;                            //br				IL_01bf
	IL_02b9:                                                                        //ldarg.0
	IL_02ba:                                                                        //ldarg.1
	IL_02bb:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_02c0:            return;                                                     //ret

}
inline void Root::T_x39::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_2=1;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0047;                                               //br.s				IL_0047
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_00ac;case 2:goto IL_012b;case 3:goto IL_013e;case 4:goto IL_00cb;case 5:goto IL_008f;case 6:goto IL_00e2;case 7:goto IL_010c;case 8:goto IL_00f5;case 9:goto IL_015d;};//switch				(IL_0014,IL_00ac,IL_012b,IL_013e,IL_00cb,IL_008f,IL_00e2,IL_010c,IL_00f5,IL_015d)
	IL_0047:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A"
	IL_004c:                                                                        //ldloc				V_2
	IL_0050:            Temp_6=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0055:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x793C\x563E\x3240\x2242\x3644\x3446\x2C48\x264A\x2F4C\x234E\x3450\x2152"
	IL_005a:                                                                        //ldloc				V_2
	IL_005e:            Temp_7=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x793C\x563E\x3240\x2242\x3644\x3446\x2C48\x264A\x2F4C\x234E\x3450\x2152",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0063:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x7C3C\x513E\x2040\x2F42\x3C44\x3D46\x2C48\x394A"
	IL_0068:                                                                        //ldloc				V_2
	IL_006c:            Temp_8=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x7C3C\x513E\x2040\x2F42\x3C44\x3D46\x2C48\x394A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            goto IL_00d4;                                               //leave.s				IL_00d4
	IL_0073:                                                                        //ldarg.0
	IL_0074:            Temp_1=this->M_x1();                                        //call				Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
	IL_0079:            Temp_2=Temp_1->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_007e:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_2));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0083:            return;                                                     //ret
	IL_0084:                                                                        //ldc.i4				0x5
	IL_0089:            V_1=5;                                                      //stloc				V_1
	IL_008d:            /*goto IL_0016;*/goto IL_008f;                              //br.s				IL_0016
	IL_008f:            goto IL_015f;                                               //br				IL_015f
	IL_0094:                                                                        //ldloc.0
	IL_0095:            Temp_5=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_009a:            V_0=Temp_5;                                                 //stloc.0
	IL_009b:            goto IL_009e;                                               //br.s				IL_009e
	IL_009d:                                                                        //break
	IL_009e:                                                                        //ldc.i4				0x1
	IL_00a3:            V_1=1;                                                      //stloc				V_1
	IL_00a7:            /*goto IL_0016;*/goto IL_00ac;                              //br				IL_0016
	IL_00ac:                                                                        //ldloc.0
	IL_00ad:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A"
	IL_00b2:                                                                        //ldloc				V_2
	IL_00b6:            Temp_0=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bb:            if(V_0==Temp_0)goto IL_0073;                                //beq.s				IL_0073
	IL_00bd:                                                                        //ldc.i4				0x4
	IL_00c2:            V_1=4;                                                      //stloc				V_1
	IL_00c6:            /*goto IL_0016;*/goto IL_00cb;                              //br				IL_0016
	IL_00cb:            goto IL_0130;                                               //br.s				IL_0130
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:            this->M_x16();                                              //call				void Root::T_x10::M_x16()
	IL_00d3:            return;                                                     //ret
	IL_00d4:                                                                        //ldc.i4				0x6
	IL_00d9:            V_1=6;                                                      //stloc				V_1
	IL_00dd:            /*goto IL_0016;*/goto IL_00e2;                              //br				IL_0016
	IL_00e2:                                                                        //ldarg.1
	IL_00e3:                                                                        //dup
	IL_00e4:            V_0=A_0;                                                    //stloc.0
	IL_00e5:            if(V_0==nullptr)goto IL_015f;                               //brfalse.s				IL_015f
	IL_00e7:                                                                        //ldc.i4				0x8
	IL_00ec:            V_1=8;                                                      //stloc				V_1
	IL_00f0:            /*goto IL_0016;*/goto IL_00f5;                              //br				IL_0016
	IL_00f5:            goto IL_0094;                                               //br.s				IL_0094
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_00fd:            return;                                                     //ret
	IL_00fe:                                                                        //ldc.i4				0x7
	IL_0103:            V_1=7;                                                      //stloc				V_1
	IL_0107:            /*goto IL_0016;*/goto IL_010c;                              //br				IL_0016
	IL_010c:                                                                        //ldloc.0
	IL_010d:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x7C3C\x513E\x2040\x2F42\x3C44\x3D46\x2C48\x394A"
	IL_0112:                                                                        //ldloc				V_2
	IL_0116:            Temp_4=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x7C3C\x513E\x2040\x2F42\x3C44\x3D46\x2C48\x394A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011b:            if(V_0==Temp_4)goto IL_00cd;                                //beq.s				IL_00cd
	IL_011d:                                                                        //ldc.i4				0x2
	IL_0122:            V_1=2;                                                      //stloc				V_1
	IL_0126:            /*goto IL_0016;*/goto IL_012b;                              //br				IL_0016
	IL_012b:            goto IL_0084;                                               //br				IL_0084
	IL_0130:                                                                        //ldc.i4				0x3
	IL_0135:            V_1=3;                                                      //stloc				V_1
	IL_0139:            /*goto IL_0016;*/goto IL_013e;                              //br				IL_0016
	IL_013e:                                                                        //ldloc.0
	IL_013f:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x793C\x563E\x3240\x2242\x3644\x3446\x2C48\x264A\x2F4C\x234E\x3450\x2152"
	IL_0144:                                                                        //ldloc				V_2
	IL_0148:            Temp_3=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x6634\x5F36\x5638\x4C3A\x793C\x563E\x3240\x2242\x3644\x3446\x2C48\x264A\x2F4C\x234E\x3450\x2152",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014d:            if(V_0==Temp_3)goto IL_00f7;                                //beq.s				IL_00f7
	IL_014f:                                                                        //ldc.i4				0x9
	IL_0154:            V_1=9;                                                      //stloc				V_1
	IL_0158:            /*goto IL_0016;*/goto IL_015d;                              //br				IL_0016
	IL_015d:            goto IL_00fe;                                               //br.s				IL_00fe
	IL_015f:                                                                        //ldarg.0
	IL_0160:                                                                        //ldarg.1
	IL_0161:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_0166:            return;                                                     //ret

}
inline System::Boolean Root::T_x39::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_2=14;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_1=1;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //add
	IL_0019:                                                                        //bgt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_004e;                                               //br.s				IL_004e
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_0112;case 1:goto IL_0014;case 2:goto IL_00f9;case 3:goto IL_00e6;case 4:goto IL_0131;case 5:goto IL_00a7;case 6:goto IL_00d6;case 7:goto IL_0085;case 8:goto IL_00b7;};//switch				(IL_0112,IL_0014,IL_00f9,IL_00e6,IL_0131,IL_00a7,IL_00d6,IL_0085,IL_00b7)
	IL_004e:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147"
	IL_0053:                                                                        //ldloc				V_2
	IL_0057:            Temp_5=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005c:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0E49\x254B\x3D4D\x314F\x2151\x2753\x3355\x3557\x3859\x305B\x3B5D\x125F"
	IL_0061:                                                                        //ldloc				V_2
	IL_0065:            Temp_6=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0E49\x254B\x3D4D\x314F\x2151\x2753\x3355\x3557\x3859\x305B\x3B5D\x125F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006a:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0B49\x224B\x2F4D\x3C4F\x2B51\x2E53\x3355\x2A57"
	IL_006f:                                                                        //ldloc				V_2
	IL_0073:            Temp_7=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0B49\x224B\x2F4D\x3C4F\x2B51\x2E53\x3355\x2A57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0078:            goto IL_00d8;                                               //leave.s				IL_00d8
	IL_007a:                                                                        //ldc.i4				0x7
	IL_007f:            V_1=7;                                                      //stloc				V_1
	IL_0083:            /*goto IL_0021;*/goto IL_0085;                              //br.s				IL_0021
	IL_0085:                                                                        //ldloc.0
	IL_0086:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0B49\x224B\x2F4D\x3C4F\x2B51\x2E53\x3355\x2A57"
	IL_008b:                                                                        //ldloc				V_2
	IL_008f:            Temp_3=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0B49\x224B\x2F4D\x3C4F\x2B51\x2E53\x3355\x2A57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0094:            if(V_0!=Temp_3)goto IL_0136;                                //bne.un				IL_0136
	IL_0099:                                                                        //ldc.i4				0x5
	IL_009e:            V_1=5;                                                      //stloc				V_1
	IL_00a2:            /*goto IL_0021;*/goto IL_00a7;                              //br				IL_0021
	IL_00a7:            goto IL_00fb;                                               //br.s				IL_00fb
	IL_00a9:                                                                        //ldc.i4				0x8
	IL_00ae:            V_1=8;                                                      //stloc				V_1
	IL_00b2:            /*goto IL_0021;*/goto IL_00b7;                              //br				IL_0021
	IL_00b7:                                                                        //ldloc.0
	IL_00b8:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0E49\x254B\x3D4D\x314F\x2151\x2753\x3355\x3557\x3859\x305B\x3B5D\x125F"
	IL_00bd:                                                                        //ldloc				V_2
	IL_00c1:            Temp_4=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2C43\x2945\x3F47\x0E49\x254B\x3D4D\x314F\x2151\x2753\x3355\x3557\x3859\x305B\x3B5D\x125F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c6:            if(V_0==Temp_4)goto IL_00fb;                                //beq.s				IL_00fb
	IL_00c8:                                                                        //ldc.i4				0x6
	IL_00cd:            V_1=6;                                                      //stloc				V_1
	IL_00d1:            /*goto IL_0021;*/goto IL_00d6;                              //br				IL_0021
	IL_00d6:            goto IL_007a;                                               //br.s				IL_007a
	IL_00d8:                                                                        //ldc.i4				0x3
	IL_00dd:            V_1=3;                                                      //stloc				V_1
	IL_00e1:            /*goto IL_0021;*/goto IL_00e6;                              //br				IL_0021
	IL_00e6:                                                                        //ldarg.1
	IL_00e7:                                                                        //dup
	IL_00e8:            V_0=A_0;                                                    //stloc.0
	IL_00e9:            if(V_0==nullptr)goto IL_0136;                               //brfalse.s				IL_0136
	IL_00eb:                                                                        //ldc.i4				0x2
	IL_00f0:            V_1=2;                                                      //stloc				V_1
	IL_00f4:            /*goto IL_0021;*/goto IL_00f9;                              //br				IL_0021
	IL_00f9:            goto IL_00fd;                                               //br.s				IL_00fd
	IL_00fb:                                                                        //ldc.i4.1
	IL_00fc:            return true;                                                //ret
	IL_00fd:                                                                        //ldloc.0
	IL_00fe:            Temp_1=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0103:            V_0=Temp_1;                                                 //stloc.0
	IL_0104:                                                                        //ldc.i4				0x0
	IL_0109:            V_1=0;                                                      //stloc				V_1
	IL_010d:            /*goto IL_0021;*/goto IL_0112;                              //br				IL_0021
	IL_0112:                                                                        //ldloc.0
	IL_0113:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147"
	IL_0118:                                                                        //ldloc				V_2
	IL_011c:            Temp_0=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0121:            if(V_0==Temp_0)goto IL_00fb;                                //beq.s				IL_00fb
	IL_0123:                                                                        //ldc.i4				0x4
	IL_0128:            V_1=4;                                                      //stloc				V_1
	IL_012c:            /*goto IL_0021;*/goto IL_0131;                              //br				IL_0021
	IL_0131:            goto IL_00a9;                                               //br				IL_00a9
	IL_0136:                                                                        //ldarg.0
	IL_0137:                                                                        //ldarg.1
	IL_0138:            Temp_2=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_013d:            return Temp_2;                                              //ret

}
inline Root::T_x39::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Collections::ICollection^ Root::T_x39::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	Reflector::CodeModel::IModuleReferenceCollection^ Temp_2 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldloc.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->M_x8();                                        //call				Reflector::CodeModel::IModule^ Root::T_x39::T_x1::M_x8()
	IL_0011:            Temp_2=Temp_1->ModuleReferences;                            //callvirt				Reflector::CodeModel::IModuleReferenceCollection^ Reflector::CodeModel::IModule::get_ModuleReferences()
	IL_0016:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_2));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            V_0->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0021:                                                                        //ldloc.0
	IL_0022:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline void Root::T_x39::T_x1::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IModule^ Root::T_x39::T_x1 F_x1
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldstr				L"\x721F\x4721\x4223\x4325\x5A27\x4F29\x422B\x4D2D\x552F\x4131"
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            Temp_0=a(L"\x721F\x4721\x4223\x4325\x5A27\x4F29\x422B\x4D2D\x552F\x4131",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldc.i4				0x9b
	IL_002e:                                                                        //dup
	IL_002f:            V_0=155;                                                    //stloc.0
	IL_0030:            this->SelectedImageIndex=155;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0041:            return;                                                     //ret

}
inline void Root::T_x39::T_x1::M_x1(System::EventArgs^ A_0)
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
inline System::Collections::ICollection^ Root::T_x39::T_x1::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyReferenceCollection^ Temp_2 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldloc.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->M_x8();                                        //call				Reflector::CodeModel::IModule^ Root::T_x39::T_x1::M_x8()
	IL_0011:            Temp_2=Temp_1->AssemblyReferences;                          //callvirt				Reflector::CodeModel::IAssemblyReferenceCollection^ Reflector::CodeModel::IModule::get_AssemblyReferences()
	IL_0016:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_2));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            V_0->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0021:                                                                        //ldloc.0
	IL_0022:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline void Root::T_x39::T_x1::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ICollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Root::T_x27^ Temp_4 = nullptr;
	Reflector::CodeModel::IModule^ Temp_5 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	Root::T_x40^ Temp_10 = nullptr;
	Reflector::CodeModel::IModule^ Temp_11 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Collections::ICollection^ Temp_14 = nullptr;
	System::Collections::IEnumerator^ Temp_15 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyReference^ V_0 = nullptr;
	Root::T_x27^ V_1 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_2 = nullptr;
	Root::T_x40^ V_3 = nullptr;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x12();                                       //call				System::Collections::ICollection^ Root::T_x39::T_x1::M_x12()
	IL_0006:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000b:            V_4=Temp_1;                                                 //stloc.s				V_4
	IL_000d:            /*goto IL_0115;*/goto IL_011001;                            //br				IL_0115
	IL_000D01:          try{
	IL_0012:                                                                        //ldc.i4				0x0
	IL_0017:            V_6=0;                                                      //stloc				V_6
	IL_001b:            /*goto IL_001f;*/goto IL_001d;                              //br.s				IL_001f
	IL_001d:            goto IL_003c;                                               //br.s				IL_003c
	IL_001f:                                                                        //ldloc				V_6
	IL_0023:            switch(V_6){case 0:goto IL_001d;case 1:goto IL_009d;case 2:goto IL_0049;case 3:goto IL_005d;case 4:goto IL_00ad;};//switch				(IL_001d,IL_009d,IL_0049,IL_005d,IL_00ad)
	IL_003c:            goto IL_003e;                                               //br.s				IL_003e
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_6=2;                                                      //stloc				V_6
	IL_0047:            /*goto IL_001f;*/goto IL_0049;                              //br.s				IL_001f
	IL_0049:                                                                        //ldloc.s				V_4
	IL_004b:            Temp_8=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0050:            if(Temp_8)goto IL_005f;                                     //brtrue.s				IL_005f
	IL_0052:                                                                        //ldc.i4				0x3
	IL_0057:            V_6=3;                                                      //stloc				V_6
	IL_005b:            /*goto IL_001f;*/goto IL_005d;                              //br.s				IL_001f
	IL_005d:            goto IL_009f;                                               //br.s				IL_009f
	IL_005f:                                                                        //ldloc.s				V_4
	IL_0061:            Temp_9=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0066:                                                                        //castclass				Reflector::CodeModel::IModuleReference
	IL_006b:            V_2=safe_cast<Reflector::CodeModel::IModuleReference^>(Temp_9);//stloc.2
	IL_006c:            Temp_10=gcnew Root::T_x40();                                //newobj				void Root::T_x40::.ctor()
	IL_0071:            V_3=Temp_10;                                                //stloc.3
	IL_0072:                                                                        //ldloc.3
	IL_0073:                                                                        //ldloc.2
	IL_0074:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x40::M_x1(Reflector::CodeModel::IModuleReference^)
	IL_0079:                                                                        //ldloc.3
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_11=this->F_x1;                                         //ldfld				Reflector::CodeModel::IModule^ Root::T_x39::T_x1 F_x1
	IL_0080:            V_3->M_x1(Temp_11);                                         //callvirt				void Root::T_x40::M_x1(Reflector::CodeModel::IModule^)
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_12=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_008b:                                                                        //ldloc.3
	IL_008c:            Temp_13=Temp_12->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_3));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0091:                                                                        //pop
	IL_0092:                                                                        //ldc.i4				0x1
	IL_0097:            V_6=1;                                                      //stloc				V_6
	IL_009b:            /*goto IL_001f;*/goto IL_009d;                              //br.s				IL_001f
	IL_009d:            goto IL_003e;                                               //br.s				IL_003e
	IL_009f:                                                                        //ldc.i4				0x4
	IL_00a4:            V_6=4;                                                      //stloc				V_6
	IL_00a8:            /*goto IL_001f;*/goto IL_00ad;                              //br				IL_001f
	IL_00ad:            goto IL_0211;                                               //leave				IL_0211
	                    ;}
	                    finally{
	IL_00b2:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_00b4:                                                                        //ldloc				V_7
	IL_00b8:            switch(V_7){case 0:goto IL_0100;case 1:goto IL_00dd;case 2:goto IL_00ec;};//switch				(IL_0100,IL_00dd,IL_00ec)
	IL_00c9:                                                                        //ldloc.s				V_4
	IL_00cb:                                                                        //isinst				System::IDisposable
	IL_00d0:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_00d2:                                                                        //ldc.i4				0x1
	IL_00d7:            V_7=1;                                                      //stloc				V_7
	IL_00db:            /*goto IL_00b4;*/goto IL_00dd;                              //br.s				IL_00b4
	IL_00dd:                                                                        //ldloc.s				V_5
	IL_00df:            if(V_5==nullptr)goto IL_0102;                               //brfalse.s				IL_0102
	IL_00e1:                                                                        //ldc.i4				0x2
	IL_00e6:            V_7=2;                                                      //stloc				V_7
	IL_00ea:            /*goto IL_00b4;*/goto IL_00ec;                              //br.s				IL_00b4
	IL_00ec:            goto IL_00ee;                                               //br.s				IL_00ee
	IL_00ee:                                                                        //ldloc.s				V_5
	IL_00f0:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00f5:                                                                        //ldc.i4				0x0
	IL_00fa:            V_7=0;                                                      //stloc				V_7
	IL_00fe:            /*goto IL_00b4;*/goto IL_0100;                              //br.s				IL_00b4
	IL_0100:            goto IL_0102;                                               //br.s				IL_0102
	IL_0102:                                                                        //endfinally
	                    ;}
	IL_0103:                                                                        //ldarg.0
	IL_0104:            Temp_14=this->M_x1();                                       //call				System::Collections::ICollection^ Root::T_x39::T_x1::M_x1()
	IL_0109:            Temp_15=safe_cast<System::Collections::IEnumerable^>(Temp_14)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_010e:            V_4=Temp_15;                                                //stloc.s				V_4
	IL_0110:            /*goto IL_0012;*/goto IL_000D01;                            //br				IL_0012
	IL_011001:          try{
	IL_0115:                                                                        //ldc.i4				0x3
	IL_011a:            V_8=3;                                                      //stloc				V_8
	IL_011e:            /*goto IL_0122;*/goto IL_0120;                              //br.s				IL_0122
	IL_0120:            goto IL_013f;                                               //br.s				IL_013f
	IL_0122:                                                                        //ldloc				V_8
	IL_0126:            switch(V_8){case 0:goto IL_01b0;case 1:goto IL_014c;case 2:goto IL_01a0;case 3:goto IL_0120;case 4:goto IL_0160;};//switch				(IL_01b0,IL_014c,IL_01a0,IL_0120,IL_0160)
	IL_013f:            goto IL_0141;                                               //br.s				IL_0141
	IL_0141:                                                                        //ldc.i4				0x1
	IL_0146:            V_8=1;                                                      //stloc				V_8
	IL_014a:            /*goto IL_0122;*/goto IL_014c;                              //br.s				IL_0122
	IL_014c:                                                                        //ldloc.s				V_4
	IL_014e:            Temp_2=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0153:            if(Temp_2)goto IL_0162;                                     //brtrue.s				IL_0162
	IL_0155:                                                                        //ldc.i4				0x4
	IL_015a:            V_8=4;                                                      //stloc				V_8
	IL_015e:            /*goto IL_0122;*/goto IL_0160;                              //br.s				IL_0122
	IL_0160:            goto IL_01a2;                                               //br.s				IL_01a2
	IL_0162:                                                                        //ldloc.s				V_4
	IL_0164:            Temp_3=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0169:                                                                        //castclass				Reflector::CodeModel::IAssemblyReference
	IL_016e:            V_0=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_3);//stloc.0
	IL_016f:            Temp_4=gcnew Root::T_x27();                                 //newobj				void Root::T_x27::.ctor()
	IL_0174:            V_1=Temp_4;                                                 //stloc.1
	IL_0175:                                                                        //ldloc.1
	IL_0176:                                                                        //ldloc.0
	IL_0177:            V_1->M_x1(V_0);                                             //callvirt				void Root::T_x27::M_x1(Reflector::CodeModel::IAssemblyReference^)
	IL_017c:                                                                        //ldloc.1
	IL_017d:                                                                        //ldarg.0
	IL_017e:            Temp_5=this->M_x8();                                        //call				Reflector::CodeModel::IModule^ Root::T_x39::T_x1::M_x8()
	IL_0183:            V_1->M_x1(Temp_5);                                          //callvirt				void Root::T_x27::M_x1(Reflector::CodeModel::IModule^)
	IL_0188:                                                                        //ldarg.0
	IL_0189:            Temp_6=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_018e:                                                                        //ldloc.1
	IL_018f:            Temp_7=Temp_6->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0194:                                                                        //pop
	IL_0195:                                                                        //ldc.i4				0x2
	IL_019a:            V_8=2;                                                      //stloc				V_8
	IL_019e:            /*goto IL_0122;*/goto IL_01a0;                              //br.s				IL_0122
	IL_01a0:            goto IL_0141;                                               //br.s				IL_0141
	IL_01a2:                                                                        //ldc.i4				0x0
	IL_01a7:            V_8=0;                                                      //stloc				V_8
	IL_01ab:            /*goto IL_0122;*/goto IL_01b0;                              //br				IL_0122
	IL_01b0:            goto IL_0103;                                               //leave				IL_0103
	                    ;}
	                    finally{
	IL_01b5:            goto IL_01cc;                                               //br.s				IL_01cc
	IL_01b7:                                                                        //ldloc				V_9
	IL_01bb:            switch(V_9){case 0:goto IL_01e0;case 1:goto IL_0203;case 2:goto IL_01ef;};//switch				(IL_01e0,IL_0203,IL_01ef)
	IL_01cc:                                                                        //ldloc.s				V_4
	IL_01ce:                                                                        //isinst				System::IDisposable
	IL_01d3:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_01d5:                                                                        //ldc.i4				0x0
	IL_01da:            V_9=0;                                                      //stloc				V_9
	IL_01de:            /*goto IL_01b7;*/goto IL_01e0;                              //br.s				IL_01b7
	IL_01e0:                                                                        //ldloc.s				V_5
	IL_01e2:            if(V_5==nullptr)goto IL_0210;                               //brfalse.s				IL_0210
	IL_01e4:                                                                        //ldc.i4				0x2
	IL_01e9:            V_9=2;                                                      //stloc				V_9
	IL_01ed:            /*goto IL_01b7;*/goto IL_01ef;                              //br.s				IL_01b7
	IL_01ef:            goto IL_01f1;                                               //br.s				IL_01f1
	IL_01f1:                                                                        //ldloc.s				V_5
	IL_01f3:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01f8:                                                                        //ldc.i4				0x1
	IL_01fd:            V_9=1;                                                      //stloc				V_9
	IL_0201:            /*goto IL_01b7;*/goto IL_0203;                              //br.s				IL_01b7
	IL_0203:                                                                        //ldc.i4.2
	IL_0204:                                                                        //dup
	IL_0205:                                                                        //dup
	IL_0206:                                                                        //ldc.i4.6
	IL_0207:                                                                        //add
	IL_0208:                                                                        //bgt				IL_0204
	IL_020d:                                                                        //pop
	IL_020e:            goto IL_0210;                                               //br.s				IL_0210
	IL_0210:                                                                        //endfinally
	                    ;}
	IL_0211:                                                                        //ldarg.0
	IL_0212:                                                                        //ldarg.1
	IL_0213:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_0218:            return;                                                     //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x39::T_x1::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModule^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IModule^ Root::T_x39::T_x1 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
