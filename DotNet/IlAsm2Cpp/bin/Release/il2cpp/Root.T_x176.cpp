#include "global_xref.h"

inline Root::T_x176::T_x176(Reflector::CodeModel::IUnmanagedResourceCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::UnmanagedResourceCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew Reflector::CodeModel::Memory::UnmanagedResourceCollection();//newobj				void Reflector::CodeModel::Memory::UnmanagedResourceCollection::.ctor()
	IL_0006:            this->F_x1=safe_cast<Reflector::CodeModel::IUnmanagedResourceCollection^>(Temp_0);//stfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_1=this->F_x1;                                          //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_0017:            Temp_1->Clear();                                            //callvirt				void Reflector::CodeModel::IUnmanagedResourceCollection::Clear()
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->F_x1;                                          //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_2->AddRange(safe_cast<System::Collections::ICollection^>(A_0));//callvirt				void Reflector::CodeModel::IUnmanagedResourceCollection::AddRange(System::Collections::ICollection^)
	IL_0028:            return;                                                     //ret

}
inline Root::T_x176::T_x176(Root::T_x139^ A_0,Root::T_x167^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::UnmanagedResourceCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::String^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	Reflector::CodeModel::IUnmanagedResource^ Temp_15 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_16 = nullptr;
	Reflector::CodeModel::IUnmanagedResource^ Temp_17 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_18 = nullptr;
	Reflector::CodeModel::IUnmanagedResource^ Temp_19 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_20 = nullptr;
	System::Object^ Temp_21 = nullptr;
	System::Object^ Temp_22 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Object^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	Reflector::CodeModel::IUnmanagedResource^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	System::Object^ V_11 = nullptr;
	Reflector::CodeModel::IUnmanagedResource^ V_12 = nullptr;
	System::Int32 V_13 = 0;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	System::Int32 V_16 = 0;
	Reflector::CodeModel::IUnmanagedResource^ V_17 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew Reflector::CodeModel::Memory::UnmanagedResourceCollection();//newobj				void Reflector::CodeModel::Memory::UnmanagedResourceCollection::.ctor()
	IL_0006:            this->F_x1=safe_cast<Reflector::CodeModel::IUnmanagedResourceCollection^>(Temp_0);//stfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0017:            V_0=Temp_1;                                                 //stloc.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_2=Root::T_x176::M_x1(A_0);                             //call				System::Int32 Root::T_x176::M_x1(Root::T_x139^)
	IL_001e:            V_1=Temp_2;                                                 //stloc.1
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:            V_2=0;                                                      //stloc.2
	IL_0021:            goto IL_019b;                                               //br				IL_019b
	IL_0026:                                                                        //ldloc.3
	IL_0027:                                                                        //box				System::Int32
	IL_002c:            Temp_21=V_3;goto IL_00dd;                                   //br				IL_00dd
	IL_0031:                                                                        //ldarg.1
	IL_0032:                                                                        //ldarg.2
	IL_0033:                                                                        //ldloc.0
	IL_0034:                                                                        //ldloc.s				V_5
	IL_0036:                                                                        //add
	IL_0037:                                                                        //ldloc.s				V_4
	IL_0039:                                                                        //ldnull
	IL_003a:                                                                        //ldc.i4.0
	IL_003b:            Temp_19=Root::T_x176::M_x1(A_0,A_1,(V_0 + V_5),V_4,safe_cast<System::Object^>(nullptr),safe_cast<System::Int32>(0));//call				Reflector::CodeModel::IUnmanagedResource^ Root::T_x176::M_x1(Root::T_x139^,Root::T_x167^,System::Int32,System::Object^,System::Object^,System::Int32)
	IL_0040:            V_6=Temp_19;                                                //stloc.s				V_6
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_20=this->M_x1();                                       //call				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176::M_x1()
	IL_0048:                                                                        //ldloc.s				V_6
	IL_004a:            Temp_20->Add(V_6);                                          //callvirt				void Reflector::CodeModel::IUnmanagedResourceCollection::Add(Reflector::CodeModel::IUnmanagedResource^)
	IL_004f:            goto IL_00d4;                                               //br				IL_00d4
	IL_0054:                                                                        //ldarg.1
	IL_0055:            Temp_13=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_005a:            V_16=Temp_13;                                               //stloc.s				V_16
	IL_005c:                                                                        //ldarg.1
	IL_005d:            Temp_14=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0062:            V_5=Temp_14;                                                //stloc.s				V_5
	IL_0064:                                                                        //ldarg.1
	IL_0065:                                                                        //ldarg.2
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldloc.s				V_5
	IL_0069:                                                                        //add
	IL_006a:                                                                        //ldloc.s				V_4
	IL_006c:                                                                        //ldloc.s				V_11
	IL_006e:                                                                        //ldloc.s				V_16
	IL_0070:            Temp_15=Root::T_x176::M_x1(A_0,A_1,(V_0 + V_5),V_4,V_11,V_16);//call				Reflector::CodeModel::IUnmanagedResource^ Root::T_x176::M_x1(Root::T_x139^,Root::T_x167^,System::Int32,System::Object^,System::Object^,System::Int32)
	IL_0075:            V_17=Temp_15;                                               //stloc.s				V_17
	IL_0077:                                                                        //ldarg.0
	IL_0078:            Temp_16=this->M_x1();                                       //call				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176::M_x1()
	IL_007d:                                                                        //ldloc.s				V_17
	IL_007f:            Temp_16->Add(V_17);                                         //callvirt				void Reflector::CodeModel::IUnmanagedResourceCollection::Add(Reflector::CodeModel::IUnmanagedResource^)
	IL_0084:                                                                        //ldloc.s				V_15
	IL_0086:                                                                        //ldc.i4.1
	IL_0087:                                                                        //add
	IL_0088:            V_15=(V_15 + 1);                                            //stloc.s				V_15
	IL_008a:            goto IL_0190;                                               //br				IL_0190
	IL_008f:                                                                        //ldarg.1
	IL_0090:            Temp_6=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0095:            V_7=Temp_6;                                                 //stloc.s				V_7
	IL_0097:                                                                        //ldarg.1
	IL_0098:                                                                        //ldloc.0
	IL_0099:                                                                        //ldloc.s				V_5
	IL_009b:                                                                        //ldc.i4				0x7fffffff
	IL_00a0:                                                                        //and
	IL_00a1:                                                                        //add
	IL_00a2:            A_0->M_x13((V_0 + (V_5 & 2147483647)));                     //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_00a7:                                                                        //ldarg.1
	IL_00a8:            Temp_7=Root::T_x176::M_x1(A_0);                             //call				System::Int32 Root::T_x176::M_x1(Root::T_x139^)
	IL_00ad:            V_8=Temp_7;                                                 //stloc.s				V_8
	IL_00af:                                                                        //ldc.i4.0
	IL_00b0:            V_9=0;                                                      //stloc.s				V_9
	IL_00b2:            goto IL_00c9;                                               //br				IL_00c9
	IL_00b7:                                                                        //ldarg.1
	IL_00b8:                                                                        //ldloc.s				V_7
	IL_00ba:            A_0->M_x13(V_7);                                            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_00bf:            goto IL_00d4;                                               //br.s				IL_00d4
	IL_00c1:                                                                        //ldloc.s				V_9
	IL_00c3:                                                                        //ldc.i4.1
	IL_00c4:                                                                        //add
	IL_00c5:            V_9=(V_9 + 1);                                              //stloc.s				V_9
	IL_00c7:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_00c9:                                                                        //ldloc.s				V_9
	IL_00cb:                                                                        //ldloc.s				V_8
	IL_00cd:            if(V_9<V_8)goto IL_016f;                                    //blt				IL_016f
	IL_00d2:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_00d4:                                                                        //ldloc.2
	IL_00d5:                                                                        //ldc.i4.1
	IL_00d6:                                                                        //add
	IL_00d7:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00d8:            goto IL_019b;                                               //br				IL_019b
	IL_00dd:            Temp_21=Temp_4;V_4=safe_cast<System::Object^>(Temp_21);/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_4
	IL_00df:                                                                        //ldarg.1
	IL_00e0:            Temp_5=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_00e5:            V_5=Temp_5;                                                 //stloc.s				V_5
	IL_00e7:                                                                        //ldloc.s				V_5
	IL_00e9:                                                                        //ldc.i4.0
	IL_00ea:            if(V_5<0)goto IL_008f;                                      //blt.s				IL_008f
	IL_00ec:            goto IL_0031;                                               //br				IL_0031
	IL_00f1:                                                                        //ldarg.1
	IL_00f2:                                                                        //ldarg.2
	IL_00f3:                                                                        //ldloc.0
	IL_00f4:                                                                        //ldloc.s				V_5
	IL_00f6:                                                                        //add
	IL_00f7:                                                                        //ldloc.s				V_4
	IL_00f9:                                                                        //ldloc.s				V_11
	IL_00fb:                                                                        //ldc.i4.0
	IL_00fc:            Temp_17=Root::T_x176::M_x1(A_0,A_1,(V_0 + V_5),V_4,V_11,safe_cast<System::Int32>(0));//call				Reflector::CodeModel::IUnmanagedResource^ Root::T_x176::M_x1(Root::T_x139^,Root::T_x167^,System::Int32,System::Object^,System::Object^,System::Int32)
	IL_0101:            V_12=Temp_17;                                               //stloc.s				V_12
	IL_0103:                                                                        //ldarg.0
	IL_0104:            Temp_18=this->M_x1();                                       //call				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176::M_x1()
	IL_0109:                                                                        //ldloc.s				V_12
	IL_010b:            Temp_18->Add(V_12);                                         //callvirt				void Reflector::CodeModel::IUnmanagedResourceCollection::Add(Reflector::CodeModel::IUnmanagedResource^)
	IL_0110:            goto IL_00c1;                                               //br.s				IL_00c1
	IL_0112:                                                                        //ldloc.s				V_10
	IL_0114:                                                                        //box				System::Int32
	IL_0119:            Temp_22=V_10;goto IL_011b;                                  //br.s				IL_011b
	IL_011b:            Temp_22=Temp_9;V_11=safe_cast<System::Object^>(Temp_22);/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_11
	IL_011d:                                                                        //ldarg.1
	IL_011e:            Temp_10=A_0->M_x5();                                        //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0123:            V_5=Temp_10;                                                //stloc.s				V_5
	IL_0125:                                                                        //ldloc.s				V_5
	IL_0127:                                                                        //ldc.i4.0
	IL_0128:            if(V_5<0)goto IL_014a;                                      //blt.s				IL_014a
	IL_012a:            goto IL_00f1;                                               //br.s				IL_00f1
	IL_012c:                                                                        //ldarg.1
	IL_012d:                                                                        //ldloc.0
	IL_012e:                                                                        //ldloc.3
	IL_012f:                                                                        //ldc.i4				0x7fffffff
	IL_0134:                                                                        //and
	IL_0135:                                                                        //add
	IL_0136:            Temp_4=Root::T_x176::M_x1(A_0,(V_0 + (V_3 & 2147483647)));  //call				System::String^ Root::T_x176::M_x1(Root::T_x139^,System::Int32)
	IL_013b:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_013d:                                                                        //ldarg.1
	IL_013e:                                                                        //ldloc.s				V_13
	IL_0140:            A_0->M_x13(V_13);                                           //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0145:            goto IL_00c1;                                               //br				IL_00c1
	IL_014a:                                                                        //ldarg.1
	IL_014b:            Temp_11=A_0->M_x19();                                       //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0150:            V_13=Temp_11;                                               //stloc.s				V_13
	IL_0152:                                                                        //ldarg.1
	IL_0153:                                                                        //ldloc.0
	IL_0154:                                                                        //ldloc.s				V_5
	IL_0156:                                                                        //ldc.i4				0x7fffffff
	IL_015b:                                                                        //and
	IL_015c:                                                                        //add
	IL_015d:            A_0->M_x13((V_0 + (V_5 & 2147483647)));                     //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0162:                                                                        //ldarg.1
	IL_0163:            Temp_12=Root::T_x176::M_x1(A_0);                            //call				System::Int32 Root::T_x176::M_x1(Root::T_x139^)
	IL_0168:            V_14=Temp_12;                                               //stloc.s				V_14
	IL_016a:                                                                        //ldc.i4.0
	IL_016b:            V_15=0;                                                     //stloc.s				V_15
	IL_016d:            goto IL_0190;                                               //br.s				IL_0190
	IL_016f:                                                                        //ldarg.1
	IL_0170:            Temp_8=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0175:            V_10=Temp_8;                                                //stloc.s				V_10
	IL_0177:                                                                        //ldloc.s				V_10
	IL_0179:                                                                        //ldc.i4.0
	IL_017a:            if(V_10<0)goto IL_017e;                                     //blt.s				IL_017e
	IL_017c:            goto IL_0112;                                               //br.s				IL_0112
	IL_017e:                                                                        //ldarg.1
	IL_017f:                                                                        //ldloc.0
	IL_0180:                                                                        //ldloc.s				V_10
	IL_0182:                                                                        //ldc.i4				0x7fffffff
	IL_0187:                                                                        //and
	IL_0188:                                                                        //add
	IL_0189:            Temp_9=Root::T_x176::M_x1(A_0,(V_0 + (V_10 & 2147483647))); //call				System::String^ Root::T_x176::M_x1(Root::T_x139^,System::Int32)
	IL_018e:            goto IL_011b;                                               //br.s				IL_011b
	IL_0190:                                                                        //ldloc.s				V_15
	IL_0192:                                                                        //ldloc.s				V_14
	IL_0194:            if(V_15<V_14)goto IL_0054;                                  //blt				IL_0054
	IL_0199:            goto IL_013d;                                               //br.s				IL_013d
	IL_019b:                                                                        //ldloc.2
	IL_019c:                                                                        //ldloc.1
	IL_019d:            if(V_2<V_1)goto IL_01a4;                                    //blt				IL_01a4
	IL_01a2:            goto IL_01b7;                                               //br.s				IL_01b7
	IL_01a4:                                                                        //ldarg.1
	IL_01a5:            Temp_3=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_01aa:            V_3=Temp_3;                                                 //stloc.3
	IL_01ab:                                                                        //ldloc.3
	IL_01ac:                                                                        //ldc.i4.0
	IL_01ad:            if(V_3<0)goto IL_012c;                                      //blt				IL_012c
	IL_01b2:            goto IL_0026;                                               //br				IL_0026
	IL_01b7:            return;                                                     //ret

}
inline Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x176::M_x1(System::IO::BinaryWriter^ A_0,System::UInt32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::IUnmanagedResource^>^ Temp_2 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_3 = nullptr;
	Root::T_x176::T_x1^ Temp_4 = nullptr;
	Root::T_x140^ Temp_5 = nullptr;
	System::Collections::Hashtable^ Temp_6 = nullptr;
	System::Collections::Hashtable^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	array<System::Byte>^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	Root::T_x140^ Temp_12 = nullptr;
	System::IO::Stream^ Temp_13 = nullptr;
	System::IO::Stream^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::Object^ Temp_17 = nullptr;
	System::Collections::Hashtable^ Temp_18 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_21 = nullptr;
	Reflector::CodeModel::IUnmanagedResource^ Temp_22 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_23 = nullptr;
	Reflector::CodeModel::IUnmanagedResource^ Temp_24 = nullptr;
	System::Object^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	System::Int32 Temp_27 = 0;
	System::Object^ Temp_28 = nullptr;
	Root::T_x176::T_x12^ Temp_29 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IUnmanagedResource^>^ V_0 = nullptr;
	Root::T_x140^ V_1 = nullptr;
	System::Collections::IDictionary^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Collections::IDictionary^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::String^ V_6 = nullptr;
	System::Collections::IDictionary^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::String^ V_9 = nullptr;
	Root::T_x176::T_x12^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	Root::T_x140^ V_12 = nullptr;
	System::Int32 V_13 = 0;
	//method body ------- 
	IL_0000:            goto IL_0063;                                               //br.s				IL_0063
	IL_0002:                                                                        //ldloc				V_13
	IL_0006:            switch(V_13){case 0:goto IL_0273;case 1:goto IL_01e2;case 2:goto IL_0158;case 3:goto IL_0230;case 4:goto IL_02b9;case 5:goto IL_01ba;case 6:goto IL_00a9;case 7:goto IL_00c2;case 8:goto IL_00fb;case 9:goto IL_01cd;case 10:goto IL_021b;case 11:goto IL_0187;case 12:goto IL_0127;case 13:goto IL_010d;case 14:goto IL_032c;case 15:goto IL_016f;case 16:goto IL_02f6;case 17:goto IL_019a;case 18:goto IL_0286;case 19:goto IL_030f;case 20:goto IL_029e;case 21:goto IL_0145;};//switch				(IL_0273,IL_01e2,IL_0158,IL_0230,IL_02b9,IL_01ba,IL_00a9,IL_00c2,IL_00fb,IL_01cd,IL_021b,IL_0187,IL_0127,IL_010d,IL_032c,IL_016f,IL_02f6,IL_019a,IL_0286,IL_030f,IL_029e,IL_0145)
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_0069:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_006e:                                                                        //conv.ovf.u4
	IL_006f:            Temp_2=gcnew array<Reflector::CodeModel::IUnmanagedResource^>(safe_cast<System::UInt32>(Temp_1));//newarr				Reflector::CodeModel::IUnmanagedResource
	IL_0074:            V_0=Temp_2;                                                 //stloc.0
	IL_0075:                                                                        //ldarg.0
	IL_0076:            Temp_3=this->F_x1;                                          //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_007b:                                                                        //ldloc.0
	IL_007c:                                                                        //ldc.i4.0
	IL_007d:            safe_cast<System::Collections::ICollection^>(Temp_3)->CopyTo(safe_cast<System::Array^>(V_0),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_0082:                                                                        //ldloc.0
	IL_0083:            Temp_4=gcnew Root::T_x176::T_x1();                          //newobj				void Root::T_x176::T_x1::.ctor()
	IL_0088:            System::Array::Sort(safe_cast<System::Array^>(V_0),safe_cast<System::Collections::IComparer^>(Temp_4));//call				void System::Array::Sort(System::Array^,System::Collections::IComparer^)
	IL_008d:            Temp_5=gcnew Root::T_x140();                                //newobj				void Root::T_x140::.ctor()
	IL_0092:            V_1=Temp_5;                                                 //stloc.1
	IL_0093:            Temp_6=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0098:            V_2=safe_cast<System::Collections::IDictionary^>(Temp_6);   //stloc.2
	IL_0099:                                                                        //ldc.i4.0
	IL_009a:            V_3=0;                                                      //stloc.3
	IL_009b:                                                                        //ldc.i4				0x6
	IL_00a0:            V_13=6;                                                     //stloc				V_13
	IL_00a4:            /*goto IL_0002;*/goto IL_00a9;                              //br				IL_0002
	IL_00a9:            goto IL_0147;                                               //br				IL_0147
	IL_00ae:                                                                        //ldloc.s				V_8
	IL_00b0:                                                                        //ldc.i4.1
	IL_00b1:                                                                        //add
	IL_00b2:            V_8=(V_8 + 1);                                              //stloc.s				V_8
	IL_00b4:                                                                        //ldc.i4				0x7
	IL_00b9:            V_13=7;                                                     //stloc				V_13
	IL_00bd:            /*goto IL_0002;*/goto IL_00c2;                              //br				IL_0002
	IL_00c2:            goto IL_0278;                                               //br				IL_0278
	IL_00c7:                                                                        //ldloc.s				V_7
	IL_00c9:                                                                        //ldloc.0
	IL_00ca:                                                                        //ldloc.s				V_8
	IL_00cc:                                                                        //ldelem.ref
	IL_00cd:                                                                        //ldloc.1
	IL_00ce:            Temp_27=V_1->M_x2();                                        //callvirt				System::Int32 Root::T_x140::M_x2()
	IL_00d3:                                                                        //box				System::Int32
	IL_00d8:            V_7->Add(safe_cast<System::Object^>(V_0[V_8]),safe_cast<System::Object^>(Temp_27));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_00dd:                                                                        //ldloc.0
	IL_00de:                                                                        //ldloc.s				V_8
	IL_00e0:                                                                        //ldelem.ref
	IL_00e1:            Temp_28=V_0[V_8]->Name;                                     //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Name()
	IL_00e6:                                                                        //isinst				System::String
	IL_00eb:            V_9=dynamic_cast<System::String^>(Temp_28);                 //stloc.s				V_9
	IL_00ed:                                                                        //ldc.i4				0x8
	IL_00f2:            V_13=8;                                                     //stloc				V_13
	IL_00f6:            /*goto IL_0002;*/goto IL_00fb;                              //br				IL_0002
	IL_00fb:                                                                        //ldloc.s				V_9
	IL_00fd:            if(V_9==nullptr)goto IL_00ae;                               //brfalse.s				IL_00ae
	IL_00ff:                                                                        //ldc.i4				0xd
	IL_0104:            V_13=13;                                                    //stloc				V_13
	IL_0108:            /*goto IL_0002;*/goto IL_010d;                              //br				IL_0002
	IL_010d:            goto IL_0171;                                               //br.s				IL_0171
	IL_010f:            Temp_18=gcnew System::Collections::Hashtable();             //newobj				void System::Collections::Hashtable::.ctor()
	IL_0114:            V_4=safe_cast<System::Collections::IDictionary^>(Temp_18);  //stloc.s				V_4
	IL_0116:                                                                        //ldc.i4.0
	IL_0117:            V_5=0;                                                      //stloc.s				V_5
	IL_0119:                                                                        //ldc.i4				0xc
	IL_011e:            V_13=12;                                                    //stloc				V_13
	IL_0122:            /*goto IL_0002;*/goto IL_0127;                              //br				IL_0002
	IL_0127:            goto IL_01bf;                                               //br				IL_01bf
	IL_012c:                                                                        //ldc.i4.0
	IL_012d:            Temp_29=gcnew Root::T_x176::T_x12(safe_cast<System::Int32>(0));//newobj				void Root::T_x176::T_x12::.ctor(System::Int32)
	IL_0132:            V_10=Temp_29;                                               //stloc.s				V_10
	IL_0134:                                                                        //ldc.i4.0
	IL_0135:            V_11=0;                                                     //stloc.s				V_11
	IL_0137:                                                                        //ldc.i4				0x15
	IL_013c:            V_13=21;                                                    //stloc				V_13
	IL_0140:            /*goto IL_0002;*/goto IL_0145;                              //br				IL_0002
	IL_0145:            goto IL_018c;                                               //br.s				IL_018c
	IL_0147:            goto IL_014a;                                               //br.s				IL_014a
	IL_0149:                                                                        //break
	IL_014a:                                                                        //ldc.i4				0x2
	IL_014f:            V_13=2;                                                     //stloc				V_13
	IL_0153:            /*goto IL_0002;*/goto IL_0158;                              //br				IL_0002
	IL_0158:                                                                        //ldloc.3
	IL_0159:                                                                        //ldloc.0
	IL_015a:            Temp_8=V_0->Length;                                         //ldlen
	IL_015b:                                                                        //conv.i4
	IL_015c:            if(V_3<Temp_8)goto IL_02bb;                                 //blt				IL_02bb
	IL_0161:                                                                        //ldc.i4				0xf
	IL_0166:            V_13=15;                                                    //stloc				V_13
	IL_016a:            /*goto IL_0002;*/goto IL_016f;                              //br				IL_0002
	IL_016f:            goto IL_010f;                                               //br.s				IL_010f
	IL_0171:                                                                        //ldloc.1
	IL_0172:                                                                        //ldloc.s				V_9
	IL_0174:            Root::T_x176::M_x1(V_1,V_9);                                //call				void Root::T_x176::M_x1(Root::T_x140^,System::String^)
	IL_0179:                                                                        //ldc.i4				0xb
	IL_017e:            V_13=11;                                                    //stloc				V_13
	IL_0182:            /*goto IL_0002;*/goto IL_0187;                              //br				IL_0002
	IL_0187:            goto IL_00ae;                                               //br				IL_00ae
	IL_018c:                                                                        //ldc.i4				0x11
	IL_0191:            V_13=17;                                                    //stloc				V_13
	IL_0195:            /*goto IL_0002;*/goto IL_019a;                              //br				IL_0002
	IL_019a:                                                                        //ldloc.s				V_11
	IL_019c:                                                                        //ldarg.0
	IL_019d:            Temp_19=this->F_x1;                                         //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_01a2:            Temp_20=safe_cast<System::Collections::ICollection^>(Temp_19)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01a7:            if(V_11<Temp_20)goto IL_0232;                               //blt				IL_0232
	IL_01ac:                                                                        //ldc.i4				0x5
	IL_01b1:            V_13=5;                                                     //stloc				V_13
	IL_01b5:            /*goto IL_0002;*/goto IL_01ba;                              //br				IL_0002
	IL_01ba:            goto IL_0331;                                               //br				IL_0331
	IL_01bf:                                                                        //ldc.i4				0x9
	IL_01c4:            V_13=9;                                                     //stloc				V_13
	IL_01c8:            /*goto IL_0002;*/goto IL_01cd;                              //br				IL_0002
	IL_01cd:                                                                        //ldloc.s				V_5
	IL_01cf:                                                                        //ldloc.0
	IL_01d0:            Temp_15=V_0->Length;                                        //ldlen
	IL_01d1:                                                                        //conv.i4
	IL_01d2:            if(V_5<Temp_15)goto IL_01e7;                                //blt.s				IL_01e7
	IL_01d4:                                                                        //ldc.i4				0x1
	IL_01d9:            V_13=1;                                                     //stloc				V_13
	IL_01dd:            /*goto IL_0002;*/goto IL_01e2;                              //br				IL_0002
	IL_01e2:            goto IL_0314;                                               //br				IL_0314
	IL_01e7:                                                                        //ldloc.s				V_4
	IL_01e9:                                                                        //ldloc.0
	IL_01ea:                                                                        //ldloc.s				V_5
	IL_01ec:                                                                        //ldelem.ref
	IL_01ed:                                                                        //ldloc.1
	IL_01ee:            Temp_16=V_1->M_x2();                                        //callvirt				System::Int32 Root::T_x140::M_x2()
	IL_01f3:                                                                        //box				System::Int32
	IL_01f8:            V_4->Add(safe_cast<System::Object^>(V_0[V_5]),safe_cast<System::Object^>(Temp_16));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_01fd:                                                                        //ldloc.0
	IL_01fe:                                                                        //ldloc.s				V_5
	IL_0200:                                                                        //ldelem.ref
	IL_0201:            Temp_17=V_0[V_5]->Type;                                     //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Type()
	IL_0206:                                                                        //isinst				System::String
	IL_020b:            V_6=dynamic_cast<System::String^>(Temp_17);                 //stloc.s				V_6
	IL_020d:                                                                        //ldc.i4				0xa
	IL_0212:            V_13=10;                                                    //stloc				V_13
	IL_0216:            /*goto IL_0002;*/goto IL_021b;                              //br				IL_0002
	IL_021b:                                                                        //ldloc.s				V_6
	IL_021d:            if(V_6==nullptr)goto IL_02fb;                               //brfalse				IL_02fb
	IL_0222:                                                                        //ldc.i4				0x3
	IL_0227:            V_13=3;                                                     //stloc				V_13
	IL_022b:            /*goto IL_0002;*/goto IL_0230;                              //br				IL_0002
	IL_0230:            goto IL_02a3;                                               //br.s				IL_02a3
	IL_0232:                                                                        //ldloc.s				V_10
	IL_0234:                                                                        //ldarg.0
	IL_0235:            Temp_21=this->F_x1;                                         //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_023a:                                                                        //ldloc.s				V_11
	IL_023c:            Temp_22=Temp_21[V_11];                                      //callvirt				Reflector::CodeModel::IUnmanagedResource^ Reflector::CodeModel::IUnmanagedResourceCollection::get_Item(System::Int32)
	IL_0241:                                                                        //ldloc.2
	IL_0242:                                                                        //ldarg.0
	IL_0243:            Temp_23=this->F_x1;                                         //ldfld				Reflector::CodeModel::IUnmanagedResourceCollection^ Root::T_x176 F_x1
	IL_0248:                                                                        //ldloc.s				V_11
	IL_024a:            Temp_24=Temp_23[V_11];                                      //callvirt				Reflector::CodeModel::IUnmanagedResource^ Reflector::CodeModel::IUnmanagedResourceCollection::get_Item(System::Int32)
	IL_024f:            Temp_25=V_2[safe_cast<System::Object^>(Temp_24)];           //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_0254:                                                                        //unbox				System::Int32
	IL_0259:                                                                        //ldind.i4
	IL_025a:            V_10->M_x1(Temp_22,safe_cast<System::Int32>(Temp_25));      //callvirt				void Root::T_x176::T_x12::M_x1(Reflector::CodeModel::IUnmanagedResource^,System::Int32)
	IL_025f:                                                                        //ldloc.s				V_11
	IL_0261:                                                                        //ldc.i4.1
	IL_0262:                                                                        //add
	IL_0263:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_0265:                                                                        //ldc.i4				0x0
	IL_026a:            V_13=0;                                                     //stloc				V_13
	IL_026e:            /*goto IL_0002;*/goto IL_0273;                              //br				IL_0002
	IL_0273:            goto IL_018c;                                               //br				IL_018c
	IL_0278:                                                                        //ldc.i4				0x12
	IL_027d:            V_13=18;                                                    //stloc				V_13
	IL_0281:            /*goto IL_0002;*/goto IL_0286;                              //br				IL_0002
	IL_0286:                                                                        //ldloc.s				V_8
	IL_0288:                                                                        //ldloc.0
	IL_0289:            Temp_26=V_0->Length;                                        //ldlen
	IL_028a:                                                                        //conv.i4
	IL_028b:            if(V_8<Temp_26)goto IL_00c7;                                //blt				IL_00c7
	IL_0290:                                                                        //ldc.i4				0x14
	IL_0295:            V_13=20;                                                    //stloc				V_13
	IL_0299:            /*goto IL_0002;*/goto IL_029e;                              //br				IL_0002
	IL_029e:            goto IL_012c;                                               //br				IL_012c
	IL_02a3:                                                                        //ldloc.1
	IL_02a4:                                                                        //ldloc.s				V_6
	IL_02a6:            Root::T_x176::M_x1(V_1,V_6);                                //call				void Root::T_x176::M_x1(Root::T_x140^,System::String^)
	IL_02ab:                                                                        //ldc.i4				0x4
	IL_02b0:            V_13=4;                                                     //stloc				V_13
	IL_02b4:            /*goto IL_0002;*/goto IL_02b9;                              //br				IL_0002
	IL_02b9:            goto IL_02fb;                                               //br.s				IL_02fb
	IL_02bb:                                                                        //ldloc.2
	IL_02bc:                                                                        //ldloc.0
	IL_02bd:                                                                        //ldloc.3
	IL_02be:                                                                        //ldelem.ref
	IL_02bf:                                                                        //ldloc.1
	IL_02c0:            Temp_9=V_1->M_x2();                                         //callvirt				System::Int32 Root::T_x140::M_x2()
	IL_02c5:                                                                        //box				System::Int32
	IL_02ca:            V_2->Add(safe_cast<System::Object^>(V_0[V_3]),safe_cast<System::Object^>(Temp_9));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_02cf:                                                                        //ldloc.1
	IL_02d0:                                                                        //ldloc.0
	IL_02d1:                                                                        //ldloc.3
	IL_02d2:                                                                        //ldelem.ref
	IL_02d3:            Temp_10=V_0[V_3]->Value;                                    //callvirt				array<System::Byte>^ Reflector::CodeModel::IUnmanagedResource::get_Value()
	IL_02d8:            V_1->M_x1(Temp_10);                                         //callvirt				void Root::T_x140::M_x1(array<System::Byte>^)
	IL_02dd:                                                                        //ldloc.1
	IL_02de:                                                                        //ldc.i4.8
	IL_02df:            Root::T_x176::M_x1(V_1,safe_cast<System::Int32>(8));        //call				void Root::T_x176::M_x1(Root::T_x140^,System::Int32)
	IL_02e4:                                                                        //ldloc.3
	IL_02e5:                                                                        //ldc.i4.1
	IL_02e6:                                                                        //add
	IL_02e7:            V_3=(V_3 + 1);                                              //stloc.3
	IL_02e8:                                                                        //ldc.i4				0x10
	IL_02ed:            V_13=16;                                                    //stloc				V_13
	IL_02f1:            /*goto IL_0002;*/goto IL_02f6;                              //br				IL_0002
	IL_02f6:            goto IL_0147;                                               //br				IL_0147
	IL_02fb:                                                                        //ldloc.s				V_5
	IL_02fd:                                                                        //ldc.i4.1
	IL_02fe:                                                                        //add
	IL_02ff:            V_5=(V_5 + 1);                                              //stloc.s				V_5
	IL_0301:                                                                        //ldc.i4				0x13
	IL_0306:            V_13=19;                                                    //stloc				V_13
	IL_030a:            /*goto IL_0002;*/goto IL_030f;                              //br				IL_0002
	IL_030f:            goto IL_01bf;                                               //br				IL_01bf
	IL_0314:            Temp_7=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0319:            V_7=safe_cast<System::Collections::IDictionary^>(Temp_7);   //stloc.s				V_7
	IL_031b:                                                                        //ldc.i4.0
	IL_031c:            V_8=0;                                                      //stloc.s				V_8
	IL_031e:                                                                        //ldc.i4				0xe
	IL_0323:            V_13=14;                                                    //stloc				V_13
	IL_0327:            /*goto IL_0002;*/goto IL_032c;                              //br				IL_0002
	IL_032c:            goto IL_0278;                                               //br				IL_0278
	IL_0331:                                                                        //ldarg.2
	IL_0332:                                                                        //ldloc.0
	IL_0333:            Temp_11=V_0->Length;                                        //ldlen
	IL_0334:                                                                        //conv.i4
	IL_0335:                                                                        //ldc.i4.s				16
	IL_0337:                                                                        //mul
	IL_0338:                                                                        //add
	IL_0339:            A_1=safe_cast<System::UInt32>((A_1 + safe_cast<System::UInt32>((Temp_11 * 16))));//starg.s				A_1
	IL_033b:            Temp_12=gcnew Root::T_x140();                               //newobj				void Root::T_x140::.ctor()
	IL_0340:            V_12=Temp_12;                                               //stloc.s				V_12
	IL_0342:                                                                        //ldloc.s				V_10
	IL_0344:                                                                        //ldloc.s				V_12
	IL_0346:                                                                        //ldarg.2
	IL_0347:            V_10->M_x1(V_12,A_1);                                       //callvirt				void Root::T_x176::T_x12::M_x1(Root::T_x140^,System::UInt32)
	IL_034c:                                                                        //ldloc.s				V_12
	IL_034e:                                                                        //ldarg.1
	IL_034f:            Temp_13=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_0354:            V_12->M_x1(Temp_13);                                        //callvirt				void Root::T_x140::M_x1(System::IO::Stream^)
	IL_0359:                                                                        //ldloc.1
	IL_035a:                                                                        //ldarg.1
	IL_035b:            Temp_14=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_0360:            V_1->M_x1(Temp_14);                                         //callvirt				void Root::T_x140::M_x1(System::IO::Stream^)
	IL_0365:            return;                                                     //ret

}
inline System::Int32 Root::T_x176::M_x1(Root::T_x139^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::UInt16 Temp_3 = 0;
	System::UInt16 Temp_4 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0009:                                                                        //pop
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0010:                                                                        //pop
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_2=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0017:                                                                        //pop
	IL_0018:                                                                        //ldarg.0
	IL_0019:            Temp_3=A_0->M_x11();                                        //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_001e:                                                                        //conv.i4
	IL_001f:            V_0=safe_cast<System::Int32>(Temp_3);                       //stloc.0
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_4=A_0->M_x11();                                        //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_0026:                                                                        //conv.i4
	IL_0027:            V_1=safe_cast<System::Int32>(Temp_4);                       //stloc.1
	IL_0028:                                                                        //ldloc.0
	IL_0029:                                                                        //ldloc.1
	IL_002a:                                                                        //add
	IL_002b:            return (V_0 + V_1);                                         //ret

}
inline System::String^ Root::T_x176::M_x1(Root::T_x139^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::UInt16 Temp_1 = 0;
	array<System::Char>^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Char Temp_4 = (System::Char)0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	array<System::Char>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0062;case 1:goto IL_0053;case 2:goto IL_0046;case 3:goto IL_008a;};//switch				(IL_0062,IL_0053,IL_0046,IL_008a)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0021:            V_0=Temp_0;                                                 //stloc.0
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldarg.1
	IL_0024:            A_0->M_x13(A_1);                                            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0029:                                                                        //ldarg.0
	IL_002a:            Temp_1=A_0->M_x11();                                        //callvirt				System::UInt16 Root::T_x139::M_x11()
	IL_002f:                                                                        //conv.i4
	IL_0030:            V_1=safe_cast<System::Int32>(Temp_1);                       //stloc.1
	IL_0031:                                                                        //ldloc.1
	IL_0032:                                                                        //conv.ovf.u4
	IL_0033:            Temp_2=gcnew array<System::Char>(safe_cast<System::UInt32>(V_1));//newarr				System::Char
	IL_0038:            V_2=Temp_2;                                                 //stloc.2
	IL_0039:                                                                        //ldc.i4.0
	IL_003a:            V_3=0;                                                      //stloc.3
	IL_003b:                                                                        //ldc.i4				0x2
	IL_0040:            V_4=2;                                                      //stloc				V_4
	IL_0044:            /*goto IL_0002;*/goto IL_0046;                              //br.s				IL_0002
	IL_0046:            goto IL_0048;                                               //br.s				IL_0048
	IL_0048:                                                                        //ldc.i4				0x1
	IL_004d:            V_4=1;                                                      //stloc				V_4
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:                                                                        //ldloc.3
	IL_0054:                                                                        //ldloc.1
	IL_0055:            if(V_3<V_1)goto IL_0064;                                    //blt.s				IL_0064
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_4=0;                                                      //stloc				V_4
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:            goto IL_008c;                                               //br.s				IL_008c
	IL_0064:                                                                        //ldloc.2
	IL_0065:                                                                        //ldloc.3
	IL_0066:                                                                        //ldarg.0
	IL_0067:            Temp_4=A_0->M_x8();                                         //callvirt				System::Char Root::T_x139::M_x8()
	IL_006c:            V_2[V_3]=Temp_4;                                            //stelem.i2
	IL_006d:                                                                        //ldloc.3
	IL_006e:                                                                        //ldc.i4.1
	IL_006f:                                                                        //add
	IL_0070:            V_3=(V_3 + 1);                                              //stloc.3
	IL_0071:                                                                        //ldc.i4.4
	IL_0072:                                                                        //dup
	IL_0073:                                                                        //dup
	IL_0074:                                                                        //ldc.i4.2
	IL_0075:                                                                        //sub
	IL_0076:                                                                        //blt				IL_0072
	IL_007b:                                                                        //pop
	IL_007c:                                                                        //ldc.i4				0x3
	IL_0081:            V_4=3;                                                      //stloc				V_4
	IL_0085:            /*goto IL_0002;*/goto IL_008a;                              //br				IL_0002
	IL_008a:            goto IL_0048;                                               //br.s				IL_0048
	IL_008c:                                                                        //ldarg.0
	IL_008d:                                                                        //ldloc.0
	IL_008e:            A_0->M_x13(V_0);                                            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0093:                                                                        //ldloc.2
	IL_0094:                                                                        //ldc.i4.0
	IL_0095:                                                                        //ldloc.1
	IL_0096:            Temp_3=gcnew System::String(V_2,safe_cast<System::Int32>(0),V_1);//newobj				void System::String::.ctor(array<System::Char>^,System::Int32,System::Int32)
	IL_009b:            return Temp_3;                                              //ret

}
inline Reflector::CodeModel::IUnmanagedResource^ Root::T_x176::M_x1(Root::T_x139^ A_0,Root::T_x167^ A_1,System::Int32 A_2,System::Object^ A_3,System::Object^ A_4,System::Int32 A_5)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::UnmanagedResource^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::UInt32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	array<System::Byte>^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IUnmanagedResource^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::UInt32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::UnmanagedResource();//newobj				void Reflector::CodeModel::Memory::UnmanagedResource::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IUnmanagedResource^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.s				A_4
	IL_000c:            V_0->Name=A_4;                                              //callvirt				void Reflector::CodeModel::IUnmanagedResource::set_Name(System::Object^)
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.3
	IL_0013:            V_0->Type=A_3;                                              //callvirt				void Reflector::CodeModel::IUnmanagedResource::set_Type(System::Object^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:                                                                        //ldarg.s				A_5
	IL_001b:            V_0->Language=A_5;                                          //callvirt				void Reflector::CodeModel::IUnmanagedResource::set_Language(System::Int32)
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_1=A_0->M_x19();                                        //callvirt				System::Int32 Root::T_x139::M_x19()
	IL_0026:            V_1=Temp_1;                                                 //stloc.1
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.2
	IL_0029:            A_0->M_x13(A_2);                                            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_2=A_0->M_x2();                                         //callvirt				System::UInt32 Root::T_x139::M_x2()
	IL_0034:            V_2=Temp_2;                                                 //stloc.2
	IL_0035:                                                                        //ldarg.0
	IL_0036:            Temp_3=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_003b:            V_3=Temp_3;                                                 //stloc.3
	IL_003c:                                                                        //ldloc.0
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_4=A_0->M_x5();                                         //callvirt				System::Int32 Root::T_x139::M_x5()
	IL_0043:            V_0->CodePage=Temp_4;                                       //callvirt				void Reflector::CodeModel::IUnmanagedResource::set_CodePage(System::Int32)
	IL_0048:                                                                        //ldarg.0
	IL_0049:                                                                        //ldarg.1
	IL_004a:                                                                        //ldloc.2
	IL_004b:            Temp_5=A_1->M_x1(V_2);                                      //callvirt				System::Int32 Root::T_x167::M_x1(System::UInt32)
	IL_0050:            A_0->M_x13(Temp_5);                                         //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0055:                                                                        //ldloc.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldloc.3
	IL_0058:            Temp_6=A_0->M_x8(V_3);                                      //callvirt				array<System::Byte>^ Root::T_x139::M_x8(System::Int32)
	IL_005d:            V_0->Value=Temp_6;                                          //callvirt				void Reflector::CodeModel::IUnmanagedResource::set_Value(array<System::Byte>^)
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldloc.1
	IL_0064:            A_0->M_x13(V_1);                                            //callvirt				void Root::T_x139::M_x13(System::Int32)
	IL_0069:                                                                        //ldloc.0
	IL_006a:            return V_0;                                                 //ret

}
inline void Root::T_x176::M_x1(Root::T_x140^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0002;                                               //br.s				IL_0002
	IL_0002:                                                                        //ldarg.0
	IL_0003:            Temp_0=A_0->M_x2();                                         //callvirt				System::Int32 Root::T_x140::M_x2()
	IL_0008:                                                                        //ldarg.1
	IL_0009:                                                                        //rem
	IL_000a:            if((Temp_0 % A_1)!=0)goto IL_000e;                          //brtrue.s				IL_000e
	IL_000c:            goto IL_0017;                                               //br.s				IL_0017
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:            A_0->M_x1(safe_cast<System::Byte>(0));                      //callvirt				void Root::T_x140::M_x1(System::Byte)
	IL_0015:            goto IL_0002;                                               //br.s				IL_0002
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x176::M_x1(Root::T_x140^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Char>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	//local variables.
	array<System::Char>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0074;case 1:goto IL_0049;case 2:goto IL_003c;case 3:goto IL_005a;};//switch				(IL_0074,IL_0049,IL_003c,IL_005a)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=A_1->ToCharArray();                                  //callvirt				array<System::Char>^ System::String::ToCharArray()
	IL_0021:            V_0=Temp_0;                                                 //stloc.0
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldloc.0
	IL_0024:            Temp_1=V_0->Length;                                         //ldlen
	IL_0025:                                                                        //conv.i4
	IL_0026:                                                                        //conv.u2
	IL_0027:            A_0->M_x1(safe_cast<System::UInt16>(Temp_1));               //callvirt				void Root::T_x140::M_x1(System::UInt16)
	IL_002c:                                                                        //ldc.i4.0
	IL_002d:            V_1=0;                                                      //stloc.1
	IL_002e:            goto IL_0031;                                               //br.s				IL_0031
	IL_0030:                                                                        //break
	IL_0031:                                                                        //ldc.i4				0x2
	IL_0036:            V_2=2;                                                      //stloc				V_2
	IL_003a:            /*goto IL_0002;*/goto IL_003c;                              //br.s				IL_0002
	IL_003c:            goto IL_003e;                                               //br.s				IL_003e
	IL_003e:                                                                        //ldc.i4				0x1
	IL_0043:            V_2=1;                                                      //stloc				V_2
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:                                                                        //ldloc.1
	IL_004a:                                                                        //ldloc.0
	IL_004b:            Temp_2=V_0->Length;                                         //ldlen
	IL_004c:                                                                        //conv.i4
	IL_004d:            if(V_1<Temp_2)goto IL_005c;                                 //blt.s				IL_005c
	IL_004f:                                                                        //ldc.i4				0x3
	IL_0054:            V_2=3;                                                      //stloc				V_2
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:            goto IL_0076;                                               //br.s				IL_0076
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //ldloc.0
	IL_005e:                                                                        //ldloc.1
	IL_005f:                                                                        //ldelem.u2
	IL_0060:            A_0->M_x1(V_0[V_1]);                                        //callvirt				void Root::T_x140::M_x1(System::Char)
	IL_0065:                                                                        //ldloc.1
	IL_0066:                                                                        //ldc.i4.1
	IL_0067:                                                                        //add
	IL_0068:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0069:                                                                        //ldc.i4				0x0
	IL_006e:            V_2=0;                                                      //stloc				V_2
	IL_0072:            /*goto IL_0002;*/goto IL_0074;                              //br.s				IL_0002
	IL_0074:            goto IL_003e;                                               //br.s				IL_003e
	IL_0076:                                                                        //ldarg.0
	IL_0077:                                                                        //ldc.i4.8
	IL_0078:            Root::T_x176::M_x1(A_0,safe_cast<System::Int32>(8));        //call				void Root::T_x176::M_x1(Root::T_x140^,System::Int32)
	IL_007d:            return;                                                     //ret

}
inline Root::T_x176::T_x12::T_x12(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Specialized::ListDictionary^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x176::T_x12 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x176::T_x12 F_x1
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.0
	IL_0016:            this->F_x2=0;                                               //stfld				System::UInt32 Root::T_x176::T_x12 F_x2
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4.0
	IL_001d:            this->F_x12=0;                                              //stfld				System::UInt32 Root::T_x176::T_x12 F_x12
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:            this->F_x13=0;                                              //stfld				System::UInt32 Root::T_x176::T_x12 F_x13
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:            this->F_x8=0;                                               //stfld				System::UInt16 Root::T_x176::T_x12 F_x8
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldc.i4.0
	IL_0032:            this->F_x5=0;                                               //stfld				System::UInt16 Root::T_x176::T_x12 F_x5
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_0=gcnew System::Collections::Specialized::ListDictionary();//newobj				void System::Collections::Specialized::ListDictionary::.ctor()
	IL_003d:            this->F_x9=Temp_0;                                          //stfld				System::Collections::Specialized::ListDictionary^ Root::T_x176::T_x12 F_x9
	IL_0042:            return;                                                     //ret

}
inline System::Int32 Root::T_x176::T_x12::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Specialized::ListDictionary^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.s				16
	IL_0002:                                                                        //ldarg.0
	IL_0003:            Temp_0=this->F_x9;                                          //ldfld				System::Collections::Specialized::ListDictionary^ Root::T_x176::T_x12 F_x9
	IL_0008:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::Specialized::ListDictionary::get_Count()
	IL_000d:                                                                        //ldc.i4.8
	IL_000e:                                                                        //mul
	IL_000f:                                                                        //add
	IL_0010:            return (16 + (Temp_1 * 8));                                 //ret

}
inline void Root::T_x176::T_x12::M_x1(Reflector::CodeModel::IUnmanagedResource^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Object^ Temp_1 = nullptr;
	Root::T_x176::T_x12^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	Root::T_x176::T_x12^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Collections::Specialized::ListDictionary^ Temp_6 = nullptr;
	array<System::Byte>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	Root::T_x176::T_x2^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	//local variables.
	Root::T_x176::T_x12^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0036;case 1:goto IL_00df;case 2:goto IL_004c;case 3:goto IL_0109;case 4:goto IL_0073;case 5:goto IL_00ef;case 6:goto IL_005c;};//switch				(IL_0036,IL_00df,IL_004c,IL_0109,IL_0073,IL_00ef,IL_005c)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            V_0=this;                                                   //stloc.0
	IL_0029:                                                                        //ldnull
	IL_002a:            V_1=safe_cast<System::Object^>(nullptr);                    //stloc.1
	IL_002b:                                                                        //ldc.i4				0x0
	IL_0030:            V_2=0;                                                      //stloc				V_2
	IL_0034:            /*goto IL_0002;*/goto IL_0036;                              //br.s				IL_0002
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x176::T_x12 F_x1
	IL_003c:            if(Temp_0!=0)goto IL_00e1;                                  //brtrue				IL_00e1
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_2=2;                                                      //stloc				V_2
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_004f;                                               //br.s				IL_004f
	IL_004e:                                                                        //break
	IL_004f:            goto IL_008d;                                               //br.s				IL_008d
	IL_0051:                                                                        //ldc.i4				0x6
	IL_0056:            V_2=6;                                                      //stloc				V_2
	IL_005a:            /*goto IL_0002;*/goto IL_005c;                              //br.s				IL_0002
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_12=this->F_x1;                                         //ldfld				System::Int32 Root::T_x176::T_x12 F_x1
	IL_0062:                                                                        //ldc.i4.2
	IL_0063:            if(Temp_12!=2)goto IL_010e;                                 //bne.un				IL_010e
	IL_0068:                                                                        //ldc.i4				0x4
	IL_006d:            V_2=4;                                                      //stloc				V_2
	IL_0071:            /*goto IL_0002;*/goto IL_0073;                              //br.s				IL_0002
	IL_0073:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_0075:                                                                        //ldarg.1
	IL_0076:            Temp_3=A_0->Name;                                           //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Name()
	IL_007b:            V_1=Temp_3;                                                 //stloc.1
	IL_007c:                                                                        //ldarg.0
	IL_007d:                                                                        //ldloc.1
	IL_007e:            Temp_4=this->M_x1(V_1);                                     //call				Root::T_x176::T_x12^ Root::T_x176::T_x12::M_x1(System::Object^)
	IL_0083:            V_0=Temp_4;                                                 //stloc.0
	IL_0084:                                                                        //ldloc.0
	IL_0085:                                                                        //ldarg.1
	IL_0086:                                                                        //ldarg.2
	IL_0087:            V_0->M_x1(A_0,A_1);                                         //callvirt				void Root::T_x176::T_x12::M_x1(Reflector::CodeModel::IUnmanagedResource^,System::Int32)
	IL_008c:            return;                                                     //ret
	IL_008d:                                                                        //ldarg.1
	IL_008e:            Temp_1=A_0->Type;                                           //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Type()
	IL_0093:            V_1=Temp_1;                                                 //stloc.1
	IL_0094:                                                                        //ldarg.0
	IL_0095:                                                                        //ldloc.1
	IL_0096:            Temp_2=this->M_x1(V_1);                                     //call				Root::T_x176::T_x12^ Root::T_x176::T_x12::M_x1(System::Object^)
	IL_009b:            V_0=Temp_2;                                                 //stloc.0
	IL_009c:                                                                        //ldloc.0
	IL_009d:                                                                        //ldarg.1
	IL_009e:                                                                        //ldarg.2
	IL_009f:            V_0->M_x1(A_0,A_1);                                         //callvirt				void Root::T_x176::T_x12::M_x1(Reflector::CodeModel::IUnmanagedResource^,System::Int32)
	IL_00a4:            return;                                                     //ret
	IL_00a5:                                                                        //ldarg.1
	IL_00a6:            Temp_5=A_0->Language;                                       //callvirt				System::Int32 Reflector::CodeModel::IUnmanagedResource::get_Language()
	IL_00ab:                                                                        //box				System::Int32
	IL_00b0:            V_1=safe_cast<System::Object^>(Temp_5);                     //stloc.1
	IL_00b1:                                                                        //ldarg.0
	IL_00b2:            Temp_6=this->F_x9;                                          //ldfld				System::Collections::Specialized::ListDictionary^ Root::T_x176::T_x12 F_x9
	IL_00b7:                                                                        //ldloc.1
	IL_00b8:                                                                        //ldarg.2
	IL_00b9:                                                                        //ldarg.1
	IL_00ba:            Temp_7=A_0->Value;                                          //callvirt				array<System::Byte>^ Reflector::CodeModel::IUnmanagedResource::get_Value()
	IL_00bf:            Temp_8=Temp_7->Length;                                      //ldlen
	IL_00c0:                                                                        //conv.i4
	IL_00c1:                                                                        //ldarg.1
	IL_00c2:            Temp_9=A_0->CodePage;                                       //callvirt				System::Int32 Reflector::CodeModel::IUnmanagedResource::get_CodePage()
	IL_00c7:            Temp_10=gcnew Root::T_x176::T_x2(A_1,Temp_8,Temp_9);        //newobj				void Root::T_x176::T_x2::.ctor(System::Int32,System::Int32,System::Int32)
	IL_00cc:            Temp_6->Add(V_1,safe_cast<System::Object^>(Temp_10));       //callvirt				void System::Collections::Specialized::ListDictionary::Add(System::Object^,System::Object^)
	IL_00d1:                                                                        //ldc.i4				0x1
	IL_00d6:            V_2=1;                                                      //stloc				V_2
	IL_00da:            /*goto IL_0002;*/goto IL_00df;                              //br				IL_0002
	IL_00df:            goto IL_010e;                                               //br.s				IL_010e
	IL_00e1:                                                                        //ldc.i4				0x5
	IL_00e6:            V_2=5;                                                      //stloc				V_2
	IL_00ea:            /*goto IL_0002;*/goto IL_00ef;                              //br				IL_0002
	IL_00ef:                                                                        //ldarg.0
	IL_00f0:            Temp_11=this->F_x1;                                         //ldfld				System::Int32 Root::T_x176::T_x12 F_x1
	IL_00f5:                                                                        //ldc.i4.1
	IL_00f6:            if(Temp_11!=1)goto IL_0051;                                 //bne.un				IL_0051
	IL_00fb:                                                                        //ldc.i4				0x3
	IL_0100:            V_2=3;                                                      //stloc				V_2
	IL_0104:            /*goto IL_0002;*/goto IL_0109;                              //br				IL_0002
	IL_0109:            goto IL_0075;                                               //br				IL_0075
	IL_010e:            return;                                                     //ret

}
inline array<Root::T_x176::T_x12^>^ Root::T_x176::T_x12::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Collections::Specialized::ListDictionary^ Temp_2 = nullptr;
	System::Collections::IDictionaryEnumerator^ Temp_3 = nullptr;
	array<Root::T_x176::T_x12^>^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	array<Root::T_x176::T_x12^>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	System::Collections::DictionaryEntry V_1;
	Root::T_x176::T_x12^ V_2 = nullptr;
	array<Root::T_x176::T_x12^>^ V_3 = nullptr;
	System::Collections::IDictionaryEnumerator^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_002f;                                               //br.s				IL_002f
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_0071;case 1:goto IL_0040;case 2:goto IL_00c9;case 3:goto IL_00b1;case 4:goto IL_00d9;case 5:goto IL_00f3;case 6:goto IL_00a0;case 7:goto IL_0110;case 8:goto IL_0057;};//switch				(IL_0071,IL_0040,IL_00c9,IL_00b1,IL_00d9,IL_00f3,IL_00a0,IL_0110,IL_0057)
	IL_002f:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0034:            V_0=Temp_0;                                                 //stloc.0
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_5=1;                                                      //stloc				V_5
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x176::T_x12 F_x1
	IL_0046:                                                                        //ldarg.1
	IL_0047:            if(Temp_1!=A_0)goto IL_00f5;                                //bne.un				IL_00f5
	IL_004c:                                                                        //ldc.i4				0x8
	IL_0051:            V_5=8;                                                      //stloc				V_5
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_0059:                                                                        //ldloc.0
	IL_005a:                                                                        //ldloc.2
	IL_005b:                                                                        //ldarg.1
	IL_005c:            Temp_4=V_2->M_x1(A_0);                                      //callvirt				array<Root::T_x176::T_x12^>^ Root::T_x176::T_x12::M_x1(System::Int32)
	IL_0061:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_4));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0066:                                                                        //ldc.i4				0x0
	IL_006b:            V_5=0;                                                      //stloc				V_5
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_0073:                                                                        //ldloc.s				V_4
	IL_0075:            Temp_6=safe_cast<System::Collections::IEnumerator^>(V_4)->Current;//callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_007a:                                                                        //unbox				System::Collections::DictionaryEntry
	IL_007f:                                                                        //ldobj				System::Collections::DictionaryEntry
	IL_0084:            V_1=safe_cast<System::Collections::DictionaryEntry>(Temp_6);//stloc.1
	IL_0085:                                                                        //ldloca.s				V_1
	IL_0087:            Temp_7=V_1.Value;                                           //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_008c:                                                                        //isinst				Root::T_x176::T_x12
	IL_0091:            V_2=dynamic_cast<Root::T_x176::T_x12^>(Temp_7);             //stloc.2
	IL_0092:                                                                        //ldc.i4				0x6
	IL_0097:            V_5=6;                                                      //stloc				V_5
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:                                                                        //ldloc.2
	IL_00a1:            if(V_2==nullptr)goto IL_00cb;                               //brfalse.s				IL_00cb
	IL_00a3:                                                                        //ldc.i4				0x3
	IL_00a8:            V_5=3;                                                      //stloc				V_5
	IL_00ac:            /*goto IL_0002;*/goto IL_00b1;                              //br				IL_0002
	IL_00b1:            goto IL_0059;                                               //br.s				IL_0059
	IL_00b3:                                                                        //ldloc.0
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:            Temp_10=V_0->Add(safe_cast<System::Object^>(this));         //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00ba:                                                                        //pop
	IL_00bb:                                                                        //ldc.i4				0x2
	IL_00c0:            V_5=2;                                                      //stloc				V_5
	IL_00c4:            /*goto IL_0002;*/goto IL_00c9;                              //br				IL_0002
	IL_00c9:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_00cb:                                                                        //ldc.i4				0x4
	IL_00d0:            V_5=4;                                                      //stloc				V_5
	IL_00d4:            /*goto IL_0002;*/goto IL_00d9;                              //br				IL_0002
	IL_00d9:                                                                        //ldloc.s				V_4
	IL_00db:            Temp_5=safe_cast<System::Collections::IEnumerator^>(V_4)->MoveNext();//callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00e0:            if(Temp_5)goto IL_0073;                                     //brtrue.s				IL_0073
	IL_00e2:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_00e4:                                                                        //break
	IL_00e5:                                                                        //ldc.i4				0x5
	IL_00ea:            V_5=5;                                                      //stloc				V_5
	IL_00ee:            /*goto IL_0002;*/goto IL_00f3;                              //br				IL_0002
	IL_00f3:            goto IL_0112;                                               //br.s				IL_0112
	IL_00f5:                                                                        //ldarg.0
	IL_00f6:            Temp_2=this->F_x9;                                          //ldfld				System::Collections::Specialized::ListDictionary^ Root::T_x176::T_x12 F_x9
	IL_00fb:            Temp_3=Temp_2->GetEnumerator();                             //callvirt				System::Collections::IDictionaryEnumerator^ System::Collections::Specialized::ListDictionary::GetEnumerator()
	IL_0100:            V_4=Temp_3;                                                 //stloc.s				V_4
	IL_0102:                                                                        //ldc.i4				0x7
	IL_0107:            V_5=7;                                                      //stloc				V_5
	IL_010b:            /*goto IL_0002;*/goto IL_0110;                              //br				IL_0002
	IL_0110:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_0112:                                                                        //ldloc.0
	IL_0113:            Temp_8=V_0->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0118:                                                                        //conv.ovf.u4
	IL_0119:            Temp_9=gcnew array<Root::T_x176::T_x12^>(safe_cast<System::UInt32>(Temp_8));//newarr				Root::T_x176::T_x12
	IL_011e:            V_3=Temp_9;                                                 //stloc.3
	IL_011f:                                                                        //ldloc.0
	IL_0120:                                                                        //ldloc.3
	IL_0121:                                                                        //ldc.i4.0
	IL_0122:            V_0->CopyTo(safe_cast<System::Array^>(V_3),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_0127:                                                                        //ldloc.3
	IL_0128:            return V_3;                                                 //ret

}
inline Root::T_x176::T_x12^ Root::T_x176::T_x12::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Specialized::ListDictionary^ Temp_0 = nullptr;
	System::Collections::IDictionaryEnumerator^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::UInt16 Temp_6 = 0;
	System::Object^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	Root::T_x176::T_x12^ Temp_9 = nullptr;
	System::Collections::Specialized::ListDictionary^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::Object^ Temp_12 = nullptr;
	System::UInt16 Temp_13 = 0;
	System::Object^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::Object^ Temp_16 = nullptr;
	//local variables.
	System::Collections::DictionaryEntry V_0;
	Root::T_x176::T_x12^ V_1 = nullptr;
	Root::T_x176::T_x12^ V_2 = nullptr;
	System::Collections::IDictionaryEnumerator^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_0067;                                               //br.s				IL_0067
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_00c7;case 1:goto IL_02a5;case 2:goto IL_027c;case 3:goto IL_00fa;case 4:goto IL_01a7;case 5:goto IL_0126;case 6:goto IL_01e4;case 7:goto IL_01c4;case 8:goto IL_02c4;case 9:goto IL_010d;case 10:goto IL_0219;case 11:goto IL_0206;case 12:goto IL_0292;case 13:goto IL_0091;case 14:goto IL_00a7;case 15:goto IL_007e;case 16:goto IL_00da;case 17:goto IL_0158;case 18:goto IL_0245;case 19:goto IL_0139;case 20:goto IL_025b;case 21:goto IL_017a;case 22:goto IL_0232;};//switch				(IL_00c7,IL_02a5,IL_027c,IL_00fa,IL_01a7,IL_0126,IL_01e4,IL_01c4,IL_02c4,IL_010d,IL_0219,IL_0206,IL_0292,IL_0091,IL_00a7,IL_007e,IL_00da,IL_0158,IL_0245,IL_0139,IL_025b,IL_017a,IL_0232)
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_0=this->F_x9;                                          //ldfld				System::Collections::Specialized::ListDictionary^ Root::T_x176::T_x12 F_x9
	IL_006d:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IDictionaryEnumerator^ System::Collections::Specialized::ListDictionary::GetEnumerator()
	IL_0072:            V_3=Temp_1;                                                 //stloc.3
	IL_0073:                                                                        //ldc.i4				0xf
	IL_0078:            V_4=15;                                                     //stloc				V_4
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_020b;                                               //br				IL_020b
	IL_0083:                                                                        //ldc.i4				0xd
	IL_0088:            V_4=13;                                                     //stloc				V_4
	IL_008c:            /*goto IL_0002;*/goto IL_0091;                              //br				IL_0002
	IL_0091:                                                                        //ldarg.1
	IL_0092:                                                                        //isinst				System::Int32
	IL_0097:            if(safe_cast<System::Int32>(A_0)==0)goto IL_00ff;           //brfalse.s				IL_00ff
	IL_0099:                                                                        //ldc.i4				0xe
	IL_009e:            V_4=14;                                                     //stloc				V_4
	IL_00a2:            /*goto IL_0002;*/goto IL_00a7;                              //br				IL_0002
	IL_00a7:            goto IL_015d;                                               //br				IL_015d
	IL_00ac:                                                                        //ldloca.s				V_0
	IL_00ae:            Temp_7=V_0.Value;                                           //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_00b3:                                                                        //castclass				Root::T_x176::T_x12
	IL_00b8:            V_2=safe_cast<Root::T_x176::T_x12^>(Temp_7);                //stloc.2
	IL_00b9:                                                                        //ldc.i4				0x0
	IL_00be:            V_4=0;                                                      //stloc				V_4
	IL_00c2:            /*goto IL_0002;*/goto IL_00c7;                              //br				IL_0002
	IL_00c7:            goto IL_02c9;                                               //leave				IL_02c9
	IL_00cc:                                                                        //ldc.i4				0x10
	IL_00d1:            V_4=16;                                                     //stloc				V_4
	IL_00d5:            /*goto IL_0002;*/goto IL_00da;                              //br				IL_0002
	IL_00da:                                                                        //ldarg.1
	IL_00db:                                                                        //ldloca.s				V_0
	IL_00dd:            Temp_14=V_0.Key;                                            //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_00e2:            Temp_15=A_0->Equals(Temp_14);                               //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_00e7:            if(!Temp_15)goto IL_0237;                                   //brfalse				IL_0237
	IL_00ec:                                                                        //ldc.i4				0x3
	IL_00f1:            V_4=3;                                                      //stloc				V_4
	IL_00f5:            /*goto IL_0002;*/goto IL_00fa;                              //br				IL_0002
	IL_00fa:            goto IL_01c9;                                               //br				IL_01c9
	IL_00ff:                                                                        //ldc.i4				0x9
	IL_0104:            V_4=9;                                                      //stloc				V_4
	IL_0108:            /*goto IL_0002;*/goto IL_010d;                              //br				IL_0002
	IL_010d:            goto IL_0110;                                               //br.s				IL_0110
	IL_010f:                                                                        //break
	IL_0110:                                                                        //ldarg.1
	IL_0111:                                                                        //isinst				System::String
	IL_0116:            if(dynamic_cast<System::String^>(A_0)==nullptr)goto IL_017c;//brfalse.s				IL_017c
	IL_0118:                                                                        //ldc.i4				0x5
	IL_011d:            V_4=5;                                                      //stloc				V_4
	IL_0121:            /*goto IL_0002;*/goto IL_0126;                              //br				IL_0002
	IL_0126:            goto IL_01e9;                                               //br				IL_01e9
	IL_012b:                                                                        //ldc.i4				0x13
	IL_0130:            V_4=19;                                                     //stloc				V_4
	IL_0134:            /*goto IL_0002;*/goto IL_0139;                              //br				IL_0002
	IL_0139:                                                                        //ldloca.s				V_0
	IL_013b:            Temp_16=V_0.Key;                                            //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_0140:                                                                        //isinst				System::Int32
	IL_0145:            if(safe_cast<System::Int32>(Temp_16)==0)goto IL_0237;       //brfalse				IL_0237
	IL_014a:                                                                        //ldc.i4				0x11
	IL_014f:            V_4=17;                                                     //stloc				V_4
	IL_0153:            /*goto IL_0002;*/goto IL_0158;                              //br				IL_0002
	IL_0158:            goto IL_00cc;                                               //br				IL_00cc
	IL_015d:                                                                        //ldarg.0
	IL_015e:                                                                        //dup
	IL_015f:            Temp_13=this->F_x5;                                         //ldfld				System::UInt16 Root::T_x176::T_x12 F_x5
	IL_0164:                                                                        //ldc.i4.1
	IL_0165:                                                                        //add
	IL_0166:                                                                        //conv.u2
	IL_0167:            this->F_x5=safe_cast<System::UInt16>((Temp_13 + 1));        //stfld				System::UInt16 Root::T_x176::T_x12 F_x5
	IL_016c:                                                                        //ldc.i4				0x15
	IL_0171:            V_4=21;                                                     //stloc				V_4
	IL_0175:            /*goto IL_0002;*/goto IL_017a;                              //br				IL_0002
	IL_017a:            goto IL_00ff;                                               //br.s				IL_00ff
	IL_017c:                                                                        //ldarg.0
	IL_017d:            Temp_8=this->F_x1;                                          //ldfld				System::Int32 Root::T_x176::T_x12 F_x1
	IL_0182:                                                                        //ldc.i4.1
	IL_0183:                                                                        //add
	IL_0184:            Temp_9=gcnew Root::T_x176::T_x12((Temp_8 + 1));             //newobj				void Root::T_x176::T_x12::.ctor(System::Int32)
	IL_0189:            V_1=Temp_9;                                                 //stloc.1
	IL_018a:                                                                        //ldarg.0
	IL_018b:            Temp_10=this->F_x9;                                         //ldfld				System::Collections::Specialized::ListDictionary^ Root::T_x176::T_x12 F_x9
	IL_0190:                                                                        //ldarg.1
	IL_0191:                                                                        //ldloc.1
	IL_0192:            Temp_10->Add(A_0,safe_cast<System::Object^>(V_1));          //callvirt				void System::Collections::Specialized::ListDictionary::Add(System::Object^,System::Object^)
	IL_0197:                                                                        //ldloc.1
	IL_0198:            return V_1;                                                 //ret
	IL_0199:                                                                        //ldc.i4				0x4
	IL_019e:            V_4=4;                                                      //stloc				V_4
	IL_01a2:            /*goto IL_0002;*/goto IL_01a7;                              //br				IL_0002
	IL_01a7:                                                                        //ldarg.1
	IL_01a8:                                                                        //ldloca.s				V_0
	IL_01aa:            Temp_4=V_0.Key;                                             //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_01af:            Temp_5=A_0->Equals(Temp_4);                                 //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_01b4:            if(!Temp_5)goto IL_020b;                                    //brfalse.s				IL_020b
	IL_01b6:                                                                        //ldc.i4				0x7
	IL_01bb:            V_4=7;                                                      //stloc				V_4
	IL_01bf:            /*goto IL_0002;*/goto IL_01c4;                              //br				IL_0002
	IL_01c4:            goto IL_00ac;                                               //br				IL_00ac
	IL_01c9:                                                                        //ldloca.s				V_0
	IL_01cb:            Temp_3=V_0.Value;                                           //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_01d0:                                                                        //castclass				Root::T_x176::T_x12
	IL_01d5:            V_2=safe_cast<Root::T_x176::T_x12^>(Temp_3);                //stloc.2
	IL_01d6:                                                                        //ldc.i4				0x6
	IL_01db:            V_4=6;                                                      //stloc				V_4
	IL_01df:            /*goto IL_0002;*/goto IL_01e4;                              //br				IL_0002
	IL_01e4:            goto IL_02c9;                                               //leave				IL_02c9
	IL_01e9:                                                                        //ldarg.0
	IL_01ea:                                                                        //dup
	IL_01eb:            Temp_6=this->F_x8;                                          //ldfld				System::UInt16 Root::T_x176::T_x12 F_x8
	IL_01f0:                                                                        //ldc.i4.1
	IL_01f1:                                                                        //add
	IL_01f2:                                                                        //conv.u2
	IL_01f3:            this->F_x8=safe_cast<System::UInt16>((Temp_6 + 1));         //stfld				System::UInt16 Root::T_x176::T_x12 F_x8
	IL_01f8:                                                                        //ldc.i4				0xb
	IL_01fd:            V_4=11;                                                     //stloc				V_4
	IL_0201:            /*goto IL_0002;*/goto IL_0206;                              //br				IL_0002
	IL_0206:            goto IL_017c;                                               //br				IL_017c
	IL_020b:                                                                        //ldc.i4				0xa
	IL_0210:            V_4=10;                                                     //stloc				V_4
	IL_0214:            /*goto IL_0002;*/goto IL_0219;                              //br				IL_0002
	IL_0219:                                                                        //ldloc.3
	IL_021a:            Temp_11=safe_cast<System::Collections::IEnumerator^>(V_3)->MoveNext();//callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_021f:            if(Temp_11)goto IL_025d;                                    //brtrue				IL_025d
	IL_0224:                                                                        //ldc.i4				0x16
	IL_0229:            V_4=22;                                                     //stloc				V_4
	IL_022d:            /*goto IL_0002;*/goto IL_0232;                              //br				IL_0002
	IL_0232:            goto IL_0083;                                               //br				IL_0083
	IL_0237:                                                                        //ldc.i4				0x12
	IL_023c:            V_4=18;                                                     //stloc				V_4
	IL_0240:            /*goto IL_0002;*/goto IL_0245;                              //br				IL_0002
	IL_0245:                                                                        //ldarg.1
	IL_0246:                                                                        //isinst				System::String
	IL_024b:            if(dynamic_cast<System::String^>(A_0)==nullptr)goto IL_020b;//brfalse.s				IL_020b
	IL_024d:                                                                        //ldc.i4				0x14
	IL_0252:            V_4=20;                                                     //stloc				V_4
	IL_0256:            /*goto IL_0002;*/goto IL_025b;                              //br				IL_0002
	IL_025b:            goto IL_0297;                                               //br.s				IL_0297
	IL_025d:                                                                        //ldloc.3
	IL_025e:            Temp_12=safe_cast<System::Collections::IEnumerator^>(V_3)->Current;//callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0263:                                                                        //unbox				System::Collections::DictionaryEntry
	IL_0268:                                                                        //ldobj				System::Collections::DictionaryEntry
	IL_026d:            V_0=safe_cast<System::Collections::DictionaryEntry>(Temp_12);//stloc.0
	IL_026e:                                                                        //ldc.i4				0x2
	IL_0273:            V_4=2;                                                      //stloc				V_4
	IL_0277:            /*goto IL_0002;*/goto IL_027c;                              //br				IL_0002
	IL_027c:                                                                        //ldarg.1
	IL_027d:                                                                        //isinst				System::Int32
	IL_0282:            if(safe_cast<System::Int32>(A_0)==0)goto IL_0237;           //brfalse.s				IL_0237
	IL_0284:                                                                        //ldc.i4				0xc
	IL_0289:            V_4=12;                                                     //stloc				V_4
	IL_028d:            /*goto IL_0002;*/goto IL_0292;                              //br				IL_0002
	IL_0292:            goto IL_012b;                                               //br				IL_012b
	IL_0297:                                                                        //ldc.i4				0x1
	IL_029c:            V_4=1;                                                      //stloc				V_4
	IL_02a0:            /*goto IL_0002;*/goto IL_02a5;                              //br				IL_0002
	IL_02a5:                                                                        //ldloca.s				V_0
	IL_02a7:            Temp_2=V_0.Key;                                             //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_02ac:                                                                        //isinst				System::String
	IL_02b1:            if(dynamic_cast<System::String^>(Temp_2)==nullptr)goto IL_020b;//brfalse				IL_020b
	IL_02b6:                                                                        //ldc.i4				0x8
	IL_02bb:            V_4=8;                                                      //stloc				V_4
	IL_02bf:            /*goto IL_0002;*/goto IL_02c4;                              //br				IL_0002
	IL_02c4:            goto IL_0199;                                               //br				IL_0199
	IL_02c9:                                                                        //ldloc.2
	IL_02ca:            return V_2;                                                 //ret

}
inline void Root::T_x176::T_x12::M_x1(Root::T_x140^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::UInt32 Temp_1 = 0;
	System::UInt32 Temp_2 = 0;
	System::UInt16 Temp_3 = 0;
	System::UInt16 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x2;                                          //ldfld				System::UInt32 Root::T_x176::T_x12 F_x2
	IL_0012:            A_0->M_x1(Temp_0);                                          //callvirt				void Root::T_x140::M_x1(System::UInt32)
	IL_0017:                                                                        //ldarg.1
	IL_0018:                                                                        //ldarg.0
	IL_0019:            Temp_1=this->F_x12;                                         //ldfld				System::UInt32 Root::T_x176::T_x12 F_x12
	IL_001e:            A_0->M_x1(Temp_1);                                          //callvirt				void Root::T_x140::M_x1(System::UInt32)
	IL_0023:                                                                        //ldarg.1
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_2=this->F_x13;                                         //ldfld				System::UInt32 Root::T_x176::T_x12 F_x13
	IL_002a:            A_0->M_x1(Temp_2);                                          //callvirt				void Root::T_x140::M_x1(System::UInt32)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_3=this->F_x8;                                          //ldfld				System::UInt16 Root::T_x176::T_x12 F_x8
	IL_0036:            A_0->M_x1(Temp_3);                                          //callvirt				void Root::T_x140::M_x1(System::UInt16)
	IL_003b:                                                                        //ldarg.1
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_4=this->F_x5;                                          //ldfld				System::UInt16 Root::T_x176::T_x12 F_x5
	IL_0042:            A_0->M_x1(Temp_4);                                          //callvirt				void Root::T_x140::M_x1(System::UInt16)
	IL_0047:            return;                                                     //ret

}
inline void Root::T_x176::T_x12::M_x1(Root::T_x140^ A_0,System::UInt32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Root::T_x176::T_x12^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Object^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Collections::Specialized::ListDictionary^ Temp_6 = nullptr;
	System::Collections::IDictionaryEnumerator^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	array<Root::T_x176::T_x12^>^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	array<Root::T_x176::T_x12^>^ V_3 = nullptr;
	Root::T_x176::T_x12^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	array<Root::T_x176::T_x12^>^ V_7 = nullptr;
	Root::T_x176::T_x12^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	Root::T_x176::T_x12^ V_10 = nullptr;
	System::Collections::DictionaryEntry V_11;
	Root::T_x176::T_x12^ V_12 = nullptr;
	Root::T_x176::T_x2^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	array<Root::T_x176::T_x12^>^ V_15 = nullptr;
	System::Int32 V_16 = 0;
	System::Collections::IDictionaryEnumerator^ V_17 = nullptr;
	System::Int32 V_18 = 0;
	//method body ------- 
	IL_0000:            goto IL_007f;                                               //br.s				IL_007f
	IL_0002:                                                                        //ldloc				V_18
	IL_0006:            switch(V_18){case 0:goto IL_0163;case 1:goto IL_011e;case 2:goto IL_0306;case 3:goto IL_01cc;case 4:goto IL_0233;case 5:goto IL_0291;case 6:goto IL_01f4;case 7:goto IL_03e0;case 8:goto IL_0199;case 9:goto IL_0093;case 10:goto IL_00d7;case 11:goto IL_02da;case 12:goto IL_03cb;case 13:goto IL_0384;case 14:goto IL_0207;case 15:goto IL_0273;case 16:goto IL_02b0;case 17:goto IL_0319;case 18:goto IL_0137;case 19:goto IL_0107;case 20:goto IL_0249;case 21:goto IL_01df;case 22:goto IL_0184;case 23:goto IL_014a;case 24:goto IL_0333;case 25:goto IL_0220;case 26:goto IL_01b2;case 27:goto IL_0360;case 28:goto IL_02ed;};//switch				(IL_0163,IL_011e,IL_0306,IL_01cc,IL_0233,IL_0291,IL_01f4,IL_03e0,IL_0199,IL_0093,IL_00d7,IL_02da,IL_03cb,IL_0384,IL_0207,IL_0273,IL_02b0,IL_0319,IL_0137,IL_0107,IL_0249,IL_01df,IL_0184,IL_014a,IL_0333,IL_0220,IL_01b2,IL_0360,IL_02ed)
	IL_007f:                                                                        //ldc.i4.0
	IL_0080:            V_0=0;                                                      //stloc.0
	IL_0081:                                                                        //ldc.i4.0
	IL_0082:            V_1=0;                                                      //stloc.1
	IL_0083:                                                                        //ldc.i4.0
	IL_0084:            V_2=0;                                                      //stloc.2
	IL_0085:                                                                        //ldc.i4				0x9
	IL_008a:            V_18=9;                                                     //stloc				V_18
	IL_008e:            /*goto IL_0002;*/goto IL_0093;                              //br				IL_0002
	IL_0093:            goto IL_01d1;                                               //br				IL_01d1
	IL_0098:                                                                        //ldarg.1
	IL_0099:                                                                        //ldloc.s				V_5
	IL_009b:            A_0->M_x12(V_5);                                            //callvirt				void Root::T_x140::M_x12(System::Int32)
	IL_00a0:                                                                        //ldarg.1
	IL_00a1:            Temp_2=A_0->M_x2();                                         //callvirt				System::Int32 Root::T_x140::M_x2()
	IL_00a6:            V_14=Temp_2;                                                //stloc.s				V_14
	IL_00a8:                                                                        //ldarg.1
	IL_00a9:                                                                        //ldloc.s				V_5
	IL_00ab:            A_0->M_x13(V_5);                                            //callvirt				void Root::T_x140::M_x13(System::Int32)
	IL_00b0:                                                                        //ldloc.s				V_13
	IL_00b2:                                                                        //ldarg.1
	IL_00b3:                                                                        //ldarg.2
	IL_00b4:            V_13->M_x1(A_0,A_1);                                        //callvirt				void Root::T_x176::T_x2::M_x1(Root::T_x140^,System::UInt32)
	IL_00b9:                                                                        //ldarg.1
	IL_00ba:            Temp_3=A_0->M_x2();                                         //callvirt				System::Int32 Root::T_x140::M_x2()
	IL_00bf:            V_5=Temp_3;                                                 //stloc.s				V_5
	IL_00c1:                                                                        //ldarg.1
	IL_00c2:                                                                        //ldloc.s				V_14
	IL_00c4:            A_0->M_x13(V_14);                                           //callvirt				void Root::T_x140::M_x13(System::Int32)
	IL_00c9:                                                                        //ldc.i4				0xa
	IL_00ce:            V_18=10;                                                    //stloc				V_18
	IL_00d2:            /*goto IL_0002;*/goto IL_00d7;                              //br				IL_0002
	IL_00d7:            goto IL_030b;                                               //br				IL_030b
	IL_00dc:                                                                        //ldloc.s				V_15
	IL_00de:                                                                        //ldloc.s				V_16
	IL_00e0:                                                                        //ldelem.ref
	IL_00e1:            V_10=V_15[V_16];                                            //stloc.s				V_10
	IL_00e3:                                                                        //ldloc.s				V_10
	IL_00e5:                                                                        //ldarg.1
	IL_00e6:            V_10->M_x1(A_0);                                            //callvirt				void Root::T_x176::T_x12::M_x1(Root::T_x140^)
	IL_00eb:                                                                        //ldloc.s				V_10
	IL_00ed:            Temp_6=V_10->F_x9;                                          //ldfld				System::Collections::Specialized::ListDictionary^ Root::T_x176::T_x12 F_x9
	IL_00f2:            Temp_7=Temp_6->GetEnumerator();                             //callvirt				System::Collections::IDictionaryEnumerator^ System::Collections::Specialized::ListDictionary::GetEnumerator()
	IL_00f7:            V_17=Temp_7;                                                //stloc.s				V_17
	IL_00f9:                                                                        //ldc.i4				0x13
	IL_00fe:            V_18=19;                                                    //stloc				V_18
	IL_0102:            /*goto IL_0002;*/goto IL_0107;                              //br				IL_0002
	IL_0107:            goto IL_030b;                                               //br				IL_030b
	IL_010c:                                                                        //ldloc.2
	IL_010d:                                                                        //ldc.i4.1
	IL_010e:                                                                        //add
	IL_010f:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0110:                                                                        //ldc.i4				0x1
	IL_0115:            V_18=1;                                                     //stloc				V_18
	IL_0119:            /*goto IL_0002;*/goto IL_011e;                              //br				IL_0002
	IL_011e:            goto IL_01d1;                                               //br				IL_01d1
	IL_0123:                                                                        //ldloc.s				V_16
	IL_0125:                                                                        //ldc.i4.1
	IL_0126:                                                                        //add
	IL_0127:            V_16=(V_16 + 1);                                            //stloc.s				V_16
	IL_0129:                                                                        //ldc.i4				0x12
	IL_012e:            V_18=18;                                                    //stloc				V_18
	IL_0132:            /*goto IL_0002;*/goto IL_0137;                              //br				IL_0002
	IL_0137:            goto IL_01f9;                                               //br				IL_01f9
	IL_013c:                                                                        //ldc.i4				0x17
	IL_0141:            V_18=23;                                                    //stloc				V_18
	IL_0145:            /*goto IL_0002;*/goto IL_014a;                              //br				IL_0002
	IL_014a:                                                                        //ldloc.s				V_16
	IL_014c:                                                                        //ldloc.s				V_15
	IL_014e:            Temp_13=V_15->Length;                                       //ldlen
	IL_014f:                                                                        //conv.i4
	IL_0150:            if(V_16<Temp_13)goto IL_02b5;                               //blt				IL_02b5
	IL_0155:                                                                        //ldc.i4				0x0
	IL_015a:            V_18=0;                                                     //stloc				V_18
	IL_015e:            /*goto IL_0002;*/goto IL_0163;                              //br				IL_0002
	IL_0163:            goto IL_010c;                                               //br.s				IL_010c
	IL_0165:            goto IL_0168;                                               //br.s				IL_0168
	IL_0167:                                                                        //break
	IL_0168:                                                                        //ldloca.s				V_11
	IL_016a:            Temp_4=V_11.Value;                                          //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_016f:                                                                        //isinst				Root::T_x176::T_x2
	IL_0174:            V_13=dynamic_cast<Root::T_x176::T_x2^>(Temp_4);             //stloc.s				V_13
	IL_0176:                                                                        //ldc.i4				0x16
	IL_017b:            V_18=22;                                                    //stloc				V_18
	IL_017f:            /*goto IL_0002;*/goto IL_0184;                              //br				IL_0002
	IL_0184:                                                                        //ldloc.s				V_13
	IL_0186:            if(V_13==nullptr)goto IL_030b;                              //brfalse				IL_030b
	IL_018b:                                                                        //ldc.i4				0x8
	IL_0190:            V_18=8;                                                     //stloc				V_18
	IL_0194:            /*goto IL_0002;*/goto IL_0199;                              //br				IL_0002
	IL_0199:            goto IL_0098;                                               //br				IL_0098
	IL_019e:                                                                        //ldloc.s				V_6
	IL_01a0:                                                                        //ldc.i4.1
	IL_01a1:                                                                        //add
	IL_01a2:            V_6=(V_6 + 1);                                              //stloc.s				V_6
	IL_01a4:                                                                        //ldc.i4				0x1a
	IL_01a9:            V_18=26;                                                    //stloc				V_18
	IL_01ad:            /*goto IL_0002;*/goto IL_01b2;                              //br				IL_0002
	IL_01b2:            goto IL_0225;                                               //br.s				IL_0225
	IL_01b4:                                                                        //ldloc.0
	IL_01b5:            V_9=V_0;                                                    //stloc.s				V_9
	IL_01b7:                                                                        //ldloc.s				V_7
	IL_01b9:            V_15=V_7;                                                   //stloc.s				V_15
	IL_01bb:                                                                        //ldc.i4.0
	IL_01bc:            V_16=0;                                                     //stloc.s				V_16
	IL_01be:                                                                        //ldc.i4				0x3
	IL_01c3:            V_18=3;                                                     //stloc				V_18
	IL_01c7:            /*goto IL_0002;*/goto IL_01cc;                              //br				IL_0002
	IL_01cc:            goto IL_01f9;                                               //br				IL_01f9
	IL_01d1:                                                                        //ldc.i4				0x15
	IL_01d6:            V_18=21;                                                    //stloc				V_18
	IL_01da:            /*goto IL_0002;*/goto IL_01df;                              //br				IL_0002
	IL_01df:                                                                        //ldloc.2
	IL_01e0:                                                                        //ldc.i4.3
	IL_01e1:            if(V_2<3)goto IL_0275;                                      //blt				IL_0275
	IL_01e6:                                                                        //ldc.i4				0x6
	IL_01eb:            V_18=6;                                                     //stloc				V_18
	IL_01ef:            /*goto IL_0002;*/goto IL_01f4;                              //br				IL_0002
	IL_01f4:            goto IL_0296;                                               //br				IL_0296
	IL_01f9:                                                                        //ldc.i4				0xe
	IL_01fe:            V_18=14;                                                    //stloc				V_18
	IL_0202:            /*goto IL_0002;*/goto IL_0207;                              //br				IL_0002
	IL_0207:                                                                        //ldloc.s				V_16
	IL_0209:                                                                        //ldloc.s				V_15
	IL_020b:            Temp_5=V_15->Length;                                        //ldlen
	IL_020c:                                                                        //conv.i4
	IL_020d:            if(V_16<Temp_5)goto IL_00dc;                                //blt				IL_00dc
	IL_0212:                                                                        //ldc.i4				0x19
	IL_0217:            V_18=25;                                                    //stloc				V_18
	IL_021b:            /*goto IL_0002;*/goto IL_0220;                              //br				IL_0002
	IL_0220:            goto IL_019e;                                               //br				IL_019e
	IL_0225:                                                                        //ldc.i4				0x4
	IL_022a:            V_18=4;                                                     //stloc				V_18
	IL_022e:            /*goto IL_0002;*/goto IL_0233;                              //br				IL_0002
	IL_0233:                                                                        //ldloc.s				V_6
	IL_0235:                                                                        //ldc.i4.3
	IL_0236:            if(V_6<3)goto IL_0365;                                      //blt				IL_0365
	IL_023b:                                                                        //ldc.i4				0x14
	IL_0240:            V_18=20;                                                    //stloc				V_18
	IL_0244:            /*goto IL_0002;*/goto IL_0249;                              //br				IL_0002
	IL_0249:            goto IL_03e5;                                               //br				IL_03e5
	IL_024e:                                                                        //ldloc.s				V_15
	IL_0250:                                                                        //ldloc.s				V_16
	IL_0252:                                                                        //ldelem.ref
	IL_0253:            V_8=V_15[V_16];                                             //stloc.s				V_8
	IL_0255:                                                                        //ldloc.0
	IL_0256:                                                                        //ldloc.s				V_8
	IL_0258:            Temp_16=V_8->M_x1();                                        //callvirt				System::Int32 Root::T_x176::T_x12::M_x1()
	IL_025d:                                                                        //add
	IL_025e:            V_0=(V_0 + Temp_16);                                        //stloc.0
	IL_025f:                                                                        //ldloc.s				V_16
	IL_0261:                                                                        //ldc.i4.1
	IL_0262:                                                                        //add
	IL_0263:            V_16=(V_16 + 1);                                            //stloc.s				V_16
	IL_0265:                                                                        //ldc.i4				0xf
	IL_026a:            V_18=15;                                                    //stloc				V_18
	IL_026e:            /*goto IL_0002;*/goto IL_0273;                              //br				IL_0002
	IL_0273:            goto IL_02df;                                               //br.s				IL_02df
	IL_0275:                                                                        //ldarg.0
	IL_0276:                                                                        //ldloc.2
	IL_0277:            Temp_12=this->M_x1(V_2);                                    //call				array<Root::T_x176::T_x12^>^ Root::T_x176::T_x12::M_x1(System::Int32)
	IL_027c:            V_3=Temp_12;                                                //stloc.3
	IL_027d:                                                                        //ldloc.3
	IL_027e:            V_15=V_3;                                                   //stloc.s				V_15
	IL_0280:                                                                        //ldc.i4.0
	IL_0281:            V_16=0;                                                     //stloc.s				V_16
	IL_0283:                                                                        //ldc.i4				0x5
	IL_0288:            V_18=5;                                                     //stloc				V_18
	IL_028c:            /*goto IL_0002;*/goto IL_0291;                              //br				IL_0002
	IL_0291:            goto IL_013c;                                               //br				IL_013c
	IL_0296:                                                                        //ldloc.1
	IL_0297:            V_5=V_1;                                                    //stloc.s				V_5
	IL_0299:                                                                        //ldarg.2
	IL_029a:                                                                        //ldloc.s				V_5
	IL_029c:                                                                        //add
	IL_029d:            A_1=safe_cast<System::UInt32>((A_1 + safe_cast<System::UInt32>(V_5)));//starg.s				A_1
	IL_029f:                                                                        //ldc.i4.0
	IL_02a0:            V_6=0;                                                      //stloc.s				V_6
	IL_02a2:                                                                        //ldc.i4				0x10
	IL_02a7:            V_18=16;                                                    //stloc				V_18
	IL_02ab:            /*goto IL_0002;*/goto IL_02b0;                              //br				IL_0002
	IL_02b0:            goto IL_0225;                                               //br				IL_0225
	IL_02b5:                                                                        //ldloc.s				V_15
	IL_02b7:                                                                        //ldloc.s				V_16
	IL_02b9:                                                                        //ldelem.ref
	IL_02ba:            V_4=V_15[V_16];                                             //stloc.s				V_4
	IL_02bc:                                                                        //ldloc.1
	IL_02bd:                                                                        //ldloc.s				V_4
	IL_02bf:            Temp_14=V_4->M_x1();                                        //callvirt				System::Int32 Root::T_x176::T_x12::M_x1()
	IL_02c4:                                                                        //add
	IL_02c5:            V_1=(V_1 + Temp_14);                                        //stloc.1
	IL_02c6:                                                                        //ldloc.s				V_16
	IL_02c8:                                                                        //ldc.i4.1
	IL_02c9:                                                                        //add
	IL_02ca:            V_16=(V_16 + 1);                                            //stloc.s				V_16
	IL_02cc:                                                                        //ldc.i4				0xb
	IL_02d1:            V_18=11;                                                    //stloc				V_18
	IL_02d5:            /*goto IL_0002;*/goto IL_02da;                              //br				IL_0002
	IL_02da:            goto IL_013c;                                               //br				IL_013c
	IL_02df:                                                                        //ldc.i4				0x1c
	IL_02e4:            V_18=28;                                                    //stloc				V_18
	IL_02e8:            /*goto IL_0002;*/goto IL_02ed;                              //br				IL_0002
	IL_02ed:                                                                        //ldloc.s				V_16
	IL_02ef:                                                                        //ldloc.s				V_15
	IL_02f1:            Temp_15=V_15->Length;                                       //ldlen
	IL_02f2:                                                                        //conv.i4
	IL_02f3:            if(V_16<Temp_15)goto IL_024e;                               //blt				IL_024e
	IL_02f8:                                                                        //ldc.i4				0x2
	IL_02fd:            V_18=2;                                                     //stloc				V_18
	IL_0301:            /*goto IL_0002;*/goto IL_0306;                              //br				IL_0002
	IL_0306:            goto IL_01b4;                                               //br				IL_01b4
	IL_030b:                                                                        //ldc.i4				0x11
	IL_0310:            V_18=17;                                                    //stloc				V_18
	IL_0314:            /*goto IL_0002;*/goto IL_0319;                              //br				IL_0002
	IL_0319:                                                                        //ldloc.s				V_17
	IL_031b:            Temp_8=safe_cast<System::Collections::IEnumerator^>(V_17)->MoveNext();//callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0320:            if(Temp_8)goto IL_0389;                                     //brtrue				IL_0389
	IL_0325:                                                                        //ldc.i4				0x18
	IL_032a:            V_18=24;                                                    //stloc				V_18
	IL_032e:            /*goto IL_0002;*/goto IL_0333;                              //br				IL_0002
	IL_0333:            goto IL_0123;                                               //br				IL_0123
	IL_0338:                                                                        //ldarg.1
	IL_0339:                                                                        //ldloc.s				V_9
	IL_033b:                                                                        //ldc.i4				0x80000000
	IL_0340:                                                                        //or
	IL_0341:            A_0->M_x1(safe_cast<System::UInt32>((V_9 | -2147483648)));  //callvirt				void Root::T_x140::M_x1(System::UInt32)
	IL_0346:                                                                        //ldloc.s				V_9
	IL_0348:                                                                        //ldloc.s				V_12
	IL_034a:            Temp_1=V_12->M_x1();                                        //callvirt				System::Int32 Root::T_x176::T_x12::M_x1()
	IL_034f:                                                                        //add
	IL_0350:            V_9=(V_9 + Temp_1);                                         //stloc.s				V_9
	IL_0352:                                                                        //ldc.i4				0x1b
	IL_0357:            V_18=27;                                                    //stloc				V_18
	IL_035b:            /*goto IL_0002;*/goto IL_0360;                              //br				IL_0002
	IL_0360:            goto IL_0165;                                               //br				IL_0165
	IL_0365:                                                                        //ldarg.0
	IL_0366:                                                                        //ldloc.s				V_6
	IL_0368:            Temp_0=this->M_x1(V_6);                                     //call				array<Root::T_x176::T_x12^>^ Root::T_x176::T_x12::M_x1(System::Int32)
	IL_036d:            V_7=Temp_0;                                                 //stloc.s				V_7
	IL_036f:                                                                        //ldloc.s				V_7
	IL_0371:            V_15=V_7;                                                   //stloc.s				V_15
	IL_0373:                                                                        //ldc.i4.0
	IL_0374:            V_16=0;                                                     //stloc.s				V_16
	IL_0376:                                                                        //ldc.i4				0xd
	IL_037b:            V_18=13;                                                    //stloc				V_18
	IL_037f:            /*goto IL_0002;*/goto IL_0384;                              //br				IL_0002
	IL_0384:            goto IL_02df;                                               //br				IL_02df
	IL_0389:                                                                        //ldloc.s				V_17
	IL_038b:            Temp_9=safe_cast<System::Collections::IEnumerator^>(V_17)->Current;//callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0390:                                                                        //unbox				System::Collections::DictionaryEntry
	IL_0395:                                                                        //ldobj				System::Collections::DictionaryEntry
	IL_039a:            V_11=safe_cast<System::Collections::DictionaryEntry>(Temp_9);//stloc.s				V_11
	IL_039c:                                                                        //ldarg.1
	IL_039d:                                                                        //ldloca.s				V_11
	IL_039f:            Temp_10=V_11.Key;                                           //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_03a4:                                                                        //unbox				System::Int32
	IL_03a9:                                                                        //ldind.i4
	IL_03aa:            A_0->M_x1(safe_cast<System::UInt32>(safe_cast<System::Int32>(Temp_10)));//callvirt				void Root::T_x140::M_x1(System::UInt32)
	IL_03af:                                                                        //ldloca.s				V_11
	IL_03b1:            Temp_11=V_11.Value;                                         //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_03b6:                                                                        //isinst				Root::T_x176::T_x12
	IL_03bb:            V_12=dynamic_cast<Root::T_x176::T_x12^>(Temp_11);           //stloc.s				V_12
	IL_03bd:                                                                        //ldc.i4				0xc
	IL_03c2:            V_18=12;                                                    //stloc				V_18
	IL_03c6:            /*goto IL_0002;*/goto IL_03cb;                              //br				IL_0002
	IL_03cb:                                                                        //ldloc.s				V_12
	IL_03cd:            if(V_12==nullptr)goto IL_0165;                              //brfalse				IL_0165
	IL_03d2:                                                                        //ldc.i4				0x7
	IL_03d7:            V_18=7;                                                     //stloc				V_18
	IL_03db:            /*goto IL_0002;*/goto IL_03e0;                              //br				IL_0002
	IL_03e0:            goto IL_0338;                                               //br				IL_0338
	IL_03e5:            return;                                                     //ret

}
inline Root::T_x176::T_x2::T_x2(System::Int32 A_0,System::Int32 A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x176::T_x2 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::Int32 Root::T_x176::T_x2 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.3
	IL_0016:            this->F_x12=A_2;                                            //stfld				System::Int32 Root::T_x176::T_x2 F_x12
	IL_001b:            return;                                                     //ret

}
inline void Root::T_x176::T_x2::M_x1(Root::T_x140^ A_0,System::UInt32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x176::T_x2 F_x1
	IL_000a:                                                                        //ldarg.2
	IL_000b:                                                                        //add
	IL_000c:            A_0->M_x12((Temp_0 + safe_cast<System::Int32>(A_1)));       //callvirt				void Root::T_x140::M_x12(System::Int32)
	IL_0011:                                                                        //ldarg.1
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x176::T_x2 F_x2
	IL_0018:            A_0->M_x12(Temp_1);                                         //callvirt				void Root::T_x140::M_x12(System::Int32)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:            Temp_2=this->F_x12;                                         //ldfld				System::Int32 Root::T_x176::T_x2 F_x12
	IL_0024:            A_0->M_x12(Temp_2);                                         //callvirt				void Root::T_x140::M_x12(System::Int32)
	IL_0029:                                                                        //ldarg.1
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:            A_0->M_x12(safe_cast<System::Int32>(0));                    //callvirt				void Root::T_x140::M_x12(System::Int32)
	IL_0030:            return;                                                     //ret

}
inline Root::T_x176::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Int32 Root::T_x176::T_x1::M_x1(System::Object^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	System::IComparable^ V_0 = nullptr;
	System::IComparable^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_2=5;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0056;                                               //br.s				IL_0056
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_00c8;case 1:goto IL_00f1;case 2:goto IL_010a;case 3:goto IL_018b;case 4:goto IL_0130;case 5:goto IL_000b;case 6:goto IL_015a;case 7:goto IL_011a;case 8:goto IL_017b;case 9:goto IL_00b8;case 10:goto IL_0069;case 11:goto IL_00e1;case 12:goto IL_0092;case 13:goto IL_0079;case 14:goto IL_01a4;case 15:goto IL_00a2;};//switch				(IL_00c8,IL_00f1,IL_010a,IL_018b,IL_0130,IL_000b,IL_015a,IL_011a,IL_017b,IL_00b8,IL_0069,IL_00e1,IL_0092,IL_0079,IL_01a4,IL_00a2)
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //isinst				System::Int32
	IL_005c:            if(safe_cast<System::Int32>(A_0)==0)goto IL_00ba;           //brfalse.s				IL_00ba
	IL_005e:                                                                        //ldc.i4				0xa
	IL_0063:            V_2=10;                                                     //stloc				V_2
	IL_0067:            /*goto IL_000d;*/goto IL_0069;                              //br.s				IL_000d
	IL_0069:            goto IL_010c;                                               //br				IL_010c
	IL_006e:                                                                        //ldc.i4				0xd
	IL_0073:            V_2=13;                                                     //stloc				V_2
	IL_0077:            /*goto IL_000d;*/goto IL_0079;                              //br.s				IL_000d
	IL_0079:                                                                        //ldarg.0
	IL_007a:                                                                        //isinst				System::String
	IL_007f:            if(dynamic_cast<System::String^>(A_0)==nullptr)goto IL_01a9;//brfalse				IL_01a9
	IL_0084:                                                                        //ldc.i4				0xc
	IL_0089:            V_2=12;                                                     //stloc				V_2
	IL_008d:            /*goto IL_000d;*/goto IL_0092;                              //br				IL_000d
	IL_0092:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_0094:                                                                        //ldc.i4				0xf
	IL_0099:            V_2=15;                                                     //stloc				V_2
	IL_009d:            /*goto IL_000d;*/goto IL_00a2;                              //br				IL_000d
	IL_00a2:                                                                        //ldarg.1
	IL_00a3:                                                                        //isinst				System::String
	IL_00a8:            if(dynamic_cast<System::String^>(A_1)==nullptr)goto IL_006e;//brfalse.s				IL_006e
	IL_00aa:                                                                        //ldc.i4				0x9
	IL_00af:            V_2=9;                                                      //stloc				V_2
	IL_00b3:            /*goto IL_000d;*/goto IL_00b8;                              //br				IL_000d
	IL_00b8:            goto IL_0132;                                               //br.s				IL_0132
	IL_00ba:                                                                        //ldc.i4				0x0
	IL_00bf:            V_2=0;                                                      //stloc				V_2
	IL_00c3:            /*goto IL_000d;*/goto IL_00c8;                              //br				IL_000d
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:                                                                        //isinst				System::String
	IL_00ce:            if(dynamic_cast<System::String^>(A_0)==nullptr)goto IL_017d;//brfalse				IL_017d
	IL_00d3:                                                                        //ldc.i4				0xb
	IL_00d8:            V_2=11;                                                     //stloc				V_2
	IL_00dc:            /*goto IL_000d;*/goto IL_00e1;                              //br				IL_000d
	IL_00e1:            goto IL_014c;                                               //br.s				IL_014c
	IL_00e3:                                                                        //ldc.i4				0x1
	IL_00e8:            V_2=1;                                                      //stloc				V_2
	IL_00ec:            /*goto IL_000d;*/goto IL_00f1;                              //br				IL_000d
	IL_00f1:                                                                        //ldarg.1
	IL_00f2:                                                                        //isinst				System::Int32
	IL_00f7:            if(safe_cast<System::Int32>(A_1)==0)goto IL_01a9;           //brfalse				IL_01a9
	IL_00fc:                                                                        //ldc.i4				0x2
	IL_0101:            V_2=2;                                                      //stloc				V_2
	IL_0105:            /*goto IL_000d;*/goto IL_010a;                              //br				IL_000d
	IL_010a:            goto IL_0134;                                               //br.s				IL_0134
	IL_010c:                                                                        //ldc.i4				0x7
	IL_0111:            V_2=7;                                                      //stloc				V_2
	IL_0115:            /*goto IL_000d;*/goto IL_011a;                              //br				IL_000d
	IL_011a:                                                                        //ldarg.1
	IL_011b:                                                                        //isinst				System::Int32
	IL_0120:            if(safe_cast<System::Int32>(A_1)!=0)goto IL_0136;           //brtrue.s				IL_0136
	IL_0122:                                                                        //ldc.i4				0x4
	IL_0127:            V_2=4;                                                      //stloc				V_2
	IL_012b:            /*goto IL_000d;*/goto IL_0130;                              //br				IL_000d
	IL_0130:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0132:                                                                        //ldc.i4.m1
	IL_0133:            return -1;                                                  //ret
	IL_0134:                                                                        //ldc.i4.1
	IL_0135:            return 1;                                                   //ret
	IL_0136:                                                                        //ldarg.0
	IL_0137:                                                                        //castclass				System::IComparable
	IL_013c:            V_0=safe_cast<System::IComparable^>(A_0);                   //stloc.0
	IL_013d:                                                                        //ldarg.1
	IL_013e:                                                                        //castclass				System::IComparable
	IL_0143:            V_1=safe_cast<System::IComparable^>(A_1);                   //stloc.1
	IL_0144:                                                                        //ldloc.0
	IL_0145:                                                                        //ldloc.1
	IL_0146:            Temp_1=V_0->CompareTo(safe_cast<System::Object^>(V_1));     //callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_014b:            return Temp_1;                                              //ret
	IL_014c:                                                                        //ldc.i4				0x6
	IL_0151:            V_2=6;                                                      //stloc				V_2
	IL_0155:            /*goto IL_000d;*/goto IL_015a;                              //br				IL_000d
	IL_015a:                                                                        //ldarg.1
	IL_015b:                                                                        //isinst				System::String
	IL_0160:            if(dynamic_cast<System::String^>(A_1)==nullptr)goto IL_017d;//brfalse.s				IL_017d
	IL_0162:                                                                        //ldc.i4.4
	IL_0163:                                                                        //dup
	IL_0164:                                                                        //dup
	IL_0165:                                                                        //ldc.i4.2
	IL_0166:                                                                        //sub
	IL_0167:                                                                        //blt				IL_0163
	IL_016c:                                                                        //pop
	IL_016d:                                                                        //ldc.i4				0x8
	IL_0172:            V_2=8;                                                      //stloc				V_2
	IL_0176:            /*goto IL_000d;*/goto IL_017b;                              //br				IL_000d
	IL_017b:            goto IL_0136;                                               //br.s				IL_0136
	IL_017d:                                                                        //ldc.i4				0x3
	IL_0182:            V_2=3;                                                      //stloc				V_2
	IL_0186:            /*goto IL_000d;*/goto IL_018b;                              //br				IL_000d
	IL_018b:                                                                        //ldarg.0
	IL_018c:                                                                        //isinst				System::Int32
	IL_0191:            if(safe_cast<System::Int32>(A_0)==0)goto IL_006e;           //brfalse				IL_006e
	IL_0196:                                                                        //ldc.i4				0xe
	IL_019b:            V_2=14;                                                     //stloc				V_2
	IL_019f:            /*goto IL_000d;*/goto IL_01a4;                              //br				IL_000d
	IL_01a4:            goto IL_0094;                                               //br				IL_0094
	IL_01a9:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_01ae:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x176::T_x1::M_x2(System::Object^ A_0,System::Object^ A_1)
