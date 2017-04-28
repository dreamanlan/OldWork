#include "global_xref.h"

inline Root::T_x165::T_x165(Root::T_x174^ A_0,System::UInt16 A_1,System::Int32 A_2,System::Int32 A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x2^ Temp_0 = nullptr;
	Root::T_x139^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	Root::T_x174^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_6 = nullptr;
	Root::T_x174^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_9 = nullptr;
	Reflector::CodeModel::Memory::ParameterDeclaration^ Temp_10 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_11 = nullptr;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	Root::T_x139^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	Reflector::CodeModel::IType^ V_5 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x174^ Root::T_x165 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x12=A_1;                                            //stfld				System::UInt16 Root::T_x165 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.3
	IL_0016:            this->F_x13=A_2;                                            //stfld				System::Int32 Root::T_x165 F_x13
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldnull
	IL_001d:            this->F_x4=safe_cast<Reflector::CodeModel::IMethodReference^>(nullptr);//stfld				Reflector::CodeModel::IMethodReference^ Root::T_x165 F_x4
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldnull
	IL_0024:            this->F_x15=safe_cast<Reflector::CodeModel::IMethodReference^>(nullptr);//stfld				Reflector::CodeModel::IMethodReference^ Root::T_x165 F_x15
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_0=A_0->M_x4();                                         //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_002f:            V_0=Temp_0;                                                 //stloc.0
	IL_0030:                                                                        //ldloc.0
	IL_0031:                                                                        //ldarg.s				A_3
	IL_0033:            Temp_1=V_0->M_x14(A_3);                                     //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_0038:            V_1=Temp_1;                                                 //stloc.1
	IL_0039:                                                                        //ldloc.1
	IL_003a:            Temp_2=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_003f:            V_2=Temp_2;                                                 //stloc.2
	IL_0040:                                                                        //ldloc.2
	IL_0041:                                                                        //ldc.i4.s				15
	IL_0043:                                                                        //and
	IL_0044:                                                                        //ldc.i4.8
	IL_0045:            if((V_2 & 15)!=8)goto IL_00b9;                              //bne.un.s				IL_00b9
	IL_0047:            goto IL_0091;                                               //br.s				IL_0091
	IL_0049:                                                                        //ldloc.0
	IL_004a:                                                                        //ldloc.1
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_7=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x165 F_x1
	IL_0051:                                                                        //ldnull
	IL_0052:            Temp_8=V_0->M_x5(V_1,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_7),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0057:            V_5=Temp_8;                                                 //stloc.s				V_5
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_9=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_005f:                                                                        //ldloc.s				V_4
	IL_0061:            Temp_10=gcnew Reflector::CodeModel::Memory::ParameterDeclaration();//newobj				void Reflector::CodeModel::Memory::ParameterDeclaration::.ctor()
	IL_0066:            Temp_9[V_4]=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_10);//stelem.ref
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_11=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_006d:                                                                        //ldloc.s				V_4
	IL_006f:                                                                        //ldelem.ref
	IL_0070:                                                                        //ldloc.s				V_5
	IL_0072:            Temp_11[V_4]->ParameterType=V_5;                            //callvirt				void Reflector::CodeModel::IParameterDeclaration::set_ParameterType(Reflector::CodeModel::IType^)
	IL_0077:                                                                        //ldloc.s				V_4
	IL_0079:                                                                        //ldc.i4.1
	IL_007a:                                                                        //add
	IL_007b:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_007d:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_007f:                                                                        //ldarg.0
	IL_0080:                                                                        //ldloc.3
	IL_0081:                                                                        //conv.ovf.u4
	IL_0082:            Temp_6=gcnew array<Reflector::CodeModel::IParameterDeclaration^>(safe_cast<System::UInt32>(V_3));//newarr				Reflector::CodeModel::IParameterDeclaration
	IL_0087:            this->F_x5=Temp_6;                                          //stfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_008c:                                                                        //ldc.i4.0
	IL_008d:            V_4=0;                                                      //stloc.s				V_4
	IL_008f:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_0091:                                                                        //ldloc.1
	IL_0092:            Temp_3=V_1->M_x6();                                         //callvirt				System::Int32 Root::T_x139::M_x6()
	IL_0097:            V_3=Temp_3;                                                 //stloc.3
	IL_0098:                                                                        //ldarg.0
	IL_0099:                                                                        //ldloc.0
	IL_009a:                                                                        //ldloc.1
	IL_009b:                                                                        //ldarg.0
	IL_009c:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x165 F_x1
	IL_00a1:                                                                        //ldnull
	IL_00a2:            Temp_5=V_0->M_x5(V_1,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_4),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_00a7:            this->F_x8=Temp_5;                                          //stfld				Reflector::CodeModel::IType^ Root::T_x165 F_x8
	IL_00ac:                                                                        //ldloc.3
	IL_00ad:                                                                        //ldc.i4.0
	IL_00ae:            if(V_3<=0)goto IL_00b9;                                     //ble.s				IL_00b9
	IL_00b0:            goto IL_007f;                                               //br.s				IL_007f
	IL_00b2:                                                                        //ldloc.s				V_4
	IL_00b4:                                                                        //ldloc.3
	IL_00b5:            if(V_4<V_3)goto IL_0049;                                    //blt.s				IL_0049
	IL_00b7:            goto IL_00b9;                                               //br.s				IL_00b9
	IL_00b9:                                                                        //ldloc.0
	IL_00ba:                                                                        //ldloc.1
	IL_00bb:            V_0->M_x12(V_1);                                            //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_00c0:            return;                                                     //ret

}
inline System::Int32 Root::T_x165::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::ArgumentException^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	Reflector::CodeModel::IPropertyReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_1=13;                                                     //stloc				V_1
	IL_0009:                                                                        //ldarg.1
	IL_000a:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_000f:            V_0=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(obj);//stloc.0
	IL_0010:                                                                        //ldloc.0
	IL_0011:            if(V_0==nullptr)goto IL_001d;                               //brfalse.s				IL_001d
	IL_0013:            goto IL_0015;                                               //br.s				IL_0015
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_3=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IPropertyReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IPropertyReference^,Reflector::CodeModel::IPropertyReference^)
	IL_001c:            return Temp_3;                                              //ret
	IL_001d:                                                                        //ldc.i4.4
	IL_001e:                                                                        //dup
	IL_001f:                                                                        //dup
	IL_0020:                                                                        //ldc.i4.2
	IL_0021:                                                                        //sub
	IL_0022:                                                                        //blt				IL_001e
	IL_0027:                                                                        //pop
	IL_0028:                                                                        //ldstr				L"\x6A2A\x5F2C\x482E\x4430\x5E32\x5034\x5936\x4D38\x1B3A\x503C\x4A3E\x3240\x3742\x6544\x2546\x2C48\x6B4A\x3D4C\x3D4E\x3E50\x2352\x3054\x2556\x2D58\x225A\x7D5C\x2D5E\x0460\x0562\x0064\x1566\x0C68\x056A\x0E6C\x0A6E\x5F70"
	IL_002d:                                                                        //ldloc				V_1
	IL_0031:            Temp_0=a(L"\x6A2A\x5F2C\x482E\x4430\x5E32\x5034\x5936\x4D38\x1B3A\x503C\x4A3E\x3240\x3742\x6544\x2546\x2C48\x6B4A\x3D4C\x3D4E\x3E50\x2352\x3054\x2556\x2D58\x225A\x7D5C\x2D5E\x0460\x0562\x0064\x1566\x0C68\x056A\x0E6C\x0A6E\x5F70",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0036:                                                                        //ldstr				L"\x442A\x4F2C\x452E"
	IL_003b:                                                                        //ldloc				V_1
	IL_003f:            Temp_1=a(L"\x442A\x4F2C\x452E",V_1);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0044:            Temp_2=gcnew System::ArgumentException(Temp_0,Temp_1);      //newobj				void System::ArgumentException::.ctor(System::String^,System::String^)
	IL_0049:            throw Temp_2;                                               //throw

}
inline Reflector::CodeModel::IExpression^ Root::T_x165::M_x1()
//Reflector::CodeModel::IPropertyDeclaration^::get_Initializer by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				Reflector::CodeModel::IExpression^ Root::T_x165 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x165::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_8 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICustomAttribute^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0023;                            //brtrue.s				IL_0023
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.1
	IL_000f:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0014:            this->F_x2=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_8=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_0022:            return;                                                     //ret
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_0029:            V_0=Temp_1;                                                 //stloc.0
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldloc.0
	IL_002c:            Temp_2=V_0->Length;                                         //ldlen
	IL_002d:                                                                        //conv.i4
	IL_002e:                                                                        //ldc.i4.1
	IL_002f:                                                                        //add
	IL_0030:                                                                        //conv.ovf.u4
	IL_0031:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0036:            this->F_x2=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_4=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_0042:                                                                        //ldc.i4.0
	IL_0043:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_5=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_6=V_0->Length;                                         //ldlen
	IL_0050:                                                                        //conv.i4
	IL_0051:                                                                        //ldarg.1
	IL_0052:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_0053:            return;                                                     //ret

}
inline void Root::T_x165::M_x1(Reflector::CodeModel::IExpression^ A_0)
//Reflector::CodeModel::IPropertyDeclaration^::set_Initializer by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x9=A_0;                                             //stfld				Reflector::CodeModel::IExpression^ Root::T_x165 F_x9
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x165::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IPropertyDeclaration^::set_GetMethod by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_7 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_10 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::IParameterDeclarationCollection^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_00f2;case 1:goto IL_0109;case 2:goto IL_0127;case 3:goto IL_00ad;case 4:goto IL_008b;case 5:goto IL_00d6;case 6:goto IL_00c6;case 7:goto IL_005b;case 8:goto IL_009d;case 9:goto IL_0045;};//switch				(IL_00f2,IL_0109,IL_0127,IL_00ad,IL_008b,IL_00d6,IL_00c6,IL_005b,IL_009d,IL_0045)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldarg.1
	IL_0035:            this->F_x4=A_0;                                             //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x165 F_x4
	IL_003a:                                                                        //ldc.i4				0x9
	IL_003f:            V_2=9;                                                      //stloc				V_2
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_11=this->F_x5;                                         //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_004b:            if(Temp_11==nullptr)goto IL_012c;                           //brfalse				IL_012c
	IL_0050:                                                                        //ldc.i4				0x7
	IL_0055:            V_2=7;                                                      //stloc				V_2
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_009f;                                               //br.s				IL_009f
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_7=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_0063:                                                                        //ldloc.1
	IL_0064:                                                                        //ldelem.ref
	IL_0065:                                                                        //ldloc.0
	IL_0066:                                                                        //ldloc.1
	IL_0067:            Temp_8=V_0[V_1];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_006c:            Temp_9=safe_cast<Reflector::CodeModel::IParameterReference^>(Temp_8)->Name;//callvirt				System::String^ Reflector::CodeModel::IParameterReference::get_Name()
	IL_0071:            safe_cast<Reflector::CodeModel::IParameterReference^>(Temp_7[V_1])->Name=Temp_9;//callvirt				void Reflector::CodeModel::IParameterReference::set_Name(System::String^)
	IL_0076:                                                                        //ldloc.1
	IL_0077:                                                                        //ldc.i4.1
	IL_0078:                                                                        //add
	IL_0079:            V_1=(V_1 + 1);                                              //stloc.1
	IL_007a:            goto IL_007d;                                               //br.s				IL_007d
	IL_007c:                                                                        //break
	IL_007d:                                                                        //ldc.i4				0x4
	IL_0082:            V_2=4;                                                      //stloc				V_2
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_008d:                                                                        //ldc.i4.0
	IL_008e:            V_1=0;                                                      //stloc.1
	IL_008f:                                                                        //ldc.i4				0x8
	IL_0094:            V_2=8;                                                      //stloc				V_2
	IL_0098:            /*goto IL_0002;*/goto IL_009d;                              //br				IL_0002
	IL_009d:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_009f:                                                                        //ldc.i4				0x3
	IL_00a4:            V_2=3;                                                      //stloc				V_2
	IL_00a8:            /*goto IL_0002;*/goto IL_00ad;                              //br				IL_0002
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_3=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_00b3:            Temp_4=Temp_3->Length;                                      //ldlen
	IL_00b4:                                                                        //conv.i4
	IL_00b5:                                                                        //ldc.i4.0
	IL_00b6:            if(Temp_4<=0)goto IL_012c;                                  //ble.s				IL_012c
	IL_00b8:                                                                        //ldc.i4				0x6
	IL_00bd:            V_2=6;                                                      //stloc				V_2
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:            goto IL_00f4;                                               //br.s				IL_00f4
	IL_00c8:                                                                        //ldc.i4				0x5
	IL_00cd:            V_2=5;                                                      //stloc				V_2
	IL_00d1:            /*goto IL_0002;*/goto IL_00d6;                              //br				IL_0002
	IL_00d6:                                                                        //ldloc.1
	IL_00d7:                                                                        //ldarg.0
	IL_00d8:            Temp_5=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_00dd:            Temp_6=Temp_5->Length;                                      //ldlen
	IL_00de:                                                                        //conv.i4
	IL_00df:            if(V_1<Temp_6)goto IL_005d;                                 //blt				IL_005d
	IL_00e4:                                                                        //ldc.i4				0x0
	IL_00e9:            V_2=0;                                                      //stloc				V_2
	IL_00ed:            /*goto IL_0002;*/goto IL_00f2;                              //br				IL_0002
	IL_00f2:            goto IL_012c;                                               //br.s				IL_012c
	IL_00f4:                                                                        //ldarg.1
	IL_00f5:            Temp_10=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_00fa:            V_0=Temp_10;                                                //stloc.0
	IL_00fb:                                                                        //ldc.i4				0x1
	IL_0100:            V_2=1;                                                      //stloc				V_2
	IL_0104:            /*goto IL_0002;*/goto IL_0109;                              //br				IL_0002
	IL_0109:                                                                        //ldarg.0
	IL_010a:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_010f:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0110:                                                                        //conv.i4
	IL_0111:                                                                        //ldloc.0
	IL_0112:            Temp_2=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0117:            if(Temp_1>Temp_2)goto IL_012c;                              //bgt.s				IL_012c
	IL_0119:                                                                        //ldc.i4				0x2
	IL_011e:            V_2=2;                                                      //stloc				V_2
	IL_0122:            /*goto IL_0002;*/goto IL_0127;                              //br				IL_0002
	IL_0127:            goto IL_008d;                                               //br				IL_008d
	IL_012c:            return;                                                     //ret

}
inline void Root::T_x165::M_x1(System::Boolean A_0)
//Reflector::CodeModel::IPropertyDeclaration^::set_SpecialName by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x165^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x165^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x165^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x165^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x165 F_x12
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4				0xfffffdff
	IL_0018:                                                                        //and
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -513);if(A_0)goto IL_001e;//brtrue.s				IL_001e
	IL_001c:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0025;                   //br.s				IL_0025
	IL_001e:                                                                        //ldc.i4				0x200
	IL_0023:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=512;goto IL_0028;        //br.s				IL_0028
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0028;          //br.s				IL_0028
	IL_0028:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0029:                                                                        //conv.u2
	IL_002a:            Temp_9->F_x12=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x165 F_x12
	IL_002f:            return;                                                     //ret

}
inline System::Boolean Root::T_x165::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IPropertyReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0038;case 1:goto IL_0054;case 2:goto IL_0062;case 3:goto IL_000b;};//switch				(IL_0038,IL_0054,IL_0062,IL_000b)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            if(this!=safe_cast<Root::T_x165^>(A_0))goto IL_0042;        //bne.un.s				IL_0042
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_1=0;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0064;                                               //br.s				IL_0064
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_0=Root::T_x149::M_x2(safe_cast<Reflector::CodeModel::IPropertyReference^>(this),V_0);//call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IPropertyReference^,Reflector::CodeModel::IPropertyReference^)
	IL_0041:            return Temp_0;                                              //ret
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_0048:            V_0=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(A_0);//stloc.0
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_1=1;                                                      //stloc				V_1
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0057:                                                                        //ldc.i4				0x2
	IL_005c:            V_1=2;                                                      //stloc				V_1
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:            goto IL_003a;                                               //br.s				IL_003a
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:            return true;                                                //ret
	IL_0066:                                                                        //ldc.i4.0
	IL_0067:            return false;                                               //ret

}
inline System::Boolean Root::T_x165::M_x12()
//Reflector::CodeModel::IPropertyDeclaration^::get_SpecialName by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x165 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x200
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 512) == 0) == false);//ret

}
inline System::Int32 Root::T_x165::M_x13()
//System::Object^::GetHashCode by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Name;                                          //call				System::String^ Root::T_x165::get_Name()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x165::M_x2()
//Reflector::CodeModel::IPropertyDeclaration^::get_SetMethod by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x15;                                         //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x165 F_x15
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x165::M_x2(Reflector::CodeModel::IMethodReference^ A_0)
//Reflector::CodeModel::IPropertyDeclaration^::set_SetMethod by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_2 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_8 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::IParameterDeclarationCollection^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_005b;case 1:goto IL_009d;case 2:goto IL_00ad;case 3:goto IL_0045;case 4:goto IL_0109;case 5:goto IL_00f2;case 6:goto IL_00d6;case 7:goto IL_008b;case 8:goto IL_00c6;case 9:goto IL_0129;};//switch				(IL_005b,IL_009d,IL_00ad,IL_0045,IL_0109,IL_00f2,IL_00d6,IL_008b,IL_00c6,IL_0129)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldarg.1
	IL_0035:            this->F_x15=A_0;                                            //stfld				Reflector::CodeModel::IMethodReference^ Root::T_x165 F_x15
	IL_003a:                                                                        //ldc.i4				0x3
	IL_003f:            V_2=3;                                                      //stloc				V_2
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_2=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_004b:            if(Temp_2==nullptr)goto IL_012e;                            //brfalse				IL_012e
	IL_0050:                                                                        //ldc.i4				0x0
	IL_0055:            V_2=0;                                                      //stloc				V_2
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_009f;                                               //br.s				IL_009f
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_8=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_0063:                                                                        //ldloc.1
	IL_0064:                                                                        //ldelem.ref
	IL_0065:                                                                        //ldloc.0
	IL_0066:                                                                        //ldloc.1
	IL_0067:            Temp_9=V_0[V_1];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_006c:            Temp_10=safe_cast<Reflector::CodeModel::IParameterReference^>(Temp_9)->Name;//callvirt				System::String^ Reflector::CodeModel::IParameterReference::get_Name()
	IL_0071:            safe_cast<Reflector::CodeModel::IParameterReference^>(Temp_8[V_1])->Name=Temp_10;//callvirt				void Reflector::CodeModel::IParameterReference::set_Name(System::String^)
	IL_0076:                                                                        //ldloc.1
	IL_0077:                                                                        //ldc.i4.1
	IL_0078:                                                                        //add
	IL_0079:            V_1=(V_1 + 1);                                              //stloc.1
	IL_007a:            goto IL_007d;                                               //br.s				IL_007d
	IL_007c:                                                                        //break
	IL_007d:                                                                        //ldc.i4				0x7
	IL_0082:            V_2=7;                                                      //stloc				V_2
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_008d:                                                                        //ldc.i4.0
	IL_008e:            V_1=0;                                                      //stloc.1
	IL_008f:                                                                        //ldc.i4				0x1
	IL_0094:            V_2=1;                                                      //stloc				V_2
	IL_0098:            /*goto IL_0002;*/goto IL_009d;                              //br				IL_0002
	IL_009d:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_009f:                                                                        //ldc.i4				0x2
	IL_00a4:            V_2=2;                                                      //stloc				V_2
	IL_00a8:            /*goto IL_0002;*/goto IL_00ad;                              //br				IL_0002
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_00b3:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_00b4:                                                                        //conv.i4
	IL_00b5:                                                                        //ldc.i4.0
	IL_00b6:            if(Temp_1<=0)goto IL_012e;                                  //ble.s				IL_012e
	IL_00b8:                                                                        //ldc.i4				0x8
	IL_00bd:            V_2=8;                                                      //stloc				V_2
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:            goto IL_00f4;                                               //br.s				IL_00f4
	IL_00c8:                                                                        //ldc.i4				0x6
	IL_00cd:            V_2=6;                                                      //stloc				V_2
	IL_00d1:            /*goto IL_0002;*/goto IL_00d6;                              //br				IL_0002
	IL_00d6:                                                                        //ldloc.1
	IL_00d7:                                                                        //ldarg.0
	IL_00d8:            Temp_6=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_00dd:            Temp_7=Temp_6->Length;                                      //ldlen
	IL_00de:                                                                        //conv.i4
	IL_00df:            if(V_1<Temp_7)goto IL_005d;                                 //blt				IL_005d
	IL_00e4:                                                                        //ldc.i4				0x5
	IL_00e9:            V_2=5;                                                      //stloc				V_2
	IL_00ed:            /*goto IL_0002;*/goto IL_00f2;                              //br				IL_0002
	IL_00f2:            goto IL_012e;                                               //br.s				IL_012e
	IL_00f4:                                                                        //ldarg.1
	IL_00f5:            Temp_11=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_00fa:            V_0=Temp_11;                                                //stloc.0
	IL_00fb:                                                                        //ldc.i4				0x4
	IL_0100:            V_2=4;                                                      //stloc				V_2
	IL_0104:            /*goto IL_0002;*/goto IL_0109;                              //br				IL_0002
	IL_0109:                                                                        //ldarg.0
	IL_010a:            Temp_3=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_010f:            Temp_4=Temp_3->Length;                                      //ldlen
	IL_0110:                                                                        //conv.i4
	IL_0111:                                                                        //ldloc.0
	IL_0112:            Temp_5=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0117:                                                                        //ldc.i4.1
	IL_0118:                                                                        //sub
	IL_0119:            if(Temp_4>(Temp_5 - 1))goto IL_012e;                        //bgt.s				IL_012e
	IL_011b:                                                                        //ldc.i4				0x9
	IL_0120:            V_2=9;                                                      //stloc				V_2
	IL_0124:            /*goto IL_0002;*/goto IL_0129;                              //br				IL_0002
	IL_0129:            goto IL_008d;                                               //br				IL_008d
	IL_012e:            return;                                                     //ret

}
inline void Root::T_x165::M_x2(System::Boolean A_0)
//Reflector::CodeModel::IPropertyDeclaration^::set_RuntimeSpecialName by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	Root::T_x165^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x165^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x165^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	Root::T_x165^ Temp_9 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x165 F_x12
	IL_0012:                                                                        //conv.i4
	IL_0013:                                                                        //ldc.i4				0xfffffbff
	IL_0018:                                                                        //and
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_4=this;Temp_3=(safe_cast<System::Int32>(Temp_0) & -1025);if(A_0)goto IL_001e;//brtrue.s				IL_001e
	IL_001c:            Temp_6=Temp_4;Temp_5=Temp_3;goto IL_0025;                   //br.s				IL_0025
	IL_001e:                                                                        //ldc.i4				0x400
	IL_0023:            Temp_9=Temp_4;Temp_8=Temp_3;Temp_7=1024;goto IL_0028;       //br.s				IL_0028
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            Temp_9=Temp_6;Temp_8=Temp_5;Temp_7=0;goto IL_0028;          //br.s				IL_0028
	IL_0028:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0029:                                                                        //conv.u2
	IL_002a:            Temp_9->F_x12=safe_cast<System::UInt16>((Temp_8 | Temp_7)); //stfld				System::UInt16 Root::T_x165 F_x12
	IL_002f:            return;                                                     //ret

}
inline System::String^ Root::T_x165::M_x5()
//System::Object^::ToString by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	Reflector::CodeModel::IParameterDeclaration^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	array<System::String^>^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	Reflector::CodeModel::IType^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Globalization::CultureInfo^ Temp_20 = nullptr;
	System::IO::StringWriter^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::IParameterDeclarationCollection^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	array<System::String^>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_6=0;                                                      //stloc				V_6
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_0032;case 1:goto IL_01dc;case 2:goto IL_0049;};//switch				(IL_0032,IL_01dc,IL_0049)
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_0=this->Parameters;                                    //call				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x165::get_Parameters()
	IL_0026:            V_0=Temp_0;                                                 //stloc.0
	IL_0027:                                                                        //ldc.i4				0x0
	IL_002c:            V_5=0;                                                      //stloc				V_5
	IL_0030:            /*goto IL_000b;*/goto IL_0032;                              //br.s				IL_000b
	IL_0032:                                                                        //ldloc.0
	IL_0033:            Temp_1=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:            if(Temp_1<=0)goto IL_01e4;                                  //ble				IL_01e4
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_5=2;                                                      //stloc				V_5
	IL_0047:            /*goto IL_000b;*/goto IL_0049;                              //br.s				IL_000b
	IL_0049:            goto IL_01c3;                                               //br				IL_01c3
	IL_004901:          try{
	IL_004e:            goto IL_0079;                                               //br.s				IL_0079
	IL_0050:                                                                        //ldloc				V_5
	IL_0054:            switch(V_5){case 0:goto IL_00ae;case 1:goto IL_0093;case 2:goto IL_0111;case 3:goto IL_00a1;case 4:goto IL_00c2;case 5:goto IL_0178;case 6:goto IL_0086;case 7:goto IL_00ed;};//switch				(IL_00ae,IL_0093,IL_0111,IL_00a1,IL_00c2,IL_0178,IL_0086,IL_00ed)
	IL_0079:                                                                        //ldc.i4.0
	IL_007a:            V_2=0;                                                      //stloc.2
	IL_007b:                                                                        //ldc.i4				0x6
	IL_0080:            V_5=6;                                                      //stloc				V_5
	IL_0084:            /*goto IL_0050;*/goto IL_0086;                              //br.s				IL_0050
	IL_0086:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_0088:                                                                        //ldc.i4				0x1
	IL_008d:            V_5=1;                                                      //stloc				V_5
	IL_0091:            /*goto IL_0050;*/goto IL_0093;                              //br.s				IL_0050
	IL_0093:                                                                        //ldloc.2
	IL_0094:            if(V_2==0)goto IL_00c4;                                     //brfalse.s				IL_00c4
	IL_0096:                                                                        //ldc.i4				0x3
	IL_009b:            V_5=3;                                                      //stloc				V_5
	IL_009f:            /*goto IL_0050;*/goto IL_00a1;                              //br.s				IL_0050
	IL_00a1:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_00a3:                                                                        //ldc.i4				0x0
	IL_00a8:            V_5=0;                                                      //stloc				V_5
	IL_00ac:            /*goto IL_0050;*/goto IL_00ae;                              //br.s				IL_0050
	IL_00ae:                                                                        //ldloc.2
	IL_00af:                                                                        //ldloc.0
	IL_00b0:            Temp_7=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00b5:            if(V_2<Temp_7)goto IL_0088;                                 //blt.s				IL_0088
	IL_00b7:                                                                        //ldc.i4				0x4
	IL_00bc:            V_5=4;                                                      //stloc				V_5
	IL_00c0:            /*goto IL_0050;*/goto IL_00c2;                              //br.s				IL_0050
	IL_00c2:            goto IL_0113;                                               //br.s				IL_0113
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldloc.2
	IL_00c7:            Temp_8=V_0[V_2];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_00cc:            Temp_9=Temp_8->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00d1:            Temp_10=Temp_9->ToString();                                 //callvirt				System::String^ System::Object::ToString()
	IL_00d6:            V_1->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00db:                                                                        //ldloc.2
	IL_00dc:                                                                        //ldc.i4.1
	IL_00dd:                                                                        //add
	IL_00de:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00df:                                                                        //ldc.i4				0x7
	IL_00e4:            V_5=7;                                                      //stloc				V_5
	IL_00e8:            /*goto IL_0050;*/goto IL_00ed;                              //br				IL_0050
	IL_00ed:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_00ef:                                                                        //ldloc.1
	IL_00f0:                                                                        //ldstr				L"\x321D\x001F"
	IL_00f5:                                                                        //ldloc				V_6
	IL_00f9:            Temp_11=a(L"\x321D\x001F",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fe:            V_1->Write(Temp_11);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0103:                                                                        //ldc.i4				0x2
	IL_0108:            V_5=2;                                                      //stloc				V_5
	IL_010c:            /*goto IL_0050;*/goto IL_0111;                              //br				IL_0050
	IL_0111:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_0113:                                                                        //ldc.i4.5
	IL_0114:            Temp_12=gcnew array<System::String^>(5);                    //newarr				System::String
	IL_0119:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_011b:                                                                        //ldloc.s				V_4
	IL_011d:                                                                        //ldc.i4.0
	IL_011e:                                                                        //ldarg.0
	IL_011f:            Temp_13=this->Name;                                         //call				System::String^ Root::T_x165::get_Name()
	IL_0124:            V_4[0]=Temp_13;                                             //stelem.ref
	IL_0125:                                                                        //ldloc.s				V_4
	IL_0127:                                                                        //ldc.i4.1
	IL_0128:                                                                        //ldstr				L"\x451D"
	IL_012d:                                                                        //ldloc				V_6
	IL_0131:            Temp_14=a(L"\x451D",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0136:            V_4[1]=Temp_14;                                             //stelem.ref
	IL_0137:                                                                        //ldloc.s				V_4
	IL_0139:                                                                        //ldc.i4.2
	IL_013a:                                                                        //ldloc.1
	IL_013b:            Temp_15=V_1->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0140:            V_4[2]=Temp_15;                                             //stelem.ref
	IL_0141:                                                                        //ldloc.s				V_4
	IL_0143:                                                                        //ldc.i4.3
	IL_0144:                                                                        //ldstr				L"\x431D\x001F\x1821\x0423"
	IL_0149:                                                                        //ldloc				V_6
	IL_014d:            Temp_16=a(L"\x431D\x001F\x1821\x0423",V_6);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0152:            V_4[3]=Temp_16;                                             //stelem.ref
	IL_0153:                                                                        //ldloc.s				V_4
	IL_0155:                                                                        //ldc.i4.4
	IL_0156:                                                                        //ldarg.0
	IL_0157:            Temp_17=this->PropertyType;                                 //call				Reflector::CodeModel::IType^ Root::T_x165::get_PropertyType()
	IL_015c:            Temp_18=Temp_17->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_0161:            V_4[4]=Temp_18;                                             //stelem.ref
	IL_0162:                                                                        //ldloc.s				V_4
	IL_0164:            Temp_19=System::String::Concat(V_4);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0169:            V_3=Temp_19;                                                //stloc.3
	IL_016a:                                                                        //ldc.i4				0x5
	IL_016f:            V_5=5;                                                      //stloc				V_5
	IL_0173:            /*goto IL_0050;*/goto IL_0178;                              //br				IL_0050
	IL_0178:            goto IL_0209;                                               //leave				IL_0209
	                    ;}
	                    finally{
	IL_017d:                                                                        //ldc.i4				0x2
	IL_0182:            V_5=2;                                                      //stloc				V_5
	IL_0186:            /*goto IL_018a;*/goto IL_0188;                              //br.s				IL_018a
	IL_0188:            goto IL_019f;                                               //br.s				IL_019f
	IL_018a:                                                                        //ldloc				V_5
	IL_018e:            switch(V_5){case 0:goto IL_01ad;case 1:goto IL_01c0;case 2:goto IL_0188;};//switch				(IL_01ad,IL_01c0,IL_0188)
	IL_019f:                                                                        //ldloc.1
	IL_01a0:            if(V_1==nullptr)goto IL_01c2;                               //brfalse.s				IL_01c2
	IL_01a2:                                                                        //ldc.i4				0x0
	IL_01a7:            V_5=0;                                                      //stloc				V_5
	IL_01ab:            /*goto IL_018a;*/goto IL_01ad;                              //br.s				IL_018a
	IL_01ad:            goto IL_01af;                                               //br.s				IL_01af
	IL_01af:                                                                        //ldloc.1
	IL_01b0:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01b5:                                                                        //ldc.i4				0x1
	IL_01ba:            V_5=1;                                                      //stloc				V_5
	IL_01be:            /*goto IL_018a;*/goto IL_01c0;                              //br.s				IL_018a
	IL_01c0:            goto IL_01c2;                                               //br.s				IL_01c2
	IL_01c2:                                                                        //endfinally
	                    ;}
	IL_01c3:            Temp_20=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01c8:            Temp_21=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_20));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_01cd:            V_1=Temp_21;                                                //stloc.1
	IL_01ce:                                                                        //ldc.i4				0x1
	IL_01d3:            V_5=1;                                                      //stloc				V_5
	IL_01d7:            /*goto IL_000b;*/goto IL_01dc;                              //br				IL_000b
	IL_01dc:            goto IL_01df;                                               //br.s				IL_01df
	IL_01de:                                                                        //break
	IL_01df:            /*goto IL_004e;*/goto IL_004901;                            //br				IL_004e
	IL_01e4:                                                                        //ldarg.0
	IL_01e5:            Temp_2=this->Name;                                          //call				System::String^ Root::T_x165::get_Name()
	IL_01ea:                                                                        //ldstr				L"\x3E1D\x1A1F\x0221"
	IL_01ef:                                                                        //ldloc				V_6
	IL_01f3:            Temp_3=a(L"\x3E1D\x1A1F\x0221",V_6);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f8:                                                                        //ldarg.0
	IL_01f9:            Temp_4=this->PropertyType;                                  //call				Reflector::CodeModel::IType^ Root::T_x165::get_PropertyType()
	IL_01fe:            Temp_5=Temp_4->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0203:            Temp_6=System::String::Concat(Temp_2,Temp_3,Temp_5);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0208:            return Temp_6;                                              //ret
	IL_0209:                                                                        //ldloc.3
	IL_020a:            return V_3;                                                 //ret

}
inline System::Boolean Root::T_x165::M_x8()
//Reflector::CodeModel::IPropertyDeclaration^::get_RuntimeSpecialName by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::UInt16 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::UInt16 Root::T_x165 F_x12
	IL_0006:                                                                        //conv.i4
	IL_0007:                                                                        //ldc.i4				0x400
	IL_000c:                                                                        //and
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:                                                                        //ceq
	IL_0010:                                                                        //ldc.i4.0
	IL_0011:                                                                        //ceq
	IL_0013:            return (((safe_cast<System::Int32>(Temp_0) & 1024) == 0) == false);//ret

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x165::M_x9()
//Reflector::CodeModel::IPropertyDeclaration^::get_GetMethod by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x4;                                          //ldfld				Reflector::CodeModel::IMethodReference^ Root::T_x165 F_x4
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x165::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IPropertyDeclaration^>(this);//ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x165::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	Root::T_x11^ Temp_4 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x165 F_x1
	IL_0009:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000e:            Temp_1->M_x12();                                            //callvirt				void Root::T_x2::M_x12()
	IL_0013:                                                                        //ldarg.0
	IL_0014:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_0019:            if(Temp_2!=nullptr)goto IL_0023;                            //brtrue.s				IL_0023
	IL_001b:            goto IL_001d;                                               //br.s				IL_001d
	IL_001d:            Temp_5=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_0022:            return Temp_5;                                              //ret
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_3=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x165 F_x2
	IL_0029:            Temp_4=gcnew Root::T_x11(Temp_3);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_002e:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_4);//ret

}
inline Reflector::CodeModel::IType^ Root::T_x165::DeclaringType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x165 F_x1
	IL_0006:            return safe_cast<Reflector::CodeModel::IType^>(Temp_0);     //ret

}
inline void Root::T_x165::DeclaringType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x165::Documentation::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x165 F_x1
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=Temp_1->M_x12(safe_cast<System::Object^>(this));     //callvirt				System::String^ Root::T_x2::M_x12(System::Object^)
	IL_0011:            return Temp_2;                                              //ret

}
inline void Root::T_x165::Documentation::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x165::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x174^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x174^ Root::T_x165 F_x1
	IL_0006:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x2^ Root::T_x174::M_x4()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_2=this->F_x13;                                         //ldfld				System::Int32 Root::T_x165 F_x13
	IL_0011:            Temp_3=Temp_1->M_x17(Temp_2);                               //callvirt				System::String^ Root::T_x2::M_x17(System::Int32)
	IL_0016:            return Temp_3;                                              //ret

}
inline void Root::T_x165::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x165::Parameters::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	Root::T_x165::T_x1^ Temp_2 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x165::T_x1::M_x1();                          //call				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x165::T_x1::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165 F_x5
	IL_0016:            Temp_2=gcnew Root::T_x165::T_x1(Temp_1);                    //newobj				void Root::T_x165::T_x1::.ctor(array<Reflector::CodeModel::IParameterDeclaration^>^)
	IL_001b:            return safe_cast<Reflector::CodeModel::IParameterDeclarationCollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::IType^ Root::T_x165::PropertyType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Reflector::CodeModel::IType^ Root::T_x165 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x165::PropertyType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline static Root::T_x165::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x165::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            Temp_0=gcnew Root::T_x165::T_x1(safe_cast<array<Reflector::CodeModel::IParameterDeclaration^>^>(nullptr));//newobj				void Root::T_x165::T_x1::.ctor(array<Reflector::CodeModel::IParameterDeclaration^>^)
	IL_0006:            Root::T_x165::T_x1::F_x1=safe_cast<Reflector::CodeModel::IParameterDeclarationCollection^>(Temp_0);//stsfld				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x165::T_x1 F_x1
	IL_000b:            return;                                                     //ret

}
inline Root::T_x165::T_x1::T_x1(array<Reflector::CodeModel::IParameterDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x2=A_0;                                             //stfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x165::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:                                                                        //ldarg.2
	IL_0012:            Temp_1->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x165::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_0010;                            //brtrue.s				IL_0010
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            Temp_3=Root::T_x147::M_x1();                                //call				System::Collections::IEnumerator^ Root::T_x147::M_x1()
	IL_000f:            return Temp_3;                                              //ret
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0016:            Temp_2=Temp_1->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_001b:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x165::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x165::T_x1::F_x1;                            //ldsfld				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x165::T_x1 F_x1
	IL_0005:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x165::T_x1::M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.m1
	IL_000b:            return -1;                                                  //ret
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //ldc.i4.2
	IL_0010:                                                                        //sub
	IL_0011:                                                                        //blt				IL_000d
	IL_0016:                                                                        //pop
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0025:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_0026:                                                                        //conv.i4
	IL_0027:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_002c:            return Temp_4;                                              //ret

}
inline void Root::T_x165::T_x1::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x165::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x165::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1)
//Reflector::CodeModel::IParameterDeclarationCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x165::T_x1::M_x12(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x165::T_x1::M_x13(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x165::T_x1::M_x2()
//Reflector::CodeModel::IParameterDeclarationCollection^::Clear by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x2=safe_cast<array<Reflector::CodeModel::IParameterDeclaration^>^>(nullptr);//stfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::Boolean Root::T_x165::T_x1::M_x2(Reflector::CodeModel::IParameterDeclaration^ A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000f;                            //brtrue.s				IL_000f
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldc.i4.0
	IL_000e:            return false;                                               //ret
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_001d:            Temp_3=Temp_2->Length;                                      //ldlen
	IL_001e:                                                                        //conv.i4
	IL_001f:            Temp_4=System::Array::IndexOf(safe_cast<System::Array^>(Temp_1),safe_cast<System::Object^>(A_0),safe_cast<System::Int32>(0),Temp_3);//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^,System::Int32,System::Int32)
	IL_0024:                                                                        //ldc.i4.m1
	IL_0025:                                                                        //ceq
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ceq
	IL_002a:            return ((Temp_4 == -1) == false);                           //ret

}
inline void Root::T_x165::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IParameterDeclarationCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x165::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1)
//Reflector::CodeModel::IParameterDeclarationCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x165::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:            if(Temp_0!=nullptr)goto IL_000c;                            //brtrue.s				IL_000c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldc.i4.0
	IL_000b:            return 0;                                                   //ret
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0012:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0013:                                                                        //conv.i4
	IL_0014:            return Temp_2;                                              //ret

}
inline System::Boolean Root::T_x165::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline System::Object^ Root::T_x165::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				array<Reflector::CodeModel::IParameterDeclaration^>^ Root::T_x165::T_x1 F_x2
	IL_0010:            Temp_2=Temp_1->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
