#include "global_xref.h"

inline Root::T_x83::T_x83(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ILanguageManager^ A_2,Reflector::ITranslatorManager^ A_3,Reflector::ICommandBarManager^ A_4,Reflector::IConfigurationManager^ A_5,Root::T_x97^ A_6,System::Boolean A_7)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IAssemblyBrowser^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	Reflector::ILanguageManager^ Temp_2 = nullptr;
	System::EventHandler^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x11=safe_cast<Root::T_x75^>(nullptr);               //stfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				Reflector::IAssemblyBrowser^ Root::T_x83 F_x1
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x83 F_x1
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldftn				void Root::T_x83::M_x1(System::Object^,System::EventArgs^)
	IL_0021:            Temp_1=gcnew System::EventHandler(this,&Root::T_x83::M_x1); //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0026:            Temp_0->ActiveItemChanged += Temp_1;                        //callvirt				void Reflector::IAssemblyBrowser::add_ActiveItemChanged(System::EventHandler^)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldarg.2
	IL_002d:            this->F_x2=A_1;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x83 F_x2
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldarg.3
	IL_0034:            this->F_x8=A_2;                                             //stfld				Reflector::ILanguageManager^ Root::T_x83 F_x8
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_2=this->F_x8;                                          //ldfld				Reflector::ILanguageManager^ Root::T_x83 F_x8
	IL_003f:                                                                        //ldarg.0
	IL_0040:                                                                        //ldftn				void Root::T_x83::M_x2(System::Object^,System::EventArgs^)
	IL_0046:            Temp_3=gcnew System::EventHandler(this,&Root::T_x83::M_x2); //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_004b:            Temp_2->ActiveLanguageChanged += Temp_3;                    //callvirt				void Reflector::ILanguageManager::add_ActiveLanguageChanged(System::EventHandler^)
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.s				A_3
	IL_0053:            this->F_x9=A_3;                                             //stfld				Reflector::ITranslatorManager^ Root::T_x83 F_x9
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.s				A_4
	IL_005b:            this->F_x12=A_4;                                            //stfld				Reflector::ICommandBarManager^ Root::T_x83 F_x12
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //ldarg.s				A_5
	IL_0063:            this->F_x4=A_5;                                             //stfld				Reflector::IConfigurationManager^ Root::T_x83 F_x4
	IL_0068:                                                                        //ldarg.0
	IL_0069:                                                                        //ldarg.s				A_6
	IL_006b:            this->F_x13=A_6;                                            //stfld				Root::T_x97^ Root::T_x83 F_x13
	IL_0070:                                                                        //ldarg.0
	IL_0071:                                                                        //ldarg.s				A_7
	IL_0073:            this->F_x10=A_7;                                            //stfld				System::Boolean Root::T_x83 F_x10
	IL_0078:                                                                        //ldarg.0
	IL_0079:                                                                        //ldc.i4.5
	IL_007a:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_007f:                                                                        //ldarg.0
	IL_0080:                                                                        //ldc.i4.0
	IL_0081:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0086:            return;                                                     //ret

}
inline System::Drawing::Font^ Root::T_x83::M_x1()
//System::Windows::Forms::Control^::get_Font by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Font^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::Control::Font;               //call				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_2=2;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldc.i4				0x0
	IL_0019:            V_1=0;                                                      //stloc				V_1
	IL_001d:            /*goto IL_0021;*/goto IL_001f;                              //br.s				IL_0021
	IL_001f:            goto IL_003e;                                               //br.s				IL_003e
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_001f;case 1:goto IL_007e;case 2:goto IL_008b;case 3:goto IL_00a0;case 4:goto IL_0062;};//switch				(IL_001f,IL_007e,IL_008b,IL_00a0,IL_0062)
	IL_003e:                                                                        //ldstr				L"\x731F\x5B21\x5723\x5225\x4D27\x4729\x022B\x792D\x552F\x5031\x1A33\x6435\x5D37\x5D39\x493B\x523D\x213F\x3041\x0143\x3E45\x3847\x3849\x294B\x3D4D\x234F\x3B51\x3B53\x3855\x2B57"
	IL_0043:                                                                        //ldloc				V_2
	IL_0047:            Temp_3=a(L"\x731F\x5B21\x5723\x5225\x4D27\x4729\x022B\x792D\x552F\x5031\x1A33\x6435\x5D37\x5D39\x493B\x523D\x213F\x3041\x0143\x3E45\x3847\x3849\x294B\x3D4D\x234F\x3B51\x3B53\x3855\x2B57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004c:            goto IL_0080;                                               //leave.s				IL_0080
	IL_004e:                                                                        //ldc.i4.1
	IL_004f:            return true;                                                //ret
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_1=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0056:            V_0=Temp_1;                                                 //stloc.0
	IL_0057:                                                                        //ldc.i4				0x4
	IL_005c:            V_1=4;                                                      //stloc				V_1
	IL_0060:            /*goto IL_0021;*/goto IL_0062;                              //br.s				IL_0021
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldstr				L"\x731F\x5B21\x5723\x5225\x4D27\x4729\x022B\x792D\x552F\x5031\x1A33\x6435\x5D37\x5D39\x493B\x523D\x213F\x3041\x0143\x3E45\x3847\x3849\x294B\x3D4D\x234F\x3B51\x3B53\x3855\x2B57"
	IL_0068:                                                                        //ldloc				V_2
	IL_006c:            Temp_2=a(L"\x731F\x5B21\x5723\x5225\x4D27\x4729\x022B\x792D\x552F\x5031\x1A33\x6435\x5D37\x5D39\x493B\x523D\x213F\x3041\x0143\x3E45\x3847\x3849\x294B\x3D4D\x234F\x3B51\x3B53\x3855\x2B57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            if(V_0!=Temp_2)goto IL_00a2;                                //bne.un.s				IL_00a2
	IL_0073:                                                                        //ldc.i4				0x1
	IL_0078:            V_1=1;                                                      //stloc				V_1
	IL_007c:            /*goto IL_0021;*/goto IL_007e;                              //br.s				IL_0021
	IL_007e:            goto IL_004e;                                               //br.s				IL_004e
	IL_0080:                                                                        //ldc.i4				0x2
	IL_0085:            V_1=2;                                                      //stloc				V_1
	IL_0089:            /*goto IL_0021;*/goto IL_008b;                              //br.s				IL_0021
	IL_008b:                                                                        //ldarg.1
	IL_008c:            Temp_0=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0091:                                                                        //dup
	IL_0092:            V_0=Temp_0;                                                 //stloc.0
	IL_0093:            if(V_0==nullptr)goto IL_00a2;                               //brfalse.s				IL_00a2
	IL_0095:                                                                        //ldc.i4				0x3
	IL_009a:            V_1=3;                                                      //stloc				V_1
	IL_009e:            /*goto IL_0021;*/goto IL_00a0;                              //br.s				IL_0021
	IL_00a0:            goto IL_0050;                                               //br.s				IL_0050
	IL_00a2:                                                                        //ldc.i4.0
	IL_00a3:            return false;                                               //ret

}
inline void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^ A_0,System::Exception^ A_1,System::String^ A_2,Reflector::CodeModel::IAssemblyReference^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::String^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_2=17;                                                     //stloc				V_2
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_1
	IL_000f:            switch(V_1){case 0:goto IL_00bc;case 1:goto IL_0071;case 2:goto IL_0050;case 3:goto IL_00a2;case 4:goto IL_005d;case 5:goto IL_003f;};//switch				(IL_00bc,IL_0071,IL_0050,IL_00a2,IL_005d,IL_003f)
	IL_002c:                                                                        //ldarg.s				A_3
	IL_002e:            Temp_0=A_3->Resolve();                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyReference::Resolve()
	IL_0033:            V_0=Temp_0;                                                 //stloc.0
	IL_0034:                                                                        //ldc.i4				0x5
	IL_0039:            V_1=5;                                                      //stloc				V_1
	IL_003d:            /*goto IL_000b;*/goto IL_003f;                              //br.s				IL_000b
	IL_003f:                                                                        //ldloc.0
	IL_0040:            if(V_0==nullptr)goto IL_00df;                               //brfalse				IL_00df
	IL_0045:                                                                        //ldc.i4				0x2
	IL_004a:            V_1=2;                                                      //stloc				V_1
	IL_004e:            /*goto IL_000b;*/goto IL_0050;                              //br.s				IL_000b
	IL_0050:            goto IL_0094;                                               //br.s				IL_0094
	IL_0052:                                                                        //ldc.i4				0x4
	IL_0057:            V_1=4;                                                      //stloc				V_1
	IL_005b:            /*goto IL_000b;*/goto IL_005d;                              //br.s				IL_000b
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldloc.0
	IL_005f:            Temp_4=this->M_x1(V_0);                                     //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IAssembly^)
	IL_0064:            if(!Temp_4)goto IL_00df;                                    //brfalse.s				IL_00df
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_1=1;                                                      //stloc				V_1
	IL_006f:            /*goto IL_000b;*/goto IL_0071;                              //br.s				IL_000b
	IL_0071:            goto IL_00be;                                               //br.s				IL_00be
	IL_0073:                                                                        //ldarg.1
	IL_0074:                                                                        //ldstr				L"\x7B2E\x5930\x5A32\x4634\x1736\x5038\x4F3A\x583C\x523E\x6140\x2242\x3544\x3746\x2C48\x2A4A\x3F4C\x3C4E\x7150\x2752\x3A54\x7756\x3B58\x3E5A\x7D5C\x305E\x0360\x0562\x1064\x1466\x0A68\x0A6A\x196C\x0A6E\x1570\x5372\x1474\x1976\x1D78\x5B7A\x1E7C\x1E7E\xEF80\xA382\xEB84\xE886\xFD88\xAB8A\xEF8C\xEA8E\xB190\xE792\xE794\xF696\xF798\xE89A\xF19C\xFE9E\xD5A0\xC6A2\xC1A4\x89A6"
	IL_0079:                                                                        //ldloc				V_2
	IL_007d:            Temp_1=a(L"\x7B2E\x5930\x5A32\x4634\x1736\x5038\x4F3A\x583C\x523E\x6140\x2242\x3544\x3746\x2C48\x2A4A\x3F4C\x3C4E\x7150\x2752\x3A54\x7756\x3B58\x3E5A\x7D5C\x305E\x0360\x0562\x1064\x1466\x0A68\x0A6A\x196C\x0A6E\x1570\x5372\x1474\x1976\x1D78\x5B7A\x1E7C\x1E7E\xEF80\xA382\xEB84\xE886\xFD88\xAB8A\xEF8C\xEA8E\xB190\xE792\xE794\xF696\xF798\xE89A\xF19C\xFE9E\xD5A0\xC6A2\xC1A4\x89A6",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0082:            A_0->WriteDeclaration(Temp_1);                              //callvirt				void Reflector::CodeModel::IFormatter::WriteDeclaration(System::String^)
	IL_0087:                                                                        //ldarg.1
	IL_0088:            A_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_008d:                                                                        //ldarg.1
	IL_008e:            A_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_0093:            return;                                                     //ret
	IL_0094:                                                                        //ldc.i4				0x3
	IL_0099:            V_1=3;                                                      //stloc				V_1
	IL_009d:            /*goto IL_000b;*/goto IL_00a2;                              //br				IL_000b
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:                                                                        //ldloc.0
	IL_00a4:            Temp_3=this->M_x2(V_0);                                     //call				System::Boolean Root::T_x83::M_x2(Reflector::CodeModel::IAssembly^)
	IL_00a9:            if(!Temp_3)goto IL_0052;                                    //brfalse.s				IL_0052
	IL_00ab:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_00ad:                                                                        //break
	IL_00ae:                                                                        //ldc.i4				0x0
	IL_00b3:            V_1=0;                                                      //stloc				V_1
	IL_00b7:            /*goto IL_000b;*/goto IL_00bc;                              //br				IL_000b
	IL_00bc:            goto IL_0073;                                               //br.s				IL_0073
	IL_00be:                                                                        //ldarg.1
	IL_00bf:                                                                        //ldstr				L"\x7B2E\x5930\x5A32\x4634\x1736\x5038\x4F3A\x583C\x523E\x6140\x2242\x3544\x3746\x2C48\x2A4A\x3F4C\x3C4E\x7150\x2752\x3A54\x7756\x3B58\x3E5A\x7D5C\x385E\x0460\x0D62\x0064\x1566\x0868\x1F6A\x086C\x0B6E\x5170\x1272\x1B74\x1376\x5978\x187A\x1C7C\x117E\xA180\xED82\xEA84\xF386\xA988\xE98A\xE88C\xAF8E\xE590\xE192\xF494\xF996\xEA98\xF79A\xFC9C\xEB9E\xC4A0\xC7A2\x8BA4"
	IL_00c4:                                                                        //ldloc				V_2
	IL_00c8:            Temp_2=a(L"\x7B2E\x5930\x5A32\x4634\x1736\x5038\x4F3A\x583C\x523E\x6140\x2242\x3544\x3746\x2C48\x2A4A\x3F4C\x3C4E\x7150\x2752\x3A54\x7756\x3B58\x3E5A\x7D5C\x385E\x0460\x0D62\x0064\x1566\x0868\x1F6A\x086C\x0B6E\x5170\x1272\x1B74\x1376\x5978\x187A\x1C7C\x117E\xA180\xED82\xEA84\xF386\xA988\xE98A\xE88C\xAF8E\xE590\xE192\xF494\xF996\xEA98\xF79A\xFC9C\xEB9E\xC4A0\xC7A2\x8BA4",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cd:            A_0->WriteDeclaration(Temp_2);                              //callvirt				void Reflector::CodeModel::IFormatter::WriteDeclaration(System::String^)
	IL_00d2:                                                                        //ldarg.1
	IL_00d3:            A_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_00d8:                                                                        //ldarg.1
	IL_00d9:            A_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_00de:            return;                                                     //ret
	IL_00df:                                                                        //ldarg.0
	IL_00e0:                                                                        //ldarg.1
	IL_00e1:                                                                        //ldarg.2
	IL_00e2:                                                                        //ldarg.3
	IL_00e3:                                                                        //ldarg.s				A_3
	IL_00e5:            Temp_5=A_3->ToString();                                     //callvirt				System::String^ System::Object::ToString()
	IL_00ea:            this->M_x1(A_0,A_1,A_2,Temp_5);                             //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,System::String^)
	IL_00ef:            return;                                                     //ret

}
inline void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^ A_0,System::Exception^ A_1,System::String^ A_2,System::String^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::InvalidOperationException^ Temp_4 = nullptr;
	Root::T_x97^ Temp_5 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::InvalidOperationException^ V_1 = nullptr;
	array<System::Object^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_3=5;                                                      //stloc				V_3
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0011:                                                                        //ldstr				L"\x7722\x5724\x4626\x4728\x582A\x412C\x4E2E\x4530\x5A32\x5A34\x5936\x1938\x5D3A\x5C3C\x563E\x2D40\x3642\x3744\x2246\x6948\x224A\x234C\x6F4E\x7650\x2852\x6554\x2A56\x7E58\x7B5A\x345C\x315E\x4160\x4462\x1E64\x5666\x1468\x4C6A\x436C"
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            Temp_1=a(L"\x7722\x5724\x4626\x4728\x582A\x412C\x4E2E\x4530\x5A32\x5A34\x5936\x1938\x5D3A\x5C3C\x563E\x2D40\x3642\x3744\x2246\x6948\x224A\x234C\x6F4E\x7650\x2852\x6554\x2A56\x7E58\x7B5A\x345C\x315E\x4160\x4462\x1E64\x5666\x1468\x4C6A\x436C",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001f:                                                                        //ldc.i4.2
	IL_0020:            Temp_2=gcnew array<System::Object^>(2);                     //newarr				System::Object
	IL_0025:            V_2=Temp_2;                                                 //stloc.2
	IL_0026:                                                                        //ldloc.2
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ldarg.3
	IL_0029:            V_2[0]=safe_cast<System::Object^>(A_2);                     //stelem.ref
	IL_002a:                                                                        //ldloc.2
	IL_002b:                                                                        //ldc.i4.1
	IL_002c:                                                                        //ldarg.s				A_3
	IL_002e:            V_2[1]=safe_cast<System::Object^>(A_3);                     //stelem.ref
	IL_002f:                                                                        //ldloc.2
	IL_0030:            Temp_3=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_2);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0035:            V_0=Temp_3;                                                 //stloc.0
	IL_0036:                                                                        //ldloc.0
	IL_0037:                                                                        //ldarg.2
	IL_0038:            Temp_4=gcnew System::InvalidOperationException(V_0,A_1);    //newobj				void System::InvalidOperationException::.ctor(System::String^,System::Exception^)
	IL_003d:            V_1=Temp_4;                                                 //stloc.1
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_5=this->F_x13;                                         //ldfld				Root::T_x97^ Root::T_x83 F_x13
	IL_0044:                                                                        //ldloc.1
	IL_0045:            Temp_5->M_x1(safe_cast<System::Exception^>(V_1));           //callvirt				void Root::T_x97::M_x1(System::Exception^)
	IL_004a:            return;                                                     //ret

}
inline void Root::T_x83::M_x1(Reflector::CodeModel::ILanguage^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x5=A_0;                                             //stfld				Reflector::CodeModel::ILanguage^ Root::T_x83 F_x5
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::INamespace^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Int32 Temp_7 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	System::Boolean V_2 = false;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_7=12;                                                     //stloc				V_7
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:            V_0=0;                                                      //stloc.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_0=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_001c:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0021:            V_3=Temp_1;                                                 //stloc.3
	IL_0022:            /*goto IL_0026;*/goto IL_002501;                            //br.s				IL_0026
	IL_0024:                                                                        //ldc.i4.0
	IL_0025:            return false;                                               //ret
	IL_002501:          try{
	IL_0026:                                                                        //ldc.i4				0x7
	IL_002b:            V_5=7;                                                      //stloc				V_5
	IL_002f:            /*goto IL_0033;*/goto IL_0031;                              //br.s				IL_0033
	IL_0031:            goto IL_0064;                                               //br.s				IL_0064
	IL_0033:                                                                        //ldloc				V_5
	IL_0037:            switch(V_5){case 0:goto IL_0133;case 1:goto IL_0111;case 2:goto IL_00c9;case 3:goto IL_00f8;case 4:goto IL_0123;case 5:goto IL_0084;case 6:goto IL_0071;case 7:goto IL_0031;case 8:goto IL_00db;case 9:goto IL_00a0;};//switch				(IL_0133,IL_0111,IL_00c9,IL_00f8,IL_0123,IL_0084,IL_0071,IL_0031,IL_00db,IL_00a0)
	IL_0064:            goto IL_0066;                                               //br.s				IL_0066
	IL_0066:                                                                        //ldc.i4				0x6
	IL_006b:            V_5=6;                                                      //stloc				V_5
	IL_006f:            /*goto IL_0033;*/goto IL_0071;                              //br.s				IL_0033
	IL_0071:                                                                        //ldloc.3
	IL_0072:            Temp_2=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0077:            if(Temp_2)goto IL_0089;                                     //brtrue.s				IL_0089
	IL_0079:                                                                        //ldc.i4				0x5
	IL_007e:            V_5=5;                                                      //stloc				V_5
	IL_0082:            /*goto IL_0033;*/goto IL_0084;                              //br.s				IL_0033
	IL_0084:            goto IL_0125;                                               //br				IL_0125
	IL_0089:                                                                        //ldloc.3
	IL_008a:            Temp_3=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_008f:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0094:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_3);//stloc.1
	IL_0095:                                                                        //ldc.i4				0x9
	IL_009a:            V_5=9;                                                      //stloc				V_5
	IL_009e:            /*goto IL_0033;*/goto IL_00a0;                              //br.s				IL_0033
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            Temp_4=safe_cast<Reflector::CodeModel::ITypeReference^>(V_1)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00a6:                                                                        //ldstr				L"\x1629\x7C2B\x5C2D\x592F\x4431\x5533\x4235\x5D37\x7339\x513B\x4E3D\x2C3F\x2741\x2943\x2345\x2647\x3E49\x2D4B\x3A4D\x394F\x3D51\x3A53\x1255\x3D57\x2E59\x3D5B\x375D\x0C5F\x1161\x5A63"
	IL_00ab:                                                                        //ldloc				V_7
	IL_00af:            Temp_5=a(L"\x1629\x7C2B\x5C2D\x592F\x4431\x5533\x4235\x5D37\x7339\x513B\x4E3D\x2C3F\x2741\x2943\x2345\x2647\x3E49\x2D4B\x3A4D\x394F\x3D51\x3A53\x1255\x3D57\x2E59\x3D5B\x375D\x0C5F\x1161\x5A63",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b4:            Temp_6=(Temp_4 == Temp_5);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00b9:            if(!Temp_6)goto IL_00e0;                                    //brfalse.s				IL_00e0
	IL_00bb:                                                                        //ldc.i4				0x2
	IL_00c0:            V_5=2;                                                      //stloc				V_5
	IL_00c4:            /*goto IL_0033;*/goto IL_00c9;                              //br				IL_0033
	IL_00c9:            goto IL_0113;                                               //br.s				IL_0113
	IL_00cb:                                                                        //ldc.i4.1
	IL_00cc:            V_2=true;                                                   //stloc.2
	IL_00cd:                                                                        //ldc.i4				0x8
	IL_00d2:            V_5=8;                                                      //stloc				V_5
	IL_00d6:            /*goto IL_0033;*/goto IL_00db;                              //br				IL_0033
	IL_00db:            goto IL_0188;                                               //leave				IL_0188
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:                                                                        //ldloc.1
	IL_00e3:            Temp_7=this->M_x1(V_1);                                     //call				System::Int32 Root::T_x83::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00e8:                                                                        //add
	IL_00e9:            V_0=(V_0 + Temp_7);                                         //stloc.0
	IL_00ea:                                                                        //ldc.i4				0x3
	IL_00ef:            V_5=3;                                                      //stloc				V_5
	IL_00f3:            /*goto IL_0033;*/goto IL_00f8;                              //br				IL_0033
	IL_00f8:                                                                        //ldloc.0
	IL_00f9:                                                                        //ldc.i4				0xfa
	IL_00fe:            if(V_0<=250)goto IL_0066;                                   //ble				IL_0066
	IL_0103:                                                                        //ldc.i4				0x1
	IL_0108:            V_5=1;                                                      //stloc				V_5
	IL_010c:            /*goto IL_0033;*/goto IL_0111;                              //br				IL_0033
	IL_0111:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_0113:                                                                        //ldc.i4.1
	IL_0114:            V_2=true;                                                   //stloc.2
	IL_0115:                                                                        //ldc.i4				0x4
	IL_011a:            V_5=4;                                                      //stloc				V_5
	IL_011e:            /*goto IL_0033;*/goto IL_0123;                              //br				IL_0033
	IL_0123:            goto IL_0188;                                               //leave.s				IL_0188
	IL_0125:                                                                        //ldc.i4				0x0
	IL_012a:            V_5=0;                                                      //stloc				V_5
	IL_012e:            /*goto IL_0033;*/goto IL_0133;                              //br				IL_0033
	IL_0133:            goto IL_0024;                                               //leave				IL_0024
	                    ;}
	                    finally{
	IL_0138:            goto IL_014f;                                               //br.s				IL_014f
	IL_013a:                                                                        //ldloc				V_6
	IL_013e:            switch(V_6){case 0:goto IL_0162;case 1:goto IL_0185;case 2:goto IL_0171;};//switch				(IL_0162,IL_0185,IL_0171)
	IL_014f:                                                                        //ldloc.3
	IL_0150:                                                                        //isinst				System::IDisposable
	IL_0155:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0157:                                                                        //ldc.i4				0x0
	IL_015c:            V_6=0;                                                      //stloc				V_6
	IL_0160:            /*goto IL_013a;*/goto IL_0162;                              //br.s				IL_013a
	IL_0162:                                                                        //ldloc.s				V_4
	IL_0164:            if(V_4==nullptr)goto IL_0187;                               //brfalse.s				IL_0187
	IL_0166:                                                                        //ldc.i4				0x2
	IL_016b:            V_6=2;                                                      //stloc				V_6
	IL_016f:            /*goto IL_013a;*/goto IL_0171;                              //br.s				IL_013a
	IL_0171:            goto IL_0173;                                               //br.s				IL_0173
	IL_0173:                                                                        //ldloc.s				V_4
	IL_0175:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_017a:                                                                        //ldc.i4				0x1
	IL_017f:            V_6=1;                                                      //stloc				V_6
	IL_0183:            /*goto IL_013a;*/goto IL_0185;                              //br.s				IL_013a
	IL_0185:            goto IL_0187;                                               //br.s				IL_0187
	IL_0187:                                                                        //endfinally
	                    ;}
	IL_0188:                                                                        //ldloc.2
	IL_0189:            return V_2;                                                 //ret

}
inline System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003b;case 1:goto IL_0070;case 2:goto IL_0057;case 3:goto IL_002d;};//switch				(IL_003b,IL_0070,IL_0057,IL_002d)
	IL_001b:                                                                        //ldarg.1
	IL_001c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0021:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0022:                                                                        //ldc.i4				0x3
	IL_0027:            V_1=3;                                                      //stloc				V_1
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:                                                                        //ldloc.0
	IL_002e:            if(V_0==nullptr)goto IL_0075;                               //brfalse.s				IL_0075
	IL_0030:                                                                        //ldc.i4				0x0
	IL_0035:            V_1=0;                                                      //stloc				V_1
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_004c;                                               //br.s				IL_004c
	IL_003d:                                                                        //ldc.i4.0
	IL_003e:            return false;                                               //ret
	IL_003f:                                                                        //ldloc.0
	IL_0040:            Temp_0=V_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0045:                                                                        //ldarg.3
	IL_0046:            Temp_1=(Temp_0 == A_2);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_004b:            return Temp_1;                                              //ret
	IL_004c:                                                                        //ldc.i4				0x2
	IL_0051:            V_1=2;                                                      //stloc				V_1
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:                                                                        //ldloc.0
	IL_0058:            Temp_2=V_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_005d:                                                                        //ldarg.2
	IL_005e:            Temp_3=(Temp_2 == A_1);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0063:            if(!Temp_3)goto IL_003d;                                    //brfalse.s				IL_003d
	IL_0065:                                                                        //ldc.i4				0x1
	IL_006a:            V_1=1;                                                      //stloc				V_1
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:            goto IL_0073;                                               //br.s				IL_0073
	IL_0072:                                                                        //break
	IL_0073:            goto IL_003f;                                               //br.s				IL_003f
	IL_0075:                                                                        //ldc.i4.0
	IL_0076:            return false;                                               //ret

}
inline System::Int32 Root::T_x83::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_8 = nullptr;
	System::Collections::IEnumerator^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Object^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=A_0->Fields;                                         //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_0006:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_2=A_0->Methods;                                        //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0011:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0016:                                                                        //add
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_4=A_0->Properties;                                     //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_001d:            Temp_5=safe_cast<System::Collections::ICollection^>(Temp_4)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0022:                                                                        //add
	IL_0023:                                                                        //ldarg.1
	IL_0024:            Temp_6=A_0->Events;                                         //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_0029:            Temp_7=safe_cast<System::Collections::ICollection^>(Temp_6)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_002e:                                                                        //add
	IL_002f:                                                                        //ldc.i4.1
	IL_0030:                                                                        //add
	IL_0031:            V_0=((((Temp_1 + Temp_3) + Temp_5) + Temp_7) + 1);          //stloc.0
	IL_0032:                                                                        //ldarg.1
	IL_0033:            Temp_8=A_0->NestedTypes;                                    //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0038:            Temp_9=safe_cast<System::Collections::IEnumerable^>(Temp_8)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_003d:            V_2=Temp_9;                                                 //stloc.2
	IL_003e:            /*goto IL_0040;*/goto IL_003E01;                            //br.s				IL_0040
	IL_003E01:          try{
	IL_0040:                                                                        //ldc.i4				0x4
	IL_0045:            V_4=4;                                                      //stloc				V_4
	IL_0049:            /*goto IL_004d;*/goto IL_004b;                              //br.s				IL_004d
	IL_004b:            goto IL_006a;                                               //br.s				IL_006a
	IL_004d:                                                                        //ldloc				V_4
	IL_0051:            switch(V_4){case 0:goto IL_008d;case 1:goto IL_00ba;case 2:goto IL_00ad;case 3:goto IL_009a;case 4:goto IL_004b;};//switch				(IL_008d,IL_00ba,IL_00ad,IL_009a,IL_004b)
	IL_006a:            goto IL_008f;                                               //br.s				IL_008f
	IL_006c:                                                                        //ldloc.2
	IL_006d:            Temp_11=V_2->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0072:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0077:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_11);//stloc.1
	IL_0078:                                                                        //ldloc.0
	IL_0079:                                                                        //ldarg.0
	IL_007a:                                                                        //ldloc.1
	IL_007b:            Temp_12=this->M_x1(V_1);                                    //call				System::Int32 Root::T_x83::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0080:                                                                        //add
	IL_0081:            V_0=(V_0 + Temp_12);                                        //stloc.0
	IL_0082:                                                                        //ldc.i4				0x0
	IL_0087:            V_4=0;                                                      //stloc				V_4
	IL_008b:            /*goto IL_004d;*/goto IL_008d;                              //br.s				IL_004d
	IL_008d:            goto IL_008f;                                               //br.s				IL_008f
	IL_008f:                                                                        //ldc.i4				0x3
	IL_0094:            V_4=3;                                                      //stloc				V_4
	IL_0098:            /*goto IL_004d;*/goto IL_009a;                              //br.s				IL_004d
	IL_009a:                                                                        //ldloc.2
	IL_009b:            Temp_10=V_2->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a0:            if(Temp_10)goto IL_006c;                                    //brtrue.s				IL_006c
	IL_00a2:                                                                        //ldc.i4				0x2
	IL_00a7:            V_4=2;                                                      //stloc				V_4
	IL_00ab:            /*goto IL_004d;*/goto IL_00ad;                              //br.s				IL_004d
	IL_00ad:            goto IL_00af;                                               //br.s				IL_00af
	IL_00af:                                                                        //ldc.i4				0x1
	IL_00b4:            V_4=1;                                                      //stloc				V_4
	IL_00b8:            /*goto IL_004d;*/goto IL_00ba;                              //br.s				IL_004d
	IL_00ba:            goto IL_0114;                                               //leave.s				IL_0114
	                    ;}
	                    finally{
	IL_00bc:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_00be:                                                                        //ldloc				V_5
	IL_00c2:            switch(V_5){case 0:goto IL_00fe;case 1:goto IL_0111;case 2:goto IL_00f0;};//switch				(IL_00fe,IL_0111,IL_00f0)
	IL_00d3:                                                                        //ldc.i4.0
	IL_00d4:                                                                        //dup
	IL_00d5:                                                                        //dup
	IL_00d6:                                                                        //ldc.i4.2
	IL_00d7:                                                                        //sub
	IL_00d8:                                                                        //blt				IL_00d4
	IL_00dd:                                                                        //pop
	IL_00de:                                                                        //ldloc.2
	IL_00df:                                                                        //isinst				System::IDisposable
	IL_00e4:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00e5:                                                                        //ldc.i4				0x2
	IL_00ea:            V_5=2;                                                      //stloc				V_5
	IL_00ee:            /*goto IL_00be;*/goto IL_00f0;                              //br.s				IL_00be
	IL_00f0:                                                                        //ldloc.3
	IL_00f1:            if(V_3==nullptr)goto IL_0113;                               //brfalse.s				IL_0113
	IL_00f3:                                                                        //ldc.i4				0x0
	IL_00f8:            V_5=0;                                                      //stloc				V_5
	IL_00fc:            /*goto IL_00be;*/goto IL_00fe;                              //br.s				IL_00be
	IL_00fe:            goto IL_0100;                                               //br.s				IL_0100
	IL_0100:                                                                        //ldloc.3
	IL_0101:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0106:                                                                        //ldc.i4				0x1
	IL_010b:            V_5=1;                                                      //stloc				V_5
	IL_010f:            /*goto IL_00be;*/goto IL_0111;                              //br.s				IL_00be
	IL_0111:            goto IL_0113;                                               //br.s				IL_0113
	IL_0113:                                                                        //endfinally
	                    ;}
	IL_0114:                                                                        //ldloc.0
	IL_0115:            return V_0;                                                 //ret

}
inline void Root::T_x83::M_x1(Reflector::CodeModel::IVisibilityConfiguration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x15=A_0;                                            //stfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x83 F_x15
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x83::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x75^ Temp_0 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Root::T_x130^ Temp_6 = nullptr;
	Reflector::CodeModel::IModule^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Root::T_x75^ Temp_9 = nullptr;
	Root::T_x75^ Temp_10 = nullptr;
	Root::T_x75^ Temp_11 = nullptr;
	Reflector::CodeModel::IFormatter^ Temp_12 = nullptr;
	Reflector::IAssemblyBrowser^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	Root::T_x119^ Temp_15 = nullptr;
	Reflector::IConfigurationManager^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	Reflector::IConfiguration^ Temp_18 = nullptr;
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_30 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_31 = nullptr;
	Reflector::CodeModel::IAssemblyResolver^ Temp_32 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_33 = nullptr;
	Root::T_x100^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::Boolean Temp_38 = false;
	Root::T_x130^ Temp_39 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	Reflector::CodeModel::ILanguageWriter^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::Boolean Temp_49 = false;
	Root::T_x130^ Temp_50 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_51 = nullptr;
	System::Boolean Temp_52 = false;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::Boolean Temp_55 = false;
	Reflector::CodeModel::ILanguageWriter^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::Int32 Temp_58 = 0;
	System::String^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::Boolean Temp_62 = false;
	Root::T_x130^ Temp_63 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::String^ Temp_68 = nullptr;
	System::String^ Temp_69 = nullptr;
	System::Boolean Temp_70 = false;
	Root::T_x130^ Temp_71 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_72 = nullptr;
	System::Boolean Temp_73 = false;
	System::String^ Temp_74 = nullptr;
	System::String^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::Boolean Temp_77 = false;
	Root::T_x130^ Temp_78 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_79 = nullptr;
	System::String^ Temp_80 = nullptr;
	System::String^ Temp_81 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_82 = nullptr;
	System::Boolean Temp_83 = false;
	Reflector::CodeModel::IAssemblyManager^ Temp_84 = nullptr;
	Root::T_x75^ Temp_85 = nullptr;
	System::Boolean Temp_86 = false;
	Root::T_x75^ Temp_87 = nullptr;
	System::String^ Temp_88 = nullptr;
	System::String^ Temp_89 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_90 = nullptr;
	System::String^ Temp_91 = nullptr;
	System::String^ Temp_92 = nullptr;
	System::String^ Temp_93 = nullptr;
	System::Boolean Temp_94 = false;
	Root::T_x130^ Temp_95 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_96 = nullptr;
	System::Boolean Temp_97 = false;
	Reflector::CodeModel::ILanguageWriter^ Temp_98 = nullptr;
	System::String^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	System::String^ Temp_101 = nullptr;
	System::Boolean Temp_102 = false;
	Root::T_x130^ Temp_103 = nullptr;
	Reflector::CodeModel::IModuleReference^ Temp_104 = nullptr;
	System::Boolean Temp_105 = false;
	System::Boolean Temp_106 = false;
	Reflector::CodeModel::ILanguageWriter^ Temp_107 = nullptr;
	System::String^ Temp_108 = nullptr;
	System::String^ Temp_109 = nullptr;
	System::Boolean Temp_110 = false;
	Root::T_x80^ Temp_111 = nullptr;
	Root::T_x75^ Temp_112 = nullptr;
	Root::T_x75^ Temp_113 = nullptr;
	System::Drawing::Font^ Temp_114 = nullptr;
	Root::T_x75^ Temp_115 = nullptr;
	Root::T_x125^ Temp_116 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_117 = nullptr;
	Root::T_x75^ Temp_118 = nullptr;
	Reflector::ICommandBarManager^ Temp_119 = nullptr;
	Root::T_x16^ Temp_120 = nullptr;
	System::String^ Temp_121 = nullptr;
	System::String^ Temp_122 = nullptr;
	System::String^ Temp_123 = nullptr;
	System::Boolean Temp_124 = false;
	Root::T_x130^ Temp_125 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_126 = nullptr;
	System::String^ Temp_127 = nullptr;
	System::String^ Temp_128 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_129 = nullptr;
	System::Boolean Temp_130 = false;
	System::Windows::Forms::Control^ Temp_131 = nullptr;
	System::String^ Temp_132 = nullptr;
	Reflector::CodeModel::IType^ Temp_133 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_134 = nullptr;
	System::String^ Temp_135 = nullptr;
	System::String^ Temp_136 = nullptr;
	System::String^ Temp_137 = nullptr;
	Reflector::CodeModel::IType^ Temp_138 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_139 = nullptr;
	System::String^ Temp_140 = nullptr;
	System::String^ Temp_141 = nullptr;
	System::String^ Temp_142 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_143 = nullptr;
	System::String^ Temp_144 = nullptr;
	System::String^ Temp_145 = nullptr;
	Reflector::CodeModel::IType^ Temp_146 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_147 = nullptr;
	System::String^ Temp_148 = nullptr;
	Reflector::CodeModel::IType^ Temp_149 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_150 = nullptr;
	System::String^ Temp_151 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_152 = nullptr;
	System::String^ Temp_153 = nullptr;
	System::String^ Temp_154 = nullptr;
	System::String^ Temp_155 = nullptr;
	System::String^ Temp_156 = nullptr;
	System::String^ Temp_157 = nullptr;
	Root::T_x83^ Temp_158 = nullptr;
	Root::T_x83^ Temp_159 = nullptr;
	Root::T_x83^ Temp_160 = nullptr;
	System::Object^ Temp_161 = nullptr;
	Root::T_x83^ Temp_162 = nullptr;
	//local variables.
	Reflector::CodeModel::IFormatter^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	Root::T_x119^ V_2 = nullptr;
	Reflector::CodeModel::ILanguage^ V_3 = nullptr;
	Reflector::CodeModel::IAssemblyResolver^ V_4 = nullptr;
	Reflector::CodeModel::IAssembly^ V_5 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_6 = nullptr;
	System::Exception^ V_7 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_8 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_9 = nullptr;
	System::Exception^ V_10 = nullptr;
	Reflector::CodeModel::IModule^ V_11 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_12 = nullptr;
	System::Exception^ V_13 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_14 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_15 = nullptr;
	System::Exception^ V_16 = nullptr;
	Reflector::CodeModel::INamespace^ V_17 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_18 = nullptr;
	System::Exception^ V_19 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_20 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_21 = nullptr;
	System::Exception^ V_22 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_23 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_24 = nullptr;
	System::Exception^ V_25 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_26 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_27 = nullptr;
	System::Exception^ V_28 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_29 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_30 = nullptr;
	System::Exception^ V_31 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_32 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ V_33 = nullptr;
	System::Exception^ V_34 = nullptr;
	System::Int32 V_35 = 0;
	System::Int32 V_36 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_36=16;                                                    //stloc				V_36
	IL_0009:                                                                        //ldc.i4				0x26
	IL_000e:            V_35=38;                                                    //stloc				V_35
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_00c2;                                               //br				IL_00c2
	IL_0019:                                                                        //ldloc				V_35
	IL_001d:            switch(V_35){case 0:goto IL_05f1;case 1:goto IL_0d5e;case 2:goto IL_0b7a;case 3:goto IL_0e7e;case 4:goto IL_0c6a;case 5:goto IL_05d8;case 6:goto IL_0e37;case 7:goto IL_0621;case 8:goto IL_0da5;case 9:goto IL_04dc;case 10:goto IL_050c;case 11:goto IL_04f1;case 12:goto IL_05c5;case 13:goto IL_0b68;case 14:goto IL_01d7;case 15:goto IL_0e22;case 16:goto IL_0c55;case 17:goto IL_057f;case 18:goto IL_056a;case 19:goto IL_0534;case 20:goto IL_059e;case 21:goto IL_01eb;case 22:goto IL_0d77;case 23:goto IL_0e07;case 24:goto IL_0cd0;case 25:goto IL_0b4d;case 26:goto IL_0d30;case 27:goto IL_0b20;case 28:goto IL_0d8a;case 29:goto IL_060c;case 30:goto IL_0b0b;case 31:goto IL_00db;case 32:goto IL_05b1;case 33:goto IL_0a29;case 34:goto IL_054f;case 35:goto IL_0c7d;case 36:goto IL_0b38;case 37:goto IL_0521;case 38:goto IL_0014;case 39:goto IL_0a14;};//switch				(IL_05f1,IL_0d5e,IL_0b7a,IL_0e7e,IL_0c6a,IL_05d8,IL_0e37,IL_0621,IL_0da5,IL_04dc,IL_050c,IL_04f1,IL_05c5,IL_0b68,IL_01d7,IL_0e22,IL_0c55,IL_057f,IL_056a,IL_0534,IL_059e,IL_01eb,IL_0d77,IL_0e07,IL_0cd0,IL_0b4d,IL_0d30,IL_0b20,IL_0d8a,IL_060c,IL_0b0b,IL_00db,IL_05b1,IL_0a29,IL_054f,IL_0c7d,IL_0b38,IL_0521,IL_0014,IL_0a14)
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:            Temp_131=this->Parent;                                      //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_00c8:            if(Temp_131==nullptr)goto IL_0d45;                          //brfalse				IL_0d45
	IL_00cd:                                                                        //ldc.i4				0x1f
	IL_00d2:            V_35=31;                                                    //stloc				V_35
	IL_00d6:            /*goto IL_0019;*/goto IL_00db;                              //br				IL_0019
	IL_00db:            goto IL_05ca;                                               //br				IL_05ca
	IL_00DB01:          try{
	IL_00e0:                                                                        //ldc.i4				0x0
	IL_00e5:            V_35=0;                                                     //stloc				V_35
	IL_00e9:            /*goto IL_00ed;*/goto IL_00eb;                              //br.s				IL_00ed
	IL_00eb:            goto IL_0106;                                               //br.s				IL_0106
	IL_00ed:                                                                        //ldloc				V_35
	IL_00f1:            switch(V_35){case 0:goto IL_00eb;case 1:goto IL_01a1;case 2:goto IL_0119;case 3:goto IL_015c;};//switch				(IL_00eb,IL_01a1,IL_0119,IL_015c)
	IL_0106:                                                                        //ldloc.3
	IL_0107:            Temp_130=V_3->Translate;                                    //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_010c:            if(!Temp_130)goto IL_015e;                                  //brfalse.s				IL_015e
	IL_010e:                                                                        //ldc.i4				0x2
	IL_0113:            V_35=2;                                                     //stloc				V_35
	IL_0117:            /*goto IL_00ed;*/goto IL_0119;                              //br.s				IL_00ed
	IL_0119:            goto IL_011b;                                               //br.s				IL_011b
	IL_011b:                                                                        //ldc.i4.1
	IL_011c:                                                                        //ldloc.2
	IL_011d:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_0122:                                                                        //ldloc				V_36
	IL_0126:            Temp_121=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012b:            Temp_122=V_2->M_x1(Temp_121);                               //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_0130:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0135:                                                                        //ldloc				V_36
	IL_0139:            Temp_123=a(L"\x5A2D\x422F\x4731\x5133",V_36);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013e:            Temp_124=(Temp_122 == Temp_123);                            //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0143:            Temp_125=gcnew Root::T_x130(true,Temp_124);                 //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_0148:                                                                        //ldloc.s				V_23
	IL_014a:            Temp_126=Temp_125->M_x1(V_23);                              //callvirt				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_014f:            V_23=Temp_126;                                              //stloc.s				V_23
	IL_0151:                                                                        //ldc.i4				0x3
	IL_0156:            V_35=3;                                                     //stloc				V_35
	IL_015a:            /*goto IL_00ed;*/goto IL_015c;                              //br.s				IL_00ed
	IL_015c:            goto IL_015e;                                               //br.s				IL_015e
	IL_015e:                                                                        //ldloc.2
	IL_015f:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D"
	IL_0164:                                                                        //ldloc				V_36
	IL_0168:            Temp_127=a(L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016d:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0172:                                                                        //ldloc				V_36
	IL_0176:            Temp_128=a(L"\x5A2D\x422F\x4731\x5133",V_36);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017b:            V_2->M_x1(Temp_127,Temp_128);                               //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_0180:                                                                        //ldloc.3
	IL_0181:                                                                        //ldloc.0
	IL_0182:                                                                        //ldloc.2
	IL_0183:            Temp_129=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_0188:            V_24=Temp_129;                                              //stloc.s				V_24
	IL_018a:                                                                        //ldloc.s				V_24
	IL_018c:                                                                        //ldloc.s				V_23
	IL_018e:            V_24->WriteFieldDeclaration(V_23);                          //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteFieldDeclaration(Reflector::CodeModel::IFieldDeclaration^)
	IL_0193:                                                                        //ldc.i4				0x1
	IL_0198:            V_35=1;                                                     //stloc				V_35
	IL_019c:            /*goto IL_00ed;*/goto IL_01a1;                              //br				IL_00ed
	IL_01a1:            goto IL_0e0c;                                               //leave				IL_0e0c
	                    ;}
	                    catch(System::Exception^ Ex_01A102){
	IL_01a6:            V_25=Ex_01A102;                                             //stloc.s				V_25
	IL_01a8:                                                                        //ldarg.0
	IL_01a9:                                                                        //ldloc.0
	IL_01aa:                                                                        //ldloc.s				V_25
	IL_01ac:                                                                        //ldloc.s				V_23
	IL_01ae:            Temp_132=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IFieldReference^>(V_23));//call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_01b3:                                                                        //ldloc.s				V_23
	IL_01b5:            Temp_133=safe_cast<Reflector::CodeModel::IMemberReference^>(V_23)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_01ba:            Temp_134=Root::T_x115::M_x1(Temp_133);                      //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_01bf:            this->M_x1(V_0,V_25,Temp_132,Temp_134);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_01c4:            goto IL_0e0c;                                               //leave				IL_0e0c
	                    ;}
	IL_01c9:                                                                        //ldc.i4				0xe
	IL_01ce:            V_35=14;                                                    //stloc				V_35
	IL_01d2:            /*goto IL_0019;*/goto IL_01d7;                              //br				IL_0019
	IL_01d7:                                                                        //ldarg.1
	IL_01d8:            /*if(!A_0)goto IL_0a2e;*/if(A_0)goto IL_0A2901;             //brfalse				IL_0a2e
	IL_01dd:                                                                        //ldc.i4				0x15
	IL_01e2:            V_35=21;                                                    //stloc				V_35
	IL_01e6:            /*goto IL_0019;*/goto IL_01eb;                              //br				IL_0019
	IL_01eb:            goto IL_0526;                                               //br				IL_0526
	IL_01EB01:          try{
	IL_01f0:                                                                        //ldc.i4				0x1
	IL_01f5:            V_35=1;                                                     //stloc				V_35
	IL_01f9:            /*goto IL_01fd;*/goto IL_01fb;                              //br.s				IL_01fd
	IL_01fb:            goto IL_0216;                                               //br.s				IL_0216
	IL_01fd:                                                                        //ldloc				V_35
	IL_0201:            switch(V_35){case 0:goto IL_026c;case 1:goto IL_01fb;case 2:goto IL_0229;case 3:goto IL_028f;};//switch				(IL_026c,IL_01fb,IL_0229,IL_028f)
	IL_0216:                                                                        //ldloc.3
	IL_0217:            Temp_52=V_3->Translate;                                     //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_021c:            if(!Temp_52)goto IL_026e;                                   //brfalse.s				IL_026e
	IL_021e:                                                                        //ldc.i4				0x2
	IL_0223:            V_35=2;                                                     //stloc				V_35
	IL_0227:            /*goto IL_01fd;*/goto IL_0229;                              //br.s				IL_01fd
	IL_0229:            goto IL_022b;                                               //br.s				IL_022b
	IL_022b:                                                                        //ldc.i4.0
	IL_022c:                                                                        //ldloc.2
	IL_022d:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_0232:                                                                        //ldloc				V_36
	IL_0236:            Temp_46=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023b:            Temp_47=V_2->M_x1(Temp_46);                                 //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_0240:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0245:                                                                        //ldloc				V_36
	IL_0249:            Temp_48=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024e:            Temp_49=(Temp_47 == Temp_48);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0253:            Temp_50=gcnew Root::T_x130(false,Temp_49);                  //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_0258:                                                                        //ldloc.s				V_8
	IL_025a:            Temp_51=Temp_50->M_x2(V_8);                                 //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x129::M_x2(Reflector::CodeModel::IAssemblyReference^)
	IL_025f:            V_8=Temp_51;                                                //stloc.s				V_8
	IL_0261:                                                                        //ldc.i4				0x0
	IL_0266:            V_35=0;                                                     //stloc				V_35
	IL_026a:            /*goto IL_01fd;*/goto IL_026c;                              //br.s				IL_01fd
	IL_026c:            goto IL_026e;                                               //br.s				IL_026e
	IL_026e:                                                                        //ldloc.3
	IL_026f:                                                                        //ldloc.0
	IL_0270:                                                                        //ldloc.2
	IL_0271:            Temp_45=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_0276:            V_9=Temp_45;                                                //stloc.s				V_9
	IL_0278:                                                                        //ldloc.s				V_9
	IL_027a:                                                                        //ldloc.s				V_8
	IL_027c:            V_9->WriteAssemblyReference(V_8);                           //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteAssemblyReference(Reflector::CodeModel::IAssemblyReference^)
	IL_0281:                                                                        //ldc.i4				0x3
	IL_0286:            V_35=3;                                                     //stloc				V_35
	IL_028a:            /*goto IL_01fd;*/goto IL_028f;                              //br				IL_01fd
	IL_028f:            goto IL_0b52;                                               //leave				IL_0b52
	                    ;}
	                    catch(System::Exception^ Ex_028F02){
	IL_0294:            V_10=Ex_028F02;                                             //stloc.s				V_10
	IL_0296:                                                                        //ldarg.0
	IL_0297:                                                                        //ldloc.0
	IL_0298:                                                                        //ldloc.s				V_10
	IL_029a:                                                                        //ldloc.s				V_8
	IL_029c:            Temp_135=V_8->ToString();                                   //callvirt				System::String^ System::Object::ToString()
	IL_02a1:                                                                        //ldloc.s				V_8
	IL_02a3:            Temp_136=V_8->ToString();                                   //callvirt				System::String^ System::Object::ToString()
	IL_02a8:            this->M_x1(V_0,V_10,Temp_135,Temp_136);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,System::String^)
	IL_02ad:            goto IL_0b52;                                               //leave				IL_0b52
	                    ;}
	IL_02AD02:          try{
	IL_02b2:                                                                        //ldc.i4				0x3
	IL_02b7:            V_35=3;                                                     //stloc				V_35
	IL_02bb:            /*goto IL_02bf;*/goto IL_02bd;                              //br.s				IL_02bf
	IL_02bd:            goto IL_02d8;                                               //br.s				IL_02d8
	IL_02bf:                                                                        //ldloc				V_35
	IL_02c3:            switch(V_35){case 0:goto IL_0373;case 1:goto IL_032e;case 2:goto IL_02eb;case 3:goto IL_02bd;};//switch				(IL_0373,IL_032e,IL_02eb,IL_02bd)
	IL_02d8:                                                                        //ldloc.3
	IL_02d9:            Temp_97=V_3->Translate;                                     //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_02de:            if(!Temp_97)goto IL_0330;                                   //brfalse.s				IL_0330
	IL_02e0:                                                                        //ldc.i4				0x2
	IL_02e5:            V_35=2;                                                     //stloc				V_35
	IL_02e9:            /*goto IL_02bf;*/goto IL_02eb;                              //br.s				IL_02bf
	IL_02eb:            goto IL_02ed;                                               //br.s				IL_02ed
	IL_02ed:                                                                        //ldc.i4.1
	IL_02ee:                                                                        //ldloc.2
	IL_02ef:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_02f4:                                                                        //ldloc				V_36
	IL_02f8:            Temp_91=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02fd:            Temp_92=V_2->M_x1(Temp_91);                                 //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_0302:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0307:                                                                        //ldloc				V_36
	IL_030b:            Temp_93=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0310:            Temp_94=(Temp_92 == Temp_93);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0315:            Temp_95=gcnew Root::T_x130(true,Temp_94);                   //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_031a:                                                                        //ldloc.s				V_29
	IL_031c:            Temp_96=Temp_95->M_x1(V_29);                                //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0321:            V_29=Temp_96;                                               //stloc.s				V_29
	IL_0323:                                                                        //ldc.i4				0x1
	IL_0328:            V_35=1;                                                     //stloc				V_35
	IL_032c:            /*goto IL_02bf;*/goto IL_032e;                              //br.s				IL_02bf
	IL_032e:            goto IL_0330;                                               //br.s				IL_0330
	IL_0330:                                                                        //ldloc.2
	IL_0331:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D"
	IL_0336:                                                                        //ldloc				V_36
	IL_033a:            Temp_88=a(L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033f:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0344:                                                                        //ldloc				V_36
	IL_0348:            Temp_89=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_034d:            V_2->M_x1(Temp_88,Temp_89);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_0352:                                                                        //ldloc.3
	IL_0353:                                                                        //ldloc.0
	IL_0354:                                                                        //ldloc.2
	IL_0355:            Temp_90=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_035a:            V_30=Temp_90;                                               //stloc.s				V_30
	IL_035c:                                                                        //ldloc.s				V_30
	IL_035e:                                                                        //ldloc.s				V_29
	IL_0360:            V_30->WritePropertyDeclaration(V_29);                       //callvirt				void Reflector::CodeModel::ILanguageWriter::WritePropertyDeclaration(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0365:                                                                        //ldc.i4				0x0
	IL_036a:            V_35=0;                                                     //stloc				V_35
	IL_036e:            /*goto IL_02bf;*/goto IL_0373;                              //br				IL_02bf
	IL_0373:            goto IL_0554;                                               //leave				IL_0554
	                    ;}
	                    catch(System::Exception^ Ex_037302){
	IL_0378:            V_31=Ex_037302;                                             //stloc.s				V_31
	IL_037a:                                                                        //ldarg.0
	IL_037b:                                                                        //ldloc.0
	IL_037c:                                                                        //ldloc.s				V_31
	IL_037e:                                                                        //ldloc.s				V_29
	IL_0380:            Temp_137=Root::T_x115::M_x12(safe_cast<Reflector::CodeModel::IPropertyReference^>(V_29));//call				System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IPropertyReference^)
	IL_0385:                                                                        //ldloc.s				V_29
	IL_0387:            Temp_138=safe_cast<Reflector::CodeModel::IMemberReference^>(V_29)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_038c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0391:            Temp_139=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_138)));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_0396:            this->M_x1(V_0,V_31,Temp_137,Temp_139);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_039b:            goto IL_0554;                                               //leave				IL_0554
	                    ;}
	IL_03a0:                                                                        //ldarg.0
	IL_03a1:            Temp_10=this->F_x11;                                        //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_03a6:                                                                        //ldnull
	IL_03a7:            Temp_10->M_x1(safe_cast<Reflector::CodeModel::IFormatter^>(nullptr));//callvirt				void Root::T_x75::M_x1(Reflector::CodeModel::IFormatter^)
	IL_03ac:                                                                        //ldarg.0
	IL_03ad:            Temp_11=this->F_x11;                                        //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_03b2:                                                                        //ldc.i4.0
	IL_03b3:            Temp_12=Temp_11->M_x1(false);                               //callvirt				Reflector::CodeModel::IFormatter^ Root::T_x75::M_x1(System::Boolean)
	IL_03b8:            V_0=Temp_12;                                                //stloc.0
	IL_03b9:                                                                        //ldarg.0
	IL_03ba:            Temp_13=this->F_x1;                                         //ldfld				Reflector::IAssemblyBrowser^ Root::T_x83 F_x1
	IL_03bf:            Temp_14=Temp_13->ActiveItem;                                //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_03c4:            V_1=Temp_14;                                                //stloc.1
	IL_03c5:            Temp_15=gcnew Root::T_x119();                               //newobj				void Root::T_x119::.ctor()
	IL_03ca:            V_2=Temp_15;                                                //stloc.2
	IL_03cb:                                                                        //ldloc.2
	IL_03cc:                                                                        //ldarg.0
	IL_03cd:            Temp_16=this->F_x4;                                         //ldfld				Reflector::IConfigurationManager^ Root::T_x83 F_x4
	IL_03d2:                                                                        //ldstr				L"\x622D\x512F\x5C31\x5333\x4335\x5937\x5D39\x593B\x693D\x323F\x2B41\x3043\x2345\x3A47"
	IL_03d7:                                                                        //ldloc				V_36
	IL_03db:            Temp_17=a(L"\x622D\x512F\x5C31\x5333\x4335\x5937\x5D39\x593B\x693D\x323F\x2B41\x3043\x2345\x3A47",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e0:            Temp_18=Temp_16[Temp_17];                                   //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_03e5:            V_2->M_x1(Temp_18);                                         //callvirt				void Root::T_x119::M_x1(Reflector::IConfiguration^)
	IL_03ea:                                                                        //ldloc.2
	IL_03eb:                                                                        //ldarg.0
	IL_03ec:            Temp_19=this->F_x15;                                        //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x83 F_x15
	IL_03f1:            V_2->M_x1(Temp_19);                                         //callvirt				void Root::T_x119::M_x1(Reflector::CodeModel::IVisibilityConfiguration^)
	IL_03f6:                                                                        //ldloc.2
	IL_03f7:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7535\x4D37\x4939\x483B\x513D\x2D3F\x0341\x3043\x3245\x3A47\x2349\x2E4B\x3B4D\x244F\x3751\x2753"
	IL_03fc:                                                                        //ldloc				V_36
	IL_0400:            Temp_20=a(L"\x7D2D\x582F\x5D31\x4333\x7535\x4D37\x4939\x483B\x513D\x2D3F\x0341\x3043\x3245\x3A47\x2349\x2E4B\x3B4D\x244F\x3751\x2753",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0405:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_040a:                                                                        //ldloc				V_36
	IL_040e:            Temp_21=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0413:            V_2->M_x1(Temp_20,Temp_21);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_0418:                                                                        //ldloc.2
	IL_0419:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7835\x5937\x5739\x593B\x4D3D\x303F\x2341\x2743\x2345\x0147\x2749\x3C4B\x214D\x224F\x2651\x2753"
	IL_041e:                                                                        //ldloc				V_36
	IL_0422:            Temp_22=a(L"\x7D2D\x582F\x5D31\x4333\x7835\x5937\x5739\x593B\x4D3D\x303F\x2341\x2743\x2345\x0147\x2749\x3C4B\x214D\x224F\x2651\x2753",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0427:                                                                        //ldstr				L"\x482D\x512F\x5E31\x4733\x5335"
	IL_042c:                                                                        //ldloc				V_36
	IL_0430:            Temp_23=a(L"\x482D\x512F\x5E31\x4733\x5335",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0435:            V_2->M_x1(Temp_22,Temp_23);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_043a:                                                                        //ldloc.2
	IL_043b:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7835\x5937\x5739\x593B\x4D3D\x303F\x2341\x2743\x2345\x0A47\x2549\x284B\x374D"
	IL_0440:                                                                        //ldloc				V_36
	IL_0444:            Temp_24=a(L"\x7D2D\x582F\x5D31\x4333\x7835\x5937\x5739\x593B\x4D3D\x303F\x2341\x2743\x2345\x0A47\x2549\x284B\x374D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0449:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_044e:                                                                        //ldloc				V_36
	IL_0452:            Temp_25=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0457:            V_2->M_x1(Temp_24,Temp_25);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_045c:                                                                        //ldloc.2
	IL_045d:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x6235\x4137\x4A39\x593B\x7A3D\x253F\x2141\x2843\x2745\x3A47\x2B49\x384B\x274D\x3F4F\x3C51\x1653\x3955\x3C57\x2359"
	IL_0462:                                                                        //ldloc				V_36
	IL_0466:            Temp_26=a(L"\x7D2D\x582F\x5D31\x4333\x6235\x4137\x4A39\x593B\x7A3D\x253F\x2141\x2843\x2745\x3A47\x2B49\x384B\x274D\x3F4F\x3C51\x1653\x3955\x3C57\x2359",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_046b:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0470:                                                                        //ldloc				V_36
	IL_0474:            Temp_27=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0479:            V_2->M_x1(Temp_26,Temp_27);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_047e:                                                                        //ldloc.2
	IL_047f:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D"
	IL_0484:                                                                        //ldloc				V_36
	IL_0488:            Temp_28=a(L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_048d:                                                                        //ldstr				L"\x482D\x512F\x5E31\x4733\x5335"
	IL_0492:                                                                        //ldloc				V_36
	IL_0496:            Temp_29=a(L"\x482D\x512F\x5E31\x4733\x5335",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_049b:            V_2->M_x1(Temp_28,Temp_29);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_04a0:                                                                        //ldarg.0
	IL_04a1:            Temp_30=this->M_x12();                                      //call				Reflector::CodeModel::ILanguage^ Root::T_x83::M_x12()
	IL_04a6:            V_3=Temp_30;                                                //stloc.3
	IL_04a7:                                                                        //ldarg.0
	IL_04a8:            Temp_31=this->F_x2;                                         //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x83 F_x2
	IL_04ad:            Temp_32=Temp_31->Resolver;                                  //callvirt				Reflector::CodeModel::IAssemblyResolver^ Reflector::CodeModel::IAssemblyManager::get_Resolver()
	IL_04b2:            V_4=Temp_32;                                                //stloc.s				V_4
	IL_04b4:                                                                        //ldarg.0
	IL_04b5:            Temp_33=this->F_x2;                                         //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x83 F_x2
	IL_04ba:                                                                        //ldloc.s				V_4
	IL_04bc:            Temp_34=gcnew Root::T_x100(V_4);                            //newobj				void Root::T_x100::.ctor(Reflector::CodeModel::IAssemblyResolver^)
	IL_04c1:            Temp_33->Resolver=safe_cast<Reflector::CodeModel::IAssemblyResolver^>(Temp_34);//callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_04c6:                                                                        //ldloc.1
	IL_04c7:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_04cc:            V_5=dynamic_cast<Reflector::CodeModel::IAssembly^>(V_1);    //stloc.s				V_5
	IL_04ce:                                                                        //ldc.i4				0x9
	IL_04d3:            V_35=9;                                                     //stloc				V_35
	IL_04d7:            /*goto IL_0019;*/goto IL_04dc;                              //br				IL_0019
	IL_04dc:                                                                        //ldloc.s				V_5
	IL_04de:            if(V_5==nullptr)goto IL_05f6;                               //brfalse				IL_05f6
	IL_04e3:                                                                        //ldc.i4				0xb
	IL_04e8:            V_35=11;                                                    //stloc				V_35
	IL_04ec:            /*goto IL_0019;*/goto IL_04f1;                              //br				IL_0019
	IL_04f1:            /*goto IL_0626;*/goto IL_062101;                            //br				IL_0626
	IL_04f6:                                                                        //ldloc.1
	IL_04f7:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_04fc:            V_23=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(V_1);//stloc.s				V_23
	IL_04fe:                                                                        //ldc.i4				0xa
	IL_0503:            V_35=10;                                                    //stloc				V_35
	IL_0507:            /*goto IL_0019;*/goto IL_050c;                              //br				IL_0019
	IL_050c:                                                                        //ldloc.s				V_23
	IL_050e:            if(V_23==nullptr)goto IL_0e0c;                              //brfalse				IL_0e0c
	IL_0513:                                                                        //ldc.i4				0x25
	IL_0518:            V_35=37;                                                    //stloc				V_35
	IL_051c:            /*goto IL_0019;*/goto IL_0521;                              //br				IL_0019
	IL_0521:            /*goto IL_00e0;*/goto IL_00DB01;                            //br				IL_00e0
	IL_0526:                                                                        //ldc.i4				0x13
	IL_052b:            V_35=19;                                                    //stloc				V_35
	IL_052f:            /*goto IL_0019;*/goto IL_0534;                              //br				IL_0019
	IL_0534:                                                                        //ldarg.0
	IL_0535:                                                                        //ldloc.s				V_20
	IL_0537:            Temp_86=this->M_x2(V_20);                                   //call				System::Boolean Root::T_x83::M_x2(Reflector::CodeModel::ITypeDeclaration^)
	IL_053c:            /*if(!Temp_86)goto IL_0a2e;*/if(Temp_86)goto IL_0A2901;     //brfalse				IL_0a2e
	IL_0541:                                                                        //ldc.i4				0x22
	IL_0546:            V_35=34;                                                    //stloc				V_35
	IL_054a:            /*goto IL_0019;*/goto IL_054f;                              //br				IL_0019
	IL_054f:            goto IL_0e3c;                                               //br				IL_0e3c
	IL_0554:                                                                        //ldloc.1
	IL_0555:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_055a:            V_32=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(V_1);//stloc.s				V_32
	IL_055c:                                                                        //ldc.i4				0x12
	IL_0561:            V_35=18;                                                    //stloc				V_35
	IL_0565:            /*goto IL_0019;*/goto IL_056a;                              //br				IL_0019
	IL_056a:                                                                        //ldloc.s				V_32
	IL_056c:            if(V_32==nullptr)goto IL_0d09;                              //brfalse				IL_0d09
	IL_0571:                                                                        //ldc.i4				0x11
	IL_0576:            V_35=17;                                                    //stloc				V_35
	IL_057a:            /*goto IL_0019;*/goto IL_057f;                              //br				IL_0019
	IL_057f:            /*goto IL_082c;*/goto IL_082702;                            //br				IL_082c
	IL_0584:                                                                        //ldarg.0
	IL_0585:            Temp_87=this->F_x11;                                        //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_058a:                                                                        //ldnull
	IL_058b:            Temp_87->M_x1(safe_cast<Reflector::CodeModel::IFormatter^>(nullptr));//callvirt				void Root::T_x75::M_x1(Reflector::CodeModel::IFormatter^)
	IL_0590:                                                                        //ldc.i4				0x14
	IL_0595:            V_35=20;                                                    //stloc				V_35
	IL_0599:            /*goto IL_0019;*/goto IL_059e;                              //br				IL_0019
	IL_059e:            goto IL_0e83;                                               //br				IL_0e83
	IL_05a3:                                                                        //ldc.i4				0x20
	IL_05a8:            V_35=32;                                                    //stloc				V_35
	IL_05ac:            /*goto IL_0019;*/goto IL_05b1;                              //br				IL_0019
	IL_05b1:                                                                        //ldarg.1
	IL_05b2:            /*if(!A_0)goto IL_0cd5;*/if(A_0)goto IL_0CD001;             //brfalse				IL_0cd5
	IL_05b7:                                                                        //ldc.i4				0xc
	IL_05bc:            V_35=12;                                                    //stloc				V_35
	IL_05c0:            /*goto IL_0019;*/goto IL_05c5;                              //br				IL_0019
	IL_05c5:            goto IL_0d7c;                                               //br				IL_0d7c
	IL_05ca:                                                                        //ldc.i4				0x5
	IL_05cf:            V_35=5;                                                     //stloc				V_35
	IL_05d3:            /*goto IL_0019;*/goto IL_05d8;                              //br				IL_0019
	IL_05d8:                                                                        //ldarg.0
	IL_05d9:            Temp_9=this->F_x11;                                         //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_05de:            if(Temp_9!=nullptr)goto IL_03a0;                            //brtrue				IL_03a0
	IL_05e3:                                                                        //ldc.i4				0x0
	IL_05e8:            V_35=0;                                                     //stloc				V_35
	IL_05ec:            /*goto IL_0019;*/goto IL_05f1;                              //br				IL_0019
	IL_05f1:            goto IL_0c6f;                                               //br				IL_0c6f
	IL_05f6:                                                                        //ldloc.1
	IL_05f7:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_05fc:            V_8=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(V_1);//stloc.s				V_8
	IL_05fe:                                                                        //ldc.i4				0x1d
	IL_0603:            V_35=29;                                                    //stloc				V_35
	IL_0607:            /*goto IL_0019;*/goto IL_060c;                              //br				IL_0019
	IL_060c:                                                                        //ldloc.s				V_8
	IL_060e:            if(V_8==nullptr)goto IL_0b52;                               //brfalse				IL_0b52
	IL_0613:                                                                        //ldc.i4				0x7
	IL_0618:            V_35=7;                                                     //stloc				V_35
	IL_061c:            /*goto IL_0019;*/goto IL_0621;                              //br				IL_0019
	IL_0621:            /*goto IL_01f0;*/goto IL_01EB01;                            //br				IL_01f0
	IL_062101:          try{
	IL_0626:                                                                        //ldc.i4				0x0
	IL_062b:            V_35=0;                                                     //stloc				V_35
	IL_062f:            /*goto IL_0633;*/goto IL_0631;                              //br.s				IL_0633
	IL_0631:            goto IL_0660;                                               //br.s				IL_0660
	IL_0633:                                                                        //ldloc				V_35
	IL_0637:            switch(V_35){case 0:goto IL_0631;case 1:goto IL_06f0;case 2:goto IL_0674;case 3:goto IL_0716;case 4:goto IL_0732;case 5:goto IL_0697;case 6:goto IL_0706;case 7:goto IL_0742;case 8:goto IL_06e0;};//switch				(IL_0631,IL_06f0,IL_0674,IL_0716,IL_0732,IL_0697,IL_0706,IL_0742,IL_06e0)
	IL_0660:                                                                        //ldloc.s				V_5
	IL_0662:            Temp_65=V_5->Status;                                        //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0667:            if(Temp_65==nullptr)goto IL_06e2;                           //brfalse.s				IL_06e2
	IL_0669:                                                                        //ldc.i4				0x2
	IL_066e:            V_35=2;                                                     //stloc				V_35
	IL_0672:            /*goto IL_0633;*/goto IL_0674;                              //br.s				IL_0633
	IL_0674:            goto IL_0708;                                               //br				IL_0708
	IL_0679:                                                                        //ldloc.3
	IL_067a:                                                                        //ldloc.0
	IL_067b:                                                                        //ldloc.2
	IL_067c:            Temp_56=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_0681:            V_6=Temp_56;                                                //stloc.s				V_6
	IL_0683:                                                                        //ldloc.s				V_6
	IL_0685:                                                                        //ldloc.s				V_5
	IL_0687:            V_6->WriteAssembly(V_5);                                    //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteAssembly(Reflector::CodeModel::IAssembly^)
	IL_068c:                                                                        //ldc.i4				0x5
	IL_0691:            V_35=5;                                                     //stloc				V_35
	IL_0695:            /*goto IL_0633;*/goto IL_0697;                              //br.s				IL_0633
	IL_0697:            goto IL_0734;                                               //br				IL_0734
	IL_069c:                                                                        //ldc.i4.0
	IL_069d:                                                                        //ldloc.2
	IL_069e:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_06a3:                                                                        //ldloc				V_36
	IL_06a7:            Temp_59=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06ac:            Temp_60=V_2->M_x1(Temp_59);                                 //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_06b1:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_06b6:                                                                        //ldloc				V_36
	IL_06ba:            Temp_61=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06bf:            Temp_62=(Temp_60 == Temp_61);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_06c4:            Temp_63=gcnew Root::T_x130(false,Temp_62);                  //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_06c9:                                                                        //ldloc.s				V_5
	IL_06cb:            Temp_64=Temp_63->M_x1(V_5);                                 //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x129::M_x1(Reflector::CodeModel::IAssembly^)
	IL_06d0:            V_5=Temp_64;                                                //stloc.s				V_5
	IL_06d2:                                                                        //ldc.i4				0x8
	IL_06d7:            V_35=8;                                                     //stloc				V_35
	IL_06db:            /*goto IL_0633;*/goto IL_06e0;                              //br				IL_0633
	IL_06e0:            goto IL_0679;                                               //br.s				IL_0679
	IL_06e2:                                                                        //ldc.i4				0x1
	IL_06e7:            V_35=1;                                                     //stloc				V_35
	IL_06eb:            /*goto IL_0633;*/goto IL_06f0;                              //br				IL_0633
	IL_06f0:                                                                        //ldloc.3
	IL_06f1:            Temp_55=V_3->Translate;                                     //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_06f6:            if(!Temp_55)goto IL_0679;                                   //brfalse.s				IL_0679
	IL_06f8:                                                                        //ldc.i4				0x6
	IL_06fd:            V_35=6;                                                     //stloc				V_35
	IL_0701:            /*goto IL_0633;*/goto IL_0706;                              //br				IL_0633
	IL_0706:            goto IL_069c;                                               //br.s				IL_069c
	IL_0708:                                                                        //ldc.i4				0x3
	IL_070d:            V_35=3;                                                     //stloc				V_35
	IL_0711:            /*goto IL_0633;*/goto IL_0716;                              //br				IL_0633
	IL_0716:                                                                        //ldloc.s				V_5
	IL_0718:            Temp_57=V_5->Status;                                        //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_071d:            Temp_58=Temp_57->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_0722:            if(Temp_58!=0)goto IL_0734;                                 //brtrue.s				IL_0734
	IL_0724:                                                                        //ldc.i4				0x4
	IL_0729:            V_35=4;                                                     //stloc				V_35
	IL_072d:            /*goto IL_0633;*/goto IL_0732;                              //br				IL_0633
	IL_0732:            goto IL_06e2;                                               //br.s				IL_06e2
	IL_0734:                                                                        //ldc.i4				0x7
	IL_0739:            V_35=7;                                                     //stloc				V_35
	IL_073d:            /*goto IL_0633;*/goto IL_0742;                              //br				IL_0633
	IL_0742:            goto IL_0b52;                                               //leave				IL_0b52
	                    ;}
	                    catch(System::Exception^ Ex_074202){
	IL_0747:            V_7=Ex_074202;                                              //stloc.s				V_7
	IL_0749:                                                                        //ldarg.0
	IL_074a:                                                                        //ldloc.0
	IL_074b:                                                                        //ldloc.s				V_7
	IL_074d:                                                                        //ldloc.s				V_5
	IL_074f:            Temp_140=V_5->ToString();                                   //callvirt				System::String^ System::Object::ToString()
	IL_0754:                                                                        //ldloc.s				V_5
	IL_0756:            Temp_141=V_5->ToString();                                   //callvirt				System::String^ System::Object::ToString()
	IL_075b:            this->M_x1(V_0,V_7,Temp_140,Temp_141);                      //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,System::String^)
	IL_0760:            goto IL_0b52;                                               //leave				IL_0b52
	                    ;}
	IL_076002:          try{
	IL_0765:                                                                        //ldc.i4				0x2
	IL_076a:            V_35=2;                                                     //stloc				V_35
	IL_076e:            /*goto IL_0772;*/goto IL_0770;                              //br.s				IL_0772
	IL_0770:            goto IL_078b;                                               //br.s				IL_078b
	IL_0772:                                                                        //ldloc				V_35
	IL_0776:            switch(V_35){case 0:goto IL_07e1;case 1:goto IL_079e;case 2:goto IL_0770;case 3:goto IL_0804;};//switch				(IL_07e1,IL_079e,IL_0770,IL_0804)
	IL_078b:                                                                        //ldloc.3
	IL_078c:            Temp_8=V_3->Translate;                                      //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_0791:            if(!Temp_8)goto IL_07e3;                                    //brfalse.s				IL_07e3
	IL_0793:                                                                        //ldc.i4				0x1
	IL_0798:            V_35=1;                                                     //stloc				V_35
	IL_079c:            /*goto IL_0772;*/goto IL_079e;                              //br.s				IL_0772
	IL_079e:            goto IL_07a0;                                               //br.s				IL_07a0
	IL_07a0:                                                                        //ldc.i4.0
	IL_07a1:                                                                        //ldloc.2
	IL_07a2:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_07a7:                                                                        //ldloc				V_36
	IL_07ab:            Temp_2=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07b0:            Temp_3=V_2->M_x1(Temp_2);                                   //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_07b5:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_07ba:                                                                        //ldloc				V_36
	IL_07be:            Temp_4=a(L"\x5A2D\x422F\x4731\x5133",V_36);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07c3:            Temp_5=(Temp_3 == Temp_4);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_07c8:            Temp_6=gcnew Root::T_x130(false,Temp_5);                    //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_07cd:                                                                        //ldloc.s				V_11
	IL_07cf:            Temp_7=Temp_6->M_x1(V_11);                                  //callvirt				Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^)
	IL_07d4:            V_11=Temp_7;                                                //stloc.s				V_11
	IL_07d6:                                                                        //ldc.i4				0x0
	IL_07db:            V_35=0;                                                     //stloc				V_35
	IL_07df:            /*goto IL_0772;*/goto IL_07e1;                              //br.s				IL_0772
	IL_07e1:            goto IL_07e3;                                               //br.s				IL_07e3
	IL_07e3:                                                                        //ldloc.3
	IL_07e4:                                                                        //ldloc.0
	IL_07e5:                                                                        //ldloc.2
	IL_07e6:            Temp_1=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_07eb:            V_12=Temp_1;                                                //stloc.s				V_12
	IL_07ed:                                                                        //ldloc.s				V_12
	IL_07ef:                                                                        //ldloc.s				V_11
	IL_07f1:            V_12->WriteModule(V_11);                                    //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteModule(Reflector::CodeModel::IModule^)
	IL_07f6:                                                                        //ldc.i4				0x3
	IL_07fb:            V_35=3;                                                     //stloc				V_35
	IL_07ff:            /*goto IL_0772;*/goto IL_0804;                              //br				IL_0772
	IL_0804:            goto IL_09fe;                                               //leave				IL_09fe
	                    ;}
	                    catch(System::Exception^ Ex_080402){
	IL_0809:            V_13=Ex_080402;                                             //stloc.s				V_13
	IL_080b:                                                                        //ldarg.0
	IL_080c:                                                                        //ldloc.0
	IL_080d:                                                                        //ldloc.s				V_13
	IL_080f:                                                                        //ldloc.s				V_11
	IL_0811:            Temp_142=V_11->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0816:                                                                        //ldloc.s				V_11
	IL_0818:            Temp_143=V_11->Assembly;                                    //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_081d:            Temp_144=Temp_143->ToString();                              //callvirt				System::String^ System::Object::ToString()
	IL_0822:            this->M_x1(V_0,V_13,Temp_142,Temp_144);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,System::String^)
	IL_0827:            goto IL_09fe;                                               //leave				IL_09fe
	                    ;}
	IL_082702:          try{
	IL_082c:                                                                        //ldc.i4				0x3
	IL_0831:            V_35=3;                                                     //stloc				V_35
	IL_0835:            /*goto IL_0839;*/goto IL_0837;                              //br.s				IL_0839
	IL_0837:            goto IL_0852;                                               //br.s				IL_0852
	IL_0839:                                                                        //ldloc				V_35
	IL_083d:            switch(V_35){case 0:goto IL_08ed;case 1:goto IL_0865;case 2:goto IL_08a8;case 3:goto IL_0837;};//switch				(IL_08ed,IL_0865,IL_08a8,IL_0837)
	IL_0852:                                                                        //ldloc.3
	IL_0853:            Temp_83=V_3->Translate;                                     //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_0858:            if(!Temp_83)goto IL_08aa;                                   //brfalse.s				IL_08aa
	IL_085a:                                                                        //ldc.i4				0x1
	IL_085f:            V_35=1;                                                     //stloc				V_35
	IL_0863:            /*goto IL_0839;*/goto IL_0865;                              //br.s				IL_0839
	IL_0865:            goto IL_0867;                                               //br.s				IL_0867
	IL_0867:                                                                        //ldc.i4.1
	IL_0868:                                                                        //ldloc.2
	IL_0869:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_086e:                                                                        //ldloc				V_36
	IL_0872:            Temp_74=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0877:            Temp_75=V_2->M_x1(Temp_74);                                 //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_087c:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0881:                                                                        //ldloc				V_36
	IL_0885:            Temp_76=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_088a:            Temp_77=(Temp_75 == Temp_76);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_088f:            Temp_78=gcnew Root::T_x130(true,Temp_77);                   //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_0894:                                                                        //ldloc.s				V_32
	IL_0896:            Temp_79=Temp_78->M_x1(V_32);                                //callvirt				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_089b:            V_32=Temp_79;                                               //stloc.s				V_32
	IL_089d:                                                                        //ldc.i4				0x2
	IL_08a2:            V_35=2;                                                     //stloc				V_35
	IL_08a6:            /*goto IL_0839;*/goto IL_08a8;                              //br.s				IL_0839
	IL_08a8:            goto IL_08aa;                                               //br.s				IL_08aa
	IL_08aa:                                                                        //ldloc.2
	IL_08ab:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D"
	IL_08b0:                                                                        //ldloc				V_36
	IL_08b4:            Temp_80=a(L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08b9:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_08be:                                                                        //ldloc				V_36
	IL_08c2:            Temp_81=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08c7:            V_2->M_x1(Temp_80,Temp_81);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_08cc:                                                                        //ldloc.3
	IL_08cd:                                                                        //ldloc.0
	IL_08ce:                                                                        //ldloc.2
	IL_08cf:            Temp_82=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_08d4:            V_33=Temp_82;                                               //stloc.s				V_33
	IL_08d6:                                                                        //ldloc.s				V_33
	IL_08d8:                                                                        //ldloc.s				V_32
	IL_08da:            V_33->WriteEventDeclaration(V_32);                          //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteEventDeclaration(Reflector::CodeModel::IEventDeclaration^)
	IL_08df:                                                                        //ldc.i4				0x0
	IL_08e4:            V_35=0;                                                     //stloc				V_35
	IL_08e8:            /*goto IL_0839;*/goto IL_08ed;                              //br				IL_0839
	IL_08ed:            goto IL_0d09;                                               //leave				IL_0d09
	                    ;}
	                    catch(System::Exception^ Ex_08ED02){
	IL_08f2:            V_34=Ex_08ED02;                                             //stloc.s				V_34
	IL_08f4:                                                                        //ldarg.0
	IL_08f5:                                                                        //ldloc.0
	IL_08f6:                                                                        //ldloc.s				V_34
	IL_08f8:                                                                        //ldloc.s				V_32
	IL_08fa:            Temp_145=Root::T_x115::M_x5(safe_cast<Reflector::CodeModel::IEventReference^>(V_32));//call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::IEventReference^)
	IL_08ff:                                                                        //ldloc.s				V_32
	IL_0901:            Temp_146=safe_cast<Reflector::CodeModel::IMemberReference^>(V_32)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0906:            Temp_147=Root::T_x115::M_x1(Temp_146);                      //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_090b:            this->M_x1(V_0,V_34,Temp_145,Temp_147);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_0910:            goto IL_0d09;                                               //leave				IL_0d09
	                    ;}
	IL_091002:          try{
	IL_0915:                                                                        //ldc.i4				0x3
	IL_091a:            V_35=3;                                                     //stloc				V_35
	IL_091e:            /*goto IL_0922;*/goto IL_0920;                              //br.s				IL_0922
	IL_0920:            goto IL_093b;                                               //br.s				IL_093b
	IL_0922:                                                                        //ldloc				V_35
	IL_0926:            switch(V_35){case 0:goto IL_09d6;case 1:goto IL_094e;case 2:goto IL_0991;case 3:goto IL_0920;};//switch				(IL_09d6,IL_094e,IL_0991,IL_0920)
	IL_093b:                                                                        //ldloc.3
	IL_093c:            Temp_44=V_3->Translate;                                     //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_0941:            if(!Temp_44)goto IL_0993;                                   //brfalse.s				IL_0993
	IL_0943:                                                                        //ldc.i4				0x1
	IL_0948:            V_35=1;                                                     //stloc				V_35
	IL_094c:            /*goto IL_0922;*/goto IL_094e;                              //br.s				IL_0922
	IL_094e:            goto IL_0950;                                               //br.s				IL_0950
	IL_0950:                                                                        //ldc.i4.1
	IL_0951:                                                                        //ldloc.2
	IL_0952:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_0957:                                                                        //ldloc				V_36
	IL_095b:            Temp_35=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0960:            Temp_36=V_2->M_x1(Temp_35);                                 //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_0965:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_096a:                                                                        //ldloc				V_36
	IL_096e:            Temp_37=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0973:            Temp_38=(Temp_36 == Temp_37);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0978:            Temp_39=gcnew Root::T_x130(true,Temp_38);                   //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_097d:                                                                        //ldloc.s				V_26
	IL_097f:            Temp_40=Temp_39->M_x1(V_26);                                //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0984:            V_26=Temp_40;                                               //stloc.s				V_26
	IL_0986:                                                                        //ldc.i4				0x2
	IL_098b:            V_35=2;                                                     //stloc				V_35
	IL_098f:            /*goto IL_0922;*/goto IL_0991;                              //br.s				IL_0922
	IL_0991:            goto IL_0993;                                               //br.s				IL_0993
	IL_0993:                                                                        //ldloc.2
	IL_0994:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D"
	IL_0999:                                                                        //ldloc				V_36
	IL_099d:            Temp_41=a(L"\x7D2D\x582F\x5D31\x4333\x7B35\x5D37\x4E39\x543B\x513D\x243F\x0641\x2143\x2545\x2447\x2B49\x3E4B\x2F4D\x244F\x3B51\x3B53\x3855\x1A57\x3559\x385B\x275D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09a2:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_09a7:                                                                        //ldloc				V_36
	IL_09ab:            Temp_42=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09b0:            V_2->M_x1(Temp_41,Temp_42);                                 //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_09b5:                                                                        //ldloc.3
	IL_09b6:                                                                        //ldloc.0
	IL_09b7:                                                                        //ldloc.2
	IL_09b8:            Temp_43=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_09bd:            V_27=Temp_43;                                               //stloc.s				V_27
	IL_09bf:                                                                        //ldloc.s				V_27
	IL_09c1:                                                                        //ldloc.s				V_26
	IL_09c3:            V_27->WriteMethodDeclaration(V_26);                         //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteMethodDeclaration(Reflector::CodeModel::IMethodDeclaration^)
	IL_09c8:                                                                        //ldc.i4				0x0
	IL_09cd:            V_35=0;                                                     //stloc				V_35
	IL_09d1:            /*goto IL_0922;*/goto IL_09d6;                              //br				IL_0922
	IL_09d6:            goto IL_0b22;                                               //leave				IL_0b22
	                    ;}
	                    catch(System::Exception^ Ex_09D602){
	IL_09db:            V_28=Ex_09D602;                                             //stloc.s				V_28
	IL_09dd:                                                                        //ldarg.0
	IL_09de:                                                                        //ldloc.0
	IL_09df:                                                                        //ldloc.s				V_28
	IL_09e1:                                                                        //ldloc.s				V_26
	IL_09e3:            Temp_148=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(V_26));//call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_09e8:                                                                        //ldloc.s				V_26
	IL_09ea:            Temp_149=safe_cast<Reflector::CodeModel::IMemberReference^>(V_26)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_09ef:            Temp_150=Root::T_x115::M_x1(Temp_149);                      //call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_09f4:            this->M_x1(V_0,V_28,Temp_148,Temp_150);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_09f9:            goto IL_0b22;                                               //leave				IL_0b22
	                    ;}
	IL_09fe:                                                                        //ldloc.1
	IL_09ff:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_0a04:            V_17=dynamic_cast<Reflector::CodeModel::INamespace^>(V_1);  //stloc.s				V_17
	IL_0a06:                                                                        //ldc.i4				0x27
	IL_0a0b:            V_35=39;                                                    //stloc				V_35
	IL_0a0f:            /*goto IL_0019;*/goto IL_0a14;                              //br				IL_0019
	IL_0a14:                                                                        //ldloc.s				V_17
	IL_0a16:            if(V_17==nullptr)goto IL_0c3f;                              //brfalse				IL_0c3f
	IL_0a1b:                                                                        //ldc.i4				0x21
	IL_0a20:            V_35=33;                                                    //stloc				V_35
	IL_0a24:            /*goto IL_0019;*/goto IL_0a29;                              //br				IL_0019
	IL_0a29:            goto IL_05a3;                                               //br				IL_05a3
	IL_0A2901:          try{
	IL_0a2e:                                                                        //ldc.i4				0x1
	IL_0a33:            V_35=1;                                                     //stloc				V_35
	IL_0a37:            /*goto IL_0a3b;*/goto IL_0a39;                              //br.s				IL_0a3b
	IL_0a39:            goto IL_0a54;                                               //br.s				IL_0a54
	IL_0a3b:                                                                        //ldloc				V_35
	IL_0a3f:            switch(V_35){case 0:goto IL_0acd;case 1:goto IL_0a39;case 2:goto IL_0aaa;case 3:goto IL_0a67;};//switch				(IL_0acd,IL_0a39,IL_0aaa,IL_0a67)
	IL_0a54:                                                                        //ldloc.3
	IL_0a55:            Temp_73=V_3->Translate;                                     //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_0a5a:            if(!Temp_73)goto IL_0aac;                                   //brfalse.s				IL_0aac
	IL_0a5c:                                                                        //ldc.i4				0x3
	IL_0a61:            V_35=3;                                                     //stloc				V_35
	IL_0a65:            /*goto IL_0a3b;*/goto IL_0a67;                              //br.s				IL_0a3b
	IL_0a67:            goto IL_0a69;                                               //br.s				IL_0a69
	IL_0a69:                                                                        //ldc.i4.0
	IL_0a6a:                                                                        //ldloc.2
	IL_0a6b:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_0a70:                                                                        //ldloc				V_36
	IL_0a74:            Temp_67=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a79:            Temp_68=V_2->M_x1(Temp_67);                                 //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_0a7e:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0a83:                                                                        //ldloc				V_36
	IL_0a87:            Temp_69=a(L"\x5A2D\x422F\x4731\x5133",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a8c:            Temp_70=(Temp_68 == Temp_69);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0a91:            Temp_71=gcnew Root::T_x130(false,Temp_70);                  //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_0a96:                                                                        //ldloc.s				V_20
	IL_0a98:            Temp_72=Temp_71->M_x1(V_20);                                //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0a9d:            V_20=Temp_72;                                               //stloc.s				V_20
	IL_0a9f:                                                                        //ldc.i4				0x2
	IL_0aa4:            V_35=2;                                                     //stloc				V_35
	IL_0aa8:            /*goto IL_0a3b;*/goto IL_0aaa;                              //br.s				IL_0a3b
	IL_0aaa:            goto IL_0aac;                                               //br.s				IL_0aac
	IL_0aac:                                                                        //ldloc.3
	IL_0aad:                                                                        //ldloc.0
	IL_0aae:                                                                        //ldloc.2
	IL_0aaf:            Temp_66=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_0ab4:            V_21=Temp_66;                                               //stloc.s				V_21
	IL_0ab6:                                                                        //ldloc.s				V_21
	IL_0ab8:                                                                        //ldloc.s				V_20
	IL_0aba:            V_21->WriteTypeDeclaration(V_20);                           //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteTypeDeclaration(Reflector::CodeModel::ITypeDeclaration^)
	IL_0abf:                                                                        //ldc.i4				0x0
	IL_0ac4:            V_35=0;                                                     //stloc				V_35
	IL_0ac8:            /*goto IL_0a3b;*/goto IL_0acd;                              //br				IL_0a3b
	IL_0acd:            goto IL_04f6;                                               //leave				IL_04f6
	                    ;}
	                    catch(System::Exception^ Ex_0ACD02){
	IL_0ad2:            V_22=Ex_0ACD02;                                             //stloc.s				V_22
	IL_0ad4:                                                                        //ldarg.0
	IL_0ad5:                                                                        //ldloc.0
	IL_0ad6:                                                                        //ldloc.s				V_22
	IL_0ad8:                                                                        //ldloc.s				V_20
	IL_0ada:            Temp_151=Root::T_x115::M_x8(safe_cast<Reflector::CodeModel::ITypeReference^>(V_20));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0adf:                                                                        //ldloc.s				V_20
	IL_0ae1:            Temp_152=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_20));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_0ae6:            Temp_153=Temp_152->ToString();                              //callvirt				System::String^ System::Object::ToString()
	IL_0aeb:            this->M_x1(V_0,V_22,Temp_151,Temp_153);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,System::String^)
	IL_0af0:            goto IL_04f6;                                               //leave				IL_04f6
	                    ;}
	IL_0af5:                                                                        //ldloc.1
	IL_0af6:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_0afb:            V_14=dynamic_cast<Reflector::CodeModel::IModuleReference^>(V_1);//stloc.s				V_14
	IL_0afd:                                                                        //ldc.i4				0x1e
	IL_0b02:            V_35=30;                                                    //stloc				V_35
	IL_0b06:            /*goto IL_0019;*/goto IL_0b0b;                              //br				IL_0019
	IL_0b0b:                                                                        //ldloc.s				V_14
	IL_0b0d:            if(V_14==nullptr)goto IL_09fe;                              //brfalse				IL_09fe
	IL_0b12:                                                                        //ldc.i4				0x1b
	IL_0b17:            V_35=27;                                                    //stloc				V_35
	IL_0b1b:            /*goto IL_0019;*/goto IL_0b20;                              //br				IL_0019
	IL_0b20:            /*goto IL_0b7f;*/goto IL_0B7A01;                            //br.s				IL_0b7f
	IL_0b22:                                                                        //ldloc.1
	IL_0b23:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_0b28:            V_29=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(V_1);//stloc.s				V_29
	IL_0b2a:                                                                        //ldc.i4				0x24
	IL_0b2f:            V_35=36;                                                    //stloc				V_35
	IL_0b33:            /*goto IL_0019;*/goto IL_0b38;                              //br				IL_0019
	IL_0b38:                                                                        //ldloc.s				V_29
	IL_0b3a:            if(V_29==nullptr)goto IL_0554;                              //brfalse				IL_0554
	IL_0b3f:                                                                        //ldc.i4				0x19
	IL_0b44:            V_35=25;                                                    //stloc				V_35
	IL_0b48:            /*goto IL_0019;*/goto IL_0b4d;                              //br				IL_0019
	IL_0b4d:            /*goto IL_02b2;*/goto IL_02AD02;                            //br				IL_02b2
	IL_0b52:                                                                        //ldloc.1
	IL_0b53:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_0b58:            V_11=dynamic_cast<Reflector::CodeModel::IModule^>(V_1);     //stloc.s				V_11
	IL_0b5a:                                                                        //ldc.i4				0xd
	IL_0b5f:            V_35=13;                                                    //stloc				V_35
	IL_0b63:            /*goto IL_0019;*/goto IL_0b68;                              //br				IL_0019
	IL_0b68:                                                                        //ldloc.s				V_11
	IL_0b6a:            if(V_11==nullptr)goto IL_0af5;                              //brfalse.s				IL_0af5
	IL_0b6c:                                                                        //ldc.i4				0x2
	IL_0b71:            V_35=2;                                                     //stloc				V_35
	IL_0b75:            /*goto IL_0019;*/goto IL_0b7a;                              //br				IL_0019
	IL_0b7a:            /*goto IL_0765;*/goto IL_076002;                            //br				IL_0765
	IL_0B7A01:          try{
	IL_0b7f:                                                                        //ldc.i4				0x3
	IL_0b84:            V_35=3;                                                     //stloc				V_35
	IL_0b88:            /*goto IL_0b8c;*/goto IL_0b8a;                              //br.s				IL_0b8c
	IL_0b8a:            goto IL_0ba5;                                               //br.s				IL_0ba5
	IL_0b8c:                                                                        //ldloc				V_35
	IL_0b90:            switch(V_35){case 0:goto IL_0c1e;case 1:goto IL_0bfb;case 2:goto IL_0bb8;case 3:goto IL_0b8a;};//switch				(IL_0c1e,IL_0bfb,IL_0bb8,IL_0b8a)
	IL_0ba5:                                                                        //ldloc.3
	IL_0ba6:            Temp_105=V_3->Translate;                                    //callvirt				System::Boolean Reflector::CodeModel::ILanguage::get_Translate()
	IL_0bab:            if(!Temp_105)goto IL_0bfd;                                  //brfalse.s				IL_0bfd
	IL_0bad:                                                                        //ldc.i4				0x2
	IL_0bb2:            V_35=2;                                                     //stloc				V_35
	IL_0bb6:            /*goto IL_0b8c;*/goto IL_0bb8;                              //br.s				IL_0b8c
	IL_0bb8:            goto IL_0bba;                                               //br.s				IL_0bba
	IL_0bba:                                                                        //ldc.i4.0
	IL_0bbb:                                                                        //ldloc.2
	IL_0bbc:                                                                        //ldstr				L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D"
	IL_0bc1:                                                                        //ldloc				V_36
	IL_0bc5:            Temp_99=a(L"\x7D2D\x582F\x5D31\x4333\x7235\x5737\x5939\x493B\x533D\x253F\x2C41\x3043\x2745\x3C47\x2349\x234B\x204D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bca:            Temp_100=V_2->M_x1(Temp_99);                                //callvirt				System::String^ Root::T_x119::M_x1(System::String^)
	IL_0bcf:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_0bd4:                                                                        //ldloc				V_36
	IL_0bd8:            Temp_101=a(L"\x5A2D\x422F\x4731\x5133",V_36);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bdd:            Temp_102=(Temp_100 == Temp_101);                            //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0be2:            Temp_103=gcnew Root::T_x130(false,Temp_102);                //newobj				void Root::T_x130::.ctor(System::Boolean,System::Boolean)
	IL_0be7:                                                                        //ldloc.s				V_14
	IL_0be9:            Temp_104=Temp_103->M_x2(V_14);                              //callvirt				Reflector::CodeModel::IModuleReference^ Root::T_x129::M_x2(Reflector::CodeModel::IModuleReference^)
	IL_0bee:            V_14=Temp_104;                                              //stloc.s				V_14
	IL_0bf0:                                                                        //ldc.i4				0x1
	IL_0bf5:            V_35=1;                                                     //stloc				V_35
	IL_0bf9:            /*goto IL_0b8c;*/goto IL_0bfb;                              //br.s				IL_0b8c
	IL_0bfb:            goto IL_0bfd;                                               //br.s				IL_0bfd
	IL_0bfd:                                                                        //ldloc.3
	IL_0bfe:                                                                        //ldloc.0
	IL_0bff:                                                                        //ldloc.2
	IL_0c00:            Temp_98=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_0c05:            V_15=Temp_98;                                               //stloc.s				V_15
	IL_0c07:                                                                        //ldloc.s				V_15
	IL_0c09:                                                                        //ldloc.s				V_14
	IL_0c0b:            V_15->WriteModuleReference(V_14);                           //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteModuleReference(Reflector::CodeModel::IModuleReference^)
	IL_0c10:                                                                        //ldc.i4				0x0
	IL_0c15:            V_35=0;                                                     //stloc				V_35
	IL_0c19:            /*goto IL_0b8c;*/goto IL_0c1e;                              //br				IL_0b8c
	IL_0c1e:            goto IL_09fe;                                               //leave				IL_09fe
	                    ;}
	                    catch(System::Exception^ Ex_0C1E02){
	IL_0c23:            V_16=Ex_0C1E02;                                             //stloc.s				V_16
	IL_0c25:                                                                        //ldarg.0
	IL_0c26:                                                                        //ldloc.0
	IL_0c27:                                                                        //ldloc.s				V_16
	IL_0c29:                                                                        //ldloc.s				V_14
	IL_0c2b:            Temp_154=V_14->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0c30:            Temp_155=System::String::Empty;                             //ldsfld				System::String^ System::String Empty
	IL_0c35:            this->M_x1(V_0,V_16,Temp_154,Temp_155);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,System::String^)
	IL_0c3a:            goto IL_09fe;                                               //leave				IL_09fe
	                    ;}
	IL_0c3f:                                                                        //ldloc.1
	IL_0c40:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0c45:            V_20=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(V_1);//stloc.s				V_20
	IL_0c47:                                                                        //ldc.i4				0x10
	IL_0c4c:            V_35=16;                                                    //stloc				V_35
	IL_0c50:            /*goto IL_0019;*/goto IL_0c55;                              //br				IL_0019
	IL_0c55:                                                                        //ldloc.s				V_20
	IL_0c57:            if(V_20==nullptr)goto IL_04f6;                              //brfalse				IL_04f6
	IL_0c5c:                                                                        //ldc.i4				0x4
	IL_0c61:            V_35=4;                                                     //stloc				V_35
	IL_0c65:            /*goto IL_0019;*/goto IL_0c6a;                              //br				IL_0019
	IL_0c6a:            goto IL_01c9;                                               //br				IL_01c9
	IL_0c6f:                                                                        //ldc.i4				0x23
	IL_0c74:            V_35=35;                                                    //stloc				V_35
	IL_0c78:            /*goto IL_0019;*/goto IL_0c7d;                              //br				IL_0019
	IL_0c7d:                                                                        //ldarg.0
	IL_0c7e:                                                                        //ldarg.0
	IL_0c7f:            Temp_110=this->F_x10;                                       //ldfld				System::Boolean Root::T_x83 F_x10
	IL_0c84:            Temp_159=this;if(Temp_110)goto IL_0d31;                     //brtrue				IL_0d31
	IL_0c89:            Temp_160=Temp_159;goto IL_0d38;                             //br				IL_0d38
	IL_0c8e:                                                                        //ldloc.0
	IL_0c8f:                                                                        //ldstr				L"\x7A2D\x582F\x5B31\x4733\x1635\x5637\x5B39\x513B\x5B3D\x333F\x3241\x2543\x2545\x2D47\x6A49\x244B\x2F4D\x234F\x7251\x2053\x3955\x3757\x7A59\x315B\x3F5D\x0E5F\x1B61\x4463\x0B65\x0D67\x0769\x0E6B\x0B6D\x026F\x0171\x5473\x0275\x1777\x5A79\x0E7B\x1B7D\xEE7F\xE681\xE183\xF485\xA687"
	IL_0c94:                                                                        //ldloc				V_36
	IL_0c98:            Temp_53=a(L"\x7A2D\x582F\x5B31\x4733\x1635\x5637\x5B39\x513B\x5B3D\x333F\x3241\x2543\x2545\x2D47\x6A49\x244B\x2F4D\x234F\x7251\x2053\x3955\x3757\x7A59\x315B\x3F5D\x0E5F\x1B61\x4463\x0B65\x0D67\x0769\x0E6B\x0B6D\x026F\x0171\x5473\x0275\x1777\x5A79\x0E7B\x1B7D\xEE7F\xE681\xE183\xF485\xA687",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c9d:            V_0->WriteDeclaration(Temp_53);                             //callvirt				void Reflector::CodeModel::IFormatter::WriteDeclaration(System::String^)
	IL_0ca2:                                                                        //ldloc.0
	IL_0ca3:            V_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_0ca8:                                                                        //ldloc.0
	IL_0ca9:            V_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_0cae:                                                                        //ldloc.0
	IL_0caf:                                                                        //ldstr				L"\x7E2D\x5C2F\x5731\x5533\x4535\x5D37\x1A39\x4E3B\x5B3D\x2F3F\x3241\x2143\x2845\x6847\x3E49\x244B\x274D\x234F\x7251\x2353\x3F55\x3657\x3E59\x335B\x295D\x405F\x1661\x0B63\x4665\x1B67\x0269\x036B\x196D\x506F\x0671\x1C73\x1375\x5877\x1979\x137B\x107D\xF47F\xE781\xEA83\xF285\xA687"
	IL_0cb4:                                                                        //ldloc				V_36
	IL_0cb8:            Temp_54=a(L"\x7E2D\x5C2F\x5731\x5533\x4535\x5D37\x1A39\x4E3B\x5B3D\x2F3F\x3241\x2143\x2845\x6847\x3E49\x244B\x274D\x234F\x7251\x2353\x3F55\x3657\x3E59\x335B\x295D\x405F\x1661\x0B63\x4665\x1B67\x0269\x036B\x196D\x506F\x0671\x1C73\x1375\x5877\x1979\x137B\x107D\xF47F\xE781\xEA83\xF285\xA687",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cbd:            V_0->Write(Temp_54);                                        //callvirt				void Reflector::CodeModel::IFormatter::Write(System::String^)
	IL_0cc2:                                                                        //ldc.i4				0x18
	IL_0cc7:            V_35=24;                                                    //stloc				V_35
	IL_0ccb:            /*goto IL_0019;*/goto IL_0cd0;                              //br				IL_0019
	IL_0cd0:            goto IL_0c3f;                                               //br				IL_0c3f
	IL_0CD001:          try{
	IL_0cd5:                                                                        //ldloc.3
	IL_0cd6:                                                                        //ldloc.0
	IL_0cd7:                                                                        //ldloc.2
	IL_0cd8:            Temp_107=V_3->GetWriter(V_0,safe_cast<Reflector::CodeModel::ILanguageWriterConfiguration^>(V_2));//callvirt				Reflector::CodeModel::ILanguageWriter^ Reflector::CodeModel::ILanguage::GetWriter(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguageWriterConfiguration^)
	IL_0cdd:            V_18=Temp_107;                                              //stloc.s				V_18
	IL_0cdf:                                                                        //ldloc.s				V_18
	IL_0ce1:                                                                        //ldloc.s				V_17
	IL_0ce3:            V_18->WriteNamespace(V_17);                                 //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteNamespace(Reflector::CodeModel::INamespace^)
	IL_0ce8:            goto IL_0c3f;                                               //leave				IL_0c3f
	                    ;}
	                    catch(System::Exception^ Ex_0CE802){
	IL_0ced:            V_19=Ex_0CE802;                                             //stloc.s				V_19
	IL_0cef:                                                                        //ldarg.0
	IL_0cf0:                                                                        //ldloc.0
	IL_0cf1:                                                                        //ldloc.s				V_19
	IL_0cf3:                                                                        //ldloc.s				V_17
	IL_0cf5:            Temp_156=V_17->Name;                                        //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_0cfa:            Temp_157=System::String::Empty;                             //ldsfld				System::String^ System::String Empty
	IL_0cff:            this->M_x1(V_0,V_19,Temp_156,Temp_157);                     //call				void Root::T_x83::M_x1(Reflector::CodeModel::IFormatter^,System::Exception^,System::String^,System::String^)
	IL_0d04:            goto IL_0c3f;                                               //leave				IL_0c3f
	                    ;}
	IL_0d09:                                                                        //ldarg.0
	IL_0d0a:            Temp_84=this->F_x2;                                         //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x83 F_x2
	IL_0d0f:                                                                        //ldloc.s				V_4
	IL_0d11:            Temp_84->Resolver=V_4;                                      //callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_0d16:                                                                        //ldarg.0
	IL_0d17:            Temp_85=this->F_x11;                                        //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0d1c:                                                                        //ldloc.0
	IL_0d1d:            Temp_85->M_x1(V_0);                                         //callvirt				void Root::T_x75::M_x1(Reflector::CodeModel::IFormatter^)
	IL_0d22:                                                                        //ldc.i4				0x1a
	IL_0d27:            V_35=26;                                                    //stloc				V_35
	IL_0d2b:            /*goto IL_0019;*/goto IL_0d30;                              //br				IL_0019
	IL_0d30:            return;                                                     //ret
	IL_0d31:            Temp_111=gcnew Root::T_x80();                               //newobj				void Root::T_x80::.ctor()
	IL_0d36:            Temp_162=Temp_159;Temp_161=Temp_111;goto IL_0daa;           //br.s				IL_0daa
	IL_0d38:                                                                        //ldarg.0
	IL_0d39:            Temp_119=this->F_x12;                                       //ldfld				Reflector::ICommandBarManager^ Root::T_x83 F_x12
	IL_0d3e:            Temp_120=gcnew Root::T_x16(Temp_119);                       //newobj				void Root::T_x16::.ctor(Reflector::ICommandBarManager^)
	IL_0d43:            Temp_162=Temp_160;Temp_161=Temp_120;goto IL_0daa;           //br.s				IL_0daa
	IL_0d45:                                                                        //ldc.i4.4
	IL_0d46:                                                                        //dup
	IL_0d47:                                                                        //dup
	IL_0d48:                                                                        //ldc.i4.2
	IL_0d49:                                                                        //sub
	IL_0d4a:                                                                        //blt				IL_0d46
	IL_0d4f:                                                                        //pop
	IL_0d50:                                                                        //ldc.i4				0x1
	IL_0d55:            V_35=1;                                                     //stloc				V_35
	IL_0d59:            /*goto IL_0019;*/goto IL_0d5e;                              //br				IL_0019
	IL_0d5e:                                                                        //ldarg.0
	IL_0d5f:            Temp_0=this->F_x11;                                         //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0d64:            if(Temp_0==nullptr)goto IL_0e83;                            //brfalse				IL_0e83
	IL_0d69:                                                                        //ldc.i4				0x16
	IL_0d6e:            V_35=22;                                                    //stloc				V_35
	IL_0d72:            /*goto IL_0019;*/goto IL_0d77;                              //br				IL_0019
	IL_0d77:            goto IL_0584;                                               //br				IL_0584
	IL_0d7c:                                                                        //ldc.i4				0x1c
	IL_0d81:            V_35=28;                                                    //stloc				V_35
	IL_0d85:            /*goto IL_0019;*/goto IL_0d8a;                              //br				IL_0019
	IL_0d8a:                                                                        //ldarg.0
	IL_0d8b:                                                                        //ldloc.s				V_17
	IL_0d8d:            Temp_106=this->M_x1(V_17);                                  //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::INamespace^)
	IL_0d92:            /*if(!Temp_106)goto IL_0cd5;*/if(Temp_106)goto IL_0CD001;   //brfalse				IL_0cd5
	IL_0d97:                                                                        //ldc.i4				0x8
	IL_0d9c:            V_35=8;                                                     //stloc				V_35
	IL_0da0:            /*goto IL_0019;*/goto IL_0da5;                              //br				IL_0019
	IL_0da5:            goto IL_0c8e;                                               //br				IL_0c8e
	IL_0daa:            Temp_162->F_x11=safe_cast<Root::T_x75^>(Temp_161);/*warning ! semantic stack doesn't empty at joint !;*///stfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0daf:                                                                        //ldarg.0
	IL_0db0:            Temp_112=this->F_x11;                                       //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0db5:                                                                        //ldc.i4.1
	IL_0db6:            Temp_112->M_x2(true);                                       //callvirt				void Root::T_x75::M_x2(System::Boolean)
	IL_0dbb:                                                                        //ldarg.0
	IL_0dbc:            Temp_113=this->F_x11;                                       //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0dc1:                                                                        //ldarg.0
	IL_0dc2:            Temp_114=this->Font;                                        //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0dc7:            Temp_113->Font=Temp_114;                                    //callvirt				void Root::T_x75::set_Font(System::Drawing::Font^)
	IL_0dcc:                                                                        //ldarg.0
	IL_0dcd:            Temp_115=this->F_x11;                                       //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0dd2:                                                                        //ldarg.0
	IL_0dd3:                                                                        //ldftn				void Root::T_x83::M_x1(System::Object^,Root::T_x124^)
	IL_0dd9:            Temp_116=gcnew Root::T_x125(this,&Root::T_x83::M_x1);       //newobj				void Root::T_x125::.ctor(System::Object^,System::IntPtr)
	IL_0dde:            Temp_115->M_x1(Temp_116);                                   //callvirt				void Root::T_x75::M_x1(Root::T_x125^)
	IL_0de3:                                                                        //ldarg.0
	IL_0de4:            Temp_117=this->Controls;                                    //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0de9:                                                                        //ldarg.0
	IL_0dea:            Temp_118=this->F_x11;                                       //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0def:                                                                        //castclass				System::Windows::Forms::Control
	IL_0df4:            Temp_117->Add(safe_cast<System::Windows::Forms::Control^>(Temp_118));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0df9:                                                                        //ldc.i4				0x17
	IL_0dfe:            V_35=23;                                                    //stloc				V_35
	IL_0e02:            /*goto IL_0019;*/goto IL_0e07;                              //br				IL_0019
	IL_0e07:            goto IL_03a0;                                               //br				IL_03a0
	IL_0e0c:                                                                        //ldloc.1
	IL_0e0d:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_0e12:            V_26=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(V_1);//stloc.s				V_26
	IL_0e14:                                                                        //ldc.i4				0xf
	IL_0e19:            V_35=15;                                                    //stloc				V_35
	IL_0e1d:            /*goto IL_0019;*/goto IL_0e22;                              //br				IL_0019
	IL_0e22:                                                                        //ldloc.s				V_26
	IL_0e24:            if(V_26==nullptr)goto IL_0b22;                              //brfalse				IL_0b22
	IL_0e29:                                                                        //ldc.i4				0x6
	IL_0e2e:            V_35=6;                                                     //stloc				V_35
	IL_0e32:            /*goto IL_0019;*/goto IL_0e37;                              //br				IL_0019
	IL_0e37:            /*goto IL_0915;*/goto IL_091002;                            //br				IL_0915
	IL_0e3c:                                                                        //ldloc.0
	IL_0e3d:                                                                        //ldstr				L"\x7A2D\x582F\x5B31\x4733\x1635\x4C37\x4339\x4C3B\x5B3D\x603F\x2A41\x2543\x3545\x6847\x3E49\x234B\x214D\x704F\x3F51\x3553\x3855\x2157\x7A59\x315B\x3B5D\x0D5F\x0061\x0163\x1465\x1B67\x4A69\x186B\x016D\x506F\x0071\x1173\x1875\x1C77\x1F79\x0E7B\x507D"
	IL_0e42:                                                                        //ldloc				V_36
	IL_0e46:            Temp_108=a(L"\x7A2D\x582F\x5B31\x4733\x1635\x4C37\x4339\x4C3B\x5B3D\x603F\x2A41\x2543\x3545\x6847\x3E49\x234B\x214D\x704F\x3F51\x3553\x3855\x2157\x7A59\x315B\x3B5D\x0D5F\x0061\x0163\x1465\x1B67\x4A69\x186B\x016D\x506F\x0071\x1173\x1875\x1C77\x1F79\x0E7B\x507D",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e4b:            V_0->WriteDeclaration(Temp_108);                            //callvirt				void Reflector::CodeModel::IFormatter::WriteDeclaration(System::String^)
	IL_0e50:                                                                        //ldloc.0
	IL_0e51:            V_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_0e56:                                                                        //ldloc.0
	IL_0e57:            V_0->WriteLine();                                           //callvirt				void Reflector::CodeModel::IFormatter::WriteLine()
	IL_0e5c:                                                                        //ldloc.0
	IL_0e5d:                                                                        //ldstr				L"\x7E2D\x5C2F\x5731\x5533\x4535\x5D37\x1A39\x4E3B\x5B3D\x2F3F\x3241\x2143\x2845\x6847\x3E49\x244B\x274D\x234F\x7251\x2353\x3F55\x3657\x3E59\x335B\x295D\x405F\x1661\x0B63\x4665\x1B67\x0269\x036B\x196D\x506F\x0671\x1C73\x1375\x5877\x1979\x137B\x107D\xF47F\xE781\xEA83\xF285\xA687"
	IL_0e62:                                                                        //ldloc				V_36
	IL_0e66:            Temp_109=a(L"\x7E2D\x5C2F\x5731\x5533\x4535\x5D37\x1A39\x4E3B\x5B3D\x2F3F\x3241\x2143\x2845\x6847\x3E49\x244B\x274D\x234F\x7251\x2353\x3F55\x3657\x3E59\x335B\x295D\x405F\x1661\x0B63\x4665\x1B67\x0269\x036B\x196D\x506F\x0671\x1C73\x1375\x5877\x1979\x137B\x107D\xF47F\xE781\xEA83\xF285\xA687",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e6b:            V_0->Write(Temp_109);                                       //callvirt				void Reflector::CodeModel::IFormatter::Write(System::String^)
	IL_0e70:                                                                        //ldc.i4				0x3
	IL_0e75:            V_35=3;                                                     //stloc				V_35
	IL_0e79:            /*goto IL_0019;*/goto IL_0e7e;                              //br				IL_0019
	IL_0e7e:            goto IL_04f6;                                               //br				IL_04f6
	IL_0e83:            return;                                                     //ret

}
inline void Root::T_x83::M_x1(System::Drawing::Font^ A_0)
//System::Windows::Forms::Control^::set_Font by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x75^ Temp_0 = nullptr;
	Root::T_x75^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0058;case 1:goto IL_003f;case 2:goto IL_002c;};//switch				(IL_0058,IL_003f,IL_002c)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            System::Windows::Forms::Control::Font=A_0;                  //call				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0021:                                                                        //ldc.i4				0x2
	IL_0026:            V_0=2;                                                      //stloc				V_0
	IL_002a:            /*goto IL_0002;*/goto IL_002c;                              //br.s				IL_0002
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_1=this->F_x11;                                         //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0032:            if(Temp_1==nullptr)goto IL_005a;                            //brfalse.s				IL_005a
	IL_0034:                                                                        //ldc.i4				0x1
	IL_0039:            V_0=1;                                                      //stloc				V_0
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_0=this->F_x11;                                         //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_0047:                                                                        //ldarg.1
	IL_0048:            Temp_0->Font=A_0;                                           //callvirt				void Root::T_x75::set_Font(System::Drawing::Font^)
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_0=0;                                                      //stloc				V_0
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_005a;                                               //br.s				IL_005a
	IL_005a:            return;                                                     //ret

}
inline void Root::T_x83::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnParentChanged by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::OnParentChanged(A_0);      //call				void System::Windows::Forms::Control::OnParentChanged(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            this->M_x1(false);                                          //call				void Root::T_x83::M_x1(System::Boolean)
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x83::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->M_x1(true);                                           //call				void Root::T_x83::M_x1(System::Boolean)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x83::M_x1(System::Object^ A_0,Root::T_x124^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IAssemblyBrowser^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x83 F_x1
	IL_0006:                                                                        //ldarg.2
	IL_0007:            Temp_1=A_1->M_x1();                                         //callvirt				System::Object^ Root::T_x124::M_x1()
	IL_000c:            Temp_0->ActiveItem=Temp_1;                                  //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_0011:            return;                                                     //ret

}
inline Reflector::CodeModel::ILanguage^ Root::T_x83::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ILanguage^ Temp_0 = nullptr;
	Reflector::ILanguageManager^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_2 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				Reflector::CodeModel::ILanguage^ Root::T_x83 F_x5
	IL_0006:            if(Temp_0==nullptr)goto IL_0011;                            //brfalse.s				IL_0011
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_3=this->F_x5;                                          //ldfld				Reflector::CodeModel::ILanguage^ Root::T_x83 F_x5
	IL_0010:            return Temp_3;                                              //ret
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_1=this->F_x8;                                          //ldfld				Reflector::ILanguageManager^ Root::T_x83 F_x8
	IL_0017:            Temp_2=Temp_1->ActiveLanguage;                              //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageManager::get_ActiveLanguage()
	IL_001c:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x83::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x15;                                         //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x83 F_x15
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x83::M_x2(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::Hashtable^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	System::Object^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Object^ Temp_14 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_15 = nullptr;
	Reflector::CodeModel::IType^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Boolean Temp_19 = false;
	Reflector::CodeModel::IMethodReference^ Temp_20 = nullptr;
	Reflector::CodeModel::IType^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Boolean Temp_24 = false;
	Reflector::CodeModel::IMethodReference^ Temp_25 = nullptr;
	Reflector::CodeModel::IType^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	Reflector::CodeModel::IMethodReference^ Temp_30 = nullptr;
	Reflector::CodeModel::IType^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::Boolean Temp_34 = false;
	Reflector::CodeModel::IMethodReference^ Temp_35 = nullptr;
	Reflector::CodeModel::IType^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::Boolean Temp_39 = false;
	Reflector::CodeModel::IMethodReference^ Temp_40 = nullptr;
	Reflector::CodeModel::IType^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	System::Collections::Hashtable^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	System::String^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	System::String^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::String^ Temp_68 = nullptr;
	System::String^ Temp_69 = nullptr;
	System::String^ Temp_70 = nullptr;
	System::String^ Temp_71 = nullptr;
	System::String^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::String^ Temp_74 = nullptr;
	System::String^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::String^ Temp_77 = nullptr;
	System::String^ Temp_78 = nullptr;
	System::String^ Temp_79 = nullptr;
	System::String^ Temp_80 = nullptr;
	System::String^ Temp_81 = nullptr;
	System::String^ Temp_82 = nullptr;
	System::String^ Temp_83 = nullptr;
	System::String^ Temp_84 = nullptr;
	System::String^ Temp_85 = nullptr;
	System::String^ Temp_86 = nullptr;
	System::String^ Temp_87 = nullptr;
	System::String^ Temp_88 = nullptr;
	System::String^ Temp_89 = nullptr;
	System::String^ Temp_90 = nullptr;
	System::String^ Temp_91 = nullptr;
	System::String^ Temp_92 = nullptr;
	System::String^ Temp_93 = nullptr;
	System::String^ Temp_94 = nullptr;
	System::String^ Temp_95 = nullptr;
	System::String^ Temp_96 = nullptr;
	System::String^ Temp_97 = nullptr;
	System::String^ Temp_98 = nullptr;
	System::String^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	System::String^ Temp_101 = nullptr;
	System::String^ Temp_102 = nullptr;
	System::String^ Temp_103 = nullptr;
	System::String^ Temp_104 = nullptr;
	System::String^ Temp_105 = nullptr;
	System::String^ Temp_106 = nullptr;
	System::String^ Temp_107 = nullptr;
	System::String^ Temp_108 = nullptr;
	System::String^ Temp_109 = nullptr;
	System::String^ Temp_110 = nullptr;
	System::String^ Temp_111 = nullptr;
	System::String^ Temp_112 = nullptr;
	System::String^ Temp_113 = nullptr;
	System::String^ Temp_114 = nullptr;
	System::String^ Temp_115 = nullptr;
	System::String^ Temp_116 = nullptr;
	System::String^ Temp_117 = nullptr;
	System::String^ Temp_118 = nullptr;
	System::String^ Temp_119 = nullptr;
	System::String^ Temp_120 = nullptr;
	System::String^ Temp_121 = nullptr;
	System::String^ Temp_122 = nullptr;
	System::String^ Temp_123 = nullptr;
	System::String^ Temp_124 = nullptr;
	System::String^ Temp_125 = nullptr;
	System::String^ Temp_126 = nullptr;
	System::String^ Temp_127 = nullptr;
	System::String^ Temp_128 = nullptr;
	System::String^ Temp_129 = nullptr;
	System::String^ Temp_130 = nullptr;
	System::String^ Temp_131 = nullptr;
	System::String^ Temp_132 = nullptr;
	System::String^ Temp_133 = nullptr;
	System::String^ Temp_134 = nullptr;
	System::String^ Temp_135 = nullptr;
	System::String^ Temp_136 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_137 = nullptr;
	Reflector::CodeModel::IType^ Temp_138 = nullptr;
	System::String^ Temp_139 = nullptr;
	System::String^ Temp_140 = nullptr;
	System::Boolean Temp_141 = false;
	System::Boolean Temp_142 = false;
	System::Object^ Temp_143 = nullptr;
	System::Collections::Hashtable^ Temp_144 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_145 = nullptr;
	System::Collections::IEnumerator^ Temp_146 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_147 = nullptr;
	System::Collections::IEnumerator^ Temp_148 = nullptr;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ V_1 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ V_2 = nullptr;
	System::Boolean V_3 = false;
	System::Object^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_8=12;                                                     //stloc				V_8
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_7=0;                                                      //stloc				V_7
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0053;                                               //br.s				IL_0053
	IL_0016:                                                                        //ldloc				V_7
	IL_001a:            switch(V_7){case 0:goto IL_0014;case 1:goto IL_0355;case 2:goto IL_0201;case 3:goto IL_0339;case 4:goto IL_120a;case 5:goto IL_07f8;case 6:goto IL_1247;case 7:goto IL_1227;case 8:goto IL_006a;case 9:goto IL_081c;case 10:goto IL_007a;case 11:goto IL_11f7;case 12:goto IL_083c;};//switch				(IL_0014,IL_0355,IL_0201,IL_0339,IL_120a,IL_07f8,IL_1247,IL_1227,IL_006a,IL_081c,IL_007a,IL_11f7,IL_083c)
	IL_0053:                                                                        //volatile.
	IL_0055:            Temp_144=Root::T_x188::F_x13;                               //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x13
	IL_005a:            if(Temp_144!=nullptr)goto IL_0328;                          //brtrue				IL_0328
	IL_005f:                                                                        //ldc.i4				0x8
	IL_0064:            V_7=8;                                                      //stloc				V_7
	IL_0068:            /*goto IL_0016;*/goto IL_006a;                              //br.s				IL_0016
	IL_006a:            goto IL_0843;                                               //br				IL_0843
	IL_006f:                                                                        //ldc.i4				0xa
	IL_0074:            V_7=10;                                                     //stloc				V_7
	IL_0078:            /*goto IL_0016;*/goto IL_007a;                              //br.s				IL_0016
	IL_007a:                                                                        //ldloc.s				V_4
	IL_007c:                                                                        //unbox				System::Int32
	IL_0081:                                                                        //ldind.i4
	IL_0082:            switch(safe_cast<System::Int32>(V_4)){case 0:goto IL_0841;case 1:goto IL_0841;case 2:goto IL_0841;case 3:goto IL_0841;case 4:goto IL_0841;case 5:goto IL_0841;case 6:goto IL_0841;case 7:goto IL_0841;case 8:goto IL_0841;case 9:goto IL_0841;case 10:goto IL_0841;case 11:goto IL_0841;case 12:goto IL_0841;case 13:goto IL_0841;case 14:goto IL_0841;case 15:goto IL_0841;case 16:goto IL_0841;case 17:goto IL_0841;case 18:goto IL_0841;case 19:goto IL_0841;case 20:goto IL_0841;case 21:goto IL_0841;case 22:goto IL_0841;case 23:goto IL_0841;case 24:goto IL_0841;case 25:goto IL_0841;case 26:goto IL_0841;case 27:goto IL_0841;case 28:goto IL_0841;case 29:goto IL_0841;case 30:goto IL_0841;case 31:goto IL_0841;case 32:goto IL_0841;case 33:goto IL_0841;case 34:goto IL_0841;case 35:goto IL_0841;case 36:goto IL_0841;case 37:goto IL_0841;case 38:goto IL_0841;case 39:goto IL_0841;case 40:goto IL_0841;case 41:goto IL_0841;case 42:goto IL_0841;case 43:goto IL_0841;case 44:goto IL_0841;case 45:goto IL_0841;case 46:goto IL_0841;case 47:goto IL_0841;case 48:goto IL_0841;case 49:goto IL_0841;case 50:goto IL_0841;case 51:goto IL_0841;case 52:goto IL_0841;case 53:goto IL_0841;case 54:goto IL_0841;case 55:goto IL_0841;case 56:goto IL_0841;case 57:goto IL_0841;case 58:goto IL_0841;case 59:goto IL_0841;case 60:goto IL_0841;case 61:goto IL_0841;case 62:goto IL_0841;case 63:goto IL_0841;case 64:goto IL_0841;case 65:goto IL_0841;case 66:goto IL_0841;case 67:goto IL_0841;case 68:goto IL_0841;case 69:goto IL_0841;case 70:goto IL_0841;case 71:goto IL_0841;case 72:goto IL_0841;case 73:goto IL_0841;case 74:goto IL_0841;case 75:goto IL_0841;case 76:goto IL_0841;case 77:goto IL_0841;case 78:goto IL_0841;case 79:goto IL_0841;case 80:goto IL_0841;case 81:goto IL_0841;case 82:goto IL_0841;case 83:goto IL_0841;case 84:goto IL_0841;case 85:goto IL_0841;case 86:goto IL_0841;case 87:goto IL_0841;case 88:goto IL_0841;case 89:goto IL_0841;case 90:goto IL_0841;};//switch				(IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841,IL_0841)
	IL_01f3:                                                                        //ldc.i4				0x2
	IL_01f8:            V_7=2;                                                      //stloc				V_7
	IL_01fc:            /*goto IL_0016;*/goto IL_0201;                              //br				IL_0016
	IL_0201:            goto IL_11fc;                                               //br				IL_11fc
	IL_020101:          try{
	IL_0206:                                                                        //ldc.i4				0x3
	IL_020b:            V_7=3;                                                      //stloc				V_7
	IL_020f:            /*goto IL_0213;*/goto IL_0211;                              //br.s				IL_0213
	IL_0211:            goto IL_0238;                                               //br.s				IL_0238
	IL_0213:                                                                        //ldloc				V_7
	IL_0217:            switch(V_7){case 0:goto IL_0268;case 1:goto IL_02c2;case 2:goto IL_0259;case 3:goto IL_0211;case 4:goto IL_0285;case 5:goto IL_02d2;case 6:goto IL_0245;};//switch				(IL_0268,IL_02c2,IL_0259,IL_0211,IL_0285,IL_02d2,IL_0245)
	IL_0238:            goto IL_023a;                                               //br.s				IL_023a
	IL_023a:                                                                        //ldc.i4				0x6
	IL_023f:            V_7=6;                                                      //stloc				V_7
	IL_0243:            /*goto IL_0213;*/goto IL_0245;                              //br.s				IL_0213
	IL_0245:                                                                        //ldloc.s				V_5
	IL_0247:            Temp_142=V_5->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_024c:            if(Temp_142)goto IL_026d;                                   //brtrue.s				IL_026d
	IL_024e:                                                                        //ldc.i4				0x2
	IL_0253:            V_7=2;                                                      //stloc				V_7
	IL_0257:            /*goto IL_0213;*/goto IL_0259;                              //br.s				IL_0213
	IL_0259:            goto IL_02c4;                                               //br.s				IL_02c4
	IL_025b:                                                                        //ldc.i4.1
	IL_025c:            V_3=true;                                                   //stloc.3
	IL_025d:                                                                        //ldc.i4				0x0
	IL_0262:            V_7=0;                                                      //stloc				V_7
	IL_0266:            /*goto IL_0213;*/goto IL_0268;                              //br.s				IL_0213
	IL_0268:            goto IL_124c;                                               //leave				IL_124c
	IL_026d:                                                                        //ldloc.s				V_5
	IL_026f:            Temp_143=V_5->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0274:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_0279:            V_2=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_143);//stloc.2
	IL_027a:                                                                        //ldc.i4				0x4
	IL_027f:            V_7=4;                                                      //stloc				V_7
	IL_0283:            /*goto IL_0213;*/goto IL_0285;                              //br.s				IL_0213
	IL_0285:                                                                        //ldarg.0
	IL_0286:                                                                        //ldloc.2
	IL_0287:            Temp_137=V_2->Constructor;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_028c:            Temp_138=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_137)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0291:                                                                        //ldstr				L"\x7929\x552B\x5D2D\x442F\x5731\x5933\x1835\x6A37\x4F39\x523B\x4A3D\x293F\x2F41\x2143\x6845\x0B47\x2549\x214B\x3E4D\x394F\x3E51\x3153\x2455\x0B57\x3F59\x2E5B\x285D\x095F\x0161\x0163\x1565"
	IL_0296:                                                                        //ldloc				V_8
	IL_029a:            Temp_139=a(L"\x7929\x552B\x5D2D\x442F\x5731\x5933\x1835\x6A37\x4F39\x523B\x4A3D\x293F\x2F41\x2143\x6845\x0B47\x2549\x214B\x3E4D\x394F\x3E51\x3153\x2455\x0B57\x3F59\x2E5B\x285D\x095F\x0161\x0163\x1565",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_029f:                                                                        //ldstr				L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D\x114F\x2651\x2053\x2455\x3157\x3859\x295B\x2A5D\x055F"
	IL_02a4:                                                                        //ldloc				V_8
	IL_02a8:            Temp_140=a(L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D\x114F\x2651\x2053\x2455\x3157\x3859\x295B\x2A5D\x055F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ad:            Temp_141=this->M_x1(Temp_138,Temp_139,Temp_140);            //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_02b2:            if(!Temp_141)goto IL_023a;                                  //brfalse.s				IL_023a
	IL_02b4:                                                                        //ldc.i4				0x1
	IL_02b9:            V_7=1;                                                      //stloc				V_7
	IL_02bd:            /*goto IL_0213;*/goto IL_02c2;                              //br				IL_0213
	IL_02c2:            goto IL_025b;                                               //br.s				IL_025b
	IL_02c4:                                                                        //ldc.i4				0x5
	IL_02c9:            V_7=5;                                                      //stloc				V_7
	IL_02cd:            /*goto IL_0213;*/goto IL_02d2;                              //br				IL_0213
	IL_02d2:            goto IL_0476;                                               //leave				IL_0476
	                    ;}
	                    finally{
	IL_02d7:            goto IL_02ee;                                               //br.s				IL_02ee
	IL_02d9:                                                                        //ldloc				V_7
	IL_02dd:            switch(V_7){case 0:goto IL_0302;case 1:goto IL_0325;case 2:goto IL_0311;};//switch				(IL_0302,IL_0325,IL_0311)
	IL_02ee:                                                                        //ldloc.s				V_5
	IL_02f0:                                                                        //isinst				System::IDisposable
	IL_02f5:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_02f7:                                                                        //ldc.i4				0x0
	IL_02fc:            V_7=0;                                                      //stloc				V_7
	IL_0300:            /*goto IL_02d9;*/goto IL_0302;                              //br.s				IL_02d9
	IL_0302:                                                                        //ldloc.s				V_6
	IL_0304:            if(V_6==nullptr)goto IL_0327;                               //brfalse.s				IL_0327
	IL_0306:                                                                        //ldc.i4				0x2
	IL_030b:            V_7=2;                                                      //stloc				V_7
	IL_030f:            /*goto IL_02d9;*/goto IL_0311;                              //br.s				IL_02d9
	IL_0311:            goto IL_0313;                                               //br.s				IL_0313
	IL_0313:                                                                        //ldloc.s				V_6
	IL_0315:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_031a:                                                                        //ldc.i4				0x1
	IL_031f:            V_7=1;                                                      //stloc				V_7
	IL_0323:            /*goto IL_02d9;*/goto IL_0325;                              //br.s				IL_02d9
	IL_0325:            goto IL_0327;                                               //br.s				IL_0327
	IL_0327:                                                                        //endfinally
	                    ;}
	IL_0328:            goto IL_032b;                                               //br.s				IL_032b
	IL_032a:                                                                        //break
	IL_032b:                                                                        //ldc.i4				0x3
	IL_0330:            V_7=3;                                                      //stloc				V_7
	IL_0334:            /*goto IL_0016;*/goto IL_0339;                              //br				IL_0016
	IL_0339:                                                                        //ldarg.1
	IL_033a:            Temp_0=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_033f:                                                                        //dup
	IL_0340:            V_4=safe_cast<System::Object^>(Temp_0);                     //stloc.s				V_4
	IL_0342:            if(Temp_0==nullptr)goto IL_120c;                            //brfalse				IL_120c
	IL_0347:                                                                        //ldc.i4				0x1
	IL_034c:            V_7=1;                                                      //stloc				V_7
	IL_0350:            /*goto IL_0016;*/goto IL_0355;                              //br				IL_0016
	IL_0355:            goto IL_07ea;                                               //br				IL_07ea
	IL_035501:          try{
	IL_035a:                                                                        //ldc.i4				0x5
	IL_035f:            V_7=5;                                                      //stloc				V_7
	IL_0363:            /*goto IL_0367;*/goto IL_0365;                              //br.s				IL_0367
	IL_0365:            goto IL_038c;                                               //br.s				IL_038c
	IL_0367:                                                                        //ldloc				V_7
	IL_036b:            switch(V_7){case 0:goto IL_0420;case 1:goto IL_03d9;case 2:goto IL_03ab;case 3:goto IL_040d;case 4:goto IL_03bf;case 5:goto IL_0365;case 6:goto IL_039b;};//switch				(IL_0420,IL_03d9,IL_03ab,IL_040d,IL_03bf,IL_0365,IL_039b)
	IL_038c:            goto IL_03a0;                                               //br.s				IL_03a0
	IL_038e:                                                                        //ldc.i4.1
	IL_038f:            V_3=true;                                                   //stloc.3
	IL_0390:                                                                        //ldc.i4				0x6
	IL_0395:            V_7=6;                                                      //stloc				V_7
	IL_0399:            /*goto IL_0367;*/goto IL_039b;                              //br.s				IL_0367
	IL_039b:            goto IL_124c;                                               //leave				IL_124c
	IL_03a0:                                                                        //ldc.i4				0x2
	IL_03a5:            V_7=2;                                                      //stloc				V_7
	IL_03a9:            /*goto IL_0367;*/goto IL_03ab;                              //br.s				IL_0367
	IL_03ab:                                                                        //ldloc.s				V_5
	IL_03ad:            Temp_11=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_03b2:            if(Temp_11)goto IL_03c1;                                    //brtrue.s				IL_03c1
	IL_03b4:                                                                        //ldc.i4				0x4
	IL_03b9:            V_7=4;                                                      //stloc				V_7
	IL_03bd:            /*goto IL_0367;*/goto IL_03bf;                              //br.s				IL_0367
	IL_03bf:            goto IL_0412;                                               //br.s				IL_0412
	IL_03c1:                                                                        //ldloc.s				V_5
	IL_03c3:            Temp_12=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_03c8:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_03cd:            V_1=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_12);//stloc.1
	IL_03ce:                                                                        //ldc.i4				0x1
	IL_03d3:            V_7=1;                                                      //stloc				V_7
	IL_03d7:            /*goto IL_0367;*/goto IL_03d9;                              //br.s				IL_0367
	IL_03d9:                                                                        //ldarg.0
	IL_03da:                                                                        //ldloc.1
	IL_03db:            Temp_6=V_1->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_03e0:            Temp_7=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_6)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_03e5:            Temp_8=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_03ea:                                                                        //ldstr				L"\x6E29\x432B\x5A2D\x562F\x4731\x4733\x5535\x5937\x4E39\x533B\x4C3D\x013F\x3641\x3043\x3445\x2147\x2849\x394B\x3A4D\x354F"
	IL_03ef:                                                                        //ldloc				V_8
	IL_03f3:            Temp_9=a(L"\x6E29\x432B\x5A2D\x562F\x4731\x4733\x5535\x5937\x4E39\x533B\x4C3D\x013F\x3641\x3043\x3445\x2147\x2849\x394B\x3A4D\x354F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03f8:            Temp_10=this->M_x1(Temp_7,Temp_8,Temp_9);                   //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_03fd:            if(!Temp_10)goto IL_03a0;                                   //brfalse.s				IL_03a0
	IL_03ff:                                                                        //ldc.i4				0x3
	IL_0404:            V_7=3;                                                      //stloc				V_7
	IL_0408:            /*goto IL_0367;*/goto IL_040d;                              //br				IL_0367
	IL_040d:            goto IL_038e;                                               //br				IL_038e
	IL_0412:                                                                        //ldc.i4				0x0
	IL_0417:            V_7=0;                                                      //stloc				V_7
	IL_041b:            /*goto IL_0367;*/goto IL_0420;                              //br				IL_0367
	IL_0420:            goto IL_0821;                                               //leave				IL_0821
	                    ;}
	                    finally{
	IL_0425:            goto IL_043c;                                               //br.s				IL_043c
	IL_0427:                                                                        //ldloc				V_7
	IL_042b:            switch(V_7){case 0:goto IL_0450;case 1:goto IL_045f;case 2:goto IL_0473;};//switch				(IL_0450,IL_045f,IL_0473)
	IL_043c:                                                                        //ldloc.s				V_5
	IL_043e:                                                                        //isinst				System::IDisposable
	IL_0443:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_0445:                                                                        //ldc.i4				0x0
	IL_044a:            V_7=0;                                                      //stloc				V_7
	IL_044e:            /*goto IL_0427;*/goto IL_0450;                              //br.s				IL_0427
	IL_0450:                                                                        //ldloc.s				V_6
	IL_0452:            if(V_6==nullptr)goto IL_0475;                               //brfalse.s				IL_0475
	IL_0454:                                                                        //ldc.i4				0x1
	IL_0459:            V_7=1;                                                      //stloc				V_7
	IL_045d:            /*goto IL_0427;*/goto IL_045f;                              //br.s				IL_0427
	IL_045f:            goto IL_0461;                                               //br.s				IL_0461
	IL_0461:                                                                        //ldloc.s				V_6
	IL_0463:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0468:                                                                        //ldc.i4				0x2
	IL_046d:            V_7=2;                                                      //stloc				V_7
	IL_0471:            /*goto IL_0427;*/goto IL_0473;                              //br.s				IL_0427
	IL_0473:            goto IL_0475;                                               //br.s				IL_0475
	IL_0475:                                                                        //endfinally
	                    ;}
	IL_0476:                                                                        //ldc.i4.0
	IL_0477:            return false;                                               //ret
	IL_047701:          try{
	IL_0478:                                                                        //ldc.i4				0x15
	IL_047d:            V_7=21;                                                     //stloc				V_7
	IL_0481:            /*goto IL_0485;*/goto IL_0483;                              //br.s				IL_0485
	IL_0483:            goto IL_04e6;                                               //br.s				IL_04e6
	IL_0485:                                                                        //ldloc				V_7
	IL_0489:            switch(V_7){case 0:goto IL_072d;case 1:goto IL_0653;case 2:goto IL_071b;case 3:goto IL_0794;case 4:goto IL_0755;case 5:goto IL_06b3;case 6:goto IL_0533;case 7:goto IL_0673;case 8:goto IL_0600;case 9:goto IL_0599;case 10:goto IL_0742;case 11:goto IL_0546;case 12:goto IL_06c8;case 13:goto IL_0586;case 14:goto IL_0781;case 15:goto IL_076f;case 16:goto IL_04f6;case 17:goto IL_0613;case 18:goto IL_05d9;case 19:goto IL_06db;case 20:goto IL_05eb;case 21:goto IL_0483;};//switch				(IL_072d,IL_0653,IL_071b,IL_0794,IL_0755,IL_06b3,IL_0533,IL_0673,IL_0600,IL_0599,IL_0742,IL_0546,IL_06c8,IL_0586,IL_0781,IL_076f,IL_04f6,IL_0613,IL_05d9,IL_06db,IL_05eb,IL_0483)
	IL_04e6:            goto IL_0747;                                               //br				IL_0747
	IL_04eb:                                                                        //ldc.i4				0x10
	IL_04f0:            V_7=16;                                                     //stloc				V_7
	IL_04f4:            /*goto IL_0485;*/goto IL_04f6;                              //br.s				IL_0485
	IL_04f6:                                                                        //ldarg.0
	IL_04f7:                                                                        //ldloc.0
	IL_04f8:            Temp_30=V_0->Constructor;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_04fd:            Temp_31=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_30)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0502:                                                                        //ldstr				L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x7F3B\x523D\x293F\x2741\x2A43\x3245\x6647\x0B49\x384B\x3A4D\x224F\x3B51\x3653\x2355\x2C57\x3F59\x2F5B\x705D\x215F\x1161\x1763\x0365\x0567\x0869\x006B\x176D\x316F\x0671\x0073\x0475\x1177\x1879\x097B\x0A7D\xE57F\xF181"
	IL_0507:                                                                        //ldloc				V_8
	IL_050b:            Temp_32=a(L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x7F3B\x523D\x293F\x2741\x2A43\x3245\x6647\x0B49\x384B\x3A4D\x224F\x3B51\x3653\x2355\x2C57\x3F59\x2F5B\x705D\x215F\x1161\x1763\x0365\x0567\x0869\x006B\x176D\x316F\x0671\x0073\x0475\x1177\x1879\x097B\x0A7D\xE57F\xF181",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0510:                                                                        //ldstr				L"\x7A29\x5E2B\x412D\x532F\x5731\x4733\x4535\x5D37\x5E39\x7E3B\x473D\x183F\x2741\x2A43\x2945\x0B47\x2549\x284B\x2B4D"
	IL_0515:                                                                        //ldloc				V_8
	IL_0519:            Temp_33=a(L"\x7A29\x5E2B\x412D\x532F\x5731\x4733\x4535\x5D37\x5E39\x7E3B\x473D\x183F\x2741\x2A43\x2945\x0B47\x2549\x284B\x2B4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_051e:            Temp_34=this->M_x1(Temp_31,Temp_32,Temp_33);                //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0523:            if(!Temp_34)goto IL_058b;                                   //brfalse.s				IL_058b
	IL_0525:                                                                        //ldc.i4				0x6
	IL_052a:            V_7=6;                                                      //stloc				V_7
	IL_052e:            /*goto IL_0485;*/goto IL_0533;                              //br				IL_0485
	IL_0533:            goto IL_05db;                                               //br				IL_05db
	IL_0538:                                                                        //ldc.i4				0xb
	IL_053d:            V_7=11;                                                     //stloc				V_7
	IL_0541:            /*goto IL_0485;*/goto IL_0546;                              //br				IL_0485
	IL_0546:                                                                        //ldarg.0
	IL_0547:                                                                        //ldloc.0
	IL_0548:            Temp_25=V_0->Constructor;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_054d:            Temp_26=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_25)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0552:                                                                        //ldstr				L"\x7229\x492B\x402D\x5F2F\x7131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D"
	IL_0557:                                                                        //ldloc				V_8
	IL_055b:            Temp_27=a(L"\x7229\x492B\x402D\x5F2F\x7131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0560:                                                                        //ldstr				L"\x7A29\x5E2B\x412D\x532F\x5731\x4733\x4535\x5D37\x5E39\x7E3B\x473D\x183F\x2741\x2A43\x2945\x0B47\x2549\x284B\x2B4D"
	IL_0565:                                                                        //ldloc				V_8
	IL_0569:            Temp_28=a(L"\x7A29\x5E2B\x412D\x532F\x5731\x4733\x4535\x5D37\x5E39\x7E3B\x473D\x183F\x2741\x2A43\x2945\x0B47\x2549\x284B\x2B4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_056e:            Temp_29=this->M_x1(Temp_26,Temp_27,Temp_28);                //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0573:            if(!Temp_29)goto IL_0747;                                   //brfalse				IL_0747
	IL_0578:                                                                        //ldc.i4				0xd
	IL_057d:            V_7=13;                                                     //stloc				V_7
	IL_0581:            /*goto IL_0485;*/goto IL_0586;                              //br				IL_0485
	IL_0586:            goto IL_071d;                                               //br				IL_071d
	IL_058b:                                                                        //ldc.i4				0x9
	IL_0590:            V_7=9;                                                      //stloc				V_7
	IL_0594:            /*goto IL_0485;*/goto IL_0599;                              //br				IL_0485
	IL_0599:                                                                        //ldarg.0
	IL_059a:                                                                        //ldloc.0
	IL_059b:            Temp_20=V_0->Constructor;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_05a0:            Temp_21=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_20)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_05a5:                                                                        //ldstr				L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D"
	IL_05aa:                                                                        //ldloc				V_8
	IL_05ae:            Temp_22=a(L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b3:                                                                        //ldstr				L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D"
	IL_05b8:                                                                        //ldloc				V_8
	IL_05bc:            Temp_23=a(L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05c1:            Temp_24=this->M_x1(Temp_21,Temp_22,Temp_23);                //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_05c6:            if(!Temp_24)goto IL_06cd;                                   //brfalse				IL_06cd
	IL_05cb:                                                                        //ldc.i4				0x12
	IL_05d0:            V_7=18;                                                     //stloc				V_7
	IL_05d4:            /*goto IL_0485;*/goto IL_05d9;                              //br				IL_0485
	IL_05d9:            goto IL_05f0;                                               //br.s				IL_05f0
	IL_05db:                                                                        //ldc.i4.1
	IL_05dc:            V_3=true;                                                   //stloc.3
	IL_05dd:                                                                        //ldc.i4				0x14
	IL_05e2:            V_7=20;                                                     //stloc				V_7
	IL_05e6:            /*goto IL_0485;*/goto IL_05eb;                              //br				IL_0485
	IL_05eb:            goto IL_124c;                                               //leave				IL_124c
	IL_05f0:                                                                        //ldc.i4.1
	IL_05f1:            V_3=true;                                                   //stloc.3
	IL_05f2:                                                                        //ldc.i4				0x8
	IL_05f7:            V_7=8;                                                      //stloc				V_7
	IL_05fb:            /*goto IL_0485;*/goto IL_0600;                              //br				IL_0485
	IL_0600:            goto IL_124c;                                               //leave				IL_124c
	IL_0605:                                                                        //ldc.i4				0x11
	IL_060a:            V_7=17;                                                     //stloc				V_7
	IL_060e:            /*goto IL_0485;*/goto IL_0613;                              //br				IL_0485
	IL_0613:                                                                        //ldarg.0
	IL_0614:                                                                        //ldloc.0
	IL_0615:            Temp_35=V_0->Constructor;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_061a:            Temp_36=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_35)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_061f:                                                                        //ldstr				L"\x7229\x492B\x402D\x5F2F\x7131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D"
	IL_0624:                                                                        //ldloc				V_8
	IL_0628:            Temp_37=a(L"\x7229\x492B\x402D\x5F2F\x7131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_062d:                                                                        //ldstr				L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D"
	IL_0632:                                                                        //ldloc				V_8
	IL_0636:            Temp_38=a(L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_063b:            Temp_39=this->M_x1(Temp_36,Temp_37,Temp_38);                //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0640:            if(!Temp_39)goto IL_0538;                                   //brfalse				IL_0538
	IL_0645:                                                                        //ldc.i4				0x1
	IL_064a:            V_7=1;                                                      //stloc				V_7
	IL_064e:            /*goto IL_0485;*/goto IL_0653;                              //br				IL_0485
	IL_0653:            goto IL_0732;                                               //br				IL_0732
	IL_0658:                                                                        //ldloc.s				V_5
	IL_065a:            Temp_14=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_065f:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_0664:            V_0=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_14);//stloc.0
	IL_0665:                                                                        //ldc.i4				0x7
	IL_066a:            V_7=7;                                                      //stloc				V_7
	IL_066e:            /*goto IL_0485;*/goto IL_0673;                              //br				IL_0485
	IL_0673:                                                                        //ldarg.0
	IL_0674:                                                                        //ldloc.0
	IL_0675:            Temp_15=V_0->Constructor;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_067a:            Temp_16=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_15)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_067f:                                                                        //ldstr				L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x7F3B\x523D\x293F\x2741\x2A43\x3245\x6647\x0B49\x384B\x3A4D\x224F\x3B51\x3653\x2355\x2C57\x3F59\x2F5B\x705D\x215F\x1161\x1763\x0365\x0567\x0869\x006B\x176D\x316F\x0671\x0073\x0475\x1177\x1879\x097B\x0A7D\xE57F\xF181"
	IL_0684:                                                                        //ldloc				V_8
	IL_0688:            Temp_17=a(L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x7F3B\x523D\x293F\x2741\x2A43\x3245\x6647\x0B49\x384B\x3A4D\x224F\x3B51\x3653\x2355\x2C57\x3F59\x2F5B\x705D\x215F\x1161\x1763\x0365\x0567\x0869\x006B\x176D\x316F\x0671\x0073\x0475\x1177\x1879\x097B\x0A7D\xE57F\xF181",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_068d:                                                                        //ldstr				L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D"
	IL_0692:                                                                        //ldloc				V_8
	IL_0696:            Temp_18=a(L"\x7929\x592B\x5E2D\x402F\x4031\x5133\x4535\x4B37\x7E39\x553B\x4D3D\x213F\x3141\x3743\x2345\x2547\x2849\x204B\x374D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_069b:            Temp_19=this->M_x1(Temp_16,Temp_17,Temp_18);                //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_06a0:            if(!Temp_19)goto IL_04eb;                                   //brfalse				IL_04eb
	IL_06a5:                                                                        //ldc.i4				0x5
	IL_06aa:            V_7=5;                                                      //stloc				V_7
	IL_06ae:            /*goto IL_0485;*/goto IL_06b3;                              //br				IL_0485
	IL_06b3:            goto IL_0771;                                               //br				IL_0771
	IL_06b8:                                                                        //ldc.i4.1
	IL_06b9:            V_3=true;                                                   //stloc.3
	IL_06ba:                                                                        //ldc.i4				0xc
	IL_06bf:            V_7=12;                                                     //stloc				V_7
	IL_06c3:            /*goto IL_0485;*/goto IL_06c8;                              //br				IL_0485
	IL_06c8:            goto IL_124c;                                               //leave				IL_124c
	IL_06cd:                                                                        //ldc.i4				0x13
	IL_06d2:            V_7=19;                                                     //stloc				V_7
	IL_06d6:            /*goto IL_0485;*/goto IL_06db;                              //br				IL_0485
	IL_06db:                                                                        //ldarg.0
	IL_06dc:                                                                        //ldloc.0
	IL_06dd:            Temp_40=V_0->Constructor;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_06e2:            Temp_41=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_40)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_06e7:                                                                        //ldstr				L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D"
	IL_06ec:                                                                        //ldloc				V_8
	IL_06f0:            Temp_42=a(L"\x7229\x492B\x402D\x5F2F\x5131\x5B33\x5235\x5D37\x1439\x693B\x4D3D\x253F\x3041\x6A43\x0745\x3C47\x3E49\x3E4B\x274D\x324F\x2751\x2053\x3355\x2B57\x7459\x1D5B\x2D5D\x135F\x0761\x0963\x0465\x0467\x1369\x2D6B\x1A6D\x046F\x0071\x1D73\x1475\x0D77\x0E79\x197B\x0D7D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06f5:                                                                        //ldstr				L"\x7A29\x5E2B\x412D\x532F\x5731\x4733\x4535\x5D37\x5E39\x7E3B\x473D\x183F\x2741\x2A43\x2945\x0B47\x2549\x284B\x2B4D"
	IL_06fa:                                                                        //ldloc				V_8
	IL_06fe:            Temp_43=a(L"\x7A29\x5E2B\x412D\x532F\x5731\x4733\x4535\x5D37\x5E39\x7E3B\x473D\x183F\x2741\x2A43\x2945\x0B47\x2549\x284B\x2B4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0703:            Temp_44=this->M_x1(Temp_41,Temp_42,Temp_43);                //call				System::Boolean Root::T_x83::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0708:            if(!Temp_44)goto IL_0605;                                   //brfalse				IL_0605
	IL_070d:                                                                        //ldc.i4				0x2
	IL_0712:            V_7=2;                                                      //stloc				V_7
	IL_0716:            /*goto IL_0485;*/goto IL_071b;                              //br				IL_0485
	IL_071b:            goto IL_06b8;                                               //br.s				IL_06b8
	IL_071d:                                                                        //ldc.i4.1
	IL_071e:            V_3=true;                                                   //stloc.3
	IL_071f:                                                                        //ldc.i4				0x0
	IL_0724:            V_7=0;                                                      //stloc				V_7
	IL_0728:            /*goto IL_0485;*/goto IL_072d;                              //br				IL_0485
	IL_072d:            goto IL_124c;                                               //leave				IL_124c
	IL_0732:                                                                        //ldc.i4.1
	IL_0733:            V_3=true;                                                   //stloc.3
	IL_0734:                                                                        //ldc.i4				0xa
	IL_0739:            V_7=10;                                                     //stloc				V_7
	IL_073d:            /*goto IL_0485;*/goto IL_0742;                              //br				IL_0485
	IL_0742:            goto IL_124c;                                               //leave				IL_124c
	IL_0747:                                                                        //ldc.i4				0x4
	IL_074c:            V_7=4;                                                      //stloc				V_7
	IL_0750:            /*goto IL_0485;*/goto IL_0755;                              //br				IL_0485
	IL_0755:                                                                        //ldloc.s				V_5
	IL_0757:            Temp_13=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_075c:            if(Temp_13)goto IL_0658;                                    //brtrue				IL_0658
	IL_0761:                                                                        //ldc.i4				0xf
	IL_0766:            V_7=15;                                                     //stloc				V_7
	IL_076a:            /*goto IL_0485;*/goto IL_076f;                              //br				IL_0485
	IL_076f:            goto IL_0786;                                               //br.s				IL_0786
	IL_0771:                                                                        //ldc.i4.1
	IL_0772:            V_3=true;                                                   //stloc.3
	IL_0773:                                                                        //ldc.i4				0xe
	IL_0778:            V_7=14;                                                     //stloc				V_7
	IL_077c:            /*goto IL_0485;*/goto IL_0781;                              //br				IL_0485
	IL_0781:            goto IL_124c;                                               //leave				IL_124c
	IL_0786:                                                                        //ldc.i4				0x3
	IL_078b:            V_7=3;                                                      //stloc				V_7
	IL_078f:            /*goto IL_0485;*/goto IL_0794;                              //br				IL_0485
	IL_0794:            goto IL_122c;                                               //leave				IL_122c
	                    ;}
	                    finally{
	IL_0799:            goto IL_07b0;                                               //br.s				IL_07b0
	IL_079b:                                                                        //ldloc				V_7
	IL_079f:            switch(V_7){case 0:goto IL_07c4;case 1:goto IL_07d3;case 2:goto IL_07e7;};//switch				(IL_07c4,IL_07d3,IL_07e7)
	IL_07b0:                                                                        //ldloc.s				V_5
	IL_07b2:                                                                        //isinst				System::IDisposable
	IL_07b7:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_07b9:                                                                        //ldc.i4				0x0
	IL_07be:            V_7=0;                                                      //stloc				V_7
	IL_07c2:            /*goto IL_079b;*/goto IL_07c4;                              //br.s				IL_079b
	IL_07c4:                                                                        //ldloc.s				V_6
	IL_07c6:            if(V_6==nullptr)goto IL_07e9;                               //brfalse.s				IL_07e9
	IL_07c8:                                                                        //ldc.i4				0x1
	IL_07cd:            V_7=1;                                                      //stloc				V_7
	IL_07d1:            /*goto IL_079b;*/goto IL_07d3;                              //br.s				IL_079b
	IL_07d3:            goto IL_07d5;                                               //br.s				IL_07d5
	IL_07d5:                                                                        //ldloc.s				V_6
	IL_07d7:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_07dc:                                                                        //ldc.i4				0x2
	IL_07e1:            V_7=2;                                                      //stloc				V_7
	IL_07e5:            /*goto IL_079b;*/goto IL_07e7;                              //br.s				IL_079b
	IL_07e7:            goto IL_07e9;                                               //br.s				IL_07e9
	IL_07e9:                                                                        //endfinally
	                    ;}
	IL_07ea:                                                                        //ldc.i4				0x5
	IL_07ef:            V_7=5;                                                      //stloc				V_7
	IL_07f3:            /*goto IL_0016;*/goto IL_07f8;                              //br				IL_0016
	IL_07f8:                                                                        //volatile.
	IL_07fa:            Temp_3=Root::T_x188::F_x13;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x13
	IL_07ff:            Temp_5=V_4;                                                 //ldloc.s				V_4
	IL_0801:            Temp_4=Temp_3[Temp_5];                                      //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_0806:                                                                        //dup
	IL_0807:            V_4=Temp_4;                                                 //stloc.s				V_4
	IL_0809:            if(V_4==nullptr)goto IL_120c;                               //brfalse				IL_120c
	IL_080e:                                                                        //ldc.i4				0x9
	IL_0813:            V_7=9;                                                      //stloc				V_7
	IL_0817:            /*goto IL_0016;*/goto IL_081c;                              //br				IL_0016
	IL_081c:            goto IL_006f;                                               //br				IL_006f
	IL_0821:                                                                        //ldarg.1
	IL_0822:            Temp_145=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0827:            Temp_146=safe_cast<System::Collections::IEnumerable^>(Temp_145)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_082c:            V_5=Temp_146;                                               //stloc.s				V_5
	IL_082e:                                                                        //ldc.i4				0xc
	IL_0833:            V_7=12;                                                     //stloc				V_7
	IL_0837:            /*goto IL_0016;*/goto IL_083c;                              //br				IL_0016
	IL_083c:            /*goto IL_0206;*/goto IL_020101;                            //br				IL_0206
	IL_0841:                                                                        //ldc.i4.1
	IL_0842:            return true;                                                //ret
	IL_0843:                                                                        //ldc.i4				0xb6
	IL_0848:                                                                        //ldc.r4				0.5
	IL_084d:            Temp_45=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(182),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_0852:                                                                        //dup
	IL_0853:                                                                        //ldstr				L"\x1929\x682B\x632D\x712F\x6231"
	IL_0858:                                                                        //ldloc				V_8
	IL_085c:            Temp_46=a(L"\x1929\x682B\x632D\x712F\x6231",V_8);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0861:                                                                        //ldc.i4.0
	IL_0862:                                                                        //box				System::Int32
	IL_0867:            Temp_45->Add(safe_cast<System::Object^>(Temp_46),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_086c:                                                                        //dup
	IL_086d:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x1E2F\x7431\x4633\x5735\x5537\x5F39\x4B3B\x513D\x323F\x2941"
	IL_0872:                                                                        //ldloc				V_8
	IL_0876:            Temp_47=a(L"\x6B29\x4F2B\x5A2D\x1E2F\x7431\x4633\x5735\x5537\x5F39\x4B3B\x513D\x323F\x2941",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_087b:                                                                        //ldc.i4.1
	IL_087c:                                                                        //box				System::Int32
	IL_0881:            Temp_45->Add(safe_cast<System::Object^>(Temp_47),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0886:                                                                        //dup
	IL_0887:                                                                        //ldstr				L"\x6829\x492B\x5D2D\x442F\x5131\x5B33\x5B35\x4137\x1439\x6B3B\x5B3D\x223F\x6C41\x0743\x2945\x2647\x3E49\x3E4B\x214D\x3C4F\x2151\x7A53\x0355\x2857\x3659\x335B\x3F5D\x045F"
	IL_088c:                                                                        //ldloc				V_8
	IL_0890:            Temp_48=a(L"\x6829\x492B\x5D2D\x442F\x5131\x5B33\x5B35\x4137\x1439\x6B3B\x5B3D\x223F\x6C41\x0743\x2945\x2647\x3E49\x3E4B\x214D\x3C4F\x2151\x7A53\x0355\x2857\x3659\x335B\x3F5D\x045F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0895:                                                                        //ldc.i4.2
	IL_0896:                                                                        //box				System::Int32
	IL_089b:            Temp_45->Add(safe_cast<System::Object^>(Temp_48),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_08a0:                                                                        //dup
	IL_08a1:                                                                        //ldstr				L"\x6929\x432B\x4A2D\x552F\x7E31\x5D33\x5435"
	IL_08a6:                                                                        //ldloc				V_8
	IL_08aa:            Temp_49=a(L"\x6929\x432B\x4A2D\x552F\x7E31\x5D33\x5435",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08af:                                                                        //ldc.i4.3
	IL_08b0:                                                                        //box				System::Int32
	IL_08b5:            Temp_45->Add(safe_cast<System::Object^>(Temp_49),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_08ba:                                                                        //dup
	IL_08bb:                                                                        //ldstr				L"\x6929\x432B\x4A2D\x552F\x7E31\x5D33\x5435\x6E37\x5339\x593B\x493D\x253F\x3041"
	IL_08c0:                                                                        //ldloc				V_8
	IL_08c4:            Temp_50=a(L"\x6929\x432B\x4A2D\x552F\x7E31\x5D33\x5435\x6E37\x5339\x593B\x493D\x253F\x3041",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08c9:                                                                        //ldc.i4.4
	IL_08ca:                                                                        //box				System::Int32
	IL_08cf:            Temp_45->Add(safe_cast<System::Object^>(Temp_50),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_08d4:                                                                        //dup
	IL_08d5:                                                                        //ldstr				L"\x6929\x432B\x5B2D\x5E2F\x4631\x5133\x4435\x6B37\x5539\x5A3B\x4A3D\x6E3F\x0541\x2143\x2B45\x2147\x2449\x254B"
	IL_08da:                                                                        //ldloc				V_8
	IL_08de:            Temp_51=a(L"\x6929\x432B\x5B2D\x5E2F\x4631\x5133\x4435\x6B37\x5539\x5A3B\x4A3D\x6E3F\x0541\x2143\x2B45\x2147\x2449\x254B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08e3:                                                                        //ldc.i4.5
	IL_08e4:                                                                        //box				System::Int32
	IL_08e9:            Temp_45->Add(safe_cast<System::Object^>(Temp_51),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_08ee:                                                                        //dup
	IL_08ef:                                                                        //ldstr				L"\x6929\x432B\x5B2D\x5E2F\x4631\x5133\x4435\x6B37\x5539\x5A3B\x4A3D\x6E3F\x0541\x2143\x2B45\x2147\x2449\x254B\x0C4D\x394F\x2851"
	IL_08f4:                                                                        //ldloc				V_8
	IL_08f8:            Temp_52=a(L"\x6929\x432B\x5B2D\x5E2F\x4631\x5133\x4435\x6B37\x5539\x5A3B\x4A3D\x6E3F\x0541\x2143\x2B45\x2147\x2449\x254B\x0C4D\x394F\x2851",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08fd:                                                                        //ldc.i4.6
	IL_08fe:                                                                        //box				System::Int32
	IL_0903:            Temp_45->Add(safe_cast<System::Object^>(Temp_52),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0908:                                                                        //dup
	IL_0909:                                                                        //ldstr				L"\x6E29\x612B\x6D2D\x5F2F\x5C31\x4033\x4435\x5737\x5639\x4F3B\x103D\x033F\x2D41\x2843\x2945\x3A47\x0749\x254B\x364D\x354F\x2051"
	IL_090e:                                                                        //ldloc				V_8
	IL_0912:            Temp_53=a(L"\x6E29\x612B\x6D2D\x5F2F\x5C31\x4033\x4435\x5737\x5639\x4F3B\x103D\x033F\x2D41\x2843\x2945\x3A47\x0749\x254B\x364D\x354F\x2051",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0917:                                                                        //ldc.i4.7
	IL_0918:                                                                        //box				System::Int32
	IL_091d:            Temp_45->Add(safe_cast<System::Object^>(Temp_53),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0922:                                                                        //dup
	IL_0923:                                                                        //ldstr				L"\x6E29\x492B\x582D\x432F\x5A31\x5B33\x5535\x5337\x1439\x723B\x5B3D\x343F\x6C41\x1743\x2945\x2B47\x2149\x1F4B\x2B4D\x224F\x2451\x3153\x2455"
	IL_0928:                                                                        //ldloc				V_8
	IL_092c:            Temp_54=a(L"\x6E29\x492B\x582D\x432F\x5A31\x5B33\x5535\x5337\x1439\x723B\x5B3D\x343F\x6C41\x1743\x2945\x2B47\x2149\x1F4B\x2B4D\x224F\x2451\x3153\x2455",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0931:                                                                        //ldc.i4.8
	IL_0932:                                                                        //box				System::Int32
	IL_0937:            Temp_45->Add(safe_cast<System::Object^>(Temp_54),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_093c:                                                                        //dup
	IL_093d:                                                                        //ldstr				L"\x6E29\x492B\x582D\x432F\x5A31\x5B33\x5535\x5337\x1439\x6C3B\x4C3D\x2F3F\x3641\x2B43\x2545\x2747\x2649\x624B\x1D4D\x3D4F\x2251\x2453\x1555\x3457\x3359\x395B\x305D\x145F"
	IL_0942:                                                                        //ldloc				V_8
	IL_0946:            Temp_55=a(L"\x6E29\x492B\x582D\x432F\x5A31\x5B33\x5535\x5337\x1439\x6C3B\x4C3D\x2F3F\x3641\x2B43\x2545\x2747\x2649\x624B\x1D4D\x3D4F\x2251\x2453\x1555\x3457\x3359\x395B\x305D\x145F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_094b:                                                                        //ldc.i4.s				9
	IL_094d:                                                                        //box				System::Int32
	IL_0952:            Temp_45->Add(safe_cast<System::Object^>(Temp_55),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0957:                                                                        //dup
	IL_0958:                                                                        //ldstr				L"\x6E29\x492B\x582D\x432F\x5A31\x5B33\x5535\x5337\x1439\x683B\x513D\x2F3F\x2E41\x6A43\x1E45\x2547\x2649\x0F4B\x214D\x3E4F\x2451\x3153\x2455\x2C57\x3F59\x2E5B"
	IL_095d:                                                                        //ldloc				V_8
	IL_0961:            Temp_56=a(L"\x6E29\x492B\x582D\x432F\x5A31\x5B33\x5535\x5337\x1439\x683B\x513D\x2F3F\x2E41\x6A43\x1E45\x2547\x2649\x0F4B\x214D\x3E4F\x2451\x3153\x2455\x2C57\x3F59\x2E5B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0966:                                                                        //ldc.i4.s				10
	IL_0968:                                                                        //box				System::Int32
	IL_096d:            Temp_45->Add(safe_cast<System::Object^>(Temp_56),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0972:                                                                        //dup
	IL_0973:                                                                        //ldstr				L"\x6E29\x432B\x542D\x592F\x5C31\x5333\x7235\x5737\x5D39\x4F3B\x613D\x0C3F\x2B41\x2743\x2345\x2647\x3949\x254B\x204D\x374F"
	IL_0978:                                                                        //ldloc				V_8
	IL_097c:            Temp_57=a(L"\x6E29\x432B\x542D\x592F\x5C31\x5333\x7235\x5737\x5D39\x4F3B\x613D\x0C3F\x2B41\x2743\x2345\x2647\x3949\x254B\x204D\x374F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0981:                                                                        //ldc.i4.s				11
	IL_0983:                                                                        //box				System::Int32
	IL_0988:            Temp_45->Add(safe_cast<System::Object^>(Temp_57),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_098d:                                                                        //dup
	IL_098e:                                                                        //ldstr				L"\x6E29\x592B\x402D\x542F\x5331\x4733\x6135\x5D37\x5839\x7F3B\x563D\x213F\x3041\x3043"
	IL_0993:                                                                        //ldloc				V_8
	IL_0997:            Temp_58=a(L"\x6E29\x592B\x402D\x542F\x5331\x4733\x6135\x5D37\x5839\x7F3B\x563D\x213F\x3041\x3043",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_099c:                                                                        //ldc.i4.s				12
	IL_099e:                                                                        //box				System::Int32
	IL_09a3:            Temp_45->Add(safe_cast<System::Object^>(Temp_58),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_09a8:                                                                        //dup
	IL_09a9:                                                                        //ldstr				L"\x6E29\x592B\x402D\x542F\x5331\x4733\x6135\x5137\x5439\x7B3B\x5F3D\x353F\x2541\x2143"
	IL_09ae:                                                                        //ldloc				V_8
	IL_09b2:            Temp_59=a(L"\x6E29\x592B\x402D\x542F\x5331\x4733\x6135\x5137\x5439\x7B3B\x5F3D\x353F\x2541\x2143",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09b7:                                                                        //ldc.i4.s				13
	IL_09b9:                                                                        //box				System::Int32
	IL_09be:            Temp_45->Add(safe_cast<System::Object^>(Temp_59),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_09c3:                                                                        //dup
	IL_09c4:                                                                        //ldstr				L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7937\x5E39\x513B\x573D\x2E3F"
	IL_09c9:                                                                        //ldloc				V_8
	IL_09cd:            Temp_60=a(L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7937\x5E39\x513B\x573D\x2E3F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09d2:                                                                        //ldc.i4.s				14
	IL_09d4:                                                                        //box				System::Int32
	IL_09d9:            Temp_45->Add(safe_cast<System::Object^>(Temp_60),safe_cast<System::Object^>(14));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_09de:                                                                        //dup
	IL_09df:                                                                        //ldstr				L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7B37\x5539\x523B\x4A3D\x323F\x2D41\x2843\x3545"
	IL_09e4:                                                                        //ldloc				V_8
	IL_09e8:            Temp_61=a(L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7B37\x5539\x523B\x4A3D\x323F\x2D41\x2843\x3545",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09ed:                                                                        //ldc.i4.s				15
	IL_09ef:                                                                        //box				System::Int32
	IL_09f4:            Temp_45->Add(safe_cast<System::Object^>(Temp_61),safe_cast<System::Object^>(15));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_09f9:                                                                        //dup
	IL_09fa:                                                                        //ldstr				L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7C37\x7B39\x703B"
	IL_09ff:                                                                        //ldloc				V_8
	IL_0a03:            Temp_62=a(L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7C37\x7B39\x703B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a08:                                                                        //ldc.i4.s				16
	IL_0a0a:                                                                        //box				System::Int32
	IL_0a0f:            Temp_45->Add(safe_cast<System::Object^>(Temp_62),safe_cast<System::Object^>(16));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a14:                                                                        //dup
	IL_0a15:                                                                        //ldstr				L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7537\x5539\x583B\x5B3D\x2C3F"
	IL_0a1a:                                                                        //ldloc				V_8
	IL_0a1e:            Temp_63=a(L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x7537\x5539\x583B\x5B3D\x2C3F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a23:                                                                        //ldc.i4.s				17
	IL_0a25:                                                                        //box				System::Int32
	IL_0a2a:            Temp_45->Add(safe_cast<System::Object^>(Temp_63),safe_cast<System::Object^>(17));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a2f:                                                                        //dup
	IL_0a30:                                                                        //ldstr				L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x6837\x5B39\x5B3B\x5B3D\x333F"
	IL_0a35:                                                                        //ldloc				V_8
	IL_0a39:            Temp_64=a(L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x6837\x5B39\x5B3B\x5B3D\x333F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a3e:                                                                        //ldc.i4.s				18
	IL_0a40:                                                                        //box				System::Int32
	IL_0a45:            Temp_45->Add(safe_cast<System::Object^>(Temp_64),safe_cast<System::Object^>(18));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a4a:                                                                        //dup
	IL_0a4b:                                                                        //ldstr				L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x6D37\x4E39\x553B\x523D\x293F\x3641\x3D43"
	IL_0a50:                                                                        //ldloc				V_8
	IL_0a54:            Temp_65=a(L"\x6E29\x5A2B\x602D\x552F\x4531\x4733\x6935\x6D37\x4E39\x553B\x523D\x293F\x3641\x3D43",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a59:                                                                        //ldc.i4.s				19
	IL_0a5b:                                                                        //box				System::Int32
	IL_0a60:            Temp_45->Add(safe_cast<System::Object^>(Temp_65),safe_cast<System::Object^>(19));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a65:                                                                        //dup
	IL_0a66:                                                                        //ldstr				L"\x6329\x7F2B\x602D\x552F\x4631\x1A33\x6135\x5D37\x5839\x693B\x773D\x6E3F\x1541\x2143\x2445\x0B47\x2549\x214B\x2C4D\x3F4F"
	IL_0a6b:                                                                        //ldloc				V_8
	IL_0a6f:            Temp_66=a(L"\x6329\x7F2B\x602D\x552F\x4631\x1A33\x6135\x5D37\x5839\x693B\x773D\x6E3F\x1541\x2143\x2445\x0B47\x2549\x214B\x2C4D\x3F4F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a74:                                                                        //ldc.i4.s				20
	IL_0a76:                                                                        //box				System::Int32
	IL_0a7b:            Temp_45->Add(safe_cast<System::Object^>(Temp_66),safe_cast<System::Object^>(20));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a80:                                                                        //dup
	IL_0a81:                                                                        //ldstr				L"\x6329\x7F2B\x602D\x552F\x4631\x1A33\x6135\x5D37\x5839\x693B\x773D\x6E3F\x1541\x2143\x2445\x0F47\x3849\x254B\x2A4D"
	IL_0a86:                                                                        //ldloc				V_8
	IL_0a8a:            Temp_67=a(L"\x6329\x7F2B\x602D\x552F\x4631\x1A33\x6135\x5D37\x5839\x693B\x773D\x6E3F\x1541\x2143\x2445\x0F47\x3849\x254B\x2A4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a8f:                                                                        //ldc.i4.s				21
	IL_0a91:                                                                        //box				System::Int32
	IL_0a96:            Temp_45->Add(safe_cast<System::Object^>(Temp_67),safe_cast<System::Object^>(21));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a9b:                                                                        //dup
	IL_0a9c:                                                                        //ldstr				L"\x6329\x7F2B\x602D\x552F\x4631\x1A33\x6135\x5D37\x5839\x693B\x773D\x6E3F\x1541\x2143\x2445\x0147\x2449\x3C4B\x3B4D\x244F"
	IL_0aa1:                                                                        //ldloc				V_8
	IL_0aa5:            Temp_68=a(L"\x6329\x7F2B\x602D\x552F\x4631\x1A33\x6135\x5D37\x5839\x693B\x773D\x6E3F\x1541\x2143\x2445\x0147\x2449\x3C4B\x3B4D\x244F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0aaa:                                                                        //ldc.i4.s				22
	IL_0aac:                                                                        //box				System::Int32
	IL_0ab1:            Temp_45->Add(safe_cast<System::Object^>(Temp_68),safe_cast<System::Object^>(22));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ab6:                                                                        //dup
	IL_0ab7:                                                                        //ldstr				L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x7D37\x5739\x5D3B\x573D\x2C3F"
	IL_0abc:                                                                        //ldloc				V_8
	IL_0ac0:            Temp_69=a(L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x7D37\x5739\x5D3B\x573D\x2C3F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ac5:                                                                        //ldc.i4.s				23
	IL_0ac7:                                                                        //box				System::Int32
	IL_0acc:            Temp_45->Add(safe_cast<System::Object^>(Temp_69),safe_cast<System::Object^>(23));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ad1:                                                                        //dup
	IL_0ad2:                                                                        //ldstr				L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x7E37\x4E39\x4C3B"
	IL_0ad7:                                                                        //ldloc				V_8
	IL_0adb:            Temp_70=a(L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x7E37\x4E39\x4C3B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ae0:                                                                        //ldc.i4.s				24
	IL_0ae2:                                                                        //box				System::Int32
	IL_0ae7:            Temp_45->Add(safe_cast<System::Object^>(Temp_70),safe_cast<System::Object^>(24));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0aec:                                                                        //dup
	IL_0aed:                                                                        //ldstr				L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x6C37\x5F39\x503B\x503D\x253F\x3641"
	IL_0af2:                                                                        //ldloc				V_8
	IL_0af6:            Temp_71=a(L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x6C37\x5F39\x503B\x503D\x253F\x3641",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0afb:                                                                        //ldc.i4.s				25
	IL_0afd:                                                                        //box				System::Int32
	IL_0b02:            Temp_45->Add(safe_cast<System::Object^>(Temp_71),safe_cast<System::Object^>(25));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b07:                                                                        //dup
	IL_0b08:                                                                        //ldstr				L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x6B37\x4939\x543B"
	IL_0b0d:                                                                        //ldloc				V_8
	IL_0b11:            Temp_72=a(L"\x6029\x5F2B\x4D2D\x512F\x4231\x5133\x1835\x6B37\x4939\x543B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b16:                                                                        //ldc.i4.s				26
	IL_0b18:                                                                        //box				System::Int32
	IL_0b1d:            Temp_45->Add(safe_cast<System::Object^>(Temp_72),safe_cast<System::Object^>(26));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b22:                                                                        //dup
	IL_0b23:                                                                        //ldstr				L"\x6729\x432B\x402D\x5F2F\x6131\x5B33\x5035\x4C37\x4D39\x5D3B\x4C3D\x253F\x6C41\x1343\x2345\x2A47\x6449\x084B\x274D\x314F\x3E51\x3B53\x3155\x2B57"
	IL_0b28:                                                                        //ldloc				V_8
	IL_0b2c:            Temp_73=a(L"\x6729\x432B\x402D\x5F2F\x6131\x5B33\x5035\x4C37\x4D39\x5D3B\x4C3D\x253F\x6C41\x1343\x2345\x2A47\x6449\x084B\x274D\x314F\x3E51\x3B53\x3155\x2B57",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b31:                                                                        //ldc.i4.s				27
	IL_0b33:                                                                        //box				System::Int32
	IL_0b38:            Temp_45->Add(safe_cast<System::Object^>(Temp_73),safe_cast<System::Object^>(27));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b3d:                                                                        //dup
	IL_0b3e:                                                                        //ldstr				L"\x6429\x492B\x592D\x462F\x1C31\x7733\x5935\x5537\x5739\x533B\x503D"
	IL_0b43:                                                                        //ldloc				V_8
	IL_0b47:            Temp_74=a(L"\x6429\x492B\x592D\x462F\x1C31\x7733\x5935\x5537\x5739\x533B\x503D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b4c:                                                                        //ldc.i4.s				28
	IL_0b4e:                                                                        //box				System::Int32
	IL_0b53:            Temp_45->Add(safe_cast<System::Object^>(Temp_74),safe_cast<System::Object^>(28));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b58:                                                                        //dup
	IL_0b59:                                                                        //ldstr				L"\x6429\x492B\x592D\x462F\x1C31\x7133\x7A35\x5D37\x5B39\x4E3B\x503D\x293F\x2C41\x2343"
	IL_0b5e:                                                                        //ldloc				V_8
	IL_0b62:            Temp_75=a(L"\x6429\x492B\x592D\x462F\x1C31\x7133\x7A35\x5D37\x5B39\x4E3B\x503D\x293F\x2C41\x2343",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b67:                                                                        //ldc.i4.s				29
	IL_0b69:                                                                        //box				System::Int32
	IL_0b6e:            Temp_45->Add(safe_cast<System::Object^>(Temp_75),safe_cast<System::Object^>(29));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b73:                                                                        //dup
	IL_0b74:                                                                        //ldstr				L"\x6429\x492B\x592D\x462F\x1C31\x7133\x7A35\x5D37\x5B39\x4E3B\x503D\x293F\x2C41\x2343\x6845\x0A47\x3F49\x3F4B\x274D\x3E4F\x3751\x2753\x2555"
	IL_0b79:                                                                        //ldloc				V_8
	IL_0b7d:            Temp_76=a(L"\x6429\x492B\x592D\x462F\x1C31\x7133\x7A35\x5D37\x5B39\x4E3B\x503D\x293F\x2C41\x2343\x6845\x0A47\x3F49\x3F4B\x274D\x3E4F\x3751\x2753\x2555",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b82:                                                                        //ldc.i4.s				30
	IL_0b84:                                                                        //box				System::Int32
	IL_0b89:            Temp_45->Add(safe_cast<System::Object^>(Temp_76),safe_cast<System::Object^>(30));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b8e:                                                                        //dup
	IL_0b8f:                                                                        //ldstr				L"\x6429\x492B\x592D\x462F\x1C31\x7133\x7A35\x5D37\x5B39\x4E3B\x503D\x293F\x2C41\x2343\x6845\x0C47\x2B49\x384B\x2F4D\x114F\x3151\x3753\x3355\x2B57\x2959"
	IL_0b94:                                                                        //ldloc				V_8
	IL_0b98:            Temp_77=a(L"\x6429\x492B\x592D\x462F\x1C31\x7133\x7A35\x5D37\x5B39\x4E3B\x503D\x293F\x2C41\x2343\x6845\x0C47\x2B49\x384B\x2F4D\x114F\x3151\x3753\x3355\x2B57\x2959",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b9d:                                                                        //ldc.i4.s				31
	IL_0b9f:                                                                        //box				System::Int32
	IL_0ba4:            Temp_45->Add(safe_cast<System::Object^>(Temp_77),safe_cast<System::Object^>(31));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ba9:                                                                        //dup
	IL_0baa:                                                                        //ldstr				L"\x6729\x4D2B\x572D\x552F\x4031\x6733\x5935\x5E37\x4E39\x123B\x693D\x253F\x2041\x6A43\x0545\x2747\x2449\x384B\x3C4D\x3F4F\x3E51\x2753\x7855\x0857\x2859\x335B\x2E5D\x055F\x1061\x1063\x1F65\x2F67\x1869\x056B\x0A6D"
	IL_0baf:                                                                        //ldloc				V_8
	IL_0bb3:            Temp_78=a(L"\x6729\x4D2B\x572D\x552F\x4031\x6733\x5935\x5E37\x4E39\x123B\x693D\x253F\x2041\x6A43\x0545\x2747\x2449\x384B\x3C4D\x3F4F\x3E51\x2753\x7855\x0857\x2859\x335B\x2E5D\x055F\x1061\x1063\x1F65\x2F67\x1869\x056B\x0A6D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bb8:                                                                        //ldc.i4.s				32
	IL_0bba:                                                                        //box				System::Int32
	IL_0bbf:            Temp_45->Add(safe_cast<System::Object^>(Temp_78),safe_cast<System::Object^>(32));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0bc4:                                                                        //dup
	IL_0bc5:                                                                        //ldstr				L"\x6729\x492B\x4A2D\x592F\x5331\x5733\x5E35\x5937\x4939\x593B\x103D\x063F\x2B41\x2843\x2345\x1D47\x3A49\x204B\x214D\x314F\x3651\x3153\x2455"
	IL_0bca:                                                                        //ldloc				V_8
	IL_0bce:            Temp_79=a(L"\x6729\x492B\x4A2D\x592F\x5331\x5733\x5E35\x5937\x4939\x593B\x103D\x063F\x2B41\x2843\x2345\x1D47\x3A49\x204B\x214D\x314F\x3651\x3153\x2455",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bd3:                                                                        //ldc.i4.s				33
	IL_0bd5:                                                                        //box				System::Int32
	IL_0bda:            Temp_45->Add(safe_cast<System::Object^>(Temp_79),safe_cast<System::Object^>(33));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0bdf:                                                                        //dup
	IL_0be0:                                                                        //ldstr				L"\x6729\x7F2B\x7E2D\x5C2F\x4731\x4733\x1835\x7C37\x5B39\x483B\x5B3D\x103F\x2B41\x2743\x2D45\x2D47\x3849"
	IL_0be5:                                                                        //ldloc				V_8
	IL_0be9:            Temp_80=a(L"\x6729\x7F2B\x7E2D\x5C2F\x4731\x4733\x1835\x7C37\x5B39\x483B\x5B3D\x103F\x2B41\x2743\x2D45\x2D47\x3849",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bee:                                                                        //ldc.i4.s				34
	IL_0bf0:                                                                        //box				System::Int32
	IL_0bf5:            Temp_45->Add(safe_cast<System::Object^>(Temp_80),safe_cast<System::Object^>(34));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0bfa:                                                                        //dup
	IL_0bfb:                                                                        //ldstr				L"\x6729\x7F2B\x7E2D\x5C2F\x4731\x4733\x1835\x6C37\x5539\x533B\x523D\x023F\x2341\x3643\x0745\x2647\x2E49\x014B\x2B4D\x3E4F\x2751"
	IL_0c00:                                                                        //ldloc				V_8
	IL_0c04:            Temp_81=a(L"\x6729\x7F2B\x7E2D\x5C2F\x4731\x4733\x1835\x6C37\x5539\x533B\x523D\x023F\x2341\x3643\x0745\x2647\x2E49\x014B\x2B4D\x3E4F\x2751",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c09:                                                                        //ldc.i4.s				35
	IL_0c0b:                                                                        //box				System::Int32
	IL_0c10:            Temp_45->Add(safe_cast<System::Object^>(Temp_81),safe_cast<System::Object^>(35));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0c15:                                                                        //dup
	IL_0c16:                                                                        //ldstr				L"\x6429\x492B\x5A2D\x742F\x5B31\x5333"
	IL_0c1b:                                                                        //ldloc				V_8
	IL_0c1f:            Temp_82=a(L"\x6429\x492B\x5A2D\x742F\x5B31\x5333",V_8);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c24:                                                                        //ldc.i4.s				36
	IL_0c26:                                                                        //box				System::Int32
	IL_0c2b:            Temp_45->Add(safe_cast<System::Object^>(Temp_82),safe_cast<System::Object^>(36));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0c30:                                                                        //dup
	IL_0c31:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7735\x6B37\x6A39\x683B\x4C3D\x253F\x2741\x1243\x2F45\x2D47\x3D49\x134B\x164D\x004F\x0D51\x1A53\x1355\x0C57"
	IL_0c36:                                                                        //ldloc				V_8
	IL_0c3a:            Temp_83=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7735\x6B37\x6A39\x683B\x4C3D\x253F\x2741\x1243\x2F45\x2D47\x3D49\x134B\x164D\x004F\x0D51\x1A53\x1355\x0C57",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c3f:                                                                        //ldc.i4.s				37
	IL_0c41:                                                                        //box				System::Int32
	IL_0c46:            Temp_45->Add(safe_cast<System::Object^>(Temp_83),safe_cast<System::Object^>(37));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0c4b:                                                                        //dup
	IL_0c4c:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7735\x6B37\x6A39\x683B\x4C3D\x253F\x2741\x1243\x2F45\x2D47\x3D49\x134B\x7C4D\x0F4F\x1C51\x1153\x0255"
	IL_0c51:                                                                        //ldloc				V_8
	IL_0c55:            Temp_84=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7735\x6B37\x6A39\x683B\x4C3D\x253F\x2741\x1243\x2F45\x2D47\x3D49\x134B\x7C4D\x0F4F\x1C51\x1153\x0255",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c5a:                                                                        //ldc.i4.s				38
	IL_0c5c:                                                                        //box				System::Int32
	IL_0c61:            Temp_45->Add(safe_cast<System::Object^>(Temp_84),safe_cast<System::Object^>(38));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0c66:                                                                        //dup
	IL_0c67:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7535\x5937\x5639\x593B\x503D\x243F\x2341\x3643\x1945\x0647\x2F49\x384B"
	IL_0c6c:                                                                        //ldloc				V_8
	IL_0c70:            Temp_85=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7535\x5937\x5639\x593B\x503D\x243F\x2341\x3643\x1945\x0647\x2F49\x384B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c75:                                                                        //ldc.i4.s				39
	IL_0c77:                                                                        //box				System::Int32
	IL_0c7c:            Temp_45->Add(safe_cast<System::Object^>(Temp_85),safe_cast<System::Object^>(39));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0c81:                                                                        //dup
	IL_0c82:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7535\x5937\x5639\x593B\x503D\x243F\x2341\x3643\x1945\x1847\x3849\x234B\x114D\x1E4F\x3751\x2053"
	IL_0c87:                                                                        //ldloc				V_8
	IL_0c8b:            Temp_86=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x7535\x5937\x5639\x593B\x503D\x243F\x2341\x3643\x1945\x1847\x3849\x234B\x114D\x1E4F\x3751\x2053",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c90:                                                                        //ldc.i4.s				40
	IL_0c92:                                                                        //box				System::Int32
	IL_0c97:            Temp_45->Add(safe_cast<System::Object^>(Temp_86),safe_cast<System::Object^>(40));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0c9c:                                                                        //dup
	IL_0c9d:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x1747\x0449\x094B\x1A4D"
	IL_0ca2:                                                                        //ldloc				V_8
	IL_0ca6:            Temp_87=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x1747\x0449\x094B\x1A4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cab:                                                                        //ldc.i4.s				41
	IL_0cad:                                                                        //box				System::Int32
	IL_0cb2:            Temp_45->Add(safe_cast<System::Object^>(Temp_87),safe_cast<System::Object^>(41));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0cb7:                                                                        //dup
	IL_0cb8:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7A47\x1549\x024B\x2B4D\x244F"
	IL_0cbd:                                                                        //ldloc				V_8
	IL_0cc1:            Temp_88=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7A47\x1549\x024B\x2B4D\x244F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cc6:                                                                        //ldc.i4.s				42
	IL_0cc8:                                                                        //box				System::Int32
	IL_0ccd:            Temp_45->Add(safe_cast<System::Object^>(Temp_88),safe_cast<System::Object^>(42));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0cd2:                                                                        //dup
	IL_0cd3:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7B47\x1549\x024B\x2B4D\x244F"
	IL_0cd8:                                                                        //ldloc				V_8
	IL_0cdc:            Temp_89=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7B47\x1549\x024B\x2B4D\x244F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ce1:                                                                        //ldc.i4.s				43
	IL_0ce3:                                                                        //box				System::Int32
	IL_0ce8:            Temp_45->Add(safe_cast<System::Object^>(Temp_89),safe_cast<System::Object^>(43));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ced:                                                                        //dup
	IL_0cee:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x1747\x1A49\x3E4B\x214D\x0F4F\x1C51\x1153\x0255"
	IL_0cf3:                                                                        //ldloc				V_8
	IL_0cf7:            Temp_90=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x1747\x1A49\x3E4B\x214D\x0F4F\x1C51\x1153\x0255",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cfc:                                                                        //ldc.i4.s				44
	IL_0cfe:                                                                        //box				System::Int32
	IL_0d03:            Temp_45->Add(safe_cast<System::Object^>(Temp_90),safe_cast<System::Object^>(44));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0d08:                                                                        //dup
	IL_0d09:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7A47\x1549\x1C4B\x3C4D\x3F4F\x0D51\x1A53\x1355\x0C57"
	IL_0d0e:                                                                        //ldloc				V_8
	IL_0d12:            Temp_91=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7A47\x1549\x1C4B\x3C4D\x3F4F\x0D51\x1A53\x1355\x0C57",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d17:                                                                        //ldc.i4.s				45
	IL_0d19:                                                                        //box				System::Int32
	IL_0d1e:            Temp_45->Add(safe_cast<System::Object^>(Temp_91),safe_cast<System::Object^>(45));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0d23:                                                                        //dup
	IL_0d24:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7B47\x1549\x1C4B\x3C4D\x3F4F\x0D51\x1A53\x3355\x2C57"
	IL_0d29:                                                                        //ldloc				V_8
	IL_0d2d:            Temp_92=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x5437\x5339\x583B\x5B3D\x0D3F\x2741\x2A43\x3345\x7B47\x1549\x1C4B\x3C4D\x3F4F\x0D51\x1A53\x3355\x2C57",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d32:                                                                        //ldc.i4.s				46
	IL_0d34:                                                                        //box				System::Int32
	IL_0d39:            Temp_45->Add(safe_cast<System::Object^>(Temp_92),safe_cast<System::Object^>(46));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0d3e:                                                                        //dup
	IL_0d3f:                                                                        //ldstr				L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x4837\x5639\x553B\x4A3D\x343F\x2741\x3643\x1945\x0647\x2F49\x384B"
	IL_0d44:                                                                        //ldloc				V_8
	IL_0d48:            Temp_93=a(L"\x4529\x4E2B\x412D\x452F\x4631\x6B33\x6535\x4837\x5639\x553B\x4A3D\x343F\x2741\x3643\x1945\x0647\x2F49\x384B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d4d:                                                                        //ldc.i4.s				47
	IL_0d4f:                                                                        //box				System::Int32
	IL_0d54:            Temp_45->Add(safe_cast<System::Object^>(Temp_93),safe_cast<System::Object^>(47));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0d59:                                                                        //dup
	IL_0d5a:                                                                        //ldstr				L"\x6529\x5E2B\x492D\x1E2F\x7B31\x5A33\x4235\x5D37\x5639\x553B\x773D\x0D3F\x6C41\x0943\x1545\x0647\x6449\x0F4B\x224D\x394F\x3751\x3A53\x2255"
	IL_0d5f:                                                                        //ldloc				V_8
	IL_0d63:            Temp_94=a(L"\x6529\x5E2B\x492D\x1E2F\x7B31\x5A33\x4235\x5D37\x5639\x553B\x773D\x0D3F\x6C41\x0943\x1545\x0647\x6449\x0F4B\x224D\x394F\x3751\x3A53\x2255",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d68:                                                                        //ldc.i4.s				48
	IL_0d6a:                                                                        //box				System::Int32
	IL_0d6f:            Temp_45->Add(safe_cast<System::Object^>(Temp_94),safe_cast<System::Object^>(48));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0d74:                                                                        //dup
	IL_0d75:                                                                        //ldstr				L"\x7A29\x432B\x592D\x552F\x4031\x6133\x4635\x1637\x6D39\x593B\x5C3D\x6E3F\x1741\x0D43\x6845\x1F47\x2F49\x2E4B\x1A4D\x224F\x3751\x3153"
	IL_0d7a:                                                                        //ldloc				V_8
	IL_0d7e:            Temp_95=a(L"\x7A29\x432B\x592D\x552F\x4031\x6133\x4635\x1637\x6D39\x593B\x5C3D\x6E3F\x1741\x0D43\x6845\x1F47\x2F49\x2E4B\x1A4D\x224F\x3751\x3153",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d83:                                                                        //ldc.i4.s				49
	IL_0d85:                                                                        //box				System::Int32
	IL_0d8a:            Temp_45->Add(safe_cast<System::Object^>(Temp_95),safe_cast<System::Object^>(49));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0d8f:                                                                        //dup
	IL_0d90:                                                                        //ldstr				L"\x7A29\x432B\x592D\x552F\x4031\x6133\x4635\x1637\x6D39\x593B\x5C3D\x6E3F\x1741\x0D43\x6845\x0E47\x2B49\x3F4B\x3A4D\x1D4F\x3751\x3A53\x2355"
	IL_0d95:                                                                        //ldloc				V_8
	IL_0d99:            Temp_96=a(L"\x7A29\x432B\x592D\x552F\x4031\x6133\x4635\x1637\x6D39\x593B\x5C3D\x6E3F\x1741\x0D43\x6845\x0E47\x2B49\x3F4B\x3A4D\x1D4F\x3751\x3A53\x2355",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d9e:                                                                        //ldc.i4.s				50
	IL_0da0:                                                                        //box				System::Int32
	IL_0da5:            Temp_45->Add(safe_cast<System::Object^>(Temp_96),safe_cast<System::Object^>(50));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0daa:                                                                        //dup
	IL_0dab:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x732F\x5331\x5833\x5A35\x5A37\x5B39\x5F3B\x553D"
	IL_0db0:                                                                        //ldloc				V_8
	IL_0db4:            Temp_97=a(L"\x7829\x4D2B\x4A2D\x732F\x5331\x5833\x5A35\x5A37\x5B39\x5F3B\x553D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0db9:                                                                        //ldc.i4.s				51
	IL_0dbb:                                                                        //box				System::Int32
	IL_0dc0:            Temp_45->Add(safe_cast<System::Object^>(Temp_97),safe_cast<System::Object^>(51));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0dc5:                                                                        //dup
	IL_0dc6:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x732F\x5331\x5833\x5A35\x5A37\x5B39\x5F3B\x553D\x6E3F\x0C41\x2143\x3245\x7A47"
	IL_0dcb:                                                                        //ldloc				V_8
	IL_0dcf:            Temp_98=a(L"\x7829\x4D2B\x4A2D\x732F\x5331\x5833\x5A35\x5A37\x5B39\x5F3B\x553D\x6E3F\x0C41\x2143\x3245\x7A47",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0dd4:                                                                        //ldc.i4.s				52
	IL_0dd6:                                                                        //box				System::Int32
	IL_0ddb:            Temp_45->Add(safe_cast<System::Object^>(Temp_98),safe_cast<System::Object^>(52));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0de0:                                                                        //dup
	IL_0de1:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x732F\x5D31\x5933\x5435\x5737\x7839\x533B\x463D"
	IL_0de6:                                                                        //ldloc				V_8
	IL_0dea:            Temp_99=a(L"\x7829\x4D2B\x4A2D\x732F\x5D31\x5933\x5435\x5737\x7839\x533B\x463D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0def:                                                                        //ldc.i4.s				53
	IL_0df1:                                                                        //box				System::Int32
	IL_0df6:            Temp_45->Add(safe_cast<System::Object^>(Temp_99),safe_cast<System::Object^>(53));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0dfb:                                                                        //dup
	IL_0dfc:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x742F\x5731\x4733\x5F35\x5F37\x5439\x593B\x4C3D"
	IL_0e01:                                                                        //ldloc				V_8
	IL_0e05:            Temp_100=a(L"\x7829\x4D2B\x4A2D\x742F\x5731\x4733\x5F35\x5F37\x5439\x593B\x4C3D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e0a:                                                                        //ldc.i4.s				54
	IL_0e0c:                                                                        //box				System::Int32
	IL_0e11:            Temp_45->Add(safe_cast<System::Object^>(Temp_100),safe_cast<System::Object^>(54));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0e16:                                                                        //dup
	IL_0e17:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x742F\x5D31\x5733\x5D35"
	IL_0e1c:                                                                        //ldloc				V_8
	IL_0e20:            Temp_101=a(L"\x7829\x4D2B\x4A2D\x742F\x5D31\x5733\x5D35",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e25:                                                                        //ldc.i4.s				55
	IL_0e27:                                                                        //box				System::Int32
	IL_0e2c:            Temp_45->Add(safe_cast<System::Object^>(Temp_101),safe_cast<System::Object^>(55));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0e31:                                                                        //dup
	IL_0e32:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x742F\x5D31\x5733\x5D35\x1637\x7439\x593B\x4A3D\x723F"
	IL_0e37:                                                                        //ldloc				V_8
	IL_0e3b:            Temp_102=a(L"\x7829\x4D2B\x4A2D\x742F\x5D31\x5733\x5D35\x1637\x7439\x593B\x4A3D\x723F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e40:                                                                        //ldc.i4.s				56
	IL_0e42:                                                                        //box				System::Int32
	IL_0e47:            Temp_45->Add(safe_cast<System::Object^>(Temp_102),safe_cast<System::Object^>(56));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0e4c:                                                                        //dup
	IL_0e4d:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x752F\x5631\x5D33\x4235\x5737\x4839"
	IL_0e52:                                                                        //ldloc				V_8
	IL_0e56:            Temp_103=a(L"\x7829\x4D2B\x4A2D\x752F\x5631\x5D33\x4235\x5737\x4839",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e5b:                                                                        //ldc.i4.s				57
	IL_0e5d:                                                                        //box				System::Int32
	IL_0e62:            Temp_45->Add(safe_cast<System::Object^>(Temp_103),safe_cast<System::Object^>(57));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0e67:                                                                        //dup
	IL_0e68:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x772F\x4031\x5D33\x5235"
	IL_0e6d:                                                                        //ldloc				V_8
	IL_0e71:            Temp_104=a(L"\x7829\x4D2B\x4A2D\x772F\x4031\x5D33\x5235",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e76:                                                                        //ldc.i4.s				58
	IL_0e78:                                                                        //box				System::Int32
	IL_0e7d:            Temp_45->Add(safe_cast<System::Object^>(Temp_104),safe_cast<System::Object^>(58));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0e82:                                                                        //dup
	IL_0e83:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x792F\x5C31\x4433\x4335\x4C37\x1439\x723B\x5B3D\x343F\x7041"
	IL_0e88:                                                                        //ldloc				V_8
	IL_0e8c:            Temp_105=a(L"\x7829\x4D2B\x4A2D\x792F\x5C31\x4433\x4335\x4C37\x1439\x723B\x5B3D\x343F\x7041",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e91:                                                                        //ldc.i4.s				59
	IL_0e93:                                                                        //box				System::Int32
	IL_0e98:            Temp_45->Add(safe_cast<System::Object^>(Temp_105),safe_cast<System::Object^>(59));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0e9d:                                                                        //dup
	IL_0e9e:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x7D2F\x5731\x5A33\x4335"
	IL_0ea3:                                                                        //ldloc				V_8
	IL_0ea7:            Temp_106=a(L"\x7829\x4D2B\x4A2D\x7D2F\x5731\x5A33\x4335",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0eac:                                                                        //ldc.i4.s				60
	IL_0eae:                                                                        //box				System::Int32
	IL_0eb3:            Temp_45->Add(safe_cast<System::Object^>(Temp_106),safe_cast<System::Object^>(60));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0eb8:                                                                        //dup
	IL_0eb9:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x7D2F\x4731\x5833\x4235\x5137\x6A39\x5D3B\x593D\x253F"
	IL_0ebe:                                                                        //ldloc				V_8
	IL_0ec2:            Temp_107=a(L"\x7829\x4D2B\x4A2D\x7D2F\x4731\x5833\x4235\x5137\x6A39\x5D3B\x593D\x253F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ec7:                                                                        //ldc.i4.s				61
	IL_0ec9:                                                                        //box				System::Int32
	IL_0ece:            Temp_45->Add(safe_cast<System::Object^>(Temp_107),safe_cast<System::Object^>(61));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ed3:                                                                        //dup
	IL_0ed4:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x602F\x5331\x5A33\x5335\x5437\x5839\x5D3B\x4C3D"
	IL_0ed9:                                                                        //ldloc				V_8
	IL_0edd:            Temp_108=a(L"\x7829\x4D2B\x4A2D\x602F\x5331\x5A33\x5335\x5437\x5839\x5D3B\x4C3D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ee2:                                                                        //ldc.i4.s				62
	IL_0ee4:                                                                        //box				System::Int32
	IL_0ee9:            Temp_45->Add(safe_cast<System::Object^>(Temp_108),safe_cast<System::Object^>(62));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0eee:                                                                        //dup
	IL_0eef:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x622F\x5D31\x4033\x5735\x4C37\x5539\x4E3B"
	IL_0ef4:                                                                        //ldloc				V_8
	IL_0ef8:            Temp_109=a(L"\x7829\x4D2B\x4A2D\x622F\x5D31\x4033\x5735\x4C37\x5539\x4E3B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0efd:                                                                        //ldc.i4.s				63
	IL_0eff:                                                                        //box				System::Int32
	IL_0f04:            Temp_45->Add(safe_cast<System::Object^>(Temp_109),safe_cast<System::Object^>(63));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0f09:                                                                        //dup
	IL_0f0a:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x622F\x5D31\x4033\x5735\x4C37\x5539\x4E3B\x103D\x0E3F\x2741\x3043\x7445"
	IL_0f0f:                                                                        //ldloc				V_8
	IL_0f13:            Temp_110=a(L"\x7829\x4D2B\x4A2D\x622F\x5D31\x4033\x5735\x4C37\x5539\x4E3B\x103D\x0E3F\x2741\x3043\x7445",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f18:                                                                        //ldc.i4.s				64
	IL_0f1a:                                                                        //box				System::Int32
	IL_0f1f:            Temp_45->Add(safe_cast<System::Object^>(Temp_110),safe_cast<System::Object^>(64));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0f24:                                                                        //dup
	IL_0f25:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x632F\x4231\x5133\x5A35\x5437"
	IL_0f2a:                                                                        //ldloc				V_8
	IL_0f2e:            Temp_111=a(L"\x7829\x4D2B\x4A2D\x632F\x4231\x5133\x5A35\x5437",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f33:                                                                        //ldc.i4.s				65
	IL_0f35:                                                                        //box				System::Int32
	IL_0f3a:            Temp_45->Add(safe_cast<System::Object^>(Temp_111),safe_cast<System::Object^>(65));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0f3f:                                                                        //dup
	IL_0f40:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x642F\x5331\x5633\x6535\x4C37\x4839\x553B\x4E3D"
	IL_0f45:                                                                        //ldloc				V_8
	IL_0f49:            Temp_112=a(L"\x7829\x4D2B\x4A2D\x642F\x5331\x5633\x6535\x4C37\x4839\x553B\x4E3D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f4e:                                                                        //ldc.i4.s				66
	IL_0f50:                                                                        //box				System::Int32
	IL_0f55:            Temp_45->Add(safe_cast<System::Object^>(Temp_112),safe_cast<System::Object^>(66));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0f5a:                                                                        //dup
	IL_0f5b:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x642F\x5331\x5633\x6535\x4C37\x4839\x553B\x4E3D\x6E3F\x0C41\x2143\x3245\x7A47"
	IL_0f60:                                                                        //ldloc				V_8
	IL_0f64:            Temp_113=a(L"\x7829\x4D2B\x4A2D\x642F\x5331\x5633\x6535\x4C37\x4839\x553B\x4E3D\x6E3F\x0C41\x2143\x3245\x7A47",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f69:                                                                        //ldc.i4.s				67
	IL_0f6b:                                                                        //box				System::Int32
	IL_0f70:            Temp_45->Add(safe_cast<System::Object^>(Temp_113),safe_cast<System::Object^>(67));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0f75:                                                                        //dup
	IL_0f76:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x642F\x4031\x5133\x5335\x6E37\x5339\x593B\x493D"
	IL_0f7b:                                                                        //ldloc				V_8
	IL_0f7f:            Temp_114=a(L"\x7829\x4D2B\x4A2D\x642F\x4031\x5133\x5335\x6E37\x5339\x593B\x493D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f84:                                                                        //ldc.i4.s				68
	IL_0f86:                                                                        //box				System::Int32
	IL_0f8b:            Temp_45->Add(safe_cast<System::Object^>(Temp_114),safe_cast<System::Object^>(68));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0f90:                                                                        //dup
	IL_0f91:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x642F\x4031\x5133\x5335\x4E37\x5339\x593B\x493D"
	IL_0f96:                                                                        //ldloc				V_8
	IL_0f9a:            Temp_115=a(L"\x7829\x4D2B\x4A2D\x642F\x4031\x5133\x5335\x4E37\x5339\x593B\x493D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f9f:                                                                        //ldc.i4.s				69
	IL_0fa1:                                                                        //box				System::Int32
	IL_0fa6:            Temp_45->Add(safe_cast<System::Object^>(Temp_115),safe_cast<System::Object^>(69));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0fab:                                                                        //dup
	IL_0fac:                                                                        //ldstr				L"\x7829\x4D2B\x4A2D\x642F\x4031\x5133\x5335\x4E37\x5339\x593B\x493D\x6E3F\x0C41\x2143\x3245\x7A47"
	IL_0fb1:                                                                        //ldloc				V_8
	IL_0fb5:            Temp_116=a(L"\x7829\x4D2B\x4A2D\x642F\x4031\x5133\x5335\x4E37\x5339\x593B\x493D\x6E3F\x0C41\x2143\x3245\x7A47",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0fba:                                                                        //ldc.i4.s				70
	IL_0fbc:                                                                        //box				System::Int32
	IL_0fc1:            Temp_45->Add(safe_cast<System::Object^>(Temp_116),safe_cast<System::Object^>(70));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0fc6:                                                                        //dup
	IL_0fc7:                                                                        //ldstr				L"\x7829\x492B\x482D\x5C2F\x5731\x5733\x4235\x5737\x4839"
	IL_0fcc:                                                                        //ldloc				V_8
	IL_0fd0:            Temp_117=a(L"\x7829\x492B\x482D\x5C2F\x5731\x5733\x4235\x5737\x4839",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0fd5:                                                                        //ldc.i4.s				71
	IL_0fd7:                                                                        //box				System::Int32
	IL_0fdc:            Temp_45->Add(safe_cast<System::Object^>(Temp_117),safe_cast<System::Object^>(71));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0fe1:                                                                        //dup
	IL_0fe2:                                                                        //ldstr				L"\x7929\x492B\x4F2D\x432F\x5931\x4D33\x5335\x4A37"
	IL_0fe7:                                                                        //ldloc				V_8
	IL_0feb:            Temp_118=a(L"\x7929\x492B\x4F2D\x432F\x5931\x4D33\x5335\x4A37",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ff0:                                                                        //ldc.i4.s				72
	IL_0ff2:                                                                        //box				System::Int32
	IL_0ff7:            Temp_45->Add(safe_cast<System::Object^>(Temp_118),safe_cast<System::Object^>(72));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ffc:                                                                        //dup
	IL_0ffd:                                                                        //ldstr				L"\x7929\x492B\x582D\x552F\x5C31\x7B33\x5435\x5237\x5F39\x5F3B\x4A3D\x333F\x6C41\x0943\x3F45\x1B47\x3B49\x204B\x0D4D\x3C4F\x3B51\x3153\x3855\x2C57"
	IL_1002:                                                                        //ldloc				V_8
	IL_1006:            Temp_119=a(L"\x7929\x492B\x582D\x552F\x5C31\x7B33\x5435\x5237\x5F39\x5F3B\x4A3D\x333F\x6C41\x0943\x3F45\x1B47\x3B49\x204B\x0D4D\x3C4F\x3B51\x3153\x3855\x2C57",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_100b:                                                                        //ldc.i4.s				73
	IL_100d:                                                                        //box				System::Int32
	IL_1012:            Temp_45->Add(safe_cast<System::Object^>(Temp_119),safe_cast<System::Object^>(73));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1017:                                                                        //dup
	IL_1018:                                                                        //ldstr				L"\x7929\x452B\x4C2D\x552F\x4031\x5D33\x4E35\x1637\x6A39\x783B\x783D"
	IL_101d:                                                                        //ldloc				V_8
	IL_1021:            Temp_120=a(L"\x7929\x452B\x4C2D\x552F\x4031\x5D33\x4E35\x1637\x6A39\x783B\x783D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1026:                                                                        //ldc.i4.s				74
	IL_1028:                                                                        //box				System::Int32
	IL_102d:            Temp_45->Add(safe_cast<System::Object^>(Temp_120),safe_cast<System::Object^>(74));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1032:                                                                        //dup
	IL_1033:                                                                        //ldstr				L"\x7929\x452B\x4C2D\x552F\x4031\x5D33\x4E35\x1637\x6F39\x483B\x573D\x2C3F\x3141"
	IL_1038:                                                                        //ldloc				V_8
	IL_103c:            Temp_121=a(L"\x7929\x452B\x4C2D\x552F\x4031\x5D33\x4E35\x1637\x6F39\x483B\x573D\x2C3F\x3141",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1041:                                                                        //ldc.i4.s				75
	IL_1043:                                                                        //box				System::Int32
	IL_1048:            Temp_45->Add(safe_cast<System::Object^>(Temp_121),safe_cast<System::Object^>(75));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_104d:                                                                        //dup
	IL_104e:                                                                        //ldstr				L"\x7929\x472B\x572D\x522F\x5D31\x4133\x5835\x5C37\x1439\x6A3B\x573D\x333F\x3741\x2543\x2A45\x1B47\x3E49\x354B\x224D\x354F\x2151"
	IL_1053:                                                                        //ldloc				V_8
	IL_1057:            Temp_122=a(L"\x7929\x472B\x572D\x522F\x5D31\x4133\x5835\x5C37\x1439\x6A3B\x573D\x333F\x3741\x2543\x2A45\x1B47\x3E49\x354B\x224D\x354F\x2151",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_105c:                                                                        //ldc.i4.s				76
	IL_105e:                                                                        //box				System::Int32
	IL_1063:            Temp_45->Add(safe_cast<System::Object^>(Temp_122),safe_cast<System::Object^>(76));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1068:                                                                        //dup
	IL_1069:                                                                        //ldstr				L"\x7F29\x5F2B\x4B2D\x422F\x7131\x5B33\x5835\x4C37\x4839\x533B\x523D\x023F\x2341\x3743\x2345"
	IL_106e:                                                                        //ldloc				V_8
	IL_1072:            Temp_123=a(L"\x7F29\x5F2B\x4B2D\x422F\x7131\x5B33\x5835\x4C37\x4839\x533B\x523D\x023F\x2341\x3743\x2345",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1077:                                                                        //ldc.i4.s				77
	IL_1079:                                                                        //box				System::Int32
	IL_107e:            Temp_45->Add(safe_cast<System::Object^>(Temp_123),safe_cast<System::Object^>(77));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1083:                                                                        //dup
	IL_1084:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F"
	IL_1089:                                                                        //ldloc				V_8
	IL_108d:            Temp_124=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1092:                                                                        //ldc.i4.s				78
	IL_1094:                                                                        //box				System::Int32
	IL_1099:            Temp_45->Add(safe_cast<System::Object^>(Temp_124),safe_cast<System::Object^>(78));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_109e:                                                                        //dup
	IL_109f:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0543\x2545\x3C47\x2349\x234B\x204D\x184F\x3351\x3A53\x3255\x3457\x3F59\x2E5B"
	IL_10a4:                                                                        //ldloc				V_8
	IL_10a8:            Temp_125=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0543\x2545\x3C47\x2349\x234B\x204D\x184F\x3351\x3A53\x3255\x3457\x3F59\x2E5B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10ad:                                                                        //ldc.i4.s				79
	IL_10af:                                                                        //box				System::Int32
	IL_10b4:            Temp_45->Add(safe_cast<System::Object^>(Temp_125),safe_cast<System::Object^>(79));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_10b9:                                                                        //dup
	IL_10ba:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0543\x1545\x0C47\x0349"
	IL_10bf:                                                                        //ldloc				V_8
	IL_10c3:            Temp_126=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0543\x1545\x0C47\x0349",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10c8:                                                                        //ldc.i4.s				80
	IL_10ca:                                                                        //box				System::Int32
	IL_10cf:            Temp_45->Add(safe_cast<System::Object^>(Temp_126),safe_cast<System::Object^>(80));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_10d4:                                                                        //dup
	IL_10d5:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1343\x2345\x2A47\x6449\x0D4B\x2D4D\x244F\x3B51\x2253\x3F55\x2C57\x2359\x1F5B\x315D\x0E5F\x1661\x1663\x0965\x0467"
	IL_10da:                                                                        //ldloc				V_8
	IL_10de:            Temp_127=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1343\x2345\x2A47\x6449\x0D4B\x2D4D\x244F\x3B51\x2253\x3F55\x2C57\x2359\x1F5B\x315D\x0E5F\x1661\x1663\x0965\x0467",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10e3:                                                                        //ldc.i4.s				81
	IL_10e5:                                                                        //box				System::Int32
	IL_10ea:            Temp_45->Add(safe_cast<System::Object^>(Temp_127),safe_cast<System::Object^>(81));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_10ef:                                                                        //dup
	IL_10f0:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0743\x2945\x2547\x2749\x394B\x204D\x394F\x3151\x3553\x2255\x3157\x3559\x325B"
	IL_10f5:                                                                        //ldloc				V_8
	IL_10f9:            Temp_128=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0743\x2945\x2547\x2749\x394B\x204D\x394F\x3151\x3553\x2255\x3157\x3559\x325B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10fe:                                                                        //ldc.i4.s				82
	IL_1100:                                                                        //box				System::Int32
	IL_1105:            Temp_45->Add(safe_cast<System::Object^>(Temp_128),safe_cast<System::Object^>(82));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_110a:                                                                        //dup
	IL_110b:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4C37\x1439\x723B\x7B3D\x143F\x6C41\x0043\x2745\x3C47\x2B49\x2E4B\x2F4D\x234F\x3751\x1753\x3955\x3657\x2E59\x395B\x305D\x145F\x2A61\x0563\x0865\x0C67\x0669\x096B\x1C6D"
	IL_1110:                                                                        //ldloc				V_8
	IL_1114:            Temp_129=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4C37\x1439\x723B\x7B3D\x143F\x6C41\x0043\x2745\x3C47\x2B49\x2E4B\x2F4D\x234F\x3751\x1753\x3955\x3657\x2E59\x395B\x305D\x145F\x2A61\x0563\x0865\x0C67\x0669\x096B\x1C6D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1119:                                                                        //ldc.i4.s				83
	IL_111b:                                                                        //box				System::Int32
	IL_1120:            Temp_45->Add(safe_cast<System::Object^>(Temp_129),safe_cast<System::Object^>(83));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1125:                                                                        //dup
	IL_1126:                                                                        //ldstr				L"\x0A29\x7B2B\x412D\x422F\x5931\x5233\x5A35\x5737\x4D39\x123B\x703D\x053F\x1641\x6A43\x0345\x2547\x2B49\x254B\x224D\x164F\x3B51\x3853\x2255\x3D57\x2859\x105B\x375D\x025F\x1061\x0563\x1465\x1167"
	IL_112b:                                                                        //ldloc				V_8
	IL_112f:            Temp_130=a(L"\x0A29\x7B2B\x412D\x422F\x5931\x5233\x5A35\x5737\x4D39\x123B\x703D\x053F\x1641\x6A43\x0345\x2547\x2B49\x254B\x224D\x164F\x3B51\x3853\x2255\x3D57\x2859\x105B\x375D\x025F\x1061\x0563\x1465\x1167",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1134:                                                                        //ldc.i4.s				84
	IL_1136:                                                                        //box				System::Int32
	IL_113b:            Temp_45->Add(safe_cast<System::Object^>(Temp_130),safe_cast<System::Object^>(84));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1140:                                                                        //dup
	IL_1141:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0A43\x2945\x3C47\x2349\x2A4B\x274D\x334F\x3351\x2053\x3F55\x3757\x3459\x195B\x305D\x075F\x0B61\x0A63\x0365"
	IL_1146:                                                                        //ldloc				V_8
	IL_114a:            Temp_131=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x0A43\x2945\x3C47\x2349\x2A4B\x274D\x334F\x3351\x2053\x3F55\x3757\x3459\x195B\x305D\x075F\x0B61\x0A63\x0365",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_114f:                                                                        //ldc.i4.s				85
	IL_1151:                                                                        //box				System::Int32
	IL_1156:            Temp_45->Add(safe_cast<System::Object^>(Temp_131),safe_cast<System::Object^>(85));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_115b:                                                                        //dup
	IL_115c:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4C37\x1439\x723B\x7B3D\x143F\x6C41\x1743\x2345\x2B47\x3F49\x3E4B\x274D\x244F\x2B51\x7A53\x1555\x3457\x3359\x395B\x305D\x145F"
	IL_1161:                                                                        //ldloc				V_8
	IL_1165:            Temp_132=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4C37\x1439\x723B\x7B3D\x143F\x6C41\x1743\x2345\x2B47\x3F49\x3E4B\x274D\x244F\x2B51\x7A53\x1555\x3457\x3359\x395B\x305D\x145F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_116a:                                                                        //ldc.i4.s				86
	IL_116c:                                                                        //box				System::Int32
	IL_1171:            Temp_45->Add(safe_cast<System::Object^>(Temp_132),safe_cast<System::Object^>(86));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1176:                                                                        //dup
	IL_1177:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1743\x0B45\x1B47\x6449\x1F4B\x2B4D\x3E4F\x3651"
	IL_117c:                                                                        //ldloc				V_8
	IL_1180:            Temp_133=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1743\x0B45\x1B47\x6449\x1F4B\x2B4D\x3E4F\x3651",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1185:                                                                        //ldc.i4.s				87
	IL_1187:                                                                        //box				System::Int32
	IL_118c:            Temp_45->Add(safe_cast<System::Object^>(Temp_133),safe_cast<System::Object^>(87));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1191:                                                                        //dup
	IL_1192:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1343\x2345\x2A47\x6449\x084B\x2B4D\x234F\x3B51\x3353\x3855\x3D57\x2859"
	IL_1197:                                                                        //ldloc				V_8
	IL_119b:            Temp_134=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1343\x2345\x2A47\x6449\x084B\x2B4D\x234F\x3B51\x3353\x3855\x3D57\x2859",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11a0:                                                                        //ldc.i4.s				88
	IL_11a2:                                                                        //box				System::Int32
	IL_11a7:            Temp_45->Add(safe_cast<System::Object^>(Temp_134),safe_cast<System::Object^>(88));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_11ac:                                                                        //dup
	IL_11ad:                                                                        //ldstr				L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1343\x2345\x2A47\x6449\x1E4B\x2B4D\x204F\x3D51\x2653\x2255"
	IL_11b2:                                                                        //ldloc				V_8
	IL_11b6:            Temp_135=a(L"\x7D29\x432B\x5C2D\x5B2F\x5431\x5833\x5935\x4F37\x1439\x723B\x7B3D\x143F\x6C41\x1343\x2345\x2A47\x6449\x1E4B\x2B4D\x204F\x3D51\x2653\x2255",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11bb:                                                                        //ldc.i4.s				89
	IL_11bd:                                                                        //box				System::Int32
	IL_11c2:            Temp_45->Add(safe_cast<System::Object^>(Temp_135),safe_cast<System::Object^>(89));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_11c7:                                                                        //dup
	IL_11c8:                                                                        //ldstr				L"\x7329\x492B\x542D\x592F\x5731\x1A33\x7535\x5737\x5739\x513B\x513D\x2E3F"
	IL_11cd:                                                                        //ldloc				V_8
	IL_11d1:            Temp_136=a(L"\x7329\x492B\x542D\x592F\x5731\x1A33\x7535\x5737\x5739\x513B\x513D\x2E3F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11d6:                                                                        //ldc.i4.s				90
	IL_11d8:                                                                        //box				System::Int32
	IL_11dd:            Temp_45->Add(safe_cast<System::Object^>(Temp_136),safe_cast<System::Object^>(90));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_11e2:                                                                        //volatile.
	IL_11e4:            Root::T_x188::F_x13=Temp_45;                                //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x13
	IL_11e9:                                                                        //ldc.i4				0xb
	IL_11ee:            V_7=11;                                                     //stloc				V_7
	IL_11f2:            /*goto IL_0016;*/goto IL_11f7;                              //br				IL_0016
	IL_11f7:            goto IL_0328;                                               //br				IL_0328
	IL_11fc:                                                                        //ldc.i4				0x4
	IL_1201:            V_7=4;                                                      //stloc				V_7
	IL_1205:            /*goto IL_0016;*/goto IL_120a;                              //br				IL_0016
	IL_120a:            goto IL_120c;                                               //br.s				IL_120c
	IL_120c:                                                                        //ldarg.1
	IL_120d:            Temp_1=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_1212:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_1217:            V_5=Temp_2;                                                 //stloc.s				V_5
	IL_1219:                                                                        //ldc.i4				0x7
	IL_121e:            V_7=7;                                                      //stloc				V_7
	IL_1222:            /*goto IL_0016;*/goto IL_1227;                              //br				IL_0016
	IL_1227:            /*goto IL_0478;*/goto IL_047701;                            //br				IL_0478
	IL_122c:                                                                        //ldarg.1
	IL_122d:            Temp_147=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_1232:            Temp_148=safe_cast<System::Collections::IEnumerable^>(Temp_147)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_1237:            V_5=Temp_148;                                               //stloc.s				V_5
	IL_1239:                                                                        //ldc.i4				0x6
	IL_123e:            V_7=6;                                                      //stloc				V_7
	IL_1242:            /*goto IL_0016;*/goto IL_1247;                              //br				IL_0016
	IL_1247:            /*goto IL_035a;*/goto IL_035501;                            //br				IL_035a
	IL_124c:                                                                        //ldloc.3
	IL_124d:            return V_3;                                                 //ret

}
inline System::Boolean Root::T_x83::M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Int32 Temp_7 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	System::Boolean V_2 = false;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_7=16;                                                     //stloc				V_7
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:            V_0=0;                                                      //stloc.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_0=A_0->NestedTypes;                                    //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0014:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0019:            V_3=Temp_1;                                                 //stloc.3
	IL_001a:            /*goto IL_001e;*/goto IL_001D01;                            //br.s				IL_001e
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:            return false;                                               //ret
	IL_001D01:          try{
	IL_001e:                                                                        //ldc.i4				0x8
	IL_0023:            V_5=8;                                                      //stloc				V_5
	IL_0027:            /*goto IL_002b;*/goto IL_0029;                              //br.s				IL_002b
	IL_0029:            goto IL_005c;                                               //br.s				IL_005c
	IL_002b:                                                                        //ldloc				V_5
	IL_002f:            switch(V_5){case 0:goto IL_00f0;case 1:goto IL_00d3;case 2:goto IL_012b;case 3:goto IL_0109;case 4:goto IL_011b;case 5:goto IL_00c1;case 6:goto IL_007c;case 7:goto IL_0069;case 8:goto IL_0029;case 9:goto IL_0098;};//switch				(IL_00f0,IL_00d3,IL_012b,IL_0109,IL_011b,IL_00c1,IL_007c,IL_0069,IL_0029,IL_0098)
	IL_005c:            goto IL_005e;                                               //br.s				IL_005e
	IL_005e:                                                                        //ldc.i4				0x7
	IL_0063:            V_5=7;                                                      //stloc				V_5
	IL_0067:            /*goto IL_002b;*/goto IL_0069;                              //br.s				IL_002b
	IL_0069:                                                                        //ldloc.3
	IL_006a:            Temp_2=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_006f:            if(Temp_2)goto IL_0081;                                     //brtrue.s				IL_0081
	IL_0071:                                                                        //ldc.i4				0x6
	IL_0076:            V_5=6;                                                      //stloc				V_5
	IL_007a:            /*goto IL_002b;*/goto IL_007c;                              //br.s				IL_002b
	IL_007c:            goto IL_011d;                                               //br				IL_011d
	IL_0081:                                                                        //ldloc.3
	IL_0082:            Temp_3=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0087:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_008c:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_3);//stloc.1
	IL_008d:                                                                        //ldc.i4				0x9
	IL_0092:            V_5=9;                                                      //stloc				V_5
	IL_0096:            /*goto IL_002b;*/goto IL_0098;                              //br.s				IL_002b
	IL_0098:                                                                        //ldarg.1
	IL_0099:            Temp_4=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_009e:                                                                        //ldstr				L"\x122D\x602F\x4031\x5D33\x4035\x5937\x4E39\x593B\x773D\x2D3F\x3241\x2843\x2345\x2547\x2F49\x224B\x3A4D\x314F\x2651\x3D53\x3955\x3657\x1E59\x395B\x2A5D\x015F\x0B61\x0863\x1565\x5667"
	IL_00a3:                                                                        //ldloc				V_7
	IL_00a7:            Temp_5=a(L"\x122D\x602F\x4031\x5D33\x4035\x5937\x4E39\x593B\x773D\x2D3F\x3241\x2843\x2345\x2547\x2F49\x224B\x3A4D\x314F\x2651\x3D53\x3955\x3657\x1E59\x395B\x2A5D\x015F\x0B61\x0863\x1565\x5667",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ac:            Temp_6=(Temp_4 == Temp_5);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00b1:            if(!Temp_6)goto IL_00d8;                                    //brfalse.s				IL_00d8
	IL_00b3:                                                                        //ldc.i4				0x5
	IL_00b8:            V_5=5;                                                      //stloc				V_5
	IL_00bc:            /*goto IL_002b;*/goto IL_00c1;                              //br				IL_002b
	IL_00c1:            goto IL_010b;                                               //br.s				IL_010b
	IL_00c3:                                                                        //ldc.i4.1
	IL_00c4:            V_2=true;                                                   //stloc.2
	IL_00c5:                                                                        //ldc.i4				0x1
	IL_00ca:            V_5=1;                                                      //stloc				V_5
	IL_00ce:            /*goto IL_002b;*/goto IL_00d3;                              //br				IL_002b
	IL_00d3:            goto IL_0180;                                               //leave				IL_0180
	IL_00d8:                                                                        //ldloc.0
	IL_00d9:                                                                        //ldarg.0
	IL_00da:                                                                        //ldloc.1
	IL_00db:            Temp_7=this->M_x1(V_1);                                     //call				System::Int32 Root::T_x83::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00e0:                                                                        //add
	IL_00e1:            V_0=(V_0 + Temp_7);                                         //stloc.0
	IL_00e2:                                                                        //ldc.i4				0x0
	IL_00e7:            V_5=0;                                                      //stloc				V_5
	IL_00eb:            /*goto IL_002b;*/goto IL_00f0;                              //br				IL_002b
	IL_00f0:                                                                        //ldloc.0
	IL_00f1:                                                                        //ldc.i4				0xfa
	IL_00f6:            if(V_0<=250)goto IL_005e;                                   //ble				IL_005e
	IL_00fb:                                                                        //ldc.i4				0x3
	IL_0100:            V_5=3;                                                      //stloc				V_5
	IL_0104:            /*goto IL_002b;*/goto IL_0109;                              //br				IL_002b
	IL_0109:            goto IL_00c3;                                               //br.s				IL_00c3
	IL_010b:                                                                        //ldc.i4.1
	IL_010c:            V_2=true;                                                   //stloc.2
	IL_010d:                                                                        //ldc.i4				0x4
	IL_0112:            V_5=4;                                                      //stloc				V_5
	IL_0116:            /*goto IL_002b;*/goto IL_011b;                              //br				IL_002b
	IL_011b:            goto IL_0180;                                               //leave.s				IL_0180
	IL_011d:                                                                        //ldc.i4				0x2
	IL_0122:            V_5=2;                                                      //stloc				V_5
	IL_0126:            /*goto IL_002b;*/goto IL_012b;                              //br				IL_002b
	IL_012b:            goto IL_001c;                                               //leave				IL_001c
	                    ;}
	                    finally{
	IL_0130:            goto IL_0147;                                               //br.s				IL_0147
	IL_0132:                                                                        //ldloc				V_6
	IL_0136:            switch(V_6){case 0:goto IL_0169;case 1:goto IL_015a;case 2:goto IL_017d;};//switch				(IL_0169,IL_015a,IL_017d)
	IL_0147:                                                                        //ldloc.3
	IL_0148:                                                                        //isinst				System::IDisposable
	IL_014d:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_014f:                                                                        //ldc.i4				0x1
	IL_0154:            V_6=1;                                                      //stloc				V_6
	IL_0158:            /*goto IL_0132;*/goto IL_015a;                              //br.s				IL_0132
	IL_015a:                                                                        //ldloc.s				V_4
	IL_015c:            if(V_4==nullptr)goto IL_017f;                               //brfalse.s				IL_017f
	IL_015e:                                                                        //ldc.i4				0x0
	IL_0163:            V_6=0;                                                      //stloc				V_6
	IL_0167:            /*goto IL_0132;*/goto IL_0169;                              //br.s				IL_0132
	IL_0169:            goto IL_016b;                                               //br.s				IL_016b
	IL_016b:                                                                        //ldloc.s				V_4
	IL_016d:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0172:                                                                        //ldc.i4				0x2
	IL_0177:            V_6=2;                                                      //stloc				V_6
	IL_017b:            /*goto IL_0132;*/goto IL_017d;                              //br.s				IL_0132
	IL_017d:            goto IL_017f;                                               //br.s				IL_017f
	IL_017f:                                                                        //endfinally
	                    ;}
	IL_0180:                                                                        //ldloc.2
	IL_0181:            return V_2;                                                 //ret

}
inline void Root::T_x83::M_x2(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnGotFocus by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x75^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::OnGotFocus(A_0);           //call				void System::Windows::Forms::Control::OnGotFocus(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x11;                                         //ldfld				Root::T_x75^ Root::T_x83 F_x11
	IL_000d:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean Root::T_x75::Focus()
	IL_0012:                                                                        //pop
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x83::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->M_x1(safe_cast<Reflector::CodeModel::ILanguage^>(nullptr));//call				void Root::T_x83::M_x1(Reflector::CodeModel::ILanguage^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            this->M_x1(false);                                          //call				void Root::T_x83::M_x1(System::Boolean)
	IL_000e:            return;                                                     //ret

}
