#include "global_xref.h"

inline Root::T_x182::T_x182()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x129();*/                                         //call				void Root::T_x129::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IType^ Root::T_x182::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::IType^ Root::T_x182 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::PointerType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IPointerType^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0038;case 1:goto IL_000b;case 2:goto IL_006a;};//switch				(IL_0038,IL_000b,IL_006a)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_4=this->M_x1();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x1()
	IL_002b:            if(Temp_4==nullptr)goto IL_006c;                            //brfalse.s				IL_006c
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_1=0;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:            Temp_0=gcnew Reflector::CodeModel::Memory::PointerType();   //newobj				void Reflector::CodeModel::Memory::PointerType::.ctor()
	IL_003f:            V_0=safe_cast<Reflector::CodeModel::IPointerType^>(Temp_0); //stloc.0
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->M_x1();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x1()
	IL_0047:            V_0->ElementType=Temp_1;                                    //callvirt				void Reflector::CodeModel::IPointerType::set_ElementType(Reflector::CodeModel::IType^)
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldarg.1
	IL_004f:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressDereferenceExpression::get_Expression()
	IL_0054:                                                                        //ldloc.0
	IL_0055:            Temp_3=this->M_x2(Temp_2,safe_cast<Reflector::CodeModel::IType^>(V_0));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_005a:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::IAddressDereferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_1=2;                                                      //stloc				V_1
	IL_0068:            /*goto IL_000d;*/goto IL_006a;                              //br.s				IL_000d
	IL_006a:            goto IL_006c;                                               //br.s				IL_006c
	IL_006c:                                                                        //ldarg.1
	IL_006d:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_7 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_10 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_003b;                                               //br.s				IL_003b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0066;case 1:goto IL_00e3;case 2:goto IL_0166;case 3:goto IL_0092;case 4:goto IL_012e;case 5:goto IL_00c7;case 6:goto IL_0076;case 7:goto IL_013e;case 8:goto IL_004d;case 9:goto IL_0106;case 10:goto IL_0154;case 11:goto IL_011d;};//switch				(IL_0066,IL_00e3,IL_0166,IL_0092,IL_012e,IL_00c7,IL_0076,IL_013e,IL_004d,IL_0106,IL_0154,IL_011d)
	IL_003b:                                                                        //ldarg.1
	IL_003c:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayCreateExpression::get_Type()
	IL_0041:            V_0=Temp_0;                                                 //stloc.0
	IL_0042:                                                                        //ldc.i4				0x8
	IL_0047:            V_3=8;                                                      //stloc				V_3
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:                                                                        //ldarg.0
	IL_004e:            Temp_9=this->M_x2();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x2()
	IL_0053:            if(Temp_9!=nullptr)goto IL_0156;                            //brtrue				IL_0156
	IL_0058:            goto IL_005b;                                               //br.s				IL_005b
	IL_005a:                                                                        //break
	IL_005b:                                                                        //ldc.i4				0x0
	IL_0060:            V_3=0;                                                      //stloc				V_3
	IL_0064:            /*goto IL_0002;*/goto IL_0066;                              //br.s				IL_0002
	IL_0066:            goto IL_0108;                                               //br				IL_0108
	IL_006b:                                                                        //ldc.i4				0x6
	IL_0070:            V_3=6;                                                      //stloc				V_3
	IL_0074:            /*goto IL_0002;*/goto IL_0076;                              //br.s				IL_0002
	IL_0076:                                                                        //ldloc.2
	IL_0077:                                                                        //ldarg.1
	IL_0078:            Temp_2=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_007d:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0082:            if(V_2<Temp_3)goto IL_0097;                                 //blt.s				IL_0097
	IL_0084:                                                                        //ldc.i4				0x3
	IL_0089:            V_3=3;                                                      //stloc				V_3
	IL_008d:            /*goto IL_0002;*/goto IL_0092;                              //br				IL_0002
	IL_0092:            goto IL_0130;                                               //br				IL_0130
	IL_0097:                                                                        //ldarg.1
	IL_0098:            Temp_4=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_009d:                                                                        //ldloc.2
	IL_009e:                                                                        //ldarg.0
	IL_009f:                                                                        //ldarg.1
	IL_00a0:            Temp_5=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_00a5:                                                                        //ldloc.2
	IL_00a6:            Temp_6=Temp_5[V_2];                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_00ab:            Temp_7=this->M_x1(Temp_6);                                  //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IExpression^)
	IL_00b0:            Temp_4[V_2]=Temp_7;                                         //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_00b5:                                                                        //ldloc.2
	IL_00b6:                                                                        //ldc.i4.1
	IL_00b7:                                                                        //add
	IL_00b8:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00b9:                                                                        //ldc.i4				0x5
	IL_00be:            V_3=5;                                                      //stloc				V_3
	IL_00c2:            /*goto IL_0002;*/goto IL_00c7;                              //br				IL_0002
	IL_00c7:            goto IL_006b;                                               //br.s				IL_006b
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:                                                                        //ldloc.1
	IL_00cb:            Temp_1=V_1->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00d0:            this->M_x12(safe_cast<Reflector::CodeModel::IType^>(Temp_1));//call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_00d5:                                                                        //ldc.i4				0x1
	IL_00da:            V_3=1;                                                      //stloc				V_3
	IL_00de:            /*goto IL_0002;*/goto IL_00e3;                              //br				IL_0002
	IL_00e3:            goto IL_0156;                                               //br.s				IL_0156
	IL_00e5:                                                                        //ldarg.1
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:                                                                        //ldarg.1
	IL_00e8:            Temp_10=A_0->Initializer;                                   //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayCreateExpression::get_Initializer()
	IL_00ed:                                                                        //ldloc.0
	IL_00ee:            Temp_11=this->M_x2(Temp_10,V_0);                            //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_00f3:            A_0->Initializer=Temp_11;                                   //callvirt				void Reflector::CodeModel::IArrayCreateExpression::set_Initializer(Reflector::CodeModel::IExpression^)
	IL_00f8:                                                                        //ldc.i4				0x9
	IL_00fd:            V_3=9;                                                      //stloc				V_3
	IL_0101:            /*goto IL_0002;*/goto IL_0106;                              //br				IL_0002
	IL_0106:            goto IL_016b;                                               //br.s				IL_016b
	IL_0108:                                                                        //ldloc.0
	IL_0109:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_010e:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(V_0);//stloc.1
	IL_010f:                                                                        //ldc.i4				0xb
	IL_0114:            V_3=11;                                                     //stloc				V_3
	IL_0118:            /*goto IL_0002;*/goto IL_011d;                              //br				IL_0002
	IL_011d:                                                                        //ldloc.1
	IL_011e:            if(V_1==nullptr)goto IL_0156;                               //brfalse.s				IL_0156
	IL_0120:                                                                        //ldc.i4				0x4
	IL_0125:            V_3=4;                                                      //stloc				V_3
	IL_0129:            /*goto IL_0002;*/goto IL_012e;                              //br				IL_0002
	IL_012e:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_0130:                                                                        //ldc.i4				0x7
	IL_0135:            V_3=7;                                                      //stloc				V_3
	IL_0139:            /*goto IL_0002;*/goto IL_013e;                              //br				IL_0002
	IL_013e:                                                                        //ldarg.1
	IL_013f:            Temp_8=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayCreateExpression::get_Initializer()
	IL_0144:            if(Temp_8==nullptr)goto IL_016b;                            //brfalse.s				IL_016b
	IL_0146:                                                                        //ldc.i4				0xa
	IL_014b:            V_3=10;                                                     //stloc				V_3
	IL_014f:            /*goto IL_0002;*/goto IL_0154;                              //br				IL_0002
	IL_0154:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_0156:                                                                        //ldc.i4.0
	IL_0157:            V_2=0;                                                      //stloc.2
	IL_0158:                                                                        //ldc.i4				0x2
	IL_015d:            V_3=2;                                                      //stloc				V_3
	IL_0161:            /*goto IL_0002;*/goto IL_0166;                              //br				IL_0002
	IL_0166:            goto IL_006b;                                               //br				IL_006b
	IL_016b:                                                                        //ldarg.1
	IL_016c:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IExpressionCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_7 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_008b;case 1:goto IL_0035;case 2:goto IL_0028;case 3:goto IL_004e;};//switch				(IL_008b,IL_0035,IL_0028,IL_004e)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x2
	IL_0022:            V_1=2;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_1=1;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayIndexerExpression::get_Indices()
	IL_003c:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0041:            if(V_0<Temp_1)goto IL_0050;                                 //blt.s				IL_0050
	IL_0043:                                                                        //ldc.i4				0x3
	IL_0048:            V_1=3;                                                      //stloc				V_1
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_008d;                                               //br.s				IL_008d
	IL_0050:                                                                        //ldc.i4.5
	IL_0051:                                                                        //dup
	IL_0052:                                                                        //dup
	IL_0053:                                                                        //ldc.i4.3
	IL_0054:                                                                        //sub
	IL_0055:                                                                        //blt				IL_0051
	IL_005a:                                                                        //pop
	IL_005b:                                                                        //ldarg.1
	IL_005c:            Temp_2=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayIndexerExpression::get_Indices()
	IL_0061:                                                                        //ldloc.0
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldarg.1
	IL_0064:            Temp_3=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayIndexerExpression::get_Indices()
	IL_0069:                                                                        //ldloc.0
	IL_006a:            Temp_4=Temp_3[V_0];                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_006f:            Temp_5=this->M_x1(Temp_4);                                  //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IExpression^)
	IL_0074:            Temp_2[V_0]=Temp_5;                                         //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_0079:                                                                        //ldloc.0
	IL_007a:                                                                        //ldc.i4.1
	IL_007b:                                                                        //add
	IL_007c:            V_0=(V_0 + 1);                                              //stloc.0
	IL_007d:                                                                        //ldc.i4				0x0
	IL_0082:            V_1=0;                                                      //stloc				V_1
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_002a;                                               //br.s				IL_002a
	IL_008d:                                                                        //ldarg.1
	IL_008e:                                                                        //ldarg.0
	IL_008f:                                                                        //ldarg.1
	IL_0090:            Temp_6=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayIndexerExpression::get_Target()
	IL_0095:                                                                        //ldnull
	IL_0096:            Temp_7=this->M_x2(Temp_6,safe_cast<Reflector::CodeModel::IType^>(nullptr));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_009b:            A_0->Target=Temp_7;                                         //callvirt				void Reflector::CodeModel::IArrayIndexerExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_00a0:                                                                        //ldarg.1
	IL_00a1:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x182::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=Root::T_x129::M_x1(A_0);                             //call				Reflector::CodeModel::IAssembly^ Root::T_x129::M_x1(Reflector::CodeModel::IAssembly^)
	IL_0007:            A_0=Temp_0;                                                 //starg.s				A_0
	IL_0009:                                                                        //ldarg.1
	IL_000a:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IAssignExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Target()
	IL_0013:                                                                        //ldnull
	IL_0014:            Temp_1=this->M_x2(Temp_0,safe_cast<Reflector::CodeModel::IType^>(nullptr));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0019:            A_0->Target=Temp_1;                                         //callvirt				void Reflector::CodeModel::IAssignExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_001e:                                                                        //ldarg.1
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Expression()
	IL_0026:                                                                        //ldarg.1
	IL_0027:            Temp_3=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Target()
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_4=this->M_x12();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x182::M_x12()
	IL_0032:            Temp_5=Root::T_x183::M_x1(Temp_3,Temp_4);                   //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_0037:            Temp_6=this->M_x2(Temp_2,Temp_5);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_003c:            A_0->Expression=Temp_6;                                     //callvirt				void Reflector::CodeModel::IAssignExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0041:                                                                        //ldarg.1
	IL_0042:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::ICustomAttribute^ Root::T_x182::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_7 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	Reflector::CodeModel::IExpressionCollection^ Temp_12 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_13 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_14 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_15 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0036;                                               //br.s				IL_0036
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_00b6;case 1:goto IL_005b;case 2:goto IL_0121;case 3:goto IL_00e2;case 4:goto IL_00c6;case 5:goto IL_008a;case 6:goto IL_004a;case 7:goto IL_009a;};//switch				(IL_00b6,IL_005b,IL_0121,IL_00e2,IL_00c6,IL_008a,IL_004a,IL_009a)
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=A_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_003c:            V_0=Temp_0;                                                 //stloc.0
	IL_003d:                                                                        //ldc.i4.0
	IL_003e:            V_1=0;                                                      //stloc.1
	IL_003f:                                                                        //ldc.i4				0x6
	IL_0044:            V_2=6;                                                      //stloc				V_2
	IL_0048:            /*goto IL_0002;*/goto IL_004a;                              //br.s				IL_0002
	IL_004a:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_004c:                                                                        //ldloc.1
	IL_004d:                                                                        //ldc.i4.1
	IL_004e:                                                                        //add
	IL_004f:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0050:                                                                        //ldc.i4				0x1
	IL_0055:            V_2=1;                                                      //stloc				V_2
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_12=A_0->Arguments;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0063:                                                                        //ldloc.1
	IL_0064:                                                                        //ldarg.0
	IL_0065:                                                                        //ldarg.1
	IL_0066:            Temp_13=A_0->Arguments;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_006b:                                                                        //ldloc.1
	IL_006c:            Temp_14=Temp_13[V_1];                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_0071:                                                                        //ldnull
	IL_0072:            Temp_15=this->M_x2(Temp_14,safe_cast<Reflector::CodeModel::IType^>(nullptr));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0077:            Temp_12[V_1]=Temp_15;                                       //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_007c:                                                                        //ldc.i4				0x5
	IL_0081:            V_2=5;                                                      //stloc				V_2
	IL_0085:            /*goto IL_0002;*/goto IL_008a;                              //br				IL_0002
	IL_008a:            goto IL_004c;                                               //br.s				IL_004c
	IL_008c:                                                                        //ldc.i4				0x7
	IL_0091:            V_2=7;                                                      //stloc				V_2
	IL_0095:            /*goto IL_0002;*/goto IL_009a;                              //br				IL_0002
	IL_009a:                                                                        //ldloc.1
	IL_009b:                                                                        //ldloc.0
	IL_009c:            Temp_10=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_00a1:            Temp_11=safe_cast<System::Collections::ICollection^>(Temp_10)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00a6:            if(V_1>=Temp_11)goto IL_005d;                               //bge.s				IL_005d
	IL_00a8:                                                                        //ldc.i4				0x0
	IL_00ad:            V_2=0;                                                      //stloc				V_2
	IL_00b1:            /*goto IL_0002;*/goto IL_00b6;                              //br				IL_0002
	IL_00b6:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00b8:                                                                        //ldc.i4				0x4
	IL_00bd:            V_2=4;                                                      //stloc				V_2
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:                                                                        //ldloc.1
	IL_00c7:                                                                        //ldarg.1
	IL_00c8:            Temp_8=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_00cd:            Temp_9=safe_cast<System::Collections::ICollection^>(Temp_8)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00d2:            if(V_1<Temp_9)goto IL_008c;                                 //blt.s				IL_008c
	IL_00d4:                                                                        //ldc.i4				0x3
	IL_00d9:            V_2=3;                                                      //stloc				V_2
	IL_00dd:            /*goto IL_0002;*/goto IL_00e2;                              //br				IL_0002
	IL_00e2:            goto IL_0126;                                               //br.s				IL_0126
	IL_00e4:                                                                        //ldarg.1
	IL_00e5:            Temp_1=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_00ea:                                                                        //ldloc.1
	IL_00eb:                                                                        //ldarg.0
	IL_00ec:                                                                        //ldarg.1
	IL_00ed:            Temp_2=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_00f2:                                                                        //ldloc.1
	IL_00f3:            Temp_3=Temp_2[V_1];                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_00f8:                                                                        //ldloc.0
	IL_00f9:            Temp_4=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_00fe:                                                                        //ldloc.1
	IL_00ff:            Temp_5=Temp_4[V_1];                                         //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0104:            Temp_6=Temp_5->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0109:            Temp_7=this->M_x2(Temp_3,Temp_6);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_010e:            Temp_1[V_1]=Temp_7;                                         //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_0113:                                                                        //ldc.i4				0x2
	IL_0118:            V_2=2;                                                      //stloc				V_2
	IL_011c:            /*goto IL_0002;*/goto IL_0121;                              //br				IL_0002
	IL_0121:            goto IL_004c;                                               //br				IL_004c
	IL_0126:                                                                        //ldarg.1
	IL_0127:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x182::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x2()
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0011:            this->M_x12(Temp_1);                                        //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=Root::T_x129::M_x1(A_0);                             //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_001d:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldloc.0
	IL_0021:            this->M_x12(V_0);                                           //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0026:                                                                        //ldarg.1
	IL_0027:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldstr				L"\x4C1E\x5820\x5022\x5124\x4226\x4428"
	IL_0011:                                                                        //ldloc				V_0
	IL_0015:            Temp_0=a(L"\x4C1E\x5820\x5022\x5124\x4226\x4428",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001a:                                                                        //ldstr				L"\x561E\x4F20\x5722\x1624\x1526"
	IL_001f:                                                                        //ldloc				V_0
	IL_0023:            Temp_1=a(L"\x561E\x4F20\x5722\x1624\x1526",V_0);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0028:            Temp_2=this->M_x1(Temp_0,Temp_1);                           //call				Reflector::CodeModel::ITypeReference^ Root::T_x182::M_x1(System::String^,System::String^)
	IL_002d:            Temp_3=this->M_x2(A_0,safe_cast<Reflector::CodeModel::IType^>(Temp_2));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0032:            return Temp_3;                                              //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::BinaryOperator Temp_5 = (Reflector::CodeModel::BinaryOperator)0;
	//local variables.
	Reflector::CodeModel::IBinaryExpression^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003b;case 1:goto IL_002d;case 2:goto IL_008b;case 3:goto IL_0073;};//switch				(IL_003b,IL_002d,IL_008b,IL_0073)
	IL_001b:                                                                        //ldarg.1
	IL_001c:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_0021:            V_0=dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0);//stloc.0
	IL_0022:                                                                        //ldc.i4				0x1
	IL_0027:            V_1=1;                                                      //stloc				V_1
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:                                                                        //ldloc.0
	IL_002e:            if(V_0==nullptr)goto IL_008d;                               //brfalse.s				IL_008d
	IL_0030:                                                                        //ldc.i4				0x0
	IL_0035:            V_1=0;                                                      //stloc				V_1
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_003e;                                               //br.s				IL_003e
	IL_003d:                                                                        //break
	IL_003e:            goto IL_0068;                                               //br.s				IL_0068
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldloc.0
	IL_0043:            Temp_1=V_0->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_0048:                                                                        //ldarg.2
	IL_0049:            Temp_2=this->M_x1(Temp_1,A_1);                              //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_004e:            V_0->Left=Temp_2;                                           //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Left(Reflector::CodeModel::IExpression^)
	IL_0053:                                                                        //ldloc.0
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldloc.0
	IL_0056:            Temp_3=V_0->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_005b:                                                                        //ldarg.2
	IL_005c:            Temp_4=this->M_x1(Temp_3,A_1);                              //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0061:            V_0->Right=Temp_4;                                          //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Right(Reflector::CodeModel::IExpression^)
	IL_0066:                                                                        //ldloc.0
	IL_0067:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret
	IL_0068:                                                                        //ldc.i4				0x3
	IL_006d:            V_1=3;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0002;*/goto IL_0073;                              //br.s				IL_0002
	IL_0073:                                                                        //ldloc.0
	IL_0074:            Temp_5=V_0->Operator;                                       //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_0079:                                                                        //ldc.i4.s				14
	IL_007b:            if(safe_cast<System::Int32>(Temp_5)!=14)goto IL_008d;       //bne.un.s				IL_008d
	IL_007d:                                                                        //ldc.i4				0x2
	IL_0082:            V_1=2;                                                      //stloc				V_1
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_0040;                                               //br.s				IL_0040
	IL_008d:                                                                        //ldarg.0
	IL_008e:                                                                        //ldarg.1
	IL_008f:                                                                        //ldarg.2
	IL_0090:            Temp_0=this->M_x2(A_0,A_1);                                 //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0095:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x182::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x2()
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0011:            this->M_x12(Temp_1);                                        //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IMethodDeclaration^ Root::T_x182 F_x2
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_2=Root::T_x129::M_x1(A_0);                             //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0024:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldnull
	IL_0028:            this->F_x2=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(nullptr);//stfld				Reflector::CodeModel::IMethodDeclaration^ Root::T_x182 F_x2
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldloc.0
	IL_002f:            this->M_x12(V_0);                                           //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0034:                                                                        //ldarg.1
	IL_0035:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_9 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_10 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_11 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_12 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_13 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_14 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	//local variables.
	Reflector::CodeModel::IMethodReferenceExpression^ V_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_00c0;case 1:goto IL_0134;case 2:goto IL_0144;case 3:goto IL_004a;case 4:goto IL_005b;case 5:goto IL_0100;case 6:goto IL_0122;case 7:goto IL_007a;case 8:goto IL_016e;case 9:goto IL_00d7;};//switch				(IL_00c0,IL_0134,IL_0144,IL_004a,IL_005b,IL_0100,IL_0122,IL_007a,IL_016e,IL_00d7)
	IL_0033:                                                                        //ldarg.1
	IL_0034:            Temp_0=A_0->Method;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodInvokeExpression::get_Method()
	IL_0039:                                                                        //isinst				Reflector::CodeModel::IMethodReferenceExpression
	IL_003e:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReferenceExpression^>(Temp_0);//stloc.0
	IL_003f:                                                                        //ldc.i4				0x3
	IL_0044:            V_3=3;                                                      //stloc				V_3
	IL_0048:            /*goto IL_0002;*/goto IL_004a;                              //br.s				IL_0002
	IL_004a:                                                                        //ldloc.0
	IL_004b:            if(V_0==nullptr)goto IL_0102;                               //brfalse				IL_0102
	IL_0050:                                                                        //ldc.i4				0x4
	IL_0055:            V_3=4;                                                      //stloc				V_3
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_005d:                                                                        //ldloc.0
	IL_005e:                                                                        //ldarg.0
	IL_005f:                                                                        //ldloc.0
	IL_0060:            Temp_13=V_0->Target;                                        //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReferenceExpression::get_Target()
	IL_0065:            Temp_14=this->M_x8(Temp_13);                                //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_006a:            V_0->Target=Temp_14;                                        //callvirt				void Reflector::CodeModel::IMethodReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_006f:                                                                        //ldc.i4				0x7
	IL_0074:            V_3=7;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_0173;                                               //br				IL_0173
	IL_007f:                                                                        //ldarg.1
	IL_0080:            Temp_3=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_0085:                                                                        //ldloc.2
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //ldarg.1
	IL_0088:            Temp_4=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_008d:                                                                        //ldloc.2
	IL_008e:            Temp_5=Temp_4[V_2];                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_0093:                                                                        //ldloc.1
	IL_0094:            Temp_6=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_1)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0099:                                                                        //ldloc.2
	IL_009a:            Temp_7=Temp_6[V_2];                                         //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_009f:            Temp_8=Temp_7->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00a4:            Temp_9=this->M_x2(Temp_5,Temp_8);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_00a9:            Temp_3[V_2]=Temp_9;                                         //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_00ae:                                                                        //ldloc.2
	IL_00af:                                                                        //ldc.i4.1
	IL_00b0:                                                                        //add
	IL_00b1:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00b2:                                                                        //ldc.i4				0x0
	IL_00b7:            V_3=0;                                                      //stloc				V_3
	IL_00bb:            /*goto IL_0002;*/goto IL_00c0;                              //br				IL_0002
	IL_00c0:            goto IL_0136;                                               //br.s				IL_0136
	IL_00c2:                                                                        //ldloc.0
	IL_00c3:            Temp_12=V_0->Method;                                        //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceExpression::get_Method()
	IL_00c8:            V_1=Temp_12;                                                //stloc.1
	IL_00c9:                                                                        //ldc.i4				0x9
	IL_00ce:            V_3=9;                                                      //stloc				V_3
	IL_00d2:            /*goto IL_0002;*/goto IL_00d7;                              //br				IL_0002
	IL_00d7:                                                                        //ldarg.1
	IL_00d8:            Temp_15=A_0->Arguments;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_00dd:            Temp_16=safe_cast<System::Collections::ICollection^>(Temp_15)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00e2:                                                                        //ldloc.1
	IL_00e3:            Temp_17=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_1)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_00e8:            Temp_18=safe_cast<System::Collections::ICollection^>(Temp_17)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00ed:            if(Temp_16!=Temp_18)goto IL_005d;                           //bne.un				IL_005d
	IL_00f2:                                                                        //ldc.i4				0x5
	IL_00f7:            V_3=5;                                                      //stloc				V_3
	IL_00fb:            /*goto IL_0002;*/goto IL_0100;                              //br				IL_0002
	IL_0100:            goto IL_0124;                                               //br.s				IL_0124
	IL_0102:                                                                        //ldarg.1
	IL_0103:                                                                        //ldarg.0
	IL_0104:                                                                        //ldarg.1
	IL_0105:            Temp_10=A_0->Method;                                        //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodInvokeExpression::get_Method()
	IL_010a:            Temp_11=this->M_x8(Temp_10);                                //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_010f:            A_0->Method=Temp_11;                                        //callvirt				void Reflector::CodeModel::IMethodInvokeExpression::set_Method(Reflector::CodeModel::IExpression^)
	IL_0114:                                                                        //ldc.i4				0x6
	IL_0119:            V_3=6;                                                      //stloc				V_3
	IL_011d:            /*goto IL_0002;*/goto IL_0122;                              //br				IL_0002
	IL_0122:            goto IL_0173;                                               //br.s				IL_0173
	IL_0124:                                                                        //ldc.i4.0
	IL_0125:            V_2=0;                                                      //stloc.2
	IL_0126:                                                                        //ldc.i4				0x1
	IL_012b:            V_3=1;                                                      //stloc				V_3
	IL_012f:            /*goto IL_0002;*/goto IL_0134;                              //br				IL_0002
	IL_0134:            goto IL_0136;                                               //br.s				IL_0136
	IL_0136:                                                                        //ldc.i4				0x2
	IL_013b:            V_3=2;                                                      //stloc				V_3
	IL_013f:            /*goto IL_0002;*/goto IL_0144;                              //br				IL_0002
	IL_0144:                                                                        //ldc.i4.0
	IL_0145:                                                                        //dup
	IL_0146:                                                                        //dup
	IL_0147:                                                                        //ldc.i4.6
	IL_0148:                                                                        //add
	IL_0149:                                                                        //bgt				IL_0145
	IL_014e:                                                                        //pop
	IL_014f:                                                                        //ldloc.2
	IL_0150:                                                                        //ldarg.1
	IL_0151:            Temp_1=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_0156:            Temp_2=safe_cast<System::Collections::ICollection^>(Temp_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_015b:            if(V_2<Temp_2)goto IL_007f;                                 //blt				IL_007f
	IL_0160:                                                                        //ldc.i4				0x8
	IL_0165:            V_3=8;                                                      //stloc				V_3
	IL_0169:            /*goto IL_0002;*/goto IL_016e;                              //br				IL_0002
	IL_016e:            goto IL_005d;                                               //br				IL_005d
	IL_0173:                                                                        //ldarg.1
	IL_0174:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x182::M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReturnStatement::get_Expression()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x2;                                          //ldfld				Reflector::CodeModel::IMethodDeclaration^ Root::T_x182 F_x2
	IL_0011:            Temp_2=safe_cast<Reflector::CodeModel::IMethodSignature^>(Temp_1)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0016:            Temp_3=Temp_2->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_001b:            Temp_4=this->M_x2(Temp_0,Temp_3);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0020:            A_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::IMethodReturnStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0025:                                                                        //ldarg.1
	IL_0026:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x182::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModule^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=Root::T_x129::M_x1(A_0);                             //call				Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^)
	IL_0007:            A_0=Temp_0;                                                 //starg.s				A_0
	IL_0009:                                                                        //ldarg.1
	IL_000a:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMemberReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IMemberReference^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0053;case 1:goto IL_00cd;case 2:goto IL_00a5;case 3:goto IL_0094;case 4:goto IL_0078;case 5:goto IL_0045;};//switch				(IL_0053,IL_00cd,IL_00a5,IL_0094,IL_0078,IL_0045)
	IL_0023:                                                                        //ldc.i4.3
	IL_0024:                                                                        //dup
	IL_0025:                                                                        //dup
	IL_0026:                                                                        //ldc.i4.3
	IL_0027:                                                                        //sub
	IL_0028:                                                                        //blt				IL_0024
	IL_002d:                                                                        //pop
	IL_002e:                                                                        //ldarg.1
	IL_002f:            Temp_0=A_0->Member;                                         //callvirt				Reflector::CodeModel::IMemberReference^ Reflector::CodeModel::INamedArgumentExpression::get_Member()
	IL_0034:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0039:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(Temp_0);//stloc.0
	IL_003a:                                                                        //ldc.i4				0x5
	IL_003f:            V_2=5;                                                      //stloc				V_2
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldloc.0
	IL_0046:            if(V_0==nullptr)goto IL_007a;                               //brfalse.s				IL_007a
	IL_0048:                                                                        //ldc.i4				0x0
	IL_004d:            V_2=0;                                                      //stloc				V_2
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_0055:                                                                        //ldarg.1
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:            Temp_5=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INamedArgumentExpression::get_Value()
	IL_005d:                                                                        //ldloc.1
	IL_005e:            Temp_6=V_1->PropertyType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0063:            Temp_7=this->M_x2(Temp_5,Temp_6);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0068:            A_0->Value=Temp_7;                                          //callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Value(Reflector::CodeModel::IExpression^)
	IL_006d:                                                                        //ldc.i4				0x4
	IL_0072:            V_2=4;                                                      //stloc				V_2
	IL_0076:            /*goto IL_0002;*/goto IL_0078;                              //br.s				IL_0002
	IL_0078:            goto IL_00cf;                                               //br.s				IL_00cf
	IL_007a:                                                                        //ldarg.1
	IL_007b:            Temp_4=A_0->Member;                                         //callvirt				Reflector::CodeModel::IMemberReference^ Reflector::CodeModel::INamedArgumentExpression::get_Member()
	IL_0080:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_0085:            V_1=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(Temp_4);//stloc.1
	IL_0086:                                                                        //ldc.i4				0x3
	IL_008b:            V_2=3;                                                      //stloc				V_2
	IL_008f:            /*goto IL_0002;*/goto IL_0094;                              //br				IL_0002
	IL_0094:                                                                        //ldloc.1
	IL_0095:            if(V_1==nullptr)goto IL_00cf;                               //brfalse.s				IL_00cf
	IL_0097:                                                                        //ldc.i4				0x2
	IL_009c:            V_2=2;                                                      //stloc				V_2
	IL_00a0:            /*goto IL_0002;*/goto IL_00a5;                              //br				IL_0002
	IL_00a5:            goto IL_0055;                                               //br.s				IL_0055
	IL_00a7:                                                                        //ldarg.1
	IL_00a8:                                                                        //ldarg.0
	IL_00a9:                                                                        //ldarg.1
	IL_00aa:            Temp_1=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INamedArgumentExpression::get_Value()
	IL_00af:                                                                        //ldloc.0
	IL_00b0:            Temp_2=V_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_00b5:            Temp_3=this->M_x2(Temp_1,Temp_2);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_00ba:            A_0->Value=Temp_3;                                          //callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Value(Reflector::CodeModel::IExpression^)
	IL_00bf:                                                                        //ldc.i4				0x1
	IL_00c4:            V_2=1;                                                      //stloc				V_2
	IL_00c8:            /*goto IL_0002;*/goto IL_00cd;                              //br				IL_0002
	IL_00cd:            goto IL_007a;                                               //br.s				IL_007a
	IL_00cf:                                                                        //ldarg.1
	IL_00d0:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::INullCoalescingExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Condition()
	IL_0013:            Temp_1=this->M_x2(Temp_0);                                  //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^)
	IL_0018:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::INullCoalescingExpression::set_Condition(Reflector::CodeModel::IExpression^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Expression()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::INullCoalescingExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_9 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	//local variables.
	Reflector::CodeModel::IMethodReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0068;case 1:goto IL_005b;case 2:goto IL_0035;case 3:goto IL_00c4;case 4:goto IL_0081;case 5:goto IL_00d6;};//switch				(IL_0068,IL_005b,IL_0035,IL_00c4,IL_0081,IL_00d6)
	IL_0023:                                                                        //ldarg.1
	IL_0024:            Temp_0=A_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IObjectCreateExpression::get_Constructor()
	IL_0029:            V_0=Temp_0;                                                 //stloc.0
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_2=2;                                                      //stloc				V_2
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldarg.1
	IL_0036:            Temp_10=A_0->Arguments;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_003b:            Temp_11=safe_cast<System::Collections::ICollection^>(Temp_10)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0040:                                                                        //ldloc.0
	IL_0041:            Temp_12=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0046:            Temp_13=safe_cast<System::Collections::ICollection^>(Temp_12)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_004b:            if(Temp_11!=Temp_13)goto IL_00d8;                           //bne.un				IL_00d8
	IL_0050:                                                                        //ldc.i4				0x1
	IL_0055:            V_2=1;                                                      //stloc				V_2
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_00c6;                                               //br.s				IL_00c6
	IL_005d:                                                                        //ldc.i4				0x0
	IL_0062:            V_2=0;                                                      //stloc				V_2
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldarg.1
	IL_006a:            Temp_1=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_006f:            Temp_2=safe_cast<System::Collections::ICollection^>(Temp_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0074:            if(V_1<Temp_2)goto IL_0083;                                 //blt.s				IL_0083
	IL_0076:                                                                        //ldc.i4				0x4
	IL_007b:            V_2=4;                                                      //stloc				V_2
	IL_007f:            /*goto IL_0002;*/goto IL_0081;                              //br.s				IL_0002
	IL_0081:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_0083:                                                                        //ldarg.1
	IL_0084:            Temp_3=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_0089:                                                                        //ldloc.1
	IL_008a:                                                                        //ldarg.0
	IL_008b:                                                                        //ldarg.1
	IL_008c:            Temp_4=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_0091:                                                                        //ldloc.1
	IL_0092:            Temp_5=Temp_4[V_1];                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_0097:                                                                        //ldloc.0
	IL_0098:            Temp_6=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_009d:                                                                        //ldloc.1
	IL_009e:            Temp_7=Temp_6[V_1];                                         //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_00a3:            Temp_8=Temp_7->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00a8:            Temp_9=this->M_x2(Temp_5,Temp_8);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_00ad:            Temp_3[V_1]=Temp_9;                                         //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_00b2:                                                                        //ldloc.1
	IL_00b3:                                                                        //ldc.i4.1
	IL_00b4:                                                                        //add
	IL_00b5:            V_1=(V_1 + 1);                                              //stloc.1
	IL_00b6:                                                                        //ldc.i4				0x3
	IL_00bb:            V_2=3;                                                      //stloc				V_2
	IL_00bf:            /*goto IL_0002;*/goto IL_00c4;                              //br				IL_0002
	IL_00c4:            goto IL_005d;                                               //br.s				IL_005d
	IL_00c6:                                                                        //ldc.i4.0
	IL_00c7:            V_1=0;                                                      //stloc.1
	IL_00c8:                                                                        //ldc.i4				0x5
	IL_00cd:            V_2=5;                                                      //stloc				V_2
	IL_00d1:            /*goto IL_0002;*/goto IL_00d6;                              //br				IL_0002
	IL_00d6:            goto IL_005d;                                               //br.s				IL_005d
	IL_00d8:            goto IL_00db;                                               //br.s				IL_00db
	IL_00da:                                                                        //break
	IL_00db:                                                                        //ldarg.1
	IL_00dc:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x182::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x2()
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0011:            this->M_x12(Temp_1);                                        //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=Root::T_x129::M_x1(A_0);                             //call				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_001d:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldloc.0
	IL_0021:            this->M_x12(V_0);                                           //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0026:                                                                        //ldarg.1
	IL_0027:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IPropertyReferenceExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IPropertyReference^ Temp_3 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_9 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_10 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::IType^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_00a0;case 1:goto IL_002b;case 2:goto IL_0051;case 3:goto IL_0038;};//switch				(IL_00a0,IL_002b,IL_0051,IL_0038)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            V_0=0;                                                      //stloc.0
	IL_0020:                                                                        //ldc.i4				0x1
	IL_0025:            V_2=1;                                                      //stloc				V_2
	IL_0029:            /*goto IL_0002;*/goto IL_002b;                              //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x3
	IL_0032:            V_2=3;                                                      //stloc				V_2
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IPropertyIndexerExpression::get_Indices()
	IL_003f:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0044:            if(V_0<Temp_1)goto IL_0053;                                 //blt.s				IL_0053
	IL_0046:                                                                        //ldc.i4				0x2
	IL_004b:            V_2=2;                                                      //stloc				V_2
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_0053:                                                                        //ldarg.1
	IL_0054:            Temp_2=A_0->Target;                                         //callvirt				Reflector::CodeModel::IPropertyReferenceExpression^ Reflector::CodeModel::IPropertyIndexerExpression::get_Target()
	IL_0059:            Temp_3=Temp_2->Property;                                    //callvirt				Reflector::CodeModel::IPropertyReference^ Reflector::CodeModel::IPropertyReferenceExpression::get_Property()
	IL_005e:            Temp_4=Temp_3->Parameters;                                  //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0063:                                                                        //ldloc.0
	IL_0064:            Temp_5=Temp_4[V_0];                                         //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0069:            Temp_6=Temp_5->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_006e:            V_1=Temp_6;                                                 //stloc.1
	IL_006f:                                                                        //ldarg.1
	IL_0070:            Temp_7=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IPropertyIndexerExpression::get_Indices()
	IL_0075:                                                                        //ldloc.0
	IL_0076:                                                                        //ldarg.0
	IL_0077:                                                                        //ldarg.1
	IL_0078:            Temp_8=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IPropertyIndexerExpression::get_Indices()
	IL_007d:                                                                        //ldloc.0
	IL_007e:            Temp_9=Temp_8[V_0];                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_0083:                                                                        //ldloc.1
	IL_0084:            Temp_10=this->M_x2(Temp_9,V_1);                             //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0089:            Temp_7[V_0]=Temp_10;                                        //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_008e:                                                                        //ldloc.0
	IL_008f:                                                                        //ldc.i4.1
	IL_0090:                                                                        //add
	IL_0091:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0092:                                                                        //ldc.i4				0x0
	IL_0097:            V_2=0;                                                      //stloc				V_2
	IL_009b:            /*goto IL_0002;*/goto IL_00a0;                              //br				IL_0002
	IL_00a0:            goto IL_002d;                                               //br.s				IL_002d
	IL_00a2:                                                                        //ldarg.1
	IL_00a3:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x182::M_x1(Reflector::CodeModel::ISwitchStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_6 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_8 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_9 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_10 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_11 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_12 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_15 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_16 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IConditionCase^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_00e2;case 1:goto IL_0059;case 2:goto IL_009d;case 3:goto IL_0125;case 4:goto IL_00f9;case 5:goto IL_00c0;case 6:goto IL_0109;};//switch				(IL_00e2,IL_0059,IL_009d,IL_0125,IL_00f9,IL_00c0,IL_0109)
	IL_0027:                                                                        //ldarg.1
	IL_0028:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ISwitchStatement::get_Expression()
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_1=this->M_x12();                                       //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x182::M_x12()
	IL_0033:            Temp_2=Root::T_x183::M_x1(Temp_0,Temp_1);                   //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_0038:            V_0=Temp_2;                                                 //stloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldarg.1
	IL_003c:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ISwitchStatement::get_Expression()
	IL_0041:                                                                        //ldnull
	IL_0042:            Temp_4=this->M_x2(Temp_3,safe_cast<Reflector::CodeModel::IType^>(nullptr));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0047:            A_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::ISwitchStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_004c:                                                                        //ldc.i4.0
	IL_004d:            V_1=0;                                                      //stloc.1
	IL_004e:                                                                        //ldc.i4				0x1
	IL_0053:            V_3=1;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_00fb;                                               //br				IL_00fb
	IL_005e:                                                                        //ldarg.1
	IL_005f:            Temp_5=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0064:                                                                        //ldloc.1
	IL_0065:            Temp_6=Temp_5[V_1];                                         //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_006a:                                                                        //ldarg.0
	IL_006b:                                                                        //ldarg.1
	IL_006c:            Temp_7=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0071:                                                                        //ldloc.1
	IL_0072:            Temp_8=Temp_7[V_1];                                         //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_0077:            Temp_9=Temp_8->Body;                                        //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_007c:            Temp_10=Root::T_x129::M_x1(Temp_9);                         //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0081:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0086:            Temp_6->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_10);//callvirt				void Reflector::CodeModel::ISwitchCase::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_008b:                                                                        //ldloc.1
	IL_008c:                                                                        //ldc.i4.1
	IL_008d:                                                                        //add
	IL_008e:            V_1=(V_1 + 1);                                              //stloc.1
	IL_008f:                                                                        //ldc.i4				0x2
	IL_0094:            V_3=2;                                                      //stloc				V_3
	IL_0098:            /*goto IL_0002;*/goto IL_009d;                              //br				IL_0002
	IL_009d:            goto IL_00fb;                                               //br.s				IL_00fb
	IL_009f:                                                                        //ldloc.2
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:                                                                        //ldloc.2
	IL_00a2:            Temp_11=V_2->Condition;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionCase::get_Condition()
	IL_00a7:                                                                        //ldloc.0
	IL_00a8:            Temp_12=this->M_x1(Temp_11,V_0);                            //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_00ad:            V_2->Condition=Temp_12;                                     //callvirt				void Reflector::CodeModel::IConditionCase::set_Condition(Reflector::CodeModel::IExpression^)
	IL_00b2:                                                                        //ldc.i4				0x5
	IL_00b7:            V_3=5;                                                      //stloc				V_3
	IL_00bb:            /*goto IL_0002;*/goto IL_00c0;                              //br				IL_0002
	IL_00c0:            goto IL_005e;                                               //br.s				IL_005e
	IL_00c2:                                                                        //ldarg.1
	IL_00c3:            Temp_15=A_0->Cases;                                         //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_00c8:                                                                        //ldloc.1
	IL_00c9:            Temp_16=Temp_15[V_1];                                       //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_00ce:                                                                        //isinst				Reflector::CodeModel::IConditionCase
	IL_00d3:            V_2=dynamic_cast<Reflector::CodeModel::IConditionCase^>(Temp_16);//stloc.2
	IL_00d4:                                                                        //ldc.i4				0x0
	IL_00d9:            V_3=0;                                                      //stloc				V_3
	IL_00dd:            /*goto IL_0002;*/goto IL_00e2;                              //br				IL_0002
	IL_00e2:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_00e4:                                                                        //break
	IL_00e5:                                                                        //ldloc.2
	IL_00e6:            if(V_2==nullptr)goto IL_005e;                               //brfalse				IL_005e
	IL_00eb:                                                                        //ldc.i4				0x4
	IL_00f0:            V_3=4;                                                      //stloc				V_3
	IL_00f4:            /*goto IL_0002;*/goto IL_00f9;                              //br				IL_0002
	IL_00f9:            goto IL_009f;                                               //br.s				IL_009f
	IL_00fb:                                                                        //ldc.i4				0x6
	IL_0100:            V_3=6;                                                      //stloc				V_3
	IL_0104:            /*goto IL_0002;*/goto IL_0109;                              //br				IL_0002
	IL_0109:                                                                        //ldloc.1
	IL_010a:                                                                        //ldarg.1
	IL_010b:            Temp_13=A_0->Cases;                                         //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0110:            Temp_14=safe_cast<System::Collections::ICollection^>(Temp_13)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0115:            if(V_1<Temp_14)goto IL_00c2;                                //blt.s				IL_00c2
	IL_0117:                                                                        //ldc.i4				0x3
	IL_011c:            V_3=3;                                                      //stloc				V_3
	IL_0120:            /*goto IL_0002;*/goto IL_0125;                              //br				IL_0002
	IL_0125:            goto IL_0127;                                               //br.s				IL_0127
	IL_0127:                                                                        //ldarg.1
	IL_0128:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x182::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x2()
	IL_0009:            V_0=Temp_0;                                                 //stloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            this->M_x12(safe_cast<Reflector::CodeModel::IType^>(A_0));  //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_1=Root::T_x129::M_x1(A_0);                             //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0018:            A_0=Temp_1;                                                 //starg.s				A_0
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldloc.0
	IL_001c:            this->M_x12(V_0);                                           //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_0021:                                                                        //ldarg.1
	IL_0022:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x1(Reflector::CodeModel::IUnaryExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::UnaryOperator Temp_0 = (Reflector::CodeModel::UnaryOperator)0;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::UnaryOperator V_0 = (Reflector::CodeModel::UnaryOperator)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0031;case 1:goto IL_00ae;case 2:goto IL_005e;case 3:goto IL_00be;case 4:goto IL_008c;};//switch				(IL_0031,IL_00ae,IL_005e,IL_00be,IL_008c)
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_0=A_0->Operator;                                       //callvirt				Reflector::CodeModel::UnaryOperator Reflector::CodeModel::IUnaryExpression::get_Operator()
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:                                                                        //ldc.i4				0x0
	IL_002b:            V_1=0;                                                      //stloc				V_1
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            switch(safe_cast<System::Int32>(V_0)){case 0:goto IL_0060;case 1:goto IL_008e;case 2:goto IL_0060;case 3:goto IL_0060;case 4:goto IL_0060;case 5:goto IL_0060;case 6:goto IL_0060;};//switch				(IL_0060,IL_008e,IL_0060,IL_0060,IL_0060,IL_0060,IL_0060)
	IL_0053:                                                                        //ldc.i4				0x2
	IL_0058:            V_1=2;                                                      //stloc				V_1
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:            goto IL_00b0;                                               //br.s				IL_00b0
	IL_0060:                                                                        //ldc.i4.2
	IL_0061:                                                                        //dup
	IL_0062:                                                                        //dup
	IL_0063:                                                                        //ldc.i4.7
	IL_0064:                                                                        //add
	IL_0065:                                                                        //bgt				IL_0061
	IL_006a:                                                                        //pop
	IL_006b:                                                                        //ldarg.1
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //ldarg.1
	IL_006e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUnaryExpression::get_Expression()
	IL_0073:                                                                        //ldnull
	IL_0074:            Temp_2=this->M_x2(Temp_1,safe_cast<Reflector::CodeModel::IType^>(nullptr));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0079:            A_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IUnaryExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_007e:                                                                        //ldc.i4				0x4
	IL_0083:            V_1=4;                                                      //stloc				V_1
	IL_0087:            /*goto IL_0002;*/goto IL_008c;                              //br				IL_0002
	IL_008c:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_008e:                                                                        //ldarg.1
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //ldarg.1
	IL_0091:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUnaryExpression::get_Expression()
	IL_0096:            Temp_4=this->M_x2(Temp_3);                                  //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^)
	IL_009b:            A_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::IUnaryExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_00a0:                                                                        //ldc.i4				0x1
	IL_00a5:            V_1=1;                                                      //stloc				V_1
	IL_00a9:            /*goto IL_0002;*/goto IL_00ae;                              //br				IL_0002
	IL_00ae:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_00b0:                                                                        //ldc.i4				0x3
	IL_00b5:            V_1=3;                                                      //stloc				V_1
	IL_00b9:            /*goto IL_0002;*/goto IL_00be;                              //br				IL_0002
	IL_00be:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_00c0:                                                                        //ldarg.1
	IL_00c1:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x182::M_x1(System::String^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x2()
	IL_0006:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_000b:            V_0=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_0);//stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:                                                                        //ldarg.2
	IL_000f:            Temp_1=Root::T_x183::M_x1(V_0,A_0,A_1);                     //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0014:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x182::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_005e;case 1:goto IL_0077;case 2:goto IL_000b;case 3:goto IL_0039;};//switch				(IL_005e,IL_0077,IL_000b,IL_0039)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_3=this->M_x13();                                       //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x182::M_x13()
	IL_002c:            if(Temp_3==nullptr)goto IL_0079;                            //brfalse.s				IL_0079
	IL_002e:                                                                        //ldc.i4				0x3
	IL_0033:            V_1=3;                                                      //stloc				V_1
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_0042;                                               //br.s				IL_0042
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_0=V_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0041:            return Temp_0;                                              //ret
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_1=this->M_x13();                                       //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x182::M_x13()
	IL_0048:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_004d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0052:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2);//stloc.0
	IL_0053:                                                                        //ldc.i4				0x0
	IL_0058:            V_1=0;                                                      //stloc				V_1
	IL_005c:            /*goto IL_000d;*/goto IL_005e;                              //br.s				IL_000d
	IL_005e:                                                                        //ldloc.0
	IL_005f:            if(V_0==nullptr)goto IL_0079;                               //brfalse.s				IL_0079
	IL_0061:                                                                        //ldc.i4.0
	IL_0062:                                                                        //dup
	IL_0063:                                                                        //dup
	IL_0064:                                                                        //ldc.i4.2
	IL_0065:                                                                        //sub
	IL_0066:                                                                        //blt				IL_0062
	IL_006b:                                                                        //pop
	IL_006c:                                                                        //ldc.i4				0x1
	IL_0071:            V_1=1;                                                      //stloc				V_1
	IL_0075:            /*goto IL_000d;*/goto IL_0077;                              //br.s				IL_000d
	IL_0077:            goto IL_003b;                                               //br.s				IL_003b
	IL_0079:                                                                        //ldnull
	IL_007a:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x182::M_x12(Reflector::CodeModel::IFieldDeclaration^ A_0)
