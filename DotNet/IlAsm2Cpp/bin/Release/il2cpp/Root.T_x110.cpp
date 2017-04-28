#include "global_xref.h"

inline Root::T_x110::T_x110()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::SortedList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::SortedList();             //newobj				void System::Collections::SortedList::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::Collections::SortedList^ Root::T_x110 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:            return;                                                     //ret

}
inline System::String^ Root::T_x110::M_x1()
//System::Object^::ToString by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::IO::MemoryStream^ Temp_1 = nullptr;
	System::IO::StreamReader^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::IO::MemoryStream^ V_1 = nullptr;
	System::IO::StreamReader^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0005:            V_0=Temp_0;                                                 //stloc.0
	IL_0006:            Temp_1=gcnew System::IO::MemoryStream();                    //newobj				void System::IO::MemoryStream::.ctor()
	IL_000b:            V_1=Temp_1;                                                 //stloc.1
	IL_000c:            /*goto IL_000e;*/goto IL_000C01;                            //br.s				IL_000e
	IL_000C01:          try{
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldloc.1
	IL_0010:            this->M_x1(safe_cast<System::IO::Stream^>(V_1));            //call				void Root::T_x110::M_x1(System::IO::Stream^)
	IL_0015:                                                                        //ldloc.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //conv.i8
	IL_0018:            V_1->Position=0;                                            //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_001d:                                                                        //ldloc.1
	IL_001e:            Temp_2=gcnew System::IO::StreamReader(safe_cast<System::IO::Stream^>(V_1));//newobj				void System::IO::StreamReader::.ctor(System::IO::Stream^)
	IL_0023:            V_2=Temp_2;                                                 //stloc.2
	IL_0024:            /*goto IL_0026;*/goto IL_002401;                            //br.s				IL_0026
	IL_002401:          try{
	IL_0026:                                                                        //ldloc.2
	IL_0027:            Temp_3=V_2->ReadToEnd();                                    //callvirt				System::String^ System::IO::TextReader::ReadToEnd()
	IL_002c:            V_0=Temp_3;                                                 //stloc.0
	IL_002d:            goto IL_0075;                                               //leave.s				IL_0075
	                    ;}
	                    finally{
	IL_002f:                                                                        //ldc.i4				0x0
	IL_0034:            V_3=0;                                                      //stloc				V_3
	IL_0038:            /*goto IL_003c;*/goto IL_003a;                              //br.s				IL_003c
	IL_003a:            goto IL_0051;                                               //br.s				IL_0051
	IL_003c:                                                                        //ldloc				V_3
	IL_0040:            switch(V_3){case 0:goto IL_003a;case 1:goto IL_005f;case 2:goto IL_0072;};//switch				(IL_003a,IL_005f,IL_0072)
	IL_0051:                                                                        //ldloc.2
	IL_0052:            if(V_2==nullptr)goto IL_0074;                               //brfalse.s				IL_0074
	IL_0054:                                                                        //ldc.i4				0x1
	IL_0059:            V_3=1;                                                      //stloc				V_3
	IL_005d:            /*goto IL_003c;*/goto IL_005f;                              //br.s				IL_003c
	IL_005f:            goto IL_0061;                                               //br.s				IL_0061
	IL_0061:                                                                        //ldloc.2
	IL_0062:            /*safe_cast<System::IDisposable^>(V_2)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0067:                                                                        //ldc.i4				0x2
	IL_006c:            V_3=2;                                                      //stloc				V_3
	IL_0070:            /*goto IL_003c;*/goto IL_0072;                              //br.s				IL_003c
	IL_0072:            goto IL_0074;                                               //br.s				IL_0074
	IL_0074:                                                                        //endfinally
	                    ;}
	IL_0075:            goto IL_00bd;                                               //leave.s				IL_00bd
	                    ;}
	                    finally{
	IL_0077:                                                                        //ldc.i4				0x0
	IL_007c:            V_4=0;                                                      //stloc				V_4
	IL_0080:            /*goto IL_0084;*/goto IL_0082;                              //br.s				IL_0084
	IL_0082:            goto IL_0099;                                               //br.s				IL_0099
	IL_0084:                                                                        //ldloc				V_4
	IL_0088:            switch(V_4){case 0:goto IL_0082;case 1:goto IL_00a7;case 2:goto IL_00ba;};//switch				(IL_0082,IL_00a7,IL_00ba)
	IL_0099:                                                                        //ldloc.1
	IL_009a:            if(V_1==nullptr)goto IL_00bc;                               //brfalse.s				IL_00bc
	IL_009c:                                                                        //ldc.i4				0x1
	IL_00a1:            V_4=1;                                                      //stloc				V_4
	IL_00a5:            /*goto IL_0084;*/goto IL_00a7;                              //br.s				IL_0084
	IL_00a7:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_00a9:                                                                        //ldloc.1
	IL_00aa:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_00af:                                                                        //ldc.i4				0x2
	IL_00b4:            V_4=2;                                                      //stloc				V_4
	IL_00b8:            /*goto IL_0084;*/goto IL_00ba;                              //br.s				IL_0084
	IL_00ba:            goto IL_00bc;                                               //br.s				IL_00bc
	IL_00bc:                                                                        //endfinally
	                    ;}
	IL_00bd:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_00bf:                                                                        //break
	IL_00c0:                                                                        //ldloc.0
	IL_00c1:            return V_0;                                                 //ret

}
inline void Root::T_x110::M_x1(System::IO::Stream^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StreamWriter^ Temp_0 = nullptr;
	System::Collections::SortedList^ Temp_1 = nullptr;
	System::Collections::IDictionaryEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::String^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	//local variables.
	System::IO::StreamWriter^ V_0 = nullptr;
	System::Collections::IDictionaryEnumerator^ V_1 = nullptr;
	Root::T_x109^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_4=10;                                                     //stloc				V_4
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_00cc;case 1:goto IL_00eb;case 2:goto IL_006d;case 3:goto IL_0104;case 4:goto IL_004a;case 5:goto IL_0057;};//switch				(IL_00cc,IL_00eb,IL_006d,IL_0104,IL_004a,IL_0057)
	IL_002c:                                                                        //ldarg.1
	IL_002d:            Temp_0=gcnew System::IO::StreamWriter(A_0);                 //newobj				void System::IO::StreamWriter::.ctor(System::IO::Stream^)
	IL_0032:            V_0=Temp_0;                                                 //stloc.0
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_1=this->F_x1;                                          //ldfld				System::Collections::SortedList^ Root::T_x110 F_x1
	IL_0039:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IDictionaryEnumerator^ System::Collections::SortedList::GetEnumerator()
	IL_003e:            V_1=Temp_2;                                                 //stloc.1
	IL_003f:                                                                        //ldc.i4				0x4
	IL_0044:            V_3=4;                                                      //stloc				V_3
	IL_0048:            /*goto IL_000b;*/goto IL_004a;                              //br.s				IL_000b
	IL_004a:            goto IL_004c;                                               //br.s				IL_004c
	IL_004c:                                                                        //ldc.i4				0x5
	IL_0051:            V_3=5;                                                      //stloc				V_3
	IL_0055:            /*goto IL_000b;*/goto IL_0057;                              //br.s				IL_000b
	IL_0057:                                                                        //ldloc.1
	IL_0058:            Temp_7=safe_cast<System::Collections::IEnumerator^>(V_1)->MoveNext();//callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_005d:            if(Temp_7)goto IL_00d1;                                     //brtrue.s				IL_00d1
	IL_005f:            goto IL_0062;                                               //br.s				IL_0062
	IL_0061:                                                                        //break
	IL_0062:                                                                        //ldc.i4				0x2
	IL_0067:            V_3=2;                                                      //stloc				V_3
	IL_006b:            /*goto IL_000b;*/goto IL_006d;                              //br.s				IL_000b
	IL_006d:            goto IL_0109;                                               //br				IL_0109
	IL_0072:                                                                        //ldloc.0
	IL_0073:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0078:                                                                        //ldloc.0
	IL_0079:                                                                        //ldstr				L"\x7327"
	IL_007e:                                                                        //ldloc				V_4
	IL_0082:            Temp_4=a(L"\x7327",V_4);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0087:            V_0->Write(Temp_4);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_008c:                                                                        //ldloc.0
	IL_008d:                                                                        //ldloc.1
	IL_008e:            Temp_5=V_1->Key;                                            //callvirt				System::Object^ System::Collections::IDictionaryEnumerator::get_Key()
	IL_0093:                                                                        //castclass				System::String
	IL_0098:            V_0->Write(safe_cast<System::String^>(Temp_5));             //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_009d:                                                                        //ldloc.0
	IL_009e:                                                                        //ldstr				L"\x7527"
	IL_00a3:                                                                        //ldloc				V_4
	IL_00a7:            Temp_6=a(L"\x7527",V_4);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ac:            V_0->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00b1:                                                                        //ldloc.0
	IL_00b2:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_00b7:                                                                        //ldloc.2
	IL_00b8:                                                                        //ldloc.0
	IL_00b9:            V_2->M_x1(V_0);                                             //callvirt				void Root::T_x109::M_x1(System::IO::StreamWriter^)
	IL_00be:                                                                        //ldc.i4				0x0
	IL_00c3:            V_3=0;                                                      //stloc				V_3
	IL_00c7:            /*goto IL_000b;*/goto IL_00cc;                              //br				IL_000b
	IL_00cc:            goto IL_004c;                                               //br				IL_004c
	IL_00d1:                                                                        //ldloc.1
	IL_00d2:            Temp_8=V_1->Value;                                          //callvirt				System::Object^ System::Collections::IDictionaryEnumerator::get_Value()
	IL_00d7:                                                                        //castclass				Root::T_x109
	IL_00dc:            V_2=safe_cast<Root::T_x109^>(Temp_8);                       //stloc.2
	IL_00dd:                                                                        //ldc.i4				0x1
	IL_00e2:            V_3=1;                                                      //stloc				V_3
	IL_00e6:            /*goto IL_000b;*/goto IL_00eb;                              //br				IL_000b
	IL_00eb:                                                                        //ldloc.2
	IL_00ec:            Temp_3=V_2->M_x2();                                         //callvirt				System::Boolean Root::T_x109::M_x2()
	IL_00f1:            if(Temp_3)goto IL_004c;                                     //brtrue				IL_004c
	IL_00f6:                                                                        //ldc.i4				0x3
	IL_00fb:            V_3=3;                                                      //stloc				V_3
	IL_00ff:            /*goto IL_000b;*/goto IL_0104;                              //br				IL_000b
	IL_0104:            goto IL_0072;                                               //br				IL_0072
	IL_0109:                                                                        //ldloc.0
	IL_010a:            V_0->Flush();                                               //callvirt				void System::IO::TextWriter::Flush()
	IL_010f:            return;                                                     //ret

}
inline void Root::T_x110::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::FileStream^ Temp_0 = nullptr;
	//local variables.
	System::IO::Stream^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            V_0=safe_cast<System::IO::Stream^>(nullptr);                //stloc.0
	IL_0002:            /*goto IL_0004;*/goto IL_000201;                            //br.s				IL_0004
	IL_000201:          try{
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=System::IO::File::Create(A_0);                       //call				System::IO::FileStream^ System::IO::File::Create(System::String^)
	IL_000a:            V_0=safe_cast<System::IO::Stream^>(Temp_0);                 //stloc.0
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            this->M_x1(V_0);                                            //call				void Root::T_x110::M_x1(System::IO::Stream^)
	IL_0012:            goto IL_005a;                                               //leave.s				IL_005a
	                    ;}
	                    finally{
	IL_0014:                                                                        //ldc.i4				0x0
	IL_0019:            V_1=0;                                                      //stloc				V_1
	IL_001d:            /*goto IL_0021;*/goto IL_001f;                              //br.s				IL_0021
	IL_001f:            goto IL_0036;                                               //br.s				IL_0036
	IL_0021:                                                                        //ldloc				V_1
	IL_0025:            switch(V_1){case 0:goto IL_001f;case 1:goto IL_0057;case 2:goto IL_0044;};//switch				(IL_001f,IL_0057,IL_0044)
	IL_0036:                                                                        //ldloc.0
	IL_0037:            if(V_0==nullptr)goto IL_0059;                               //brfalse.s				IL_0059
	IL_0039:                                                                        //ldc.i4				0x2
	IL_003e:            V_1=2;                                                      //stloc				V_1
	IL_0042:            /*goto IL_0021;*/goto IL_0044;                              //br.s				IL_0021
	IL_0044:            goto IL_0046;                                               //br.s				IL_0046
	IL_0046:                                                                        //ldloc.0
	IL_0047:            V_0->Close();                                               //callvirt				void System::IO::Stream::Close()
	IL_004c:                                                                        //ldc.i4				0x1
	IL_0051:            V_1=1;                                                      //stloc				V_1
	IL_0055:            /*goto IL_0021;*/goto IL_0057;                              //br.s				IL_0021
	IL_0057:            goto IL_0059;                                               //br.s				IL_0059
	IL_0059:                                                                        //endfinally
	                    ;}
	IL_005a:            goto IL_005d;                                               //br.s				IL_005d
	IL_005c:                                                                        //break
	IL_005d:            return;                                                     //ret

}
inline void Root::T_x110::M_x12(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::FileStream^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	System::IO::Stream^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00a9;case 1:goto IL_000b;case 2:goto IL_0038;};//switch				(IL_00a9,IL_000b,IL_0038)
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_1=System::IO::File::Exists(A_0);                       //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_0028:            if(!Temp_1)goto IL_00ab;                                    //brfalse				IL_00ab
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_1=2;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0089;                                               //br.s				IL_0089
	IL_003801:          try{
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            this->M_x2(V_0);                                            //call				void Root::T_x110::M_x2(System::IO::Stream^)
	IL_0041:            goto IL_00ab;                                               //leave.s				IL_00ab
	                    ;}
	                    finally{
	IL_0043:                                                                        //ldc.i4				0x0
	IL_0048:            V_1=0;                                                      //stloc				V_1
	IL_004c:            /*goto IL_0050;*/goto IL_004e;                              //br.s				IL_0050
	IL_004e:            goto IL_0065;                                               //br.s				IL_0065
	IL_0050:                                                                        //ldloc				V_1
	IL_0054:            switch(V_1){case 0:goto IL_004e;case 1:goto IL_0073;case 2:goto IL_0086;};//switch				(IL_004e,IL_0073,IL_0086)
	IL_0065:                                                                        //ldloc.0
	IL_0066:            if(V_0==nullptr)goto IL_0088;                               //brfalse.s				IL_0088
	IL_0068:                                                                        //ldc.i4				0x1
	IL_006d:            V_1=1;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0050;*/goto IL_0073;                              //br.s				IL_0050
	IL_0073:            goto IL_0075;                                               //br.s				IL_0075
	IL_0075:                                                                        //ldloc.0
	IL_0076:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_007b:                                                                        //ldc.i4				0x2
	IL_0080:            V_1=2;                                                      //stloc				V_1
	IL_0084:            /*goto IL_0050;*/goto IL_0086;                              //br.s				IL_0050
	IL_0086:            goto IL_0088;                                               //br.s				IL_0088
	IL_0088:                                                                        //endfinally
	                    ;}
	IL_0089:                                                                        //ldarg.1
	IL_008a:            Temp_0=System::IO::File::OpenRead(A_0);                     //call				System::IO::FileStream^ System::IO::File::OpenRead(System::String^)
	IL_008f:            V_0=safe_cast<System::IO::Stream^>(Temp_0);                 //stloc.0
	IL_0090:                                                                        //ldc.i4.4
	IL_0091:                                                                        //dup
	IL_0092:                                                                        //dup
	IL_0093:                                                                        //ldc.i4.2
	IL_0094:                                                                        //sub
	IL_0095:                                                                        //blt				IL_0091
	IL_009a:                                                                        //pop
	IL_009b:                                                                        //ldc.i4				0x0
	IL_00a0:            V_1=0;                                                      //stloc				V_1
	IL_00a4:            /*goto IL_000d;*/goto IL_00a9;                              //br				IL_000d
	IL_00a9:            /*goto IL_003a;*/goto IL_003801;                            //br.s				IL_003a
	IL_00ab:            return;                                                     //ret

}
inline void Root::T_x110::M_x2(System::IO::Stream^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::StreamReader^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::IConfiguration^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	//local variables.
	System::IO::StreamReader^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	Root::T_x109^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_6=13;                                                     //stloc				V_6
	IL_0009:                                                                        //ldarg.1
	IL_000a:            Temp_0=gcnew System::IO::StreamReader(A_0);                 //newobj				void System::IO::StreamReader::.ctor(System::IO::Stream^)
	IL_000f:            V_0=Temp_0;                                                 //stloc.0
	IL_0010:            /*goto IL_0012;*/goto IL_001001;                            //br.s				IL_0012
	IL_001001:          try{
	IL_0012:                                                                        //ldc.i4				0x5
	IL_0017:            V_4=5;                                                      //stloc				V_4
	IL_001b:            /*goto IL_001f;*/goto IL_001d;                              //br.s				IL_001f
	IL_001d:            goto IL_0060;                                               //br.s				IL_0060
	IL_001f:                                                                        //ldloc				V_4
	IL_0023:            switch(V_4){case 0:goto IL_0094;case 1:goto IL_0070;case 2:goto IL_013c;case 3:goto IL_0115;case 4:goto IL_00dc;case 5:goto IL_001d;case 6:goto IL_01c0;case 7:goto IL_00be;case 8:goto IL_015f;case 9:goto IL_0186;case 10:goto IL_0125;case 11:goto IL_0199;case 12:goto IL_01d3;case 13:goto IL_00f3;};//switch				(IL_0094,IL_0070,IL_013c,IL_0115,IL_00dc,IL_001d,IL_01c0,IL_00be,IL_015f,IL_0186,IL_0125,IL_0199,IL_01d3,IL_00f3)
	IL_0060:            goto IL_0117;                                               //br				IL_0117
	IL_0065:                                                                        //ldc.i4				0x1
	IL_006a:            V_4=1;                                                      //stloc				V_4
	IL_006e:            /*goto IL_001f;*/goto IL_0070;                              //br.s				IL_001f
	IL_0070:                                                                        //ldloc.1
	IL_0071:                                                                        //ldstr				L"\x702A"
	IL_0076:                                                                        //ldloc				V_6
	IL_007a:            Temp_1=a(L"\x702A",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007f:            Temp_2=V_1->StartsWith(Temp_1);                             //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_0084:            if(!Temp_2)goto IL_0117;                                    //brfalse				IL_0117
	IL_0089:                                                                        //ldc.i4				0x0
	IL_008e:            V_4=0;                                                      //stloc				V_4
	IL_0092:            /*goto IL_001f;*/goto IL_0094;                              //br.s				IL_001f
	IL_0094:            goto IL_018b;                                               //br				IL_018b
	IL_0099:            goto IL_009c;                                               //br.s				IL_009c
	IL_009b:                                                                        //break
	IL_009c:                                                                        //ldarg.0
	IL_009d:                                                                        //ldloc.2
	IL_009e:            Temp_3=this->M_x2(V_2);                                     //call				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_00a3:                                                                        //castclass				Root::T_x109
	IL_00a8:            V_3=safe_cast<Root::T_x109^>(Temp_3);                       //stloc.3
	IL_00a9:                                                                        //ldloc.3
	IL_00aa:                                                                        //ldloc.0
	IL_00ab:            V_3->M_x1(V_0);                                             //callvirt				void Root::T_x109::M_x1(System::IO::StreamReader^)
	IL_00b0:                                                                        //ldc.i4				0x7
	IL_00b5:            V_4=7;                                                      //stloc				V_4
	IL_00b9:            /*goto IL_001f;*/goto IL_00be;                              //br				IL_001f
	IL_00be:            goto IL_0117;                                               //br.s				IL_0117
	IL_00c0:                                                                        //ldloc.0
	IL_00c1:            Temp_11=V_0->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_00c6:            V_1=Temp_11;                                                //stloc.1
	IL_00c7:                                                                        //ldloc.1
	IL_00c8:            Temp_12=V_1->Trim();                                        //callvirt				System::String^ System::String::Trim()
	IL_00cd:            V_1=Temp_12;                                                //stloc.1
	IL_00ce:                                                                        //ldc.i4				0x4
	IL_00d3:            V_4=4;                                                      //stloc				V_4
	IL_00d7:            /*goto IL_001f;*/goto IL_00dc;                              //br				IL_001f
	IL_00dc:                                                                        //ldloc.1
	IL_00dd:            Temp_4=V_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_00e2:                                                                        //ldc.i4.0
	IL_00e3:            if(Temp_4<=0)goto IL_0117;                                  //ble.s				IL_0117
	IL_00e5:                                                                        //ldc.i4				0xd
	IL_00ea:            V_4=13;                                                     //stloc				V_4
	IL_00ee:            /*goto IL_001f;*/goto IL_00f3;                              //br				IL_001f
	IL_00f3:            goto IL_0065;                                               //br				IL_0065
	IL_00f8:                                                                        //ldstr				L"\x6A2A\x5E2C\x5C2E\x5430\x5E32\x5734\x5B36\x4038\x763A\x5C3C\x513E\x2040\x2442\x2044\x3546"
	IL_00fd:                                                                        //ldloc				V_6
	IL_0101:            Temp_9=a(L"\x6A2A\x5E2C\x5C2E\x5430\x5E32\x5734\x5B36\x4038\x763A\x5C3C\x513E\x2040\x2442\x2044\x3546",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0106:            V_2=Temp_9;                                                 //stloc.2
	IL_0107:                                                                        //ldc.i4				0x3
	IL_010c:            V_4=3;                                                      //stloc				V_4
	IL_0110:            /*goto IL_001f;*/goto IL_0115;                              //br				IL_001f
	IL_0115:            goto IL_0099;                                               //br.s				IL_0099
	IL_0117:                                                                        //ldc.i4				0xa
	IL_011c:            V_4=10;                                                     //stloc				V_4
	IL_0120:            /*goto IL_001f;*/goto IL_0125;                              //br				IL_001f
	IL_0125:                                                                        //ldloc.0
	IL_0126:            Temp_10=V_0->Peek();                                        //callvirt				System::Int32 System::IO::TextReader::Peek()
	IL_012b:                                                                        //ldc.i4.m1
	IL_012c:            if(Temp_10!=-1)goto IL_00c0;                                //bne.un.s				IL_00c0
	IL_012e:                                                                        //ldc.i4				0x2
	IL_0133:            V_4=2;                                                      //stloc				V_4
	IL_0137:            /*goto IL_001f;*/goto IL_013c;                              //br				IL_001f
	IL_013c:            goto IL_01c5;                                               //br				IL_01c5
	IL_0141:                                                                        //ldloc.1
	IL_0142:                                                                        //ldc.i4.1
	IL_0143:                                                                        //ldloc.1
	IL_0144:            Temp_5=V_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0149:                                                                        //ldc.i4.2
	IL_014a:                                                                        //sub
	IL_014b:            Temp_6=V_1->Substring(safe_cast<System::Int32>(1),(Temp_5 - 2));//callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0150:            V_2=Temp_6;                                                 //stloc.2
	IL_0151:                                                                        //ldc.i4				0x8
	IL_0156:            V_4=8;                                                      //stloc				V_4
	IL_015a:            /*goto IL_001f;*/goto IL_015f;                              //br				IL_001f
	IL_015f:                                                                        //ldloc.2
	IL_0160:                                                                        //ldstr				L"\x6A2A\x5E2C\x5C2E\x5430\x5E32\x5734\x5B36\x4038\x773A\x523C\x5E3E\x2540\x2642\x3744"
	IL_0165:                                                                        //ldloc				V_6
	IL_0169:            Temp_7=a(L"\x6A2A\x5E2C\x5C2E\x5430\x5E32\x5734\x5B36\x4038\x773A\x523C\x5E3E\x2540\x2642\x3744",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016e:            Temp_8=(V_2 == Temp_7);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0173:            if(!Temp_8)goto IL_0099;                                    //brfalse				IL_0099
	IL_0178:                                                                        //ldc.i4				0x9
	IL_017d:            V_4=9;                                                      //stloc				V_4
	IL_0181:            /*goto IL_001f;*/goto IL_0186;                              //br				IL_001f
	IL_0186:            goto IL_00f8;                                               //br				IL_00f8
	IL_018b:                                                                        //ldc.i4				0xb
	IL_0190:            V_4=11;                                                     //stloc				V_4
	IL_0194:            /*goto IL_001f;*/goto IL_0199;                              //br				IL_001f
	IL_0199:                                                                        //ldloc.1
	IL_019a:                                                                        //ldstr				L"\x762A"
	IL_019f:                                                                        //ldloc				V_6
	IL_01a3:            Temp_13=a(L"\x762A",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a8:            Temp_14=V_1->EndsWith(Temp_13);                             //callvirt				System::Boolean System::String::EndsWith(System::String^)
	IL_01ad:            if(!Temp_14)goto IL_0117;                                   //brfalse				IL_0117
	IL_01b2:                                                                        //ldc.i4				0x6
	IL_01b7:            V_4=6;                                                      //stloc				V_4
	IL_01bb:            /*goto IL_001f;*/goto IL_01c0;                              //br				IL_001f
	IL_01c0:            goto IL_0141;                                               //br				IL_0141
	IL_01c5:                                                                        //ldc.i4				0xc
	IL_01ca:            V_4=12;                                                     //stloc				V_4
	IL_01ce:            /*goto IL_001f;*/goto IL_01d3;                              //br				IL_001f
	IL_01d3:            goto IL_021b;                                               //leave.s				IL_021b
	                    ;}
	                    finally{
	IL_01d5:                                                                        //ldc.i4				0x1
	IL_01da:            V_5=1;                                                      //stloc				V_5
	IL_01de:            /*goto IL_01e2;*/goto IL_01e0;                              //br.s				IL_01e2
	IL_01e0:            goto IL_01f7;                                               //br.s				IL_01f7
	IL_01e2:                                                                        //ldloc				V_5
	IL_01e6:            switch(V_5){case 0:goto IL_0205;case 1:goto IL_01e0;case 2:goto IL_0218;};//switch				(IL_0205,IL_01e0,IL_0218)
	IL_01f7:                                                                        //ldloc.0
	IL_01f8:            if(V_0==nullptr)goto IL_021a;                               //brfalse.s				IL_021a
	IL_01fa:                                                                        //ldc.i4				0x0
	IL_01ff:            V_5=0;                                                      //stloc				V_5
	IL_0203:            /*goto IL_01e2;*/goto IL_0205;                              //br.s				IL_01e2
	IL_0205:            goto IL_0207;                                               //br.s				IL_0207
	IL_0207:                                                                        //ldloc.0
	IL_0208:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_020d:                                                                        //ldc.i4				0x2
	IL_0212:            V_5=2;                                                      //stloc				V_5
	IL_0216:            /*goto IL_01e2;*/goto IL_0218;                              //br.s				IL_01e2
	IL_0218:            goto IL_021a;                                               //br.s				IL_021a
	IL_021a:                                                                        //endfinally
	                    ;}
	IL_021b:            return;                                                     //ret

}
inline Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^ A_0)
//Reflector::IConfigurationManager^::get_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::SortedList^ Temp_0 = nullptr;
	Root::T_x109^ Temp_1 = nullptr;
	System::Collections::SortedList^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Collections::SortedList^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_003e;case 1:goto IL_000b;case 2:goto IL_005c;};//switch				(IL_003e,IL_000b,IL_005c)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_4=this->F_x1;                                          //ldfld				System::Collections::SortedList^ Root::T_x110 F_x1
	IL_002b:                                                                        //ldarg.1
	IL_002c:            Temp_5=Temp_4->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::SortedList::Contains(System::Object^)
	IL_0031:            if(Temp_5)goto IL_005e;                                     //brtrue.s				IL_005e
	IL_0033:                                                                        //ldc.i4				0x0
	IL_0038:            V_0=0;                                                      //stloc				V_0
	IL_003c:            /*goto IL_000d;*/goto IL_003e;                              //br.s				IL_000d
	IL_003e:            goto IL_0040;                                               //br.s				IL_0040
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::SortedList^ Root::T_x110 F_x1
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_1=gcnew Root::T_x109();                                //newobj				void Root::T_x109::.ctor()
	IL_004c:            Temp_0->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(Temp_1));//callvirt				void System::Collections::SortedList::Add(System::Object^,System::Object^)
	IL_0051:                                                                        //ldc.i4				0x2
	IL_0056:            V_0=2;                                                      //stloc				V_0
	IL_005a:            /*goto IL_000d;*/goto IL_005c;                              //br.s				IL_000d
	IL_005c:            goto IL_005e;                                               //br.s				IL_005e
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_2=this->F_x1;                                          //ldfld				System::Collections::SortedList^ Root::T_x110 F_x1
	IL_0064:                                                                        //ldarg.1
	IL_0065:            Temp_3=Temp_2[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::SortedList::get_Item(System::Object^)
	IL_006a:                                                                        //castclass				Reflector::IConfiguration
	IL_006f:            return safe_cast<Reflector::IConfiguration^>(Temp_3);       //ret

}
