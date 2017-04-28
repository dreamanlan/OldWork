#include "global_xref.h"

inline Root::T_x26::T_x26()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Root::T_x26::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0011:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_0016:            V_0=dynamic_cast<Reflector::CodeModel::IAssembly^>(Temp_0); //stloc.0
	IL_0017:                                                                        //ldloc.0
	IL_0018:            Temp_1=V_0->Status;                                         //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_001d:            if(Temp_1==nullptr)goto IL_0030;                            //brfalse.s				IL_0030
	IL_001f:            goto IL_0021;                                               //br.s				IL_0021
	IL_0021:                                                                        //ldloc.0
	IL_0022:            Temp_2=V_0->Status;                                         //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0027:            Temp_3=Temp_2->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_002c:                                                                        //ldc.i4.0
	IL_002d:                                                                        //ceq
	IL_002f:            return (Temp_3 == 0);                                       //ret
	IL_0030:                                                                        //ldc.i4.1
	IL_0031:            return true;                                                //ret

}
inline void Root::T_x26::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003a;                                               //br.s				IL_003a
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00a9;case 1:goto IL_0129;case 2:goto IL_00fc;case 3:goto IL_000b;case 4:goto IL_0050;case 5:goto IL_0074;case 6:goto IL_0113;case 7:goto IL_0093;case 8:goto IL_00d8;};//switch				(IL_00a9,IL_0129,IL_00fc,IL_000b,IL_0050,IL_0074,IL_0113,IL_0093,IL_00d8)
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_4=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0040:            if(Temp_4==nullptr)goto IL_00fe;                            //brfalse				IL_00fe
	IL_0045:                                                                        //ldc.i4				0x4
	IL_004a:            V_1=4;                                                      //stloc				V_1
	IL_004e:            /*goto IL_000d;*/goto IL_0050;                              //br.s				IL_000d
	IL_0050:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_0052:            goto IL_0055;                                               //br.s				IL_0055
	IL_0054:                                                                        //break
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldc.i4				0x97
	IL_005c:                                                                        //dup
	IL_005d:            V_0=151;                                                    //stloc.0
	IL_005e:            this->SelectedImageIndex=151;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0063:                                                                        //ldloc.0
	IL_0064:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0069:                                                                        //ldc.i4				0x5
	IL_006e:            V_1=5;                                                      //stloc				V_1
	IL_0072:            /*goto IL_000d;*/goto IL_0074;                              //br.s				IL_000d
	IL_0074:            goto IL_012e;                                               //br				IL_012e
	IL_0079:                                                                        //ldarg.0
	IL_007a:                                                                        //ldarg.1
	IL_007b:            Temp_0=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0080:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0085:                                                                        //ldc.i4				0x7
	IL_008a:            V_1=7;                                                      //stloc				V_1
	IL_008e:            /*goto IL_000d;*/goto IL_0093;                              //br				IL_000d
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_3=this->M_x1();                                        //call				System::Boolean Root::T_x26::M_x1()
	IL_0099:            if(!Temp_3)goto IL_00da;                                    //brfalse.s				IL_00da
	IL_009b:                                                                        //ldc.i4				0x0
	IL_00a0:            V_1=0;                                                      //stloc				V_1
	IL_00a4:            /*goto IL_000d;*/goto IL_00a9;                              //br				IL_000d
	IL_00a9:            goto IL_0052;                                               //br.s				IL_0052
	IL_00ab:                                                                        //ldarg.0
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:                                                                        //ldc.i4				0x97
	IL_00b2:                                                                        //dup
	IL_00b3:            V_0=151;                                                    //stloc.0
	IL_00b4:            this->SelectedImageIndex=151;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_00b9:                                                                        //ldloc.0
	IL_00ba:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00c5:            this->Text=Temp_1;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_00ca:                                                                        //ldc.i4				0x8
	IL_00cf:            V_1=8;                                                      //stloc				V_1
	IL_00d3:            /*goto IL_000d;*/goto IL_00d8;                              //br				IL_000d
	IL_00d8:            goto IL_00fe;                                               //br.s				IL_00fe
	IL_00da:                                                                        //ldarg.0
	IL_00db:                                                                        //ldarg.0
	IL_00dc:                                                                        //ldc.i4				0xa6
	IL_00e1:                                                                        //dup
	IL_00e2:            V_0=166;                                                    //stloc.0
	IL_00e3:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_00e8:                                                                        //ldloc.0
	IL_00e9:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_00ee:                                                                        //ldc.i4				0x2
	IL_00f3:            V_1=2;                                                      //stloc				V_1
	IL_00f7:            /*goto IL_000d;*/goto IL_00fc;                              //br				IL_000d
	IL_00fc:            goto IL_012e;                                               //br.s				IL_012e
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:                                                                        //ldarg.1
	IL_0100:            Root::T_x10::M_x1(safe_cast<System::Object^>(A_0));         //call				void Root::T_x10::M_x1(System::Object^)
	IL_0105:                                                                        //ldc.i4				0x6
	IL_010a:            V_1=6;                                                      //stloc				V_1
	IL_010e:            /*goto IL_000d;*/goto IL_0113;                              //br				IL_000d
	IL_0113:                                                                        //ldarg.0
	IL_0114:            Temp_2=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0119:            if(Temp_2==nullptr)goto IL_012e;                            //brfalse.s				IL_012e
	IL_011b:                                                                        //ldc.i4				0x1
	IL_0120:            V_1=1;                                                      //stloc				V_1
	IL_0124:            /*goto IL_000d;*/goto IL_0129;                              //br				IL_000d
	IL_0129:            goto IL_0079;                                               //br				IL_0079
	IL_012e:                                                                        //ldarg.0
	IL_012f:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0134:            return;                                                     //ret

}
inline void Root::T_x26::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_3 = nullptr;
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
	IL_002a:            Temp_3=this->M_x4();                                        //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_002f:            V_0->WriteAssembly(Temp_3);                                 //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteAssembly(Reflector::CodeModel::IAssembly^)
	IL_0034:            return;                                                     //ret

}
inline Root::T_x39^ Root::T_x26::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	Reflector::CodeModel::IModule^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	Root::T_x39^ V_1 = nullptr;
	Root::T_x39^ V_2 = nullptr;
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
	IL_0019:                                                                        //ldc.i4				0x2
	IL_001e:            V_5=2;                                                      //stloc				V_5
	IL_0022:            /*goto IL_0026;*/goto IL_0024;                              //br.s				IL_0026
	IL_0024:            goto IL_0053;                                               //br.s				IL_0053
	IL_0026:                                                                        //ldloc				V_5
	IL_002a:            switch(V_5){case 0:goto IL_0073;case 1:goto IL_00b3;case 2:goto IL_0024;case 3:goto IL_00c6;case 4:goto IL_00ed;case 5:goto IL_0093;case 6:goto IL_00a1;case 7:goto IL_00dd;case 8:goto IL_0060;};//switch				(IL_0073,IL_00b3,IL_0024,IL_00c6,IL_00ed,IL_0093,IL_00a1,IL_00dd,IL_0060)
	IL_0053:            goto IL_0055;                                               //br.s				IL_0055
	IL_0055:                                                                        //ldc.i4				0x8
	IL_005a:            V_5=8;                                                      //stloc				V_5
	IL_005e:            /*goto IL_0026;*/goto IL_0060;                              //br.s				IL_0026
	IL_0060:                                                                        //ldloc.3
	IL_0061:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0066:            if(Temp_3)goto IL_0075;                                     //brtrue.s				IL_0075
	IL_0068:                                                                        //ldc.i4				0x0
	IL_006d:            V_5=0;                                                      //stloc				V_5
	IL_0071:            /*goto IL_0026;*/goto IL_0073;                              //br.s				IL_0026
	IL_0073:            goto IL_00df;                                               //br.s				IL_00df
	IL_0075:                                                                        //ldloc.3
	IL_0076:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_007b:                                                                        //castclass				Root::T_x10
	IL_0080:            V_0=safe_cast<Root::T_x10^>(Temp_4);                        //stloc.0
	IL_0081:                                                                        //ldloc.0
	IL_0082:                                                                        //isinst				Root::T_x39
	IL_0087:            V_1=dynamic_cast<Root::T_x39^>(V_0);                        //stloc.1
	IL_0088:                                                                        //ldc.i4				0x5
	IL_008d:            V_5=5;                                                      //stloc				V_5
	IL_0091:            /*goto IL_0026;*/goto IL_0093;                              //br.s				IL_0026
	IL_0093:                                                                        //ldloc.1
	IL_0094:            if(V_1==nullptr)goto IL_0055;                               //brfalse.s				IL_0055
	IL_0096:                                                                        //ldc.i4				0x6
	IL_009b:            V_5=6;                                                      //stloc				V_5
	IL_009f:            /*goto IL_0026;*/goto IL_00a1;                              //br.s				IL_0026
	IL_00a1:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_00a3:                                                                        //ldloc.1
	IL_00a4:            V_2=V_1;                                                    //stloc.2
	IL_00a5:                                                                        //ldc.i4				0x1
	IL_00aa:            V_5=1;                                                      //stloc				V_5
	IL_00ae:            /*goto IL_0026;*/goto IL_00b3;                              //br				IL_0026
	IL_00b3:            goto IL_0142;                                               //leave				IL_0142
	IL_00b8:                                                                        //ldc.i4				0x3
	IL_00bd:            V_5=3;                                                      //stloc				V_5
	IL_00c1:            /*goto IL_0026;*/goto IL_00c6;                              //br				IL_0026
	IL_00c6:                                                                        //ldarg.1
	IL_00c7:                                                                        //ldloc.1
	IL_00c8:            Temp_2=V_1->M_x1();                                         //callvirt				Reflector::CodeModel::IModule^ Root::T_x39::M_x1()
	IL_00cd:            if(A_0!=Temp_2)goto IL_0055;                                //bne.un.s				IL_0055
	IL_00cf:                                                                        //ldc.i4				0x7
	IL_00d4:            V_5=7;                                                      //stloc				V_5
	IL_00d8:            /*goto IL_0026;*/goto IL_00dd;                              //br				IL_0026
	IL_00dd:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_00df:                                                                        //ldc.i4				0x4
	IL_00e4:            V_5=4;                                                      //stloc				V_5
	IL_00e8:            /*goto IL_0026;*/goto IL_00ed;                              //br				IL_0026
	IL_00ed:            goto IL_0014;                                               //leave				IL_0014
	                    ;}
	                    finally{
	IL_00f2:            goto IL_0109;                                               //br.s				IL_0109
	IL_00f4:                                                                        //ldloc				V_6
	IL_00f8:            switch(V_6){case 0:goto IL_012b;case 1:goto IL_011c;case 2:goto IL_013f;};//switch				(IL_012b,IL_011c,IL_013f)
	IL_0109:                                                                        //ldloc.3
	IL_010a:                                                                        //isinst				System::IDisposable
	IL_010f:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0111:                                                                        //ldc.i4				0x1
	IL_0116:            V_6=1;                                                      //stloc				V_6
	IL_011a:            /*goto IL_00f4;*/goto IL_011c;                              //br.s				IL_00f4
	IL_011c:                                                                        //ldloc.s				V_4
	IL_011e:            if(V_4==nullptr)goto IL_0141;                               //brfalse.s				IL_0141
	IL_0120:                                                                        //ldc.i4				0x0
	IL_0125:            V_6=0;                                                      //stloc				V_6
	IL_0129:            /*goto IL_00f4;*/goto IL_012b;                              //br.s				IL_00f4
	IL_012b:            goto IL_012d;                                               //br.s				IL_012d
	IL_012d:                                                                        //ldloc.s				V_4
	IL_012f:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0134:                                                                        //ldc.i4				0x2
	IL_0139:            V_6=2;                                                      //stloc				V_6
	IL_013d:            /*goto IL_00f4;*/goto IL_013f;                              //br.s				IL_00f4
	IL_013f:            goto IL_0141;                                               //br.s				IL_0141
	IL_0141:                                                                        //endfinally
	                    ;}
	IL_0142:                                                                        //ldloc.2
	IL_0143:            return V_2;                                                 //ret

}
inline void Root::T_x26::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	Root::T_x10^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldc.i4				0x0
	IL_0010:            V_0=0;                                                      //stloc				V_0
	IL_0014:            /*goto IL_0018;*/goto IL_0016;                              //br.s				IL_0018
	IL_0016:            goto IL_002d;                                               //br.s				IL_002d
	IL_0018:                                                                        //ldloc				V_0
	IL_001c:            switch(V_0){case 0:goto IL_0016;case 1:goto IL_005e;case 2:goto IL_0040;};//switch				(IL_0016,IL_005e,IL_0040)
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_3=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0033:            if(Temp_3==nullptr)goto IL_0060;                            //brfalse.s				IL_0060
	IL_0035:                                                                        //ldc.i4				0x2
	IL_003a:            V_0=2;                                                      //stloc				V_0
	IL_003e:            /*goto IL_0018;*/goto IL_0040;                              //br.s				IL_0018
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0048:            Temp_1=gcnew Root::T_x10();                                 //newobj				void Root::T_x10::.ctor()
	IL_004d:            Temp_2=Temp_0->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0052:                                                                        //pop
	IL_0053:                                                                        //ldc.i4				0x1
	IL_0058:            V_0=1;                                                      //stloc				V_0
	IL_005c:            /*goto IL_0018;*/goto IL_005e;                              //br.s				IL_0018
	IL_005e:            goto IL_0060;                                               //br.s				IL_0060
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //ldarg.1
	IL_0062:            Root::T_x10::M_x1(A_0);                                     //call				void Root::T_x10::M_x1(System::EventArgs^)
	IL_0067:            return;                                                     //ret

}
inline void Root::T_x26::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x4();                                        //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0006:            Temp_1=Temp_0->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_000b:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_1));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0010:            return;                                                     //ret

}
inline System::String^ Root::T_x26::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_0=14;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6E2B\x5C2D\x5F2F\x4531\x4733\x5335\x4A37\x1439\x7D3B\x4D3D\x333F\x2741\x2943\x2445\x2447\x3349"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6E2B\x5C2D\x5F2F\x4531\x4733\x5335\x4A37\x1439\x7D3B\x4D3D\x333F\x2741\x2943\x2445\x2447\x3349",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x26::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x26::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Root::T_x39^ Temp_5 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Root::T_x12^ Temp_8 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Reflector::CodeModel::IAssembly^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	Reflector::CodeModel::IAssembly^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	Root::T_x26::T_x1^ Temp_18 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	Reflector::CodeModel::IAssembly^ Temp_21 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_22 = nullptr;
	Reflector::CodeModel::IResourceCollection^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	//local variables.
	Reflector::CodeModel::IModule^ V_0 = nullptr;
	Root::T_x39^ V_1 = nullptr;
	Root::T_x26::T_x1^ V_2 = nullptr;
	Root::T_x12^ V_3 = nullptr;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_002f;                                               //br.s				IL_002f
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_00e0;case 1:goto IL_004c;case 2:goto IL_01f6;case 3:goto IL_01d5;case 4:goto IL_005c;case 5:goto IL_007a;case 6:goto IL_022d;case 7:goto IL_00ac;case 8:goto IL_0209;};//switch				(IL_00e0,IL_004c,IL_01f6,IL_01d5,IL_005c,IL_007a,IL_022d,IL_00ac,IL_0209)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_0=this->M_x4();                                        //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0035:            Temp_1=Temp_0->Modules;                                     //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_003a:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_003f:            V_4=Temp_2;                                                 //stloc.s				V_4
	IL_0041:                                                                        //ldc.i4				0x1
	IL_0046:            V_6=1;                                                      //stloc				V_6
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            /*goto IL_00e5;*/goto IL_00E001;                            //br				IL_00e5
	IL_0051:                                                                        //ldc.i4				0x4
	IL_0056:            V_6=4;                                                      //stloc				V_6
	IL_005a:            /*goto IL_0002;*/goto IL_005c;                              //br.s				IL_0002
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_16=this->M_x4();                                       //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0062:            Temp_17=Temp_16->Status;                                    //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0067:            if(Temp_17==nullptr)goto IL_0232;                           //brfalse				IL_0232
	IL_006c:            goto IL_006f;                                               //br.s				IL_006f
	IL_006e:                                                                        //break
	IL_006f:                                                                        //ldc.i4				0x5
	IL_0074:            V_6=5;                                                      //stloc				V_6
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_01c7;                                               //br				IL_01c7
	IL_007f:            Temp_18=gcnew Root::T_x26::T_x1();                          //newobj				void Root::T_x26::T_x1::.ctor()
	IL_0084:            V_2=Temp_18;                                                //stloc.2
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_19=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_008b:                                                                        //ldloc.2
	IL_008c:            Temp_20=Temp_19->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0091:                                                                        //pop
	IL_0092:                                                                        //ldloc.2
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_21=this->M_x4();                                       //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0099:            V_2->M_x1(Temp_21);                                         //callvirt				void Root::T_x26::T_x1::M_x1(Reflector::CodeModel::IAssembly^)
	IL_009e:                                                                        //ldc.i4				0x7
	IL_00a3:            V_6=7;                                                      //stloc				V_6
	IL_00a7:            /*goto IL_0002;*/goto IL_00ac;                              //br				IL_0002
	IL_00ac:            goto IL_0051;                                               //br.s				IL_0051
	IL_00ae:            Temp_8=gcnew Root::T_x12();                                 //newobj				void Root::T_x12::.ctor()
	IL_00b3:            V_3=Temp_8;                                                 //stloc.3
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:            Temp_9=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00ba:                                                                        //ldloc.3
	IL_00bb:            Temp_10=Temp_9->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_3));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00c0:                                                                        //pop
	IL_00c1:                                                                        //ldloc.3
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:            Temp_11=this->M_x4();                                       //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_00c8:            Temp_12=Temp_11->Status;                                    //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_00cd:            V_3->M_x1(Temp_12);                                         //callvirt				void Root::T_x12::M_x1(System::String^)
	IL_00d2:                                                                        //ldc.i4				0x0
	IL_00d7:            V_6=0;                                                      //stloc				V_6
	IL_00db:            /*goto IL_0002;*/goto IL_00e0;                              //br				IL_0002
	IL_00e0:            goto IL_0232;                                               //br				IL_0232
	IL_00E001:          try{
	IL_00e5:                                                                        //ldc.i4				0x1
	IL_00ea:            V_6=1;                                                      //stloc				V_6
	IL_00ee:            /*goto IL_00f2;*/goto IL_00f0;                              //br.s				IL_00f2
	IL_00f0:            goto IL_010f;                                               //br.s				IL_010f
	IL_00f2:                                                                        //ldloc				V_6
	IL_00f6:            switch(V_6){case 0:goto IL_011c;case 1:goto IL_00f0;case 2:goto IL_0164;case 3:goto IL_0130;case 4:goto IL_0171;};//switch				(IL_011c,IL_00f0,IL_0164,IL_0130,IL_0171)
	IL_010f:            goto IL_0111;                                               //br.s				IL_0111
	IL_0111:                                                                        //ldc.i4				0x0
	IL_0116:            V_6=0;                                                      //stloc				V_6
	IL_011a:            /*goto IL_00f2;*/goto IL_011c;                              //br.s				IL_00f2
	IL_011c:                                                                        //ldloc.s				V_4
	IL_011e:            Temp_3=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0123:            if(Temp_3)goto IL_0132;                                     //brtrue.s				IL_0132
	IL_0125:                                                                        //ldc.i4				0x3
	IL_012a:            V_6=3;                                                      //stloc				V_6
	IL_012e:            /*goto IL_00f2;*/goto IL_0130;                              //br.s				IL_00f2
	IL_0130:            goto IL_0166;                                               //br.s				IL_0166
	IL_0132:                                                                        //ldloc.s				V_4
	IL_0134:            Temp_4=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0139:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_013e:            V_0=safe_cast<Reflector::CodeModel::IModule^>(Temp_4);      //stloc.0
	IL_013f:            Temp_5=gcnew Root::T_x39();                                 //newobj				void Root::T_x39::.ctor()
	IL_0144:            V_1=Temp_5;                                                 //stloc.1
	IL_0145:                                                                        //ldarg.0
	IL_0146:            Temp_6=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_014b:                                                                        //ldloc.1
	IL_014c:            Temp_7=Temp_6->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0151:                                                                        //pop
	IL_0152:                                                                        //ldloc.1
	IL_0153:                                                                        //ldloc.0
	IL_0154:            V_1->M_x1(V_0);                                             //callvirt				void Root::T_x39::M_x1(Reflector::CodeModel::IModule^)
	IL_0159:                                                                        //ldc.i4				0x2
	IL_015e:            V_6=2;                                                      //stloc				V_6
	IL_0162:            /*goto IL_00f2;*/goto IL_0164;                              //br.s				IL_00f2
	IL_0164:            goto IL_0111;                                               //br.s				IL_0111
	IL_0166:                                                                        //ldc.i4				0x4
	IL_016b:            V_6=4;                                                      //stloc				V_6
	IL_016f:            /*goto IL_00f2;*/goto IL_0171;                              //br.s				IL_00f2
	IL_0171:            goto IL_01fb;                                               //leave				IL_01fb
	                    ;}
	                    finally{
	IL_0176:            goto IL_018d;                                               //br.s				IL_018d
	IL_0178:                                                                        //ldloc				V_6
	IL_017c:            switch(V_6){case 0:goto IL_01c4;case 1:goto IL_01a1;case 2:goto IL_01b0;};//switch				(IL_01c4,IL_01a1,IL_01b0)
	IL_018d:                                                                        //ldloc.s				V_4
	IL_018f:                                                                        //isinst				System::IDisposable
	IL_0194:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_0196:                                                                        //ldc.i4				0x1
	IL_019b:            V_6=1;                                                      //stloc				V_6
	IL_019f:            /*goto IL_0178;*/goto IL_01a1;                              //br.s				IL_0178
	IL_01a1:                                                                        //ldloc.s				V_5
	IL_01a3:            if(V_5==nullptr)goto IL_01c6;                               //brfalse.s				IL_01c6
	IL_01a5:                                                                        //ldc.i4				0x2
	IL_01aa:            V_6=2;                                                      //stloc				V_6
	IL_01ae:            /*goto IL_0178;*/goto IL_01b0;                              //br.s				IL_0178
	IL_01b0:            goto IL_01b2;                                               //br.s				IL_01b2
	IL_01b2:                                                                        //ldloc.s				V_5
	IL_01b4:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01b9:                                                                        //ldc.i4				0x0
	IL_01be:            V_6=0;                                                      //stloc				V_6
	IL_01c2:            /*goto IL_0178;*/goto IL_01c4;                              //br.s				IL_0178
	IL_01c4:            goto IL_01c6;                                               //br.s				IL_01c6
	IL_01c6:                                                                        //endfinally
	                    ;}
	IL_01c7:                                                                        //ldc.i4				0x3
	IL_01cc:            V_6=3;                                                      //stloc				V_6
	IL_01d0:            /*goto IL_0002;*/goto IL_01d5;                              //br				IL_0002
	IL_01d5:                                                                        //ldarg.0
	IL_01d6:            Temp_13=this->M_x4();                                       //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_01db:            Temp_14=Temp_13->Status;                                    //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_01e0:            Temp_15=Temp_14->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_01e5:                                                                        //ldc.i4.0
	IL_01e6:            if(Temp_15<=0)goto IL_0232;                                 //ble.s				IL_0232
	IL_01e8:                                                                        //ldc.i4				0x2
	IL_01ed:            V_6=2;                                                      //stloc				V_6
	IL_01f1:            /*goto IL_0002;*/goto IL_01f6;                              //br				IL_0002
	IL_01f6:            goto IL_00ae;                                               //br				IL_00ae
	IL_01fb:                                                                        //ldc.i4				0x8
	IL_0200:            V_6=8;                                                      //stloc				V_6
	IL_0204:            /*goto IL_0002;*/goto IL_0209;                              //br				IL_0002
	IL_0209:                                                                        //ldarg.0
	IL_020a:            Temp_22=this->M_x4();                                       //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_020f:            Temp_23=Temp_22->Resources;                                 //callvirt				Reflector::CodeModel::IResourceCollection^ Reflector::CodeModel::IAssembly::get_Resources()
	IL_0214:            Temp_24=safe_cast<System::Collections::ICollection^>(Temp_23)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0219:                                                                        //ldc.i4.0
	IL_021a:            if(Temp_24<=0)goto IL_0051;                                 //ble				IL_0051
	IL_021f:                                                                        //ldc.i4				0x6
	IL_0224:            V_6=6;                                                      //stloc				V_6
	IL_0228:            /*goto IL_0002;*/goto IL_022d;                              //br				IL_0002
	IL_022d:            goto IL_007f;                                               //br				IL_007f
	IL_0232:                                                                        //ldarg.0
	IL_0233:                                                                        //ldarg.1
	IL_0234:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_0239:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_000b:            return safe_cast<Reflector::CodeModel::IAssembly^>(Temp_0); //ret

}
inline System::Boolean Root::T_x26::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x4();                                        //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0006:            if(Temp_0==nullptr)goto IL_001c;                            //brfalse.s				IL_001c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->M_x4();                                        //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0010:            Temp_2=Temp_1->EntryPoint;                                  //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IAssembly::get_EntryPoint()
	IL_0015:                                                                        //ldnull
	IL_0016:                                                                        //ceq
	IL_0018:                                                                        //ldc.i4.0
	IL_0019:                                                                        //ceq
	IL_001b:            return ((Temp_2 == safe_cast<Reflector::CodeModel::IMethodDeclaration^>(nullptr)) == false);//ret
	IL_001c:            goto IL_001f;                                               //br.s				IL_001f
	IL_001e:                                                                        //break
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:            return false;                                               //ret

}
inline void Root::T_x26::M_x5(System::String^ A_0)
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
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_2=13;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_005e;                                               //br.s				IL_005e
	IL_0016:                                                                        //ldc.i4.5
	IL_0017:                                                                        //dup
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //ldc.i4.6
	IL_001a:                                                                        //sub
	IL_001b:                                                                        //blt				IL_0017
	IL_0020:                                                                        //pop
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_016b;case 1:goto IL_00bf;case 2:goto IL_013c;case 3:goto IL_0014;case 4:goto IL_019b;case 5:goto IL_01bd;case 6:goto IL_0181;case 7:goto IL_011e;case 8:goto IL_01d0;case 9:goto IL_015b;case 10:goto IL_00de;case 11:goto IL_01ef;case 12:goto IL_00ff;};//switch				(IL_016b,IL_00bf,IL_013c,IL_0014,IL_019b,IL_01bd,IL_0181,IL_011e,IL_01d0,IL_015b,IL_00de,IL_01ef,IL_00ff)
	IL_005e:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0D48\x224A\x3E4C\x2E4E\x2250\x2052\x3054\x3A56\x3B58\x375A\x385C\x2D5E"
	IL_0063:                                                                        //ldloc				V_2
	IL_0067:            Temp_6=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0D48\x224A\x3E4C\x2E4E\x2250\x2052\x3054\x3A56\x3B58\x375A\x385C\x2D5E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006c:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0848\x254A\x2C4C\x234E\x2850\x2952\x3054\x2556"
	IL_0071:                                                                        //ldloc				V_2
	IL_0075:            Temp_7=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0848\x254A\x2C4C\x234E\x2850\x2952\x3054\x2556",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007a:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0640\x2C42\x1144\x2846\x0C48\x254A\x394C\x3D4E\x2850\x0352\x3A54\x3E56\x3758\x2F5A"
	IL_007f:                                                                        //ldloc				V_2
	IL_0083:            Temp_8=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0640\x2C42\x1144\x2846\x0C48\x254A\x394C\x3D4E\x2850\x0352\x3A54\x3E56\x3758\x2F5A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0088:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2F42\x2A44\x3446\x2C48"
	IL_008d:                                                                        //ldloc				V_2
	IL_0091:            Temp_9=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2F42\x2A44\x3446\x2C48",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0096:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46"
	IL_009b:                                                                        //ldloc				V_2
	IL_009f:            Temp_10=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a4:            goto IL_015d;                                               //leave				IL_015d
	IL_00a9:                                                                        //ldarg.0
	IL_00aa:            this->M_x16();                                              //call				void Root::T_x10::M_x16()
	IL_00af:            return;                                                     //ret
	IL_00b0:            return;                                                     //ret
	IL_00b1:                                                                        //ldc.i4				0x1
	IL_00b6:            V_1=1;                                                      //stloc				V_1
	IL_00ba:            /*goto IL_0016;*/goto IL_00bf;                              //br				IL_0016
	IL_00bf:                                                                        //ldloc.0
	IL_00c0:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0848\x254A\x2C4C\x234E\x2850\x2952\x3054\x2556"
	IL_00c5:                                                                        //ldloc				V_2
	IL_00c9:            Temp_0=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0848\x254A\x2C4C\x234E\x2850\x2952\x3054\x2556",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ce:            if(V_0==Temp_0)goto IL_00a9;                                //beq.s				IL_00a9
	IL_00d0:                                                                        //ldc.i4				0xa
	IL_00d5:            V_1=10;                                                     //stloc				V_1
	IL_00d9:            /*goto IL_0016;*/goto IL_00de;                              //br				IL_0016
	IL_00de:            goto IL_01c2;                                               //br				IL_01c2
	IL_00e3:                                                                        //ldarg.0
	IL_00e4:            this->M_x9();                                               //call				void Root::T_x26::M_x9()
	IL_00e9:            return;                                                     //ret
	IL_00ea:                                                                        //ldloc.0
	IL_00eb:            Temp_3=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00f0:            V_0=Temp_3;                                                 //stloc.0
	IL_00f1:                                                                        //ldc.i4				0xc
	IL_00f6:            V_1=12;                                                     //stloc				V_1
	IL_00fa:            /*goto IL_0016;*/goto IL_00ff;                              //br				IL_0016
	IL_00ff:                                                                        //ldloc.0
	IL_0100:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0D48\x224A\x3E4C\x2E4E\x2250\x2052\x3054\x3A56\x3B58\x375A\x385C\x2D5E"
	IL_0105:                                                                        //ldloc				V_2
	IL_0109:            Temp_5=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x1240\x2B42\x2A44\x3046\x0D48\x224A\x3E4C\x2E4E\x2250\x2052\x3054\x3A56\x3B58\x375A\x385C\x2D5E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010e:            if(V_0==Temp_5)goto IL_0120;                                //beq.s				IL_0120
	IL_0110:                                                                        //ldc.i4				0x7
	IL_0115:            V_1=7;                                                      //stloc				V_1
	IL_0119:            /*goto IL_0016;*/goto IL_011e;                              //br				IL_0016
	IL_011e:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0120:                                                                        //ldarg.0
	IL_0121:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_0126:            return;                                                     //ret
	IL_0127:                                                                        //ldarg.0
	IL_0128:            this->M_x12();                                              //call				void Root::T_x26::M_x12()
	IL_012d:            return;                                                     //ret
	IL_012e:                                                                        //ldc.i4				0x2
	IL_0133:            V_1=2;                                                      //stloc				V_1
	IL_0137:            /*goto IL_0016;*/goto IL_013c;                              //br				IL_0016
	IL_013c:                                                                        //ldloc.0
	IL_013d:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2F42\x2A44\x3446\x2C48"
	IL_0142:                                                                        //ldloc				V_2
	IL_0146:            Temp_1=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2F42\x2A44\x3446\x2C48",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014b:            if(V_0==Temp_1)goto IL_00e3;                                //beq.s				IL_00e3
	IL_014d:                                                                        //ldc.i4				0x9
	IL_0152:            V_1=9;                                                      //stloc				V_1
	IL_0156:            /*goto IL_0016;*/goto IL_015b;                              //br				IL_0016
	IL_015b:            goto IL_018d;                                               //br.s				IL_018d
	IL_015d:                                                                        //ldc.i4				0x0
	IL_0162:            V_1=0;                                                      //stloc				V_1
	IL_0166:            /*goto IL_0016;*/goto IL_016b;                              //br				IL_0016
	IL_016b:                                                                        //ldarg.1
	IL_016c:                                                                        //dup
	IL_016d:            V_0=A_0;                                                    //stloc.0
	IL_016e:            if(V_0==nullptr)goto IL_01f4;                               //brfalse				IL_01f4
	IL_0173:                                                                        //ldc.i4				0x6
	IL_0178:            V_1=6;                                                      //stloc				V_1
	IL_017c:            /*goto IL_0016;*/goto IL_0181;                              //br				IL_0016
	IL_0181:            goto IL_00ea;                                               //br				IL_00ea
	IL_0186:                                                                        //ldarg.0
	IL_0187:            this->M_x8();                                               //call				void Root::T_x26::M_x8()
	IL_018c:            return;                                                     //ret
	IL_018d:                                                                        //ldc.i4				0x4
	IL_0192:            V_1=4;                                                      //stloc				V_1
	IL_0196:            /*goto IL_0016;*/goto IL_019b;                              //br				IL_0016
	IL_019b:                                                                        //ldloc.0
	IL_019c:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46"
	IL_01a1:                                                                        //ldloc				V_2
	IL_01a5:            Temp_2=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0240\x2C42\x3544\x3E46",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01aa:            if(V_0==Temp_2)goto IL_0127;                                //beq				IL_0127
	IL_01af:                                                                        //ldc.i4				0x5
	IL_01b4:            V_1=5;                                                      //stloc				V_1
	IL_01b8:            /*goto IL_0016;*/goto IL_01bd;                              //br				IL_0016
	IL_01bd:            goto IL_00b0;                                               //br				IL_00b0
	IL_01c2:                                                                        //ldc.i4				0x8
	IL_01c7:            V_1=8;                                                      //stloc				V_1
	IL_01cb:            /*goto IL_0016;*/goto IL_01d0;                              //br				IL_0016
	IL_01d0:                                                                        //ldloc.0
	IL_01d1:                                                                        //ldstr				L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0640\x2C42\x1144\x2846\x0C48\x254A\x394C\x3D4E\x2850\x0352\x3A54\x3E56\x3758\x2F5A"
	IL_01d6:                                                                        //ldloc				V_2
	IL_01da:            Temp_4=a(L"\x6A2A\x4E2C\x5B2E\x5830\x4532\x5034\x7E36\x4D38\x5E3A\x503C\x113E\x0640\x2C42\x1144\x2846\x0C48\x254A\x394C\x3D4E\x2850\x0352\x3A54\x3E56\x3758\x2F5A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01df:            if(V_0==Temp_4)goto IL_0186;                                //beq.s				IL_0186
	IL_01e1:                                                                        //ldc.i4				0xb
	IL_01e6:            V_1=11;                                                     //stloc				V_1
	IL_01ea:            /*goto IL_0016;*/goto IL_01ef;                              //br				IL_0016
	IL_01ef:            goto IL_012e;                                               //br				IL_012e
	IL_01f4:            return;                                                     //ret

}
inline void Root::T_x26::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	//local variables.
	Reflector::IAssemblyBrowser^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_0009:            Temp_0=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_000e:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0013:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_0018:            V_0=safe_cast<Reflector::IAssemblyBrowser^>(Temp_1);        //stloc.0
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_2=this->M_x4();                                        //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0020:            Temp_3=Temp_2->EntryPoint;                                  //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IAssembly::get_EntryPoint()
	IL_0025:            V_0->ActiveItem=safe_cast<System::Object^>(Temp_3);         //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_002a:            return;                                                     //ret

}
inline void Root::T_x26::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_0011:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001b:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_0020:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_2=this->M_x4();                                        //call				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0028:            V_0->Unload(Temp_2);                                        //callvirt				void Reflector::CodeModel::IAssemblyManager::Unload(Reflector::CodeModel::IAssembly^)
	IL_002d:            System::GC::Collect();                                      //call				void System::GC::Collect()
	IL_0032:            return;                                                     //ret

}
inline System::Boolean Root::T_x26::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_2=19;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0057;                                               //br.s				IL_0057
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0156;case 1:goto IL_00fc;case 2:goto IL_00e5;case 3:goto IL_0014;case 4:goto IL_011b;case 5:goto IL_0175;case 6:goto IL_00c6;case 7:goto IL_01e3;case 8:goto IL_01c1;case 9:goto IL_018f;case 10:goto IL_0146;case 11:goto IL_00b3;case 12:goto IL_0130;case 13:goto IL_01ae;};//switch				(IL_0156,IL_00fc,IL_00e5,IL_0014,IL_011b,IL_0175,IL_00c6,IL_01e3,IL_01c1,IL_018f,IL_0146,IL_00b3,IL_0130,IL_01ae)
	IL_0057:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2648\x3B4A\x344C"
	IL_005c:                                                                        //ldloc				V_2
	IL_0060:            Temp_8=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2648\x3B4A\x344C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0065:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2548\x244A\x3E4C\x2A4E"
	IL_006a:                                                                        //ldloc				V_2
	IL_006e:            Temp_9=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2548\x244A\x3E4C\x2A4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0073:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0B4E\x3850\x2052\x3454\x2456\x2A58\x3E5A\x305C\x3D5E\x0D60\x0662\x1764"
	IL_0078:                                                                        //ldloc				V_2
	IL_007c:            Temp_10=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0B4E\x3850\x2052\x3454\x2456\x2A58\x3E5A\x305C\x3D5E\x0D60\x0662\x1764",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0081:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0E4E\x3F50\x3252\x3954\x2E56\x2358\x3E5A\x2F5C"
	IL_0086:                                                                        //ldloc				V_2
	IL_008a:            Temp_11=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0E4E\x3F50\x3252\x3954\x2E56\x2358\x3E5A\x2F5C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008f:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0046\x2648\x1F4A\x224C\x0A4E\x3F50\x2752\x2754\x2E56\x0958\x345A\x345C\x315E\x1560"
	IL_0094:                                                                        //ldloc				V_2
	IL_0098:            Temp_12=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0046\x2648\x1F4A\x224C\x0A4E\x3F50\x2752\x2754\x2E56\x0958\x345A\x345C\x315E\x1560",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009d:            goto IL_0122;                                               //leave				IL_0122
	IL_00a2:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_00a4:                                                                        //break
	IL_00a5:                                                                        //ldc.i4				0xb
	IL_00aa:            V_1=11;                                                     //stloc				V_1
	IL_00ae:            /*goto IL_0016;*/goto IL_00b3;                              //br				IL_0016
	IL_00b3:            goto IL_01e5;                                               //br				IL_01e5
	IL_00b8:                                                                        //ldc.i4				0x6
	IL_00bd:            V_1=6;                                                      //stloc				V_1
	IL_00c1:            /*goto IL_0016;*/goto IL_00c6;                              //br				IL_0016
	IL_00c6:                                                                        //ldloc.0
	IL_00c7:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0E4E\x3F50\x3252\x3954\x2E56\x2358\x3E5A\x2F5C"
	IL_00cc:                                                                        //ldloc				V_2
	IL_00d0:            Temp_3=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0E4E\x3F50\x3252\x3954\x2E56\x2358\x3E5A\x2F5C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d5:            if(V_0==Temp_3)goto IL_0120;                                //beq.s				IL_0120
	IL_00d7:                                                                        //ldc.i4				0x2
	IL_00dc:            V_1=2;                                                      //stloc				V_1
	IL_00e0:            /*goto IL_0016;*/goto IL_00e5;                              //br				IL_0016
	IL_00e5:            goto IL_0148;                                               //br.s				IL_0148
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:            Temp_6=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00ed:            V_0=Temp_6;                                                 //stloc.0
	IL_00ee:                                                                        //ldc.i4				0x1
	IL_00f3:            V_1=1;                                                      //stloc				V_1
	IL_00f7:            /*goto IL_0016;*/goto IL_00fc;                              //br				IL_0016
	IL_00fc:                                                                        //ldloc.0
	IL_00fd:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2648\x3B4A\x344C"
	IL_0102:                                                                        //ldloc				V_2
	IL_0106:            Temp_2=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2648\x3B4A\x344C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010b:            if(V_0==Temp_2)goto IL_0120;                                //beq.s				IL_0120
	IL_010d:                                                                        //ldc.i4				0x4
	IL_0112:            V_1=4;                                                      //stloc				V_1
	IL_0116:            /*goto IL_0016;*/goto IL_011b;                              //br				IL_0016
	IL_011b:            goto IL_01b3;                                               //br				IL_01b3
	IL_0120:                                                                        //ldc.i4.1
	IL_0121:            return true;                                                //ret
	IL_0122:                                                                        //ldc.i4				0xc
	IL_0127:            V_1=12;                                                     //stloc				V_1
	IL_012b:            /*goto IL_0016;*/goto IL_0130;                              //br				IL_0016
	IL_0130:                                                                        //ldarg.1
	IL_0131:                                                                        //dup
	IL_0132:            V_0=A_0;                                                    //stloc.0
	IL_0133:            if(V_0==nullptr)goto IL_01e5;                               //brfalse				IL_01e5
	IL_0138:                                                                        //ldc.i4				0xa
	IL_013d:            V_1=10;                                                     //stloc				V_1
	IL_0141:            /*goto IL_0016;*/goto IL_0146;                              //br				IL_0016
	IL_0146:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_0148:                                                                        //ldc.i4				0x0
	IL_014d:            V_1=0;                                                      //stloc				V_1
	IL_0151:            /*goto IL_0016;*/goto IL_0156;                              //br				IL_0016
	IL_0156:                                                                        //ldloc.0
	IL_0157:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0046\x2648\x1F4A\x224C\x0A4E\x3F50\x2752\x2754\x2E56\x0958\x345A\x345C\x315E\x1560"
	IL_015c:                                                                        //ldloc				V_2
	IL_0160:            Temp_0=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0046\x2648\x1F4A\x224C\x0A4E\x3F50\x2752\x2754\x2E56\x0958\x345A\x345C\x315E\x1560",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0165:            if(V_0==Temp_0)goto IL_017a;                                //beq.s				IL_017a
	IL_0167:                                                                        //ldc.i4				0x5
	IL_016c:            V_1=5;                                                      //stloc				V_1
	IL_0170:            /*goto IL_0016;*/goto IL_0175;                              //br				IL_0016
	IL_0175:            goto IL_00a2;                                               //br				IL_00a2
	IL_017a:                                                                        //ldarg.0
	IL_017b:            Temp_1=this->M_x5();                                        //call				System::Boolean Root::T_x26::M_x5()
	IL_0180:            return Temp_1;                                              //ret
	IL_0181:                                                                        //ldc.i4				0x9
	IL_0186:            V_1=9;                                                      //stloc				V_1
	IL_018a:            /*goto IL_0016;*/goto IL_018f;                              //br				IL_0016
	IL_018f:                                                                        //ldloc.0
	IL_0190:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0B4E\x3850\x2052\x3454\x2456\x2A58\x3E5A\x305C\x3D5E\x0D60\x0662\x1764"
	IL_0195:                                                                        //ldloc				V_2
	IL_0199:            Temp_5=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x1446\x2148\x244A\x3A4C\x0B4E\x3850\x2052\x3454\x2456\x2A58\x3E5A\x305C\x3D5E\x0D60\x0662\x1764",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019e:            if(V_0==Temp_5)goto IL_0120;                                //beq.s				IL_0120
	IL_01a0:                                                                        //ldc.i4				0xd
	IL_01a5:            V_1=13;                                                     //stloc				V_1
	IL_01a9:            /*goto IL_0016;*/goto IL_01ae;                              //br				IL_0016
	IL_01ae:            goto IL_00b8;                                               //br				IL_00b8
	IL_01b3:                                                                        //ldc.i4				0x8
	IL_01b8:            V_1=8;                                                      //stloc				V_1
	IL_01bc:            /*goto IL_0016;*/goto IL_01c1;                              //br				IL_0016
	IL_01c1:                                                                        //ldloc.0
	IL_01c2:                                                                        //ldstr				L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2548\x244A\x3E4C\x2A4E"
	IL_01c7:                                                                        //ldloc				V_2
	IL_01cb:            Temp_4=a(L"\x7030\x5032\x4134\x5E36\x4F38\x5E3A\x743C\x4B3E\x2440\x2E42\x6B44\x0446\x2548\x244A\x3E4C\x2A4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d0:            if(V_0==Temp_4)goto IL_0120;                                //beq				IL_0120
	IL_01d5:                                                                        //ldc.i4				0x7
	IL_01da:            V_1=7;                                                      //stloc				V_1
	IL_01de:            /*goto IL_0016;*/goto IL_01e3;                              //br				IL_0016
	IL_01e3:            goto IL_0181;                                               //br.s				IL_0181
	IL_01e5:                                                                        //ldarg.0
	IL_01e6:                                                                        //ldarg.1
	IL_01e7:            Temp_7=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_01ec:            return Temp_7;                                              //ret

}
inline Root::T_x26::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<Reflector::CodeModel::IAssembly^>(nullptr);//stfld				Reflector::CodeModel::IAssembly^ Root::T_x26::T_x1 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerable^ Root::T_x26::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	Reflector::CodeModel::IResourceCollection^ Temp_2 = nullptr;
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
	IL_000c:            Temp_1=this->M_x12();                                       //call				Reflector::CodeModel::IAssembly^ Root::T_x26::T_x1::M_x12()
	IL_0011:            Temp_2=Temp_1->Resources;                                   //callvirt				Reflector::CodeModel::IResourceCollection^ Reflector::CodeModel::IAssembly::get_Resources()
	IL_0016:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_2));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            V_0->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0021:                                                                        //ldloc.0
	IL_0022:            return safe_cast<System::Collections::IEnumerable^>(V_0);   //ret

}
inline void Root::T_x26::T_x1::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_1=4;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IAssembly^ Root::T_x26::T_x1 F_x1
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldstr				L"\x7021\x4123\x5525\x4727\x5F29\x5E2B\x4D2D\x552F\x4131"
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            Temp_0=a(L"\x7021\x4123\x5525\x4727\x5F29\x5E2B\x4D2D\x552F\x4131",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldc.i4				0x9c
	IL_002e:                                                                        //dup
	IL_002f:            V_0=156;                                                    //stloc.0
	IL_0030:            this->SelectedImageIndex=156;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            this->M_x10();                                              //call				void Root::T_x10::M_x10()
	IL_0041:            return;                                                     //ret

}
inline void Root::T_x26::T_x1::M_x1(System::EventArgs^ A_0)
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
inline Reflector::CodeModel::IAssembly^ Root::T_x26::T_x1::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x26::T_x1 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x26::T_x1::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerable^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Root::T_x44^ Temp_4 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	//local variables.
	Reflector::CodeModel::IResource^ V_0 = nullptr;
	Root::T_x44^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x1();                                        //call				System::Collections::IEnumerable^ Root::T_x26::T_x1::M_x1()
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000b:            V_2=Temp_1;                                                 //stloc.2
	IL_000c:            /*goto IL_000e;*/goto IL_000C01;                            //br.s				IL_000e
	IL_000C01:          try{
	IL_000e:                                                                        //ldc.i4				0x4
	IL_0013:            V_4=4;                                                      //stloc				V_4
	IL_0017:            /*goto IL_001b;*/goto IL_0019;                              //br.s				IL_001b
	IL_0019:            goto IL_0038;                                               //br.s				IL_0038
	IL_001b:                                                                        //ldloc				V_4
	IL_001f:            switch(V_4){case 0:goto IL_0098;case 1:goto IL_006b;case 2:goto IL_0078;case 3:goto IL_008b;case 4:goto IL_0019;};//switch				(IL_0098,IL_006b,IL_0078,IL_008b,IL_0019)
	IL_0038:            goto IL_006d;                                               //br.s				IL_006d
	IL_003a:                                                                        //ldloc.2
	IL_003b:            Temp_3=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0040:                                                                        //castclass				Reflector::CodeModel::IResource
	IL_0045:            V_0=safe_cast<Reflector::CodeModel::IResource^>(Temp_3);    //stloc.0
	IL_0046:            Temp_4=gcnew Root::T_x44();                                 //newobj				void Root::T_x44::.ctor()
	IL_004b:            V_1=Temp_4;                                                 //stloc.1
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_5=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0052:                                                                        //ldloc.1
	IL_0053:            Temp_6=Temp_5->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0058:                                                                        //pop
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            V_1->M_x1(V_0);                                             //callvirt				void Root::T_x44::M_x1(Reflector::CodeModel::IResource^)
	IL_0060:                                                                        //ldc.i4				0x1
	IL_0065:            V_4=1;                                                      //stloc				V_4
	IL_0069:            /*goto IL_001b;*/goto IL_006b;                              //br.s				IL_001b
	IL_006b:            goto IL_006d;                                               //br.s				IL_006d
	IL_006d:                                                                        //ldc.i4				0x2
	IL_0072:            V_4=2;                                                      //stloc				V_4
	IL_0076:            /*goto IL_001b;*/goto IL_0078;                              //br.s				IL_001b
	IL_0078:                                                                        //ldloc.2
	IL_0079:            Temp_2=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_007e:            if(Temp_2)goto IL_003a;                                     //brtrue.s				IL_003a
	IL_0080:                                                                        //ldc.i4				0x3
	IL_0085:            V_4=3;                                                      //stloc				V_4
	IL_0089:            /*goto IL_001b;*/goto IL_008b;                              //br.s				IL_001b
	IL_008b:            goto IL_008d;                                               //br.s				IL_008d
	IL_008d:                                                                        //ldc.i4				0x0
	IL_0092:            V_4=0;                                                      //stloc				V_4
	IL_0096:            /*goto IL_001b;*/goto IL_0098;                              //br.s				IL_001b
	IL_0098:            goto IL_00e7;                                               //leave.s				IL_00e7
	                    ;}
	                    finally{
	IL_009a:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_009c:                                                                        //ldloc				V_5
	IL_00a0:            switch(V_5){case 0:goto IL_00e4;case 1:goto IL_00d1;case 2:goto IL_00c3;};//switch				(IL_00e4,IL_00d1,IL_00c3)
	IL_00b1:                                                                        //ldloc.2
	IL_00b2:                                                                        //isinst				System::IDisposable
	IL_00b7:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00b8:                                                                        //ldc.i4				0x2
	IL_00bd:            V_5=2;                                                      //stloc				V_5
	IL_00c1:            /*goto IL_009c;*/goto IL_00c3;                              //br.s				IL_009c
	IL_00c3:                                                                        //ldloc.3
	IL_00c4:            if(V_3==nullptr)goto IL_00e6;                               //brfalse.s				IL_00e6
	IL_00c6:                                                                        //ldc.i4				0x1
	IL_00cb:            V_5=1;                                                      //stloc				V_5
	IL_00cf:            /*goto IL_009c;*/goto IL_00d1;                              //br.s				IL_009c
	IL_00d1:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_00d3:                                                                        //ldloc.3
	IL_00d4:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00d9:                                                                        //ldc.i4				0x0
	IL_00de:            V_5=0;                                                      //stloc				V_5
	IL_00e2:            /*goto IL_009c;*/goto IL_00e4;                              //br.s				IL_009c
	IL_00e4:            goto IL_00e6;                                               //br.s				IL_00e6
	IL_00e6:                                                                        //endfinally
	                    ;}
	IL_00e7:                                                                        //ldc.i4.4
	IL_00e8:                                                                        //dup
	IL_00e9:                                                                        //dup
	IL_00ea:                                                                        //ldc.i4.2
	IL_00eb:                                                                        //sub
	IL_00ec:                                                                        //blt				IL_00e8
	IL_00f1:                                                                        //pop
	IL_00f2:                                                                        //ldarg.0
	IL_00f3:                                                                        //ldarg.1
	IL_00f4:            Root::T_x10::M_x2(A_0);                                     //call				void Root::T_x10::M_x2(System::EventArgs^)
	IL_00f9:            return;                                                     //ret

}
