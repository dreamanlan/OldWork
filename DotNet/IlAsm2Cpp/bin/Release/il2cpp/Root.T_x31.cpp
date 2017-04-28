#include "global_xref.h"

inline Root::T_x31::T_x31()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x10();*/                                          //call				void Root::T_x10::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x31::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ Temp_2 = nullptr;
	Root::T_x111^ Temp_3 = nullptr;
	Root::T_x102^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Root::T_x102^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Root::T_x102^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	//local variables.
	Root::T_x7^ V_0 = nullptr;
	Root::T_x111^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldtoken				Root::T_x7
	IL_0006:            Temp_0=Root::T_x7::typeid;                                  //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_000b:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_0010:                                                                        //castclass				Root::T_x7
	IL_0015:            V_0=safe_cast<Root::T_x7^>(Temp_1);                         //stloc.0
	IL_0016:                                                                        //ldarg.0
	IL_0017:            Temp_2=this->M_x5();                                        //call				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_001c:            Temp_3=gcnew Root::T_x111(safe_cast<System::Object^>(Temp_2));//newobj				void Root::T_x111::.ctor(System::Object^)
	IL_0021:            V_1=Temp_3;                                                 //stloc.1
	IL_0022:                                                                        //ldloc.0
	IL_0023:            Temp_4=V_0->M_x1();                                         //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_0028:                                                                        //ldloc.1
	IL_0029:            Temp_5=V_1->M_x12();                                        //callvirt				System::String^ Root::T_x111::M_x12()
	IL_002e:            Temp_6=Temp_4->M_x12(Temp_5);                               //callvirt				System::Boolean Root::T_x102::M_x12(System::String^)
	IL_0033:            if(!Temp_6)goto IL_004c;                                    //brfalse.s				IL_004c
	IL_0035:            goto IL_0038;                                               //br.s				IL_0038
	IL_0037:                                                                        //break
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldloc.0
	IL_003b:            Temp_9=V_0->M_x1();                                         //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_0040:                                                                        //ldloc.1
	IL_0041:            Temp_10=V_1->M_x12();                                       //callvirt				System::String^ Root::T_x111::M_x12()
	IL_0046:            Temp_9->M_x2(Temp_10);                                      //callvirt				void Root::T_x102::M_x2(System::String^)
	IL_004b:            return;                                                     //ret
	IL_004c:                                                                        //ldloc.0
	IL_004d:            Temp_7=V_0->M_x1();                                         //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_0052:                                                                        //ldloc.1
	IL_0053:            Temp_8=V_1->M_x12();                                        //callvirt				System::String^ Root::T_x111::M_x12()
	IL_0058:            Temp_7->M_x1(Temp_8);                                       //callvirt				void Root::T_x102::M_x1(System::String^)
	IL_005d:            return;                                                     //ret

}
inline void Root::T_x31::M_x2(Reflector::CodeModel::IMemberDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x1(safe_cast<System::Object^>(A_0));                //call				void Root::T_x10::M_x1(System::Object^)
	IL_0007:            return;                                                     //ret

}
inline Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x6();                                        //call				System::Object^ Root::T_x10::M_x6()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::IMemberDeclaration
	IL_000b:            return safe_cast<Reflector::CodeModel::IMemberDeclaration^>(Temp_0);//ret

}
inline void Root::T_x31::M_x5(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ Temp_1 = nullptr;
	Root::T_x114^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ Temp_5 = nullptr;
	Root::T_x123^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_2=4;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0xb
	IL_000e:            V_1=11;                                                     //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_005f;                                               //br.s				IL_005f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_01ab;case 1:goto IL_0179;case 2:goto IL_00ff;case 3:goto IL_00cd;case 4:goto IL_01e8;case 5:goto IL_0240;case 6:goto IL_0198;case 7:goto IL_0150;case 8:goto IL_022d;case 9:goto IL_00e0;case 10:goto IL_0262;case 11:goto IL_0014;case 12:goto IL_020a;case 13:goto IL_012e;case 14:goto IL_021a;case 15:goto IL_01ca;};//switch				(IL_01ab,IL_0179,IL_00ff,IL_00cd,IL_01e8,IL_0240,IL_0198,IL_0150,IL_022d,IL_00e0,IL_0262,IL_0014,IL_020a,IL_012e,IL_021a,IL_01ca)
	IL_005f:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6C37\x5539\x5B3B\x593D\x2C3F\x2741\x0643\x2945\x2747\x2149\x214B\x2F4D\x224F\x3951"
	IL_0064:                                                                        //ldloc				V_2
	IL_0068:            Temp_11=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6C37\x5539\x5B3B\x593D\x2C3F\x2741\x0643\x2945\x2747\x2149\x214B\x2F4D\x224F\x3951",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2D41\x2743\x3345\x2547\x2F49\x224B\x3A4D\x314F\x2651\x3D53\x3955\x3657"
	IL_0072:                                                                        //ldloc				V_2
	IL_0076:            Temp_12=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2D41\x2743\x3345\x2547\x2F49\x224B\x3A4D\x314F\x2651\x3D53\x3955\x3657",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007b:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0343\x2945\x2747\x2D49\x204B\x2B4D"
	IL_0080:                                                                        //ldloc				V_2
	IL_0084:            Temp_13=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0343\x2945\x2747\x2D49\x204B\x2B4D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0943\x3545\x2C47\x2449"
	IL_008e:                                                                        //ldloc				V_2
	IL_0092:            Temp_14=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0943\x3545\x2C47\x2449",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0097:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2B41\x3743\x2745\x3B47\x3949\x294B\x234D\x324F\x3E51\x3153\x2455"
	IL_009c:                                                                        //ldloc				V_2
	IL_00a0:            Temp_15=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2B41\x3743\x2745\x3B47\x3949\x294B\x234D\x324F\x3E51\x3153\x2455",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a5:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x013F\x2C41\x2543\x2A45\x3147\x3049\x294B\x3C4D"
	IL_00aa:                                                                        //ldloc				V_2
	IL_00ae:            Temp_16=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x013F\x2C41\x2543\x2A45\x3147\x3049\x294B\x3C4D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:            goto IL_020c;                                               //leave				IL_020c
	IL_00b8:                                                                        //ldarg.0
	IL_00b9:            this->M_x8();                                               //call				void Root::T_x31::M_x8()
	IL_00be:            return;                                                     //ret
	IL_00bf:                                                                        //ldc.i4				0x3
	IL_00c4:            V_1=3;                                                      //stloc				V_1
	IL_00c8:            /*goto IL_0016;*/goto IL_00cd;                              //br				IL_0016
	IL_00cd:            goto IL_0267;                                               //br				IL_0267
	IL_00d2:                                                                        //ldc.i4				0x9
	IL_00d7:            V_1=9;                                                      //stloc				V_1
	IL_00db:            /*goto IL_0016;*/goto IL_00e0;                              //br				IL_0016
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2D41\x2743\x3345\x2547\x2F49\x224B\x3A4D\x314F\x2651\x3D53\x3955\x3657"
	IL_00e6:                                                                        //ldloc				V_2
	IL_00ea:            Temp_9=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2D41\x2743\x3345\x2547\x2F49\x224B\x3A4D\x314F\x2651\x3D53\x3955\x3657",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ef:            if(V_0==Temp_9)goto IL_00b8;                                //beq.s				IL_00b8
	IL_00f1:                                                                        //ldc.i4				0x2
	IL_00f6:            V_1=2;                                                      //stloc				V_1
	IL_00fa:            /*goto IL_0016;*/goto IL_00ff;                              //br				IL_0016
	IL_00ff:            goto IL_019d;                                               //br				IL_019d
	IL_0104:            goto IL_0107;                                               //br.s				IL_0107
	IL_0106:                                                                        //break
	IL_0107:                                                                        //ldarg.0
	IL_0108:            Temp_5=this->M_x5();                                        //call				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_010d:                                                                        //ldarg.0
	IL_010e:            Temp_6=gcnew Root::T_x123(safe_cast<System::Object^>(Temp_5),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x123::.ctor(System::Object^,System::IServiceProvider^)
	IL_0113:            Temp_6->M_x1();                                             //call				void Root::T_x123::M_x1()
	IL_0118:            return;                                                     //ret
	IL_0119:                                                                        //ldloc.0
	IL_011a:            Temp_8=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_011f:            V_0=Temp_8;                                                 //stloc.0
	IL_0120:                                                                        //ldc.i4				0xd
	IL_0125:            V_1=13;                                                     //stloc				V_1
	IL_0129:            /*goto IL_0016;*/goto IL_012e;                              //br				IL_0016
	IL_012e:                                                                        //ldloc.0
	IL_012f:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6C37\x5539\x5B3B\x593D\x2C3F\x2741\x0643\x2945\x2747\x2149\x214B\x2F4D\x224F\x3951"
	IL_0134:                                                                        //ldloc				V_2
	IL_0138:            Temp_10=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6C37\x5539\x5B3B\x593D\x2C3F\x2741\x0643\x2945\x2747\x2149\x214B\x2F4D\x224F\x3951",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013d:            if(V_0==Temp_10)goto IL_01d3;                               //beq				IL_01d3
	IL_0142:                                                                        //ldc.i4				0x7
	IL_0147:            V_1=7;                                                      //stloc				V_1
	IL_014b:            /*goto IL_0016;*/goto IL_0150;                              //br				IL_0016
	IL_0150:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_0152:                                                                        //ldarg.0
	IL_0153:            Temp_1=this->M_x5();                                        //call				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_0158:                                                                        //ldarg.0
	IL_0159:            Temp_2=gcnew Root::T_x114(safe_cast<System::Object^>(Temp_1),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x114::.ctor(System::Object^,System::IServiceProvider^)
	IL_015e:            Temp_2->M_x1();                                             //call				void Root::T_x114::M_x1()
	IL_0163:            return;                                                     //ret
	IL_0164:                                                                        //ldarg.0
	IL_0165:            this->M_x16();                                              //call				void Root::T_x10::M_x16()
	IL_016a:            return;                                                     //ret
	IL_016b:                                                                        //ldc.i4				0x1
	IL_0170:            V_1=1;                                                      //stloc				V_1
	IL_0174:            /*goto IL_0016;*/goto IL_0179;                              //br				IL_0016
	IL_0179:                                                                        //ldloc.0
	IL_017a:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x013F\x2C41\x2543\x2A45\x3147\x3049\x294B\x3C4D"
	IL_017f:                                                                        //ldloc				V_2
	IL_0183:            Temp_3=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x013F\x2C41\x2543\x2A45\x3147\x3049\x294B\x3C4D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0188:            if(V_0==Temp_3)goto IL_0164;                                //beq.s				IL_0164
	IL_018a:                                                                        //ldc.i4				0x6
	IL_018f:            V_1=6;                                                      //stloc				V_1
	IL_0193:            /*goto IL_0016;*/goto IL_0198;                              //br				IL_0016
	IL_0198:            goto IL_00bf;                                               //br				IL_00bf
	IL_019d:                                                                        //ldc.i4				0x0
	IL_01a2:            V_1=0;                                                      //stloc				V_1
	IL_01a6:            /*goto IL_0016;*/goto IL_01ab;                              //br				IL_0016
	IL_01ab:                                                                        //ldloc.0
	IL_01ac:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0343\x2945\x2747\x2D49\x204B\x2B4D"
	IL_01b1:                                                                        //ldloc				V_2
	IL_01b5:            Temp_0=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0343\x2945\x2747\x2D49\x204B\x2B4D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ba:            if(V_0==Temp_0)goto IL_0152;                                //beq.s				IL_0152
	IL_01bc:                                                                        //ldc.i4				0xf
	IL_01c1:            V_1=15;                                                     //stloc				V_1
	IL_01c5:            /*goto IL_0016;*/goto IL_01ca;                              //br				IL_0016
	IL_01ca:            goto IL_01da;                                               //br.s				IL_01da
	IL_01cc:                                                                        //ldarg.0
	IL_01cd:            this->M_x11();                                              //call				void Root::T_x10::M_x11()
	IL_01d2:            return;                                                     //ret
	IL_01d3:                                                                        //ldarg.0
	IL_01d4:            this->M_x12();                                              //call				void Root::T_x31::M_x12()
	IL_01d9:            return;                                                     //ret
	IL_01da:                                                                        //ldc.i4				0x4
	IL_01df:            V_1=4;                                                      //stloc				V_1
	IL_01e3:            /*goto IL_0016;*/goto IL_01e8;                              //br				IL_0016
	IL_01e8:                                                                        //ldloc.0
	IL_01e9:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0943\x3545\x2C47\x2449"
	IL_01ee:                                                                        //ldloc				V_2
	IL_01f2:            Temp_4=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5F39\x5D3B\x4C3D\x233F\x2A41\x0943\x3545\x2C47\x2449",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f7:            if(V_0==Temp_4)goto IL_0104;                                //beq				IL_0104
	IL_01fc:                                                                        //ldc.i4				0xc
	IL_0201:            V_1=12;                                                     //stloc				V_1
	IL_0205:            /*goto IL_0016;*/goto IL_020a;                              //br				IL_0016
	IL_020a:            goto IL_0232;                                               //br.s				IL_0232
	IL_020c:                                                                        //ldc.i4				0xe
	IL_0211:            V_1=14;                                                     //stloc				V_1
	IL_0215:            /*goto IL_0016;*/goto IL_021a;                              //br				IL_0016
	IL_021a:                                                                        //ldarg.1
	IL_021b:                                                                        //dup
	IL_021c:            V_0=A_0;                                                    //stloc.0
	IL_021d:            if(V_0==nullptr)goto IL_0267;                               //brfalse.s				IL_0267
	IL_021f:                                                                        //ldc.i4				0x8
	IL_0224:            V_1=8;                                                      //stloc				V_1
	IL_0228:            /*goto IL_0016;*/goto IL_022d;                              //br				IL_0016
	IL_022d:            goto IL_0119;                                               //br				IL_0119
	IL_0232:                                                                        //ldc.i4				0x5
	IL_0237:            V_1=5;                                                      //stloc				V_1
	IL_023b:            /*goto IL_0016;*/goto IL_0240;                              //br				IL_0016
	IL_0240:                                                                        //ldloc.0
	IL_0241:                                                                        //ldstr				L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2B41\x3743\x2745\x3B47\x3949\x294B\x234D\x324F\x3E51\x3153\x2455"
	IL_0246:                                                                        //ldloc				V_2
	IL_024a:            Temp_7=a(L"\x6321\x4723\x5225\x4127\x5C29\x492B\x672D\x442F\x5731\x5933\x1835\x6B37\x5239\x533B\x493D\x043F\x2B41\x3743\x2745\x3B47\x3949\x294B\x234D\x324F\x3E51\x3153\x2455",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024f:            if(V_0==Temp_7)goto IL_01cc;                                //beq				IL_01cc
	IL_0254:                                                                        //ldc.i4				0xa
	IL_0259:            V_1=10;                                                     //stloc				V_1
	IL_025d:            /*goto IL_0016;*/goto IL_0262;                              //br				IL_0016
	IL_0262:            goto IL_016b;                                               //br				IL_016b
	IL_0267:                                                                        //ldarg.0
	IL_0268:                                                                        //ldarg.1
	IL_0269:            Root::T_x10::M_x5(A_0);                                     //call				void Root::T_x10::M_x5(System::String^)
	IL_026e:            return;                                                     //ret

}
inline void Root::T_x31::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::IWindowCollection^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::IWindow^ Temp_4 = nullptr;
	//local variables.
	Reflector::IWindowManager^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_1=7;                                                      //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldtoken				Reflector::IWindowManager
	IL_0012:            Temp_0=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0017:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Root::T_x10::M_x1(System::Type^)
	IL_001c:                                                                        //castclass				Reflector::IWindowManager
	IL_0021:            V_0=safe_cast<Reflector::IWindowManager^>(Temp_1);          //stloc.0
	IL_0022:                                                                        //ldloc.0
	IL_0023:            Temp_2=V_0->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0028:                                                                        //ldstr				L"\x6124\x4826\x4A28\x5E2A\x402C\x4A2E\x5F30\x4732\x5434\x4336\x5038\x543A\x533C\x683E\x2840\x2D42\x2144\x2846\x3E48"
	IL_002d:                                                                        //ldloc				V_1
	IL_0031:            Temp_3=a(L"\x6124\x4826\x4A28\x5E2A\x402C\x4A2E\x5F30\x4732\x5434\x4336\x5038\x543A\x533C\x683E\x2840\x2D42\x2144\x2846\x3E48",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0036:            Temp_4=Temp_2[Temp_3];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:            Temp_4->Visible=true;                                       //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0041:            return;                                                     //ret

}
inline System::Boolean Root::T_x31::M_x9(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ Temp_7 = nullptr;
	Root::T_x123^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_2=12;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0xc
	IL_000e:            V_1=12;                                                     //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_005f;                                               //br.s				IL_005f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_01aa;case 1:goto IL_0219;case 2:goto IL_01dc;case 3:goto IL_0156;case 4:goto IL_00d6;case 5:goto IL_00c3;case 6:goto IL_0166;case 7:goto IL_012b;case 8:goto IL_0209;case 9:goto IL_0185;case 10:goto IL_01cc;case 11:goto IL_00f5;case 12:goto IL_0014;case 13:goto IL_023b;case 14:goto IL_010c;case 15:goto IL_0140;};//switch				(IL_01aa,IL_0219,IL_01dc,IL_0156,IL_00d6,IL_00c3,IL_0166,IL_012b,IL_0209,IL_0185,IL_01cc,IL_00f5,IL_0014,IL_023b,IL_010c,IL_0140)
	IL_005f:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x143F\x2D41\x2343\x2145\x2447\x2F49\x0E4B\x214D\x3F4F\x3951\x3953\x3755\x2A57\x3159"
	IL_0064:                                                                        //ldloc				V_2
	IL_0068:            Temp_11=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x143F\x2D41\x2343\x2145\x2447\x2F49\x0E4B\x214D\x3F4F\x3951\x3953\x3755\x2A57\x3159",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2549\x2F4B\x3B4D\x3D4F\x3751\x3A53\x2255\x3957\x2E59\x355B\x315D\x0E5F"
	IL_0072:                                                                        //ldloc				V_2
	IL_0076:            Temp_12=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2549\x2F4B\x3B4D\x3D4F\x3751\x3A53\x2255\x3957\x2E59\x355B\x315D\x0E5F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007b:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x0B4B\x214D\x3F4F\x3551\x3853\x3355"
	IL_0080:                                                                        //ldloc				V_2
	IL_0084:            Temp_13=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x0B4B\x214D\x3F4F\x3551\x3853\x3355",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2349\x3F4B\x2F4D\x234F\x2151\x3153\x3B55\x3A57\x3659\x395B\x2C5D"
	IL_008e:                                                                        //ldloc				V_2
	IL_0092:            Temp_14=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2349\x3F4B\x2F4D\x234F\x2151\x3153\x3B55\x3A57\x3659\x395B\x2C5D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0097:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0947\x2449\x2D4B\x224D\x294F\x2851\x3153\x2455"
	IL_009c:                                                                        //ldloc				V_2
	IL_00a0:            Temp_15=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0947\x2449\x2D4B\x224D\x294F\x2851\x3153\x2455",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a5:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x014B\x3D4D\x344F\x3C51"
	IL_00aa:                                                                        //ldloc				V_2
	IL_00ae:            Temp_16=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x014B\x3D4D\x344F\x3C51",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:            goto IL_0132;                                               //leave.s				IL_0132
	IL_00b5:                                                                        //ldc.i4				0x5
	IL_00ba:            V_1=5;                                                      //stloc				V_1
	IL_00be:            /*goto IL_0016;*/goto IL_00c3;                              //br				IL_0016
	IL_00c3:            goto IL_0240;                                               //br				IL_0240
	IL_00c8:                                                                        //ldc.i4				0x4
	IL_00cd:            V_1=4;                                                      //stloc				V_1
	IL_00d1:            /*goto IL_0016;*/goto IL_00d6;                              //br				IL_0016
	IL_00d6:                                                                        //ldloc.0
	IL_00d7:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0947\x2449\x2D4B\x224D\x294F\x2851\x3153\x2455"
	IL_00dc:                                                                        //ldloc				V_2
	IL_00e0:            Temp_4=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0947\x2449\x2D4B\x224D\x294F\x2851\x3153\x2455",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e5:            if(V_0==Temp_4)goto IL_0130;                                //beq.s				IL_0130
	IL_00e7:                                                                        //ldc.i4				0xb
	IL_00ec:            V_1=11;                                                     //stloc				V_1
	IL_00f0:            /*goto IL_0016;*/goto IL_00f5;                              //br				IL_0016
	IL_00f5:            goto IL_0158;                                               //br.s				IL_0158
	IL_00f7:                                                                        //ldloc.0
	IL_00f8:            Temp_3=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00fd:            V_0=Temp_3;                                                 //stloc.0
	IL_00fe:                                                                        //ldc.i4				0xe
	IL_0103:            V_1=14;                                                     //stloc				V_1
	IL_0107:            /*goto IL_0016;*/goto IL_010c;                              //br				IL_0016
	IL_010c:                                                                        //ldloc.0
	IL_010d:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x143F\x2D41\x2343\x2145\x2447\x2F49\x0E4B\x214D\x3F4F\x3951\x3953\x3755\x2A57\x3159"
	IL_0112:                                                                        //ldloc				V_2
	IL_0116:            Temp_10=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x143F\x2D41\x2343\x2145\x2447\x2F49\x0E4B\x214D\x3F4F\x3951\x3953\x3755\x2A57\x3159",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011b:            if(V_0==Temp_10)goto IL_0130;                               //beq.s				IL_0130
	IL_011d:                                                                        //ldc.i4				0x7
	IL_0122:            V_1=7;                                                      //stloc				V_1
	IL_0126:            /*goto IL_0016;*/goto IL_012b;                              //br				IL_0016
	IL_012b:            goto IL_01ce;                                               //br				IL_01ce
	IL_0130:                                                                        //ldc.i4.1
	IL_0131:            return true;                                                //ret
	IL_0132:                                                                        //ldc.i4				0xf
	IL_0137:            V_1=15;                                                     //stloc				V_1
	IL_013b:            /*goto IL_0016;*/goto IL_0140;                              //br				IL_0016
	IL_0140:                                                                        //ldarg.1
	IL_0141:                                                                        //dup
	IL_0142:            V_0=A_0;                                                    //stloc.0
	IL_0143:            if(V_0==nullptr)goto IL_0240;                               //brfalse				IL_0240
	IL_0148:                                                                        //ldc.i4				0x3
	IL_014d:            V_1=3;                                                      //stloc				V_1
	IL_0151:            /*goto IL_0016;*/goto IL_0156;                              //br				IL_0016
	IL_0156:            goto IL_00f7;                                               //br.s				IL_00f7
	IL_0158:                                                                        //ldc.i4				0x6
	IL_015d:            V_1=6;                                                      //stloc				V_1
	IL_0161:            /*goto IL_0016;*/goto IL_0166;                              //br				IL_0016
	IL_0166:                                                                        //ldloc.0
	IL_0167:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x014B\x3D4D\x344F\x3C51"
	IL_016c:                                                                        //ldloc				V_2
	IL_0170:            Temp_6=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x014B\x3D4D\x344F\x3C51",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0175:            if(V_0==Temp_6)goto IL_018a;                                //beq.s				IL_018a
	IL_0177:                                                                        //ldc.i4				0x9
	IL_017c:            V_1=9;                                                      //stloc				V_1
	IL_0180:            /*goto IL_0016;*/goto IL_0185;                              //br				IL_0016
	IL_0185:            goto IL_00b5;                                               //br				IL_00b5
	IL_018a:                                                                        //ldarg.0
	IL_018b:            Temp_7=this->M_x5();                                        //call				Reflector::CodeModel::IMemberDeclaration^ Root::T_x31::M_x5()
	IL_0190:                                                                        //ldarg.0
	IL_0191:            Temp_8=gcnew Root::T_x123(safe_cast<System::Object^>(Temp_7),safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x123::.ctor(System::Object^,System::IServiceProvider^)
	IL_0196:            Temp_9=Temp_8->M_x2();                                      //call				System::Boolean Root::T_x123::M_x2()
	IL_019b:            return Temp_9;                                              //ret
	IL_019c:                                                                        //ldc.i4				0x0
	IL_01a1:            V_1=0;                                                      //stloc				V_1
	IL_01a5:            /*goto IL_0016;*/goto IL_01aa;                              //br				IL_0016
	IL_01aa:                                                                        //ldloc.0
	IL_01ab:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x0B4B\x214D\x3F4F\x3551\x3853\x3355"
	IL_01b0:                                                                        //ldloc				V_2
	IL_01b4:            Temp_0=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x0B4B\x214D\x3F4F\x3551\x3853\x3355",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b9:            if(V_0==Temp_0)goto IL_0130;                                //beq				IL_0130
	IL_01be:                                                                        //ldc.i4				0xa
	IL_01c3:            V_1=10;                                                     //stloc				V_1
	IL_01c7:            /*goto IL_0016;*/goto IL_01cc;                              //br				IL_0016
	IL_01cc:            goto IL_020b;                                               //br.s				IL_020b
	IL_01ce:                                                                        //ldc.i4				0x2
	IL_01d3:            V_1=2;                                                      //stloc				V_1
	IL_01d7:            /*goto IL_0016;*/goto IL_01dc;                              //br				IL_0016
	IL_01dc:                                                                        //ldloc.0
	IL_01dd:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2549\x2F4B\x3B4D\x3D4F\x3751\x3A53\x2255\x3957\x2E59\x355B\x315D\x0E5F"
	IL_01e2:                                                                        //ldloc				V_2
	IL_01e6:            Temp_2=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2549\x2F4B\x3B4D\x3D4F\x3751\x3A53\x2255\x3957\x2E59\x355B\x315D\x0E5F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01eb:            if(V_0==Temp_2)goto IL_0130;                                //beq				IL_0130
	IL_01f0:                                                                        //ldc.i4.4
	IL_01f1:                                                                        //dup
	IL_01f2:                                                                        //dup
	IL_01f3:                                                                        //ldc.i4.2
	IL_01f4:                                                                        //sub
	IL_01f5:                                                                        //blt				IL_01f1
	IL_01fa:                                                                        //pop
	IL_01fb:                                                                        //ldc.i4				0x8
	IL_0200:            V_1=8;                                                      //stloc				V_1
	IL_0204:            /*goto IL_0016;*/goto IL_0209;                              //br				IL_0016
	IL_0209:            goto IL_019c;                                               //br.s				IL_019c
	IL_020b:                                                                        //ldc.i4				0x1
	IL_0210:            V_1=1;                                                      //stloc				V_1
	IL_0214:            /*goto IL_0016;*/goto IL_0219;                              //br				IL_0016
	IL_0219:                                                                        //ldloc.0
	IL_021a:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2349\x3F4B\x2F4D\x234F\x2151\x3153\x3B55\x3A57\x3659\x395B\x2C5D"
	IL_021f:                                                                        //ldloc				V_2
	IL_0223:            Temp_1=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2349\x3F4B\x2F4D\x234F\x2151\x3153\x3B55\x3A57\x3659\x395B\x2C5D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0228:            if(V_0==Temp_1)goto IL_0130;                                //beq				IL_0130
	IL_022d:                                                                        //ldc.i4				0xd
	IL_0232:            V_1=13;                                                     //stloc				V_1
	IL_0236:            /*goto IL_0016;*/goto IL_023b;                              //br				IL_0016
	IL_023b:            goto IL_00c8;                                               //br				IL_00c8
	IL_0240:                                                                        //ldarg.0
	IL_0241:                                                                        //ldarg.1
	IL_0242:            Temp_5=Root::T_x10::M_x9(A_0);                              //call				System::Boolean Root::T_x10::M_x9(System::String^)
	IL_0247:            return Temp_5;                                              //ret

}
