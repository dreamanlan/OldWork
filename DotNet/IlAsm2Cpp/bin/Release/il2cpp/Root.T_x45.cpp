#include "global_xref.h"

inline Root::T_x45::T_x45()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Root::T_x45::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0006:            Temp_1=Temp_0->BaseType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_000b:                                                                        //ldnull
	IL_000c:                                                                        //ceq
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:                                                                        //ceq
	IL_0011:            return ((Temp_1 == safe_cast<Reflector::CodeModel::ITypeReference^>(nullptr)) == false);//ret

}
inline void Root::T_x45::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_3 = nullptr;
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
	IL_002a:            Temp_3=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_002f:            V_0->WriteTypeDeclaration(Temp_3);                          //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteTypeDeclaration(Reflector::CodeModel::ITypeDeclaration^)
	IL_0034:            return;                                                     //ret

}
inline Root::T_x31^ Root::T_x45::M_x1(Reflector::CodeModel::IMemberDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	Root::T_x31^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Root::T_x31^ Temp_5 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ Temp_6 = nullptr;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	Root::T_x31^ V_1 = nullptr;
	Root::T_x42^ V_2 = nullptr;
	Root::T_x32^ V_3 = nullptr;
	Root::T_x31^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x14();                                              //call				void Root::T_x10::M_x14()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_000c:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::TreeNodeCollection::GetEnumerator()
	IL_0011:            V_5=Temp_1;                                                 //stloc.s				V_5
	IL_0013:            /*goto IL_001a;*/goto IL_001901;                            //br.s				IL_001a
	IL_0015:            goto IL_0018;                                               //br.s				IL_0018
	IL_0017:                                                                        //break
	IL_0018:                                                                        //ldnull
	IL_0019:            return nullptr;                                             //ret
	IL_001901:          try{
	IL_001a:                                                                        //ldc.i4				0xe
	IL_001f:            V_7=14;                                                     //stloc				V_7
	IL_0023:            /*goto IL_0027;*/goto IL_0025;                              //br.s				IL_0027
	IL_0025:            goto IL_007c;                                               //br.s				IL_007c
	IL_0027:                                                                        //ldloc				V_7
	IL_002b:            switch(V_7){case 0:goto IL_00e1;case 1:goto IL_00f1;case 2:goto IL_0126;case 3:goto IL_0165;case 4:goto IL_010b;case 5:goto IL_01e1;case 6:goto IL_01f5;case 7:goto IL_018f;case 8:goto IL_01b6;case 9:goto IL_00b6;case 10:goto IL_008c;case 11:goto IL_014a;case 12:goto IL_00d0;case 13:goto IL_01c7;case 14:goto IL_0025;case 15:goto IL_0208;case 16:goto IL_009c;case 17:goto IL_0137;case 18:goto IL_0179;};//switch				(IL_00e1,IL_00f1,IL_0126,IL_0165,IL_010b,IL_01e1,IL_01f5,IL_018f,IL_01b6,IL_00b6,IL_008c,IL_014a,IL_00d0,IL_01c7,IL_0025,IL_0208,IL_009c,IL_0137,IL_0179)
	IL_007c:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_007e:                                                                        //ldloc.1
	IL_007f:            V_4=V_1;                                                    //stloc.s				V_4
	IL_0081:                                                                        //ldc.i4				0xa
	IL_0086:            V_7=10;                                                     //stloc				V_7
	IL_008a:            /*goto IL_0027;*/goto IL_008c;                              //br.s				IL_0027
	IL_008c:            goto IL_025e;                                               //leave				IL_025e
	IL_0091:                                                                        //ldc.i4				0x10
	IL_0096:            V_7=16;                                                     //stloc				V_7
	IL_009a:            /*goto IL_0027;*/goto IL_009c;                              //br.s				IL_0027
	IL_009c:                                                                        //ldarg.1
	IL_009d:                                                                        //ldloc.1
	IL_009e:            Temp_6=V_1->M_x5();                                         //callvirt				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_00a3:            if(A_0!=Temp_6)goto IL_01cc;                                //bne.un				IL_01cc
	IL_00a8:                                                                        //ldc.i4				0x9
	IL_00ad:            V_7=9;                                                      //stloc				V_7
	IL_00b1:            /*goto IL_0027;*/goto IL_00b6;                              //br				IL_0027
	IL_00b6:            goto IL_0139;                                               //br				IL_0139
	IL_00bb:                                                                        //ldloc.0
	IL_00bc:                                                                        //isinst				Root::T_x32
	IL_00c1:            V_3=dynamic_cast<Root::T_x32^>(V_0);                        //stloc.3
	IL_00c2:                                                                        //ldc.i4				0xc
	IL_00c7:            V_7=12;                                                     //stloc				V_7
	IL_00cb:            /*goto IL_0027;*/goto IL_00d0;                              //br				IL_0027
	IL_00d0:                                                                        //ldloc.3
	IL_00d1:            if(V_3==nullptr)goto IL_00e3;                               //brfalse.s				IL_00e3
	IL_00d3:                                                                        //ldc.i4				0x0
	IL_00d8:            V_7=0;                                                      //stloc				V_7
	IL_00dc:            /*goto IL_0027;*/goto IL_00e1;                              //br				IL_0027
	IL_00e1:            goto IL_014f;                                               //br.s				IL_014f
	IL_00e3:                                                                        //ldc.i4				0x1
	IL_00e8:            V_7=1;                                                      //stloc				V_7
	IL_00ec:            /*goto IL_0027;*/goto IL_00f1;                              //br				IL_0027
	IL_00f1:                                                                        //ldloc.s				V_5
	IL_00f3:            Temp_3=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00f8:            if(Temp_3)goto IL_0194;                                     //brtrue				IL_0194
	IL_00fd:                                                                        //ldc.i4				0x4
	IL_0102:            V_7=4;                                                      //stloc				V_7
	IL_0106:            /*goto IL_0027;*/goto IL_010b;                              //br				IL_0027
	IL_010b:            goto IL_01fa;                                               //br				IL_01fa
	IL_0110:                                                                        //ldloc.2
	IL_0111:                                                                        //ldarg.1
	IL_0112:            Temp_5=V_2->M_x1(A_0);                                      //callvirt				Root::T_x31^ Root::T_x42::M_x1(Reflector::CodeModel::IMemberDeclaration^)
	IL_0117:            V_1=Temp_5;                                                 //stloc.1
	IL_0118:                                                                        //ldc.i4				0x2
	IL_011d:            V_7=2;                                                      //stloc				V_7
	IL_0121:            /*goto IL_0027;*/goto IL_0126;                              //br				IL_0027
	IL_0126:                                                                        //ldloc.1
	IL_0127:            if(V_1==nullptr)goto IL_00bb;                               //brfalse.s				IL_00bb
	IL_0129:                                                                        //ldc.i4				0x11
	IL_012e:            V_7=17;                                                     //stloc				V_7
	IL_0132:            /*goto IL_0027;*/goto IL_0137;                              //br				IL_0027
	IL_0137:            goto IL_017e;                                               //br.s				IL_017e
	IL_0139:                                                                        //ldloc.1
	IL_013a:            V_4=V_1;                                                    //stloc.s				V_4
	IL_013c:                                                                        //ldc.i4				0xb
	IL_0141:            V_7=11;                                                     //stloc				V_7
	IL_0145:            /*goto IL_0027;*/goto IL_014a;                              //br				IL_0027
	IL_014a:            goto IL_025e;                                               //leave				IL_025e
	IL_014f:                                                                        //ldloc.3
	IL_0150:                                                                        //ldarg.1
	IL_0151:            Temp_2=V_3->M_x1(A_0);                                      //callvirt				Root::T_x31^ Root::T_x32::M_x1(Reflector::CodeModel::IMemberDeclaration^)
	IL_0156:            V_1=Temp_2;                                                 //stloc.1
	IL_0157:                                                                        //ldc.i4				0x3
	IL_015c:            V_7=3;                                                      //stloc				V_7
	IL_0160:            /*goto IL_0027;*/goto IL_0165;                              //br				IL_0027
	IL_0165:                                                                        //ldloc.1
	IL_0166:            if(V_1==nullptr)goto IL_00e3;                               //brfalse				IL_00e3
	IL_016b:                                                                        //ldc.i4				0x12
	IL_0170:            V_7=18;                                                     //stloc				V_7
	IL_0174:            /*goto IL_0027;*/goto IL_0179;                              //br				IL_0027
	IL_0179:            goto IL_007e;                                               //br				IL_007e
	IL_017e:                                                                        //ldloc.1
	IL_017f:            V_4=V_1;                                                    //stloc.s				V_4
	IL_0181:                                                                        //ldc.i4				0x7
	IL_0186:            V_7=7;                                                      //stloc				V_7
	IL_018a:            /*goto IL_0027;*/goto IL_018f;                              //br				IL_0027
	IL_018f:            goto IL_025e;                                               //leave				IL_025e
	IL_0194:                                                                        //ldloc.s				V_5
	IL_0196:            Temp_4=V_5->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_019b:                                                                        //castclass				Root::T_x10
	IL_01a0:            V_0=safe_cast<Root::T_x10^>(Temp_4);                        //stloc.0
	IL_01a1:                                                                        //ldloc.0
	IL_01a2:                                                                        //isinst				Root::T_x31
	IL_01a7:            V_1=dynamic_cast<Root::T_x31^>(V_0);                        //stloc.1
	IL_01a8:                                                                        //ldc.i4				0x8
	IL_01ad:            V_7=8;                                                      //stloc				V_7
	IL_01b1:            /*goto IL_0027;*/goto IL_01b6;                              //br				IL_0027
	IL_01b6:                                                                        //ldloc.1
	IL_01b7:            if(V_1==nullptr)goto IL_01cc;                               //brfalse.s				IL_01cc
	IL_01b9:                                                                        //ldc.i4				0xd
	IL_01be:            V_7=13;                                                     //stloc				V_7
	IL_01c2:            /*goto IL_0027;*/goto IL_01c7;                              //br				IL_0027
	IL_01c7:            goto IL_0091;                                               //br				IL_0091
	IL_01cc:                                                                        //ldloc.0
	IL_01cd:                                                                        //isinst				Root::T_x42
	IL_01d2:            V_2=dynamic_cast<Root::T_x42^>(V_0);                        //stloc.2
	IL_01d3:                                                                        //ldc.i4				0x5
	IL_01d8:            V_7=5;                                                      //stloc				V_7
	IL_01dc:            /*goto IL_0027;*/goto IL_01e1;                              //br				IL_0027
	IL_01e1:                                                                        //ldloc.2
	IL_01e2:            if(V_2==nullptr)goto IL_00bb;                               //brfalse				IL_00bb
	IL_01e7:                                                                        //ldc.i4				0x6
	IL_01ec:            V_7=6;                                                      //stloc				V_7
	IL_01f0:            /*goto IL_0027;*/goto IL_01f5;                              //br				IL_0027
	IL_01f5:            goto IL_0110;                                               //br				IL_0110
	IL_01fa:                                                                        //ldc.i4				0xf
	IL_01ff:            V_7=15;                                                     //stloc				V_7
	IL_0203:            /*goto IL_0027;*/goto IL_0208;                              //br				IL_0027
	IL_0208:            goto IL_0015;                                               //leave				IL_0015
	                    ;}
	                    finally{
	IL_020d:            goto IL_0224;                                               //br.s				IL_0224
	IL_020f:                                                                        //ldloc				V_8
	IL_0213:            switch(V_8){case 0:goto IL_0238;case 1:goto IL_025b;case 2:goto IL_0247;};//switch				(IL_0238,IL_025b,IL_0247)
	IL_0224:                                                                        //ldloc.s				V_5
	IL_0226:                                                                        //isinst				System::IDisposable
	IL_022b:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_022d:                                                                        //ldc.i4				0x0
	IL_0232:            V_8=0;                                                      //stloc				V_8
	IL_0236:            /*goto IL_020f;*/goto IL_0238;                              //br.s				IL_020f
	IL_0238:                                                                        //ldloc.s				V_6
	IL_023a:            if(V_6==nullptr)goto IL_025d;                               //brfalse.s				IL_025d
	IL_023c:                                                                        //ldc.i4				0x2
	IL_0241:            V_8=2;                                                      //stloc				V_8
	IL_0245:            /*goto IL_020f;*/goto IL_0247;                              //br.s				IL_020f
	IL_0247:            goto IL_0249;                                               //br.s				IL_0249
	IL_0249:                                                                        //ldloc.s				V_6
	IL_024b:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0250:                                                                        //ldc.i4				0x1
	IL_0255:            V_8=1;                                                      //stloc				V_8
	IL_0259:            /*goto IL_020f;*/goto IL_025b;                              //br.s				IL_020f
	IL_025b:            goto IL_025d;                                               //br.s				IL_025d
	IL_025d:                                                                        //endfinally
	                    ;}
	IL_025e:                                                                        //ldloc.s				V_4
	IL_0260:            return V_4;                                                 //ret

}
inline array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Root::T_x45^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	Root::T_x45^ V_3 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0011:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=Root::T_x10::M_x1(Temp_0);                           //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001b:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_0020:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_0021:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0026:            V_1=Temp_2;                                                 //stloc.1
	IL_0027:                                                                        //ldarg.1
	IL_0028:                                                                        //ldloc.0
	IL_0029:            Temp_3=Root::T_x115::M_x1(A_0,V_0);                         //call				System::Collections::ICollection^ Root::T_x115::M_x1(Reflector::CodeModel::ITypeDeclaration^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_002e:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0033:            V_5=Temp_4;                                                 //stloc.s				V_5
	IL_0035:            /*goto IL_0037;*/goto IL_003501;                            //br.s				IL_0037
	IL_003501:          try{
	IL_0037:                                                                        //ldc.i4				0x4
	IL_003c:            V_7=4;                                                      //stloc				V_7
	IL_0040:            /*goto IL_0044;*/goto IL_0042;                              //br.s				IL_0044
	IL_0042:            goto IL_0061;                                               //br.s				IL_0061
	IL_0044:                                                                        //ldloc				V_7
	IL_0048:            switch(V_7){case 0:goto IL_00b1;case 1:goto IL_00be;case 2:goto IL_0090;case 3:goto IL_009d;case 4:goto IL_0042;};//switch				(IL_00b1,IL_00be,IL_0090,IL_009d,IL_0042)
	IL_0061:            goto IL_0092;                                               //br.s				IL_0092
	IL_0063:                                                                        //ldloc.s				V_5
	IL_0065:            Temp_6=V_5->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006a:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_006f:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_6);//stloc.2
	IL_0070:            Temp_7=gcnew Root::T_x45();                                 //newobj				void Root::T_x45::.ctor()
	IL_0075:            V_3=Temp_7;                                                 //stloc.3
	IL_0076:                                                                        //ldloc.3
	IL_0077:                                                                        //ldloc.2
	IL_0078:            V_3->M_x12(V_2);                                            //callvirt				void Root::T_x45::M_x12(Reflector::CodeModel::ITypeDeclaration^)
	IL_007d:                                                                        //ldloc.1
	IL_007e:                                                                        //ldloc.3
	IL_007f:            Temp_8=V_1->Add(safe_cast<System::Object^>(V_3));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0084:                                                                        //pop
	IL_0085:                                                                        //ldc.i4				0x2
	IL_008a:            V_7=2;                                                      //stloc				V_7
	IL_008e:            /*goto IL_0044;*/goto IL_0090;                              //br.s				IL_0044
	IL_0090:            goto IL_0092;                                               //br.s				IL_0092
	IL_0092:                                                                        //ldc.i4				0x3
	IL_0097:            V_7=3;                                                      //stloc				V_7
	IL_009b:            /*goto IL_0044;*/goto IL_009d;                              //br.s				IL_0044
	IL_009d:                                                                        //ldloc.s				V_5
	IL_009f:            Temp_5=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a4:            if(Temp_5)goto IL_0063;                                     //brtrue.s				IL_0063
	IL_00a6:                                                                        //ldc.i4				0x0
	IL_00ab:            V_7=0;                                                      //stloc				V_7
	IL_00af:            /*goto IL_0044;*/goto IL_00b1;                              //br.s				IL_0044
	IL_00b1:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_00b3:                                                                        //ldc.i4				0x1
	IL_00b8:            V_7=1;                                                      //stloc				V_7
	IL_00bc:            /*goto IL_0044;*/goto IL_00be;                              //br.s				IL_0044
	IL_00be:            goto IL_0111;                                               //leave.s				IL_0111
	                    ;}
	                    finally{
	IL_00c0:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_00c2:                                                                        //ldloc				V_8
	IL_00c6:            switch(V_8){case 0:goto IL_010e;case 1:goto IL_00fa;case 2:goto IL_00eb;};//switch				(IL_010e,IL_00fa,IL_00eb)
	IL_00d7:                                                                        //ldloc.s				V_5
	IL_00d9:                                                                        //isinst				System::IDisposable
	IL_00de:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_00e0:                                                                        //ldc.i4				0x2
	IL_00e5:            V_8=2;                                                      //stloc				V_8
	IL_00e9:            /*goto IL_00c2;*/goto IL_00eb;                              //br.s				IL_00c2
	IL_00eb:                                                                        //ldloc.s				V_6
	IL_00ed:            if(V_6==nullptr)goto IL_0110;                               //brfalse.s				IL_0110
	IL_00ef:                                                                        //ldc.i4				0x1
	IL_00f4:            V_8=1;                                                      //stloc				V_8
	IL_00f8:            /*goto IL_00c2;*/goto IL_00fa;                              //br.s				IL_00c2
	IL_00fa:            goto IL_00fc;                                               //br.s				IL_00fc
	IL_00fc:                                                                        //ldloc.s				V_6
	IL_00fe:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0103:                                                                        //ldc.i4				0x0
	IL_0108:            V_8=0;                                                      //stloc				V_8
	IL_010c:            /*goto IL_00c2;*/goto IL_010e;                              //br.s				IL_00c2
	IL_010e:            goto IL_0110;                                               //br.s				IL_0110
	IL_0110:                                                                        //endfinally
	                    ;}
	IL_0111:                                                                        //ldloc.1
	IL_0112:            Temp_9=V_1->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0117:                                                                        //conv.ovf.u4
	IL_0118:            Temp_10=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_9));//newarr				System::Windows::Forms::TreeNode
	IL_011d:            V_4=Temp_10;                                                //stloc.s				V_4
	IL_011f:                                                                        //ldloc.1
	IL_0120:                                                                        //ldloc.s				V_4
	IL_0122:                                                                        //ldc.i4.0
	IL_0123:            V_1->CopyTo(safe_cast<System::Array^>(V_4),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_0128:                                                                        //ldloc.s				V_4
	IL_012a:            return V_4;                                                 //ret

}
inline array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	Root::T_x12^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Root::T_x45::T_x1^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_10 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_11 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_12 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_13 = nullptr;
	Reflector::CodeModel::IType^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	Root::T_x34^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::Boolean Temp_18 = false;
	System::Object^ Temp_19 = nullptr;
	Root::T_x32^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_22 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_23 = nullptr;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_2 = nullptr;
	Root::T_x32^ V_3 = nullptr;
	Root::T_x34^ V_4 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_5 = nullptr;
	Root::T_x12^ V_6 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_7 = nullptr;
	System::Collections::IEnumerator^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_11=1;                                                     //stloc				V_11
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_10
	IL_000f:            switch(V_10){case 0:goto IL_02b5;case 1:goto IL_00b8;case 2:goto IL_009b;case 3:goto IL_0265;case 4:goto IL_00e8;case 5:goto IL_0291;case 6:goto IL_007c;case 7:goto IL_02a4;case 8:goto IL_00cd;case 9:goto IL_0278;};//switch				(IL_02b5,IL_00b8,IL_009b,IL_0265,IL_00e8,IL_0291,IL_007c,IL_02a4,IL_00cd,IL_0278)
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0042:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0047:            Temp_1=Root::T_x10::M_x1(Temp_0);                           //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_004c:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_0051:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_0052:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0057:            V_1=Temp_2;                                                 //stloc.1
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_3=Root::T_x115::M_x2(A_0,V_0);                         //call				System::Collections::ICollection^ Root::T_x115::M_x2(Reflector::CodeModel::ITypeDeclaration^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_005f:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0064:            V_8=Temp_4;                                                 //stloc.s				V_8
	IL_0066:                                                                        //ldc.i4.3
	IL_0067:                                                                        //dup
	IL_0068:                                                                        //dup
	IL_0069:                                                                        //ldc.i4.3
	IL_006a:                                                                        //sub
	IL_006b:                                                                        //blt				IL_0067
	IL_0070:                                                                        //pop
	IL_0071:                                                                        //ldc.i4				0x6
	IL_0076:            V_10=6;                                                     //stloc				V_10
	IL_007a:            /*goto IL_000b;*/goto IL_007c;                              //br.s				IL_000b
	IL_007c:            /*goto IL_00ed;*/goto IL_00E801;                            //br.s				IL_00ed
	IL_007e:                                                                        //ldloc.1
	IL_007f:                                                                        //ldarg.0
	IL_0080:                                                                        //ldloc.s				V_5
	IL_0082:                                                                        //ldarg.2
	IL_0083:            Temp_22=this->M_x1(V_5,A_1);                                //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_0088:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_22));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_008d:                                                                        //ldc.i4				0x2
	IL_0092:            V_10=2;                                                     //stloc				V_10
	IL_0096:            /*goto IL_000b;*/goto IL_009b;                              //br				IL_000b
	IL_009b:            goto IL_00cf;                                               //br.s				IL_00cf
	IL_009d:                                                                        //ldarg.1
	IL_009e:            Temp_11=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_00a3:            Temp_12=Temp_11->Resolve();                                 //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00a8:            V_5=Temp_12;                                                //stloc.s				V_5
	IL_00aa:                                                                        //ldc.i4				0x1
	IL_00af:            V_10=1;                                                     //stloc				V_10
	IL_00b3:            /*goto IL_000b;*/goto IL_00b8;                              //br				IL_000b
	IL_00b8:                                                                        //ldloc.s				V_5
	IL_00ba:            if(V_5==nullptr)goto IL_0232;                               //brfalse				IL_0232
	IL_00bf:                                                                        //ldc.i4				0x8
	IL_00c4:            V_10=8;                                                     //stloc				V_10
	IL_00c8:            /*goto IL_000b;*/goto IL_00cd;                              //br				IL_000b
	IL_00cd:            goto IL_007e;                                               //br.s				IL_007e
	IL_00cf:                                                                        //ldloc.1
	IL_00d0:            Temp_8=gcnew Root::T_x45::T_x1();                           //newobj				void Root::T_x45::T_x1::.ctor()
	IL_00d5:            V_1->Sort(safe_cast<System::Collections::IComparer^>(Temp_8));//callvirt				void System::Collections::ArrayList::Sort(System::Collections::IComparer^)
	IL_00da:                                                                        //ldc.i4				0x4
	IL_00df:            V_10=4;                                                     //stloc				V_10
	IL_00e3:            /*goto IL_000b;*/goto IL_00e8;                              //br				IL_000b
	IL_00e8:            goto IL_02b7;                                               //br				IL_02b7
	IL_00E801:          try{
	IL_00ed:                                                                        //ldc.i4				0x6
	IL_00f2:            V_10=6;                                                     //stloc				V_10
	IL_00f6:            /*goto IL_00fa;*/goto IL_00f8;                              //br.s				IL_00fa
	IL_00f8:            goto IL_0123;                                               //br.s				IL_0123
	IL_00fa:                                                                        //ldloc				V_10
	IL_00fe:            switch(V_10){case 0:goto IL_01dc;case 1:goto IL_013d;case 2:goto IL_017f;case 3:goto IL_01cc;case 4:goto IL_0168;case 5:goto IL_01a7;case 6:goto IL_00f8;case 7:goto IL_015b;};//switch				(IL_01dc,IL_013d,IL_017f,IL_01cc,IL_0168,IL_01a7,IL_00f8,IL_015b)
	IL_0123:            goto IL_015d;                                               //br.s				IL_015d
	IL_0125:                                                                        //ldloc.s				V_8
	IL_0127:            Temp_19=V_8->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_012c:                                                                        //castclass				Reflector::CodeModel::IEventDeclaration
	IL_0131:            V_2=safe_cast<Reflector::CodeModel::IEventDeclaration^>(Temp_19);//stloc.2
	IL_0132:                                                                        //ldc.i4				0x1
	IL_0137:            V_10=1;                                                     //stloc				V_10
	IL_013b:            /*goto IL_00fa;*/goto IL_013d;                              //br.s				IL_00fa
	IL_013d:                                                                        //ldarg.0
	IL_013e:            Temp_13=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0143:                                                                        //ldloc.2
	IL_0144:            Temp_14=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0149:            Temp_15=Temp_13->Equals(safe_cast<System::Object^>(Temp_14));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_014e:            if(!Temp_15)goto IL_0181;                                   //brfalse.s				IL_0181
	IL_0150:                                                                        //ldc.i4				0x7
	IL_0155:            V_10=7;                                                     //stloc				V_10
	IL_0159:            /*goto IL_00fa;*/goto IL_015b;                              //br.s				IL_00fa
	IL_015b:            goto IL_01a9;                                               //br.s				IL_01a9
	IL_015d:                                                                        //ldc.i4				0x4
	IL_0162:            V_10=4;                                                     //stloc				V_10
	IL_0166:            /*goto IL_00fa;*/goto IL_0168;                              //br.s				IL_00fa
	IL_0168:                                                                        //ldloc.s				V_8
	IL_016a:            Temp_18=V_8->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_016f:            if(Temp_18)goto IL_0125;                                    //brtrue.s				IL_0125
	IL_0171:                                                                        //ldc.i4				0x2
	IL_0176:            V_10=2;                                                     //stloc				V_10
	IL_017a:            /*goto IL_00fa;*/goto IL_017f;                              //br				IL_00fa
	IL_017f:            goto IL_01ce;                                               //br.s				IL_01ce
	IL_0181:            Temp_16=gcnew Root::T_x34();                                //newobj				void Root::T_x34::.ctor()
	IL_0186:            V_4=Temp_16;                                                //stloc.s				V_4
	IL_0188:                                                                        //ldloc.s				V_4
	IL_018a:                                                                        //ldloc.2
	IL_018b:            V_4->M_x1(safe_cast<Reflector::CodeModel::IEventReference^>(V_2));//callvirt				void Root::T_x34::M_x1(Reflector::CodeModel::IEventReference^)
	IL_0190:                                                                        //ldloc.1
	IL_0191:                                                                        //ldloc.s				V_4
	IL_0193:            Temp_17=V_1->Add(safe_cast<System::Object^>(V_4));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0198:                                                                        //pop
	IL_0199:                                                                        //ldc.i4				0x5
	IL_019e:            V_10=5;                                                     //stloc				V_10
	IL_01a2:            /*goto IL_00fa;*/goto IL_01a7;                              //br				IL_00fa
	IL_01a7:            goto IL_015d;                                               //br.s				IL_015d
	IL_01a9:            Temp_20=gcnew Root::T_x32();                                //newobj				void Root::T_x32::.ctor()
	IL_01ae:            V_3=Temp_20;                                                //stloc.3
	IL_01af:                                                                        //ldloc.3
	IL_01b0:                                                                        //ldloc.2
	IL_01b1:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x32::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_01b6:                                                                        //ldloc.1
	IL_01b7:                                                                        //ldloc.3
	IL_01b8:            Temp_21=V_1->Add(safe_cast<System::Object^>(V_3));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01bd:                                                                        //pop
	IL_01be:                                                                        //ldc.i4				0x3
	IL_01c3:            V_10=3;                                                     //stloc				V_10
	IL_01c7:            /*goto IL_00fa;*/goto IL_01cc;                              //br				IL_00fa
	IL_01cc:            goto IL_015d;                                               //br.s				IL_015d
	IL_01ce:                                                                        //ldc.i4				0x0
	IL_01d3:            V_10=0;                                                     //stloc				V_10
	IL_01d7:            /*goto IL_00fa;*/goto IL_01dc;                              //br				IL_00fa
	IL_01dc:            goto IL_0296;                                               //leave				IL_0296
	                    ;}
	                    finally{
	IL_01e1:            goto IL_01f8;                                               //br.s				IL_01f8
	IL_01e3:                                                                        //ldloc				V_10
	IL_01e7:            switch(V_10){case 0:goto IL_020c;case 1:goto IL_022f;case 2:goto IL_021b;};//switch				(IL_020c,IL_022f,IL_021b)
	IL_01f8:                                                                        //ldloc.s				V_8
	IL_01fa:                                                                        //isinst				System::IDisposable
	IL_01ff:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_0201:                                                                        //ldc.i4				0x0
	IL_0206:            V_10=0;                                                     //stloc				V_10
	IL_020a:            /*goto IL_01e3;*/goto IL_020c;                              //br.s				IL_01e3
	IL_020c:                                                                        //ldloc.s				V_9
	IL_020e:            if(V_9==nullptr)goto IL_0231;                               //brfalse.s				IL_0231
	IL_0210:                                                                        //ldc.i4				0x2
	IL_0215:            V_10=2;                                                     //stloc				V_10
	IL_0219:            /*goto IL_01e3;*/goto IL_021b;                              //br.s				IL_01e3
	IL_021b:            goto IL_021d;                                               //br.s				IL_021d
	IL_021d:                                                                        //ldloc.s				V_9
	IL_021f:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0224:                                                                        //ldc.i4				0x1
	IL_0229:            V_10=1;                                                     //stloc				V_10
	IL_022d:            /*goto IL_01e3;*/goto IL_022f;                              //br.s				IL_01e3
	IL_022f:            goto IL_0231;                                               //br.s				IL_0231
	IL_0231:                                                                        //endfinally
	                    ;}
	IL_0232:            Temp_5=gcnew Root::T_x12();                                 //newobj				void Root::T_x12::.ctor()
	IL_0237:            V_6=Temp_5;                                                 //stloc.s				V_6
	IL_0239:                                                                        //ldloc.s				V_6
	IL_023b:                                                                        //ldstr				L"\x5C1E\x4020\x4D22\x4B24\x4826\x5D28\x0B2A\x5F2C\x4A2E\x4230\x5C32\x5934\x4136\x5C38\x1B3A\x5F3C\x5E3E\x3240\x2642\x6544\x3346\x3048\x3B4A\x284C\x614E"
	IL_0240:                                                                        //ldloc				V_11
	IL_0244:            Temp_6=a(L"\x5C1E\x4020\x4D22\x4B24\x4826\x5D28\x0B2A\x5F2C\x4A2E\x4230\x5C32\x5934\x4136\x5C38\x1B3A\x5F3C\x5E3E\x3240\x2642\x6544\x3346\x3048\x3B4A\x284C\x614E",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0249:            V_6->M_x1(Temp_6);                                          //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_024e:                                                                        //ldloc.1
	IL_024f:                                                                        //ldloc.s				V_6
	IL_0251:            Temp_7=V_1->Add(safe_cast<System::Object^>(V_6));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0256:                                                                        //pop
	IL_0257:                                                                        //ldc.i4				0x3
	IL_025c:            V_10=3;                                                     //stloc				V_10
	IL_0260:            /*goto IL_000b;*/goto IL_0265;                              //br				IL_000b
	IL_0265:            goto IL_00cf;                                               //br				IL_00cf
	IL_026a:                                                                        //ldc.i4				0x9
	IL_026f:            V_10=9;                                                     //stloc				V_10
	IL_0273:            /*goto IL_000b;*/goto IL_0278;                              //br				IL_000b
	IL_0278:                                                                        //ldarg.1
	IL_0279:            Temp_23=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_027e:            if(Temp_23==nullptr)goto IL_00cf;                           //brfalse				IL_00cf
	IL_0283:                                                                        //ldc.i4				0x5
	IL_0288:            V_10=5;                                                     //stloc				V_10
	IL_028c:            /*goto IL_000b;*/goto IL_0291;                              //br				IL_000b
	IL_0291:            goto IL_009d;                                               //br				IL_009d
	IL_0296:                                                                        //ldc.i4				0x7
	IL_029b:            V_10=7;                                                     //stloc				V_10
	IL_029f:            /*goto IL_000b;*/goto IL_02a4;                              //br				IL_000b
	IL_02a4:                                                                        //ldarg.2
	IL_02a5:            if(!A_1)goto IL_02b7;                                       //brfalse.s				IL_02b7
	IL_02a7:                                                                        //ldc.i4				0x0
	IL_02ac:            V_10=0;                                                     //stloc				V_10
	IL_02b0:            /*goto IL_000b;*/goto IL_02b5;                              //br				IL_000b
	IL_02b5:            goto IL_026a;                                               //br.s				IL_026a
	IL_02b7:                                                                        //ldloc.1
	IL_02b8:            Temp_9=V_1->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_02bd:                                                                        //conv.ovf.u4
	IL_02be:            Temp_10=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_9));//newarr				System::Windows::Forms::TreeNode
	IL_02c3:            V_7=Temp_10;                                                //stloc.s				V_7
	IL_02c5:                                                                        //ldloc.1
	IL_02c6:                                                                        //ldloc.s				V_7
	IL_02c8:                                                                        //ldc.i4.0
	IL_02c9:            V_1->CopyTo(safe_cast<System::Array^>(V_7),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_02ce:                                                                        //ldloc.s				V_7
	IL_02d0:            return V_7;                                                 //ret

}
inline void Root::T_x45::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x28^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_3 = nullptr;
	Root::T_x30^ Temp_4 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Windows::Forms::TreeNodeCollection^ Temp_10 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_11 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ Temp_12 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_13 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_14 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ Temp_15 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_16 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_17 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ Temp_18 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_19 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_20 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ Temp_21 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_22 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_23 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ Temp_24 = nullptr;
	//local variables.
	Root::T_x28^ V_0 = nullptr;
	Root::T_x30^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0064;case 1:goto IL_004c;case 2:goto IL_0093;};//switch				(IL_0064,IL_004c,IL_0093)
	IL_0022:            Temp_0=gcnew Root::T_x28();                                 //newobj				void Root::T_x28::.ctor()
	IL_0027:            V_0=Temp_0;                                                 //stloc.0
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_002e:                                                                        //ldloc.0
	IL_002f:            Temp_2=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_0));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0034:                                                                        //pop
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_3=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_003c:            V_0->M_x1(Temp_3);                                          //callvirt				void Root::T_x28::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0041:                                                                        //ldc.i4				0x1
	IL_0046:            V_2=1;                                                      //stloc				V_2
	IL_004a:            /*goto IL_000d;*/goto IL_004c;                              //br.s				IL_000d
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_8=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0052:            Temp_9=Temp_8->Sealed;                                      //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_Sealed()
	IL_0057:            if(Temp_9)goto IL_0095;                                     //brtrue.s				IL_0095
	IL_0059:                                                                        //ldc.i4				0x0
	IL_005e:            V_2=0;                                                      //stloc				V_2
	IL_0062:            /*goto IL_000d;*/goto IL_0064;                              //br.s				IL_000d
	IL_0064:            goto IL_0066;                                               //br.s				IL_0066
	IL_0066:            Temp_4=gcnew Root::T_x30();                                 //newobj				void Root::T_x30::.ctor()
	IL_006b:            V_1=Temp_4;                                                 //stloc.1
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_5=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0072:                                                                        //ldloc.1
	IL_0073:            Temp_6=Temp_5->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0078:                                                                        //pop
	IL_0079:                                                                        //ldloc.1
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_7=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0080:            V_1->M_x1(Temp_7);                                          //callvirt				void Root::T_x30::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0085:                                                                        //ldc.i4				0x2
	IL_008a:            V_2=2;                                                      //stloc				V_2
	IL_008e:            /*goto IL_000d;*/goto IL_0093;                              //br				IL_000d
	IL_0093:            goto IL_0095;                                               //br.s				IL_0095
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_10=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_009b:                                                                        //ldarg.0
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_11=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_00a2:            Temp_12=this->M_x1(Temp_11);                                //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00a7:            Temp_10->AddRange(Temp_12);                                 //callvirt				void System::Windows::Forms::TreeNodeCollection::AddRange(array<System::Windows::Forms::TreeNode^>^)
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:            Temp_13=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_14=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_00b9:                                                                        //ldarg.1
	IL_00ba:            Temp_15=this->M_x12(Temp_14,A_0);                           //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x12(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_00bf:            Temp_13->AddRange(Temp_15);                                 //callvirt				void System::Windows::Forms::TreeNodeCollection::AddRange(array<System::Windows::Forms::TreeNode^>^)
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:            Temp_16=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:                                                                        //ldarg.0
	IL_00cc:            Temp_17=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_00d1:                                                                        //ldarg.1
	IL_00d2:            Temp_18=this->M_x2(Temp_17,A_0);                            //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x2(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_00d7:            Temp_16->AddRange(Temp_18);                                 //callvirt				void System::Windows::Forms::TreeNodeCollection::AddRange(array<System::Windows::Forms::TreeNode^>^)
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            Temp_19=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:                                                                        //ldarg.0
	IL_00e4:            Temp_20=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_00e9:                                                                        //ldarg.1
	IL_00ea:            Temp_21=this->M_x1(Temp_20,A_0);                            //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_00ef:            Temp_19->AddRange(Temp_21);                                 //callvirt				void System::Windows::Forms::TreeNodeCollection::AddRange(array<System::Windows::Forms::TreeNode^>^)
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            Temp_22=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00fa:                                                                        //ldarg.0
	IL_00fb:                                                                        //ldarg.0
	IL_00fc:            Temp_23=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0101:                                                                        //ldarg.1
	IL_0102:            Temp_24=this->M_x13(Temp_23,A_0);                           //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x13(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_0107:            Temp_22->AddRange(Temp_24);                                 //callvirt				void System::Windows::Forms::TreeNodeCollection::AddRange(array<System::Windows::Forms::TreeNode^>^)
	IL_010c:            return;                                                     //ret

}
inline void Root::T_x45::M_x1(System::EventArgs^ A_0)
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
inline void Root::T_x45::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_2 = nullptr;
	Root::T_x111^ Temp_3 = nullptr;
	Root::T_x102^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Root::T_x102^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Root::T_x102^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	//local variables.
	Root::T_x7^ V_0 = nullptr;
	Root::T_x111^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.4
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldtoken				Root::T_x7
	IL_0011:            Temp_0=Root::T_x7::typeid;                                  //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001b:                                                                        //castclass				Root::T_x7
	IL_0020:            V_0=safe_cast<Root::T_x7^>(Temp_1);                         //stloc.0
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_2=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0027:            Temp_3=gcnew Root::T_x111(safe_cast<System::Object^>(Temp_2));//newobj				void Root::T_x111::.ctor(System::Object^)
	IL_002c:            V_1=Temp_3;                                                 //stloc.1
	IL_002d:                                                                        //ldloc.0
	IL_002e:            Temp_4=V_0->M_x1();                                         //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_0033:                                                                        //ldloc.1
	IL_0034:            Temp_5=V_1->M_x12();                                        //callvirt				System::String^ Root::T_x111::M_x12()
	IL_0039:            Temp_6=Temp_4->M_x12(Temp_5);                               //callvirt				System::Boolean Root::T_x102::M_x12(System::String^)
	IL_003e:            if(!Temp_6)goto IL_0054;                                    //brfalse.s				IL_0054
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldloc.0
	IL_0043:            Temp_9=V_0->M_x1();                                         //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_0048:                                                                        //ldloc.1
	IL_0049:            Temp_10=V_1->M_x12();                                       //callvirt				System::String^ Root::T_x111::M_x12()
	IL_004e:            Temp_9->M_x2(Temp_10);                                      //callvirt				void Root::T_x102::M_x2(System::String^)
	IL_0053:            return;                                                     //ret
	IL_0054:                                                                        //ldloc.0
	IL_0055:            Temp_7=V_0->M_x1();                                         //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_005a:                                                                        //ldloc.1
	IL_005b:            Temp_8=V_1->M_x12();                                        //callvirt				System::String^ Root::T_x111::M_x12()
	IL_0060:            Temp_7->M_x1(Temp_8);                                       //callvirt				void Root::T_x102::M_x1(System::String^)
	IL_0065:            return;                                                     //ret

}
inline void Root::T_x45::M_x12(Reflector::CodeModel::ITypeDeclaration^ A_0)
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
	IL_0005:            this->M_x1(safe_cast<System::Object^>(A_0));                //call				void Root::T_x10::M_x1(System::Object^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=Root::T_x115::M_x5(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_0011:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_001e:                                                                        //dup
	IL_001f:            V_0=Temp_1;                                                 //stloc.0
	IL_0020:            this->SelectedImageIndex=V_0;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0025:                                                                        //ldloc.0
	IL_0026:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldarg.1
	IL_002d:            Temp_2=Root::T_x116::M_x2(safe_cast<Reflector::CodeModel::ITypeReference^>(A_0));//call				System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0032:            Temp_3=System::Drawing::Color::FromArgb(Temp_2);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0037:            this->ForeColor=Temp_3;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_003c:                                                                        //ldarg.0
	IL_003d:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0042:            return;                                                     //ret

}
inline array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x12(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_5 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_6 = nullptr;
	Root::T_x45::T_x1^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_9 = nullptr;
	Root::T_x37^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Boolean Temp_12 = false;
	System::Object^ Temp_13 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_14 = nullptr;
	Reflector::CodeModel::IType^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	Root::T_x38^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_19 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_20 = nullptr;
	Root::T_x12^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_2 = nullptr;
	Root::T_x37^ V_3 = nullptr;
	Root::T_x38^ V_4 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_5 = nullptr;
	Root::T_x12^ V_6 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_7 = nullptr;
	System::Collections::IEnumerator^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_11=6;                                                     //stloc				V_11
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_10
	IL_000f:            switch(V_10){case 0:goto IL_0289;case 1:goto IL_0090;case 2:goto IL_00dd;case 3:goto IL_029c;case 4:goto IL_0071;case 5:goto IL_00c2;case 6:goto IL_025d;case 7:goto IL_0270;case 8:goto IL_02ad;case 9:goto IL_00ad;};//switch				(IL_0289,IL_0090,IL_00dd,IL_029c,IL_0071,IL_00c2,IL_025d,IL_0270,IL_02ad,IL_00ad)
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0042:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0047:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_004c:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_0051:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_0052:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0057:            V_1=Temp_2;                                                 //stloc.1
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_3=Root::T_x115::M_x13(A_0,V_0);                        //call				System::Collections::ICollection^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeDeclaration^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_005f:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0064:            V_8=Temp_4;                                                 //stloc.s				V_8
	IL_0066:                                                                        //ldc.i4				0x4
	IL_006b:            V_10=4;                                                     //stloc				V_10
	IL_006f:            /*goto IL_000b;*/goto IL_0071;                              //br.s				IL_000b
	IL_0071:            /*goto IL_00e2;*/goto IL_00DD01;                            //br.s				IL_00e2
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldloc.s				V_5
	IL_0077:                                                                        //ldarg.2
	IL_0078:            Temp_19=this->M_x12(V_5,A_1);                               //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x12(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_007d:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_19));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0082:                                                                        //ldc.i4				0x1
	IL_0087:            V_10=1;                                                     //stloc				V_10
	IL_008b:            /*goto IL_000b;*/goto IL_0090;                              //br				IL_000b
	IL_0090:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_0092:                                                                        //ldarg.1
	IL_0093:            Temp_5=A_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0098:            Temp_6=Temp_5->Resolve();                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_009d:            V_5=Temp_6;                                                 //stloc.s				V_5
	IL_009f:                                                                        //ldc.i4				0x9
	IL_00a4:            V_10=9;                                                     //stloc				V_10
	IL_00a8:            /*goto IL_000b;*/goto IL_00ad;                              //br				IL_000b
	IL_00ad:                                                                        //ldloc.s				V_5
	IL_00af:            if(V_5==nullptr)goto IL_0227;                               //brfalse				IL_0227
	IL_00b4:                                                                        //ldc.i4				0x5
	IL_00b9:            V_10=5;                                                     //stloc				V_10
	IL_00bd:            /*goto IL_000b;*/goto IL_00c2;                              //br				IL_000b
	IL_00c2:            goto IL_0073;                                               //br.s				IL_0073
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:            Temp_7=gcnew Root::T_x45::T_x1();                           //newobj				void Root::T_x45::T_x1::.ctor()
	IL_00ca:            V_1->Sort(safe_cast<System::Collections::IComparer^>(Temp_7));//callvirt				void System::Collections::ArrayList::Sort(System::Collections::IComparer^)
	IL_00cf:                                                                        //ldc.i4				0x2
	IL_00d4:            V_10=2;                                                     //stloc				V_10
	IL_00d8:            /*goto IL_000b;*/goto IL_00dd;                              //br				IL_000b
	IL_00dd:            goto IL_02af;                                               //br				IL_02af
	IL_00DD01:          try{
	IL_00e2:                                                                        //ldc.i4				0x0
	IL_00e7:            V_10=0;                                                     //stloc				V_10
	IL_00eb:            /*goto IL_00ef;*/goto IL_00ed;                              //br.s				IL_00ef
	IL_00ed:            goto IL_0118;                                               //br.s				IL_0118
	IL_00ef:                                                                        //ldloc				V_10
	IL_00f3:            switch(V_10){case 0:goto IL_00ed;case 1:goto IL_0150;case 2:goto IL_0174;case 3:goto IL_01c1;case 4:goto IL_015d;case 5:goto IL_019c;case 6:goto IL_0132;case 7:goto IL_01d1;};//switch				(IL_00ed,IL_0150,IL_0174,IL_01c1,IL_015d,IL_019c,IL_0132,IL_01d1)
	IL_0118:            goto IL_0152;                                               //br.s				IL_0152
	IL_011a:                                                                        //ldloc.s				V_8
	IL_011c:            Temp_13=V_8->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0121:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_0126:            V_2=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_13);//stloc.2
	IL_0127:                                                                        //ldc.i4				0x6
	IL_012c:            V_10=6;                                                     //stloc				V_10
	IL_0130:            /*goto IL_00ef;*/goto IL_0132;                              //br.s				IL_00ef
	IL_0132:                                                                        //ldarg.0
	IL_0133:            Temp_14=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0138:                                                                        //ldloc.2
	IL_0139:            Temp_15=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_013e:            Temp_16=Temp_14->Equals(safe_cast<System::Object^>(Temp_15));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0143:            if(!Temp_16)goto IL_0176;                                   //brfalse.s				IL_0176
	IL_0145:                                                                        //ldc.i4				0x1
	IL_014a:            V_10=1;                                                     //stloc				V_10
	IL_014e:            /*goto IL_00ef;*/goto IL_0150;                              //br.s				IL_00ef
	IL_0150:            goto IL_019e;                                               //br.s				IL_019e
	IL_0152:                                                                        //ldc.i4				0x4
	IL_0157:            V_10=4;                                                     //stloc				V_10
	IL_015b:            /*goto IL_00ef;*/goto IL_015d;                              //br.s				IL_00ef
	IL_015d:                                                                        //ldloc.s				V_8
	IL_015f:            Temp_12=V_8->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0164:            if(Temp_12)goto IL_011a;                                    //brtrue.s				IL_011a
	IL_0166:                                                                        //ldc.i4				0x2
	IL_016b:            V_10=2;                                                     //stloc				V_10
	IL_016f:            /*goto IL_00ef;*/goto IL_0174;                              //br				IL_00ef
	IL_0174:            goto IL_01c3;                                               //br.s				IL_01c3
	IL_0176:            Temp_17=gcnew Root::T_x38();                                //newobj				void Root::T_x38::.ctor()
	IL_017b:            V_4=Temp_17;                                                //stloc.s				V_4
	IL_017d:                                                                        //ldloc.s				V_4
	IL_017f:                                                                        //ldloc.2
	IL_0180:            V_4->M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(V_2));//callvirt				void Root::T_x38::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_0185:                                                                        //ldloc.1
	IL_0186:                                                                        //ldloc.s				V_4
	IL_0188:            Temp_18=V_1->Add(safe_cast<System::Object^>(V_4));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_018d:                                                                        //pop
	IL_018e:                                                                        //ldc.i4				0x5
	IL_0193:            V_10=5;                                                     //stloc				V_10
	IL_0197:            /*goto IL_00ef;*/goto IL_019c;                              //br				IL_00ef
	IL_019c:            goto IL_0152;                                               //br.s				IL_0152
	IL_019e:            Temp_10=gcnew Root::T_x37();                                //newobj				void Root::T_x37::.ctor()
	IL_01a3:            V_3=Temp_10;                                                //stloc.3
	IL_01a4:                                                                        //ldloc.3
	IL_01a5:                                                                        //ldloc.2
	IL_01a6:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x37::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_01ab:                                                                        //ldloc.1
	IL_01ac:                                                                        //ldloc.3
	IL_01ad:            Temp_11=V_1->Add(safe_cast<System::Object^>(V_3));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01b2:                                                                        //pop
	IL_01b3:                                                                        //ldc.i4				0x3
	IL_01b8:            V_10=3;                                                     //stloc				V_10
	IL_01bc:            /*goto IL_00ef;*/goto IL_01c1;                              //br				IL_00ef
	IL_01c1:            goto IL_0152;                                               //br.s				IL_0152
	IL_01c3:                                                                        //ldc.i4				0x7
	IL_01c8:            V_10=7;                                                     //stloc				V_10
	IL_01cc:            /*goto IL_00ef;*/goto IL_01d1;                              //br				IL_00ef
	IL_01d1:            goto IL_028e;                                               //leave				IL_028e
	                    ;}
	                    finally{
	IL_01d6:            goto IL_01ed;                                               //br.s				IL_01ed
	IL_01d8:                                                                        //ldloc				V_10
	IL_01dc:            switch(V_10){case 0:goto IL_0224;case 1:goto IL_0210;case 2:goto IL_0201;};//switch				(IL_0224,IL_0210,IL_0201)
	IL_01ed:                                                                        //ldloc.s				V_8
	IL_01ef:                                                                        //isinst				System::IDisposable
	IL_01f4:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_01f6:                                                                        //ldc.i4				0x2
	IL_01fb:            V_10=2;                                                     //stloc				V_10
	IL_01ff:            /*goto IL_01d8;*/goto IL_0201;                              //br.s				IL_01d8
	IL_0201:                                                                        //ldloc.s				V_9
	IL_0203:            if(V_9==nullptr)goto IL_0226;                               //brfalse.s				IL_0226
	IL_0205:                                                                        //ldc.i4				0x1
	IL_020a:            V_10=1;                                                     //stloc				V_10
	IL_020e:            /*goto IL_01d8;*/goto IL_0210;                              //br.s				IL_01d8
	IL_0210:            goto IL_0212;                                               //br.s				IL_0212
	IL_0212:                                                                        //ldloc.s				V_9
	IL_0214:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0219:                                                                        //ldc.i4				0x0
	IL_021e:            V_10=0;                                                     //stloc				V_10
	IL_0222:            /*goto IL_01d8;*/goto IL_0224;                              //br.s				IL_01d8
	IL_0224:            goto IL_0226;                                               //br.s				IL_0226
	IL_0226:                                                                        //endfinally
	                    ;}
	IL_0227:            Temp_21=gcnew Root::T_x12();                                //newobj				void Root::T_x12::.ctor()
	IL_022c:            V_6=Temp_21;                                                //stloc.s				V_6
	IL_022e:                                                                        //ldloc.s				V_6
	IL_0230:                                                                        //ldstr				L"\x6723\x4725\x4627\x4429\x432B\x5A2D\x102F\x4031\x5133\x4535\x5737\x5639\x4A3B\x5B3D\x603F\x2041\x2543\x3545\x2D47\x6A49\x384B\x374D\x204F\x3751\x7A53"
	IL_0235:                                                                        //ldloc				V_11
	IL_0239:            Temp_22=a(L"\x6723\x4725\x4627\x4429\x432B\x5A2D\x102F\x4031\x5133\x4535\x5737\x5639\x4A3B\x5B3D\x603F\x2041\x2543\x3545\x2D47\x6A49\x384B\x374D\x204F\x3751\x7A53",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023e:            V_6->M_x1(Temp_22);                                         //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_0243:                                                                        //ldloc.1
	IL_0244:                                                                        //ldloc.s				V_6
	IL_0246:            Temp_23=V_1->Add(safe_cast<System::Object^>(V_6));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_024b:                                                                        //pop
	IL_024c:            goto IL_024f;                                               //br.s				IL_024f
	IL_024e:                                                                        //break
	IL_024f:                                                                        //ldc.i4				0x6
	IL_0254:            V_10=6;                                                     //stloc				V_10
	IL_0258:            /*goto IL_000b;*/goto IL_025d;                              //br				IL_000b
	IL_025d:            goto IL_00c4;                                               //br				IL_00c4
	IL_0262:                                                                        //ldc.i4				0x7
	IL_0267:            V_10=7;                                                     //stloc				V_10
	IL_026b:            /*goto IL_000b;*/goto IL_0270;                              //br				IL_000b
	IL_0270:                                                                        //ldarg.1
	IL_0271:            Temp_20=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0276:            if(Temp_20==nullptr)goto IL_00c4;                           //brfalse				IL_00c4
	IL_027b:                                                                        //ldc.i4				0x0
	IL_0280:            V_10=0;                                                     //stloc				V_10
	IL_0284:            /*goto IL_000b;*/goto IL_0289;                              //br				IL_000b
	IL_0289:            goto IL_0092;                                               //br				IL_0092
	IL_028e:                                                                        //ldc.i4				0x3
	IL_0293:            V_10=3;                                                     //stloc				V_10
	IL_0297:            /*goto IL_000b;*/goto IL_029c;                              //br				IL_000b
	IL_029c:                                                                        //ldarg.2
	IL_029d:            if(!A_1)goto IL_02af;                                       //brfalse.s				IL_02af
	IL_029f:                                                                        //ldc.i4				0x8
	IL_02a4:            V_10=8;                                                     //stloc				V_10
	IL_02a8:            /*goto IL_000b;*/goto IL_02ad;                              //br				IL_000b
	IL_02ad:            goto IL_0262;                                               //br.s				IL_0262
	IL_02af:                                                                        //ldloc.1
	IL_02b0:            Temp_8=V_1->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_02b5:                                                                        //conv.ovf.u4
	IL_02b6:            Temp_9=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_8));//newarr				System::Windows::Forms::TreeNode
	IL_02bb:            V_7=Temp_9;                                                 //stloc.s				V_7
	IL_02bd:                                                                        //ldloc.1
	IL_02be:                                                                        //ldloc.s				V_7
	IL_02c0:                                                                        //ldc.i4.0
	IL_02c1:            V_1->CopyTo(safe_cast<System::Array^>(V_7),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_02c6:                                                                        //ldloc.s				V_7
	IL_02c8:            return V_7;                                                 //ret

}
inline System::String^ Root::T_x45::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_0=8;                                                      //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6425\x5A27\x4529\x5B2B\x5D2D\x552F\x4031\x1A33\x6235\x4137\x4A39\x593B\x7A3D\x253F\x2141\x2843\x2745\x3A47\x2B49\x384B\x274D\x3F4F\x3C51"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6425\x5A27\x4529\x5B2B\x5D2D\x552F\x4031\x1A33\x6235\x4137\x4A39\x593B\x7A3D\x253F\x2141\x2843\x2745\x3A47\x2B49\x384B\x274D\x3F4F\x3C51",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x13(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	Root::T_x35^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	Root::T_x36^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Reflector::CodeModel::ITypeReference^ Temp_14 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_17 = nullptr;
	Root::T_x45::T_x1^ Temp_18 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_19 = nullptr;
	Root::T_x12^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_23 = nullptr;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_2 = nullptr;
	Root::T_x35^ V_3 = nullptr;
	Root::T_x36^ V_4 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_5 = nullptr;
	Root::T_x12^ V_6 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_7 = nullptr;
	System::Collections::IEnumerator^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_11=17;                                                    //stloc				V_11
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_10
	IL_000f:            switch(V_10){case 0:goto IL_0071;case 1:goto IL_0289;case 2:goto IL_00e0;case 3:goto IL_0093;case 4:goto IL_0270;case 5:goto IL_00b0;case 6:goto IL_02ad;case 7:goto IL_029c;case 8:goto IL_00c5;case 9:goto IL_025d;};//switch				(IL_0071,IL_0289,IL_00e0,IL_0093,IL_0270,IL_00b0,IL_02ad,IL_029c,IL_00c5,IL_025d)
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0042:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0047:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_004c:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_0051:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_0052:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0057:            V_1=Temp_2;                                                 //stloc.1
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_3=Root::T_x115::M_x8(A_0,V_0);                         //call				System::Collections::ICollection^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeDeclaration^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_005f:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0064:            V_8=Temp_4;                                                 //stloc.s				V_8
	IL_0066:                                                                        //ldc.i4				0x0
	IL_006b:            V_10=0;                                                     //stloc				V_10
	IL_006f:            /*goto IL_000b;*/goto IL_0071;                              //br.s				IL_000b
	IL_0071:            goto IL_0074;                                               //br.s				IL_0074
	IL_0073:                                                                        //break
	IL_0074:            /*goto IL_00e5;*/goto IL_00E001;                            //br.s				IL_00e5
	IL_0076:                                                                        //ldloc.1
	IL_0077:                                                                        //ldarg.0
	IL_0078:                                                                        //ldloc.s				V_5
	IL_007a:                                                                        //ldarg.2
	IL_007b:            Temp_23=this->M_x13(V_5,A_1);                               //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x13(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_0080:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_23));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0085:                                                                        //ldc.i4				0x3
	IL_008a:            V_10=3;                                                     //stloc				V_10
	IL_008e:            /*goto IL_000b;*/goto IL_0093;                              //br				IL_000b
	IL_0093:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_0095:                                                                        //ldarg.1
	IL_0096:            Temp_14=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_009b:            Temp_15=Temp_14->Resolve();                                 //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00a0:            V_5=Temp_15;                                                //stloc.s				V_5
	IL_00a2:                                                                        //ldc.i4				0x5
	IL_00a7:            V_10=5;                                                     //stloc				V_10
	IL_00ab:            /*goto IL_000b;*/goto IL_00b0;                              //br				IL_000b
	IL_00b0:                                                                        //ldloc.s				V_5
	IL_00b2:            if(V_5==nullptr)goto IL_022a;                               //brfalse				IL_022a
	IL_00b7:                                                                        //ldc.i4				0x8
	IL_00bc:            V_10=8;                                                     //stloc				V_10
	IL_00c0:            /*goto IL_000b;*/goto IL_00c5;                              //br				IL_000b
	IL_00c5:            goto IL_0076;                                               //br.s				IL_0076
	IL_00c7:                                                                        //ldloc.1
	IL_00c8:            Temp_18=gcnew Root::T_x45::T_x1();                          //newobj				void Root::T_x45::T_x1::.ctor()
	IL_00cd:            V_1->Sort(safe_cast<System::Collections::IComparer^>(Temp_18));//callvirt				void System::Collections::ArrayList::Sort(System::Collections::IComparer^)
	IL_00d2:                                                                        //ldc.i4				0x2
	IL_00d7:            V_10=2;                                                     //stloc				V_10
	IL_00db:            /*goto IL_000b;*/goto IL_00e0;                              //br				IL_000b
	IL_00e0:            goto IL_02af;                                               //br				IL_02af
	IL_00E001:          try{
	IL_00e5:                                                                        //ldc.i4				0x3
	IL_00ea:            V_10=3;                                                     //stloc				V_10
	IL_00ee:            /*goto IL_00f2;*/goto IL_00f0;                              //br.s				IL_00f2
	IL_00f0:            goto IL_011b;                                               //br.s				IL_011b
	IL_00f2:                                                                        //ldloc				V_10
	IL_00f6:            switch(V_10){case 0:goto IL_0153;case 1:goto IL_01c4;case 2:goto IL_0177;case 3:goto IL_00f0;case 4:goto IL_019f;case 5:goto IL_0160;case 6:goto IL_0135;case 7:goto IL_01d4;};//switch				(IL_0153,IL_01c4,IL_0177,IL_00f0,IL_019f,IL_0160,IL_0135,IL_01d4)
	IL_011b:            goto IL_0155;                                               //br.s				IL_0155
	IL_011d:                                                                        //ldloc.s				V_8
	IL_011f:            Temp_8=V_8->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0124:                                                                        //castclass				Reflector::CodeModel::IFieldDeclaration
	IL_0129:            V_2=safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_8);//stloc.2
	IL_012a:                                                                        //ldc.i4				0x6
	IL_012f:            V_10=6;                                                     //stloc				V_10
	IL_0133:            /*goto IL_00f2;*/goto IL_0135;                              //br.s				IL_00f2
	IL_0135:                                                                        //ldarg.0
	IL_0136:            Temp_9=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_013b:                                                                        //ldloc.2
	IL_013c:            Temp_10=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0141:            Temp_11=Temp_9->Equals(safe_cast<System::Object^>(Temp_10));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0146:            if(!Temp_11)goto IL_0179;                                   //brfalse.s				IL_0179
	IL_0148:                                                                        //ldc.i4				0x0
	IL_014d:            V_10=0;                                                     //stloc				V_10
	IL_0151:            /*goto IL_00f2;*/goto IL_0153;                              //br.s				IL_00f2
	IL_0153:            goto IL_01a1;                                               //br.s				IL_01a1
	IL_0155:                                                                        //ldc.i4				0x5
	IL_015a:            V_10=5;                                                     //stloc				V_10
	IL_015e:            /*goto IL_00f2;*/goto IL_0160;                              //br.s				IL_00f2
	IL_0160:                                                                        //ldloc.s				V_8
	IL_0162:            Temp_7=V_8->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0167:            if(Temp_7)goto IL_011d;                                     //brtrue.s				IL_011d
	IL_0169:                                                                        //ldc.i4				0x2
	IL_016e:            V_10=2;                                                     //stloc				V_10
	IL_0172:            /*goto IL_00f2;*/goto IL_0177;                              //br				IL_00f2
	IL_0177:            goto IL_01c6;                                               //br.s				IL_01c6
	IL_0179:            Temp_12=gcnew Root::T_x36();                                //newobj				void Root::T_x36::.ctor()
	IL_017e:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_0180:                                                                        //ldloc.s				V_4
	IL_0182:                                                                        //ldloc.2
	IL_0183:            V_4->M_x1(safe_cast<Reflector::CodeModel::IFieldReference^>(V_2));//callvirt				void Root::T_x36::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_0188:                                                                        //ldloc.1
	IL_0189:                                                                        //ldloc.s				V_4
	IL_018b:            Temp_13=V_1->Add(safe_cast<System::Object^>(V_4));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0190:                                                                        //pop
	IL_0191:                                                                        //ldc.i4				0x4
	IL_0196:            V_10=4;                                                     //stloc				V_10
	IL_019a:            /*goto IL_00f2;*/goto IL_019f;                              //br				IL_00f2
	IL_019f:            goto IL_0155;                                               //br.s				IL_0155
	IL_01a1:            Temp_5=gcnew Root::T_x35();                                 //newobj				void Root::T_x35::.ctor()
	IL_01a6:            V_3=Temp_5;                                                 //stloc.3
	IL_01a7:                                                                        //ldloc.3
	IL_01a8:                                                                        //ldloc.2
	IL_01a9:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x35::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_01ae:                                                                        //ldloc.1
	IL_01af:                                                                        //ldloc.3
	IL_01b0:            Temp_6=V_1->Add(safe_cast<System::Object^>(V_3));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01b5:                                                                        //pop
	IL_01b6:                                                                        //ldc.i4				0x1
	IL_01bb:            V_10=1;                                                     //stloc				V_10
	IL_01bf:            /*goto IL_00f2;*/goto IL_01c4;                              //br				IL_00f2
	IL_01c4:            goto IL_0155;                                               //br.s				IL_0155
	IL_01c6:                                                                        //ldc.i4				0x7
	IL_01cb:            V_10=7;                                                     //stloc				V_10
	IL_01cf:            /*goto IL_00f2;*/goto IL_01d4;                              //br				IL_00f2
	IL_01d4:            goto IL_028e;                                               //leave				IL_028e
	                    ;}
	                    finally{
	IL_01d9:            goto IL_01f0;                                               //br.s				IL_01f0
	IL_01db:                                                                        //ldloc				V_10
	IL_01df:            switch(V_10){case 0:goto IL_0213;case 1:goto IL_0204;case 2:goto IL_0227;};//switch				(IL_0213,IL_0204,IL_0227)
	IL_01f0:                                                                        //ldloc.s				V_8
	IL_01f2:                                                                        //isinst				System::IDisposable
	IL_01f7:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_01f9:                                                                        //ldc.i4				0x1
	IL_01fe:            V_10=1;                                                     //stloc				V_10
	IL_0202:            /*goto IL_01db;*/goto IL_0204;                              //br.s				IL_01db
	IL_0204:                                                                        //ldloc.s				V_9
	IL_0206:            if(V_9==nullptr)goto IL_0229;                               //brfalse.s				IL_0229
	IL_0208:                                                                        //ldc.i4				0x0
	IL_020d:            V_10=0;                                                     //stloc				V_10
	IL_0211:            /*goto IL_01db;*/goto IL_0213;                              //br.s				IL_01db
	IL_0213:            goto IL_0215;                                               //br.s				IL_0215
	IL_0215:                                                                        //ldloc.s				V_9
	IL_0217:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_021c:                                                                        //ldc.i4				0x2
	IL_0221:            V_10=2;                                                     //stloc				V_10
	IL_0225:            /*goto IL_01db;*/goto IL_0227;                              //br.s				IL_01db
	IL_0227:            goto IL_0229;                                               //br.s				IL_0229
	IL_0229:                                                                        //endfinally
	                    ;}
	IL_022a:            Temp_20=gcnew Root::T_x12();                                //newobj				void Root::T_x12::.ctor()
	IL_022f:            V_6=Temp_20;                                                //stloc.s				V_6
	IL_0231:                                                                        //ldloc.s				V_6
	IL_0233:                                                                        //ldstr				L"\x6C2E\x5030\x5D32\x5B34\x5836\x4D38\x1B3A\x4F3C\x5A3E\x3240\x2C42\x2944\x3146\x2C48\x6B4A\x2F4C\x2E4E\x2250\x3652\x7554\x2356\x2058\x2B5A\x385C\x715E"
	IL_0238:                                                                        //ldloc				V_11
	IL_023c:            Temp_21=a(L"\x6C2E\x5030\x5D32\x5B34\x5836\x4D38\x1B3A\x4F3C\x5A3E\x3240\x2C42\x2944\x3146\x2C48\x6B4A\x2F4C\x2E4E\x2250\x3652\x7554\x2356\x2058\x2B5A\x385C\x715E",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0241:            V_6->M_x1(Temp_21);                                         //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_0246:                                                                        //ldloc.1
	IL_0247:                                                                        //ldloc.s				V_6
	IL_0249:            Temp_22=V_1->Add(safe_cast<System::Object^>(V_6));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_024e:                                                                        //pop
	IL_024f:                                                                        //ldc.i4				0x9
	IL_0254:            V_10=9;                                                     //stloc				V_10
	IL_0258:            /*goto IL_000b;*/goto IL_025d;                              //br				IL_000b
	IL_025d:            goto IL_00c7;                                               //br				IL_00c7
	IL_0262:                                                                        //ldc.i4				0x4
	IL_0267:            V_10=4;                                                     //stloc				V_10
	IL_026b:            /*goto IL_000b;*/goto IL_0270;                              //br				IL_000b
	IL_0270:                                                                        //ldarg.1
	IL_0271:            Temp_19=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0276:            if(Temp_19==nullptr)goto IL_00c7;                           //brfalse				IL_00c7
	IL_027b:                                                                        //ldc.i4				0x1
	IL_0280:            V_10=1;                                                     //stloc				V_10
	IL_0284:            /*goto IL_000b;*/goto IL_0289;                              //br				IL_000b
	IL_0289:            goto IL_0095;                                               //br				IL_0095
	IL_028e:                                                                        //ldc.i4				0x7
	IL_0293:            V_10=7;                                                     //stloc				V_10
	IL_0297:            /*goto IL_000b;*/goto IL_029c;                              //br				IL_000b
	IL_029c:                                                                        //ldarg.2
	IL_029d:            if(!A_1)goto IL_02af;                                       //brfalse.s				IL_02af
	IL_029f:                                                                        //ldc.i4				0x6
	IL_02a4:            V_10=6;                                                     //stloc				V_10
	IL_02a8:            /*goto IL_000b;*/goto IL_02ad;                              //br				IL_000b
	IL_02ad:            goto IL_0262;                                               //br.s				IL_0262
	IL_02af:                                                                        //ldloc.1
	IL_02b0:            Temp_16=V_1->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_02b5:                                                                        //conv.ovf.u4
	IL_02b6:            Temp_17=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_16));//newarr				System::Windows::Forms::TreeNode
	IL_02bb:            V_7=Temp_17;                                                //stloc.s				V_7
	IL_02bd:                                                                        //ldloc.1
	IL_02be:                                                                        //ldloc.s				V_7
	IL_02c0:                                                                        //ldc.i4.0
	IL_02c1:            V_1->CopyTo(safe_cast<System::Array^>(V_7),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_02c6:                                                                        //ldloc.s				V_7
	IL_02c8:            return V_7;                                                 //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_0);//ret

}
inline void Root::T_x45::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x45^ Root::T_x45::M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0)
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
	IL_0012:            /*goto IL_0016;*/goto IL_001501;                            //br.s				IL_0016
	IL_0014:                                                                        //ldnull
	IL_0015:            return nullptr;                                             //ret
	IL_001501:          try{
	IL_0016:                                                                        //ldc.i4				0x5
	IL_001b:            V_5=5;                                                      //stloc				V_5
	IL_001f:            /*goto IL_0023;*/goto IL_0021;                              //br.s				IL_0023
	IL_0021:            goto IL_0050;                                               //br.s				IL_0050
	IL_0023:                                                                        //ldloc				V_5
	IL_0027:            switch(V_5){case 0:goto IL_00da;case 1:goto IL_00c3;case 2:goto IL_0070;case 3:goto IL_009e;case 4:goto IL_005d;case 5:goto IL_0021;case 6:goto IL_00b0;case 7:goto IL_00ea;case 8:goto IL_0090;};//switch				(IL_00da,IL_00c3,IL_0070,IL_009e,IL_005d,IL_0021,IL_00b0,IL_00ea,IL_0090)
	IL_0050:            goto IL_0052;                                               //br.s				IL_0052
	IL_0052:                                                                        //ldc.i4				0x4
	IL_0057:            V_5=4;                                                      //stloc				V_5
	IL_005b:            /*goto IL_0023;*/goto IL_005d;                              //br.s				IL_0023
	IL_005d:                                                                        //ldloc.3
	IL_005e:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0063:            if(Temp_3)goto IL_0072;                                     //brtrue.s				IL_0072
	IL_0065:                                                                        //ldc.i4				0x2
	IL_006a:            V_5=2;                                                      //stloc				V_5
	IL_006e:            /*goto IL_0023;*/goto IL_0070;                              //br.s				IL_0023
	IL_0070:            goto IL_00dc;                                               //br.s				IL_00dc
	IL_0072:                                                                        //ldloc.3
	IL_0073:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0078:                                                                        //castclass				Root::T_x10
	IL_007d:            V_0=safe_cast<Root::T_x10^>(Temp_4);                        //stloc.0
	IL_007e:                                                                        //ldloc.0
	IL_007f:                                                                        //isinst				Root::T_x45
	IL_0084:            V_1=dynamic_cast<Root::T_x45^>(V_0);                        //stloc.1
	IL_0085:                                                                        //ldc.i4				0x8
	IL_008a:            V_5=8;                                                      //stloc				V_5
	IL_008e:            /*goto IL_0023;*/goto IL_0090;                              //br.s				IL_0023
	IL_0090:                                                                        //ldloc.1
	IL_0091:            if(V_1==nullptr)goto IL_0052;                               //brfalse.s				IL_0052
	IL_0093:                                                                        //ldc.i4				0x3
	IL_0098:            V_5=3;                                                      //stloc				V_5
	IL_009c:            /*goto IL_0023;*/goto IL_009e;                              //br.s				IL_0023
	IL_009e:            goto IL_00b5;                                               //br.s				IL_00b5
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            V_2=V_1;                                                    //stloc.2
	IL_00a2:                                                                        //ldc.i4				0x6
	IL_00a7:            V_5=6;                                                      //stloc				V_5
	IL_00ab:            /*goto IL_0023;*/goto IL_00b0;                              //br				IL_0023
	IL_00b0:            goto IL_013f;                                               //leave				IL_013f
	IL_00b5:                                                                        //ldc.i4				0x1
	IL_00ba:            V_5=1;                                                      //stloc				V_5
	IL_00be:            /*goto IL_0023;*/goto IL_00c3;                              //br				IL_0023
	IL_00c3:                                                                        //ldarg.1
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:            Temp_2=V_1->M_x15();                                        //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_00ca:            if(A_0!=Temp_2)goto IL_0052;                                //bne.un.s				IL_0052
	IL_00cc:                                                                        //ldc.i4				0x0
	IL_00d1:            V_5=0;                                                      //stloc				V_5
	IL_00d5:            /*goto IL_0023;*/goto IL_00da;                              //br				IL_0023
	IL_00da:            goto IL_00a0;                                               //br.s				IL_00a0
	IL_00dc:                                                                        //ldc.i4				0x7
	IL_00e1:            V_5=7;                                                      //stloc				V_5
	IL_00e5:            /*goto IL_0023;*/goto IL_00ea;                              //br				IL_0023
	IL_00ea:            goto IL_0014;                                               //leave				IL_0014
	                    ;}
	                    finally{
	IL_00ef:            goto IL_0106;                                               //br.s				IL_0106
	IL_00f1:                                                                        //ldloc				V_6
	IL_00f5:            switch(V_6){case 0:goto IL_0128;case 1:goto IL_013c;case 2:goto IL_0119;};//switch				(IL_0128,IL_013c,IL_0119)
	IL_0106:                                                                        //ldloc.3
	IL_0107:                                                                        //isinst				System::IDisposable
	IL_010c:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_010e:                                                                        //ldc.i4				0x2
	IL_0113:            V_6=2;                                                      //stloc				V_6
	IL_0117:            /*goto IL_00f1;*/goto IL_0119;                              //br.s				IL_00f1
	IL_0119:                                                                        //ldloc.s				V_4
	IL_011b:            if(V_4==nullptr)goto IL_013e;                               //brfalse.s				IL_013e
	IL_011d:                                                                        //ldc.i4				0x0
	IL_0122:            V_6=0;                                                      //stloc				V_6
	IL_0126:            /*goto IL_00f1;*/goto IL_0128;                              //br.s				IL_00f1
	IL_0128:            goto IL_012a;                                               //br.s				IL_012a
	IL_012a:                                                                        //ldloc.s				V_4
	IL_012c:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0131:                                                                        //ldc.i4				0x1
	IL_0136:            V_6=1;                                                      //stloc				V_6
	IL_013a:            /*goto IL_00f1;*/goto IL_013c;                              //br.s				IL_00f1
	IL_013c:            goto IL_013e;                                               //br.s				IL_013e
	IL_013e:                                                                        //endfinally
	                    ;}
	IL_013f:            goto IL_0142;                                               //br.s				IL_0142
	IL_0141:                                                                        //break
	IL_0142:                                                                        //ldloc.2
	IL_0143:            return V_2;                                                 //ret

}
inline array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Collections::ICollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	Root::T_x45::T_x1^ Temp_5 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_6 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_9 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_10 = nullptr;
	Root::T_x42^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Boolean Temp_13 = false;
	System::Object^ Temp_14 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_15 = nullptr;
	Reflector::CodeModel::IType^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	Root::T_x43^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_20 = nullptr;
	Root::T_x12^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	//local variables.
	Reflector::CodeModel::IVisibilityConfiguration^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_2 = nullptr;
	Root::T_x42^ V_3 = nullptr;
	Root::T_x43^ V_4 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_5 = nullptr;
	Root::T_x12^ V_6 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_7 = nullptr;
	System::Collections::IEnumerator^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_11=15;                                                    //stloc				V_11
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_10
	IL_000f:            switch(V_10){case 0:goto IL_0265;case 1:goto IL_02b5;case 2:goto IL_0090;case 3:goto IL_0291;case 4:goto IL_02a4;case 5:goto IL_0278;case 6:goto IL_0071;case 7:goto IL_00c2;case 8:goto IL_00ad;case 9:goto IL_00e8;};//switch				(IL_0265,IL_02b5,IL_0090,IL_0291,IL_02a4,IL_0278,IL_0071,IL_00c2,IL_00ad,IL_00e8)
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0042:            Temp_0=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0047:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_004c:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_0051:            V_0=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_1);//stloc.0
	IL_0052:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0057:            V_1=Temp_2;                                                 //stloc.1
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_3=Root::T_x115::M_x12(A_0,V_0);                        //call				System::Collections::ICollection^ Root::T_x115::M_x12(Reflector::CodeModel::ITypeDeclaration^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_005f:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0064:            V_8=Temp_4;                                                 //stloc.s				V_8
	IL_0066:                                                                        //ldc.i4				0x6
	IL_006b:            V_10=6;                                                     //stloc				V_10
	IL_006f:            /*goto IL_000b;*/goto IL_0071;                              //br.s				IL_000b
	IL_0071:            /*goto IL_00ed;*/goto IL_00E801;                            //br.s				IL_00ed
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldloc.s				V_5
	IL_0077:                                                                        //ldarg.2
	IL_0078:            Temp_20=this->M_x2(V_5,A_1);                                //call				array<System::Windows::Forms::TreeNode^>^ Root::T_x45::M_x2(Reflector::CodeModel::ITypeDeclaration^,System::Boolean)
	IL_007d:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_20));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0082:                                                                        //ldc.i4				0x2
	IL_0087:            V_10=2;                                                     //stloc				V_10
	IL_008b:            /*goto IL_000b;*/goto IL_0090;                              //br				IL_000b
	IL_0090:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_0092:                                                                        //ldarg.1
	IL_0093:            Temp_6=A_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0098:            Temp_7=Temp_6->Resolve();                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_009d:            V_5=Temp_7;                                                 //stloc.s				V_5
	IL_009f:                                                                        //ldc.i4				0x8
	IL_00a4:            V_10=8;                                                     //stloc				V_10
	IL_00a8:            /*goto IL_000b;*/goto IL_00ad;                              //br				IL_000b
	IL_00ad:                                                                        //ldloc.s				V_5
	IL_00af:            if(V_5==nullptr)goto IL_0232;                               //brfalse				IL_0232
	IL_00b4:                                                                        //ldc.i4				0x7
	IL_00b9:            V_10=7;                                                     //stloc				V_10
	IL_00bd:            /*goto IL_000b;*/goto IL_00c2;                              //br				IL_000b
	IL_00c2:            goto IL_0073;                                               //br.s				IL_0073
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:            Temp_5=gcnew Root::T_x45::T_x1();                           //newobj				void Root::T_x45::T_x1::.ctor()
	IL_00ca:            V_1->Sort(safe_cast<System::Collections::IComparer^>(Temp_5));//callvirt				void System::Collections::ArrayList::Sort(System::Collections::IComparer^)
	IL_00cf:                                                                        //ldc.i4.2
	IL_00d0:                                                                        //dup
	IL_00d1:                                                                        //dup
	IL_00d2:                                                                        //ldc.i4.7
	IL_00d3:                                                                        //add
	IL_00d4:                                                                        //bgt				IL_00d0
	IL_00d9:                                                                        //pop
	IL_00da:                                                                        //ldc.i4				0x9
	IL_00df:            V_10=9;                                                     //stloc				V_10
	IL_00e3:            /*goto IL_000b;*/goto IL_00e8;                              //br				IL_000b
	IL_00e8:            goto IL_02b7;                                               //br				IL_02b7
	IL_00E801:          try{
	IL_00ed:                                                                        //ldc.i4				0x1
	IL_00f2:            V_10=1;                                                     //stloc				V_10
	IL_00f6:            /*goto IL_00fa;*/goto IL_00f8;                              //br.s				IL_00fa
	IL_00f8:            goto IL_0123;                                               //br.s				IL_0123
	IL_00fa:                                                                        //ldloc				V_10
	IL_00fe:            switch(V_10){case 0:goto IL_015b;case 1:goto IL_00f8;case 2:goto IL_0168;case 3:goto IL_01a7;case 4:goto IL_017f;case 5:goto IL_013d;case 6:goto IL_01dc;case 7:goto IL_01cc;};//switch				(IL_015b,IL_00f8,IL_0168,IL_01a7,IL_017f,IL_013d,IL_01dc,IL_01cc)
	IL_0123:            goto IL_015d;                                               //br.s				IL_015d
	IL_0125:                                                                        //ldloc.s				V_8
	IL_0127:            Temp_14=V_8->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_012c:                                                                        //castclass				Reflector::CodeModel::IPropertyDeclaration
	IL_0131:            V_2=safe_cast<Reflector::CodeModel::IPropertyDeclaration^>(Temp_14);//stloc.2
	IL_0132:                                                                        //ldc.i4				0x5
	IL_0137:            V_10=5;                                                     //stloc				V_10
	IL_013b:            /*goto IL_00fa;*/goto IL_013d;                              //br.s				IL_00fa
	IL_013d:                                                                        //ldarg.0
	IL_013e:            Temp_15=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0143:                                                                        //ldloc.2
	IL_0144:            Temp_16=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0149:            Temp_17=Temp_15->Equals(safe_cast<System::Object^>(Temp_16));//callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_014e:            if(!Temp_17)goto IL_0181;                                   //brfalse.s				IL_0181
	IL_0150:                                                                        //ldc.i4				0x0
	IL_0155:            V_10=0;                                                     //stloc				V_10
	IL_0159:            /*goto IL_00fa;*/goto IL_015b;                              //br.s				IL_00fa
	IL_015b:            goto IL_01a9;                                               //br.s				IL_01a9
	IL_015d:                                                                        //ldc.i4				0x2
	IL_0162:            V_10=2;                                                     //stloc				V_10
	IL_0166:            /*goto IL_00fa;*/goto IL_0168;                              //br.s				IL_00fa
	IL_0168:                                                                        //ldloc.s				V_8
	IL_016a:            Temp_13=V_8->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_016f:            if(Temp_13)goto IL_0125;                                    //brtrue.s				IL_0125
	IL_0171:                                                                        //ldc.i4				0x4
	IL_0176:            V_10=4;                                                     //stloc				V_10
	IL_017a:            /*goto IL_00fa;*/goto IL_017f;                              //br				IL_00fa
	IL_017f:            goto IL_01ce;                                               //br.s				IL_01ce
	IL_0181:            Temp_18=gcnew Root::T_x43();                                //newobj				void Root::T_x43::.ctor()
	IL_0186:            V_4=Temp_18;                                                //stloc.s				V_4
	IL_0188:                                                                        //ldloc.s				V_4
	IL_018a:                                                                        //ldloc.2
	IL_018b:            V_4->M_x1(safe_cast<Reflector::CodeModel::IPropertyReference^>(V_2));//callvirt				void Root::T_x43::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_0190:                                                                        //ldloc.1
	IL_0191:                                                                        //ldloc.s				V_4
	IL_0193:            Temp_19=V_1->Add(safe_cast<System::Object^>(V_4));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0198:                                                                        //pop
	IL_0199:                                                                        //ldc.i4				0x3
	IL_019e:            V_10=3;                                                     //stloc				V_10
	IL_01a2:            /*goto IL_00fa;*/goto IL_01a7;                              //br				IL_00fa
	IL_01a7:            goto IL_015d;                                               //br.s				IL_015d
	IL_01a9:            Temp_11=gcnew Root::T_x42();                                //newobj				void Root::T_x42::.ctor()
	IL_01ae:            V_3=Temp_11;                                                //stloc.3
	IL_01af:                                                                        //ldloc.3
	IL_01b0:                                                                        //ldloc.2
	IL_01b1:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x42::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_01b6:                                                                        //ldloc.1
	IL_01b7:                                                                        //ldloc.3
	IL_01b8:            Temp_12=V_1->Add(safe_cast<System::Object^>(V_3));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01bd:                                                                        //pop
	IL_01be:                                                                        //ldc.i4				0x7
	IL_01c3:            V_10=7;                                                     //stloc				V_10
	IL_01c7:            /*goto IL_00fa;*/goto IL_01cc;                              //br				IL_00fa
	IL_01cc:            goto IL_015d;                                               //br.s				IL_015d
	IL_01ce:                                                                        //ldc.i4				0x6
	IL_01d3:            V_10=6;                                                     //stloc				V_10
	IL_01d7:            /*goto IL_00fa;*/goto IL_01dc;                              //br				IL_00fa
	IL_01dc:            goto IL_0296;                                               //leave				IL_0296
	                    ;}
	                    finally{
	IL_01e1:            goto IL_01f8;                                               //br.s				IL_01f8
	IL_01e3:                                                                        //ldloc				V_10
	IL_01e7:            switch(V_10){case 0:goto IL_022f;case 1:goto IL_021b;case 2:goto IL_020c;};//switch				(IL_022f,IL_021b,IL_020c)
	IL_01f8:                                                                        //ldloc.s				V_8
	IL_01fa:                                                                        //isinst				System::IDisposable
	IL_01ff:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_0201:                                                                        //ldc.i4				0x2
	IL_0206:            V_10=2;                                                     //stloc				V_10
	IL_020a:            /*goto IL_01e3;*/goto IL_020c;                              //br.s				IL_01e3
	IL_020c:                                                                        //ldloc.s				V_9
	IL_020e:            if(V_9==nullptr)goto IL_0231;                               //brfalse.s				IL_0231
	IL_0210:                                                                        //ldc.i4				0x1
	IL_0215:            V_10=1;                                                     //stloc				V_10
	IL_0219:            /*goto IL_01e3;*/goto IL_021b;                              //br.s				IL_01e3
	IL_021b:            goto IL_021d;                                               //br.s				IL_021d
	IL_021d:                                                                        //ldloc.s				V_9
	IL_021f:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0224:                                                                        //ldc.i4				0x0
	IL_0229:            V_10=0;                                                     //stloc				V_10
	IL_022d:            /*goto IL_01e3;*/goto IL_022f;                              //br.s				IL_01e3
	IL_022f:            goto IL_0231;                                               //br.s				IL_0231
	IL_0231:                                                                        //endfinally
	                    ;}
	IL_0232:            Temp_21=gcnew Root::T_x12();                                //newobj				void Root::T_x12::.ctor()
	IL_0237:            V_6=Temp_21;                                                //stloc.s				V_6
	IL_0239:                                                                        //ldloc.s				V_6
	IL_023b:                                                                        //ldstr				L"\x6E2C\x4E2E\x5F30\x5D32\x5A34\x4336\x1938\x493A\x583C\x4C3E\x2E40\x2F42\x3344\x2246\x6948\x294A\x2C4C\x3C4E\x3450\x7352\x2154\x2E56\x2958\x3E5A\x735C"
	IL_0240:                                                                        //ldloc				V_11
	IL_0244:            Temp_22=a(L"\x6E2C\x4E2E\x5F30\x5D32\x5A34\x4336\x1938\x493A\x583C\x4C3E\x2E40\x2F42\x3344\x2246\x6948\x294A\x2C4C\x3C4E\x3450\x7352\x2154\x2E56\x2958\x3E5A\x735C",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0249:            V_6->M_x1(Temp_22);                                         //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_024e:                                                                        //ldloc.1
	IL_024f:                                                                        //ldloc.s				V_6
	IL_0251:            Temp_23=V_1->Add(safe_cast<System::Object^>(V_6));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0256:                                                                        //pop
	IL_0257:                                                                        //ldc.i4				0x0
	IL_025c:            V_10=0;                                                     //stloc				V_10
	IL_0260:            /*goto IL_000b;*/goto IL_0265;                              //br				IL_000b
	IL_0265:            goto IL_00c4;                                               //br				IL_00c4
	IL_026a:                                                                        //ldc.i4				0x5
	IL_026f:            V_10=5;                                                     //stloc				V_10
	IL_0273:            /*goto IL_000b;*/goto IL_0278;                              //br				IL_000b
	IL_0278:                                                                        //ldarg.1
	IL_0279:            Temp_10=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_027e:            if(Temp_10==nullptr)goto IL_00c4;                           //brfalse				IL_00c4
	IL_0283:                                                                        //ldc.i4				0x3
	IL_0288:            V_10=3;                                                     //stloc				V_10
	IL_028c:            /*goto IL_000b;*/goto IL_0291;                              //br				IL_000b
	IL_0291:            goto IL_0092;                                               //br				IL_0092
	IL_0296:                                                                        //ldc.i4				0x4
	IL_029b:            V_10=4;                                                     //stloc				V_10
	IL_029f:            /*goto IL_000b;*/goto IL_02a4;                              //br				IL_000b
	IL_02a4:                                                                        //ldarg.2
	IL_02a5:            if(!A_1)goto IL_02b7;                                       //brfalse.s				IL_02b7
	IL_02a7:                                                                        //ldc.i4				0x1
	IL_02ac:            V_10=1;                                                     //stloc				V_10
	IL_02b0:            /*goto IL_000b;*/goto IL_02b5;                              //br				IL_000b
	IL_02b5:            goto IL_026a;                                               //br.s				IL_026a
	IL_02b7:                                                                        //ldloc.1
	IL_02b8:            Temp_8=V_1->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_02bd:                                                                        //conv.ovf.u4
	IL_02be:            Temp_9=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_8));//newarr				System::Windows::Forms::TreeNode
	IL_02c3:            V_7=Temp_9;                                                 //stloc.s				V_7
	IL_02c5:                                                                        //ldloc.1
	IL_02c6:                                                                        //ldloc.s				V_7
	IL_02c8:                                                                        //ldc.i4.0
	IL_02c9:            V_1->CopyTo(safe_cast<System::Array^>(V_7),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_02ce:                                                                        //ldloc.s				V_7
	IL_02d0:            return V_7;                                                 //ret

}
inline void Root::T_x45::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::IConfiguration^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	//local variables.
	Reflector::IConfigurationManager^ V_0 = nullptr;
	Reflector::IConfiguration^ V_1 = nullptr;
	System::Boolean V_2 = false;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_4=9;                                                      //stloc				V_4
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_008b;case 1:goto IL_007e;case 2:goto IL_009c;case 3:goto IL_005d;};//switch				(IL_008b,IL_007e,IL_009c,IL_005d)
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldtoken				Reflector::IConfigurationManager
	IL_002a:            Temp_0=Reflector::IConfigurationManager::typeid;            //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_002f:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0034:                                                                        //castclass				Reflector::IConfigurationManager
	IL_0039:            V_0=safe_cast<Reflector::IConfigurationManager^>(Temp_1);   //stloc.0
	IL_003a:                                                                        //ldloc.0
	IL_003b:                                                                        //ldstr				L"\x6626\x5A28\x582A\x482C\x422E\x5330\x5F32\x4C34\x7536\x4B38\x543A\x4A3C\x4C3E\x2440\x3142"
	IL_0040:                                                                        //ldloc				V_4
	IL_0044:            Temp_2=a(L"\x6626\x5A28\x582A\x482C\x422E\x5330\x5F32\x4C34\x7536\x4B38\x543A\x4A3C\x4C3E\x2440\x3142",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0049:            Temp_3=V_0[Temp_2];                                         //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_004e:            V_1=Temp_3;                                                 //stloc.1
	IL_004f:            goto IL_0052;                                               //br.s				IL_0052
	IL_0051:                                                                        //break
	IL_0052:                                                                        //ldc.i4				0x3
	IL_0057:            V_3=3;                                                      //stloc				V_3
	IL_005b:            /*goto IL_000b;*/goto IL_005d;                              //br.s				IL_000b
	IL_005d:                                                                        //ldloc.1
	IL_005e:                                                                        //ldstr				L"\x7426\x4128\x442A\x5A2C\x662E\x5F30\x5B32\x5034\x4536\x5038\x4F3A\x583C\x5B3E\x0C40\x2642\x2844\x2546\x2C48\x394A\x3E4C"
	IL_0063:                                                                        //ldloc				V_4
	IL_0067:            Temp_8=a(L"\x7426\x4128\x442A\x5A2C\x662E\x5F30\x5B32\x5034\x4536\x5038\x4F3A\x583C\x5B3E\x0C40\x2642\x2844\x2546\x2C48\x394A\x3E4C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006c:            Temp_9=V_1->HasProperty(Temp_8);                            //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_0071:            if(!Temp_9)goto IL_0080;                                    //brfalse.s				IL_0080
	IL_0073:                                                                        //ldc.i4				0x1
	IL_0078:            V_3=1;                                                      //stloc				V_3
	IL_007c:            /*goto IL_000b;*/goto IL_007e;                              //br.s				IL_000b
	IL_007e:            goto IL_008e;                                               //br.s				IL_008e
	IL_0080:                                                                        //ldc.i4				0x0
	IL_0085:            V_3=0;                                                      //stloc				V_3
	IL_0089:            /*goto IL_000b;*/goto IL_008b;                              //br.s				IL_000b
	IL_008b:                                                                        //ldc.i4.0
	IL_008c:            Temp_10=false;goto IL_00c5;                                 //br.s				IL_00c5
	IL_008e:                                                                        //ldc.i4				0x2
	IL_0093:            V_3=2;                                                      //stloc				V_3
	IL_0097:            /*goto IL_000b;*/goto IL_009c;                              //br				IL_000b
	IL_009c:                                                                        //ldloc.1
	IL_009d:                                                                        //ldstr				L"\x7426\x4128\x442A\x5A2C\x662E\x5F30\x5B32\x5034\x4536\x5038\x4F3A\x583C\x5B3E\x0C40\x2642\x2844\x2546\x2C48\x394A\x3E4C"
	IL_00a2:                                                                        //ldloc				V_4
	IL_00a6:            Temp_4=a(L"\x7426\x4128\x442A\x5A2C\x662E\x5F30\x5B32\x5034\x4536\x5038\x4F3A\x583C\x5B3E\x0C40\x2642\x2844\x2546\x2C48\x394A\x3E4C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ab:            Temp_5=V_1->GetProperty(Temp_4);                            //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_00b0:                                                                        //ldstr				L"\x4126\x4828\x472A\x5E2C\x4A2E"
	IL_00b5:                                                                        //ldloc				V_4
	IL_00b9:            Temp_6=a(L"\x4126\x4828\x472A\x5E2C\x4A2E",V_4);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00be:            Temp_7=(Temp_5 != Temp_6);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_00c3:            Temp_10=Temp_7;goto IL_00c5;                                //br.s				IL_00c5
	IL_00c5:            V_2=safe_cast<System::Boolean>(Temp_10);/*warning ! semantic stack doesn't empty at joint !;*///stloc.2
	IL_00c6:                                                                        //ldarg.0
	IL_00c7:                                                                        //ldloc.2
	IL_00c8:            this->M_x1(V_2);                                            //call				void Root::T_x45::M_x1(System::Boolean)
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:                                                                        //ldarg.1
	IL_00cf:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_00d4:            return;                                                     //ret

}
inline void Root::T_x45::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Windows::Forms::DialogResult Temp_5 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::Runtime::InteropServices::ExternalException^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_1=13;                                                     //stloc				V_1
	IL_000501:          try{
	IL_0009:                                                                        //ldc.i4.6
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_001a:            Temp_1=Root::T_x115::M_x8(safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_001f:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_1));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0024:            goto IL_004c;                                               //leave.s				IL_004c
	                    ;}
	                    catch(System::Runtime::InteropServices::ExternalException^ Ex_002402){
	IL_0026:            V_0=Ex_002402;                                              //stloc.0
	IL_0027:                                                                        //ldnull
	IL_0028:                                                                        //ldloc.0
	IL_0029:            Temp_2=V_0->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_002e:                                                                        //ldstr				L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246"
	IL_0033:                                                                        //ldloc				V_1
	IL_0037:            Temp_3=a(L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003c:            Temp_4=Root::T_x128::M_x1(Temp_3);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0041:                                                                        //ldc.i4.0
	IL_0042:                                                                        //ldc.i4.s				16
	IL_0044:            Temp_5=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_2,Temp_4,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0049:                                                                        //pop
	IL_004a:            goto IL_004c;                                               //leave.s				IL_004c
	                    ;}
	IL_004c:            return;                                                     //ret

}
inline void Root::T_x45::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0006:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::TreeNodeCollection::Clear()
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldc.i4.1
	IL_000d:            this->M_x1(true);                                           //call				void Root::T_x45::M_x1(System::Boolean)
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x45::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_9 = nullptr;
	Root::T_x114^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_12 = nullptr;
	Root::T_x123^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_2=8;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0xb
	IL_000e:            V_1=11;                                                     //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0077;                                               //br.s				IL_0077
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0122;case 1:goto IL_01fd;case 2:goto IL_01a9;case 3:goto IL_0354;case 4:goto IL_01db;case 5:goto IL_026e;case 6:goto IL_02a0;case 7:goto IL_0332;case 8:goto IL_02ba;case 9:goto IL_010f;case 10:goto IL_0180;case 11:goto IL_0014;case 12:goto IL_0311;case 13:goto IL_0144;case 14:goto IL_01c8;case 15:goto IL_027e;case 16:goto IL_015e;case 17:goto IL_02dc;case 18:goto IL_02ef;case 19:goto IL_0226;case 20:goto IL_0258;case 21:goto IL_0245;};//switch				(IL_0122,IL_01fd,IL_01a9,IL_0354,IL_01db,IL_026e,IL_02a0,IL_0332,IL_02ba,IL_010f,IL_0180,IL_0014,IL_0311,IL_0144,IL_01c8,IL_027e,IL_015e,IL_02dc,IL_02ef,IL_0226,IL_0258,IL_0245)
	IL_0077:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41"
	IL_007c:                                                                        //ldloc				V_2
	IL_0080:            Temp_14=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0085:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0643\x2745\x3B47\x2F49\x184B\x374D\x204F\x3751"
	IL_008a:                                                                        //ldloc				V_2
	IL_008e:            Temp_15=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0643\x2745\x3B47\x2F49\x184B\x374D\x204F\x3751",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0093:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0D43\x2845\x2047\x2F49\x3E4B\x274D\x244F\x3751\x3053\x1B55\x3D57\x3759\x3E5B\x3B5D\x125F\x1161"
	IL_0098:                                                                        //ldloc				V_2
	IL_009c:            Temp_16=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0D43\x2845\x2047\x2F49\x3E4B\x274D\x244F\x3751\x3053\x1B55\x3D57\x3759\x3E5B\x3B5D\x125F\x1161",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a1:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2945\x2B47\x3F49\x214B\x2B4D\x3E4F\x2651\x3553\x2255\x3157\x3559\x325B"
	IL_00a6:                                                                        //ldloc				V_2
	IL_00aa:            Temp_17=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2945\x2B47\x3F49\x214B\x2B4D\x3E4F\x2651\x3553\x2255\x3157\x3559\x325B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00af:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2F45\x3B47\x2B49\x3F4B\x3D4D\x354F\x3F51\x3653\x3A55\x3D57\x2859"
	IL_00b4:                                                                        //ldloc				V_2
	IL_00b8:            Temp_18=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2F45\x3B47\x2B49\x3F4B\x3D4D\x354F\x3F51\x3653\x3A55\x3D57\x2859",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bd:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x683B\x513D\x273F\x2541\x2843\x2345\x0A47\x2549\x234B\x254D\x3D4F\x3351\x2653\x3D55"
	IL_00c2:                                                                        //ldloc				V_2
	IL_00c6:            Temp_19=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x683B\x513D\x273F\x2541\x2843\x2345\x0A47\x2549\x234B\x254D\x3D4F\x3351\x2653\x3D55",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cb:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0547\x3949\x284B\x204D"
	IL_00d0:                                                                        //ldloc				V_2
	IL_00d4:            Temp_20=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0547\x3949\x284B\x204D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d9:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0F47\x2549\x234B\x294D\x3C4F\x3751"
	IL_00de:                                                                        //ldloc				V_2
	IL_00e2:            Temp_21=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0F47\x2549\x234B\x294D\x3C4F\x3751",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e7:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0543\x2845\x2947\x2649\x354B\x344D\x354F\x2051"
	IL_00ec:                                                                        //ldloc				V_2
	IL_00f0:            Temp_22=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0543\x2845\x2947\x2649\x354B\x344D\x354F\x2051",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f5:            goto IL_024a;                                               //leave				IL_024a
	IL_00fa:                                                                        //ldarg.0
	IL_00fb:            this->M_x8();                                               //call				void Root::T_x45::M_x8()
	IL_0100:            return;                                                     //ret
	IL_0101:                                                                        //ldc.i4				0x9
	IL_0106:            V_1=9;                                                      //stloc				V_1
	IL_010a:            /*goto IL_0016;*/goto IL_010f;                              //br				IL_0016
	IL_010f:            goto IL_0360;                                               //br				IL_0360
	IL_0114:                                                                        //ldc.i4				0x0
	IL_0119:            V_1=0;                                                      //stloc				V_1
	IL_011d:            /*goto IL_0016;*/goto IL_0122;                              //br				IL_0016
	IL_0122:                                                                        //ldloc.0
	IL_0123:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0D43\x2845\x2047\x2F49\x3E4B\x274D\x244F\x3751\x3053\x1B55\x3D57\x3759\x3E5B\x3B5D\x125F\x1161"
	IL_0128:                                                                        //ldloc				V_2
	IL_012c:            Temp_0=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0D43\x2845\x2047\x2F49\x3E4B\x274D\x244F\x3751\x3053\x1B55\x3D57\x3759\x3E5B\x3B5D\x125F\x1161",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0131:            if(V_0==Temp_0)goto IL_0182;                                //beq.s				IL_0182
	IL_0133:            goto IL_0136;                                               //br.s				IL_0136
	IL_0135:                                                                        //break
	IL_0136:                                                                        //ldc.i4				0xd
	IL_013b:            V_1=13;                                                     //stloc				V_1
	IL_013f:            /*goto IL_0016;*/goto IL_0144;                              //br				IL_0016
	IL_0144:            goto IL_01cd;                                               //br				IL_01cd
	IL_0149:                                                                        //ldarg.0
	IL_014a:            this->M_x12();                                              //call				void Root::T_x45::M_x12()
	IL_014f:            return;                                                     //ret
	IL_0150:                                                                        //ldc.i4				0x10
	IL_0155:            V_1=16;                                                     //stloc				V_1
	IL_0159:            /*goto IL_0016;*/goto IL_015e;                              //br				IL_0016
	IL_015e:                                                                        //ldloc.0
	IL_015f:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0643\x2745\x3B47\x2F49\x184B\x374D\x204F\x3751"
	IL_0164:                                                                        //ldloc				V_2
	IL_0168:            Temp_7=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7B3B\x513D\x143F\x2D41\x0643\x2745\x3B47\x2F49\x184B\x374D\x204F\x3751",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016d:            if(V_0==Temp_7)goto IL_031d;                                //beq				IL_031d
	IL_0172:                                                                        //ldc.i4				0xa
	IL_0177:            V_1=10;                                                     //stloc				V_1
	IL_017b:            /*goto IL_0016;*/goto IL_0180;                              //br				IL_0016
	IL_0180:            goto IL_0114;                                               //br.s				IL_0114
	IL_0182:                                                                        //ldarg.0
	IL_0183:            this->M_x5();                                               //call				void Root::T_x45::M_x5()
	IL_0188:            return;                                                     //ret
	IL_0189:                                                                        //ldarg.0
	IL_018a:            Temp_9=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_018f:                                                                        //ldarg.0
	IL_0190:            Temp_10=gcnew Root::T_x114(safe_cast<System::Object^>(Temp_9),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x114::.ctor(System::Object^,System::IServiceProvider^)
	IL_0195:            Temp_10->M_x1();                                            //call				void Root::T_x114::M_x1()
	IL_019a:            return;                                                     //ret
	IL_019b:                                                                        //ldc.i4				0x2
	IL_01a0:            V_1=2;                                                      //stloc				V_1
	IL_01a4:            /*goto IL_0016;*/goto IL_01a9;                              //br				IL_0016
	IL_01a9:                                                                        //ldloc.0
	IL_01aa:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0543\x2845\x2947\x2649\x354B\x344D\x354F\x2051"
	IL_01af:                                                                        //ldloc				V_2
	IL_01b3:            Temp_1=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0543\x2845\x2947\x2649\x354B\x344D\x354F\x2051",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b8:            if(V_0==Temp_1)goto IL_0211;                                //beq.s				IL_0211
	IL_01ba:                                                                        //ldc.i4				0xe
	IL_01bf:            V_1=14;                                                     //stloc				V_1
	IL_01c3:            /*goto IL_0016;*/goto IL_01c8;                              //br				IL_0016
	IL_01c8:            goto IL_0101;                                               //br				IL_0101
	IL_01cd:                                                                        //ldc.i4				0x4
	IL_01d2:            V_1=4;                                                      //stloc				V_1
	IL_01d6:            /*goto IL_0016;*/goto IL_01db;                              //br				IL_0016
	IL_01db:                                                                        //ldloc.0
	IL_01dc:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2945\x2B47\x3F49\x214B\x2B4D\x3E4F\x2651\x3553\x2255\x3157\x3559\x325B"
	IL_01e1:                                                                        //ldloc				V_2
	IL_01e5:            Temp_2=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2945\x2B47\x3F49\x214B\x2B4D\x3E4F\x2651\x3553\x2255\x3157\x3559\x325B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ea:            if(V_0==Temp_2)goto IL_00fa;                                //beq				IL_00fa
	IL_01ef:                                                                        //ldc.i4				0x1
	IL_01f4:            V_1=1;                                                      //stloc				V_1
	IL_01f8:            /*goto IL_0016;*/goto IL_01fd;                              //br				IL_0016
	IL_01fd:            goto IL_0270;                                               //br.s				IL_0270
	IL_01ff:                                                                        //ldarg.0
	IL_0200:            Temp_12=this->M_x15();                                      //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0205:                                                                        //ldarg.0
	IL_0206:            Temp_13=gcnew Root::T_x123(safe_cast<System::Object^>(Temp_12),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x123::.ctor(System::Object^,System::IServiceProvider^)
	IL_020b:            Temp_13->M_x1();                                            //call				void Root::T_x123::M_x1()
	IL_0210:            return;                                                     //ret
	IL_0211:                                                                        //ldarg.0
	IL_0212:            this->M_x16();                                              //call				void Root::T_x10::M_x16()
	IL_0217:            return;                                                     //ret
	IL_0218:                                                                        //ldc.i4				0x13
	IL_021d:            V_1=19;                                                     //stloc				V_1
	IL_0221:            /*goto IL_0016;*/goto IL_0226;                              //br				IL_0016
	IL_0226:                                                                        //ldloc.0
	IL_0227:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0547\x3949\x284B\x204D"
	IL_022c:                                                                        //ldloc				V_2
	IL_0230:            Temp_11=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0547\x3949\x284B\x204D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0235:            if(V_0==Temp_11)goto IL_01ff;                               //beq.s				IL_01ff
	IL_0237:                                                                        //ldc.i4				0x15
	IL_023c:            V_1=21;                                                     //stloc				V_1
	IL_0240:            /*goto IL_0016;*/goto IL_0245;                              //br				IL_0016
	IL_0245:            goto IL_02e1;                                               //br				IL_02e1
	IL_024a:                                                                        //ldc.i4				0x14
	IL_024f:            V_1=20;                                                     //stloc				V_1
	IL_0253:            /*goto IL_0016;*/goto IL_0258;                              //br				IL_0016
	IL_0258:                                                                        //ldarg.1
	IL_0259:                                                                        //dup
	IL_025a:            V_0=A_0;                                                    //stloc.0
	IL_025b:            if(V_0==nullptr)goto IL_0360;                               //brfalse				IL_0360
	IL_0260:                                                                        //ldc.i4				0x5
	IL_0265:            V_1=5;                                                      //stloc				V_1
	IL_0269:            /*goto IL_0016;*/goto IL_026e;                              //br				IL_0016
	IL_026e:            goto IL_02a5;                                               //br.s				IL_02a5
	IL_0270:                                                                        //ldc.i4				0xf
	IL_0275:            V_1=15;                                                     //stloc				V_1
	IL_0279:            /*goto IL_0016;*/goto IL_027e;                              //br				IL_0016
	IL_027e:                                                                        //ldloc.0
	IL_027f:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2F45\x3B47\x2B49\x3F4B\x3D4D\x354F\x3F51\x3653\x3A55\x3D57\x2859"
	IL_0284:                                                                        //ldloc				V_2
	IL_0288:            Temp_6=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x563D\x2F3F\x3541\x0043\x2F45\x3B47\x2B49\x3F4B\x3D4D\x354F\x3F51\x3653\x3A55\x3D57\x2859",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028d:            if(V_0==Temp_6)goto IL_0316;                                //beq				IL_0316
	IL_0292:                                                                        //ldc.i4				0x6
	IL_0297:            V_1=6;                                                      //stloc				V_1
	IL_029b:            /*goto IL_0016;*/goto IL_02a0;                              //br				IL_0016
	IL_02a0:            goto IL_0324;                                               //br				IL_0324
	IL_02a5:                                                                        //ldloc.0
	IL_02a6:            Temp_3=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_02ab:            V_0=Temp_3;                                                 //stloc.0
	IL_02ac:                                                                        //ldc.i4				0x8
	IL_02b1:            V_1=8;                                                      //stloc				V_1
	IL_02b5:            /*goto IL_0016;*/goto IL_02ba;                              //br				IL_0016
	IL_02ba:                                                                        //ldloc.0
	IL_02bb:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41"
	IL_02c0:                                                                        //ldloc				V_2
	IL_02c4:            Temp_5=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x7F3B\x513D\x303F\x3B41",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c9:            if(V_0==Temp_5)goto IL_0359;                                //beq				IL_0359
	IL_02ce:                                                                        //ldc.i4				0x11
	IL_02d3:            V_1=17;                                                     //stloc				V_1
	IL_02d7:            /*goto IL_0016;*/goto IL_02dc;                              //br				IL_0016
	IL_02dc:            goto IL_0150;                                               //br				IL_0150
	IL_02e1:                                                                        //ldc.i4				0x12
	IL_02e6:            V_1=18;                                                     //stloc				V_1
	IL_02ea:            /*goto IL_0016;*/goto IL_02ef;                              //br				IL_0016
	IL_02ef:                                                                        //ldloc.0
	IL_02f0:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0F47\x2549\x234B\x294D\x3C4F\x3751"
	IL_02f5:                                                                        //ldloc				V_2
	IL_02f9:            Temp_8=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x6F3B\x5B3D\x213F\x3041\x2743\x2E45\x0F47\x2549\x234B\x294D\x3C4F\x3751",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02fe:            if(V_0==Temp_8)goto IL_0189;                                //beq				IL_0189
	IL_0303:                                                                        //ldc.i4				0xc
	IL_0308:            V_1=12;                                                     //stloc				V_1
	IL_030c:            /*goto IL_0016;*/goto IL_0311;                              //br				IL_0016
	IL_0311:            goto IL_019b;                                               //br				IL_019b
	IL_0316:                                                                        //ldarg.0
	IL_0317:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_031c:            return;                                                     //ret
	IL_031d:                                                                        //ldarg.0
	IL_031e:            this->M_x9();                                               //call				void Root::T_x45::M_x9()
	IL_0323:            return;                                                     //ret
	IL_0324:                                                                        //ldc.i4				0x7
	IL_0329:            V_1=7;                                                      //stloc				V_1
	IL_032d:            /*goto IL_0016;*/goto IL_0332;                              //br				IL_0016
	IL_0332:                                                                        //ldloc.0
	IL_0333:                                                                        //ldstr				L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x683B\x513D\x273F\x2541\x2843\x2345\x0A47\x2549\x234B\x254D\x3D4F\x3351\x2653\x3D55"
	IL_0338:                                                                        //ldloc				V_2
	IL_033c:            Temp_4=a(L"\x6725\x4B27\x5E29\x452B\x582D\x552F\x7B31\x4033\x5335\x5537\x1439\x683B\x513D\x273F\x2541\x2843\x2345\x0A47\x2549\x234B\x254D\x3D4F\x3351\x2653\x3D55",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0341:            if(V_0==Temp_4)goto IL_0149;                                //beq				IL_0149
	IL_0346:                                                                        //ldc.i4				0x3
	IL_034b:            V_1=3;                                                      //stloc				V_1
	IL_034f:            /*goto IL_0016;*/goto IL_0354;                              //br				IL_0016
	IL_0354:            goto IL_0218;                                               //br				IL_0218
	IL_0359:                                                                        //ldarg.0
	IL_035a:            this->M_x4();                                               //call				void Root::T_x45::M_x4()
	IL_035f:            return;                                                     //ret
	IL_0360:                                                                        //ldarg.0
	IL_0361:                                                                        //ldarg.1
	IL_0362:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_0367:            return;                                                     //ret

}
inline void Root::T_x45::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::IWindowCollection^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::IWindow^ Temp_4 = nullptr;
	//local variables.
	Reflector::IWindowManager^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_1=17;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4.6
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldtoken				Reflector::IWindowManager
	IL_001a:            Temp_0=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_001f:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0024:                                                                        //castclass				Reflector::IWindowManager
	IL_0029:            V_0=safe_cast<Reflector::IWindowManager^>(Temp_1);          //stloc.0
	IL_002a:                                                                        //ldloc.0
	IL_002b:            Temp_2=V_0->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0030:                                                                        //ldstr				L"\x6B2E\x5E30\x5032\x4034\x5A36\x5C38\x553A\x493C\x5E3E\x3540\x2A42\x2A44\x2946\x1E48\x224A\x234C\x2B4E\x3E50\x2452"
	IL_0035:                                                                        //ldloc				V_1
	IL_0039:            Temp_3=a(L"\x6B2E\x5E30\x5032\x4034\x5A36\x5C38\x553A\x493C\x5E3E\x3540\x2A42\x2A44\x2946\x1E48\x224A\x234C\x2B4E\x3E50\x2452",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003e:            Temp_4=Temp_2[Temp_3];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0043:                                                                        //ldc.i4.1
	IL_0044:            Temp_4->Visible=true;                                       //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0049:            return;                                                     //ret

}
inline void Root::T_x45::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_5 = nullptr;
	//local variables.
	Reflector::IAssemblyBrowser^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_000b;case 1:goto IL_003a;case 2:goto IL_0071;};//switch				(IL_000b,IL_003a,IL_0071)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_4=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0028:            Temp_5=Temp_4->BaseType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_002d:            if(Temp_5==nullptr)goto IL_0073;                            //brfalse.s				IL_0073
	IL_002f:                                                                        //ldc.i4				0x1
	IL_0034:            V_1=1;                                                      //stloc				V_1
	IL_0038:            /*goto IL_000d;*/goto IL_003a;                              //br.s				IL_000d
	IL_003a:            goto IL_003c;                                               //br.s				IL_003c
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_0042:            Temp_0=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0047:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_004c:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_0051:            V_0=safe_cast<Reflector::IAssemblyBrowser^>(Temp_1);        //stloc.0
	IL_0052:                                                                        //ldloc.0
	IL_0053:                                                                        //ldarg.0
	IL_0054:            Temp_2=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0059:            Temp_3=Temp_2->BaseType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_005e:            V_0->ActiveItem=safe_cast<System::Object^>(Temp_3);         //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_0063:            goto IL_0066;                                               //br.s				IL_0066
	IL_0065:                                                                        //break
	IL_0066:                                                                        //ldc.i4				0x2
	IL_006b:            V_1=2;                                                      //stloc				V_1
	IL_006f:            /*goto IL_000d;*/goto IL_0071;                              //br.s				IL_000d
	IL_0071:            goto IL_0073;                                               //br.s				IL_0073
	IL_0073:            return;                                                     //ret

}
inline System::Boolean Root::T_x45::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	Root::T_x123^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_2=9;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x7
	IL_000e:            V_1=7;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0077;                                               //br.s				IL_0077
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_01aa;case 1:goto IL_0274;case 2:goto IL_0284;case 3:goto IL_0252;case 4:goto IL_02d7;case 5:goto IL_0108;case 6:goto IL_01d9;case 7:goto IL_0014;case 8:goto IL_023f;case 9:goto IL_015c;case 10:goto IL_02fd;case 11:goto IL_02ea;case 12:goto IL_0297;case 13:goto IL_018e;case 14:goto IL_02c4;case 15:goto IL_012a;case 16:goto IL_01f8;case 17:goto IL_01c9;case 18:goto IL_021d;case 19:goto IL_031f;case 20:goto IL_013d;case 21:goto IL_016f;};//switch				(IL_01aa,IL_0274,IL_0284,IL_0252,IL_02d7,IL_0108,IL_01d9,IL_0014,IL_023f,IL_015c,IL_02fd,IL_02ea,IL_0297,IL_018e,IL_02c4,IL_012a,IL_01f8,IL_01c9,IL_021d,IL_031f,IL_013d,IL_016f)
	IL_0077:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7E3C\x503E\x3140\x3A42"
	IL_007c:                                                                        //ldloc				V_2
	IL_0080:            Temp_14=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7E3C\x503E\x3140\x3A42",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0085:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7A3C\x503E\x1540\x2C42\x0744\x2646\x3A48\x2E4A\x194C\x364E\x2150\x3652"
	IL_008a:                                                                        //ldloc				V_2
	IL_008e:            Temp_15=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7A3C\x503E\x1540\x2C42\x0744\x2646\x3A48\x2E4A\x194C\x364E\x2150\x3652",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0093:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0C44\x2946\x2148\x2E4A\x3F4C\x264E\x2550\x3652\x3154\x1A56\x3C58\x365A\x3F5C\x3A5E\x1360\x1062"
	IL_0098:                                                                        //ldloc				V_2
	IL_009c:            Temp_16=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0C44\x2946\x2148\x2E4A\x3F4C\x264E\x2550\x3652\x3154\x1A56\x3C58\x365A\x3F5C\x3A5E\x1360\x1062",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a1:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2846\x2A48\x3E4A\x204C\x2A4E\x3F50\x2752\x3454\x2356\x3058\x345A\x335C"
	IL_00a6:                                                                        //ldloc				V_2
	IL_00aa:            Temp_17=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2846\x2A48\x3E4A\x204C\x2A4E\x3F50\x2752\x3454\x2356\x3058\x345A\x335C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00af:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2E46\x3A48\x2A4A\x3E4C\x3C4E\x3450\x3E52\x3754\x3B56\x3C58\x295A"
	IL_00b4:                                                                        //ldloc				V_2
	IL_00b8:            Temp_18=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2E46\x3A48\x2A4A\x3E4C\x3C4E\x3450\x3E52\x3754\x3B56\x3C58\x295A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bd:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x693C\x503E\x2640\x2442\x2944\x2246\x0B48\x244A\x224C\x244E\x3C50\x3252\x2754\x3C56"
	IL_00c2:                                                                        //ldloc				V_2
	IL_00c6:            Temp_19=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x693C\x503E\x2640\x2442\x2944\x2246\x0B48\x244A\x224C\x244E\x3C50\x3252\x2754\x3C56",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cb:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0E48\x244A\x224C\x284E\x3D50\x3652"
	IL_00d0:                                                                        //ldloc				V_2
	IL_00d4:            Temp_20=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0E48\x244A\x224C\x284E\x3D50\x3652",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d9:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0444\x2946\x2848\x274A\x344C\x354E\x3450\x2152"
	IL_00de:                                                                        //ldloc				V_2
	IL_00e2:            Temp_21=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0444\x2946\x2848\x274A\x344C\x354E\x3450\x2152",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e7:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0448\x384A\x294C\x214E"
	IL_00ec:                                                                        //ldloc				V_2
	IL_00f0:            Temp_22=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0448\x384A\x294C\x214E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f5:            goto IL_02c9;                                               //leave				IL_02c9
	IL_00fa:                                                                        //ldc.i4				0x5
	IL_00ff:            V_1=5;                                                      //stloc				V_1
	IL_0103:            /*goto IL_0016;*/goto IL_0108;                              //br				IL_0016
	IL_0108:                                                                        //ldloc.0
	IL_0109:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0448\x384A\x294C\x214E"
	IL_010e:                                                                        //ldloc				V_2
	IL_0112:            Temp_3=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0448\x384A\x294C\x214E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0117:            if(V_0==Temp_3)goto IL_01fd;                                //beq				IL_01fd
	IL_011c:                                                                        //ldc.i4				0xf
	IL_0121:            V_1=15;                                                     //stloc				V_1
	IL_0125:            /*goto IL_0016;*/goto IL_012a;                              //br				IL_0016
	IL_012a:            goto IL_0276;                                               //br				IL_0276
	IL_012f:                                                                        //ldc.i4				0x14
	IL_0134:            V_1=20;                                                     //stloc				V_1
	IL_0138:            /*goto IL_0016;*/goto IL_013d;                              //br				IL_0016
	IL_013d:                                                                        //ldloc.0
	IL_013e:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x693C\x503E\x2640\x2442\x2944\x2246\x0B48\x244A\x224C\x244E\x3C50\x3252\x2754\x3C56"
	IL_0143:                                                                        //ldloc				V_2
	IL_0147:            Temp_12=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x693C\x503E\x2640\x2442\x2944\x2246\x0B48\x244A\x224C\x244E\x3C50\x3252\x2754\x3C56",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014c:            if(V_0==Temp_12)goto IL_0193;                               //beq.s				IL_0193
	IL_014e:                                                                        //ldc.i4				0x9
	IL_0153:            V_1=9;                                                      //stloc				V_1
	IL_0157:            /*goto IL_0016;*/goto IL_015c;                              //br				IL_0016
	IL_015c:            goto IL_0289;                                               //br				IL_0289
	IL_0161:                                                                        //ldc.i4				0x15
	IL_0166:            V_1=21;                                                     //stloc				V_1
	IL_016a:            /*goto IL_0016;*/goto IL_016f;                              //br				IL_0016
	IL_016f:                                                                        //ldloc.0
	IL_0170:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7A3C\x503E\x1540\x2C42\x0744\x2646\x3A48\x2E4A\x194C\x364E\x2150\x3652"
	IL_0175:                                                                        //ldloc				V_2
	IL_0179:            Temp_13=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7A3C\x503E\x1540\x2C42\x0744\x2646\x3A48\x2E4A\x194C\x364E\x2150\x3652",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017e:            if(V_0==Temp_13)goto IL_0193;                               //beq.s				IL_0193
	IL_0180:                                                                        //ldc.i4				0xd
	IL_0185:            V_1=13;                                                     //stloc				V_1
	IL_0189:            /*goto IL_0016;*/goto IL_018e;                              //br				IL_0016
	IL_018e:            goto IL_0244;                                               //br				IL_0244
	IL_0193:                                                                        //ldc.i4.1
	IL_0194:            return true;                                                //ret
	IL_0195:                                                                        //ldloc.0
	IL_0196:            Temp_9=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_019b:            V_0=Temp_9;                                                 //stloc.0
	IL_019c:                                                                        //ldc.i4				0x0
	IL_01a1:            V_1=0;                                                      //stloc				V_1
	IL_01a5:            /*goto IL_0016;*/goto IL_01aa;                              //br				IL_0016
	IL_01aa:                                                                        //ldloc.0
	IL_01ab:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7E3C\x503E\x3140\x3A42"
	IL_01b0:                                                                        //ldloc				V_2
	IL_01b4:            Temp_0=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x7E3C\x503E\x3140\x3A42",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b9:            if(V_0==Temp_0)goto IL_0193;                                //beq.s				IL_0193
	IL_01bb:                                                                        //ldc.i4				0x11
	IL_01c0:            V_1=17;                                                     //stloc				V_1
	IL_01c4:            /*goto IL_0016;*/goto IL_01c9;                              //br				IL_0016
	IL_01c9:            goto IL_0161;                                               //br.s				IL_0161
	IL_01cb:                                                                        //ldc.i4				0x6
	IL_01d0:            V_1=6;                                                      //stloc				V_1
	IL_01d4:            /*goto IL_0016;*/goto IL_01d9;                              //br				IL_0016
	IL_01d9:                                                                        //ldloc.0
	IL_01da:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0444\x2946\x2848\x274A\x344C\x354E\x3450\x2152"
	IL_01df:                                                                        //ldloc				V_2
	IL_01e3:            Temp_7=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0444\x2946\x2848\x274A\x344C\x354E\x3450\x2152",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e8:            if(V_0==Temp_7)goto IL_0193;                                //beq.s				IL_0193
	IL_01ea:                                                                        //ldc.i4				0x10
	IL_01ef:            V_1=16;                                                     //stloc				V_1
	IL_01f3:            /*goto IL_0016;*/goto IL_01f8;                              //br				IL_0016
	IL_01f8:            goto IL_00fa;                                               //br				IL_00fa
	IL_01fd:                                                                        //ldarg.0
	IL_01fe:            Temp_4=this->M_x15();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x45::M_x15()
	IL_0203:                                                                        //ldarg.0
	IL_0204:            Temp_5=gcnew Root::T_x123(safe_cast<System::Object^>(Temp_4),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x123::.ctor(System::Object^,System::IServiceProvider^)
	IL_0209:            Temp_6=Temp_5->M_x2();                                      //call				System::Boolean Root::T_x123::M_x2()
	IL_020e:            return Temp_6;                                              //ret
	IL_020f:                                                                        //ldc.i4				0x12
	IL_0214:            V_1=18;                                                     //stloc				V_1
	IL_0218:            /*goto IL_0016;*/goto IL_021d;                              //br				IL_0016
	IL_021d:                                                                        //ldloc.0
	IL_021e:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2E46\x3A48\x2A4A\x3E4C\x3C4E\x3450\x3E52\x3754\x3B56\x3C58\x295A"
	IL_0223:                                                                        //ldloc				V_2
	IL_0227:            Temp_11=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2E46\x3A48\x2A4A\x3E4C\x3C4E\x3450\x3E52\x3754\x3B56\x3C58\x295A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_022c:            if(V_0==Temp_11)goto IL_0193;                               //beq				IL_0193
	IL_0231:                                                                        //ldc.i4				0x8
	IL_0236:            V_1=8;                                                      //stloc				V_1
	IL_023a:            /*goto IL_0016;*/goto IL_023f;                              //br				IL_0016
	IL_023f:            goto IL_012f;                                               //br				IL_012f
	IL_0244:                                                                        //ldc.i4				0x3
	IL_0249:            V_1=3;                                                      //stloc				V_1
	IL_024d:            /*goto IL_0016;*/goto IL_0252;                              //br				IL_0016
	IL_0252:                                                                        //ldloc.0
	IL_0253:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0C44\x2946\x2148\x2E4A\x3F4C\x264E\x2550\x3652\x3154\x1A56\x3C58\x365A\x3F5C\x3A5E\x1360\x1062"
	IL_0258:                                                                        //ldloc				V_2
	IL_025c:            Temp_2=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0C44\x2946\x2148\x2E4A\x3F4C\x264E\x2550\x3652\x3154\x1A56\x3C58\x365A\x3F5C\x3A5E\x1360\x1062",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0261:            if(V_0==Temp_2)goto IL_0193;                                //beq				IL_0193
	IL_0266:                                                                        //ldc.i4				0x1
	IL_026b:            V_1=1;                                                      //stloc				V_1
	IL_026f:            /*goto IL_0016;*/goto IL_0274;                              //br				IL_0016
	IL_0274:            goto IL_02ef;                                               //br.s				IL_02ef
	IL_0276:                                                                        //ldc.i4				0x2
	IL_027b:            V_1=2;                                                      //stloc				V_1
	IL_027f:            /*goto IL_0016;*/goto IL_0284;                              //br				IL_0016
	IL_0284:            goto IL_0324;                                               //br				IL_0324
	IL_0289:                                                                        //ldc.i4				0xc
	IL_028e:            V_1=12;                                                     //stloc				V_1
	IL_0292:            /*goto IL_0016;*/goto IL_0297;                              //br				IL_0016
	IL_0297:                                                                        //ldc.i4.5
	IL_0298:                                                                        //dup
	IL_0299:                                                                        //dup
	IL_029a:                                                                        //ldc.i4.3
	IL_029b:                                                                        //sub
	IL_029c:                                                                        //blt				IL_0298
	IL_02a1:                                                                        //pop
	IL_02a2:                                                                        //ldloc.0
	IL_02a3:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0E48\x244A\x224C\x284E\x3D50\x3652"
	IL_02a8:                                                                        //ldloc				V_2
	IL_02ac:            Temp_10=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x5A3E\x2040\x3142\x2644\x2F46\x0E48\x244A\x224C\x284E\x3D50\x3652",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b1:            if(V_0==Temp_10)goto IL_0193;                               //beq				IL_0193
	IL_02b6:                                                                        //ldc.i4				0xe
	IL_02bb:            V_1=14;                                                     //stloc				V_1
	IL_02bf:            /*goto IL_0016;*/goto IL_02c4;                              //br				IL_0016
	IL_02c4:            goto IL_01cb;                                               //br				IL_01cb
	IL_02c9:                                                                        //ldc.i4				0x4
	IL_02ce:            V_1=4;                                                      //stloc				V_1
	IL_02d2:            /*goto IL_0016;*/goto IL_02d7;                              //br				IL_0016
	IL_02d7:                                                                        //ldarg.1
	IL_02d8:                                                                        //dup
	IL_02d9:            V_0=A_0;                                                    //stloc.0
	IL_02da:            if(V_0==nullptr)goto IL_0324;                               //brfalse.s				IL_0324
	IL_02dc:                                                                        //ldc.i4				0xb
	IL_02e1:            V_1=11;                                                     //stloc				V_1
	IL_02e5:            /*goto IL_0016;*/goto IL_02ea;                              //br				IL_0016
	IL_02ea:            goto IL_0195;                                               //br				IL_0195
	IL_02ef:                                                                        //ldc.i4				0xa
	IL_02f4:            V_1=10;                                                     //stloc				V_1
	IL_02f8:            /*goto IL_0016;*/goto IL_02fd;                              //br				IL_0016
	IL_02fd:                                                                        //ldloc.0
	IL_02fe:                                                                        //ldstr				L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2846\x2A48\x3E4A\x204C\x2A4E\x3F50\x2752\x3454\x2356\x3058\x345A\x335C"
	IL_0303:                                                                        //ldloc				V_2
	IL_0307:            Temp_8=a(L"\x6626\x4A28\x5F2A\x442C\x592E\x5430\x7A32\x4134\x5236\x5438\x153A\x6E3C\x573E\x2E40\x3442\x0144\x2846\x2A48\x3E4A\x204C\x2A4E\x3F50\x2752\x3454\x2356\x3058\x345A\x335C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_030c:            if(V_0==Temp_8)goto IL_0193;                                //beq				IL_0193
	IL_0311:                                                                        //ldc.i4				0x13
	IL_0316:            V_1=19;                                                     //stloc				V_1
	IL_031a:            /*goto IL_0016;*/goto IL_031f;                              //br				IL_0016
	IL_031f:            goto IL_020f;                                               //br				IL_020f
	IL_0324:                                                                        //ldarg.0
	IL_0325:                                                                        //ldarg.1
	IL_0326:            Temp_1=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_032b:            return Temp_1;                                              //ret

}
inline Root::T_x45::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Int32 Root::T_x45::T_x1::M_x1(System::Object^ A_0,System::Object^ A_1)
//System::Collections::IComparer^::Compare by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	System::Windows::Forms::TreeNode^ V_0 = nullptr;
	System::Windows::Forms::TreeNode^ V_1 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //castclass				System::Windows::Forms::TreeNode
	IL_0009:            V_0=safe_cast<System::Windows::Forms::TreeNode^>(A_0);      //stloc.0
	IL_000a:                                                                        //ldarg.2
	IL_000b:                                                                        //castclass				System::Windows::Forms::TreeNode
	IL_0010:            V_1=safe_cast<System::Windows::Forms::TreeNode^>(A_1);      //stloc.1
	IL_0011:                                                                        //ldloc.0
	IL_0012:            Temp_0=V_0->Text;                                           //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_0017:                                                                        //ldloc.1
	IL_0018:            Temp_1=V_1->Text;                                           //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_001d:            Temp_2=Temp_0->CompareTo(Temp_1);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0022:            return Temp_2;                                              //ret

}
