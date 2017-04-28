#include "global_xref.h"

inline Root::T_x28::T_x28()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x28::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x14();                                              //call				void Root::T_x10::M_x14()
	IL_0006:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000b:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0010:            V_0=Temp_1;                                                 //stloc.0
	IL_0011:            /*goto IL_0013;*/goto IL_001101;                            //br.s				IL_0013
	IL_001101:          try{
	IL_0013:            goto IL_0016;                                               //br.s				IL_0016
	IL_0015:                                                                        //break
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldloc.0
	IL_0018:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_001d:                                                                        //ldarg.0
	IL_001e:            Temp_3=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0023:            this->M_x1(V_0,Temp_2,Temp_3);                              //call				void Root::T_x28::M_x1(System::IO::StringWriter^,System::String^,System::Windows::Forms::TreeNodeCollection^)
	IL_0028:                                                                        //ldloc.0
	IL_0029:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_002e:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_4));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0033:            goto IL_007b;                                               //leave.s				IL_007b
	                    ;}
	                    finally{
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_1=1;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0042;*/goto IL_0040;                              //br.s				IL_0042
	IL_0040:            goto IL_0057;                                               //br.s				IL_0057
	IL_0042:                                                                        //ldloc				V_1
	IL_0046:            switch(V_1){case 0:goto IL_0065;case 1:goto IL_0040;case 2:goto IL_0078;};//switch				(IL_0065,IL_0040,IL_0078)
	IL_0057:                                                                        //ldloc.0
	IL_0058:            if(V_0==nullptr)goto IL_007a;                               //brfalse.s				IL_007a
	IL_005a:                                                                        //ldc.i4				0x0
	IL_005f:            V_1=0;                                                      //stloc				V_1
	IL_0063:            /*goto IL_0042;*/goto IL_0065;                              //br.s				IL_0042
	IL_0065:            goto IL_0067;                                               //br.s				IL_0067
	IL_0067:                                                                        //ldloc.0
	IL_0068:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_006d:                                                                        //ldc.i4				0x2
	IL_0072:            V_1=2;                                                      //stloc				V_1
	IL_0076:            /*goto IL_0042;*/goto IL_0078;                              //br.s				IL_0042
	IL_0078:            goto IL_007a;                                               //br.s				IL_007a
	IL_007a:                                                                        //endfinally
	                    ;}
	IL_007b:            return;                                                     //ret

}
inline void Root::T_x28::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x28 F_x1
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldstr				L"\x5D1E\x4020\x5022\x4024\x0726\x7D28\x522A\x5D2C\x4A2E\x4230"
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            Temp_0=a(L"\x5D1E\x4020\x5022\x4024\x0726\x7D28\x522A\x5D2C\x4A2E\x4230",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldc.i4				0xa3
	IL_002e:                                                                        //dup
	IL_002f:            V_0=163;                                                    //stloc.0
	IL_0030:            this->SelectedImageIndex=163;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0041:            return;                                                     //ret

}
inline void Root::T_x28::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,Root::T_x10^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Root::T_x46^ Temp_7 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_8 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Root::T_x46^ Temp_11 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_12 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	Root::T_x12^ Temp_15 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Root::T_x46^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Root::T_x46^ V_4 = nullptr;
	System::NullReferenceException^ V_5 = nullptr;
	Root::T_x12^ V_6 = nullptr;
	System::Collections::IEnumerator^ V_7 = nullptr;
	System::IDisposable^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_000001:          try{
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_9
	IL_0011:            switch(V_9){case 0:goto IL_0052;case 1:goto IL_01d3;case 2:goto IL_018c;case 3:goto IL_0063;case 4:goto IL_01e3;};//switch				(IL_0052,IL_01d3,IL_018c,IL_0063,IL_01e3)
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0030:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0035:            Temp_1=Root::T_x10::M_x1(Temp_0);                           //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_003a:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_003f:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_0040:                                                                        //ldarg.1
	IL_0041:            Temp_2=A_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0046:            V_1=Temp_2;                                                 //stloc.1
	IL_0047:                                                                        //ldc.i4				0x0
	IL_004c:            V_9=0;                                                      //stloc				V_9
	IL_0050:            /*goto IL_000d;*/goto IL_0052;                              //br.s				IL_000d
	IL_0052:                                                                        //ldloc.1
	IL_0053:            if(V_1==nullptr)goto IL_0170;                               //brfalse				IL_0170
	IL_0058:                                                                        //ldc.i4				0x3
	IL_005d:            V_9=3;                                                      //stloc				V_9
	IL_0061:            /*goto IL_000d;*/goto IL_0063;                              //br.s				IL_000d
	IL_0063:            goto IL_0191;                                               //br				IL_0191
	IL_006301:          try{
	IL_0068:                                                                        //ldc.i4				0x2
	IL_006d:            V_9=2;                                                      //stloc				V_9
	IL_0071:            /*goto IL_0075;*/goto IL_0073;                              //br.s				IL_0075
	IL_0073:            goto IL_0092;                                               //br.s				IL_0092
	IL_0075:                                                                        //ldloc				V_9
	IL_0079:            switch(V_9){case 0:goto IL_011a;case 1:goto IL_010a;case 2:goto IL_0073;case 3:goto IL_00f3;case 4:goto IL_00e6;};//switch				(IL_011a,IL_010a,IL_0073,IL_00f3,IL_00e6)
	IL_0092:            goto IL_00e8;                                               //br.s				IL_00e8
	IL_0094:                                                                        //ldloc.s				V_7
	IL_0096:            Temp_6=V_7->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_009b:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_00a0:            V_3=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_6);//stloc.3
	IL_00a1:            Temp_7=gcnew Root::T_x46();                                 //newobj				void Root::T_x46::.ctor()
	IL_00a6:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_00a8:                                                                        //ldloc.s				V_4
	IL_00aa:                                                                        //ldloc.3
	IL_00ab:            V_4->M_x1(V_3);                                             //callvirt				void Root::T_x46::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_00b0:                                                                        //ldloc.s				V_4
	IL_00b2:                                                                        //ldarg.1
	IL_00b3:            V_4->M_x2(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//callvirt				void Root::T_x46::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_00b8:                                                                        //ldloc.s				V_4
	IL_00ba:            V_4->M_x14();                                               //callvirt				void Root::T_x10::M_x14()
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:                                                                        //ldloc.3
	IL_00c1:            Temp_8=V_3->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00c6:                                                                        //ldloc.s				V_4
	IL_00c8:            this->M_x1(Temp_8,safe_cast<Root::T_x10^>(V_4));            //call				void Root::T_x28::M_x1(Reflector::CodeModel::ITypeDeclaration^,Root::T_x10^)
	IL_00cd:                                                                        //ldarg.2
	IL_00ce:            Temp_9=A_1->Nodes;                                          //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00d3:                                                                        //ldloc.s				V_4
	IL_00d5:            Temp_10=Temp_9->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_4));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00da:                                                                        //pop
	IL_00db:                                                                        //ldc.i4				0x4
	IL_00e0:            V_9=4;                                                      //stloc				V_9
	IL_00e4:            /*goto IL_0075;*/goto IL_00e6;                              //br.s				IL_0075
	IL_00e6:            goto IL_00e8;                                               //br.s				IL_00e8
	IL_00e8:                                                                        //ldc.i4				0x3
	IL_00ed:            V_9=3;                                                      //stloc				V_9
	IL_00f1:            /*goto IL_0075;*/goto IL_00f3;                              //br.s				IL_0075
	IL_00f3:                                                                        //ldloc.s				V_7
	IL_00f5:            Temp_5=V_7->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00fa:            if(Temp_5)goto IL_0094;                                     //brtrue.s				IL_0094
	IL_00fc:                                                                        //ldc.i4				0x1
	IL_0101:            V_9=1;                                                      //stloc				V_9
	IL_0105:            /*goto IL_0075;*/goto IL_010a;                              //br				IL_0075
	IL_010a:            goto IL_010c;                                               //br.s				IL_010c
	IL_010c:                                                                        //ldc.i4				0x0
	IL_0111:            V_9=0;                                                      //stloc				V_9
	IL_0115:            /*goto IL_0075;*/goto IL_011a;                              //br				IL_0075
	IL_011a:            goto IL_01d5;                                               //leave				IL_01d5
	                    ;}
	                    finally{
	IL_011f:            goto IL_0136;                                               //br.s				IL_0136
	IL_0121:                                                                        //ldloc				V_9
	IL_0125:            switch(V_9){case 0:goto IL_014a;case 1:goto IL_0159;case 2:goto IL_016d;};//switch				(IL_014a,IL_0159,IL_016d)
	IL_0136:                                                                        //ldloc.s				V_7
	IL_0138:                                                                        //isinst				System::IDisposable
	IL_013d:            V_8=dynamic_cast<System::IDisposable^>(V_7);                //stloc.s				V_8
	IL_013f:                                                                        //ldc.i4				0x0
	IL_0144:            V_9=0;                                                      //stloc				V_9
	IL_0148:            /*goto IL_0121;*/goto IL_014a;                              //br.s				IL_0121
	IL_014a:                                                                        //ldloc.s				V_8
	IL_014c:            if(V_8==nullptr)goto IL_016f;                               //brfalse.s				IL_016f
	IL_014e:                                                                        //ldc.i4				0x1
	IL_0153:            V_9=1;                                                      //stloc				V_9
	IL_0157:            /*goto IL_0121;*/goto IL_0159;                              //br.s				IL_0121
	IL_0159:            goto IL_015b;                                               //br.s				IL_015b
	IL_015b:                                                                        //ldloc.s				V_8
	IL_015d:            /*V_8->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0162:                                                                        //ldc.i4				0x2
	IL_0167:            V_9=2;                                                      //stloc				V_9
	IL_016b:            /*goto IL_0121;*/goto IL_016d;                              //br.s				IL_0121
	IL_016d:            goto IL_016f;                                               //br.s				IL_016f
	IL_016f:                                                                        //endfinally
	                    ;}
	IL_0170:                                                                        //ldarg.1
	IL_0171:                                                                        //ldloc.0
	IL_0172:            Temp_3=Root::T_x115::M_x5(A_0,V_0);                         //call				System::Collections::ICollection^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeDeclaration^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0177:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_017c:            V_7=Temp_4;                                                 //stloc.s				V_7
	IL_017e:                                                                        //ldc.i4				0x2
	IL_0183:            V_9=2;                                                      //stloc				V_9
	IL_0187:            /*goto IL_000d;*/goto IL_018c;                              //br				IL_000d
	IL_018c:            /*goto IL_0068;*/goto IL_006301;                            //br				IL_0068
	IL_0191:            Temp_11=gcnew Root::T_x46();                                //newobj				void Root::T_x46::.ctor()
	IL_0196:            V_2=Temp_11;                                                //stloc.2
	IL_0197:                                                                        //ldloc.2
	IL_0198:                                                                        //ldloc.1
	IL_0199:            V_2->M_x1(V_1);                                             //callvirt				void Root::T_x46::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_019e:                                                                        //ldloc.2
	IL_019f:                                                                        //ldarg.1
	IL_01a0:            V_2->M_x2(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//callvirt				void Root::T_x46::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_01a5:                                                                        //ldloc.2
	IL_01a6:            V_2->M_x14();                                               //callvirt				void Root::T_x10::M_x14()
	IL_01ab:                                                                        //ldarg.0
	IL_01ac:                                                                        //ldloc.1
	IL_01ad:            Temp_12=V_1->Resolve();                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_01b2:                                                                        //ldloc.2
	IL_01b3:            this->M_x1(Temp_12,safe_cast<Root::T_x10^>(V_2));           //call				void Root::T_x28::M_x1(Reflector::CodeModel::ITypeDeclaration^,Root::T_x10^)
	IL_01b8:                                                                        //ldarg.2
	IL_01b9:            Temp_13=A_1->Nodes;                                         //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_01be:                                                                        //ldloc.2
	IL_01bf:            Temp_14=Temp_13->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_01c4:                                                                        //pop
	IL_01c5:                                                                        //ldc.i4				0x1
	IL_01ca:            V_9=1;                                                      //stloc				V_9
	IL_01ce:            /*goto IL_000d;*/goto IL_01d3;                              //br				IL_000d
	IL_01d3:            goto IL_0170;                                               //br.s				IL_0170
	IL_01d5:                                                                        //ldc.i4				0x4
	IL_01da:            V_9=4;                                                      //stloc				V_9
	IL_01de:            /*goto IL_000d;*/goto IL_01e3;                              //br				IL_000d
	IL_01e3:            goto IL_020c;                                               //leave.s				IL_020c
	                    ;}
	                    catch(System::NullReferenceException^ Ex_01E302){
	IL_01e5:            V_5=Ex_01E302;                                              //stloc.s				V_5
	IL_01e7:            Temp_15=gcnew Root::T_x12();                                //newobj				void Root::T_x12::.ctor()
	IL_01ec:            V_6=Temp_15;                                                //stloc.s				V_6
	IL_01ee:                                                                        //ldarg.0
	IL_01ef:            Temp_16=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_01f4:                                                                        //ldloc.s				V_6
	IL_01f6:            Temp_17=Temp_16->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_6));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_01fb:                                                                        //pop
	IL_01fc:                                                                        //ldloc.s				V_6
	IL_01fe:                                                                        //ldloc.s				V_5
	IL_0200:            Temp_18=V_5->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_0205:            V_6->M_x1(Temp_18);                                         //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_020a:            goto IL_020c;                                               //leave.s				IL_020c
	                    ;}
	IL_020c:            return;                                                     //ret

}
inline void Root::T_x28::M_x1(System::EventArgs^ A_0)
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
inline void Root::T_x28::M_x1(System::IO::StringWriter^ A_0,System::String^ A_1,System::Windows::Forms::TreeNodeCollection^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	Root::T_x46^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_5=9;                                                      //stloc				V_5
	IL_0009:                                                                        //ldarg.3
	IL_000a:            Temp_0=A_2->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::TreeNodeCollection::GetEnumerator()
	IL_000f:            V_1=Temp_0;                                                 //stloc.1
	IL_0010:            /*goto IL_0012;*/goto IL_001001;                            //br.s				IL_0012
	IL_001001:          try{
	IL_0012:                                                                        //ldc.i4				0x5
	IL_0017:            V_3=5;                                                      //stloc				V_3
	IL_001b:            /*goto IL_002a;*/goto IL_001d;                              //br.s				IL_002a
	IL_001d:                                                                        //ldc.i4.5
	IL_001e:                                                                        //dup
	IL_001f:                                                                        //dup
	IL_0020:                                                                        //ldc.i4.6
	IL_0021:                                                                        //add
	IL_0022:                                                                        //bgt				IL_001e
	IL_0027:                                                                        //pop
	IL_0028:            goto IL_004f;                                               //br.s				IL_004f
	IL_002a:                                                                        //ldloc				V_3
	IL_002e:            switch(V_3){case 0:goto IL_0099;case 1:goto IL_0086;case 2:goto IL_00a6;case 3:goto IL_00fd;case 4:goto IL_00bc;case 5:goto IL_001d;case 6:goto IL_00ed;};//switch				(IL_0099,IL_0086,IL_00a6,IL_00fd,IL_00bc,IL_001d,IL_00ed)
	IL_004f:            goto IL_009b;                                               //br.s				IL_009b
	IL_0051:                                                                        //ldloc.1
	IL_0052:            Temp_6=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0057:                                                                        //castclass				Root::T_x46
	IL_005c:            V_0=safe_cast<Root::T_x46^>(Temp_6);                        //stloc.0
	IL_005d:                                                                        //ldarg.1
	IL_005e:                                                                        //ldarg.2
	IL_005f:            A_0->Write(A_1);                                            //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0064:                                                                        //ldarg.1
	IL_0065:                                                                        //ldloc.0
	IL_0066:            Temp_7=V_0->M_x8();                                         //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
	IL_006b:            Temp_8=Root::T_x115::M_x8(Temp_7);                          //call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0070:            A_0->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0075:                                                                        //ldarg.1
	IL_0076:            A_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_007b:                                                                        //ldc.i4				0x1
	IL_0080:            V_3=1;                                                      //stloc				V_3
	IL_0084:            /*goto IL_002a;*/goto IL_0086;                              //br.s				IL_002a
	IL_0086:                                                                        //ldloc.0
	IL_0087:            Temp_4=V_0->IsExpanded;                                     //callvirt				System::Boolean System::Windows::Forms::TreeNode::get_IsExpanded()
	IL_008c:            if(!Temp_4)goto IL_009b;                                    //brfalse.s				IL_009b
	IL_008e:                                                                        //ldc.i4				0x0
	IL_0093:            V_3=0;                                                      //stloc				V_3
	IL_0097:            /*goto IL_002a;*/goto IL_0099;                              //br.s				IL_002a
	IL_0099:            goto IL_00be;                                               //br.s				IL_00be
	IL_009b:                                                                        //ldc.i4				0x2
	IL_00a0:            V_3=2;                                                      //stloc				V_3
	IL_00a4:            /*goto IL_002a;*/goto IL_00a6;                              //br.s				IL_002a
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:            Temp_5=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00ac:            if(Temp_5)goto IL_0051;                                     //brtrue.s				IL_0051
	IL_00ae:                                                                        //ldc.i4				0x4
	IL_00b3:            V_3=4;                                                      //stloc				V_3
	IL_00b7:            /*goto IL_002a;*/goto IL_00bc;                              //br				IL_002a
	IL_00bc:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_00be:                                                                        //ldarg.0
	IL_00bf:                                                                        //ldarg.1
	IL_00c0:                                                                        //ldarg.2
	IL_00c1:                                                                        //ldstr				L"\x2E26"
	IL_00c6:                                                                        //ldloc				V_5
	IL_00ca:            Temp_1=a(L"\x2E26",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cf:            Temp_2=System::String::Concat(A_1,Temp_1);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:            Temp_3=V_0->Nodes;                                          //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00da:            this->M_x1(A_0,Temp_2,Temp_3);                              //call				void Root::T_x28::M_x1(System::IO::StringWriter^,System::String^,System::Windows::Forms::TreeNodeCollection^)
	IL_00df:                                                                        //ldc.i4				0x6
	IL_00e4:            V_3=6;                                                      //stloc				V_3
	IL_00e8:            /*goto IL_002a;*/goto IL_00ed;                              //br				IL_002a
	IL_00ed:            goto IL_009b;                                               //br.s				IL_009b
	IL_00ef:                                                                        //ldc.i4				0x3
	IL_00f4:            V_3=3;                                                      //stloc				V_3
	IL_00f8:            /*goto IL_002a;*/goto IL_00fd;                              //br				IL_002a
	IL_00fd:            goto IL_014c;                                               //leave.s				IL_014c
	                    ;}
	                    finally{
	IL_00ff:            goto IL_0116;                                               //br.s				IL_0116
	IL_0101:                                                                        //ldloc				V_4
	IL_0105:            switch(V_4){case 0:goto IL_0149;case 1:goto IL_0128;case 2:goto IL_0136;};//switch				(IL_0149,IL_0128,IL_0136)
	IL_0116:                                                                        //ldloc.1
	IL_0117:                                                                        //isinst				System::IDisposable
	IL_011c:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_011d:                                                                        //ldc.i4				0x1
	IL_0122:            V_4=1;                                                      //stloc				V_4
	IL_0126:            /*goto IL_0101;*/goto IL_0128;                              //br.s				IL_0101
	IL_0128:                                                                        //ldloc.2
	IL_0129:            if(V_2==nullptr)goto IL_014b;                               //brfalse.s				IL_014b
	IL_012b:                                                                        //ldc.i4				0x2
	IL_0130:            V_4=2;                                                      //stloc				V_4
	IL_0134:            /*goto IL_0101;*/goto IL_0136;                              //br.s				IL_0101
	IL_0136:            goto IL_0138;                                               //br.s				IL_0138
	IL_0138:                                                                        //ldloc.2
	IL_0139:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_013e:                                                                        //ldc.i4				0x0
	IL_0143:            V_4=0;                                                      //stloc				V_4
	IL_0147:            /*goto IL_0101;*/goto IL_0149;                              //br.s				IL_0101
	IL_0149:            goto IL_014b;                                               //br.s				IL_014b
	IL_014b:                                                                        //endfinally
	                    ;}
	IL_014c:            return;                                                     //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x28::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x28 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x28::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x5C1D\x521F\x4D21\x5323\x5525\x4D27\x5829\x022B\x6C2D\x512F\x4131\x5133\x6235\x4137\x4A39\x593B"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x5C1D\x521F\x4D21\x5323\x5525\x4D27\x5829\x022B\x6C2D\x512F\x4131\x5133\x6235\x4137\x4A39\x593B",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x28::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeView^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Root::T_x12^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Windows::Forms::TreeView^ Temp_6 = nullptr;
	//local variables.
	System::NotSupportedException^ V_0 = nullptr;
	Root::T_x12^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->TreeView;                                      //call				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_0011:            Temp_0->BeginUpdate();                                      //callvirt				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_0016:            /*goto IL_0018;*/goto IL_001601;                            //br.s				IL_0018
	IL_001601:          try{
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_1=this->M_x12();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x28::M_x12()
	IL_001f:                                                                        //ldarg.0
	IL_0020:            this->M_x1(Temp_1,safe_cast<Root::T_x10^>(this));           //call				void Root::T_x28::M_x1(Reflector::CodeModel::ITypeDeclaration^,Root::T_x10^)
	IL_0025:            goto IL_0049;                                               //leave.s				IL_0049
	                    ;}
	                    catch(System::NotSupportedException^ Ex_002502){
	IL_0027:            V_0=Ex_002502;                                              //stloc.0
	IL_0028:            Temp_2=gcnew Root::T_x12();                                 //newobj				void Root::T_x12::.ctor()
	IL_002d:            V_1=Temp_2;                                                 //stloc.1
	IL_002e:                                                                        //ldloc.1
	IL_002f:                                                                        //ldloc.0
	IL_0030:            Temp_3=V_0->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_0035:            V_1->M_x1(Temp_3);                                          //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0040:                                                                        //ldloc.1
	IL_0041:            Temp_5=Temp_4->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0046:                                                                        //pop
	IL_0047:            goto IL_0049;                                               //leave.s				IL_0049
	                    ;}
	IL_0049:                                                                        //ldarg.0
	IL_004a:            Temp_6=this->TreeView;                                      //call				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_004f:            Temp_6->EndUpdate();                                        //callvirt				void System::Windows::Forms::TreeView::EndUpdate()
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x28::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_2=5;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_1=2;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0078;case 1:goto IL_00a3;case 2:goto IL_0014;case 3:goto IL_005c;case 4:goto IL_0085;};//switch				(IL_0078,IL_00a3,IL_0014,IL_005c,IL_0085)
	IL_0033:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_2=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            goto IL_007a;                                               //leave.s				IL_007a
	IL_0043:                                                                        //ldarg.0
	IL_0044:            this->M_x1();                                               //call				void Root::T_x28::M_x1()
	IL_0049:            return;                                                     //ret
	IL_004a:                                                                        //ldloc.0
	IL_004b:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0050:            V_0=Temp_0;                                                 //stloc.0
	IL_0051:                                                                        //ldc.i4				0x3
	IL_0056:            V_1=3;                                                      //stloc				V_1
	IL_005a:            /*goto IL_0016;*/goto IL_005c;                              //br.s				IL_0016
	IL_005c:                                                                        //ldloc.0
	IL_005d:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E"
	IL_0062:                                                                        //ldloc				V_2
	IL_0066:            Temp_1=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006b:            if(V_0!=Temp_1)goto IL_00a5;                                //bne.un.s				IL_00a5
	IL_006d:                                                                        //ldc.i4				0x0
	IL_0072:            V_1=0;                                                      //stloc				V_1
	IL_0076:            /*goto IL_0016;*/goto IL_0078;                              //br.s				IL_0016
	IL_0078:            goto IL_0043;                                               //br.s				IL_0043
	IL_007a:                                                                        //ldc.i4				0x4
	IL_007f:            V_1=4;                                                      //stloc				V_1
	IL_0083:            /*goto IL_0016;*/goto IL_0085;                              //br.s				IL_0016
	IL_0085:                                                                        //ldarg.1
	IL_0086:                                                                        //dup
	IL_0087:            V_0=A_0;                                                    //stloc.0
	IL_0088:            if(V_0==nullptr)goto IL_00a5;                               //brfalse.s				IL_00a5
	IL_008a:                                                                        //ldc.i4.4
	IL_008b:                                                                        //dup
	IL_008c:                                                                        //dup
	IL_008d:                                                                        //ldc.i4.2
	IL_008e:                                                                        //sub
	IL_008f:                                                                        //blt				IL_008b
	IL_0094:                                                                        //pop
	IL_0095:                                                                        //ldc.i4				0x1
	IL_009a:            V_1=1;                                                      //stloc				V_1
	IL_009e:            /*goto IL_0016;*/goto IL_00a3;                              //br				IL_0016
	IL_00a3:            goto IL_004a;                                               //br.s				IL_004a
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:                                                                        //ldarg.1
	IL_00a7:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_00ac:            return;                                                     //ret

}
inline System::Boolean Root::T_x28::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_2=1;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_1=1;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0080;case 1:goto IL_0014;case 2:goto IL_0093;case 3:goto IL_0073;case 4:goto IL_0057;};//switch				(IL_0080,IL_0014,IL_0093,IL_0073,IL_0057)
	IL_0033:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_3=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            goto IL_0075;                                               //leave.s				IL_0075
	IL_0043:                                                                        //ldc.i4.1
	IL_0044:            return true;                                                //ret
	IL_0045:                                                                        //ldloc.0
	IL_0046:            Temp_1=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_004b:            V_0=Temp_1;                                                 //stloc.0
	IL_004c:                                                                        //ldc.i4				0x4
	IL_0051:            V_1=4;                                                      //stloc				V_1
	IL_0055:            /*goto IL_0016;*/goto IL_0057;                              //br.s				IL_0016
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A"
	IL_005d:                                                                        //ldloc				V_2
	IL_0061:            Temp_2=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0066:            if(V_0!=Temp_2)goto IL_0095;                                //bne.un.s				IL_0095
	IL_0068:                                                                        //ldc.i4				0x3
	IL_006d:            V_1=3;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0016;*/goto IL_0073;                              //br.s				IL_0016
	IL_0073:            goto IL_0043;                                               //br.s				IL_0043
	IL_0075:                                                                        //ldc.i4				0x0
	IL_007a:            V_1=0;                                                      //stloc				V_1
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:            goto IL_0083;                                               //br.s				IL_0083
	IL_0082:                                                                        //break
	IL_0083:                                                                        //ldarg.1
	IL_0084:                                                                        //dup
	IL_0085:            V_0=A_0;                                                    //stloc.0
	IL_0086:            if(V_0==nullptr)goto IL_0095;                               //brfalse.s				IL_0095
	IL_0088:                                                                        //ldc.i4				0x2
	IL_008d:            V_1=2;                                                      //stloc				V_1
	IL_0091:            /*goto IL_0016;*/goto IL_0093;                              //br.s				IL_0016
	IL_0093:            goto IL_0045;                                               //br.s				IL_0045
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldarg.1
	IL_0097:            Temp_0=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_009c:            return Temp_0;                                              //ret

}
