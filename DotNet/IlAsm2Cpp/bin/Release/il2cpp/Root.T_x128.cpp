#include "global_xref.h"

inline static Root::T_x128::T_x128()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Root::T_x128::F_x1=safe_cast<System::Collections::IDictionary^>(nullptr);//stsfld				System::Collections::IDictionary^ Root::T_x128 F_x1
	IL_0006:            return;                                                     //ret

}
inline Root::T_x128::T_x128()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x128::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StreamReader^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Collections::IDictionary^ Temp_7 = nullptr;
	System::Collections::Hashtable^ Temp_8 = nullptr;
	System::Type^ Temp_9 = nullptr;
	System::Reflection::Assembly^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::IO::Stream^ Temp_12 = nullptr;
	System::Collections::IDictionary^ Temp_13 = nullptr;
	System::Collections::IDictionary^ Temp_14 = nullptr;
	System::Object^ Temp_15 = nullptr;
	//local variables.
	System::IO::Stream^ V_0 = nullptr;
	System::IO::StreamReader^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::String^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_7=18;                                                     //stloc				V_7
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_6=1;                                                      //stloc				V_6
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_6
	IL_001a:            switch(V_6){case 0:goto IL_01c9;case 1:goto IL_0014;case 2:goto IL_0043;};//switch				(IL_01c9,IL_0014,IL_0043)
	IL_002b:            goto IL_002e;                                               //br.s				IL_002e
	IL_002d:                                                                        //break
	IL_002e:            Temp_13=Root::T_x128::F_x1;                                 //ldsfld				System::Collections::IDictionary^ Root::T_x128 F_x1
	IL_0033:            if(Temp_13!=nullptr)goto IL_01ce;                           //brtrue				IL_01ce
	IL_0038:                                                                        //ldc.i4				0x2
	IL_003d:            V_6=2;                                                      //stloc				V_6
	IL_0041:            /*goto IL_0016;*/goto IL_0043;                              //br.s				IL_0016
	IL_0043:            goto IL_018e;                                               //br				IL_018e
	IL_004301:          try{
	IL_0048:                                                                        //ldloc.0
	IL_0049:            Temp_0=gcnew System::IO::StreamReader(V_0);                 //newobj				void System::IO::StreamReader::.ctor(System::IO::Stream^)
	IL_004e:            V_1=Temp_0;                                                 //stloc.1
	IL_004f:            /*goto IL_0051;*/goto IL_004F01;                            //br.s				IL_0051
	IL_004F01:          try{
	IL_0051:                                                                        //ldc.i4				0x2
	IL_0056:            V_6=2;                                                      //stloc				V_6
	IL_005a:            /*goto IL_005e;*/goto IL_005c;                              //br.s				IL_005e
	IL_005c:            goto IL_007b;                                               //br.s				IL_007b
	IL_005e:                                                                        //ldloc				V_6
	IL_0062:            switch(V_6){case 0:goto IL_0088;case 1:goto IL_00fb;case 2:goto IL_005c;case 3:goto IL_00eb;case 4:goto IL_009c;};//switch				(IL_0088,IL_00fb,IL_005c,IL_00eb,IL_009c)
	IL_007b:            goto IL_007d;                                               //br.s				IL_007d
	IL_007d:                                                                        //ldc.i4				0x0
	IL_0082:            V_6=0;                                                      //stloc				V_6
	IL_0086:            /*goto IL_005e;*/goto IL_0088;                              //br.s				IL_005e
	IL_0088:                                                                        //ldloc.1
	IL_0089:            Temp_1=V_1->Peek();                                         //callvirt				System::Int32 System::IO::TextReader::Peek()
	IL_008e:                                                                        //ldc.i4.m1
	IL_008f:            if(Temp_1!=-1)goto IL_009e;                                 //bne.un.s				IL_009e
	IL_0091:                                                                        //ldc.i4				0x4
	IL_0096:            V_6=4;                                                      //stloc				V_6
	IL_009a:            /*goto IL_005e;*/goto IL_009c;                              //br.s				IL_005e
	IL_009c:            goto IL_00ed;                                               //br.s				IL_00ed
	IL_009e:                                                                        //ldloc.1
	IL_009f:            Temp_2=V_1->ReadLine();                                     //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_00a4:            V_2=Temp_2;                                                 //stloc.2
	IL_00a5:                                                                        //ldloc.2
	IL_00a6:                                                                        //ldstr				L"\x0D2F"
	IL_00ab:                                                                        //ldloc				V_7
	IL_00af:            Temp_3=a(L"\x0D2F",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b4:            Temp_4=V_2->IndexOf(Temp_3);                                //callvirt				System::Int32 System::String::IndexOf(System::String^)
	IL_00b9:            V_3=Temp_4;                                                 //stloc.3
	IL_00ba:                                                                        //ldloc.2
	IL_00bb:                                                                        //ldc.i4.0
	IL_00bc:                                                                        //ldloc.3
	IL_00bd:            Temp_5=V_2->Substring(safe_cast<System::Int32>(0),V_3);     //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_00c2:            V_4=Temp_5;                                                 //stloc.s				V_4
	IL_00c4:                                                                        //ldloc.2
	IL_00c5:                                                                        //ldloc.3
	IL_00c6:                                                                        //ldc.i4.1
	IL_00c7:                                                                        //add
	IL_00c8:            Temp_6=V_2->Substring((V_3 + 1));                           //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_00cd:            V_5=Temp_6;                                                 //stloc.s				V_5
	IL_00cf:            Temp_7=Root::T_x128::F_x1;                                  //ldsfld				System::Collections::IDictionary^ Root::T_x128 F_x1
	IL_00d4:                                                                        //ldloc.s				V_4
	IL_00d6:                                                                        //ldloc.s				V_5
	IL_00d8:            Temp_7[safe_cast<System::Object^>(V_4)]=safe_cast<System::Object^>(V_5);//callvirt				void System::Collections::IDictionary::set_Item(System::Object^,System::Object^)
	IL_00dd:                                                                        //ldc.i4				0x3
	IL_00e2:            V_6=3;                                                      //stloc				V_6
	IL_00e6:            /*goto IL_005e;*/goto IL_00eb;                              //br				IL_005e
	IL_00eb:            goto IL_007d;                                               //br.s				IL_007d
	IL_00ed:                                                                        //ldc.i4				0x1
	IL_00f2:            V_6=1;                                                      //stloc				V_6
	IL_00f6:            /*goto IL_005e;*/goto IL_00fb;                              //br				IL_005e
	IL_00fb:            goto IL_0143;                                               //leave.s				IL_0143
	                    ;}
	                    finally{
	IL_00fd:                                                                        //ldc.i4				0x0
	IL_0102:            V_6=0;                                                      //stloc				V_6
	IL_0106:            /*goto IL_010a;*/goto IL_0108;                              //br.s				IL_010a
	IL_0108:            goto IL_011f;                                               //br.s				IL_011f
	IL_010a:                                                                        //ldloc				V_6
	IL_010e:            switch(V_6){case 0:goto IL_0108;case 1:goto IL_012d;case 2:goto IL_0140;};//switch				(IL_0108,IL_012d,IL_0140)
	IL_011f:                                                                        //ldloc.1
	IL_0120:            if(V_1==nullptr)goto IL_0142;                               //brfalse.s				IL_0142
	IL_0122:                                                                        //ldc.i4				0x1
	IL_0127:            V_6=1;                                                      //stloc				V_6
	IL_012b:            /*goto IL_010a;*/goto IL_012d;                              //br.s				IL_010a
	IL_012d:            goto IL_012f;                                               //br.s				IL_012f
	IL_012f:                                                                        //ldloc.1
	IL_0130:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0135:                                                                        //ldc.i4				0x2
	IL_013a:            V_6=2;                                                      //stloc				V_6
	IL_013e:            /*goto IL_010a;*/goto IL_0140;                              //br.s				IL_010a
	IL_0140:            goto IL_0142;                                               //br.s				IL_0142
	IL_0142:                                                                        //endfinally
	                    ;}
	IL_0143:            goto IL_01ce;                                               //leave				IL_01ce
	                    ;}
	                    finally{
	IL_0148:                                                                        //ldc.i4				0x2
	IL_014d:            V_6=2;                                                      //stloc				V_6
	IL_0151:            /*goto IL_0155;*/goto IL_0153;                              //br.s				IL_0155
	IL_0153:            goto IL_016a;                                               //br.s				IL_016a
	IL_0155:                                                                        //ldloc				V_6
	IL_0159:            switch(V_6){case 0:goto IL_018b;case 1:goto IL_0178;case 2:goto IL_0153;};//switch				(IL_018b,IL_0178,IL_0153)
	IL_016a:                                                                        //ldloc.0
	IL_016b:            if(V_0==nullptr)goto IL_018d;                               //brfalse.s				IL_018d
	IL_016d:                                                                        //ldc.i4				0x1
	IL_0172:            V_6=1;                                                      //stloc				V_6
	IL_0176:            /*goto IL_0155;*/goto IL_0178;                              //br.s				IL_0155
	IL_0178:            goto IL_017a;                                               //br.s				IL_017a
	IL_017a:                                                                        //ldloc.0
	IL_017b:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0180:                                                                        //ldc.i4				0x0
	IL_0185:            V_6=0;                                                      //stloc				V_6
	IL_0189:            /*goto IL_0155;*/goto IL_018b;                              //br.s				IL_0155
	IL_018b:            goto IL_018d;                                               //br.s				IL_018d
	IL_018d:                                                                        //endfinally
	                    ;}
	IL_018e:            Temp_8=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0193:            Root::T_x128::F_x1=safe_cast<System::Collections::IDictionary^>(Temp_8);//stsfld				System::Collections::IDictionary^ Root::T_x128 F_x1
	IL_0198:                                                                        //ldtoken				Root::T_x128
	IL_019d:            Temp_9=Root::T_x128::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_01a2:            Temp_10=Temp_9->Assembly;                                   //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_01a7:                                                                        //ldstr				L"\x622F\x5731\x5233\x5A35\x5D37\x5939\x483B\x513D\x323F\x6C41\x1743\x3245\x3A47\x2349\x224B\x294D\x044F\x3351\x3653\x3A55\x3D57\x7459\x285B\x265D\x145F"
	IL_01ac:                                                                        //ldloc				V_7
	IL_01b0:            Temp_11=a(L"\x622F\x5731\x5233\x5A35\x5D37\x5939\x483B\x513D\x323F\x6C41\x1743\x3245\x3A47\x2349\x224B\x294D\x044F\x3351\x3653\x3A55\x3D57\x7459\x285B\x265D\x145F",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b5:            Temp_12=Temp_10->GetManifestResourceStream(Temp_11);        //callvirt				System::IO::Stream^ System::Reflection::Assembly::GetManifestResourceStream(System::String^)
	IL_01ba:            V_0=Temp_12;                                                //stloc.0
	IL_01bb:                                                                        //ldc.i4				0x0
	IL_01c0:            V_6=0;                                                      //stloc				V_6
	IL_01c4:            /*goto IL_0016;*/goto IL_01c9;                              //br				IL_0016
	IL_01c9:            /*goto IL_0048;*/goto IL_004301;                            //br				IL_0048
	IL_01ce:            Temp_14=Root::T_x128::F_x1;                                 //ldsfld				System::Collections::IDictionary^ Root::T_x128 F_x1
	IL_01d3:                                                                        //ldarg.0
	IL_01d4:            Temp_15=Temp_14[safe_cast<System::Object^>(A_0)];           //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_01d9:                                                                        //castclass				System::String
	IL_01de:            return safe_cast<System::String^>(Temp_15);                 //ret

}
