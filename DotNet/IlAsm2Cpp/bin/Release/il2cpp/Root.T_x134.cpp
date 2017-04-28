#include "global_xref.h"

inline Root::T_x134::T_x134(Reflector::IConfigurationManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Reflector::IConfigurationManager^ Root::T_x134 F_x1
	IL_000d:            return;                                                     //ret

}
//[System::Diagnostics::DebuggerHidden()]
inline System::DateTime Root::T_x134::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Reflection::Module^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::IO::FileStream^ Temp_3 = nullptr;
	System::IO::BinaryReader^ Temp_4 = nullptr;
	Root::T_x134::T_x1^ Temp_5 = nullptr;
	System::DateTime Temp_6;
	System::Int32 Temp_7 = 0;
	System::TimeSpan Temp_8;
	System::DateTime Temp_9;
	System::DateTime Temp_10;
	//local variables.
	System::IO::BinaryReader^ V_0 = nullptr;
	Root::T_x134::T_x1^ V_1 = nullptr;
	System::DateTime V_2;
	System::DateTime V_3;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldtoken				Reflector::IPackage
	IL_0005:            Temp_0=Reflector::IPackage::typeid;                         //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_000a:            Temp_1=Temp_0->Module;                                      //callvirt				System::Reflection::Module^ System::Type::get_Module()
	IL_000f:            Temp_2=Temp_1->FullyQualifiedName;                          //callvirt				System::String^ System::Reflection::Module::get_FullyQualifiedName()
	IL_0014:            Temp_3=System::IO::File::OpenRead(Temp_2);                  //call				System::IO::FileStream^ System::IO::File::OpenRead(System::String^)
	IL_0019:            Temp_4=gcnew System::IO::BinaryReader(safe_cast<System::IO::Stream^>(Temp_3));//newobj				void System::IO::BinaryReader::.ctor(System::IO::Stream^)
	IL_001e:            V_0=Temp_4;                                                 //stloc.0
	IL_001f:            /*goto IL_0021;*/goto IL_001F01;                            //br.s				IL_0021
	IL_001F01:          try{
	IL_0021:                                                                        //ldloc.0
	IL_0022:            Temp_5=gcnew Root::T_x134::T_x1(V_0);                       //newobj				void Root::T_x134::T_x1::.ctor(System::IO::BinaryReader^)
	IL_0027:            V_1=Temp_5;                                                 //stloc.1
	IL_0028:                                                                        //ldc.i4				0x7b2
	IL_002d:                                                                        //ldc.i4.1
	IL_002e:                                                                        //ldc.i4.1
	IL_002f:            Temp_6=System::DateTime(safe_cast<System::Int32>(1970),safe_cast<System::Int32>(1),safe_cast<System::Int32>(1));//newobj				void System::DateTime::.ctor(System::Int32,System::Int32,System::Int32)
	IL_0034:                                                                        //ldc.i4.0
	IL_0035:                                                                        //ldc.i4.0
	IL_0036:                                                                        //ldloc.1
	IL_0037:            Temp_7=V_1->M_x1();                                         //callvirt				System::Int32 Root::T_x134::T_x1::M_x1()
	IL_003c:            Temp_8=System::TimeSpan(safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),Temp_7);//newobj				void System::TimeSpan::.ctor(System::Int32,System::Int32,System::Int32)
	IL_0041:            Temp_9=(Temp_6 + Temp_8);                                   //call				System::DateTime System::DateTime::op_Addition(System::DateTime,System::TimeSpan)
	IL_0046:            V_2=Temp_9;                                                 //stloc.2
	IL_0047:                                                                        //ldloca.s				V_2
	IL_0049:            Temp_10=V_2.ToLocalTime();                                  //call				System::DateTime System::DateTime::ToLocalTime()
	IL_004e:            V_2=Temp_10;                                                //stloc.2
	IL_004f:                                                                        //ldloc.2
	IL_0050:            V_3=V_2;                                                    //stloc.3
	IL_0051:            goto IL_0099;                                               //leave.s				IL_0099
	                    ;}
	                    finally{
	IL_0053:                                                                        //ldc.i4				0x1
	IL_0058:            V_4=1;                                                      //stloc				V_4
	IL_005c:            /*goto IL_0060;*/goto IL_005e;                              //br.s				IL_0060
	IL_005e:            goto IL_0075;                                               //br.s				IL_0075
	IL_0060:                                                                        //ldloc				V_4
	IL_0064:            switch(V_4){case 0:goto IL_0096;case 1:goto IL_005e;case 2:goto IL_0083;};//switch				(IL_0096,IL_005e,IL_0083)
	IL_0075:                                                                        //ldloc.0
	IL_0076:            if(V_0==nullptr)goto IL_0098;                               //brfalse.s				IL_0098
	IL_0078:                                                                        //ldc.i4				0x2
	IL_007d:            V_4=2;                                                      //stloc				V_4
	IL_0081:            /*goto IL_0060;*/goto IL_0083;                              //br.s				IL_0060
	IL_0083:            goto IL_0085;                                               //br.s				IL_0085
	IL_0085:                                                                        //ldloc.0
	IL_0086:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_008b:                                                                        //ldc.i4				0x0
	IL_0090:            V_4=0;                                                      //stloc				V_4
	IL_0094:            /*goto IL_0060;*/goto IL_0096;                              //br.s				IL_0060
	IL_0096:            goto IL_0098;                                               //br.s				IL_0098
	IL_0098:                                                                        //endfinally
	                    ;}
	IL_0099:            goto IL_009c;                                               //br.s				IL_009c
	IL_009b:                                                                        //break
	IL_009c:                                                                        //ldloc.3
	IL_009d:            return V_3;                                                 //ret

}
//[System::Diagnostics::DebuggerHidden()]
inline System::Boolean Root::T_x134::M_x1(System::Boolean A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	System::Reflection::Assembly^ Temp_5 = nullptr;
	System::Type^ Temp_6 = nullptr;
	array<System::Object^>^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Version^ Temp_9 = nullptr;
	System::Version^ Temp_10 = nullptr;
	System::Version^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Diagnostics::Process^ Temp_14 = nullptr;
	System::Globalization::CultureInfo^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	array<System::Object^>^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Windows::Forms::DialogResult Temp_19 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Net::WebResponse^ Temp_22 = nullptr;
	System::IO::Stream^ Temp_23 = nullptr;
	System::IO::StreamReader^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Version^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Version^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::Int32 Temp_30 = 0;
	System::Windows::Forms::Cursor^ Temp_31 = nullptr;
	System::Windows::Forms::Cursor^ Temp_32 = nullptr;
	System::Boolean Temp_33 = false;
	System::Boolean Temp_34 = false;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::Boolean Temp_41 = false;
	System::Globalization::CultureInfo^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	array<System::Object^>^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::Windows::Forms::DialogResult Temp_46 = (System::Windows::Forms::DialogResult)0;
	System::Globalization::CultureInfo^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	array<System::Object^>^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::Windows::Forms::DialogResult Temp_51 = (System::Windows::Forms::DialogResult)0;
	System::Globalization::CultureInfo^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	array<System::Object^>^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::Windows::Forms::DialogResult Temp_58 = (System::Windows::Forms::DialogResult)0;
	System::Globalization::CultureInfo^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	array<System::Object^>^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	System::Windows::Forms::DialogResult Temp_64 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_65 = nullptr;
	System::Windows::Forms::DialogResult Temp_66 = (System::Windows::Forms::DialogResult)0;
	System::Net::WebExceptionStatus Temp_67 = (System::Net::WebExceptionStatus)0;
	Root::T_x77^ Temp_68 = nullptr;
	Reflector::IConfigurationManager^ Temp_69 = nullptr;
	System::Boolean Temp_70 = false;
	Reflector::IConfigurationManager^ Temp_71 = nullptr;
	Reflector::IConfigurationManager^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	Reflector::IConfiguration^ Temp_74 = nullptr;
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
	System::Net::WebExceptionStatus Temp_89 = (System::Net::WebExceptionStatus)0;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Version^ V_2 = nullptr;
	System::Version^ V_3 = nullptr;
	System::Version^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Windows::Forms::Cursor^ V_6 = nullptr;
	System::IO::StreamReader^ V_7 = nullptr;
	System::Exception^ V_8 = nullptr;
	System::Net::WebException^ V_9 = nullptr;
	Root::T_x77^ V_10 = nullptr;
	Reflector::IConfiguration^ V_11 = nullptr;
	System::String^ V_12 = nullptr;
	System::String^ V_13 = nullptr;
	System::String^ V_14 = nullptr;
	System::String^ V_15 = nullptr;
	System::Windows::Forms::DialogResult V_16 = (System::Windows::Forms::DialogResult)0;
	System::Exception^ V_17 = nullptr;
	System::Boolean V_18 = false;
	array<System::Object^>^ V_19 = nullptr;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_21=18;                                                    //stloc				V_21
	IL_0009:            goto IL_0058;                                               //br.s				IL_0058
	IL_000b:                                                                        //ldloc				V_20
	IL_000f:            switch(V_20){case 0:goto IL_05a7;case 1:goto IL_01ff;case 2:goto IL_0111;case 3:goto IL_0604;case 4:goto IL_02db;case 5:goto IL_01a2;case 6:goto IL_00ea;case 7:goto IL_0192;case 8:goto IL_0582;case 9:goto IL_031d;case 10:goto IL_05f1;case 11:goto IL_0177;case 12:goto IL_01b6;case 13:goto IL_00fd;case 14:goto IL_0212;case 15:goto IL_0226;case 16:goto IL_0618;};//switch				(IL_05a7,IL_01ff,IL_0111,IL_0604,IL_02db,IL_01a2,IL_00ea,IL_0192,IL_0582,IL_031d,IL_05f1,IL_0177,IL_01b6,IL_00fd,IL_0212,IL_0226,IL_0618)
	IL_0058:                                                                        //ldstr				L"\x782F\x5D31\x5933\x5335\x4837\x5B39\x5B3B\x5B3D"
	IL_005d:                                                                        //ldloc				V_21
	IL_0061:            Temp_0=a(L"\x782F\x5D31\x5933\x5335\x4837\x5B39\x5B3B\x5B3D",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0066:            Temp_1=Root::T_x128::M_x1(Temp_0);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_006b:            V_0=Temp_1;                                                 //stloc.0
	IL_006c:                                                                        //ldstr				L"\x712F\x4231\x4433\x5A35\x5137\x5939\x5D3B\x4A3D\x293F\x2D41\x2A43\x0845\x2947\x2749\x294B"
	IL_0071:                                                                        //ldloc				V_21
	IL_0075:            Temp_2=a(L"\x712F\x4231\x4433\x5A35\x5137\x5939\x5D3B\x4A3D\x293F\x2D41\x2A43\x0845\x2947\x2749\x294B",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007a:            Temp_3=Root::T_x128::M_x1(Temp_2);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_007f:            V_1=Temp_3;                                                 //stloc.1
	IL_0080:                                                                        //ldtoken				Root::T_x134
	IL_0085:            Temp_4=Root::T_x134::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_008a:            Temp_5=Temp_4->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_008f:                                                                        //ldtoken				System::Reflection::AssemblyInformationalVersionAttribute
	IL_0094:            Temp_6=System::Reflection::AssemblyInformationalVersionAttribute::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0099:                                                                        //ldc.i4.0
	IL_009a:            Temp_7=Temp_5->GetCustomAttributes(Temp_6,false);           //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_009f:                                                                        //ldc.i4.0
	IL_00a0:                                                                        //ldelem.ref
	IL_00a1:                                                                        //isinst				System::Reflection::AssemblyInformationalVersionAttribute
	IL_00a6:            Temp_8=dynamic_cast<System::Reflection::AssemblyInformationalVersionAttribute^>(Temp_7[0])->InformationalVersion;//callvirt				System::String^ System::Reflection::AssemblyInformationalVersionAttribute::get_InformationalVersion()
	IL_00ab:            Temp_9=gcnew System::Version(Temp_8);                       //newobj				void System::Version::.ctor(System::String^)
	IL_00b0:            V_2=Temp_9;                                                 //stloc.2
	IL_00b1:                                                                        //ldc.i4.0
	IL_00b2:                                                                        //ldc.i4.0
	IL_00b3:                                                                        //ldc.i4.0
	IL_00b4:                                                                        //ldc.i4.0
	IL_00b5:            Temp_10=gcnew System::Version(safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),safe_cast<System::Int32>(0));//newobj				void System::Version::.ctor(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_00ba:            V_3=Temp_10;                                                //stloc.3
	IL_00bb:                                                                        //ldc.i4.0
	IL_00bc:                                                                        //ldc.i4.0
	IL_00bd:                                                                        //ldc.i4.0
	IL_00be:                                                                        //ldc.i4.0
	IL_00bf:            Temp_11=gcnew System::Version(safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),safe_cast<System::Int32>(0));//newobj				void System::Version::.ctor(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_00c4:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_00c6:                                                                        //ldloc.0
	IL_00c7:                                                                        //ldstr				L"\x1F2F\x7631\x5B33\x4135\x5637\x5639\x533B\x5F3D\x243F\x6C41\x2543\x3545\x3847\x3249\x734B\x084D\x394F\x3E51\x3153\x6B55\x0A57\x3F59\x3A5B\x325D\x055F\x0161\x1063\x0965\x1A67\x4C69\x2F6B\x026D\x196F\x1771\x1A73\x0275\x4577\x0179\x3F7B\x127D\xE97F\xE781\xEA83\xF285\xF587\xAC89\xDA8B\xEB8D\xE28F\xE191\xFD93\xF995\xF697\xA799\xE79B\xC89D\xC59F\xD0A1\xD7A3\xCFA5\xC7A7\xC4A9\xD1AB"
	IL_00cc:                                                                        //ldloc				V_21
	IL_00d0:            Temp_12=a(L"\x1F2F\x7631\x5B33\x4135\x5637\x5639\x533B\x5F3D\x243F\x6C41\x2543\x3545\x3847\x3249\x734B\x084D\x394F\x3E51\x3153\x6B55\x0A57\x3F59\x3A5B\x325D\x055F\x0161\x1063\x0965\x1A67\x4C69\x2F6B\x026D\x196F\x1771\x1A73\x0275\x4577\x0179\x3F7B\x127D\xE97F\xE781\xEA83\xF285\xF587\xAC89\xDA8B\xEB8D\xE28F\xE191\xFD93\xF995\xF697\xA799\xE79B\xC89D\xC59F\xD0A1\xD7A3\xCFA5\xC7A7\xC4A9\xD1AB",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d5:            Temp_13=System::String::Concat(V_0,Temp_12);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00da:            V_5=Temp_13;                                                //stloc.s				V_5
	IL_00dc:                                                                        //ldc.i4				0x6
	IL_00e1:            V_20=6;                                                     //stloc				V_20
	IL_00e5:            /*goto IL_000b;*/goto IL_00ea;                              //br				IL_000b
	IL_00ea:            goto IL_02bc;                                               //br				IL_02bc
	IL_00ef:                                                                        //ldc.i4				0xd
	IL_00f4:            V_20=13;                                                    //stloc				V_20
	IL_00f8:            /*goto IL_000b;*/goto IL_00fd;                              //br				IL_000b
	IL_00fd:                                                                        //ldarg.1
	IL_00fe:            if(A_0)goto IL_0194;                                        //brtrue				IL_0194
	IL_0103:                                                                        //ldc.i4				0x2
	IL_0108:            V_20=2;                                                     //stloc				V_20
	IL_010c:            /*goto IL_000b;*/goto IL_0111;                              //br				IL_000b
	IL_0111:            goto IL_05a9;                                               //br				IL_05a9
	IL_011101:          try{
	IL_0116:                                                                        //ldloc.0
	IL_0117:            Temp_14=System::Diagnostics::Process::Start(V_0);           //call				System::Diagnostics::Process^ System::Diagnostics::Process::Start(System::String^)
	IL_011c:                                                                        //pop
	IL_011d:            goto IL_01b8;                                               //leave				IL_01b8
	                    ;}
	                    catch(System::ComponentModel::Win32Exception^ Ex_011D02){
	IL_0122:                                                                        //pop
	IL_0123:                                                                        //ldnull
	IL_0124:            Temp_52=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0129:                                                                        //ldstr				L"\x762F\x5331\x5D33\x5A35\x5D37\x5E39\x1C3B\x4A3D\x2F3F\x6241\x2843\x2745\x3D47\x2449\x2F4B\x264D\x704F\x7551\x2F53\x6655\x2557\x7D59\x725B"
	IL_012e:                                                                        //ldloc				V_21
	IL_0132:            Temp_53=a(L"\x762F\x5331\x5D33\x5A35\x5D37\x5E39\x1C3B\x4A3D\x2F3F\x6241\x2843\x2745\x3D47\x2449\x2F4B\x264D\x704F\x7551\x2F53\x6655\x2557\x7D59\x725B",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0137:                                                                        //ldc.i4.1
	IL_0138:            Temp_54=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_013d:            V_19=Temp_54;                                               //stloc.s				V_19
	IL_013f:                                                                        //ldloc.s				V_19
	IL_0141:                                                                        //ldc.i4.0
	IL_0142:                                                                        //ldloc.0
	IL_0143:            V_19[0]=safe_cast<System::Object^>(V_0);                    //stelem.ref
	IL_0144:                                                                        //ldloc.s				V_19
	IL_0146:            Temp_55=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_52),Temp_53,V_19);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_014b:                                                                        //ldstr				L"\x712F\x4231\x4433\x5A35\x5137\x5939\x5D3B\x4A3D\x293F\x2D41\x2A43\x0845\x2947\x2749\x294B"
	IL_0150:                                                                        //ldloc				V_21
	IL_0154:            Temp_56=a(L"\x712F\x4231\x4433\x5A35\x5137\x5939\x5D3B\x4A3D\x293F\x2D41\x2A43\x0845\x2947\x2749\x294B",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0159:            Temp_57=Root::T_x128::M_x1(Temp_56);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_015e:                                                                        //ldc.i4.0
	IL_015f:                                                                        //ldc.i4.s				48
	IL_0161:            Temp_58=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_55,Temp_57,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0166:                                                                        //pop
	IL_0167:            goto IL_01b8;                                               //leave.s				IL_01b8
	                    ;}
	IL_0169:                                                                        //ldc.i4				0xb
	IL_016e:            V_20=11;                                                    //stloc				V_20
	IL_0172:            /*goto IL_000b;*/goto IL_0177;                              //br				IL_000b
	IL_0177:                                                                        //ldloc.2
	IL_0178:                                                                        //ldloc.s				V_4
	IL_017a:            Temp_34=(V_2 >= V_4);                                       //call				System::Boolean System::Version::op_GreaterThanOrEqual(System::Version^,System::Version^)
	IL_017f:            if(!Temp_34)goto IL_0574;                                   //brfalse				IL_0574
	IL_0184:                                                                        //ldc.i4				0x7
	IL_0189:            V_20=7;                                                     //stloc				V_20
	IL_018d:            /*goto IL_000b;*/goto IL_0192;                              //br				IL_000b
	IL_0192:            goto IL_0204;                                               //br.s				IL_0204
	IL_0194:                                                                        //ldc.i4				0x5
	IL_0199:            V_20=5;                                                     //stloc				V_20
	IL_019d:            /*goto IL_000b;*/goto IL_01a2;                              //br				IL_000b
	IL_01a2:                                                                        //ldarg.1
	IL_01a3:            if(!A_0)goto IL_02b8;                                       //brfalse				IL_02b8
	IL_01a8:                                                                        //ldc.i4				0xc
	IL_01ad:            V_20=12;                                                    //stloc				V_20
	IL_01b1:            /*goto IL_000b;*/goto IL_01b6;                              //br				IL_000b
	IL_01b6:            /*goto IL_022b;*/goto IL_022601;                            //br.s				IL_022b
	IL_01b8:                                                                        //ldc.i4.0
	IL_01b9:            return false;                                               //ret
	IL_01ba:                                                                        //ldnull
	IL_01bb:            Temp_47=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01c0:                                                                        //ldstr				L"\x712F\x1231\x5A33\x5335\x4F37\x1A39\x4A3B\x5B3D\x323F\x3141\x2D43\x2945\x2647\x6A49\x234B\x284D\x704F\x2951\x6453\x2B55\x7857\x3359\x2F5B\x7E5D\x015F\x1461\x0563\x0F65\x0467\x0B69\x0E6B\x026D\x156F\x5271\x0373\x1E75\x1177\x1979\x147B\x5E7D\xE37F\xE381\xEA83\xA685\xE687\xE589\xF88B\xAE8D\xF28F\xF791\xB493\xFF95\xF697\xE999\xE89B\xFF9D\xCC9F\xCEA1\xC1A3\xC2A5\x88A7\xCBA9\xD9AB\xDAAD\xDFAF\xDFB1\xD5B3\xC2B5\xD1B7\xD9B9\xDDBB\xD2BD\xACBF\xBBC1\xEAC3\xE6C5\x98C7\xA6C9\xA9CB\xAFCD\xA3CF\xB7D1\xF4D3\xB2D5\xB7D7\xADD9\xB2DB\xB2DD\x8FDF\x83E1\x80E3\xC6E5\x89E7\x9EE9\xCCEB\xC9ED\x8BEF\xC3F1\x89F3\xD1F5\xD6F7"
	IL_01c5:                                                                        //ldloc				V_21
	IL_01c9:            Temp_48=a(L"\x712F\x1231\x5A33\x5335\x4F37\x1A39\x4A3B\x5B3D\x323F\x3141\x2D43\x2945\x2647\x6A49\x234B\x284D\x704F\x2951\x6453\x2B55\x7857\x3359\x2F5B\x7E5D\x015F\x1461\x0563\x0F65\x0467\x0B69\x0E6B\x026D\x156F\x5271\x0373\x1E75\x1177\x1979\x147B\x5E7D\xE37F\xE381\xEA83\xA685\xE687\xE589\xF88B\xAE8D\xF28F\xF791\xB493\xFF95\xF697\xE999\xE89B\xFF9D\xCC9F\xCEA1\xC1A3\xC2A5\x88A7\xCBA9\xD9AB\xDAAD\xDFAF\xDFB1\xD5B3\xC2B5\xD1B7\xD9B9\xDDBB\xD2BD\xACBF\xBBC1\xEAC3\xE6C5\x98C7\xA6C9\xA9CB\xAFCD\xA3CF\xB7D1\xF4D3\xB2D5\xB7D7\xADD9\xB2DB\xB2DD\x8FDF\x83E1\x80E3\xC6E5\x89E7\x9EE9\xCCEB\xC9ED\x8BEF\xC3F1\x89F3\xD1F5\xD6F7",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ce:                                                                        //ldc.i4.2
	IL_01cf:            Temp_49=gcnew array<System::Object^>(2);                    //newarr				System::Object
	IL_01d4:            V_19=Temp_49;                                               //stloc.s				V_19
	IL_01d6:                                                                        //ldloc.s				V_19
	IL_01d8:                                                                        //ldc.i4.0
	IL_01d9:                                                                        //ldloc.1
	IL_01da:            V_19[0]=safe_cast<System::Object^>(V_1);                    //stelem.ref
	IL_01db:                                                                        //ldloc.s				V_19
	IL_01dd:                                                                        //ldc.i4.1
	IL_01de:                                                                        //ldloc.0
	IL_01df:            V_19[1]=safe_cast<System::Object^>(V_0);                    //stelem.ref
	IL_01e0:                                                                        //ldloc.s				V_19
	IL_01e2:            Temp_50=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_47),Temp_48,V_19);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_01e7:                                                                        //ldloc.1
	IL_01e8:                                                                        //ldc.i4.0
	IL_01e9:                                                                        //ldc.i4.s				48
	IL_01eb:            Temp_51=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_50,V_1,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01f0:                                                                        //pop
	IL_01f1:                                                                        //ldc.i4				0x1
	IL_01f6:            V_20=1;                                                     //stloc				V_20
	IL_01fa:            /*goto IL_000b;*/goto IL_01ff;                              //br				IL_000b
	IL_01ff:            /*goto IL_0116;*/goto IL_011101;                            //br				IL_0116
	IL_0204:                                                                        //ldc.i4				0xe
	IL_0209:            V_20=14;                                                    //stloc				V_20
	IL_020d:            /*goto IL_000b;*/goto IL_0212;                              //br				IL_000b
	IL_0212:                                                                        //ldarg.2
	IL_0213:            if(A_1)goto IL_02ba;                                        //brtrue				IL_02ba
	IL_0218:                                                                        //ldc.i4				0xf
	IL_021d:            V_20=15;                                                    //stloc				V_20
	IL_0221:            /*goto IL_000b;*/goto IL_0226;                              //br				IL_000b
	IL_0226:            goto IL_02dd;                                               //br				IL_02dd
	IL_022601:          try{
	IL_022b:                                                                        //ldloc.s				V_5
	IL_022d:                                                                        //ldstr				L"\x4B2F\x7131\x5833\x5F35\x5D37\x5439\x483B\x433D"
	IL_0232:                                                                        //ldloc				V_21
	IL_0236:            Temp_35=a(L"\x4B2F\x7131\x5833\x5F35\x5D37\x5439\x483B\x433D",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023b:                                                                        //ldstr				L"\x622F\x5731\x5233\x5A35\x5D37\x5939\x483B\x513D\x323F"
	IL_0240:                                                                        //ldloc				V_21
	IL_0244:            Temp_36=a(L"\x622F\x5731\x5233\x5A35\x5D37\x5939\x483B\x513D\x323F",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0249:            Temp_37=V_5->Replace(Temp_35,Temp_36);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_024e:            V_5=Temp_37;                                                //stloc.s				V_5
	IL_0250:                                                                        //ldloc.s				V_5
	IL_0252:                                                                        //ldstr				L"\x4B2F\x6431\x5133\x4435\x4B37\x5339\x533B\x503D\x3D3F"
	IL_0257:                                                                        //ldloc				V_21
	IL_025b:            Temp_38=a(L"\x4B2F\x6431\x5133\x4435\x4B37\x5339\x533B\x503D\x3D3F",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0260:                                                                        //ldloc.2
	IL_0261:            Temp_39=V_2->ToString();                                    //callvirt				System::String^ System::Version::ToString()
	IL_0266:            Temp_40=V_5->Replace(Temp_38,Temp_39);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_026b:            V_5=Temp_40;                                                //stloc.s				V_5
	IL_026d:                                                                        //ldarg.0
	IL_026e:                                                                        //ldloc.s				V_5
	IL_0270:            Temp_41=this->M_x1(V_5);                                    //call				System::Boolean Root::T_x134::M_x1(System::String^)
	IL_0275:            V_18=Temp_41;                                               //stloc.s				V_18
	IL_0277:            goto IL_061d;                                               //leave				IL_061d
	                    ;}
	                    catch(System::Exception^ Ex_027702){
	IL_027c:            V_17=Ex_027702;                                             //stloc.s				V_17
	IL_027e:                                                                        //ldnull
	IL_027f:            Temp_59=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0284:                                                                        //ldstr				L"\x712F\x5C31\x1433\x5335\x4A37\x4839\x533B\x4C3D\x603F\x2D41\x2743\x2545\x3D47\x3849\x294B\x2A4D\x704F\x2551\x3C53\x3F55\x3457\x3F59\x7C5B\x325D\x015F\x1761\x0A63\x0565\x0067\x0369\x026B\x096D\x506F\x0671\x1C73\x1375\x5877\x1379\x127B\x0D7D\xF47F\xE381\xE883\xEA85\xED87\xF889\xB68B\xAE8D\xEB8F\xA291\xE993\xB895"
	IL_0289:                                                                        //ldloc				V_21
	IL_028d:            Temp_60=a(L"\x712F\x5C31\x1433\x5335\x4A37\x4839\x533B\x4C3D\x603F\x2D41\x2743\x2545\x3D47\x3849\x294B\x2A4D\x704F\x2551\x3C53\x3F55\x3457\x3F59\x7C5B\x325D\x015F\x1761\x0A63\x0565\x0067\x0369\x026B\x096D\x506F\x0671\x1C73\x1375\x5877\x1379\x127B\x0D7D\xF47F\xE381\xE883\xEA85\xED87\xF889\xB68B\xAE8D\xEB8F\xA291\xE993\xB895",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0292:                                                                        //ldc.i4.1
	IL_0293:            Temp_61=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_0298:            V_19=Temp_61;                                               //stloc.s				V_19
	IL_029a:                                                                        //ldloc.s				V_19
	IL_029c:                                                                        //ldc.i4.0
	IL_029d:                                                                        //ldloc.s				V_17
	IL_029f:            Temp_62=V_17->Message;                                      //callvirt				System::String^ System::Exception::get_Message()
	IL_02a4:            V_19[0]=safe_cast<System::Object^>(Temp_62);                //stelem.ref
	IL_02a5:                                                                        //ldloc.s				V_19
	IL_02a7:            Temp_63=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_59),Temp_60,V_19);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_02ac:                                                                        //ldloc.1
	IL_02ad:                                                                        //ldc.i4.0
	IL_02ae:                                                                        //ldc.i4.s				16
	IL_02b0:            Temp_64=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_63,V_1,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_02b5:                                                                        //pop
	IL_02b6:            goto IL_02b8;                                               //leave.s				IL_02b8
	                    ;}
	IL_02b8:                                                                        //ldc.i4.0
	IL_02b9:            return false;                                               //ret
	IL_02ba:                                                                        //ldc.i4.0
	IL_02bb:            return false;                                               //ret
	IL_02bc:            Temp_31=System::Windows::Forms::Cursor::Current;            //call				System::Windows::Forms::Cursor^ System::Windows::Forms::Cursor::get_Current()
	IL_02c1:            V_6=Temp_31;                                                //stloc.s				V_6
	IL_02c3:            Temp_32=System::Windows::Forms::Cursors::WaitCursor;        //call				System::Windows::Forms::Cursor^ System::Windows::Forms::Cursors::get_WaitCursor()
	IL_02c8:            System::Windows::Forms::Cursor::Current=Temp_32;            //call				void System::Windows::Forms::Cursor::set_Current(System::Windows::Forms::Cursor^)
	IL_02cd:                                                                        //ldc.i4				0x4
	IL_02d2:            V_20=4;                                                     //stloc				V_20
	IL_02d6:            /*goto IL_000b;*/goto IL_02db;                              //br				IL_000b
	IL_02db:            /*goto IL_031f;*/goto IL_031D01;                            //br.s				IL_031f
	IL_02dd:                                                                        //ldnull
	IL_02de:            Temp_42=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_02e3:                                                                        //ldstr				L"\x692F\x5D31\x4133\x4435\x1837\x4C39\x593B\x4C3D\x333F\x2B41\x2B43\x2845\x6847\x2549\x2A4B\x6E4D\x2B4F\x6251\x2953\x7655\x3157\x2959\x7C5B\x2B5D\x105F\x4261\x1063\x0965\x4867\x0E69\x0D6B\x1A6D\x156F\x5C71"
	IL_02e8:                                                                        //ldloc				V_21
	IL_02ec:            Temp_43=a(L"\x692F\x5D31\x4133\x4435\x1837\x4C39\x593B\x4C3D\x333F\x2B41\x2B43\x2845\x6847\x2549\x2A4B\x6E4D\x2B4F\x6251\x2953\x7655\x3157\x2959\x7C5B\x2B5D\x105F\x4261\x1063\x0965\x4867\x0E69\x0D6B\x1A6D\x156F\x5C71",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02f1:                                                                        //ldc.i4.1
	IL_02f2:            Temp_44=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_02f7:            V_19=Temp_44;                                               //stloc.s				V_19
	IL_02f9:                                                                        //ldloc.s				V_19
	IL_02fb:                                                                        //ldc.i4.0
	IL_02fc:                                                                        //ldloc.1
	IL_02fd:            V_19[0]=safe_cast<System::Object^>(V_1);                    //stelem.ref
	IL_02fe:                                                                        //ldloc.s				V_19
	IL_0300:            Temp_45=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_42),Temp_43,V_19);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0305:                                                                        //ldloc.1
	IL_0306:                                                                        //ldc.i4.0
	IL_0307:                                                                        //ldc.i4.s				64
	IL_0309:            Temp_46=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_45,V_1,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(64));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_030e:                                                                        //pop
	IL_030f:                                                                        //ldc.i4				0x9
	IL_0314:            V_20=9;                                                     //stloc				V_20
	IL_0318:            /*goto IL_000b;*/goto IL_031d;                              //br				IL_000b
	IL_031d:            goto IL_02ba;                                               //br.s				IL_02ba
	IL_031D01:          try{
	IL_031D02:          try{
	IL_031f:                                                                        //ldloc.0
	IL_0320:                                                                        //ldstr				L"\x1F2F\x6031\x5133\x5035\x5437\x5F39\x5F3B\x4A3D\x2F3F\x3041\x6A43\x3045\x2D47\x3849\x3F4B\x274D\x3F4F\x3C51"
	IL_0325:                                                                        //ldloc				V_21
	IL_0329:            Temp_20=a(L"\x1F2F\x6031\x5133\x5035\x5437\x5F39\x5F3B\x4A3D\x2F3F\x3041\x6A43\x3045\x2D47\x3849\x3F4B\x274D\x3F4F\x3C51",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_032e:            Temp_21=System::String::Concat(V_0,Temp_20);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0333:            Temp_22=Root::T_x4::M_x2(Temp_21);                          //call				System::Net::WebResponse^ Root::T_x4::M_x2(System::String^)
	IL_0338:            Temp_23=Temp_22->GetResponseStream();                       //callvirt				System::IO::Stream^ System::Net::WebResponse::GetResponseStream()
	IL_033d:            Temp_24=gcnew System::IO::StreamReader(Temp_23);            //newobj				void System::IO::StreamReader::.ctor(System::IO::Stream^)
	IL_0342:            V_7=Temp_24;                                                //stloc.s				V_7
	IL_0344:            /*goto IL_0346;*/goto IL_034401;                            //br.s				IL_0346
	IL_034401:          try{
	IL_0346:            goto IL_0361;                                               //br.s				IL_0361
	IL_0348:                                                                        //ldloc				V_20
	IL_034c:            switch(V_20){case 0:goto IL_039c;case 1:goto IL_0387;case 2:goto IL_03bf;case 3:goto IL_03b2;};//switch				(IL_039c,IL_0387,IL_03bf,IL_03b2)
	IL_0361:                                                                        //ldloc.s				V_7
	IL_0363:            Temp_25=V_7->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_0368:            Temp_26=gcnew System::Version(Temp_25);                     //newobj				void System::Version::.ctor(System::String^)
	IL_036d:            V_4=Temp_26;                                                //stloc.s				V_4
	IL_036f:                                                                        //ldloc.s				V_7
	IL_0371:            Temp_27=V_7->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_0376:            Temp_28=gcnew System::Version(Temp_27);                     //newobj				void System::Version::.ctor(System::String^)
	IL_037b:            V_3=Temp_28;                                                //stloc.3
	IL_037c:                                                                        //ldc.i4				0x1
	IL_0381:            V_20=1;                                                     //stloc				V_20
	IL_0385:            /*goto IL_0348;*/goto IL_0387;                              //br.s				IL_0348
	IL_0387:                                                                        //ldloc.s				V_7
	IL_0389:            Temp_30=V_7->Peek();                                        //callvirt				System::Int32 System::IO::TextReader::Peek()
	IL_038e:                                                                        //ldc.i4.m1
	IL_038f:            if(Temp_30==-1)goto IL_03b4;                                //beq.s				IL_03b4
	IL_0391:                                                                        //ldc.i4				0x0
	IL_0396:            V_20=0;                                                     //stloc				V_20
	IL_039a:            /*goto IL_0348;*/goto IL_039c;                              //br.s				IL_0348
	IL_039c:            goto IL_039e;                                               //br.s				IL_039e
	IL_039e:                                                                        //ldloc.s				V_7
	IL_03a0:            Temp_29=V_7->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_03a5:            V_5=Temp_29;                                                //stloc.s				V_5
	IL_03a7:                                                                        //ldc.i4				0x3
	IL_03ac:            V_20=3;                                                     //stloc				V_20
	IL_03b0:            /*goto IL_0348;*/goto IL_03b2;                              //br.s				IL_0348
	IL_03b2:            goto IL_03b4;                                               //br.s				IL_03b4
	IL_03b4:                                                                        //ldc.i4				0x2
	IL_03b9:            V_20=2;                                                     //stloc				V_20
	IL_03bd:            /*goto IL_0348;*/goto IL_03bf;                              //br.s				IL_0348
	IL_03bf:            goto IL_0409;                                               //leave.s				IL_0409
	                    ;}
	                    finally{
	IL_03c1:                                                                        //ldc.i4				0x2
	IL_03c6:            V_20=2;                                                     //stloc				V_20
	IL_03ca:            /*goto IL_03ce;*/goto IL_03cc;                              //br.s				IL_03ce
	IL_03cc:            goto IL_03e3;                                               //br.s				IL_03e3
	IL_03ce:                                                                        //ldloc				V_20
	IL_03d2:            switch(V_20){case 0:goto IL_03f2;case 1:goto IL_0406;case 2:goto IL_03cc;};//switch				(IL_03f2,IL_0406,IL_03cc)
	IL_03e3:                                                                        //ldloc.s				V_7
	IL_03e5:            if(V_7==nullptr)goto IL_0408;                               //brfalse.s				IL_0408
	IL_03e7:                                                                        //ldc.i4				0x0
	IL_03ec:            V_20=0;                                                     //stloc				V_20
	IL_03f0:            /*goto IL_03ce;*/goto IL_03f2;                              //br.s				IL_03ce
	IL_03f2:            goto IL_03f4;                                               //br.s				IL_03f4
	IL_03f4:                                                                        //ldloc.s				V_7
	IL_03f6:            /*safe_cast<System::IDisposable^>(V_7)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_03fb:                                                                        //ldc.i4				0x1
	IL_0400:            V_20=1;                                                     //stloc				V_20
	IL_0404:            /*goto IL_03ce;*/goto IL_0406;                              //br.s				IL_03ce
	IL_0406:            goto IL_0408;                                               //br.s				IL_0408
	IL_0408:                                                                        //endfinally
	                    ;}
	IL_0409:            goto IL_0567;                                               //leave				IL_0567
	                    ;}
	                    catch(System::Exception^ Ex_040902){
	IL_040e:            V_8=Ex_040902;                                              //stloc.s				V_8
	IL_0410:                                                                        //ldloc.s				V_6
	IL_0412:            System::Windows::Forms::Cursor::Current=V_6;                //call				void System::Windows::Forms::Cursor::set_Current(System::Windows::Forms::Cursor^)
	IL_0417:                                                                        //ldarg.2
	IL_0418:            if(A_1)goto IL_055f;                                        //brtrue				IL_055f
	IL_041d:            goto IL_0431;                                               //br.s				IL_0431
	IL_041f:                                                                        //ldloc.s				V_9
	IL_0421:            Temp_67=V_9->Status;                                        //callvirt				System::Net::WebExceptionStatus System::Net::WebException::get_Status()
	IL_0426:                                                                        //ldc.i4.1
	IL_0427:            if(safe_cast<System::Int32>(Temp_67)==1)goto IL_0523;       //beq				IL_0523
	IL_042c:            goto IL_0513;                                               //br				IL_0513
	IL_0431:                                                                        //ldnull
	IL_0432:                                                                        //ldloc.s				V_8
	IL_0434:            Temp_65=V_8->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_0439:                                                                        //ldloc.1
	IL_043a:                                                                        //ldc.i4.0
	IL_043b:                                                                        //ldc.i4.s				16
	IL_043d:            Temp_66=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_65,V_1,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0442:                                                                        //pop
	IL_0443:                                                                        //ldloc.s				V_8
	IL_0445:                                                                        //isinst				System::Net::WebException
	IL_044a:            V_9=dynamic_cast<System::Net::WebException^>(V_8);          //stloc.s				V_9
	IL_044c:                                                                        //ldloc.s				V_9
	IL_044e:            if(V_9==nullptr)goto IL_055f;                               //brfalse				IL_055f
	IL_0453:            goto IL_041f;                                               //br.s				IL_041f
	IL_0455:                                                                        //ldloc.s				V_10
	IL_0457:                                                                        //ldarg.0
	IL_0458:            Temp_71=this->F_x1;                                         //ldfld				Reflector::IConfigurationManager^ Root::T_x134 F_x1
	IL_045d:                                                                        //ldnull
	IL_045e:            V_10->M_x1(Temp_71,safe_cast<Reflector::ILanguageManager^>(nullptr));//callvirt				void Root::T_x77::M_x1(Reflector::IConfigurationManager^,Reflector::ILanguageManager^)
	IL_0463:                                                                        //ldarg.0
	IL_0464:            Temp_72=this->F_x1;                                         //ldfld				Reflector::IConfigurationManager^ Root::T_x134 F_x1
	IL_0469:                                                                        //ldstr				L"\x672F\x5731\x5633\x6635\x4A37\x5539\x443B\x473D"
	IL_046e:                                                                        //ldloc				V_21
	IL_0472:            Temp_73=a(L"\x672F\x5731\x5633\x6635\x4A37\x5539\x443B\x473D",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0477:            Temp_74=Temp_72[Temp_73];                                   //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_047c:            V_11=Temp_74;                                               //stloc.s				V_11
	IL_047e:                                                                        //ldloc.s				V_11
	IL_0480:                                                                        //ldstr				L"\x642F\x4B31\x4433\x5335"
	IL_0485:                                                                        //ldloc				V_21
	IL_0489:            Temp_75=a(L"\x642F\x4B31\x4433\x5335",V_21);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_048e:                                                                        //ldstr				L"\x742F\x5731\x5233\x5735\x4D37\x5639\x483B"
	IL_0493:                                                                        //ldloc				V_21
	IL_0497:            Temp_76=a(L"\x742F\x5731\x5233\x5735\x4D37\x5639\x483B",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_049c:            Temp_77=V_11->GetProperty(Temp_75,Temp_76);                 //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_04a1:            V_12=Temp_77;                                               //stloc.s				V_12
	IL_04a3:                                                                        //ldloc.s				V_11
	IL_04a5:                                                                        //ldstr				L"\x712F\x5631\x5033\x4435\x5D37\x4939\x4F3B"
	IL_04aa:                                                                        //ldloc				V_21
	IL_04ae:            Temp_78=a(L"\x712F\x5631\x5033\x4435\x5D37\x4939\x4F3B",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04b3:            Temp_79=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_04b8:            Temp_80=V_11->GetProperty(Temp_78,Temp_79);                 //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_04bd:            V_13=Temp_80;                                               //stloc.s				V_13
	IL_04bf:                                                                        //ldloc.s				V_11
	IL_04c1:                                                                        //ldstr				L"\x652F\x4131\x5133\x4435"
	IL_04c6:                                                                        //ldloc				V_21
	IL_04ca:            Temp_81=a(L"\x652F\x4131\x5133\x4435",V_21);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04cf:            Temp_82=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_04d4:            Temp_83=V_11->GetProperty(Temp_81,Temp_82);                 //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_04d9:            Temp_84=Root::T_x112::M_x1(Temp_83);                        //call				System::String^ Root::T_x112::M_x1(System::String^)
	IL_04de:            V_14=Temp_84;                                               //stloc.s				V_14
	IL_04e0:                                                                        //ldloc.s				V_11
	IL_04e2:                                                                        //ldstr				L"\x602F\x5331\x4733\x4535\x4F37\x5539\x4E3B\x5A3D"
	IL_04e7:                                                                        //ldloc				V_21
	IL_04eb:            Temp_85=a(L"\x602F\x5331\x4733\x4535\x4F37\x5539\x4E3B\x5A3D",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04f0:            Temp_86=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_04f5:            Temp_87=V_11->GetProperty(Temp_85,Temp_86);                 //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_04fa:            Temp_88=Root::T_x112::M_x1(Temp_87);                        //call				System::String^ Root::T_x112::M_x1(System::String^)
	IL_04ff:            V_15=Temp_88;                                               //stloc.s				V_15
	IL_0501:                                                                        //ldloc.s				V_12
	IL_0503:                                                                        //ldloc.s				V_13
	IL_0505:                                                                        //ldloc.s				V_14
	IL_0507:                                                                        //ldloc.s				V_15
	IL_0509:            Root::T_x4::M_x1(V_12,V_13,V_14,V_15);                      //call				void Root::T_x4::M_x1(System::String^,System::String^,System::String^,System::String^)
	IL_050e:            goto IL_02bc;                                               //leave				IL_02bc
	IL_0513:                                                                        //ldloc.s				V_9
	IL_0515:            Temp_89=V_9->Status;                                        //callvirt				System::Net::WebExceptionStatus System::Net::WebException::get_Status()
	IL_051a:                                                                        //ldc.i4.s				15
	IL_051c:            if(safe_cast<System::Int32>(Temp_89)!=15)goto IL_055f;      //bne.un				IL_055f
	IL_0521:            goto IL_0523;                                               //br.s				IL_0523
	IL_0523:            Temp_68=gcnew Root::T_x77();                                //newobj				void Root::T_x77::.ctor()
	IL_0528:            V_10=Temp_68;                                               //stloc.s				V_10
	IL_052a:                                                                        //ldloc.s				V_10
	IL_052c:            V_10->M_x12();                                              //callvirt				void Root::T_x77::M_x12()
	IL_0531:                                                                        //ldloc.s				V_10
	IL_0533:            V_10->M_x2();                                               //callvirt				void Root::T_x77::M_x2()
	IL_0538:                                                                        //ldloc.s				V_10
	IL_053a:                                                                        //ldc.i4.1
	IL_053b:            V_10->StartPosition=safe_cast<System::Windows::Forms::FormStartPosition>(1);//callvirt				void System::Windows::Forms::Form::set_StartPosition(System::Windows::Forms::FormStartPosition)
	IL_0540:                                                                        //ldloc.s				V_10
	IL_0542:                                                                        //ldarg.0
	IL_0543:            Temp_69=this->F_x1;                                         //ldfld				Reflector::IConfigurationManager^ Root::T_x134 F_x1
	IL_0548:                                                                        //ldnull
	IL_0549:            V_10->M_x2(Temp_69,safe_cast<Reflector::ILanguageManager^>(nullptr));//callvirt				void Root::T_x77::M_x2(Reflector::IConfigurationManager^,Reflector::ILanguageManager^)
	IL_054e:                                                                        //ldloc.s				V_10
	IL_0550:            Temp_70=V_10->M_x15();                                      //callvirt				System::Boolean Root::T_x66::M_x15()
	IL_0555:            if(!Temp_70)goto IL_055f;                                   //brfalse				IL_055f
	IL_055a:            goto IL_0455;                                               //br				IL_0455
	IL_055f:                                                                        //ldc.i4.0
	IL_0560:            V_18=false;                                                 //stloc.s				V_18
	IL_0562:            goto IL_061d;                                               //leave				IL_061d
	                    ;}
	IL_0567:            goto IL_0169;                                               //leave				IL_0169
	                    ;}
	                    finally{
	IL_056c:                                                                        //ldloc.s				V_6
	IL_056e:            System::Windows::Forms::Cursor::Current=V_6;                //call				void System::Windows::Forms::Cursor::set_Current(System::Windows::Forms::Cursor^)
	IL_0573:                                                                        //endfinally
	                    ;}
	IL_0574:                                                                        //ldc.i4				0x8
	IL_0579:            V_20=8;                                                     //stloc				V_20
	IL_057d:            /*goto IL_000b;*/goto IL_0582;                              //br				IL_000b
	IL_0582:                                                                        //ldloc.2
	IL_0583:                                                                        //ldloc.3
	IL_0584:            Temp_33=(V_2 < V_3);                                        //call				System::Boolean System::Version::op_LessThan(System::Version^,System::Version^)
	IL_0589:            if(!Temp_33)goto IL_00ef;                                   //brfalse				IL_00ef
	IL_058e:                                                                        //ldc.i4.4
	IL_058f:                                                                        //dup
	IL_0590:                                                                        //dup
	IL_0591:                                                                        //ldc.i4.2
	IL_0592:                                                                        //sub
	IL_0593:                                                                        //blt				IL_058f
	IL_0598:                                                                        //pop
	IL_0599:                                                                        //ldc.i4				0x0
	IL_059e:            V_20=0;                                                     //stloc				V_20
	IL_05a2:            /*goto IL_000b;*/goto IL_05a7;                              //br				IL_000b
	IL_05a7:            goto IL_05f6;                                               //br.s				IL_05f6
	IL_05a9:                                                                        //ldnull
	IL_05aa:            Temp_15=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_05af:                                                                        //ldstr				L"\x712F\x1231\x5A33\x5335\x4F37\x1A39\x4A3B\x5B3D\x323F\x3141\x2D43\x2945\x2647\x6A49\x234B\x284D\x704F\x2951\x6453\x2B55\x7857\x3359\x2F5B\x7E5D\x015F\x1461\x0563\x0F65\x0467\x0B69\x0E6B\x026D\x156F\x5C71\x5473\x3275\x1777\x5A79\x057B\x117D\xF57F\xA281\xF383\xE785\xE687\xFE89\xAC8B\xFA8D\xFF8F\xB291\xFD93\xF895\xEB97\xEE99\xFD9B\xF29D\xCC9F\x82A1\xC5A3\xD3A5\xDCA7\xC5A9\xC1AB\xCFAD\xC4AF\xDBB1\xD7B3\xD7B5\xD4B7\xD6B9\xC5BB\x81BD"
	IL_05b4:                                                                        //ldloc				V_21
	IL_05b8:            Temp_16=a(L"\x712F\x1231\x5A33\x5335\x4F37\x1A39\x4A3B\x5B3D\x323F\x3141\x2D43\x2945\x2647\x6A49\x234B\x284D\x704F\x2951\x6453\x2B55\x7857\x3359\x2F5B\x7E5D\x015F\x1461\x0563\x0F65\x0467\x0B69\x0E6B\x026D\x156F\x5C71\x5473\x3275\x1777\x5A79\x057B\x117D\xF57F\xA281\xF383\xE785\xE687\xFE89\xAC8B\xFA8D\xFF8F\xB291\xFD93\xF895\xEB97\xEE99\xFD9B\xF29D\xCC9F\x82A1\xC5A3\xD3A5\xDCA7\xC5A9\xC1AB\xCFAD\xC4AF\xDBB1\xD7B3\xD7B5\xD4B7\xD6B9\xC5BB\x81BD",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05bd:                                                                        //ldc.i4.1
	IL_05be:            Temp_17=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_05c3:            V_19=Temp_17;                                               //stloc.s				V_19
	IL_05c5:                                                                        //ldloc.s				V_19
	IL_05c7:                                                                        //ldc.i4.0
	IL_05c8:                                                                        //ldloc.1
	IL_05c9:            V_19[0]=safe_cast<System::Object^>(V_1);                    //stelem.ref
	IL_05ca:                                                                        //ldloc.s				V_19
	IL_05cc:            Temp_18=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_15),Temp_16,V_19);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_05d1:                                                                        //ldloc.1
	IL_05d2:                                                                        //ldc.i4.4
	IL_05d3:                                                                        //ldc.i4.s				32
	IL_05d5:            Temp_19=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_18,V_1,safe_cast<System::Windows::Forms::MessageBoxButtons>(4),safe_cast<System::Windows::Forms::MessageBoxIcon>(32));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_05da:            V_16=Temp_19;                                               //stloc.s				V_16
	IL_05dc:                                                                        //ldloc.s				V_16
	IL_05de:                                                                        //ldc.i4.6
	IL_05df:                                                                        //ceq
	IL_05e1:            A_0=(safe_cast<System::Int32>(V_16) == 6);                  //starg.s				A_0
	IL_05e3:                                                                        //ldc.i4				0xa
	IL_05e8:            V_20=10;                                                    //stloc				V_20
	IL_05ec:            /*goto IL_000b;*/goto IL_05f1;                              //br				IL_000b
	IL_05f1:            goto IL_0194;                                               //br				IL_0194
	IL_05f6:                                                                        //ldc.i4				0x3
	IL_05fb:            V_20=3;                                                     //stloc				V_20
	IL_05ff:            /*goto IL_000b;*/goto IL_0604;                              //br				IL_000b
	IL_0604:                                                                        //ldarg.2
	IL_0605:            if(A_1)goto IL_01b8;                                        //brtrue				IL_01b8
	IL_060a:                                                                        //ldc.i4				0x10
	IL_060f:            V_20=16;                                                    //stloc				V_20
	IL_0613:            /*goto IL_000b;*/goto IL_0618;                              //br				IL_000b
	IL_0618:            goto IL_01ba;                                               //br				IL_01ba
	IL_061d:                                                                        //ldloc.s				V_18
	IL_061f:            return V_18;                                                //ret

}
//[System::Diagnostics::DebuggerHidden()]
inline System::Boolean Root::T_x134::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Reflection::Module^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::IO::FileStream^ Temp_8 = nullptr;
	System::Type^ Temp_9 = nullptr;
	System::Reflection::Assembly^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::IO::Stream^ Temp_12 = nullptr;
	System::Int64 Temp_13 = 0;
	array<System::Byte>^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
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
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Int32 Temp_32 = 0;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::Int32 Temp_44 = 0;
	System::Int32 Temp_45 = 0;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::Int32 Temp_50 = 0;
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
	Reflector::IConfigurationManager^ Temp_65 = nullptr;
	System::String^ Temp_66 = nullptr;
	Reflector::IConfiguration^ Temp_67 = nullptr;
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
	System::Diagnostics::ProcessStartInfo^ Temp_80 = nullptr;
	System::Globalization::CultureInfo^ Temp_81 = nullptr;
	System::IO::StringWriter^ Temp_82 = nullptr;
	System::Diagnostics::Process^ Temp_83 = nullptr;
	System::IntPtr Temp_84 = (System::IntPtr)0;
	System::IntPtr Temp_85 = (System::IntPtr)0;
	System::Boolean Temp_86 = false;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::IO::Stream^ V_3 = nullptr;
	System::IO::Stream^ V_4 = nullptr;
	array<System::Byte>^ V_5 = nullptr;
	Reflector::IConfiguration^ V_6 = nullptr;
	System::String^ V_7 = nullptr;
	System::String^ V_8 = nullptr;
	System::String^ V_9 = nullptr;
	System::String^ V_10 = nullptr;
	System::Diagnostics::ProcessStartInfo^ V_11 = nullptr;
	System::IO::StringWriter^ V_12 = nullptr;
	System::Diagnostics::Process^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	System::Int32 V_16 = 0;
	System::Int32 V_17 = 0;
	System::Int32 V_18 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_18=14;                                                    //stloc				V_18
	IL_0009:                                                                        //ldstr				L"\x6D2B\x5E2D\x402F\x5E31\x5D33\x5535\x5937\x4E39\x553B\x513D\x2E3F\x0C41\x2543\x2B45\x2D47"
	IL_000e:                                                                        //ldloc				V_18
	IL_0012:            Temp_0=a(L"\x6D2B\x5E2D\x402F\x5E31\x5D33\x5535\x5937\x4E39\x553B\x513D\x2E3F\x0C41\x2543\x2B45\x2D47",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            Temp_1=Root::T_x128::M_x1(Temp_0);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_001c:            V_0=Temp_1;                                                 //stloc.0
	IL_001d:                                                                        //ldtoken				Reflector::IPackage
	IL_0022:            Temp_2=Reflector::IPackage::typeid;                         //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0027:            Temp_3=Temp_2->Module;                                      //callvirt				System::Reflection::Module^ System::Type::get_Module()
	IL_002c:            Temp_4=Temp_3->FullyQualifiedName;                          //callvirt				System::String^ System::Reflection::Module::get_FullyQualifiedName()
	IL_0031:            V_1=Temp_4;                                                 //stloc.1
	IL_0032:            Temp_5=System::IO::Path::GetTempFileName();                 //call				System::String^ System::IO::Path::GetTempFileName()
	IL_0037:                                                                        //ldstr				L"\x022B\x4B2D\x482F\x5731"
	IL_003c:                                                                        //ldloc				V_18
	IL_0040:            Temp_6=a(L"\x022B\x4B2D\x482F\x5731",V_18);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0045:            Temp_7=System::IO::Path::ChangeExtension(Temp_5,Temp_6);    //call				System::String^ System::IO::Path::ChangeExtension(System::String^,System::String^)
	IL_004a:            V_2=Temp_7;                                                 //stloc.2
	IL_004b:                                                                        //ldloc.2
	IL_004c:            Temp_8=System::IO::File::Create(V_2);                       //call				System::IO::FileStream^ System::IO::File::Create(System::String^)
	IL_0051:            V_3=safe_cast<System::IO::Stream^>(Temp_8);                 //stloc.3
	IL_0052:            /*goto IL_05cf;*/goto IL_05CA01;                            //br				IL_05cf
	IL_005201:          try{
	IL_0057:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_0059:                                                                        //ldloc				V_14
	IL_005d:            switch(V_14){case 0:goto IL_04ce;case 1:goto IL_0372;case 2:goto IL_01bd;case 3:goto IL_038d;case 4:goto IL_03b5;case 5:goto IL_03f0;case 6:goto IL_02e5;case 7:goto IL_0251;case 8:goto IL_03c5;case 9:goto IL_0408;case 10:goto IL_01a8;case 11:goto IL_0430;case 12:goto IL_02f8;case 13:goto IL_035f;case 14:goto IL_03a0;case 15:goto IL_0492;case 16:goto IL_041b;case 17:goto IL_030d;case 18:goto IL_03e0;case 19:goto IL_04ad;case 20:goto IL_047f;};//switch				(IL_04ce,IL_0372,IL_01bd,IL_038d,IL_03b5,IL_03f0,IL_02e5,IL_0251,IL_03c5,IL_0408,IL_01a8,IL_0430,IL_02f8,IL_035f,IL_03a0,IL_0492,IL_041b,IL_030d,IL_03e0,IL_04ad,IL_047f)
	IL_00b6:                                                                        //ldloc.s				V_12
	IL_00b8:                                                                        //ldstr				L"\x032B\x6F2D\x532F\x4631\x5D33\x5935\x5637\x0039\x1E3B\x6B3D\x303F\x2641\x2543\x3245\x2D47\x6849"
	IL_00bd:                                                                        //ldloc				V_18
	IL_00c1:            Temp_18=a(L"\x032B\x6F2D\x532F\x4631\x5D33\x5935\x5637\x0039\x1E3B\x6B3D\x303F\x2641\x2543\x3245\x2D47\x6849",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c6:            V_12->Write(Temp_18);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00cb:                                                                        //ldloc.s				V_12
	IL_00cd:                                                                        //ldstr				L"\x0C2B"
	IL_00d2:                                                                        //ldloc				V_18
	IL_00d6:            Temp_19=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00db:            V_12->Write(Temp_19);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e0:                                                                        //ldloc.s				V_12
	IL_00e2:                                                                        //ldstr				L"\x032B\x7A2D\x512F\x4031\x5333\x5335\x4C37\x0039\x1E3B"
	IL_00e7:                                                                        //ldloc				V_18
	IL_00eb:            Temp_20=a(L"\x032B\x7A2D\x512F\x4031\x5333\x5335\x4C37\x0039\x1E3B",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f0:                                                                        //ldloc.1
	IL_00f1:                                                                        //ldstr				L"\x0E2B"
	IL_00f6:                                                                        //ldloc				V_18
	IL_00fa:            Temp_21=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ff:            Temp_22=System::String::Concat(Temp_20,V_1,Temp_21);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0104:            V_12->Write(Temp_22);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0109:                                                                        //ldloc.s				V_12
	IL_010b:                                                                        //ldstr				L"\x0C2B"
	IL_0110:                                                                        //ldloc				V_18
	IL_0114:            Temp_23=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0119:            V_12->Write(Temp_23);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_011e:                                                                        //ldloc.s				V_12
	IL_0120:                                                                        //ldstr				L"\x032B\x6F2D\x402F\x4231\x5833\x5F35\x5B37\x5B39\x483B\x573D\x2F3F\x2C41\x7E43\x6445"
	IL_0125:                                                                        //ldloc				V_18
	IL_0129:            Temp_24=a(L"\x032B\x6F2D\x402F\x4231\x5833\x5F35\x5B37\x5B39\x483B\x573D\x2F3F\x2C41\x7E43\x6445",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012e:                                                                        //ldloc.0
	IL_012f:                                                                        //ldstr				L"\x0E2B"
	IL_0134:                                                                        //ldloc				V_18
	IL_0138:            Temp_25=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013d:            Temp_26=System::String::Concat(Temp_24,V_0,Temp_25);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0142:            V_12->Write(Temp_26);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0147:                                                                        //ldloc.s				V_12
	IL_0149:                                                                        //ldstr				L"\x0C2B"
	IL_014e:                                                                        //ldloc				V_18
	IL_0152:            Temp_27=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0157:            V_12->Write(Temp_27);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_015c:                                                                        //ldloc.s				V_12
	IL_015e:                                                                        //ldstr				L"\x032B\x7D2D\x5F2F\x4731\x4633\x5535\x5D37\x0039\x1E3B"
	IL_0163:                                                                        //ldloc				V_18
	IL_0167:            Temp_28=a(L"\x032B\x7D2D\x5F2F\x4731\x4633\x5535\x5D37\x0039\x1E3B",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016c:                                                                        //ldarg.1
	IL_016d:                                                                        //ldstr				L"\x0E2B"
	IL_0172:                                                                        //ldloc				V_18
	IL_0176:            Temp_29=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017b:            Temp_30=System::String::Concat(Temp_28,A_0,Temp_29);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0180:            V_12->Write(Temp_30);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0185:                                                                        //ldloc.s				V_12
	IL_0187:                                                                        //ldstr				L"\x0C2B"
	IL_018c:                                                                        //ldloc				V_18
	IL_0190:            Temp_31=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0195:            V_12->Write(Temp_31);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_019a:                                                                        //ldc.i4				0xa
	IL_019f:            V_14=10;                                                    //stloc				V_14
	IL_01a3:            /*goto IL_0059;*/goto IL_01a8;                              //br				IL_0059
	IL_01a8:                                                                        //ldloc.s				V_7
	IL_01aa:            if(V_7==nullptr)goto IL_040d;                               //brfalse				IL_040d
	IL_01af:                                                                        //ldc.i4				0x2
	IL_01b4:            V_14=2;                                                     //stloc				V_14
	IL_01b8:            /*goto IL_0059;*/goto IL_01bd;                              //br				IL_0059
	IL_01bd:            goto IL_03e2;                                               //br				IL_03e2
	IL_01c2:                                                                        //ldloc.s				V_12
	IL_01c4:                                                                        //ldstr				L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x6D37\x4939\x593B\x4C3D\x7A3F\x6041"
	IL_01c9:                                                                        //ldloc				V_18
	IL_01cd:            Temp_55=a(L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x6D37\x4939\x593B\x4C3D\x7A3F\x6041",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d2:                                                                        //ldloc.s				V_9
	IL_01d4:                                                                        //ldstr				L"\x0E2B"
	IL_01d9:                                                                        //ldloc				V_18
	IL_01dd:            Temp_56=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e2:                                                                        //ldstr				L"\x702B\x5F2D"
	IL_01e7:                                                                        //ldloc				V_18
	IL_01eb:            Temp_57=a(L"\x702B\x5F2D",V_18);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f0:            Temp_58=V_9->Replace(Temp_56,Temp_57);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_01f5:                                                                        //ldstr				L"\x702B"
	IL_01fa:                                                                        //ldloc				V_18
	IL_01fe:            Temp_59=a(L"\x702B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0203:                                                                        //ldstr				L"\x702B\x722D"
	IL_0208:                                                                        //ldloc				V_18
	IL_020c:            Temp_60=a(L"\x702B\x722D",V_18);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0211:            Temp_61=Temp_58->Replace(Temp_59,Temp_60);                  //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0216:                                                                        //ldstr				L"\x0E2B"
	IL_021b:                                                                        //ldloc				V_18
	IL_021f:            Temp_62=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0224:            Temp_63=System::String::Concat(Temp_55,Temp_61,Temp_62);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0229:            V_12->Write(Temp_63);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_022e:                                                                        //ldloc.s				V_12
	IL_0230:                                                                        //ldstr				L"\x0C2B"
	IL_0235:                                                                        //ldloc				V_18
	IL_0239:            Temp_64=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023e:            V_12->Write(Temp_64);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0243:                                                                        //ldc.i4				0x7
	IL_0248:            V_14=7;                                                     //stloc				V_14
	IL_024c:            /*goto IL_0059;*/goto IL_0251;                              //br				IL_0059
	IL_0251:            goto IL_0392;                                               //br				IL_0392
	IL_0256:                                                                        //ldloc.s				V_12
	IL_0258:                                                                        //ldstr				L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x6837\x5B39\x4F3B\x4D3D\x373F\x2D41\x3643\x2245\x7247\x6849"
	IL_025d:                                                                        //ldloc				V_18
	IL_0261:            Temp_34=a(L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x6837\x5B39\x4F3B\x4D3D\x373F\x2D41\x3643\x2245\x7247\x6849",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0266:                                                                        //ldloc.s				V_10
	IL_0268:                                                                        //ldstr				L"\x0E2B"
	IL_026d:                                                                        //ldloc				V_18
	IL_0271:            Temp_35=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0276:                                                                        //ldstr				L"\x702B\x5F2D"
	IL_027b:                                                                        //ldloc				V_18
	IL_027f:            Temp_36=a(L"\x702B\x5F2D",V_18);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0284:            Temp_37=V_10->Replace(Temp_35,Temp_36);                     //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0289:                                                                        //ldstr				L"\x702B"
	IL_028e:                                                                        //ldloc				V_18
	IL_0292:            Temp_38=a(L"\x702B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0297:                                                                        //ldstr				L"\x702B\x722D"
	IL_029c:                                                                        //ldloc				V_18
	IL_02a0:            Temp_39=a(L"\x702B\x722D",V_18);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a5:            Temp_40=Temp_37->Replace(Temp_38,Temp_39);                  //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_02aa:                                                                        //ldstr				L"\x0E2B"
	IL_02af:                                                                        //ldloc				V_18
	IL_02b3:            Temp_41=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b8:            Temp_42=System::String::Concat(Temp_34,Temp_40,Temp_41);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_02bd:            V_12->Write(Temp_42);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02c2:                                                                        //ldloc.s				V_12
	IL_02c4:                                                                        //ldstr				L"\x0C2B"
	IL_02c9:                                                                        //ldloc				V_18
	IL_02cd:            Temp_43=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02d2:            V_12->Write(Temp_43);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02d7:                                                                        //ldc.i4				0x6
	IL_02dc:            V_14=6;                                                     //stloc				V_14
	IL_02e0:            /*goto IL_0059;*/goto IL_02e5;                              //br				IL_0059
	IL_02e5:            goto IL_04b2;                                               //br				IL_04b2
	IL_02ea:                                                                        //ldc.i4				0xc
	IL_02ef:            V_14=12;                                                    //stloc				V_14
	IL_02f3:            /*goto IL_0059;*/goto IL_02f8;                              //br				IL_0059
	IL_02f8:                                                                        //ldloc.s				V_9
	IL_02fa:            if(V_9==nullptr)goto IL_0392;                               //brfalse				IL_0392
	IL_02ff:                                                                        //ldc.i4				0x11
	IL_0304:            V_14=17;                                                    //stloc				V_14
	IL_0308:            /*goto IL_0059;*/goto IL_030d;                              //br				IL_0059
	IL_030d:            goto IL_0484;                                               //br				IL_0484
	IL_0312:                                                                        //ldloc.s				V_12
	IL_0314:                                                                        //ldstr				L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x0237\x1839"
	IL_0319:                                                                        //ldloc				V_18
	IL_031d:            Temp_46=a(L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x0237\x1839",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0322:                                                                        //ldloc.s				V_7
	IL_0324:                                                                        //ldstr				L"\x0E2B"
	IL_0329:                                                                        //ldloc				V_18
	IL_032d:            Temp_47=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0332:            Temp_48=System::String::Concat(Temp_46,V_7,Temp_47);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0337:            V_12->Write(Temp_48);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_033c:                                                                        //ldloc.s				V_12
	IL_033e:                                                                        //ldstr				L"\x0C2B"
	IL_0343:                                                                        //ldloc				V_18
	IL_0347:            Temp_49=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_034c:            V_12->Write(Temp_49);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0351:                                                                        //ldc.i4				0xd
	IL_0356:            V_14=13;                                                    //stloc				V_14
	IL_035a:            /*goto IL_0059;*/goto IL_035f;                              //br				IL_0059
	IL_035f:            goto IL_040d;                                               //br				IL_040d
	IL_0364:                                                                        //ldc.i4				0x1
	IL_0369:            V_14=1;                                                     //stloc				V_14
	IL_036d:            /*goto IL_0059;*/goto IL_0372;                              //br				IL_0059
	IL_0372:                                                                        //ldloc.s				V_10
	IL_0374:            Temp_32=V_10->Length;                                       //callvirt				System::Int32 System::String::get_Length()
	IL_0379:                                                                        //ldc.i4.0
	IL_037a:            if(Temp_32<=0)goto IL_04b2;                                 //ble				IL_04b2
	IL_037f:                                                                        //ldc.i4				0x3
	IL_0384:            V_14=3;                                                     //stloc				V_14
	IL_0388:            /*goto IL_0059;*/goto IL_038d;                              //br				IL_0059
	IL_038d:            goto IL_0256;                                               //br				IL_0256
	IL_0392:                                                                        //ldc.i4				0xe
	IL_0397:            V_14=14;                                                    //stloc				V_14
	IL_039b:            /*goto IL_0059;*/goto IL_03a0;                              //br				IL_0059
	IL_03a0:                                                                        //ldloc.s				V_10
	IL_03a2:            if(V_10==nullptr)goto IL_04b2;                              //brfalse				IL_04b2
	IL_03a7:                                                                        //ldc.i4				0x4
	IL_03ac:            V_14=4;                                                     //stloc				V_14
	IL_03b0:            /*goto IL_0059;*/goto IL_03b5;                              //br				IL_0059
	IL_03b5:            goto IL_0364;                                               //br.s				IL_0364
	IL_03b7:                                                                        //ldc.i4				0x8
	IL_03bc:            V_14=8;                                                     //stloc				V_14
	IL_03c0:            /*goto IL_0059;*/goto IL_03c5;                              //br				IL_0059
	IL_03c5:                                                                        //ldloc.s				V_8
	IL_03c7:            Temp_45=V_8->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_03cc:                                                                        //ldc.i4.0
	IL_03cd:            if(Temp_45<=0)goto IL_02ea;                                 //ble				IL_02ea
	IL_03d2:                                                                        //ldc.i4				0x12
	IL_03d7:            V_14=18;                                                    //stloc				V_14
	IL_03db:            /*goto IL_0059;*/goto IL_03e0;                              //br				IL_0059
	IL_03e0:            goto IL_0432;                                               //br.s				IL_0432
	IL_03e2:                                                                        //ldc.i4				0x5
	IL_03e7:            V_14=5;                                                     //stloc				V_14
	IL_03eb:            /*goto IL_0059;*/goto IL_03f0;                              //br				IL_0059
	IL_03f0:                                                                        //ldloc.s				V_7
	IL_03f2:            Temp_44=V_7->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_03f7:                                                                        //ldc.i4.0
	IL_03f8:            if(Temp_44<=0)goto IL_040d;                                 //ble.s				IL_040d
	IL_03fa:                                                                        //ldc.i4				0x9
	IL_03ff:            V_14=9;                                                     //stloc				V_14
	IL_0403:            /*goto IL_0059;*/goto IL_0408;                              //br				IL_0059
	IL_0408:            goto IL_0312;                                               //br				IL_0312
	IL_040d:                                                                        //ldc.i4				0x10
	IL_0412:            V_14=16;                                                    //stloc				V_14
	IL_0416:            /*goto IL_0059;*/goto IL_041b;                              //br				IL_0059
	IL_041b:                                                                        //ldloc.s				V_8
	IL_041d:            if(V_8==nullptr)goto IL_02ea;                               //brfalse				IL_02ea
	IL_0422:                                                                        //ldc.i4				0xb
	IL_0427:            V_14=11;                                                    //stloc				V_14
	IL_042b:            /*goto IL_0059;*/goto IL_0430;                              //br				IL_0059
	IL_0430:            goto IL_03b7;                                               //br.s				IL_03b7
	IL_0432:                                                                        //ldloc.s				V_12
	IL_0434:                                                                        //ldstr				L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x7937\x5E39\x583B\x4C3D\x253F\x3141\x3743\x7C45\x6A47"
	IL_0439:                                                                        //ldloc				V_18
	IL_043d:            Temp_51=a(L"\x032B\x7E2D\x422F\x5D31\x4C33\x4F35\x7937\x5E39\x583B\x4C3D\x253F\x3141\x3743\x7C45\x6A47",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0442:                                                                        //ldloc.s				V_8
	IL_0444:                                                                        //ldstr				L"\x0E2B"
	IL_0449:                                                                        //ldloc				V_18
	IL_044d:            Temp_52=a(L"\x0E2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0452:            Temp_53=System::String::Concat(Temp_51,V_8,Temp_52);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0457:            V_12->Write(Temp_53);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_045c:                                                                        //ldloc.s				V_12
	IL_045e:                                                                        //ldstr				L"\x0C2B"
	IL_0463:                                                                        //ldloc				V_18
	IL_0467:            Temp_54=a(L"\x0C2B",V_18);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_046c:            V_12->Write(Temp_54);                                       //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0471:                                                                        //ldc.i4				0x14
	IL_0476:            V_14=20;                                                    //stloc				V_14
	IL_047a:            /*goto IL_0059;*/goto IL_047f;                              //br				IL_0059
	IL_047f:            goto IL_02ea;                                               //br				IL_02ea
	IL_0484:                                                                        //ldc.i4				0xf
	IL_0489:            V_14=15;                                                    //stloc				V_14
	IL_048d:            /*goto IL_0059;*/goto IL_0492;                              //br				IL_0059
	IL_0492:                                                                        //ldloc.s				V_9
	IL_0494:            Temp_50=V_9->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_0499:                                                                        //ldc.i4.0
	IL_049a:            if(Temp_50<=0)goto IL_0392;                                 //ble				IL_0392
	IL_049f:                                                                        //ldc.i4				0x13
	IL_04a4:            V_14=19;                                                    //stloc				V_14
	IL_04a8:            /*goto IL_0059;*/goto IL_04ad;                              //br				IL_0059
	IL_04ad:            goto IL_01c2;                                               //br				IL_01c2
	IL_04b2:                                                                        //ldloc.s				V_11
	IL_04b4:                                                                        //ldloc.s				V_12
	IL_04b6:            Temp_33=V_12->ToString();                                   //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_04bb:            V_11->Arguments=Temp_33;                                    //callvirt				void System::Diagnostics::ProcessStartInfo::set_Arguments(System::String^)
	IL_04c0:                                                                        //ldc.i4				0x0
	IL_04c5:            V_14=0;                                                     //stloc				V_14
	IL_04c9:            /*goto IL_0059;*/goto IL_04ce;                              //br				IL_0059
	IL_04ce:            goto IL_06b9;                                               //leave				IL_06b9
	                    ;}
	                    finally{
	IL_04d3:                                                                        //ldc.i4				0x0
	IL_04d8:            V_15=0;                                                     //stloc				V_15
	IL_04dc:            /*goto IL_04e0;*/goto IL_04de;                              //br.s				IL_04e0
	IL_04de:            goto IL_04f5;                                               //br.s				IL_04f5
	IL_04e0:                                                                        //ldloc				V_15
	IL_04e4:            switch(V_15){case 0:goto IL_04de;case 1:goto IL_0518;case 2:goto IL_0504;};//switch				(IL_04de,IL_0518,IL_0504)
	IL_04f5:                                                                        //ldloc.s				V_12
	IL_04f7:            if(V_12==nullptr)goto IL_051a;                              //brfalse.s				IL_051a
	IL_04f9:                                                                        //ldc.i4				0x2
	IL_04fe:            V_15=2;                                                     //stloc				V_15
	IL_0502:            /*goto IL_04e0;*/goto IL_0504;                              //br.s				IL_04e0
	IL_0504:            goto IL_0506;                                               //br.s				IL_0506
	IL_0506:                                                                        //ldloc.s				V_12
	IL_0508:            /*safe_cast<System::IDisposable^>(V_12)->Dispose();*/       //callvirt				void System::IDisposable::Dispose()
	IL_050d:                                                                        //ldc.i4				0x1
	IL_0512:            V_15=1;                                                     //stloc				V_15
	IL_0516:            /*goto IL_04e0;*/goto IL_0518;                              //br.s				IL_04e0
	IL_0518:            goto IL_051a;                                               //br.s				IL_051a
	IL_051a:                                                                        //endfinally
	                    ;}
	IL_051b:                                                                        //ldarg.0
	IL_051c:            Temp_65=this->F_x1;                                         //ldfld				Reflector::IConfigurationManager^ Root::T_x134 F_x1
	IL_0521:                                                                        //ldstr				L"\x7B2B\x4B2D\x522F\x6231\x4633\x5935\x4037\x4339"
	IL_0526:                                                                        //ldloc				V_18
	IL_052a:            Temp_66=a(L"\x7B2B\x4B2D\x522F\x6231\x4633\x5935\x4037\x4339",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_052f:            Temp_67=Temp_65[Temp_66];                                   //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_0534:            V_6=Temp_67;                                                //stloc.s				V_6
	IL_0536:                                                                        //ldloc.s				V_6
	IL_0538:                                                                        //ldstr				L"\x782B\x572D\x402F\x5731"
	IL_053d:                                                                        //ldloc				V_18
	IL_0541:            Temp_68=a(L"\x782B\x572D\x402F\x5731",V_18);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0546:                                                                        //ldstr				L"\x682B\x4B2D\x562F\x5331\x4133\x5A35\x4C37"
	IL_054b:                                                                        //ldloc				V_18
	IL_054f:            Temp_69=a(L"\x682B\x4B2D\x562F\x5331\x4133\x5A35\x4C37",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0554:            Temp_70=V_6->GetProperty(Temp_68,Temp_69);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_0559:            V_7=Temp_70;                                                //stloc.s				V_7
	IL_055b:                                                                        //ldloc.s				V_6
	IL_055d:                                                                        //ldstr				L"\x6D2B\x4A2D\x542F\x4031\x5133\x4535\x4B37"
	IL_0562:                                                                        //ldloc				V_18
	IL_0566:            Temp_71=a(L"\x6D2B\x4A2D\x542F\x4031\x5133\x4535\x4B37",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_056b:            Temp_72=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0570:            Temp_73=V_6->GetProperty(Temp_71,Temp_72);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_0575:            V_8=Temp_73;                                                //stloc.s				V_8
	IL_0577:                                                                        //ldloc.s				V_6
	IL_0579:                                                                        //ldstr				L"\x792B\x5D2D\x552F\x4031"
	IL_057e:                                                                        //ldloc				V_18
	IL_0582:            Temp_74=a(L"\x792B\x5D2D\x552F\x4031",V_18);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0587:            Temp_75=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_058c:            Temp_76=V_6->GetProperty(Temp_74,Temp_75);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_0591:            V_9=Temp_76;                                                //stloc.s				V_9
	IL_0593:                                                                        //ldloc.s				V_6
	IL_0595:                                                                        //ldstr				L"\x7C2B\x4F2D\x432F\x4131\x4333\x5935\x4A37\x5E39"
	IL_059a:                                                                        //ldloc				V_18
	IL_059e:            Temp_77=a(L"\x7C2B\x4F2D\x432F\x4131\x4333\x5935\x4A37\x5E39",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05a3:            Temp_78=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_05a8:            Temp_79=V_6->GetProperty(Temp_77,Temp_78);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_05ad:            V_10=Temp_79;                                               //stloc.s				V_10
	IL_05af:            Temp_80=gcnew System::Diagnostics::ProcessStartInfo();      //newobj				void System::Diagnostics::ProcessStartInfo::.ctor()
	IL_05b4:            V_11=Temp_80;                                               //stloc.s				V_11
	IL_05b6:                                                                        //ldloc.s				V_11
	IL_05b8:                                                                        //ldloc.2
	IL_05b9:            V_11->FileName=V_2;                                         //callvirt				void System::Diagnostics::ProcessStartInfo::set_FileName(System::String^)
	IL_05be:            Temp_81=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_05c3:            Temp_82=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_81));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_05c8:            V_12=Temp_82;                                               //stloc.s				V_12
	IL_05ca:            /*goto IL_0057;*/goto IL_005201;                            //br				IL_0057
	IL_05CA01:          try{
	IL_05cf:                                                                        //ldtoken				Root::T_x134
	IL_05d4:            Temp_9=Root::T_x134::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_05d9:            Temp_10=Temp_9->Assembly;                                   //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_05de:                                                                        //ldstr				L"\x7E2B\x4B2D\x562F\x5E31\x5133\x5535\x4C37\x5539\x4E3B\x103D\x093F\x2C41\x3743\x3245\x2947\x2649\x204B\x604D\x354F\x2A51\x3153"
	IL_05e3:                                                                        //ldloc				V_18
	IL_05e7:            Temp_11=a(L"\x7E2B\x4B2D\x562F\x5E31\x5133\x5535\x4C37\x5539\x4E3B\x103D\x093F\x2C41\x3743\x3245\x2947\x2649\x204B\x604D\x354F\x2A51\x3153",V_18);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05ec:            Temp_12=Temp_10->GetManifestResourceStream(Temp_11);        //callvirt				System::IO::Stream^ System::Reflection::Assembly::GetManifestResourceStream(System::String^)
	IL_05f1:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_05f3:            /*goto IL_05f5;*/goto IL_05F301;                            //br.s				IL_05f5
	IL_05F301:          try{
	IL_05f5:                                                                        //ldloc.s				V_4
	IL_05f7:            Temp_13=V_4->Length;                                        //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_05fc:                                                                        //conv.i4
	IL_05fd:                                                                        //conv.ovf.u4
	IL_05fe:            Temp_14=gcnew array<System::Byte>(safe_cast<System::UInt32>(safe_cast<System::Int32>(Temp_13)));//newarr				System::Byte
	IL_0603:            V_5=Temp_14;                                                //stloc.s				V_5
	IL_0605:                                                                        //ldloc.s				V_4
	IL_0607:                                                                        //ldloc.s				V_5
	IL_0609:                                                                        //ldc.i4.0
	IL_060a:                                                                        //ldloc.s				V_5
	IL_060c:            Temp_15=V_5->Length;                                        //ldlen
	IL_060d:                                                                        //conv.i4
	IL_060e:            Temp_16=V_4->Read(V_5,safe_cast<System::Int32>(0),Temp_15); //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_0613:                                                                        //pop
	IL_0614:                                                                        //ldloc.3
	IL_0615:                                                                        //ldloc.s				V_5
	IL_0617:                                                                        //ldc.i4.0
	IL_0618:                                                                        //ldloc.s				V_5
	IL_061a:            Temp_17=V_5->Length;                                        //ldlen
	IL_061b:                                                                        //conv.i4
	IL_061c:            V_3->Write(V_5,safe_cast<System::Int32>(0),Temp_17);        //callvirt				void System::IO::Stream::Write(array<System::Byte>^,System::Int32,System::Int32)
	IL_0621:            goto IL_066b;                                               //leave.s				IL_066b
	                    ;}
	                    finally{
	IL_0623:                                                                        //ldc.i4				0x1
	IL_0628:            V_16=1;                                                     //stloc				V_16
	IL_062c:            /*goto IL_0630;*/goto IL_062e;                              //br.s				IL_0630
	IL_062e:            goto IL_0645;                                               //br.s				IL_0645
	IL_0630:                                                                        //ldloc				V_16
	IL_0634:            switch(V_16){case 0:goto IL_0668;case 1:goto IL_062e;case 2:goto IL_0654;};//switch				(IL_0668,IL_062e,IL_0654)
	IL_0645:                                                                        //ldloc.s				V_4
	IL_0647:            if(V_4==nullptr)goto IL_066a;                               //brfalse.s				IL_066a
	IL_0649:                                                                        //ldc.i4				0x2
	IL_064e:            V_16=2;                                                     //stloc				V_16
	IL_0652:            /*goto IL_0630;*/goto IL_0654;                              //br.s				IL_0630
	IL_0654:            goto IL_0656;                                               //br.s				IL_0656
	IL_0656:                                                                        //ldloc.s				V_4
	IL_0658:            /*safe_cast<System::IDisposable^>(V_4)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_065d:                                                                        //ldc.i4				0x0
	IL_0662:            V_16=0;                                                     //stloc				V_16
	IL_0666:            /*goto IL_0630;*/goto IL_0668;                              //br.s				IL_0630
	IL_0668:            goto IL_066a;                                               //br.s				IL_066a
	IL_066a:                                                                        //endfinally
	                    ;}
	IL_066b:            goto IL_051b;                                               //leave				IL_051b
	                    ;}
	                    finally{
	IL_0670:            goto IL_0673;                                               //br.s				IL_0673
	IL_0672:                                                                        //break
	IL_0673:                                                                        //ldc.i4				0x0
	IL_0678:            V_17=0;                                                     //stloc				V_17
	IL_067c:            /*goto IL_0680;*/goto IL_067e;                              //br.s				IL_0680
	IL_067e:            goto IL_0695;                                               //br.s				IL_0695
	IL_0680:                                                                        //ldloc				V_17
	IL_0684:            switch(V_17){case 0:goto IL_067e;case 1:goto IL_06b6;case 2:goto IL_06a3;};//switch				(IL_067e,IL_06b6,IL_06a3)
	IL_0695:                                                                        //ldloc.3
	IL_0696:            if(V_3==nullptr)goto IL_06b8;                               //brfalse.s				IL_06b8
	IL_0698:                                                                        //ldc.i4				0x2
	IL_069d:            V_17=2;                                                     //stloc				V_17
	IL_06a1:            /*goto IL_0680;*/goto IL_06a3;                              //br.s				IL_0680
	IL_06a3:            goto IL_06a5;                                               //br.s				IL_06a5
	IL_06a5:                                                                        //ldloc.3
	IL_06a6:            /*safe_cast<System::IDisposable^>(V_3)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_06ab:                                                                        //ldc.i4				0x1
	IL_06b0:            V_17=1;                                                     //stloc				V_17
	IL_06b4:            /*goto IL_0680;*/goto IL_06b6;                              //br.s				IL_0680
	IL_06b6:            goto IL_06b8;                                               //br.s				IL_06b8
	IL_06b8:                                                                        //endfinally
	                    ;}
	IL_06b9:                                                                        //ldloc.s				V_11
	IL_06bb:            Temp_83=System::Diagnostics::Process::Start(V_11);          //call				System::Diagnostics::Process^ System::Diagnostics::Process::Start(System::Diagnostics::ProcessStartInfo^)
	IL_06c0:            V_13=Temp_83;                                               //stloc.s				V_13
	IL_06c2:                                                                        //ldloc.s				V_13
	IL_06c4:            Temp_84=V_13->Handle;                                       //callvirt				System::IntPtr System::Diagnostics::Process::get_Handle()
	IL_06c9:            Temp_85=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_06ce:            Temp_86=(Temp_84 != Temp_85);                               //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_06d3:            return Temp_86;                                             //ret

}
//[System::Diagnostics::DebuggerHidden()]
inline void Root::T_x134::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::DateTime Temp_0;
	System::DateTime Temp_1;
	System::DateTime Temp_2;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::DateTime Temp_5;
	System::DateTime Temp_6;
	System::Boolean Temp_7 = false;
	//local variables.
	System::DateTime V_0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0068;case 1:goto IL_0075;case 2:goto IL_009f;case 3:goto IL_0054;case 4:goto IL_0034;};//switch				(IL_0068,IL_0075,IL_009f,IL_0054,IL_0034)
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_0=this->M_x1();                                        //call				System::DateTime Root::T_x134::M_x1()
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldc.i4				0x4
	IL_002e:            V_1=4;                                                      //stloc				V_1
	IL_0032:            /*goto IL_0002;*/goto IL_0034;                              //br.s				IL_0002
	IL_0034:            Temp_5=System::DateTime::Now;                               //call				System::DateTime System::DateTime::get_Now()
	IL_0039:                                                                        //ldloca.s				V_0
	IL_003b:                                                                        //ldc.i4.s				12
	IL_003d:            Temp_6=V_0.AddMonths(safe_cast<System::Int32>(12));         //call				System::DateTime System::DateTime::AddMonths(System::Int32)
	IL_0042:            Temp_7=(Temp_5 > Temp_6);                                   //call				System::Boolean System::DateTime::op_GreaterThan(System::DateTime,System::DateTime)
	IL_0047:            if(Temp_7)goto IL_0056;                                     //brtrue.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_1=3;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_006a;                                               //br.s				IL_006a
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_4=this->M_x2();                                        //call				System::Boolean Root::T_x134::M_x2()
	IL_005c:                                                                        //pop
	IL_005d:                                                                        //ldc.i4				0x0
	IL_0062:            V_1=0;                                                      //stloc				V_1
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:            goto IL_00a1;                                               //br.s				IL_00a1
	IL_006a:                                                                        //ldc.i4				0x1
	IL_006f:            V_1=1;                                                      //stloc				V_1
	IL_0073:            /*goto IL_0002;*/goto IL_0075;                              //br.s				IL_0002
	IL_0075:            Temp_1=System::DateTime::Now;                               //call				System::DateTime System::DateTime::get_Now()
	IL_007a:                                                                        //ldloca.s				V_0
	IL_007c:                                                                        //ldc.r8				-30.
	IL_0085:            Temp_2=V_0.AddDays(safe_cast<System::Double>(-30));         //call				System::DateTime System::DateTime::AddDays(System::Double)
	IL_008a:            Temp_3=(Temp_1 < Temp_2);                                   //call				System::Boolean System::DateTime::op_LessThan(System::DateTime,System::DateTime)
	IL_008f:            if(!Temp_3)goto IL_00a1;                                    //brfalse.s				IL_00a1
	IL_0091:                                                                        //ldc.i4				0x2
	IL_0096:            V_1=2;                                                      //stloc				V_1
	IL_009a:            /*goto IL_0002;*/goto IL_009f;                              //br				IL_0002
	IL_009f:            goto IL_0056;                                               //br.s				IL_0056
	IL_00a1:            return;                                                     //ret

}
//[System::Diagnostics::DebuggerHidden()]
inline System::Boolean Root::T_x134::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:                                                                        //ldc.i4.0
	IL_0003:            Temp_0=this->M_x1(false,false);                             //call				System::Boolean Root::T_x134::M_x1(System::Boolean,System::Boolean)
	IL_0008:            return Temp_0;                                              //ret

}
//[System::Diagnostics::DebuggerHidden()]
inline System::Boolean Root::T_x134::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Reflection::Module^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::IO::FileStream^ Temp_8 = nullptr;
	System::Type^ Temp_9 = nullptr;
	System::Reflection::Assembly^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::IO::Stream^ Temp_12 = nullptr;
	System::Int64 Temp_13 = 0;
	array<System::Byte>^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Diagnostics::ProcessStartInfo^ Temp_29 = nullptr;
	System::Globalization::CultureInfo^ Temp_30 = nullptr;
	System::IO::StringWriter^ Temp_31 = nullptr;
	System::Diagnostics::Process^ Temp_32 = nullptr;
	System::IntPtr Temp_33 = (System::IntPtr)0;
	System::IntPtr Temp_34 = (System::IntPtr)0;
	System::Boolean Temp_35 = false;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::IO::Stream^ V_3 = nullptr;
	System::IO::Stream^ V_4 = nullptr;
	array<System::Byte>^ V_5 = nullptr;
	System::Diagnostics::ProcessStartInfo^ V_6 = nullptr;
	System::IO::StringWriter^ V_7 = nullptr;
	System::Diagnostics::Process^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_12=12;                                                    //stloc				V_12
	IL_0009:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345"
	IL_000e:                                                                        //ldloc				V_12
	IL_0012:            Temp_0=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            Temp_1=Root::T_x128::M_x1(Temp_0);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_001c:            V_0=Temp_1;                                                 //stloc.0
	IL_001d:                                                                        //ldtoken				Reflector::IPackage
	IL_0022:            Temp_2=Reflector::IPackage::typeid;                         //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0027:            Temp_3=Temp_2->Module;                                      //callvirt				System::Reflection::Module^ System::Type::get_Module()
	IL_002c:            Temp_4=Temp_3->FullyQualifiedName;                          //callvirt				System::String^ System::Reflection::Module::get_FullyQualifiedName()
	IL_0031:            V_1=Temp_4;                                                 //stloc.1
	IL_0032:            Temp_5=System::IO::Path::GetTempFileName();                 //call				System::String^ System::IO::Path::GetTempFileName()
	IL_0037:                                                                        //ldstr				L"\x0429\x492B\x562D\x552F"
	IL_003c:                                                                        //ldloc				V_12
	IL_0040:            Temp_6=a(L"\x0429\x492B\x562D\x552F",V_12);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0045:            Temp_7=System::IO::Path::ChangeExtension(Temp_5,Temp_6);    //call				System::String^ System::IO::Path::ChangeExtension(System::String^,System::String^)
	IL_004a:            V_2=Temp_7;                                                 //stloc.2
	IL_004b:                                                                        //ldloc.2
	IL_004c:            Temp_8=System::IO::File::Create(V_2);                       //call				System::IO::FileStream^ System::IO::File::Create(System::String^)
	IL_0051:            V_3=safe_cast<System::IO::Stream^>(Temp_8);                 //stloc.3
	IL_0052:            /*goto IL_017b;*/goto IL_017601;                            //br				IL_017b
	IL_005201:          try{
	IL_0057:                                                                        //ldloc.s				V_7
	IL_0059:                                                                        //ldstr				L"\x0529\x6D2B\x4D2D\x442F\x5B31\x5B33\x5835\x0237\x1839\x6E3B\x5B3D\x2D3F\x2D41\x3243\x2345\x6A47"
	IL_005e:                                                                        //ldloc				V_12
	IL_0062:            Temp_18=a(L"\x0529\x6D2B\x4D2D\x442F\x5B31\x5B33\x5835\x0237\x1839\x6E3B\x5B3D\x2D3F\x2D41\x3243\x2345\x6A47",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0067:            V_7->Write(Temp_18);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_006c:                                                                        //ldloc.s				V_7
	IL_006e:                                                                        //ldstr				L"\x0A29"
	IL_0073:                                                                        //ldloc				V_12
	IL_0077:            Temp_19=a(L"\x0A29",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007c:            V_7->Write(Temp_19);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0081:                                                                        //ldloc.s				V_7
	IL_0083:                                                                        //ldstr				L"\x0529\x782B\x4F2D\x422F\x5531\x5133\x4235\x0237\x1839"
	IL_0088:                                                                        //ldloc				V_12
	IL_008c:            Temp_20=a(L"\x0529\x782B\x4F2D\x422F\x5531\x5133\x4235\x0237\x1839",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0091:                                                                        //ldloc.1
	IL_0092:                                                                        //ldstr				L"\x0829"
	IL_0097:                                                                        //ldloc				V_12
	IL_009b:            Temp_21=a(L"\x0829",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a0:            Temp_22=System::String::Concat(Temp_20,V_1,Temp_21);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00a5:            V_7->Write(Temp_22);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00aa:                                                                        //ldloc.s				V_7
	IL_00ac:                                                                        //ldstr				L"\x0A29"
	IL_00b1:                                                                        //ldloc				V_12
	IL_00b5:            Temp_23=a(L"\x0A29",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ba:            V_7->Write(Temp_23);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00bf:                                                                        //ldloc.s				V_7
	IL_00c1:                                                                        //ldstr				L"\x0529\x6D2B\x5E2D\x402F\x5E31\x5D33\x5535\x5937\x4E39\x553B\x513D\x2E3F\x7841\x6643"
	IL_00c6:                                                                        //ldloc				V_12
	IL_00ca:            Temp_24=a(L"\x0529\x6D2B\x5E2D\x402F\x5E31\x5D33\x5535\x5937\x4E39\x553B\x513D\x2E3F\x7841\x6643",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:                                                                        //ldstr				L"\x0829"
	IL_00d5:                                                                        //ldloc				V_12
	IL_00d9:            Temp_25=a(L"\x0829",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00de:            Temp_26=System::String::Concat(Temp_24,V_0,Temp_25);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00e3:            V_7->Write(Temp_26);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e8:                                                                        //ldloc.s				V_7
	IL_00ea:                                                                        //ldstr				L"\x0A29"
	IL_00ef:                                                                        //ldloc				V_12
	IL_00f3:            Temp_27=a(L"\x0A29",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f8:            V_7->Write(Temp_27);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00fd:                                                                        //ldloc.s				V_6
	IL_00ff:                                                                        //ldloc.s				V_7
	IL_0101:            Temp_28=V_7->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0106:            V_6->Arguments=Temp_28;                                     //callvirt				void System::Diagnostics::ProcessStartInfo::set_Arguments(System::String^)
	IL_010b:            goto IL_0262;                                               //leave				IL_0262
	                    ;}
	                    finally{
	IL_0110:                                                                        //ldc.i4				0x1
	IL_0115:            V_9=1;                                                      //stloc				V_9
	IL_0119:            /*goto IL_011d;*/goto IL_011b;                              //br.s				IL_011d
	IL_011b:            goto IL_0132;                                               //br.s				IL_0132
	IL_011d:                                                                        //ldloc				V_9
	IL_0121:            switch(V_9){case 0:goto IL_0155;case 1:goto IL_011b;case 2:goto IL_0141;};//switch				(IL_0155,IL_011b,IL_0141)
	IL_0132:                                                                        //ldloc.s				V_7
	IL_0134:            if(V_7==nullptr)goto IL_0157;                               //brfalse.s				IL_0157
	IL_0136:                                                                        //ldc.i4				0x2
	IL_013b:            V_9=2;                                                      //stloc				V_9
	IL_013f:            /*goto IL_011d;*/goto IL_0141;                              //br.s				IL_011d
	IL_0141:            goto IL_0143;                                               //br.s				IL_0143
	IL_0143:                                                                        //ldloc.s				V_7
	IL_0145:            /*safe_cast<System::IDisposable^>(V_7)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_014a:                                                                        //ldc.i4				0x0
	IL_014f:            V_9=0;                                                      //stloc				V_9
	IL_0153:            /*goto IL_011d;*/goto IL_0155;                              //br.s				IL_011d
	IL_0155:            goto IL_0157;                                               //br.s				IL_0157
	IL_0157:                                                                        //endfinally
	                    ;}
	IL_0158:            goto IL_015b;                                               //br.s				IL_015b
	IL_015a:                                                                        //break
	IL_015b:            Temp_29=gcnew System::Diagnostics::ProcessStartInfo();      //newobj				void System::Diagnostics::ProcessStartInfo::.ctor()
	IL_0160:            V_6=Temp_29;                                                //stloc.s				V_6
	IL_0162:                                                                        //ldloc.s				V_6
	IL_0164:                                                                        //ldloc.2
	IL_0165:            V_6->FileName=V_2;                                          //callvirt				void System::Diagnostics::ProcessStartInfo::set_FileName(System::String^)
	IL_016a:            Temp_30=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_016f:            Temp_31=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_30));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0174:            V_7=Temp_31;                                                //stloc.s				V_7
	IL_0176:            /*goto IL_0057;*/goto IL_005201;                            //br				IL_0057
	IL_017601:          try{
	IL_017b:                                                                        //ldtoken				Root::T_x134
	IL_0180:            Temp_9=Root::T_x134::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0185:            Temp_10=Temp_9->Assembly;                                   //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_018a:                                                                        //ldstr				L"\x7829\x492B\x482D\x5C2F\x5731\x5733\x4235\x5737\x4839\x123B\x773D\x2E3F\x3141\x3043\x2745\x2447\x2649\x624B\x2B4D\x284F\x3751"
	IL_018f:                                                                        //ldloc				V_12
	IL_0193:            Temp_11=a(L"\x7829\x492B\x482D\x5C2F\x5731\x5733\x4235\x5737\x4839\x123B\x773D\x2E3F\x3141\x3043\x2745\x2447\x2649\x624B\x2B4D\x284F\x3751",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0198:            Temp_12=Temp_10->GetManifestResourceStream(Temp_11);        //callvirt				System::IO::Stream^ System::Reflection::Assembly::GetManifestResourceStream(System::String^)
	IL_019d:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_019f:            /*goto IL_01a1;*/goto IL_019F01;                            //br.s				IL_01a1
	IL_019F01:          try{
	IL_01a1:                                                                        //ldloc.s				V_4
	IL_01a3:            Temp_13=V_4->Length;                                        //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_01a8:                                                                        //conv.i4
	IL_01a9:                                                                        //conv.ovf.u4
	IL_01aa:            Temp_14=gcnew array<System::Byte>(safe_cast<System::UInt32>(safe_cast<System::Int32>(Temp_13)));//newarr				System::Byte
	IL_01af:            V_5=Temp_14;                                                //stloc.s				V_5
	IL_01b1:                                                                        //ldloc.s				V_4
	IL_01b3:                                                                        //ldloc.s				V_5
	IL_01b5:                                                                        //ldc.i4.0
	IL_01b6:                                                                        //ldloc.s				V_5
	IL_01b8:            Temp_15=V_5->Length;                                        //ldlen
	IL_01b9:                                                                        //conv.i4
	IL_01ba:            Temp_16=V_4->Read(V_5,safe_cast<System::Int32>(0),Temp_15); //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_01bf:                                                                        //pop
	IL_01c0:                                                                        //ldloc.3
	IL_01c1:                                                                        //ldloc.s				V_5
	IL_01c3:                                                                        //ldc.i4.0
	IL_01c4:                                                                        //ldloc.s				V_5
	IL_01c6:            Temp_17=V_5->Length;                                        //ldlen
	IL_01c7:                                                                        //conv.i4
	IL_01c8:            V_3->Write(V_5,safe_cast<System::Int32>(0),Temp_17);        //callvirt				void System::IO::Stream::Write(array<System::Byte>^,System::Int32,System::Int32)
	IL_01cd:            goto IL_0217;                                               //leave.s				IL_0217
	                    ;}
	                    finally{
	IL_01cf:                                                                        //ldc.i4				0x2
	IL_01d4:            V_10=2;                                                     //stloc				V_10
	IL_01d8:            /*goto IL_01dc;*/goto IL_01da;                              //br.s				IL_01dc
	IL_01da:            goto IL_01f1;                                               //br.s				IL_01f1
	IL_01dc:                                                                        //ldloc				V_10
	IL_01e0:            switch(V_10){case 0:goto IL_0200;case 1:goto IL_0214;case 2:goto IL_01da;};//switch				(IL_0200,IL_0214,IL_01da)
	IL_01f1:                                                                        //ldloc.s				V_4
	IL_01f3:            if(V_4==nullptr)goto IL_0216;                               //brfalse.s				IL_0216
	IL_01f5:                                                                        //ldc.i4				0x0
	IL_01fa:            V_10=0;                                                     //stloc				V_10
	IL_01fe:            /*goto IL_01dc;*/goto IL_0200;                              //br.s				IL_01dc
	IL_0200:            goto IL_0202;                                               //br.s				IL_0202
	IL_0202:                                                                        //ldloc.s				V_4
	IL_0204:            /*safe_cast<System::IDisposable^>(V_4)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0209:                                                                        //ldc.i4				0x1
	IL_020e:            V_10=1;                                                     //stloc				V_10
	IL_0212:            /*goto IL_01dc;*/goto IL_0214;                              //br.s				IL_01dc
	IL_0214:            goto IL_0216;                                               //br.s				IL_0216
	IL_0216:                                                                        //endfinally
	                    ;}
	IL_0217:            goto IL_0158;                                               //leave				IL_0158
	                    ;}
	                    finally{
	IL_021c:                                                                        //ldc.i4				0x1
	IL_0221:            V_11=1;                                                     //stloc				V_11
	IL_0225:            /*goto IL_0229;*/goto IL_0227;                              //br.s				IL_0229
	IL_0227:            goto IL_023e;                                               //br.s				IL_023e
	IL_0229:                                                                        //ldloc				V_11
	IL_022d:            switch(V_11){case 0:goto IL_024c;case 1:goto IL_0227;case 2:goto IL_025f;};//switch				(IL_024c,IL_0227,IL_025f)
	IL_023e:                                                                        //ldloc.3
	IL_023f:            if(V_3==nullptr)goto IL_0261;                               //brfalse.s				IL_0261
	IL_0241:                                                                        //ldc.i4				0x0
	IL_0246:            V_11=0;                                                     //stloc				V_11
	IL_024a:            /*goto IL_0229;*/goto IL_024c;                              //br.s				IL_0229
	IL_024c:            goto IL_024e;                                               //br.s				IL_024e
	IL_024e:                                                                        //ldloc.3
	IL_024f:            /*safe_cast<System::IDisposable^>(V_3)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0254:                                                                        //ldc.i4				0x2
	IL_0259:            V_11=2;                                                     //stloc				V_11
	IL_025d:            /*goto IL_0229;*/goto IL_025f;                              //br.s				IL_0229
	IL_025f:            goto IL_0261;                                               //br.s				IL_0261
	IL_0261:                                                                        //endfinally
	                    ;}
	IL_0262:                                                                        //ldloc.s				V_6
	IL_0264:            Temp_32=System::Diagnostics::Process::Start(V_6);           //call				System::Diagnostics::Process^ System::Diagnostics::Process::Start(System::Diagnostics::ProcessStartInfo^)
	IL_0269:            V_8=Temp_32;                                                //stloc.s				V_8
	IL_026b:                                                                        //ldloc.s				V_8
	IL_026d:            Temp_33=V_8->Handle;                                        //callvirt				System::IntPtr System::Diagnostics::Process::get_Handle()
	IL_0272:            Temp_34=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_0277:            Temp_35=(Temp_33 != Temp_34);                               //call				System::Boolean System::IntPtr::op_Inequality(System::IntPtr,System::IntPtr)
	IL_027c:            return Temp_35;                                             //ret

}
//[System::Diagnostics::DebuggerHidden()]
inline System::Boolean Root::T_x134::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::DateTime Temp_6;
	System::DateTime Temp_7;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Globalization::CultureInfo^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	array<System::Object^>^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Windows::Forms::DialogResult Temp_14 = (System::Windows::Forms::DialogResult)0;
	System::Boolean Temp_15 = false;
	System::Boolean Temp_16 = false;
	System::Boolean Temp_17 = false;
	System::Boolean Temp_18 = false;
	System::Windows::Forms::DialogResult Temp_19 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::DateTime V_0;
	System::DateTime V_1;
	System::DateTime V_2;
	System::String^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	array<System::Object^>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_7=16;                                                     //stloc				V_7
	IL_0009:            goto IL_0038;                                               //br.s				IL_0038
	IL_000b:                                                                        //ldloc				V_6
	IL_000f:            switch(V_6){case 0:goto IL_00f8;case 1:goto IL_0118;case 2:goto IL_0147;case 3:goto IL_00e5;case 4:goto IL_0169;case 5:goto IL_0179;case 6:goto IL_0190;case 7:goto IL_00cb;case 8:goto IL_012a;};//switch				(IL_00f8,IL_0118,IL_0147,IL_00e5,IL_0169,IL_0179,IL_0190,IL_00cb,IL_012a)
	IL_0038:                                                                        //ldloca.s				V_0
	IL_003a:                                                                        //ldstr				L"\x1C2D\x002F\x0231\x0333"
	IL_003f:                                                                        //ldloc				V_7
	IL_0043:            Temp_0=a(L"\x1C2D\x002F\x0231\x0333",V_7);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0048:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_004d:            Temp_2=System::Int32::Parse(Temp_0,safe_cast<System::IFormatProvider^>(Temp_1));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0052:                                                                        //ldc.i4.3
	IL_0053:                                                                        //ldc.i4.1
	IL_0054:            V_0=System::DateTime(Temp_2,safe_cast<System::Int32>(3),safe_cast<System::Int32>(1));//call				void System::DateTime::.ctor(System::Int32,System::Int32,System::Int32)
	IL_0059:                                                                        //ldloca.s				V_0
	IL_005b:                                                                        //ldstr				L"\x1D2D\x002F"
	IL_0060:                                                                        //ldloc				V_7
	IL_0064:            Temp_3=a(L"\x1D2D\x002F",V_7);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0069:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_006e:            Temp_5=System::Int32::Parse(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0073:                                                                        //conv.r8
	IL_0074:            Temp_6=V_0.AddDays(safe_cast<System::Double>(Temp_5));      //call				System::DateTime System::DateTime::AddDays(System::Double)
	IL_0079:            V_1=Temp_6;                                                 //stloc.1
	IL_007a:            Temp_7=System::DateTime::Now;                               //call				System::DateTime System::DateTime::get_Now()
	IL_007f:            V_2=Temp_7;                                                 //stloc.2
	IL_0080:                                                                        //ldstr				L"\x6F2D\x402F\x4231\x5833\x5F35\x5B37\x5B39\x483B\x573D\x2F3F\x2C41\x0A43\x2745\x2547\x2F49"
	IL_0085:                                                                        //ldloc				V_7
	IL_0089:            Temp_8=a(L"\x6F2D\x402F\x4231\x5833\x5F35\x5B37\x5B39\x483B\x573D\x2F3F\x2C41\x0A43\x2745\x2547\x2F49",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008e:            Temp_9=Root::T_x128::M_x1(Temp_8);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0093:            V_3=Temp_9;                                                 //stloc.3
	IL_0094:            Temp_10=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0099:                                                                        //ldstr				L"\x7A2D\x582F\x5B31\x4733\x1635\x4E37\x5F39\x4E3B\x4D3D\x293F\x2D41\x2A43\x6645\x2747\x2C49\x6C4B\x354D\x604F\x2F51\x7453\x3F55\x2B57\x7A59\x335B\x2B5D\x145F\x4261\x0B63\x0065\x4867\x0E69\x0D6B\x1A6D\x156F\x5C71\x5473\x3275\x1777\x5A79\x057B\x117D\xF57F\xA281\xF383\xE785\xE687\xFE89\xAC8B\xFA8D\xFF8F\xB291\xE193\xE695\xFC97\xFB99\xE89B\xFB9D\x809F\xC3A1\xD1A3\xD2A5\xC7A7\xC7A9\xCDAB\xDAAD\xD9AF\xD1B1\xD5B3\xDAB5\xD4B7\xC3B9\x83BB"
	IL_009e:                                                                        //ldloc				V_7
	IL_00a2:            Temp_11=a(L"\x7A2D\x582F\x5B31\x4733\x1635\x4E37\x5F39\x4E3B\x4D3D\x293F\x2D41\x2A43\x6645\x2747\x2C49\x6C4B\x354D\x604F\x2F51\x7453\x3F55\x2B57\x7A59\x335B\x2B5D\x145F\x4261\x0B63\x0065\x4867\x0E69\x0D6B\x1A6D\x156F\x5C71\x5473\x3275\x1777\x5A79\x057B\x117D\xF57F\xA281\xF383\xE785\xE687\xFE89\xAC8B\xFA8D\xFF8F\xB291\xE193\xE695\xFC97\xFB99\xE89B\xFB9D\x809F\xC3A1\xD1A3\xD2A5\xC7A7\xC7A9\xCDAB\xDAAD\xD9AF\xD1B1\xD5B3\xDAB5\xD4B7\xC3B9\x83BB",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a7:                                                                        //ldc.i4.1
	IL_00a8:            Temp_12=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_00ad:            V_5=Temp_12;                                                //stloc.s				V_5
	IL_00af:                                                                        //ldloc.s				V_5
	IL_00b1:                                                                        //ldc.i4.0
	IL_00b2:                                                                        //ldloc.3
	IL_00b3:            V_5[0]=safe_cast<System::Object^>(V_3);                     //stelem.ref
	IL_00b4:                                                                        //ldloc.s				V_5
	IL_00b6:            Temp_13=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_10),Temp_11,V_5);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00bb:            V_4=Temp_13;                                                //stloc.s				V_4
	IL_00bd:                                                                        //ldc.i4				0x7
	IL_00c2:            V_6=7;                                                      //stloc				V_6
	IL_00c6:            /*goto IL_000b;*/goto IL_00cb;                              //br				IL_000b
	IL_00cb:                                                                        //ldloc.2
	IL_00cc:                                                                        //ldloc.1
	IL_00cd:            Temp_18=(V_2 > V_1);                                        //call				System::Boolean System::DateTime::op_GreaterThan(System::DateTime,System::DateTime)
	IL_00d2:            if(!Temp_18)goto IL_016b;                                   //brfalse				IL_016b
	IL_00d7:                                                                        //ldc.i4				0x3
	IL_00dc:            V_6=3;                                                      //stloc				V_6
	IL_00e0:            /*goto IL_000b;*/goto IL_00e5;                              //br				IL_000b
	IL_00e5:            goto IL_00e8;                                               //br.s				IL_00e8
	IL_00e7:                                                                        //break
	IL_00e8:            goto IL_011c;                                               //br.s				IL_011c
	IL_00ea:                                                                        //ldc.i4				0x0
	IL_00ef:            V_6=0;                                                      //stloc				V_6
	IL_00f3:            /*goto IL_000b;*/goto IL_00f8;                              //br				IL_000b
	IL_00f8:                                                                        //ldnull
	IL_00f9:                                                                        //ldloc.s				V_4
	IL_00fb:                                                                        //ldloc.3
	IL_00fc:                                                                        //ldc.i4.4
	IL_00fd:                                                                        //ldc.i4.s				48
	IL_00ff:            Temp_14=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),V_4,V_3,safe_cast<System::Windows::Forms::MessageBoxButtons>(4),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0104:                                                                        //ldc.i4.6
	IL_0105:            if(safe_cast<System::Int32>(Temp_14)!=6)goto IL_0195;       //bne.un				IL_0195
	IL_010a:                                                                        //ldc.i4				0x1
	IL_010f:            V_6=1;                                                      //stloc				V_6
	IL_0113:            /*goto IL_000b;*/goto IL_0118;                              //br				IL_000b
	IL_0118:            goto IL_0149;                                               //br.s				IL_0149
	IL_011a:                                                                        //ldc.i4.1
	IL_011b:            return true;                                                //ret
	IL_011c:                                                                        //ldc.i4				0x8
	IL_0121:            V_6=8;                                                      //stloc				V_6
	IL_0125:            /*goto IL_000b;*/goto IL_012a;                              //br				IL_000b
	IL_012a:                                                                        //ldnull
	IL_012b:                                                                        //ldloc.s				V_4
	IL_012d:                                                                        //ldloc.3
	IL_012e:                                                                        //ldc.i4.4
	IL_012f:                                                                        //ldc.i4.s				16
	IL_0131:            Temp_19=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),V_4,V_3,safe_cast<System::Windows::Forms::MessageBoxButtons>(4),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0136:                                                                        //ldc.i4.6
	IL_0137:            if(safe_cast<System::Int32>(Temp_19)!=6)goto IL_011a;       //bne.un.s				IL_011a
	IL_0139:                                                                        //ldc.i4				0x2
	IL_013e:            V_6=2;                                                      //stloc				V_6
	IL_0142:            /*goto IL_000b;*/goto IL_0147;                              //br				IL_000b
	IL_0147:            goto IL_0152;                                               //br.s				IL_0152
	IL_0149:                                                                        //ldarg.0
	IL_014a:                                                                        //ldc.i4.1
	IL_014b:                                                                        //ldc.i4.0
	IL_014c:            Temp_15=this->M_x1(true,false);                             //call				System::Boolean Root::T_x134::M_x1(System::Boolean,System::Boolean)
	IL_0151:            return Temp_15;                                             //ret
	IL_0152:                                                                        //ldarg.0
	IL_0153:                                                                        //ldc.i4.1
	IL_0154:                                                                        //ldc.i4.0
	IL_0155:            Temp_16=this->M_x1(true,false);                             //call				System::Boolean Root::T_x134::M_x1(System::Boolean,System::Boolean)
	IL_015a:                                                                        //pop
	IL_015b:                                                                        //ldc.i4				0x4
	IL_0160:            V_6=4;                                                      //stloc				V_6
	IL_0164:            /*goto IL_000b;*/goto IL_0169;                              //br				IL_000b
	IL_0169:            goto IL_011a;                                               //br.s				IL_011a
	IL_016b:                                                                        //ldc.i4				0x5
	IL_0170:            V_6=5;                                                      //stloc				V_6
	IL_0174:            /*goto IL_000b;*/goto IL_0179;                              //br				IL_000b
	IL_0179:                                                                        //ldloc.2
	IL_017a:                                                                        //ldloc.0
	IL_017b:            Temp_17=(V_2 > V_0);                                        //call				System::Boolean System::DateTime::op_GreaterThan(System::DateTime,System::DateTime)
	IL_0180:            if(!Temp_17)goto IL_0195;                                   //brfalse.s				IL_0195
	IL_0182:                                                                        //ldc.i4				0x6
	IL_0187:            V_6=6;                                                      //stloc				V_6
	IL_018b:            /*goto IL_000b;*/goto IL_0190;                              //br				IL_000b
	IL_0190:            goto IL_00ea;                                               //br				IL_00ea
	IL_0195:                                                                        //ldc.i4.0
	IL_0196:            return false;                                               //ret

}
inline Root::T_x134::T_x1::T_x1(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::IO::Stream^ Temp_1 = nullptr;
	System::Int64 Temp_2 = 0;
	array<System::Byte>^ Temp_3 = nullptr;
	array<System::Byte>^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::InvalidOperationException^ Temp_6 = nullptr;
	array<System::Byte>^ Temp_7 = nullptr;
	array<System::Byte>^ Temp_8 = nullptr;
	array<System::Byte>^ Temp_9 = nullptr;
	array<System::Byte>^ Temp_10 = nullptr;
	array<System::Byte>^ Temp_11 = nullptr;
	System::IO::Stream^ Temp_12 = nullptr;
	System::UInt32 Temp_13 = 0;
	System::UInt16 Temp_14 = 0;
	System::UInt16 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::UInt32 Temp_17 = 0;
	System::UInt32 Temp_18 = 0;
	System::UInt16 Temp_19 = 0;
	System::UInt16 Temp_20 = 0;
	System::UInt32 Temp_21 = 0;
	System::UInt16 Temp_22 = 0;
	System::UInt16 Temp_23 = 0;
	System::UInt16 Temp_24 = 0;
	System::UInt16 Temp_25 = 0;
	System::Byte Temp_26 = 0;
	System::Byte Temp_27 = 0;
	System::Int32 Temp_28 = 0;
	System::Int32 Temp_29 = 0;
	System::Int32 Temp_30 = 0;
	System::UInt32 Temp_31 = 0;
	System::UInt32 Temp_32 = 0;
	System::UInt16 Temp_33 = 0;
	System::UInt16 Temp_34 = 0;
	System::UInt32 Temp_35 = 0;
	System::Int32 Temp_36 = 0;
	System::Int32 Temp_37 = 0;
	System::UInt16 Temp_38 = 0;
	System::UInt16 Temp_39 = 0;
	System::UInt16 Temp_40 = 0;
	System::UInt16 Temp_41 = 0;
	System::UInt16 Temp_42 = 0;
	System::UInt16 Temp_43 = 0;
	System::UInt32 Temp_44 = 0;
	System::UInt32 Temp_45 = 0;
	System::UInt32 Temp_46 = 0;
	System::UInt32 Temp_47 = 0;
	System::UInt16 Temp_48 = 0;
	System::UInt16 Temp_49 = 0;
	System::UInt16 Temp_50 = 0;
	System::UInt32 Temp_51 = 0;
	System::UInt16 Temp_52 = 0;
	System::UInt32 Temp_53 = 0;
	System::UInt16 Temp_54 = 0;
	System::UInt32 Temp_55 = 0;
	System::UInt16 Temp_56 = 0;
	System::UInt32 Temp_57 = 0;
	System::UInt32 Temp_58 = 0;
	System::UInt64 Temp_59 = 0;
	System::UInt64 Temp_60 = 0;
	System::UInt64 Temp_61 = 0;
	System::UInt64 Temp_62 = 0;
	System::UInt64 Temp_63 = 0;
	System::UInt32 Temp_64 = 0;
	System::String^ Temp_65 = nullptr;
	System::InvalidOperationException^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::InvalidOperationException^ Temp_68 = nullptr;
	Root::T_x134::T_x1^ Temp_69 = nullptr;
	Root::T_x134::T_x1^ Temp_70 = nullptr;
	System::UInt64 Temp_71 = 0;
	Root::T_x134::T_x1^ Temp_72 = nullptr;
	Root::T_x134::T_x1^ Temp_73 = nullptr;
	Root::T_x134::T_x1^ Temp_74 = nullptr;
	System::UInt64 Temp_75 = 0;
	Root::T_x134::T_x1^ Temp_76 = nullptr;
	Root::T_x134::T_x1^ Temp_77 = nullptr;
	Root::T_x134::T_x1^ Temp_78 = nullptr;
	System::UInt64 Temp_79 = 0;
	Root::T_x134::T_x1^ Temp_80 = nullptr;
	Root::T_x134::T_x1^ Temp_81 = nullptr;
	Root::T_x134::T_x1^ Temp_82 = nullptr;
	System::UInt64 Temp_83 = 0;
	Root::T_x134::T_x1^ Temp_84 = nullptr;
	Root::T_x134::T_x1^ Temp_85 = nullptr;
	Root::T_x134::T_x1^ Temp_86 = nullptr;
	System::UInt64 Temp_87 = 0;
	Root::T_x134::T_x1^ Temp_88 = nullptr;
	//local variables.
	System::Int64 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_2=3;                                                      //stloc				V_2
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldc.i4				0x80
	IL_000f:            Temp_0=gcnew array<System::Byte>(128);                      //newarr				System::Byte
	IL_0014:                                                                        //dup
	IL_0015:                                                                        //ldtoken				Root::T_x188::T_x7 Root::T_x188 F_x14
	IL_001a:            BytesToBytes(gcnew array<System::Byte>{0x4D,0x5A,0x90,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x0E,0x1F,0xBA,0x0E,0x00,0xB4,0x09,0xCD,0x21,0xB8,0x01,0x4C,0xCD,0x21,0x54,0x68,0x69,0x73,0x20,0x70,0x72,0x6F,0x67,0x72,0x61,0x6D,0x20,0x63,0x61,0x6E,0x6E,0x6F,0x74,0x20,0x62,0x65,0x20,0x72,0x75,0x6E,0x20,0x69,0x6E,0x20,0x44,0x4F,0x53,0x20,0x6D,0x6F,0x64,0x65,0x2E,0x0D,0x0D,0x0A,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00},Temp_0);//call				void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(System::Array^,System::RuntimeFieldHandle)
	IL_001f:            this->F_x1=Temp_0;                                          //stfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldc.i4				0x4550
	IL_002a:            this->F_x2=17744;                                           //stfld				System::UInt32 Root::T_x134::T_x1 F_x2
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldc.i4.0
	IL_0031:            this->F_x12=0;                                              //stfld				System::UInt16 Root::T_x134::T_x1 F_x12
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldc.i4.0
	IL_0038:            this->F_x13=0;                                              //stfld				System::Int32 Root::T_x134::T_x1 F_x13
	IL_003d:                                                                        //ldarg.0
	IL_003e:                                                                        //ldc.i4.0
	IL_003f:            this->F_x8=0;                                               //stfld				System::UInt32 Root::T_x134::T_x1 F_x8
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldc.i4.0
	IL_0046:            this->F_x5=0;                                               //stfld				System::UInt32 Root::T_x134::T_x1 F_x5
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldc.i4				0xe0
	IL_0051:            this->F_x9=224;                                             //stfld				System::UInt16 Root::T_x134::T_x1 F_x9
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldc.i4				0x10e
	IL_005c:            this->F_x4=270;                                             //stfld				System::UInt16 Root::T_x134::T_x1 F_x4
	IL_0061:                                                                        //ldarg.0
	IL_0062:                                                                        //ldc.i4				0x10b
	IL_0067:            this->F_x15=267;                                            //stfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //ldc.i4.6
	IL_006e:            this->F_x11=6;                                              //stfld				System::Byte Root::T_x134::T_x1 F_x11
	IL_0073:                                                                        //ldarg.0
	IL_0074:                                                                        //ldc.i4.0
	IL_0075:            this->F_x10=0;                                              //stfld				System::Byte Root::T_x134::T_x1 F_x10
	IL_007a:                                                                        //ldarg.0
	IL_007b:                                                                        //ldc.i4.0
	IL_007c:            this->F_x7=0;                                               //stfld				System::Int32 Root::T_x134::T_x1 F_x7
	IL_0081:                                                                        //ldarg.0
	IL_0082:                                                                        //ldc.i4.0
	IL_0083:            this->F_x16=0;                                              //stfld				System::Int32 Root::T_x134::T_x1 F_x16
	IL_0088:                                                                        //ldarg.0
	IL_0089:                                                                        //ldc.i4.0
	IL_008a:            this->F_x6=0;                                               //stfld				System::Int32 Root::T_x134::T_x1 F_x6
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //ldc.i4.0
	IL_0091:            this->F_x14=0;                                              //stfld				System::UInt32 Root::T_x134::T_x1 F_x14
	IL_0096:                                                                        //ldarg.0
	IL_0097:                                                                        //ldc.i4				0x2000
	IL_009c:            this->F_x18=8192;                                           //stfld				System::UInt32 Root::T_x134::T_x1 F_x18
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:                                                                        //ldc.i4.0
	IL_00a3:            this->F_x19=0;                                              //stfld				System::UInt32 Root::T_x134::T_x1 F_x19
	IL_00a8:                                                                        //ldarg.0
	IL_00a9:                                                                        //ldc.i4				0x400000
	IL_00ae:                                                                        //conv.i8
	IL_00af:            this->F_x17=4194304;                                        //stfld				System::UInt64 Root::T_x134::T_x1 F_x17
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:                                                                        //ldc.i4				0x2000
	IL_00ba:            this->F_x56=8192;                                           //stfld				System::Int32 Root::T_x134::T_x1 F_x56
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:                                                                        //ldc.i4				0x200
	IL_00c5:            this->F_x48=512;                                            //stfld				System::Int32 Root::T_x134::T_x1 F_x48
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:                                                                        //ldc.i4.4
	IL_00cc:            this->F_x55=4;                                              //stfld				System::UInt16 Root::T_x134::T_x1 F_x55
	IL_00d1:                                                                        //ldarg.0
	IL_00d2:                                                                        //ldc.i4.0
	IL_00d3:            this->F_x57=0;                                              //stfld				System::UInt16 Root::T_x134::T_x1 F_x57
	IL_00d8:                                                                        //ldarg.0
	IL_00d9:                                                                        //ldc.i4.0
	IL_00da:            this->F_x81=0;                                              //stfld				System::UInt16 Root::T_x134::T_x1 F_x81
	IL_00df:                                                                        //ldarg.0
	IL_00e0:                                                                        //ldc.i4.0
	IL_00e1:            this->F_x33=0;                                              //stfld				System::UInt16 Root::T_x134::T_x1 F_x33
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:                                                                        //ldc.i4.4
	IL_00e8:            this->F_x49=4;                                              //stfld				System::UInt16 Root::T_x134::T_x1 F_x49
	IL_00ed:                                                                        //ldarg.0
	IL_00ee:                                                                        //ldc.i4.0
	IL_00ef:            this->F_x158=0;                                             //stfld				System::UInt16 Root::T_x134::T_x1 F_x158
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:                                                                        //ldc.i4.0
	IL_00f6:            this->F_x176=0;                                             //stfld				System::UInt32 Root::T_x134::T_x1 F_x176
	IL_00fb:                                                                        //ldarg.0
	IL_00fc:                                                                        //ldc.i4.0
	IL_00fd:            this->F_x134=0;                                             //stfld				System::UInt32 Root::T_x134::T_x1 F_x134
	IL_0102:                                                                        //ldarg.0
	IL_0103:                                                                        //ldc.i4.0
	IL_0104:            this->F_x148=0;                                             //stfld				System::UInt32 Root::T_x134::T_x1 F_x148
	IL_0109:                                                                        //ldarg.0
	IL_010a:                                                                        //ldc.i4.0
	IL_010b:            this->F_x173=0;                                             //stfld				System::UInt16 Root::T_x134::T_x1 F_x173
	IL_0110:                                                                        //ldarg.0
	IL_0111:                                                                        //ldc.i4.0
	IL_0112:            this->F_x113=0;                                             //stfld				System::UInt16 Root::T_x134::T_x1 F_x113
	IL_0117:                                                                        //ldarg.0
	IL_0118:                                                                        //ldc.i4				0x100000
	IL_011d:                                                                        //conv.i8
	IL_011e:            this->F_x3=1048576;                                         //stfld				System::UInt64 Root::T_x134::T_x1 F_x3
	IL_0123:                                                                        //ldarg.0
	IL_0124:                                                                        //ldc.i4				0x1000
	IL_0129:                                                                        //conv.i8
	IL_012a:            this->F_x47=4096;                                           //stfld				System::UInt64 Root::T_x134::T_x1 F_x47
	IL_012f:                                                                        //ldarg.0
	IL_0130:                                                                        //ldc.i4				0x100000
	IL_0135:                                                                        //conv.i8
	IL_0136:            this->F_x43=1048576;                                        //stfld				System::UInt64 Root::T_x134::T_x1 F_x43
	IL_013b:                                                                        //ldarg.0
	IL_013c:                                                                        //ldc.i4				0x1000
	IL_0141:                                                                        //conv.i8
	IL_0142:            this->F_x35=4096;                                           //stfld				System::UInt64 Root::T_x134::T_x1 F_x35
	IL_0147:                                                                        //ldarg.0
	IL_0148:                                                                        //ldc.i4.0
	IL_0149:            this->F_x93=0;                                              //stfld				System::UInt32 Root::T_x134::T_x1 F_x93
	IL_014e:                                                                        //ldarg.0
	IL_014f:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0154:                                                                        //ldarg.1
	IL_0155:            Temp_1=A_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_015a:            Temp_2=Temp_1->Position;                                    //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_015f:            V_0=Temp_2;                                                 //stloc.0
	IL_0160:                                                                        //ldarg.0
	IL_0161:                                                                        //ldarg.1
	IL_0162:                                                                        //ldc.i4				0x80
	IL_0167:            Temp_3=A_0->ReadBytes(safe_cast<System::Int32>(128));       //callvirt				array<System::Byte>^ System::IO::BinaryReader::ReadBytes(System::Int32)
	IL_016c:            this->F_x1=Temp_3;                                          //stfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_0171:                                                                        //ldarg.0
	IL_0172:            Temp_4=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_0177:                                                                        //ldc.i4.0
	IL_0178:                                                                        //ldelem.u1
	IL_0179:                                                                        //ldc.i4.s				77
	IL_017b:            if(Temp_4[0]!=77)goto IL_018d;                              //bne.un.s				IL_018d
	IL_017d:            goto IL_017f;                                               //br.s				IL_017f
	IL_017f:                                                                        //ldarg.0
	IL_0180:            Temp_7=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_0185:                                                                        //ldc.i4.1
	IL_0186:                                                                        //ldelem.u1
	IL_0187:                                                                        //ldc.i4.s				90
	IL_0189:            if(Temp_7[1]==90)goto IL_01a1;                              //beq.s				IL_01a1
	IL_018b:            goto IL_018d;                                               //br.s				IL_018d
	IL_018d:                                                                        //ldstr				L"\x6720\x4A22\x4924\x4226\x0928\x422A\x5E2C\x0F2E\x5F30\x5C32\x4134\x1736\x5838\x1B3A\x4D3C\x503E\x3340\x3742\x2444\x2546\x2548\x2E4A\x6D4C\x2A4E\x2950\x3652\x3654\x2256\x2D58\x3A5A\x3F5C\x335E\x0460\x4D62\x4564\x2366\x2668\x386A\x4D6C\x076E\x1470\x1272\x1174\x1276\x0B78\x5B7A\x197C\x107E\xE480\xF082\xA584\xE986\xE688\xFF8A\xAD8C\xEC8E\xFE90\xFD92\xE194\xF696\xF098\xF59A\xBD9C\xB89E\xECA0\xF9A2\x82A4\x87A6\xDAA8\xC2AA\xCAAC\xC1AE\xD0B0\xC7B2\xC0B4\xC5B6\xDCB8\x95BA"
	IL_0192:                                                                        //ldloc				V_2
	IL_0196:            Temp_5=a(L"\x6720\x4A22\x4924\x4226\x0928\x422A\x5E2C\x0F2E\x5F30\x5C32\x4134\x1736\x5838\x1B3A\x4D3C\x503E\x3340\x3742\x2444\x2546\x2548\x2E4A\x6D4C\x2A4E\x2950\x3652\x3654\x2256\x2D58\x3A5A\x3F5C\x335E\x0460\x4D62\x4564\x2366\x2668\x386A\x4D6C\x076E\x1470\x1272\x1174\x1276\x0B78\x5B7A\x197C\x107E\xE480\xF082\xA584\xE986\xE688\xFF8A\xAD8C\xEC8E\xFE90\xFD92\xE194\xF696\xF098\xF59A\xBD9C\xB89E\xECA0\xF9A2\x82A4\x87A6\xDAA8\xC2AA\xCAAC\xC1AE\xD0B0\xC7B2\xC0B4\xC5B6\xDCB8\x95BA",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019b:            Temp_6=gcnew System::InvalidOperationException(Temp_5);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_01a0:            throw Temp_6;                                               //throw
	IL_01a1:                                                                        //ldarg.0
	IL_01a2:            Temp_8=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_01a7:                                                                        //ldc.i4.s				60
	IL_01a9:                                                                        //ldelem.u1
	IL_01aa:                                                                        //ldarg.0
	IL_01ab:            Temp_9=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_01b0:                                                                        //ldc.i4.s				61
	IL_01b2:                                                                        //ldelem.u1
	IL_01b3:                                                                        //ldc.i4.8
	IL_01b4:                                                                        //shl
	IL_01b5:                                                                        //or
	IL_01b6:                                                                        //ldarg.0
	IL_01b7:            Temp_10=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_01bc:                                                                        //ldc.i4.s				62
	IL_01be:                                                                        //ldelem.u1
	IL_01bf:                                                                        //ldc.i4.s				16
	IL_01c1:                                                                        //shl
	IL_01c2:                                                                        //or
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:            Temp_11=this->F_x1;                                         //ldfld				array<System::Byte>^ Root::T_x134::T_x1 F_x1
	IL_01c9:                                                                        //ldc.i4.s				63
	IL_01cb:                                                                        //ldelem.u1
	IL_01cc:                                                                        //ldc.i4.s				24
	IL_01ce:                                                                        //shl
	IL_01cf:                                                                        //or
	IL_01d0:            V_1=safe_cast<System::Int32>((((Temp_8[60] | (Temp_9[61] << 8)) | (Temp_10[62] << 16)) | (Temp_11[63] << 24)));//stloc.1
	IL_01d1:                                                                        //ldarg.1
	IL_01d2:            Temp_12=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryReader::get_BaseStream()
	IL_01d7:                                                                        //ldloc.0
	IL_01d8:                                                                        //ldloc.1
	IL_01d9:                                                                        //conv.i8
	IL_01da:                                                                        //add
	IL_01db:            Temp_12->Position=(V_0 + safe_cast<System::Int64>(V_1));    //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_01e0:                                                                        //ldarg.0
	IL_01e1:                                                                        //ldarg.1
	IL_01e2:            Temp_13=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_01e7:            this->F_x2=Temp_13;                                         //stfld				System::UInt32 Root::T_x134::T_x1 F_x2
	IL_01ec:                                                                        //ldarg.1
	IL_01ed:            Temp_14=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_01f2:                                                                        //pop
	IL_01f3:                                                                        //ldarg.0
	IL_01f4:                                                                        //ldarg.1
	IL_01f5:            Temp_15=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_01fa:            this->F_x12=Temp_15;                                        //stfld				System::UInt16 Root::T_x134::T_x1 F_x12
	IL_01ff:                                                                        //ldarg.0
	IL_0200:                                                                        //ldarg.1
	IL_0201:            Temp_16=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0206:            this->F_x13=Temp_16;                                        //stfld				System::Int32 Root::T_x134::T_x1 F_x13
	IL_020b:                                                                        //ldarg.0
	IL_020c:                                                                        //ldarg.1
	IL_020d:            Temp_17=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0212:            this->F_x8=Temp_17;                                         //stfld				System::UInt32 Root::T_x134::T_x1 F_x8
	IL_0217:                                                                        //ldarg.0
	IL_0218:                                                                        //ldarg.1
	IL_0219:            Temp_18=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_021e:            this->F_x5=Temp_18;                                         //stfld				System::UInt32 Root::T_x134::T_x1 F_x5
	IL_0223:                                                                        //ldarg.0
	IL_0224:                                                                        //ldarg.1
	IL_0225:            Temp_19=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_022a:            this->F_x9=Temp_19;                                         //stfld				System::UInt16 Root::T_x134::T_x1 F_x9
	IL_022f:                                                                        //ldarg.0
	IL_0230:                                                                        //ldarg.1
	IL_0231:            Temp_20=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0236:            this->F_x4=Temp_20;                                         //stfld				System::UInt16 Root::T_x134::T_x1 F_x4
	IL_023b:                                                                        //ldarg.0
	IL_023c:            Temp_21=this->F_x2;                                         //ldfld				System::UInt32 Root::T_x134::T_x1 F_x2
	IL_0241:                                                                        //ldc.i4				0x4550
	IL_0246:            if(Temp_21==17744)goto IL_025e;                             //beq.s				IL_025e
	IL_0248:            goto IL_024a;                                               //br.s				IL_024a
	IL_024a:                                                                        //ldstr				L"\x6820\x4D22\x5324\x4626\x4528\x422A\x492C\x0F2E\x7230\x7C32\x7334\x7136\x1938\x533A\x583C\x5E3E\x2540\x2642\x3744\x6946"
	IL_024f:                                                                        //ldloc				V_2
	IL_0253:            Temp_67=a(L"\x6820\x4D22\x5324\x4626\x4528\x422A\x492C\x0F2E\x7230\x7C32\x7334\x7136\x1938\x533A\x583C\x5E3E\x2540\x2642\x3744\x6946",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0258:            Temp_68=gcnew System::InvalidOperationException(Temp_67);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_025d:            throw Temp_68;                                              //throw
	IL_025e:                                                                        //ldarg.0
	IL_025f:                                                                        //ldarg.1
	IL_0260:            Temp_22=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0265:            this->F_x15=Temp_22;                                        //stfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_026a:                                                                        //ldarg.0
	IL_026b:            Temp_23=this->F_x9;                                         //ldfld				System::UInt16 Root::T_x134::T_x1 F_x9
	IL_0270:                                                                        //conv.i4
	IL_0271:                                                                        //ldarg.0
	IL_0272:            Temp_24=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_0277:            Temp_25=Root::T_x134::T_x1::M_x1(Temp_24);                  //call				System::UInt16 Root::T_x134::T_x1::M_x1(System::UInt16)
	IL_027c:                                                                        //conv.i4
	IL_027d:            if(safe_cast<System::Int32>(Temp_23)==safe_cast<System::Int32>(Temp_25))goto IL_0295;//beq.s				IL_0295
	IL_027f:            goto IL_0281;                                               //br.s				IL_0281
	IL_0281:                                                                        //ldstr				L"\x6820\x4D22\x5324\x4626\x4528\x422A\x492C\x0F2E\x5E30\x4332\x4134\x5E36\x5638\x553A\x5C3C\x533E\x6140\x2B42\x2044\x2646\x2D48\x2E4A\x3F4C\x6F4E\x2250\x3A52\x2F54\x3256\x7958\x325A\x335C\x7F5E\x2260\x2C62\x2364\x2166\x4968\x036A\x086C\x0E6E\x1570\x1672\x0774\x5976"
	IL_0286:                                                                        //ldloc				V_2
	IL_028a:            Temp_65=a(L"\x6820\x4D22\x5324\x4626\x4528\x422A\x492C\x0F2E\x5E30\x4332\x4134\x5E36\x5638\x553A\x5C3C\x533E\x6140\x2B42\x2044\x2646\x2D48\x2E4A\x3F4C\x6F4E\x2250\x3A52\x2F54\x3256\x7958\x325A\x335C\x7F5E\x2260\x2C62\x2364\x2166\x4968\x036A\x086C\x0E6E\x1570\x1672\x0774\x5976",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028f:            Temp_66=gcnew System::InvalidOperationException(Temp_65);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0294:            throw Temp_66;                                              //throw
	IL_0295:                                                                        //ldarg.0
	IL_0296:                                                                        //ldarg.1
	IL_0297:            Temp_26=A_0->ReadByte();                                    //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_029c:            this->F_x11=Temp_26;                                        //stfld				System::Byte Root::T_x134::T_x1 F_x11
	IL_02a1:                                                                        //ldarg.0
	IL_02a2:                                                                        //ldarg.1
	IL_02a3:            Temp_27=A_0->ReadByte();                                    //callvirt				System::Byte System::IO::BinaryReader::ReadByte()
	IL_02a8:            this->F_x10=Temp_27;                                        //stfld				System::Byte Root::T_x134::T_x1 F_x10
	IL_02ad:                                                                        //ldarg.0
	IL_02ae:                                                                        //ldarg.1
	IL_02af:            Temp_28=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02b4:            this->F_x7=Temp_28;                                         //stfld				System::Int32 Root::T_x134::T_x1 F_x7
	IL_02b9:                                                                        //ldarg.0
	IL_02ba:                                                                        //ldarg.1
	IL_02bb:            Temp_29=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02c0:            this->F_x16=Temp_29;                                        //stfld				System::Int32 Root::T_x134::T_x1 F_x16
	IL_02c5:                                                                        //ldarg.0
	IL_02c6:                                                                        //ldarg.1
	IL_02c7:            Temp_30=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_02cc:            this->F_x6=Temp_30;                                         //stfld				System::Int32 Root::T_x134::T_x1 F_x6
	IL_02d1:                                                                        //ldarg.0
	IL_02d2:                                                                        //ldarg.1
	IL_02d3:            Temp_31=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_02d8:            this->F_x14=Temp_31;                                        //stfld				System::UInt32 Root::T_x134::T_x1 F_x14
	IL_02dd:                                                                        //ldarg.0
	IL_02de:                                                                        //ldarg.1
	IL_02df:            Temp_32=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_02e4:            this->F_x18=Temp_32;                                        //stfld				System::UInt32 Root::T_x134::T_x1 F_x18
	IL_02e9:                                                                        //ldarg.0
	IL_02ea:            Temp_33=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_02ef:                                                                        //conv.i4
	IL_02f0:                                                                        //ldc.i4				0x10b
	IL_02f5:            if(safe_cast<System::Int32>(Temp_33)!=267)goto IL_0307;     //bne.un.s				IL_0307
	IL_02f7:            goto IL_02f9;                                               //br.s				IL_02f9
	IL_02f9:                                                                        //ldarg.0
	IL_02fa:                                                                        //ldarg.1
	IL_02fb:            Temp_64=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0300:            this->F_x19=Temp_64;                                        //stfld				System::UInt32 Root::T_x134::T_x1 F_x19
	IL_0305:            goto IL_0307;                                               //br.s				IL_0307
	IL_0307:                                                                        //ldarg.0
	IL_0308:                                                                        //ldarg.0
	IL_0309:            Temp_34=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_030e:                                                                        //conv.i4
	IL_030f:                                                                        //ldc.i4				0x10b
	IL_0314:            Temp_70=this;if(safe_cast<System::Int32>(Temp_34)==267)goto IL_0320;//beq.s				IL_0320
	IL_0316:            goto IL_0318;                                               //br.s				IL_0318
	IL_0318:                                                                        //ldarg.1
	IL_0319:            Temp_63=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_031e:            Temp_72=Temp_70;Temp_71=Temp_63;goto IL_0329;               //br.s				IL_0329
	IL_0320:                                                                        //ldarg.1
	IL_0321:            Temp_35=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0326:                                                                        //conv.u8
	IL_0327:            Temp_72=Temp_70;Temp_71=safe_cast<System::UInt64>(Temp_35);goto IL_0329;//br.s				IL_0329
	IL_0329:            Temp_72->F_x17=Temp_71;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x134::T_x1 F_x17
	IL_032e:                                                                        //ldarg.0
	IL_032f:                                                                        //ldarg.1
	IL_0330:            Temp_36=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0335:            this->F_x56=Temp_36;                                        //stfld				System::Int32 Root::T_x134::T_x1 F_x56
	IL_033a:                                                                        //ldarg.0
	IL_033b:                                                                        //ldarg.1
	IL_033c:            Temp_37=A_0->ReadInt32();                                   //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0341:            this->F_x48=Temp_37;                                        //stfld				System::Int32 Root::T_x134::T_x1 F_x48
	IL_0346:                                                                        //ldarg.0
	IL_0347:                                                                        //ldarg.1
	IL_0348:            Temp_38=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_034d:            this->F_x55=Temp_38;                                        //stfld				System::UInt16 Root::T_x134::T_x1 F_x55
	IL_0352:                                                                        //ldarg.0
	IL_0353:                                                                        //ldarg.1
	IL_0354:            Temp_39=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0359:            this->F_x57=Temp_39;                                        //stfld				System::UInt16 Root::T_x134::T_x1 F_x57
	IL_035e:                                                                        //ldarg.0
	IL_035f:                                                                        //ldarg.1
	IL_0360:            Temp_40=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0365:            this->F_x81=Temp_40;                                        //stfld				System::UInt16 Root::T_x134::T_x1 F_x81
	IL_036a:                                                                        //ldarg.0
	IL_036b:                                                                        //ldarg.1
	IL_036c:            Temp_41=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0371:            this->F_x33=Temp_41;                                        //stfld				System::UInt16 Root::T_x134::T_x1 F_x33
	IL_0376:                                                                        //ldarg.0
	IL_0377:                                                                        //ldarg.1
	IL_0378:            Temp_42=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_037d:            this->F_x49=Temp_42;                                        //stfld				System::UInt16 Root::T_x134::T_x1 F_x49
	IL_0382:                                                                        //ldarg.0
	IL_0383:                                                                        //ldarg.1
	IL_0384:            Temp_43=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_0389:            this->F_x158=Temp_43;                                       //stfld				System::UInt16 Root::T_x134::T_x1 F_x158
	IL_038e:                                                                        //ldarg.0
	IL_038f:                                                                        //ldarg.1
	IL_0390:            Temp_44=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0395:            this->F_x26=Temp_44;                                        //stfld				System::UInt32 Root::T_x134::T_x1 F_x26
	IL_039a:                                                                        //ldarg.0
	IL_039b:                                                                        //ldarg.1
	IL_039c:            Temp_45=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03a1:            this->F_x176=Temp_45;                                       //stfld				System::UInt32 Root::T_x134::T_x1 F_x176
	IL_03a6:                                                                        //ldarg.0
	IL_03a7:                                                                        //ldarg.1
	IL_03a8:            Temp_46=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03ad:            this->F_x134=Temp_46;                                       //stfld				System::UInt32 Root::T_x134::T_x1 F_x134
	IL_03b2:                                                                        //ldarg.0
	IL_03b3:                                                                        //ldarg.1
	IL_03b4:            Temp_47=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03b9:            this->F_x148=Temp_47;                                       //stfld				System::UInt32 Root::T_x134::T_x1 F_x148
	IL_03be:                                                                        //ldarg.0
	IL_03bf:                                                                        //ldarg.1
	IL_03c0:            Temp_48=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_03c5:            this->F_x173=Temp_48;                                       //stfld				System::UInt16 Root::T_x134::T_x1 F_x173
	IL_03ca:                                                                        //ldarg.0
	IL_03cb:                                                                        //ldarg.1
	IL_03cc:            Temp_49=A_0->ReadUInt16();                                  //callvirt				System::UInt16 System::IO::BinaryReader::ReadUInt16()
	IL_03d1:            this->F_x113=Temp_49;                                       //stfld				System::UInt16 Root::T_x134::T_x1 F_x113
	IL_03d6:                                                                        //ldarg.0
	IL_03d7:                                                                        //ldarg.0
	IL_03d8:            Temp_50=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_03dd:                                                                        //conv.i4
	IL_03de:                                                                        //ldc.i4				0x10b
	IL_03e3:            Temp_74=this;if(safe_cast<System::Int32>(Temp_50)==267)goto IL_03ef;//beq.s				IL_03ef
	IL_03e5:            goto IL_03e7;                                               //br.s				IL_03e7
	IL_03e7:                                                                        //ldarg.1
	IL_03e8:            Temp_62=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_03ed:            Temp_76=Temp_74;Temp_75=Temp_62;goto IL_03f8;               //br.s				IL_03f8
	IL_03ef:                                                                        //ldarg.1
	IL_03f0:            Temp_51=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_03f5:                                                                        //conv.u8
	IL_03f6:            Temp_76=Temp_74;Temp_75=safe_cast<System::UInt64>(Temp_51);goto IL_03f8;//br.s				IL_03f8
	IL_03f8:            Temp_76->F_x3=Temp_75;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x134::T_x1 F_x3
	IL_03fd:                                                                        //ldarg.0
	IL_03fe:                                                                        //ldarg.0
	IL_03ff:            Temp_52=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_0404:                                                                        //conv.i4
	IL_0405:                                                                        //ldc.i4				0x10b
	IL_040a:            Temp_78=this;if(safe_cast<System::Int32>(Temp_52)==267)goto IL_0416;//beq.s				IL_0416
	IL_040c:            goto IL_040e;                                               //br.s				IL_040e
	IL_040e:                                                                        //ldarg.1
	IL_040f:            Temp_61=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_0414:            Temp_80=Temp_78;Temp_79=Temp_61;goto IL_041f;               //br.s				IL_041f
	IL_0416:                                                                        //ldarg.1
	IL_0417:            Temp_53=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_041c:                                                                        //conv.u8
	IL_041d:            Temp_80=Temp_78;Temp_79=safe_cast<System::UInt64>(Temp_53);goto IL_041f;//br.s				IL_041f
	IL_041f:            Temp_80->F_x47=Temp_79;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x134::T_x1 F_x47
	IL_0424:                                                                        //ldarg.0
	IL_0425:                                                                        //ldarg.0
	IL_0426:            Temp_54=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_042b:                                                                        //conv.i4
	IL_042c:                                                                        //ldc.i4				0x10b
	IL_0431:            Temp_82=this;if(safe_cast<System::Int32>(Temp_54)==267)goto IL_043d;//beq.s				IL_043d
	IL_0433:            goto IL_0435;                                               //br.s				IL_0435
	IL_0435:                                                                        //ldarg.1
	IL_0436:            Temp_60=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_043b:            Temp_84=Temp_82;Temp_83=Temp_60;goto IL_0446;               //br.s				IL_0446
	IL_043d:                                                                        //ldarg.1
	IL_043e:            Temp_55=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0443:                                                                        //conv.u8
	IL_0444:            Temp_84=Temp_82;Temp_83=safe_cast<System::UInt64>(Temp_55);goto IL_0446;//br.s				IL_0446
	IL_0446:            Temp_84->F_x43=Temp_83;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x134::T_x1 F_x43
	IL_044b:                                                                        //ldarg.0
	IL_044c:                                                                        //ldarg.0
	IL_044d:            Temp_56=this->F_x15;                                        //ldfld				System::UInt16 Root::T_x134::T_x1 F_x15
	IL_0452:                                                                        //conv.i4
	IL_0453:                                                                        //ldc.i4				0x10b
	IL_0458:            Temp_86=this;if(safe_cast<System::Int32>(Temp_56)==267)goto IL_0464;//beq.s				IL_0464
	IL_045a:            goto IL_045c;                                               //br.s				IL_045c
	IL_045c:                                                                        //ldarg.1
	IL_045d:            Temp_59=A_0->ReadUInt64();                                  //callvirt				System::UInt64 System::IO::BinaryReader::ReadUInt64()
	IL_0462:            Temp_88=Temp_86;Temp_87=Temp_59;goto IL_046d;               //br.s				IL_046d
	IL_0464:                                                                        //ldarg.1
	IL_0465:            Temp_57=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_046a:                                                                        //conv.u8
	IL_046b:            Temp_88=Temp_86;Temp_87=safe_cast<System::UInt64>(Temp_57);goto IL_046d;//br.s				IL_046d
	IL_046d:            Temp_88->F_x35=Temp_87;/*warning ! semantic stack doesn't empty at joint !;*///stfld				System::UInt64 Root::T_x134::T_x1 F_x35
	IL_0472:                                                                        //ldarg.0
	IL_0473:                                                                        //ldarg.1
	IL_0474:            Temp_58=A_0->ReadUInt32();                                  //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_0479:            this->F_x93=Temp_58;                                        //stfld				System::UInt32 Root::T_x134::T_x1 F_x93
	IL_047e:            return;                                                     //ret

}
inline System::Int32 Root::T_x134::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Int32 Root::T_x134::T_x1 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline System::UInt16 Root::T_x134::T_x1::M_x1(System::UInt16 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_1=11;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_0=0;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0014;case 1:goto IL_0059;case 2:goto IL_006d;case 3:goto IL_0046;};//switch				(IL_0014,IL_0059,IL_006d,IL_0046)
	IL_002f:            goto IL_0032;                                               //br.s				IL_0032
	IL_0031:                                                                        //break
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //conv.i4
	IL_0034:                                                                        //ldc.i4				0x10b
	IL_0039:            if(safe_cast<System::Int32>(A_0)!=267)goto IL_004e;         //bne.un.s				IL_004e
	IL_003b:                                                                        //ldc.i4				0x3
	IL_0040:            V_0=3;                                                      //stloc				V_0
	IL_0044:            /*goto IL_0016;*/goto IL_0046;                              //br.s				IL_0016
	IL_0046:            goto IL_006f;                                               //br.s				IL_006f
	IL_0048:                                                                        //ldc.i4				0xf0
	IL_004d:            return 240;                                                 //ret
	IL_004e:                                                                        //ldc.i4				0x1
	IL_0053:            V_0=1;                                                      //stloc				V_0
	IL_0057:            /*goto IL_0016;*/goto IL_0059;                              //br.s				IL_0016
	IL_0059:                                                                        //ldarg.0
	IL_005a:                                                                        //conv.i4
	IL_005b:                                                                        //ldc.i4				0x20b
	IL_0060:            if(safe_cast<System::Int32>(A_0)!=523)goto IL_0075;         //bne.un.s				IL_0075
	IL_0062:                                                                        //ldc.i4				0x2
	IL_0067:            V_0=2;                                                      //stloc				V_0
	IL_006b:            /*goto IL_0016;*/goto IL_006d;                              //br.s				IL_0016
	IL_006d:            goto IL_0048;                                               //br.s				IL_0048
	IL_006f:                                                                        //ldc.i4				0xe0
	IL_0074:            return 224;                                                 //ret
	IL_0075:                                                                        //ldstr				L"\x6028\x452A\x5B2C\x4E2E\x5D30\x5A32\x5134\x1736\x6938\x543A\x4F3C\x4B3E\x2040\x2142\x2944\x2246\x6948\x0E4A\x354C\x2A4E\x3250\x2652\x2154\x3656\x3B58\x375A\x385C\x7F5E\x0960\x0662\x0464\x0366\x0C68\x196A\x4D6C\x1C6E\x1870\x1472\x1B74\x1676\x0D78\x0E7A\x0F7C\x1A7E\xAF80"
	IL_007a:                                                                        //ldloc				V_1
	IL_007e:            Temp_0=a(L"\x6028\x452A\x5B2C\x4E2E\x5D30\x5A32\x5134\x1736\x6938\x543A\x4F3C\x4B3E\x2040\x2142\x2944\x2246\x6948\x0E4A\x354C\x2A4E\x3250\x2652\x2154\x3656\x3B58\x375A\x385C\x7F5E\x0960\x0662\x0464\x0366\x0C68\x196A\x4D6C\x1C6E\x1870\x1472\x1B74\x1676\x0D78\x0E7A\x0F7C\x1A7E\xAF80",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0083:            Temp_1=gcnew System::InvalidOperationException(Temp_0);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_0088:            throw Temp_1;                                               //throw

}
