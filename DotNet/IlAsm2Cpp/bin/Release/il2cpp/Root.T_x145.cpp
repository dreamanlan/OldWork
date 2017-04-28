#include "global_xref.h"

inline Root::T_x145::T_x145()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x145::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::IAssembly^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_005b;case 1:goto IL_000b;case 2:goto IL_0040;case 3:goto IL_0068;case 4:goto IL_0081;};//switch				(IL_005b,IL_000b,IL_0040,IL_0068,IL_0081)
	IL_002a:            goto IL_002d;                                               //br.s				IL_002d
	IL_002c:                                                                        //break
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_2=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x145 F_x2
	IL_0033:            if(Temp_2==nullptr)goto IL_0083;                            //brfalse.s				IL_0083
	IL_0035:                                                                        //ldc.i4				0x2
	IL_003a:            V_0=2;                                                      //stloc				V_0
	IL_003e:            /*goto IL_000d;*/goto IL_0040;                              //br.s				IL_000d
	IL_0040:            goto IL_005d;                                               //br.s				IL_005d
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldnull
	IL_0044:            this->F_x2=safe_cast<Reflector::CodeModel::IAssembly^>(nullptr);//stfld				Reflector::CodeModel::IAssembly^ Root::T_x145 F_x2
	IL_0049:                                                                        //ldarg.0
	IL_004a:                                                                        //ldnull
	IL_004b:            this->F_x1=safe_cast<System::Collections::IDictionary^>(nullptr);//stfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_0050:                                                                        //ldc.i4				0x0
	IL_0055:            V_0=0;                                                      //stloc				V_0
	IL_0059:            /*goto IL_000d;*/goto IL_005b;                              //br.s				IL_000d
	IL_005b:            goto IL_0083;                                               //br.s				IL_0083
	IL_005d:                                                                        //ldc.i4				0x3
	IL_0062:            V_0=3;                                                      //stloc				V_0
	IL_0066:            /*goto IL_000d;*/goto IL_0068;                              //br.s				IL_000d
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x145 F_x2
	IL_006e:                                                                        //ldarg.1
	IL_006f:            Temp_1=Temp_0->Equals(safe_cast<System::Object^>(A_0));     //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0074:            if(!Temp_1)goto IL_0083;                                    //brfalse.s				IL_0083
	IL_0076:                                                                        //ldc.i4				0x4
	IL_007b:            V_0=4;                                                      //stloc				V_0
	IL_007f:            /*goto IL_000d;*/goto IL_0081;                              //br.s				IL_000d
	IL_0081:            goto IL_0042;                                               //br.s				IL_0042
	IL_0083:            return;                                                     //ret

}
inline void Root::T_x145::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Collections::IDictionary^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Collections::IDictionary^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Xml::XmlNodeType Temp_12 = (System::Xml::XmlNodeType)0;
	System::Xml::XmlTextReader^ Temp_13 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_14 = nullptr;
	System::Collections::Hashtable^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Collections::IDictionary^ Temp_20 = nullptr;
	System::Collections::IDictionary^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Xml::XmlTextReader^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_6=13;                                                     //stloc				V_6
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_01e4;case 1:goto IL_022b;case 2:goto IL_01fd;case 3:goto IL_003e;case 4:goto IL_0214;case 5:goto IL_0055;};//switch				(IL_01e4,IL_022b,IL_01fd,IL_003e,IL_0214,IL_0055)
	IL_002c:                                                                        //ldarg.1
	IL_002d:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyReference::Resolve()
	IL_0032:            V_0=Temp_0;                                                 //stloc.0
	IL_0033:                                                                        //ldc.i4				0x3
	IL_0038:            V_5=3;                                                      //stloc				V_5
	IL_003c:            /*goto IL_000b;*/goto IL_003e;                              //br.s				IL_000b
	IL_003e:                                                                        //ldloc.0
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_14=this->F_x2;                                         //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x145 F_x2
	IL_0045:            if(V_0==Temp_14)goto IL_0230;                               //beq				IL_0230
	IL_004a:                                                                        //ldc.i4				0x5
	IL_004f:            V_5=5;                                                      //stloc				V_5
	IL_0053:            /*goto IL_000b;*/goto IL_0055;                              //br.s				IL_000b
	IL_0055:            goto IL_0058;                                               //br.s				IL_0058
	IL_0057:                                                                        //break
	IL_0058:            goto IL_01ac;                                               //br				IL_01ac
	IL_005801:          try{
	IL_005802:          try{
	IL_005d:                                                                        //ldc.i4				0x8
	IL_0062:            V_5=8;                                                      //stloc				V_5
	IL_0066:            /*goto IL_006a;*/goto IL_0068;                              //br.s				IL_006a
	IL_0068:            goto IL_009b;                                               //br.s				IL_009b
	IL_006a:                                                                        //ldloc				V_5
	IL_006e:            switch(V_5){case 0:goto IL_0172;case 1:goto IL_00d7;case 2:goto IL_00ca;case 3:goto IL_0156;case 4:goto IL_00af;case 5:goto IL_0110;case 6:goto IL_0185;case 7:goto IL_0100;case 8:goto IL_0068;case 9:goto IL_0129;};//switch				(IL_0172,IL_00d7,IL_00ca,IL_0156,IL_00af,IL_0110,IL_0185,IL_0100,IL_0068,IL_0129)
	IL_009b:                                                                        //ldloc.2
	IL_009c:            Temp_12=V_2->NodeType;                                      //callvirt				System::Xml::XmlNodeType System::Xml::XmlReader::get_NodeType()
	IL_00a1:                                                                        //ldc.i4.1
	IL_00a2:            if(safe_cast<System::Int32>(Temp_12)!=1)goto IL_0102;       //bne.un.s				IL_0102
	IL_00a4:                                                                        //ldc.i4				0x4
	IL_00a9:            V_5=4;                                                      //stloc				V_5
	IL_00ad:            /*goto IL_006a;*/goto IL_00af;                              //br.s				IL_006a
	IL_00af:            goto IL_00cc;                                               //br.s				IL_00cc
	IL_00b1:                                                                        //ldarg.0
	IL_00b2:            Temp_2=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_00b7:                                                                        //ldloc.3
	IL_00b8:                                                                        //ldloc.s				V_4
	IL_00ba:            Temp_2->Add(safe_cast<System::Object^>(V_3),safe_cast<System::Object^>(V_4));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_00bf:                                                                        //ldc.i4				0x2
	IL_00c4:            V_5=2;                                                      //stloc				V_5
	IL_00c8:            /*goto IL_006a;*/goto IL_00ca;                              //br.s				IL_006a
	IL_00ca:            goto IL_0102;                                               //br.s				IL_0102
	IL_00cc:                                                                        //ldc.i4				0x1
	IL_00d1:            V_5=1;                                                      //stloc				V_5
	IL_00d5:            /*goto IL_006a;*/goto IL_00d7;                              //br.s				IL_006a
	IL_00d7:                                                                        //ldloc.2
	IL_00d8:            Temp_3=V_2->LocalName;                                      //callvirt				System::String^ System::Xml::XmlReader::get_LocalName()
	IL_00dd:                                                                        //ldstr				L"\x462A\x482C\x422E\x5330\x5632\x4734"
	IL_00e2:                                                                        //ldloc				V_6
	IL_00e6:            Temp_4=a(L"\x462A\x482C\x422E\x5330\x5632\x4734",V_6);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00eb:            Temp_5=(Temp_3 == Temp_4);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00f0:            if(!Temp_5)goto IL_0102;                                    //brfalse.s				IL_0102
	IL_00f2:                                                                        //ldc.i4				0x7
	IL_00f7:            V_5=7;                                                      //stloc				V_5
	IL_00fb:            /*goto IL_006a;*/goto IL_0100;                              //br				IL_006a
	IL_0100:            goto IL_012b;                                               //br.s				IL_012b
	IL_0102:                                                                        //ldc.i4				0x5
	IL_0107:            V_5=5;                                                      //stloc				V_5
	IL_010b:            /*goto IL_006a;*/goto IL_0110;                              //br				IL_006a
	IL_0110:                                                                        //ldloc.2
	IL_0111:            Temp_8=V_2->Read();                                         //callvirt				System::Boolean System::Xml::XmlReader::Read()
	IL_0116:            if(Temp_8)goto IL_005d;                                     //brtrue				IL_005d
	IL_011b:                                                                        //ldc.i4				0x9
	IL_0120:            V_5=9;                                                      //stloc				V_5
	IL_0124:            /*goto IL_006a;*/goto IL_0129;                              //br				IL_006a
	IL_0129:            goto IL_0177;                                               //br.s				IL_0177
	IL_012b:                                                                        //ldloc.2
	IL_012c:                                                                        //ldstr				L"\x452A\x4C2C\x422E\x5430"
	IL_0131:                                                                        //ldloc				V_6
	IL_0135:            Temp_9=a(L"\x452A\x4C2C\x422E\x5430",V_6);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013a:            Temp_10=V_2->GetAttribute(Temp_9);                          //callvirt				System::String^ System::Xml::XmlReader::GetAttribute(System::String^)
	IL_013f:            V_3=Temp_10;                                                //stloc.3
	IL_0140:                                                                        //ldloc.2
	IL_0141:            Temp_11=V_2->ReadInnerXml();                                //callvirt				System::String^ System::Xml::XmlReader::ReadInnerXml()
	IL_0146:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_0148:                                                                        //ldc.i4				0x3
	IL_014d:            V_5=3;                                                      //stloc				V_5
	IL_0151:            /*goto IL_006a;*/goto IL_0156;                              //br				IL_006a
	IL_0156:                                                                        //ldarg.0
	IL_0157:            Temp_6=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_015c:                                                                        //ldloc.3
	IL_015d:            Temp_7=Temp_6->Contains(safe_cast<System::Object^>(V_3));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_0162:            if(Temp_7)goto IL_0102;                                     //brtrue.s				IL_0102
	IL_0164:                                                                        //ldc.i4				0x0
	IL_0169:            V_5=0;                                                      //stloc				V_5
	IL_016d:            /*goto IL_006a;*/goto IL_0172;                              //br				IL_006a
	IL_0172:            goto IL_00b1;                                               //br				IL_00b1
	IL_0177:                                                                        //ldc.i4				0x6
	IL_017c:            V_5=6;                                                      //stloc				V_5
	IL_0180:            /*goto IL_006a;*/goto IL_0185;                              //br				IL_006a
	IL_0185:            goto IL_01a3;                                               //leave.s				IL_01a3
	                    ;}
	                    catch(System::Xml::XmlException^ Ex_018502){
	IL_0187:                                                                        //pop
	IL_0188:                                                                        //ldarg.0
	IL_0189:            Temp_20=this->F_x1;                                         //ldfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_018e:            Temp_20->Clear();                                           //callvirt				void System::Collections::IDictionary::Clear()
	IL_0193:            goto IL_01a3;                                               //leave.s				IL_01a3
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_019302){
	IL_0195:                                                                        //pop
	IL_0196:                                                                        //ldarg.0
	IL_0197:            Temp_21=this->F_x1;                                         //ldfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_019c:            Temp_21->Clear();                                           //callvirt				void System::Collections::IDictionary::Clear()
	IL_01a1:            goto IL_01a3;                                               //leave.s				IL_01a3
	                    ;}
	IL_01a3:            goto IL_01ff;                                               //leave.s				IL_01ff
	                    ;}
	                    finally{
	IL_01a5:                                                                        //ldloc.2
	IL_01a6:            V_2->Close();                                               //callvirt				void System::Xml::XmlReader::Close()
	IL_01ab:                                                                        //endfinally
	                    ;}
	IL_01ac:                                                                        //ldarg.0
	IL_01ad:            Temp_15=gcnew System::Collections::Hashtable();             //newobj				void System::Collections::Hashtable::.ctor()
	IL_01b2:            this->F_x1=safe_cast<System::Collections::IDictionary^>(Temp_15);//stfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_01b7:                                                                        //ldloc.0
	IL_01b8:            Temp_16=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(V_0)->Location;//callvirt				System::String^ Reflector::CodeModel::IAssemblyLocation::get_Location()
	IL_01bd:                                                                        //ldstr				L"\x052A\x552C\x422E\x5D30"
	IL_01c2:                                                                        //ldloc				V_6
	IL_01c6:            Temp_17=a(L"\x052A\x552C\x422E\x5D30",V_6);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01cb:            Temp_18=System::IO::Path::ChangeExtension(Temp_16,Temp_17); //call				System::String^ System::IO::Path::ChangeExtension(System::String^,System::String^)
	IL_01d0:            Temp_19=System::Environment::ExpandEnvironmentVariables(Temp_18);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_01d5:            V_1=Temp_19;                                                //stloc.1
	IL_01d6:                                                                        //ldc.i4				0x0
	IL_01db:            V_5=0;                                                      //stloc				V_5
	IL_01df:            /*goto IL_000b;*/goto IL_01e4;                              //br				IL_000b
	IL_01e4:                                                                        //ldloc.1
	IL_01e5:            Temp_1=System::IO::File::Exists(V_1);                       //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_01ea:            if(!Temp_1)goto IL_01ff;                                    //brfalse				IL_01ff
	IL_01ef:                                                                        //ldc.i4				0x2
	IL_01f4:            V_5=2;                                                      //stloc				V_5
	IL_01f8:            /*goto IL_000b;*/goto IL_01fd;                              //br				IL_000b
	IL_01fd:            goto IL_0216;                                               //br.s				IL_0216
	IL_01ff:                                                                        //ldarg.0
	IL_0200:                                                                        //ldloc.0
	IL_0201:            this->F_x2=V_0;                                             //stfld				Reflector::CodeModel::IAssembly^ Root::T_x145 F_x2
	IL_0206:                                                                        //ldc.i4				0x4
	IL_020b:            V_5=4;                                                      //stloc				V_5
	IL_020f:            /*goto IL_000b;*/goto IL_0214;                              //br				IL_000b
	IL_0214:            goto IL_0230;                                               //br.s				IL_0230
	IL_0216:                                                                        //ldloc.1
	IL_0217:            Temp_13=gcnew System::Xml::XmlTextReader(V_1);              //newobj				void System::Xml::XmlTextReader::.ctor(System::String^)
	IL_021c:            V_2=Temp_13;                                                //stloc.2
	IL_021d:                                                                        //ldc.i4				0x1
	IL_0222:            V_5=1;                                                      //stloc				V_5
	IL_0226:            /*goto IL_000b;*/goto IL_022b;                              //br				IL_000b
	IL_022b:            /*goto IL_005d;*/goto IL_005801;                            //br				IL_005d
	IL_0230:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssemblyReference^ Root::T_x145::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::NotSupportedException^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IModule^ Temp_5 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_2 = nullptr;
	Reflector::CodeModel::IModule^ V_3 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_007d;case 1:goto IL_004e;case 2:goto IL_003d;case 3:goto IL_0099;case 4:goto IL_00d7;case 5:goto IL_006b;case 6:goto IL_00c6;case 7:goto IL_00aa;};//switch				(IL_007d,IL_004e,IL_003d,IL_0099,IL_00d7,IL_006b,IL_00c6,IL_00aa)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0031:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0032:                                                                        //ldc.i4				0x2
	IL_0037:            V_5=2;                                                      //stloc				V_5
	IL_003b:            /*goto IL_0002;*/goto IL_003d;                              //br.s				IL_0002
	IL_003d:                                                                        //ldloc.0
	IL_003e:            if(V_0==nullptr)goto IL_00f1;                               //brfalse				IL_00f1
	IL_0043:                                                                        //ldc.i4				0x1
	IL_0048:            V_5=1;                                                      //stloc				V_5
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_0050:            goto IL_0053;                                               //br.s				IL_0053
	IL_0052:                                                                        //break
	IL_0053:                                                                        //ldloc.0
	IL_0054:            Temp_2=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0059:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_005e:            V_4=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_2);//stloc.s				V_4
	IL_0060:                                                                        //ldc.i4				0x5
	IL_0065:            V_5=5;                                                      //stloc				V_5
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:                                                                        //ldloc.s				V_4
	IL_006d:            if(V_4==nullptr)goto IL_00f1;                               //brfalse				IL_00f1
	IL_0072:                                                                        //ldc.i4				0x0
	IL_0077:            V_5=0;                                                      //stloc				V_5
	IL_007b:            /*goto IL_0002;*/goto IL_007d;                              //br.s				IL_0002
	IL_007d:            goto IL_00d9;                                               //br.s				IL_00d9
	IL_007f:                                                                        //ldloc.0
	IL_0080:            Temp_4=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0085:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_008a:            V_2=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_4);//stloc.2
	IL_008b:                                                                        //ldc.i4				0x3
	IL_0090:            V_5=3;                                                      //stloc				V_5
	IL_0094:            /*goto IL_0002;*/goto IL_0099;                              //br				IL_0002
	IL_0099:                                                                        //ldloc.2
	IL_009a:            if(V_2==nullptr)goto IL_0050;                               //brfalse.s				IL_0050
	IL_009c:                                                                        //ldc.i4				0x7
	IL_00a1:            V_5=7;                                                      //stloc				V_5
	IL_00a5:            /*goto IL_0002;*/goto IL_00aa;                              //br				IL_0002
	IL_00aa:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_00ac:                                                                        //ldloc.0
	IL_00ad:            Temp_0=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_00b2:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00b7:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.1
	IL_00b8:                                                                        //ldc.i4				0x6
	IL_00bd:            V_5=6;                                                      //stloc				V_5
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:                                                                        //ldloc.1
	IL_00c7:            if(V_1==nullptr)goto IL_007f;                               //brfalse.s				IL_007f
	IL_00c9:                                                                        //ldc.i4				0x4
	IL_00ce:            V_5=4;                                                      //stloc				V_5
	IL_00d2:            /*goto IL_0002;*/goto IL_00d7;                              //br				IL_0002
	IL_00d7:            goto IL_00dc;                                               //br.s				IL_00dc
	IL_00d9:                                                                        //ldloc.s				V_4
	IL_00db:            return V_4;                                                 //ret
	IL_00dc:                                                                        //ldloc.1
	IL_00dd:            Temp_3=Root::T_x145::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_1));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x145::M_x1(Reflector::CodeModel::IType^)
	IL_00e2:            return Temp_3;                                              //ret
	IL_00e3:                                                                        //ldloc.2
	IL_00e4:            Temp_5=V_2->Resolve();                                      //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleReference::Resolve()
	IL_00e9:            V_3=Temp_5;                                                 //stloc.3
	IL_00ea:                                                                        //ldloc.3
	IL_00eb:            Temp_6=V_3->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_00f0:            return safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_6);//ret
	IL_00f1:            Temp_1=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00f6:            throw Temp_1;                                               //throw

}
inline System::String^ Root::T_x145::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_006c;case 1:goto IL_007a;case 2:goto IL_003b;case 3:goto IL_002d;};//switch				(IL_006c,IL_007a,IL_003b,IL_002d)
	IL_001b:                                                                        //ldarg.1
	IL_001c:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0021:            V_0=safe_cast<Reflector::CodeModel::ITypeReference^>(dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0));//stloc.0
	IL_0022:                                                                        //ldc.i4				0x3
	IL_0027:            V_2=3;                                                      //stloc				V_2
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:                                                                        //ldloc.0
	IL_002e:            if(V_0==nullptr)goto IL_005a;                               //brfalse.s				IL_005a
	IL_0030:                                                                        //ldc.i4				0x2
	IL_0035:            V_2=2;                                                      //stloc				V_2
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_0087;                                               //br.s				IL_0087
	IL_003d:                                                                        //ldarg.0
	IL_003e:                                                                        //ldloc.1
	IL_003f:            Temp_1=Root::T_x145::T_x1::M_x1(safe_cast<System::Object^>(V_1));//call				System::String^ Root::T_x145::T_x1::M_x1(System::Object^)
	IL_0044:                                                                        //ldloc.1
	IL_0045:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(V_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_004a:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_004f:            Temp_3=Root::T_x145::M_x1(safe_cast<Reflector::CodeModel::IType^>(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2)));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x145::M_x1(Reflector::CodeModel::IType^)
	IL_0054:            Temp_4=this->M_x1(Temp_1,Temp_3);                           //call				System::String^ Root::T_x145::M_x1(System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_0059:            return Temp_4;                                              //ret
	IL_005a:                                                                        //ldarg.1
	IL_005b:                                                                        //isinst				Reflector::CodeModel::IMemberDeclaration
	IL_0060:            V_1=dynamic_cast<Reflector::CodeModel::IMemberDeclaration^>(A_0);//stloc.1
	IL_0061:                                                                        //ldc.i4				0x0
	IL_0066:            V_2=0;                                                      //stloc				V_2
	IL_006a:            /*goto IL_0002;*/goto IL_006c;                              //br.s				IL_0002
	IL_006c:                                                                        //ldloc.1
	IL_006d:            if(V_1==nullptr)goto IL_009a;                               //brfalse.s				IL_009a
	IL_006f:                                                                        //ldc.i4				0x1
	IL_0074:            V_2=1;                                                      //stloc				V_2
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:                                                                        //ldc.i4.4
	IL_007b:                                                                        //dup
	IL_007c:                                                                        //dup
	IL_007d:                                                                        //ldc.i4.2
	IL_007e:                                                                        //sub
	IL_007f:                                                                        //blt				IL_007b
	IL_0084:                                                                        //pop
	IL_0085:            goto IL_003d;                                               //br.s				IL_003d
	IL_0087:                                                                        //ldarg.0
	IL_0088:                                                                        //ldloc.0
	IL_0089:            Temp_5=Root::T_x145::T_x1::M_x1(safe_cast<System::Object^>(V_0));//call				System::String^ Root::T_x145::T_x1::M_x1(System::Object^)
	IL_008e:                                                                        //ldloc.0
	IL_008f:            Temp_6=Root::T_x145::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_0));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x145::M_x1(Reflector::CodeModel::IType^)
	IL_0094:            Temp_7=this->M_x1(Temp_5,Temp_6);                           //call				System::String^ Root::T_x145::M_x1(System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_0099:            return Temp_7;                                              //ret
	IL_009a:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_009f:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x145::M_x1(System::String^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Collections::IDictionary^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::Collections::IDictionary^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Int32 Temp_7 = 0;
	System::Collections::IDictionary^ Temp_8 = nullptr;
	System::Object^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	array<System::Char>^ Temp_14 = nullptr;
	array<System::String^>^ Temp_15 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	array<System::String^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	array<System::Char>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_5=6;                                                      //stloc				V_5
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_017f;case 1:goto IL_004e;case 2:goto IL_0168;case 3:goto IL_00a0;case 4:goto IL_00d2;case 5:goto IL_0086;case 6:goto IL_0155;case 7:goto IL_00f1;case 8:goto IL_00bf;case 9:goto IL_0064;};//switch				(IL_017f,IL_004e,IL_0168,IL_00a0,IL_00d2,IL_0086,IL_0155,IL_00f1,IL_00bf,IL_0064)
	IL_003c:                                                                        //ldarg.0
	IL_003d:                                                                        //ldarg.2
	IL_003e:            this->M_x1(A_1);                                            //call				void Root::T_x145::M_x1(Reflector::CodeModel::IAssemblyReference^)
	IL_0043:                                                                        //ldc.i4				0x1
	IL_0048:            V_4=1;                                                      //stloc				V_4
	IL_004c:            /*goto IL_000b;*/goto IL_004e;                              //br.s				IL_000b
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_2=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_0054:            if(Temp_2==nullptr)goto IL_0184;                            //brfalse				IL_0184
	IL_0059:                                                                        //ldc.i4				0x9
	IL_005e:            V_4=9;                                                      //stloc				V_4
	IL_0062:            /*goto IL_000b;*/goto IL_0064;                              //br.s				IL_000b
	IL_0064:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_0066:                                                                        //ldstr				L"\x2E23"
	IL_006b:                                                                        //ldloc				V_5
	IL_006f:            Temp_0=a(L"\x2E23",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0074:                                                                        //ldloc.1
	IL_0075:            Temp_1=System::String::Join(Temp_0,V_1);                    //call				System::String^ System::String::Join(System::String^,array<System::String^>^)
	IL_007a:            V_0=Temp_1;                                                 //stloc.0
	IL_007b:                                                                        //ldc.i4				0x5
	IL_0080:            V_4=5;                                                      //stloc				V_4
	IL_0084:            /*goto IL_000b;*/goto IL_0086;                              //br.s				IL_000b
	IL_0086:                                                                        //ldloc.0
	IL_0087:            Temp_7=V_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_008c:                                                                        //ldc.i4.0
	IL_008d:            if(Temp_7<=0)goto IL_0184;                                  //ble				IL_0184
	IL_0092:                                                                        //ldc.i4				0x3
	IL_0097:            V_4=3;                                                      //stloc				V_4
	IL_009b:            /*goto IL_000b;*/goto IL_00a0;                              //br				IL_000b
	IL_00a0:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:                                                                        //ldloc.2
	IL_00a4:                                                                        //ldloc.1
	IL_00a5:                                                                        //ldloc.2
	IL_00a6:                                                                        //ldelem.ref
	IL_00a7:            Temp_4=V_1[V_2]->Trim();                                    //callvirt				System::String^ System::String::Trim()
	IL_00ac:            V_1[V_2]=Temp_4;                                            //stelem.ref
	IL_00ad:                                                                        //ldloc.2
	IL_00ae:                                                                        //ldc.i4.1
	IL_00af:                                                                        //add
	IL_00b0:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00b1:                                                                        //ldc.i4				0x8
	IL_00b6:            V_4=8;                                                      //stloc				V_4
	IL_00ba:            /*goto IL_000b;*/goto IL_00bf;                              //br				IL_000b
	IL_00bf:            goto IL_015a;                                               //br				IL_015a
	IL_00c4:                                                                        //ldc.i4				0x4
	IL_00c9:            V_4=4;                                                      //stloc				V_4
	IL_00cd:            /*goto IL_000b;*/goto IL_00d2;                              //br				IL_000b
	IL_00d2:                                                                        //ldarg.0
	IL_00d3:            Temp_5=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_00d8:                                                                        //ldarg.1
	IL_00d9:            Temp_6=Temp_5->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_00de:            if(!Temp_6)goto IL_0184;                                    //brfalse				IL_0184
	IL_00e3:                                                                        //ldc.i4				0x7
	IL_00e8:            V_4=7;                                                      //stloc				V_4
	IL_00ec:            /*goto IL_000b;*/goto IL_00f1;                              //br				IL_000b
	IL_00f1:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_00f3:                                                                        //ldloc.0
	IL_00f4:            return V_0;                                                 //ret
	IL_00f5:                                                                        //ldarg.0
	IL_00f6:            Temp_8=this->F_x1;                                          //ldfld				System::Collections::IDictionary^ Root::T_x145 F_x1
	IL_00fb:                                                                        //ldarg.1
	IL_00fc:            Temp_9=Temp_8[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_0101:                                                                        //castclass				System::String
	IL_0106:            V_0=safe_cast<System::String^>(Temp_9);                     //stloc.0
	IL_0107:                                                                        //ldloc.0
	IL_0108:            Temp_10=V_0->Trim();                                        //callvirt				System::String^ System::String::Trim()
	IL_010d:            V_0=Temp_10;                                                //stloc.0
	IL_010e:                                                                        //ldloc.0
	IL_010f:                                                                        //ldstr				L"\x2923\x2C25"
	IL_0114:                                                                        //ldloc				V_5
	IL_0118:            Temp_11=a(L"\x2923\x2C25",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011d:                                                                        //ldstr				L"\x2E23"
	IL_0122:                                                                        //ldloc				V_5
	IL_0126:            Temp_12=a(L"\x2E23",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012b:            Temp_13=V_0->Replace(Temp_11,Temp_12);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0130:            V_0=Temp_13;                                                //stloc.0
	IL_0131:                                                                        //ldloc.0
	IL_0132:                                                                        //ldc.i4.1
	IL_0133:            Temp_14=gcnew array<System::Char>(1);                       //newarr				System::Char
	IL_0138:            V_3=Temp_14;                                                //stloc.3
	IL_0139:                                                                        //ldloc.3
	IL_013a:                                                                        //ldc.i4.0
	IL_013b:                                                                        //ldc.i4.s				10
	IL_013d:            V_3[0]=(System::Char)10;                                    //stelem.i2
	IL_013e:                                                                        //ldloc.3
	IL_013f:            Temp_15=V_0->Split(V_3);                                    //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_0144:            V_1=Temp_15;                                                //stloc.1
	IL_0145:                                                                        //ldc.i4.0
	IL_0146:            V_2=0;                                                      //stloc.2
	IL_0147:                                                                        //ldc.i4				0x6
	IL_014c:            V_4=6;                                                      //stloc				V_4
	IL_0150:            /*goto IL_000b;*/goto IL_0155;                              //br				IL_000b
	IL_0155:            goto IL_0158;                                               //br.s				IL_0158
	IL_0157:                                                                        //break
	IL_0158:            goto IL_015a;                                               //br.s				IL_015a
	IL_015a:                                                                        //ldc.i4				0x2
	IL_015f:            V_4=2;                                                      //stloc				V_4
	IL_0163:            /*goto IL_000b;*/goto IL_0168;                              //br				IL_000b
	IL_0168:                                                                        //ldloc.2
	IL_0169:                                                                        //ldloc.1
	IL_016a:            Temp_3=V_1->Length;                                         //ldlen
	IL_016b:                                                                        //conv.i4
	IL_016c:            if(V_2<Temp_3)goto IL_00a2;                                 //blt				IL_00a2
	IL_0171:                                                                        //ldc.i4				0x0
	IL_0176:            V_4=0;                                                      //stloc				V_4
	IL_017a:            /*goto IL_000b;*/goto IL_017f;                              //br				IL_000b
	IL_017f:            goto IL_0066;                                               //br				IL_0066
	IL_0184:                                                                        //ldnull
	IL_0185:            return nullptr;                                             //ret

}
inline Root::T_x145::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_1=16;                                                     //stloc				V_1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_000f:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0014:            if(Temp_1==0)goto IL_004a;                                  //brfalse.s				IL_004a
	IL_0016:            goto IL_0018;                                               //br.s				IL_0018
	IL_0018:                                                                        //ldarg.0
	IL_0019:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_001e:                                                                        //ldstr				L"\x4E2D\x502F"
	IL_0023:                                                                        //ldloc				V_1
	IL_0027:            Temp_4=a(L"\x4E2D\x502F",V_1);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_5=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0032:            Temp_6=safe_cast<System::Collections::ICollection^>(Temp_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0037:            V_0=Temp_6;                                                 //stloc.0
	IL_0038:                                                                        //ldloca.s				V_0
	IL_003a:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_003f:            Temp_8=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_7));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0044:            Temp_9=System::String::Concat(Temp_3,Temp_4,Temp_8);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0049:            return Temp_9;                                              //ret
	IL_004a:                                                                        //ldc.i4.4
	IL_004b:                                                                        //dup
	IL_004c:                                                                        //dup
	IL_004d:                                                                        //ldc.i4.2
	IL_004e:                                                                        //sub
	IL_004f:                                                                        //blt				IL_004b
	IL_0054:                                                                        //pop
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_005b:            return Temp_2;                                              //ret

}
inline System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0,Reflector::CodeModel::MethodCallingConvention A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::String^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::String^ Temp_12 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IType^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_5=10;                                                     //stloc				V_5
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_4=0;                                                      //stloc				V_4
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_4
	IL_001a:            switch(V_4){case 0:goto IL_0014;case 1:goto IL_0042;case 2:goto IL_0213;};//switch				(IL_0014,IL_0042,IL_0213)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_11=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0031:                                                                        //ldc.i4.0
	IL_0032:            if(Temp_11<=0)goto IL_021b;                                 //ble				IL_021b
	IL_0037:                                                                        //ldc.i4				0x1
	IL_003c:            V_4=1;                                                      //stloc				V_4
	IL_0040:            /*goto IL_0016;*/goto IL_0042;                              //br.s				IL_0016
	IL_0042:            goto IL_01fa;                                               //br				IL_01fa
	IL_004201:          try{
	IL_0047:            goto IL_007e;                                               //br.s				IL_007e
	IL_0049:                                                                        //ldloc				V_4
	IL_004d:            switch(V_4){case 0:goto IL_0184;case 1:goto IL_01b2;case 2:goto IL_00cd;case 3:goto IL_015a;case 4:goto IL_00bd;case 5:goto IL_0136;case 6:goto IL_00af;case 7:goto IL_009f;case 8:goto IL_016a;case 9:goto IL_00e2;case 10:goto IL_0106;};//switch				(IL_0184,IL_01b2,IL_00cd,IL_015a,IL_00bd,IL_0136,IL_00af,IL_009f,IL_016a,IL_00e2,IL_0106)
	IL_007e:                                                                        //ldloc.0
	IL_007f:                                                                        //ldstr				"'"
	IL_0084:                                                                        //ldloc				V_5
	IL_0088:            Temp_2=a("'",V_5);                                          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008d:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0092:                                                                        //ldc.i4.0
	IL_0093:            V_1=0;                                                      //stloc.1
	IL_0094:                                                                        //ldc.i4				0x7
	IL_0099:            V_4=7;                                                      //stloc				V_4
	IL_009d:            /*goto IL_0049;*/goto IL_009f;                              //br.s				IL_0049
	IL_009f:            goto IL_015c;                                               //br				IL_015c
	IL_00a4:                                                                        //ldc.i4				0x6
	IL_00a9:            V_4=6;                                                      //stloc				V_4
	IL_00ad:            /*goto IL_0049;*/goto IL_00af;                              //br.s				IL_0049
	IL_00af:                                                                        //ldloc.1
	IL_00b0:            if(V_1==0)goto IL_010b;                                     //brfalse.s				IL_010b
	IL_00b2:                                                                        //ldc.i4				0x4
	IL_00b7:            V_4=4;                                                      //stloc				V_4
	IL_00bb:            /*goto IL_0049;*/goto IL_00bd;                              //br.s				IL_0049
	IL_00bd:            goto IL_0138;                                               //br.s				IL_0138
	IL_00bf:                                                                        //ldc.i4				0x2
	IL_00c4:            V_4=2;                                                      //stloc				V_4
	IL_00c8:            /*goto IL_0049;*/goto IL_00cd;                              //br				IL_0049
	IL_00cd:                                                                        //ldarg.1
	IL_00ce:                                                                        //ldc.i4.5
	IL_00cf:            if(safe_cast<System::Int32>(A_1)!=5)goto IL_0189;           //bne.un				IL_0189
	IL_00d4:                                                                        //ldc.i4				0x9
	IL_00d9:            V_4=9;                                                      //stloc				V_4
	IL_00dd:            /*goto IL_0049;*/goto IL_00e2;                              //br				IL_0049
	IL_00e2:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00e4:                                                                        //ldloc.0
	IL_00e5:                                                                        //ldstr				L"\x0427"
	IL_00ea:                                                                        //ldloc				V_5
	IL_00ee:            Temp_10=a(L"\x0427",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f3:            V_0->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00f8:                                                                        //ldc.i4				0xa
	IL_00fd:            V_4=10;                                                     //stloc				V_4
	IL_0101:            /*goto IL_0049;*/goto IL_0106;                              //br				IL_0049
	IL_0106:            goto IL_0189;                                               //br				IL_0189
	IL_010b:                                                                        //ldarg.0
	IL_010c:                                                                        //ldloc.1
	IL_010d:            Temp_5=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0112:            Temp_6=Temp_5->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0117:            V_2=Temp_6;                                                 //stloc.2
	IL_0118:                                                                        //ldloc.0
	IL_0119:                                                                        //ldloc.2
	IL_011a:            Temp_7=Root::T_x145::T_x1::M_x1(V_2);                       //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^)
	IL_011f:            V_0->Write(Temp_7);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0124:                                                                        //ldloc.1
	IL_0125:                                                                        //ldc.i4.1
	IL_0126:                                                                        //add
	IL_0127:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0128:                                                                        //ldc.i4				0x5
	IL_012d:            V_4=5;                                                      //stloc				V_4
	IL_0131:            /*goto IL_0049;*/goto IL_0136;                              //br				IL_0049
	IL_0136:            goto IL_015c;                                               //br.s				IL_015c
	IL_0138:                                                                        //ldloc.0
	IL_0139:                                                                        //ldstr				L"\x0427"
	IL_013e:                                                                        //ldloc				V_5
	IL_0142:            Temp_8=a(L"\x0427",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0147:            V_0->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_014c:                                                                        //ldc.i4				0x3
	IL_0151:            V_4=3;                                                      //stloc				V_4
	IL_0155:            /*goto IL_0049;*/goto IL_015a;                              //br				IL_0049
	IL_015a:            goto IL_010b;                                               //br.s				IL_010b
	IL_015c:                                                                        //ldc.i4				0x8
	IL_0161:            V_4=8;                                                      //stloc				V_4
	IL_0165:            /*goto IL_0049;*/goto IL_016a;                              //br				IL_0049
	IL_016a:                                                                        //ldloc.1
	IL_016b:                                                                        //ldarg.0
	IL_016c:            Temp_9=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0171:            if(V_1<Temp_9)goto IL_00a4;                                 //blt				IL_00a4
	IL_0176:                                                                        //ldc.i4				0x0
	IL_017b:            V_4=0;                                                      //stloc				V_4
	IL_017f:            /*goto IL_0049;*/goto IL_0184;                              //br				IL_0049
	IL_0184:            goto IL_00bf;                                               //br				IL_00bf
	IL_0189:                                                                        //ldloc.0
	IL_018a:                                                                        //ldstr				L"\x0127"
	IL_018f:                                                                        //ldloc				V_5
	IL_0193:            Temp_3=a(L"\x0127",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0198:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_019d:                                                                        //ldloc.0
	IL_019e:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_01a3:            V_3=Temp_4;                                                 //stloc.3
	IL_01a4:                                                                        //ldc.i4				0x1
	IL_01a9:            V_4=1;                                                      //stloc				V_4
	IL_01ad:            /*goto IL_0049;*/goto IL_01b2;                              //br				IL_0049
	IL_01b2:            goto IL_0221;                                               //leave.s				IL_0221
	                    ;}
	                    finally{
	IL_01b4:                                                                        //ldc.i4				0x2
	IL_01b9:            V_4=2;                                                      //stloc				V_4
	IL_01bd:            /*goto IL_01c1;*/goto IL_01bf;                              //br.s				IL_01c1
	IL_01bf:            goto IL_01d6;                                               //br.s				IL_01d6
	IL_01c1:                                                                        //ldloc				V_4
	IL_01c5:            switch(V_4){case 0:goto IL_01f7;case 1:goto IL_01e4;case 2:goto IL_01bf;};//switch				(IL_01f7,IL_01e4,IL_01bf)
	IL_01d6:                                                                        //ldloc.0
	IL_01d7:            if(V_0==nullptr)goto IL_01f9;                               //brfalse.s				IL_01f9
	IL_01d9:                                                                        //ldc.i4				0x1
	IL_01de:            V_4=1;                                                      //stloc				V_4
	IL_01e2:            /*goto IL_01c1;*/goto IL_01e4;                              //br.s				IL_01c1
	IL_01e4:            goto IL_01e6;                                               //br.s				IL_01e6
	IL_01e6:                                                                        //ldloc.0
	IL_01e7:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01ec:                                                                        //ldc.i4				0x0
	IL_01f1:            V_4=0;                                                      //stloc				V_4
	IL_01f5:            /*goto IL_01c1;*/goto IL_01f7;                              //br.s				IL_01c1
	IL_01f7:            goto IL_01f9;                                               //br.s				IL_01f9
	IL_01f9:                                                                        //endfinally
	                    ;}
	IL_01fa:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01ff:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0204:            V_0=Temp_1;                                                 //stloc.0
	IL_0205:                                                                        //ldc.i4				0x2
	IL_020a:            V_4=2;                                                      //stloc				V_4
	IL_020e:            /*goto IL_0016;*/goto IL_0213;                              //br				IL_0016
	IL_0213:            goto IL_0216;                                               //br.s				IL_0216
	IL_0215:                                                                        //break
	IL_0216:            /*goto IL_0047;*/goto IL_004201;                            //br				IL_0047
	IL_021b:            Temp_12=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0220:            return Temp_12;                                             //ret
	IL_0221:                                                                        //ldloc.3
	IL_0222:            return V_3;                                                 //ret

}
inline System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::Globalization::CultureInfo^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_23 = nullptr;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	Reflector::CodeModel::IType^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::Int32 Temp_36 = 0;
	System::Globalization::CultureInfo^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_40 = nullptr;
	System::Int32 Temp_41 = 0;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::Globalization::CultureInfo^ Temp_45 = nullptr;
	System::IO::StringWriter^ Temp_46 = nullptr;
	Reflector::CodeModel::IType^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::Globalization::CultureInfo^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_55 = nullptr;
	System::Int32 Temp_56 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_57 = nullptr;
	System::Int32 Temp_58 = 0;
	System::Int32 Temp_59 = 0;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::Globalization::CultureInfo^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	Reflector::CodeModel::IArrayType^ V_4 = nullptr;
	System::IO::StringWriter^ V_5 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	Reflector::CodeModel::IReferenceType^ V_10 = nullptr;
	Reflector::CodeModel::IPointerType^ V_11 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_12 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_13 = nullptr;
	Reflector::CodeModel::IGenericParameter^ V_14 = nullptr;
	Reflector::CodeModel::IGenericArgument^ V_15 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_16 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_17 = nullptr;
	System::String^ V_18 = nullptr;
	System::Int32 V_19 = 0;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_21=6;                                                     //stloc				V_21
	IL_0009:            goto IL_009b;                                               //br				IL_009b
	IL_000e:                                                                        //ldloc				V_20
	IL_0012:            switch(V_20){case 0:goto IL_034e;case 1:goto IL_075e;case 2:goto IL_02af;case 3:goto IL_032e;case 4:goto IL_01d2;case 5:goto IL_0144;case 6:goto IL_06b8;case 7:goto IL_019c;case 8:goto IL_0101;case 9:goto IL_068f;case 10:goto IL_02cd;case 11:goto IL_071f;case 12:goto IL_00b0;case 13:goto IL_0224;case 14:goto IL_0363;case 15:goto IL_0159;case 16:goto IL_037e;case 17:goto IL_0734;case 18:goto IL_01b1;case 19:goto IL_0129;case 20:goto IL_06ef;case 21:goto IL_02ff;case 22:goto IL_00c4;case 23:goto IL_06cc;case 24:goto IL_01ea;case 25:goto IL_02e0;case 26:goto IL_00ec;case 27:goto IL_067a;case 28:goto IL_0393;case 29:goto IL_023e;case 30:goto IL_0704;case 31:goto IL_0295;case 32:goto IL_0181;};//switch				(IL_034e,IL_075e,IL_02af,IL_032e,IL_01d2,IL_0144,IL_06b8,IL_019c,IL_0101,IL_068f,IL_02cd,IL_071f,IL_00b0,IL_0224,IL_0363,IL_0159,IL_037e,IL_0734,IL_01b1,IL_0129,IL_06ef,IL_02ff,IL_00c4,IL_06cc,IL_01ea,IL_02e0,IL_00ec,IL_067a,IL_0393,IL_023e,IL_0704,IL_0295,IL_0181)
	IL_009b:                                                                        //ldarg.0
	IL_009c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00a1:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_00a2:                                                                        //ldc.i4				0xc
	IL_00a7:            V_20=12;                                                    //stloc				V_20
	IL_00ab:            /*goto IL_000e;*/goto IL_00b0;                              //br				IL_000e
	IL_00b0:                                                                        //ldloc.0
	IL_00b1:            if(V_0==nullptr)goto IL_06d9;                               //brfalse				IL_06d9
	IL_00b6:                                                                        //ldc.i4				0x16
	IL_00bb:            V_20=22;                                                    //stloc				V_20
	IL_00bf:            /*goto IL_000e;*/goto IL_00c4;                              //br				IL_000e
	IL_00c4:            goto IL_029a;                                               //br				IL_029a
	IL_00c9:                                                                        //ldloc.s				V_13
	IL_00cb:            Temp_28=V_13->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_00d0:            Temp_29=Root::T_x145::T_x1::M_x1(Temp_28);                  //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^)
	IL_00d5:            return Temp_29;                                             //ret
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_00dc:            V_11=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0);//stloc.s				V_11
	IL_00de:                                                                        //ldc.i4				0x1a
	IL_00e3:            V_20=26;                                                    //stloc				V_20
	IL_00e7:            /*goto IL_000e;*/goto IL_00ec;                              //br				IL_000e
	IL_00ec:                                                                        //ldloc.s				V_11
	IL_00ee:            if(V_11==nullptr)goto IL_0664;                              //brfalse				IL_0664
	IL_00f3:                                                                        //ldc.i4				0x8
	IL_00f8:            V_20=8;                                                     //stloc				V_20
	IL_00fc:            /*goto IL_000e;*/goto IL_0101;                              //br				IL_000e
	IL_0101:            goto IL_0770;                                               //br				IL_0770
	IL_0106:                                                                        //ldloc.1
	IL_0107:                                                                        //ldstr				L"\x5923"
	IL_010c:                                                                        //ldloc				V_21
	IL_0110:            Temp_30=a(L"\x5923",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0115:            Temp_31=System::String::Concat(V_1,Temp_30);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_011a:            V_1=Temp_31;                                                //stloc.1
	IL_011b:                                                                        //ldc.i4				0x13
	IL_0120:            V_20=19;                                                    //stloc				V_20
	IL_0124:            /*goto IL_000e;*/goto IL_0129;                              //br				IL_000e
	IL_0129:            goto IL_020f;                                               //br				IL_020f
	IL_012e:                                                                        //ldarg.0
	IL_012f:                                                                        //isinst				Reflector::CodeModel::IGenericArgument
	IL_0134:            V_15=dynamic_cast<Reflector::CodeModel::IGenericArgument^>(A_0);//stloc.s				V_15
	IL_0136:                                                                        //ldc.i4				0x5
	IL_013b:            V_20=5;                                                     //stloc				V_20
	IL_013f:            /*goto IL_000e;*/goto IL_0144;                              //br				IL_000e
	IL_0144:                                                                        //ldloc.s				V_15
	IL_0146:            if(V_15==nullptr)goto IL_026c;                              //brfalse				IL_026c
	IL_014b:                                                                        //ldc.i4				0xf
	IL_0150:            V_20=15;                                                    //stloc				V_20
	IL_0154:            /*goto IL_000e;*/goto IL_0159;                              //br				IL_000e
	IL_0159:            goto IL_0332;                                               //br				IL_0332
	IL_015e:                                                                        //ldloc.1
	IL_015f:                                                                        //ldstr				L"\x0823"
	IL_0164:                                                                        //ldloc				V_21
	IL_0168:            Temp_33=a(L"\x0823",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016d:            Temp_34=System::String::Concat(V_1,Temp_33);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0172:            V_1=Temp_34;                                                //stloc.1
	IL_0173:                                                                        //ldc.i4				0x20
	IL_0178:            V_20=32;                                                    //stloc				V_20
	IL_017c:            /*goto IL_000e;*/goto IL_0181;                              //br				IL_000e
	IL_0181:            goto IL_0304;                                               //br				IL_0304
	IL_0186:                                                                        //ldarg.0
	IL_0187:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_018c:            V_13=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_13
	IL_018e:                                                                        //ldc.i4				0x7
	IL_0193:            V_20=7;                                                     //stloc				V_20
	IL_0197:            /*goto IL_000e;*/goto IL_019c;                              //br				IL_000e
	IL_019c:                                                                        //ldloc.s				V_13
	IL_019e:            if(V_13==nullptr)goto IL_0368;                              //brfalse				IL_0368
	IL_01a3:                                                                        //ldc.i4				0x12
	IL_01a8:            V_20=18;                                                    //stloc				V_20
	IL_01ac:            /*goto IL_000e;*/goto IL_01b1;                              //br				IL_000e
	IL_01b1:            goto IL_00c9;                                               //br				IL_00c9
	IL_01b6:                                                                        //ldloc.s				V_15
	IL_01b8:            Temp_0=V_15->Owner;                                         //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_01bd:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_01c2:            V_17=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_0);//stloc.s				V_17
	IL_01c4:                                                                        //ldc.i4				0x4
	IL_01c9:            V_20=4;                                                     //stloc				V_20
	IL_01cd:            /*goto IL_000e;*/goto IL_01d2;                              //br				IL_000e
	IL_01d2:                                                                        //ldloc.s				V_17
	IL_01d4:            if(V_17==nullptr)goto IL_026c;                              //brfalse				IL_026c
	IL_01d9:            goto IL_01dc;                                               //br.s				IL_01dc
	IL_01db:                                                                        //break
	IL_01dc:                                                                        //ldc.i4				0x18
	IL_01e1:            V_20=24;                                                    //stloc				V_20
	IL_01e5:            /*goto IL_000e;*/goto IL_01ea;                              //br				IL_000e
	IL_01ea:            goto IL_0790;                                               //br				IL_0790
	IL_01ef:                                                                        //ldloc.s				V_10
	IL_01f1:            Temp_24=V_10->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_01f6:            Temp_25=Root::T_x145::T_x1::M_x1(Temp_24);                  //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^)
	IL_01fb:                                                                        //ldstr				L"\x0223"
	IL_0200:                                                                        //ldloc				V_21
	IL_0204:            Temp_26=a(L"\x0223",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0209:            Temp_27=System::String::Concat(Temp_25,Temp_26);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_020e:            return Temp_27;                                             //ret
	IL_020f:                                                                        //ldloc.0
	IL_0210:            Temp_3=Root::T_x145::T_x1::M_x1(V_0);                       //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0215:            V_3=Temp_3;                                                 //stloc.3
	IL_0216:                                                                        //ldc.i4				0xd
	IL_021b:            V_20=13;                                                    //stloc				V_20
	IL_021f:            /*goto IL_000e;*/goto IL_0224;                              //br				IL_000e
	IL_0224:                                                                        //ldloc.3
	IL_0225:            Temp_17=V_3->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_022a:                                                                        //ldc.i4.0
	IL_022b:            if(Temp_17<=0)goto IL_0330;                                 //ble				IL_0330
	IL_0230:                                                                        //ldc.i4				0x1d
	IL_0235:            V_20=29;                                                    //stloc				V_20
	IL_0239:            /*goto IL_000e;*/goto IL_023e;                              //br				IL_000e
	IL_023e:            goto IL_0694;                                               //br				IL_0694
	IL_0243:                                                                        //ldstr				L"\x4423"
	IL_0248:                                                                        //ldloc				V_21
	IL_024c:            Temp_18=a(L"\x4423",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0251:                                                                        //ldloc.s				V_15
	IL_0253:            Temp_19=V_15->Position;                                     //callvirt				System::Int32 Reflector::CodeModel::IGenericArgument::get_Position()
	IL_0258:            V_19=Temp_19;                                               //stloc.s				V_19
	IL_025a:                                                                        //ldloca.s				V_19
	IL_025c:            Temp_20=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0261:            Temp_21=V_19.ToString(safe_cast<System::IFormatProvider^>(Temp_20));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0266:            Temp_22=System::String::Concat(Temp_18,Temp_21);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_026b:            return Temp_22;                                             //ret
	IL_026c:                                                                        //ldstr				L"\x1B23"
	IL_0271:                                                                        //ldloc				V_21
	IL_0275:            Temp_4=a(L"\x1B23",V_21);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027a:            return Temp_4;                                              //ret
	IL_027b:            Temp_45=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0280:            Temp_46=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_45));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0285:            V_5=Temp_46;                                                //stloc.s				V_5
	IL_0287:                                                                        //ldc.i4				0x1f
	IL_028c:            V_20=31;                                                    //stloc				V_20
	IL_0290:            /*goto IL_000e;*/goto IL_0295;                              //br				IL_000e
	IL_0295:            /*goto IL_0398;*/goto IL_039301;                            //br				IL_0398
	IL_029a:                                                                        //ldloc.0
	IL_029b:            Temp_32=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_02a0:            V_1=Temp_32;                                                //stloc.1
	IL_02a1:                                                                        //ldc.i4				0x2
	IL_02a6:            V_20=2;                                                     //stloc				V_20
	IL_02aa:            /*goto IL_000e;*/goto IL_02af;                              //br				IL_000e
	IL_02af:                                                                        //ldloc.0
	IL_02b0:            Temp_1=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_02b5:            Temp_2=safe_cast<System::Collections::ICollection^>(Temp_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02ba:            if(Temp_2==0)goto IL_020f;                                  //brfalse				IL_020f
	IL_02bf:                                                                        //ldc.i4				0xa
	IL_02c4:            V_20=10;                                                    //stloc				V_20
	IL_02c8:            /*goto IL_000e;*/goto IL_02cd;                              //br				IL_000e
	IL_02cd:            goto IL_0739;                                               //br				IL_0739
	IL_02d2:                                                                        //ldc.i4				0x19
	IL_02d7:            V_20=25;                                                    //stloc				V_20
	IL_02db:            /*goto IL_000e;*/goto IL_02e0;                              //br				IL_000e
	IL_02e0:                                                                        //ldloc.2
	IL_02e1:                                                                        //ldloc.0
	IL_02e2:            Temp_40=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_02e7:            Temp_41=safe_cast<System::Collections::ICollection^>(Temp_40)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02ec:            if(V_2<Temp_41)goto IL_06aa;                                //blt				IL_06aa
	IL_02f1:                                                                        //ldc.i4				0x15
	IL_02f6:            V_20=21;                                                    //stloc				V_20
	IL_02fa:            /*goto IL_000e;*/goto IL_02ff;                              //br				IL_000e
	IL_02ff:            goto IL_0106;                                               //br				IL_0106
	IL_0304:                                                                        //ldloc.1
	IL_0305:                                                                        //ldloc.0
	IL_0306:            Temp_5=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_030b:                                                                        //ldloc.2
	IL_030c:            Temp_6=Temp_5[V_2];                                         //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_0311:            Temp_7=Root::T_x145::T_x1::M_x1(Temp_6);                    //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^)
	IL_0316:            Temp_8=System::String::Concat(V_1,Temp_7);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_031b:            V_1=Temp_8;                                                 //stloc.1
	IL_031c:                                                                        //ldloc.2
	IL_031d:                                                                        //ldc.i4.1
	IL_031e:                                                                        //add
	IL_031f:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0320:                                                                        //ldc.i4				0x3
	IL_0325:            V_20=3;                                                     //stloc				V_20
	IL_0329:            /*goto IL_000e;*/goto IL_032e;                              //br				IL_000e
	IL_032e:            goto IL_02d2;                                               //br.s				IL_02d2
	IL_0330:                                                                        //ldloc.1
	IL_0331:            return V_1;                                                 //ret
	IL_0332:                                                                        //ldloc.s				V_15
	IL_0334:            Temp_23=V_15->Owner;                                        //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_0339:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_033e:            V_16=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_23);//stloc.s				V_16
	IL_0340:                                                                        //ldc.i4				0x0
	IL_0345:            V_20=0;                                                     //stloc				V_20
	IL_0349:            /*goto IL_000e;*/goto IL_034e;                              //br				IL_000e
	IL_034e:                                                                        //ldloc.s				V_16
	IL_0350:            if(V_16==nullptr)goto IL_01b6;                              //brfalse				IL_01b6
	IL_0355:                                                                        //ldc.i4				0xe
	IL_035a:            V_20=14;                                                    //stloc				V_20
	IL_035e:            /*goto IL_000e;*/goto IL_0363;                              //br				IL_000e
	IL_0363:            goto IL_0243;                                               //br				IL_0243
	IL_0368:                                                                        //ldarg.0
	IL_0369:                                                                        //isinst				Reflector::CodeModel::IGenericParameter
	IL_036e:            V_14=dynamic_cast<Reflector::CodeModel::IGenericParameter^>(A_0);//stloc.s				V_14
	IL_0370:                                                                        //ldc.i4				0x10
	IL_0375:            V_20=16;                                                    //stloc				V_20
	IL_0379:            /*goto IL_000e;*/goto IL_037e;                              //br				IL_000e
	IL_037e:                                                                        //ldloc.s				V_14
	IL_0380:            if(V_14==nullptr)goto IL_012e;                              //brfalse				IL_012e
	IL_0385:                                                                        //ldc.i4				0x1c
	IL_038a:            V_20=28;                                                    //stloc				V_20
	IL_038e:            /*goto IL_000e;*/goto IL_0393;                              //br				IL_000e
	IL_0393:            goto IL_06d1;                                               //br				IL_06d1
	IL_039301:          try{
	IL_0398:            goto IL_03ef;                                               //br.s				IL_03ef
	IL_039a:                                                                        //ldloc				V_20
	IL_039e:            switch(V_20){case 0:goto IL_04b9;case 1:goto IL_059b;case 2:goto IL_0575;case 3:goto IL_05ab;case 4:goto IL_0431;case 5:goto IL_0500;case 6:goto IL_048a;case 7:goto IL_04de;case 8:goto IL_055f;case 9:goto IL_0588;case 10:goto IL_0510;case 11:goto IL_052c;case 12:goto IL_0617;case 13:goto IL_04ee;case 14:goto IL_047a;case 15:goto IL_05e9;case 16:goto IL_05c1;case 17:goto IL_0457;case 18:goto IL_04a0;};//switch				(IL_04b9,IL_059b,IL_0575,IL_05ab,IL_0431,IL_0500,IL_048a,IL_04de,IL_055f,IL_0588,IL_0510,IL_052c,IL_0617,IL_04ee,IL_047a,IL_05e9,IL_05c1,IL_0457,IL_04a0)
	IL_03ef:                                                                        //ldloc.s				V_5
	IL_03f1:                                                                        //ldloc.s				V_4
	IL_03f3:            Temp_47=V_4->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_03f8:            Temp_48=Root::T_x145::T_x1::M_x1(Temp_47);                  //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^)
	IL_03fd:            V_5->Write(Temp_48);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0402:                                                                        //ldloc.s				V_5
	IL_0404:                                                                        //ldstr				L"\x7F23"
	IL_0409:                                                                        //ldloc				V_21
	IL_040d:            Temp_49=a(L"\x7F23",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0412:            V_5->Write(Temp_49);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0417:                                                                        //ldloc.s				V_4
	IL_0419:            Temp_50=V_4->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_041e:            V_6=Temp_50;                                                //stloc.s				V_6
	IL_0420:                                                                        //ldc.i4.0
	IL_0421:            V_7=0;                                                      //stloc.s				V_7
	IL_0423:                                                                        //ldc.i4				0x4
	IL_0428:            V_20=4;                                                     //stloc				V_20
	IL_042c:            /*goto IL_039a;*/goto IL_0431;                              //br				IL_039a
	IL_0431:            goto IL_0502;                                               //br				IL_0502
	IL_0436:                                                                        //ldloc.s				V_5
	IL_0438:                                                                        //ldloca.s				V_8
	IL_043a:            Temp_52=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_043f:            Temp_53=V_8.ToString(safe_cast<System::IFormatProvider^>(Temp_52));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0444:            V_5->Write(Temp_53);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0449:                                                                        //ldc.i4				0x11
	IL_044e:            V_20=17;                                                    //stloc				V_20
	IL_0452:            /*goto IL_039a;*/goto IL_0457;                              //br				IL_039a
	IL_0457:            goto IL_047c;                                               //br.s				IL_047c
	IL_0459:                                                                        //ldloc.s				V_5
	IL_045b:                                                                        //ldloca.s				V_9
	IL_045d:            Temp_62=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0462:            Temp_63=V_9.ToString(safe_cast<System::IFormatProvider^>(Temp_62));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0467:            V_5->Write(Temp_63);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_046c:                                                                        //ldc.i4				0xe
	IL_0471:            V_20=14;                                                    //stloc				V_20
	IL_0475:            /*goto IL_039a;*/goto IL_047a;                              //br				IL_039a
	IL_047a:            goto IL_04a5;                                               //br.s				IL_04a5
	IL_047c:                                                                        //ldc.i4				0x6
	IL_0481:            V_20=6;                                                     //stloc				V_20
	IL_0485:            /*goto IL_039a;*/goto IL_048a;                              //br				IL_039a
	IL_048a:                                                                        //ldloc.s				V_8
	IL_048c:                                                                        //ldc.i4.m1
	IL_048d:            if(V_8!=-1)goto IL_05c6;                                    //bne.un				IL_05c6
	IL_0492:                                                                        //ldc.i4				0x12
	IL_0497:            V_20=18;                                                    //stloc				V_20
	IL_049b:            /*goto IL_039a;*/goto IL_04a0;                              //br				IL_039a
	IL_04a0:            goto IL_057a;                                               //br				IL_057a
	IL_04a5:                                                                        //ldloc.s				V_7
	IL_04a7:                                                                        //ldc.i4.1
	IL_04a8:                                                                        //add
	IL_04a9:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_04ab:                                                                        //ldc.i4				0x0
	IL_04b0:            V_20=0;                                                     //stloc				V_20
	IL_04b4:            /*goto IL_039a;*/goto IL_04b9;                              //br				IL_039a
	IL_04b9:            goto IL_0502;                                               //br.s				IL_0502
	IL_04bb:                                                                        //ldloc.s				V_5
	IL_04bd:                                                                        //ldstr				L"\x0823"
	IL_04c2:                                                                        //ldloc				V_21
	IL_04c6:            Temp_54=a(L"\x0823",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04cb:            V_5->Write(Temp_54);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_04d0:                                                                        //ldc.i4				0x7
	IL_04d5:            V_20=7;                                                     //stloc				V_20
	IL_04d9:            /*goto IL_039a;*/goto IL_04de;                              //br				IL_039a
	IL_04de:            goto IL_0531;                                               //br.s				IL_0531
	IL_04e0:                                                                        //ldc.i4				0xd
	IL_04e5:            V_20=13;                                                    //stloc				V_20
	IL_04e9:            /*goto IL_039a;*/goto IL_04ee;                              //br				IL_039a
	IL_04ee:                                                                        //ldloc.s				V_7
	IL_04f0:            if(V_7==0)goto IL_0531;                                     //brfalse.s				IL_0531
	IL_04f2:                                                                        //ldc.i4				0x5
	IL_04f7:            V_20=5;                                                     //stloc				V_20
	IL_04fb:            /*goto IL_039a;*/goto IL_0500;                              //br				IL_039a
	IL_0500:            goto IL_04bb;                                               //br.s				IL_04bb
	IL_0502:                                                                        //ldc.i4				0xa
	IL_0507:            V_20=10;                                                    //stloc				V_20
	IL_050b:            /*goto IL_039a;*/goto IL_0510;                              //br				IL_039a
	IL_0510:                                                                        //ldloc.s				V_7
	IL_0512:                                                                        //ldloc.s				V_6
	IL_0514:            Temp_59=safe_cast<System::Collections::ICollection^>(V_6)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0519:            if(V_7<Temp_59)goto IL_04e0;                                //blt				IL_04e0
	IL_051e:                                                                        //ldc.i4				0xb
	IL_0523:            V_20=11;                                                    //stloc				V_20
	IL_0527:            /*goto IL_039a;*/goto IL_052c;                              //br				IL_039a
	IL_052c:            goto IL_05eb;                                               //br				IL_05eb
	IL_0531:                                                                        //ldloc.s				V_6
	IL_0533:                                                                        //ldloc.s				V_7
	IL_0535:            Temp_55=V_6[V_7];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_053a:            Temp_56=Temp_55->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_053f:            V_8=Temp_56;                                                //stloc.s				V_8
	IL_0541:                                                                        //ldloc.s				V_6
	IL_0543:                                                                        //ldloc.s				V_7
	IL_0545:            Temp_57=V_6[V_7];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_054a:            Temp_58=Temp_57->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_054f:            V_9=Temp_58;                                                //stloc.s				V_9
	IL_0551:                                                                        //ldc.i4				0x8
	IL_0556:            V_20=8;                                                     //stloc				V_20
	IL_055a:            /*goto IL_039a;*/goto IL_055f;                              //br				IL_039a
	IL_055f:                                                                        //ldloc.s				V_8
	IL_0561:                                                                        //ldc.i4.m1
	IL_0562:            if(V_8==-1)goto IL_047c;                                    //beq				IL_047c
	IL_0567:                                                                        //ldc.i4				0x2
	IL_056c:            V_20=2;                                                     //stloc				V_20
	IL_0570:            /*goto IL_039a;*/goto IL_0575;                              //br				IL_039a
	IL_0575:            goto IL_0436;                                               //br				IL_0436
	IL_057a:                                                                        //ldc.i4				0x9
	IL_057f:            V_20=9;                                                     //stloc				V_20
	IL_0583:            /*goto IL_039a;*/goto IL_0588;                              //br				IL_039a
	IL_0588:                                                                        //ldloc.s				V_9
	IL_058a:                                                                        //ldc.i4.m1
	IL_058b:            if(V_9==-1)goto IL_059d;                                    //beq.s				IL_059d
	IL_058d:                                                                        //ldc.i4				0x1
	IL_0592:            V_20=1;                                                     //stloc				V_20
	IL_0596:            /*goto IL_039a;*/goto IL_059b;                              //br				IL_039a
	IL_059b:            goto IL_05c6;                                               //br.s				IL_05c6
	IL_059d:                                                                        //ldc.i4				0x3
	IL_05a2:            V_20=3;                                                     //stloc				V_20
	IL_05a6:            /*goto IL_039a;*/goto IL_05ab;                              //br				IL_039a
	IL_05ab:                                                                        //ldloc.s				V_9
	IL_05ad:                                                                        //ldc.i4.m1
	IL_05ae:            if(V_9==-1)goto IL_04a5;                                    //beq				IL_04a5
	IL_05b3:                                                                        //ldc.i4				0x10
	IL_05b8:            V_20=16;                                                    //stloc				V_20
	IL_05bc:            /*goto IL_039a;*/goto IL_05c1;                              //br				IL_039a
	IL_05c1:            goto IL_0459;                                               //br				IL_0459
	IL_05c6:                                                                        //ldloc.s				V_5
	IL_05c8:                                                                        //ldstr				L"\x1E23"
	IL_05cd:                                                                        //ldloc				V_21
	IL_05d1:            Temp_51=a(L"\x1E23",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05d6:            V_5->Write(Temp_51);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_05db:                                                                        //ldc.i4				0xf
	IL_05e0:            V_20=15;                                                    //stloc				V_20
	IL_05e4:            /*goto IL_039a;*/goto IL_05e9;                              //br				IL_039a
	IL_05e9:            goto IL_059d;                                               //br.s				IL_059d
	IL_05eb:                                                                        //ldloc.s				V_5
	IL_05ed:                                                                        //ldstr				L"\x7923"
	IL_05f2:                                                                        //ldloc				V_21
	IL_05f6:            Temp_60=a(L"\x7923",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05fb:            V_5->Write(Temp_60);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0600:                                                                        //ldloc.s				V_5
	IL_0602:            Temp_61=V_5->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0607:            V_18=Temp_61;                                               //stloc.s				V_18
	IL_0609:                                                                        //ldc.i4				0xc
	IL_060e:            V_20=12;                                                    //stloc				V_20
	IL_0612:            /*goto IL_039a;*/goto IL_0617;                              //br				IL_039a
	IL_0617:            goto IL_07b9;                                               //leave				IL_07b9
	                    ;}
	                    finally{
	IL_061c:                                                                        //ldc.i4				0x0
	IL_0621:            V_20=0;                                                     //stloc				V_20
	IL_0625:            /*goto IL_0629;*/goto IL_0627;                              //br.s				IL_0629
	IL_0627:            goto IL_063e;                                               //br.s				IL_063e
	IL_0629:                                                                        //ldloc				V_20
	IL_062d:            switch(V_20){case 0:goto IL_0627;case 1:goto IL_0661;case 2:goto IL_064d;};//switch				(IL_0627,IL_0661,IL_064d)
	IL_063e:                                                                        //ldloc.s				V_5
	IL_0640:            if(V_5==nullptr)goto IL_0663;                               //brfalse.s				IL_0663
	IL_0642:                                                                        //ldc.i4				0x2
	IL_0647:            V_20=2;                                                     //stloc				V_20
	IL_064b:            /*goto IL_0629;*/goto IL_064d;                              //br.s				IL_0629
	IL_064d:            goto IL_064f;                                               //br.s				IL_064f
	IL_064f:                                                                        //ldloc.s				V_5
	IL_0651:            /*safe_cast<System::IDisposable^>(V_5)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0656:                                                                        //ldc.i4				0x1
	IL_065b:            V_20=1;                                                     //stloc				V_20
	IL_065f:            /*goto IL_0629;*/goto IL_0661;                              //br.s				IL_0629
	IL_0661:            goto IL_0663;                                               //br.s				IL_0663
	IL_0663:                                                                        //endfinally
	                    ;}
	IL_0664:                                                                        //ldarg.0
	IL_0665:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_066a:            V_12=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_12
	IL_066c:                                                                        //ldc.i4				0x1b
	IL_0671:            V_20=27;                                                    //stloc				V_20
	IL_0675:            /*goto IL_000e;*/goto IL_067a;                              //br				IL_000e
	IL_067a:                                                                        //ldloc.s				V_12
	IL_067c:            if(V_12==nullptr)goto IL_0186;                              //brfalse				IL_0186
	IL_0681:                                                                        //ldc.i4				0x9
	IL_0686:            V_20=9;                                                     //stloc				V_20
	IL_068a:            /*goto IL_000e;*/goto IL_068f;                              //br				IL_000e
	IL_068f:            goto IL_0763;                                               //br				IL_0763
	IL_0694:                                                                        //ldloc.3
	IL_0695:                                                                        //ldstr				L"\x0A23"
	IL_069a:                                                                        //ldloc				V_21
	IL_069e:            Temp_43=a(L"\x0A23",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06a3:                                                                        //ldloc.1
	IL_06a4:            Temp_44=System::String::Concat(V_3,Temp_43,V_1);            //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_06a9:            return Temp_44;                                             //ret
	IL_06aa:                                                                        //ldc.i4				0x6
	IL_06af:            V_20=6;                                                     //stloc				V_20
	IL_06b3:            /*goto IL_000e;*/goto IL_06b8;                              //br				IL_000e
	IL_06b8:                                                                        //ldloc.2
	IL_06b9:            if(V_2==0)goto IL_0304;                                     //brfalse				IL_0304
	IL_06be:                                                                        //ldc.i4				0x17
	IL_06c3:            V_20=23;                                                    //stloc				V_20
	IL_06c7:            /*goto IL_000e;*/goto IL_06cc;                              //br				IL_000e
	IL_06cc:            goto IL_015e;                                               //br				IL_015e
	IL_06d1:                                                                        //ldloc.s				V_14
	IL_06d3:            Temp_42=V_14->Name;                                         //callvirt				System::String^ Reflector::CodeModel::IGenericParameter::get_Name()
	IL_06d8:            return Temp_42;                                             //ret
	IL_06d9:                                                                        //ldarg.0
	IL_06da:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_06df:            V_4=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.s				V_4
	IL_06e1:                                                                        //ldc.i4				0x14
	IL_06e6:            V_20=20;                                                    //stloc				V_20
	IL_06ea:            /*goto IL_000e;*/goto IL_06ef;                              //br				IL_000e
	IL_06ef:                                                                        //ldloc.s				V_4
	IL_06f1:            if(V_4==nullptr)goto IL_0709;                               //brfalse				IL_0709
	IL_06f6:                                                                        //ldc.i4				0x1e
	IL_06fb:            V_20=30;                                                    //stloc				V_20
	IL_06ff:            /*goto IL_000e;*/goto IL_0704;                              //br				IL_000e
	IL_0704:            goto IL_027b;                                               //br				IL_027b
	IL_0709:                                                                        //ldarg.0
	IL_070a:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_070f:            V_10=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.s				V_10
	IL_0711:                                                                        //ldc.i4				0xb
	IL_0716:            V_20=11;                                                    //stloc				V_20
	IL_071a:            /*goto IL_000e;*/goto IL_071f;                              //br				IL_000e
	IL_071f:                                                                        //ldloc.s				V_10
	IL_0721:            if(V_10==nullptr)goto IL_00d6;                              //brfalse				IL_00d6
	IL_0726:                                                                        //ldc.i4				0x11
	IL_072b:            V_20=17;                                                    //stloc				V_20
	IL_072f:            /*goto IL_000e;*/goto IL_0734;                              //br				IL_000e
	IL_0734:            goto IL_01ef;                                               //br				IL_01ef
	IL_0739:                                                                        //ldloc.1
	IL_073a:                                                                        //ldstr				L"\x5F23"
	IL_073f:                                                                        //ldloc				V_21
	IL_0743:            Temp_15=a(L"\x5F23",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0748:            Temp_16=System::String::Concat(V_1,Temp_15);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_074d:            V_1=Temp_16;                                                //stloc.1
	IL_074e:                                                                        //ldc.i4.0
	IL_074f:            V_2=0;                                                      //stloc.2
	IL_0750:                                                                        //ldc.i4				0x1
	IL_0755:            V_20=1;                                                     //stloc				V_20
	IL_0759:            /*goto IL_000e;*/goto IL_075e;                              //br				IL_000e
	IL_075e:            goto IL_02d2;                                               //br				IL_02d2
	IL_0763:                                                                        //ldloc.s				V_12
	IL_0765:            Temp_13=V_12->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_076a:            Temp_14=Root::T_x145::T_x1::M_x1(Temp_13);                  //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^)
	IL_076f:            return Temp_14;                                             //ret
	IL_0770:                                                                        //ldloc.s				V_11
	IL_0772:            Temp_9=V_11->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0777:            Temp_10=Root::T_x145::T_x1::M_x1(Temp_9);                   //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IType^)
	IL_077c:                                                                        //ldstr				L"\x0E23"
	IL_0781:                                                                        //ldloc				V_21
	IL_0785:            Temp_11=a(L"\x0E23",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_078a:            Temp_12=System::String::Concat(Temp_10,Temp_11);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_078f:            return Temp_12;                                             //ret
	IL_0790:                                                                        //ldstr				L"\x4423\x4625"
	IL_0795:                                                                        //ldloc				V_21
	IL_0799:            Temp_35=a(L"\x4423\x4625",V_21);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_079e:                                                                        //ldloc.s				V_15
	IL_07a0:            Temp_36=V_15->Position;                                     //callvirt				System::Int32 Reflector::CodeModel::IGenericArgument::get_Position()
	IL_07a5:            V_19=Temp_36;                                               //stloc.s				V_19
	IL_07a7:                                                                        //ldloca.s				V_19
	IL_07a9:            Temp_37=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_07ae:            Temp_38=V_19.ToString(safe_cast<System::IFormatProvider^>(Temp_37));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_07b3:            Temp_39=System::String::Concat(Temp_35,Temp_38);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_07b8:            return Temp_39;                                             //ret
	IL_07b9:                                                                        //ldloc.s				V_18
	IL_07bb:            return V_18;                                                //ret

}
inline System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_3=1;                                                      //stloc				V_3
	IL_0009:            goto IL_0033;                                               //br.s				IL_0033
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_00b5;case 1:goto IL_0087;case 2:goto IL_004a;case 3:goto IL_0058;case 4:goto IL_009e;};//switch				(IL_00b5,IL_0087,IL_004a,IL_0058,IL_009e)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_0=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0039:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_003e:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_003f:                                                                        //ldc.i4				0x2
	IL_0044:            V_2=2;                                                      //stloc				V_2
	IL_0048:            /*goto IL_000b;*/goto IL_004a;                              //br.s				IL_000b
	IL_004a:                                                                        //ldloc.0
	IL_004b:            if(V_0==nullptr)goto IL_00b7;                               //brfalse.s				IL_00b7
	IL_004d:                                                                        //ldc.i4				0x3
	IL_0052:            V_2=3;                                                      //stloc				V_2
	IL_0056:            /*goto IL_000b;*/goto IL_0058;                              //br.s				IL_000b
	IL_0058:            goto IL_0089;                                               //br.s				IL_0089
	IL_005a:                                                                        //ldloc.1
	IL_005b:                                                                        //ldloc.0
	IL_005c:            Temp_3=Root::T_x145::T_x1::M_x2(V_0);                       //call				System::String^ Root::T_x145::T_x1::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0061:            Temp_4=System::String::Concat(V_1,Temp_3);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0066:            return Temp_4;                                              //ret
	IL_0067:                                                                        //ldloc.1
	IL_0068:                                                                        //ldstr				L"\x311E"
	IL_006d:                                                                        //ldloc				V_3
	IL_0071:            Temp_1=a(L"\x311E",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0076:            Temp_2=System::String::Concat(V_1,Temp_1);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_007b:            V_1=Temp_2;                                                 //stloc.1
	IL_007c:                                                                        //ldc.i4				0x1
	IL_0081:            V_2=1;                                                      //stloc				V_2
	IL_0085:            /*goto IL_000b;*/goto IL_0087;                              //br.s				IL_000b
	IL_0087:            goto IL_005a;                                               //br.s				IL_005a
	IL_0089:                                                                        //ldloc.0
	IL_008a:            Temp_6=Root::T_x145::T_x1::M_x1(V_0);                       //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_008f:            V_1=Temp_6;                                                 //stloc.1
	IL_0090:                                                                        //ldc.i4				0x4
	IL_0095:            V_2=4;                                                      //stloc				V_2
	IL_0099:            /*goto IL_000b;*/goto IL_009e;                              //br				IL_000b
	IL_009e:                                                                        //ldloc.1
	IL_009f:            Temp_7=V_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:            if(Temp_7<=0)goto IL_005a;                                  //ble.s				IL_005a
	IL_00a7:                                                                        //ldc.i4				0x0
	IL_00ac:            V_2=0;                                                      //stloc				V_2
	IL_00b0:            /*goto IL_000b;*/goto IL_00b5;                              //br				IL_000b
	IL_00b5:            goto IL_0067;                                               //br.s				IL_0067
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:            Temp_5=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00bd:            return Temp_5;                                              //ret

}
inline System::String^ Root::T_x145::T_x1::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	array<System::Object^>^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::NotSupportedException^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_10 = nullptr;
	Reflector::CodeModel::MethodCallingConvention Temp_11 = (Reflector::CodeModel::MethodCallingConvention)0;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	array<System::String^>^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	array<System::String^>^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	Reflector::CodeModel::IType^ Temp_38 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::Int32 Temp_42 = 0;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::Boolean Temp_45 = false;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_5 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_6 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_7 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_8 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_9 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ V_10 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_11 = nullptr;
	System::String^ V_12 = nullptr;
	System::String^ V_13 = nullptr;
	array<System::String^>^ V_14 = nullptr;
	array<System::Object^>^ V_15 = nullptr;
	System::Int32 V_16 = 0;
	System::Int32 V_17 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_17=19;                                                    //stloc				V_17
	IL_0009:            goto IL_00af;                                               //br				IL_00af
	IL_000e:                                                                        //ldloc				V_16
	IL_0012:            switch(V_16){case 0:goto IL_05f6;case 1:goto IL_00d0;case 2:goto IL_05df;case 3:goto IL_0101;case 4:goto IL_01cf;case 5:goto IL_0137;case 6:goto IL_0310;case 7:goto IL_0157;case 8:goto IL_05a5;case 9:goto IL_039c;case 10:goto IL_0381;case 11:goto IL_00e5;case 12:goto IL_01e5;case 13:goto IL_05b8;case 14:goto IL_0421;case 15:goto IL_0520;case 16:goto IL_03eb;case 17:goto IL_017f;case 18:goto IL_03d8;case 19:goto IL_0278;case 20:goto IL_01bd;case 21:goto IL_0124;case 22:goto IL_0444;case 23:goto IL_016c;case 24:goto IL_028b;case 25:goto IL_0505;case 26:goto IL_0535;case 27:goto IL_0225;case 28:goto IL_047b;case 29:goto IL_0208;case 30:goto IL_0342;case 31:goto IL_01a2;case 32:goto IL_0454;case 33:goto IL_023f;case 34:goto IL_03b1;case 35:goto IL_040e;case 36:goto IL_0590;case 37:goto IL_0495;};//switch				(IL_05f6,IL_00d0,IL_05df,IL_0101,IL_01cf,IL_0137,IL_0310,IL_0157,IL_05a5,IL_039c,IL_0381,IL_00e5,IL_01e5,IL_05b8,IL_0421,IL_0520,IL_03eb,IL_017f,IL_03d8,IL_0278,IL_01bd,IL_0124,IL_0444,IL_016c,IL_028b,IL_0505,IL_0535,IL_0225,IL_047b,IL_0208,IL_0342,IL_01a2,IL_0454,IL_023f,IL_03b1,IL_040e,IL_0590,IL_0495)
	IL_00af:                                                                        //ldnull
	IL_00b0:            V_0=safe_cast<System::String^>(nullptr);                    //stloc.0
	IL_00b1:                                                                        //ldnull
	IL_00b2:            V_1=safe_cast<System::String^>(nullptr);                    //stloc.1
	IL_00b3:                                                                        //ldnull
	IL_00b4:            V_2=safe_cast<System::String^>(nullptr);                    //stloc.2
	IL_00b5:                                                                        //ldnull
	IL_00b6:            V_3=safe_cast<System::String^>(nullptr);                    //stloc.3
	IL_00b7:                                                                        //ldnull
	IL_00b8:            V_4=safe_cast<System::String^>(nullptr);                    //stloc.s				V_4
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_00c0:            V_5=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.s				V_5
	IL_00c2:                                                                        //ldc.i4				0x1
	IL_00c7:            V_16=1;                                                     //stloc				V_16
	IL_00cb:            /*goto IL_000e;*/goto IL_00d0;                              //br				IL_000e
	IL_00d0:                                                                        //ldloc.s				V_5
	IL_00d2:            if(V_5==nullptr)goto IL_057a;                               //brfalse				IL_057a
	IL_00d7:                                                                        //ldc.i4				0xb
	IL_00dc:            V_16=11;                                                    //stloc				V_16
	IL_00e0:            /*goto IL_000e;*/goto IL_00e5;                              //br				IL_000e
	IL_00e5:            goto IL_0315;                                               //br				IL_0315
	IL_00ea:                                                                        //ldloc.s				V_13
	IL_00ec:            Temp_0=System::String::IsInterned(V_13);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_00f1:            V_13=Temp_0;                                                //stloc.s				V_13
	IL_00f3:                                                                        //ldc.i4				0x3
	IL_00f8:            V_16=3;                                                     //stloc				V_16
	IL_00fc:            /*goto IL_000e;*/goto IL_0101;                              //br				IL_000e
	IL_0101:                                                                        //ldloc.s				V_13
	IL_0103:                                                                        //ldstr				L"\x6530\x0932"
	IL_0108:                                                                        //ldloc				V_17
	IL_010c:            Temp_6=a(L"\x6530\x0932",V_17);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0111:            if(V_13==Temp_6)goto IL_020d;                               //beq				IL_020d
	IL_0116:                                                                        //ldc.i4				0x15
	IL_011b:            V_16=21;                                                    //stloc				V_16
	IL_011f:            /*goto IL_000e;*/goto IL_0124;                              //br				IL_000e
	IL_0124:            goto IL_01d7;                                               //br				IL_01d7
	IL_0129:                                                                        //ldc.i4				0x5
	IL_012e:            V_16=5;                                                     //stloc				V_16
	IL_0132:            /*goto IL_000e;*/goto IL_0137;                              //br				IL_000e
	IL_0137:            Temp_13=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_013c:            Temp_53=Temp_13;goto IL_0485;                               //br				IL_0485
	IL_0141:                                                                        //ldarg.0
	IL_0142:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_0147:            V_8=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(A_0);//stloc.s				V_8
	IL_0149:                                                                        //ldc.i4				0x7
	IL_014e:            V_16=7;                                                     //stloc				V_16
	IL_0152:            /*goto IL_000e;*/goto IL_0157;                              //br				IL_000e
	IL_0157:                                                                        //ldloc.s				V_8
	IL_0159:            if(V_8==nullptr)goto IL_0386;                               //brfalse				IL_0386
	IL_015e:                                                                        //ldc.i4				0x17
	IL_0163:            V_16=23;                                                    //stloc				V_16
	IL_0167:            /*goto IL_000e;*/goto IL_016c;                              //br				IL_000e
	IL_016c:            goto IL_0244;                                               //br				IL_0244
	IL_0171:                                                                        //ldc.i4				0x11
	IL_0176:            V_16=17;                                                    //stloc				V_16
	IL_017a:            /*goto IL_000e;*/goto IL_017f;                              //br				IL_000e
	IL_017f:                                                                        //ldloc.s				V_13
	IL_0181:                                                                        //ldstr				L"\x6130\x0932"
	IL_0186:                                                                        //ldloc				V_17
	IL_018a:            Temp_33=a(L"\x6130\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018f:            if(V_13==Temp_33)goto IL_0290;                              //beq				IL_0290
	IL_0194:                                                                        //ldc.i4				0x1f
	IL_0199:            V_16=31;                                                    //stloc				V_16
	IL_019d:            /*goto IL_000e;*/goto IL_01a2;                              //br				IL_000e
	IL_01a2:            goto IL_027d;                                               //br				IL_027d
	IL_01a7:                                                                        //ldarg.0
	IL_01a8:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_01ad:            V_7=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.s				V_7
	IL_01af:                                                                        //ldc.i4				0x14
	IL_01b4:            V_16=20;                                                    //stloc				V_16
	IL_01b8:            /*goto IL_000e;*/goto IL_01bd;                              //br				IL_000e
	IL_01bd:                                                                        //ldloc.s				V_7
	IL_01bf:            if(V_7==nullptr)goto IL_0141;                               //brfalse.s				IL_0141
	IL_01c1:                                                                        //ldc.i4				0x4
	IL_01c6:            V_16=4;                                                     //stloc				V_16
	IL_01ca:            /*goto IL_000e;*/goto IL_01cf;                              //br				IL_000e
	IL_01cf:            goto IL_01d2;                                               //br.s				IL_01d2
	IL_01d1:                                                                        //break
	IL_01d2:            goto IL_0347;                                               //br				IL_0347
	IL_01d7:                                                                        //ldc.i4				0xc
	IL_01dc:            V_16=12;                                                    //stloc				V_16
	IL_01e0:            /*goto IL_000e;*/goto IL_01e5;                              //br				IL_000e
	IL_01e5:                                                                        //ldloc.s				V_13
	IL_01e7:                                                                        //ldstr				L"\x7430\x0932"
	IL_01ec:                                                                        //ldloc				V_17
	IL_01f0:            Temp_19=a(L"\x7430\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f5:            if(V_13==Temp_19)goto IL_053a;                              //beq				IL_053a
	IL_01fa:                                                                        //ldc.i4				0x1d
	IL_01ff:            V_16=29;                                                    //stloc				V_16
	IL_0203:            /*goto IL_000e;*/goto IL_0208;                              //br				IL_000e
	IL_0208:            goto IL_0413;                                               //br				IL_0413
	IL_020d:                                                                        //ldloc.0
	IL_020e:                                                                        //ldloc.s				V_12
	IL_0210:                                                                        //ldloc.2
	IL_0211:            Temp_7=System::String::Concat(V_0,V_12,V_2);                //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0216:            return Temp_7;                                              //ret
	IL_0217:                                                                        //ldc.i4				0x1b
	IL_021c:            V_16=27;                                                    //stloc				V_16
	IL_0220:            /*goto IL_000e;*/goto IL_0225;                              //br				IL_000e
	IL_0225:                                                                        //ldloc.1
	IL_0226:            Temp_42=V_1->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_022b:                                                                        //ldc.i4.0
	IL_022c:            if(Temp_42>0)goto IL_05aa;                                  //bgt				IL_05aa
	IL_0231:                                                                        //ldc.i4				0x21
	IL_0236:            V_16=33;                                                    //stloc				V_16
	IL_023a:            /*goto IL_000e;*/goto IL_023f;                              //br				IL_000e
	IL_023f:            goto IL_0129;                                               //br				IL_0129
	IL_0244:                                                                        //ldstr				L"\x6130\x0932"
	IL_0249:                                                                        //ldloc				V_17
	IL_024d:            Temp_34=a(L"\x6130\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0252:            V_0=Temp_34;                                                //stloc.0
	IL_0253:                                                                        //ldloc.s				V_8
	IL_0255:            Temp_35=safe_cast<Reflector::CodeModel::IMemberReference^>(V_8)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_025a:            V_3=Temp_35;                                                //stloc.3
	IL_025b:                                                                        //ldloc.s				V_8
	IL_025d:            Temp_36=safe_cast<Reflector::CodeModel::IPropertyReference^>(V_8)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0262:                                                                        //ldc.i4.0
	IL_0263:            Temp_37=Root::T_x145::T_x1::M_x1(Temp_36,safe_cast<Reflector::CodeModel::MethodCallingConvention>(0));//call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^,Reflector::CodeModel::MethodCallingConvention)
	IL_0268:            V_4=Temp_37;                                                //stloc.s				V_4
	IL_026a:                                                                        //ldc.i4				0x13
	IL_026f:            V_16=19;                                                    //stloc				V_16
	IL_0273:            /*goto IL_000e;*/goto IL_0278;                              //br				IL_000e
	IL_0278:            goto IL_0386;                                               //br				IL_0386
	IL_027d:                                                                        //ldc.i4				0x18
	IL_0282:            V_16=24;                                                    //stloc				V_16
	IL_0286:            /*goto IL_000e;*/goto IL_028b;                              //br				IL_000e
	IL_028b:            goto IL_05fb;                                               //br				IL_05fb
	IL_0290:                                                                        //ldc.i4.6
	IL_0291:            Temp_28=gcnew array<System::String^>(6);                    //newarr				System::String
	IL_0296:            V_14=Temp_28;                                               //stloc.s				V_14
	IL_0298:                                                                        //ldloc.s				V_14
	IL_029a:                                                                        //ldc.i4.0
	IL_029b:                                                                        //ldloc.0
	IL_029c:            V_14[0]=V_0;                                                //stelem.ref
	IL_029d:                                                                        //ldloc.s				V_14
	IL_029f:                                                                        //ldc.i4.1
	IL_02a0:                                                                        //ldloc.s				V_12
	IL_02a2:            V_14[1]=V_12;                                               //stelem.ref
	IL_02a3:                                                                        //ldloc.s				V_14
	IL_02a5:                                                                        //ldc.i4.2
	IL_02a6:                                                                        //ldloc.2
	IL_02a7:            V_14[2]=V_2;                                                //stelem.ref
	IL_02a8:                                                                        //ldloc.s				V_14
	IL_02aa:                                                                        //ldc.i4.3
	IL_02ab:                                                                        //ldstr				L"\x1F30"
	IL_02b0:                                                                        //ldloc				V_17
	IL_02b4:            Temp_29=a(L"\x1F30",V_17);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b9:            V_14[3]=Temp_29;                                            //stelem.ref
	IL_02ba:                                                                        //ldloc.s				V_14
	IL_02bc:                                                                        //ldc.i4.4
	IL_02bd:                                                                        //ldloc.3
	IL_02be:                                                                        //ldc.i4.s				46
	IL_02c0:                                                                        //ldc.i4.s				35
	IL_02c2:            Temp_30=V_3->Replace(safe_cast<System::Char>((System::Char)46),safe_cast<System::Char>((System::Char)35));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_02c7:            V_14[4]=Temp_30;                                            //stelem.ref
	IL_02c8:                                                                        //ldloc.s				V_14
	IL_02ca:                                                                        //ldc.i4.5
	IL_02cb:                                                                        //ldloc.s				V_4
	IL_02cd:                                                                        //ldc.i4.s				38
	IL_02cf:                                                                        //ldc.i4.s				64
	IL_02d1:            Temp_31=V_4->Replace(safe_cast<System::Char>((System::Char)38),safe_cast<System::Char>((System::Char)64));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_02d6:            V_14[5]=Temp_31;                                            //stelem.ref
	IL_02d7:                                                                        //ldloc.s				V_14
	IL_02d9:            Temp_32=System::String::Concat(V_14);                       //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_02de:            return Temp_32;                                             //ret
	IL_02df:                                                                        //ldloc.s				V_10
	IL_02e1:            Temp_38=safe_cast<Reflector::CodeModel::IMemberReference^>(V_10)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_02e6:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_02eb:            Temp_39=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_38)->Resolve();//callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_02f0:            V_11=Temp_39;                                               //stloc.s				V_11
	IL_02f2:                                                                        //ldloc.s				V_11
	IL_02f4:            Temp_40=Root::T_x145::T_x1::M_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(V_11));//call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_02f9:            V_1=Temp_40;                                                //stloc.1
	IL_02fa:                                                                        //ldloc.s				V_11
	IL_02fc:            Temp_41=Root::T_x145::T_x1::M_x2(safe_cast<Reflector::CodeModel::ITypeReference^>(V_11));//call				System::String^ Root::T_x145::T_x1::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0301:            V_2=Temp_41;                                                //stloc.2
	IL_0302:                                                                        //ldc.i4				0x6
	IL_0307:            V_16=6;                                                     //stloc				V_16
	IL_030b:            /*goto IL_000e;*/goto IL_0310;                              //br				IL_000e
	IL_0310:            goto IL_0446;                                               //br				IL_0446
	IL_0315:                                                                        //ldstr				L"\x6530\x0932"
	IL_031a:                                                                        //ldloc				V_17
	IL_031e:            Temp_16=a(L"\x6530\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0323:            V_0=Temp_16;                                                //stloc.0
	IL_0324:                                                                        //ldloc.s				V_5
	IL_0326:            Temp_17=Root::T_x145::T_x1::M_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(V_5));//call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_032b:            V_1=Temp_17;                                                //stloc.1
	IL_032c:                                                                        //ldloc.s				V_5
	IL_032e:            Temp_18=Root::T_x145::T_x1::M_x2(safe_cast<Reflector::CodeModel::ITypeReference^>(V_5));//call				System::String^ Root::T_x145::T_x1::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0333:            V_2=Temp_18;                                                //stloc.2
	IL_0334:                                                                        //ldc.i4				0x1e
	IL_0339:            V_16=30;                                                    //stloc				V_16
	IL_033d:            /*goto IL_000e;*/goto IL_0342;                              //br				IL_000e
	IL_0342:            goto IL_057a;                                               //br				IL_057a
	IL_0347:                                                                        //ldstr				L"\x7C30\x0932"
	IL_034c:                                                                        //ldloc				V_17
	IL_0350:            Temp_8=a(L"\x7C30\x0932",V_17);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0355:            V_0=Temp_8;                                                 //stloc.0
	IL_0356:                                                                        //ldloc.s				V_7
	IL_0358:            Temp_9=Root::T_x145::T_x1::M_x1(V_7);                       //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_035d:            V_3=Temp_9;                                                 //stloc.3
	IL_035e:                                                                        //ldloc.s				V_7
	IL_0360:            Temp_10=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_7)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0365:                                                                        //ldloc.s				V_7
	IL_0367:            Temp_11=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_7)->CallingConvention;//callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_036c:            Temp_12=Root::T_x145::T_x1::M_x1(Temp_10,Temp_11);          //call				System::String^ Root::T_x145::T_x1::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^,Reflector::CodeModel::MethodCallingConvention)
	IL_0371:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_0373:                                                                        //ldc.i4				0xa
	IL_0378:            V_16=10;                                                    //stloc				V_16
	IL_037c:            /*goto IL_000e;*/goto IL_0381;                              //br				IL_000e
	IL_0381:            goto IL_0141;                                               //br				IL_0141
	IL_0386:                                                                        //ldarg.0
	IL_0387:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_038c:            V_9=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(A_0);//stloc.s				V_9
	IL_038e:                                                                        //ldc.i4				0x9
	IL_0393:            V_16=9;                                                     //stloc				V_16
	IL_0397:            /*goto IL_000e;*/goto IL_039c;                              //br				IL_000e
	IL_039c:                                                                        //ldloc.s				V_9
	IL_039e:            if(V_9==nullptr)goto IL_050a;                               //brfalse				IL_050a
	IL_03a3:                                                                        //ldc.i4				0x22
	IL_03a8:            V_16=34;                                                    //stloc				V_16
	IL_03ac:            /*goto IL_000e;*/goto IL_03b1;                              //br				IL_000e
	IL_03b1:            goto IL_03b3;                                               //br.s				IL_03b3
	IL_03b3:                                                                        //ldstr				L"\x7430\x0932"
	IL_03b8:                                                                        //ldloc				V_17
	IL_03bc:            Temp_46=a(L"\x7430\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c1:            V_0=Temp_46;                                                //stloc.0
	IL_03c2:                                                                        //ldloc.s				V_9
	IL_03c4:            Temp_47=safe_cast<Reflector::CodeModel::IMemberReference^>(V_9)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_03c9:            V_3=Temp_47;                                                //stloc.3
	IL_03ca:                                                                        //ldc.i4				0x12
	IL_03cf:            V_16=18;                                                    //stloc				V_16
	IL_03d3:            /*goto IL_000e;*/goto IL_03d8;                              //br				IL_000e
	IL_03d8:            goto IL_050a;                                               //br				IL_050a
	IL_03dd:                                                                        //ldc.i4				0x10
	IL_03e2:            V_16=16;                                                    //stloc				V_16
	IL_03e6:            /*goto IL_000e;*/goto IL_03eb;                              //br				IL_000e
	IL_03eb:                                                                        //ldloc.s				V_13
	IL_03ed:                                                                        //ldstr				L"\x7C30\x0932"
	IL_03f2:                                                                        //ldloc				V_17
	IL_03f6:            Temp_27=a(L"\x7C30\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03fb:            if(V_13==Temp_27)goto IL_0290;                              //beq				IL_0290
	IL_0400:                                                                        //ldc.i4				0x23
	IL_0405:            V_16=35;                                                    //stloc				V_16
	IL_0409:            /*goto IL_000e;*/goto IL_040e;                              //br				IL_000e
	IL_040e:            goto IL_0171;                                               //br				IL_0171
	IL_0413:                                                                        //ldc.i4				0xe
	IL_0418:            V_16=14;                                                    //stloc				V_16
	IL_041c:            /*goto IL_000e;*/goto IL_0421;                              //br				IL_000e
	IL_0421:                                                                        //ldloc.s				V_13
	IL_0423:                                                                        //ldstr				L"\x7730\x0932"
	IL_0428:                                                                        //ldloc				V_17
	IL_042c:            Temp_26=a(L"\x7730\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0431:            if(V_13==Temp_26)goto IL_053a;                              //beq				IL_053a
	IL_0436:                                                                        //ldc.i4				0x16
	IL_043b:            V_16=22;                                                    //stloc				V_16
	IL_043f:            /*goto IL_000e;*/goto IL_0444;                              //br				IL_000e
	IL_0444:            goto IL_03dd;                                               //br.s				IL_03dd
	IL_0446:                                                                        //ldc.i4				0x20
	IL_044b:            V_16=32;                                                    //stloc				V_16
	IL_044f:            /*goto IL_000e;*/goto IL_0454;                              //br				IL_000e
	IL_0454:                                                                        //ldloc.0
	IL_0455:                                                                        //ldstr				L"\x7F30\x0932"
	IL_045a:                                                                        //ldloc				V_17
	IL_045e:            Temp_44=a(L"\x7F30\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0463:            Temp_45=(V_0 == Temp_44);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0468:            if(!Temp_45)goto IL_0217;                                   //brfalse				IL_0217
	IL_046d:                                                                        //ldc.i4				0x1c
	IL_0472:            V_16=28;                                                    //stloc				V_16
	IL_0476:            /*goto IL_000e;*/goto IL_047b;                              //br				IL_000e
	IL_047b:            goto IL_047d;                                               //br.s				IL_047d
	IL_047d:                                                                        //ldloc.0
	IL_047e:                                                                        //ldloc.1
	IL_047f:            Temp_43=System::String::Concat(V_0,V_1);                    //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0484:            return Temp_43;                                             //ret
	IL_0485:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_12
	IL_0487:                                                                        //ldc.i4				0x25
	IL_048c:            V_16=37;                                                    //stloc				V_16
	IL_0490:            /*goto IL_000e;*/goto IL_0495;                              //br				IL_000e
	IL_0495:                                                                        //ldstr				L"\x6530\x0932"
	IL_049a:                                                                        //ldloc				V_17
	IL_049e:            Temp_48=a(L"\x6530\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04a3:                                                                        //ldstr				L"\x7430\x0932"
	IL_04a8:                                                                        //ldloc				V_17
	IL_04ac:            Temp_49=a(L"\x7430\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04b1:                                                                        //ldstr				L"\x7730\x0932"
	IL_04b6:                                                                        //ldloc				V_17
	IL_04ba:            Temp_50=a(L"\x7730\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04bf:                                                                        //ldstr				L"\x7C30\x0932"
	IL_04c4:                                                                        //ldloc				V_17
	IL_04c8:            Temp_51=a(L"\x7C30\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04cd:                                                                        //ldstr				L"\x6130\x0932"
	IL_04d2:                                                                        //ldloc				V_17
	IL_04d6:            Temp_52=a(L"\x6130\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04db:            goto IL_05d1;                                               //leave				IL_05d1
	IL_04e0:                                                                        //ldstr				L"\x7730\x0932"
	IL_04e5:                                                                        //ldloc				V_17
	IL_04e9:            Temp_14=a(L"\x7730\x0932",V_17);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04ee:            V_0=Temp_14;                                                //stloc.0
	IL_04ef:                                                                        //ldloc.s				V_6
	IL_04f1:            Temp_15=safe_cast<Reflector::CodeModel::IMemberReference^>(V_6)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_04f6:            V_3=Temp_15;                                                //stloc.3
	IL_04f7:                                                                        //ldc.i4				0x19
	IL_04fc:            V_16=25;                                                    //stloc				V_16
	IL_0500:            /*goto IL_000e;*/goto IL_0505;                              //br				IL_000e
	IL_0505:            goto IL_01a7;                                               //br				IL_01a7
	IL_050a:                                                                        //ldarg.0
	IL_050b:                                                                        //isinst				Reflector::CodeModel::IMemberDeclaration
	IL_0510:            V_10=dynamic_cast<Reflector::CodeModel::IMemberDeclaration^>(A_0);//stloc.s				V_10
	IL_0512:                                                                        //ldc.i4				0xf
	IL_0517:            V_16=15;                                                    //stloc				V_16
	IL_051b:            /*goto IL_000e;*/goto IL_0520;                              //br				IL_000e
	IL_0520:                                                                        //ldloc.s				V_10
	IL_0522:            if(V_10==nullptr)goto IL_0446;                              //brfalse				IL_0446
	IL_0527:                                                                        //ldc.i4				0x1a
	IL_052c:            V_16=26;                                                    //stloc				V_16
	IL_0530:            /*goto IL_000e;*/goto IL_0535;                              //br				IL_000e
	IL_0535:            goto IL_02df;                                               //br				IL_02df
	IL_053a:                                                                        //ldc.i4.5
	IL_053b:            Temp_20=gcnew array<System::String^>(5);                    //newarr				System::String
	IL_0540:            V_14=Temp_20;                                               //stloc.s				V_14
	IL_0542:                                                                        //ldloc.s				V_14
	IL_0544:                                                                        //ldc.i4.0
	IL_0545:                                                                        //ldloc.0
	IL_0546:            V_14[0]=V_0;                                                //stelem.ref
	IL_0547:                                                                        //ldloc.s				V_14
	IL_0549:                                                                        //ldc.i4.1
	IL_054a:                                                                        //ldloc.s				V_12
	IL_054c:            V_14[1]=V_12;                                               //stelem.ref
	IL_054d:                                                                        //ldloc.s				V_14
	IL_054f:                                                                        //ldc.i4.2
	IL_0550:                                                                        //ldloc.2
	IL_0551:            V_14[2]=V_2;                                                //stelem.ref
	IL_0552:                                                                        //ldloc.s				V_14
	IL_0554:                                                                        //ldc.i4.3
	IL_0555:                                                                        //ldstr				L"\x1F30"
	IL_055a:                                                                        //ldloc				V_17
	IL_055e:            Temp_21=a(L"\x1F30",V_17);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0563:            V_14[3]=Temp_21;                                            //stelem.ref
	IL_0564:                                                                        //ldloc.s				V_14
	IL_0566:                                                                        //ldc.i4.4
	IL_0567:                                                                        //ldloc.3
	IL_0568:                                                                        //ldc.i4.s				46
	IL_056a:                                                                        //ldc.i4.s				35
	IL_056c:            Temp_22=V_3->Replace(safe_cast<System::Char>((System::Char)46),safe_cast<System::Char>((System::Char)35));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_0571:            V_14[4]=Temp_22;                                            //stelem.ref
	IL_0572:                                                                        //ldloc.s				V_14
	IL_0574:            Temp_23=System::String::Concat(V_14);                       //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0579:            return Temp_23;                                             //ret
	IL_057a:                                                                        //ldarg.0
	IL_057b:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_0580:            V_6=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.s				V_6
	IL_0582:                                                                        //ldc.i4				0x24
	IL_0587:            V_16=36;                                                    //stloc				V_16
	IL_058b:            /*goto IL_000e;*/goto IL_0590;                              //br				IL_000e
	IL_0590:                                                                        //ldloc.s				V_6
	IL_0592:            if(V_6==nullptr)goto IL_01a7;                               //brfalse				IL_01a7
	IL_0597:                                                                        //ldc.i4				0x8
	IL_059c:            V_16=8;                                                     //stloc				V_16
	IL_05a0:            /*goto IL_000e;*/goto IL_05a5;                              //br				IL_000e
	IL_05a5:            goto IL_04e0;                                               //br				IL_04e0
	IL_05aa:                                                                        //ldc.i4				0xd
	IL_05af:            V_16=13;                                                    //stloc				V_16
	IL_05b3:            /*goto IL_000e;*/goto IL_05b8;                              //br				IL_000e
	IL_05b8:                                                                        //ldloc.1
	IL_05b9:                                                                        //ldstr				L"\x1F30"
	IL_05be:                                                                        //ldloc				V_17
	IL_05c2:            Temp_24=a(L"\x1F30",V_17);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05c7:            Temp_25=System::String::Concat(V_1,Temp_24);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_05cc:            Temp_53=Temp_25;goto IL_0485;                               //br				IL_0485
	IL_05d1:                                                                        //ldc.i4				0x2
	IL_05d6:            V_16=2;                                                     //stloc				V_16
	IL_05da:            /*goto IL_000e;*/goto IL_05df;                              //br				IL_000e
	IL_05df:                                                                        //ldloc.0
	IL_05e0:                                                                        //dup
	IL_05e1:            V_13=V_0;                                                   //stloc.s				V_13
	IL_05e3:            if(V_13==nullptr)goto IL_05fb;                              //brfalse				IL_05fb
	IL_05e8:                                                                        //ldc.i4				0x0
	IL_05ed:            V_16=0;                                                     //stloc				V_16
	IL_05f1:            /*goto IL_000e;*/goto IL_05f6;                              //br				IL_000e
	IL_05f6:            goto IL_00ea;                                               //br				IL_00ea
	IL_05fb:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0600:                                                                        //ldstr				L"\x6130\x4132\x5034\x5136\x5038\x433A\x1D3C\x183E\x3A40\x7342\x3844\x6046\x6948\x254A\x224C\x3B4E\x7150\x2052\x2054\x2756\x2958\x345A\x2F5C\x2B5E\x0460\x0762\x4B64"
	IL_0605:                                                                        //ldloc				V_17
	IL_0609:            Temp_2=a(L"\x6130\x4132\x5034\x5136\x5038\x433A\x1D3C\x183E\x3A40\x7342\x3844\x6046\x6948\x254A\x224C\x3B4E\x7150\x2052\x2054\x2756\x2958\x345A\x2F5C\x2B5E\x0460\x0762\x4B64",V_17);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_060e:                                                                        //ldc.i4.1
	IL_060f:            Temp_3=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0614:            V_15=Temp_3;                                                //stloc.s				V_15
	IL_0616:                                                                        //ldloc.s				V_15
	IL_0618:                                                                        //ldc.i4.0
	IL_0619:                                                                        //ldloc.0
	IL_061a:            V_15[0]=safe_cast<System::Object^>(V_0);                    //stelem.ref
	IL_061b:                                                                        //ldloc.s				V_15
	IL_061d:            Temp_4=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_1),Temp_2,V_15);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0622:            Temp_5=gcnew System::NotSupportedException(Temp_4);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0627:            throw Temp_5;                                               //throw

}
inline System::String^ Root::T_x145::T_x1::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Object^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Globalization::CultureInfo^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_3=10;                                                     //stloc				V_3
	IL_0009:            goto IL_0028;                                               //br.s				IL_0028
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0092;case 1:goto IL_00a3;case 2:goto IL_004b;case 3:goto IL_00c1;case 4:goto IL_005c;};//switch				(IL_0092,IL_00a3,IL_004b,IL_00c1,IL_005c)
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_002e:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0033:            V_0=Temp_1;                                                 //stloc.0
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_2=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_003a:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_003f:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2);//stloc.1
	IL_0040:                                                                        //ldc.i4				0x2
	IL_0045:            V_2=2;                                                      //stloc				V_2
	IL_0049:            /*goto IL_000b;*/goto IL_004b;                              //br.s				IL_000b
	IL_004b:            goto IL_004e;                                               //br.s				IL_004e
	IL_004d:                                                                        //break
	IL_004e:                                                                        //ldloc.1
	IL_004f:            if(V_1==nullptr)goto IL_0084;                               //brfalse.s				IL_0084
	IL_0051:                                                                        //ldc.i4				0x4
	IL_0056:            V_2=4;                                                      //stloc				V_2
	IL_005a:            /*goto IL_000b;*/goto IL_005c;                              //br.s				IL_000b
	IL_005c:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_4=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0064:                                                                        //ldstr				L"\x4827"
	IL_0069:                                                                        //ldloc				V_3
	IL_006d:            Temp_5=a(L"\x4827",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0072:                                                                        //ldloca.s				V_0
	IL_0074:            Temp_6=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0079:            Temp_7=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_6));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_007e:            Temp_8=System::String::Concat(Temp_4,Temp_5,Temp_7);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0083:            return Temp_8;                                              //ret
	IL_0084:                                                                        //ldc.i4				0x0
	IL_0089:            V_2=0;                                                      //stloc				V_2
	IL_008d:            /*goto IL_000b;*/goto IL_0092;                              //br				IL_000b
	IL_0092:                                                                        //ldloc.0
	IL_0093:            if(V_0==0)goto IL_00c3;                                     //brfalse.s				IL_00c3
	IL_0095:                                                                        //ldc.i4				0x1
	IL_009a:            V_2=1;                                                      //stloc				V_2
	IL_009e:            /*goto IL_000b;*/goto IL_00a3;                              //br				IL_000b
	IL_00a3:            goto IL_005e;                                               //br.s				IL_005e
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:            Temp_9=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_00ac:            Temp_10=safe_cast<System::Collections::ICollection^>(Temp_9)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00b1:                                                                        //sub
	IL_00b2:            V_0=(V_0 - Temp_10);                                        //stloc.0
	IL_00b3:                                                                        //ldc.i4				0x3
	IL_00b8:            V_2=3;                                                      //stloc				V_2
	IL_00bc:            /*goto IL_000b;*/goto IL_00c1;                              //br				IL_000b
	IL_00c1:            goto IL_0084;                                               //br.s				IL_0084
	IL_00c3:                                                                        //ldarg.0
	IL_00c4:            Temp_3=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00c9:            return Temp_3;                                              //ret

}
