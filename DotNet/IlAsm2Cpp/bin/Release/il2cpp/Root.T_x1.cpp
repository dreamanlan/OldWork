#include "global_xref.h"

inline Root::T_x1::T_x1(Reflector::CodeModel::IResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IResource^ Root::T_x1 F_x1
	IL_000d:            return;                                                     //ret

}
inline array<System::Byte>^ Root::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IResource^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	System::Int64 Temp_2 = 0;
	array<System::Byte>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::IO::BinaryReader^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<System::Byte>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Reflector::CodeModel::IModule^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	Reflector::CodeModel::IResource^ Temp_17 = nullptr;
	System::IO::FileStream^ Temp_18 = nullptr;
	System::Boolean Temp_19 = false;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	Reflector::CodeModel::IEmbeddedResource^ V_1 = nullptr;
	Reflector::CodeModel::IFileResource^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::IO::Stream^ V_4 = nullptr;
	System::IO::BinaryReader^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0055;case 1:goto IL_0201;case 2:goto IL_01e4;case 3:goto IL_0044;case 4:goto IL_01d0;case 5:goto IL_01b4;case 6:goto IL_019d;case 7:goto IL_0187;};//switch				(IL_0055,IL_0201,IL_01e4,IL_0044,IL_01d0,IL_01b4,IL_019d,IL_0187)
	IL_002b:                                                                        //ldnull
	IL_002c:            V_0=safe_cast<array<System::Byte>^>(nullptr);               //stloc.0
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IResource^ Root::T_x1 F_x1
	IL_0033:                                                                        //isinst				Reflector::CodeModel::IEmbeddedResource
	IL_0038:            V_1=dynamic_cast<Reflector::CodeModel::IEmbeddedResource^>(Temp_0);//stloc.1
	IL_0039:                                                                        //ldc.i4				0x3
	IL_003e:            V_7=3;                                                      //stloc				V_7
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:                                                                        //ldloc.1
	IL_0045:            if(V_1==nullptr)goto IL_01b6;                               //brfalse				IL_01b6
	IL_004a:                                                                        //ldc.i4				0x0
	IL_004f:            V_7=0;                                                      //stloc				V_7
	IL_0053:            /*goto IL_0002;*/goto IL_0055;                              //br.s				IL_0002
	IL_0055:            goto IL_0058;                                               //br.s				IL_0058
	IL_0057:                                                                        //break
	IL_0058:            goto IL_019f;                                               //br				IL_019f
	IL_005801:          try{
	IL_005d:                                                                        //ldc.i4				0x1
	IL_0062:            V_7=1;                                                      //stloc				V_7
	IL_0066:            /*goto IL_006a;*/goto IL_0068;                              //br.s				IL_006a
	IL_0068:            goto IL_0087;                                               //br.s				IL_0087
	IL_006a:                                                                        //ldloc				V_7
	IL_006e:            switch(V_7){case 0:goto IL_00f9;case 1:goto IL_0068;case 2:goto IL_0109;case 3:goto IL_00ce;case 4:goto IL_009a;};//switch				(IL_00f9,IL_0068,IL_0109,IL_00ce,IL_009a)
	IL_0087:                                                                        //ldloc.2
	IL_0088:            Temp_6=V_2->Offset;                                         //callvirt				System::Int32 Reflector::CodeModel::IFileResource::get_Offset()
	IL_008d:            if(Temp_6!=0)goto IL_009c;                                  //brtrue.s				IL_009c
	IL_008f:                                                                        //ldc.i4				0x4
	IL_0094:            V_7=4;                                                      //stloc				V_7
	IL_0098:            /*goto IL_006a;*/goto IL_009a;                              //br.s				IL_006a
	IL_009a:            goto IL_00d0;                                               //br.s				IL_00d0
	IL_009c:                                                                        //ldloc.s				V_4
	IL_009e:            Temp_7=gcnew System::IO::BinaryReader(V_4);                 //newobj				void System::IO::BinaryReader::.ctor(System::IO::Stream^)
	IL_00a3:            V_5=Temp_7;                                                 //stloc.s				V_5
	IL_00a5:                                                                        //ldloc.s				V_5
	IL_00a7:            Temp_8=V_5->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_00ac:            V_6=Temp_8;                                                 //stloc.s				V_6
	IL_00ae:                                                                        //ldloc.s				V_6
	IL_00b0:                                                                        //conv.ovf.u4
	IL_00b1:            Temp_9=gcnew array<System::Byte>(safe_cast<System::UInt32>(V_6));//newarr				System::Byte
	IL_00b6:            V_0=Temp_9;                                                 //stloc.0
	IL_00b7:                                                                        //ldloc.s				V_4
	IL_00b9:                                                                        //ldloc.0
	IL_00ba:                                                                        //ldc.i4.0
	IL_00bb:                                                                        //ldloc.s				V_6
	IL_00bd:            Temp_10=V_4->Read(V_0,safe_cast<System::Int32>(0),V_6);     //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_00c2:                                                                        //pop
	IL_00c3:                                                                        //ldc.i4				0x3
	IL_00c8:            V_7=3;                                                      //stloc				V_7
	IL_00cc:            /*goto IL_006a;*/goto IL_00ce;                              //br.s				IL_006a
	IL_00ce:            goto IL_00fb;                                               //br.s				IL_00fb
	IL_00d0:                                                                        //ldloc.s				V_4
	IL_00d2:            Temp_2=V_4->Length;                                         //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_00d7:                                                                        //conv.ovf.u4
	IL_00d8:            Temp_3=gcnew array<System::Byte>(safe_cast<System::UInt32>(Temp_2));//newarr				System::Byte
	IL_00dd:            V_0=Temp_3;                                                 //stloc.0
	IL_00de:                                                                        //ldloc.s				V_4
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:                                                                        //ldc.i4.0
	IL_00e2:                                                                        //ldloc.0
	IL_00e3:            Temp_4=V_0->Length;                                         //ldlen
	IL_00e4:                                                                        //conv.i4
	IL_00e5:            Temp_5=V_4->Read(V_0,safe_cast<System::Int32>(0),Temp_4);   //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_00ea:                                                                        //pop
	IL_00eb:                                                                        //ldc.i4				0x0
	IL_00f0:            V_7=0;                                                      //stloc				V_7
	IL_00f4:            /*goto IL_006a;*/goto IL_00f9;                              //br				IL_006a
	IL_00f9:            goto IL_00fb;                                               //br.s				IL_00fb
	IL_00fb:                                                                        //ldc.i4				0x2
	IL_0100:            V_7=2;                                                      //stloc				V_7
	IL_0104:            /*goto IL_006a;*/goto IL_0109;                              //br				IL_006a
	IL_0109:            goto IL_0206;                                               //leave				IL_0206
	                    ;}
	                    finally{
	IL_010e:                                                                        //ldc.i4				0x1
	IL_0113:            V_7=1;                                                      //stloc				V_7
	IL_0117:            /*goto IL_011b;*/goto IL_0119;                              //br.s				IL_011b
	IL_0119:            goto IL_0130;                                               //br.s				IL_0130
	IL_011b:                                                                        //ldloc				V_7
	IL_011f:            switch(V_7){case 0:goto IL_0153;case 1:goto IL_0119;case 2:goto IL_013f;};//switch				(IL_0153,IL_0119,IL_013f)
	IL_0130:                                                                        //ldloc.s				V_4
	IL_0132:            if(V_4==nullptr)goto IL_0155;                               //brfalse.s				IL_0155
	IL_0134:                                                                        //ldc.i4				0x2
	IL_0139:            V_7=2;                                                      //stloc				V_7
	IL_013d:            /*goto IL_011b;*/goto IL_013f;                              //br.s				IL_011b
	IL_013f:            goto IL_0141;                                               //br.s				IL_0141
	IL_0141:                                                                        //ldloc.s				V_4
	IL_0143:            /*safe_cast<System::IDisposable^>(V_4)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0148:                                                                        //ldc.i4				0x0
	IL_014d:            V_7=0;                                                      //stloc				V_7
	IL_0151:            /*goto IL_011b;*/goto IL_0153;                              //br.s				IL_011b
	IL_0153:            goto IL_0155;                                               //br.s				IL_0155
	IL_0155:                                                                        //endfinally
	                    ;}
	IL_0156:                                                                        //ldloc.2
	IL_0157:            Temp_11=safe_cast<Reflector::CodeModel::IResource^>(V_2)->Module;//callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IResource::get_Module()
	IL_015c:            Temp_12=Temp_11->Location;                                  //callvirt				System::String^ Reflector::CodeModel::IModule::get_Location()
	IL_0161:            Temp_13=System::IO::Path::GetDirectoryName(Temp_12);        //call				System::String^ System::IO::Path::GetDirectoryName(System::String^)
	IL_0166:                                                                        //ldloc.2
	IL_0167:            Temp_14=V_2->Location;                                      //callvirt				System::String^ Reflector::CodeModel::IFileResource::get_Location()
	IL_016c:            Temp_15=System::IO::Path::Combine(Temp_13,Temp_14);         //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_0171:            V_3=Temp_15;                                                //stloc.3
	IL_0172:                                                                        //ldloc.3
	IL_0173:            Temp_16=System::Environment::ExpandEnvironmentVariables(V_3);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_0178:            V_3=Temp_16;                                                //stloc.3
	IL_0179:                                                                        //ldc.i4				0x7
	IL_017e:            V_7=7;                                                      //stloc				V_7
	IL_0182:            /*goto IL_0002;*/goto IL_0187;                              //br				IL_0002
	IL_0187:                                                                        //ldloc.3
	IL_0188:            Temp_19=System::IO::File::Exists(V_3);                      //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_018d:            if(!Temp_19)goto IL_0206;                                   //brfalse.s				IL_0206
	IL_018f:                                                                        //ldc.i4				0x6
	IL_0194:            V_7=6;                                                      //stloc				V_7
	IL_0198:            /*goto IL_0002;*/goto IL_019d;                              //br				IL_0002
	IL_019d:            goto IL_01e9;                                               //br.s				IL_01e9
	IL_019f:                                                                        //ldloc.1
	IL_01a0:            Temp_1=V_1->Value;                                          //callvirt				array<System::Byte>^ Reflector::CodeModel::IEmbeddedResource::get_Value()
	IL_01a5:            V_0=Temp_1;                                                 //stloc.0
	IL_01a6:                                                                        //ldc.i4				0x5
	IL_01ab:            V_7=5;                                                      //stloc				V_7
	IL_01af:            /*goto IL_0002;*/goto IL_01b4;                              //br				IL_0002
	IL_01b4:            goto IL_01b6;                                               //br.s				IL_01b6
	IL_01b6:                                                                        //ldarg.0
	IL_01b7:            Temp_17=this->F_x1;                                         //ldfld				Reflector::CodeModel::IResource^ Root::T_x1 F_x1
	IL_01bc:                                                                        //isinst				Reflector::CodeModel::IFileResource
	IL_01c1:            V_2=dynamic_cast<Reflector::CodeModel::IFileResource^>(Temp_17);//stloc.2
	IL_01c2:                                                                        //ldc.i4				0x4
	IL_01c7:            V_7=4;                                                      //stloc				V_7
	IL_01cb:            /*goto IL_0002;*/goto IL_01d0;                              //br				IL_0002
	IL_01d0:                                                                        //ldloc.2
	IL_01d1:            if(V_2==nullptr)goto IL_0206;                               //brfalse				IL_0206
	IL_01d6:                                                                        //ldc.i4				0x2
	IL_01db:            V_7=2;                                                      //stloc				V_7
	IL_01df:            /*goto IL_0002;*/goto IL_01e4;                              //br				IL_0002
	IL_01e4:            goto IL_0156;                                               //br				IL_0156
	IL_01e9:                                                                        //ldloc.3
	IL_01ea:                                                                        //ldc.i4.3
	IL_01eb:                                                                        //ldc.i4.1
	IL_01ec:            Temp_18=gcnew System::IO::FileStream(V_3,safe_cast<System::IO::FileMode>(3),safe_cast<System::IO::FileAccess>(1));//newobj				void System::IO::FileStream::.ctor(System::String^,System::IO::FileMode,System::IO::FileAccess)
	IL_01f1:            V_4=safe_cast<System::IO::Stream^>(Temp_18);                //stloc.s				V_4
	IL_01f3:                                                                        //ldc.i4				0x1
	IL_01f8:            V_7=1;                                                      //stloc				V_7
	IL_01fc:            /*goto IL_0002;*/goto IL_0201;                              //br				IL_0002
	IL_0201:            /*goto IL_005d;*/goto IL_005801;                            //br				IL_005d
	IL_0206:                                                                        //ldloc.0
	IL_0207:            return V_0;                                                 //ret

}
