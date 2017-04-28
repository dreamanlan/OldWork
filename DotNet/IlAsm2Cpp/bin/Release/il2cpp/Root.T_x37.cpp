#include "global_xref.h"

inline Root::T_x37::T_x37()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x31();*/                                          //call				void Root::T_x31::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x37::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMemberDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x5();                                        //call				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_0);//ret

}
inline void Root::T_x37::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
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
	IL_002a:            Temp_3=this->M_x1();                                        //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x37::M_x1()
	IL_002f:            V_0->WriteMethodDeclaration(Temp_3);                        //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteMethodDeclaration(Reflector::CodeModel::IMethodDeclaration^)
	IL_0034:            return;                                                     //ret

}
inline void Root::T_x37::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
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
	IL_000c:            Temp_0=Root::T_x115::M_x2(safe_cast<Reflector::CodeModel::IMethodReference^>(A_0));//call				System::String^ Root::T_x115::M_x2(Reflector::CodeModel::IMethodReference^)
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
	IL_003c:            return;                                                     //ret

}
inline System::String^ Root::T_x37::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_0=16;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6C2D\x422F\x5D31\x4333\x4535\x5D37\x4839\x123B\x733D\x253F\x3641\x2C43\x2945\x2C47\x0E49\x294B\x2D4D\x3C4F\x3351\x2653\x3755\x2C57\x3359\x335B\x305D"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6C2D\x422F\x5D31\x4333\x4535\x5D37\x4839\x123B\x733D\x253F\x3641\x2C43\x2945\x2C47\x0E49\x294B\x2D4D\x3C4F\x3351\x2653\x3755\x2C57\x3359\x335B\x305D",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x37::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x37::M_x5(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_2=5;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0082;case 1:goto IL_00a5;case 2:goto IL_0066;case 3:goto IL_0014;case 4:goto IL_008f;};//switch				(IL_0082,IL_00a5,IL_0066,IL_0014,IL_008f)
	IL_0033:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_4=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            goto IL_0084;                                               //leave.s				IL_0084
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_0=this->M_x1();                                        //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x37::M_x1()
	IL_0049:            Temp_1=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_004e:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_1));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0053:            return;                                                     //ret
	IL_0054:                                                                        //ldloc.0
	IL_0055:            Temp_2=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_005a:            V_0=Temp_2;                                                 //stloc.0
	IL_005b:                                                                        //ldc.i4				0x2
	IL_0060:            V_1=2;                                                      //stloc				V_1
	IL_0064:            /*goto IL_0016;*/goto IL_0066;                              //br.s				IL_0016
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldstr				L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E"
	IL_006c:                                                                        //ldloc				V_2
	IL_0070:            Temp_3=a(L"\x6222\x4624\x5326\x4028\x5D2A\x482C\x662E\x4530\x5632\x5834\x1936\x7A38\x543A\x4D3C\x463E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0075:            if(V_0!=Temp_3)goto IL_00a7;                                //bne.un.s				IL_00a7
	IL_0077:                                                                        //ldc.i4				0x0
	IL_007c:            V_1=0;                                                      //stloc				V_1
	IL_0080:            /*goto IL_0016;*/goto IL_0082;                              //br.s				IL_0016
	IL_0082:            goto IL_0043;                                               //br.s				IL_0043
	IL_0084:                                                                        //ldc.i4				0x4
	IL_0089:            V_1=4;                                                      //stloc				V_1
	IL_008d:            /*goto IL_0016;*/goto IL_008f;                              //br.s				IL_0016
	IL_008f:            goto IL_0092;                                               //br.s				IL_0092
	IL_0091:                                                                        //break
	IL_0092:                                                                        //ldarg.1
	IL_0093:                                                                        //dup
	IL_0094:            V_0=A_0;                                                    //stloc.0
	IL_0095:            if(V_0==nullptr)goto IL_00a7;                               //brfalse.s				IL_00a7
	IL_0097:                                                                        //ldc.i4				0x1
	IL_009c:            V_1=1;                                                      //stloc				V_1
	IL_00a0:            /*goto IL_0016;*/goto IL_00a5;                              //br				IL_0016
	IL_00a5:            goto IL_0054;                                               //br.s				IL_0054
	IL_00a7:                                                                        //ldarg.0
	IL_00a8:                                                                        //ldarg.1
	IL_00a9:            Root::T_x31::M_x5(A_0);                                     //call				void Root::T_x31::M_x5(System::String^)
	IL_00ae:            return;                                                     //ret

}
inline System::Boolean Root::T_x37::M_x9(System::String^ A_0)
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
	IL_001a:            switch(V_1){case 0:goto IL_0083;case 1:goto IL_0014;case 2:goto IL_0076;case 3:goto IL_0093;case 4:goto IL_005a;};//switch				(IL_0083,IL_0014,IL_0076,IL_0093,IL_005a)
	IL_0033:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_3=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            goto IL_0078;                                               //leave.s				IL_0078
	IL_0043:            goto IL_0046;                                               //br.s				IL_0046
	IL_0045:                                                                        //break
	IL_0046:                                                                        //ldc.i4.1
	IL_0047:            return true;                                                //ret
	IL_0048:                                                                        //ldloc.0
	IL_0049:            Temp_1=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_004e:            V_0=Temp_1;                                                 //stloc.0
	IL_004f:                                                                        //ldc.i4				0x4
	IL_0054:            V_1=4;                                                      //stloc				V_1
	IL_0058:            /*goto IL_0016;*/goto IL_005a;                              //br.s				IL_0016
	IL_005a:                                                                        //ldloc.0
	IL_005b:                                                                        //ldstr				L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A"
	IL_0060:                                                                        //ldloc				V_2
	IL_0064:            Temp_2=a(L"\x5E1E\x4220\x5722\x4C24\x5126\x4C28\x622A\x592C\x4A2E\x5C30\x1D32\x7634\x5836\x4938\x423A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0069:            if(V_0!=Temp_2)goto IL_0095;                                //bne.un.s				IL_0095
	IL_006b:                                                                        //ldc.i4				0x2
	IL_0070:            V_1=2;                                                      //stloc				V_1
	IL_0074:            /*goto IL_0016;*/goto IL_0076;                              //br.s				IL_0016
	IL_0076:            goto IL_0043;                                               //br.s				IL_0043
	IL_0078:                                                                        //ldc.i4				0x0
	IL_007d:            V_1=0;                                                      //stloc				V_1
	IL_0081:            /*goto IL_0016;*/goto IL_0083;                              //br.s				IL_0016
	IL_0083:                                                                        //ldarg.1
	IL_0084:                                                                        //dup
	IL_0085:            V_0=A_0;                                                    //stloc.0
	IL_0086:            if(V_0==nullptr)goto IL_0095;                               //brfalse.s				IL_0095
	IL_0088:                                                                        //ldc.i4				0x3
	IL_008d:            V_1=3;                                                      //stloc				V_1
	IL_0091:            /*goto IL_0016;*/goto IL_0093;                              //br.s				IL_0016
	IL_0093:            goto IL_0048;                                               //br.s				IL_0048
	IL_0095:                                                                        //ldarg.0
	IL_0096:                                                                        //ldarg.1
	IL_0097:            Temp_0=Root::T_x31::M_x9(A_0);                              //call				System::Boolean Root::T_x31::M_x9(System::String^)
	IL_009c:            return Temp_0;                                              //ret

}