//Root::T_x129^::M_x1 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->M_x2();                                        //call				Reflector::CodeModel::IType^ Root::T_x182::M_x2()
	IL_0011:            V_0=Temp_0;                                                 //stloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0019:            this->M_x12(Temp_1);                                        //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=Root::T_x129::M_x1(A_0);                             //call				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_0025:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldloc.0
	IL_0029:            this->M_x12(V_0);                                           //call				void Root::T_x182::M_x12(Reflector::CodeModel::IType^)
	IL_002e:                                                                        //ldarg.1
	IL_002f:            return A_0;                                                 //ret

}
inline void Root::T_x182::M_x12(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IType^ Root::T_x182 F_x1
	IL_0007:            return;                                                     //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x182::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IMethodDeclaration^ Root::T_x182 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x13(Reflector::CodeModel::ICastExpression^ A_0)
//Root::T_x129^::M_x1 by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IExpression^ V_0 = nullptr;
	Reflector::CodeModel::ICastExpression^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_004a;case 1:goto IL_0069;case 2:goto IL_003c;};//switch				(IL_004a,IL_0069,IL_003c)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICastExpression::get_Expression()
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_1=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICastExpression::get_TargetType()
	IL_0024:            Temp_2=this->M_x2(Temp_0,Temp_1);                           //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0029:            V_0=Temp_2;                                                 //stloc.0
	IL_002a:                                                                        //ldloc.0
	IL_002b:                                                                        //isinst				Reflector::CodeModel::ICastExpression
	IL_0030:            V_1=dynamic_cast<Reflector::CodeModel::ICastExpression^>(V_0);//stloc.1
	IL_0031:                                                                        //ldc.i4				0x2
	IL_0036:            V_2=2;                                                      //stloc				V_2
	IL_003a:            /*goto IL_0002;*/goto IL_003c;                              //br.s				IL_0002
	IL_003c:                                                                        //ldloc.1
	IL_003d:            if(V_1!=nullptr)goto IL_006b;                               //brtrue.s				IL_006b
	IL_003f:                                                                        //ldc.i4				0x0
	IL_0044:            V_2=0;                                                      //stloc				V_2
	IL_0048:            /*goto IL_0002;*/goto IL_004a;                              //br.s				IL_0002
	IL_004a:            goto IL_004c;                                               //br.s				IL_004c
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //ldloc.0
	IL_004e:            A_0->Expression=V_0;                                        //callvirt				void Reflector::CodeModel::ICastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0053:                                                                        //ldc.i4.0
	IL_0054:                                                                        //dup
	IL_0055:                                                                        //dup
	IL_0056:                                                                        //ldc.i4.0
	IL_0057:                                                                        //add
	IL_0058:                                                                        //bgt				IL_0054
	IL_005d:                                                                        //pop
	IL_005e:                                                                        //ldc.i4				0x1
	IL_0063:            V_2=1;                                                      //stloc				V_2
	IL_0067:            /*goto IL_0002;*/goto IL_0069;                              //br.s				IL_0002
	IL_0069:            goto IL_006b;                                               //br.s				IL_006b
	IL_006b:                                                                        //ldarg.1
	IL_006c:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x182::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IType^ Root::T_x182 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldstr				L"\x731F\x5B21\x5723\x5225\x4D27\x4729"
	IL_0011:                                                                        //ldloc				V_0
	IL_0015:            Temp_0=a(L"\x731F\x5B21\x5723\x5225\x4D27\x4729",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001a:                                                                        //ldstr				L"\x621F\x4D21\x4B23\x4A25\x4D27\x4B29\x422B"
	IL_001f:                                                                        //ldloc				V_0
	IL_0023:            Temp_1=a(L"\x621F\x4D21\x4B23\x4A25\x4D27\x4B29\x422B",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0028:            Temp_2=this->M_x1(Temp_0,Temp_1);                           //call				Reflector::CodeModel::ITypeReference^ Root::T_x182::M_x1(System::String^,System::String^)
	IL_002d:            Temp_3=this->M_x2(A_0,safe_cast<Reflector::CodeModel::IType^>(Temp_2));//call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^,Reflector::CodeModel::IType^)
	IL_0032:            return Temp_3;                                              //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.4
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::IType^ Root::T_x182 F_x12
	IL_0011:            V_0=Temp_0;                                                 //stloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.2
	IL_0014:            this->F_x12=A_1;                                            //stfld				Reflector::CodeModel::IType^ Root::T_x182 F_x12
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.1
	IL_001b:            Temp_1=this->M_x8(A_0);                                     //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0020:            A_0=Temp_1;                                                 //starg.s				A_0
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldloc.0
	IL_0024:            this->F_x12=V_0;                                            //stfld				Reflector::CodeModel::IType^ Root::T_x182 F_x12
	IL_0029:                                                                        //ldarg.1
	IL_002a:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x182::M_x8(Reflector::CodeModel::IConditionExpression^ A_0)
//Root::T_x129^::M_x1 by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Condition()
	IL_000b:            Temp_1=this->M_x2(Temp_0);                                  //call				Reflector::CodeModel::IExpression^ Root::T_x182::M_x2(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::IConditionExpression::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Then;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Then()
	IL_001d:            Temp_3=Root::T_x129::M_x8(Temp_2);                          //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            A_0->Then=Temp_3;                                           //callvirt				void Reflector::CodeModel::IConditionExpression::set_Then(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_4=A_0->Else;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Else()
	IL_002f:            Temp_5=Root::T_x129::M_x8(Temp_4);                          //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0034:            A_0->Else=Temp_5;                                           //callvirt				void Reflector::CodeModel::IConditionExpression::set_Else(Reflector::CodeModel::IExpression^)
	IL_0039:                                                                        //ldarg.1
	IL_003a:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
