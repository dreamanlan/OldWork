#include "global_xref.h"

inline Root::T_x30::T_x30()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x30::M_x1()
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
	IL_0023:            this->M_x1(V_0,Temp_2,safe_cast<System::Collections::ICollection^>(Temp_3));//call				void Root::T_x30::M_x1(System::IO::StringWriter^,System::String^,System::Collections::ICollection^)
	IL_0028:                                                                        //ldloc.0
	IL_0029:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_002e:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_4));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0033:            goto IL_007b;                                               //leave.s				IL_007b
	                    ;}
	                    finally{
	IL_0035:                                                                        //ldc.i4				0x2
	IL_003a:            V_1=2;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0042;*/goto IL_0040;                              //br.s				IL_0042
	IL_0040:            goto IL_0057;                                               //br.s				IL_0057
	IL_0042:                                                                        //ldloc				V_1
	IL_0046:            switch(V_1){case 0:goto IL_0065;case 1:goto IL_0078;case 2:goto IL_0040;};//switch				(IL_0065,IL_0078,IL_0040)
	IL_0057:                                                                        //ldloc.0
	IL_0058:            if(V_0==nullptr)goto IL_007a;                               //brfalse.s				IL_007a
	IL_005a:                                                                        //ldc.i4				0x0
	IL_005f:            V_1=0;                                                      //stloc				V_1
	IL_0063:            /*goto IL_0042;*/goto IL_0065;                              //br.s				IL_0042
	IL_0065:            goto IL_0067;                                               //br.s				IL_0067
	IL_0067:                                                                        //ldloc.0
	IL_0068:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_006d:                                                                        //ldc.i4				0x1
	IL_0072:            V_1=1;                                                      //stloc				V_1
	IL_0076:            /*goto IL_0042;*/goto IL_0078;                              //br.s				IL_0042
	IL_0078:            goto IL_007a;                                               //br.s				IL_007a
	IL_007a:                                                                        //endfinally
	                    ;}
	IL_007b:            return;                                                     //ret

}
inline void Root::T_x30::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_1=8;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x30 F_x1
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldstr				L"\x6225\x4D27\x5829\x452B\x582D\x552F\x5631\x1433\x6235\x4137\x4A39\x593B\x4D3D"
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            Temp_0=a(L"\x6225\x4D27\x5829\x452B\x582D\x552F\x5631\x1433\x6235\x4137\x4A39\x593B\x4D3D",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldc.i4				0xa4
	IL_002e:                                                                        //dup
	IL_002f:            V_0=164;                                                    //stloc.0
	IL_0030:            this->SelectedImageIndex=164;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0041:            return;                                                     //ret

}
inline void Root::T_x30::M_x1(System::EventArgs^ A_0)
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
inline void Root::T_x30::M_x1(System::IO::StringWriter^ A_0,System::String^ A_1,System::Collections::ICollection^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
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
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_5=4;                                                      //stloc				V_5
	IL_0009:                                                                        //ldarg.3
	IL_000a:            Temp_0=safe_cast<System::Collections::IEnumerable^>(A_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
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
	IL_002e:            switch(V_3){case 0:goto IL_00bc;case 1:goto IL_0086;case 2:goto IL_00ed;case 3:goto IL_00fd;case 4:goto IL_0099;case 5:goto IL_001d;case 6:goto IL_00a6;};//switch				(IL_00bc,IL_0086,IL_00ed,IL_00fd,IL_0099,IL_001d,IL_00a6)
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
	IL_0087:            Temp_1=V_0->IsExpanded;                                     //callvirt				System::Boolean System::Windows::Forms::TreeNode::get_IsExpanded()
	IL_008c:            if(!Temp_1)goto IL_009b;                                    //brfalse.s				IL_009b
	IL_008e:                                                                        //ldc.i4				0x4
	IL_0093:            V_3=4;                                                      //stloc				V_3
	IL_0097:            /*goto IL_002a;*/goto IL_0099;                              //br.s				IL_002a
	IL_0099:            goto IL_00be;                                               //br.s				IL_00be
	IL_009b:                                                                        //ldc.i4				0x6
	IL_00a0:            V_3=6;                                                      //stloc				V_3
	IL_00a4:            /*goto IL_002a;*/goto IL_00a6;                              //br.s				IL_002a
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:            Temp_5=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00ac:            if(Temp_5)goto IL_0051;                                     //brtrue.s				IL_0051
	IL_00ae:                                                                        //ldc.i4				0x0
	IL_00b3:            V_3=0;                                                      //stloc				V_3
	IL_00b7:            /*goto IL_002a;*/goto IL_00bc;                              //br				IL_002a
	IL_00bc:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_00be:                                                                        //ldarg.0
	IL_00bf:                                                                        //ldarg.1
	IL_00c0:                                                                        //ldarg.2
	IL_00c1:                                                                        //ldstr				L"\x2B21"
	IL_00c6:                                                                        //ldloc				V_5
	IL_00ca:            Temp_2=a(L"\x2B21",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cf:            Temp_3=System::String::Concat(A_1,Temp_2);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:            Temp_4=V_0->Nodes;                                          //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00da:            this->M_x1(A_0,Temp_3,safe_cast<System::Collections::ICollection^>(Temp_4));//call				void Root::T_x30::M_x1(System::IO::StringWriter^,System::String^,System::Collections::ICollection^)
	IL_00df:                                                                        //ldc.i4				0x2
	IL_00e4:            V_3=2;                                                      //stloc				V_3
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
	IL_0105:            switch(V_4){case 0:goto IL_0128;case 1:goto IL_0136;case 2:goto IL_0149;};//switch				(IL_0128,IL_0136,IL_0149)
	IL_0116:                                                                        //ldloc.1
	IL_0117:                                                                        //isinst				System::IDisposable
	IL_011c:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_011d:                                                                        //ldc.i4				0x0
	IL_0122:            V_4=0;                                                      //stloc				V_4
	IL_0126:            /*goto IL_0101;*/goto IL_0128;                              //br.s				IL_0101
	IL_0128:                                                                        //ldloc.2
	IL_0129:            if(V_2==nullptr)goto IL_014b;                               //brfalse.s				IL_014b
	IL_012b:                                                                        //ldc.i4				0x1
	IL_0130:            V_4=1;                                                      //stloc				V_4
	IL_0134:            /*goto IL_0101;*/goto IL_0136;                              //br.s				IL_0101
	IL_0136:            goto IL_0138;                                               //br.s				IL_0138
	IL_0138:                                                                        //ldloc.2
	IL_0139:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_013e:                                                                        //ldc.i4				0x2
	IL_0143:            V_4=2;                                                      //stloc				V_4
	IL_0147:            /*goto IL_0101;*/goto IL_0149;                              //br.s				IL_0101
	IL_0149:            goto IL_014b;                                               //br.s				IL_014b
	IL_014b:                                                                        //endfinally
	                    ;}
	IL_014c:            return;                                                     //ret

}
inline void Root::T_x30::M_x1(System::Windows::Forms::TreeNode^ A_0,Reflector::CodeModel::ITypeDeclaration^ A_1,Root::T_x29^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerable^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Root::T_x46^ Temp_4 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	//local variables.
	System::Collections::IEnumerable^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Root::T_x46^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.3
	IL_0004:                                                                        //ldarg.2
	IL_0005:            Temp_0=A_2->M_x1(A_1);                                      //callvirt				System::Collections::IEnumerable^ Root::T_x29::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_000a:            V_0=Temp_0;                                                 //stloc.0
	IL_000b:                                                                        //ldloc.0
	IL_000c:            Temp_1=V_0->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0011:            V_3=Temp_1;                                                 //stloc.3
	IL_0012:            /*goto IL_0014;*/goto IL_001201;                            //br.s				IL_0014
	IL_001201:          try{
	IL_0014:                                                                        //ldc.i4				0x1
	IL_0019:            V_5=1;                                                      //stloc				V_5
	IL_001d:            /*goto IL_0021;*/goto IL_001f;                              //br.s				IL_0021
	IL_001f:            goto IL_003e;                                               //br.s				IL_003e
	IL_0021:                                                                        //ldloc				V_5
	IL_0025:            switch(V_5){case 0:goto IL_0080;case 1:goto IL_001f;case 2:goto IL_008d;case 3:goto IL_00a0;case 4:goto IL_00b0;};//switch				(IL_0080,IL_001f,IL_008d,IL_00a0,IL_00b0)
	IL_003e:            goto IL_0082;                                               //br.s				IL_0082
	IL_0040:                                                                        //ldloc.3
	IL_0041:            Temp_3=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0046:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_004b:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_3);//stloc.1
	IL_004c:            Temp_4=gcnew Root::T_x46();                                 //newobj				void Root::T_x46::.ctor()
	IL_0051:            V_2=Temp_4;                                                 //stloc.2
	IL_0052:                                                                        //ldloc.2
	IL_0053:                                                                        //ldloc.1
	IL_0054:            V_2->M_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(V_1));//callvirt				void Root::T_x46::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0059:                                                                        //ldloc.2
	IL_005a:            V_2->M_x14();                                               //callvirt				void Root::T_x10::M_x14()
	IL_005f:                                                                        //ldarg.0
	IL_0060:                                                                        //ldloc.2
	IL_0061:                                                                        //ldloc.1
	IL_0062:                                                                        //ldarg.3
	IL_0063:            this->M_x1(safe_cast<System::Windows::Forms::TreeNode^>(V_2),V_1,A_2);//call				void Root::T_x30::M_x1(System::Windows::Forms::TreeNode^,Reflector::CodeModel::ITypeDeclaration^,Root::T_x29^)
	IL_0068:                                                                        //ldarg.1
	IL_0069:            Temp_5=A_0->Nodes;                                          //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_006e:                                                                        //ldloc.2
	IL_006f:            Temp_6=Temp_5->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0074:                                                                        //pop
	IL_0075:                                                                        //ldc.i4				0x0
	IL_007a:            V_5=0;                                                      //stloc				V_5
	IL_007e:            /*goto IL_0021;*/goto IL_0080;                              //br.s				IL_0021
	IL_0080:            goto IL_0082;                                               //br.s				IL_0082
	IL_0082:                                                                        //ldc.i4				0x2
	IL_0087:            V_5=2;                                                      //stloc				V_5
	IL_008b:            /*goto IL_0021;*/goto IL_008d;                              //br.s				IL_0021
	IL_008d:                                                                        //ldloc.3
	IL_008e:            Temp_2=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0093:            if(Temp_2)goto IL_0040;                                     //brtrue.s				IL_0040
	IL_0095:                                                                        //ldc.i4				0x3
	IL_009a:            V_5=3;                                                      //stloc				V_5
	IL_009e:            /*goto IL_0021;*/goto IL_00a0;                              //br.s				IL_0021
	IL_00a0:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00a2:                                                                        //ldc.i4				0x4
	IL_00a7:            V_5=4;                                                      //stloc				V_5
	IL_00ab:            /*goto IL_0021;*/goto IL_00b0;                              //br				IL_0021
	IL_00b0:            goto IL_0102;                                               //leave.s				IL_0102
	                    ;}
	                    finally{
	IL_00b2:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_00b4:                                                                        //ldloc				V_6
	IL_00b8:            switch(V_6){case 0:goto IL_00dc;case 1:goto IL_00ff;case 2:goto IL_00eb;};//switch				(IL_00dc,IL_00ff,IL_00eb)
	IL_00c9:                                                                        //ldloc.3
	IL_00ca:                                                                        //isinst				System::IDisposable
	IL_00cf:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_00d1:                                                                        //ldc.i4				0x0
	IL_00d6:            V_6=0;                                                      //stloc				V_6
	IL_00da:            /*goto IL_00b4;*/goto IL_00dc;                              //br.s				IL_00b4
	IL_00dc:                                                                        //ldloc.s				V_4
	IL_00de:            if(V_4==nullptr)goto IL_0101;                               //brfalse.s				IL_0101
	IL_00e0:                                                                        //ldc.i4				0x2
	IL_00e5:            V_6=2;                                                      //stloc				V_6
	IL_00e9:            /*goto IL_00b4;*/goto IL_00eb;                              //br.s				IL_00b4
	IL_00eb:            goto IL_00ed;                                               //br.s				IL_00ed
	IL_00ed:                                                                        //ldloc.s				V_4
	IL_00ef:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00f4:                                                                        //ldc.i4				0x1
	IL_00f9:            V_6=1;                                                      //stloc				V_6
	IL_00fd:            /*goto IL_00b4;*/goto IL_00ff;                              //br.s				IL_00b4
	IL_00ff:            goto IL_0101;                                               //br.s				IL_0101
	IL_0101:                                                                        //endfinally
	                    ;}
	IL_0102:            return;                                                     //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x30::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x30 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x30::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_0=13;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x1738\x7F3A\x583C\x4D3E\x2840\x3542\x2044\x2346\x1D48\x324A\x3D4C\x2A4E"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x1738\x7F3A\x583C\x4D3E\x2840\x3542\x2044\x2346\x1D48\x324A\x3D4C\x2A4E",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x30::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeView^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Root::T_x29^ Temp_5 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_6 = nullptr;
	Root::T_x12^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Windows::Forms::TreeView^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Reflector::CodeModel::IVisibilityConfiguration^ V_1 = nullptr;
	Root::T_x29^ V_2 = nullptr;
	System::NotSupportedException^ V_3 = nullptr;
	Root::T_x12^ V_4 = nullptr;
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
	IL_0019:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_001e:            Temp_1=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0023:            Temp_2=this->M_x1(Temp_1);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0028:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_002d:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_2);//stloc.0
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_0034:            Temp_3=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0039:            Temp_4=this->M_x1(Temp_3);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_003e:                                                                        //castclass				Reflector::CodeModel::IVisibilityConfiguration
	IL_0043:            V_1=safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(Temp_4);//stloc.1
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //ldloc.1
	IL_0046:            Temp_5=gcnew Root::T_x29(V_0,V_1);                          //newobj				void Root::T_x29::.ctor(Reflector::CodeModel::IAssemblyManager^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_004b:            V_2=Temp_5;                                                 //stloc.2
	IL_004c:                                                                        //ldarg.0
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_6=this->F_x1;                                          //ldfld				Reflector::CodeModel::ITypeDeclaration^ Root::T_x30 F_x1
	IL_0054:                                                                        //ldloc.2
	IL_0055:            this->M_x1(safe_cast<System::Windows::Forms::TreeNode^>(this),Temp_6,V_2);//call				void Root::T_x30::M_x1(System::Windows::Forms::TreeNode^,Reflector::CodeModel::ITypeDeclaration^,Root::T_x29^)
	IL_005a:            goto IL_0081;                                               //leave.s				IL_0081
	                    ;}
	                    catch(System::NotSupportedException^ Ex_005A02){
	IL_005c:            V_3=Ex_005A02;                                              //stloc.3
	IL_005d:            Temp_7=gcnew Root::T_x12();                                 //newobj				void Root::T_x12::.ctor()
	IL_0062:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_0064:                                                                        //ldloc.s				V_4
	IL_0066:                                                                        //ldloc.3
	IL_0067:            Temp_8=V_3->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_006c:            V_4->M_x1(Temp_8);                                          //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_0071:                                                                        //ldarg.0
	IL_0072:            Temp_9=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0077:                                                                        //ldloc.s				V_4
	IL_0079:            Temp_10=Temp_9->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_4));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_007e:                                                                        //pop
	IL_007f:            goto IL_0081;                                               //leave.s				IL_0081
	                    ;}
	IL_0081:                                                                        //ldarg.0
	IL_0082:            Temp_11=this->TreeView;                                     //call				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_0087:            Temp_11->EndUpdate();                                       //callvirt				void System::Windows::Forms::TreeView::EndUpdate()
	IL_008c:                                                                        //ldarg.0
	IL_008d:                                                                        //ldarg.1
	IL_008e:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_0093:            return;                                                     //ret

}
inline void Root::T_x30::M_x5(System::String^ A_0)
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
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_2=13;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_0078;case 2:goto IL_005c;case 3:goto IL_0085;case 4:goto IL_00a3;};//switch				(IL_0014,IL_0078,IL_005c,IL_0085,IL_00a3)
	IL_0033:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_2=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            goto IL_007a;                                               //leave.s				IL_007a
	IL_0043:                                                                        //ldarg.0
	IL_0044:            this->M_x1();                                               //call				void Root::T_x30::M_x1()
	IL_0049:            return;                                                     //ret
	IL_004a:                                                                        //ldloc.0
	IL_004b:            Temp_1=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0050:            V_0=Temp_1;                                                 //stloc.0
	IL_0051:                                                                        //ldc.i4				0x2
	IL_0056:            V_1=2;                                                      //stloc				V_1
	IL_005a:            /*goto IL_0016;*/goto IL_005c;                              //br.s				IL_0016
	IL_005c:                                                                        //ldloc.0
	IL_005d:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46"
	IL_0062:                                                                        //ldloc				V_2
	IL_0066:            Temp_0=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006b:            if(V_0!=Temp_0)goto IL_00a5;                                //bne.un.s				IL_00a5
	IL_006d:                                                                        //ldc.i4				0x1
	IL_0072:            V_1=1;                                                      //stloc				V_1
	IL_0076:            /*goto IL_0016;*/goto IL_0078;                              //br.s				IL_0016
	IL_0078:            goto IL_0043;                                               //br.s				IL_0043
	IL_007a:                                                                        //ldc.i4				0x3
	IL_007f:            V_1=3;                                                      //stloc				V_1
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
	IL_0095:                                                                        //ldc.i4				0x4
	IL_009a:            V_1=4;                                                      //stloc				V_1
	IL_009e:            /*goto IL_0016;*/goto IL_00a3;                              //br				IL_0016
	IL_00a3:            goto IL_004a;                                               //br.s				IL_004a
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:                                                                        //ldarg.1
	IL_00a7:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_00ac:            return;                                                     //ret

}
inline System::Boolean Root::T_x30::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_2=18;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_0093;case 2:goto IL_0073;case 3:goto IL_0057;case 4:goto IL_0080;};//switch				(IL_0014,IL_0093,IL_0073,IL_0057,IL_0080)
	IL_0033:                                                                        //ldstr				L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_3=a(L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            goto IL_0075;                                               //leave.s				IL_0075
	IL_0043:                                                                        //ldc.i4.1
	IL_0044:            return true;                                                //ret
	IL_0045:                                                                        //ldloc.0
	IL_0046:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_004b:            V_0=Temp_0;                                                 //stloc.0
	IL_004c:                                                                        //ldc.i4				0x3
	IL_0051:            V_1=3;                                                      //stloc				V_1
	IL_0055:            /*goto IL_0016;*/goto IL_0057;                              //br.s				IL_0016
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldstr				L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B"
	IL_005d:                                                                        //ldloc				V_2
	IL_0061:            Temp_1=a(L"\x712F\x5131\x4033\x5F35\x4E37\x5F39\x753B\x4A3D\x253F\x2F41\x6A43\x0545\x2747\x3A49\x354B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0066:            if(V_0!=Temp_1)goto IL_0095;                                //bne.un.s				IL_0095
	IL_0068:                                                                        //ldc.i4				0x2
	IL_006d:            V_1=2;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0016;*/goto IL_0073;                              //br.s				IL_0016
	IL_0073:            goto IL_0043;                                               //br.s				IL_0043
	IL_0075:                                                                        //ldc.i4				0x4
	IL_007a:            V_1=4;                                                      //stloc				V_1
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:            goto IL_0083;                                               //br.s				IL_0083
	IL_0082:                                                                        //break
	IL_0083:                                                                        //ldarg.1
	IL_0084:                                                                        //dup
	IL_0085:            V_0=A_0;                                                    //stloc.0
	IL_0086:            if(V_0==nullptr)goto IL_0095;                               //brfalse.s				IL_0095
	IL_0088:                                                                        //ldc.i4				0x1
	IL_008d:            V_1=1;                                                      //stloc				V_1
	IL_0091:            /*goto IL_0016;*/goto IL_0093;                              //br.s				IL_0016
	IL_0093:            goto IL_0045;                                               //br.s				IL_0045
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldarg.1
	IL_0097:            Temp_2=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_009c:            return Temp_2;                                              //ret

}
