#include "global_xref.h"

inline Root::T_x33::T_x33()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x33::M_x1(Reflector::CodeModel::IMemberReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Root::T_x10::M_x1(safe_cast<System::Object^>(A_0));         //call				void Root::T_x10::M_x1(System::Object^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x33::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_2=10;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0088;case 1:goto IL_009b;case 2:goto IL_007b;case 3:goto IL_0014;case 4:goto IL_005f;};//switch				(IL_0088,IL_009b,IL_007b,IL_0014,IL_005f)
	IL_0033:            goto IL_0036;                                               //br.s				IL_0036
	IL_0035:                                                                        //break
	IL_0036:                                                                        //ldstr				L"\x6927\x4929\x582B\x472D\x462F\x5731\x7D33\x4235\x5D37\x5739\x123B\x6D3D\x283F\x2D41\x3343\x0245\x2147\x3949\x2D4B\x3D4D\x234F\x3751\x3953\x3455\x3457\x3F59\x2E5B"
	IL_003b:                                                                        //ldloc				V_2
	IL_003f:            Temp_2=a(L"\x6927\x4929\x582B\x472D\x462F\x5731\x7D33\x4235\x5D37\x5739\x123B\x6D3D\x283F\x2D41\x3343\x0245\x2147\x3949\x2D4B\x3D4D\x234F\x3751\x3953\x3455\x3457\x3F59\x2E5B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0044:            goto IL_007d;                                               //leave.s				IL_007d
	IL_0046:                                                                        //ldarg.0
	IL_0047:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_004c:            return;                                                     //ret
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0053:            V_0=Temp_0;                                                 //stloc.0
	IL_0054:                                                                        //ldc.i4				0x4
	IL_0059:            V_1=4;                                                      //stloc				V_1
	IL_005d:            /*goto IL_0016;*/goto IL_005f;                              //br.s				IL_0016
	IL_005f:                                                                        //ldloc.0
	IL_0060:                                                                        //ldstr				L"\x6927\x4929\x582B\x472D\x462F\x5731\x7D33\x4235\x5D37\x5739\x123B\x6D3D\x283F\x2D41\x3343\x0245\x2147\x3949\x2D4B\x3D4D\x234F\x3751\x3953\x3455\x3457\x3F59\x2E5B"
	IL_0065:                                                                        //ldloc				V_2
	IL_0069:            Temp_1=a(L"\x6927\x4929\x582B\x472D\x462F\x5731\x7D33\x4235\x5D37\x5739\x123B\x6D3D\x283F\x2D41\x3343\x0245\x2147\x3949\x2D4B\x3D4D\x234F\x3751\x3953\x3455\x3457\x3F59\x2E5B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006e:            if(V_0!=Temp_1)goto IL_009d;                                //bne.un.s				IL_009d
	IL_0070:                                                                        //ldc.i4				0x2
	IL_0075:            V_1=2;                                                      //stloc				V_1
	IL_0079:            /*goto IL_0016;*/goto IL_007b;                              //br.s				IL_0016
	IL_007b:            goto IL_0046;                                               //br.s				IL_0046
	IL_007d:                                                                        //ldc.i4				0x0
	IL_0082:            V_1=0;                                                      //stloc				V_1
	IL_0086:            /*goto IL_0016;*/goto IL_0088;                              //br.s				IL_0016
	IL_0088:                                                                        //ldarg.1
	IL_0089:                                                                        //dup
	IL_008a:            V_0=A_0;                                                    //stloc.0
	IL_008b:            if(V_0==nullptr)goto IL_009d;                               //brfalse.s				IL_009d
	IL_008d:                                                                        //ldc.i4				0x1
	IL_0092:            V_1=1;                                                      //stloc				V_1
	IL_0096:            /*goto IL_0016;*/goto IL_009b;                              //br				IL_0016
	IL_009b:            goto IL_004d;                                               //br.s				IL_004d
	IL_009d:                                                                        //ldarg.0
	IL_009e:                                                                        //ldarg.1
	IL_009f:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_00a4:            return;                                                     //ret

}
inline Reflector::CodeModel::IMemberReference^ Root::T_x33::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IMemberReference
	IL_000b:            return safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_0);//ret

}
inline System::Boolean Root::T_x33::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_2=2;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_1=3;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_009e;case 1:goto IL_0080;case 2:goto IL_0057;case 3:goto IL_0014;case 4:goto IL_0073;};//switch				(IL_009e,IL_0080,IL_0057,IL_0014,IL_0073)
	IL_0033:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_0038:                                                                        //ldloc				V_2
	IL_003c:            Temp_3=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:            goto IL_0075;                                               //leave.s				IL_0075
	IL_0043:                                                                        //ldc.i4.1
	IL_0044:            return true;                                                //ret
	IL_0045:                                                                        //ldloc.0
	IL_0046:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_004b:            V_0=Temp_0;                                                 //stloc.0
	IL_004c:                                                                        //ldc.i4				0x2
	IL_0051:            V_1=2;                                                      //stloc				V_1
	IL_0055:            /*goto IL_0016;*/goto IL_0057;                              //br.s				IL_0016
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_005d:                                                                        //ldloc				V_2
	IL_0061:            Temp_2=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0066:            if(V_0!=Temp_2)goto IL_00a0;                                //bne.un.s				IL_00a0
	IL_0068:                                                                        //ldc.i4				0x4
	IL_006d:            V_1=4;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0016;*/goto IL_0073;                              //br.s				IL_0016
	IL_0073:            goto IL_0043;                                               //br.s				IL_0043
	IL_0075:                                                                        //ldc.i4				0x1
	IL_007a:            V_1=1;                                                      //stloc				V_1
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:                                                                        //ldarg.1
	IL_0081:                                                                        //dup
	IL_0082:            V_0=A_0;                                                    //stloc.0
	IL_0083:            if(V_0==nullptr)goto IL_00a0;                               //brfalse.s				IL_00a0
	IL_0085:                                                                        //ldc.i4.4
	IL_0086:                                                                        //dup
	IL_0087:                                                                        //dup
	IL_0088:                                                                        //ldc.i4.2
	IL_0089:                                                                        //sub
	IL_008a:                                                                        //blt				IL_0086
	IL_008f:                                                                        //pop
	IL_0090:                                                                        //ldc.i4				0x0
	IL_0095:            V_1=0;                                                      //stloc				V_1
	IL_0099:            /*goto IL_0016;*/goto IL_009e;                              //br				IL_0016
	IL_009e:            goto IL_0045;                                               //br.s				IL_0045
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:                                                                        //ldarg.1
	IL_00a2:            Temp_1=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_00a7:            return Temp_1;                                              //ret

}