//System::Collections::IComparer^::Compare by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	//local variables.
	Reflector::CodeModel::IUnmanagedResource^ V_0 = nullptr;
	Reflector::CodeModel::IUnmanagedResource^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_009d;case 1:goto IL_004e;case 2:goto IL_008b;case 3:goto IL_00d7;case 4:goto IL_005f;case 5:goto IL_00c6;};//switch				(IL_009d,IL_004e,IL_008b,IL_00d7,IL_005f,IL_00c6)
	IL_0023:                                                                        //ldarg.1
	IL_0024:                                                                        //castclass				Reflector::CodeModel::IUnmanagedResource
	IL_0029:            V_0=safe_cast<Reflector::CodeModel::IUnmanagedResource^>(A_0);//stloc.0
	IL_002a:                                                                        //ldarg.2
	IL_002b:                                                                        //castclass				Reflector::CodeModel::IUnmanagedResource
	IL_0030:            V_1=safe_cast<Reflector::CodeModel::IUnmanagedResource^>(A_1);//stloc.1
	IL_0031:                                                                        //ldloc.0
	IL_0032:            Temp_0=V_0->Name;                                           //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Name()
	IL_0037:                                                                        //ldloc.1
	IL_0038:            Temp_1=V_1->Name;                                           //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Name()
	IL_003d:            Temp_2=Root::T_x176::T_x1::M_x1(Temp_0,Temp_1);             //call				System::Int32 Root::T_x176::T_x1::M_x1(System::Object^,System::Object^)
	IL_0042:            V_2=Temp_2;                                                 //stloc.2
	IL_0043:                                                                        //ldc.i4				0x1
	IL_0048:            V_6=1;                                                      //stloc				V_6
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:                                                                        //ldloc.2
	IL_004f:            if(V_2==0)goto IL_00a6;                                     //brfalse.s				IL_00a6
	IL_0051:            goto IL_0054;                                               //br.s				IL_0054
	IL_0053:                                                                        //break
	IL_0054:                                                                        //ldc.i4				0x4
	IL_0059:            V_6=4;                                                      //stloc				V_6
	IL_005d:            /*goto IL_0002;*/goto IL_005f;                              //br.s				IL_0002
	IL_005f:            goto IL_00a1;                                               //br.s				IL_00a1
	IL_0061:                                                                        //ldloc.0
	IL_0062:            Temp_9=V_0->Language;                                       //callvirt				System::Int32 Reflector::CodeModel::IUnmanagedResource::get_Language()
	IL_0067:            V_5=Temp_9;                                                 //stloc.s				V_5
	IL_0069:                                                                        //ldloca.s				V_5
	IL_006b:                                                                        //ldloc.1
	IL_006c:            Temp_10=V_1->Language;                                      //callvirt				System::Int32 Reflector::CodeModel::IUnmanagedResource::get_Language()
	IL_0071:                                                                        //box				System::Int32
	IL_0076:            Temp_11=V_5.CompareTo(safe_cast<System::Object^>(Temp_10)); //call				System::Int32 System::Int32::CompareTo(System::Object^)
	IL_007b:            V_4=Temp_11;                                                //stloc.s				V_4
	IL_007d:                                                                        //ldc.i4				0x2
	IL_0082:            V_6=2;                                                      //stloc				V_6
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:                                                                        //ldloc.s				V_4
	IL_008d:            if(V_4==0)goto IL_00d9;                                     //brfalse.s				IL_00d9
	IL_008f:                                                                        //ldc.i4				0x0
	IL_0094:            V_6=0;                                                      //stloc				V_6
	IL_0098:            /*goto IL_0002;*/goto IL_009d;                              //br				IL_0002
	IL_009d:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_009f:                                                                        //ldloc.3
	IL_00a0:            return V_3;                                                 //ret
	IL_00a1:                                                                        //ldloc.2
	IL_00a2:            return V_2;                                                 //ret
	IL_00a3:                                                                        //ldloc.s				V_4
	IL_00a5:            return V_4;                                                 //ret
	IL_00a6:                                                                        //ldloc.0
	IL_00a7:            Temp_3=V_0->Type;                                           //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Type()
	IL_00ac:                                                                        //ldloc.1
	IL_00ad:            Temp_4=V_1->Type;                                           //callvirt				System::Object^ Reflector::CodeModel::IUnmanagedResource::get_Type()
	IL_00b2:            Temp_5=Root::T_x176::T_x1::M_x1(Temp_3,Temp_4);             //call				System::Int32 Root::T_x176::T_x1::M_x1(System::Object^,System::Object^)
	IL_00b7:            V_3=Temp_5;                                                 //stloc.3
	IL_00b8:                                                                        //ldc.i4				0x5
	IL_00bd:            V_6=5;                                                      //stloc				V_6
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:                                                                        //ldloc.3
	IL_00c7:            if(V_3==0)goto IL_0061;                                     //brfalse.s				IL_0061
	IL_00c9:                                                                        //ldc.i4				0x3
	IL_00ce:            V_6=3;                                                      //stloc				V_6
	IL_00d2:            /*goto IL_0002;*/goto IL_00d7;                              //br				IL_0002
	IL_00d7:            goto IL_009f;                                               //br.s				IL_009f
	IL_00d9:                                                                        //ldloc.0
	IL_00da:            Temp_6=V_0->CodePage;                                       //callvirt				System::Int32 Reflector::CodeModel::IUnmanagedResource::get_CodePage()
	IL_00df:            V_5=Temp_6;                                                 //stloc.s				V_5
	IL_00e1:                                                                        //ldloca.s				V_5
	IL_00e3:                                                                        //ldloc.1
	IL_00e4:            Temp_7=V_1->CodePage;                                       //callvirt				System::Int32 Reflector::CodeModel::IUnmanagedResource::get_CodePage()
	IL_00e9:                                                                        //box				System::Int32
	IL_00ee:            Temp_8=V_5.CompareTo(safe_cast<System::Object^>(Temp_7));   //call				System::Int32 System::Int32::CompareTo(System::Object^)
	IL_00f3:            return Temp_8;                                              //ret

}
