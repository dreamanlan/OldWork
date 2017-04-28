#include "global_xref.h"

inline Root::T_x144::T_x144(System::IO::BinaryReader^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=A_0->ReadUInt32();                                   //callvirt				System::UInt32 System::IO::BinaryReader::ReadUInt32()
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				System::UInt32 Root::T_x144 F_x1
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->ReadInt32();                                    //callvirt				System::Int32 System::IO::BinaryReader::ReadInt32()
	IL_0019:            this->F_x2=Temp_1;                                          //stfld				System::Int32 Root::T_x144 F_x2
	IL_001e:            return;                                                     //ret

}
inline Root::T_x144::T_x144(System::UInt32 A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::UInt32 Root::T_x144 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::Int32 Root::T_x144 F_x2
	IL_0014:            return;                                                     //ret

}
inline System::UInt32 Root::T_x144::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::UInt32 Root::T_x144 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x144::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Int32 Root::T_x144 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x144::M_x1(System::IO::BinaryWriter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::UInt32 Root::T_x144 F_x1
	IL_0007:            A_0->Write(Temp_0);                                         //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_1=this->F_x2;                                          //ldfld				System::Int32 Root::T_x144 F_x2
	IL_0013:            A_0->Write(safe_cast<System::UInt32>(Temp_1));              //callvirt				void System::IO::BinaryWriter::Write(System::UInt32)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x144::M_x1(System::UInt32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::UInt32 Root::T_x144 F_x1
	IL_0007:            return;                                                     //ret

}
inline System::Int32 Root::T_x144::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x144 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x144::M_x2()
//System::Object^::ToString by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::UInt32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::UInt32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_3=19;                                                     //stloc				V_3
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldc.i4.5
	IL_000d:            Temp_0=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_0012:            V_0=Temp_0;                                                 //stloc.0
	IL_0013:                                                                        //ldloc.0
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:                                                                        //ldstr				L"\x1930"
	IL_001a:                                                                        //ldloc				V_3
	IL_001e:            Temp_1=a(L"\x1930",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0023:            V_0[0]=Temp_1;                                              //stelem.ref
	IL_0024:                                                                        //ldloc.0
	IL_0025:                                                                        //ldc.i4.1
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_2=this->M_x1();                                        //call				System::UInt32 Root::T_x144::M_x1()
	IL_002c:            V_1=Temp_2;                                                 //stloc.1
	IL_002d:                                                                        //ldloca.s				V_1
	IL_002f:                                                                        //ldstr				L"\x4930\x0B32"
	IL_0034:                                                                        //ldloc				V_3
	IL_0038:            Temp_3=a(L"\x4930\x0B32",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003d:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0042:            Temp_5=V_1.ToString(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::String^ System::UInt32::ToString(System::String^,System::IFormatProvider^)
	IL_0047:            V_0[1]=Temp_5;                                              //stelem.ref
	IL_0048:                                                                        //ldloc.0
	IL_0049:                                                                        //ldc.i4.2
	IL_004a:                                                                        //ldstr				L"\x1D30\x1332"
	IL_004f:                                                                        //ldloc				V_3
	IL_0053:            Temp_6=a(L"\x1D30\x1332",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:            V_0[2]=Temp_6;                                              //stelem.ref
	IL_0059:                                                                        //ldloc.0
	IL_005a:                                                                        //ldc.i4.3
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_7=this->M_x12();                                       //call				System::Int32 Root::T_x144::M_x12()
	IL_0061:            V_2=Temp_7;                                                 //stloc.2
	IL_0062:                                                                        //ldloca.s				V_2
	IL_0064:                                                                        //ldstr				L"\x4930\x0B32"
	IL_0069:                                                                        //ldloc				V_3
	IL_006d:            Temp_8=a(L"\x4930\x0B32",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0072:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0077:            Temp_10=V_2.ToString(Temp_8,safe_cast<System::IFormatProvider^>(Temp_9));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_007c:            V_0[3]=Temp_10;                                             //stelem.ref
	IL_007d:                                                                        //ldloc.0
	IL_007e:                                                                        //ldc.i4.4
	IL_007f:                                                                        //ldstr				L"\x1830"
	IL_0084:                                                                        //ldloc				V_3
	IL_0088:            Temp_11=a(L"\x1830",V_3);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008d:            V_0[4]=Temp_11;                                             //stelem.ref
	IL_008e:                                                                        //ldloc.0
	IL_008f:            Temp_12=System::String::Concat(V_0);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0094:            return Temp_12;                                             //ret

}
