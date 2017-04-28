#include "global_xref.h"

inline Root::T_x32::T_x32()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x31();*/                                          //call				void Root::T_x31::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMemberDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x5();                                        //call				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IEventDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::IEventDeclaration^>(Temp_0);//ret

}
inline void Root::T_x32::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Drawing::Color Temp_3;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            this->M_x2(safe_cast<Reflector::CodeModel::IMemberDeclaration^>(A_0));//call				void Root::T_x31::M_x2(Reflector::CodeModel::IMemberDeclaration^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=Root::T_x115::M_x9(safe_cast<Reflector::CodeModel::IEventReference^>(A_0));//call				System::String^ Root::T_x115::M_x9(Reflector::CodeModel::IEventReference^)
	IL_0011:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_001e:                                                                        //dup
	IL_001f:            V_0=Temp_1;                                                 //stloc.0
	IL_0020:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0025:                                                                        //ldloc.0
	IL_0026:            this->SelectedImageIndex=V_0;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldarg.1
	IL_002d:            Temp_2=Root::T_x116::M_x2(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::IMemberReference^)
	IL_0032:            Temp_3=System::Drawing::Color::FromArgb(Temp_2);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0037:            this->ForeColor=Temp_3;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_003c:                                                                        //ldarg.0
	IL_003d:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0042:            return;                                                     //ret

}
inline void Root::T_x32::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_3 = nullptr;
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
	IL_002a:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_002f:            V_0->WriteEventDeclaration(Temp_3);                         //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteEventDeclaration(Reflector::CodeModel::IEventDeclaration^)
	IL_0034:            return;                                                     //ret

}
inline Root::T_x31^ Root::T_x32::M_x1(Reflector::CodeModel::IMemberDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	Root::T_x31^ V_1 = nullptr;
	Root::T_x31^ V_2 = nullptr;
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
	IL_0019:                                                                        //ldc.i4				0x4
	IL_001e:            V_5=4;                                                      //stloc				V_5
	IL_0022:            /*goto IL_0026;*/goto IL_0024;                              //br.s				IL_0026
	IL_0024:            goto IL_0053;                                               //br.s				IL_0053
	IL_0026:                                                                        //ldloc				V_5
	IL_002a:            switch(V_5){case 0:goto IL_00a1;case 1:goto IL_00b3;case 2:goto IL_00c6;case 3:goto IL_00ed;case 4:goto IL_0024;case 5:goto IL_0093;case 6:goto IL_0060;case 7:goto IL_0073;case 8:goto IL_00dd;};//switch				(IL_00a1,IL_00b3,IL_00c6,IL_00ed,IL_0024,IL_0093,IL_0060,IL_0073,IL_00dd)
	IL_0053:            goto IL_0055;                                               //br.s				IL_0055
	IL_0055:                                                                        //ldc.i4				0x6
	IL_005a:            V_5=6;                                                      //stloc				V_5
	IL_005e:            /*goto IL_0026;*/goto IL_0060;                              //br.s				IL_0026
	IL_0060:                                                                        //ldloc.3
	IL_0061:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0066:            if(Temp_3)goto IL_0075;                                     //brtrue.s				IL_0075
	IL_0068:                                                                        //ldc.i4				0x7
	IL_006d:            V_5=7;                                                      //stloc				V_5
	IL_0071:            /*goto IL_0026;*/goto IL_0073;                              //br.s				IL_0026
	IL_0073:            goto IL_00df;                                               //br.s				IL_00df
	IL_0075:                                                                        //ldloc.3
	IL_0076:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_007b:                                                                        //castclass				Root::T_x10
	IL_0080:            V_0=safe_cast<Root::T_x10^>(Temp_4);                        //stloc.0
	IL_0081:                                                                        //ldloc.0
	IL_0082:                                                                        //isinst				Root::T_x31
	IL_0087:            V_1=dynamic_cast<Root::T_x31^>(V_0);                        //stloc.1
	IL_0088:                                                                        //ldc.i4				0x5
	IL_008d:            V_5=5;                                                      //stloc				V_5
	IL_0091:            /*goto IL_0026;*/goto IL_0093;                              //br.s				IL_0026
	IL_0093:                                                                        //ldloc.1
	IL_0094:            if(V_1==nullptr)goto IL_0055;                               //brfalse.s				IL_0055
	IL_0096:                                                                        //ldc.i4				0x0
	IL_009b:            V_5=0;                                                      //stloc				V_5
	IL_009f:            /*goto IL_0026;*/goto IL_00a1;                              //br.s				IL_0026
	IL_00a1:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_00a3:                                                                        //ldloc.1
	IL_00a4:            V_2=V_1;                                                    //stloc.2
	IL_00a5:                                                                        //ldc.i4				0x1
	IL_00aa:            V_5=1;                                                      //stloc				V_5
	IL_00ae:            /*goto IL_0026;*/goto IL_00b3;                              //br				IL_0026
	IL_00b3:            goto IL_0142;                                               //leave				IL_0142
	IL_00b8:                                                                        //ldc.i4				0x2
	IL_00bd:            V_5=2;                                                      //stloc				V_5
	IL_00c1:            /*goto IL_0026;*/goto IL_00c6;                              //br				IL_0026
	IL_00c6:                                                                        //ldarg.1
	IL_00c7:                                                                        //ldloc.1
	IL_00c8:            Temp_2=V_1->M_x5();                                         //callvirt				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_00cd:            if(A_0!=Temp_2)goto IL_0055;                                //bne.un.s				IL_0055
	IL_00cf:                                                                        //ldc.i4				0x8
	IL_00d4:            V_5=8;                                                      //stloc				V_5
	IL_00d8:            /*goto IL_0026;*/goto IL_00dd;                              //br				IL_0026
	IL_00dd:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_00df:                                                                        //ldc.i4				0x3
	IL_00e4:            V_5=3;                                                      //stloc				V_5
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
inline void Root::T_x32::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	Root::T_x10^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IEventDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_4 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_8 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_00be;case 1:goto IL_0093;case 2:goto IL_0078;case 3:goto IL_00a3;case 4:goto IL_004a;case 5:goto IL_000b;case 6:goto IL_006b;};//switch				(IL_00be,IL_0093,IL_0078,IL_00a3,IL_004a,IL_000b,IL_006b)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_7=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_0038:            Temp_8=Temp_7->AddMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_003d:            if(Temp_8!=nullptr)goto IL_004f;                            //brtrue.s				IL_004f
	IL_003f:                                                                        //ldc.i4				0x4
	IL_0044:            V_0=4;                                                      //stloc				V_0
	IL_0048:            /*goto IL_000d;*/goto IL_004a;                              //br.s				IL_000d
	IL_004a:            goto IL_004d;                                               //br.s				IL_004d
	IL_004c:                                                                        //break
	IL_004d:            goto IL_0095;                                               //br.s				IL_0095
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0055:            Temp_1=gcnew Root::T_x10();                                 //newobj				void Root::T_x10::.ctor()
	IL_005a:            Temp_2=Temp_0->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_005f:                                                                        //pop
	IL_0060:                                                                        //ldc.i4				0x6
	IL_0065:            V_0=6;                                                      //stloc				V_0
	IL_0069:            /*goto IL_000d;*/goto IL_006b;                              //br.s				IL_000d
	IL_006b:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_006d:                                                                        //ldc.i4				0x2
	IL_0072:            V_0=2;                                                      //stloc				V_0
	IL_0076:            /*goto IL_000d;*/goto IL_0078;                              //br.s				IL_000d
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_007e:            Temp_4=Temp_3->RemoveMethod;                                //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_0083:            if(Temp_4==nullptr)goto IL_00c0;                            //brfalse.s				IL_00c0
	IL_0085:                                                                        //ldc.i4				0x1
	IL_008a:            V_0=1;                                                      //stloc				V_0
	IL_008e:            /*goto IL_000d;*/goto IL_0093;                              //br				IL_000d
	IL_0093:            goto IL_004f;                                               //br.s				IL_004f
	IL_0095:                                                                        //ldc.i4				0x3
	IL_009a:            V_0=3;                                                      //stloc				V_0
	IL_009e:            /*goto IL_000d;*/goto IL_00a3;                              //br				IL_000d
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:            Temp_5=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_00a9:            Temp_6=Temp_5->InvokeMethod;                                //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_00ae:            if(Temp_6!=nullptr)goto IL_004f;                            //brtrue.s				IL_004f
	IL_00b0:                                                                        //ldc.i4				0x0
	IL_00b5:            V_0=0;                                                      //stloc				V_0
	IL_00b9:            /*goto IL_000d;*/goto IL_00be;                              //br				IL_000d
	IL_00be:            goto IL_006d;                                               //br.s				IL_006d
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:                                                                        //ldarg.1
	IL_00c2:            Root::T_x10::M_x1(A_0);                                     //call				void Root::T_x10::M_x1(System::EventArgs^)
	IL_00c7:            return;                                                     //ret

}
inline System::String^ Root::T_x32::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_0=15;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6F2C\x5D2E\x5E30\x4432\x4634\x5236\x4B38\x153A\x783C\x493E\x2440\x2D42\x3144\x0346\x2C48\x284A\x214C\x2E4E\x2350\x3252\x2154\x3E56\x3658\x355A"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6F2C\x5D2E\x5E30\x4432\x4634\x5236\x4B38\x153A\x783C\x493E\x2440\x2D42\x3144\x0346\x2C48\x284A\x214C\x2E4E\x2350\x3252\x2154\x3E56\x3658\x355A",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x32::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x32::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x37^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IEventDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	Root::T_x37^ Temp_5 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Reflector::CodeModel::IEventDeclaration^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_9 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_11 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_12 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_13 = nullptr;
	Root::T_x37^ Temp_14 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	Reflector::CodeModel::IEventDeclaration^ Temp_17 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_18 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_19 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_20 = nullptr;
	//local variables.
	Root::T_x37^ V_0 = nullptr;
	Root::T_x37^ V_1 = nullptr;
	Root::T_x37^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_3=8;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003a;                                               //br.s				IL_003a
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_00b1;case 1:goto IL_0055;case 2:goto IL_0119;case 3:goto IL_007d;case 4:goto IL_00e5;case 5:goto IL_012c;case 6:goto IL_0062;case 7:goto IL_014a;case 8:goto IL_000b;};//switch				(IL_00b1,IL_0055,IL_0119,IL_007d,IL_00e5,IL_012c,IL_0062,IL_014a,IL_000b)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_19=this->M_x1();                                       //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_0040:            Temp_20=Root::T_x115::M_x8(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_19));//call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x8(Reflector::CodeModel::IEventReference^)
	IL_0045:            if(Temp_20==nullptr)goto IL_011b;                           //brfalse				IL_011b
	IL_004a:                                                                        //ldc.i4				0x1
	IL_004f:            V_3=1;                                                      //stloc				V_3
	IL_0053:            /*goto IL_000d;*/goto IL_0055;                              //br.s				IL_000d
	IL_0055:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_0057:                                                                        //ldc.i4				0x6
	IL_005c:            V_3=6;                                                      //stloc				V_3
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_12=this->M_x1();                                       //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_0068:            Temp_13=Root::T_x115::M_x12(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_12));//call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x12(Reflector::CodeModel::IEventReference^)
	IL_006d:            if(Temp_13==nullptr)goto IL_014f;                           //brfalse				IL_014f
	IL_0072:                                                                        //ldc.i4				0x3
	IL_0077:            V_3=3;                                                      //stloc				V_3
	IL_007b:            /*goto IL_000d;*/goto IL_007d;                              //br.s				IL_000d
	IL_007d:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_007f:            Temp_14=gcnew Root::T_x37();                                //newobj				void Root::T_x37::.ctor()
	IL_0084:            V_1=Temp_14;                                                //stloc.1
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_15=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_008b:                                                                        //ldloc.1
	IL_008c:            Temp_16=Temp_15->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0091:                                                                        //pop
	IL_0092:                                                                        //ldloc.1
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_17=this->M_x1();                                       //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_0099:            Temp_18=Root::T_x115::M_x13(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_17));//call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x13(Reflector::CodeModel::IEventReference^)
	IL_009e:            V_1->M_x1(Temp_18);                                         //callvirt				void Root::T_x37::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00a3:                                                                        //ldc.i4				0x0
	IL_00a8:            V_3=0;                                                      //stloc				V_3
	IL_00ac:            /*goto IL_000d;*/goto IL_00b1;                              //br				IL_000d
	IL_00b1:            goto IL_0057;                                               //br.s				IL_0057
	IL_00b3:            Temp_0=gcnew Root::T_x37();                                 //newobj				void Root::T_x37::.ctor()
	IL_00b8:            V_0=Temp_0;                                                 //stloc.0
	IL_00b9:                                                                        //ldarg.0
	IL_00ba:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00bf:                                                                        //ldloc.0
	IL_00c0:            Temp_2=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_0));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00c5:                                                                        //pop
	IL_00c6:                                                                        //ldloc.0
	IL_00c7:                                                                        //ldarg.0
	IL_00c8:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_00cd:            Temp_4=Root::T_x115::M_x8(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_3));//call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x8(Reflector::CodeModel::IEventReference^)
	IL_00d2:            V_0->M_x1(Temp_4);                                          //callvirt				void Root::T_x37::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00d7:                                                                        //ldc.i4				0x4
	IL_00dc:            V_3=4;                                                      //stloc				V_3
	IL_00e0:            /*goto IL_000d;*/goto IL_00e5;                              //br				IL_000d
	IL_00e5:            goto IL_011b;                                               //br.s				IL_011b
	IL_00e7:            Temp_5=gcnew Root::T_x37();                                 //newobj				void Root::T_x37::.ctor()
	IL_00ec:            V_2=Temp_5;                                                 //stloc.2
	IL_00ed:                                                                        //ldarg.0
	IL_00ee:            Temp_6=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00f3:                                                                        //ldloc.2
	IL_00f4:            Temp_7=Temp_6->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00f9:                                                                        //pop
	IL_00fa:                                                                        //ldloc.2
	IL_00fb:                                                                        //ldarg.0
	IL_00fc:            Temp_8=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_0101:            Temp_9=Root::T_x115::M_x12(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_8));//call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x12(Reflector::CodeModel::IEventReference^)
	IL_0106:            V_2->M_x1(Temp_9);                                          //callvirt				void Root::T_x37::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_010b:                                                                        //ldc.i4				0x2
	IL_0110:            V_3=2;                                                      //stloc				V_3
	IL_0114:            /*goto IL_000d;*/goto IL_0119;                              //br				IL_000d
	IL_0119:            goto IL_014f;                                               //br.s				IL_014f
	IL_011b:            goto IL_011e;                                               //br.s				IL_011e
	IL_011d:                                                                        //break
	IL_011e:                                                                        //ldc.i4				0x5
	IL_0123:            V_3=5;                                                      //stloc				V_3
	IL_0127:            /*goto IL_000d;*/goto IL_012c;                              //br				IL_000d
	IL_012c:                                                                        //ldarg.0
	IL_012d:            Temp_10=this->M_x1();                                       //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_0132:            Temp_11=Root::T_x115::M_x13(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_10));//call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x13(Reflector::CodeModel::IEventReference^)
	IL_0137:            if(Temp_11==nullptr)goto IL_0057;                           //brfalse				IL_0057
	IL_013c:                                                                        //ldc.i4				0x7
	IL_0141:            V_3=7;                                                      //stloc				V_3
	IL_0145:            /*goto IL_000d;*/goto IL_014a;                              //br				IL_000d
	IL_014a:            goto IL_007f;                                               //br				IL_007f
	IL_014f:                                                                        //ldarg.0
	IL_0150:                                                                        //ldarg.1
	IL_0151:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_0156:            return;                                                     //ret

}
inline void Root::T_x32::M_x5(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Type^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	//local variables.
	Reflector::IAssemblyBrowser^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x7
	IL_000e:            V_2=7;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //add
	IL_0019:                                                                        //bgt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_004a;                                               //br.s				IL_004a
	IL_0021:                                                                        //ldloc				V_2
	IL_0025:            switch(V_2){case 0:goto IL_012a;case 1:goto IL_0108;case 2:goto IL_013d;case 3:goto IL_00c9;case 4:goto IL_0084;case 5:goto IL_00a0;case 6:goto IL_00b3;case 7:goto IL_0014;};//switch				(IL_012a,IL_0108,IL_013d,IL_00c9,IL_0084,IL_00a0,IL_00b3,IL_0014)
	IL_004a:                                                                        //ldstr				L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x783A\x523C\x4F3E\x3840"
	IL_004f:                                                                        //ldloc				V_3
	IL_0053:            Temp_9=a(L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x783A\x523C\x4F3E\x3840",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:                                                                        //ldstr				L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x7C3A\x523C\x6B3E\x2E40\x0642\x3344\x2246\x2748\x3F4A\x194C\x364E\x2150\x3652"
	IL_005d:                                                                        //ldloc				V_3
	IL_0061:            Temp_10=a(L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x7C3A\x523C\x6B3E\x2E40\x0642\x3344\x2246\x2748\x3F4A\x194C\x364E\x2150\x3652",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0066:            goto IL_00a5;                                               //leave.s				IL_00a5
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_1=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_006e:            Temp_2=Root::T_x115::M_x5(safe_cast<Reflector::CodeModel::IEventReference^>(Temp_1));//call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::IEventReference^)
	IL_0073:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_2));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0078:            return;                                                     //ret
	IL_0079:                                                                        //ldc.i4				0x4
	IL_007e:            V_2=4;                                                      //stloc				V_2
	IL_0082:            /*goto IL_0021;*/goto IL_0084;                              //br.s				IL_0021
	IL_0084:                                                                        //ldloc.1
	IL_0085:                                                                        //ldstr				L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x7C3A\x523C\x6B3E\x2E40\x0642\x3344\x2246\x2748\x3F4A\x194C\x364E\x2150\x3652"
	IL_008a:                                                                        //ldloc				V_3
	IL_008e:            Temp_4=a(L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x7C3A\x523C\x6B3E\x2E40\x0642\x3344\x2246\x2748\x3F4A\x194C\x364E\x2150\x3652",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0093:            if(V_1==Temp_4)goto IL_00cb;                                //beq.s				IL_00cb
	IL_0095:                                                                        //ldc.i4				0x5
	IL_009a:            V_2=5;                                                      //stloc				V_2
	IL_009e:            /*goto IL_0021;*/goto IL_00a0;                              //br.s				IL_0021
	IL_00a0:            goto IL_012f;                                               //br				IL_012f
	IL_00a5:                                                                        //ldc.i4				0x6
	IL_00aa:            V_2=6;                                                      //stloc				V_2
	IL_00ae:            /*goto IL_0021;*/goto IL_00b3;                              //br				IL_0021
	IL_00b3:                                                                        //ldarg.1
	IL_00b4:                                                                        //dup
	IL_00b5:            V_1=A_0;                                                    //stloc.1
	IL_00b6:            if(V_1==nullptr)goto IL_013f;                               //brfalse				IL_013f
	IL_00bb:                                                                        //ldc.i4				0x3
	IL_00c0:            V_2=3;                                                      //stloc				V_2
	IL_00c4:            /*goto IL_0021;*/goto IL_00c9;                              //br				IL_0021
	IL_00c9:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00cb:                                                                        //ldarg.0
	IL_00cc:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_00d1:            Temp_5=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00d6:            Temp_6=this->M_x1(Temp_5);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_00db:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_00e0:            V_0=safe_cast<Reflector::IAssemblyBrowser^>(Temp_6);        //stloc.0
	IL_00e1:                                                                        //ldloc.0
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:            Temp_7=this->M_x1();                                        //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x32::M_x1()
	IL_00e8:            Temp_8=safe_cast<Reflector::CodeModel::IEventReference^>(Temp_7)->EventType;//callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_00ed:            V_0->ActiveItem=safe_cast<System::Object^>(Temp_8);         //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_00f2:            return;                                                     //ret
	IL_00f3:                                                                        //ldloc.1
	IL_00f4:            Temp_3=System::String::IsInterned(V_1);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00f9:            V_1=Temp_3;                                                 //stloc.1
	IL_00fa:                                                                        //ldc.i4				0x1
	IL_00ff:            V_2=1;                                                      //stloc				V_2
	IL_0103:            /*goto IL_0021;*/goto IL_0108;                              //br				IL_0021
	IL_0108:                                                                        //ldloc.1
	IL_0109:                                                                        //ldstr				L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x783A\x523C\x4F3E\x3840"
	IL_010e:                                                                        //ldloc				V_3
	IL_0112:            Temp_0=a(L"\x6424\x4426\x5D28\x422A\x5B2C\x4A2E\x7830\x4732\x5034\x5A36\x1738\x783A\x523C\x4F3E\x3840",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0117:            if(V_1==Temp_0)goto IL_0068;                                //beq				IL_0068
	IL_011c:                                                                        //ldc.i4				0x0
	IL_0121:            V_2=0;                                                      //stloc				V_2
	IL_0125:            /*goto IL_0021;*/goto IL_012a;                              //br				IL_0021
	IL_012a:            goto IL_0079;                                               //br				IL_0079
	IL_012f:                                                                        //ldc.i4				0x2
	IL_0134:            V_2=2;                                                      //stloc				V_2
	IL_0138:            /*goto IL_0021;*/goto IL_013d;                              //br				IL_0021
	IL_013d:            goto IL_013f;                                               //br.s				IL_013f
	IL_013f:                                                                        //ldarg.0
	IL_0140:                                                                        //ldarg.1
	IL_0141:            Root::T_x31::M_x5(A_0);                                     //call				void Root::T_x31::M_x5(System::String^)
	IL_0146:            return;                                                     //ret

}
inline System::Boolean Root::T_x32::M_x9(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_2=18;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //sub
	IL_0019:                                                                        //blt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_0046;                                               //br.s				IL_0046
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_00be;case 1:goto IL_006f;case 2:goto IL_00ce;case 3:goto IL_0014;case 4:goto IL_00e1;case 5:goto IL_009f;case 6:goto IL_008b;};//switch				(IL_00be,IL_006f,IL_00ce,IL_0014,IL_00e1,IL_009f,IL_008b)
	IL_0046:                                                                        //ldstr				L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B"
	IL_004b:                                                                        //ldloc				V_2
	IL_004f:            Temp_4=a(L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0054:                                                                        //ldstr				L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0145\x2747\x1E49\x234B\x0B4D\x264F\x3751\x3A53\x2255\x0C57\x2359\x2C5B\x3B5D"
	IL_0059:                                                                        //ldloc				V_2
	IL_005d:            Temp_5=a(L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0145\x2747\x1E49\x234B\x0B4D\x264F\x3751\x3A53\x2255\x0C57\x2359\x2C5B\x3B5D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0062:            goto IL_00c0;                                               //leave.s				IL_00c0
	IL_0064:                                                                        //ldc.i4				0x1
	IL_0069:            V_1=1;                                                      //stloc				V_1
	IL_006d:            /*goto IL_0021;*/goto IL_006f;                              //br.s				IL_0021
	IL_006f:                                                                        //ldloc.0
	IL_0070:                                                                        //ldstr				L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0145\x2747\x1E49\x234B\x0B4D\x264F\x3751\x3A53\x2255\x0C57\x2359\x2C5B\x3B5D"
	IL_0075:                                                                        //ldloc				V_2
	IL_0079:            Temp_0=a(L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0145\x2747\x1E49\x234B\x0B4D\x264F\x3751\x3A53\x2255\x0C57\x2359\x2C5B\x3B5D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007e:            if(V_0!=Temp_0)goto IL_00e5;                                //bne.un.s				IL_00e5
	IL_0080:                                                                        //ldc.i4				0x6
	IL_0085:            V_1=6;                                                      //stloc				V_1
	IL_0089:            /*goto IL_0021;*/goto IL_008b;                              //br.s				IL_0021
	IL_008b:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_008d:                                                                        //ldloc.0
	IL_008e:            Temp_2=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0093:            V_0=Temp_2;                                                 //stloc.0
	IL_0094:                                                                        //ldc.i4				0x5
	IL_0099:            V_1=5;                                                      //stloc				V_1
	IL_009d:            /*goto IL_0021;*/goto IL_009f;                              //br.s				IL_0021
	IL_009f:                                                                        //ldloc.0
	IL_00a0:                                                                        //ldstr				L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B"
	IL_00a5:                                                                        //ldloc				V_2
	IL_00a9:            Temp_3=a(L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ae:            if(V_0==Temp_3)goto IL_00e3;                                //beq.s				IL_00e3
	IL_00b0:                                                                        //ldc.i4				0x0
	IL_00b5:            V_1=0;                                                      //stloc				V_1
	IL_00b9:            /*goto IL_0021;*/goto IL_00be;                              //br				IL_0021
	IL_00be:            goto IL_0064;                                               //br.s				IL_0064
	IL_00c0:                                                                        //ldc.i4				0x2
	IL_00c5:            V_1=2;                                                      //stloc				V_1
	IL_00c9:            /*goto IL_0021;*/goto IL_00ce;                              //br				IL_0021
	IL_00ce:                                                                        //ldarg.1
	IL_00cf:                                                                        //dup
	IL_00d0:            V_0=A_0;                                                    //stloc.0
	IL_00d1:            if(V_0==nullptr)goto IL_00e5;                               //brfalse.s				IL_00e5
	IL_00d3:                                                                        //ldc.i4				0x4
	IL_00d8:            V_1=4;                                                      //stloc				V_1
	IL_00dc:            /*goto IL_0021;*/goto IL_00e1;                              //br				IL_0021
	IL_00e1:            goto IL_008d;                                               //br.s				IL_008d
	IL_00e3:                                                                        //ldc.i4.1
	IL_00e4:            return true;                                                //ret
	IL_00e5:                                                                        //ldarg.0
	IL_00e6:                                                                        //ldarg.1
	IL_00e7:            Temp_1=Root::T_x31::M_x9(A_0);                              //call				System::Boolean Root::T_x31::M_x9(System::String^)
	IL_00ec:            return Temp_1;                                              //ret

}
