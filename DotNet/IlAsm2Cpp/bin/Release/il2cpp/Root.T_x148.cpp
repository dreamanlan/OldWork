#include "global_xref.h"

inline Root::T_x148::T_x148()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x148::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Reflection::Assembly^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	array<System::Type^>^ Temp_5 = nullptr;
	System::Type^ Temp_6 = nullptr;
	System::Reflection::MethodInfo^ Temp_7 = nullptr;
	array<System::Object^>^ Temp_8 = nullptr;
	System::Object^ Temp_9 = nullptr;
	//local variables.
	System::Type^ V_0 = nullptr;
	System::Reflection::MethodInfo^ V_1 = nullptr;
	array<System::Type^>^ V_2 = nullptr;
	array<System::Object^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_5=18;                                                     //stloc				V_5
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_00b6;case 1:goto IL_0063;case 2:goto IL_0055;case 3:goto IL_00c7;};//switch				(IL_00b6,IL_0063,IL_0055,IL_00c7)
	IL_0024:                                                                        //ldtoken				System::Object
	IL_0029:            Temp_0=System::Object::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_002e:            Temp_1=Temp_0->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_0033:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739\x123B\x7B3D\x2E3F\x3441\x2D43\x3445\x2747\x2449\x214B\x2B4D\x3E4F\x2651"
	IL_0038:                                                                        //ldloc				V_5
	IL_003c:            Temp_2=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739\x123B\x7B3D\x2E3F\x3441\x2D43\x3445\x2747\x2449\x214B\x2B4D\x3E4F\x2651",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            Temp_3=Temp_1->GetType(Temp_2);                             //callvirt				System::Type^ System::Reflection::Assembly::GetType(System::String^)
	IL_0046:            V_0=Temp_3;                                                 //stloc.0
	IL_0047:            goto IL_004a;                                               //br.s				IL_004a
	IL_0049:                                                                        //break
	IL_004a:                                                                        //ldc.i4				0x2
	IL_004f:            V_4=2;                                                      //stloc				V_4
	IL_0053:            /*goto IL_000b;*/goto IL_0055;                              //br.s				IL_000b
	IL_0055:                                                                        //ldloc.0
	IL_0056:            if(V_0==nullptr)goto IL_00c9;                               //brfalse.s				IL_00c9
	IL_0058:                                                                        //ldc.i4				0x1
	IL_005d:            V_4=1;                                                      //stloc				V_4
	IL_0061:            /*goto IL_000b;*/goto IL_0063;                              //br.s				IL_000b
	IL_0063:            goto IL_007e;                                               //br.s				IL_007e
	IL_0065:                                                                        //ldloc.1
	IL_0066:                                                                        //ldnull
	IL_0067:                                                                        //ldc.i4.1
	IL_0068:            Temp_8=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_006d:            V_3=Temp_8;                                                 //stloc.3
	IL_006e:                                                                        //ldloc.3
	IL_006f:                                                                        //ldc.i4.0
	IL_0070:                                                                        //ldarg.0
	IL_0071:            V_3[0]=safe_cast<System::Object^>(A_0);                     //stelem.ref
	IL_0072:                                                                        //ldloc.3
	IL_0073:            Temp_9=V_1->Invoke(safe_cast<System::Object^>(nullptr),V_3);//callvirt				System::Object^ System::Reflection::MethodInfo::Invoke(System::Object^,array<System::Object^>^)
	IL_0078:                                                                        //castclass				System::String
	IL_007d:            return safe_cast<System::String^>(Temp_9);                  //ret
	IL_007e:                                                                        //ldloc.0
	IL_007f:                                                                        //ldstr				L"\x752F\x4A31\x4433\x5735\x5637\x5E39\x793B\x503D\x363F\x2B41\x3643\x2945\x2647\x2749\x294B\x204D\x244F\x0451\x3553\x2455\x3157\x3B59\x3E5B\x325D\x055F\x1161"
	IL_0084:                                                                        //ldloc				V_5
	IL_0088:            Temp_4=a(L"\x752F\x4A31\x4433\x5735\x5637\x5E39\x793B\x503D\x363F\x2B41\x3643\x2945\x2647\x2749\x294B\x204D\x244F\x0451\x3553\x2455\x3157\x3B59\x3E5B\x325D\x055F\x1161",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008d:                                                                        //ldc.i4.1
	IL_008e:            Temp_5=gcnew array<System::Type^>(1);                       //newarr				System::Type
	IL_0093:            V_2=Temp_5;                                                 //stloc.2
	IL_0094:                                                                        //ldloc.2
	IL_0095:                                                                        //ldc.i4.0
	IL_0096:                                                                        //ldtoken				System::String
	IL_009b:            Temp_6=System::String::typeid;                              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00a0:            V_2[0]=Temp_6;                                              //stelem.ref
	IL_00a1:                                                                        //ldloc.2
	IL_00a2:            Temp_7=V_0->GetMethod(Temp_4,V_2);                          //callvirt				System::Reflection::MethodInfo^ System::Type::GetMethod(System::String^,array<System::Type^>^)
	IL_00a7:            V_1=Temp_7;                                                 //stloc.1
	IL_00a8:                                                                        //ldc.i4				0x0
	IL_00ad:            V_4=0;                                                      //stloc				V_4
	IL_00b1:            /*goto IL_000b;*/goto IL_00b6;                              //br				IL_000b
	IL_00b6:                                                                        //ldloc.1
	IL_00b7:            if(V_1==nullptr)goto IL_00c9;                               //brfalse.s				IL_00c9
	IL_00b9:                                                                        //ldc.i4				0x3
	IL_00be:            V_4=3;                                                      //stloc				V_4
	IL_00c2:            /*goto IL_000b;*/goto IL_00c7;                              //br				IL_000b
	IL_00c7:            goto IL_0065;                                               //br.s				IL_0065
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:            return A_0;                                                 //ret

}
