#include "global_xref.h"

inline Root::T_x114::T_x114(System::Object^ A_0,System::IServiceProvider^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x114 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::IServiceProvider^ Root::T_x114 F_x2
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x114::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	array<System::String^>^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::IServiceProvider^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::IServiceProvider^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::IServiceProvider^ Temp_19 = nullptr;
	//local variables.
	Reflector::CodeModel::INamespace^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	Reflector::CodeModel::IMemberReference^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	array<System::String^>^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_8=0;                                                      //stloc				V_8
	IL_0009:            goto IL_0038;                                               //br.s				IL_0038
	IL_000b:                                                                        //ldloc				V_7
	IL_000f:            switch(V_7){case 0:goto IL_0092;case 1:goto IL_004f;case 2:goto IL_019a;case 3:goto IL_01ae;case 4:goto IL_00f3;case 5:goto IL_017e;case 6:goto IL_0060;case 7:goto IL_007d;case 8:goto IL_00cf;};//switch				(IL_0092,IL_004f,IL_019a,IL_01ae,IL_00f3,IL_017e,IL_0060,IL_007d,IL_00cf)
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_0=this->F_x1;                                          //ldfld				System::Object^ Root::T_x114 F_x1
	IL_003e:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_0043:            V_0=dynamic_cast<Reflector::CodeModel::INamespace^>(Temp_0);//stloc.0
	IL_0044:                                                                        //ldc.i4				0x1
	IL_0049:            V_7=1;                                                      //stloc				V_7
	IL_004d:            /*goto IL_000b;*/goto IL_004f;                              //br.s				IL_000b
	IL_004f:                                                                        //ldloc.0
	IL_0050:            if(V_0==nullptr)goto IL_0180;                               //brfalse				IL_0180
	IL_0055:                                                                        //ldc.i4				0x6
	IL_005a:            V_7=6;                                                      //stloc				V_7
	IL_005e:            /*goto IL_000b;*/goto IL_0060;                              //br.s				IL_000b
	IL_0060:            goto IL_00d1;                                               //br.s				IL_00d1
	IL_0062:            goto IL_0065;                                               //br.s				IL_0065
	IL_0064:                                                                        //break
	IL_0065:                                                                        //ldarg.0
	IL_0066:            Temp_12=this->F_x1;                                         //ldfld				System::Object^ Root::T_x114 F_x1
	IL_006b:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_0070:            V_4=dynamic_cast<Reflector::CodeModel::IMemberReference^>(Temp_12);//stloc.s				V_4
	IL_0072:                                                                        //ldc.i4				0x7
	IL_0077:            V_7=7;                                                      //stloc				V_7
	IL_007b:            /*goto IL_000b;*/goto IL_007d;                              //br.s				IL_000b
	IL_007d:                                                                        //ldloc.s				V_4
	IL_007f:            if(V_4==nullptr)goto IL_01b3;                               //brfalse				IL_01b3
	IL_0084:                                                                        //ldc.i4				0x0
	IL_0089:            V_7=0;                                                      //stloc				V_7
	IL_008d:            /*goto IL_000b;*/goto IL_0092;                              //br				IL_000b
	IL_0092:            goto IL_00f8;                                               //br.s				IL_00f8
	IL_0094:                                                                        //ldloc.2
	IL_0095:            Temp_13=V_2->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_009a:                                                                        //ldstr				L"\x3E1D"
	IL_009f:                                                                        //ldloc				V_8
	IL_00a3:            Temp_14=a(L"\x3E1D",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a8:                                                                        //ldloc.2
	IL_00a9:            Temp_15=Root::T_x115::M_x13(V_2);                           //call				System::String^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeReference^)
	IL_00ae:            Temp_16=System::String::Concat(Temp_13,Temp_14,Temp_15);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00b3:            V_3=Temp_16;                                                //stloc.3
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:                                                                        //ldloc.3
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:            Temp_17=this->F_x2;                                         //ldfld				System::IServiceProvider^ Root::T_x114 F_x2
	IL_00bc:            this->M_x1(V_3,Temp_17);                                    //call				void Root::T_x114::M_x1(System::String^,System::IServiceProvider^)
	IL_00c1:                                                                        //ldc.i4				0x8
	IL_00c6:            V_7=8;                                                      //stloc				V_7
	IL_00ca:            /*goto IL_000b;*/goto IL_00cf;                              //br				IL_000b
	IL_00cf:            goto IL_0062;                                               //br.s				IL_0062
	IL_00d1:                                                                        //ldloc.0
	IL_00d2:            Temp_18=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_00d7:            V_1=Temp_18;                                                //stloc.1
	IL_00d8:                                                                        //ldarg.0
	IL_00d9:                                                                        //ldloc.1
	IL_00da:                                                                        //ldarg.0
	IL_00db:            Temp_19=this->F_x2;                                         //ldfld				System::IServiceProvider^ Root::T_x114 F_x2
	IL_00e0:            this->M_x1(V_1,Temp_19);                                    //call				void Root::T_x114::M_x1(System::String^,System::IServiceProvider^)
	IL_00e5:                                                                        //ldc.i4				0x4
	IL_00ea:            V_7=4;                                                      //stloc				V_7
	IL_00ee:            /*goto IL_000b;*/goto IL_00f3;                              //br				IL_000b
	IL_00f3:            goto IL_0180;                                               //br				IL_0180
	IL_00f8:                                                                        //ldc.i4.5
	IL_00f9:            Temp_1=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_00fe:            V_6=Temp_1;                                                 //stloc.s				V_6
	IL_0100:                                                                        //ldloc.s				V_6
	IL_0102:                                                                        //ldc.i4.0
	IL_0103:                                                                        //ldloc.s				V_4
	IL_0105:            Temp_2=V_4->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_010a:            V_6[0]=Temp_2;                                              //stelem.ref
	IL_010b:                                                                        //ldloc.s				V_6
	IL_010d:                                                                        //ldc.i4.1
	IL_010e:                                                                        //ldstr				L"\x3E1D"
	IL_0113:                                                                        //ldloc				V_8
	IL_0117:            Temp_3=a(L"\x3E1D",V_8);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011c:            V_6[1]=Temp_3;                                              //stelem.ref
	IL_011d:                                                                        //ldloc.s				V_6
	IL_011f:                                                                        //ldc.i4.2
	IL_0120:                                                                        //ldloc.s				V_4
	IL_0122:            Temp_4=V_4->DeclaringType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0127:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_012c:            Temp_5=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_4)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0131:            V_6[2]=Temp_5;                                              //stelem.ref
	IL_0132:                                                                        //ldloc.s				V_6
	IL_0134:                                                                        //ldc.i4.3
	IL_0135:                                                                        //ldstr				L"\x3E1D"
	IL_013a:                                                                        //ldloc				V_8
	IL_013e:            Temp_6=a(L"\x3E1D",V_8);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0143:            V_6[3]=Temp_6;                                              //stelem.ref
	IL_0144:                                                                        //ldloc.s				V_6
	IL_0146:                                                                        //ldc.i4.4
	IL_0147:                                                                        //ldloc.s				V_4
	IL_0149:            Temp_7=V_4->DeclaringType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_014e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0153:            Temp_8=Root::T_x115::M_x13(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_7));//call				System::String^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeReference^)
	IL_0158:            V_6[4]=Temp_8;                                              //stelem.ref
	IL_0159:                                                                        //ldloc.s				V_6
	IL_015b:            Temp_9=System::String::Concat(V_6);                         //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0160:            V_5=Temp_9;                                                 //stloc.s				V_5
	IL_0162:                                                                        //ldarg.0
	IL_0163:                                                                        //ldloc.s				V_5
	IL_0165:                                                                        //ldarg.0
	IL_0166:            Temp_10=this->F_x2;                                         //ldfld				System::IServiceProvider^ Root::T_x114 F_x2
	IL_016b:            this->M_x1(V_5,Temp_10);                                    //call				void Root::T_x114::M_x1(System::String^,System::IServiceProvider^)
	IL_0170:                                                                        //ldc.i4				0x5
	IL_0175:            V_7=5;                                                      //stloc				V_7
	IL_0179:            /*goto IL_000b;*/goto IL_017e;                              //br				IL_000b
	IL_017e:            goto IL_01b3;                                               //br.s				IL_01b3
	IL_0180:                                                                        //ldarg.0
	IL_0181:            Temp_11=this->F_x1;                                         //ldfld				System::Object^ Root::T_x114 F_x1
	IL_0186:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_018b:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_11);//stloc.2
	IL_018c:                                                                        //ldc.i4				0x2
	IL_0191:            V_7=2;                                                      //stloc				V_7
	IL_0195:            /*goto IL_000b;*/goto IL_019a;                              //br				IL_000b
	IL_019a:                                                                        //ldloc.2
	IL_019b:            if(V_2==nullptr)goto IL_0062;                               //brfalse				IL_0062
	IL_01a0:                                                                        //ldc.i4				0x3
	IL_01a5:            V_7=3;                                                      //stloc				V_7
	IL_01a9:            /*goto IL_000b;*/goto IL_01ae;                              //br				IL_000b
	IL_01ae:            goto IL_0094;                                               //br				IL_0094
	IL_01b3:            return;                                                     //ret

}
inline void Root::T_x114::M_x1(System::String^ A_0,System::IServiceProvider^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	Reflector::IWindowCollection^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::IWindow^ Temp_6 = nullptr;
	System::Windows::Forms::Control^ Temp_7 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	Reflector::IWindowManager^ V_1 = nullptr;
	Reflector::IWindow^ V_2 = nullptr;
	Root::T_x47^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_4=15;                                                     //stloc				V_4
	IL_0009:                                                                        //ldc.i4.4
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.2
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldstr				L"\x452C\x5B2E\x4530\x4332\x0F34\x1836\x1638\x4C3A\x4A3C\x483E\x6F40\x2442\x2A44\x2846\x2E48\x274A\x284C\x614E\x3250\x3C52\x3854\x7856\x2A58\x3E5A\x3C5C\x2D5E\x0260\x0B62\x5A64\x1666\x5468"
	IL_0019:                                                                        //ldloc				V_4
	IL_001d:            Temp_0=a(L"\x452C\x5B2E\x4530\x4332\x0F34\x1836\x1638\x4C3A\x4A3C\x483E\x6F40\x2442\x2A44\x2846\x2E48\x274A\x284C\x614E\x3250\x3C52\x3854\x7856\x2A58\x3E5A\x3C5C\x2D5E\x0260\x0B62\x5A64\x1666\x5468",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_1=System::String::Concat(Temp_0,A_0);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0028:            V_0=Temp_1;                                                 //stloc.0
	IL_0029:                                                                        //ldarg.2
	IL_002a:                                                                        //ldtoken				Reflector::IWindowManager
	IL_002f:            Temp_2=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0034:            Temp_3=A_1->GetService(Temp_2);                             //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0039:                                                                        //castclass				Reflector::IWindowManager
	IL_003e:            V_1=safe_cast<Reflector::IWindowManager^>(Temp_3);          //stloc.1
	IL_003f:                                                                        //ldloc.1
	IL_0040:            Temp_4=V_1->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0045:                                                                        //ldstr				L"\x6A2C\x402E\x5E30\x5432\x5934\x5236\x7B38\x493A\x523C\x483E\x3240\x2642\x3744\x1046\x2048\x254A\x294C\x204E\x2650"
	IL_004a:                                                                        //ldloc				V_4
	IL_004e:            Temp_5=a(L"\x6A2C\x402E\x5E30\x5432\x5934\x5236\x7B38\x493A\x523C\x483E\x3240\x2642\x3744\x1046\x2048\x254A\x294C\x204E\x2650",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0053:            Temp_6=Temp_4[Temp_5];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0058:            V_2=Temp_6;                                                 //stloc.2
	IL_0059:                                                                        //ldloc.2
	IL_005a:                                                                        //ldc.i4.1
	IL_005b:            V_2->Visible=true;                                          //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0060:                                                                        //ldloc.2
	IL_0061:            Temp_7=V_2->Content;                                        //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_0066:                                                                        //castclass				Root::T_x47
	IL_006b:            V_3=safe_cast<Root::T_x47^>(Temp_7);                        //stloc.3
	IL_006c:                                                                        //ldloc.3
	IL_006d:                                                                        //ldloc.0
	IL_006e:            V_3->M_x1(V_0);                                             //callvirt				void Root::T_x47::M_x1(System::String^)
	IL_0073:            return;                                                     //ret

}
