#include "global_xref.h"

inline Root::T_x44::T_x44()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Root::T_x44::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IResource^ Temp_0 = nullptr;
	Reflector::CodeModel::IResource^ Temp_1 = nullptr;
	Reflector::CodeModel::IModule^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	Reflector::CodeModel::IEmbeddedResource^ V_0 = nullptr;
	Reflector::CodeModel::IFileResource^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0089;case 1:goto IL_0035;case 2:goto IL_009a;case 3:goto IL_0043;};//switch				(IL_0089,IL_0035,IL_009a,IL_0043)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldarg.0
	IL_001f:            Temp_0=this->M_x12();                                       //call				Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
	IL_0024:                                                                        //isinst				Reflector::CodeModel::IEmbeddedResource
	IL_0029:            V_0=dynamic_cast<Reflector::CodeModel::IEmbeddedResource^>(Temp_0);//stloc.0
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_3=1;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:            if(V_0==nullptr)goto IL_006f;                               //brfalse.s				IL_006f
	IL_0038:                                                                        //ldc.i4				0x3
	IL_003d:            V_3=3;                                                      //stloc				V_3
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:            goto IL_009c;                                               //br.s				IL_009c
	IL_0045:                                                                        //ldloc.1
	IL_0046:            Temp_2=safe_cast<Reflector::CodeModel::IResource^>(V_1)->Module;//callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IResource::get_Module()
	IL_004b:            Temp_3=Temp_2->Location;                                    //callvirt				System::String^ Reflector::CodeModel::IModule::get_Location()
	IL_0050:            Temp_4=System::IO::Path::GetDirectoryName(Temp_3);          //call				System::String^ System::IO::Path::GetDirectoryName(System::String^)
	IL_0055:                                                                        //ldloc.1
	IL_0056:            Temp_5=V_1->Location;                                       //callvirt				System::String^ Reflector::CodeModel::IFileResource::get_Location()
	IL_005b:            Temp_6=System::IO::Path::Combine(Temp_4,Temp_5);            //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_0060:            V_2=Temp_6;                                                 //stloc.2
	IL_0061:                                                                        //ldloc.2
	IL_0062:            Temp_7=System::Environment::ExpandEnvironmentVariables(V_2);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_0067:            V_2=Temp_7;                                                 //stloc.2
	IL_0068:                                                                        //ldloc.2
	IL_0069:            Temp_8=System::IO::File::Exists(V_2);                       //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_006e:            return Temp_8;                                              //ret
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_1=this->M_x12();                                       //call				Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
	IL_0075:                                                                        //isinst				Reflector::CodeModel::IFileResource
	IL_007a:            V_1=dynamic_cast<Reflector::CodeModel::IFileResource^>(Temp_1);//stloc.1
	IL_007b:                                                                        //ldc.i4				0x0
	IL_0080:            V_3=0;                                                      //stloc				V_3
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:                                                                        //ldloc.1
	IL_008a:            if(V_1==nullptr)goto IL_009e;                               //brfalse.s				IL_009e
	IL_008c:                                                                        //ldc.i4				0x2
	IL_0091:            V_3=2;                                                      //stloc				V_3
	IL_0095:            /*goto IL_0002;*/goto IL_009a;                              //br				IL_0002
	IL_009a:            goto IL_0045;                                               //br.s				IL_0045
	IL_009c:                                                                        //ldc.i4.1
	IL_009d:            return true;                                                //ret
	IL_009e:                                                                        //ldc.i4.0
	IL_009f:            return false;                                               //ret

}
inline void Root::T_x44::M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::ILanguageWriter^ Temp_2 = nullptr;
	Reflector::CodeModel::IResource^ Temp_3 = nullptr;
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
	IL_002a:            Temp_3=this->M_x12();                                       //call				Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
	IL_002f:            V_0->WriteResource(Temp_3);                                 //callvirt				void Reflector::CodeModel::ILanguageWriter::WriteResource(Reflector::CodeModel::IResource^)
	IL_0034:            return;                                                     //ret

}
inline void Root::T_x44::M_x1(Reflector::CodeModel::IResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Collections::Hashtable^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
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
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Object^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Globalization::CultureInfo^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::Collections::Hashtable^ Temp_34 = nullptr;
	System::Object^ Temp_35 = nullptr;
	System::Object^ Temp_36 = nullptr;
	System::Collections::Hashtable^ Temp_37 = nullptr;
	//local variables.
	Reflector::CodeModel::IEmbeddedResource^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_4=17;                                                     //stloc				V_4
	IL_0009:                                                                        //ldc.i4				0xe
	IL_000e:            V_3=14;                                                     //stloc				V_3
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0073;                                               //br.s				IL_0073
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            switch(V_3){case 0:goto IL_022e;case 1:goto IL_00b1;case 2:goto IL_0138;case 3:goto IL_0541;case 4:goto IL_01df;case 5:goto IL_0214;case 6:goto IL_0151;case 7:goto IL_0125;case 8:goto IL_0269;case 9:goto IL_0181;case 10:goto IL_008a;case 11:goto IL_0168;case 12:goto IL_01a8;case 13:goto IL_0242;case 14:goto IL_0014;case 15:goto IL_00f7;case 16:goto IL_01cc;case 17:goto IL_01f2;case 18:goto IL_0554;case 19:goto IL_05d6;case 20:goto IL_00d8;};//switch				(IL_022e,IL_00b1,IL_0138,IL_0541,IL_01df,IL_0214,IL_0151,IL_0125,IL_0269,IL_0181,IL_008a,IL_0168,IL_01a8,IL_0242,IL_0014,IL_00f7,IL_01cc,IL_01f2,IL_0554,IL_05d6,IL_00d8)
	IL_0073:                                                                        //volatile.
	IL_0075:            Temp_37=Root::T_x188::F_x1;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x1
	IL_007a:            if(Temp_37!=nullptr)goto IL_0153;                           //brtrue				IL_0153
	IL_007f:                                                                        //ldc.i4				0xa
	IL_0084:            V_3=10;                                                     //stloc				V_3
	IL_0088:            /*goto IL_0016;*/goto IL_008a;                              //br.s				IL_0016
	IL_008a:            goto IL_026b;                                               //br				IL_026b
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //ldarg.0
	IL_0091:                                                                        //ldc.i4				0x9e
	IL_0096:                                                                        //dup
	IL_0097:            V_2=158;                                                    //stloc.2
	IL_0098:            this->SelectedImageIndex=158;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_009d:                                                                        //ldloc.2
	IL_009e:            this->ImageIndex=V_2;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_00a3:                                                                        //ldc.i4				0x1
	IL_00a8:            V_3=1;                                                      //stloc				V_3
	IL_00ac:            /*goto IL_0016;*/goto IL_00b1;                              //br				IL_0016
	IL_00b1:            goto IL_0219;                                               //br				IL_0219
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:                                                                        //ldc.i4				0xa0
	IL_00bd:                                                                        //dup
	IL_00be:            V_2=160;                                                    //stloc.2
	IL_00bf:            this->SelectedImageIndex=160;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_00c4:                                                                        //ldloc.2
	IL_00c5:            this->ImageIndex=V_2;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_00ca:                                                                        //ldc.i4				0x14
	IL_00cf:            V_3=20;                                                     //stloc				V_3
	IL_00d3:            /*goto IL_0016;*/goto IL_00d8;                              //br				IL_0016
	IL_00d8:            goto IL_0219;                                               //br				IL_0219
	IL_00dd:                                                                        //ldarg.0
	IL_00de:                                                                        //ldarg.1
	IL_00df:            Temp_1=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_00e4:            this->Text=Temp_1;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_00e9:                                                                        //ldc.i4				0xf
	IL_00ee:            V_3=15;                                                     //stloc				V_3
	IL_00f2:            /*goto IL_0016;*/goto IL_00f7;                              //br				IL_0016
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:                                                                        //ldarg.1
	IL_00f9:            Temp_30=A_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_00fe:            Temp_31=this->M_x1(Temp_30);                                //call				System::String^ Root::T_x44::M_x1(System::String^)
	IL_0103:            Temp_32=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0108:            Temp_33=Temp_31->ToLower(Temp_32);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_010d:                                                                        //dup
	IL_010e:            V_1=safe_cast<System::Object^>(Temp_33);                    //stloc.1
	IL_010f:            if(Temp_33==nullptr)goto IL_008f;                           //brfalse				IL_008f
	IL_0114:            goto IL_0117;                                               //br.s				IL_0117
	IL_0116:                                                                        //break
	IL_0117:                                                                        //ldc.i4				0x7
	IL_011c:            V_3=7;                                                      //stloc				V_3
	IL_0120:            /*goto IL_0016;*/goto IL_0125;                              //br				IL_0016
	IL_0125:            goto IL_01e4;                                               //br				IL_01e4
	IL_012a:                                                                        //ldc.i4				0x2
	IL_012f:            V_3=2;                                                      //stloc				V_3
	IL_0133:            /*goto IL_0016;*/goto IL_0138;                              //br				IL_0016
	IL_0138:                                                                        //ldloc.0
	IL_0139:            Temp_0=V_0->Value;                                          //callvirt				array<System::Byte>^ Reflector::CodeModel::IEmbeddedResource::get_Value()
	IL_013e:            if(Temp_0!=nullptr)goto IL_05db;                            //brtrue				IL_05db
	IL_0143:                                                                        //ldc.i4				0x6
	IL_0148:            V_3=6;                                                      //stloc				V_3
	IL_014c:            /*goto IL_0016;*/goto IL_0151;                              //br				IL_0016
	IL_0151:            goto IL_01aa;                                               //br.s				IL_01aa
	IL_0153:                                                                        //ldarg.0
	IL_0154:                                                                        //ldarg.1
	IL_0155:            Root::T_x10::M_x1(safe_cast<System::Object^>(A_0));         //call				void Root::T_x10::M_x1(System::Object^)
	IL_015a:                                                                        //ldc.i4				0xb
	IL_015f:            V_3=11;                                                     //stloc				V_3
	IL_0163:            /*goto IL_0016;*/goto IL_0168;                              //br				IL_0016
	IL_0168:                                                                        //ldarg.0
	IL_0169:            Temp_29=this->M_x6();                                       //call				System::Object^ Root::T_x10::M_x6()
	IL_016e:            if(Temp_29==nullptr)goto IL_05db;                           //brfalse				IL_05db
	IL_0173:                                                                        //ldc.i4				0x9
	IL_0178:            V_3=9;                                                      //stloc				V_3
	IL_017c:            /*goto IL_0016;*/goto IL_0181;                              //br				IL_0016
	IL_0181:            goto IL_00dd;                                               //br				IL_00dd
	IL_0186:                                                                        //ldarg.0
	IL_0187:                                                                        //ldarg.0
	IL_0188:                                                                        //ldc.i4				0x9f
	IL_018d:                                                                        //dup
	IL_018e:            V_2=159;                                                    //stloc.2
	IL_018f:            this->SelectedImageIndex=159;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0194:                                                                        //ldloc.2
	IL_0195:            this->ImageIndex=V_2;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_019a:                                                                        //ldc.i4				0xc
	IL_019f:            V_3=12;                                                     //stloc				V_3
	IL_01a3:            /*goto IL_0016;*/goto IL_01a8;                              //br				IL_0016
	IL_01a8:            goto IL_0219;                                               //br.s				IL_0219
	IL_01aa:                                                                        //ldarg.0
	IL_01ab:                                                                        //ldarg.0
	IL_01ac:                                                                        //ldc.i4				0xa6
	IL_01b1:                                                                        //dup
	IL_01b2:            V_2=166;                                                    //stloc.2
	IL_01b3:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_01b8:                                                                        //ldloc.2
	IL_01b9:            this->ImageIndex=V_2;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_01be:                                                                        //ldc.i4				0x10
	IL_01c3:            V_3=16;                                                     //stloc				V_3
	IL_01c7:            /*goto IL_0016;*/goto IL_01cc;                              //br				IL_0016
	IL_01cc:            goto IL_05db;                                               //br				IL_05db
	IL_01d1:                                                                        //ldc.i4				0x4
	IL_01d6:            V_3=4;                                                      //stloc				V_3
	IL_01da:            /*goto IL_0016;*/goto IL_01df;                              //br				IL_0016
	IL_01df:            goto IL_008f;                                               //br				IL_008f
	IL_01e4:                                                                        //ldc.i4				0x11
	IL_01e9:            V_3=17;                                                     //stloc				V_3
	IL_01ed:            /*goto IL_0016;*/goto IL_01f2;                              //br				IL_0016
	IL_01f2:                                                                        //volatile.
	IL_01f4:            Temp_34=Root::T_x188::F_x1;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x1
	IL_01f9:            Temp_36=V_1;                                                //ldloc.1
	IL_01fa:            Temp_35=Temp_34[Temp_36];                                   //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_01ff:                                                                        //dup
	IL_0200:            V_1=Temp_35;                                                //stloc.1
	IL_0201:            if(V_1==nullptr)goto IL_008f;                               //brfalse				IL_008f
	IL_0206:                                                                        //ldc.i4				0x5
	IL_020b:            V_3=5;                                                      //stloc				V_3
	IL_020f:            /*goto IL_0016;*/goto IL_0214;                              //br				IL_0016
	IL_0214:            goto IL_0546;                                               //br				IL_0546
	IL_0219:                                                                        //ldarg.1
	IL_021a:                                                                        //isinst				Reflector::CodeModel::IEmbeddedResource
	IL_021f:            V_0=dynamic_cast<Reflector::CodeModel::IEmbeddedResource^>(A_0);//stloc.0
	IL_0220:                                                                        //ldc.i4				0x0
	IL_0225:            V_3=0;                                                      //stloc				V_3
	IL_0229:            /*goto IL_0016;*/goto IL_022e;                              //br				IL_0016
	IL_022e:                                                                        //ldloc.0
	IL_022f:            if(V_0==nullptr)goto IL_05db;                               //brfalse				IL_05db
	IL_0234:                                                                        //ldc.i4				0xd
	IL_0239:            V_3=13;                                                     //stloc				V_3
	IL_023d:            /*goto IL_0016;*/goto IL_0242;                              //br				IL_0016
	IL_0242:            goto IL_012a;                                               //br				IL_012a
	IL_0247:                                                                        //ldarg.0
	IL_0248:                                                                        //ldarg.0
	IL_0249:                                                                        //ldc.i4				0xa1
	IL_024e:                                                                        //dup
	IL_024f:            V_2=161;                                                    //stloc.2
	IL_0250:            this->SelectedImageIndex=161;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0255:                                                                        //ldloc.2
	IL_0256:            this->ImageIndex=V_2;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_025b:                                                                        //ldc.i4				0x8
	IL_0260:            V_3=8;                                                      //stloc				V_3
	IL_0264:            /*goto IL_0016;*/goto IL_0269;                              //br				IL_0016
	IL_0269:            goto IL_0219;                                               //br.s				IL_0219
	IL_026b:                                                                        //ldc.i4.s				54
	IL_026d:                                                                        //ldc.r4				0.5
	IL_0272:            Temp_2=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(54),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_0277:                                                                        //dup
	IL_0278:                                                                        //ldstr				L"\x012E\x5330\x5E32\x4534"
	IL_027d:                                                                        //ldloc				V_4
	IL_0281:            Temp_3=a(L"\x012E\x5330\x5E32\x4534",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0286:                                                                        //ldc.i4.0
	IL_0287:                                                                        //box				System::Int32
	IL_028c:            Temp_2->Add(safe_cast<System::Object^>(Temp_3),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0291:                                                                        //dup
	IL_0292:                                                                        //ldstr				L"\x012E\x5430\x5E32\x5334"
	IL_0297:                                                                        //ldloc				V_4
	IL_029b:            Temp_4=a(L"\x012E\x5430\x5E32\x5334",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a0:                                                                        //ldc.i4.1
	IL_02a1:                                                                        //box				System::Int32
	IL_02a6:            Temp_2->Add(safe_cast<System::Object^>(Temp_4),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02ab:                                                                        //dup
	IL_02ac:                                                                        //ldstr				L"\x012E\x5630\x5A32\x5334"
	IL_02b1:                                                                        //ldloc				V_4
	IL_02b5:            Temp_5=a(L"\x012E\x5630\x5A32\x5334",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ba:                                                                        //ldc.i4.2
	IL_02bb:                                                                        //box				System::Int32
	IL_02c0:            Temp_2->Add(safe_cast<System::Object^>(Temp_5),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02c5:                                                                        //dup
	IL_02c6:                                                                        //ldstr				L"\x012E\x5B30\x4332\x5234"
	IL_02cb:                                                                        //ldloc				V_4
	IL_02cf:            Temp_6=a(L"\x012E\x5B30\x4332\x5234",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02d4:                                                                        //ldc.i4.3
	IL_02d5:                                                                        //box				System::Int32
	IL_02da:            Temp_2->Add(safe_cast<System::Object^>(Temp_6),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02df:                                                                        //dup
	IL_02e0:                                                                        //ldstr				L"\x012E\x4130\x5D32\x5234"
	IL_02e5:                                                                        //ldloc				V_4
	IL_02e9:            Temp_7=a(L"\x012E\x4130\x5D32\x5234",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ee:                                                                        //ldc.i4.4
	IL_02ef:                                                                        //box				System::Int32
	IL_02f4:            Temp_2->Add(safe_cast<System::Object^>(Temp_7),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02f9:                                                                        //dup
	IL_02fa:                                                                        //ldstr				L"\x012E\x4530\x5A32\x5334"
	IL_02ff:                                                                        //ldloc				V_4
	IL_0303:            Temp_8=a(L"\x012E\x4530\x5A32\x5334",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0308:                                                                        //ldc.i4.5
	IL_0309:                                                                        //box				System::Int32
	IL_030e:            Temp_2->Add(safe_cast<System::Object^>(Temp_8),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0313:                                                                        //dup
	IL_0314:                                                                        //ldstr				L"\x012E\x4630\x5E32\x5334"
	IL_0319:                                                                        //ldloc				V_4
	IL_031d:            Temp_9=a(L"\x012E\x4630\x5E32\x5334",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0322:                                                                        //ldc.i4.6
	IL_0323:                                                                        //box				System::Int32
	IL_0328:            Temp_2->Add(safe_cast<System::Object^>(Temp_9),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_032d:                                                                        //dup
	IL_032e:                                                                        //ldstr				L"\x012E\x5830\x5032\x5A34"
	IL_0333:                                                                        //ldloc				V_4
	IL_0337:            Temp_10=a(L"\x012E\x5830\x5032\x5A34",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033c:                                                                        //ldc.i4.7
	IL_033d:                                                                        //box				System::Int32
	IL_0342:            Temp_2->Add(safe_cast<System::Object^>(Temp_10),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0347:                                                                        //dup
	IL_0348:                                                                        //ldstr				L"\x012E\x5230\x4632\x4734"
	IL_034d:                                                                        //ldloc				V_4
	IL_0351:            Temp_11=a(L"\x012E\x5230\x4632\x4734",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0356:                                                                        //ldc.i4.8
	IL_0357:                                                                        //box				System::Int32
	IL_035c:            Temp_2->Add(safe_cast<System::Object^>(Temp_11),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0361:                                                                        //dup
	IL_0362:                                                                        //ldstr				L"\x012E\x5430\x4B32\x5C34\x5136"
	IL_0367:                                                                        //ldloc				V_4
	IL_036b:            Temp_12=a(L"\x012E\x5430\x4B32\x5C34\x5136",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0370:                                                                        //ldc.i4.s				9
	IL_0372:                                                                        //box				System::Int32
	IL_0377:            Temp_2->Add(safe_cast<System::Object^>(Temp_12),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_037c:                                                                        //dup
	IL_037d:                                                                        //ldstr				L"\x012E\x5B30\x4332\x5034\x5036"
	IL_0382:                                                                        //ldloc				V_4
	IL_0386:            Temp_13=a(L"\x012E\x5B30\x4332\x5034\x5036",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_038b:                                                                        //ldc.i4.s				10
	IL_038d:                                                                        //box				System::Int32
	IL_0392:            Temp_2->Add(safe_cast<System::Object^>(Temp_13),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0397:                                                                        //dup
	IL_0398:                                                                        //ldstr				L"\x012E\x4530\x5A32\x5334\x5136"
	IL_039d:                                                                        //ldloc				V_4
	IL_03a1:            Temp_14=a(L"\x012E\x4530\x5A32\x5334\x5136",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a6:                                                                        //ldc.i4.s				11
	IL_03a8:                                                                        //box				System::Int32
	IL_03ad:            Temp_2->Add(safe_cast<System::Object^>(Temp_14),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03b2:                                                                        //dup
	IL_03b3:                                                                        //ldstr				L"\x012E\x5B30\x4032"
	IL_03b8:                                                                        //ldloc				V_4
	IL_03bc:            Temp_15=a(L"\x012E\x5B30\x4032",V_4);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c1:                                                                        //ldc.i4.s				12
	IL_03c3:                                                                        //box				System::Int32
	IL_03c8:            Temp_2->Add(safe_cast<System::Object^>(Temp_15),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03cd:                                                                        //dup
	IL_03ce:                                                                        //ldstr				L"\x012E\x5230\x4032"
	IL_03d3:                                                                        //ldloc				V_4
	IL_03d7:            Temp_16=a(L"\x012E\x5230\x4032",V_4);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03dc:                                                                        //ldc.i4.s				13
	IL_03de:                                                                        //box				System::Int32
	IL_03e3:            Temp_2->Add(safe_cast<System::Object^>(Temp_16),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03e8:                                                                        //dup
	IL_03e9:                                                                        //ldstr				L"\x012E\x4730\x5132"
	IL_03ee:                                                                        //ldloc				V_4
	IL_03f2:            Temp_17=a(L"\x012E\x4730\x5132",V_4);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03f7:                                                                        //ldc.i4.s				14
	IL_03f9:                                                                        //box				System::Int32
	IL_03fe:            Temp_2->Add(safe_cast<System::Object^>(Temp_17),safe_cast<System::Object^>(14));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0403:                                                                        //dup
	IL_0404:                                                                        //ldstr				L"\x012E\x4530\x4B32\x4134"
	IL_0409:                                                                        //ldloc				V_4
	IL_040d:            Temp_18=a(L"\x012E\x4530\x4B32\x4134",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0412:                                                                        //ldc.i4.s				15
	IL_0414:                                                                        //box				System::Int32
	IL_0419:            Temp_2->Add(safe_cast<System::Object^>(Temp_18),safe_cast<System::Object^>(15));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_041e:                                                                        //dup
	IL_041f:                                                                        //ldstr				L"\x012E\x4930\x5E32\x5934"
	IL_0424:                                                                        //ldloc				V_4
	IL_0428:            Temp_19=a(L"\x012E\x4930\x5E32\x5934",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_042d:                                                                        //ldc.i4.s				16
	IL_042f:                                                                        //box				System::Int32
	IL_0434:            Temp_2->Add(safe_cast<System::Object^>(Temp_19),safe_cast<System::Object^>(16));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0439:                                                                        //dup
	IL_043a:                                                                        //ldstr				L"\x012E\x4930\x4032\x5934"
	IL_043f:                                                                        //ldloc				V_4
	IL_0443:            Temp_20=a(L"\x012E\x4930\x4032\x5934",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0448:                                                                        //ldc.i4.s				17
	IL_044a:                                                                        //box				System::Int32
	IL_044f:            Temp_2->Add(safe_cast<System::Object^>(Temp_20),safe_cast<System::Object^>(17));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0454:                                                                        //dup
	IL_0455:                                                                        //ldstr				L"\x012E\x4930\x4032\x5134"
	IL_045a:                                                                        //ldloc				V_4
	IL_045e:            Temp_21=a(L"\x012E\x4930\x4032\x5134",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0463:                                                                        //ldc.i4.s				18
	IL_0465:                                                                        //box				System::Int32
	IL_046a:            Temp_2->Add(safe_cast<System::Object^>(Temp_21),safe_cast<System::Object^>(18));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_046f:                                                                        //dup
	IL_0470:                                                                        //ldstr				L"\x012E\x5230\x4032\x4634"
	IL_0475:                                                                        //ldloc				V_4
	IL_0479:            Temp_22=a(L"\x012E\x5230\x4032\x4634",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_047e:                                                                        //ldc.i4.s				19
	IL_0480:                                                                        //box				System::Int32
	IL_0485:            Temp_2->Add(safe_cast<System::Object^>(Temp_22),safe_cast<System::Object^>(19));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_048a:                                                                        //dup
	IL_048b:                                                                        //ldstr				L"\x012E\x5930\x4732\x5834"
	IL_0490:                                                                        //ldloc				V_4
	IL_0494:            Temp_23=a(L"\x012E\x5930\x4732\x5834",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0499:                                                                        //ldc.i4.s				20
	IL_049b:                                                                        //box				System::Int32
	IL_04a0:            Temp_2->Add(safe_cast<System::Object^>(Temp_23),safe_cast<System::Object^>(20));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04a5:                                                                        //dup
	IL_04a6:                                                                        //ldstr				L"\x012E\x5C30\x5B32\x4134"
	IL_04ab:                                                                        //ldloc				V_4
	IL_04af:            Temp_24=a(L"\x012E\x5C30\x5B32\x4134",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04b4:                                                                        //ldc.i4.s				21
	IL_04b6:                                                                        //box				System::Int32
	IL_04bb:            Temp_2->Add(safe_cast<System::Object^>(Temp_24),safe_cast<System::Object^>(21));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04c0:                                                                        //dup
	IL_04c1:                                                                        //ldstr				L"\x012E\x5030\x4032\x4534"
	IL_04c6:                                                                        //ldloc				V_4
	IL_04ca:            Temp_25=a(L"\x012E\x5030\x4032\x4534",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04cf:                                                                        //ldc.i4.s				22
	IL_04d1:                                                                        //box				System::Int32
	IL_04d6:            Temp_2->Add(safe_cast<System::Object^>(Temp_25),safe_cast<System::Object^>(22));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04db:                                                                        //dup
	IL_04dc:                                                                        //ldstr				L"\x012E\x5030\x4032\x4534\x4F36"
	IL_04e1:                                                                        //ldloc				V_4
	IL_04e5:            Temp_26=a(L"\x012E\x5030\x4032\x4534\x4F36",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04ea:                                                                        //ldc.i4.s				23
	IL_04ec:                                                                        //box				System::Int32
	IL_04f1:            Temp_2->Add(safe_cast<System::Object^>(Temp_26),safe_cast<System::Object^>(23));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04f6:                                                                        //dup
	IL_04f7:                                                                        //ldstr				L"\x012E\x5930\x4732\x5834\x5B36"
	IL_04fc:                                                                        //ldloc				V_4
	IL_0500:            Temp_27=a(L"\x012E\x5930\x4732\x5834\x5B36",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0505:                                                                        //ldc.i4.s				24
	IL_0507:                                                                        //box				System::Int32
	IL_050c:            Temp_2->Add(safe_cast<System::Object^>(Temp_27),safe_cast<System::Object^>(24));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0511:                                                                        //dup
	IL_0512:                                                                        //ldstr				L"\x012E\x4330\x5632\x4634\x5836\x4C38\x493A\x5E3C\x5A3E\x3240"
	IL_0517:                                                                        //ldloc				V_4
	IL_051b:            Temp_28=a(L"\x012E\x4330\x5632\x4634\x5836\x4C38\x493A\x5E3C\x5A3E\x3240",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0520:                                                                        //ldc.i4.s				25
	IL_0522:                                                                        //box				System::Int32
	IL_0527:            Temp_2->Add(safe_cast<System::Object^>(Temp_28),safe_cast<System::Object^>(25));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_052c:                                                                        //volatile.
	IL_052e:            Root::T_x188::F_x1=Temp_2;                                  //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x1
	IL_0533:                                                                        //ldc.i4				0x3
	IL_0538:            V_3=3;                                                      //stloc				V_3
	IL_053c:            /*goto IL_0016;*/goto IL_0541;                              //br				IL_0016
	IL_0541:            goto IL_0153;                                               //br				IL_0153
	IL_0546:                                                                        //ldc.i4				0x12
	IL_054b:            V_3=18;                                                     //stloc				V_3
	IL_054f:            /*goto IL_0016;*/goto IL_0554;                              //br				IL_0016
	IL_0554:                                                                        //ldloc.1
	IL_0555:                                                                        //unbox				System::Int32
	IL_055a:                                                                        //ldind.i4
	IL_055b:            switch(safe_cast<System::Int32>(V_1)){case 0:goto IL_00b6;case 1:goto IL_00b6;case 2:goto IL_00b6;case 3:goto IL_00b6;case 4:goto IL_00b6;case 5:goto IL_00b6;case 6:goto IL_00b6;case 7:goto IL_00b6;case 8:goto IL_00b6;case 9:goto IL_00b6;case 10:goto IL_00b6;case 11:goto IL_00b6;case 12:goto IL_0247;case 13:goto IL_0247;case 14:goto IL_0247;case 15:goto IL_0247;case 16:goto IL_0247;case 17:goto IL_0247;case 18:goto IL_0247;case 19:goto IL_0247;case 20:goto IL_0247;case 21:goto IL_0247;case 22:goto IL_0247;case 23:goto IL_0247;case 24:goto IL_0247;case 25:goto IL_0186;};//switch				(IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_00b6,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0247,IL_0186)
	IL_05c8:                                                                        //ldc.i4				0x13
	IL_05cd:            V_3=19;                                                     //stloc				V_3
	IL_05d1:            /*goto IL_0016;*/goto IL_05d6;                              //br				IL_0016
	IL_05d6:            goto IL_01d1;                                               //br				IL_01d1
	IL_05db:            return;                                                     //ret

}
inline System::String^ Root::T_x44::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0060;case 1:goto IL_004b;case 2:goto IL_003c;};//switch				(IL_0060,IL_004b,IL_003c)
	IL_0022:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0027:            V_0=Temp_0;                                                 //stloc.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:                                                                        //ldc.i4.s				46
	IL_002b:            Temp_1=A_0->LastIndexOf(safe_cast<System::Char>((System::Char)46));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_0030:            V_1=Temp_1;                                                 //stloc.1
	IL_0031:                                                                        //ldc.i4				0x2
	IL_0036:            V_2=2;                                                      //stloc				V_2
	IL_003a:            /*goto IL_000d;*/goto IL_003c;                              //br.s				IL_000d
	IL_003c:                                                                        //ldloc.1
	IL_003d:                                                                        //ldc.i4.m1
	IL_003e:            if(V_1==-1)goto IL_0062;                                    //beq.s				IL_0062
	IL_0040:                                                                        //ldc.i4				0x1
	IL_0045:            V_2=1;                                                      //stloc				V_2
	IL_0049:            /*goto IL_000d;*/goto IL_004b;                              //br.s				IL_000d
	IL_004b:            goto IL_004d;                                               //br.s				IL_004d
	IL_004d:                                                                        //ldarg.1
	IL_004e:                                                                        //ldloc.1
	IL_004f:            Temp_2=A_0->Substring(V_1);                                 //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0054:            V_0=Temp_2;                                                 //stloc.0
	IL_0055:                                                                        //ldc.i4				0x0
	IL_005a:            V_2=0;                                                      //stloc				V_2
	IL_005e:            /*goto IL_000d;*/goto IL_0060;                              //br.s				IL_000d
	IL_0060:            goto IL_0062;                                               //br.s				IL_0062
	IL_0062:                                                                        //ldloc.0
	IL_0063:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IResource
	IL_000b:            return safe_cast<Reflector::CodeModel::IResource^>(Temp_0); //ret

}
inline System::String^ Root::T_x44::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_0=17;                                                     //stloc				V_0
	IL_0009:                                                                        //ldstr				L"\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A\x133C\x6D3E\x2440\x3042\x2A44\x3246\x3B48\x284A\x284C"
	IL_000e:                                                                        //ldloc				V_0
	IL_0012:            Temp_0=a(L"\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A\x133C\x6D3E\x2440\x3042\x2A44\x3246\x3B48\x284A\x284C",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            return Temp_0;                                              //ret

}
inline void Root::T_x44::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x8();                                               //call				void Root::T_x44::M_x8()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x44::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::SaveFileDialog^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IResource^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	array<System::String^>^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Globalization::CultureInfo^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	Reflector::CodeModel::IResource^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::IO::Stream^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	Reflector::CodeModel::IResource^ Temp_20 = nullptr;
	Root::T_x1^ Temp_21 = nullptr;
	array<System::Byte>^ Temp_22 = nullptr;
	System::Windows::Forms::DialogResult Temp_23 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Windows::Forms::DialogResult Temp_27 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::Windows::Forms::DialogResult Temp_31 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Windows::Forms::DialogResult Temp_35 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::Windows::Forms::SaveFileDialog^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Windows::Forms::DialogResult V_2 = (System::Windows::Forms::DialogResult)0;
	System::ArgumentException^ V_3 = nullptr;
	System::InvalidOperationException^ V_4 = nullptr;
	array<System::Byte>^ V_5 = nullptr;
	System::IO::Stream^ V_6 = nullptr;
	System::UnauthorizedAccessException^ V_7 = nullptr;
	array<System::String^>^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_10=12;                                                    //stloc				V_10
	IL_0009:            goto IL_0033;                                               //br.s				IL_0033
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:                                                                        //ldloc				V_9
	IL_001a:            switch(V_9){case 0:goto IL_0145;case 1:goto IL_016a;case 2:goto IL_0130;case 3:goto IL_010e;case 4:goto IL_0155;};//switch				(IL_0145,IL_016a,IL_0130,IL_010e,IL_0155)
	IL_0033:            Temp_0=gcnew System::Windows::Forms::SaveFileDialog();      //newobj				void System::Windows::Forms::SaveFileDialog::.ctor()
	IL_0038:            V_0=Temp_0;                                                 //stloc.0
	IL_0039:                                                                        //ldloc.0
	IL_003a:                                                                        //ldstr				L"\x7929\x4D2B\x582D\x552F\x1231\x7533\x4535"
	IL_003f:                                                                        //ldloc				V_10
	IL_0043:            Temp_1=a(L"\x7929\x4D2B\x582D\x552F\x1231\x7533\x4535",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0048:            V_0->Title=Temp_1;                                          //callvirt				void System::Windows::Forms::FileDialog::set_Title(System::String^)
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_2=this->M_x12();                                       //call				Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
	IL_0054:            Temp_3=Temp_2->Name;                                        //callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_0059:            Temp_4=this->M_x1(Temp_3);                                  //call				System::String^ Root::T_x44::M_x1(System::String^)
	IL_005e:            V_1=Temp_4;                                                 //stloc.1
	IL_005f:                                                                        //ldloc.0
	IL_0060:                                                                        //ldc.i4.7
	IL_0061:            Temp_5=gcnew array<System::String^>(7);                     //newarr				System::String
	IL_0066:            V_8=Temp_5;                                                 //stloc.s				V_8
	IL_0068:                                                                        //ldloc.s				V_8
	IL_006a:                                                                        //ldc.i4.0
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:                                                                        //ldc.i4.1
	IL_006e:            Temp_6=V_1->Substring(safe_cast<System::Int32>(1),safe_cast<System::Int32>(1));//callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0073:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0078:            Temp_8=Temp_6->ToUpper(Temp_7);                             //callvirt				System::String^ System::String::ToUpper(System::Globalization::CultureInfo^)
	IL_007d:            V_8[0]=Temp_8;                                              //stelem.ref
	IL_007e:                                                                        //ldloc.s				V_8
	IL_0080:                                                                        //ldc.i4.1
	IL_0081:                                                                        //ldloc.1
	IL_0082:                                                                        //ldc.i4.2
	IL_0083:            Temp_9=V_1->Substring(safe_cast<System::Int32>(2));         //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0088:            Temp_10=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_008d:            Temp_11=Temp_9->ToLower(Temp_10);                           //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_0092:            V_8[1]=Temp_11;                                             //stelem.ref
	IL_0093:                                                                        //ldloc.s				V_8
	IL_0095:                                                                        //ldc.i4.2
	IL_0096:                                                                        //ldstr				L"\x0A29\x4A2B\x472D\x5C2F\x5731\x4733\x1635\x1037\x1039"
	IL_009b:                                                                        //ldloc				V_10
	IL_009f:            Temp_12=a(L"\x0A29\x4A2B\x472D\x5C2F\x5731\x4733\x1635\x1037\x1039",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a4:            V_8[2]=Temp_12;                                             //stelem.ref
	IL_00a5:                                                                        //ldloc.s				V_8
	IL_00a7:                                                                        //ldc.i4.3
	IL_00a8:                                                                        //ldloc.1
	IL_00a9:            V_8[3]=V_1;                                                 //stelem.ref
	IL_00aa:                                                                        //ldloc.s				V_8
	IL_00ac:                                                                        //ldc.i4.4
	IL_00ad:                                                                        //ldstr				L"\x0329\x502B\x042D"
	IL_00b2:                                                                        //ldloc				V_10
	IL_00b6:            Temp_13=a(L"\x0329\x502B\x042D",V_10);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bb:            V_8[4]=Temp_13;                                             //stelem.ref
	IL_00bc:                                                                        //ldloc.s				V_8
	IL_00be:                                                                        //ldc.i4.5
	IL_00bf:                                                                        //ldloc.1
	IL_00c0:            V_8[5]=V_1;                                                 //stelem.ref
	IL_00c1:                                                                        //ldloc.s				V_8
	IL_00c3:                                                                        //ldc.i4.6
	IL_00c4:                                                                        //ldstr				L"\x5629\x6D2B\x422D\x5C2F\x1231\x5233\x5F35\x5437\x5F39\x4F3B\x1E3D\x683F\x6841\x6A43\x6C45\x6147\x3649\x664B\x604D\x7A4F"
	IL_00c9:                                                                        //ldloc				V_10
	IL_00cd:            Temp_14=a(L"\x5629\x6D2B\x422D\x5C2F\x1231\x5233\x5F35\x5437\x5F39\x4F3B\x1E3D\x683F\x6841\x6A43\x6C45\x6147\x3649\x664B\x604D\x7A4F",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d2:            V_8[6]=Temp_14;                                             //stelem.ref
	IL_00d3:                                                                        //ldloc.s				V_8
	IL_00d5:            Temp_15=System::String::Concat(V_8);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_00da:            V_0->Filter=Temp_15;                                        //callvirt				void System::Windows::Forms::FileDialog::set_Filter(System::String^)
	IL_00df:                                                                        //ldloc.0
	IL_00e0:                                                                        //ldarg.0
	IL_00e1:            Temp_16=this->M_x12();                                      //call				Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
	IL_00e6:            Temp_17=Temp_16->Name;                                      //callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_00eb:            V_0->FileName=Temp_17;                                      //callvirt				void System::Windows::Forms::FileDialog::set_FileName(System::String^)
	IL_00f0:                                                                        //ldloc.0
	IL_00f1:                                                                        //ldc.i4.1
	IL_00f2:            V_0->AddExtension=true;                                     //callvirt				void System::Windows::Forms::FileDialog::set_AddExtension(System::Boolean)
	IL_00f7:                                                                        //ldloc.0
	IL_00f8:                                                                        //ldloc.1
	IL_00f9:            V_0->DefaultExt=V_1;                                        //callvirt				void System::Windows::Forms::FileDialog::set_DefaultExt(System::String^)
	IL_00fe:                                                                        //ldc.i4.0
	IL_00ff:            V_2=safe_cast<System::Windows::Forms::DialogResult>(0);     //stloc.2
	IL_0100:                                                                        //ldc.i4				0x3
	IL_0105:            V_9=3;                                                      //stloc				V_9
	IL_0109:            /*goto IL_000b;*/goto IL_010e;                              //br				IL_000b
	IL_010e:            /*goto IL_016c;*/goto IL_016A01;                            //br.s				IL_016c
	IL_0110:                                                                        //ldarg.0
	IL_0111:            Temp_20=this->M_x12();                                      //call				Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
	IL_0116:            Temp_21=gcnew Root::T_x1(Temp_20);                          //newobj				void Root::T_x1::.ctor(Reflector::CodeModel::IResource^)
	IL_011b:            Temp_22=Temp_21->M_x1();                                    //call				array<System::Byte>^ Root::T_x1::M_x1()
	IL_0120:            V_5=Temp_22;                                                //stloc.s				V_5
	IL_0122:                                                                        //ldc.i4				0x2
	IL_0127:            V_9=2;                                                      //stloc				V_9
	IL_012b:            /*goto IL_000b;*/goto IL_0130;                              //br				IL_000b
	IL_0130:                                                                        //ldloc.s				V_5
	IL_0132:            if(V_5==nullptr)goto IL_024f;                               //brfalse				IL_024f
	IL_0137:                                                                        //ldc.i4				0x0
	IL_013c:            V_9=0;                                                      //stloc				V_9
	IL_0140:            /*goto IL_000b;*/goto IL_0145;                              //br				IL_000b
	IL_0145:            /*goto IL_01c3;*/goto IL_01C102;                            //br.s				IL_01c3
	IL_0147:                                                                        //ldc.i4				0x4
	IL_014c:            V_9=4;                                                      //stloc				V_9
	IL_0150:            /*goto IL_000b;*/goto IL_0155;                              //br				IL_000b
	IL_0155:                                                                        //ldloc.2
	IL_0156:                                                                        //ldc.i4.1
	IL_0157:            if(safe_cast<System::Int32>(V_2)!=1)goto IL_024f;           //bne.un				IL_024f
	IL_015c:                                                                        //ldc.i4				0x1
	IL_0161:            V_9=1;                                                      //stloc				V_9
	IL_0165:            /*goto IL_000b;*/goto IL_016a;                              //br				IL_000b
	IL_016a:            goto IL_0110;                                               //br.s				IL_0110
	IL_016A01:          try{
	IL_016c:                                                                        //ldloc.0
	IL_016d:            Temp_23=V_0->ShowDialog();                                  //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::CommonDialog::ShowDialog()
	IL_0172:            V_2=Temp_23;                                                //stloc.2
	IL_0173:            goto IL_0147;                                               //leave.s				IL_0147
	                    ;}
	                    catch(System::ArgumentException^ Ex_017302){
	IL_0175:            V_3=Ex_017302;                                              //stloc.3
	IL_0176:                                                                        //ldnull
	IL_0177:                                                                        //ldloc.3
	IL_0178:            Temp_24=V_3->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_017d:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345"
	IL_0182:                                                                        //ldloc				V_10
	IL_0186:            Temp_25=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018b:            Temp_26=Root::T_x128::M_x1(Temp_25);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0190:                                                                        //ldc.i4.0
	IL_0191:                                                                        //ldc.i4.s				16
	IL_0193:            Temp_27=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_24,Temp_26,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0198:                                                                        //pop
	IL_0199:            goto IL_0147;                                               //leave.s				IL_0147
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_019902){
	IL_019b:            V_4=Ex_019902;                                              //stloc.s				V_4
	IL_019d:                                                                        //ldnull
	IL_019e:                                                                        //ldloc.s				V_4
	IL_01a0:            Temp_28=V_4->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_01a5:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345"
	IL_01aa:                                                                        //ldloc				V_10
	IL_01ae:            Temp_29=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b3:            Temp_30=Root::T_x128::M_x1(Temp_29);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_01b8:                                                                        //ldc.i4.0
	IL_01b9:                                                                        //ldc.i4.s				16
	IL_01bb:            Temp_31=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_28,Temp_30,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01c0:                                                                        //pop
	IL_01c1:            goto IL_0147;                                               //leave.s				IL_0147
	                    ;}
	IL_01C102:          try{
	IL_01c3:                                                                        //ldloc.0
	IL_01c4:            Temp_18=V_0->OpenFile();                                    //callvirt				System::IO::Stream^ System::Windows::Forms::SaveFileDialog::OpenFile()
	IL_01c9:            V_6=Temp_18;                                                //stloc.s				V_6
	IL_01cb:            /*goto IL_01cd;*/goto IL_01CB01;                            //br.s				IL_01cd
	IL_01CB01:          try{
	IL_01cd:                                                                        //ldloc.s				V_6
	IL_01cf:                                                                        //ldloc.s				V_5
	IL_01d1:                                                                        //ldc.i4.0
	IL_01d2:                                                                        //ldloc.s				V_5
	IL_01d4:            Temp_19=V_5->Length;                                        //ldlen
	IL_01d5:                                                                        //conv.i4
	IL_01d6:            V_6->Write(V_5,safe_cast<System::Int32>(0),Temp_19);        //callvirt				void System::IO::Stream::Write(array<System::Byte>^,System::Int32,System::Int32)
	IL_01db:            goto IL_0225;                                               //leave.s				IL_0225
	                    ;}
	                    finally{
	IL_01dd:                                                                        //ldc.i4				0x0
	IL_01e2:            V_9=0;                                                      //stloc				V_9
	IL_01e6:            /*goto IL_01ea;*/goto IL_01e8;                              //br.s				IL_01ea
	IL_01e8:            goto IL_01ff;                                               //br.s				IL_01ff
	IL_01ea:                                                                        //ldloc				V_9
	IL_01ee:            switch(V_9){case 0:goto IL_01e8;case 1:goto IL_020e;case 2:goto IL_0222;};//switch				(IL_01e8,IL_020e,IL_0222)
	IL_01ff:                                                                        //ldloc.s				V_6
	IL_0201:            if(V_6==nullptr)goto IL_0224;                               //brfalse.s				IL_0224
	IL_0203:                                                                        //ldc.i4				0x1
	IL_0208:            V_9=1;                                                      //stloc				V_9
	IL_020c:            /*goto IL_01ea;*/goto IL_020e;                              //br.s				IL_01ea
	IL_020e:            goto IL_0210;                                               //br.s				IL_0210
	IL_0210:                                                                        //ldloc.s				V_6
	IL_0212:            /*safe_cast<System::IDisposable^>(V_6)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0217:                                                                        //ldc.i4				0x2
	IL_021c:            V_9=2;                                                      //stloc				V_9
	IL_0220:            /*goto IL_01ea;*/goto IL_0222;                              //br.s				IL_01ea
	IL_0222:            goto IL_0224;                                               //br.s				IL_0224
	IL_0224:                                                                        //endfinally
	                    ;}
	IL_0225:            goto IL_024f;                                               //leave.s				IL_024f
	                    ;}
	                    catch(System::UnauthorizedAccessException^ Ex_022502){
	IL_0227:            V_7=Ex_022502;                                              //stloc.s				V_7
	IL_0229:                                                                        //ldnull
	IL_022a:                                                                        //ldloc.s				V_7
	IL_022c:            Temp_32=V_7->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_0231:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345"
	IL_0236:                                                                        //ldloc				V_10
	IL_023a:            Temp_33=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_023f:            Temp_34=Root::T_x128::M_x1(Temp_33);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0244:                                                                        //ldc.i4.0
	IL_0245:                                                                        //ldc.i4.s				16
	IL_0247:            Temp_35=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_32,Temp_34,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_024c:                                                                        //pop
	IL_024d:            goto IL_024f;                                               //leave.s				IL_024f
	                    ;}
	IL_024f:            return;                                                     //ret

}
inline void Root::T_x44::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IResource^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_2=17;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x7
	IL_000e:            V_1=7;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0047;                                               //br.s				IL_0047
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00df;case 1:goto IL_00c8;case 2:goto IL_008f;case 3:goto IL_0128;case 4:goto IL_00a9;case 5:goto IL_013e;case 6:goto IL_00f2;case 7:goto IL_0014;case 8:goto IL_0109;case 9:goto IL_015d;};//switch				(IL_00df,IL_00c8,IL_008f,IL_0128,IL_00a9,IL_013e,IL_00f2,IL_0014,IL_0109,IL_015d)
	IL_0047:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A"
	IL_004c:                                                                        //ldloc				V_2
	IL_0050:            Temp_6=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0055:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1344\x2E46\x2C48\x3C4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A"
	IL_005a:                                                                        //ldloc				V_2
	IL_005e:            Temp_7=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1344\x2E46\x2C48\x3C4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0063:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1644\x2646\x3F48\x2E4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A"
	IL_0068:                                                                        //ldloc				V_2
	IL_006c:            Temp_8=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1644\x2646\x3F48\x2E4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            goto IL_00d1;                                               //leave.s				IL_00d1
	IL_0073:                                                                        //ldarg.0
	IL_0074:            Temp_1=this->M_x12();                                       //call				Reflector::CodeModel::IResource^ Root::T_x44::M_x12()
	IL_0079:            Temp_2=Temp_1->Name;                                        //callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_007e:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_2));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0083:            return;                                                     //ret
	IL_0084:                                                                        //ldc.i4				0x2
	IL_0089:            V_1=2;                                                      //stloc				V_1
	IL_008d:            /*goto IL_0016;*/goto IL_008f;                              //br.s				IL_0016
	IL_008f:            goto IL_015f;                                               //br				IL_015f
	IL_0094:                                                                        //ldloc.0
	IL_0095:            Temp_4=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_009a:            V_0=Temp_4;                                                 //stloc.0
	IL_009b:                                                                        //ldc.i4				0x4
	IL_00a0:            V_1=4;                                                      //stloc				V_1
	IL_00a4:            /*goto IL_0016;*/goto IL_00a9;                              //br				IL_0016
	IL_00a9:                                                                        //ldloc.0
	IL_00aa:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A"
	IL_00af:                                                                        //ldloc				V_2
	IL_00b3:            Temp_0=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x0644\x2846\x3948\x324A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b8:            if(V_0==Temp_0)goto IL_0073;                                //beq.s				IL_0073
	IL_00ba:                                                                        //ldc.i4				0x1
	IL_00bf:            V_1=1;                                                      //stloc				V_1
	IL_00c3:            /*goto IL_0016;*/goto IL_00c8;                              //br				IL_0016
	IL_00c8:            goto IL_0130;                                               //br.s				IL_0130
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:            this->M_x5();                                               //call				void Root::T_x44::M_x5()
	IL_00d0:            return;                                                     //ret
	IL_00d1:                                                                        //ldc.i4				0x0
	IL_00d6:            V_1=0;                                                      //stloc				V_1
	IL_00da:            /*goto IL_0016;*/goto IL_00df;                              //br				IL_0016
	IL_00df:                                                                        //ldarg.1
	IL_00e0:                                                                        //dup
	IL_00e1:            V_0=A_0;                                                    //stloc.0
	IL_00e2:            if(V_0==nullptr)goto IL_015f;                               //brfalse.s				IL_015f
	IL_00e4:                                                                        //ldc.i4				0x6
	IL_00e9:            V_1=6;                                                      //stloc				V_1
	IL_00ed:            /*goto IL_0016;*/goto IL_00f2;                              //br				IL_0016
	IL_00f2:            goto IL_0094;                                               //br.s				IL_0094
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            this->M_x8();                                               //call				void Root::T_x44::M_x8()
	IL_00fa:            return;                                                     //ret
	IL_00fb:                                                                        //ldc.i4				0x8
	IL_0100:            V_1=8;                                                      //stloc				V_1
	IL_0104:            /*goto IL_0016;*/goto IL_0109;                              //br				IL_0016
	IL_0109:                                                                        //ldloc.0
	IL_010a:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1644\x2646\x3F48\x2E4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A"
	IL_010f:                                                                        //ldloc				V_2
	IL_0113:            Temp_5=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1644\x2646\x3F48\x2E4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0118:            if(V_0==Temp_5)goto IL_00ca;                                //beq.s				IL_00ca
	IL_011a:                                                                        //ldc.i4				0x3
	IL_011f:            V_1=3;                                                      //stloc				V_1
	IL_0123:            /*goto IL_0016;*/goto IL_0128;                              //br				IL_0016
	IL_0128:            goto IL_012b;                                               //br.s				IL_012b
	IL_012a:                                                                        //break
	IL_012b:            goto IL_0084;                                               //br				IL_0084
	IL_0130:                                                                        //ldc.i4				0x5
	IL_0135:            V_1=5;                                                      //stloc				V_1
	IL_0139:            /*goto IL_0016;*/goto IL_013e;                              //br				IL_0016
	IL_013e:                                                                        //ldloc.0
	IL_013f:                                                                        //ldstr				L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1344\x2E46\x2C48\x3C4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A"
	IL_0144:                                                                        //ldloc				V_2
	IL_0148:            Temp_3=a(L"\x6E2E\x5230\x4732\x5C34\x4136\x5C38\x723A\x493C\x5A3E\x2C40\x6D42\x1344\x2E46\x2C48\x3C4A\x1F4C\x2A4E\x2250\x3C52\x2054\x2556\x3A58\x3E5A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014d:            if(V_0==Temp_3)goto IL_00f4;                                //beq.s				IL_00f4
	IL_014f:                                                                        //ldc.i4				0x9
	IL_0154:            V_1=9;                                                      //stloc				V_1
	IL_0158:            /*goto IL_0016;*/goto IL_015d;                              //br				IL_0016
	IL_015d:            goto IL_00fb;                                               //br.s				IL_00fb
	IL_015f:                                                                        //ldarg.0
	IL_0160:                                                                        //ldarg.1
	IL_0161:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_0166:            return;                                                     //ret

}
inline void Root::T_x44::M_x8()
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
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldtoken				Reflector::IWindowManager
	IL_0012:            Temp_0=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0017:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001c:                                                                        //castclass				Reflector::IWindowManager
	IL_0021:            V_0=safe_cast<Reflector::IWindowManager^>(Temp_1);          //stloc.0
	IL_0022:                                                                        //ldloc.0
	IL_0023:            Temp_2=V_0->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0028:                                                                        //ldstr				L"\x4C1D\x451F\x5121\x4B23\x5325\x5A27\x4929\x492B\x792D\x592F\x5C31\x5033\x5935\x4F37"
	IL_002d:                                                                        //ldloc				V_1
	IL_0031:            Temp_3=a(L"\x4C1D\x451F\x5121\x4B23\x5325\x5A27\x4929\x492B\x792D\x592F\x5C31\x5033\x5935\x4F37",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0036:            Temp_4=Temp_2[Temp_3];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:            Temp_4->Visible=true;                                       //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0041:            return;                                                     //ret

}
inline System::Boolean Root::T_x44::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_2=14;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0047;                                               //br.s				IL_0047
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_00c7;case 2:goto IL_00b0;case 3:goto IL_00e6;case 4:goto IL_0141;case 5:goto IL_0122;case 6:goto IL_008e;case 7:goto IL_0110;case 8:goto IL_00fd;case 9:goto IL_007e;};//switch				(IL_0014,IL_00c7,IL_00b0,IL_00e6,IL_0141,IL_0122,IL_008e,IL_0110,IL_00fd,IL_007e)
	IL_0047:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147"
	IL_004c:                                                                        //ldloc				V_2
	IL_0050:            Temp_6=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0055:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1441\x2D43\x2345\x3F47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57"
	IL_005a:                                                                        //ldloc				V_2
	IL_005e:            Temp_7=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1441\x2D43\x2345\x3F47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0063:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2543\x3045\x2D47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57"
	IL_0068:                                                                        //ldloc				V_2
	IL_006c:            Temp_8=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2543\x3045\x2D47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            goto IL_00ef;                                               //leave.s				IL_00ef
	IL_0073:                                                                        //ldc.i4				0x9
	IL_0078:            V_1=9;                                                      //stloc				V_1
	IL_007c:            /*goto IL_0016;*/goto IL_007e;                              //br.s				IL_0016
	IL_007e:            goto IL_0146;                                               //br				IL_0146
	IL_0083:                                                                        //ldc.i4				0x6
	IL_0088:            V_1=6;                                                      //stloc				V_1
	IL_008c:            /*goto IL_0016;*/goto IL_008e;                              //br.s				IL_0016
	IL_008e:                                                                        //ldloc.0
	IL_008f:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2543\x3045\x2D47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57"
	IL_0094:                                                                        //ldloc				V_2
	IL_0098:            Temp_3=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1141\x2543\x3045\x2D47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009d:            if(V_0==Temp_3)goto IL_00e8;                                //beq.s				IL_00e8
	IL_009f:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00a1:                                                                        //break
	IL_00a2:                                                                        //ldc.i4				0x2
	IL_00a7:            V_1=2;                                                      //stloc				V_1
	IL_00ab:            /*goto IL_0016;*/goto IL_00b0;                              //br				IL_0016
	IL_00b0:            goto IL_0073;                                               //br.s				IL_0073
	IL_00b2:                                                                        //ldloc.0
	IL_00b3:            Temp_4=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00b8:            V_0=Temp_4;                                                 //stloc.0
	IL_00b9:                                                                        //ldc.i4				0x1
	IL_00be:            V_1=1;                                                      //stloc				V_1
	IL_00c2:            /*goto IL_0016;*/goto IL_00c7;                              //br				IL_0016
	IL_00c7:                                                                        //ldloc.0
	IL_00c8:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147"
	IL_00cd:                                                                        //ldloc				V_2
	IL_00d1:            Temp_0=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x0141\x2B43\x3645\x3147",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d6:            if(V_0==Temp_0)goto IL_0112;                                //beq.s				IL_0112
	IL_00d8:                                                                        //ldc.i4				0x3
	IL_00dd:            V_1=3;                                                      //stloc				V_1
	IL_00e1:            /*goto IL_0016;*/goto IL_00e6;                              //br				IL_0016
	IL_00e6:            goto IL_0114;                                               //br.s				IL_0114
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:            Temp_2=this->M_x1();                                        //call				System::Boolean Root::T_x44::M_x1()
	IL_00ee:            return Temp_2;                                              //ret
	IL_00ef:                                                                        //ldc.i4				0x8
	IL_00f4:            V_1=8;                                                      //stloc				V_1
	IL_00f8:            /*goto IL_0016;*/goto IL_00fd;                              //br				IL_0016
	IL_00fd:                                                                        //ldarg.1
	IL_00fe:                                                                        //dup
	IL_00ff:            V_0=A_0;                                                    //stloc.0
	IL_0100:            if(V_0==nullptr)goto IL_0146;                               //brfalse.s				IL_0146
	IL_0102:                                                                        //ldc.i4				0x7
	IL_0107:            V_1=7;                                                      //stloc				V_1
	IL_010b:            /*goto IL_0016;*/goto IL_0110;                              //br				IL_0016
	IL_0110:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_0112:                                                                        //ldc.i4.1
	IL_0113:            return true;                                                //ret
	IL_0114:                                                                        //ldc.i4				0x5
	IL_0119:            V_1=5;                                                      //stloc				V_1
	IL_011d:            /*goto IL_0016;*/goto IL_0122;                              //br				IL_0016
	IL_0122:                                                                        //ldloc.0
	IL_0123:                                                                        //ldstr				L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1441\x2D43\x2345\x3F47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57"
	IL_0128:                                                                        //ldloc				V_2
	IL_012c:            Temp_1=a(L"\x6D2B\x4D2D\x442F\x5B31\x4233\x5335\x7137\x4E39\x593B\x533D\x6E3F\x1441\x2D43\x2345\x3F47\x1849\x294B\x3D4D\x3F4F\x2751\x2653\x3555\x3D57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0131:            if(V_0==Temp_1)goto IL_00e8;                                //beq.s				IL_00e8
	IL_0133:                                                                        //ldc.i4				0x4
	IL_0138:            V_1=4;                                                      //stloc				V_1
	IL_013c:            /*goto IL_0016;*/goto IL_0141;                              //br				IL_0016
	IL_0141:            goto IL_0083;                                               //br				IL_0083
	IL_0146:                                                                        //ldarg.0
	IL_0147:                                                                        //ldarg.1
	IL_0148:            Temp_5=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_014d:            return Temp_5;                                              //ret

}
