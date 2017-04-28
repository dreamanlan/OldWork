#include "global_xref.h"

inline Root::T_x46::T_x46()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<Reflector::CodeModel::ITypeReference^>(nullptr);//stfld				Reflector::CodeModel::ITypeReference^ Root::T_x46 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x46::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	Reflector::CodeModel::ITypeReference^ Temp_10 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0048;case 1:goto IL_00dc;case 2:goto IL_0092;case 3:goto IL_000b;case 4:goto IL_00a5;case 5:goto IL_0067;case 6:goto IL_00bb;};//switch				(IL_0048,IL_00dc,IL_0092,IL_000b,IL_00a5,IL_0067,IL_00bb)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_10=this->M_x8();                                       //call				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
	IL_0038:            if(Temp_10==nullptr)goto IL_00de;                           //brfalse				IL_00de
	IL_003d:                                                                        //ldc.i4				0x0
	IL_0042:            V_0=0;                                                      //stloc				V_0
	IL_0046:            /*goto IL_000d;*/goto IL_0048;                              //br.s				IL_000d
	IL_0048:            goto IL_0094;                                               //br.s				IL_0094
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_0=this->M_x8();                                        //call				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
	IL_0051:            Temp_1=Root::T_x115::M_x5(Temp_0);                          //call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_0056:            this->Text=Temp_1;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_005b:            return;                                                     //ret
	IL_005c:                                                                        //ldc.i4				0x5
	IL_0061:            V_0=5;                                                      //stloc				V_0
	IL_0065:            /*goto IL_000d;*/goto IL_0067;                              //br.s				IL_000d
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_5=this->M_x8();                                        //call				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
	IL_006d:            Temp_6=Temp_5->Namespace;                                   //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0072:                                                                        //ldarg.0
	IL_0073:            Temp_7=this->M_x5();                                        //call				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x5()
	IL_0078:            Temp_8=Temp_7->Namespace;                                   //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_007d:            Temp_9=(Temp_6 == Temp_8);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0082:            if(!Temp_9)goto IL_00bd;                                    //brfalse.s				IL_00bd
	IL_0084:                                                                        //ldc.i4				0x2
	IL_0089:            V_0=2;                                                      //stloc				V_0
	IL_008d:            /*goto IL_000d;*/goto IL_0092;                              //br				IL_000d
	IL_0092:            goto IL_004a;                                               //br.s				IL_004a
	IL_0094:            goto IL_0097;                                               //br.s				IL_0097
	IL_0096:                                                                        //break
	IL_0097:                                                                        //ldc.i4				0x4
	IL_009c:            V_0=4;                                                      //stloc				V_0
	IL_00a0:            /*goto IL_000d;*/goto IL_00a5;                              //br				IL_000d
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:            Temp_2=this->M_x5();                                        //call				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x5()
	IL_00ab:            if(Temp_2==nullptr)goto IL_00bd;                            //brfalse.s				IL_00bd
	IL_00ad:                                                                        //ldc.i4				0x6
	IL_00b2:            V_0=6;                                                      //stloc				V_0
	IL_00b6:            /*goto IL_000d;*/goto IL_00bb;                              //br				IL_000d
	IL_00bb:            goto IL_005c;                                               //br.s				IL_005c
	IL_00bd:                                                                        //ldarg.0
	IL_00be:                                                                        //ldarg.0
	IL_00bf:            Temp_3=this->M_x8();                                        //call				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
	IL_00c4:            Temp_4=Root::T_x115::M_x8(Temp_3);                          //call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_00c9:            this->Text=Temp_4;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_00ce:                                                                        //ldc.i4				0x1
	IL_00d3:            V_0=1;                                                      //stloc				V_0
	IL_00d7:            /*goto IL_000d;*/goto IL_00dc;                              //br				IL_000d
	IL_00dc:            goto IL_00de;                                               //br.s				IL_00de
	IL_00de:            return;                                                     //ret

}
inline void Root::T_x46::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Color Temp_2;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Root::T_x10::M_x1(safe_cast<System::Object^>(A_0));         //call				void Root::T_x10::M_x1(System::Object^)
	IL_0007:            /*goto IL_0009;*/goto IL_000701;                            //br.s				IL_0009
	IL_000701:          try{
	IL_0009:                                                                        //ldc.i4.2
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_0=Root::T_x116::M_x12(A_0);                            //call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_001c:                                                                        //dup
	IL_001d:            V_0=Temp_0;                                                 //stloc.0
	IL_001e:            this->SelectedImageIndex=V_0;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0023:                                                                        //ldloc.0
	IL_0024:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            Temp_1=Root::T_x116::M_x2(A_0);                             //call				System::Int32 Root::T_x116::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0030:            Temp_2=System::Drawing::Color::FromArgb(Temp_1);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0035:            this->ForeColor=Temp_2;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            this->M_x1();                                               //call				void Root::T_x46::M_x1()
	IL_0040:            goto IL_0059;                                               //leave.s				IL_0059
	                    ;}
	                    catch(System::NullReferenceException^ Ex_004002){
	IL_0042:                                                                        //pop
	IL_0043:                                                                        //ldarg.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldc.i4				0xa6
	IL_004a:                                                                        //dup
	IL_004b:            V_0=166;                                                    //stloc.0
	IL_004c:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0051:                                                                        //ldloc.0
	IL_0052:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0057:            goto IL_0059;                                               //leave.s				IL_0059
	                    ;}
	IL_0059:            return;                                                     //ret

}
inline void Root::T_x46::M_x1(System::IO::StringWriter^ A_0,System::String^ A_1,System::Collections::ICollection^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	Root::T_x46^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_5=10;                                                     //stloc				V_5
	IL_0009:                                                                        //ldarg.3
	IL_000a:            Temp_0=safe_cast<System::Collections::IEnumerable^>(A_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000f:            V_1=Temp_0;                                                 //stloc.1
	IL_0010:            /*goto IL_0012;*/goto IL_001001;                            //br.s				IL_0012
	IL_001001:          try{
	IL_0012:                                                                        //ldc.i4				0x4
	IL_0017:            V_3=4;                                                      //stloc				V_3
	IL_001b:            /*goto IL_001f;*/goto IL_001d;                              //br.s				IL_001f
	IL_001d:            goto IL_0044;                                               //br.s				IL_0044
	IL_001f:                                                                        //ldloc				V_3
	IL_0023:            switch(V_3){case 0:goto IL_009b;case 1:goto IL_008e;case 2:goto IL_007b;case 3:goto IL_00f2;case 4:goto IL_001d;case 5:goto IL_00b1;case 6:goto IL_00e2;};//switch				(IL_009b,IL_008e,IL_007b,IL_00f2,IL_001d,IL_00b1,IL_00e2)
	IL_0044:            goto IL_0090;                                               //br.s				IL_0090
	IL_0046:                                                                        //ldloc.1
	IL_0047:            Temp_2=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004c:                                                                        //castclass				Root::T_x46
	IL_0051:            V_0=safe_cast<Root::T_x46^>(Temp_2);                        //stloc.0
	IL_0052:                                                                        //ldarg.1
	IL_0053:                                                                        //ldarg.2
	IL_0054:            A_0->Write(A_1);                                            //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_3=V_0->M_x8();                                         //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
	IL_0060:            Temp_4=Root::T_x115::M_x8(Temp_3);                          //call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0065:            A_0->Write(Temp_4);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_006a:                                                                        //ldarg.1
	IL_006b:            A_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0070:                                                                        //ldc.i4				0x2
	IL_0075:            V_3=2;                                                      //stloc				V_3
	IL_0079:            /*goto IL_001f;*/goto IL_007b;                              //br.s				IL_001f
	IL_007b:                                                                        //ldloc.0
	IL_007c:            Temp_8=V_0->IsExpanded;                                     //callvirt				System::Boolean System::Windows::Forms::TreeNode::get_IsExpanded()
	IL_0081:            if(!Temp_8)goto IL_0090;                                    //brfalse.s				IL_0090
	IL_0083:                                                                        //ldc.i4				0x1
	IL_0088:            V_3=1;                                                      //stloc				V_3
	IL_008c:            /*goto IL_001f;*/goto IL_008e;                              //br.s				IL_001f
	IL_008e:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_0090:                                                                        //ldc.i4				0x0
	IL_0095:            V_3=0;                                                      //stloc				V_3
	IL_0099:            /*goto IL_001f;*/goto IL_009b;                              //br.s				IL_001f
	IL_009b:                                                                        //ldloc.1
	IL_009c:            Temp_1=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a1:            if(Temp_1)goto IL_0046;                                     //brtrue.s				IL_0046
	IL_00a3:                                                                        //ldc.i4				0x5
	IL_00a8:            V_3=5;                                                      //stloc				V_3
	IL_00ac:            /*goto IL_001f;*/goto IL_00b1;                              //br				IL_001f
	IL_00b1:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:                                                                        //ldarg.2
	IL_00b6:                                                                        //ldstr				L"\x2127"
	IL_00bb:                                                                        //ldloc				V_5
	IL_00bf:            Temp_5=a(L"\x2127",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c4:            Temp_6=System::String::Concat(A_1,Temp_5);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00c9:                                                                        //ldloc.0
	IL_00ca:            Temp_7=V_0->Nodes;                                          //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00cf:            this->M_x1(A_0,Temp_6,safe_cast<System::Collections::ICollection^>(Temp_7));//call				void Root::T_x46::M_x1(System::IO::StringWriter^,System::String^,System::Collections::ICollection^)
	IL_00d4:                                                                        //ldc.i4				0x6
	IL_00d9:            V_3=6;                                                      //stloc				V_3
	IL_00dd:            /*goto IL_001f;*/goto IL_00e2;                              //br				IL_001f
	IL_00e2:            goto IL_0090;                                               //br.s				IL_0090
	IL_00e4:                                                                        //ldc.i4				0x3
	IL_00e9:            V_3=3;                                                      //stloc				V_3
	IL_00ed:            /*goto IL_001f;*/goto IL_00f2;                              //br				IL_001f
	IL_00f2:            goto IL_0144;                                               //leave.s				IL_0144
	                    ;}
	                    finally{
	IL_00f4:            goto IL_010b;                                               //br.s				IL_010b
	IL_00f6:                                                                        //ldloc				V_4
	IL_00fa:            switch(V_4){case 0:goto IL_011d;case 1:goto IL_0141;case 2:goto IL_012e;};//switch				(IL_011d,IL_0141,IL_012e)
	IL_010b:                                                                        //ldloc.1
	IL_010c:                                                                        //isinst				System::IDisposable
	IL_0111:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_0112:                                                                        //ldc.i4				0x0
	IL_0117:            V_4=0;                                                      //stloc				V_4
	IL_011b:            /*goto IL_00f6;*/goto IL_011d;                              //br.s				IL_00f6
	IL_011d:                                                                        //ldloc.2
	IL_011e:            if(V_2==nullptr)goto IL_0143;                               //brfalse.s				IL_0143
	IL_0120:            goto IL_0123;                                               //br.s				IL_0123
	IL_0122:                                                                        //break
	IL_0123:                                                                        //ldc.i4				0x2
	IL_0128:            V_4=2;                                                      //stloc				V_4
	IL_012c:            /*goto IL_00f6;*/goto IL_012e;                              //br.s				IL_00f6
	IL_012e:            goto IL_0130;                                               //br.s				IL_0130
	IL_0130:                                                                        //ldloc.2
	IL_0131:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0136:                                                                        //ldc.i4				0x1
	IL_013b:            V_4=1;                                                      //stloc				V_4
	IL_013f:            /*goto IL_00f6;*/goto IL_0141;                              //br.s				IL_00f6
	IL_0141:            goto IL_0143;                                               //br.s				IL_0143
	IL_0143:                                                                        //endfinally
	                    ;}
	IL_0144:            return;                                                     //ret

}
inline void Root::T_x46::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0008:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000d:            V_0=Temp_1;                                                 //stloc.0
	IL_000e:            /*goto IL_0010;*/goto IL_000E01;                            //br.s				IL_0010
	IL_000E01:          try{
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0017:                                                                        //ldc.i4.1
	IL_0018:            Temp_3=gcnew array<System::Windows::Forms::TreeNode^>(1);   //newarr				System::Windows::Forms::TreeNode
	IL_001d:            V_1=Temp_3;                                                 //stloc.1
	IL_001e:                                                                        //ldloc.1
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:                                                                        //ldarg.0
	IL_0021:            V_1[0]=safe_cast<System::Windows::Forms::TreeNode^>(this);  //stelem.ref
	IL_0022:                                                                        //ldloc.1
	IL_0023:            this->M_x1(V_0,Temp_2,safe_cast<System::Collections::ICollection^>(V_1));//call				void Root::T_x46::M_x1(System::IO::StringWriter^,System::String^,System::Collections::ICollection^)
	IL_0028:                                                                        //ldloc.0
	IL_0029:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_002e:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_4));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0033:            goto IL_007b;                                               //leave.s				IL_007b
	                    ;}
	                    finally{
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_2=1;                                                      //stloc				V_2
	IL_003e:            /*goto IL_0042;*/goto IL_0040;                              //br.s				IL_0042
	IL_0040:            goto IL_0057;                                               //br.s				IL_0057
	IL_0042:                                                                        //ldloc				V_2
	IL_0046:            switch(V_2){case 0:goto IL_0065;case 1:goto IL_0040;case 2:goto IL_0078;};//switch				(IL_0065,IL_0040,IL_0078)
	IL_0057:                                                                        //ldloc.0
	IL_0058:            if(V_0==nullptr)goto IL_007a;                               //brfalse.s				IL_007a
	IL_005a:                                                                        //ldc.i4				0x0
	IL_005f:            V_2=0;                                                      //stloc				V_2
	IL_0063:            /*goto IL_0042;*/goto IL_0065;                              //br.s				IL_0042
	IL_0065:            goto IL_0067;                                               //br.s				IL_0067
	IL_0067:                                                                        //ldloc.0
	IL_0068:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_006d:                                                                        //ldc.i4				0x2
	IL_0072:            V_2=2;                                                      //stloc				V_2
	IL_0076:            /*goto IL_0042;*/goto IL_0078;                              //br.s				IL_0042
	IL_0078:            goto IL_007a;                                               //br.s				IL_007a
	IL_007a:                                                                        //endfinally
	                    ;}
	IL_007b:            return;                                                     //ret

}
inline void Root::T_x46::M_x12(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline System::String^ Root::T_x46::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_0=17;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A\x133C\x6B3E\x3840\x3342\x2044\x1546\x2C48\x2D4A\x284C\x3D4E\x3450\x3D52\x3654\x3256"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A\x133C\x6B3E\x3840\x3342\x2044\x1546\x2C48\x2D4A\x284C\x3D4E\x3450\x3D52\x3654\x3256",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x46::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x9();                                               //call				void Root::T_x46::M_x9()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x46::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::ITypeReference^ Root::T_x46 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->M_x1();                                               //call				void Root::T_x46::M_x1()
	IL_000d:            return;                                                     //ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::ITypeReference^ Root::T_x46 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x46::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_2=17;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x4
	IL_000e:            V_1=4;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003f;                                               //br.s				IL_003f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_007a;case 1:goto IL_00b9;case 2:goto IL_00d7;case 3:goto IL_00a6;case 4:goto IL_0014;case 5:goto IL_00f9;case 6:goto IL_010c;case 7:goto IL_0096;};//switch				(IL_007a,IL_00b9,IL_00d7,IL_00a6,IL_0014,IL_00f9,IL_010c,IL_0096)
	IL_003f:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A"
	IL_0044:                                                                        //ldloc				V_2
	IL_0048:            Temp_3=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004d:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x194C\x364E\x2150\x3652\x1154\x3256\x3A58\x375A\x3C5C\x2D5E\x0060\x1762\x0C64\x0866\x0768"
	IL_0052:                                                                        //ldloc				V_2
	IL_0056:            Temp_4=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x194C\x364E\x2150\x3652\x1154\x3256\x3A58\x375A\x3C5C\x2D5E\x0060\x1762\x0C64\x0866\x0768",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005b:            goto IL_0098;                                               //leave.s				IL_0098
	IL_005d:                                                                        //ldarg.0
	IL_005e:            this->M_x12();                                              //call				void Root::T_x46::M_x12()
	IL_0063:            return;                                                     //ret
	IL_0064:                                                                        //ldc.i4.2
	IL_0065:                                                                        //dup
	IL_0066:                                                                        //dup
	IL_0067:                                                                        //ldc.i4.3
	IL_0068:                                                                        //add
	IL_0069:                                                                        //bgt				IL_0065
	IL_006e:                                                                        //pop
	IL_006f:                                                                        //ldc.i4				0x0
	IL_0074:            V_1=0;                                                      //stloc				V_1
	IL_0078:            /*goto IL_0016;*/goto IL_007a;                              //br.s				IL_0016
	IL_007a:                                                                        //ldloc.0
	IL_007b:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x194C\x364E\x2150\x3652\x1154\x3256\x3A58\x375A\x3C5C\x2D5E\x0060\x1762\x0C64\x0866\x0768"
	IL_0080:                                                                        //ldloc				V_2
	IL_0084:            Temp_0=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0244\x2846\x1D48\x244A\x194C\x364E\x2150\x3652\x1154\x3256\x3A58\x375A\x3C5C\x2D5E\x0060\x1762\x0C64\x0866\x0768",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:            if(V_0==Temp_0)goto IL_00bb;                                //beq.s				IL_00bb
	IL_008b:                                                                        //ldc.i4				0x7
	IL_0090:            V_1=7;                                                      //stloc				V_1
	IL_0094:            /*goto IL_0016;*/goto IL_0096;                              //br.s				IL_0016
	IL_0096:            goto IL_00fe;                                               //br.s				IL_00fe
	IL_0098:                                                                        //ldc.i4				0x3
	IL_009d:            V_1=3;                                                      //stloc				V_1
	IL_00a1:            /*goto IL_0016;*/goto IL_00a6;                              //br				IL_0016
	IL_00a6:                                                                        //ldarg.1
	IL_00a7:                                                                        //dup
	IL_00a8:            V_0=A_0;                                                    //stloc.0
	IL_00a9:            if(V_0==nullptr)goto IL_010e;                               //brfalse.s				IL_010e
	IL_00ab:                                                                        //ldc.i4				0x1
	IL_00b0:            V_1=1;                                                      //stloc				V_1
	IL_00b4:            /*goto IL_0016;*/goto IL_00b9;                              //br				IL_0016
	IL_00b9:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            this->M_x9();                                               //call				void Root::T_x46::M_x9()
	IL_00c1:            return;                                                     //ret
	IL_00c2:                                                                        //ldloc.0
	IL_00c3:            Temp_1=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00c8:            V_0=Temp_1;                                                 //stloc.0
	IL_00c9:                                                                        //ldc.i4				0x2
	IL_00ce:            V_1=2;                                                      //stloc				V_1
	IL_00d2:            /*goto IL_0016;*/goto IL_00d7;                              //br				IL_0016
	IL_00d7:                                                                        //ldloc.0
	IL_00d8:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A"
	IL_00dd:                                                                        //ldloc				V_2
	IL_00e1:            Temp_2=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e6:            if(V_0==Temp_2)goto IL_005d;                                //beq				IL_005d
	IL_00eb:                                                                        //ldc.i4				0x5
	IL_00f0:            V_1=5;                                                      //stloc				V_1
	IL_00f4:            /*goto IL_0016;*/goto IL_00f9;                              //br				IL_0016
	IL_00f9:            goto IL_0064;                                               //br				IL_0064
	IL_00fe:                                                                        //ldc.i4				0x6
	IL_0103:            V_1=6;                                                      //stloc				V_1
	IL_0107:            /*goto IL_0016;*/goto IL_010c;                              //br				IL_0016
	IL_010c:            goto IL_010e;                                               //br.s				IL_010e
	IL_010e:                                                                        //ldarg.0
	IL_010f:                                                                        //ldarg.1
	IL_0110:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_0115:            return;                                                     //ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_000b:            return safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//ret

}
inline void Root::T_x46::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	//local variables.
	Reflector::IAssemblyBrowser^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_0011:            Temp_0=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001b:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_0020:            V_0=safe_cast<Reflector::IAssemblyBrowser^>(Temp_1);        //stloc.0
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_2=this->M_x8();                                        //call				Reflector::CodeModel::ITypeReference^ Root::T_x46::M_x8()
	IL_0028:            V_0->ActiveItem=safe_cast<System::Object^>(Temp_2);         //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_002d:            return;                                                     //ret

}
inline System::Boolean Root::T_x46::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_2=4;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x6
	IL_000e:            V_1=6;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //add
	IL_0019:                                                                        //bgt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_0046;                                               //br.s				IL_0046
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_00e1;case 1:goto IL_006f;case 2:goto IL_008b;case 3:goto IL_009f;case 4:goto IL_00ce;case 5:goto IL_00be;case 6:goto IL_0014;};//switch				(IL_00e1,IL_006f,IL_008b,IL_009f,IL_00ce,IL_00be,IL_0014)
	IL_0046:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7B37\x5539\x4C3B\x473D"
	IL_004b:                                                                        //ldloc				V_2
	IL_004f:            Temp_4=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7B37\x5539\x4C3B\x473D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0054:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7F37\x5539\x683B\x513D\x143F\x3B41\x3443\x2345\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B"
	IL_0059:                                                                        //ldloc				V_2
	IL_005d:            Temp_5=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7F37\x5539\x683B\x513D\x143F\x3B41\x3443\x2345\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0062:            goto IL_00c0;                                               //leave.s				IL_00c0
	IL_0064:                                                                        //ldc.i4				0x1
	IL_0069:            V_1=1;                                                      //stloc				V_1
	IL_006d:            /*goto IL_0021;*/goto IL_006f;                              //br.s				IL_0021
	IL_006f:                                                                        //ldloc.0
	IL_0070:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7F37\x5539\x683B\x513D\x143F\x3B41\x3443\x2345\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B"
	IL_0075:                                                                        //ldloc				V_2
	IL_0079:            Temp_1=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7F37\x5539\x683B\x513D\x143F\x3B41\x3443\x2345\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007e:            if(V_0!=Temp_1)goto IL_00e5;                                //bne.un.s				IL_00e5
	IL_0080:                                                                        //ldc.i4				0x2
	IL_0085:            V_1=2;                                                      //stloc				V_1
	IL_0089:            /*goto IL_0021;*/goto IL_008b;                              //br.s				IL_0021
	IL_008b:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_008d:                                                                        //ldloc.0
	IL_008e:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0093:            V_0=Temp_0;                                                 //stloc.0
	IL_0094:                                                                        //ldc.i4				0x3
	IL_0099:            V_1=3;                                                      //stloc				V_1
	IL_009d:            /*goto IL_0021;*/goto IL_009f;                              //br.s				IL_0021
	IL_009f:                                                                        //ldloc.0
	IL_00a0:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7B37\x5539\x4C3B\x473D"
	IL_00a5:                                                                        //ldloc				V_2
	IL_00a9:            Temp_3=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x7B37\x5539\x4C3B\x473D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ae:            if(V_0==Temp_3)goto IL_00e3;                                //beq.s				IL_00e3
	IL_00b0:                                                                        //ldc.i4				0x5
	IL_00b5:            V_1=5;                                                      //stloc				V_1
	IL_00b9:            /*goto IL_0021;*/goto IL_00be;                              //br				IL_0021
	IL_00be:            goto IL_0064;                                               //br.s				IL_0064
	IL_00c0:                                                                        //ldc.i4				0x4
	IL_00c5:            V_1=4;                                                      //stloc				V_1
	IL_00c9:            /*goto IL_0021;*/goto IL_00ce;                              //br				IL_0021
	IL_00ce:                                                                        //ldarg.1
	IL_00cf:                                                                        //dup
	IL_00d0:            V_0=A_0;                                                    //stloc.0
	IL_00d1:            if(V_0==nullptr)goto IL_00e5;                               //brfalse.s				IL_00e5
	IL_00d3:                                                                        //ldc.i4				0x0
	IL_00d8:            V_1=0;                                                      //stloc				V_1
	IL_00dc:            /*goto IL_0021;*/goto IL_00e1;                              //br				IL_0021
	IL_00e1:            goto IL_008d;                                               //br.s				IL_008d
	IL_00e3:                                                                        //ldc.i4.1
	IL_00e4:            return true;                                                //ret
	IL_00e5:                                                                        //ldarg.0
	IL_00e6:                                                                        //ldarg.1
	IL_00e7:            Temp_2=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_00ec:            return Temp_2;                                              //ret

}
