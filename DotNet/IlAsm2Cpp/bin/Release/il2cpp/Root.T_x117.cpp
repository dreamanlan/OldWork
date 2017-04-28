#include "global_xref.h"

inline Root::T_x117::T_x117()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Drawing::Image^ Root::T_x117::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Bitmap^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Reflection::Assembly^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::IO::Stream^ Temp_4 = nullptr;
	System::Drawing::Bitmap^ Temp_5 = nullptr;
	System::Drawing::Bitmap^ Temp_6 = nullptr;
	//local variables.
	System::IO::Stream^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_2=14;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_007b;case 2:goto IL_0040;};//switch				(IL_0014,IL_007b,IL_0040)
	IL_002b:            goto IL_002e;                                               //br.s				IL_002e
	IL_002d:                                                                        //break
	IL_002e:            Temp_6=Root::T_x117::F_x1;                                  //ldsfld				System::Drawing::Bitmap^ Root::T_x117 F_x1
	IL_0033:            if(Temp_6!=nullptr)goto IL_007d;                            //brtrue.s				IL_007d
	IL_0035:                                                                        //ldc.i4				0x2
	IL_003a:            V_1=2;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0016;*/goto IL_0040;                              //br.s				IL_0016
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldtoken				Root::T_x117
	IL_0047:            Temp_1=Root::T_x117::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_004c:            Temp_2=Temp_1->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_0051:                                                                        //ldstr				L"\x7E2B\x4B2D\x562F\x5E31\x5133\x5535\x4C37\x5539\x4E3B\x103D\x023F\x3041\x2B43\x3145\x3B47\x2F49\x3E4B\x604D\x204F\x3C51\x3353"
	IL_0056:                                                                        //ldloc				V_2
	IL_005a:            Temp_3=a(L"\x7E2B\x4B2D\x562F\x5E31\x5133\x5535\x4C37\x5539\x4E3B\x103D\x023F\x3041\x2B43\x3145\x3B47\x2F49\x3E4B\x604D\x204F\x3C51\x3353",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005f:            Temp_4=Temp_2->GetManifestResourceStream(Temp_3);           //callvirt				System::IO::Stream^ System::Reflection::Assembly::GetManifestResourceStream(System::String^)
	IL_0064:            V_0=Temp_4;                                                 //stloc.0
	IL_0065:                                                                        //ldloc.0
	IL_0066:            Temp_5=gcnew System::Drawing::Bitmap(V_0);                  //newobj				void System::Drawing::Bitmap::.ctor(System::IO::Stream^)
	IL_006b:            Root::T_x117::F_x1=Temp_5;                                  //stsfld				System::Drawing::Bitmap^ Root::T_x117 F_x1
	IL_0070:                                                                        //ldc.i4				0x1
	IL_0075:            V_1=1;                                                      //stloc				V_1
	IL_0079:            /*goto IL_0016;*/goto IL_007b;                              //br.s				IL_0016
	IL_007b:            goto IL_007d;                                               //br.s				IL_007d
	IL_007d:            Temp_0=Root::T_x117::F_x1;                                  //ldsfld				System::Drawing::Bitmap^ Root::T_x117 F_x1
	IL_0082:            return safe_cast<System::Drawing::Image^>(Temp_0);          //ret

}
