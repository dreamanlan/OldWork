#include "global_xref.h"

inline Root::T_x101::T_x101()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x101::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=gcnew Root::T_x101::T_x1(this);                      //newobj				void Root::T_x101::T_x1::.ctor(Root::T_x101^)
	IL_000d:            this->F_x13=Temp_0;                                         //stfld				Root::T_x101::T_x1^ Root::T_x101 F_x13
	IL_0012:            return;                                                     //ret

}
inline Reflector::IConfiguration^ Root::T_x101::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Reflector::IConfiguration^ Root::T_x101 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x101::M_x1(Reflector::IConfiguration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x101::T_x1^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Root::T_x101::T_x1^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_009a;case 1:goto IL_004a;case 2:goto IL_0069;case 3:goto IL_003d;};//switch				(IL_009a,IL_004a,IL_0069,IL_003d)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldnull
	IL_001d:            this->F_x12=safe_cast<Reflector::IConfiguration^>(nullptr); //stfld				Reflector::IConfiguration^ Root::T_x101 F_x12
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x101::T_x1^ Root::T_x101 F_x13
	IL_0028:            Temp_0->M_x2();                                             //callvirt				void Root::T_x101::T_x1::M_x2()
	IL_002d:                                                                        //ldc.i4.0
	IL_002e:            V_0=0;                                                      //stloc.0
	IL_002f:            goto IL_0032;                                               //br.s				IL_0032
	IL_0031:                                                                        //break
	IL_0032:                                                                        //ldc.i4				0x3
	IL_0037:            V_1=3;                                                      //stloc				V_1
	IL_003b:            /*goto IL_0002;*/goto IL_003d;                              //br.s				IL_0002
	IL_003d:            goto IL_003f;                                               //br.s				IL_003f
	IL_003f:                                                                        //ldc.i4				0x1
	IL_0044:            V_1=1;                                                      //stloc				V_1
	IL_0048:            /*goto IL_0002;*/goto IL_004a;                              //br.s				IL_0002
	IL_004a:                                                                        //ldarg.1
	IL_004b:                                                                        //ldloca.s				V_0
	IL_004d:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0052:            Temp_2=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_1));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0057:            Temp_3=A_0->HasProperty(Temp_2);                            //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_005c:            if(Temp_3)goto IL_006b;                                     //brtrue.s				IL_006b
	IL_005e:                                                                        //ldc.i4				0x2
	IL_0063:            V_1=2;                                                      //stloc				V_1
	IL_0067:            /*goto IL_0002;*/goto IL_0069;                              //br.s				IL_0002
	IL_0069:            goto IL_009c;                                               //br.s				IL_009c
	IL_006b:                                                                        //ldarg.0
	IL_006c:            Temp_4=this->F_x13;                                         //ldfld				Root::T_x101::T_x1^ Root::T_x101 F_x13
	IL_0071:                                                                        //ldarg.1
	IL_0072:                                                                        //ldloca.s				V_0
	IL_0074:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0079:            Temp_6=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_5));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_007e:            Temp_7=A_0->GetProperty(Temp_6);                            //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0083:            Temp_4->M_x2(Temp_7);                                       //callvirt				void Root::T_x101::T_x1::M_x2(System::String^)
	IL_0088:                                                                        //ldloc.0
	IL_0089:                                                                        //ldc.i4.1
	IL_008a:                                                                        //add
	IL_008b:            V_0=(V_0 + 1);                                              //stloc.0
	IL_008c:                                                                        //ldc.i4				0x0
	IL_0091:            V_1=0;                                                      //stloc				V_1
	IL_0095:            /*goto IL_0002;*/goto IL_009a;                              //br				IL_0002
	IL_009a:            goto IL_003f;                                               //br.s				IL_003f
	IL_009c:                                                                        //ldarg.0
	IL_009d:                                                                        //ldarg.1
	IL_009e:            this->F_x12=A_0;                                            //stfld				Reflector::IConfiguration^ Root::T_x101 F_x12
	IL_00a3:            return;                                                     //ret

}
inline void Root::T_x101::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0058;case 1:goto IL_003b;case 2:goto IL_0028;};//switch				(IL_0058,IL_003b,IL_0028)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            this->M_x12();                                              //call				void Root::T_x101::M_x12()
	IL_001d:                                                                        //ldc.i4				0x2
	IL_0022:            V_0=2;                                                      //stloc				V_0
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_1=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x2
	IL_002e:            if(Temp_1==nullptr)goto IL_005a;                            //brfalse.s				IL_005a
	IL_0030:                                                                        //ldc.i4				0x1
	IL_0035:            V_0=1;                                                      //stloc				V_0
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_003d;                                               //br.s				IL_003d
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x2
	IL_0043:                                                                        //ldarg.0
	IL_0044:                                                                        //ldarg.1
	IL_0045:            Temp_0(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_004a:            goto IL_004d;                                               //br.s				IL_004d
	IL_004c:                                                                        //break
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_0=0;                                                      //stloc				V_0
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_005a;                                               //br.s				IL_005a
	IL_005a:            return;                                                     //ret

}
inline void Root::T_x101::M_x1(System::EventHandler^ A_0)
//Root::T_x7^::M_x13 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x101 F_x2
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x101::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x101::T_x1^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::IConfiguration^ Temp_2 = nullptr;
	System::Globalization::CultureInfo^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Root::T_x101::T_x1^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::IConfiguration^ Temp_7 = nullptr;
	Reflector::IConfiguration^ Temp_8 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_006d;case 1:goto IL_0054;case 2:goto IL_0044;case 3:goto IL_000b;case 4:goto IL_00a4;case 5:goto IL_00c1;};//switch				(IL_006d,IL_0054,IL_0044,IL_000b,IL_00a4,IL_00c1)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_8=this->F_x12;                                         //ldfld				Reflector::IConfiguration^ Root::T_x101 F_x12
	IL_0034:            if(Temp_8==nullptr)goto IL_00c3;                            //brfalse				IL_00c3
	IL_0039:                                                                        //ldc.i4				0x2
	IL_003e:            V_1=2;                                                      //stloc				V_1
	IL_0042:            /*goto IL_000d;*/goto IL_0044;                              //br.s				IL_000d
	IL_0044:            goto IL_0047;                                               //br.s				IL_0047
	IL_0046:                                                                        //break
	IL_0047:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_1=1;                                                      //stloc				V_1
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x101::T_x1^ Root::T_x101 F_x13
	IL_005b:            Temp_1=Temp_0->M_x13();                                     //callvirt				System::Int32 Root::T_x101::T_x1::M_x13()
	IL_0060:            if(V_0<Temp_1)goto IL_006f;                                 //blt.s				IL_006f
	IL_0062:                                                                        //ldc.i4				0x0
	IL_0067:            V_1=0;                                                      //stloc				V_1
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:            goto IL_00c3;                                               //br.s				IL_00c3
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_2=this->F_x12;                                         //ldfld				Reflector::IConfiguration^ Root::T_x101 F_x12
	IL_0075:                                                                        //ldloca.s				V_0
	IL_0077:            Temp_3=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_007c:            Temp_4=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_3));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0081:                                                                        //ldarg.0
	IL_0082:            Temp_5=this->F_x13;                                         //ldfld				Root::T_x101::T_x1^ Root::T_x101 F_x13
	IL_0087:                                                                        //ldloc.0
	IL_0088:            Temp_6=Temp_5->M_x1(V_0);                                   //callvirt				System::String^ Root::T_x101::T_x1::M_x1(System::Int32)
	IL_008d:            Temp_2->SetProperty(Temp_4,Temp_6);                         //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_0092:                                                                        //ldloc.0
	IL_0093:                                                                        //ldc.i4.1
	IL_0094:                                                                        //add
	IL_0095:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0096:                                                                        //ldc.i4				0x4
	IL_009b:            V_1=4;                                                      //stloc				V_1
	IL_009f:            /*goto IL_000d;*/goto IL_00a4;                              //br				IL_000d
	IL_00a4:            goto IL_0049;                                               //br.s				IL_0049
	IL_00a6:                                                                        //ldarg.0
	IL_00a7:            Temp_7=this->F_x12;                                         //ldfld				Reflector::IConfiguration^ Root::T_x101 F_x12
	IL_00ac:            Temp_7->Clear();                                            //callvirt				void Reflector::IConfiguration::Clear()
	IL_00b1:                                                                        //ldc.i4.0
	IL_00b2:            V_0=0;                                                      //stloc.0
	IL_00b3:                                                                        //ldc.i4				0x5
	IL_00b8:            V_1=5;                                                      //stloc				V_1
	IL_00bc:            /*goto IL_000d;*/goto IL_00c1;                              //br				IL_000d
	IL_00c1:            goto IL_0049;                                               //br.s				IL_0049
	IL_00c3:            return;                                                     //ret

}
inline void Root::T_x101::M_x12(System::EventHandler^ A_0)
//Root::T_x7^::M_x2 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x101 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x101::M_x13(System::EventHandler^ A_0)
//Root::T_x7^::M_x1 by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x101 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x102^ Root::T_x101::M_x2()
//Root::T_x7^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x101::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x101::T_x1^ Root::T_x101 F_x13
	IL_0006:            return safe_cast<Root::T_x102^>(Temp_0);                    //ret

}
inline void Root::T_x101::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0060;case 1:goto IL_0028;case 2:goto IL_003b;};//switch				(IL_0060,IL_0028,IL_003b)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            this->M_x12();                                              //call				void Root::T_x101::M_x12()
	IL_001d:                                                                        //ldc.i4				0x1
	IL_0022:            V_0=1;                                                      //stloc				V_0
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x1
	IL_002e:            if(Temp_0==nullptr)goto IL_0062;                            //brfalse.s				IL_0062
	IL_0030:                                                                        //ldc.i4				0x2
	IL_0035:            V_0=2;                                                      //stloc				V_0
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_003d;                                               //br.s				IL_003d
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_1=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x1
	IL_0043:                                                                        //ldarg.0
	IL_0044:                                                                        //ldarg.1
	IL_0045:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_004a:                                                                        //ldc.i4.4
	IL_004b:                                                                        //dup
	IL_004c:                                                                        //dup
	IL_004d:                                                                        //ldc.i4.2
	IL_004e:                                                                        //sub
	IL_004f:                                                                        //blt				IL_004b
	IL_0054:                                                                        //pop
	IL_0055:                                                                        //ldc.i4				0x0
	IL_005a:            V_0=0;                                                      //stloc				V_0
	IL_005e:            /*goto IL_0002;*/goto IL_0060;                              //br.s				IL_0002
	IL_0060:            goto IL_0062;                                               //br.s				IL_0062
	IL_0062:            return;                                                     //ret

}
inline void Root::T_x101::M_x2(System::EventHandler^ A_0)
//Root::T_x7^::M_x12 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x101 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x101 F_x2
	IL_0017:            return;                                                     //ret

}
inline Root::T_x101::T_x1::T_x1(Root::T_x101^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0007:            this->F_x1=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_000c:                                                                        //ldarg.0
	IL_000d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            this->F_x2=A_0;                                             //stfld				Root::T_x101^ Root::T_x101::T_x1 F_x2
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x101::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x101::T_x1::M_x1()
//System::Collections::ICollection^::get_IsSynchronized by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Collections::ArrayList::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x101::T_x1::M_x1(System::Array^ A_0,System::Int32 A_1)
//System::Collections::ICollection^::CopyTo by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(A_0,A_1);                                    //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::String^ Root::T_x101::T_x1::M_x1(System::Int32 A_0)
//Root::T_x102^::M_x2 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				System::String
	IL_0011:            return safe_cast<System::String^>(Temp_1);                  //ret

}
inline System::Boolean Root::T_x101::T_x1::M_x1(System::String^ A_0)
//Root::T_x102^::M_x12 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x101::T_x1::M_x12()
//System::Collections::ICollection^::get_SyncRoot by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Collections::ArrayList::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x101::T_x1::M_x12(System::String^ A_0)
//Root::T_x102^::M_x2 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Root::T_x101^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Remove(safe_cast<System::Object^>(A_0));            //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x101^ Root::T_x101::T_x1 F_x2
	IL_0012:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0017:            Temp_1->M_x1(Temp_2);                                       //callvirt				void Root::T_x101::M_x1(System::EventArgs^)
	IL_001c:            return;                                                     //ret

}
inline System::Int32 Root::T_x101::T_x1::M_x13()
//System::Collections::ICollection^::get_Count by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x101::T_x1::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Root::T_x101^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:            Temp_0->Clear();                                            //callvirt				void System::Collections::ArrayList::Clear()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x101^ Root::T_x101::T_x1 F_x2
	IL_0011:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0016:            Temp_1->M_x1(Temp_2);                                       //callvirt				void Root::T_x101::M_x1(System::EventArgs^)
	IL_001b:            return;                                                     //ret

}
inline void Root::T_x101::T_x1::M_x2(System::Int32 A_0)
//Root::T_x102^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Root::T_x101^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->RemoveAt(A_0);                                      //callvirt				void System::Collections::ArrayList::RemoveAt(System::Int32)
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x101^ Root::T_x101::T_x1 F_x2
	IL_0012:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0017:            Temp_1->M_x1(Temp_2);                                       //callvirt				void Root::T_x101::M_x1(System::EventArgs^)
	IL_001c:            return;                                                     //ret

}
inline void Root::T_x101::T_x1::M_x2(System::String^ A_0)
//Root::T_x102^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Root::T_x101^ Temp_2 = nullptr;
	System::EventArgs^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x101::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x101^ Root::T_x101::T_x1 F_x2
	IL_0013:            Temp_3=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0018:            Temp_2->M_x2(Temp_3);                                       //callvirt				void Root::T_x101::M_x2(System::EventArgs^)
	IL_001d:            return;                                                     //ret

}
