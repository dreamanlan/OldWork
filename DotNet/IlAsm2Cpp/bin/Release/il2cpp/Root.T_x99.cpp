#include "global_xref.h"

inline Root::T_x99::T_x99()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldnull
	IL_000d:            this->F_x2=safe_cast<Root::T_x98^>(nullptr);                //stfld				Root::T_x98^ Root::T_x99 F_x2
	IL_0012:                                                                        //ldarg.0
	IL_0013:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0018:            return;                                                     //ret

}
inline Root::T_x99^ Root::T_x99::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x99^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	array<System::Collections::DictionaryEntry>^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Collections::DictionaryEntry Temp_7;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Collections::DictionaryEntry Temp_10;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Collections::DictionaryEntry Temp_13;
	System::Int32 Temp_14 = 0;
	System::Object^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	array<System::String^>^ Temp_21 = nullptr;
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
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::Boolean Temp_37 = false;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::Boolean Temp_42 = false;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::IO::DirectoryInfo^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	array<System::IO::DirectoryInfo^>^ Temp_48 = nullptr;
	System::Int32 Temp_49 = 0;
	System::String^ Temp_50 = nullptr;
	System::Boolean Temp_51 = false;
	array<System::String^>^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::Boolean Temp_62 = false;
	System::Int32 Temp_63 = 0;
	System::String^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	System::String^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	//local variables.
	Root::T_x99^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::IO::DirectoryInfo^ V_2 = nullptr;
	array<System::IO::DirectoryInfo^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::String^ V_5 = nullptr;
	System::String^ V_6 = nullptr;
	System::String^ V_7 = nullptr;
	System::String^ V_8 = nullptr;
	array<System::String^>^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::String^ V_11 = nullptr;
	array<System::Collections::DictionaryEntry>^ V_12 = nullptr;
	System::Collections::DictionaryEntry V_13;
	System::String^ V_14 = nullptr;
	System::String^ V_15 = nullptr;
	System::String^ V_16 = nullptr;
	array<System::String^>^ V_17 = nullptr;
	System::Int32 V_18 = 0;
	System::String^ V_19 = nullptr;
	array<System::String^>^ V_20 = nullptr;
	array<System::Collections::DictionaryEntry>^ V_21 = nullptr;
	System::Int32 V_22 = 0;
	System::Int32 V_23 = 0;
	System::Int32 V_24 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_24=17;                                                    //stloc				V_24
	IL_0009:            goto IL_005c;                                               //br.s				IL_005c
	IL_000b:                                                                        //ldloc				V_23
	IL_000f:            switch(V_23){case 0:goto IL_0087;case 1:goto IL_045a;case 2:goto IL_0473;case 3:goto IL_053c;case 4:goto IL_05ff;case 5:goto IL_0147;case 6:goto IL_0447;case 7:goto IL_00a5;case 8:goto IL_0128;case 9:goto IL_0523;case 10:goto IL_0568;case 11:goto IL_0615;case 12:goto IL_05b1;case 13:goto IL_0592;case 14:goto IL_0160;case 15:goto IL_00e9;case 16:goto IL_05ec;case 17:goto IL_054f;};//switch				(IL_0087,IL_045a,IL_0473,IL_053c,IL_05ff,IL_0147,IL_0447,IL_00a5,IL_0128,IL_0523,IL_0568,IL_0615,IL_05b1,IL_0592,IL_0160,IL_00e9,IL_05ec,IL_054f)
	IL_005c:                                                                        //ldc.i4.5
	IL_005d:                                                                        //dup
	IL_005e:                                                                        //dup
	IL_005f:                                                                        //ldc.i4.6
	IL_0060:                                                                        //add
	IL_0061:                                                                        //bgt				IL_005d
	IL_0066:                                                                        //pop
	IL_0067:            Temp_0=gcnew Root::T_x99();                                 //newobj				void Root::T_x99::.ctor()
	IL_006c:            V_0=Temp_0;                                                 //stloc.0
	IL_006d:                                                                        //ldstr				L"\x0A2E\x6230\x4A32\x4634\x4336\x5C38\x563A\x6F3C\x503E\x2E40\x3742\x6044\x1B46\x0448\x224A\x2E4C\x3D4E\x3E50\x2052\x3A54\x3156\x2D58\x755A\x335C\x3A5E\x1560\x3F62\x2364\x1566\x0868\x066A\x086C\x186E\x1E70\x0172\x1E74"
	IL_0072:                                                                        //ldloc				V_24
	IL_0076:            Temp_1=a(L"\x0A2E\x6230\x4A32\x4634\x4336\x5C38\x563A\x6F3C\x503E\x2E40\x3742\x6044\x1B46\x0448\x224A\x2E4C\x3D4E\x3E50\x2052\x3A54\x3156\x2D58\x755A\x335C\x3A5E\x1560\x3F62\x2364\x1566\x0868\x066A\x086C\x186E\x1E70\x0172\x1E74",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007b:            V_1=Temp_1;                                                 //stloc.1
	IL_007c:                                                                        //ldc.i4				0x0
	IL_0081:            V_23=0;                                                     //stloc				V_23
	IL_0085:            /*goto IL_000b;*/goto IL_0087;                              //br.s				IL_000b
	IL_0087:                                                                        //ldloc.1
	IL_0088:            Temp_2=System::Environment::ExpandEnvironmentVariables(V_1);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_008d:            Temp_3=System::IO::Directory::Exists(Temp_2);               //call				System::Boolean System::IO::Directory::Exists(System::String^)
	IL_0092:            if(!Temp_3)goto IL_0478;                                    //brfalse				IL_0478
	IL_0097:                                                                        //ldc.i4				0x7
	IL_009c:            V_23=7;                                                     //stloc				V_23
	IL_00a0:            /*goto IL_000b;*/goto IL_00a5;                              //br				IL_000b
	IL_00a5:            goto IL_05b6;                                               //br				IL_05b6
	IL_00aa:                                                                        //ldloc.s				V_15
	IL_00ac:                                                                        //ldloc.s				V_17
	IL_00ae:                                                                        //ldloc.s				V_18
	IL_00b0:                                                                        //ldelem.ref
	IL_00b1:                                                                        //ldstr				L"\x012E\x5530\x5F32\x5934"
	IL_00b6:                                                                        //ldloc				V_24
	IL_00ba:            Temp_64=a(L"\x012E\x5530\x5F32\x5934",V_24);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bf:            Temp_65=System::String::Concat(V_17[V_18],Temp_64);         //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00c4:            Temp_66=System::IO::Path::Combine(V_15,Temp_65);            //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_00c9:            V_19=Temp_66;                                               //stloc.s				V_19
	IL_00cb:                                                                        //ldloc.0
	IL_00cc:                                                                        //ldloc.s				V_14
	IL_00ce:                                                                        //ldloc.s				V_19
	IL_00d0:            V_0->M_x1(V_14,V_19);                                       //callvirt				void Root::T_x99::M_x1(System::String^,System::String^)
	IL_00d5:                                                                        //ldloc.s				V_18
	IL_00d7:                                                                        //ldc.i4.1
	IL_00d8:                                                                        //add
	IL_00d9:            V_18=(V_18 + 1);                                            //stloc.s				V_18
	IL_00db:                                                                        //ldc.i4				0xf
	IL_00e0:            V_23=15;                                                    //stloc				V_23
	IL_00e4:            /*goto IL_000b;*/goto IL_00e9;                              //br				IL_000b
	IL_00e9:            goto IL_0541;                                               //br				IL_0541
	IL_00ee:                                                                        //ldloc.s				V_21
	IL_00f0:                                                                        //ldloc.s				V_22
	IL_00f2:                                                                        //ldelema				System::Collections::DictionaryEntry
	IL_00f7:                                                                        //ldobj				System::Collections::DictionaryEntry
	IL_00fc:            V_13=V_21[V_22];                                            //stloc.s				V_13
	IL_00fe:                                                                        //ldloca.s				V_13
	IL_0100:            Temp_15=V_13.Key;                                           //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_0105:                                                                        //castclass				System::String
	IL_010a:            V_14=safe_cast<System::String^>(Temp_15);                   //stloc.s				V_14
	IL_010c:                                                                        //ldloca.s				V_13
	IL_010e:            Temp_16=V_13.Value;                                         //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_0113:                                                                        //castclass				System::String
	IL_0118:            V_15=safe_cast<System::String^>(Temp_16);                   //stloc.s				V_15
	IL_011a:                                                                        //ldc.i4				0x8
	IL_011f:            V_23=8;                                                     //stloc				V_23
	IL_0123:            /*goto IL_000b;*/goto IL_0128;                              //br				IL_000b
	IL_0128:                                                                        //ldloc.s				V_15
	IL_012a:            Temp_50=System::Environment::ExpandEnvironmentVariables(V_15);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_012f:            Temp_51=System::IO::Directory::Exists(Temp_50);             //call				System::Boolean System::IO::Directory::Exists(System::String^)
	IL_0134:            if(!Temp_51)goto IL_014c;                                   //brfalse				IL_014c
	IL_0139:                                                                        //ldc.i4				0x5
	IL_013e:            V_23=5;                                                     //stloc				V_23
	IL_0142:            /*goto IL_000b;*/goto IL_0147;                              //br				IL_000b
	IL_0147:            goto IL_056d;                                               //br				IL_056d
	IL_014c:                                                                        //ldloc.s				V_22
	IL_014e:                                                                        //ldc.i4.1
	IL_014f:                                                                        //add
	IL_0150:            V_22=(V_22 + 1);                                            //stloc.s				V_22
	IL_0152:                                                                        //ldc.i4				0xe
	IL_0157:            V_23=14;                                                    //stloc				V_23
	IL_015b:            /*goto IL_000b;*/goto IL_0160;                              //br				IL_000b
	IL_0160:            goto IL_044c;                                               //br				IL_044c
	IL_016001:          try{
	IL_0165:                                                                        //ldc.i4				0x9
	IL_016a:            V_23=9;                                                     //stloc				V_23
	IL_016e:            /*goto IL_0172;*/goto IL_0170;                              //br.s				IL_0172
	IL_0170:            goto IL_01a7;                                               //br.s				IL_01a7
	IL_0172:                                                                        //ldloc				V_23
	IL_0176:            switch(V_23){case 0:goto IL_0285;case 1:goto IL_0275;case 2:goto IL_029b;case 3:goto IL_01d0;case 4:goto IL_02df;case 5:goto IL_037c;case 6:goto IL_038f;case 7:goto IL_01fc;case 8:goto IL_0256;case 9:goto IL_0170;case 10:goto IL_01dd;};//switch				(IL_0285,IL_0275,IL_029b,IL_01d0,IL_02df,IL_037c,IL_038f,IL_01fc,IL_0256,IL_0170,IL_01dd)
	IL_01a7:                                                                        //ldloc.3
	IL_01a8:                                                                        //ldloc.s				V_4
	IL_01aa:                                                                        //ldelem.ref
	IL_01ab:            Temp_40=V_3[V_4]->Name;                                     //callvirt				System::String^ System::IO::FileSystemInfo::get_Name()
	IL_01b0:                                                                        //ldstr				L"\x592E"
	IL_01b5:                                                                        //ldloc				V_24
	IL_01b9:            Temp_41=a(L"\x592E",V_24);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01be:            Temp_42=Temp_40->StartsWith(Temp_41);                       //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_01c3:            if(Temp_42)goto IL_01d2;                                    //brtrue.s				IL_01d2
	IL_01c5:                                                                        //ldc.i4				0x3
	IL_01ca:            V_23=3;                                                     //stloc				V_23
	IL_01ce:            /*goto IL_0172;*/goto IL_01d0;                              //br.s				IL_0172
	IL_01d0:            goto IL_01ee;                                               //br.s				IL_01ee
	IL_01d2:                                                                        //ldc.i4				0xa
	IL_01d7:            V_23=10;                                                    //stloc				V_23
	IL_01db:            /*goto IL_0172;*/goto IL_01dd;                              //br.s				IL_0172
	IL_01dd:                                                                        //ldloc.3
	IL_01de:                                                                        //ldloc.s				V_4
	IL_01e0:                                                                        //ldelem.ref
	IL_01e1:            Temp_38=V_3[V_4]->Name;                                     //callvirt				System::String^ System::IO::FileSystemInfo::get_Name()
	IL_01e6:                                                                        //ldc.i4.1
	IL_01e7:            Temp_39=Temp_38->Substring(safe_cast<System::Int32>(1));    //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_01ec:            Temp_67=Temp_39;goto IL_0207;                               //br.s				IL_0207
	IL_01ee:                                                                        //ldc.i4				0x7
	IL_01f3:            V_23=7;                                                     //stloc				V_23
	IL_01f7:            /*goto IL_0172;*/goto IL_01fc;                              //br				IL_0172
	IL_01fc:                                                                        //ldloc.3
	IL_01fd:                                                                        //ldloc.s				V_4
	IL_01ff:                                                                        //ldelem.ref
	IL_0200:            Temp_29=V_3[V_4]->Name;                                     //callvirt				System::String^ System::IO::FileSystemInfo::get_Name()
	IL_0205:            Temp_67=Temp_29;goto IL_0207;                               //br.s				IL_0207
	IL_0207:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_5
	IL_0209:                                                                        //ldstr				L"\x012E\x7F30\x7632\x6134\x1736\x7F38\x493A\x5C3C\x523E\x2440\x3442\x2A44\x3546\x2248\x6B4A"
	IL_020e:                                                                        //ldloc				V_24
	IL_0212:            Temp_30=a(L"\x012E\x7F30\x7632\x6134\x1736\x7F38\x493A\x5C3C\x523E\x2440\x3442\x2A44\x3546\x2248\x6B4A",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0217:                                                                        //ldloc.s				V_5
	IL_0219:            Temp_31=System::String::Concat(Temp_30,Temp_67);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_021e:            V_6=Temp_31;                                                //stloc.s				V_6
	IL_0220:                                                                        //ldloc.1
	IL_0221:                                                                        //ldloc.3
	IL_0222:                                                                        //ldloc.s				V_4
	IL_0224:                                                                        //ldelem.ref
	IL_0225:            Temp_32=V_3[V_4]->Name;                                     //callvirt				System::String^ System::IO::FileSystemInfo::get_Name()
	IL_022a:            Temp_33=System::IO::Path::Combine(V_1,Temp_32);             //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_022f:            V_7=Temp_33;                                                //stloc.s				V_7
	IL_0231:                                                                        //ldloc.s				V_7
	IL_0233:                                                                        //ldstr				L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C\x113E\x2540\x2F42\x2944"
	IL_0238:                                                                        //ldloc				V_24
	IL_023c:            Temp_34=a(L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C\x113E\x2540\x2F42\x2944",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0241:            Temp_35=System::IO::Path::Combine(V_7,Temp_34);             //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_0246:            V_8=Temp_35;                                                //stloc.s				V_8
	IL_0248:                                                                        //ldc.i4				0x8
	IL_024d:            V_23=8;                                                     //stloc				V_23
	IL_0251:            /*goto IL_0172;*/goto IL_0256;                              //br				IL_0172
	IL_0256:                                                                        //ldloc.s				V_8
	IL_0258:            Temp_36=System::Environment::ExpandEnvironmentVariables(V_8);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_025d:            Temp_37=System::IO::File::Exists(Temp_36);                  //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_0262:            if(!Temp_37)goto IL_0381;                                   //brfalse				IL_0381
	IL_0267:                                                                        //ldc.i4				0x1
	IL_026c:            V_23=1;                                                     //stloc				V_23
	IL_0270:            /*goto IL_0172;*/goto IL_0275;                              //br				IL_0172
	IL_0275:            goto IL_02e1;                                               //br.s				IL_02e1
	IL_0277:                                                                        //ldc.i4				0x0
	IL_027c:            V_23=0;                                                     //stloc				V_23
	IL_0280:            /*goto IL_0172;*/goto IL_0285;                              //br				IL_0172
	IL_0285:                                                                        //ldloc.s				V_10
	IL_0287:                                                                        //ldloc.s				V_9
	IL_0289:            Temp_17=V_9->Length;                                        //ldlen
	IL_028a:                                                                        //conv.i4
	IL_028b:            if(V_10<Temp_17)goto IL_02a0;                               //blt.s				IL_02a0
	IL_028d:                                                                        //ldc.i4				0x2
	IL_0292:            V_23=2;                                                     //stloc				V_23
	IL_0296:            /*goto IL_0172;*/goto IL_029b;                              //br				IL_0172
	IL_029b:            goto IL_0381;                                               //br				IL_0381
	IL_02a0:                                                                        //ldloc.s				V_7
	IL_02a2:                                                                        //ldloc.s				V_9
	IL_02a4:                                                                        //ldloc.s				V_10
	IL_02a6:                                                                        //ldelem.ref
	IL_02a7:                                                                        //ldstr				L"\x012E\x5530\x5F32\x5934"
	IL_02ac:                                                                        //ldloc				V_24
	IL_02b0:            Temp_18=a(L"\x012E\x5530\x5F32\x5934",V_24);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b5:            Temp_19=System::String::Concat(V_9[V_10],Temp_18);          //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_02ba:            Temp_20=System::IO::Path::Combine(V_7,Temp_19);             //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_02bf:            V_11=Temp_20;                                               //stloc.s				V_11
	IL_02c1:                                                                        //ldloc.0
	IL_02c2:                                                                        //ldloc.s				V_6
	IL_02c4:                                                                        //ldloc.s				V_11
	IL_02c6:            V_0->M_x1(V_6,V_11);                                        //callvirt				void Root::T_x99::M_x1(System::String^,System::String^)
	IL_02cb:                                                                        //ldloc.s				V_10
	IL_02cd:                                                                        //ldc.i4.1
	IL_02ce:                                                                        //add
	IL_02cf:            V_10=(V_10 + 1);                                            //stloc.s				V_10
	IL_02d1:                                                                        //ldc.i4				0x4
	IL_02d6:            V_23=4;                                                     //stloc				V_23
	IL_02da:            /*goto IL_0172;*/goto IL_02df;                              //br				IL_0172
	IL_02df:            goto IL_0277;                                               //br.s				IL_0277
	IL_02e1:                                                                        //ldc.i4.7
	IL_02e2:            Temp_21=gcnew array<System::String^>(7);                    //newarr				System::String
	IL_02e7:            V_20=Temp_21;                                               //stloc.s				V_20
	IL_02e9:                                                                        //ldloc.s				V_20
	IL_02eb:                                                                        //ldc.i4.0
	IL_02ec:                                                                        //ldstr				L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C"
	IL_02f1:                                                                        //ldloc				V_24
	IL_02f5:            Temp_22=a(L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02fa:            V_20[0]=Temp_22;                                            //stelem.ref
	IL_02fb:                                                                        //ldloc.s				V_20
	IL_02fd:                                                                        //ldc.i4.1
	IL_02fe:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438"
	IL_0303:                                                                        //ldloc				V_24
	IL_0307:            Temp_23=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438",V_24);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_030c:            V_20[1]=Temp_23;                                            //stelem.ref
	IL_030d:                                                                        //ldloc.s				V_20
	IL_030f:                                                                        //ldc.i4.2
	IL_0310:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x5E3E\x3540\x2242"
	IL_0315:                                                                        //ldloc				V_24
	IL_0319:            Temp_24=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x5E3E\x3540\x2242",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_031e:            V_20[2]=Temp_24;                                            //stelem.ref
	IL_031f:                                                                        //ldloc.s				V_20
	IL_0321:                                                                        //ldc.i4.3
	IL_0322:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x4D3E\x2040\x3442\x2C44\x2946\x2E48"
	IL_0327:                                                                        //ldloc				V_24
	IL_032b:            Temp_25=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x4D3E\x2040\x3442\x2C44\x2946\x2E48",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0330:            V_20[3]=Temp_25;                                            //stelem.ref
	IL_0331:                                                                        //ldloc.s				V_20
	IL_0333:                                                                        //ldc.i4.4
	IL_0334:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x5A3E\x2340"
	IL_0339:                                                                        //ldloc				V_24
	IL_033d:            Temp_26=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x5A3E\x2340",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0342:            V_20[4]=Temp_26;                                            //stelem.ref
	IL_0343:                                                                        //ldloc.s				V_20
	IL_0345:                                                                        //ldc.i4.5
	IL_0346:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x563E\x2F40\x2742\x2A44\x3046\x3A48\x654A\x0B4C\x204E\x2350\x3E52\x2654"
	IL_034b:                                                                        //ldloc				V_24
	IL_034f:            Temp_27=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x563E\x2F40\x2742\x2A44\x3046\x3A48\x654A\x0B4C\x204E\x2350\x3E52\x2654",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0354:            V_20[5]=Temp_27;                                            //stelem.ref
	IL_0355:                                                                        //ldloc.s				V_20
	IL_0357:                                                                        //ldc.i4.6
	IL_0358:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x653C\x523E\x2D40"
	IL_035d:                                                                        //ldloc				V_24
	IL_0361:            Temp_28=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x653C\x523E\x2D40",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0366:            V_20[6]=Temp_28;                                            //stelem.ref
	IL_0367:                                                                        //ldloc.s				V_20
	IL_0369:            V_9=V_20;                                                   //stloc.s				V_9
	IL_036b:                                                                        //ldc.i4.0
	IL_036c:            V_10=0;                                                     //stloc.s				V_10
	IL_036e:                                                                        //ldc.i4				0x5
	IL_0373:            V_23=5;                                                     //stloc				V_23
	IL_0377:            /*goto IL_0172;*/goto IL_037c;                              //br				IL_0172
	IL_037c:            goto IL_0277;                                               //br				IL_0277
	IL_0381:                                                                        //ldc.i4				0x6
	IL_0386:            V_23=6;                                                     //stloc				V_23
	IL_038a:            /*goto IL_0172;*/goto IL_038f;                              //br				IL_0172
	IL_038f:            goto IL_0528;                                               //leave				IL_0528
	                    ;}
	                    catch(System::ArgumentException^ Ex_038F02){
	IL_0394:                                                                        //pop
	IL_0395:            goto IL_0528;                                               //leave				IL_0528
	                    ;}
	IL_039a:                                                                        //ldc.i4.8
	IL_039b:            Temp_52=gcnew array<System::String^>(8);                    //newarr				System::String
	IL_03a0:            V_20=Temp_52;                                               //stloc.s				V_20
	IL_03a2:                                                                        //ldloc.s				V_20
	IL_03a4:                                                                        //ldc.i4.0
	IL_03a5:                                                                        //ldstr				L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C"
	IL_03aa:                                                                        //ldloc				V_24
	IL_03ae:            Temp_53=a(L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b3:            V_20[0]=Temp_53;                                            //stelem.ref
	IL_03b4:                                                                        //ldloc.s				V_20
	IL_03b6:                                                                        //ldc.i4.1
	IL_03b7:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438"
	IL_03bc:                                                                        //ldloc				V_24
	IL_03c0:            Temp_54=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438",V_24);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c5:            V_20[1]=Temp_54;                                            //stelem.ref
	IL_03c6:                                                                        //ldloc.s				V_20
	IL_03c8:                                                                        //ldc.i4.2
	IL_03c9:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x5E3E\x3540\x2242"
	IL_03ce:                                                                        //ldloc				V_24
	IL_03d2:            Temp_55=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x5E3E\x3540\x2242",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d7:            V_20[2]=Temp_55;                                            //stelem.ref
	IL_03d8:                                                                        //ldloc.s				V_20
	IL_03da:                                                                        //ldc.i4.3
	IL_03db:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x4D3E\x2040\x3442\x2C44\x2946\x2E48"
	IL_03e0:                                                                        //ldloc				V_24
	IL_03e4:            Temp_56=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x793C\x4D3E\x2040\x3442\x2C44\x2946\x2E48",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e9:            V_20[3]=Temp_56;                                            //stelem.ref
	IL_03ea:                                                                        //ldloc.s				V_20
	IL_03ec:                                                                        //ldc.i4.4
	IL_03ed:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x733C\x5A3E\x3540\x6D42\x0C44\x3546\x0D48\x0A4A"
	IL_03f2:                                                                        //ldloc				V_24
	IL_03f6:            Temp_57=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x733C\x5A3E\x3540\x6D42\x0C44\x3546\x0D48\x0A4A",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03fb:            V_20[4]=Temp_57;                                            //stelem.ref
	IL_03fc:                                                                        //ldloc.s				V_20
	IL_03fe:                                                                        //ldc.i4.5
	IL_03ff:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x5A3E\x2340\x6D42\x1644\x2246\x3B48\x3D4A\x244C\x2C4E\x3450\x2052"
	IL_0404:                                                                        //ldloc				V_24
	IL_0408:            Temp_58=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x5A3E\x2340\x6D42\x1644\x2246\x3B48\x3D4A\x244C\x2C4E\x3450\x2052",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_040d:            V_20[5]=Temp_58;                                            //stelem.ref
	IL_040e:                                                                        //ldloc.s				V_20
	IL_0410:                                                                        //ldc.i4.6
	IL_0411:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x563E\x2F40\x2742\x2A44\x3046\x3A48\x654A\x0B4C\x204E\x2350\x3E52\x2654"
	IL_0416:                                                                        //ldloc				V_24
	IL_041a:            Temp_59=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x6A3C\x563E\x2F40\x2742\x2A44\x3046\x3A48\x654A\x0B4C\x204E\x2350\x3E52\x2654",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_041f:            V_20[6]=Temp_59;                                            //stelem.ref
	IL_0420:                                                                        //ldloc.s				V_20
	IL_0422:                                                                        //ldc.i4.7
	IL_0423:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x653C\x523E\x2D40"
	IL_0428:                                                                        //ldloc				V_24
	IL_042c:            Temp_60=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438\x153A\x653C\x523E\x2D40",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0431:            V_20[7]=Temp_60;                                            //stelem.ref
	IL_0432:                                                                        //ldloc.s				V_20
	IL_0434:            V_17=V_20;                                                  //stloc.s				V_17
	IL_0436:                                                                        //ldc.i4.0
	IL_0437:            V_18=0;                                                     //stloc.s				V_18
	IL_0439:                                                                        //ldc.i4				0x6
	IL_043e:            V_23=6;                                                     //stloc				V_23
	IL_0442:            /*goto IL_000b;*/goto IL_0447;                              //br				IL_000b
	IL_0447:            goto IL_0541;                                               //br				IL_0541
	IL_044c:                                                                        //ldc.i4				0x1
	IL_0451:            V_23=1;                                                     //stloc				V_23
	IL_0455:            /*goto IL_000b;*/goto IL_045a;                              //br				IL_000b
	IL_045a:                                                                        //ldloc.s				V_22
	IL_045c:                                                                        //ldloc.s				V_21
	IL_045e:            Temp_14=V_21->Length;                                       //ldlen
	IL_045f:                                                                        //conv.i4
	IL_0460:            if(V_22<Temp_14)goto IL_00ee;                               //blt				IL_00ee
	IL_0465:                                                                        //ldc.i4				0x2
	IL_046a:            V_23=2;                                                     //stloc				V_23
	IL_046e:            /*goto IL_000b;*/goto IL_0473;                              //br				IL_000b
	IL_0473:            goto IL_061a;                                               //br				IL_061a
	IL_0478:                                                                        //ldc.i4.3
	IL_0479:            Temp_4=gcnew array<System::Collections::DictionaryEntry>(3);//newarr				System::Collections::DictionaryEntry
	IL_047e:            V_21=Temp_4;                                                //stloc.s				V_21
	IL_0480:                                                                        //ldloc.s				V_21
	IL_0482:                                                                        //ldc.i4.0
	IL_0483:                                                                        //ldelema				System::Collections::DictionaryEntry
	IL_0488:                                                                        //ldstr				L"\x012E\x7F30\x7632\x6134\x1736\x7A38\x543A\x503C\x4F3E\x2040\x2042\x3144\x6746\x0F48\x394A\x2C4C\x224E\x3450\x2452\x3A54\x2556\x3258\x7B5A\x6F5C\x715E\x5160"
	IL_048d:                                                                        //ldloc				V_24
	IL_0491:            Temp_5=a(L"\x012E\x7F30\x7632\x6134\x1736\x7A38\x543A\x503C\x4F3E\x2040\x2042\x3144\x6746\x0F48\x394A\x2C4C\x224E\x3450\x2452\x3A54\x2556\x3258\x7B5A\x6F5C\x715E\x5160",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0496:                                                                        //ldstr				L"\x0A2E\x6130\x4132\x5A34\x5036\x4B38\x5A3A\x503C\x793E\x2840\x2F42\x2044\x3446\x6C48\x174A\x004C\x264E\x3250\x2152\x3A54\x2456\x3658\x3D5A\x295C\x7F5E\x3760\x0A62\x1664\x1266\x0868\x076A\x4D6C\x3C6E\x0570\x0672\x1174\x1E76\x1678\x5B7A\x457C\x237E\xD280\xEE82\xE484\xF586\xFD88\xCF8A\xE88C\xF98E\xF890\xF092\xF094\xE496\xC598\xC89A\xD99C\xD49E\xFDA0\xE0A2\xCAA4\xCAA6\xD9A8\xCAAA\xCEAC\xDBAE\xF7B0\xC1B2\xD4B4\xDAB6\xDCB8\xCCBA\xD2BC\xCDBE\xAAC0\x9FC2\xF7C4\xE9C6\xF9C8\x97CA\xBBCC\xFDCE\xFFD0\xE3D2\x89D4\x80D6\xB0D8\xB5DA\xB9DC\xB0DE\x96E0\x90E2\xA6E4\xA2E6"
	IL_049b:                                                                        //ldloc				V_24
	IL_049f:            Temp_6=a(L"\x0A2E\x6130\x4132\x5A34\x5036\x4B38\x5A3A\x503C\x793E\x2840\x2F42\x2044\x3446\x6C48\x174A\x004C\x264E\x3250\x2152\x3A54\x2456\x3658\x3D5A\x295C\x7F5E\x3760\x0A62\x1664\x1266\x0868\x076A\x4D6C\x3C6E\x0570\x0672\x1174\x1E76\x1678\x5B7A\x457C\x237E\xD280\xEE82\xE484\xF586\xFD88\xCF8A\xE88C\xF98E\xF890\xF092\xF094\xE496\xC598\xC89A\xD99C\xD49E\xFDA0\xE0A2\xCAA4\xCAA6\xD9A8\xCAAA\xCEAC\xDBAE\xF7B0\xC1B2\xD4B4\xDAB6\xDCB8\xCCBA\xD2BC\xCDBE\xAAC0\x9FC2\xF7C4\xE9C6\xF9C8\x97CA\xBBCC\xFDCE\xFFD0\xE3D2\x89D4\x80D6\xB0D8\xB5DA\xB9DC\xB0DE\x96E0\x90E2\xA6E4\xA2E6",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04a4:            Temp_7=System::Collections::DictionaryEntry(safe_cast<System::Object^>(Temp_5),safe_cast<System::Object^>(Temp_6));//newobj				void System::Collections::DictionaryEntry::.ctor(System::Object^,System::Object^)
	IL_04a9:            V_21[0]=Temp_7;                                             //stobj				System::Collections::DictionaryEntry
	IL_04ae:                                                                        //ldloc.s				V_21
	IL_04b0:                                                                        //ldc.i4.1
	IL_04b1:                                                                        //ldelema				System::Collections::DictionaryEntry
	IL_04b6:                                                                        //ldstr				L"\x012E\x7F30\x7632\x6134\x1736\x7A38\x543A\x503C\x4F3E\x2040\x2042\x3144\x6746\x0F48\x394A\x2C4C\x224E\x3450\x2452\x3A54\x2556\x3258\x7B5A\x6C5C\x715E\x5160"
	IL_04bb:                                                                        //ldloc				V_24
	IL_04bf:            Temp_8=a(L"\x012E\x7F30\x7632\x6134\x1736\x7A38\x543A\x503C\x4F3E\x2040\x2042\x3144\x6746\x0F48\x394A\x2C4C\x224E\x3450\x2452\x3A54\x2556\x3258\x7B5A\x6C5C\x715E\x5160",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04c4:                                                                        //ldstr				L"\x0A2E\x6130\x4132\x5A34\x5036\x4B38\x5A3A\x503C\x793E\x2840\x2F42\x2044\x3446\x6C48\x174A\x004C\x264E\x3250\x2152\x3A54\x2456\x3658\x3D5A\x295C\x7F5E\x3760\x0A62\x1664\x1266\x0868\x076A\x4D6C\x3C6E\x0570\x0672\x1174\x1E76\x1678\x5B7A\x457C\x237E\xD280\xEE82\xE484\xF586\xFD88\xCF8A\xE88C\xF98E\xF890\xF092\xF094\xE496\xC598\xC89A\xD99C\xD49E\xFDA0\xE0A2\xCAA4\xCAA6\xD9A8\xCAAA\xCEAC\xDBAE\xF7B0\xC1B2\xD4B4\xDAB6\xDCB8\xCCBA\xD2BC\xCDBE\xAAC0\x9FC2\xF7C4\xE9C6\xF9C8\x97CA\xBBCC\xFECE\xFFD0\xE3D2\x89D4\x80D6\xB0D8\xB5DA\xB9DC\xB0DE\x96E0\x90E2\xA6E4\xA2E6"
	IL_04c9:                                                                        //ldloc				V_24
	IL_04cd:            Temp_9=a(L"\x0A2E\x6130\x4132\x5A34\x5036\x4B38\x5A3A\x503C\x793E\x2840\x2F42\x2044\x3446\x6C48\x174A\x004C\x264E\x3250\x2152\x3A54\x2456\x3658\x3D5A\x295C\x7F5E\x3760\x0A62\x1664\x1266\x0868\x076A\x4D6C\x3C6E\x0570\x0672\x1174\x1E76\x1678\x5B7A\x457C\x237E\xD280\xEE82\xE484\xF586\xFD88\xCF8A\xE88C\xF98E\xF890\xF092\xF094\xE496\xC598\xC89A\xD99C\xD49E\xFDA0\xE0A2\xCAA4\xCAA6\xD9A8\xCAAA\xCEAC\xDBAE\xF7B0\xC1B2\xD4B4\xDAB6\xDCB8\xCCBA\xD2BC\xCDBE\xAAC0\x9FC2\xF7C4\xE9C6\xF9C8\x97CA\xBBCC\xFECE\xFFD0\xE3D2\x89D4\x80D6\xB0D8\xB5DA\xB9DC\xB0DE\x96E0\x90E2\xA6E4\xA2E6",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04d2:            Temp_10=System::Collections::DictionaryEntry(safe_cast<System::Object^>(Temp_8),safe_cast<System::Object^>(Temp_9));//newobj				void System::Collections::DictionaryEntry::.ctor(System::Object^,System::Object^)
	IL_04d7:            V_21[1]=Temp_10;                                            //stobj				System::Collections::DictionaryEntry
	IL_04dc:                                                                        //ldloc.s				V_21
	IL_04de:                                                                        //ldc.i4.2
	IL_04df:                                                                        //ldelema				System::Collections::DictionaryEntry
	IL_04e4:                                                                        //ldstr				L"\x012E\x7F30\x7632\x6134\x1736\x7A38\x543A\x503C\x4F3E\x2040\x2042\x3144\x6746\x0F48\x394A\x2C4C\x224E\x3450\x2452\x3A54\x2556\x3258\x7B5A\x6C5C\x715E\x5160"
	IL_04e9:                                                                        //ldloc				V_24
	IL_04ed:            Temp_11=a(L"\x012E\x7F30\x7632\x6134\x1736\x7A38\x543A\x503C\x4F3E\x2040\x2042\x3144\x6746\x0F48\x394A\x2C4C\x224E\x3450\x2452\x3A54\x2556\x3258\x7B5A\x6C5C\x715E\x5160",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04f2:                                                                        //ldstr				L"\x0A2E\x6130\x4132\x5A34\x5036\x4B38\x5A3A\x503C\x793E\x2840\x2F42\x2044\x3446\x6C48\x174A\x004C\x264E\x3250\x2152\x3A54\x2456\x3658\x3D5A\x295C\x7F5E\x3760\x0A62\x1664\x1266\x0868\x076A\x4D6C\x3C6E\x0570\x0672\x1174\x1E76\x1678\x5B7A\x537C\x317E\xC480\xD782\xA584\xB586\xB988\xBB8A\xBE8C\xD38E\xD290\xFC92\xF894\xE796\xF898\xF89A\xE99C\xD99E\xD3A0\xC2A2\xC8A4\xC2A6\xDEA8\xC4AA\xDFAC\xC4AE\xE2B0\xF7B2\xFEB4\xEBB6\xCFB8\x8ABA\x93BC\x8FBE\xEFC0\xF6C2\xF5C4\xF7C6\xF9C8\x97CA\x9ACC\xA6CE\xBFD0\xB7D2\xBAD4\xA0D6\xAAD8\xFBDA\x9EDC\x9ADE"
	IL_04f7:                                                                        //ldloc				V_24
	IL_04fb:            Temp_12=a(L"\x0A2E\x6130\x4132\x5A34\x5036\x4B38\x5A3A\x503C\x793E\x2840\x2F42\x2044\x3446\x6C48\x174A\x004C\x264E\x3250\x2152\x3A54\x2456\x3658\x3D5A\x295C\x7F5E\x3760\x0A62\x1664\x1266\x0868\x076A\x4D6C\x3C6E\x0570\x0672\x1174\x1E76\x1678\x5B7A\x537C\x317E\xC480\xD782\xA584\xB586\xB988\xBB8A\xBE8C\xD38E\xD290\xFC92\xF894\xE796\xF898\xF89A\xE99C\xD99E\xD3A0\xC2A2\xC8A4\xC2A6\xDEA8\xC4AA\xDFAC\xC4AE\xE2B0\xF7B2\xFEB4\xEBB6\xCFB8\x8ABA\x93BC\x8FBE\xEFC0\xF6C2\xF5C4\xF7C6\xF9C8\x97CA\x9ACC\xA6CE\xBFD0\xB7D2\xBAD4\xA0D6\xAAD8\xFBDA\x9EDC\x9ADE",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0500:            Temp_13=System::Collections::DictionaryEntry(safe_cast<System::Object^>(Temp_11),safe_cast<System::Object^>(Temp_12));//newobj				void System::Collections::DictionaryEntry::.ctor(System::Object^,System::Object^)
	IL_0505:            V_21[2]=Temp_13;                                            //stobj				System::Collections::DictionaryEntry
	IL_050a:                                                                        //ldloc.s				V_21
	IL_050c:            V_12=V_21;                                                  //stloc.s				V_12
	IL_050e:                                                                        //ldloc.s				V_12
	IL_0510:            V_21=V_12;                                                  //stloc.s				V_21
	IL_0512:                                                                        //ldc.i4.0
	IL_0513:            V_22=0;                                                     //stloc.s				V_22
	IL_0515:                                                                        //ldc.i4				0x9
	IL_051a:            V_23=9;                                                     //stloc				V_23
	IL_051e:            /*goto IL_000b;*/goto IL_0523;                              //br				IL_000b
	IL_0523:            goto IL_044c;                                               //br				IL_044c
	IL_0528:                                                                        //ldloc.s				V_4
	IL_052a:                                                                        //ldc.i4.1
	IL_052b:                                                                        //sub
	IL_052c:            V_4=(V_4 - 1);                                              //stloc.s				V_4
	IL_052e:                                                                        //ldc.i4				0x3
	IL_0533:            V_23=3;                                                     //stloc				V_23
	IL_0537:            /*goto IL_000b;*/goto IL_053c;                              //br				IL_000b
	IL_053c:            goto IL_05f1;                                               //br				IL_05f1
	IL_0541:                                                                        //ldc.i4				0x11
	IL_0546:            V_23=17;                                                    //stloc				V_23
	IL_054a:            /*goto IL_000b;*/goto IL_054f;                              //br				IL_000b
	IL_054f:                                                                        //ldloc.s				V_18
	IL_0551:                                                                        //ldloc.s				V_17
	IL_0553:            Temp_63=V_17->Length;                                       //ldlen
	IL_0554:                                                                        //conv.i4
	IL_0555:            if(V_18<Temp_63)goto IL_00aa;                               //blt				IL_00aa
	IL_055a:                                                                        //ldc.i4				0xa
	IL_055f:            V_23=10;                                                    //stloc				V_23
	IL_0563:            /*goto IL_000b;*/goto IL_0568;                              //br				IL_000b
	IL_0568:            goto IL_014c;                                               //br				IL_014c
	IL_056d:                                                                        //ldloc.s				V_15
	IL_056f:                                                                        //ldstr				L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C\x113E\x2540\x2F42\x2944"
	IL_0574:                                                                        //ldloc				V_24
	IL_0578:            Temp_43=a(L"\x422E\x4230\x5032\x5A34\x4536\x5538\x523A\x5F3C\x113E\x2540\x2F42\x2944",V_24);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_057d:            Temp_44=System::IO::Path::Combine(V_15,Temp_43);            //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_0582:            V_16=Temp_44;                                               //stloc.s				V_16
	IL_0584:                                                                        //ldc.i4				0xd
	IL_0589:            V_23=13;                                                    //stloc				V_23
	IL_058d:            /*goto IL_000b;*/goto IL_0592;                              //br				IL_000b
	IL_0592:                                                                        //ldloc.s				V_16
	IL_0594:            Temp_61=System::Environment::ExpandEnvironmentVariables(V_16);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_0599:            Temp_62=System::IO::File::Exists(Temp_61);                  //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_059e:            if(!Temp_62)goto IL_014c;                                   //brfalse				IL_014c
	IL_05a3:                                                                        //ldc.i4				0xc
	IL_05a8:            V_23=12;                                                    //stloc				V_23
	IL_05ac:            /*goto IL_000b;*/goto IL_05b1;                              //br				IL_000b
	IL_05b1:            goto IL_039a;                                               //br				IL_039a
	IL_05b6:                                                                        //ldloc.1
	IL_05b7:            Temp_45=System::Environment::ExpandEnvironmentVariables(V_1);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_05bc:            Temp_46=gcnew System::IO::DirectoryInfo(Temp_45);           //newobj				void System::IO::DirectoryInfo::.ctor(System::String^)
	IL_05c1:            V_2=Temp_46;                                                //stloc.2
	IL_05c2:                                                                        //ldloc.2
	IL_05c3:                                                                        //ldstr				L"\x592E\x1B30"
	IL_05c8:                                                                        //ldloc				V_24
	IL_05cc:            Temp_47=a(L"\x592E\x1B30",V_24);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05d1:            Temp_48=V_2->GetDirectories(Temp_47);                       //callvirt				array<System::IO::DirectoryInfo^>^ System::IO::DirectoryInfo::GetDirectories(System::String^)
	IL_05d6:            V_3=Temp_48;                                                //stloc.3
	IL_05d7:                                                                        //ldloc.3
	IL_05d8:            Temp_49=V_3->Length;                                        //ldlen
	IL_05d9:                                                                        //conv.i4
	IL_05da:                                                                        //ldc.i4.1
	IL_05db:                                                                        //sub
	IL_05dc:            V_4=(Temp_49 - 1);                                          //stloc.s				V_4
	IL_05de:                                                                        //ldc.i4				0x10
	IL_05e3:            V_23=16;                                                    //stloc				V_23
	IL_05e7:            /*goto IL_000b;*/goto IL_05ec;                              //br				IL_000b
	IL_05ec:            goto IL_05f1;                                               //br				IL_05f1
	IL_05f1:                                                                        //ldc.i4				0x4
	IL_05f6:            V_23=4;                                                     //stloc				V_23
	IL_05fa:            /*goto IL_000b;*/goto IL_05ff;                              //br				IL_000b
	IL_05ff:                                                                        //ldloc.s				V_4
	IL_0601:                                                                        //ldc.i4.0
	IL_0602:            /*if(V_4>=0)goto IL_0165;*/if(V_4>=0)goto IL_016001;        //bge				IL_0165
	IL_0607:                                                                        //ldc.i4				0xb
	IL_060c:            V_23=11;                                                    //stloc				V_23
	IL_0610:            /*goto IL_000b;*/goto IL_0615;                              //br				IL_000b
	IL_0615:            goto IL_0478;                                               //br				IL_0478
	IL_061a:                                                                        //ldloc.0
	IL_061b:            return V_0;                                                 //ret

}
inline void Root::T_x99::M_x1(Reflector::IConfigurationManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::IConfiguration^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::IConfiguration^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::IConfiguration^ Temp_5 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Collections::Specialized::StringCollection^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Globalization::CultureInfo^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::Collections::ArrayList^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	System::Collections::ArrayList^ Temp_23 = nullptr;
	System::Object^ Temp_24 = nullptr;
	Root::T_x98^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	Root::T_x98^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	Reflector::IConfiguration^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	Reflector::IConfiguration^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	Reflector::IConfiguration^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	Reflector::IConfiguration^ Temp_42 = nullptr;
	//local variables.
	Reflector::IConfiguration^ V_0 = nullptr;
	Reflector::IConfiguration^ V_1 = nullptr;
	Reflector::IConfiguration^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	Root::T_x98^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::String^ V_8 = nullptr;
	System::String^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_11=2;                                                     //stloc				V_11
	IL_0009:            goto IL_0050;                                               //br.s				IL_0050
	IL_000b:                                                                        //ldloc				V_10
	IL_000f:            switch(V_10){case 0:goto IL_028a;case 1:goto IL_0213;case 2:goto IL_025a;case 3:goto IL_00e7;case 4:goto IL_0223;case 5:goto IL_0108;case 6:goto IL_0145;case 7:goto IL_0174;case 8:goto IL_01b3;case 9:goto IL_0244;case 10:goto IL_026a;case 11:goto IL_0132;case 12:goto IL_009d;case 13:goto IL_00b3;case 14:goto IL_0187;};//switch				(IL_028a,IL_0213,IL_025a,IL_00e7,IL_0223,IL_0108,IL_0145,IL_0174,IL_01b3,IL_0244,IL_026a,IL_0132,IL_009d,IL_00b3,IL_0187)
	IL_0050:                                                                        //ldarg.1
	IL_0051:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x7C2F\x5B31\x4733\x4235"
	IL_0056:                                                                        //ldloc				V_11
	IL_005a:            Temp_0=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x7C2F\x5B31\x4733\x4235",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005f:            Temp_1=A_0[Temp_0];                                         //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_0064:            V_0=Temp_1;                                                 //stloc.0
	IL_0065:                                                                        //ldarg.1
	IL_0066:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x7D2F\x5331\x5A33\x5735\x5F37\x5F39\x4E3B"
	IL_006b:                                                                        //ldloc				V_11
	IL_006f:            Temp_2=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x7D2F\x5331\x5A33\x5735\x5F37\x5F39\x4E3B",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0074:            Temp_3=A_0[Temp_2];                                         //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_0079:            V_1=Temp_3;                                                 //stloc.1
	IL_007a:                                                                        //ldarg.1
	IL_007b:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B"
	IL_0080:                                                                        //ldloc				V_11
	IL_0084:            Temp_4=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:            Temp_5=A_0[Temp_4];                                         //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_008e:            V_2=Temp_5;                                                 //stloc.2
	IL_008f:                                                                        //ldc.i4				0xc
	IL_0094:            V_10=12;                                                    //stloc				V_10
	IL_0098:            /*goto IL_000b;*/goto IL_009d;                              //br				IL_000b
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_25=this->M_x13();                                      //call				Root::T_x98^ Root::T_x99::M_x13()
	IL_00a3:            if(Temp_25==nullptr)goto IL_00e9;                           //brfalse.s				IL_00e9
	IL_00a5:                                                                        //ldc.i4				0xd
	IL_00aa:            V_10=13;                                                    //stloc				V_10
	IL_00ae:            /*goto IL_000b;*/goto IL_00b3;                              //br				IL_000b
	IL_00b3:            goto IL_00b5;                                               //br.s				IL_00b5
	IL_00b5:                                                                        //ldloc.2
	IL_00b6:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x7C2F\x5B31\x4733\x4235"
	IL_00bb:                                                                        //ldloc				V_11
	IL_00bf:            Temp_26=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x7C2F\x5B31\x4733\x4235",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:            Temp_27=this->M_x13();                                      //call				Root::T_x98^ Root::T_x99::M_x13()
	IL_00ca:            Temp_28=Temp_27->M_x2();                                    //callvirt				System::String^ Root::T_x98::M_x2()
	IL_00cf:            Temp_29=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_00d4:            V_2->SetProperty(Temp_26,Temp_28,Temp_29);                  //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^,System::String^)
	IL_00d9:                                                                        //ldc.i4				0x3
	IL_00de:            V_10=3;                                                     //stloc				V_10
	IL_00e2:            /*goto IL_000b;*/goto IL_00e7;                              //br				IL_000b
	IL_00e7:            goto IL_00e9;                                               //br.s				IL_00e9
	IL_00e9:                                                                        //ldloc.0
	IL_00ea:            V_0->Clear();                                               //callvirt				void Reflector::IConfiguration::Clear()
	IL_00ef:                                                                        //ldloc.1
	IL_00f0:            V_1->Clear();                                               //callvirt				void Reflector::IConfiguration::Clear()
	IL_00f5:                                                                        //ldc.i4.0
	IL_00f6:            V_3=0;                                                      //stloc.3
	IL_00f7:                                                                        //ldc.i4.0
	IL_00f8:            V_4=0;                                                      //stloc.s				V_4
	IL_00fa:                                                                        //ldc.i4				0x5
	IL_00ff:            V_10=5;                                                     //stloc				V_10
	IL_0103:            /*goto IL_000b;*/goto IL_0108;                              //br				IL_000b
	IL_0108:            goto IL_025c;                                               //br				IL_025c
	IL_010d:                                                                        //ldarg.0
	IL_010e:            Temp_23=this->F_x1;                                         //ldfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_0113:                                                                        //ldloc.s				V_4
	IL_0115:            Temp_24=Temp_23[V_4];                                       //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_011a:                                                                        //castclass				Root::T_x98
	IL_011f:            V_5=safe_cast<Root::T_x98^>(Temp_24);                       //stloc.s				V_5
	IL_0121:            goto IL_0124;                                               //br.s				IL_0124
	IL_0123:                                                                        //break
	IL_0124:                                                                        //ldc.i4				0xb
	IL_0129:            V_10=11;                                                    //stloc				V_10
	IL_012d:            /*goto IL_000b;*/goto IL_0132;                              //br				IL_000b
	IL_0132:                                                                        //ldloc.s				V_4
	IL_0134:                                                                        //ldc.i4.0
	IL_0135:            if(V_4<=0)goto IL_0176;                                     //ble.s				IL_0176
	IL_0137:                                                                        //ldc.i4				0x6
	IL_013c:            V_10=6;                                                     //stloc				V_10
	IL_0140:            /*goto IL_000b;*/goto IL_0145;                              //br				IL_000b
	IL_0145:            goto IL_0147;                                               //br.s				IL_0147
	IL_0147:                                                                        //ldloc.s				V_4
	IL_0149:                                                                        //ldc.i4.1
	IL_014a:                                                                        //sub
	IL_014b:            V_6=(V_4 - 1);                                              //stloc.s				V_6
	IL_014d:                                                                        //ldloc.0
	IL_014e:                                                                        //ldloca.s				V_6
	IL_0150:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0155:            Temp_12=V_6.ToString(safe_cast<System::IFormatProvider^>(Temp_11));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_015a:                                                                        //ldloc.s				V_5
	IL_015c:            Temp_13=V_5->M_x2();                                        //callvirt				System::String^ Root::T_x98::M_x2()
	IL_0161:            V_0->SetProperty(Temp_12,Temp_13);                          //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_0166:                                                                        //ldc.i4				0x7
	IL_016b:            V_10=7;                                                     //stloc				V_10
	IL_016f:            /*goto IL_000b;*/goto IL_0174;                              //br				IL_000b
	IL_0174:            goto IL_0176;                                               //br.s				IL_0176
	IL_0176:                                                                        //ldc.i4.0
	IL_0177:            V_7=0;                                                      //stloc.s				V_7
	IL_0179:                                                                        //ldc.i4				0xe
	IL_017e:            V_10=14;                                                    //stloc				V_10
	IL_0182:            /*goto IL_000b;*/goto IL_0187;                              //br				IL_000b
	IL_0187:            goto IL_0215;                                               //br				IL_0215
	IL_018c:                                                                        //ldloc.s				V_5
	IL_018e:            Temp_8=V_5->M_x1();                                         //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_0193:                                                                        //ldloc.s				V_7
	IL_0195:            Temp_9=Temp_8[V_7];                                         //callvirt				System::String^ System::Collections::Specialized::StringCollection::get_Item(System::Int32)
	IL_019a:            V_8=Temp_9;                                                 //stloc.s				V_8
	IL_019c:                                                                        //ldloc.s				V_5
	IL_019e:            Temp_10=V_5->M_x2();                                        //callvirt				System::String^ Root::T_x98::M_x2()
	IL_01a3:            V_9=Temp_10;                                                //stloc.s				V_9
	IL_01a5:                                                                        //ldc.i4				0x8
	IL_01aa:            V_10=8;                                                     //stloc				V_10
	IL_01ae:            /*goto IL_000b;*/goto IL_01b3;                              //br				IL_000b
	IL_01b3:                                                                        //ldloc.1
	IL_01b4:                                                                        //ldloca.s				V_3
	IL_01b6:            Temp_14=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01bb:            Temp_15=V_3.ToString(safe_cast<System::IFormatProvider^>(Temp_14));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_01c0:                                                                        //ldloc.s				V_8
	IL_01c2:                                                                        //ldloc.s				V_9
	IL_01c4:            Temp_38=V_1;Temp_37=Temp_15;Temp_36=V_8;if(V_9==nullptr)goto IL_01ea;//brfalse.s				IL_01ea
	IL_01c6:            goto IL_01c8;                                               //br.s				IL_01c8
	IL_01c8:                                                                        //ldloc.s				V_9
	IL_01ca:            Temp_18=V_9->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_01cf:            if(Temp_18==0)goto IL_01ea;                                 //brfalse.s				IL_01ea
	IL_01d1:            goto IL_01d3;                                               //br.s				IL_01d3
	IL_01d3:                                                                        //ldstr				L"\x5C1F"
	IL_01d8:                                                                        //ldloc				V_11
	IL_01dc:            Temp_19=a(L"\x5C1F",V_11);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e1:                                                                        //ldloc.s				V_9
	IL_01e3:            Temp_20=System::String::Concat(Temp_19,V_9);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_01e8:            Temp_42=Temp_38;Temp_41=Temp_37;Temp_40=Temp_36;Temp_39=Temp_20;goto IL_01f1;//br.s				IL_01f1
	IL_01ea:            Temp_16=System::String::Empty;/*warning ! semantic stack doesn't empty at joint !;*///ldsfld				System::String^ System::String Empty
	IL_01ef:            Temp_42=Temp_38;Temp_41=Temp_37;Temp_40=Temp_36;Temp_39=Temp_16;goto IL_01f1;//br.s				IL_01f1
	IL_01f1:            Temp_17=System::String::Concat(Temp_40,Temp_39);/*warning ! semantic stack doesn't empty at joint !;*///call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_01f6:            Temp_42->SetProperty(Temp_41,Temp_17);                      //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_01fb:                                                                        //ldloc.3
	IL_01fc:                                                                        //ldc.i4.1
	IL_01fd:                                                                        //add
	IL_01fe:            V_3=(V_3 + 1);                                              //stloc.3
	IL_01ff:                                                                        //ldloc.s				V_7
	IL_0201:                                                                        //ldc.i4.1
	IL_0202:                                                                        //add
	IL_0203:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_0205:                                                                        //ldc.i4				0x1
	IL_020a:            V_10=1;                                                     //stloc				V_10
	IL_020e:            /*goto IL_000b;*/goto IL_0213;                              //br				IL_000b
	IL_0213:            goto IL_0215;                                               //br.s				IL_0215
	IL_0215:                                                                        //ldc.i4				0x4
	IL_021a:            V_10=4;                                                     //stloc				V_10
	IL_021e:            /*goto IL_000b;*/goto IL_0223;                              //br				IL_000b
	IL_0223:                                                                        //ldloc.s				V_7
	IL_0225:                                                                        //ldloc.s				V_5
	IL_0227:            Temp_6=V_5->M_x1();                                         //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_022c:            Temp_7=Temp_6->Count;                                       //callvirt				System::Int32 System::Collections::Specialized::StringCollection::get_Count()
	IL_0231:            if(V_7<Temp_7)goto IL_018c;                                 //blt				IL_018c
	IL_0236:                                                                        //ldc.i4				0x9
	IL_023b:            V_10=9;                                                     //stloc				V_10
	IL_023f:            /*goto IL_000b;*/goto IL_0244;                              //br				IL_000b
	IL_0244:            goto IL_0246;                                               //br.s				IL_0246
	IL_0246:                                                                        //ldloc.s				V_4
	IL_0248:                                                                        //ldc.i4.1
	IL_0249:                                                                        //add
	IL_024a:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_024c:                                                                        //ldc.i4				0x2
	IL_0251:            V_10=2;                                                     //stloc				V_10
	IL_0255:            /*goto IL_000b;*/goto IL_025a;                              //br				IL_000b
	IL_025a:            goto IL_025c;                                               //br.s				IL_025c
	IL_025c:                                                                        //ldc.i4				0xa
	IL_0261:            V_10=10;                                                    //stloc				V_10
	IL_0265:            /*goto IL_000b;*/goto IL_026a;                              //br				IL_000b
	IL_026a:                                                                        //ldloc.s				V_4
	IL_026c:                                                                        //ldarg.0
	IL_026d:            Temp_21=this->F_x1;                                         //ldfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_0272:            Temp_22=Temp_21->Count;                                     //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0277:            if(V_4<Temp_22)goto IL_010d;                                //blt				IL_010d
	IL_027c:                                                                        //ldc.i4				0x0
	IL_0281:            V_10=0;                                                     //stloc				V_10
	IL_0285:            /*goto IL_000b;*/goto IL_028a;                              //br				IL_000b
	IL_028a:            goto IL_028c;                                               //br.s				IL_028c
	IL_028c:            return;                                                     //ret

}
inline Root::T_x98^ Root::T_x99::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	//local variables.
	Root::T_x98^ V_0 = nullptr;
	Root::T_x98^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            V_2=Temp_1;                                                 //stloc.2
	IL_000c:            /*goto IL_0010;*/goto IL_000F01;                            //br.s				IL_0010
	IL_000e:                                                                        //ldnull
	IL_000f:            return nullptr;                                             //ret
	IL_000F01:          try{
	IL_0010:                                                                        //ldc.i4				0x2
	IL_0015:            V_4=2;                                                      //stloc				V_4
	IL_0019:            /*goto IL_001d;*/goto IL_001b;                              //br.s				IL_001d
	IL_001b:            goto IL_0042;                                               //br.s				IL_0042
	IL_001d:                                                                        //ldloc				V_4
	IL_0021:            switch(V_4){case 0:goto IL_0094;case 1:goto IL_004f;case 2:goto IL_001b;case 3:goto IL_00b6;case 4:goto IL_007b;case 5:goto IL_00a6;case 6:goto IL_0062;};//switch				(IL_0094,IL_004f,IL_001b,IL_00b6,IL_007b,IL_00a6,IL_0062)
	IL_0042:            goto IL_0044;                                               //br.s				IL_0044
	IL_0044:                                                                        //ldc.i4				0x1
	IL_0049:            V_4=1;                                                      //stloc				V_4
	IL_004d:            /*goto IL_001d;*/goto IL_004f;                              //br.s				IL_001d
	IL_004f:                                                                        //ldloc.2
	IL_0050:            Temp_2=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0055:            if(Temp_2)goto IL_0064;                                     //brtrue.s				IL_0064
	IL_0057:                                                                        //ldc.i4				0x6
	IL_005c:            V_4=6;                                                      //stloc				V_4
	IL_0060:            /*goto IL_001d;*/goto IL_0062;                              //br.s				IL_001d
	IL_0062:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_0064:                                                                        //ldloc.2
	IL_0065:            Temp_3=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006a:                                                                        //castclass				Root::T_x98
	IL_006f:            V_0=safe_cast<Root::T_x98^>(Temp_3);                        //stloc.0
	IL_0070:                                                                        //ldc.i4				0x4
	IL_0075:            V_4=4;                                                      //stloc				V_4
	IL_0079:            /*goto IL_001d;*/goto IL_007b;                              //br.s				IL_001d
	IL_007b:                                                                        //ldarg.1
	IL_007c:                                                                        //ldloc.0
	IL_007d:            Temp_4=V_0->M_x2();                                         //callvirt				System::String^ Root::T_x98::M_x2()
	IL_0082:            Temp_5=(A_0 == Temp_4);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0087:            if(!Temp_5)goto IL_0044;                                    //brfalse.s				IL_0044
	IL_0089:                                                                        //ldc.i4				0x0
	IL_008e:            V_4=0;                                                      //stloc				V_4
	IL_0092:            /*goto IL_001d;*/goto IL_0094;                              //br.s				IL_001d
	IL_0094:            goto IL_0096;                                               //br.s				IL_0096
	IL_0096:                                                                        //ldloc.0
	IL_0097:            V_1=V_0;                                                    //stloc.1
	IL_0098:                                                                        //ldc.i4				0x5
	IL_009d:            V_4=5;                                                      //stloc				V_4
	IL_00a1:            /*goto IL_001d;*/goto IL_00a6;                              //br				IL_001d
	IL_00a6:            goto IL_0108;                                               //leave.s				IL_0108
	IL_00a8:                                                                        //ldc.i4				0x3
	IL_00ad:            V_4=3;                                                      //stloc				V_4
	IL_00b1:            /*goto IL_001d;*/goto IL_00b6;                              //br				IL_001d
	IL_00b6:            goto IL_000e;                                               //leave				IL_000e
	                    ;}
	                    finally{
	IL_00bb:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_00bd:                                                                        //ldloc				V_5
	IL_00c1:            switch(V_5){case 0:goto IL_0105;case 1:goto IL_00f2;case 2:goto IL_00e4;};//switch				(IL_0105,IL_00f2,IL_00e4)
	IL_00d2:                                                                        //ldloc.2
	IL_00d3:                                                                        //isinst				System::IDisposable
	IL_00d8:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00d9:                                                                        //ldc.i4				0x2
	IL_00de:            V_5=2;                                                      //stloc				V_5
	IL_00e2:            /*goto IL_00bd;*/goto IL_00e4;                              //br.s				IL_00bd
	IL_00e4:                                                                        //ldloc.3
	IL_00e5:            if(V_3==nullptr)goto IL_0107;                               //brfalse.s				IL_0107
	IL_00e7:                                                                        //ldc.i4				0x1
	IL_00ec:            V_5=1;                                                      //stloc				V_5
	IL_00f0:            /*goto IL_00bd;*/goto IL_00f2;                              //br.s				IL_00bd
	IL_00f2:            goto IL_00f4;                                               //br.s				IL_00f4
	IL_00f4:                                                                        //ldloc.3
	IL_00f5:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00fa:                                                                        //ldc.i4				0x0
	IL_00ff:            V_5=0;                                                      //stloc				V_5
	IL_0103:            /*goto IL_00bd;*/goto IL_0105;                              //br.s				IL_00bd
	IL_0105:            goto IL_0107;                                               //br.s				IL_0107
	IL_0107:                                                                        //endfinally
	                    ;}
	IL_0108:            goto IL_010b;                                               //br.s				IL_010b
	IL_010a:                                                                        //break
	IL_010b:                                                                        //ldloc.1
	IL_010c:            return V_1;                                                 //ret

}
inline void Root::T_x99::M_x1(System::String^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x98^ Temp_0 = nullptr;
	Root::T_x98^ Temp_1 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	Root::T_x98^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0038;case 1:goto IL_0058;case 2:goto IL_002a;};//switch				(IL_0038,IL_0058,IL_002a)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_0=this->M_x1(A_0);                                     //call				Root::T_x98^ Root::T_x99::M_x1(System::String^)
	IL_001e:            V_0=Temp_0;                                                 //stloc.0
	IL_001f:                                                                        //ldc.i4				0x2
	IL_0024:            V_1=2;                                                      //stloc				V_1
	IL_0028:            /*goto IL_0002;*/goto IL_002a;                              //br.s				IL_0002
	IL_002a:                                                                        //ldloc.0
	IL_002b:            if(V_0!=nullptr)goto IL_005a;                               //brtrue.s				IL_005a
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_1=0;                                                      //stloc				V_1
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldarg.1
	IL_003c:            Temp_1=this->M_x2(A_0);                                     //call				Root::T_x98^ Root::T_x99::M_x2(System::String^)
	IL_0041:            V_0=Temp_1;                                                 //stloc.0
	IL_0042:                                                                        //ldc.i4.4
	IL_0043:                                                                        //dup
	IL_0044:                                                                        //dup
	IL_0045:                                                                        //ldc.i4.2
	IL_0046:                                                                        //sub
	IL_0047:                                                                        //blt				IL_0043
	IL_004c:                                                                        //pop
	IL_004d:                                                                        //ldc.i4				0x1
	IL_0052:            V_1=1;                                                      //stloc				V_1
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_005a;                                               //br.s				IL_005a
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_2=V_0->M_x1();                                         //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_0060:                                                                        //ldarg.2
	IL_0061:            Temp_3=Temp_2->Add(A_1);                                    //callvirt				System::Int32 System::Collections::Specialized::StringCollection::Add(System::String^)
	IL_0066:                                                                        //pop
	IL_0067:            return;                                                     //ret

}
inline void Root::T_x99::M_x1(Root::T_x98^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				Root::T_x98^ Root::T_x99 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x99::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline Root::T_x98^ Root::T_x99::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x98^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x98^ Root::T_x99 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x99::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_0006:            Temp_0->Clear();                                            //callvirt				void System::Collections::ArrayList::Clear()
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldnull
	IL_000d:            this->F_x2=safe_cast<Root::T_x98^>(nullptr);                //stfld				Root::T_x98^ Root::T_x99 F_x2
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x99::M_x2(Reflector::IConfigurationManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::IConfiguration^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::IConfiguration^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::IConfiguration^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Root::T_x98^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Globalization::CultureInfo^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	array<System::Char>^ Temp_17 = nullptr;
	array<System::String^>^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::String^ Temp_20 = nullptr;
	System::Boolean Temp_21 = false;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::Globalization::CultureInfo^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Boolean Temp_26 = false;
	System::Globalization::CultureInfo^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	Root::T_x98^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Boolean Temp_32 = false;
	Root::T_x99^ Temp_33 = nullptr;
	Root::T_x99^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	Root::T_x99^ Temp_36 = nullptr;
	Root::T_x99^ Temp_37 = nullptr;
	//local variables.
	Reflector::IConfiguration^ V_0 = nullptr;
	Reflector::IConfiguration^ V_1 = nullptr;
	Reflector::IConfiguration^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::String^ V_5 = nullptr;
	Root::T_x98^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::String^ V_8 = nullptr;
	array<System::String^>^ V_9 = nullptr;
	array<System::Char>^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_12=15;                                                    //stloc				V_12
	IL_0009:            goto IL_0050;                                               //br.s				IL_0050
	IL_000b:                                                                        //ldloc				V_11
	IL_000f:            switch(V_11){case 0:goto IL_0278;case 1:goto IL_0252;case 2:goto IL_01a9;case 3:goto IL_0268;case 4:goto IL_029d;case 5:goto IL_0216;case 6:goto IL_016f;case 7:goto IL_01e9;case 8:goto IL_013e;case 9:goto IL_00ef;case 10:goto IL_0123;case 11:goto IL_0159;case 12:goto IL_00c8;case 13:goto IL_022d;case 14:goto IL_0182;};//switch				(IL_0278,IL_0252,IL_01a9,IL_0268,IL_029d,IL_0216,IL_016f,IL_01e9,IL_013e,IL_00ef,IL_0123,IL_0159,IL_00c8,IL_022d,IL_0182)
	IL_0050:                                                                        //ldarg.1
	IL_0051:                                                                        //ldstr				L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x713C\x563E\x3240\x3742"
	IL_0056:                                                                        //ldloc				V_12
	IL_005a:            Temp_0=a(L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x713C\x563E\x3240\x3742",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005f:            Temp_1=A_0[Temp_0];                                         //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_0064:            V_0=Temp_1;                                                 //stloc.0
	IL_0065:                                                                        //ldarg.1
	IL_0066:                                                                        //ldstr				L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x703C\x5E3E\x2F40\x2242\x2244\x2246\x3B48"
	IL_006b:                                                                        //ldloc				V_12
	IL_006f:            Temp_2=a(L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x703C\x5E3E\x2F40\x2242\x2244\x2246\x3B48",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0074:            Temp_3=A_0[Temp_2];                                         //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_0079:            V_1=Temp_3;                                                 //stloc.1
	IL_007a:                                                                        //ldarg.1
	IL_007b:                                                                        //ldstr				L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x7F3C\x4D3E\x2E40\x3442\x3644\x2246\x3B48"
	IL_0080:                                                                        //ldloc				V_12
	IL_0084:            Temp_4=a(L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x7F3C\x4D3E\x2E40\x3442\x3644\x2246\x3B48",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:            Temp_5=A_0[Temp_4];                                         //callvirt				Reflector::IConfiguration^ Reflector::IConfigurationManager::get_Item(System::String^)
	IL_008e:            V_2=Temp_5;                                                 //stloc.2
	IL_008f:                                                                        //ldloc.2
	IL_0090:                                                                        //ldstr				L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x713C\x563E\x3240\x3742"
	IL_0095:                                                                        //ldloc				V_12
	IL_0099:            Temp_6=a(L"\x6C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x423A\x713C\x563E\x3240\x3742",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009e:            Temp_7=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00a3:            Temp_8=V_2->GetProperty(Temp_6,Temp_7);                     //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_00a8:            V_3=Temp_8;                                                 //stloc.3
	IL_00a9:                                                                        //ldarg.0
	IL_00aa:                                                                        //ldarg.0
	IL_00ab:            Temp_9=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00b0:            Temp_10=this->M_x2(Temp_9);                                 //call				Root::T_x98^ Root::T_x99::M_x2(System::String^)
	IL_00b5:            this->M_x1(Temp_10);                                        //call				void Root::T_x99::M_x1(Root::T_x98^)
	IL_00ba:                                                                        //ldc.i4				0xc
	IL_00bf:            V_11=12;                                                    //stloc				V_11
	IL_00c3:            /*goto IL_000b;*/goto IL_00c8;                              //br				IL_000b
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:                                                                        //ldstr				L"\x1D2C"
	IL_00ce:                                                                        //ldloc				V_12
	IL_00d2:            Temp_22=a(L"\x1D2C",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d7:            Temp_23=V_0->HasProperty(Temp_22);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_00dc:            if(!Temp_23)goto IL_0174;                                   //brfalse				IL_0174
	IL_00e1:                                                                        //ldc.i4				0x9
	IL_00e6:            V_11=9;                                                     //stloc				V_11
	IL_00ea:            /*goto IL_000b;*/goto IL_00ef;                              //br				IL_000b
	IL_00ef:            goto IL_015e;                                               //br.s				IL_015e
	IL_00f1:                                                                        //ldloc.0
	IL_00f2:                                                                        //ldloca.s				V_4
	IL_00f4:            Temp_27=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00f9:            Temp_28=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_27));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00fe:            Temp_29=V_0->GetProperty(Temp_28);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0103:            V_5=Temp_29;                                                //stloc.s				V_5
	IL_0105:                                                                        //ldarg.0
	IL_0106:                                                                        //ldloc.s				V_5
	IL_0108:            Temp_30=this->M_x2(V_5);                                    //call				Root::T_x98^ Root::T_x99::M_x2(System::String^)
	IL_010d:            V_6=Temp_30;                                                //stloc.s				V_6
	IL_010f:                                                                        //ldloc.s				V_4
	IL_0111:                                                                        //ldc.i4.1
	IL_0112:                                                                        //add
	IL_0113:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_0115:                                                                        //ldc.i4				0xa
	IL_011a:            V_11=10;                                                    //stloc				V_11
	IL_011e:            /*goto IL_000b;*/goto IL_0123;                              //br				IL_000b
	IL_0123:                                                                        //ldloc.s				V_5
	IL_0125:                                                                        //ldloc.3
	IL_0126:            Temp_21=(V_5 == V_3);                                       //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_012b:            if(!Temp_21)goto IL_021f;                                   //brfalse				IL_021f
	IL_0130:                                                                        //ldc.i4				0x8
	IL_0135:            V_11=8;                                                     //stloc				V_11
	IL_0139:            /*goto IL_000b;*/goto IL_013e;                              //br				IL_000b
	IL_013e:            goto IL_0140;                                               //br.s				IL_0140
	IL_0140:                                                                        //ldarg.0
	IL_0141:                                                                        //ldloc.s				V_6
	IL_0143:            this->M_x1(V_6);                                            //call				void Root::T_x99::M_x1(Root::T_x98^)
	IL_0148:            goto IL_014b;                                               //br.s				IL_014b
	IL_014a:                                                                        //break
	IL_014b:                                                                        //ldc.i4				0xb
	IL_0150:            V_11=11;                                                    //stloc				V_11
	IL_0154:            /*goto IL_000b;*/goto IL_0159;                              //br				IL_000b
	IL_0159:            goto IL_021f;                                               //br				IL_021f
	IL_015e:                                                                        //ldc.i4.0
	IL_015f:            V_4=0;                                                      //stloc.s				V_4
	IL_0161:                                                                        //ldc.i4				0x6
	IL_0166:            V_11=6;                                                     //stloc				V_11
	IL_016a:            /*goto IL_000b;*/goto IL_016f;                              //br				IL_000b
	IL_016f:            goto IL_021f;                                               //br				IL_021f
	IL_0174:                                                                        //ldc.i4				0xe
	IL_0179:            V_11=14;                                                    //stloc				V_11
	IL_017d:            /*goto IL_000b;*/goto IL_0182;                              //br				IL_000b
	IL_0182:                                                                        //ldloc.1
	IL_0183:                                                                        //ldstr				L"\x1D2C"
	IL_0188:                                                                        //ldloc				V_12
	IL_018c:            Temp_31=a(L"\x1D2C",V_12);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0191:            Temp_32=V_1->HasProperty(Temp_31);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_0196:            if(!Temp_32)goto IL_029f;                                   //brfalse				IL_029f
	IL_019b:                                                                        //ldc.i4				0x2
	IL_01a0:            V_11=2;                                                     //stloc				V_11
	IL_01a4:            /*goto IL_000b;*/goto IL_01a9;                              //br				IL_000b
	IL_01a9:            goto IL_0257;                                               //br				IL_0257
	IL_01ae:                                                                        //ldloc.1
	IL_01af:                                                                        //ldloca.s				V_7
	IL_01b1:            Temp_14=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01b6:            Temp_15=V_7.ToString(safe_cast<System::IFormatProvider^>(Temp_14));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_01bb:            Temp_16=V_1->GetProperty(Temp_15);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_01c0:            V_8=Temp_16;                                                //stloc.s				V_8
	IL_01c2:                                                                        //ldloc.s				V_8
	IL_01c4:                                                                        //ldc.i4.1
	IL_01c5:            Temp_17=gcnew array<System::Char>(1);                       //newarr				System::Char
	IL_01ca:            V_10=Temp_17;                                               //stloc.s				V_10
	IL_01cc:                                                                        //ldloc.s				V_10
	IL_01ce:                                                                        //ldc.i4.0
	IL_01cf:                                                                        //ldc.i4.s				124
	IL_01d1:            V_10[0]=(System::Char)124;                                  //stelem.i2
	IL_01d2:                                                                        //ldloc.s				V_10
	IL_01d4:            Temp_18=V_8->Split(V_10);                                   //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_01d9:            V_9=Temp_18;                                                //stloc.s				V_9
	IL_01db:                                                                        //ldc.i4				0x7
	IL_01e0:            V_11=7;                                                     //stloc				V_11
	IL_01e4:            /*goto IL_000b;*/goto IL_01e9;                              //br				IL_000b
	IL_01e9:                                                                        //ldarg.0
	IL_01ea:                                                                        //ldloc.s				V_9
	IL_01ec:            Temp_19=V_9->Length;                                        //ldlen
	IL_01ed:                                                                        //conv.i4
	IL_01ee:                                                                        //ldc.i4.1
	IL_01ef:            Temp_34=this;if(Temp_19>1)goto IL_01f3;                     //bgt.s				IL_01f3
	IL_01f1:            Temp_37=Temp_34;goto IL_0218;                               //br.s				IL_0218
	IL_01f3:                                                                        //ldloc.s				V_9
	IL_01f5:                                                                        //ldc.i4.1
	IL_01f6:                                                                        //ldelem.ref
	IL_01f7:            Temp_36=Temp_34;Temp_35=V_9[1];goto IL_01f9;                //br.s				IL_01f9
	IL_01f9:            /*warning ! semantic stack doesn't empty at joint !;*/      //ldloc.s				V_9
	IL_01fb:                                                                        //ldc.i4.0
	IL_01fc:                                                                        //ldelem.ref
	IL_01fd:            Temp_36->M_x1(Temp_35,V_9[0]);                              //call				void Root::T_x99::M_x1(System::String^,System::String^)
	IL_0202:                                                                        //ldloc.s				V_7
	IL_0204:                                                                        //ldc.i4.1
	IL_0205:                                                                        //add
	IL_0206:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_0208:                                                                        //ldc.i4				0x5
	IL_020d:            V_11=5;                                                     //stloc				V_11
	IL_0211:            /*goto IL_000b;*/goto IL_0216;                              //br				IL_000b
	IL_0216:            goto IL_026a;                                               //br.s				IL_026a
	IL_0218:            Temp_20=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_021d:            Temp_36=Temp_37;Temp_35=Temp_20;goto IL_01f9;               //br.s				IL_01f9
	IL_021f:                                                                        //ldc.i4				0xd
	IL_0224:            V_11=13;                                                    //stloc				V_11
	IL_0228:            /*goto IL_000b;*/goto IL_022d;                              //br				IL_000b
	IL_022d:                                                                        //ldloc.0
	IL_022e:                                                                        //ldloca.s				V_4
	IL_0230:            Temp_24=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0235:            Temp_25=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_24));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_023a:            Temp_26=V_0->HasProperty(Temp_25);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_023f:            if(Temp_26)goto IL_00f1;                                    //brtrue				IL_00f1
	IL_0244:                                                                        //ldc.i4				0x1
	IL_0249:            V_11=1;                                                     //stloc				V_11
	IL_024d:            /*goto IL_000b;*/goto IL_0252;                              //br				IL_000b
	IL_0252:            goto IL_0174;                                               //br				IL_0174
	IL_0257:                                                                        //ldc.i4.0
	IL_0258:            V_7=0;                                                      //stloc.s				V_7
	IL_025a:                                                                        //ldc.i4				0x3
	IL_025f:            V_11=3;                                                     //stloc				V_11
	IL_0263:            /*goto IL_000b;*/goto IL_0268;                              //br				IL_000b
	IL_0268:            goto IL_026a;                                               //br.s				IL_026a
	IL_026a:                                                                        //ldc.i4				0x0
	IL_026f:            V_11=0;                                                     //stloc				V_11
	IL_0273:            /*goto IL_000b;*/goto IL_0278;                              //br				IL_000b
	IL_0278:                                                                        //ldloc.1
	IL_0279:                                                                        //ldloca.s				V_7
	IL_027b:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0280:            Temp_12=V_7.ToString(safe_cast<System::IFormatProvider^>(Temp_11));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0285:            Temp_13=V_1->HasProperty(Temp_12);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_028a:            if(Temp_13)goto IL_01ae;                                    //brtrue				IL_01ae
	IL_028f:                                                                        //ldc.i4				0x4
	IL_0294:            V_11=4;                                                     //stloc				V_11
	IL_0298:            /*goto IL_000b;*/goto IL_029d;                              //br				IL_000b
	IL_029d:            goto IL_029f;                                               //br.s				IL_029f
	IL_029f:            return;                                                     //ret

}
inline Root::T_x98^ Root::T_x99::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x98^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	Root::T_x98^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Root::T_x98();                                 //newobj				void Root::T_x98::.ctor()
	IL_0008:            V_0=Temp_0;                                                 //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            V_0->M_x1(A_0);                                             //callvirt				void Root::T_x98::M_x1(System::String^)
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_2=Temp_1->Add(safe_cast<System::Object^>(V_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_001c:                                                                        //pop
	IL_001d:                                                                        //ldloc.0
	IL_001e:            return V_0;                                                 //ret

}
inline void Root::T_x99::M_x2(Root::T_x98^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x99 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
