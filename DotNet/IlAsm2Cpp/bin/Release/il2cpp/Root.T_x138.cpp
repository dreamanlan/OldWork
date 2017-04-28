#include "global_xref.h"

inline Root::T_x138::T_x138()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x138::M_x1(Reflector::CodeModel::IAssembly^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IModule^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	Reflector::CodeModel::IModuleCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::IModule^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_11 = nullptr;
	Reflector::CodeModel::IModule^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IModule^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0058;case 1:goto IL_00a3;case 2:goto IL_003f;case 3:goto IL_0032;};//switch				(IL_0058,IL_00a3,IL_003f,IL_0032)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=System::IO::Path::GetDirectoryName(A_1);             //call				System::String^ System::IO::Path::GetDirectoryName(System::String^)
	IL_0021:            V_0=Temp_0;                                                 //stloc.0
	IL_0022:                                                                        //ldc.i4.1
	IL_0023:            V_1=1;                                                      //stloc.1
	IL_0024:            goto IL_0027;                                               //br.s				IL_0027
	IL_0026:                                                                        //break
	IL_0027:                                                                        //ldc.i4				0x3
	IL_002c:            V_4=3;                                                      //stloc				V_4
	IL_0030:            /*goto IL_0002;*/goto IL_0032;                              //br.s				IL_0002
	IL_0032:            goto IL_0034;                                               //br.s				IL_0034
	IL_0034:                                                                        //ldc.i4				0x2
	IL_0039:            V_4=2;                                                      //stloc				V_4
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:                                                                        //ldloc.1
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_5=A_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0046:            Temp_6=safe_cast<System::Collections::ICollection^>(Temp_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_004b:            if(V_1<Temp_6)goto IL_005a;                                 //blt.s				IL_005a
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_4=0;                                                      //stloc				V_4
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_7=A_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0060:                                                                        //ldloc.1
	IL_0061:            Temp_8=Temp_7[V_1];                                         //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0066:            V_2=Temp_8;                                                 //stloc.2
	IL_0067:                                                                        //ldloc.0
	IL_0068:                                                                        //ldloc.2
	IL_0069:            Temp_9=safe_cast<Reflector::CodeModel::IModuleReference^>(V_2)->Name;//callvirt				System::String^ Reflector::CodeModel::IModuleReference::get_Name()
	IL_006e:            Temp_10=System::IO::Path::Combine(V_0,Temp_9);              //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_0073:            V_3=Temp_10;                                                //stloc.3
	IL_0074:                                                                        //ldarg.0
	IL_0075:            Temp_11=A_0->Modules;                                       //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_007a:                                                                        //ldloc.1
	IL_007b:            Temp_12=Temp_11[V_1];                                       //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0080:                                                                        //ldloc.3
	IL_0081:                                                                        //ldc.i4.0
	IL_0082:            Temp_13=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0087:            Temp_14=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_008c:            Root::T_x138::M_x1(Temp_12,V_3,false,Temp_13,Temp_14);      //call				void Root::T_x138::M_x1(Reflector::CodeModel::IModule^,System::String^,System::Boolean,System::String^,System::String^)
	IL_0091:                                                                        //ldloc.1
	IL_0092:                                                                        //ldc.i4.1
	IL_0093:                                                                        //add
	IL_0094:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0095:                                                                        //ldc.i4				0x1
	IL_009a:            V_4=1;                                                      //stloc				V_4
	IL_009e:            /*goto IL_0002;*/goto IL_00a3;                              //br				IL_0002
	IL_00a3:            goto IL_0034;                                               //br.s				IL_0034
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:            Temp_1=A_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_00ab:                                                                        //ldc.i4.0
	IL_00ac:            Temp_2=Temp_1[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_00b1:                                                                        //ldarg.1
	IL_00b2:                                                                        //ldc.i4.0
	IL_00b3:            Temp_3=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00b8:            Temp_4=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00bd:            Root::T_x138::M_x1(Temp_2,A_1,false,Temp_3,Temp_4);         //call				void Root::T_x138::M_x1(Reflector::CodeModel::IModule^,System::String^,System::Boolean,System::String^,System::String^)
	IL_00c2:            return;                                                     //ret

}
inline Reflector::CodeModel::AssemblyType Root::T_x138::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	Reflector::CodeModel::AssemblyType Temp_1 = (Reflector::CodeModel::AssemblyType)0;
	Reflector::CodeModel::IAssembly^ Temp_2 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IAssembly^ Temp_5 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::IModule^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::IAssembly^ Temp_9 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0047;case 1:goto IL_0084;case 2:goto IL_000b;case 3:goto IL_00b5;case 4:goto IL_0094;case 5:goto IL_0060;};//switch				(IL_0047,IL_0084,IL_000b,IL_00b5,IL_0094,IL_0060)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_9=A_0->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_0034:            if(Temp_9==nullptr)goto IL_00b7;                            //brfalse				IL_00b7
	IL_0039:            goto IL_003c;                                               //br.s				IL_003c
	IL_003b:                                                                        //break
	IL_003c:                                                                        //ldc.i4				0x0
	IL_0041:            V_0=0;                                                      //stloc				V_0
	IL_0045:            /*goto IL_000d;*/goto IL_0047;                              //br.s				IL_000d
	IL_0047:            goto IL_0086;                                               //br.s				IL_0086
	IL_0049:                                                                        //ldarg.0
	IL_004a:            Temp_0=A_0->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_004f:            Temp_1=Temp_0->Type;                                        //callvirt				Reflector::CodeModel::AssemblyType Reflector::CodeModel::IAssembly::get_Type()
	IL_0054:            return Temp_1;                                              //ret
	IL_0055:                                                                        //ldc.i4				0x5
	IL_005a:            V_0=5;                                                      //stloc				V_0
	IL_005e:            /*goto IL_000d;*/goto IL_0060;                              //br.s				IL_000d
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_5=A_0->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_0067:            Temp_6=Temp_5->Modules;                                     //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_006c:                                                                        //ldc.i4.0
	IL_006d:            Temp_7=Temp_6[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0072:            Temp_8=A_0->Equals(safe_cast<System::Object^>(Temp_7));     //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0077:            if(!Temp_8)goto IL_00b7;                                    //brfalse.s				IL_00b7
	IL_0079:                                                                        //ldc.i4				0x1
	IL_007e:            V_0=1;                                                      //stloc				V_0
	IL_0082:            /*goto IL_000d;*/goto IL_0084;                              //br.s				IL_000d
	IL_0084:            goto IL_0049;                                               //br.s				IL_0049
	IL_0086:                                                                        //ldc.i4				0x4
	IL_008b:            V_0=4;                                                      //stloc				V_0
	IL_008f:            /*goto IL_000d;*/goto IL_0094;                              //br				IL_000d
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_2=A_0->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_009a:            Temp_3=Temp_2->Modules;                                     //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_009f:            Temp_4=safe_cast<System::Collections::ICollection^>(Temp_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:            if(Temp_4<=0)goto IL_00b7;                                  //ble.s				IL_00b7
	IL_00a7:                                                                        //ldc.i4				0x3
	IL_00ac:            V_0=3;                                                      //stloc				V_0
	IL_00b0:            /*goto IL_000d;*/goto IL_00b5;                              //br				IL_000d
	IL_00b5:            goto IL_0055;                                               //br.s				IL_0055
	IL_00b7:                                                                        //ldc.i4.3
	IL_00b8:            return safe_cast<Reflector::CodeModel::AssemblyType>(3);    //ret

}
inline void Root::T_x138::M_x1(Reflector::CodeModel::IModule^ A_0,System::String^ A_1,System::Boolean A_2,System::String^ A_3,System::String^ A_4)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::IO::FileStream^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::IO::BinaryWriter^ Temp_4 = nullptr;
	Root::T_x167^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Root::T_x166^ Temp_7 = nullptr;
	System::UInt32 Temp_8 = 0;
	System::UInt32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	System::Double Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	Root::T_x166^ Temp_14 = nullptr;
	System::UInt32 Temp_15 = 0;
	System::IO::Stream^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	Root::T_x144^ Temp_18 = nullptr;
	System::UInt32 Temp_19 = 0;
	System::Int32 Temp_20 = 0;
	System::IO::Stream^ Temp_21 = nullptr;
	System::Int64 Temp_22 = 0;
	System::IO::Stream^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	System::UInt32 Temp_25 = 0;
	System::Int32 Temp_26 = 0;
	Root::T_x144^ Temp_27 = nullptr;
	System::IO::Stream^ Temp_28 = nullptr;
	System::Int64 Temp_29 = 0;
	Reflector::CodeModel::AssemblyType Temp_30 = (Reflector::CodeModel::AssemblyType)0;
	System::Int32 Temp_31 = 0;
	System::IO::Stream^ Temp_32 = nullptr;
	System::Int64 Temp_33 = 0;
	System::UInt32 Temp_34 = 0;
	System::Int32 Temp_35 = 0;
	System::Int32 Temp_36 = 0;
	System::Double Temp_37 = 0;
	System::Int32 Temp_38 = 0;
	System::IO::Stream^ Temp_39 = nullptr;
	System::UInt32 Temp_40 = 0;
	Root::T_x144^ Temp_41 = nullptr;
	System::UInt32 Temp_42 = 0;
	Root::T_x144^ Temp_43 = nullptr;
	System::Int32 Temp_44 = 0;
	System::UInt32 Temp_45 = 0;
	System::Int32 Temp_46 = 0;
	System::IO::Stream^ Temp_47 = nullptr;
	Root::T_x144^ Temp_48 = nullptr;
	System::UInt32 Temp_49 = 0;
	System::Int32 Temp_50 = 0;
	Root::T_x144^ Temp_51 = nullptr;
	System::IO::Stream^ Temp_52 = nullptr;
	System::Int64 Temp_53 = 0;
	Reflector::CodeModel::IAssembly^ Temp_54 = nullptr;
	array<System::Byte>^ Temp_55 = nullptr;
	System::Int32 Temp_56 = 0;
	System::UInt16 Temp_57 = 0;
	Reflector::CodeModel::IAssembly^ Temp_58 = nullptr;
	array<System::Byte>^ Temp_59 = nullptr;
	System::UInt32 Temp_60 = 0;
	System::Int32 Temp_61 = 0;
	System::Int32 Temp_62 = 0;
	System::Int32 Temp_63 = 0;
	System::Double Temp_64 = 0;
	System::UInt32 Temp_65 = 0;
	System::Int32 Temp_66 = 0;
	System::Int32 Temp_67 = 0;
	System::Int32 Temp_68 = 0;
	System::Double Temp_69 = 0;
	System::IO::Stream^ Temp_70 = nullptr;
	System::UInt32 Temp_71 = 0;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_72 = nullptr;
	Root::T_x176^ Temp_73 = nullptr;
	System::UInt32 Temp_74 = 0;
	System::IO::Stream^ Temp_75 = nullptr;
	System::Int64 Temp_76 = 0;
	System::UInt32 Temp_77 = 0;
	System::Int32 Temp_78 = 0;
	System::Int32 Temp_79 = 0;
	System::Double Temp_80 = 0;
	System::Int32 Temp_81 = 0;
	System::IO::Stream^ Temp_82 = nullptr;
	System::Int64 Temp_83 = 0;
	System::Int32 Temp_84 = 0;
	System::Int32 Temp_85 = 0;
	System::Int32 Temp_86 = 0;
	Root::T_x144^ Temp_87 = nullptr;
	System::UInt32 Temp_88 = 0;
	Root::T_x144^ Temp_89 = nullptr;
	System::Int32 Temp_90 = 0;
	System::Int32 Temp_91 = 0;
	System::Int32 Temp_92 = 0;
	System::String^ Temp_93 = nullptr;
	Root::T_x166^ Temp_94 = nullptr;
	Root::T_x142^ Temp_95 = nullptr;
	System::Int32 Temp_96 = 0;
	Reflector::CodeModel::AssemblyType Temp_97 = (Reflector::CodeModel::AssemblyType)0;
	Root::T_x140^ Temp_98 = nullptr;
	System::Int32 Temp_99 = 0;
	System::UInt32 Temp_100 = 0;
	System::Int32 Temp_101 = 0;
	System::Int32 Temp_102 = 0;
	System::Int32 Temp_103 = 0;
	System::Double Temp_104 = 0;
	System::UInt32 Temp_105 = 0;
	System::Int32 Temp_106 = 0;
	System::Int32 Temp_107 = 0;
	System::Int32 Temp_108 = 0;
	System::Double Temp_109 = 0;
	System::Int32 Temp_110 = 0;
	System::IO::Stream^ Temp_111 = nullptr;
	System::UInt32 Temp_112 = 0;
	System::IO::Stream^ Temp_113 = nullptr;
	System::Int64 Temp_114 = 0;
	System::Int32 Temp_115 = 0;
	Root::T_x144^ Temp_116 = nullptr;
	System::UInt32 Temp_117 = 0;
	Root::T_x144^ Temp_118 = nullptr;
	System::Int32 Temp_119 = 0;
	System::Int32 Temp_120 = 0;
	System::Int32 Temp_121 = 0;
	Root::T_x140^ Temp_122 = nullptr;
	System::IO::Stream^ Temp_123 = nullptr;
	Root::T_x140^ Temp_124 = nullptr;
	System::Int32 Temp_125 = 0;
	Reflector::CodeModel::IAssembly^ Temp_126 = nullptr;
	Reflector::CodeModel::IUnmanagedResourceCollection^ Temp_127 = nullptr;
	System::Int32 Temp_128 = 0;
	Root::T_x144^ Temp_129 = nullptr;
	System::UInt32 Temp_130 = 0;
	System::Int32 Temp_131 = 0;
	Root::T_x144^ Temp_132 = nullptr;
	Root::T_x140^ Temp_133 = nullptr;
	System::IO::Stream^ Temp_134 = nullptr;
	Root::T_x140^ Temp_135 = nullptr;
	System::Int32 Temp_136 = 0;
	System::Int32 Temp_137 = 0;
	System::Int32 Temp_138 = 0;
	System::Int32 Temp_139 = 0;
	System::Double Temp_140 = 0;
	System::Int32 Temp_141 = 0;
	Root::T_x141^ Temp_142 = nullptr;
	System::String^ Temp_143 = nullptr;
	Root::T_x154^ Temp_144 = nullptr;
	Root::T_x157^ Temp_145 = nullptr;
	System::IO::Stream^ Temp_146 = nullptr;
	System::UInt32 Temp_147 = 0;
	System::Int32 Temp_148 = 0;
	System::String^ Temp_149 = nullptr;
	Root::T_x166^ Temp_150 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_151 = nullptr;
	array<System::Byte>^ Temp_152 = nullptr;
	System::Int32 Temp_153 = 0;
	Root::T_x140^ Temp_154 = nullptr;
	System::Int32 Temp_155 = 0;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	System::IO::FileStream^ V_1 = nullptr;
	System::IO::BinaryWriter^ V_2 = nullptr;
	Root::T_x167^ V_3 = nullptr;
	Root::T_x166^ V_4 = nullptr;
	Root::T_x166^ V_5 = nullptr;
	Root::T_x166^ V_6 = nullptr;
	Root::T_x142^ V_7 = nullptr;
	Root::T_x166^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	Root::T_x141^ V_11 = nullptr;
	Root::T_x154^ V_12 = nullptr;
	Root::T_x157^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	System::Int32 V_16 = 0;
	System::Int32 V_17 = 0;
	Root::T_x176^ V_18 = nullptr;
	Reflector::CodeModel::AssemblyType V_19 = (Reflector::CodeModel::AssemblyType)0;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_21=17;                                                    //stloc				V_21
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_20
	IL_000f:            switch(V_20){case 0:goto IL_007c;case 1:goto IL_0b74;case 2:goto IL_0b8c;case 3:goto IL_0b9f;case 4:goto IL_0be2;case 5:goto IL_006a;case 6:goto IL_009f;case 7:goto IL_0bd1;case 8:goto IL_005d;case 9:goto IL_0bb3;};//switch				(IL_007c,IL_0b74,IL_0b8c,IL_0b9f,IL_0be2,IL_006a,IL_009f,IL_0bd1,IL_005d,IL_0bb3)
	IL_003c:                                                                        //ldarg.3
	IL_003d:            Temp_0=Root::T_x138::M_x1(A_3);                             //call				array<System::Byte>^ Root::T_x138::M_x1(System::String^)
	IL_0042:            V_0=Temp_0;                                                 //stloc.0
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_1=Root::T_x148::M_x1(A_1);                             //call				System::String^ Root::T_x148::M_x1(System::String^)
	IL_0049:                                                                        //ldc.i4.2
	IL_004a:                                                                        //ldc.i4.2
	IL_004b:                                                                        //ldc.i4.0
	IL_004c:            Temp_2=gcnew System::IO::FileStream(Temp_1,safe_cast<System::IO::FileMode>(2),safe_cast<System::IO::FileAccess>(2),safe_cast<System::IO::FileShare>(0));//newobj				void System::IO::FileStream::.ctor(System::String^,System::IO::FileMode,System::IO::FileAccess,System::IO::FileShare)
	IL_0051:            V_1=Temp_2;                                                 //stloc.1
	IL_0052:                                                                        //ldc.i4				0x8
	IL_0057:            V_20=8;                                                     //stloc				V_20
	IL_005b:            /*goto IL_000b;*/goto IL_005d;                              //br.s				IL_000b
	IL_005d:            /*goto IL_00a4;*/goto IL_009F01;                            //br.s				IL_00a4
	IL_005f:                                                                        //ldc.i4				0x5
	IL_0064:            V_20=5;                                                     //stloc				V_20
	IL_0068:            /*goto IL_000b;*/goto IL_006a;                              //br.s				IL_000b
	IL_006a:                                                                        //ldarg.s				A_4
	IL_006c:            if(A_4==nullptr)goto IL_0be4;                               //brfalse				IL_0be4
	IL_0071:                                                                        //ldc.i4				0x0
	IL_0076:            V_20=0;                                                     //stloc				V_20
	IL_007a:            /*goto IL_000b;*/goto IL_007c;                              //br.s				IL_000b
	IL_007c:            goto IL_0b66;                                               //br				IL_0b66
	IL_0081:                                                                        //ldarg.1
	IL_0082:                                                                        //ldloc.0
	IL_0083:            Root::T_x168::M_x1(A_1,V_0);                                //call				void Root::T_x168::M_x1(System::String^,array<System::Byte>^)
	IL_0088:            return;                                                     //ret
	IL_0089:                                                                        //ldarg.1
	IL_008a:                                                                        //ldarg.s				A_4
	IL_008c:            Root::T_x168::M_x1(A_1,A_4);                                //call				void Root::T_x168::M_x1(System::String^,System::String^)
	IL_0091:                                                                        //ldc.i4				0x6
	IL_0096:            V_20=6;                                                     //stloc				V_20
	IL_009a:            /*goto IL_000b;*/goto IL_009f;                              //br				IL_000b
	IL_009f:            goto IL_0be4;                                               //br				IL_0be4
	IL_009F01:          try{
	IL_00a4:            goto IL_015a;                                               //br				IL_015a
	IL_00a9:                                                                        //ldloc				V_20
	IL_00ad:            switch(V_20){case 0:goto IL_0412;case 1:goto IL_0345;case 2:goto IL_0567;case 3:goto IL_06bc;case 4:goto IL_07d1;case 5:goto IL_06cf;case 6:goto IL_08f2;case 7:goto IL_0804;case 8:goto IL_05cf;case 9:goto IL_0856;case 10:goto IL_01d2;case 11:goto IL_03dc;case 12:goto IL_05a4;case 13:goto IL_0645;case 14:goto IL_06e6;case 15:goto IL_05bf;case 16:goto IL_057a;case 17:goto IL_020f;case 18:goto IL_03a6;case 19:goto IL_0a70;case 20:goto IL_0772;case 21:goto IL_0a5d;case 22:goto IL_08d8;case 23:goto IL_0a85;case 24:goto IL_03c1;case 25:goto IL_0879;case 26:goto IL_0620;case 27:goto IL_0358;case 28:goto IL_019a;case 29:goto IL_0591;case 30:goto IL_01fa;case 31:goto IL_0792;case 32:goto IL_01e7;case 33:goto IL_01b9;case 34:goto IL_0b1b;case 35:goto IL_0a98;case 36:goto IL_05ed;case 37:goto IL_0672;case 38:goto IL_0600;case 39:goto IL_0371;case 40:goto IL_07b7;case 41:goto IL_0a3d;};//switch				(IL_0412,IL_0345,IL_0567,IL_06bc,IL_07d1,IL_06cf,IL_08f2,IL_0804,IL_05cf,IL_0856,IL_01d2,IL_03dc,IL_05a4,IL_0645,IL_06e6,IL_05bf,IL_057a,IL_020f,IL_03a6,IL_0a70,IL_0772,IL_0a5d,IL_08d8,IL_0a85,IL_03c1,IL_0879,IL_0620,IL_0358,IL_019a,IL_0591,IL_01fa,IL_0792,IL_01e7,IL_01b9,IL_0b1b,IL_0a98,IL_05ed,IL_0672,IL_0600,IL_0371,IL_07b7,IL_0a3d)
	IL_015a:                                                                        //ldloc.1
	IL_015b:            Temp_4=gcnew System::IO::BinaryWriter(safe_cast<System::IO::Stream^>(V_1));//newobj				void System::IO::BinaryWriter::.ctor(System::IO::Stream^)
	IL_0160:            V_2=Temp_4;                                                 //stloc.2
	IL_0161:            Temp_5=gcnew Root::T_x167();                                //newobj				void Root::T_x167::.ctor()
	IL_0166:            V_3=Temp_5;                                                 //stloc.3
	IL_0167:                                                                        //ldstr				L"\x012E\x4530\x5632\x4D34\x4336"
	IL_016c:                                                                        //ldloc				V_21
	IL_0170:            Temp_6=a(L"\x012E\x4530\x5632\x4D34\x4336",V_21);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0175:                                                                        //ldc.i4				0x60000020
	IL_017a:            Temp_7=gcnew Root::T_x166(Temp_6,safe_cast<System::Int32>(1610612768));//newobj				void Root::T_x166::.ctor(System::String^,System::Int32)
	IL_017f:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_0181:                                                                        //ldloc.3
	IL_0182:                                                                        //ldloc.s				V_4
	IL_0184:            V_3->M_x1(V_4);                                             //callvirt				void Root::T_x167::M_x1(Root::T_x166^)
	IL_0189:                                                                        //ldnull
	IL_018a:            V_5=safe_cast<Root::T_x166^>(nullptr);                      //stloc.s				V_5
	IL_018c:                                                                        //ldc.i4				0x1c
	IL_0191:            V_20=28;                                                    //stloc				V_20
	IL_0195:            /*goto IL_00a9;*/goto IL_019a;                              //br				IL_00a9
	IL_019a:                                                                        //ldarg.0
	IL_019b:            Temp_127=A_0->UnmanagedResources;                           //callvirt				Reflector::CodeModel::IUnmanagedResourceCollection^ Reflector::CodeModel::IModule::get_UnmanagedResources()
	IL_01a0:            Temp_128=safe_cast<System::Collections::ICollection^>(Temp_127)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01a5:                                                                        //ldc.i4.0
	IL_01a6:            if(Temp_128<=0)goto IL_0809;                                //ble				IL_0809
	IL_01ab:                                                                        //ldc.i4				0x21
	IL_01b0:            V_20=33;                                                    //stloc				V_20
	IL_01b4:            /*goto IL_00a9;*/goto IL_01b9;                              //br				IL_00a9
	IL_01b9:            goto IL_0376;                                               //br				IL_0376
	IL_01be:                                                                        //ldnull
	IL_01bf:            V_8=safe_cast<Root::T_x166^>(nullptr);                      //stloc.s				V_8
	IL_01c1:                                                                        //ldc.i4.m1
	IL_01c2:            V_9=-1;                                                     //stloc.s				V_9
	IL_01c4:                                                                        //ldc.i4				0xa
	IL_01c9:            V_20=10;                                                    //stloc				V_20
	IL_01cd:            /*goto IL_00a9;*/goto IL_01d2;                              //br				IL_00a9
	IL_01d2:                                                                        //ldloc.s				V_4
	IL_01d4:            if(V_4==nullptr)goto IL_01ec;                               //brfalse				IL_01ec
	IL_01d9:                                                                        //ldc.i4				0x20
	IL_01de:            V_20=32;                                                    //stloc				V_20
	IL_01e2:            /*goto IL_00a9;*/goto IL_01e7;                              //br				IL_00a9
	IL_01e7:            goto IL_06eb;                                               //br				IL_06eb
	IL_01ec:                                                                        //ldc.i4				0x1e
	IL_01f1:            V_20=30;                                                    //stloc				V_20
	IL_01f5:            /*goto IL_00a9;*/goto IL_01fa;                              //br				IL_00a9
	IL_01fa:                                                                        //ldloc.s				V_5
	IL_01fc:            if(V_5==nullptr)goto IL_0a62;                               //brfalse				IL_0a62
	IL_0201:                                                                        //ldc.i4				0x11
	IL_0206:            V_20=17;                                                    //stloc				V_20
	IL_020a:            /*goto IL_00a9;*/goto IL_020f;                              //br				IL_00a9
	IL_020f:            goto IL_0417;                                               //br				IL_0417
	IL_0214:                                                                        //ldloc.s				V_6
	IL_0216:                                                                        //ldloc.s				V_8
	IL_0218:            Temp_100=V_8->M_x8();                                       //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_021d:                                                                        //ldloc.s				V_7
	IL_021f:            Temp_101=V_7->M_x15();                                      //callvirt				System::Int32 Root::T_x142::M_x15()
	IL_0224:                                                                        //ldloc.s				V_8
	IL_0226:            Temp_102=V_8->M_x1();                                       //callvirt				System::Int32 Root::T_x166::M_x1()
	IL_022b:                                                                        //conv.r8
	IL_022c:                                                                        //ldloc.s				V_7
	IL_022e:            Temp_103=V_7->M_x15();                                      //callvirt				System::Int32 Root::T_x142::M_x15()
	IL_0233:                                                                        //conv.r8
	IL_0234:                                                                        //div
	IL_0235:                                                                        //conv.r8
	IL_0236:            Temp_104=System::Math::Ceiling((safe_cast<System::Double>(Temp_102) / safe_cast<System::Double>(Temp_103)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_023b:                                                                        //conv.i4
	IL_023c:                                                                        //mul
	IL_023d:                                                                        //add
	IL_023e:            V_6->M_x12(safe_cast<System::UInt32>((Temp_100 + safe_cast<System::UInt32>((Temp_101 * safe_cast<System::Int32>(Temp_104))))));//callvirt				void Root::T_x166::M_x12(System::UInt32)
	IL_0243:                                                                        //ldloc.s				V_6
	IL_0245:                                                                        //ldc.i4.s				12
	IL_0247:            V_6->M_x1(safe_cast<System::Int32>(12));                    //callvirt				void Root::T_x166::M_x1(System::Int32)
	IL_024c:                                                                        //ldloc.s				V_6
	IL_024e:                                                                        //ldloc.s				V_8
	IL_0250:            Temp_105=V_8->M_x2();                                       //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_0255:                                                                        //ldloc.s				V_7
	IL_0257:            Temp_106=V_7->M_x11();                                      //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_025c:                                                                        //ldloc.s				V_8
	IL_025e:            Temp_107=V_8->M_x1();                                       //callvirt				System::Int32 Root::T_x166::M_x1()
	IL_0263:                                                                        //conv.r8
	IL_0264:                                                                        //ldloc.s				V_7
	IL_0266:            Temp_108=V_7->M_x11();                                      //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_026b:                                                                        //conv.r8
	IL_026c:                                                                        //div
	IL_026d:                                                                        //conv.r8
	IL_026e:            Temp_109=System::Math::Ceiling((safe_cast<System::Double>(Temp_107) / safe_cast<System::Double>(Temp_108)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_0273:                                                                        //conv.i4
	IL_0274:                                                                        //mul
	IL_0275:                                                                        //add
	IL_0276:            V_6->M_x1(safe_cast<System::UInt32>((Temp_105 + safe_cast<System::UInt32>((Temp_106 * safe_cast<System::Int32>(Temp_109))))));//callvirt				void Root::T_x166::M_x1(System::UInt32)
	IL_027b:                                                                        //ldloc.s				V_6
	IL_027d:                                                                        //ldloc.s				V_7
	IL_027f:            Temp_110=V_7->M_x11();                                      //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_0284:            V_6->M_x2(Temp_110);                                        //callvirt				void Root::T_x166::M_x2(System::Int32)
	IL_0289:                                                                        //ldloc.2
	IL_028a:            Temp_111=V_2->BaseStream;                                   //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_028f:                                                                        //ldloc.s				V_6
	IL_0291:            Temp_112=V_6->M_x2();                                       //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_0296:                                                                        //conv.u8
	IL_0297:            Temp_111->Position=safe_cast<System::Int64>(safe_cast<System::UInt64>(Temp_112));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_029c:                                                                        //ldloc.2
	IL_029d:                                                                        //ldloc.s				V_9
	IL_029f:                                                                        //ldc.i4				0x1000
	IL_02a4:                                                                        //div
	IL_02a5:                                                                        //ldc.i4				0x1000
	IL_02aa:                                                                        //mul
	IL_02ab:            V_2->Write(((V_9 / 4096) * 4096));                          //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_02b0:                                                                        //ldloc.2
	IL_02b1:                                                                        //ldc.i4.s				12
	IL_02b3:            V_2->Write(safe_cast<System::Int32>(12));                   //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_02b8:                                                                        //ldloc.2
	IL_02b9:                                                                        //ldc.i4				0x3000
	IL_02be:                                                                        //ldloc.s				V_9
	IL_02c0:                                                                        //ldc.i4				0x1000
	IL_02c5:                                                                        //rem
	IL_02c6:                                                                        //or
	IL_02c7:                                                                        //conv.i2
	IL_02c8:            V_2->Write(safe_cast<System::Int16>((12288 | (V_9 % 4096))));//callvirt				void System::IO::BinaryWriter::Write(System::Int16)
	IL_02cd:                                                                        //ldloc.2
	IL_02ce:                                                                        //ldc.i4.0
	IL_02cf:            V_2->Write(safe_cast<System::Int16>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int16)
	IL_02d4:                                                                        //ldloc.2
	IL_02d5:            Temp_113=V_2->BaseStream;                                   //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_02da:                                                                        //dup
	IL_02db:            Temp_114=Temp_113->Position;                                //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_02e0:                                                                        //ldloc.s				V_7
	IL_02e2:            Temp_115=V_7->M_x11();                                      //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_02e7:                                                                        //ldc.i4.s				13
	IL_02e9:                                                                        //sub
	IL_02ea:                                                                        //conv.i8
	IL_02eb:                                                                        //add
	IL_02ec:            Temp_113->Position=(Temp_114 + safe_cast<System::Int64>((Temp_115 - 13)));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_02f1:                                                                        //ldloc.2
	IL_02f2:                                                                        //ldc.i4.0
	IL_02f3:            V_2->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_02f8:                                                                        //ldloc.s				V_7
	IL_02fa:            Temp_116=V_7->M_x16();                                      //callvirt				Root::T_x144^ Root::T_x142::M_x16()
	IL_02ff:                                                                        //ldloc.s				V_6
	IL_0301:            Temp_117=V_6->M_x8();                                       //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0306:            Temp_116->M_x1(Temp_117);                                   //callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_030b:                                                                        //ldloc.s				V_7
	IL_030d:            Temp_118=V_7->M_x16();                                      //callvirt				Root::T_x144^ Root::T_x142::M_x16()
	IL_0312:                                                                        //ldloc.s				V_6
	IL_0314:            Temp_119=V_6->M_x5();                                       //callvirt				System::Int32 Root::T_x166::M_x5()
	IL_0319:            Temp_118->M_x1(Temp_119);                                   //callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_031e:                                                                        //ldloc.s				V_7
	IL_0320:                                                                        //dup
	IL_0321:            Temp_120=V_7->M_x18();                                      //callvirt				System::Int32 Root::T_x142::M_x18()
	IL_0326:                                                                        //ldloc.s				V_6
	IL_0328:            Temp_121=V_6->M_x1();                                       //callvirt				System::Int32 Root::T_x166::M_x1()
	IL_032d:                                                                        //add
	IL_032e:            V_7->M_x2((Temp_120 + Temp_121));                           //callvirt				void Root::T_x142::M_x2(System::Int32)
	IL_0333:                                                                        //ldloc.s				V_6
	IL_0335:            V_8=V_6;                                                    //stloc.s				V_8
	IL_0337:                                                                        //ldc.i4				0x1
	IL_033c:            V_20=1;                                                     //stloc				V_20
	IL_0340:            /*goto IL_00a9;*/goto IL_0345;                              //br				IL_00a9
	IL_0345:            goto IL_0a9d;                                               //br				IL_0a9d
	IL_034a:                                                                        //ldc.i4				0x1b
	IL_034f:            V_20=27;                                                    //stloc				V_20
	IL_0353:            /*goto IL_00a9;*/goto IL_0358;                              //br				IL_00a9
	IL_0358:                                                                        //ldarg.0
	IL_0359:            Temp_126=A_0->Assembly;                                     //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_035e:            if(Temp_126==nullptr)goto IL_05f2;                          //brfalse				IL_05f2
	IL_0363:                                                                        //ldc.i4				0x27
	IL_0368:            V_20=39;                                                    //stloc				V_20
	IL_036c:            /*goto IL_00a9;*/goto IL_0371;                              //br				IL_00a9
	IL_0371:            goto IL_0596;                                               //br				IL_0596
	IL_0376:                                                                        //ldstr				L"\x012E\x4330\x4032\x4734\x5436"
	IL_037b:                                                                        //ldloc				V_21
	IL_037f:            Temp_149=a(L"\x012E\x4330\x4032\x4734\x5436",V_21);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0384:                                                                        //ldc.i4				0x40000040
	IL_0389:            Temp_150=gcnew Root::T_x166(Temp_149,safe_cast<System::Int32>(1073741888));//newobj				void Root::T_x166::.ctor(System::String^,System::Int32)
	IL_038e:            V_5=Temp_150;                                               //stloc.s				V_5
	IL_0390:                                                                        //ldloc.3
	IL_0391:                                                                        //ldloc.s				V_5
	IL_0393:            V_3->M_x1(V_5);                                             //callvirt				void Root::T_x167::M_x1(Root::T_x166^)
	IL_0398:                                                                        //ldc.i4				0x12
	IL_039d:            V_20=18;                                                    //stloc				V_20
	IL_03a1:            /*goto IL_00a9;*/goto IL_03a6;                              //br				IL_00a9
	IL_03a6:            goto IL_0809;                                               //br				IL_0809
	IL_03ab:                                                                        //ldloc.s				V_7
	IL_03ad:                                                                        //ldc.i4.2
	IL_03ae:            V_7->M_x13(safe_cast<System::UInt16>(2));                   //callvirt				void Root::T_x142::M_x13(System::UInt16)
	IL_03b3:                                                                        //ldc.i4				0x18
	IL_03b8:            V_20=24;                                                    //stloc				V_20
	IL_03bc:            /*goto IL_00a9;*/goto IL_03c1;                              //br				IL_00a9
	IL_03c1:            goto IL_01be;                                               //br				IL_01be
	IL_03c6:                                                                        //ldloc.s				V_7
	IL_03c8:                                                                        //ldc.i4.3
	IL_03c9:            V_7->M_x13(safe_cast<System::UInt16>(3));                   //callvirt				void Root::T_x142::M_x13(System::UInt16)
	IL_03ce:                                                                        //ldc.i4				0xb
	IL_03d3:            V_20=11;                                                    //stloc				V_20
	IL_03d7:            /*goto IL_00a9;*/goto IL_03dc;                              //br				IL_00a9
	IL_03dc:            goto IL_01be;                                               //br				IL_01be
	IL_03e1:                                                                        //ldloc.s				V_13
	IL_03e3:            Temp_133=V_13->M_x45();                                     //callvirt				Root::T_x140^ Root::T_x157::M_x45()
	IL_03e8:                                                                        //ldloc.2
	IL_03e9:            Temp_134=V_2->BaseStream;                                   //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_03ee:            Temp_133->M_x1(Temp_134);                                   //callvirt				void Root::T_x140::M_x1(System::IO::Stream^)
	IL_03f3:                                                                        //ldloc.s				V_14
	IL_03f5:                                                                        //ldloc.s				V_13
	IL_03f7:            Temp_135=V_13->M_x45();                                     //callvirt				Root::T_x140^ Root::T_x157::M_x45()
	IL_03fc:            Temp_136=Temp_135->M_x12();                                 //callvirt				System::Int32 Root::T_x140::M_x12()
	IL_0401:                                                                        //add
	IL_0402:            V_14=(V_14 + Temp_136);                                     //stloc.s				V_14
	IL_0404:                                                                        //ldc.i4				0x0
	IL_0409:            V_20=0;                                                     //stloc				V_20
	IL_040d:            /*goto IL_00a9;*/goto IL_0412;                              //br				IL_00a9
	IL_0412:            goto IL_06c1;                                               //br				IL_06c1
	IL_0417:                                                                        //ldloc.s				V_5
	IL_0419:                                                                        //ldloc.s				V_8
	IL_041b:            Temp_60=V_8->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0420:                                                                        //ldloc.s				V_7
	IL_0422:            Temp_61=V_7->M_x15();                                       //callvirt				System::Int32 Root::T_x142::M_x15()
	IL_0427:                                                                        //ldloc.s				V_8
	IL_0429:            Temp_62=V_8->M_x1();                                        //callvirt				System::Int32 Root::T_x166::M_x1()
	IL_042e:                                                                        //conv.r8
	IL_042f:                                                                        //ldloc.s				V_7
	IL_0431:            Temp_63=V_7->M_x15();                                       //callvirt				System::Int32 Root::T_x142::M_x15()
	IL_0436:                                                                        //conv.r8
	IL_0437:                                                                        //div
	IL_0438:                                                                        //conv.r8
	IL_0439:            Temp_64=System::Math::Ceiling((safe_cast<System::Double>(Temp_62) / safe_cast<System::Double>(Temp_63)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_043e:                                                                        //conv.i4
	IL_043f:                                                                        //mul
	IL_0440:                                                                        //add
	IL_0441:            V_5->M_x12(safe_cast<System::UInt32>((Temp_60 + safe_cast<System::UInt32>((Temp_61 * safe_cast<System::Int32>(Temp_64))))));//callvirt				void Root::T_x166::M_x12(System::UInt32)
	IL_0446:                                                                        //ldloc.s				V_5
	IL_0448:                                                                        //ldloc.s				V_8
	IL_044a:            Temp_65=V_8->M_x2();                                        //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_044f:                                                                        //ldloc.s				V_7
	IL_0451:            Temp_66=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_0456:                                                                        //ldloc.s				V_8
	IL_0458:            Temp_67=V_8->M_x1();                                        //callvirt				System::Int32 Root::T_x166::M_x1()
	IL_045d:                                                                        //conv.r8
	IL_045e:                                                                        //ldloc.s				V_7
	IL_0460:            Temp_68=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_0465:                                                                        //conv.r8
	IL_0466:                                                                        //div
	IL_0467:                                                                        //conv.r8
	IL_0468:            Temp_69=System::Math::Ceiling((safe_cast<System::Double>(Temp_67) / safe_cast<System::Double>(Temp_68)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_046d:                                                                        //conv.i4
	IL_046e:                                                                        //mul
	IL_046f:                                                                        //add
	IL_0470:            V_5->M_x1(safe_cast<System::UInt32>((Temp_65 + safe_cast<System::UInt32>((Temp_66 * safe_cast<System::Int32>(Temp_69))))));//callvirt				void Root::T_x166::M_x1(System::UInt32)
	IL_0475:                                                                        //ldloc.2
	IL_0476:            Temp_70=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_047b:                                                                        //ldloc.s				V_5
	IL_047d:            Temp_71=V_5->M_x2();                                        //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_0482:                                                                        //conv.u8
	IL_0483:            Temp_70->Position=safe_cast<System::Int64>(safe_cast<System::UInt64>(Temp_71));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0488:                                                                        //ldarg.0
	IL_0489:            Temp_72=A_0->UnmanagedResources;                            //callvirt				Reflector::CodeModel::IUnmanagedResourceCollection^ Reflector::CodeModel::IModule::get_UnmanagedResources()
	IL_048e:            Temp_73=gcnew Root::T_x176(Temp_72);                        //newobj				void Root::T_x176::.ctor(Reflector::CodeModel::IUnmanagedResourceCollection^)
	IL_0493:            V_18=Temp_73;                                               //stloc.s				V_18
	IL_0495:                                                                        //ldloc.s				V_18
	IL_0497:                                                                        //ldloc.2
	IL_0498:                                                                        //ldloc.s				V_5
	IL_049a:            Temp_74=V_5->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_049f:            V_18->M_x1(V_2,Temp_74);                                    //callvirt				void Root::T_x176::M_x1(System::IO::BinaryWriter^,System::UInt32)
	IL_04a4:                                                                        //ldloc.s				V_5
	IL_04a6:                                                                        //ldloc.2
	IL_04a7:            Temp_75=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_04ac:            Temp_76=Temp_75->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_04b1:                                                                        //ldloc.s				V_5
	IL_04b3:            Temp_77=V_5->M_x2();                                        //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_04b8:                                                                        //conv.u8
	IL_04b9:                                                                        //sub
	IL_04ba:                                                                        //conv.i4
	IL_04bb:            V_5->M_x1(safe_cast<System::Int32>((Temp_76 - safe_cast<System::Int64>(safe_cast<System::UInt64>(Temp_77)))));//callvirt				void Root::T_x166::M_x1(System::Int32)
	IL_04c0:                                                                        //ldloc.s				V_5
	IL_04c2:                                                                        //ldloc.s				V_5
	IL_04c4:            Temp_78=V_5->M_x5();                                        //callvirt				System::Int32 Root::T_x166::M_x5()
	IL_04c9:                                                                        //conv.r8
	IL_04ca:                                                                        //ldloc.s				V_7
	IL_04cc:            Temp_79=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_04d1:                                                                        //conv.r8
	IL_04d2:                                                                        //div
	IL_04d3:                                                                        //conv.r8
	IL_04d4:            Temp_80=System::Math::Ceiling((safe_cast<System::Double>(Temp_78) / safe_cast<System::Double>(Temp_79)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_04d9:                                                                        //conv.i4
	IL_04da:                                                                        //ldloc.s				V_7
	IL_04dc:            Temp_81=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_04e1:                                                                        //mul
	IL_04e2:            V_5->M_x2((safe_cast<System::Int32>(Temp_80) * Temp_81));   //callvirt				void Root::T_x166::M_x2(System::Int32)
	IL_04e7:                                                                        //ldloc.2
	IL_04e8:            Temp_82=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_04ed:                                                                        //dup
	IL_04ee:            Temp_83=Temp_82->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_04f3:                                                                        //ldloc.s				V_7
	IL_04f5:            Temp_84=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_04fa:                                                                        //ldloc.s				V_5
	IL_04fc:            Temp_85=V_5->M_x5();                                        //callvirt				System::Int32 Root::T_x166::M_x5()
	IL_0501:                                                                        //ldloc.s				V_7
	IL_0503:            Temp_86=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_0508:                                                                        //rem
	IL_0509:                                                                        //sub
	IL_050a:                                                                        //ldc.i4.1
	IL_050b:                                                                        //sub
	IL_050c:                                                                        //conv.i8
	IL_050d:                                                                        //add
	IL_050e:            Temp_82->Position=(Temp_83 + safe_cast<System::Int64>(((Temp_84 - (Temp_85 % Temp_86)) - 1)));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0513:                                                                        //ldloc.2
	IL_0514:                                                                        //ldc.i4.0
	IL_0515:            V_2->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_051a:                                                                        //ldloc.s				V_7
	IL_051c:            Temp_87=V_7->M_x8();                                        //callvirt				Root::T_x144^ Root::T_x142::M_x8()
	IL_0521:                                                                        //ldloc.s				V_5
	IL_0523:            Temp_88=V_5->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0528:            Temp_87->M_x1(Temp_88);                                     //callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_052d:                                                                        //ldloc.s				V_7
	IL_052f:            Temp_89=V_7->M_x8();                                        //callvirt				Root::T_x144^ Root::T_x142::M_x8()
	IL_0534:                                                                        //ldloc.s				V_5
	IL_0536:            Temp_90=V_5->M_x5();                                        //callvirt				System::Int32 Root::T_x166::M_x5()
	IL_053b:            Temp_89->M_x1(Temp_90);                                     //callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_0540:                                                                        //ldloc.s				V_7
	IL_0542:                                                                        //dup
	IL_0543:            Temp_91=V_7->M_x18();                                       //callvirt				System::Int32 Root::T_x142::M_x18()
	IL_0548:                                                                        //ldloc.s				V_5
	IL_054a:            Temp_92=V_5->M_x1();                                        //callvirt				System::Int32 Root::T_x166::M_x1()
	IL_054f:                                                                        //add
	IL_0550:            V_7->M_x2((Temp_91 + Temp_92));                             //callvirt				void Root::T_x142::M_x2(System::Int32)
	IL_0555:                                                                        //ldloc.s				V_5
	IL_0557:            V_8=V_5;                                                    //stloc.s				V_8
	IL_0559:                                                                        //ldc.i4				0x2
	IL_055e:            V_20=2;                                                     //stloc				V_20
	IL_0562:            /*goto IL_00a9;*/goto IL_0567;                              //br				IL_00a9
	IL_0567:            goto IL_0a62;                                               //br				IL_0a62
	IL_056c:                                                                        //ldc.i4				0x10
	IL_0571:            V_20=16;                                                    //stloc				V_20
	IL_0575:            /*goto IL_00a9;*/goto IL_057a;                              //br				IL_00a9
	IL_057a:                                                                        //ldloc.s				V_16
	IL_057c:                                                                        //ldc.i4.4
	IL_057d:                                                                        //rem
	IL_057e:            if((V_16 % 4)!=0)goto IL_0a42;                              //brtrue				IL_0a42
	IL_0583:                                                                        //ldc.i4				0x1d
	IL_0588:            V_20=29;                                                    //stloc				V_20
	IL_058c:            /*goto IL_00a9;*/goto IL_0591;                              //br				IL_00a9
	IL_0591:            goto IL_0677;                                               //br				IL_0677
	IL_0596:                                                                        //ldc.i4				0xc
	IL_059b:            V_20=12;                                                    //stloc				V_20
	IL_059f:            /*goto IL_00a9;*/goto IL_05a4;                              //br				IL_00a9
	IL_05a4:                                                                        //ldarg.0
	IL_05a5:            Temp_58=A_0->Assembly;                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_05aa:            Temp_59=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_58)->PublicKey;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKey()
	IL_05af:            if(Temp_59==nullptr)goto IL_05f2;                           //brfalse.s				IL_05f2
	IL_05b1:                                                                        //ldc.i4				0xf
	IL_05b6:            V_20=15;                                                    //stloc				V_20
	IL_05ba:            /*goto IL_00a9;*/goto IL_05bf;                              //br				IL_00a9
	IL_05bf:            goto IL_05c1;                                               //br.s				IL_05c1
	IL_05c1:                                                                        //ldc.i4				0x8
	IL_05c6:            V_20=8;                                                     //stloc				V_20
	IL_05ca:            /*goto IL_00a9;*/goto IL_05cf;                              //br				IL_00a9
	IL_05cf:                                                                        //ldarg.0
	IL_05d0:            Temp_54=A_0->Assembly;                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_05d5:            Temp_55=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_54)->PublicKey;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKey()
	IL_05da:            Temp_56=Temp_55->Length;                                    //ldlen
	IL_05db:                                                                        //conv.i4
	IL_05dc:                                                                        //ldc.i4.0
	IL_05dd:            if(Temp_56<=0)goto IL_05f2;                                 //ble.s				IL_05f2
	IL_05df:                                                                        //ldc.i4				0x24
	IL_05e4:            V_20=36;                                                    //stloc				V_20
	IL_05e8:            /*goto IL_00a9;*/goto IL_05ed;                              //br				IL_00a9
	IL_05ed:            goto IL_0797;                                               //br				IL_0797
	IL_05f2:                                                                        //ldc.i4				0x26
	IL_05f7:            V_20=38;                                                    //stloc				V_20
	IL_05fb:            /*goto IL_00a9;*/goto IL_0600;                              //br				IL_00a9
	IL_0600:                                                                        //ldloc.s				V_13
	IL_0602:            Temp_154=V_13->M_x87();                                     //callvirt				Root::T_x140^ Root::T_x157::M_x87()
	IL_0607:            Temp_155=Temp_154->M_x12();                                 //callvirt				System::Int32 Root::T_x140::M_x12()
	IL_060c:                                                                        //ldc.i4.0
	IL_060d:            if(Temp_155<=0)goto IL_08f4;                                //ble				IL_08f4
	IL_0612:                                                                        //ldc.i4				0x1a
	IL_0617:            V_20=26;                                                    //stloc				V_20
	IL_061b:            /*goto IL_00a9;*/goto IL_0620;                              //br				IL_00a9
	IL_0620:            goto IL_07d6;                                               //br				IL_07d6
	IL_0625:                                                                        //ldloc.2
	IL_0626:            Temp_47=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_062b:                                                                        //ldc.i4.0
	IL_062c:            Temp_47->WriteByte(safe_cast<System::Byte>(0));             //callvirt				void System::IO::Stream::WriteByte(System::Byte)
	IL_0631:                                                                        //ldloc.s				V_14
	IL_0633:                                                                        //ldc.i4.1
	IL_0634:                                                                        //add
	IL_0635:            V_14=(V_14 + 1);                                            //stloc.s				V_14
	IL_0637:                                                                        //ldc.i4				0xd
	IL_063c:            V_20=13;                                                    //stloc				V_20
	IL_0640:            /*goto IL_00a9;*/goto IL_0645;                              //br				IL_00a9
	IL_0645:            goto IL_06c1;                                               //br.s				IL_06c1
	IL_0647:                                                                        //ldloc.s				V_7
	IL_0649:                                                                        //dup
	IL_064a:            Temp_57=V_7->M_x5();                                        //callvirt				System::UInt16 Root::T_x142::M_x5()
	IL_064f:                                                                        //conv.i4
	IL_0650:                                                                        //ldc.i4				0x2000
	IL_0655:                                                                        //or
	IL_0656:                                                                        //conv.u2
	IL_0657:            V_7->M_x12(safe_cast<System::UInt16>((safe_cast<System::Int32>(Temp_57) | 8192)));//callvirt				void Root::T_x142::M_x12(System::UInt16)
	IL_065c:                                                                        //ldloc.s				V_7
	IL_065e:                                                                        //ldc.i4.3
	IL_065f:            V_7->M_x13(safe_cast<System::UInt16>(3));                   //callvirt				void Root::T_x142::M_x13(System::UInt16)
	IL_0664:                                                                        //ldc.i4				0x25
	IL_0669:            V_20=37;                                                    //stloc				V_20
	IL_066d:            /*goto IL_00a9;*/goto IL_0672;                              //br				IL_00a9
	IL_0672:            goto IL_01be;                                               //br				IL_01be
	IL_0677:                                                                        //ldloc.s				V_11
	IL_0679:            Temp_129=V_11->M_x13();                                     //callvirt				Root::T_x144^ Root::T_x141::M_x13()
	IL_067e:                                                                        //ldloc.s				V_4
	IL_0680:            Temp_130=V_4->M_x8();                                       //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0685:                                                                        //conv.u8
	IL_0686:                                                                        //ldloc.s				V_11
	IL_0688:            Temp_131=V_11->M_x8();                                      //callvirt				System::Int32 Root::T_x141::M_x8()
	IL_068d:                                                                        //conv.i8
	IL_068e:                                                                        //add
	IL_068f:                                                                        //ldloc.s				V_14
	IL_0691:                                                                        //conv.i8
	IL_0692:                                                                        //add
	IL_0693:                                                                        //conv.u4
	IL_0694:            Temp_129->M_x1(safe_cast<System::UInt32>(((safe_cast<System::UInt64>(Temp_130) + safe_cast<System::UInt64>(safe_cast<System::Int64>(Temp_131))) + safe_cast<System::Int64>(V_14))));//callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_0699:                                                                        //ldloc.s				V_11
	IL_069b:            Temp_132=V_11->M_x13();                                     //callvirt				Root::T_x144^ Root::T_x141::M_x13()
	IL_06a0:                                                                        //ldloc.s				V_16
	IL_06a2:            Temp_132->M_x1(V_16);                                       //callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_06a7:                                                                        //ldloc.s				V_14
	IL_06a9:                                                                        //ldloc.s				V_16
	IL_06ab:                                                                        //add
	IL_06ac:            V_14=(V_14 + V_16);                                         //stloc.s				V_14
	IL_06ae:                                                                        //ldc.i4				0x3
	IL_06b3:            V_20=3;                                                     //stloc				V_20
	IL_06b7:            /*goto IL_00a9;*/goto IL_06bc;                              //br				IL_00a9
	IL_06bc:            goto IL_08f4;                                               //br				IL_08f4
	IL_06c1:                                                                        //ldc.i4				0x5
	IL_06c6:            V_20=5;                                                     //stloc				V_20
	IL_06ca:            /*goto IL_00a9;*/goto IL_06cf;                              //br				IL_00a9
	IL_06cf:                                                                        //ldloc.s				V_14
	IL_06d1:                                                                        //ldc.i4.4
	IL_06d2:                                                                        //rem
	IL_06d3:            if((V_14 % 4)!=0)goto IL_0625;                              //brtrue				IL_0625
	IL_06d8:                                                                        //ldc.i4				0xe
	IL_06dd:            V_20=14;                                                    //stloc				V_20
	IL_06e1:            /*goto IL_00a9;*/goto IL_06e6;                              //br				IL_00a9
	IL_06e6:            goto IL_034a;                                               //br				IL_034a
	IL_06eb:                                                                        //ldloc.s				V_7
	IL_06ed:            Temp_137=V_7->M_x17();                                      //callvirt				System::Int32 Root::T_x142::M_x17()
	IL_06f2:                                                                        //ldloc.3
	IL_06f3:            Temp_138=V_3->M_x2();                                       //callvirt				System::Int32 Root::T_x167::M_x2()
	IL_06f8:                                                                        //add
	IL_06f9:            V_10=(Temp_137 + Temp_138);                                 //stloc.s				V_10
	IL_06fb:                                                                        //ldloc.s				V_4
	IL_06fd:                                                                        //ldc.i4				0x2000
	IL_0702:            V_4->M_x12(safe_cast<System::UInt32>(8192));                //callvirt				void Root::T_x166::M_x12(System::UInt32)
	IL_0707:                                                                        //ldloc.s				V_4
	IL_0709:                                                                        //ldloc.s				V_10
	IL_070b:                                                                        //conv.r8
	IL_070c:                                                                        //ldloc.s				V_7
	IL_070e:            Temp_139=V_7->M_x11();                                      //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_0713:                                                                        //conv.r8
	IL_0714:                                                                        //div
	IL_0715:                                                                        //conv.r8
	IL_0716:            Temp_140=System::Math::Ceiling((safe_cast<System::Double>(V_10) / safe_cast<System::Double>(Temp_139)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_071b:                                                                        //conv.i4
	IL_071c:                                                                        //ldloc.s				V_7
	IL_071e:            Temp_141=V_7->M_x11();                                      //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_0723:                                                                        //mul
	IL_0724:            V_4->M_x1(safe_cast<System::UInt32>((safe_cast<System::Int32>(Temp_140) * Temp_141)));//callvirt				void Root::T_x166::M_x1(System::UInt32)
	IL_0729:            Temp_142=gcnew Root::T_x141();                              //newobj				void Root::T_x141::.ctor()
	IL_072e:            V_11=Temp_142;                                              //stloc.s				V_11
	IL_0730:                                                                        //ldarg.0
	IL_0731:            Temp_143=A_0->TargetRuntimeVersion;                         //callvirt				System::String^ Reflector::CodeModel::IModule::get_TargetRuntimeVersion()
	IL_0736:            Temp_144=gcnew Root::T_x154(Temp_143);                      //newobj				void Root::T_x154::.ctor(System::String^)
	IL_073b:            V_12=Temp_144;                                              //stloc.s				V_12
	IL_073d:                                                                        //ldarg.0
	IL_073e:            Temp_145=gcnew Root::T_x157(A_0);                           //newobj				void Root::T_x157::.ctor(Reflector::CodeModel::IModule^)
	IL_0743:            V_13=Temp_145;                                              //stloc.s				V_13
	IL_0745:                                                                        //ldloc.2
	IL_0746:            Temp_146=V_2->BaseStream;                                   //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_074b:                                                                        //ldloc.s				V_4
	IL_074d:            Temp_147=V_4->M_x2();                                       //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_0752:                                                                        //conv.u8
	IL_0753:                                                                        //ldloc.s				V_11
	IL_0755:            Temp_148=V_11->M_x8();                                      //callvirt				System::Int32 Root::T_x141::M_x8()
	IL_075a:                                                                        //conv.i8
	IL_075b:                                                                        //add
	IL_075c:            Temp_146->Position=(safe_cast<System::UInt64>(Temp_147) + safe_cast<System::UInt64>(safe_cast<System::Int64>(Temp_148)));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0761:                                                                        //ldc.i4.0
	IL_0762:            V_14=0;                                                     //stloc.s				V_14
	IL_0764:                                                                        //ldc.i4				0x14
	IL_0769:            V_20=20;                                                    //stloc				V_20
	IL_076d:            /*goto IL_00a9;*/goto IL_0772;                              //br				IL_00a9
	IL_0772:                                                                        //ldloc.s				V_13
	IL_0774:            Temp_98=V_13->M_x45();                                      //callvirt				Root::T_x140^ Root::T_x157::M_x45()
	IL_0779:            Temp_99=Temp_98->M_x12();                                   //callvirt				System::Int32 Root::T_x140::M_x12()
	IL_077e:                                                                        //ldc.i4.0
	IL_077f:            if(Temp_99<=0)goto IL_034a;                                 //ble				IL_034a
	IL_0784:                                                                        //ldc.i4				0x1f
	IL_0789:            V_20=31;                                                    //stloc				V_20
	IL_078d:            /*goto IL_00a9;*/goto IL_0792;                              //br				IL_00a9
	IL_0792:            goto IL_03e1;                                               //br				IL_03e1
	IL_0797:                                                                        //ldarg.0
	IL_0798:            Temp_151=A_0->Assembly;                                     //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_079d:            Temp_152=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_151)->PublicKey;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKey()
	IL_07a2:            Temp_153=Temp_152->Length;                                  //ldlen
	IL_07a3:                                                                        //conv.i4
	IL_07a4:                                                                        //ldc.i4.s				32
	IL_07a6:                                                                        //sub
	IL_07a7:            V_15=(Temp_153 - 32);                                       //stloc.s				V_15
	IL_07a9:                                                                        //ldc.i4				0x28
	IL_07ae:            V_20=40;                                                    //stloc				V_20
	IL_07b2:            /*goto IL_00a9;*/goto IL_07b7;                              //br				IL_00a9
	IL_07b7:                                                                        //ldloc.s				V_15
	IL_07b9:                                                                        //ldc.i4				0x80
	IL_07be:            if(V_15>=128)goto IL_087e;                                  //bge				IL_087e
	IL_07c3:                                                                        //ldc.i4				0x4
	IL_07c8:            V_20=4;                                                     //stloc				V_20
	IL_07cc:            /*goto IL_00a9;*/goto IL_07d1;                              //br				IL_00a9
	IL_07d1:            goto IL_08dd;                                               //br				IL_08dd
	IL_07d6:                                                                        //ldloc.s				V_13
	IL_07d8:            Temp_122=V_13->M_x87();                                     //callvirt				Root::T_x140^ Root::T_x157::M_x87()
	IL_07dd:                                                                        //ldloc.2
	IL_07de:            Temp_123=V_2->BaseStream;                                   //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_07e3:            Temp_122->M_x1(Temp_123);                                   //callvirt				void Root::T_x140::M_x1(System::IO::Stream^)
	IL_07e8:                                                                        //ldloc.s				V_13
	IL_07ea:            Temp_124=V_13->M_x87();                                     //callvirt				Root::T_x140^ Root::T_x157::M_x87()
	IL_07ef:            Temp_125=Temp_124->M_x12();                                 //callvirt				System::Int32 Root::T_x140::M_x12()
	IL_07f4:            V_16=Temp_125;                                              //stloc.s				V_16
	IL_07f6:                                                                        //ldc.i4				0x7
	IL_07fb:            V_20=7;                                                     //stloc				V_20
	IL_07ff:            /*goto IL_00a9;*/goto IL_0804;                              //br				IL_00a9
	IL_0804:            goto IL_056c;                                               //br				IL_056c
	IL_0809:                                                                        //ldstr				L"\x012E\x4330\x5632\x5934\x5836\x5A38"
	IL_080e:                                                                        //ldloc				V_21
	IL_0812:            Temp_93=a(L"\x012E\x4330\x5632\x5934\x5836\x5A38",V_21);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0817:                                                                        //ldc.i4				0x42000040
	IL_081c:            Temp_94=gcnew Root::T_x166(Temp_93,safe_cast<System::Int32>(1107296320));//newobj				void Root::T_x166::.ctor(System::String^,System::Int32)
	IL_0821:            V_6=Temp_94;                                                //stloc.s				V_6
	IL_0823:                                                                        //ldloc.3
	IL_0824:                                                                        //ldloc.s				V_6
	IL_0826:            V_3->M_x1(V_6);                                             //callvirt				void Root::T_x167::M_x1(Root::T_x166^)
	IL_082b:            Temp_95=gcnew Root::T_x142();                               //newobj				void Root::T_x142::.ctor()
	IL_0830:            V_7=Temp_95;                                                //stloc.s				V_7
	IL_0832:                                                                        //ldloc.s				V_7
	IL_0834:                                                                        //ldloc.3
	IL_0835:            Temp_96=V_3->M_x1();                                        //callvirt				System::Int32 Root::T_x167::M_x1()
	IL_083a:                                                                        //conv.u2
	IL_083b:            V_7->M_x8(safe_cast<System::UInt16>(Temp_96));              //callvirt				void Root::T_x142::M_x8(System::UInt16)
	IL_0840:                                                                        //ldarg.0
	IL_0841:            Temp_97=Root::T_x138::M_x1(A_0);                            //call				Reflector::CodeModel::AssemblyType Root::T_x138::M_x1(Reflector::CodeModel::IModule^)
	IL_0846:            V_19=Temp_97;                                               //stloc.s				V_19
	IL_0848:                                                                        //ldc.i4				0x9
	IL_084d:            V_20=9;                                                     //stloc				V_20
	IL_0851:            /*goto IL_00a9;*/goto IL_0856;                              //br				IL_00a9
	IL_0856:                                                                        //ldloc.s				V_19
	IL_0858:                                                                        //ldc.i4.1
	IL_0859:                                                                        //sub
	IL_085a:            switch((V_19 - safe_cast<Reflector::CodeModel::AssemblyType>(1))){case 0:goto IL_03c6;case 1:goto IL_03ab;case 2:goto IL_0647;};//switch				(IL_03c6,IL_03ab,IL_0647)
	IL_086b:                                                                        //ldc.i4				0x19
	IL_0870:            V_20=25;                                                    //stloc				V_20
	IL_0874:            /*goto IL_00a9;*/goto IL_0879;                              //br				IL_00a9
	IL_0879:            goto IL_0a8a;                                               //br				IL_0a8a
	IL_087e:                                                                        //ldloc.s				V_11
	IL_0880:            Temp_48=V_11->M_x1();                                       //callvirt				Root::T_x144^ Root::T_x141::M_x1()
	IL_0885:                                                                        //ldloc.s				V_4
	IL_0887:            Temp_49=V_4->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_088c:                                                                        //conv.u8
	IL_088d:                                                                        //ldloc.s				V_11
	IL_088f:            Temp_50=V_11->M_x8();                                       //callvirt				System::Int32 Root::T_x141::M_x8()
	IL_0894:                                                                        //conv.i8
	IL_0895:                                                                        //add
	IL_0896:                                                                        //ldloc.s				V_14
	IL_0898:                                                                        //conv.i8
	IL_0899:                                                                        //add
	IL_089a:                                                                        //conv.u4
	IL_089b:            Temp_48->M_x1(safe_cast<System::UInt32>(((safe_cast<System::UInt64>(Temp_49) + safe_cast<System::UInt64>(safe_cast<System::Int64>(Temp_50))) + safe_cast<System::Int64>(V_14))));//callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_08a0:                                                                        //ldloc.s				V_11
	IL_08a2:            Temp_51=V_11->M_x1();                                       //callvirt				Root::T_x144^ Root::T_x141::M_x1()
	IL_08a7:                                                                        //ldloc.s				V_15
	IL_08a9:            Temp_51->M_x1(V_15);                                        //callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_08ae:                                                                        //ldloc.s				V_14
	IL_08b0:                                                                        //ldloc.s				V_15
	IL_08b2:                                                                        //add
	IL_08b3:            V_14=(V_14 + V_15);                                         //stloc.s				V_14
	IL_08b5:                                                                        //ldloc.2
	IL_08b6:            Temp_52=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_08bb:                                                                        //dup
	IL_08bc:            Temp_53=Temp_52->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_08c1:                                                                        //ldloc.s				V_15
	IL_08c3:                                                                        //conv.i8
	IL_08c4:                                                                        //add
	IL_08c5:            Temp_52->Position=(Temp_53 + safe_cast<System::Int64>(V_15));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_08ca:                                                                        //ldc.i4				0x16
	IL_08cf:            V_20=22;                                                    //stloc				V_20
	IL_08d3:            /*goto IL_00a9;*/goto IL_08d8;                              //br				IL_00a9
	IL_08d8:            goto IL_05f2;                                               //br				IL_05f2
	IL_08dd:                                                                        //ldc.i4				0x80
	IL_08e2:            V_15=128;                                                   //stloc.s				V_15
	IL_08e4:                                                                        //ldc.i4				0x6
	IL_08e9:            V_20=6;                                                     //stloc				V_20
	IL_08ed:            /*goto IL_00a9;*/goto IL_08f2;                              //br				IL_00a9
	IL_08f2:            goto IL_087e;                                               //br.s				IL_087e
	IL_08f4:                                                                        //ldloc.s				V_11
	IL_08f6:                                                                        //ldloc.s				V_13
	IL_08f8:            Temp_17=V_13->M_x146();                                     //callvirt				System::Int32 Root::T_x157::M_x146()
	IL_08fd:            V_11->M_x1(Temp_17);                                        //callvirt				void Root::T_x141::M_x1(System::Int32)
	IL_0902:                                                                        //ldloc.s				V_11
	IL_0904:            Temp_18=V_11->M_x2();                                       //callvirt				Root::T_x144^ Root::T_x141::M_x2()
	IL_0909:                                                                        //ldloc.s				V_4
	IL_090b:            Temp_19=V_4->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0910:                                                                        //conv.u8
	IL_0911:                                                                        //ldloc.s				V_11
	IL_0913:            Temp_20=V_11->M_x8();                                       //callvirt				System::Int32 Root::T_x141::M_x8()
	IL_0918:                                                                        //conv.i8
	IL_0919:                                                                        //add
	IL_091a:                                                                        //ldloc.s				V_14
	IL_091c:                                                                        //conv.i8
	IL_091d:                                                                        //add
	IL_091e:                                                                        //conv.u4
	IL_091f:            Temp_18->M_x1(safe_cast<System::UInt32>(((safe_cast<System::UInt64>(Temp_19) + safe_cast<System::UInt64>(safe_cast<System::Int64>(Temp_20))) + safe_cast<System::Int64>(V_14))));//callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_0924:                                                                        //ldloc.2
	IL_0925:            Temp_21=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_092a:            Temp_22=Temp_21->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_092f:                                                                        //conv.i4
	IL_0930:            V_17=safe_cast<System::Int32>(Temp_22);                     //stloc.s				V_17
	IL_0932:                                                                        //ldloc.s				V_12
	IL_0934:                                                                        //ldloc.2
	IL_0935:            V_12->M_x1(V_2);                                            //callvirt				void Root::T_x154::M_x1(System::IO::BinaryWriter^)
	IL_093a:                                                                        //ldloc.s				V_13
	IL_093c:                                                                        //ldloc.2
	IL_093d:            Temp_23=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_0942:                                                                        //ldloc.s				V_12
	IL_0944:            Temp_24=V_12->M_x2();                                       //callvirt				System::Int32 Root::T_x154::M_x2()
	IL_0949:                                                                        //ldloc.s				V_4
	IL_094b:            Temp_25=V_4->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0950:                                                                        //ldloc.s				V_11
	IL_0952:            Temp_26=V_11->M_x8();                                       //callvirt				System::Int32 Root::T_x141::M_x8()
	IL_0957:                                                                        //add
	IL_0958:            V_13->M_x1(Temp_23,Temp_24,(Temp_25 + safe_cast<System::UInt32>(Temp_26)));//callvirt				void Root::T_x157::M_x1(System::IO::Stream^,System::Int32,System::Int32)
	IL_095d:                                                                        //ldloc.s				V_11
	IL_095f:            Temp_27=V_11->M_x2();                                       //callvirt				Root::T_x144^ Root::T_x141::M_x2()
	IL_0964:                                                                        //ldloc.2
	IL_0965:            Temp_28=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_096a:            Temp_29=Temp_28->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_096f:                                                                        //ldloc.s				V_17
	IL_0971:                                                                        //conv.i8
	IL_0972:                                                                        //sub
	IL_0973:                                                                        //conv.i4
	IL_0974:            Temp_27->M_x1(safe_cast<System::Int32>((Temp_29 - safe_cast<System::Int64>(V_17))));//callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_0979:                                                                        //ldloc.2
	IL_097a:                                                                        //ldloc.s				V_4
	IL_097c:                                                                        //ldloc.s				V_7
	IL_097e:                                                                        //ldarg.0
	IL_097f:            Temp_30=Root::T_x138::M_x1(A_0);                            //call				Reflector::CodeModel::AssemblyType Root::T_x138::M_x1(Reflector::CodeModel::IModule^)
	IL_0984:            Temp_31=Root::T_x138::M_x1(V_2,V_4,V_7,Temp_30);            //call				System::Int32 Root::T_x138::M_x1(System::IO::BinaryWriter^,Root::T_x166^,Root::T_x142^,Reflector::CodeModel::AssemblyType)
	IL_0989:            V_9=Temp_31;                                                //stloc.s				V_9
	IL_098b:                                                                        //ldloc.s				V_4
	IL_098d:                                                                        //ldloc.2
	IL_098e:            Temp_32=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_0993:            Temp_33=Temp_32->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0998:                                                                        //ldloc.s				V_4
	IL_099a:            Temp_34=V_4->M_x2();                                        //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_099f:                                                                        //conv.u8
	IL_09a0:                                                                        //sub
	IL_09a1:                                                                        //conv.i4
	IL_09a2:            V_4->M_x1(safe_cast<System::Int32>((Temp_33 - safe_cast<System::Int64>(safe_cast<System::UInt64>(Temp_34)))));//callvirt				void Root::T_x166::M_x1(System::Int32)
	IL_09a7:                                                                        //ldloc.s				V_4
	IL_09a9:                                                                        //ldloc.s				V_4
	IL_09ab:            Temp_35=V_4->M_x5();                                        //callvirt				System::Int32 Root::T_x166::M_x5()
	IL_09b0:                                                                        //conv.r8
	IL_09b1:                                                                        //ldloc.s				V_7
	IL_09b3:            Temp_36=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_09b8:                                                                        //conv.r8
	IL_09b9:                                                                        //div
	IL_09ba:                                                                        //conv.r8
	IL_09bb:            Temp_37=System::Math::Ceiling((safe_cast<System::Double>(Temp_35) / safe_cast<System::Double>(Temp_36)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_09c0:                                                                        //conv.i4
	IL_09c1:                                                                        //ldloc.s				V_7
	IL_09c3:            Temp_38=V_7->M_x11();                                       //callvirt				System::Int32 Root::T_x142::M_x11()
	IL_09c8:                                                                        //mul
	IL_09c9:            V_4->M_x2((safe_cast<System::Int32>(Temp_37) * Temp_38));   //callvirt				void Root::T_x166::M_x2(System::Int32)
	IL_09ce:                                                                        //ldloc.2
	IL_09cf:            Temp_39=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_09d4:                                                                        //ldloc.s				V_4
	IL_09d6:            Temp_40=V_4->M_x2();                                        //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_09db:                                                                        //conv.u8
	IL_09dc:            Temp_39->Position=safe_cast<System::Int64>(safe_cast<System::UInt64>(Temp_40));//callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_09e1:                                                                        //ldloc.s				V_7
	IL_09e3:            Temp_41=V_7->M_x2();                                        //callvirt				Root::T_x144^ Root::T_x142::M_x2()
	IL_09e8:                                                                        //ldloc.s				V_4
	IL_09ea:            Temp_42=V_4->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_09ef:            Temp_41->M_x1(Temp_42);                                     //callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_09f4:                                                                        //ldloc.s				V_7
	IL_09f6:            Temp_43=V_7->M_x2();                                        //callvirt				Root::T_x144^ Root::T_x142::M_x2()
	IL_09fb:                                                                        //ldloc.s				V_11
	IL_09fd:            Temp_44=V_11->M_x8();                                       //callvirt				System::Int32 Root::T_x141::M_x8()
	IL_0a02:            Temp_43->M_x1(Temp_44);                                     //callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_0a07:                                                                        //ldloc.s				V_11
	IL_0a09:                                                                        //ldloc.2
	IL_0a0a:            V_11->M_x1(V_2);                                            //callvirt				void Root::T_x141::M_x1(System::IO::BinaryWriter^)
	IL_0a0f:                                                                        //ldloc.s				V_7
	IL_0a11:                                                                        //ldloc.s				V_4
	IL_0a13:            Temp_45=V_4->M_x8();                                        //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0a18:            V_7->M_x8(Temp_45);                                         //callvirt				void Root::T_x142::M_x8(System::UInt32)
	IL_0a1d:                                                                        //ldloc.s				V_7
	IL_0a1f:                                                                        //ldloc.s				V_4
	IL_0a21:            Temp_46=V_4->M_x1();                                        //callvirt				System::Int32 Root::T_x166::M_x1()
	IL_0a26:            V_7->M_x1(Temp_46);                                         //callvirt				void Root::T_x142::M_x1(System::Int32)
	IL_0a2b:                                                                        //ldloc.s				V_4
	IL_0a2d:            V_8=V_4;                                                    //stloc.s				V_8
	IL_0a2f:                                                                        //ldc.i4				0x29
	IL_0a34:            V_20=41;                                                    //stloc				V_20
	IL_0a38:            /*goto IL_00a9;*/goto IL_0a3d;                              //br				IL_00a9
	IL_0a3d:            goto IL_01ec;                                               //br				IL_01ec
	IL_0a42:                                                                        //ldloc.2
	IL_0a43:                                                                        //ldc.i4.0
	IL_0a44:            V_2->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_0a49:                                                                        //ldloc.s				V_16
	IL_0a4b:                                                                        //ldc.i4.1
	IL_0a4c:                                                                        //add
	IL_0a4d:            V_16=(V_16 + 1);                                            //stloc.s				V_16
	IL_0a4f:                                                                        //ldc.i4				0x15
	IL_0a54:            V_20=21;                                                    //stloc				V_20
	IL_0a58:            /*goto IL_00a9;*/goto IL_0a5d;                              //br				IL_00a9
	IL_0a5d:            goto IL_056c;                                               //br				IL_056c
	IL_0a62:                                                                        //ldc.i4				0x13
	IL_0a67:            V_20=19;                                                    //stloc				V_20
	IL_0a6b:            /*goto IL_00a9;*/goto IL_0a70;                              //br				IL_00a9
	IL_0a70:                                                                        //ldloc.s				V_6
	IL_0a72:            if(V_6==nullptr)goto IL_0a9d;                               //brfalse				IL_0a9d
	IL_0a77:                                                                        //ldc.i4				0x17
	IL_0a7c:            V_20=23;                                                    //stloc				V_20
	IL_0a80:            /*goto IL_00a9;*/goto IL_0a85;                              //br				IL_00a9
	IL_0a85:            goto IL_0214;                                               //br				IL_0214
	IL_0a8a:                                                                        //ldc.i4				0x23
	IL_0a8f:            V_20=35;                                                    //stloc				V_20
	IL_0a93:            /*goto IL_00a9;*/goto IL_0a98;                              //br				IL_00a9
	IL_0a98:            goto IL_01be;                                               //br				IL_01be
	IL_0a9d:                                                                        //ldloc.s				V_7
	IL_0a9f:                                                                        //ldloc.s				V_4
	IL_0aa1:            Temp_8=V_4->M_x2();                                         //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_0aa6:            V_7->M_x13(Temp_8);                                         //callvirt				void Root::T_x142::M_x13(System::UInt32)
	IL_0aab:                                                                        //ldloc.s				V_7
	IL_0aad:                                                                        //ldloc.s				V_6
	IL_0aaf:            Temp_9=V_6->M_x8();                                         //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0ab4:                                                                        //conv.u8
	IL_0ab5:                                                                        //ldloc.s				V_6
	IL_0ab7:            Temp_10=V_6->M_x5();                                        //callvirt				System::Int32 Root::T_x166::M_x5()
	IL_0abc:                                                                        //conv.r8
	IL_0abd:                                                                        //ldloc.s				V_7
	IL_0abf:            Temp_11=V_7->M_x15();                                       //callvirt				System::Int32 Root::T_x142::M_x15()
	IL_0ac4:                                                                        //conv.r8
	IL_0ac5:                                                                        //div
	IL_0ac6:                                                                        //conv.r8
	IL_0ac7:            Temp_12=System::Math::Ceiling((safe_cast<System::Double>(Temp_10) / safe_cast<System::Double>(Temp_11)));//call				System::Double System::Math::Ceiling(System::Double)
	IL_0acc:                                                                        //ldloc.s				V_7
	IL_0ace:            Temp_13=V_7->M_x15();                                       //callvirt				System::Int32 Root::T_x142::M_x15()
	IL_0ad3:                                                                        //conv.r8
	IL_0ad4:                                                                        //mul
	IL_0ad5:                                                                        //conv.i4
	IL_0ad6:                                                                        //conv.i8
	IL_0ad7:                                                                        //add
	IL_0ad8:                                                                        //conv.u4
	IL_0ad9:            V_7->M_x1(safe_cast<System::UInt32>((safe_cast<System::UInt64>(Temp_9) + safe_cast<System::UInt64>(safe_cast<System::Int64>(safe_cast<System::Int32>((Temp_12 * safe_cast<System::Double>(Temp_13))))))));//callvirt				void Root::T_x142::M_x1(System::UInt32)
	IL_0ade:                                                                        //ldloc.s				V_7
	IL_0ae0:                                                                        //ldloc.3
	IL_0ae1:                                                                        //ldc.i4.1
	IL_0ae2:            Temp_14=V_3->M_x1(safe_cast<System::Int32>(1));             //callvirt				Root::T_x166^ Root::T_x167::M_x1(System::Int32)
	IL_0ae7:            Temp_15=Temp_14->M_x8();                                    //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0aec:            V_7->M_x12(Temp_15);                                        //callvirt				void Root::T_x142::M_x12(System::UInt32)
	IL_0af1:                                                                        //ldloc.2
	IL_0af2:            Temp_16=V_2->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_0af7:                                                                        //ldc.i4.0
	IL_0af8:                                                                        //conv.i8
	IL_0af9:            Temp_16->Position=0;                                        //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0afe:                                                                        //ldloc.s				V_7
	IL_0b00:                                                                        //ldloc.2
	IL_0b01:            V_7->M_x1(V_2);                                             //callvirt				void Root::T_x142::M_x1(System::IO::BinaryWriter^)
	IL_0b06:                                                                        //ldloc.3
	IL_0b07:                                                                        //ldloc.2
	IL_0b08:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x167::M_x1(System::IO::BinaryWriter^)
	IL_0b0d:                                                                        //ldc.i4				0x22
	IL_0b12:            V_20=34;                                                    //stloc				V_20
	IL_0b16:            /*goto IL_00a9;*/goto IL_0b1b;                              //br				IL_00a9
	IL_0b1b:            goto IL_0bc3;                                               //leave				IL_0bc3
	                    ;}
	                    finally{
	IL_0b20:                                                                        //ldc.i4				0x2
	IL_0b25:            V_20=2;                                                     //stloc				V_20
	IL_0b29:            /*goto IL_0b2d;*/goto IL_0b2b;                              //br.s				IL_0b2d
	IL_0b2b:            goto IL_0b42;                                               //br.s				IL_0b42
	IL_0b2d:                                                                        //ldloc				V_20
	IL_0b31:            switch(V_20){case 0:goto IL_0b50;case 1:goto IL_0b63;case 2:goto IL_0b2b;};//switch				(IL_0b50,IL_0b63,IL_0b2b)
	IL_0b42:                                                                        //ldloc.1
	IL_0b43:            if(V_1==nullptr)goto IL_0b65;                               //brfalse.s				IL_0b65
	IL_0b45:                                                                        //ldc.i4				0x0
	IL_0b4a:            V_20=0;                                                     //stloc				V_20
	IL_0b4e:            /*goto IL_0b2d;*/goto IL_0b50;                              //br.s				IL_0b2d
	IL_0b50:            goto IL_0b52;                                               //br.s				IL_0b52
	IL_0b52:                                                                        //ldloc.1
	IL_0b53:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0b58:                                                                        //ldc.i4				0x1
	IL_0b5d:            V_20=1;                                                     //stloc				V_20
	IL_0b61:            /*goto IL_0b2d;*/goto IL_0b63;                              //br.s				IL_0b2d
	IL_0b63:            goto IL_0b65;                                               //br.s				IL_0b65
	IL_0b65:                                                                        //endfinally
	                    ;}
	IL_0b66:                                                                        //ldc.i4				0x1
	IL_0b6b:            V_20=1;                                                     //stloc				V_20
	IL_0b6f:            /*goto IL_000b;*/goto IL_0b74;                              //br				IL_000b
	IL_0b74:                                                                        //ldarg.s				A_4
	IL_0b76:            Temp_3=A_4->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0b7b:                                                                        //ldc.i4.0
	IL_0b7c:            if(Temp_3<=0)goto IL_0be4;                                  //ble.s				IL_0be4
	IL_0b7e:                                                                        //ldc.i4				0x2
	IL_0b83:            V_20=2;                                                     //stloc				V_20
	IL_0b87:            /*goto IL_000b;*/goto IL_0b8c;                              //br				IL_000b
	IL_0b8c:            goto IL_0089;                                               //br				IL_0089
	IL_0b91:                                                                        //ldc.i4				0x3
	IL_0b96:            V_20=3;                                                     //stloc				V_20
	IL_0b9a:            /*goto IL_000b;*/goto IL_0b9f;                              //br				IL_000b
	IL_0b9f:                                                                        //ldloc.0
	IL_0ba0:            if(V_0==nullptr)goto IL_005f;                               //brfalse				IL_005f
	IL_0ba5:                                                                        //ldc.i4				0x9
	IL_0baa:            V_20=9;                                                     //stloc				V_20
	IL_0bae:            /*goto IL_000b;*/goto IL_0bb3;                              //br				IL_000b
	IL_0bb3:                                                                        //ldc.i4.4
	IL_0bb4:                                                                        //dup
	IL_0bb5:                                                                        //dup
	IL_0bb6:                                                                        //ldc.i4.2
	IL_0bb7:                                                                        //sub
	IL_0bb8:                                                                        //blt				IL_0bb4
	IL_0bbd:                                                                        //pop
	IL_0bbe:            goto IL_0081;                                               //br				IL_0081
	IL_0bc3:                                                                        //ldc.i4				0x7
	IL_0bc8:            V_20=7;                                                     //stloc				V_20
	IL_0bcc:            /*goto IL_000b;*/goto IL_0bd1;                              //br				IL_000b
	IL_0bd1:                                                                        //ldarg.2
	IL_0bd2:            if(A_2)goto IL_0be4;                                        //brtrue.s				IL_0be4
	IL_0bd4:                                                                        //ldc.i4				0x4
	IL_0bd9:            V_20=4;                                                     //stloc				V_20
	IL_0bdd:            /*goto IL_000b;*/goto IL_0be2;                              //br				IL_000b
	IL_0be2:            goto IL_0b91;                                               //br.s				IL_0b91
	IL_0be4:            return;                                                     //ret

}
inline System::Int32 Root::T_x138::M_x1(System::IO::BinaryWriter^ A_0,Root::T_x166^ A_1,Root::T_x142^ A_2,Reflector::CodeModel::AssemblyType A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::Stream^ Temp_0 = nullptr;
	System::Int64 Temp_1 = 0;
	System::UInt64 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::UInt32 Temp_4 = 0;
	System::UInt32 Temp_5 = 0;
	Root::T_x144^ Temp_6 = nullptr;
	Root::T_x144^ Temp_7 = nullptr;
	System::UInt32 Temp_8 = 0;
	Root::T_x144^ Temp_9 = nullptr;
	Root::T_x144^ Temp_10 = nullptr;
	System::IO::Stream^ Temp_11 = nullptr;
	System::Int64 Temp_12 = 0;
	System::String^ Temp_13 = nullptr;
	array<System::Char>^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	array<System::Char>^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::UInt32 V_1 = 0;
	System::UInt32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::UInt32 V_4 = 0;
	System::UInt32 V_5 = 0;
	System::UInt32 V_6 = 0;
	System::String^ V_7 = nullptr;
	System::Char V_8 = (System::Char)0;
	System::Char V_9 = (System::Char)0;
	array<System::Char>^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	System::Int32 V_13 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_13=8;                                                     //stloc				V_13
	IL_0009:            goto IL_0054;                                               //br.s				IL_0054
	IL_000b:                                                                        //ldloc				V_12
	IL_000f:            switch(V_12){case 0:goto IL_014f;case 1:goto IL_02a9;case 2:goto IL_01dc;case 3:goto IL_0161;case 4:goto IL_0290;case 5:goto IL_027a;case 6:goto IL_01ef;case 7:goto IL_025c;case 8:goto IL_02d8;case 9:goto IL_0218;case 10:goto IL_0236;case 11:goto IL_006c;case 12:goto IL_019a;case 13:goto IL_0202;case 14:goto IL_0187;case 15:goto IL_01bb;};//switch				(IL_014f,IL_02a9,IL_01dc,IL_0161,IL_0290,IL_027a,IL_01ef,IL_025c,IL_02d8,IL_0218,IL_0236,IL_006c,IL_019a,IL_0202,IL_0187,IL_01bb)
	IL_0054:                                                                        //ldarg.0
	IL_0055:            Temp_0=A_0->BaseStream;                                     //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_005a:            Temp_1=Temp_0->Position;                                    //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_005f:                                                                        //conv.i4
	IL_0060:            V_0=safe_cast<System::Int32>(Temp_1);                       //stloc.0
	IL_0061:                                                                        //ldc.i4				0xb
	IL_0066:            V_12=11;                                                    //stloc				V_12
	IL_006a:            /*goto IL_000b;*/goto IL_006c;                              //br.s				IL_000b
	IL_006c:            goto IL_01ce;                                               //br				IL_01ce
	IL_0071:                                                                        //ldarg.1
	IL_0072:            Temp_4=A_1->M_x8();                                         //callvirt				System::UInt32 Root::T_x166::M_x8()
	IL_0077:                                                                        //conv.u8
	IL_0078:                                                                        //ldloc.0
	IL_0079:                                                                        //conv.i8
	IL_007a:                                                                        //add
	IL_007b:                                                                        //ldarg.1
	IL_007c:            Temp_5=A_1->M_x2();                                         //callvirt				System::UInt32 Root::T_x166::M_x2()
	IL_0081:                                                                        //conv.u8
	IL_0082:                                                                        //sub
	IL_0083:                                                                        //conv.u4
	IL_0084:            V_1=safe_cast<System::UInt32>(((safe_cast<System::UInt64>(Temp_4) + safe_cast<System::UInt64>(safe_cast<System::Int64>(V_0))) - safe_cast<System::Int64>(safe_cast<System::UInt64>(Temp_5))));//stloc.1
	IL_0085:                                                                        //ldloc.1
	IL_0086:                                                                        //ldc.i4.s				40
	IL_0088:                                                                        //add
	IL_0089:            V_2=safe_cast<System::UInt32>((V_1 + 40));                  //stloc.2
	IL_008a:                                                                        //ldc.i4.s				12
	IL_008c:            V_3=12;                                                     //stloc.3
	IL_008d:                                                                        //ldloc.2
	IL_008e:                                                                        //ldc.i4.8
	IL_008f:                                                                        //add
	IL_0090:            V_4=safe_cast<System::UInt32>((V_2 + 8));                   //stloc.s				V_4
	IL_0092:                                                                        //ldloc.s				V_4
	IL_0094:                                                                        //ldc.i4.s				14
	IL_0096:                                                                        //add
	IL_0097:            V_5=safe_cast<System::UInt32>((V_4 + 14));                  //stloc.s				V_5
	IL_0099:                                                                        //ldloc.s				V_5
	IL_009b:                                                                        //ldc.i4.s				14
	IL_009d:                                                                        //add
	IL_009e:                                                                        //ldc.i4.4
	IL_009f:                                                                        //add
	IL_00a0:                                                                        //conv.u8
	IL_00a1:                                                                        //ldloc.3
	IL_00a2:                                                                        //conv.i8
	IL_00a3:                                                                        //add
	IL_00a4:                                                                        //conv.u4
	IL_00a5:            V_6=safe_cast<System::UInt32>((safe_cast<System::UInt64>(((V_5 + 14) + 4)) + safe_cast<System::UInt64>(safe_cast<System::Int64>(V_3))));//stloc.s				V_6
	IL_00a7:                                                                        //ldarg.2
	IL_00a8:                                                                        //ldloc.s				V_6
	IL_00aa:                                                                        //conv.u8
	IL_00ab:                                                                        //ldloc.3
	IL_00ac:                                                                        //conv.i8
	IL_00ad:                                                                        //sub
	IL_00ae:                                                                        //ldc.i4.2
	IL_00af:                                                                        //conv.i8
	IL_00b0:                                                                        //sub
	IL_00b1:                                                                        //conv.u4
	IL_00b2:            A_2->M_x2(safe_cast<System::UInt32>(((safe_cast<System::UInt64>(V_6) - safe_cast<System::UInt64>(safe_cast<System::Int64>(V_3))) - 2)));//callvirt				void Root::T_x142::M_x2(System::UInt32)
	IL_00b7:                                                                        //ldarg.2
	IL_00b8:            Temp_6=A_2->M_x14();                                        //callvirt				Root::T_x144^ Root::T_x142::M_x14()
	IL_00bd:                                                                        //ldloc.1
	IL_00be:            Temp_6->M_x1(V_1);                                          //callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_00c3:                                                                        //ldarg.2
	IL_00c4:            Temp_7=A_2->M_x14();                                        //callvirt				Root::T_x144^ Root::T_x142::M_x14()
	IL_00c9:                                                                        //ldarg.2
	IL_00ca:            Temp_8=A_2->M_x1();                                         //callvirt				System::UInt32 Root::T_x142::M_x1()
	IL_00cf:                                                                        //ldloc.1
	IL_00d0:                                                                        //sub
	IL_00d1:                                                                        //ldc.i4.2
	IL_00d2:                                                                        //sub
	IL_00d3:            Temp_7->M_x1(((Temp_8 - V_1) - 2));                         //callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_00d8:                                                                        //ldarg.2
	IL_00d9:            Temp_9=A_2->M_x19();                                        //callvirt				Root::T_x144^ Root::T_x142::M_x19()
	IL_00de:                                                                        //ldloc.s				V_6
	IL_00e0:            Temp_9->M_x1(V_6);                                          //callvirt				void Root::T_x144::M_x1(System::UInt32)
	IL_00e5:                                                                        //ldarg.2
	IL_00e6:            Temp_10=A_2->M_x19();                                       //callvirt				Root::T_x144^ Root::T_x142::M_x19()
	IL_00eb:                                                                        //ldc.i4.8
	IL_00ec:            Temp_10->M_x1(safe_cast<System::Int32>(8));                 //callvirt				void Root::T_x144::M_x1(System::Int32)
	IL_00f1:                                                                        //ldarg.0
	IL_00f2:                                                                        //ldloc.2
	IL_00f3:            A_0->Write(V_2);                                            //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:                                                                        //ldc.i4.0
	IL_00fa:            A_0->Write(safe_cast<System::Int32>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_00ff:                                                                        //ldarg.0
	IL_0100:                                                                        //ldc.i4.0
	IL_0101:            A_0->Write(safe_cast<System::Int32>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0106:                                                                        //ldarg.0
	IL_0107:                                                                        //ldloc.s				V_5
	IL_0109:            A_0->Write(V_5);                                            //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_010e:                                                                        //ldarg.0
	IL_010f:                                                                        //ldloc.s				V_6
	IL_0111:            A_0->Write(V_6);                                            //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0116:                                                                        //ldarg.0
	IL_0117:            Temp_11=A_0->BaseStream;                                    //callvirt				System::IO::Stream^ System::IO::BinaryWriter::get_BaseStream()
	IL_011c:                                                                        //dup
	IL_011d:            Temp_12=Temp_11->Position;                                  //callvirt				System::Int64 System::IO::Stream::get_Position()
	IL_0122:                                                                        //ldc.i4.s				20
	IL_0124:                                                                        //conv.i8
	IL_0125:                                                                        //add
	IL_0126:            Temp_11->Position=(Temp_12 + 20);                           //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_012b:                                                                        //ldarg.0
	IL_012c:                                                                        //ldloc.s				V_4
	IL_012e:            A_0->Write(V_4);                                            //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0133:                                                                        //ldarg.0
	IL_0134:                                                                        //ldc.i4.0
	IL_0135:            A_0->Write(safe_cast<System::Int32>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_013a:                                                                        //ldarg.0
	IL_013b:                                                                        //ldc.i4.0
	IL_013c:            A_0->Write(safe_cast<System::Int16>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int16)
	IL_0141:                                                                        //ldc.i4				0x0
	IL_0146:            V_12=0;                                                     //stloc				V_12
	IL_014a:            /*goto IL_000b;*/goto IL_014f;                              //br				IL_000b
	IL_014f:                                                                        //ldarg.3
	IL_0150:                                                                        //ldc.i4.3
	IL_0151:            if(safe_cast<System::Int32>(A_3)==3)goto IL_01ad;           //beq.s				IL_01ad
	IL_0153:                                                                        //ldc.i4				0x3
	IL_0158:            V_12=3;                                                     //stloc				V_12
	IL_015c:            /*goto IL_000b;*/goto IL_0161;                              //br				IL_000b
	IL_0161:            goto IL_018c;                                               //br.s				IL_018c
	IL_0163:                                                                        //ldloc.s				V_10
	IL_0165:                                                                        //ldloc.s				V_11
	IL_0167:                                                                        //ldelem.u2
	IL_0168:            V_9=V_10[V_11];                                             //stloc.s				V_9
	IL_016a:                                                                        //ldarg.0
	IL_016b:                                                                        //ldloc.s				V_9
	IL_016d:                                                                        //conv.u1
	IL_016e:            A_0->Write(safe_cast<System::Byte>(V_9));                   //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_0173:                                                                        //ldloc.s				V_11
	IL_0175:                                                                        //ldc.i4.1
	IL_0176:                                                                        //add
	IL_0177:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_0179:                                                                        //ldc.i4				0xe
	IL_017e:            V_12=14;                                                    //stloc				V_12
	IL_0182:            /*goto IL_000b;*/goto IL_0187;                              //br				IL_000b
	IL_0187:            goto IL_0282;                                               //br				IL_0282
	IL_018c:                                                                        //ldc.i4				0xc
	IL_0191:            V_12=12;                                                    //stloc				V_12
	IL_0195:            /*goto IL_000b;*/goto IL_019a;                              //br				IL_000b
	IL_019a:                                                                        //ldstr				L"\x7925\x6B27\x4529\x5E2B\x6B2D\x482F\x5731\x7933\x5735\x5137\x5439"
	IL_019f:                                                                        //ldloc				V_13
	IL_01a3:            Temp_15=a(L"\x7925\x6B27\x4529\x5E2B\x6B2D\x482F\x5731\x7933\x5735\x5137\x5439",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a8:            Temp_19=Temp_15;goto IL_025e;                               //br				IL_025e
	IL_01ad:                                                                        //ldc.i4				0xf
	IL_01b2:            V_12=15;                                                    //stloc				V_12
	IL_01b6:            /*goto IL_000b;*/goto IL_01bb;                              //br				IL_000b
	IL_01bb:                                                                        //ldstr				L"\x7925\x6B27\x4529\x5E2B\x6A2D\x5C2F\x5E31\x7933\x5735\x5137\x5439"
	IL_01c0:                                                                        //ldloc				V_13
	IL_01c4:            Temp_18=a(L"\x7925\x6B27\x4529\x5E2B\x6A2D\x5C2F\x5E31\x7933\x5735\x5137\x5439",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c9:            Temp_19=Temp_18;goto IL_025e;                               //br				IL_025e
	IL_01ce:                                                                        //ldc.i4				0x2
	IL_01d3:            V_12=2;                                                     //stloc				V_12
	IL_01d7:            /*goto IL_000b;*/goto IL_01dc;                              //br				IL_000b
	IL_01dc:                                                                        //ldloc.0
	IL_01dd:                                                                        //ldc.i4.4
	IL_01de:                                                                        //rem
	IL_01df:            if((V_0 % 4)!=0)goto IL_021d;                               //brtrue.s				IL_021d
	IL_01e1:                                                                        //ldc.i4				0x6
	IL_01e6:            V_12=6;                                                     //stloc				V_12
	IL_01ea:            /*goto IL_000b;*/goto IL_01ef;                              //br				IL_000b
	IL_01ef:            goto IL_0071;                                               //br				IL_0071
	IL_01f4:                                                                        //ldc.i4				0xd
	IL_01f9:            V_12=13;                                                    //stloc				V_12
	IL_01fd:            /*goto IL_000b;*/goto IL_0202;                              //br				IL_000b
	IL_0202:                                                                        //ldloc.s				V_11
	IL_0204:                                                                        //ldloc.s				V_10
	IL_0206:            Temp_17=V_10->Length;                                       //ldlen
	IL_0207:                                                                        //conv.i4
	IL_0208:            if(V_11<Temp_17)goto IL_0238;                               //blt.s				IL_0238
	IL_020a:                                                                        //ldc.i4				0x9
	IL_020f:            V_12=9;                                                     //stloc				V_12
	IL_0213:            /*goto IL_000b;*/goto IL_0218;                              //br				IL_000b
	IL_0218:            goto IL_02ab;                                               //br				IL_02ab
	IL_021d:                                                                        //ldloc.0
	IL_021e:                                                                        //ldc.i4.1
	IL_021f:                                                                        //add
	IL_0220:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0221:                                                                        //ldarg.0
	IL_0222:                                                                        //ldc.i4.0
	IL_0223:            A_0->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_0228:                                                                        //ldc.i4				0xa
	IL_022d:            V_12=10;                                                    //stloc				V_12
	IL_0231:            /*goto IL_000b;*/goto IL_0236;                              //br				IL_000b
	IL_0236:            goto IL_01ce;                                               //br.s				IL_01ce
	IL_0238:                                                                        //ldloc.s				V_10
	IL_023a:                                                                        //ldloc.s				V_11
	IL_023c:                                                                        //ldelem.u2
	IL_023d:            V_8=V_10[V_11];                                             //stloc.s				V_8
	IL_023f:                                                                        //ldarg.0
	IL_0240:                                                                        //ldloc.s				V_8
	IL_0242:                                                                        //conv.u1
	IL_0243:            A_0->Write(safe_cast<System::Byte>(V_8));                   //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_0248:                                                                        //ldloc.s				V_11
	IL_024a:                                                                        //ldc.i4.1
	IL_024b:                                                                        //add
	IL_024c:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_024e:                                                                        //ldc.i4				0x7
	IL_0253:            V_12=7;                                                     //stloc				V_12
	IL_0257:            /*goto IL_000b;*/goto IL_025c;                              //br				IL_000b
	IL_025c:            goto IL_01f4;                                               //br.s				IL_01f4
	IL_025e:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.s				V_7
	IL_0260:                                                                        //ldloc.s				V_7
	IL_0262:            Temp_16=Temp_19->ToCharArray();                             //callvirt				array<System::Char>^ System::String::ToCharArray()
	IL_0267:            V_10=Temp_16;                                               //stloc.s				V_10
	IL_0269:                                                                        //ldc.i4.0
	IL_026a:            V_11=0;                                                     //stloc.s				V_11
	IL_026c:                                                                        //ldc.i4				0x5
	IL_0271:            V_12=5;                                                     //stloc				V_12
	IL_0275:            /*goto IL_000b;*/goto IL_027a;                              //br				IL_000b
	IL_027a:            goto IL_027d;                                               //br.s				IL_027d
	IL_027c:                                                                        //break
	IL_027d:            goto IL_01f4;                                               //br				IL_01f4
	IL_0282:                                                                        //ldc.i4				0x4
	IL_0287:            V_12=4;                                                     //stloc				V_12
	IL_028b:            /*goto IL_000b;*/goto IL_0290;                              //br				IL_000b
	IL_0290:                                                                        //ldloc.s				V_11
	IL_0292:                                                                        //ldloc.s				V_10
	IL_0294:            Temp_3=V_10->Length;                                        //ldlen
	IL_0295:                                                                        //conv.i4
	IL_0296:            if(V_11<Temp_3)goto IL_0163;                                //blt				IL_0163
	IL_029b:                                                                        //ldc.i4				0x1
	IL_02a0:            V_12=1;                                                     //stloc				V_12
	IL_02a4:            /*goto IL_000b;*/goto IL_02a9;                              //br				IL_000b
	IL_02a9:            goto IL_02da;                                               //br.s				IL_02da
	IL_02ab:                                                                        //ldarg.0
	IL_02ac:                                                                        //ldc.i4.0
	IL_02ad:            A_0->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_02b2:                                                                        //ldstr				L"\x4B25\x5B27\x4929\x432B\x5C2D\x552F\x5731\x1A33\x5235\x5437\x5639"
	IL_02b7:                                                                        //ldloc				V_13
	IL_02bb:            Temp_13=a(L"\x4B25\x5B27\x4929\x432B\x5C2D\x552F\x5731\x1A33\x5235\x5437\x5639",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c0:            Temp_14=Temp_13->ToCharArray();                             //callvirt				array<System::Char>^ System::String::ToCharArray()
	IL_02c5:            V_10=Temp_14;                                               //stloc.s				V_10
	IL_02c7:                                                                        //ldc.i4.0
	IL_02c8:            V_11=0;                                                     //stloc.s				V_11
	IL_02ca:                                                                        //ldc.i4				0x8
	IL_02cf:            V_12=8;                                                     //stloc				V_12
	IL_02d3:            /*goto IL_000b;*/goto IL_02d8;                              //br				IL_000b
	IL_02d8:            goto IL_0282;                                               //br.s				IL_0282
	IL_02da:                                                                        //ldarg.0
	IL_02db:                                                                        //ldc.i4.0
	IL_02dc:            A_0->Write(safe_cast<System::Byte>(0));                     //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_02e1:                                                                        //ldarg.0
	IL_02e2:                                                                        //ldc.i4.0
	IL_02e3:            A_0->Write(safe_cast<System::Int16>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int16)
	IL_02e8:                                                                        //ldarg.0
	IL_02e9:                                                                        //ldc.i4.0
	IL_02ea:            A_0->Write(safe_cast<System::Int16>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int16)
	IL_02ef:                                                                        //ldarg.0
	IL_02f0:                                                                        //ldc.i4				0xff
	IL_02f5:            A_0->Write(safe_cast<System::Byte>(255));                   //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_02fa:                                                                        //ldarg.0
	IL_02fb:                                                                        //ldc.i4.s				37
	IL_02fd:            A_0->Write(safe_cast<System::Byte>(37));                    //callvirt				void System::IO::BinaryWriter::Write(System::Byte)
	IL_0302:                                                                        //ldarg.0
	IL_0303:                                                                        //ldloc.s				V_6
	IL_0305:                                                                        //conv.u8
	IL_0306:                                                                        //ldarg.2
	IL_0307:            Temp_2=A_2->M_x10();                                        //callvirt				System::UInt64 Root::T_x142::M_x10()
	IL_030c:                                                                        //add
	IL_030d:                                                                        //conv.i4
	IL_030e:            A_0->Write(safe_cast<System::Int32>((safe_cast<System::UInt64>(V_6) + Temp_2)));//callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0313:                                                                        //ldarg.0
	IL_0314:                                                                        //ldc.i4.0
	IL_0315:            A_0->Write(safe_cast<System::Int32>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_031a:                                                                        //ldarg.0
	IL_031b:                                                                        //ldc.i4.0
	IL_031c:            A_0->Write(safe_cast<System::Int32>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0321:                                                                        //ldarg.0
	IL_0322:                                                                        //ldloc.s				V_4
	IL_0324:            A_0->Write(V_4);                                            //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0329:                                                                        //ldarg.0
	IL_032a:                                                                        //ldc.i4.0
	IL_032b:            A_0->Write(safe_cast<System::Int32>(0));                    //callvirt				void System::IO::BinaryWriter::Write(System::Int32)
	IL_0330:                                                                        //ldloc.s				V_6
	IL_0332:                                                                        //conv.u8
	IL_0333:                                                                        //ldloc.3
	IL_0334:                                                                        //conv.i8
	IL_0335:                                                                        //sub
	IL_0336:                                                                        //conv.i4
	IL_0337:            return safe_cast<System::Int32>((safe_cast<System::UInt64>(V_6) - safe_cast<System::UInt64>(safe_cast<System::Int64>(V_3))));//ret

}
inline array<System::Byte>^ Root::T_x138::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::IO::FileStream^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::IO::FileNotFoundException^ Temp_5 = nullptr;
	System::Int64 Temp_6 = 0;
	array<System::Byte>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	//local variables.
	array<System::Byte>^ V_0 = nullptr;
	System::IO::FileStream^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_3=0;                                                      //stloc				V_3
	IL_0009:            goto IL_0030;                                               //br.s				IL_0030
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0108;case 1:goto IL_00e1;case 2:goto IL_011e;case 3:goto IL_00f8;case 4:goto IL_0135;case 5:goto IL_0045;case 6:goto IL_0056;};//switch				(IL_0108,IL_00e1,IL_011e,IL_00f8,IL_0135,IL_0045,IL_0056)
	IL_0030:                                                                        //ldnull
	IL_0031:            V_0=safe_cast<array<System::Byte>^>(nullptr);               //stloc.0
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_0=Root::T_x148::M_x1(A_0);                             //call				System::String^ Root::T_x148::M_x1(System::String^)
	IL_0038:            A_0=Temp_0;                                                 //starg.s				A_0
	IL_003a:                                                                        //ldc.i4				0x5
	IL_003f:            V_2=5;                                                      //stloc				V_2
	IL_0043:            /*goto IL_000b;*/goto IL_0045;                              //br.s				IL_000b
	IL_0045:                                                                        //ldarg.0
	IL_0046:            if(A_0==nullptr)goto IL_013a;                               //brfalse				IL_013a
	IL_004b:                                                                        //ldc.i4				0x6
	IL_0050:            V_2=6;                                                      //stloc				V_2
	IL_0054:            /*goto IL_000b;*/goto IL_0056;                              //br.s				IL_000b
	IL_0056:            goto IL_0059;                                               //br.s				IL_0059
	IL_0058:                                                                        //break
	IL_0059:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_005901:          try{
	IL_005b:                                                                        //ldloc.1
	IL_005c:            Temp_6=V_1->Length;                                         //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_0061:                                                                        //conv.ovf.u4
	IL_0062:            Temp_7=gcnew array<System::Byte>(safe_cast<System::UInt32>(Temp_6));//newarr				System::Byte
	IL_0067:            V_0=Temp_7;                                                 //stloc.0
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldloc.0
	IL_006a:                                                                        //ldc.i4.0
	IL_006b:                                                                        //ldloc.0
	IL_006c:            Temp_8=V_0->Length;                                         //ldlen
	IL_006d:                                                                        //conv.i4
	IL_006e:            Temp_9=V_1->Read(V_0,safe_cast<System::Int32>(0),Temp_8);   //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_0073:                                                                        //pop
	IL_0074:            goto IL_013a;                                               //leave				IL_013a
	                    ;}
	                    finally{
	IL_0079:                                                                        //ldc.i4				0x0
	IL_007e:            V_2=0;                                                      //stloc				V_2
	IL_0082:            /*goto IL_0086;*/goto IL_0084;                              //br.s				IL_0086
	IL_0084:            goto IL_009b;                                               //br.s				IL_009b
	IL_0086:                                                                        //ldloc				V_2
	IL_008a:            switch(V_2){case 0:goto IL_0084;case 1:goto IL_00a9;case 2:goto IL_00bc;};//switch				(IL_0084,IL_00a9,IL_00bc)
	IL_009b:                                                                        //ldloc.1
	IL_009c:            if(V_1==nullptr)goto IL_00be;                               //brfalse.s				IL_00be
	IL_009e:                                                                        //ldc.i4				0x1
	IL_00a3:            V_2=1;                                                      //stloc				V_2
	IL_00a7:            /*goto IL_0086;*/goto IL_00a9;                              //br.s				IL_0086
	IL_00a9:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_00ab:                                                                        //ldloc.1
	IL_00ac:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_00b1:                                                                        //ldc.i4				0x2
	IL_00b6:            V_2=2;                                                      //stloc				V_2
	IL_00ba:            /*goto IL_0086;*/goto IL_00bc;                              //br.s				IL_0086
	IL_00bc:            goto IL_00be;                                               //br.s				IL_00be
	IL_00be:                                                                        //endfinally
	                    ;}
	IL_00bf:                                                                        //ldstr				L"\x551D\x451F\x5B21\x0423\x4025\x4127\x4629\x492B\x0E2D\x542F\x5D31\x5133\x4535\x1837\x5439\x533B\x4A3D\x603F\x2741\x3C43\x2F45\x3B47\x3E49\x624B"
	IL_00c4:                                                                        //ldloc				V_3
	IL_00c8:            Temp_4=a(L"\x551D\x451F\x5B21\x0423\x4025\x4127\x4629\x492B\x0E2D\x542F\x5D31\x5133\x4535\x1837\x5439\x533B\x4A3D\x603F\x2741\x3C43\x2F45\x3B47\x3E49\x624B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cd:            Temp_5=gcnew System::IO::FileNotFoundException(Temp_4);     //newobj				void System::IO::FileNotFoundException::.ctor(System::String^)
	IL_00d2:            throw Temp_5;                                               //throw
	IL_00d3:                                                                        //ldc.i4				0x1
	IL_00d8:            V_2=1;                                                      //stloc				V_2
	IL_00dc:            /*goto IL_000b;*/goto IL_00e1;                              //br				IL_000b
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:            Temp_3=A_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_00e7:                                                                        //ldc.i4.0
	IL_00e8:            if(Temp_3<=0)goto IL_013a;                                  //ble.s				IL_013a
	IL_00ea:                                                                        //ldc.i4				0x3
	IL_00ef:            V_2=3;                                                      //stloc				V_2
	IL_00f3:            /*goto IL_000b;*/goto IL_00f8;                              //br				IL_000b
	IL_00f8:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00fa:                                                                        //ldc.i4				0x0
	IL_00ff:            V_2=0;                                                      //stloc				V_2
	IL_0103:            /*goto IL_000b;*/goto IL_0108;                              //br				IL_000b
	IL_0108:                                                                        //ldarg.0
	IL_0109:            Temp_1=System::IO::File::Exists(A_0);                       //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_010e:            if(Temp_1)goto IL_0120;                                     //brtrue.s				IL_0120
	IL_0110:                                                                        //ldc.i4				0x2
	IL_0115:            V_2=2;                                                      //stloc				V_2
	IL_0119:            /*goto IL_000b;*/goto IL_011e;                              //br				IL_000b
	IL_011e:            goto IL_00bf;                                               //br.s				IL_00bf
	IL_0120:                                                                        //ldarg.0
	IL_0121:            Temp_2=System::IO::File::OpenRead(A_0);                     //call				System::IO::FileStream^ System::IO::File::OpenRead(System::String^)
	IL_0126:            V_1=Temp_2;                                                 //stloc.1
	IL_0127:                                                                        //ldc.i4				0x4
	IL_012c:            V_2=4;                                                      //stloc				V_2
	IL_0130:            /*goto IL_000b;*/goto IL_0135;                              //br				IL_000b
	IL_0135:            /*goto IL_005b;*/goto IL_005901;                            //br				IL_005b
	IL_013a:                                                                        //ldloc.0
	IL_013b:            return V_0;                                                 //ret

}
