#include "global_xref.h"

inline Root::T_x41::T_x41()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::INamespace
	IL_000b:            return safe_cast<Reflector::CodeModel::INamespace^>(Temp_0);//ret

}
inline void Root::T_x41::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_3 = nullptr;
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
	IL_002a:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_002f:            V_0->WriteNamespace(Temp_3);                                //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteNamespace(Reflector::CodeModel::INamespace^)
	IL_0034:            return;                                                     //ret

}
inline void Root::T_x41::M_x1(Reflector::CodeModel::INamespace^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Root::T_x41^ Temp_4 = nullptr;
	Root::T_x41^ Temp_5 = nullptr;
	Root::T_x41^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	Root::T_x41^ Temp_8 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_2=2;                                                      //stloc				V_2
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x10::M_x1(safe_cast<System::Object^>(A_0));         //call				void Root::T_x10::M_x1(System::Object^)
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.1
	IL_0016:                                                                        //dup
	IL_0017:            V_0=1;                                                      //stloc.0
	IL_0018:            this->SelectedImageIndex=1;                                 //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_001d:                                                                        //ldloc.0
	IL_001e:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_002a:            Temp_1=Temp_0->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_002f:            Temp_5=this;if(Temp_1==0)goto IL_0033;                      //brfalse.s				IL_0033
	IL_0031:            Temp_6=Temp_5;goto IL_0043;                                 //br.s				IL_0043
	IL_0033:                                                                        //ldstr				L"\x0D1F"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_2=a(L"\x0D1F",V_2);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            Temp_8=Temp_5;Temp_7=Temp_2;goto IL_004b;                   //br.s				IL_004b
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_0049:            Temp_8=Temp_6;Temp_7=Temp_3;goto IL_004b;                   //br.s				IL_004b
	IL_004b:            Temp_8->Text=Temp_7;/*warning ! semantic stack doesn't empty at joint !;*///call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0050:            return;                                                     //ret

}
inline Root::T_x45^ Root::T_x41::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	Root::T_x45^ V_1 = nullptr;
	Root::T_x45^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x14();                                              //call				void Root::T_x10::M_x14()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_000c:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::TreeNodeCollection::GetEnumerator()
	IL_0011:            V_3=Temp_1;                                                 //stloc.3
	IL_0012:            /*goto IL_0019;*/goto IL_001801;                            //br.s				IL_0019
	IL_0014:            goto IL_0017;                                               //br.s				IL_0017
	IL_0016:                                                                        //break
	IL_0017:                                                                        //ldnull
	IL_0018:            return nullptr;                                             //ret
	IL_001801:          try{
	IL_0019:                                                                        //ldc.i4				0x1
	IL_001e:            V_5=1;                                                      //stloc				V_5
	IL_0022:            /*goto IL_0026;*/goto IL_0024;                              //br.s				IL_0026
	IL_0024:            goto IL_0053;                                               //br.s				IL_0053
	IL_0026:                                                                        //ldloc				V_5
	IL_002a:            switch(V_5){case 0:goto IL_00c6;case 1:goto IL_0024;case 2:goto IL_00ed;case 3:goto IL_0073;case 4:goto IL_00dd;case 5:goto IL_0060;case 6:goto IL_00a1;case 7:goto IL_0093;case 8:goto IL_00b3;};//switch				(IL_00c6,IL_0024,IL_00ed,IL_0073,IL_00dd,IL_0060,IL_00a1,IL_0093,IL_00b3)
	IL_0053:            goto IL_0055;                                               //br.s				IL_0055
	IL_0055:                                                                        //ldc.i4				0x5
	IL_005a:            V_5=5;                                                      //stloc				V_5
	IL_005e:            /*goto IL_0026;*/goto IL_0060;                              //br.s				IL_0026
	IL_0060:                                                                        //ldloc.3
	IL_0061:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0066:            if(Temp_3)goto IL_0075;                                     //brtrue.s				IL_0075
	IL_0068:                                                                        //ldc.i4				0x3
	IL_006d:            V_5=3;                                                      //stloc				V_5
	IL_0071:            /*goto IL_0026;*/goto IL_0073;                              //br.s				IL_0026
	IL_0073:            goto IL_00df;                                               //br.s				IL_00df
	IL_0075:                                                                        //ldloc.3
	IL_0076:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_007b:                                                                        //castclass				Root::T_x10
	IL_0080:            V_0=safe_cast<Root::T_x10^>(Temp_4);                        //stloc.0
	IL_0081:                                                                        //ldloc.0
	IL_0082:                                                                        //isinst				Root::T_x45
	IL_0087:            V_1=dynamic_cast<Root::T_x45^>(V_0);                        //stloc.1
	IL_0088:                                                                        //ldc.i4				0x7
	IL_008d:            V_5=7;                                                      //stloc				V_5
	IL_0091:            /*goto IL_0026;*/goto IL_0093;                              //br.s				IL_0026
	IL_0093:                                                                        //ldloc.1
	IL_0094:            if(V_1==nullptr)goto IL_0055;                               //brfalse.s				IL_0055
	IL_0096:                                                                        //ldc.i4				0x6
	IL_009b:            V_5=6;                                                      //stloc				V_5
	IL_009f:            /*goto IL_0026;*/goto IL_00a1;                              //br.s				IL_0026
	IL_00a1:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_00a3:                                                                        //ldloc.1
	IL_00a4:            V_2=V_1;                                                    //stloc.2
	IL_00a5:                                                                        //ldc.i4				0x8
	IL_00aa:            V_5=8;                                                      //stloc				V_5
	IL_00ae:            /*goto IL_0026;*/goto IL_00b3;                              //br				IL_0026
	IL_00b3:            goto IL_0142;                                               //leave				IL_0142
	IL_00b8:                                                                        //ldc.i4				0x0
	IL_00bd:            V_5=0;                                                      //stloc				V_5
	IL_00c1:            /*goto IL_0026;*/goto IL_00c6;                              //br				IL_0026
	IL_00c6:                                                                        //ldarg.1
	IL_00c7:                                                                        //ldloc.1
	IL_00c8:            Temp_2=V_1->M_x15();                                        //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_00cd:            if(A_0!=Temp_2)goto IL_0055;                                //bne.un.s				IL_0055
	IL_00cf:                                                                        //ldc.i4				0x4
	IL_00d4:            V_5=4;                                                      //stloc				V_5
	IL_00d8:            /*goto IL_0026;*/goto IL_00dd;                              //br				IL_0026
	IL_00dd:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_00df:                                                                        //ldc.i4				0x2
	IL_00e4:            V_5=2;                                                      //stloc				V_5
	IL_00e8:            /*goto IL_0026;*/goto IL_00ed;                              //br				IL_0026
	IL_00ed:            goto IL_0014;                                               //leave				IL_0014
	                    ;}
	                    finally{
	IL_00f2:            goto IL_0109;                                               //br.s				IL_0109
	IL_00f4:                                                                        //ldloc				V_6
	IL_00f8:            switch(V_6){case 0:goto IL_013f;case 1:goto IL_012b;case 2:goto IL_011c;};//switch				(IL_013f,IL_012b,IL_011c)
	IL_0109:                                                                        //ldloc.3
	IL_010a:                                                                        //isinst				System::IDisposable
	IL_010f:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0111:                                                                        //ldc.i4				0x2
	IL_0116:            V_6=2;                                                      //stloc				V_6
	IL_011a:            /*goto IL_00f4;*/goto IL_011c;                              //br.s				IL_00f4
	IL_011c:                                                                        //ldloc.s				V_4
	IL_011e:            if(V_4==nullptr)goto IL_0141;                               //brfalse.s				IL_0141
	IL_0120:                                                                        //ldc.i4				0x1
	IL_0125:            V_6=1;                                                      //stloc				V_6
	IL_0129:            /*goto IL_00f4;*/goto IL_012b;                              //br.s				IL_00f4
	IL_012b:            goto IL_012d;                                               //br.s				IL_012d
	IL_012d:                                                                        //ldloc.s				V_4
	IL_012f:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0134:                                                                        //ldc.i4				0x0
	IL_0139:            V_6=0;                                                      //stloc				V_6
	IL_013d:            /*goto IL_00f4;*/goto IL_013f;                              //br.s				IL_00f4
	IL_013f:            goto IL_0141;                                               //br.s				IL_0141
	IL_0141:                                                                        //endfinally
	                    ;}
	IL_0142:                                                                        //ldloc.2
	IL_0143:            return V_2;                                                 //ret

}
inline void Root::T_x41::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Object^ Temp_1 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_5 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Boolean Temp_10 = false;
	Root::T_x45^ Temp_11 = nullptr;
	System::Type^ Temp_12 = nullptr;
	System::Object^ Temp_13 = nullptr;
	System::Collections::IEnumerator^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::INamespace^ Temp_16 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_17 = nullptr;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Root::T_x45^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_6=2;                                                      //stloc				V_6
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_6
	IL_0011:            switch(V_6){case 0:goto IL_0261;case 1:goto IL_0234;case 2:goto IL_000b;case 3:goto IL_003c;};//switch				(IL_0261,IL_0234,IL_000b,IL_003c)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_15=this->IsExpanded;                                   //call				System::Boolean System::Windows::Forms::TreeNode::get_IsExpanded()
	IL_002c:            if(!Temp_15)goto IL_0239;                                   //brfalse				IL_0239
	IL_0031:                                                                        //ldc.i4				0x3
	IL_0036:            V_6=3;                                                      //stloc				V_6
	IL_003a:            /*goto IL_000d;*/goto IL_003c;                              //br.s				IL_000d
	IL_003c:            goto IL_0208;                                               //br				IL_0208
	IL_003C01:          try{
	IL_0041:                                                                        //ldc.i4				0x3
	IL_0046:            V_6=3;                                                      //stloc				V_6
	IL_004a:            /*goto IL_004e;*/goto IL_004c;                              //br.s				IL_004e
	IL_004c:            goto IL_008b;                                               //br.s				IL_008b
	IL_004e:                                                                        //ldloc				V_6
	IL_0052:            switch(V_6){case 0:goto IL_00e6;case 1:goto IL_0110;case 2:goto IL_014b;case 3:goto IL_004c;case 4:goto IL_01b2;case 5:goto IL_00fd;case 6:goto IL_00d6;case 7:goto IL_012c;case 8:goto IL_0188;case 9:goto IL_019f;case 10:goto IL_015b;case 11:goto IL_00a5;case 12:goto IL_00b9;};//switch				(IL_00e6,IL_0110,IL_014b,IL_004c,IL_01b2,IL_00fd,IL_00d6,IL_012c,IL_0188,IL_019f,IL_015b,IL_00a5,IL_00b9)
	IL_008b:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_008d:                                                                        //ldloc.s				V_4
	IL_008f:            Temp_1=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0094:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0099:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_1);//stloc.1
	IL_009a:                                                                        //ldc.i4				0xb
	IL_009f:            V_6=11;                                                     //stloc				V_6
	IL_00a3:            /*goto IL_004e;*/goto IL_00a5;                              //br.s				IL_004e
	IL_00a5:                                                                        //ldloc.1
	IL_00a6:                                                                        //ldloc.0
	IL_00a7:            Temp_10=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_1),V_0);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_00ac:            if(!Temp_10)goto IL_00d8;                                   //brfalse.s				IL_00d8
	IL_00ae:                                                                        //ldc.i4				0xc
	IL_00b3:            V_6=12;                                                     //stloc				V_6
	IL_00b7:            /*goto IL_004e;*/goto IL_00b9;                              //br.s				IL_004e
	IL_00b9:            goto IL_012e;                                               //br.s				IL_012e
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00c1:                                                                        //ldloc.3
	IL_00c2:                                                                        //ldloc.2
	IL_00c3:            Temp_4->Insert(V_3,safe_cast<System::Windows::Forms::TreeNode^>(V_2));//callvirt				void System::Windows::Forms::TreeNodeCollection::Insert(System::Int32,System::Windows::Forms::TreeNode^)
	IL_00c8:                                                                        //ldc.i4				0x6
	IL_00cd:            V_6=6;                                                      //stloc				V_6
	IL_00d1:            /*goto IL_004e;*/goto IL_00d6;                              //br				IL_004e
	IL_00d6:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_00d8:                                                                        //ldc.i4				0x0
	IL_00dd:            V_6=0;                                                      //stloc				V_6
	IL_00e1:            /*goto IL_004e;*/goto IL_00e6;                              //br				IL_004e
	IL_00e6:                                                                        //ldloc.s				V_4
	IL_00e8:            Temp_0=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00ed:            if(Temp_0)goto IL_008d;                                     //brtrue.s				IL_008d
	IL_00ef:                                                                        //ldc.i4				0x5
	IL_00f4:            V_6=5;                                                      //stloc				V_6
	IL_00f8:            /*goto IL_004e;*/goto IL_00fd;                              //br				IL_004e
	IL_00fd:            goto IL_01a4;                                               //br				IL_01a4
	IL_0102:                                                                        //ldc.i4				0x1
	IL_0107:            V_6=1;                                                      //stloc				V_6
	IL_010b:            /*goto IL_004e;*/goto IL_0110;                              //br				IL_004e
	IL_0110:                                                                        //ldloc.3
	IL_0111:                                                                        //ldarg.0
	IL_0112:            Temp_2=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0117:            Temp_3=Temp_2->Count;                                       //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_011c:            if(V_3>=Temp_3)goto IL_00bb;                                //bge.s				IL_00bb
	IL_011e:                                                                        //ldc.i4				0x7
	IL_0123:            V_6=7;                                                      //stloc				V_6
	IL_0127:            /*goto IL_004e;*/goto IL_012c;                              //br				IL_004e
	IL_012c:            goto IL_014d;                                               //br.s				IL_014d
	IL_012e:            Temp_11=gcnew Root::T_x45();                                //newobj				void Root::T_x45::.ctor()
	IL_0133:            V_2=Temp_11;                                                //stloc.2
	IL_0134:                                                                        //ldloc.2
	IL_0135:                                                                        //ldloc.1
	IL_0136:            V_2->M_x12(V_1);                                            //callvirt				void Root::T_x45::M_x12(Reflector::CodeModel::ITypeDeclaration^)
	IL_013b:                                                                        //ldc.i4.0
	IL_013c:            V_3=0;                                                      //stloc.3
	IL_013d:                                                                        //ldc.i4				0x2
	IL_0142:            V_6=2;                                                      //stloc				V_6
	IL_0146:            /*goto IL_004e;*/goto IL_014b;                              //br				IL_004e
	IL_014b:            goto IL_0102;                                               //br.s				IL_0102
	IL_014d:                                                                        //ldc.i4				0xa
	IL_0152:            V_6=10;                                                     //stloc				V_6
	IL_0156:            /*goto IL_004e;*/goto IL_015b;                              //br				IL_004e
	IL_015b:                                                                        //ldarg.0
	IL_015c:            Temp_5=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0161:                                                                        //ldloc.3
	IL_0162:            Temp_6=Temp_5[V_3];                                         //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_0167:            Temp_7=Temp_6->Text;                                        //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_016c:                                                                        //ldloc.2
	IL_016d:            Temp_8=V_2->Text;                                           //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_0172:            Temp_9=Temp_7->CompareTo(Temp_8);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0177:                                                                        //ldc.i4.0
	IL_0178:            if(Temp_9<0)goto IL_018d;                                   //blt.s				IL_018d
	IL_017a:                                                                        //ldc.i4				0x8
	IL_017f:            V_6=8;                                                      //stloc				V_6
	IL_0183:            /*goto IL_004e;*/goto IL_0188;                              //br				IL_004e
	IL_0188:            goto IL_00bb;                                               //br				IL_00bb
	IL_018d:                                                                        //ldloc.3
	IL_018e:                                                                        //ldc.i4.1
	IL_018f:                                                                        //add
	IL_0190:            V_3=(V_3 + 1);                                              //stloc.3
	IL_0191:                                                                        //ldc.i4				0x9
	IL_0196:            V_6=9;                                                      //stloc				V_6
	IL_019a:            /*goto IL_004e;*/goto IL_019f;                              //br				IL_004e
	IL_019f:            goto IL_0102;                                               //br				IL_0102
	IL_01a4:                                                                        //ldc.i4				0x4
	IL_01a9:            V_6=4;                                                      //stloc				V_6
	IL_01ad:            /*goto IL_004e;*/goto IL_01b2;                              //br				IL_004e
	IL_01b2:            goto IL_0263;                                               //leave				IL_0263
	                    ;}
	                    finally{
	IL_01b7:            goto IL_01ce;                                               //br.s				IL_01ce
	IL_01b9:                                                                        //ldloc				V_6
	IL_01bd:            switch(V_6){case 0:goto IL_01e2;case 1:goto IL_0205;case 2:goto IL_01f1;};//switch				(IL_01e2,IL_0205,IL_01f1)
	IL_01ce:                                                                        //ldloc.s				V_4
	IL_01d0:                                                                        //isinst				System::IDisposable
	IL_01d5:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_01d7:                                                                        //ldc.i4				0x0
	IL_01dc:            V_6=0;                                                      //stloc				V_6
	IL_01e0:            /*goto IL_01b9;*/goto IL_01e2;                              //br.s				IL_01b9
	IL_01e2:                                                                        //ldloc.s				V_5
	IL_01e4:            if(V_5==nullptr)goto IL_0207;                               //brfalse.s				IL_0207
	IL_01e6:                                                                        //ldc.i4				0x2
	IL_01eb:            V_6=2;                                                      //stloc				V_6
	IL_01ef:            /*goto IL_01b9;*/goto IL_01f1;                              //br.s				IL_01b9
	IL_01f1:            goto IL_01f3;                                               //br.s				IL_01f3
	IL_01f3:                                                                        //ldloc.s				V_5
	IL_01f5:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01fa:                                                                        //ldc.i4				0x1
	IL_01ff:            V_6=1;                                                      //stloc				V_6
	IL_0203:            /*goto IL_01b9;*/goto IL_0205;                              //br.s				IL_01b9
	IL_0205:            goto IL_0207;                                               //br.s				IL_0207
	IL_0207:                                                                        //endfinally
	                    ;}
	IL_0208:                                                                        //ldarg.0
	IL_0209:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_020e:            Temp_12=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0213:            Temp_13=Root::T_x10::M_x1(Temp_12);                         //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0218:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_021d:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_13);//stloc.0
	IL_021e:                                                                        //ldarg.1
	IL_021f:            Temp_14=safe_cast<System::Collections::IEnumerable^>(A_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0224:            V_4=Temp_14;                                                //stloc.s				V_4
	IL_0226:                                                                        //ldc.i4				0x1
	IL_022b:            V_6=1;                                                      //stloc				V_6
	IL_022f:            /*goto IL_000d;*/goto IL_0234;                              //br				IL_000d
	IL_0234:            /*goto IL_0041;*/goto IL_003C01;                            //br				IL_0041
	IL_0239:            goto IL_023c;                                               //br.s				IL_023c
	IL_023b:                                                                        //break
	IL_023c:                                                                        //ldarg.0
	IL_023d:            Temp_16=this->M_x1();                                       //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_0242:            Temp_17=Temp_16->Types;                                     //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0247:                                                                        //ldarg.1
	IL_0248:            Temp_17->AddRange(safe_cast<System::Collections::ICollection^>(A_0));//callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_024d:                                                                        //ldarg.0
	IL_024e:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0253:                                                                        //ldc.i4				0x0
	IL_0258:            V_6=0;                                                      //stloc				V_6
	IL_025c:            /*goto IL_000d;*/goto IL_0261;                              //br				IL_000d
	IL_0261:            goto IL_0263;                                               //br.s				IL_0263
	IL_0263:            return;                                                     //ret

}
inline void Root::T_x41::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Windows::Forms::TreeNodeCollection^ Temp_6 = nullptr;
	Root::T_x10^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_006a;case 1:goto IL_009b;case 2:goto IL_00df;case 3:goto IL_00b8;case 4:goto IL_008b;case 5:goto IL_0056;case 6:goto IL_00c8;};//switch				(IL_006a,IL_009b,IL_00df,IL_00b8,IL_008b,IL_0056,IL_00c8)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_002d:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0032:            Temp_1=Root::T_x10::M_x1(Temp_0);                           //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0037:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_003c:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_2=this->M_x1();                                        //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_0043:            Temp_3=Temp_2->Types;                                       //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0048:            V_1=Temp_3;                                                 //stloc.1
	IL_0049:                                                                        //ldc.i4.0
	IL_004a:            V_2=0;                                                      //stloc.2
	IL_004b:                                                                        //ldc.i4				0x5
	IL_0050:            V_3=5;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0058:            goto IL_005b;                                               //br.s				IL_005b
	IL_005a:                                                                        //break
	IL_005b:                                                                        //ldloc.2
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:                                                                        //add
	IL_005e:            V_2=(V_2 + 1);                                              //stloc.2
	IL_005f:                                                                        //ldc.i4				0x0
	IL_0064:            V_3=0;                                                      //stloc				V_3
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_6=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0072:            Temp_7=gcnew Root::T_x10();                                 //newobj				void Root::T_x10::.ctor()
	IL_0077:            Temp_8=Temp_6->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_7));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_007c:                                                                        //pop
	IL_007d:                                                                        //ldc.i4				0x4
	IL_0082:            V_3=4;                                                      //stloc				V_3
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_008d:                                                                        //ldc.i4				0x1
	IL_0092:            V_3=1;                                                      //stloc				V_3
	IL_0096:            /*goto IL_0002;*/goto IL_009b;                              //br				IL_0002
	IL_009b:                                                                        //ldloc.1
	IL_009c:                                                                        //ldloc.2
	IL_009d:            Temp_4=V_1[V_2];                                            //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeDeclarationCollection::get_Item(System::Int32)
	IL_00a2:                                                                        //ldloc.0
	IL_00a3:            Temp_5=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_4),V_0);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_00a8:            if(!Temp_5)goto IL_0058;                                    //brfalse.s				IL_0058
	IL_00aa:                                                                        //ldc.i4				0x3
	IL_00af:            V_3=3;                                                      //stloc				V_3
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:            goto IL_006c;                                               //br.s				IL_006c
	IL_00ba:                                                                        //ldc.i4				0x6
	IL_00bf:            V_3=6;                                                      //stloc				V_3
	IL_00c3:            /*goto IL_0002;*/goto IL_00c8;                              //br				IL_0002
	IL_00c8:                                                                        //ldloc.2
	IL_00c9:                                                                        //ldloc.1
	IL_00ca:            Temp_9=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00cf:            if(V_2<Temp_9)goto IL_008d;                                 //blt.s				IL_008d
	IL_00d1:                                                                        //ldc.i4				0x2
	IL_00d6:            V_3=2;                                                      //stloc				V_3
	IL_00da:            /*goto IL_0002;*/goto IL_00df;                              //br				IL_0002
	IL_00df:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:                                                                        //ldarg.1
	IL_00e3:            Root::T_x10::M_x1(A_0);                                     //call				void Root::T_x10::M_x1(System::EventArgs^)
	IL_00e8:            return;                                                     //ret

}
inline System::String^ Root::T_x41::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_0=9;                                                      //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6526\x5B28\x442A\x5A2C\x5C2E\x5430\x4132\x1B34\x7936\x5838\x563A\x583C\x4C3E\x3140\x2242\x2644\x2246"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6526\x5B28\x442A\x5A2C\x5C2E\x5430\x4132\x1B34\x7936\x5838\x563A\x583C\x4C3E\x3140\x2242\x2644\x2246",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x41::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x41::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Root::T_x45^ Temp_7 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Collections::IEnumerator^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Collections::IEnumerator^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Int32 Temp_14 = 0;
	System::Boolean Temp_15 = false;
	System::Object^ Temp_16 = nullptr;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ V_2 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_4 = nullptr;
	Root::T_x45^ V_5 = nullptr;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:            goto IL_002a;                                               //br.s				IL_002a
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_8
	IL_0011:            switch(V_8){case 0:goto IL_008d;case 1:goto IL_0072;case 2:goto IL_005e;case 3:goto IL_00a6;case 4:goto IL_01bd;};//switch				(IL_008d,IL_0072,IL_005e,IL_00a6,IL_01bd)
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0030:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0035:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_003a:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_003f:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_0040:                                                                        //ldc.i4.0
	IL_0041:            Temp_2=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0046:            V_1=Temp_2;                                                 //stloc.1
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_004d:            Temp_4=Temp_3->Types;                                       //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0052:            V_2=Temp_4;                                                 //stloc.2
	IL_0053:                                                                        //ldc.i4				0x2
	IL_0058:            V_8=2;                                                      //stloc				V_8
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:                                                                        //ldloc.2
	IL_005f:            Temp_11=safe_cast<System::Collections::ICollection^>(V_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0064:                                                                        //ldc.i4.0
	IL_0065:            if(Temp_11<=0)goto IL_0077;                                 //ble.s				IL_0077
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_8=1;                                                      //stloc				V_8
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_01a7;                                               //br				IL_01a7
	IL_0077:                                                                        //ldloc.1
	IL_0078:            Temp_12=V_1->GetEnumerator();                               //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_007d:            V_6=Temp_12;                                                //stloc.s				V_6
	IL_007f:                                                                        //ldc.i4				0x0
	IL_0084:            V_8=0;                                                      //stloc				V_8
	IL_0088:            /*goto IL_0002;*/goto IL_008d;                              //br				IL_0002
	IL_008d:            /*goto IL_01c2;*/goto IL_01BD01;                            //br				IL_01c2
	IL_0092:                                                                        //ldloc.1
	IL_0093:            V_1->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0098:                                                                        //ldc.i4				0x3
	IL_009d:            V_8=3;                                                      //stloc				V_8
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:            goto IL_0077;                                               //br.s				IL_0077
	IL_00A601:          try{
	IL_00a8:                                                                        //ldc.i4				0x2
	IL_00ad:            V_8=2;                                                      //stloc				V_8
	IL_00b1:            /*goto IL_00b5;*/goto IL_00b3;                              //br.s				IL_00b5
	IL_00b3:            goto IL_00da;                                               //br.s				IL_00da
	IL_00b5:                                                                        //ldloc				V_8
	IL_00b9:            switch(V_8){case 0:goto IL_0109;case 1:goto IL_011d;case 2:goto IL_00b3;case 3:goto IL_00ef;case 4:goto IL_0151;case 5:goto IL_0141;case 6:goto IL_012a;};//switch				(IL_0109,IL_011d,IL_00b3,IL_00ef,IL_0151,IL_0141,IL_012a)
	IL_00da:            goto IL_011f;                                               //br.s				IL_011f
	IL_00dc:                                                                        //ldloc.1
	IL_00dd:                                                                        //ldloc.3
	IL_00de:            Temp_14=V_1->Add(safe_cast<System::Object^>(V_3));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00e3:                                                                        //pop
	IL_00e4:                                                                        //ldc.i4				0x3
	IL_00e9:            V_8=3;                                                      //stloc				V_8
	IL_00ed:            /*goto IL_00b5;*/goto IL_00ef;                              //br.s				IL_00b5
	IL_00ef:            goto IL_011f;                                               //br.s				IL_011f
	IL_00f1:                                                                        //ldloc.s				V_6
	IL_00f3:            Temp_16=V_6->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00f8:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_00fd:            V_3=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_16);//stloc.3
	IL_00fe:                                                                        //ldc.i4				0x0
	IL_0103:            V_8=0;                                                      //stloc				V_8
	IL_0107:            /*goto IL_00b5;*/goto IL_0109;                              //br.s				IL_00b5
	IL_0109:                                                                        //ldloc.3
	IL_010a:                                                                        //ldloc.0
	IL_010b:            Temp_13=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_3),V_0);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0110:            if(!Temp_13)goto IL_011f;                                   //brfalse.s				IL_011f
	IL_0112:                                                                        //ldc.i4				0x1
	IL_0117:            V_8=1;                                                      //stloc				V_8
	IL_011b:            /*goto IL_00b5;*/goto IL_011d;                              //br.s				IL_00b5
	IL_011d:            goto IL_00dc;                                               //br.s				IL_00dc
	IL_011f:                                                                        //ldc.i4				0x6
	IL_0124:            V_8=6;                                                      //stloc				V_8
	IL_0128:            /*goto IL_00b5;*/goto IL_012a;                              //br.s				IL_00b5
	IL_012a:                                                                        //ldloc.s				V_6
	IL_012c:            Temp_15=V_6->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0131:            if(Temp_15)goto IL_00f1;                                    //brtrue.s				IL_00f1
	IL_0133:                                                                        //ldc.i4				0x5
	IL_0138:            V_8=5;                                                      //stloc				V_8
	IL_013c:            /*goto IL_00b5;*/goto IL_0141;                              //br				IL_00b5
	IL_0141:            goto IL_0143;                                               //br.s				IL_0143
	IL_0143:                                                                        //ldc.i4				0x4
	IL_0148:            V_8=4;                                                      //stloc				V_8
	IL_014c:            /*goto IL_00b5;*/goto IL_0151;                              //br				IL_00b5
	IL_0151:            goto IL_0092;                                               //leave				IL_0092
	                    ;}
	                    finally{
	IL_0156:            goto IL_016d;                                               //br.s				IL_016d
	IL_0158:                                                                        //ldloc				V_8
	IL_015c:            switch(V_8){case 0:goto IL_0190;case 1:goto IL_0181;case 2:goto IL_01a4;};//switch				(IL_0190,IL_0181,IL_01a4)
	IL_016d:                                                                        //ldloc.s				V_6
	IL_016f:                                                                        //isinst				System::IDisposable
	IL_0174:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_0176:                                                                        //ldc.i4				0x1
	IL_017b:            V_8=1;                                                      //stloc				V_8
	IL_017f:            /*goto IL_0158;*/goto IL_0181;                              //br.s				IL_0158
	IL_0181:                                                                        //ldloc.s				V_7
	IL_0183:            if(V_7==nullptr)goto IL_01a6;                               //brfalse.s				IL_01a6
	IL_0185:                                                                        //ldc.i4				0x0
	IL_018a:            V_8=0;                                                      //stloc				V_8
	IL_018e:            /*goto IL_0158;*/goto IL_0190;                              //br.s				IL_0158
	IL_0190:            goto IL_0192;                                               //br.s				IL_0192
	IL_0192:                                                                        //ldloc.s				V_7
	IL_0194:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0199:                                                                        //ldc.i4				0x2
	IL_019e:            V_8=2;                                                      //stloc				V_8
	IL_01a2:            /*goto IL_0158;*/goto IL_01a4;                              //br.s				IL_0158
	IL_01a4:            goto IL_01a6;                                               //br.s				IL_01a6
	IL_01a6:                                                                        //endfinally
	                    ;}
	IL_01a7:                                                                        //ldloc.2
	IL_01a8:            Temp_10=safe_cast<System::Collections::IEnumerable^>(V_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_01ad:            V_6=Temp_10;                                                //stloc.s				V_6
	IL_01af:                                                                        //ldc.i4				0x4
	IL_01b4:            V_8=4;                                                      //stloc				V_8
	IL_01b8:            /*goto IL_0002;*/goto IL_01bd;                              //br				IL_0002
	IL_01bd:            /*goto IL_00a8;*/goto IL_00A601;                            //br				IL_00a8
	IL_01BD01:          try{
	IL_01c2:                                                                        //ldc.i4				0x2
	IL_01c7:            V_8=2;                                                      //stloc				V_8
	IL_01cb:            /*goto IL_01cf;*/goto IL_01cd;                              //br.s				IL_01cf
	IL_01cd:            goto IL_01ec;                                               //br.s				IL_01ec
	IL_01cf:                                                                        //ldloc				V_8
	IL_01d3:            switch(V_8){case 0:goto IL_0256;case 1:goto IL_020d;case 2:goto IL_01cd;case 3:goto IL_01f9;case 4:goto IL_0246;};//switch				(IL_0256,IL_020d,IL_01cd,IL_01f9,IL_0246)
	IL_01ec:            goto IL_01ee;                                               //br.s				IL_01ee
	IL_01ee:                                                                        //ldc.i4				0x3
	IL_01f3:            V_8=3;                                                      //stloc				V_8
	IL_01f7:            /*goto IL_01cf;*/goto IL_01f9;                              //br.s				IL_01cf
	IL_01f9:                                                                        //ldloc.s				V_6
	IL_01fb:            Temp_5=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0200:            if(Temp_5)goto IL_020f;                                     //brtrue.s				IL_020f
	IL_0202:                                                                        //ldc.i4				0x1
	IL_0207:            V_8=1;                                                      //stloc				V_8
	IL_020b:            /*goto IL_01cf;*/goto IL_020d;                              //br.s				IL_01cf
	IL_020d:            goto IL_0248;                                               //br.s				IL_0248
	IL_020f:                                                                        //ldloc.s				V_6
	IL_0211:            Temp_6=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0216:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_021b:            V_4=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_6);//stloc.s				V_4
	IL_021d:            Temp_7=gcnew Root::T_x45();                                 //newobj				void Root::T_x45::.ctor()
	IL_0222:            V_5=Temp_7;                                                 //stloc.s				V_5
	IL_0224:                                                                        //ldloc.s				V_5
	IL_0226:                                                                        //ldloc.s				V_4
	IL_0228:            V_5->M_x12(V_4);                                            //callvirt				void Root::T_x45::M_x12(Reflector::CodeModel::ITypeDeclaration^)
	IL_022d:                                                                        //ldarg.0
	IL_022e:            Temp_8=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0233:                                                                        //ldloc.s				V_5
	IL_0235:            Temp_9=Temp_8->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_5));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_023a:                                                                        //pop
	IL_023b:                                                                        //ldc.i4				0x4
	IL_0240:            V_8=4;                                                      //stloc				V_8
	IL_0244:            /*goto IL_01cf;*/goto IL_0246;                              //br.s				IL_01cf
	IL_0246:            goto IL_01ee;                                               //br.s				IL_01ee
	IL_0248:                                                                        //ldc.i4				0x0
	IL_024d:            V_8=0;                                                      //stloc				V_8
	IL_0251:            /*goto IL_01cf;*/goto IL_0256;                              //br				IL_01cf
	IL_0256:            goto IL_02a9;                                               //leave.s				IL_02a9
	                    ;}
	                    finally{
	IL_0258:            goto IL_026f;                                               //br.s				IL_026f
	IL_025a:                                                                        //ldloc				V_8
	IL_025e:            switch(V_8){case 0:goto IL_0283;case 1:goto IL_0292;case 2:goto IL_02a6;};//switch				(IL_0283,IL_0292,IL_02a6)
	IL_026f:                                                                        //ldloc.s				V_6
	IL_0271:                                                                        //isinst				System::IDisposable
	IL_0276:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_0278:                                                                        //ldc.i4				0x0
	IL_027d:            V_8=0;                                                      //stloc				V_8
	IL_0281:            /*goto IL_025a;*/goto IL_0283;                              //br.s				IL_025a
	IL_0283:                                                                        //ldloc.s				V_7
	IL_0285:            if(V_7==nullptr)goto IL_02a8;                               //brfalse.s				IL_02a8
	IL_0287:                                                                        //ldc.i4				0x1
	IL_028c:            V_8=1;                                                      //stloc				V_8
	IL_0290:            /*goto IL_025a;*/goto IL_0292;                              //br.s				IL_025a
	IL_0292:            goto IL_0294;                                               //br.s				IL_0294
	IL_0294:                                                                        //ldloc.s				V_7
	IL_0296:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_029b:                                                                        //ldc.i4				0x2
	IL_02a0:            V_8=2;                                                      //stloc				V_8
	IL_02a4:            /*goto IL_025a;*/goto IL_02a6;                              //br.s				IL_025a
	IL_02a6:            goto IL_02a8;                                               //br.s				IL_02a8
	IL_02a8:                                                                        //endfinally
	                    ;}
	IL_02a9:                                                                        //ldarg.0
	IL_02aa:                                                                        //ldarg.1
	IL_02ab:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_02b0:            return;                                                     //ret

}
inline void Root::T_x41::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_3 = nullptr;
	Root::T_x123^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_6 = nullptr;
	Root::T_x114^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_2=11;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x5
	IL_000e:            V_1=5;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0062;                                               //br.s				IL_0062
	IL_0016:                                                                        //ldc.i4.5
	IL_0017:                                                                        //dup
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //ldc.i4.6
	IL_001a:                                                                        //sub
	IL_001b:                                                                        //blt				IL_0017
	IL_0020:                                                                        //pop
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_01d1;case 1:goto IL_0186;case 2:goto IL_013f;case 3:goto IL_00d5;case 4:goto IL_0206;case 5:goto IL_0014;case 6:goto IL_0196;case 7:goto IL_0167;case 8:goto IL_00f4;case 9:goto IL_01ac;case 10:goto IL_0225;case 11:goto IL_0120;case 12:goto IL_01f3;case 13:goto IL_00c2;};//switch				(IL_01d1,IL_0186,IL_013f,IL_00d5,IL_0206,IL_0014,IL_0196,IL_0167,IL_00f4,IL_01ac,IL_0225,IL_0120,IL_01f3,IL_00c2)
	IL_0062:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x7C3E\x2E40\x3342\x3C44"
	IL_0067:                                                                        //ldloc				V_2
	IL_006b:            Temp_12=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x7C3E\x2E40\x3342\x3C44",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0070:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0346\x2048\x384A\x2C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x3E5A\x2F5C"
	IL_0075:                                                                        //ldloc				V_2
	IL_0079:            Temp_13=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0346\x2048\x384A\x2C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x3E5A\x2F5C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007e:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x064A\x3E4C\x2B4E\x3F50"
	IL_0083:                                                                        //ldloc				V_2
	IL_0087:            Temp_14=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x064A\x3E4C\x2B4E\x3F50",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008c:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x0C4A\x224C\x204E\x3650\x3F52\x3054"
	IL_0091:                                                                        //ldloc				V_2
	IL_0095:            Temp_15=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x0C4A\x224C\x204E\x3650\x3F52\x3054",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009a:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0646\x2748\x2A4A\x214C\x364E\x2B50\x3652\x2754"
	IL_009f:                                                                        //ldloc				V_2
	IL_00a3:            Temp_16=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0646\x2748\x2A4A\x214C\x364E\x2B50\x3652\x2754",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a8:            goto IL_0188;                                               //leave				IL_0188
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_00b3:            return;                                                     //ret
	IL_00b4:                                                                        //ldc.i4				0xd
	IL_00b9:            V_1=13;                                                     //stloc				V_1
	IL_00bd:            /*goto IL_0016;*/goto IL_00c2;                              //br				IL_0016
	IL_00c2:            goto IL_022a;                                               //br				IL_022a
	IL_00c7:                                                                        //ldc.i4				0x3
	IL_00cc:            V_1=3;                                                      //stloc				V_1
	IL_00d0:            /*goto IL_0016;*/goto IL_00d5;                              //br				IL_0016
	IL_00d5:                                                                        //ldloc.0
	IL_00d6:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0346\x2048\x384A\x2C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x3E5A\x2F5C"
	IL_00db:                                                                        //ldloc				V_2
	IL_00df:            Temp_1=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0346\x2048\x384A\x2C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x3E5A\x2F5C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e4:            if(V_0==Temp_1)goto IL_00ad;                                //beq.s				IL_00ad
	IL_00e6:                                                                        //ldc.i4				0x8
	IL_00eb:            V_1=8;                                                      //stloc				V_1
	IL_00ef:            /*goto IL_0016;*/goto IL_00f4;                              //br				IL_0016
	IL_00f4:            goto IL_01f8;                                               //br				IL_01f8
	IL_00f9:                                                                        //ldarg.0
	IL_00fa:            Temp_6=this->M_x1();                                        //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_00ff:                                                                        //ldarg.0
	IL_0100:            Temp_7=gcnew Root::T_x114(safe_cast<System::Object^>(Temp_6),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x114::.ctor(System::Object^,System::IServiceProvider^)
	IL_0105:            Temp_7->M_x1();                                             //call				void Root::T_x114::M_x1()
	IL_010a:            return;                                                     //ret
	IL_010b:                                                                        //ldloc.0
	IL_010c:            Temp_8=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0111:            V_0=Temp_8;                                                 //stloc.0
	IL_0112:                                                                        //ldc.i4				0xb
	IL_0117:            V_1=11;                                                     //stloc				V_1
	IL_011b:            /*goto IL_0016;*/goto IL_0120;                              //br				IL_0016
	IL_0120:                                                                        //ldloc.0
	IL_0121:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x7C3E\x2E40\x3342\x3C44"
	IL_0126:                                                                        //ldloc				V_2
	IL_012a:            Temp_9=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x7C3E\x2E40\x3342\x3C44",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012f:            if(V_0==Temp_9)goto IL_0141;                                //beq.s				IL_0141
	IL_0131:                                                                        //ldc.i4				0x2
	IL_0136:            V_1=2;                                                      //stloc				V_1
	IL_013a:            /*goto IL_0016;*/goto IL_013f;                              //br				IL_0016
	IL_013f:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_0141:                                                                        //ldarg.0
	IL_0142:            Temp_10=this->M_x1();                                       //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_0147:            Temp_11=Temp_10->Name;                                      //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_014c:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_11));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0151:            return;                                                     //ret
	IL_0152:                                                                        //ldarg.0
	IL_0153:            this->M_x16();                                              //call				void Root::T_x10::M_x16()
	IL_0158:            return;                                                     //ret
	IL_0159:                                                                        //ldc.i4				0x7
	IL_015e:            V_1=7;                                                      //stloc				V_1
	IL_0162:            /*goto IL_0016;*/goto IL_0167;                              //br				IL_0016
	IL_0167:                                                                        //ldloc.0
	IL_0168:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x0C4A\x224C\x204E\x3650\x3F52\x3054"
	IL_016d:                                                                        //ldloc				V_2
	IL_0171:            Temp_5=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x0C4A\x224C\x204E\x3650\x3F52\x3054",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0176:            if(V_0==Temp_5)goto IL_00f9;                                //beq.s				IL_00f9
	IL_0178:                                                                        //ldc.i4				0x1
	IL_017d:            V_1=1;                                                      //stloc				V_1
	IL_0181:            /*goto IL_0016;*/goto IL_0186;                              //br				IL_0016
	IL_0186:            goto IL_01c3;                                               //br.s				IL_01c3
	IL_0188:                                                                        //ldc.i4				0x6
	IL_018d:            V_1=6;                                                      //stloc				V_1
	IL_0191:            /*goto IL_0016;*/goto IL_0196;                              //br				IL_0016
	IL_0196:                                                                        //ldarg.1
	IL_0197:                                                                        //dup
	IL_0198:            V_0=A_0;                                                    //stloc.0
	IL_0199:            if(V_0==nullptr)goto IL_022a;                               //brfalse				IL_022a
	IL_019e:                                                                        //ldc.i4				0x9
	IL_01a3:            V_1=9;                                                      //stloc				V_1
	IL_01a7:            /*goto IL_0016;*/goto IL_01ac;                              //br				IL_0016
	IL_01ac:            goto IL_010b;                                               //br				IL_010b
	IL_01b1:                                                                        //ldarg.0
	IL_01b2:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_01b7:                                                                        //ldarg.0
	IL_01b8:            Temp_4=gcnew Root::T_x123(safe_cast<System::Object^>(Temp_3),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x123::.ctor(System::Object^,System::IServiceProvider^)
	IL_01bd:            Temp_4->M_x1();                                             //call				void Root::T_x123::M_x1()
	IL_01c2:            return;                                                     //ret
	IL_01c3:                                                                        //ldc.i4				0x0
	IL_01c8:            V_1=0;                                                      //stloc				V_1
	IL_01cc:            /*goto IL_0016;*/goto IL_01d1;                              //br				IL_0016
	IL_01d1:                                                                        //ldloc.0
	IL_01d2:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0646\x2748\x2A4A\x214C\x364E\x2B50\x3652\x2754"
	IL_01d7:                                                                        //ldloc				V_2
	IL_01db:            Temp_0=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2940\x2C42\x3244\x0646\x2748\x2A4A\x214C\x364E\x2B50\x3652\x2754",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e0:            if(V_0==Temp_0)goto IL_0152;                                //beq				IL_0152
	IL_01e5:                                                                        //ldc.i4				0xc
	IL_01ea:            V_1=12;                                                     //stloc				V_1
	IL_01ee:            /*goto IL_0016;*/goto IL_01f3;                              //br				IL_0016
	IL_01f3:            goto IL_00b4;                                               //br				IL_00b4
	IL_01f8:                                                                        //ldc.i4				0x4
	IL_01fd:            V_1=4;                                                      //stloc				V_1
	IL_0201:            /*goto IL_0016;*/goto IL_0206;                              //br				IL_0016
	IL_0206:                                                                        //ldloc.0
	IL_0207:                                                                        //ldstr				L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x064A\x3E4C\x2B4E\x3F50"
	IL_020c:                                                                        //ldloc				V_2
	IL_0210:            Temp_2=a(L"\x6828\x482A\x592C\x462E\x4730\x5632\x7C34\x4336\x5C38\x563A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148\x064A\x3E4C\x2B4E\x3F50",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0215:            if(V_0==Temp_2)goto IL_01b1;                                //beq.s				IL_01b1
	IL_0217:                                                                        //ldc.i4				0xa
	IL_021c:            V_1=10;                                                     //stloc				V_1
	IL_0220:            /*goto IL_0016;*/goto IL_0225;                              //br				IL_0016
	IL_0225:            goto IL_0159;                                               //br				IL_0159
	IL_022a:                                                                        //ldarg.0
	IL_022b:                                                                        //ldarg.1
	IL_022c:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_0231:            return;                                                     //ret

}
inline System::Boolean Root::T_x41::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_3 = nullptr;
	Root::T_x123^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_2=5;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x9
	IL_000e:            V_1=9;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0057;                                               //br.s				IL_0057
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0130;case 1:goto IL_0146;case 2:goto IL_0156;case 3:goto IL_00c6;case 4:goto IL_00fc;case 5:goto IL_011b;case 6:goto IL_01cf;case 7:goto IL_019a;case 8:goto IL_00e5;case 9:goto IL_0014;case 10:goto IL_01f1;case 11:goto IL_01bc;case 12:goto IL_0175;case 13:goto IL_00b3;};//switch				(IL_0130,IL_0146,IL_0156,IL_00c6,IL_00fc,IL_011b,IL_01cf,IL_019a,IL_00e5,IL_0014,IL_01f1,IL_01bc,IL_0175,IL_00b3)
	IL_0057:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E"
	IL_005c:                                                                        //ldloc				V_2
	IL_0060:            Temp_10=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0065:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0540\x2A42\x3644\x2646\x3A48\x384A\x284C\x224E\x3350\x3F52\x3054\x2556"
	IL_006a:                                                                        //ldloc				V_2
	IL_006e:            Temp_11=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0540\x2A42\x3644\x2646\x3A48\x384A\x284C\x224E\x3350\x3F52\x3054\x2556",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0073:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0244\x2846\x2648\x2C4A\x214C\x2A4E"
	IL_0078:                                                                        //ldloc				V_2
	IL_007c:            Temp_12=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0244\x2846\x2648\x2C4A\x214C\x2A4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0081:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0040\x2D42\x2444\x2B46\x3048\x314A\x284C\x3D4E"
	IL_0086:                                                                        //ldloc				V_2
	IL_008a:            Temp_13=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0040\x2D42\x2444\x2B46\x3048\x314A\x284C\x3D4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008f:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0844\x3446\x2D48\x254A"
	IL_0094:                                                                        //ldloc				V_2
	IL_0098:            Temp_14=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0844\x3446\x2D48\x254A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009d:            goto IL_0122;                                               //leave				IL_0122
	IL_00a2:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_00a4:                                                                        //break
	IL_00a5:                                                                        //ldc.i4				0xd
	IL_00aa:            V_1=13;                                                     //stloc				V_1
	IL_00ae:            /*goto IL_0016;*/goto IL_00b3;                              //br				IL_0016
	IL_00b3:            goto IL_01f3;                                               //br				IL_01f3
	IL_00b8:                                                                        //ldc.i4				0x3
	IL_00bd:            V_1=3;                                                      //stloc				V_1
	IL_00c1:            /*goto IL_0016;*/goto IL_00c6;                              //br				IL_0016
	IL_00c6:                                                                        //ldloc.0
	IL_00c7:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0040\x2D42\x2444\x2B46\x3048\x314A\x284C\x3D4E"
	IL_00cc:                                                                        //ldloc				V_2
	IL_00d0:            Temp_6=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0040\x2D42\x2444\x2B46\x3048\x314A\x284C\x3D4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d5:            if(V_0==Temp_6)goto IL_0120;                                //beq.s				IL_0120
	IL_00d7:                                                                        //ldc.i4				0x8
	IL_00dc:            V_1=8;                                                      //stloc				V_1
	IL_00e0:            /*goto IL_0016;*/goto IL_00e5;                              //br				IL_0016
	IL_00e5:            goto IL_0148;                                               //br.s				IL_0148
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:            Temp_1=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00ed:            V_0=Temp_1;                                                 //stloc.0
	IL_00ee:                                                                        //ldc.i4				0x4
	IL_00f3:            V_1=4;                                                      //stloc				V_1
	IL_00f7:            /*goto IL_0016;*/goto IL_00fc;                              //br				IL_0016
	IL_00fc:                                                                        //ldloc.0
	IL_00fd:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E"
	IL_0102:                                                                        //ldloc				V_2
	IL_0106:            Temp_7=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010b:            if(V_0==Temp_7)goto IL_0120;                                //beq.s				IL_0120
	IL_010d:                                                                        //ldc.i4				0x5
	IL_0112:            V_1=5;                                                      //stloc				V_1
	IL_0116:            /*goto IL_0016;*/goto IL_011b;                              //br				IL_0016
	IL_011b:            goto IL_01c1;                                               //br				IL_01c1
	IL_0120:                                                                        //ldc.i4.1
	IL_0121:            return true;                                                //ret
	IL_0122:                                                                        //ldc.i4				0x0
	IL_0127:            V_1=0;                                                      //stloc				V_1
	IL_012b:            /*goto IL_0016;*/goto IL_0130;                              //br				IL_0016
	IL_0130:                                                                        //ldarg.1
	IL_0131:                                                                        //dup
	IL_0132:            V_0=A_0;                                                    //stloc.0
	IL_0133:            if(V_0==nullptr)goto IL_01f3;                               //brfalse				IL_01f3
	IL_0138:                                                                        //ldc.i4				0x1
	IL_013d:            V_1=1;                                                      //stloc				V_1
	IL_0141:            /*goto IL_0016;*/goto IL_0146;                              //br				IL_0016
	IL_0146:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_0148:                                                                        //ldc.i4				0x2
	IL_014d:            V_1=2;                                                      //stloc				V_1
	IL_0151:            /*goto IL_0016;*/goto IL_0156;                              //br				IL_0016
	IL_0156:                                                                        //ldloc.0
	IL_0157:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0844\x3446\x2D48\x254A"
	IL_015c:                                                                        //ldloc				V_2
	IL_0160:            Temp_2=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0844\x3446\x2D48\x254A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0165:            if(V_0==Temp_2)goto IL_017a;                                //beq.s				IL_017a
	IL_0167:                                                                        //ldc.i4				0xc
	IL_016c:            V_1=12;                                                     //stloc				V_1
	IL_0170:            /*goto IL_0016;*/goto IL_0175;                              //br				IL_0016
	IL_0175:            goto IL_00a2;                                               //br				IL_00a2
	IL_017a:                                                                        //ldarg.0
	IL_017b:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_0180:                                                                        //ldarg.0
	IL_0181:            Temp_4=gcnew Root::T_x123(safe_cast<System::Object^>(Temp_3),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x123::.ctor(System::Object^,System::IServiceProvider^)
	IL_0186:            Temp_5=Temp_4->M_x2();                                      //call				System::Boolean Root::T_x123::M_x2()
	IL_018b:            return Temp_5;                                              //ret
	IL_018c:                                                                        //ldc.i4				0x7
	IL_0191:            V_1=7;                                                      //stloc				V_1
	IL_0195:            /*goto IL_0016;*/goto IL_019a;                              //br				IL_0016
	IL_019a:                                                                        //ldloc.0
	IL_019b:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0244\x2846\x2648\x2C4A\x214C\x2A4E"
	IL_01a0:                                                                        //ldloc				V_2
	IL_01a4:            Temp_9=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x5E3A\x5C3C\x4D3E\x2240\x2B42\x0244\x2846\x2648\x2C4A\x214C\x2A4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a9:            if(V_0==Temp_9)goto IL_0120;                                //beq				IL_0120
	IL_01ae:                                                                        //ldc.i4				0xb
	IL_01b3:            V_1=11;                                                     //stloc				V_1
	IL_01b7:            /*goto IL_0016;*/goto IL_01bc;                              //br				IL_0016
	IL_01bc:            goto IL_00b8;                                               //br				IL_00b8
	IL_01c1:                                                                        //ldc.i4				0x6
	IL_01c6:            V_1=6;                                                      //stloc				V_1
	IL_01ca:            /*goto IL_0016;*/goto IL_01cf;                              //br				IL_0016
	IL_01cf:                                                                        //ldloc.0
	IL_01d0:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0540\x2A42\x3644\x2646\x3A48\x384A\x284C\x224E\x3350\x3F52\x3054\x2556"
	IL_01d5:                                                                        //ldloc				V_2
	IL_01d9:            Temp_8=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x6A38\x533A\x523C\x483E\x0540\x2A42\x3644\x2646\x3A48\x384A\x284C\x224E\x3350\x3F52\x3054\x2556",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01de:            if(V_0==Temp_8)goto IL_0120;                                //beq				IL_0120
	IL_01e3:                                                                        //ldc.i4				0xa
	IL_01e8:            V_1=10;                                                     //stloc				V_1
	IL_01ec:            /*goto IL_0016;*/goto IL_01f1;                              //br				IL_0016
	IL_01f1:            goto IL_018c;                                               //br.s				IL_018c
	IL_01f3:                                                                        //ldarg.0
	IL_01f4:                                                                        //ldarg.1
	IL_01f5:            Temp_0=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_01fa:            return Temp_0;                                              //ret

}
